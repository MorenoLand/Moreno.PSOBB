#include "protos.h"

void f_0075edac(void)
{
    FN_ENTER(0x0075edac);
    /* 0075edac: std  */ rt_df = 1;
    /* 0075edad: dec dword ptr [ebx - 0x3da0a439] */ { u32 ad = (u32)(r_ebx+0xc25f5bc7u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0075edb3: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075edb5: nop  */ ;
    /* 0075edb6: nop  */ ;
    /* 0075edb7: nop  */ ;
    /* 0075edb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075edb9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075edbb: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0075edbe: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075edc0: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75edc3u); call_ind(t); }
    /* 0075edc3: mov byte ptr [ebx + 0x1c], 7 */ W8((u32)(r_ebx+0x1cu), 0x7u);
    /* 0075edc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075edc8: ret  */ FN_RET(0x0075edac); r_esp += 4; return;
}

void f_0075edb8(void) /* sub_75EDB8 */
{
    FN_ENTER(0x0075edb8);
    /* 0075edb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075edb9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075edbb: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0075edbe: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075edc0: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75edc3u); call_ind(t); }
    /* 0075edc3: mov byte ptr [ebx + 0x1c], 7 */ W8((u32)(r_ebx+0x1cu), 0x7u);
    /* 0075edc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075edc8: ret  */ FN_RET(0x0075edb8); r_esp += 4; return;
}

void f_0075edcc(void) /* sub_75EDCC */
{
    FN_ENTER(0x0075edcc);
    /* 0075edcc: mov dword ptr [0xa9ad5c], 0x3f800000 */ W32((u32)(0xa9ad5cu), 0x3f800000u);
    /* 0075edd6: mov dword ptr [0xa9ad60], 0x41000000 */ W32((u32)(0xa9ad60u), 0x41000000u);
    /* 0075ede0: mov dword ptr [0xa9ad64], 0x3fc00000 */ W32((u32)(0xa9ad64u), 0x3fc00000u);
    /* 0075edea: ret  */ FN_RET(0x0075edcc); r_esp += 4; return;
}

void f_0075edd0(void)
{
    FN_ENTER(0x0075edd0);
    /* 0075edd0: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075edd5: aas  */ UNSUP(0x0075edd5, "aas ");
    /* 0075edd6: mov dword ptr [0xa9ad60], 0x41000000 */ W32((u32)(0xa9ad60u), 0x41000000u);
    /* 0075ede0: mov dword ptr [0xa9ad64], 0x3fc00000 */ W32((u32)(0xa9ad64u), 0x3fc00000u);
    /* 0075edea: ret  */ FN_RET(0x0075edd0); r_esp += 4; return;
}

void f_0075edea(void)
{
    FN_ENTER(0x0075edea);
    /* 0075edea: ret  */ FN_RET(0x0075edea); r_esp += 4; return;
}

void f_0075edec(void) /* sub_75EDEC */
{
    FN_ENTER(0x0075edec);
    /* 0075edec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075eded: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075edef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075edf1: call 0x75ee10 */ r_esp -= 4; W32(r_esp, 0x75edf6u); f_0075ee10();
    /* 0075edf6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0075edfa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075edfc: jne 0x75ee02 */ if (!fZ) goto L_0075ee02;
L_0075edfe:; BB(0x0075edfe);
    /* 0075edfe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075edff: ret 4 */ FN_RET(0x0075edec); r_esp += 8; return;
L_0075ee02:; BB(0x0075ee02);
    /* 0075ee02: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ee03: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x75ee08u); f_005c2f74();
    /* 0075ee08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ee09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075ee0a: ret 4 */ FN_RET(0x0075edec); r_esp += 8; return;
}

void f_0075ee04(void)
{
    FN_ENTER(0x0075ee04);
    /* 0075ee04: insb byte ptr es:[edi], dx */ UNSUP(0x0075ee04, "insb byte ptr es:[edi], dx");
    /* 0075ee05: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0075ee06: out 0xff, al */ UNSUP(0x0075ee06, "out 0xff, al");
    /* 0075ee08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ee09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075ee0a: ret 4 */ FN_RET(0x0075ee04); r_esp += 8; return;
}

void f_0075ee10(void) /* sub_75EE10 */
{
    FN_ENTER(0x0075ee10);
    /* 0075ee10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075ee11: mov ebp, esp */ r_ebp = r_esp;
    /* 0075ee13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075ee15: push 0x8f3454 */ { u32 v = 0x8f3454u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ee1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075ee20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ee21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075ee28: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075ee2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075ee2e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0075ee31: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0075ee34: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0075ee37: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0075ee3a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075ee41: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee44: mov dword ptr [eax], 0xb42db0 */ W32((u32)(r_eax), 0xb42db0u);
    /* 0075ee4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ee4b: call 0x826064 */ r_esp -= 4; W32(r_esp, 0x75ee50u); f_00826064();
    /* 0075ee50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ee51: call 0x8262f4 */ r_esp -= 4; W32(r_esp, 0x75ee56u); f_008262f4();
    /* 0075ee56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee59: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ee5c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ee61u); f_0068d5a8();
    /* 0075ee61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ee62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee64: je 0x75ee6d */ if (fZ) goto L_0075ee6d;
L_0075ee66:; BB(0x0075ee66);
    /* 0075ee66: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ee68: call 0x6855b0 */ r_esp -= 4; W32(r_esp, 0x75ee6du); f_006855b0();
L_0075ee6d:; BB(0x0075ee6d);
    /* 0075ee6d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee70: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0075ee73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee75: je 0x75ee8e */ if (fZ) goto L_0075ee8e;
L_0075ee77:; BB(0x0075ee77);
    /* 0075ee77: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0075ee7b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075ee80: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0075ee84: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee87: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_0075ee8e:; BB(0x0075ee8e);
    /* 0075ee8e: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0075ee91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee93: je 0x75eea4 */ if (fZ) goto L_0075eea4;
L_0075ee95:; BB(0x0075ee95);
    /* 0075ee95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ee9au); f_007127b0();
    /* 0075ee9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee9d: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0075eea4:; BB(0x0075eea4);
    /* 0075eea4: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075eea7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eea9: je 0x75eeba */ if (fZ) goto L_0075eeba;
L_0075eeab:; BB(0x0075eeab);
    /* 0075eeab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eeb0u); f_007127b0();
    /* 0075eeb0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eeb3: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_0075eeba:; BB(0x0075eeba);
    /* 0075eeba: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075eebd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eebf: je 0x75eed0 */ if (fZ) goto L_0075eed0;
L_0075eec1:; BB(0x0075eec1);
    /* 0075eec1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eec6u); f_007127b0();
    /* 0075eec6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eec9: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_0075eed0:; BB(0x0075eed0);
    /* 0075eed0: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075eed3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eed5: je 0x75eee6 */ if (fZ) goto L_0075eee6;
L_0075eed7:; BB(0x0075eed7);
    /* 0075eed7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eedcu); f_007127b0();
    /* 0075eedc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eedf: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_0075eee6:; BB(0x0075eee6);
    /* 0075eee6: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075eee9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eeeb: je 0x75eefc */ if (fZ) goto L_0075eefc;
L_0075eeed:; BB(0x0075eeed);
    /* 0075eeed: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eef2u); f_007127b0();
    /* 0075eef2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eef5: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0075eefc:; BB(0x0075eefc);
    /* 0075eefc: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075eeff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef01: je 0x75ef12 */ if (fZ) goto L_0075ef12;
L_0075ef03:; BB(0x0075ef03);
    /* 0075ef03: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75ef08u); f_0073d160();
    /* 0075ef08: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef0b: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075ef12:; BB(0x0075ef12);
    /* 0075ef12: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075ef15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef17: je 0x75ef28 */ if (fZ) goto L_0075ef28;
L_0075ef19:; BB(0x0075ef19);
    /* 0075ef19: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef1eu); f_007127b0();
    /* 0075ef1e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef21: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075ef28:; BB(0x0075ef28);
    /* 0075ef28: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075ef2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef2d: je 0x75ef3e */ if (fZ) goto L_0075ef3e;
L_0075ef2f:; BB(0x0075ef2f);
    /* 0075ef2f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef34u); f_007127b0();
    /* 0075ef34: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef37: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075ef3e:; BB(0x0075ef3e);
    /* 0075ef3e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075ef41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef43: je 0x75ef4d */ if (fZ) goto L_0075ef4d;
L_0075ef45:; BB(0x0075ef45);
    /* 0075ef45: call 0x73340c */ r_esp -= 4; W32(r_esp, 0x75ef4au); f_0073340c();
    /* 0075ef4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075ef4d:; BB(0x0075ef4d);
    /* 0075ef4d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef50: call 0x717fb0 */ r_esp -= 4; W32(r_esp, 0x75ef55u); f_00717fb0();
    /* 0075ef55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef58: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef5b: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x75ef60u); f_00718138();
    /* 0075ef60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ef6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef6d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75ef72u); f_008171e8();
    /* 0075ef72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075ef75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075ef7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075ef7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ef7f: ret  */ FN_RET(0x0075ee10); r_esp += 4; return;
}

void f_0075ee1a(void)
{
    FN_ENTER(0x0075ee1a);
    /* 0075ee1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075ee20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ee21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075ee28: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075ee2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075ee2e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0075ee31: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0075ee34: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0075ee37: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0075ee3a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075ee41: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee44: mov dword ptr [eax], 0xb42db0 */ W32((u32)(r_eax), 0xb42db0u);
    /* 0075ee4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ee4b: call 0x826064 */ r_esp -= 4; W32(r_esp, 0x75ee50u); f_00826064();
    /* 0075ee50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ee51: call 0x8262f4 */ r_esp -= 4; W32(r_esp, 0x75ee56u); f_008262f4();
    /* 0075ee56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee59: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ee5c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ee61u); f_0068d5a8();
    /* 0075ee61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ee62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee64: je 0x75ee6d */ if (fZ) goto L_0075ee6d;
L_0075ee66:; BB(0x0075ee66);
    /* 0075ee66: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ee68: call 0x6855b0 */ r_esp -= 4; W32(r_esp, 0x75ee6du); f_006855b0();
L_0075ee6d:; BB(0x0075ee6d);
    /* 0075ee6d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee70: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0075ee73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee75: je 0x75ee8e */ if (fZ) goto L_0075ee8e;
L_0075ee77:; BB(0x0075ee77);
    /* 0075ee77: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0075ee7b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075ee80: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0075ee84: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee87: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_0075ee8e:; BB(0x0075ee8e);
    /* 0075ee8e: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0075ee91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee93: je 0x75eea4 */ if (fZ) goto L_0075eea4;
L_0075ee95:; BB(0x0075ee95);
    /* 0075ee95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ee9au); f_007127b0();
    /* 0075ee9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee9d: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0075eea4:; BB(0x0075eea4);
    /* 0075eea4: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075eea7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eea9: je 0x75eeba */ if (fZ) goto L_0075eeba;
L_0075eeab:; BB(0x0075eeab);
    /* 0075eeab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eeb0u); f_007127b0();
    /* 0075eeb0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eeb3: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_0075eeba:; BB(0x0075eeba);
    /* 0075eeba: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075eebd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eebf: je 0x75eed0 */ if (fZ) goto L_0075eed0;
L_0075eec1:; BB(0x0075eec1);
    /* 0075eec1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eec6u); f_007127b0();
    /* 0075eec6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eec9: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_0075eed0:; BB(0x0075eed0);
    /* 0075eed0: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075eed3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eed5: je 0x75eee6 */ if (fZ) goto L_0075eee6;
L_0075eed7:; BB(0x0075eed7);
    /* 0075eed7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eedcu); f_007127b0();
    /* 0075eedc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eedf: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_0075eee6:; BB(0x0075eee6);
    /* 0075eee6: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075eee9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eeeb: je 0x75eefc */ if (fZ) goto L_0075eefc;
L_0075eeed:; BB(0x0075eeed);
    /* 0075eeed: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eef2u); f_007127b0();
    /* 0075eef2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eef5: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0075eefc:; BB(0x0075eefc);
    /* 0075eefc: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075eeff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef01: je 0x75ef12 */ if (fZ) goto L_0075ef12;
L_0075ef03:; BB(0x0075ef03);
    /* 0075ef03: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75ef08u); f_0073d160();
    /* 0075ef08: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef0b: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075ef12:; BB(0x0075ef12);
    /* 0075ef12: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075ef15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef17: je 0x75ef28 */ if (fZ) goto L_0075ef28;
L_0075ef19:; BB(0x0075ef19);
    /* 0075ef19: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef1eu); f_007127b0();
    /* 0075ef1e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef21: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075ef28:; BB(0x0075ef28);
    /* 0075ef28: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075ef2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef2d: je 0x75ef3e */ if (fZ) goto L_0075ef3e;
L_0075ef2f:; BB(0x0075ef2f);
    /* 0075ef2f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef34u); f_007127b0();
    /* 0075ef34: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef37: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075ef3e:; BB(0x0075ef3e);
    /* 0075ef3e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075ef41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef43: je 0x75ef4d */ if (fZ) goto L_0075ef4d;
L_0075ef45:; BB(0x0075ef45);
    /* 0075ef45: call 0x73340c */ r_esp -= 4; W32(r_esp, 0x75ef4au); f_0073340c();
    /* 0075ef4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075ef4d:; BB(0x0075ef4d);
    /* 0075ef4d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef50: call 0x717fb0 */ r_esp -= 4; W32(r_esp, 0x75ef55u); f_00717fb0();
    /* 0075ef55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef58: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef5b: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x75ef60u); f_00718138();
    /* 0075ef60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ef6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef6d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75ef72u); f_008171e8();
    /* 0075ef72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075ef75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075ef7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075ef7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ef7f: ret  */ FN_RET(0x0075ee1a); r_esp += 4; return;
}

void f_0075ee2e(void)
{
    FN_ENTER(0x0075ee2e);
    /* 0075ee2e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0075ee31: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0075ee34: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0075ee37: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0075ee3a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075ee41: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee44: mov dword ptr [eax], 0xb42db0 */ W32((u32)(r_eax), 0xb42db0u);
    /* 0075ee4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ee4b: call 0x826064 */ r_esp -= 4; W32(r_esp, 0x75ee50u); f_00826064();
    /* 0075ee50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ee51: call 0x8262f4 */ r_esp -= 4; W32(r_esp, 0x75ee56u); f_008262f4();
    /* 0075ee56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee59: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ee5c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ee61u); f_0068d5a8();
    /* 0075ee61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ee62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee64: je 0x75ee6d */ if (fZ) goto L_0075ee6d;
L_0075ee66:; BB(0x0075ee66);
    /* 0075ee66: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ee68: call 0x6855b0 */ r_esp -= 4; W32(r_esp, 0x75ee6du); f_006855b0();
L_0075ee6d:; BB(0x0075ee6d);
    /* 0075ee6d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee70: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0075ee73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee75: je 0x75ee8e */ if (fZ) goto L_0075ee8e;
L_0075ee77:; BB(0x0075ee77);
    /* 0075ee77: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0075ee7b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075ee80: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0075ee84: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee87: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_0075ee8e:; BB(0x0075ee8e);
    /* 0075ee8e: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0075ee91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee93: je 0x75eea4 */ if (fZ) goto L_0075eea4;
L_0075ee95:; BB(0x0075ee95);
    /* 0075ee95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ee9au); f_007127b0();
    /* 0075ee9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee9d: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0075eea4:; BB(0x0075eea4);
    /* 0075eea4: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075eea7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eea9: je 0x75eeba */ if (fZ) goto L_0075eeba;
L_0075eeab:; BB(0x0075eeab);
    /* 0075eeab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eeb0u); f_007127b0();
    /* 0075eeb0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eeb3: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_0075eeba:; BB(0x0075eeba);
    /* 0075eeba: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075eebd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eebf: je 0x75eed0 */ if (fZ) goto L_0075eed0;
L_0075eec1:; BB(0x0075eec1);
    /* 0075eec1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eec6u); f_007127b0();
    /* 0075eec6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eec9: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_0075eed0:; BB(0x0075eed0);
    /* 0075eed0: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075eed3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eed5: je 0x75eee6 */ if (fZ) goto L_0075eee6;
L_0075eed7:; BB(0x0075eed7);
    /* 0075eed7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eedcu); f_007127b0();
    /* 0075eedc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eedf: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_0075eee6:; BB(0x0075eee6);
    /* 0075eee6: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075eee9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eeeb: je 0x75eefc */ if (fZ) goto L_0075eefc;
L_0075eeed:; BB(0x0075eeed);
    /* 0075eeed: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eef2u); f_007127b0();
    /* 0075eef2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eef5: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0075eefc:; BB(0x0075eefc);
    /* 0075eefc: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075eeff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef01: je 0x75ef12 */ if (fZ) goto L_0075ef12;
L_0075ef03:; BB(0x0075ef03);
    /* 0075ef03: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75ef08u); f_0073d160();
    /* 0075ef08: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef0b: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075ef12:; BB(0x0075ef12);
    /* 0075ef12: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075ef15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef17: je 0x75ef28 */ if (fZ) goto L_0075ef28;
L_0075ef19:; BB(0x0075ef19);
    /* 0075ef19: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef1eu); f_007127b0();
    /* 0075ef1e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef21: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075ef28:; BB(0x0075ef28);
    /* 0075ef28: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075ef2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef2d: je 0x75ef3e */ if (fZ) goto L_0075ef3e;
L_0075ef2f:; BB(0x0075ef2f);
    /* 0075ef2f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef34u); f_007127b0();
    /* 0075ef34: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef37: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075ef3e:; BB(0x0075ef3e);
    /* 0075ef3e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075ef41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef43: je 0x75ef4d */ if (fZ) goto L_0075ef4d;
L_0075ef45:; BB(0x0075ef45);
    /* 0075ef45: call 0x73340c */ r_esp -= 4; W32(r_esp, 0x75ef4au); f_0073340c();
    /* 0075ef4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075ef4d:; BB(0x0075ef4d);
    /* 0075ef4d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef50: call 0x717fb0 */ r_esp -= 4; W32(r_esp, 0x75ef55u); f_00717fb0();
    /* 0075ef55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef58: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef5b: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x75ef60u); f_00718138();
    /* 0075ef60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ef6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef6d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75ef72u); f_008171e8();
    /* 0075ef72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075ef75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075ef7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075ef7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ef7f: ret  */ FN_RET(0x0075ee2e); r_esp += 4; return;
}

void f_0075ee42(void)
{
    FN_ENTER(0x0075ee42);
    goto L_0075ee42;
L_0075ee0c:; BB(0x0075ee0c);
    /* 0075ee0c: add byte ptr [eax - 0x74aa6f70], dl */ { u32 ad = (u32)(r_eax+0x8b559090u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ee12: in al, dx */ UNSUP(0x0075ee12, "in al, dx");
    /* 0075ee13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075ee15: push 0x8f3454 */ { u32 v = 0x8f3454u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ee1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075ee20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ee21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075ee28: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075ee2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075ee2e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0075ee31: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0075ee34: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0075ee37: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0075ee3a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075ee41: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075ee42:; BB(0x0075ee42);
    /* 0075ee42: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0075ee43: loopne 0x75ee0c */ r_ecx--; if (r_ecx && !fZ) goto L_0075ee0c;
    /* 0075ee44: mov dword ptr [eax], 0xb42db0 */ W32((u32)(r_eax), 0xb42db0u);
    /* 0075ee45: add byte ptr [eax + 0x5000b42d], dh */ { u32 ad = (u32)(r_eax+0x5000b42du);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ee4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ee4b: call 0x826064 */ r_esp -= 4; W32(r_esp, 0x75ee50u); f_00826064();
    /* 0075ee50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ee51: call 0x8262f4 */ r_esp -= 4; W32(r_esp, 0x75ee56u); f_008262f4();
    /* 0075ee56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee59: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ee5c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ee61u); f_0068d5a8();
    /* 0075ee61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ee62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee64: je 0x75ee6d */ if (fZ) goto L_0075ee6d;
L_0075ee66:; BB(0x0075ee66);
    /* 0075ee66: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ee68: call 0x6855b0 */ r_esp -= 4; W32(r_esp, 0x75ee6du); f_006855b0();
L_0075ee6d:; BB(0x0075ee6d);
    /* 0075ee6d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee70: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0075ee73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee75: je 0x75ee8e */ if (fZ) goto L_0075ee8e;
L_0075ee77:; BB(0x0075ee77);
    /* 0075ee77: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0075ee7b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075ee80: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0075ee84: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee87: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_0075ee8e:; BB(0x0075ee8e);
    /* 0075ee8e: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0075ee91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee93: je 0x75eea4 */ if (fZ) goto L_0075eea4;
L_0075ee95:; BB(0x0075ee95);
    /* 0075ee95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ee9au); f_007127b0();
    /* 0075ee9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee9d: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0075eea4:; BB(0x0075eea4);
    /* 0075eea4: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075eea7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eea9: je 0x75eeba */ if (fZ) goto L_0075eeba;
L_0075eeab:; BB(0x0075eeab);
    /* 0075eeab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eeb0u); f_007127b0();
    /* 0075eeb0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eeb3: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_0075eeba:; BB(0x0075eeba);
    /* 0075eeba: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075eebd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eebf: je 0x75eed0 */ if (fZ) goto L_0075eed0;
L_0075eec1:; BB(0x0075eec1);
    /* 0075eec1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eec6u); f_007127b0();
    /* 0075eec6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eec9: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_0075eed0:; BB(0x0075eed0);
    /* 0075eed0: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075eed3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eed5: je 0x75eee6 */ if (fZ) goto L_0075eee6;
L_0075eed7:; BB(0x0075eed7);
    /* 0075eed7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eedcu); f_007127b0();
    /* 0075eedc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eedf: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_0075eee6:; BB(0x0075eee6);
    /* 0075eee6: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075eee9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eeeb: je 0x75eefc */ if (fZ) goto L_0075eefc;
L_0075eeed:; BB(0x0075eeed);
    /* 0075eeed: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eef2u); f_007127b0();
    /* 0075eef2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eef5: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0075eefc:; BB(0x0075eefc);
    /* 0075eefc: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075eeff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef01: je 0x75ef12 */ if (fZ) goto L_0075ef12;
L_0075ef03:; BB(0x0075ef03);
    /* 0075ef03: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75ef08u); f_0073d160();
    /* 0075ef08: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef0b: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075ef12:; BB(0x0075ef12);
    /* 0075ef12: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075ef15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef17: je 0x75ef28 */ if (fZ) goto L_0075ef28;
L_0075ef19:; BB(0x0075ef19);
    /* 0075ef19: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef1eu); f_007127b0();
    /* 0075ef1e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef21: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075ef28:; BB(0x0075ef28);
    /* 0075ef28: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075ef2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef2d: je 0x75ef3e */ if (fZ) goto L_0075ef3e;
L_0075ef2f:; BB(0x0075ef2f);
    /* 0075ef2f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef34u); f_007127b0();
    /* 0075ef34: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef37: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075ef3e:; BB(0x0075ef3e);
    /* 0075ef3e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075ef41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef43: je 0x75ef4d */ if (fZ) goto L_0075ef4d;
L_0075ef45:; BB(0x0075ef45);
    /* 0075ef45: call 0x73340c */ r_esp -= 4; W32(r_esp, 0x75ef4au); f_0073340c();
    /* 0075ef4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075ef4d:; BB(0x0075ef4d);
    /* 0075ef4d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef50: call 0x717fb0 */ r_esp -= 4; W32(r_esp, 0x75ef55u); f_00717fb0();
    /* 0075ef55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef58: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef5b: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x75ef60u); f_00718138();
    /* 0075ef60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ef6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef6d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75ef72u); f_008171e8();
    /* 0075ef72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075ef75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075ef7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075ef7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ef7f: ret  */ FN_RET(0x0075ee42); r_esp += 4; return;
}

void f_0075ee56(void)
{
    FN_ENTER(0x0075ee56);
    /* 0075ee56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee59: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ee5c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75ee61u); f_0068d5a8();
    /* 0075ee61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ee62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee64: je 0x75ee6d */ if (fZ) goto L_0075ee6d;
L_0075ee66:; BB(0x0075ee66);
    /* 0075ee66: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ee68: call 0x6855b0 */ r_esp -= 4; W32(r_esp, 0x75ee6du); f_006855b0();
L_0075ee6d:; BB(0x0075ee6d);
    /* 0075ee6d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee70: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0075ee73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee75: je 0x75ee8e */ if (fZ) goto L_0075ee8e;
L_0075ee77:; BB(0x0075ee77);
    /* 0075ee77: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0075ee7b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075ee80: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0075ee84: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee87: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_0075ee8e:; BB(0x0075ee8e);
    /* 0075ee8e: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0075ee91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee93: je 0x75eea4 */ if (fZ) goto L_0075eea4;
L_0075ee95:; BB(0x0075ee95);
    /* 0075ee95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ee9au); f_007127b0();
    /* 0075ee9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee9d: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0075eea4:; BB(0x0075eea4);
    /* 0075eea4: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075eea7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eea9: je 0x75eeba */ if (fZ) goto L_0075eeba;
L_0075eeab:; BB(0x0075eeab);
    /* 0075eeab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eeb0u); f_007127b0();
    /* 0075eeb0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eeb3: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_0075eeba:; BB(0x0075eeba);
    /* 0075eeba: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075eebd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eebf: je 0x75eed0 */ if (fZ) goto L_0075eed0;
L_0075eec1:; BB(0x0075eec1);
    /* 0075eec1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eec6u); f_007127b0();
    /* 0075eec6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eec9: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_0075eed0:; BB(0x0075eed0);
    /* 0075eed0: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075eed3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eed5: je 0x75eee6 */ if (fZ) goto L_0075eee6;
L_0075eed7:; BB(0x0075eed7);
    /* 0075eed7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eedcu); f_007127b0();
    /* 0075eedc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eedf: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_0075eee6:; BB(0x0075eee6);
    /* 0075eee6: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075eee9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eeeb: je 0x75eefc */ if (fZ) goto L_0075eefc;
L_0075eeed:; BB(0x0075eeed);
    /* 0075eeed: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eef2u); f_007127b0();
    /* 0075eef2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eef5: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0075eefc:; BB(0x0075eefc);
    /* 0075eefc: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075eeff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef01: je 0x75ef12 */ if (fZ) goto L_0075ef12;
L_0075ef03:; BB(0x0075ef03);
    /* 0075ef03: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75ef08u); f_0073d160();
    /* 0075ef08: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef0b: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075ef12:; BB(0x0075ef12);
    /* 0075ef12: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075ef15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef17: je 0x75ef28 */ if (fZ) goto L_0075ef28;
L_0075ef19:; BB(0x0075ef19);
    /* 0075ef19: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef1eu); f_007127b0();
    /* 0075ef1e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef21: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075ef28:; BB(0x0075ef28);
    /* 0075ef28: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075ef2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef2d: je 0x75ef3e */ if (fZ) goto L_0075ef3e;
L_0075ef2f:; BB(0x0075ef2f);
    /* 0075ef2f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef34u); f_007127b0();
    /* 0075ef34: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef37: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075ef3e:; BB(0x0075ef3e);
    /* 0075ef3e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075ef41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef43: je 0x75ef4d */ if (fZ) goto L_0075ef4d;
L_0075ef45:; BB(0x0075ef45);
    /* 0075ef45: call 0x73340c */ r_esp -= 4; W32(r_esp, 0x75ef4au); f_0073340c();
    /* 0075ef4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075ef4d:; BB(0x0075ef4d);
    /* 0075ef4d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef50: call 0x717fb0 */ r_esp -= 4; W32(r_esp, 0x75ef55u); f_00717fb0();
    /* 0075ef55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef58: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef5b: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x75ef60u); f_00718138();
    /* 0075ef60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ef6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef6d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75ef72u); f_008171e8();
    /* 0075ef72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075ef75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075ef7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075ef7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ef7f: ret  */ FN_RET(0x0075ee56); r_esp += 4; return;
}

void f_0075ee64(void)
{
    FN_ENTER(0x0075ee64);
    /* 0075ee64: je 0x75ee6d */ if (fZ) goto L_0075ee6d;
L_0075ee66:; BB(0x0075ee66);
    /* 0075ee66: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ee68: call 0x6855b0 */ r_esp -= 4; W32(r_esp, 0x75ee6du); f_006855b0();
L_0075ee6d:; BB(0x0075ee6d);
    /* 0075ee6d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee70: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0075ee73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee75: je 0x75ee8e */ if (fZ) goto L_0075ee8e;
L_0075ee77:; BB(0x0075ee77);
    /* 0075ee77: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0075ee7b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075ee80: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0075ee84: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee87: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_0075ee8e:; BB(0x0075ee8e);
    /* 0075ee8e: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0075ee91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee93: je 0x75eea4 */ if (fZ) goto L_0075eea4;
L_0075ee95:; BB(0x0075ee95);
    /* 0075ee95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ee9au); f_007127b0();
    /* 0075ee9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee9d: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0075eea4:; BB(0x0075eea4);
    /* 0075eea4: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075eea7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eea9: je 0x75eeba */ if (fZ) goto L_0075eeba;
L_0075eeab:; BB(0x0075eeab);
    /* 0075eeab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eeb0u); f_007127b0();
    /* 0075eeb0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eeb3: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_0075eeba:; BB(0x0075eeba);
    /* 0075eeba: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075eebd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eebf: je 0x75eed0 */ if (fZ) goto L_0075eed0;
L_0075eec1:; BB(0x0075eec1);
    /* 0075eec1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eec6u); f_007127b0();
    /* 0075eec6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eec9: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_0075eed0:; BB(0x0075eed0);
    /* 0075eed0: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075eed3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eed5: je 0x75eee6 */ if (fZ) goto L_0075eee6;
L_0075eed7:; BB(0x0075eed7);
    /* 0075eed7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eedcu); f_007127b0();
    /* 0075eedc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eedf: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_0075eee6:; BB(0x0075eee6);
    /* 0075eee6: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075eee9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eeeb: je 0x75eefc */ if (fZ) goto L_0075eefc;
L_0075eeed:; BB(0x0075eeed);
    /* 0075eeed: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eef2u); f_007127b0();
    /* 0075eef2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eef5: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0075eefc:; BB(0x0075eefc);
    /* 0075eefc: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075eeff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef01: je 0x75ef12 */ if (fZ) goto L_0075ef12;
L_0075ef03:; BB(0x0075ef03);
    /* 0075ef03: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75ef08u); f_0073d160();
    /* 0075ef08: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef0b: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075ef12:; BB(0x0075ef12);
    /* 0075ef12: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075ef15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef17: je 0x75ef28 */ if (fZ) goto L_0075ef28;
L_0075ef19:; BB(0x0075ef19);
    /* 0075ef19: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef1eu); f_007127b0();
    /* 0075ef1e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef21: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075ef28:; BB(0x0075ef28);
    /* 0075ef28: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075ef2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef2d: je 0x75ef3e */ if (fZ) goto L_0075ef3e;
L_0075ef2f:; BB(0x0075ef2f);
    /* 0075ef2f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef34u); f_007127b0();
    /* 0075ef34: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef37: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075ef3e:; BB(0x0075ef3e);
    /* 0075ef3e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075ef41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef43: je 0x75ef4d */ if (fZ) goto L_0075ef4d;
L_0075ef45:; BB(0x0075ef45);
    /* 0075ef45: call 0x73340c */ r_esp -= 4; W32(r_esp, 0x75ef4au); f_0073340c();
    /* 0075ef4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075ef4d:; BB(0x0075ef4d);
    /* 0075ef4d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef50: call 0x717fb0 */ r_esp -= 4; W32(r_esp, 0x75ef55u); f_00717fb0();
    /* 0075ef55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef58: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef5b: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x75ef60u); f_00718138();
    /* 0075ef60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ef6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef6d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75ef72u); f_008171e8();
    /* 0075ef72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075ef75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075ef7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075ef7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ef7f: ret  */ FN_RET(0x0075ee64); r_esp += 4; return;
}

void f_0075ee70(void)
{
    FN_ENTER(0x0075ee70);
    /* 0075ee70: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0075ee73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee75: je 0x75ee8e */ if (fZ) goto L_0075ee8e;
L_0075ee77:; BB(0x0075ee77);
    /* 0075ee77: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0075ee7b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075ee80: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0075ee84: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee87: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_0075ee8e:; BB(0x0075ee8e);
    /* 0075ee8e: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0075ee91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee93: je 0x75eea4 */ if (fZ) goto L_0075eea4;
L_0075ee95:; BB(0x0075ee95);
    /* 0075ee95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ee9au); f_007127b0();
    /* 0075ee9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee9d: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0075eea4:; BB(0x0075eea4);
    /* 0075eea4: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075eea7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eea9: je 0x75eeba */ if (fZ) goto L_0075eeba;
L_0075eeab:; BB(0x0075eeab);
    /* 0075eeab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eeb0u); f_007127b0();
    /* 0075eeb0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eeb3: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_0075eeba:; BB(0x0075eeba);
    /* 0075eeba: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075eebd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eebf: je 0x75eed0 */ if (fZ) goto L_0075eed0;
L_0075eec1:; BB(0x0075eec1);
    /* 0075eec1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eec6u); f_007127b0();
    /* 0075eec6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eec9: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_0075eed0:; BB(0x0075eed0);
    /* 0075eed0: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075eed3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eed5: je 0x75eee6 */ if (fZ) goto L_0075eee6;
L_0075eed7:; BB(0x0075eed7);
    /* 0075eed7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eedcu); f_007127b0();
    /* 0075eedc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eedf: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_0075eee6:; BB(0x0075eee6);
    /* 0075eee6: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075eee9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eeeb: je 0x75eefc */ if (fZ) goto L_0075eefc;
L_0075eeed:; BB(0x0075eeed);
    /* 0075eeed: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eef2u); f_007127b0();
    /* 0075eef2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eef5: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0075eefc:; BB(0x0075eefc);
    /* 0075eefc: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075eeff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef01: je 0x75ef12 */ if (fZ) goto L_0075ef12;
L_0075ef03:; BB(0x0075ef03);
    /* 0075ef03: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75ef08u); f_0073d160();
    /* 0075ef08: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef0b: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075ef12:; BB(0x0075ef12);
    /* 0075ef12: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075ef15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef17: je 0x75ef28 */ if (fZ) goto L_0075ef28;
L_0075ef19:; BB(0x0075ef19);
    /* 0075ef19: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef1eu); f_007127b0();
    /* 0075ef1e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef21: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075ef28:; BB(0x0075ef28);
    /* 0075ef28: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075ef2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef2d: je 0x75ef3e */ if (fZ) goto L_0075ef3e;
L_0075ef2f:; BB(0x0075ef2f);
    /* 0075ef2f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef34u); f_007127b0();
    /* 0075ef34: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef37: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075ef3e:; BB(0x0075ef3e);
    /* 0075ef3e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075ef41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef43: je 0x75ef4d */ if (fZ) goto L_0075ef4d;
L_0075ef45:; BB(0x0075ef45);
    /* 0075ef45: call 0x73340c */ r_esp -= 4; W32(r_esp, 0x75ef4au); f_0073340c();
    /* 0075ef4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075ef4d:; BB(0x0075ef4d);
    /* 0075ef4d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef50: call 0x717fb0 */ r_esp -= 4; W32(r_esp, 0x75ef55u); f_00717fb0();
    /* 0075ef55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef58: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef5b: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x75ef60u); f_00718138();
    /* 0075ef60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ef6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef6d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75ef72u); f_008171e8();
    /* 0075ef72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075ef75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075ef7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075ef7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ef7f: ret  */ FN_RET(0x0075ee70); r_esp += 4; return;
}

void f_0075ee82(void)
{
    FN_ENTER(0x0075ee82);
    /* 0075ee82: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075ee83: or byte ptr [ebx + 0x40c7e045], cl */ { u32 ad = (u32)(r_ebx+0x40c7e045u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0075ee89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ee8a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ee8c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ee8e: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0075ee91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee93: je 0x75eea4 */ if (fZ) goto L_0075eea4;
L_0075ee95:; BB(0x0075ee95);
    /* 0075ee95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ee9au); f_007127b0();
    /* 0075ee9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee9d: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0075eea4:; BB(0x0075eea4);
    /* 0075eea4: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075eea7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eea9: je 0x75eeba */ if (fZ) goto L_0075eeba;
L_0075eeab:; BB(0x0075eeab);
    /* 0075eeab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eeb0u); f_007127b0();
    /* 0075eeb0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eeb3: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_0075eeba:; BB(0x0075eeba);
    /* 0075eeba: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075eebd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eebf: je 0x75eed0 */ if (fZ) goto L_0075eed0;
L_0075eec1:; BB(0x0075eec1);
    /* 0075eec1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eec6u); f_007127b0();
    /* 0075eec6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eec9: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_0075eed0:; BB(0x0075eed0);
    /* 0075eed0: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075eed3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eed5: je 0x75eee6 */ if (fZ) goto L_0075eee6;
L_0075eed7:; BB(0x0075eed7);
    /* 0075eed7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eedcu); f_007127b0();
    /* 0075eedc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eedf: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_0075eee6:; BB(0x0075eee6);
    /* 0075eee6: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075eee9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eeeb: je 0x75eefc */ if (fZ) goto L_0075eefc;
L_0075eeed:; BB(0x0075eeed);
    /* 0075eeed: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eef2u); f_007127b0();
    /* 0075eef2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eef5: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0075eefc:; BB(0x0075eefc);
    /* 0075eefc: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075eeff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef01: je 0x75ef12 */ if (fZ) goto L_0075ef12;
L_0075ef03:; BB(0x0075ef03);
    /* 0075ef03: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75ef08u); f_0073d160();
    /* 0075ef08: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef0b: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075ef12:; BB(0x0075ef12);
    /* 0075ef12: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075ef15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef17: je 0x75ef28 */ if (fZ) goto L_0075ef28;
L_0075ef19:; BB(0x0075ef19);
    /* 0075ef19: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef1eu); f_007127b0();
    /* 0075ef1e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef21: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075ef28:; BB(0x0075ef28);
    /* 0075ef28: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075ef2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef2d: je 0x75ef3e */ if (fZ) goto L_0075ef3e;
L_0075ef2f:; BB(0x0075ef2f);
    /* 0075ef2f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef34u); f_007127b0();
    /* 0075ef34: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef37: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075ef3e:; BB(0x0075ef3e);
    /* 0075ef3e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075ef41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef43: je 0x75ef4d */ if (fZ) goto L_0075ef4d;
L_0075ef45:; BB(0x0075ef45);
    /* 0075ef45: call 0x73340c */ r_esp -= 4; W32(r_esp, 0x75ef4au); f_0073340c();
    /* 0075ef4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075ef4d:; BB(0x0075ef4d);
    /* 0075ef4d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef50: call 0x717fb0 */ r_esp -= 4; W32(r_esp, 0x75ef55u); f_00717fb0();
    /* 0075ef55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef58: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef5b: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x75ef60u); f_00718138();
    /* 0075ef60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ef6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef6d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75ef72u); f_008171e8();
    /* 0075ef72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075ef75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075ef7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075ef7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ef7f: ret  */ FN_RET(0x0075ee82); r_esp += 4; return;
}

void f_0075ee94(void)
{
    FN_ENTER(0x0075ee94);
    /* 0075ee94: psubsb mm2, qword ptr [esi] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(r_esi)); MM64 r; r.b[0] = (u8)(i8)rt_sat8((i32)(i8)a.b[0] - (i32)(i8)b.b[0]); r.b[1] = (u8)(i8)rt_sat8((i32)(i8)a.b[1] - (i32)(i8)b.b[1]); r.b[2] = (u8)(i8)rt_sat8((i32)(i8)a.b[2] - (i32)(i8)b.b[2]); r.b[3] = (u8)(i8)rt_sat8((i32)(i8)a.b[3] - (i32)(i8)b.b[3]); r.b[4] = (u8)(i8)rt_sat8((i32)(i8)a.b[4] - (i32)(i8)b.b[4]); r.b[5] = (u8)(i8)rt_sat8((i32)(i8)a.b[5] - (i32)(i8)b.b[5]); r.b[6] = (u8)(i8)rt_sat8((i32)(i8)a.b[6] - (i32)(i8)b.b[6]); r.b[7] = (u8)(i8)rt_sat8((i32)(i8)a.b[7] - (i32)(i8)b.b[7]); fpr[2] = (long double)(i64)(r.q); }
    /* 0075ee97: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;   }
    /* 0075ee99: dec dword ptr [ebx + 0x40c7e045] */ { u32 ad = (u32)(r_ebx+0x40c7e045u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0075ee9f: dec esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075eea0: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075eea2: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075eea4: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075eea7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eea9: je 0x75eeba */ if (fZ) goto L_0075eeba;
L_0075eeab:; BB(0x0075eeab);
    /* 0075eeab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eeb0u); f_007127b0();
    /* 0075eeb0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eeb3: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_0075eeba:; BB(0x0075eeba);
    /* 0075eeba: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075eebd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eebf: je 0x75eed0 */ if (fZ) goto L_0075eed0;
L_0075eec1:; BB(0x0075eec1);
    /* 0075eec1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eec6u); f_007127b0();
    /* 0075eec6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eec9: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_0075eed0:; BB(0x0075eed0);
    /* 0075eed0: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075eed3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eed5: je 0x75eee6 */ if (fZ) goto L_0075eee6;
L_0075eed7:; BB(0x0075eed7);
    /* 0075eed7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eedcu); f_007127b0();
    /* 0075eedc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eedf: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_0075eee6:; BB(0x0075eee6);
    /* 0075eee6: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075eee9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eeeb: je 0x75eefc */ if (fZ) goto L_0075eefc;
L_0075eeed:; BB(0x0075eeed);
    /* 0075eeed: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eef2u); f_007127b0();
    /* 0075eef2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eef5: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0075eefc:; BB(0x0075eefc);
    /* 0075eefc: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075eeff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef01: je 0x75ef12 */ if (fZ) goto L_0075ef12;
L_0075ef03:; BB(0x0075ef03);
    /* 0075ef03: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75ef08u); f_0073d160();
    /* 0075ef08: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef0b: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075ef12:; BB(0x0075ef12);
    /* 0075ef12: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075ef15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef17: je 0x75ef28 */ if (fZ) goto L_0075ef28;
L_0075ef19:; BB(0x0075ef19);
    /* 0075ef19: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef1eu); f_007127b0();
    /* 0075ef1e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef21: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075ef28:; BB(0x0075ef28);
    /* 0075ef28: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075ef2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef2d: je 0x75ef3e */ if (fZ) goto L_0075ef3e;
L_0075ef2f:; BB(0x0075ef2f);
    /* 0075ef2f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef34u); f_007127b0();
    /* 0075ef34: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef37: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075ef3e:; BB(0x0075ef3e);
    /* 0075ef3e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075ef41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef43: je 0x75ef4d */ if (fZ) goto L_0075ef4d;
L_0075ef45:; BB(0x0075ef45);
    /* 0075ef45: call 0x73340c */ r_esp -= 4; W32(r_esp, 0x75ef4au); f_0073340c();
    /* 0075ef4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075ef4d:; BB(0x0075ef4d);
    /* 0075ef4d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef50: call 0x717fb0 */ r_esp -= 4; W32(r_esp, 0x75ef55u); f_00717fb0();
    /* 0075ef55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef58: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef5b: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x75ef60u); f_00718138();
    /* 0075ef60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ef6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef6d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75ef72u); f_008171e8();
    /* 0075ef72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075ef75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075ef7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075ef7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ef7f: ret  */ FN_RET(0x0075ee94); r_esp += 4; return;
}

void f_0075eea4(void)
{
    FN_ENTER(0x0075eea4);
    /* 0075eea4: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075eea7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eea9: je 0x75eeba */ if (fZ) goto L_0075eeba;
L_0075eeab:; BB(0x0075eeab);
    /* 0075eeab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eeb0u); f_007127b0();
    /* 0075eeb0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eeb3: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_0075eeba:; BB(0x0075eeba);
    /* 0075eeba: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075eebd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eebf: je 0x75eed0 */ if (fZ) goto L_0075eed0;
L_0075eec1:; BB(0x0075eec1);
    /* 0075eec1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eec6u); f_007127b0();
    /* 0075eec6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eec9: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_0075eed0:; BB(0x0075eed0);
    /* 0075eed0: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075eed3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eed5: je 0x75eee6 */ if (fZ) goto L_0075eee6;
L_0075eed7:; BB(0x0075eed7);
    /* 0075eed7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eedcu); f_007127b0();
    /* 0075eedc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eedf: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_0075eee6:; BB(0x0075eee6);
    /* 0075eee6: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075eee9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eeeb: je 0x75eefc */ if (fZ) goto L_0075eefc;
L_0075eeed:; BB(0x0075eeed);
    /* 0075eeed: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eef2u); f_007127b0();
    /* 0075eef2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eef5: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0075eefc:; BB(0x0075eefc);
    /* 0075eefc: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075eeff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef01: je 0x75ef12 */ if (fZ) goto L_0075ef12;
L_0075ef03:; BB(0x0075ef03);
    /* 0075ef03: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75ef08u); f_0073d160();
    /* 0075ef08: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef0b: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075ef12:; BB(0x0075ef12);
    /* 0075ef12: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075ef15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef17: je 0x75ef28 */ if (fZ) goto L_0075ef28;
L_0075ef19:; BB(0x0075ef19);
    /* 0075ef19: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef1eu); f_007127b0();
    /* 0075ef1e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef21: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075ef28:; BB(0x0075ef28);
    /* 0075ef28: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075ef2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef2d: je 0x75ef3e */ if (fZ) goto L_0075ef3e;
L_0075ef2f:; BB(0x0075ef2f);
    /* 0075ef2f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef34u); f_007127b0();
    /* 0075ef34: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef37: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075ef3e:; BB(0x0075ef3e);
    /* 0075ef3e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075ef41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef43: je 0x75ef4d */ if (fZ) goto L_0075ef4d;
L_0075ef45:; BB(0x0075ef45);
    /* 0075ef45: call 0x73340c */ r_esp -= 4; W32(r_esp, 0x75ef4au); f_0073340c();
    /* 0075ef4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075ef4d:; BB(0x0075ef4d);
    /* 0075ef4d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef50: call 0x717fb0 */ r_esp -= 4; W32(r_esp, 0x75ef55u); f_00717fb0();
    /* 0075ef55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef58: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef5b: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x75ef60u); f_00718138();
    /* 0075ef60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ef6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef6d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75ef72u); f_008171e8();
    /* 0075ef72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075ef75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075ef7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075ef7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ef7f: ret  */ FN_RET(0x0075eea4); r_esp += 4; return;
}

void f_0075eeb2(void)
{
    FN_ENTER(0x0075eeb2);
    goto L_0075eeb2;
L_0075ee7b:; BB(0x0075ee7b);
    /* 0075ee7b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075ee80: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0075ee84: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee87: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
    /* 0075ee8e: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0075ee91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee93: je 0x75eea4 */ if (fZ) goto L_0075eea4;
L_0075ee95:; BB(0x0075ee95);
    /* 0075ee95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ee9au); f_007127b0();
    /* 0075ee9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee9d: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0075eea4:; BB(0x0075eea4);
    /* 0075eea4: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075eea7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eea9: je 0x75eeba */ if (fZ) goto L_0075eeba;
L_0075eeab:; BB(0x0075eeab);
    /* 0075eeab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eeb0u); f_007127b0();
    /* 0075eeb0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075eeb2:; BB(0x0075eeb2);
    /* 0075eeb2: loopne 0x75ee7b */ r_ecx--; if (r_ecx && !fZ) goto L_0075ee7b;
    /* 0075eeb3: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 0075eeb4: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075eeb5: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0075eeb6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075eeb8: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0075eeba:; BB(0x0075eeba);
    /* 0075eeba: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075eebd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eebf: je 0x75eed0 */ if (fZ) goto L_0075eed0;
L_0075eec1:; BB(0x0075eec1);
    /* 0075eec1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eec6u); f_007127b0();
    /* 0075eec6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eec9: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_0075eed0:; BB(0x0075eed0);
    /* 0075eed0: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075eed3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eed5: je 0x75eee6 */ if (fZ) goto L_0075eee6;
L_0075eed7:; BB(0x0075eed7);
    /* 0075eed7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eedcu); f_007127b0();
    /* 0075eedc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eedf: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_0075eee6:; BB(0x0075eee6);
    /* 0075eee6: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075eee9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eeeb: je 0x75eefc */ if (fZ) goto L_0075eefc;
L_0075eeed:; BB(0x0075eeed);
    /* 0075eeed: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eef2u); f_007127b0();
    /* 0075eef2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eef5: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0075eefc:; BB(0x0075eefc);
    /* 0075eefc: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075eeff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef01: je 0x75ef12 */ if (fZ) goto L_0075ef12;
L_0075ef03:; BB(0x0075ef03);
    /* 0075ef03: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75ef08u); f_0073d160();
    /* 0075ef08: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef0b: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075ef12:; BB(0x0075ef12);
    /* 0075ef12: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075ef15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef17: je 0x75ef28 */ if (fZ) goto L_0075ef28;
L_0075ef19:; BB(0x0075ef19);
    /* 0075ef19: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef1eu); f_007127b0();
    /* 0075ef1e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef21: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075ef28:; BB(0x0075ef28);
    /* 0075ef28: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075ef2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef2d: je 0x75ef3e */ if (fZ) goto L_0075ef3e;
L_0075ef2f:; BB(0x0075ef2f);
    /* 0075ef2f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef34u); f_007127b0();
    /* 0075ef34: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef37: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075ef3e:; BB(0x0075ef3e);
    /* 0075ef3e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075ef41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef43: je 0x75ef4d */ if (fZ) goto L_0075ef4d;
L_0075ef45:; BB(0x0075ef45);
    /* 0075ef45: call 0x73340c */ r_esp -= 4; W32(r_esp, 0x75ef4au); f_0073340c();
    /* 0075ef4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075ef4d:; BB(0x0075ef4d);
    /* 0075ef4d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef50: call 0x717fb0 */ r_esp -= 4; W32(r_esp, 0x75ef55u); f_00717fb0();
    /* 0075ef55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef58: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef5b: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x75ef60u); f_00718138();
    /* 0075ef60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ef6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef6d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75ef72u); f_008171e8();
    /* 0075ef72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075ef75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075ef7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075ef7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ef7f: ret  */ FN_RET(0x0075eeb2); r_esp += 4; return;
}

void f_0075eec8(void)
{
    FN_ENTER(0x0075eec8);
    goto L_0075eec8;
L_0075ee91:; BB(0x0075ee91);
    /* 0075ee91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ee93: je 0x75eea4 */ if (fZ) goto L_0075eea4;
L_0075ee95:; BB(0x0075ee95);
    /* 0075ee95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ee9au); f_007127b0();
    /* 0075ee9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ee9d: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0075eea4:; BB(0x0075eea4);
    /* 0075eea4: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075eea7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eea9: je 0x75eeba */ if (fZ) goto L_0075eeba;
L_0075eeab:; BB(0x0075eeab);
    /* 0075eeab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eeb0u); f_007127b0();
    /* 0075eeb0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eeb3: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_0075eeba:; BB(0x0075eeba);
    /* 0075eeba: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075eebd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eebf: je 0x75eed0 */ if (fZ) goto L_0075eed0;
L_0075eec1:; BB(0x0075eec1);
    /* 0075eec1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eec6u); f_007127b0();
    /* 0075eec6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075eec8:; BB(0x0075eec8);
    /* 0075eec8: loopne 0x75ee91 */ r_ecx--; if (r_ecx && !fZ) goto L_0075ee91;
    /* 0075eec9: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
    /* 0075eeca: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075eecb: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075eecc: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075eece: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0075eed0:; BB(0x0075eed0);
    /* 0075eed0: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075eed3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eed5: je 0x75eee6 */ if (fZ) goto L_0075eee6;
L_0075eed7:; BB(0x0075eed7);
    /* 0075eed7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eedcu); f_007127b0();
    /* 0075eedc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eedf: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_0075eee6:; BB(0x0075eee6);
    /* 0075eee6: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075eee9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eeeb: je 0x75eefc */ if (fZ) goto L_0075eefc;
L_0075eeed:; BB(0x0075eeed);
    /* 0075eeed: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eef2u); f_007127b0();
    /* 0075eef2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eef5: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0075eefc:; BB(0x0075eefc);
    /* 0075eefc: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075eeff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef01: je 0x75ef12 */ if (fZ) goto L_0075ef12;
L_0075ef03:; BB(0x0075ef03);
    /* 0075ef03: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75ef08u); f_0073d160();
    /* 0075ef08: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef0b: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075ef12:; BB(0x0075ef12);
    /* 0075ef12: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075ef15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef17: je 0x75ef28 */ if (fZ) goto L_0075ef28;
L_0075ef19:; BB(0x0075ef19);
    /* 0075ef19: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef1eu); f_007127b0();
    /* 0075ef1e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef21: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075ef28:; BB(0x0075ef28);
    /* 0075ef28: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075ef2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef2d: je 0x75ef3e */ if (fZ) goto L_0075ef3e;
L_0075ef2f:; BB(0x0075ef2f);
    /* 0075ef2f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef34u); f_007127b0();
    /* 0075ef34: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef37: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075ef3e:; BB(0x0075ef3e);
    /* 0075ef3e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075ef41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef43: je 0x75ef4d */ if (fZ) goto L_0075ef4d;
L_0075ef45:; BB(0x0075ef45);
    /* 0075ef45: call 0x73340c */ r_esp -= 4; W32(r_esp, 0x75ef4au); f_0073340c();
    /* 0075ef4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075ef4d:; BB(0x0075ef4d);
    /* 0075ef4d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef50: call 0x717fb0 */ r_esp -= 4; W32(r_esp, 0x75ef55u); f_00717fb0();
    /* 0075ef55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef58: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef5b: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x75ef60u); f_00718138();
    /* 0075ef60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ef6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef6d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75ef72u); f_008171e8();
    /* 0075ef72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075ef75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075ef7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075ef7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ef7f: ret  */ FN_RET(0x0075eec8); r_esp += 4; return;
}

void f_0075eed8(void)
{
    FN_ENTER(0x0075eed8);
    /* 0075eed8: aam 0x38 */ UNSUP(0x0075eed8, "aam 0x38");
    /* 0075eeda: sti  */ UNSUP(0x0075eeda, "sti ");
    /* 0075eedb: dec dword ptr [ebx + 0x40c7e045] */ { u32 ad = (u32)(r_ebx+0x40c7e045u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0075eee1: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075eee2: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075eee4: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075eee6: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075eee9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075eeeb: je 0x75eefc */ if (fZ) goto L_0075eefc;
L_0075eeed:; BB(0x0075eeed);
    /* 0075eeed: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75eef2u); f_007127b0();
    /* 0075eef2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eef5: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0075eefc:; BB(0x0075eefc);
    /* 0075eefc: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075eeff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef01: je 0x75ef12 */ if (fZ) goto L_0075ef12;
L_0075ef03:; BB(0x0075ef03);
    /* 0075ef03: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75ef08u); f_0073d160();
    /* 0075ef08: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef0b: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075ef12:; BB(0x0075ef12);
    /* 0075ef12: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075ef15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef17: je 0x75ef28 */ if (fZ) goto L_0075ef28;
L_0075ef19:; BB(0x0075ef19);
    /* 0075ef19: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef1eu); f_007127b0();
    /* 0075ef1e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef21: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075ef28:; BB(0x0075ef28);
    /* 0075ef28: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075ef2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef2d: je 0x75ef3e */ if (fZ) goto L_0075ef3e;
L_0075ef2f:; BB(0x0075ef2f);
    /* 0075ef2f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef34u); f_007127b0();
    /* 0075ef34: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef37: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075ef3e:; BB(0x0075ef3e);
    /* 0075ef3e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075ef41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef43: je 0x75ef4d */ if (fZ) goto L_0075ef4d;
L_0075ef45:; BB(0x0075ef45);
    /* 0075ef45: call 0x73340c */ r_esp -= 4; W32(r_esp, 0x75ef4au); f_0073340c();
    /* 0075ef4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075ef4d:; BB(0x0075ef4d);
    /* 0075ef4d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef50: call 0x717fb0 */ r_esp -= 4; W32(r_esp, 0x75ef55u); f_00717fb0();
    /* 0075ef55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef58: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef5b: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x75ef60u); f_00718138();
    /* 0075ef60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ef6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef6d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75ef72u); f_008171e8();
    /* 0075ef72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075ef75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075ef7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075ef7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ef7f: ret  */ FN_RET(0x0075eed8); r_esp += 4; return;
}

void f_0075eef2(void)
{
    FN_ENTER(0x0075eef2);
    /* 0075eef2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075eef5: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
    /* 0075eefc: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075eeff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef01: je 0x75ef12 */ if (fZ) goto L_0075ef12;
L_0075ef03:; BB(0x0075ef03);
    /* 0075ef03: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75ef08u); f_0073d160();
    /* 0075ef08: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef0b: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075ef12:; BB(0x0075ef12);
    /* 0075ef12: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075ef15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef17: je 0x75ef28 */ if (fZ) goto L_0075ef28;
L_0075ef19:; BB(0x0075ef19);
    /* 0075ef19: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef1eu); f_007127b0();
    /* 0075ef1e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef21: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075ef28:; BB(0x0075ef28);
    /* 0075ef28: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075ef2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef2d: je 0x75ef3e */ if (fZ) goto L_0075ef3e;
L_0075ef2f:; BB(0x0075ef2f);
    /* 0075ef2f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef34u); f_007127b0();
    /* 0075ef34: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef37: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075ef3e:; BB(0x0075ef3e);
    /* 0075ef3e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075ef41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef43: je 0x75ef4d */ if (fZ) goto L_0075ef4d;
L_0075ef45:; BB(0x0075ef45);
    /* 0075ef45: call 0x73340c */ r_esp -= 4; W32(r_esp, 0x75ef4au); f_0073340c();
    /* 0075ef4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075ef4d:; BB(0x0075ef4d);
    /* 0075ef4d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef50: call 0x717fb0 */ r_esp -= 4; W32(r_esp, 0x75ef55u); f_00717fb0();
    /* 0075ef55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef58: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef5b: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x75ef60u); f_00718138();
    /* 0075ef60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ef6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef6d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75ef72u); f_008171e8();
    /* 0075ef72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075ef75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075ef7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075ef7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ef7f: ret  */ FN_RET(0x0075eef2); r_esp += 4; return;
}

void f_0075ef06(void)
{
    FN_ENTER(0x0075ef06);
    /* 0075ef06: std  */ rt_df = 1;
    /* 0075ef07: dec dword ptr [ebx + 0x40c7e045] */ { u32 ad = (u32)(r_ebx+0x40c7e045u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0075ef0d: cmp byte ptr [eax], al */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;   }
    /* 0075ef0f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ef11: add byte ptr [ebx - 0x367acbb8], cl */ { u32 ad = (u32)(r_ebx+0xc9853448u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 0075ef17: je 0x75ef28 */ if (fZ) goto L_0075ef28;
L_0075ef19:; BB(0x0075ef19);
    /* 0075ef19: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef1eu); f_007127b0();
    /* 0075ef1e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef21: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075ef28:; BB(0x0075ef28);
    /* 0075ef28: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075ef2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef2d: je 0x75ef3e */ if (fZ) goto L_0075ef3e;
L_0075ef2f:; BB(0x0075ef2f);
    /* 0075ef2f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef34u); f_007127b0();
    /* 0075ef34: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef37: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075ef3e:; BB(0x0075ef3e);
    /* 0075ef3e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075ef41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef43: je 0x75ef4d */ if (fZ) goto L_0075ef4d;
L_0075ef45:; BB(0x0075ef45);
    /* 0075ef45: call 0x73340c */ r_esp -= 4; W32(r_esp, 0x75ef4au); f_0073340c();
    /* 0075ef4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075ef4d:; BB(0x0075ef4d);
    /* 0075ef4d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef50: call 0x717fb0 */ r_esp -= 4; W32(r_esp, 0x75ef55u); f_00717fb0();
    /* 0075ef55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef58: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef5b: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x75ef60u); f_00718138();
    /* 0075ef60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ef6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef6d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75ef72u); f_008171e8();
    /* 0075ef72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075ef75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075ef7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075ef7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ef7f: ret  */ FN_RET(0x0075ef06); r_esp += 4; return;
}

void f_0075ef12(void)
{
    FN_ENTER(0x0075ef12);
    /* 0075ef12: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075ef15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef17: je 0x75ef28 */ if (fZ) goto L_0075ef28;
L_0075ef19:; BB(0x0075ef19);
    /* 0075ef19: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef1eu); f_007127b0();
    /* 0075ef1e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef21: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075ef28:; BB(0x0075ef28);
    /* 0075ef28: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075ef2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef2d: je 0x75ef3e */ if (fZ) goto L_0075ef3e;
L_0075ef2f:; BB(0x0075ef2f);
    /* 0075ef2f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef34u); f_007127b0();
    /* 0075ef34: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef37: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075ef3e:; BB(0x0075ef3e);
    /* 0075ef3e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075ef41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef43: je 0x75ef4d */ if (fZ) goto L_0075ef4d;
L_0075ef45:; BB(0x0075ef45);
    /* 0075ef45: call 0x73340c */ r_esp -= 4; W32(r_esp, 0x75ef4au); f_0073340c();
    /* 0075ef4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075ef4d:; BB(0x0075ef4d);
    /* 0075ef4d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef50: call 0x717fb0 */ r_esp -= 4; W32(r_esp, 0x75ef55u); f_00717fb0();
    /* 0075ef55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef58: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef5b: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x75ef60u); f_00718138();
    /* 0075ef60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ef6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef6d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75ef72u); f_008171e8();
    /* 0075ef72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075ef75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075ef7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075ef7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ef7f: ret  */ FN_RET(0x0075ef12); r_esp += 4; return;
}

void f_0075ef22(void)
{
    FN_ENTER(0x0075ef22);
    /* 0075ef22: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075ef23: xor al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075ef25: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ef27: add byte ptr [ebx - 0x367acfb8], cl */ { u32 ad = (u32)(r_ebx+0xc9853048u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 0075ef2d: je 0x75ef3e */ if (fZ) goto L_0075ef3e;
L_0075ef2f:; BB(0x0075ef2f);
    /* 0075ef2f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef34u); f_007127b0();
    /* 0075ef34: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef37: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075ef3e:; BB(0x0075ef3e);
    /* 0075ef3e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075ef41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef43: je 0x75ef4d */ if (fZ) goto L_0075ef4d;
L_0075ef45:; BB(0x0075ef45);
    /* 0075ef45: call 0x73340c */ r_esp -= 4; W32(r_esp, 0x75ef4au); f_0073340c();
    /* 0075ef4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075ef4d:; BB(0x0075ef4d);
    /* 0075ef4d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef50: call 0x717fb0 */ r_esp -= 4; W32(r_esp, 0x75ef55u); f_00717fb0();
    /* 0075ef55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef58: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef5b: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x75ef60u); f_00718138();
    /* 0075ef60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ef6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef6d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75ef72u); f_008171e8();
    /* 0075ef72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075ef75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075ef7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075ef7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ef7f: ret  */ FN_RET(0x0075ef22); r_esp += 4; return;
}

void f_0075ef2c(void)
{
    FN_ENTER(0x0075ef2c);
    /* 0075ef2c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0075ef2d: je 0x75ef3e */ if (fZ) goto L_0075ef3e;
L_0075ef2f:; BB(0x0075ef2f);
    /* 0075ef2f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75ef34u); f_007127b0();
    /* 0075ef34: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef37: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0075ef3e:; BB(0x0075ef3e);
    /* 0075ef3e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075ef41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef43: je 0x75ef4d */ if (fZ) goto L_0075ef4d;
L_0075ef45:; BB(0x0075ef45);
    /* 0075ef45: call 0x73340c */ r_esp -= 4; W32(r_esp, 0x75ef4au); f_0073340c();
    /* 0075ef4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075ef4d:; BB(0x0075ef4d);
    /* 0075ef4d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef50: call 0x717fb0 */ r_esp -= 4; W32(r_esp, 0x75ef55u); f_00717fb0();
    /* 0075ef55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef58: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef5b: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x75ef60u); f_00718138();
    /* 0075ef60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ef6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef6d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75ef72u); f_008171e8();
    /* 0075ef72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075ef75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075ef7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075ef7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ef7f: ret  */ FN_RET(0x0075ef2c); r_esp += 4; return;
}

void f_0075ef3a(void)
{
    FN_ENTER(0x0075ef3a);
    /* 0075ef3a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ef3c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ef3e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075ef41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ef43: je 0x75ef4d */ if (fZ) goto L_0075ef4d;
L_0075ef45:; BB(0x0075ef45);
    /* 0075ef45: call 0x73340c */ r_esp -= 4; W32(r_esp, 0x75ef4au); f_0073340c();
    /* 0075ef4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075ef4d:; BB(0x0075ef4d);
    /* 0075ef4d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef50: call 0x717fb0 */ r_esp -= 4; W32(r_esp, 0x75ef55u); f_00717fb0();
    /* 0075ef55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef58: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef5b: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x75ef60u); f_00718138();
    /* 0075ef60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ef6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef6d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75ef72u); f_008171e8();
    /* 0075ef72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075ef75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075ef7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075ef7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ef7f: ret  */ FN_RET(0x0075ef3a); r_esp += 4; return;
}

void f_0075ef48(void)
{
    FN_ENTER(0x0075ef48);
    /* 0075ef48: std  */ rt_df = 1;
    /* 0075ef49: dec dword ptr [ebx + 0x70ffe045] */ { u32 ad = (u32)(r_ebx+0x70ffe045u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0075ef4f: sub al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075ef51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075ef52: nop  */ ;
    /* 0075ef53: sti  */ UNSUP(0x0075ef53, "sti ");
    /* 0075ef54: dec dword ptr [ebx + 0x70ffe045] */ { u32 ad = (u32)(r_ebx+0x70ffe045u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0075ef5a: sub al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075ef5c: fcom dword ptr [ecx - 0x3b7c0005] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0xc483fffbu))); 
    /* 0075ef62: or bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0075ef64: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0075ef65: cld  */ rt_df = 0;
    UNSUP(0x0075ef66, "falls out of decoded code");
}

void f_0075ef56(void)
{
    FN_ENTER(0x0075ef56);
    /* 0075ef56: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0075ef57: loopne 0x75ef58 */ r_ecx--; if (r_ecx && !fZ) goto L_0075ef58;
L_0075ef58:; BB(0x0075ef58);
    /* 0075ef58: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef59: jo 0x75ef83 */ if (fO) goto L_0075ef83;
L_0075ef5b:; BB(0x0075ef5b);
    /* 0075ef5b: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x75ef60u); f_00718138();
    /* 0075ef60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef63: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ef6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075ef6d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75ef72u); f_008171e8();
    /* 0075ef72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075ef75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075ef7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075ef7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075ef7f: ret  */ FN_RET(0x0075ef56); r_esp += 4; return;
L_0075ef83:; BB(0x0075ef83);
    /* 0075ef83: sub byte ptr [ecx - 0x18], dl */ { u32 ad = (u32)(r_ecx+0xffffffe8u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 0075ef86: add bl, dh */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075ef88: std  */ rt_df = 1;
    /* 0075ef89: dec dword ptr [ebx - 0x179d9508] */ { u32 ad = (u32)(r_ebx+0xe8626af8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0075ef8f: mov ebp, 0x83fffdfc */ r_ebp = 0x83fffdfcu;
    /* 0075ef94: les ecx, ptr [eax + ebp*2] */ UNSUP(0x0075ef94, "les ecx, ptr [eax + ebp*2]");
    /* 0075ef97: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ef99: lea eax, [ebx + 0x50] */ r_eax = (u32)(r_ebx+0x50u);
    /* 0075ef9c: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ef9e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075efa2: call 0x73d0b0 */ r_esp -= 4; W32(r_esp, 0x75efa7u); f_0073d0b0();
    /* 0075efa7: mov eax, edi */ r_eax = r_edi;
    /* 0075efa9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075efaa: ret 4 */ FN_RET(0x0075ef56); r_esp += 8; return;
}

void f_0075ef66(void)
{
    FN_ENTER(0x0075ef66);
}

void f_0075ef74(void)
{
    FN_ENTER(0x0075ef74);
    /* 0075ef74: hlt  */ UNSUP(0x0075ef74, "hlt");
}

void f_0075ef80(void) /* sub_75EF80 */
{
    FN_ENTER(0x0075ef80);
    /* 0075ef80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075ef81: push dword ptr [ecx + 0x28] */ { u32 v = R32((u32)(r_ecx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ef84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ef85: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x75ef8au); f_0073cd8c();
    /* 0075ef8a: mov edi, eax */ r_edi = r_eax;
    /* 0075ef8c: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ef8e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ef93u); f_0073ec50();
    /* 0075ef93: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef96: push 0x438d0000 */ { u32 v = 0x438d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ef9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ef9c: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ef9e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075efa2: call 0x73d0b0 */ r_esp -= 4; W32(r_esp, 0x75efa7u); f_0073d0b0();
    /* 0075efa7: mov eax, edi */ r_eax = r_edi;
    /* 0075efa9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075efaa: ret 4 */ FN_RET(0x0075ef80); r_esp += 8; return;
}

void f_0075ef84(void)
{
    FN_ENTER(0x0075ef84);
    /* 0075ef84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ef85: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x75ef8au); f_0073cd8c();
    /* 0075ef8a: mov edi, eax */ r_edi = r_eax;
    /* 0075ef8c: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ef8e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ef93u); f_0073ec50();
    /* 0075ef93: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ef96: push 0x438d0000 */ { u32 v = 0x438d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ef9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ef9c: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ef9e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075efa2: call 0x73d0b0 */ r_esp -= 4; W32(r_esp, 0x75efa7u); f_0073d0b0();
    /* 0075efa7: mov eax, edi */ r_eax = r_edi;
    /* 0075efa9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075efaa: ret 4 */ FN_RET(0x0075ef84); r_esp += 8; return;
}

void f_0075ef94(void)
{
    FN_ENTER(0x0075ef94);
    /* 0075ef94: les ecx, ptr [eax + ebp*2] */ UNSUP(0x0075ef94, "les ecx, ptr [eax + ebp*2]");
    /* 0075ef97: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075ef99: lea eax, [ebx + 0x50] */ r_eax = (u32)(r_ebx+0x50u);
    /* 0075ef9c: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ef9e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075efa2: call 0x73d0b0 */ r_esp -= 4; W32(r_esp, 0x75efa7u); f_0073d0b0();
    /* 0075efa7: mov eax, edi */ r_eax = r_edi;
    /* 0075efa9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075efaa: ret 4 */ FN_RET(0x0075ef94); r_esp += 8; return;
}

void f_0075efa4(void)
{
    FN_ENTER(0x0075efa4);
    goto L_0075efa4;
L_0075efa3:; BB(0x0075efa3);
    /* 0075efa3: or ecx, esp */ {  u32 a = r_ecx; u32 b = r_esp; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_0075efa4:; BB(0x0075efa4);
    /* 0075efa4: loope 0x75efa3 */ r_ecx--; if (r_ecx && fZ) goto L_0075efa3;
    /* 0075efa5: std  */ rt_df = 1;
    /* 0075efa6: dec dword ptr [ebx + 0x4c25fc7] */ { u32 ad = (u32)(r_ebx+0x4c25fc7u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0075efac: add byte ptr [eax - 0x74aa6f70], dl */ { u32 ad = (u32)(r_eax+0x8b559090u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075efb2: in al, dx */ UNSUP(0x0075efb2, "in al, dx");
    /* 0075efb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075efb5: push 0x8f3470 */ { u32 v = 0x8f3470u; r_esp -= 4; W32(r_esp, v); }
    /* 0075efba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075efc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075efc1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075efc8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075efcb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075efce: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0075efd1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0075efd4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0075efd7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0075efda: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0075efdd: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0075efe0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075efe1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0075efe4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0075efe7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x75efecu); f_008193cc();
    /* 0075efec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075eff3: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075eff6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075eff9: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075effc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075effd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075efff: mov dword ptr [edx], 0xb42db0 */ W32((u32)(r_edx), 0xb42db0u);
    /* 0075f005: mov esi, dword ptr [0x9f57c0] */ r_esi = R32((u32)(0x9f57c0u));
    /* 0075f00b: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 0075f00e: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 0075f011: mov dword ptr [edx + 0x24], 0xffffffff */ W32((u32)(r_edx+0x24u), 0xffffffffu);
    /* 0075f018: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f01b: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0075f01e: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0075f021: mov dword ptr [edx + 0x2c], edi */ W32((u32)(r_edx+0x2cu), r_edi);
    /* 0075f024: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0075f027: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0075f02a: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075f02d: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0075f030: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0075f033: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0075f036: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0075f039: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0075f03c: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0075f03f: call 0x718168 */ r_esp -= 4; W32(r_esp, 0x75f044u); f_00718168();
    /* 0075f044: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f047: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f04a: call 0x717fe0 */ r_esp -= 4; W32(r_esp, 0x75f04fu); f_00717fe0();
    /* 0075f04f: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f052: call 0x826048 */ r_esp -= 4; W32(r_esp, 0x75f057u); f_00826048();
    /* 0075f057: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f05a: call 0x826eb4 */ r_esp -= 4; W32(r_esp, 0x75f05fu); f_00826eb4();
    /* 0075f05f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f062: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075f065: call 0x732950 */ r_esp -= 4; W32(r_esp, 0x75f06au); f_00732950();
    /* 0075f06a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f06d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f070: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75f075u); f_0068d5a8();
    /* 0075f075: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f078: je 0x75f081 */ if (fZ) goto L_0075f081;
L_0075f07a:; BB(0x0075f07a);
    /* 0075f07a: mov ecx, eax */ r_ecx = r_eax;
    /* 0075f07c: call 0x685550 */ r_esp -= 4; W32(r_esp, 0x75f081u); f_00685550();
L_0075f081:; BB(0x0075f081);
    /* 0075f081: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f084: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075f087: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075f08a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f08d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f094: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f096: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f097: ret 8 */ FN_RET(0x0075efa4); r_esp += 12; return;
}

void f_0075efb0(void) /* sub_75EFB0 */
{
    FN_ENTER(0x0075efb0);
    /* 0075efb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075efb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0075efb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075efb5: push 0x8f3470 */ { u32 v = 0x8f3470u; r_esp -= 4; W32(r_esp, v); }
    /* 0075efba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075efc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075efc1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075efc8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075efcb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075efce: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0075efd1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0075efd4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0075efd7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0075efda: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0075efdd: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0075efe0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075efe1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0075efe4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0075efe7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x75efecu); f_008193cc();
    /* 0075efec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075eff3: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075eff6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075eff9: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075effc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075effd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075efff: mov dword ptr [edx], 0xb42db0 */ W32((u32)(r_edx), 0xb42db0u);
    /* 0075f005: mov esi, dword ptr [0x9f57c0] */ r_esi = R32((u32)(0x9f57c0u));
    /* 0075f00b: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 0075f00e: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 0075f011: mov dword ptr [edx + 0x24], 0xffffffff */ W32((u32)(r_edx+0x24u), 0xffffffffu);
    /* 0075f018: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f01b: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0075f01e: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0075f021: mov dword ptr [edx + 0x2c], edi */ W32((u32)(r_edx+0x2cu), r_edi);
    /* 0075f024: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0075f027: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0075f02a: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075f02d: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0075f030: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0075f033: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0075f036: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0075f039: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0075f03c: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0075f03f: call 0x718168 */ r_esp -= 4; W32(r_esp, 0x75f044u); f_00718168();
    /* 0075f044: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f047: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f04a: call 0x717fe0 */ r_esp -= 4; W32(r_esp, 0x75f04fu); f_00717fe0();
    /* 0075f04f: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f052: call 0x826048 */ r_esp -= 4; W32(r_esp, 0x75f057u); f_00826048();
    /* 0075f057: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f05a: call 0x826eb4 */ r_esp -= 4; W32(r_esp, 0x75f05fu); f_00826eb4();
    /* 0075f05f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f062: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075f065: call 0x732950 */ r_esp -= 4; W32(r_esp, 0x75f06au); f_00732950();
    /* 0075f06a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f06d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f070: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75f075u); f_0068d5a8();
    /* 0075f075: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f078: je 0x75f081 */ if (fZ) goto L_0075f081;
L_0075f07a:; BB(0x0075f07a);
    /* 0075f07a: mov ecx, eax */ r_ecx = r_eax;
    /* 0075f07c: call 0x685550 */ r_esp -= 4; W32(r_esp, 0x75f081u); f_00685550();
L_0075f081:; BB(0x0075f081);
    /* 0075f081: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f084: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075f087: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075f08a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f08d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f094: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f096: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f097: ret 8 */ FN_RET(0x0075efb0); r_esp += 12; return;
}

void f_0075efb6(void)
{
    FN_ENTER(0x0075efb6);
    /* 0075efb6: jo 0x75efec */ if (fO) goto L_0075efec;
L_0075efb8:; BB(0x0075efb8);
    /* 0075efb8: pop dword ptr [eax] */ { u32 v = R32(r_esp); r_esp += 4; W32((u32)(r_eax), v); }
    /* 0075efba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075efc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075efc1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075efc8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075efcb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075efce: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0075efd1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0075efd4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0075efd7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0075efda: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0075efdd: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0075efe0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075efe1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0075efe4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0075efe7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x75efecu); f_008193cc();
L_0075efec:; BB(0x0075efec);
    /* 0075efec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075eff3: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075eff6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075eff9: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075effc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075effd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075efff: mov dword ptr [edx], 0xb42db0 */ W32((u32)(r_edx), 0xb42db0u);
    /* 0075f005: mov esi, dword ptr [0x9f57c0] */ r_esi = R32((u32)(0x9f57c0u));
    /* 0075f00b: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 0075f00e: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 0075f011: mov dword ptr [edx + 0x24], 0xffffffff */ W32((u32)(r_edx+0x24u), 0xffffffffu);
    /* 0075f018: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f01b: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0075f01e: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0075f021: mov dword ptr [edx + 0x2c], edi */ W32((u32)(r_edx+0x2cu), r_edi);
    /* 0075f024: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0075f027: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0075f02a: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075f02d: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0075f030: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0075f033: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0075f036: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0075f039: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0075f03c: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0075f03f: call 0x718168 */ r_esp -= 4; W32(r_esp, 0x75f044u); f_00718168();
    /* 0075f044: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f047: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f04a: call 0x717fe0 */ r_esp -= 4; W32(r_esp, 0x75f04fu); f_00717fe0();
    /* 0075f04f: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f052: call 0x826048 */ r_esp -= 4; W32(r_esp, 0x75f057u); f_00826048();
    /* 0075f057: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f05a: call 0x826eb4 */ r_esp -= 4; W32(r_esp, 0x75f05fu); f_00826eb4();
    /* 0075f05f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f062: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075f065: call 0x732950 */ r_esp -= 4; W32(r_esp, 0x75f06au); f_00732950();
    /* 0075f06a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f06d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f070: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75f075u); f_0068d5a8();
    /* 0075f075: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f078: je 0x75f081 */ if (fZ) goto L_0075f081;
L_0075f07a:; BB(0x0075f07a);
    /* 0075f07a: mov ecx, eax */ r_ecx = r_eax;
    /* 0075f07c: call 0x685550 */ r_esp -= 4; W32(r_esp, 0x75f081u); f_00685550();
L_0075f081:; BB(0x0075f081);
    /* 0075f081: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f084: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075f087: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075f08a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f08d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f094: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f096: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f097: ret 8 */ FN_RET(0x0075efb6); r_esp += 12; return;
}

void f_0075efc8(void)
{
    FN_ENTER(0x0075efc8);
    /* 0075efc8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075efcb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075efce: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0075efd1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0075efd4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0075efd7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0075efda: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0075efdd: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0075efe0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075efe1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0075efe4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0075efe7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x75efecu); f_008193cc();
    /* 0075efec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075eff3: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075eff6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075eff9: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075effc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075effd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075efff: mov dword ptr [edx], 0xb42db0 */ W32((u32)(r_edx), 0xb42db0u);
    /* 0075f005: mov esi, dword ptr [0x9f57c0] */ r_esi = R32((u32)(0x9f57c0u));
    /* 0075f00b: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 0075f00e: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 0075f011: mov dword ptr [edx + 0x24], 0xffffffff */ W32((u32)(r_edx+0x24u), 0xffffffffu);
    /* 0075f018: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f01b: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0075f01e: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0075f021: mov dword ptr [edx + 0x2c], edi */ W32((u32)(r_edx+0x2cu), r_edi);
    /* 0075f024: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0075f027: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0075f02a: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075f02d: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0075f030: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0075f033: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0075f036: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0075f039: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0075f03c: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0075f03f: call 0x718168 */ r_esp -= 4; W32(r_esp, 0x75f044u); f_00718168();
    /* 0075f044: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f047: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f04a: call 0x717fe0 */ r_esp -= 4; W32(r_esp, 0x75f04fu); f_00717fe0();
    /* 0075f04f: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f052: call 0x826048 */ r_esp -= 4; W32(r_esp, 0x75f057u); f_00826048();
    /* 0075f057: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f05a: call 0x826eb4 */ r_esp -= 4; W32(r_esp, 0x75f05fu); f_00826eb4();
    /* 0075f05f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f062: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075f065: call 0x732950 */ r_esp -= 4; W32(r_esp, 0x75f06au); f_00732950();
    /* 0075f06a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f06d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f070: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75f075u); f_0068d5a8();
    /* 0075f075: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f078: je 0x75f081 */ if (fZ) goto L_0075f081;
L_0075f07a:; BB(0x0075f07a);
    /* 0075f07a: mov ecx, eax */ r_ecx = r_eax;
    /* 0075f07c: call 0x685550 */ r_esp -= 4; W32(r_esp, 0x75f081u); f_00685550();
L_0075f081:; BB(0x0075f081);
    /* 0075f081: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f084: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075f087: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075f08a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f08d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f094: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f096: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f097: ret 8 */ FN_RET(0x0075efc8); r_esp += 12; return;
}

void f_0075efd4(void)
{
    FN_ENTER(0x0075efd4);
    /* 0075efd4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0075efd7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0075efda: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0075efdd: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0075efe0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075efe1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0075efe4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0075efe7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x75efecu); f_008193cc();
    /* 0075efec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075eff3: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075eff6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075eff9: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075effc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075effd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075efff: mov dword ptr [edx], 0xb42db0 */ W32((u32)(r_edx), 0xb42db0u);
    /* 0075f005: mov esi, dword ptr [0x9f57c0] */ r_esi = R32((u32)(0x9f57c0u));
    /* 0075f00b: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 0075f00e: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 0075f011: mov dword ptr [edx + 0x24], 0xffffffff */ W32((u32)(r_edx+0x24u), 0xffffffffu);
    /* 0075f018: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f01b: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0075f01e: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0075f021: mov dword ptr [edx + 0x2c], edi */ W32((u32)(r_edx+0x2cu), r_edi);
    /* 0075f024: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0075f027: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0075f02a: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075f02d: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0075f030: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0075f033: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0075f036: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0075f039: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0075f03c: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0075f03f: call 0x718168 */ r_esp -= 4; W32(r_esp, 0x75f044u); f_00718168();
    /* 0075f044: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f047: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f04a: call 0x717fe0 */ r_esp -= 4; W32(r_esp, 0x75f04fu); f_00717fe0();
    /* 0075f04f: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f052: call 0x826048 */ r_esp -= 4; W32(r_esp, 0x75f057u); f_00826048();
    /* 0075f057: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f05a: call 0x826eb4 */ r_esp -= 4; W32(r_esp, 0x75f05fu); f_00826eb4();
    /* 0075f05f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f062: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075f065: call 0x732950 */ r_esp -= 4; W32(r_esp, 0x75f06au); f_00732950();
    /* 0075f06a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f06d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f070: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75f075u); f_0068d5a8();
    /* 0075f075: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f078: je 0x75f081 */ if (fZ) goto L_0075f081;
L_0075f07a:; BB(0x0075f07a);
    /* 0075f07a: mov ecx, eax */ r_ecx = r_eax;
    /* 0075f07c: call 0x685550 */ r_esp -= 4; W32(r_esp, 0x75f081u); f_00685550();
L_0075f081:; BB(0x0075f081);
    /* 0075f081: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f084: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075f087: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075f08a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f08d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f094: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f096: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f097: ret 8 */ FN_RET(0x0075efd4); r_esp += 12; return;
}

void f_0075efe4(void)
{
    FN_ENTER(0x0075efe4);
    /* 0075efe4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0075efe7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x75efecu); f_008193cc();
    /* 0075efec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075eff3: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075eff6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075eff9: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075effc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075effd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075efff: mov dword ptr [edx], 0xb42db0 */ W32((u32)(r_edx), 0xb42db0u);
    /* 0075f005: mov esi, dword ptr [0x9f57c0] */ r_esi = R32((u32)(0x9f57c0u));
    /* 0075f00b: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 0075f00e: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 0075f011: mov dword ptr [edx + 0x24], 0xffffffff */ W32((u32)(r_edx+0x24u), 0xffffffffu);
    /* 0075f018: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f01b: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0075f01e: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0075f021: mov dword ptr [edx + 0x2c], edi */ W32((u32)(r_edx+0x2cu), r_edi);
    /* 0075f024: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0075f027: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0075f02a: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075f02d: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0075f030: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0075f033: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0075f036: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0075f039: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0075f03c: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0075f03f: call 0x718168 */ r_esp -= 4; W32(r_esp, 0x75f044u); f_00718168();
    /* 0075f044: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f047: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f04a: call 0x717fe0 */ r_esp -= 4; W32(r_esp, 0x75f04fu); f_00717fe0();
    /* 0075f04f: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f052: call 0x826048 */ r_esp -= 4; W32(r_esp, 0x75f057u); f_00826048();
    /* 0075f057: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f05a: call 0x826eb4 */ r_esp -= 4; W32(r_esp, 0x75f05fu); f_00826eb4();
    /* 0075f05f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f062: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075f065: call 0x732950 */ r_esp -= 4; W32(r_esp, 0x75f06au); f_00732950();
    /* 0075f06a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f06d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f070: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75f075u); f_0068d5a8();
    /* 0075f075: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f078: je 0x75f081 */ if (fZ) goto L_0075f081;
L_0075f07a:; BB(0x0075f07a);
    /* 0075f07a: mov ecx, eax */ r_ecx = r_eax;
    /* 0075f07c: call 0x685550 */ r_esp -= 4; W32(r_esp, 0x75f081u); f_00685550();
L_0075f081:; BB(0x0075f081);
    /* 0075f081: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f084: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075f087: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075f08a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f08d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f094: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f096: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f097: ret 8 */ FN_RET(0x0075efe4); r_esp += 12; return;
}

void f_0075eff2(void)
{
    FN_ENTER(0x0075eff2);
    /* 0075eff2: add byte ptr [ebx + 0x4d8bd855], cl */ { u32 ad = (u32)(r_ebx+0x4d8bd855u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075eff8: in al, dx */ UNSUP(0x0075eff8, "in al, dx");
    /* 0075eff9: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075effc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075effd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075efff: mov dword ptr [edx], 0xb42db0 */ W32((u32)(r_edx), 0xb42db0u);
    /* 0075f005: mov esi, dword ptr [0x9f57c0] */ r_esi = R32((u32)(0x9f57c0u));
    /* 0075f00b: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 0075f00e: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 0075f011: mov dword ptr [edx + 0x24], 0xffffffff */ W32((u32)(r_edx+0x24u), 0xffffffffu);
    /* 0075f018: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f01b: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0075f01e: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0075f021: mov dword ptr [edx + 0x2c], edi */ W32((u32)(r_edx+0x2cu), r_edi);
    /* 0075f024: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0075f027: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0075f02a: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075f02d: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0075f030: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0075f033: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0075f036: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0075f039: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0075f03c: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0075f03f: call 0x718168 */ r_esp -= 4; W32(r_esp, 0x75f044u); f_00718168();
    /* 0075f044: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f047: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f04a: call 0x717fe0 */ r_esp -= 4; W32(r_esp, 0x75f04fu); f_00717fe0();
    /* 0075f04f: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f052: call 0x826048 */ r_esp -= 4; W32(r_esp, 0x75f057u); f_00826048();
    /* 0075f057: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f05a: call 0x826eb4 */ r_esp -= 4; W32(r_esp, 0x75f05fu); f_00826eb4();
    /* 0075f05f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f062: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075f065: call 0x732950 */ r_esp -= 4; W32(r_esp, 0x75f06au); f_00732950();
    /* 0075f06a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f06d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f070: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75f075u); f_0068d5a8();
    /* 0075f075: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f078: je 0x75f081 */ if (fZ) goto L_0075f081;
L_0075f07a:; BB(0x0075f07a);
    /* 0075f07a: mov ecx, eax */ r_ecx = r_eax;
    /* 0075f07c: call 0x685550 */ r_esp -= 4; W32(r_esp, 0x75f081u); f_00685550();
L_0075f081:; BB(0x0075f081);
    /* 0075f081: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f084: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075f087: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075f08a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f08d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f094: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f096: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f097: ret 8 */ FN_RET(0x0075eff2); r_esp += 12; return;
}

