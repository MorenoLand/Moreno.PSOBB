#include "protos.h"

void f_00440000(void)
{
    FN_ENTER(0x00440000);
    /* 00440000: je 0x44002c */ if (fZ) goto L_0044002c;
L_00440002:; BB(0x00440002);
    /* 00440002: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 00440008: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044000b: jne 0x440022 */ if (!fZ) goto L_00440022;
L_0044000d:; BB(0x0044000d);
    /* 0044000d: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00440010: je 0x440022 */ if (fZ) goto L_00440022;
L_00440012:; BB(0x00440012);
    /* 00440012: mov dword ptr [eax + 0x37c], 0xa */ W32((u32)(r_eax+0x37cu), 0xau);
    /* 0044001c: mov dword ptr [eax + 0x388], ecx */ W32((u32)(r_eax+0x388u), r_ecx);
L_00440022:; BB(0x00440022);
    /* 00440022: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00440026: mov dword ptr [eax + 0x3cc], edx */ W32((u32)(r_eax+0x3ccu), r_edx);
L_0044002c:; BB(0x0044002c);
    /* 0044002c: ret  */ FN_RET(0x00440000); r_esp += 4; return;
}

void f_0044000f(void)
{
    FN_ENTER(0x0044000f);
    /* 0044000f: or dh, byte ptr [eax + edx - 0x39] */ {  u32 a = (u8)(r_edx>>8); u32 b = R8((u32)(r_eax+r_edx+0xffffffc7u)); u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00440013: cmp byte ptr [ebx + eax], 0 */ {  u32 a = R8((u32)(r_ebx+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;   }
    /* 00440018: or al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0044001a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0044001c: mov dword ptr [eax + 0x388], ecx */ W32((u32)(r_eax+0x388u), r_ecx);
    /* 00440022: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00440026: mov dword ptr [eax + 0x3cc], edx */ W32((u32)(r_eax+0x3ccu), r_edx);
    /* 0044002c: ret  */ FN_RET(0x0044000f); r_esp += 4; return;
}

void f_00440020(void)
{
    FN_ENTER(0x00440020);
    /* 00440020: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00440022: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00440026: mov dword ptr [eax + 0x3cc], edx */ W32((u32)(r_eax+0x3ccu), r_edx);
    /* 0044002c: ret  */ FN_RET(0x00440020); r_esp += 4; return;
}

void f_00440030(void) /* sub_440030 */
{
    FN_ENTER(0x00440030);
    /* 00440030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00440031: mov ebp, esp */ r_ebp = r_esp;
    /* 00440033: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440035: push 0x8ce490 */ { u32 v = 0x8ce490u; r_esp -= 4; W32(r_esp, v); }
    /* 0044003a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00440040: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440041: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00440048: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044004b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044004e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00440051: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00440054: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00440057: push 0x3dc */ { u32 v = 0x3dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0044005c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00440063: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x440068u); f_005caba4();
    /* 00440068: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00440069: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044006c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044006e: je 0x4400a9 */ if (fZ) goto L_004400a9;
L_00440070:; BB(0x00440070);
    /* 00440070: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00440077: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044007e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440081: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00440085: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440088: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440089: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044008c: call 0x4400b0 */ r_esp -= 4; W32(r_esp, 0x440091u); f_004400b0();
    /* 00440091: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440094: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0044009b:; BB(0x0044009b);
    /* 0044009b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044009e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004400a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004400a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004400a8: ret  */ FN_RET(0x00440030); r_esp += 4; return;
L_004400a9:; BB(0x004400a9);
    /* 004400a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004400ab: jmp 0x44009b */ goto L_0044009b;
}

void f_00440041(void)
{
    FN_ENTER(0x00440041);
    /* 00440041: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00440048: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044004b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044004e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00440051: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00440054: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00440057: push 0x3dc */ { u32 v = 0x3dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0044005c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00440063: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x440068u); f_005caba4();
    /* 00440068: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00440069: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044006c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044006e: je 0x4400a9 */ if (fZ) goto L_004400a9;
L_00440070:; BB(0x00440070);
    /* 00440070: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00440077: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044007e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440081: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00440085: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440088: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440089: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044008c: call 0x4400b0 */ r_esp -= 4; W32(r_esp, 0x440091u); f_004400b0();
    /* 00440091: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440094: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0044009b:; BB(0x0044009b);
    /* 0044009b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044009e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004400a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004400a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004400a8: ret  */ FN_RET(0x00440041); r_esp += 4; return;
L_004400a9:; BB(0x004400a9);
    /* 004400a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004400ab: jmp 0x44009b */ goto L_0044009b;
}

void f_00440044(void)
{
    FN_ENTER(0x00440044);
    /* 00440044: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00440046: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00440048: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044004b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044004e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00440051: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00440054: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00440057: push 0x3dc */ { u32 v = 0x3dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0044005c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00440063: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x440068u); f_005caba4();
    /* 00440068: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00440069: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044006c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044006e: je 0x4400a9 */ if (fZ) goto L_004400a9;
L_00440070:; BB(0x00440070);
    /* 00440070: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00440077: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044007e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440081: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00440085: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440088: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440089: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044008c: call 0x4400b0 */ r_esp -= 4; W32(r_esp, 0x440091u); f_004400b0();
    /* 00440091: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440094: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0044009b:; BB(0x0044009b);
    /* 0044009b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044009e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004400a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004400a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004400a8: ret  */ FN_RET(0x00440044); r_esp += 4; return;
L_004400a9:; BB(0x004400a9);
    /* 004400a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004400ab: jmp 0x44009b */ goto L_0044009b;
}

void f_00440045(void)
{
    FN_ENTER(0x00440045);
    /* 00440045: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00440047: add byte ptr [ebx + 0x658918ec], al */ { u32 ad = (u32)(r_ebx+0x658918ecu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    UNSUP(0x0044004d, "falls out of decoded code");
}

void f_00440049(void)
{
    FN_ENTER(0x00440049);
    goto L_00440049;
L_0044003c:; BB(0x0044003c);
    /* 0044003c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0044003e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00440040: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440041: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00440048: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
L_00440049:; BB(0x00440049);
    /* 00440049: in al, dx */ UNSUP(0x00440049, "in al, dx");
    /* 0044004a: sbb byte ptr [ecx + 0x7d89f065], cl */ { u32 ad = (u32)(r_ecx+0x7d89f065u); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a - b - c) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 0044004b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044004e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00440050: in al, 0x89 */ UNSUP(0x00440050, "in al, 0x89");
    /* 00440051: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00440052: jne 0x44003c */ if (!fZ) goto L_0044003c;
L_00440054:; BB(0x00440054);
    /* 00440054: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00440057: push 0x3dc */ { u32 v = 0x3dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0044005c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00440063: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x440068u); f_005caba4();
    /* 00440068: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00440069: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044006c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044006e: je 0x4400a9 */ if (fZ) goto L_004400a9;
L_00440070:; BB(0x00440070);
    /* 00440070: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00440077: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044007e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440081: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00440085: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440088: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440089: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044008c: call 0x4400b0 */ r_esp -= 4; W32(r_esp, 0x440091u); f_004400b0();
    /* 00440091: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440094: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0044009b:; BB(0x0044009b);
    /* 0044009b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044009e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004400a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004400a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004400a8: ret  */ FN_RET(0x00440049); r_esp += 4; return;
L_004400a9:; BB(0x004400a9);
    /* 004400a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004400ab: jmp 0x44009b */ goto L_0044009b;
}

void f_0044004e(void)
{
    FN_ENTER(0x0044004e);
    /* 0044004e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00440051: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00440054: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00440057: push 0x3dc */ { u32 v = 0x3dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0044005c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00440063: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x440068u); f_005caba4();
    /* 00440068: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00440069: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044006c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044006e: je 0x4400a9 */ if (fZ) goto L_004400a9;
L_00440070:; BB(0x00440070);
    /* 00440070: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00440077: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044007e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440081: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00440085: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440088: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440089: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044008c: call 0x4400b0 */ r_esp -= 4; W32(r_esp, 0x440091u); f_004400b0();
    /* 00440091: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440094: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0044009b:; BB(0x0044009b);
    /* 0044009b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044009e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004400a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004400a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004400a8: ret  */ FN_RET(0x0044004e); r_esp += 4; return;
L_004400a9:; BB(0x004400a9);
    /* 004400a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004400ab: jmp 0x44009b */ goto L_0044009b;
}

void f_00440098(void)
{
    FN_ENTER(0x00440098);
    /* 00440098: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0044009a: add byte ptr [ebx - 0x769b0bb3], cl */ { u32 ad = (u32)(r_ebx+0x8964f44du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004400a0: or eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004400a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004400a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004400a8: ret  */ FN_RET(0x00440098); r_esp += 4; return;
}

void f_004400b0(void) /* sub_4400B0 */
{
    FN_ENTER(0x004400b0);
    /* 004400b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004400b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004400b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004400b5: push 0x8ce4ac */ { u32 v = 0x8ce4acu; r_esp -= 4; W32(r_esp, v); }
    /* 004400ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004400c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004400c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004400c8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004400cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004400ce: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 004400d1: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 004400d4: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 004400d7: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 004400da: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 004400de: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004400e1: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004400e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004400e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004400e8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004400eb: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004400ee: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x4400f3u); f_0052c3fc();
    /* 004400f3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004400fa: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004400fd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00440100: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00440103: mov esi, ebx */ r_esi = r_ebx;
    /* 00440105: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00440109: mov word ptr [ecx + 0x2c], dx */ W16((u32)(r_ecx+0x2cu), (u16)r_edx);
    /* 0044010d: mov dword ptr [ecx], 0xaf57a0 */ W32((u32)(r_ecx), 0xaf57a0u);
    /* 00440113: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
    /* 0044011d: movzx ebx, word ptr [esi + 0x28] */ r_ebx = (u32)R16((u32)(r_esi+0x28u));
    /* 00440121: mov word ptr [ecx + 0x28], bx */ W16((u32)(r_ecx+0x28u), (u16)r_ebx);
    /* 00440125: movzx edi, word ptr [esi + 0x2a] */ r_edi = (u32)R16((u32)(r_esi+0x2au));
    /* 00440129: mov word ptr [ecx + 0x2a], di */ W16((u32)(r_ecx+0x2au), (u16)r_edi);
    /* 0044012d: call 0x440458 */ r_esp -= 4; W32(r_esp, 0x440132u); f_00440458();
    /* 00440132: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00440135: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00440138: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044013b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044013e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00440141: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00440148: mov esp, ebp */ r_esp = r_ebp;
    /* 0044014a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044014b: ret 0xc */ FN_RET(0x004400b0); r_esp += 16; return;
}

void f_0044017c(void) /* sub_44017C */
{
    FN_ENTER(0x0044017c);
    /* 0044017c: mov eax, dword ptr [0xa447bc] */ r_eax = R32((u32)(0xa447bcu));
    /* 00440181: mov dword ptr [0xa44800], eax */ W32((u32)(0xa44800u), r_eax);
    /* 00440186: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00440188: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x44018du); f_0077a684();
    /* 0044018d: mov dword ptr [0xa447f8], eax */ W32((u32)(0xa447f8u), r_eax);
    /* 00440192: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00440194: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x440199u); f_0077a698();
    /* 00440199: mov dword ptr [0xa447f4], eax */ W32((u32)(0xa447f4u), r_eax);
    /* 0044019e: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 004401a0: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x4401a5u); f_0077a6b4();
    /* 004401a5: mov dword ptr [0xa447f0], eax */ W32((u32)(0xa447f0u), r_eax);
    /* 004401aa: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 004401ac: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x4401b1u); f_0077a6cc();
    /* 004401b1: mov dword ptr [0xa447ec], eax */ W32((u32)(0xa447ecu), r_eax);
    /* 004401b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004401b9: ret  */ FN_RET(0x0044017c); r_esp += 4; return;
}

void f_004401bc(void) /* sub_4401BC */
{
    FN_ENTER(0x004401bc);
    /* 004401bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004401bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004401be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004401bf: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004401c2: mov edx, ecx */ r_edx = r_ecx;
    /* 004401c4: mov ecx, dword ptr [edx + 0x3c4] */ r_ecx = R32((u32)(r_edx+0x3c4u));
    /* 004401ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004401cc: mov edi, eax */ r_edi = r_eax;
    /* 004401ce: mov esi, edx */ r_esi = r_edx;
L_004401d0:; BB(0x004401d0);
    /* 004401d0: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 004401d5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004401d7: sub ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004401d9: add ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004401dc: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004401de: mov eax, ebp */ r_eax = r_ebp;
    /* 004401e0: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004401e3: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004401e5: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004401e8: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004401ea: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004401ec: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004401ee: movsx eax, byte ptr [ebp*4 + 0xa4498c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp*4+0xa4498cu));
    /* 004401f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004401f8: je 0x440286 */ if (fZ) goto L_00440286;
L_004401fe:; BB(0x004401fe);
    /* 004401fe: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00440201: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440204: jl 0x4401d0 */ if ((fS!=fO)) goto L_004401d0;
L_00440206:; BB(0x00440206);
    /* 00440206: mov edx, esi */ r_edx = r_esi;
    /* 00440208: mov eax, edi */ r_eax = r_edi;
    /* 0044020a: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044020d: je 0x440269 */ if (fZ) goto L_00440269;
L_0044020f:; BB(0x0044020f);
    /* 0044020f: mov dword ptr [edx + 0x39c], 0xfffff8e4 */ W32((u32)(r_edx+0x39cu), 0xfffff8e4u);
    /* 00440219: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044021b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044021d: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00440220: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00440222: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00440224: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00440226: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00440228: add eax, 0x6e */ {  u32 a = r_eax; u32 b = 0x6eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044022b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0044022e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00440231: fmul dword ptr [0x8fe0f4] */ ST(0) = ST(0) * R_F32((u32)(0x8fe0f4u));
    /* 00440237: fdiv dword ptr [0x8fe0f0] */ ST(0) = ST(0) / R_F32((u32)(0x8fe0f0u));
    /* 0044023d: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00440241: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00440246: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044024b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0044024f: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00440253: fistp dword ptr [edx + 0x398] */ W32((u32)(r_edx+0x398u), (u32)fx_int32(ST(0))); FPOP();
    /* 00440259: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0044025d: mov eax, 1 */ r_eax = 0x1u;
    /* 00440262: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00440265: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00440266: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00440267: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00440268: ret  */ FN_RET(0x004401bc); r_esp += 4; return;
L_00440269:; BB(0x00440269);
    /* 00440269: mov dword ptr [0xa447e8], 1 */ W32((u32)(0xa447e8u), 0x1u);
    /* 00440273: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00440275: mov ecx, edx */ r_ecx = r_edx;
    /* 00440277: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x44027du); call_ind(t); }
    /* 0044027d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044027f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00440282: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00440283: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00440284: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00440285: ret  */ FN_RET(0x004401bc); r_esp += 4; return;
L_00440286:; BB(0x00440286);
    /* 00440286: mov eax, ebp */ r_eax = r_ebp;
    /* 00440288: mov edx, esi */ r_edx = r_esi;
    /* 0044028a: mov ecx, eax */ r_ecx = r_eax;
    /* 0044028c: mov dword ptr [edx + 0x3c4], eax */ W32((u32)(r_edx+0x3c4u), r_eax);
    /* 00440292: jmp 0x44020f */ goto L_0044020f;
}

void f_00440298(void) /* sub_440298 */
{
    FN_ENTER(0x00440298);
    /* 00440298: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00440299: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044029c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044029e: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 004402a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004402a6: je 0x44041a */ if (fZ) goto L_0044041a;
L_004402ac:; BB(0x004402ac);
    /* 004402ac: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004402af: je 0x4403b0 */ if (fZ) goto L_004403b0;
L_004402b5:; BB(0x004402b5);
    /* 004402b5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004402b8: je 0x440301 */ if (fZ) goto L_00440301;
L_004402ba:; BB(0x004402ba);
    /* 004402ba: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004402bd: jne 0x4402d9 */ if (!fZ) goto L_004402d9;
L_004402bf:; BB(0x004402bf);
    /* 004402bf: movsx eax, word ptr [ebx + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x344u));
    /* 004402c6: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004402c9: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 004402d0: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004402d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004402d5: jl 0x440343 */ if ((fS!=fO)) goto L_00440343;
L_004402d7:; BB(0x004402d7);
    /* 004402d7: jmp 0x440319 */ goto L_00440319;
L_004402d9:; BB(0x004402d9);
    /* 004402d9: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004402dc: jne 0x440319 */ if (!fZ) goto L_00440319;
L_004402de:; BB(0x004402de);
    /* 004402de: mov edx, dword ptr [ebx + 0x3d4] */ r_edx = R32((u32)(r_ebx+0x3d4u));
    /* 004402e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004402e6: je 0x440319 */ if (fZ) goto L_00440319;
L_004402e8:; BB(0x004402e8);
    /* 004402e8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004402ec: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004402f1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004402f5: mov dword ptr [ebx + 0x3d4], 0 */ W32((u32)(r_ebx+0x3d4u), 0x0u);
    /* 004402ff: jmp 0x440319 */ goto L_00440319;
L_00440301:; BB(0x00440301);
    /* 00440301: movsx eax, word ptr [ebx + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x344u));
    /* 00440308: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044030b: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 00440312: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00440315: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00440317: jle 0x440359 */ if ((fZ||fS!=fO)) goto L_00440359;
L_00440319:; BB(0x00440319);
    /* 00440319: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044031b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x440320u); f_007aa094();
    /* 00440320: mov eax, dword ptr [0xa447ac] */ r_eax = R32((u32)(0xa447acu));
    /* 00440325: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00440327: jl 0x44033e */ if ((fS!=fO)) goto L_0044033e;
L_00440329:; BB(0x00440329);
    /* 00440329: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044032b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044032d: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00440330: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00440335: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00440336: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x44033bu); f_00805608();
    /* 0044033b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044033e:; BB(0x0044033e);
    /* 0044033e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00440341: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00440342: ret  */ FN_RET(0x00440298); r_esp += 4; return;
L_00440343:; BB(0x00440343);
    /* 00440343: mov dword ptr [0xa447e8], 1 */ W32((u32)(0xa447e8u), 0x1u);
    /* 0044034d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0044034f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00440351: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x440357u); call_ind(t); }
    /* 00440357: jmp 0x440319 */ goto L_00440319;
L_00440359:; BB(0x00440359);
    /* 00440359: fld dword ptr [0x8fe0ec] */ FPUSH(R_F32((u32)(0x8fe0ecu)));
    /* 0044035f: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00440362: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00440365: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00440368: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0044036b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0044036f: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00440373: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00440377: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0044037b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0044037e: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00440380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440381: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x440386u); f_00509590();
    /* 00440386: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 0044038c: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0044038f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00440391: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440392: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440393: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00440394: push 0x358 */ { u32 v = 0x358u; r_esp -= 4; W32(r_esp, v); }
    /* 00440399: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44039eu); f_00814298();
    /* 0044039e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004403a1: mov dword ptr [ebx + 0x384], 3 */ W32((u32)(r_ebx+0x384u), 0x3u);
    /* 004403ab: jmp 0x440319 */ goto L_00440319;
L_004403b0:; BB(0x004403b0);
    /* 004403b0: push dword ptr [0xa447d8] */ { u32 v = R32((u32)(0xa447d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004403b6: mov eax, dword ptr [ebx + 0x3a0] */ r_eax = R32((u32)(r_ebx+0x3a0u));
    /* 004403bc: add eax, 0xffff8000 */ {  u32 a = r_eax; u32 b = 0xffff8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004403c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004403c2: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004403c5: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4403cau); f_007a8c74();
    /* 004403ca: mov edx, dword ptr [ebx + 0x3a0] */ r_edx = R32((u32)(r_ebx+0x3a0u));
    /* 004403d0: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 004403d3: add edx, 0xffff8000 */ {  u32 a = r_edx; u32 b = 0xffff8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004403d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004403da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004403db: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x4403e0u); f_007a9018();
    /* 004403e0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004403e3: cmp eax, dword ptr [0xa447d8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa447d8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004403e9: jg 0x440319 */ if ((!fZ&&fS==fO)) goto L_00440319;
L_004403ef:; BB(0x004403ef);
    /* 004403ef: mov eax, dword ptr [0xa447c0] */ r_eax = R32((u32)(0xa447c0u));
    /* 004403f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004403f6: je 0x4403ff */ if (fZ) goto L_004403ff;
L_004403f8:; BB(0x004403f8);
    /* 004403f8: mov eax, 5 */ r_eax = 0x5u;
    /* 004403fd: jmp 0x440404 */ goto L_00440404;
L_004403ff:; BB(0x004403ff);
    /* 004403ff: mov eax, 0x1e */ r_eax = 0x1eu;
L_00440404:; BB(0x00440404);
    /* 00440404: mov dword ptr [ebx + 0x384], 2 */ W32((u32)(r_ebx+0x384u), 0x2u);
    /* 0044040e: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 00440415: jmp 0x440319 */ goto L_00440319;
L_0044041a:; BB(0x0044041a);
    /* 0044041a: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00440420: mov dword ptr [ebx + 0x384], 1 */ W32((u32)(r_ebx+0x384u), 0x1u);
    /* 0044042a: mov edx, 5 */ r_edx = 0x5u;
    /* 0044042f: mov word ptr [ebx + 0x344], dx */ W16((u32)(r_ebx+0x344u), (u16)r_edx);
    /* 00440436: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044043b: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 00440441: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00440443: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0044044a: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 00440450: jmp 0x4403b0 */ goto L_004403b0;
}

void f_00440458(void) /* sub_440458 */
{
    FN_ENTER(0x00440458);
    /* 00440458: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00440459: mov esi, ecx */ r_esi = r_ecx;
    /* 0044045b: mov ecx, esi */ r_ecx = r_esi;
    /* 0044045d: mov eax, dword ptr [0x9a4e90] */ r_eax = R32((u32)(0x9a4e90u));
    /* 00440462: mov edx, dword ptr [0xa44800] */ r_edx = R32((u32)(0xa44800u));
    /* 00440468: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044046a: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0044046d: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00440473: mov dword ptr [esi + 0xd8], 0x9a4e40 */ W32((u32)(r_esi+0xd8u), 0x9a4e40u);
    /* 0044047d: mov dword ptr [esi + 0xdc], eax */ W32((u32)(r_esi+0xdcu), r_eax);
    /* 00440483: push 0x9a4eb0 */ { u32 v = 0x9a4eb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440488: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x44048du); f_007b9a88();
    /* 0044048d: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00440492: mov ecx, esi */ r_ecx = r_esi;
    /* 00440494: mov dword ptr [esi + 0x370], 0 */ W32((u32)(r_esi+0x370u), 0x0u);
    /* 0044049e: mov dword ptr [esi + 0x358], 0x9a4e94 */ W32((u32)(r_esi+0x358u), 0x9a4e94u);
    /* 004404a8: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004404ad: push dword ptr [0xa447f0] */ { u32 v = R32((u32)(0xa447f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004404b3: push dword ptr [0xa447f4] */ { u32 v = R32((u32)(0xa447f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004404b9: push dword ptr [0xa447f8] */ { u32 v = R32((u32)(0xa447f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004404bf: call 0x770da4 */ r_esp -= 4; W32(r_esp, 0x4404c4u); f_00770da4();
    /* 004404c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004404c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004404c7: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004404ce: mov ecx, esi */ r_ecx = r_esi;
    /* 004404d0: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x4404d5u); f_007aa4c8();
    /* 004404d5: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 004404d7: movzx eax, word ptr [esi + 0xb8] */ r_eax = (u32)R16((u32)(r_esi+0xb8u));
    /* 004404de: movzx edx, word ptr [esi + 0x2be] */ r_edx = (u32)R16((u32)(r_esi+0x2beu));
    /* 004404e5: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004404ec: movsx eax, word ptr [esi + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2bcu));
    /* 004404f3: mov word ptr [esi + 0x334], ax */ W16((u32)(r_esi+0x334u), (u16)r_eax);
    /* 004404fa: mov word ptr [esi + 0x336], dx */ W16((u32)(r_esi+0x336u), (u16)r_edx);
    /* 00440501: mov word ptr [esi + 0x346], ax */ W16((u32)(r_esi+0x346u), (u16)r_eax);
    /* 00440508: mov ecx, esi */ r_ecx = r_esi;
    /* 0044050a: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x44050fu); f_00787550();
    /* 0044050f: mov ecx, esi */ r_ecx = r_esi;
    /* 00440511: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x440516u); f_0078730c();
    /* 00440516: mov ecx, esi */ r_ecx = r_esi;
    /* 00440518: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x44051du); f_007b4f54();
    /* 0044051d: mov ecx, dword ptr [0xa44800] */ r_ecx = R32((u32)(0xa44800u));
    /* 00440523: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 00440529: mov edx, dword ptr [eax + 0x188] */ r_edx = R32((u32)(r_eax+0x188u));
    /* 0044052f: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 00440532: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 00440538: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 0044053e: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00440544: mov dword ptr [esi + 0x398], 0 */ W32((u32)(r_esi+0x398u), 0x0u);
    /* 0044054e: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 00440551: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 00440557: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044055c: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 00440562: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00440565: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044056a: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0044056d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0044056f: mov ecx, esi */ r_ecx = r_esi;
    /* 00440571: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x440577u); call_ind(t); }
    /* 00440577: mov eax, dword ptr [esi + 0x2e8] */ r_eax = R32((u32)(r_esi+0x2e8u));
    /* 0044057d: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00440580: mov dword ptr [esi + 0x3d0], 0 */ W32((u32)(r_esi+0x3d0u), 0x0u);
    /* 0044058a: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044058d: or edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00440593: mov dword ptr [esi + 0x2e8], eax */ W32((u32)(r_esi+0x2e8u), r_eax);
    /* 00440599: mov eax, dword ptr [0xa447c0] */ r_eax = R32((u32)(0xa447c0u));
    /* 0044059e: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004405a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004405a3: je 0x4405ac */ if (fZ) goto L_004405ac;
L_004405a5:; BB(0x004405a5);
    /* 004405a5: mov eax, 0xa00 */ r_eax = 0xa00u;
    /* 004405aa: jmp 0x4405b1 */ goto L_004405b1;
L_004405ac:; BB(0x004405ac);
    /* 004405ac: mov eax, 0x200 */ r_eax = 0x200u;
L_004405b1:; BB(0x004405b1);
    /* 004405b1: mov dword ptr [0xa447d8], eax */ W32((u32)(0xa447d8u), r_eax);
    /* 004405b6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004405b8: mov ecx, esi */ r_ecx = r_esi;
    /* 004405ba: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x4405c0u); call_ind(t); }
    /* 004405c0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004405c1: ret  */ FN_RET(0x00440458); r_esp += 4; return;
}

void f_004405c4(void) /* sub_4405C4 */
{
    FN_ENTER(0x004405c4);
    /* 004405c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004405c5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004405c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004405c9: call 0x4405e8 */ r_esp -= 4; W32(r_esp, 0x4405ceu); f_004405e8();
    /* 004405ce: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004405d2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004405d4: jne 0x4405da */ if (!fZ) goto L_004405da;
L_004405d6:; BB(0x004405d6);
    /* 004405d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004405d7: ret 4 */ FN_RET(0x004405c4); r_esp += 8; return;
L_004405da:; BB(0x004405da);
    /* 004405da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004405db: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4405e0u); f_005c2f74();
    /* 004405e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004405e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004405e2: ret 4 */ FN_RET(0x004405c4); r_esp += 8; return;
}

void f_004405e8(void) /* sub_4405E8 */
{
    FN_ENTER(0x004405e8);
    /* 004405e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004405e9: mov ebp, esp */ r_ebp = r_esp;
    /* 004405eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004405ed: push 0x8ce4c8 */ { u32 v = 0x8ce4c8u; r_esp -= 4; W32(r_esp, v); }
    /* 004405f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004405f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004405f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00440600: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00440603: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00440606: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00440609: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0044060c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0044060f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00440612: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440615: mov dword ptr [ecx], 0xaf5978 */ W32((u32)(r_ecx), 0xaf5978u);
    /* 0044061b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00440622: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x440627u); f_008171e8();
    /* 00440627: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044062a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00440631: mov esp, ebp */ r_esp = r_ebp;
    /* 00440633: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00440634: ret  */ FN_RET(0x004405e8); r_esp += 4; return;
}

void f_00440638(void) /* sub_440638 */
{
    FN_ENTER(0x00440638);
    /* 00440638: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00440639: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044063b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044063d: call 0x44065c */ r_esp -= 4; W32(r_esp, 0x440642u); f_0044065c();
    /* 00440642: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00440646: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00440648: jne 0x44064e */ if (!fZ) goto L_0044064e;
L_0044064a:; BB(0x0044064a);
    /* 0044064a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044064b: ret 4 */ FN_RET(0x00440638); r_esp += 8; return;
L_0044064e:; BB(0x0044064e);
    /* 0044064e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044064f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x440654u); f_005c2f74();
    /* 00440654: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00440655: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00440656: ret 4 */ FN_RET(0x00440638); r_esp += 8; return;
}

void f_0044065c(void) /* sub_44065C */
{
    FN_ENTER(0x0044065c);
    /* 0044065c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044065d: mov ebp, esp */ r_ebp = r_esp;
    /* 0044065f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440661: push 0x8ce4e4 */ { u32 v = 0x8ce4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00440666: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044066c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044066d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00440674: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00440677: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044067a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0044067d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00440680: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00440683: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00440686: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440689: mov dword ptr [ecx], 0xaf5988 */ W32((u32)(r_ecx), 0xaf5988u);
    /* 0044068f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00440696: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x44069bu); f_008171e8();
    /* 0044069b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044069e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004406a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004406a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004406a8: ret  */ FN_RET(0x0044065c); r_esp += 4; return;
}

void f_004406ac(void) /* sub_4406AC */
{
    FN_ENTER(0x004406ac);
    /* 004406ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004406ad: mov ebp, esp */ r_ebp = r_esp;
    /* 004406af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004406b1: push 0x8ce50c */ { u32 v = 0x8ce50cu; r_esp -= 4; W32(r_esp, v); }
    /* 004406b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004406bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004406bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004406c4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004406c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004406ca: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004406cd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004406d0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004406d3: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 004406d6: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 004406d9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004406dc: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004406df: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 004406e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004406e4: je 0x440848 */ if (fZ) goto L_00440848;
L_004406ea:; BB(0x004406ea);
    /* 004406ea: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004406ed: je 0x440726 */ if (fZ) goto L_00440726;
L_004406ef:; BB(0x004406ef);
    /* 004406ef: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004406f2: jne 0x440710 */ if (!fZ) goto L_00440710;
L_004406f4:; BB(0x004406f4);
    /* 004406f4: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x4406f9u); f_004d3250();
    /* 004406f9: call 0x6944b8 */ r_esp -= 4; W32(r_esp, 0x4406feu); f_006944b8();
    /* 004406fe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00440701: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00440705: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044070a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0044070e: jmp 0x44072a */ goto L_0044072a;
L_00440710:; BB(0x00440710);
    /* 00440710: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00440713: jne 0x44072a */ if (!fZ) goto L_0044072a;
L_00440715:; BB(0x00440715);
    /* 00440715: mov edx, ecx */ r_edx = r_ecx;
    /* 00440717: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0044071b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00440720: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00440724: jmp 0x44072a */ goto L_0044072a;
L_00440726:; BB(0x00440726);
    /* 00440726: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00440728: jle 0x440738 */ if ((fZ||fS!=fO)) goto L_00440738;
L_0044072a:; BB(0x0044072a);
    /* 0044072a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044072d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00440734: mov esp, ebp */ r_esp = r_ebp;
    /* 00440736: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00440737: ret  */ FN_RET(0x004406ac); r_esp += 4; return;
L_00440738:; BB(0x00440738);
    /* 00440738: mov eax, dword ptr [0xa44794] */ r_eax = R32((u32)(0xa44794u));
    /* 0044073d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044073f: je 0x44074c */ if (fZ) goto L_0044074c;
L_00440741:; BB(0x00440741);
    /* 00440741: mov eax, ecx */ r_eax = r_ecx;
    /* 00440743: mov dword ptr [eax + 0x20], 0xffffffff */ W32((u32)(r_eax+0x20u), 0xffffffffu);
    /* 0044074a: jmp 0x44072a */ goto L_0044072a;
L_0044074c:; BB(0x0044074c);
    /* 0044074c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044074e: call 0x43e954 */ r_esp -= 4; W32(r_esp, 0x440753u); f_0043e954();
    /* 00440753: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00440755: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x44075au); f_004d31f4();
    /* 0044075a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044075d: call 0x69448c */ r_esp -= 4; W32(r_esp, 0x440762u); f_0069448c();
    /* 00440762: push 0x8fe0ac */ { u32 v = 0x8fe0acu; r_esp -= 4; W32(r_esp, v); }
    /* 00440767: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x44076cu); f_00814afc();
    /* 0044076c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044076d: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x440772u); f_007a61a4();
    /* 00440772: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440775: je 0x440834 */ if (fZ) goto L_00440834;
L_0044077b:; BB(0x0044077b);
    /* 0044077b: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x440780u); f_006dc358();
    /* 00440780: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440783: je 0x440820 */ if (fZ) goto L_00440820;
L_00440789:; BB(0x00440789);
    /* 00440789: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0044078b: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x440790u); f_006bb254();
    /* 00440790: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00440791: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440793: je 0x4407a9 */ if (fZ) goto L_004407a9;
L_00440795:; BB(0x00440795);
    /* 00440795: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00440797: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440799: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044079f: call 0x810c7c */ r_esp -= 4; W32(r_esp, 0x4407a4u); f_00810c7c();
    /* 004407a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004407a7: jmp 0x4407ce */ goto L_004407ce;
L_004407a9:; BB(0x004407a9);
    /* 004407a9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004407ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004407ad: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004407b3: call 0x810c7c */ r_esp -= 4; W32(r_esp, 0x4407b8u); f_00810c7c();
    /* 004407b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004407ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004407bb: push -0x11 */ { u32 v = 0xffffffefu; r_esp -= 4; W32(r_esp, v); }
    /* 004407bd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004407bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004407c0: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004407c6: call 0x8116f4 */ r_esp -= 4; W32(r_esp, 0x4407cbu); f_008116f4();
    /* 004407cb: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004407ce:; BB(0x004407ce);
    /* 004407ce: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004407d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004407d2: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004407d8: call 0x810c7c */ r_esp -= 4; W32(r_esp, 0x4407ddu); f_00810c7c();
    /* 004407dd: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004407e4: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004407e6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4407ebu); f_005caba4();
    /* 004407eb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004407ee: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004407f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004407f3: je 0x440811 */ if (fZ) goto L_00440811;
L_004407f5:; BB(0x004407f5);
    /* 004407f5: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004407fc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00440803: mov ecx, eax */ r_ecx = r_eax;
    /* 00440805: call 0x440858 */ r_esp -= 4; W32(r_esp, 0x44080au); f_00440858();
    /* 0044080a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00440811:; BB(0x00440811);
    /* 00440811: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00440814: mov dword ptr [eax + 0x20], 2 */ W32((u32)(r_eax+0x20u), 0x2u);
    /* 0044081b: jmp 0x44072a */ goto L_0044072a;
L_00440820:; BB(0x00440820);
    /* 00440820: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00440822: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440824: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044082a: call 0x810c7c */ r_esp -= 4; W32(r_esp, 0x44082fu); f_00810c7c();
    /* 0044082f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00440832: jmp 0x4407ce */ goto L_004407ce;
L_00440834:; BB(0x00440834);
    /* 00440834: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00440836: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440838: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044083e: call 0x810c7c */ r_esp -= 4; W32(r_esp, 0x440843u); f_00810c7c();
    /* 00440843: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00440846: jmp 0x4407ce */ goto L_004407ce;
L_00440848:; BB(0x00440848);
    /* 00440848: mov eax, ecx */ r_eax = r_ecx;
    /* 0044084a: mov dword ptr [eax + 0x20], 1 */ W32((u32)(r_eax+0x20u), 0x1u);
    /* 00440851: jmp 0x44072a */ goto L_0044072a;
}

void f_00440858(void) /* sub_440858 */
{
    FN_ENTER(0x00440858);
    /* 00440858: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00440859: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044085b: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440861: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00440863: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x440868u); f_008193cc();
    /* 00440868: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 0044086c: mov dword ptr [ebx], 0xaf5988 */ W32((u32)(r_ebx), 0xaf5988u);
    /* 00440872: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00440878: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
    /* 0044087c: mov eax, ebx */ r_eax = r_ebx;
    /* 0044087e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044087f: ret  */ FN_RET(0x00440858); r_esp += 4; return;
}

void f_00440880(void) /* sub_440880 */
{
    FN_ENTER(0x00440880);
    /* 00440880: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00440881: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00440883: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440889: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044088b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x440890u); f_008193cc();
    /* 00440890: mov dword ptr [ebx], 0xaf5978 */ W32((u32)(r_ebx), 0xaf5978u);
    /* 00440896: mov edx, dword ptr [0x9a4ee0] */ r_edx = R32((u32)(0x9a4ee0u));
    /* 0044089c: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0044089f: mov eax, ebx */ r_eax = r_ebx;
    /* 004408a1: mov dword ptr [ebx + 0x20], 0 */ W32((u32)(r_ebx+0x20u), 0x0u);
    /* 004408a8: mov dword ptr [ebx + 0x1c], 3 */ W32((u32)(r_ebx+0x1cu), 0x3u);
    /* 004408af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004408b0: ret  */ FN_RET(0x00440880); r_esp += 4; return;
}

void f_004408b4(void) /* sub_4408B4 */
{
    FN_ENTER(0x004408b4);
    /* 004408b4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004408b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004408ba: je 0x44095e */ if (fZ) goto L_0044095e;
L_004408c0:; BB(0x004408c0);
    /* 004408c0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004408c3: je 0x44094a */ if (fZ) goto L_0044094a;
L_004408c9:; BB(0x004408c9);
    /* 004408c9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004408cc: je 0x440924 */ if (fZ) goto L_00440924;
L_004408ce:; BB(0x004408ce);
    /* 004408ce: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004408d1: je 0x4408ff */ if (fZ) goto L_004408ff;
L_004408d3:; BB(0x004408d3);
    /* 004408d3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004408d6: je 0x440911 */ if (fZ) goto L_00440911;
L_004408d8:; BB(0x004408d8);
    /* 004408d8: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004408db: jne 0x440923 */ if (!fZ) goto L_00440923;
L_004408dd:; BB(0x004408dd);
    /* 004408dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004408df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004408e1: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004408e7: call 0x810c7c */ r_esp -= 4; W32(r_esp, 0x4408ecu); f_00810c7c();
    /* 004408ec: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004408ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004408f0: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004408f6: call 0x810c7c */ r_esp -= 4; W32(r_esp, 0x4408fbu); f_00810c7c();
    /* 004408fb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004408fe: ret  */ FN_RET(0x004408b4); r_esp += 4; return;
L_004408ff:; BB(0x004408ff);
    /* 004408ff: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00440901: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440903: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440909: call 0x810c7c */ r_esp -= 4; W32(r_esp, 0x44090eu); f_00810c7c();
    /* 0044090e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00440911:; BB(0x00440911);
    /* 00440911: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00440913: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440915: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044091b: call 0x810c7c */ r_esp -= 4; W32(r_esp, 0x440920u); f_00810c7c();
    /* 00440920: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00440923:; BB(0x00440923);
    /* 00440923: ret  */ FN_RET(0x004408b4); r_esp += 4; return;
L_00440924:; BB(0x00440924);
    /* 00440924: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00440926: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440928: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044092e: call 0x810c7c */ r_esp -= 4; W32(r_esp, 0x440933u); f_00810c7c();
    /* 00440933: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00440935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440936: push -0x11 */ { u32 v = 0xffffffefu; r_esp -= 4; W32(r_esp, v); }
    /* 00440938: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044093a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044093b: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440941: call 0x8116f4 */ r_esp -= 4; W32(r_esp, 0x440946u); f_008116f4();
    /* 00440946: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00440949: ret  */ FN_RET(0x004408b4); r_esp += 4; return;
L_0044094a:; BB(0x0044094a);
    /* 0044094a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0044094c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044094e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440954: call 0x810c7c */ r_esp -= 4; W32(r_esp, 0x440959u); f_00810c7c();
    /* 00440959: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044095c: jmp 0x440924 */ goto L_00440924;
L_0044095e:; BB(0x0044095e);
    /* 0044095e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00440960: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440962: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440968: call 0x810c7c */ r_esp -= 4; W32(r_esp, 0x44096du); f_00810c7c();
    /* 0044096d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0044096f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440971: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440977: call 0x810c7c */ r_esp -= 4; W32(r_esp, 0x44097cu); f_00810c7c();
    /* 0044097c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044097f: ret  */ FN_RET(0x004408b4); r_esp += 4; return;
}

void f_00440960(void)
{
    FN_ENTER(0x00440960);
    /* 00440960: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440962: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440968: call 0x810c7c */ r_esp -= 4; W32(r_esp, 0x44096du); f_00810c7c();
    /* 0044096d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0044096f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440971: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440977: call 0x810c7c */ r_esp -= 4; W32(r_esp, 0x44097cu); f_00810c7c();
    /* 0044097c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044097f: ret  */ FN_RET(0x00440960); r_esp += 4; return;
}

void f_00440980(void) /* sub_440980 */
{
    FN_ENTER(0x00440980);
    /* 00440980: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00440981: mov esi, ecx */ r_esi = r_ecx;
    /* 00440983: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440989: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x44098eu); f_0068d5a8();
    /* 0044098e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044098f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00440991: je 0x4409b6 */ if (fZ) goto L_004409b6;
L_00440993:; BB(0x00440993);
    /* 00440993: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 00440996: fcomp dword ptr [0x8fe174] */ fx_compare(ST(0), R_F32((u32)(0x8fe174u))); FPOP();
    /* 0044099c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044099e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044099f: jb 0x4409b6 */ if (fC) goto L_004409b6;
L_004409a1:; BB(0x004409a1);
    /* 004409a1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004409a3: call 0x814c7c */ r_esp -= 4; W32(r_esp, 0x4409a8u); f_00814c7c();
    /* 004409a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004409a9: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 004409ad: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004409b2: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
L_004409b6:; BB(0x004409b6);
    /* 004409b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004409b7: ret  */ FN_RET(0x00440980); r_esp += 4; return;
}

void f_004409b8(void) /* sub_4409B8 */
{
    FN_ENTER(0x004409b8);
    /* 004409b8: mov dword ptr [0xa44808], 0x3f800000 */ W32((u32)(0xa44808u), 0x3f800000u);
    /* 004409c2: mov dword ptr [0xa4480c], 0x41000000 */ W32((u32)(0xa4480cu), 0x41000000u);
    /* 004409cc: mov dword ptr [0xa44810], 0x3fc00000 */ W32((u32)(0xa44810u), 0x3fc00000u);
    /* 004409d6: ret  */ FN_RET(0x004409b8); r_esp += 4; return;
}

void f_004409d8(void) /* sub_4409D8 */
{
    FN_ENTER(0x004409d8);
    /* 004409d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004409d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004409db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004409dd: call 0x4409fc */ r_esp -= 4; W32(r_esp, 0x4409e2u); f_004409fc();
    /* 004409e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004409e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004409e8: jne 0x4409ee */ if (!fZ) goto L_004409ee;
L_004409ea:; BB(0x004409ea);
    /* 004409ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004409eb: ret 4 */ FN_RET(0x004409d8); r_esp += 8; return;
L_004409ee:; BB(0x004409ee);
    /* 004409ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004409ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4409f4u); f_005c2f74();
    /* 004409f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004409f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004409f6: ret 4 */ FN_RET(0x004409d8); r_esp += 8; return;
}

void f_004409fc(void) /* sub_4409FC */
{
    FN_ENTER(0x004409fc);
    /* 004409fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004409fd: mov ebp, esp */ r_ebp = r_esp;
    /* 004409ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440a01: push 0x8ce528 */ { u32 v = 0x8ce528u; r_esp -= 4; W32(r_esp, v); }
    /* 00440a06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00440a0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440a0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00440a14: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00440a17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00440a1a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00440a1d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00440a20: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00440a23: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00440a26: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00440a2d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440a30: mov dword ptr [ecx], 0xaf5a60 */ W32((u32)(r_ecx), 0xaf5a60u);
    /* 00440a36: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x440a3bu); f_007b9c8c();
    /* 00440a3b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00440a42: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440a45: call 0x52bf84 */ r_esp -= 4; W32(r_esp, 0x440a4au); f_0052bf84();
    /* 00440a4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00440a4d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00440a54: mov esp, ebp */ r_esp = r_ebp;
    /* 00440a56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00440a57: ret  */ FN_RET(0x004409fc); r_esp += 4; return;
}

void f_00440a58(void) /* sub_440A58 */
{
    FN_ENTER(0x00440a58);
    /* 00440a58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00440a59: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00440a5a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00440a5c: mov ecx, dword ptr [0xa44840] */ r_ecx = R32((u32)(0xa44840u));
    /* 00440a62: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00440a64: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x440a69u); f_005b8624();
    /* 00440a69: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440a6c: lea edi, [ebx + 0x300] */ r_edi = (u32)(r_ebx+0x300u);
    /* 00440a72: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00440a73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440a74: push 0x9a4f9c */ { u32 v = 0x9a4f9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00440a79: push dword ptr [0xa44818] */ { u32 v = R32((u32)(0xa44818u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440a7f: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x440a84u); f_00578aa0();
    /* 00440a84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00440a85: call 0x5787d0 */ r_esp -= 4; W32(r_esp, 0x440a8au); f_005787d0();
    /* 00440a8a: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00440a8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00440a8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440a90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440a91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00440a92: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00440a94: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x440a99u); f_00814298();
    /* 00440a99: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00440a9c: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00440aa2: movsx edx, word ptr [ebx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 00440aa9: mov edi, dword ptr [ebx + 0x30] */ r_edi = R32((u32)(r_ebx+0x30u));
    /* 00440aac: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00440aaf: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 00440ab5: mov word ptr [ebx + 0x346], dx */ W16((u32)(r_ebx+0x346u), (u16)r_edx);
    /* 00440abc: mov word ptr [ebx + 0x334], dx */ W16((u32)(r_ebx+0x334u), (u16)r_edx);
    /* 00440ac3: and edi, 0xfffff5ff */ {  u32 a = r_edi; u32 b = 0xfffff5ffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00440ac9: mov dword ptr [ebx + 0x30], edi */ W32((u32)(r_ebx+0x30u), r_edi);
    /* 00440acc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00440ace: call 0x52ca40 */ r_esp -= 4; W32(r_esp, 0x440ad3u); f_0052ca40();
    /* 00440ad3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00440ad4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00440ad5: ret  */ FN_RET(0x00440a58); r_esp += 4; return;
}

void f_00440ad8(void) /* sub_440AD8 */
{
    FN_ENTER(0x00440ad8);
    /* 00440ad8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00440ad9: mov ebp, esp */ r_ebp = r_esp;
    /* 00440adb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440add: push 0x8ce544 */ { u32 v = 0x8ce544u; r_esp -= 4; W32(r_esp, v); }
    /* 00440ae2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00440ae8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440ae9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00440af0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00440af3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00440af6: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00440af9: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00440afc: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00440aff: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00440b02: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00440b06: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00440b09: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00440b0c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00440b0f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00440b10: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00440b13: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00440b16: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x440b1bu); f_0052c3fc();
    /* 00440b1b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00440b22: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00440b25: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00440b28: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00440b2b: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00440b2e: mov word ptr [ecx + 0x1c], dx */ W16((u32)(r_ecx+0x1cu), (u16)r_edx);
    /* 00440b32: mov word ptr [ecx + 0x2c], bx */ W16((u32)(r_ecx+0x2cu), (u16)r_ebx);
    /* 00440b36: mov dword ptr [ecx], 0xaf5a60 */ W32((u32)(r_ecx), 0xaf5a60u);
    /* 00440b3c: mov eax, dword ptr [0x9a4f50] */ r_eax = R32((u32)(0x9a4f50u));
    /* 00440b41: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00440b44: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
    /* 00440b4e: movzx esi, word ptr [edi + 0x28] */ r_esi = (u32)R16((u32)(r_edi+0x28u));
    /* 00440b52: mov word ptr [ecx + 0x28], si */ W16((u32)(r_ecx+0x28u), (u16)r_esi);
    /* 00440b56: movzx eax, word ptr [edi + 0x2a] */ r_eax = (u32)R16((u32)(r_edi+0x2au));
    /* 00440b5a: mov dword ptr [ecx + 0x3c], 0x42a00000 */ W32((u32)(r_ecx+0x3cu), 0x42a00000u);
    /* 00440b61: mov word ptr [ecx + 0x2a], ax */ W16((u32)(r_ecx+0x2au), (u16)r_eax);
    /* 00440b65: mov eax, dword ptr [0xa447b0] */ r_eax = R32((u32)(0xa447b0u));
    /* 00440b6a: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 00440b6d: mov eax, dword ptr [0xa447b8] */ r_eax = R32((u32)(0xa447b8u));
    /* 00440b72: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 00440b75: call 0x4413a4 */ r_esp -= 4; W32(r_esp, 0x440b7au); f_004413a4();
    /* 00440b7a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00440b7d: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00440b80: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00440b83: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00440b86: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00440b89: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00440b90: mov esp, ebp */ r_esp = r_ebp;
    /* 00440b92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00440b93: ret 0xc */ FN_RET(0x00440ad8); r_esp += 16; return;
}

void f_00440b98(void) /* sub_440B98 */
{
    FN_ENTER(0x00440b98);
    /* 00440b98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00440b99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00440b9a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00440b9c: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00440b9f: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00440ba4: je 0x440ba9 */ if (fZ) goto L_00440ba9;
L_00440ba6:; BB(0x00440ba6);
    /* 00440ba6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00440ba7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00440ba8: ret  */ FN_RET(0x00440b98); r_esp += 4; return;
L_00440ba9:; BB(0x00440ba9);
    /* 00440ba9: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 00440bae: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00440bb0: jne 0x440d1b */ if (!fZ) goto L_00440d1b;
L_00440bb6:; BB(0x00440bb6);
    /* 00440bb6: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00440bbb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00440bbd: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00440bc0: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00440bc5: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x440bc8u); call_ind(t); }
    /* 00440bc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00440bca: je 0x440d46 */ if (fZ) goto L_00440d46;
L_00440bd0:; BB(0x00440bd0);
    /* 00440bd0: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00440bd3: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x440bd8u); f_00829cc8();
    /* 00440bd8: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00440bdd: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00440be2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00440be3: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00440be8: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00440bed: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x440bf2u); f_00794548();
    /* 00440bf2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00440bf3: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x440bf8u); f_00578b38();
    /* 00440bf8: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x440bfdu); f_0082d7b0();
    /* 00440bfd: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00440c02: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00440c07: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00440c0c: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00440c0f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x440c14u); f_0082d838();
    /* 00440c14: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 00440c1a: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440c1d: jne 0x440c2f */ if (!fZ) goto L_00440c2f;
L_00440c1f:; BB(0x00440c1f);
    /* 00440c1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440c21: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00440c26: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00440c28: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440c2a: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x440c2fu); f_00830b74();
L_00440c2f:; BB(0x00440c2f);
    /* 00440c2f: mov ecx, dword ptr [ebp + 0x394] */ r_ecx = R32((u32)(r_ebp+0x394u));
    /* 00440c35: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x440c3au); f_0082dcbc();
    /* 00440c3a: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00440c3d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00440c41: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00440c43: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00440c4a: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00440c52: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x440c57u); f_00830b74();
    /* 00440c57: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00440c5a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00440c5c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x440c61u); f_0082d8bc();
    /* 00440c61: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x440c66u); f_004f7c84();
    /* 00440c66: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440c69: je 0x440d49 */ if (fZ) goto L_00440d49;
L_00440c6f:; BB(0x00440c6f);
    /* 00440c6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00440c71: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x440c76u); f_007aa668();
L_00440c76:; BB(0x00440c76);
    /* 00440c76: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x440c7bu); f_0082da80();
    /* 00440c7b: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x440c80u); f_00794750();
    /* 00440c80: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x440c85u); f_0082dab0();
    /* 00440c85: mov edx, dword ptr [0xaab518] */ r_edx = R32((u32)(0xaab518u));
    /* 00440c8b: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00440c8e: fcomp dword ptr [0x8fe1ac] */ fx_compare(ST(0), R_F32((u32)(0x8fe1acu))); FPOP();
    /* 00440c94: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00440c96: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00440c9c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00440c9d: jae 0x440d46 */ if (!fC) goto L_00440d46;
L_00440ca3:; BB(0x00440ca3);
    /* 00440ca3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x440ca8u); f_0082d7b0();
    /* 00440ca8: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00440cab: fsub dword ptr [0x8fe1a8] */ ST(0) = ST(0) - R_F32((u32)(0x8fe1a8u));
    /* 00440cb1: fmul dword ptr [0x8fe1b4] */ ST(0) = ST(0) * R_F32((u32)(0x8fe1b4u));
    /* 00440cb7: fadd dword ptr [0x8fe1b8] */ ST(0) = ST(0) + R_F32((u32)(0x8fe1b8u));
    /* 00440cbd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00440cbf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00440cc2: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440cc5: push 0x40900000 */ { u32 v = 0x40900000u; r_esp -= 4; W32(r_esp, v); }
    /* 00440cca: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440ccd: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x440cd2u); f_00830b74();
    /* 00440cd2: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00440cd5: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00440cd9: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00440cdc: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00440ce0: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00440ce4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00440ce6: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x440cebu); f_0082fa0c();
    /* 00440ceb: mov ecx, dword ptr [0xa44840] */ r_ecx = R32((u32)(0xa44840u));
    /* 00440cf1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440cf3: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x440cf8u); f_005b8624();
    /* 00440cf8: mov ecx, eax */ r_ecx = r_eax;
    /* 00440cfa: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x440cffu); f_00829cc8();
    /* 00440cff: mov ecx, dword ptr [0xa44840] */ r_ecx = R32((u32)(0xa44840u));
    /* 00440d05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440d07: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x440d0cu); f_005b8610();
    /* 00440d0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440d0d: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x440d12u); f_0082e1e8();
    /* 00440d12: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00440d13: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x440d18u); f_0082da80();
    /* 00440d18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00440d19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00440d1a: ret  */ FN_RET(0x00440b98); r_esp += 4; return;
L_00440d1b:; BB(0x00440d1b);
    /* 00440d1b: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00440d1e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x440d23u); f_00829cc8();
    /* 00440d23: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x440d28u); f_0082d7b0();
    /* 00440d28: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440d2a: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00440d2f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00440d31: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440d33: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x440d38u); f_00830b74();
    /* 00440d38: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440d3b: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x440d40u); f_0082e1e8();
    /* 00440d40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00440d41: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x440d46u); f_0082da80();
L_00440d46:; BB(0x00440d46);
    /* 00440d46: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00440d47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00440d48: ret  */ FN_RET(0x00440b98); r_esp += 4; return;
L_00440d49:; BB(0x00440d49);
    /* 00440d49: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00440d4c: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x440d51u); f_0082e1e8();
    /* 00440d51: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00440d52: jmp 0x440c76 */ goto L_00440c76;
}

void f_00440d58(void) /* sub_440D58 */
{
    FN_ENTER(0x00440d58);
    /* 00440d58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00440d59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00440d5a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00440d5c: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x440d61u); f_004f7c84();
    /* 00440d61: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00440d64: je 0x440e79 */ if (fZ) goto L_00440e79;
L_00440d6a:; BB(0x00440d6a);
    /* 00440d6a: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00440d71: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440d74: je 0x440dc3 */ if (fZ) goto L_00440dc3;
L_00440d76:; BB(0x00440d76);
    /* 00440d76: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00440d79: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00440d7b: call dword ptr [eax + 0x8c] */ { u32 t = R32((u32)(r_eax+0x8cu)); r_esp -= 4; W32(r_esp, 0x440d81u); call_ind(t); }
    /* 00440d81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440d83: je 0x440d99 */ if (fZ) goto L_00440d99;
L_00440d85:; BB(0x00440d85);
    /* 00440d85: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00440d88: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00440d8a: call dword ptr [eax + 0x104] */ { u32 t = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, 0x440d90u); call_ind(t); }
    /* 00440d90: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00440d97: jmp 0x440dc3 */ goto L_00440dc3;
L_00440d99:; BB(0x00440d99);
    /* 00440d99: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00440d9c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00440d9e: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x440da4u); call_ind(t); }
    /* 00440da4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440da6: jne 0x440db1 */ if (!fZ) goto L_00440db1;
L_00440da8:; BB(0x00440da8);
    /* 00440da8: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00440daf: jmp 0x440dc3 */ goto L_00440dc3;
L_00440db1:; BB(0x00440db1);
    /* 00440db1: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00440db4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00440db6: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x440dbcu); call_ind(t); }
    /* 00440dbc: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
L_00440dc3:; BB(0x00440dc3);
    /* 00440dc3: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
    /* 00440dc9: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440dcb: je 0x440e00 */ if (fZ) goto L_00440e00;
L_00440dcd:; BB(0x00440dcd);
    /* 00440dcd: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 00440dd3: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440dd6: je 0x440def */ if (fZ) goto L_00440def;
L_00440dd8:; BB(0x00440dd8);
    /* 00440dd8: mov dword ptr [ebp + 0x384], 0xffffffff */ W32((u32)(r_ebp+0x384u), 0xffffffffu);
    /* 00440de2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00440de4: call 0x440e84 */ r_esp -= 4; W32(r_esp, 0x440de9u); f_00440e84();
    /* 00440de9: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
L_00440def:; BB(0x00440def);
    /* 00440def: mov dword ptr [ebp + 0x384], 0 */ W32((u32)(r_ebp+0x384u), 0x0u);
    /* 00440df9: mov word ptr [ebp + 0x32e], dx */ W16((u32)(r_ebp+0x32eu), (u16)r_edx);
L_00440e00:; BB(0x00440e00);
    /* 00440e00: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00440e02: call 0x440e84 */ r_esp -= 4; W32(r_esp, 0x440e07u); f_00440e84();
    /* 00440e07: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 00440e0a: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00440e0d: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 00440e10: mov esi, dword ptr [ebp + 0x40] */ r_esi = R32((u32)(r_ebp+0x40u));
    /* 00440e13: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00440e1a: mov dword ptr [ebp + 0x300], edx */ W32((u32)(r_ebp+0x300u), r_edx);
    /* 00440e20: mov dword ptr [ebp + 0x308], esi */ W32((u32)(r_ebp+0x308u), r_esi);
    /* 00440e26: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440e29: je 0x440e7c */ if (fZ) goto L_00440e7c;
L_00440e2b:; BB(0x00440e2b);
    /* 00440e2b: fadd dword ptr [0x8fe1a4] */ ST(0) = ST(0) + R_F32((u32)(0x8fe1a4u));
    /* 00440e31: fst dword ptr [ebp + 0x304] */ W_F32((u32)(r_ebp+0x304u), ST(0));
L_00440e37:; BB(0x00440e37);
    /* 00440e37: fstp dword ptr [ebp + 0x78] */ W_F32((u32)(r_ebp+0x78u), ST(0)); FPOP();
    /* 00440e3a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00440e3c: mov dword ptr [ebp + 0x74], edx */ W32((u32)(r_ebp+0x74u), r_edx);
    /* 00440e3f: mov dword ptr [ebp + 0x7c], esi */ W32((u32)(r_ebp+0x7cu), r_esi);
    /* 00440e42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00440e43: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x440e48u); f_006946a8();
    /* 00440e48: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00440e4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00440e4c: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00440e4f: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00440e54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440e55: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x440e5au); f_00805608();
    /* 00440e5a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00440e5d: mov edx, dword ptr [0xa4481c] */ r_edx = R32((u32)(0xa4481cu));
    /* 00440e63: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00440e66: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00440e6b: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00440e6e: mov esi, dword ptr [ebp] */ r_esi = R32((u32)(r_ebp));
    /* 00440e71: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00440e73: call dword ptr [esi + 0xe4] */ { u32 t = R32((u32)(r_esi+0xe4u)); r_esp -= 4; W32(r_esp, 0x440e79u); call_ind(t); }
L_00440e79:; BB(0x00440e79);
    /* 00440e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00440e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00440e7b: ret  */ FN_RET(0x00440d58); r_esp += 4; return;
L_00440e7c:; BB(0x00440e7c);
    /* 00440e7c: mov dword ptr [ebp + 0x304], ecx */ W32((u32)(r_ebp+0x304u), r_ecx);
    /* 00440e82: jmp 0x440e37 */ goto L_00440e37;
}

void f_00440e84(void) /* sub_440E84 */
{
    FN_ENTER(0x00440e84);
    /* 00440e84: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00440e8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00440e8d: jge 0x440e90 */ if ((fS==fO)) goto L_00440e90;
L_00440e8f:; BB(0x00440e8f);
    /* 00440e8f: ret  */ FN_RET(0x00440e84); r_esp += 4; return;
L_00440e90:; BB(0x00440e90);
    /* 00440e90: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00440e93: jle 0x440eb6 */ if ((fZ||fS!=fO)) goto L_00440eb6;
L_00440e95:; BB(0x00440e95);
    /* 00440e95: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440e98: je 0x440eb0 */ if (fZ) goto L_00440eb0;
L_00440e9a:; BB(0x00440e9a);
    /* 00440e9a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440e9d: jne 0x440ea5 */ if (!fZ) goto L_00440ea5;
L_00440e9f:; BB(0x00440e9f);
    /* 00440e9f: call 0x440fd0 */ r_esp -= 4; W32(r_esp, 0x440ea4u); f_00440fd0();
    /* 00440ea4: ret  */ FN_RET(0x00440e84); r_esp += 4; return;
L_00440ea5:; BB(0x00440ea5);
    /* 00440ea5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00440ea8: jne 0x440e8f */ if (!fZ) goto L_00440e8f;
L_00440eaa:; BB(0x00440eaa);
    /* 00440eaa: call 0x440ef8 */ r_esp -= 4; W32(r_esp, 0x440eafu); f_00440ef8();
    /* 00440eaf: ret  */ FN_RET(0x00440e84); r_esp += 4; return;
L_00440eb0:; BB(0x00440eb0);
    /* 00440eb0: call 0x4410c0 */ r_esp -= 4; W32(r_esp, 0x440eb5u); f_004410c0();
    /* 00440eb5: ret  */ FN_RET(0x00440e84); r_esp += 4; return;
L_00440eb6:; BB(0x00440eb6);
    /* 00440eb6: call 0x440ebc */ r_esp -= 4; W32(r_esp, 0x440ebbu); f_00440ebc();
    /* 00440ebb: ret  */ FN_RET(0x00440e84); r_esp += 4; return;
}

void f_00440ebc(void) /* sub_440EBC */
{
    FN_ENTER(0x00440ebc);
    /* 00440ebc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00440ebd: mov edi, ecx */ r_edi = r_ecx;
    /* 00440ebf: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 00440ec5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440ec7: jne 0x440edc */ if (!fZ) goto L_00440edc;
L_00440ec9:; BB(0x00440ec9);
    /* 00440ec9: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 00440ed3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00440ed5: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
L_00440edc:; BB(0x00440edc);
    /* 00440edc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00440edd: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x440ee2u); f_007b999c();
    /* 00440ee2: mov eax, dword ptr [edi + 0x394] */ r_eax = R32((u32)(r_edi+0x394u));
    /* 00440ee8: add eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00440eed: mov dword ptr [edi + 0x394], eax */ W32((u32)(r_edi+0x394u), r_eax);
    /* 00440ef3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00440ef4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00440ef5: ret  */ FN_RET(0x00440ebc); r_esp += 4; return;
}

void f_00440ef8(void) /* sub_440EF8 */
{
    FN_ENTER(0x00440ef8);
    /* 00440ef8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00440ef9: mov edi, ecx */ r_edi = r_ecx;
    /* 00440efb: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 00440f01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440f03: je 0x440f10 */ if (fZ) goto L_00440f10;
L_00440f05:; BB(0x00440f05);
    /* 00440f05: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440f08: jne 0x440fc5 */ if (!fZ) goto L_00440fc5;
L_00440f0e:; BB(0x00440f0e);
    /* 00440f0e: jmp 0x440f7e */ goto L_00440f7e;
L_00440f10:; BB(0x00440f10);
    /* 00440f10: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00440f16: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00440f19: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 00440f1f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00440f21: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 00440f28: mov ecx, edi */ r_ecx = r_edi;
    /* 00440f2a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x440f2fu); f_007aa094();
    /* 00440f2f: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00440f32: mov dword ptr [edi + 0x3c], 0x42a00000 */ W32((u32)(r_edi+0x3cu), 0x42a00000u);
    /* 00440f39: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00440f3e: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00440f41: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 00440f47: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00440f4a: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00440f4d: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00440f50: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00440f56: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00440f59: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00440f5c: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00440f5f: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00440f62: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00440f64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440f65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00440f66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00440f67: push 0x340 */ { u32 v = 0x340u; r_esp -= 4; W32(r_esp, v); }
    /* 00440f6c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x440f71u); f_00814298();
    /* 00440f71: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00440f74: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
L_00440f7e:; BB(0x00440f7e);
    /* 00440f7e: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00440f81: fsub dword ptr [0x8fe19c] */ ST(0) = ST(0) - R_F32((u32)(0x8fe19cu));
    /* 00440f87: fcom dword ptr [0x8fe1ac] */ fx_compare(ST(0), R_F32((u32)(0x8fe1acu))); 
    /* 00440f8d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00440f8f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00440f90: jbe 0x440f97 */ if ((fC||fZ)) goto L_00440f97;
L_00440f92:; BB(0x00440f92);
    /* 00440f92: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 00440f95: jmp 0x440fc5 */ goto L_00440fc5;
L_00440f97:; BB(0x00440f97);
    /* 00440f97: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00440f99: mov eax, 0x42480000 */ r_eax = 0x42480000u;
    /* 00440f9e: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 00440fa4: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 00440fa7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00440faa: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00440fad: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
    /* 00440fb3: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00440fb8: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00440fbb: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00440fbd: mov ecx, edi */ r_ecx = r_edi;
    /* 00440fbf: call dword ptr [eax + 0xf4] */ { u32 t = R32((u32)(r_eax+0xf4u)); r_esp -= 4; W32(r_esp, 0x440fc5u); call_ind(t); }
L_00440fc5:; BB(0x00440fc5);
    /* 00440fc5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00440fc6: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x440fcbu); f_007b999c();
    /* 00440fcb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00440fcc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00440fcd: ret  */ FN_RET(0x00440ef8); r_esp += 4; return;
}

void f_00440fd0(void) /* sub_440FD0 */
{
    FN_ENTER(0x00440fd0);
    /* 00440fd0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00440fd1: mov esi, ecx */ r_esi = r_ecx;
    /* 00440fd3: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 00440fd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440fdb: je 0x441091 */ if (fZ) goto L_00441091;
L_00440fe1:; BB(0x00440fe1);
    /* 00440fe1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440fe4: je 0x441028 */ if (fZ) goto L_00441028;
L_00440fe6:; BB(0x00440fe6);
    /* 00440fe6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440fe9: je 0x440ff7 */ if (fZ) goto L_00440ff7;
L_00440feb:; BB(0x00440feb);
    /* 00440feb: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00440fee: je 0x44101f */ if (fZ) goto L_0044101f;
L_00440ff0:; BB(0x00440ff0);
    /* 00440ff0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00440ff3: jne 0x44101f */ if (!fZ) goto L_0044101f;
L_00440ff5:; BB(0x00440ff5);
    /* 00440ff5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00440ff6: ret  */ FN_RET(0x00440fd0); r_esp += 4; return;
L_00440ff7:; BB(0x00440ff7);
    /* 00440ff7: mov ecx, esi */ r_ecx = r_esi;
    /* 00440ff9: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x440ffeu); f_007aa094();
    /* 00440ffe: fld dword ptr [0x8fe198] */ FPUSH(R_F32((u32)(0x8fe198u)));
    /* 00441004: fadd dword ptr [esi + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xc4u));
    /* 0044100a: fcomp dword ptr [esi + 0xc0] */ fx_compare(ST(0), R_F32((u32)(r_esi+0xc0u))); FPOP();
    /* 00441010: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00441012: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00441013: ja 0x44101f */ if ((!fC&&!fZ)) goto L_0044101f;
L_00441015:; BB(0x00441015);
    /* 00441015: mov dword ptr [esi + 0x384], 3 */ W32((u32)(r_esi+0x384u), 0x3u);
L_0044101f:; BB(0x0044101f);
    /* 0044101f: mov ecx, esi */ r_ecx = r_esi;
    /* 00441021: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x441026u); f_007b6880();
    /* 00441026: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00441027: ret  */ FN_RET(0x00440fd0); r_esp += 4; return;
L_00441028:; BB(0x00441028);
    /* 00441028: mov ecx, esi */ r_ecx = r_esi;
    /* 0044102a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x44102fu); f_007aa094();
    /* 0044102f: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00441032: fadd dword ptr [esi + 0x310] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x310u));
    /* 00441038: fcom dword ptr [0x8fe1a8] */ fx_compare(ST(0), R_F32((u32)(0x8fe1a8u))); 
    /* 0044103e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00441040: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00441041: jbe 0x441048 */ if ((fC||fZ)) goto L_00441048;
L_00441043:; BB(0x00441043);
    /* 00441043: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 00441046: jmp 0x44101f */ goto L_0044101f;
L_00441048:; BB(0x00441048);
    /* 00441048: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044104a: mov dword ptr [esi + 0x384], 2 */ W32((u32)(r_esi+0x384u), 0x2u);
    /* 00441054: mov eax, 0x40933333 */ r_eax = 0x40933333u;
    /* 00441059: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0044105c: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00441062: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00441065: and edx, 0xfffffffb */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00441068: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0044106b: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00441071: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00441074: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00441077: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0044107a: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0044107d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044107f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441080: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441081: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00441082: push 0x342 */ { u32 v = 0x342u; r_esp -= 4; W32(r_esp, v); }
    /* 00441087: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44108cu); f_00814298();
    /* 0044108c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044108f: jmp 0x44101f */ goto L_0044101f;
L_00441091:; BB(0x00441091);
    /* 00441091: mov dword ptr [esi + 0x310], 0xc01147ae */ W32((u32)(r_esi+0x310u), 0xc01147aeu);
    /* 0044109b: mov eax, 4 */ r_eax = 0x4u;
    /* 004410a0: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004410a7: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 004410b1: mov dword ptr [esi + 0x394], 0 */ W32((u32)(r_esi+0x394u), 0x0u);
    /* 004410bb: jmp 0x44101f */ goto L_0044101f;
}

