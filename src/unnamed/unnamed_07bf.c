#include "protos.h"

void f_007bfb64(void) /* sub_7BFB64 */
{
    FN_ENTER(0x007bfb64);
    /* 007bfb64: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007bfb68: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 007bfb6c: test dword ptr [esp + 8], eax */ {  u32 a = R32((u32)(r_esp+0x8u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bfb70: movsx edx, word ptr [ecx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 007bfb73: je 0x7bfb7a */ if (fZ) goto L_007bfb7a;
L_007bfb75:; BB(0x007bfb75);
    /* 007bfb75: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007bfb78: jmp 0x7bfb7c */ goto L_007bfb7c;
L_007bfb7a:; BB(0x007bfb7a);
    /* 007bfb7a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_007bfb7c:; BB(0x007bfb7c);
    /* 007bfb7c: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 007bfb7f: ret 0xc */ FN_RET(0x007bfb64); r_esp += 16; return;
}

void f_007bfb84(void) /* sub_7BFB84 */
{
    FN_ENTER(0x007bfb84);
    /* 007bfb84: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007bfb88: or dword ptr [ecx + 0x48], eax */ { u32 ad = (u32)(r_ecx+0x48u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 007bfb8b: test dword ptr [esp + 8], eax */ {  u32 a = R32((u32)(r_esp+0x8u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bfb8f: je 0x7bfb99 */ if (fZ) goto L_007bfb99;
L_007bfb91:; BB(0x007bfb91);
    /* 007bfb91: not eax */ r_eax = ~r_eax;
    /* 007bfb93: and dword ptr [ecx + 0x4c], eax */ { u32 ad = (u32)(r_ecx+0x4cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bfb96: ret 8 */ FN_RET(0x007bfb84); r_esp += 12; return;
L_007bfb99:; BB(0x007bfb99);
    /* 007bfb99: or dword ptr [ecx + 0x4c], eax */ { u32 ad = (u32)(r_ecx+0x4cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bfb9c: ret 8 */ FN_RET(0x007bfb84); r_esp += 12; return;
}

void f_007bfba0(void) /* sub_7BFBA0 */
{
    FN_ENTER(0x007bfba0);
    /* 007bfba0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bfba3: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007bfba8: call 0x78eedc */ r_esp -= 4; W32(r_esp, 0x7bfbadu); f_0078eedc();
    /* 007bfbad: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 007bfbb1: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 007bfbb5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bfbb7: mov dword ptr [0xaae8ec], eax */ W32((u32)(0xaae8ecu), r_eax);
    /* 007bfbbc: mov dword ptr [0xaae8f4], eax */ W32((u32)(0xaae8f4u), r_eax);
    /* 007bfbc1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bfbc3: mov esi, eax */ r_esi = r_eax;
L_007bfbc5:; BB(0x007bfbc5);
    /* 007bfbc5: movzx ebx, byte ptr [esi + 0xa0f6d4] */ r_ebx = (u32)R8((u32)(r_esi+0xa0f6d4u));
    /* 007bfbcc: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007bfbd1: call 0x78f414 */ r_esp -= 4; W32(r_esp, 0x7bfbd6u); f_0078f414();
    /* 007bfbd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bfbd8: je 0x7bfbf1 */ if (fZ) goto L_007bfbf1;
L_007bfbda:; BB(0x007bfbda);
    /* 007bfbda: mov eax, ebx */ r_eax = r_ebx;
    /* 007bfbdc: call 0x7bfce9 */ r_esp -= 4; W32(r_esp, 0x7bfbe1u); f_007bfce9();
    /* 007bfbe1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bfbe3: je 0x7bfbf1 */ if (fZ) goto L_007bfbf1;
L_007bfbe5:; BB(0x007bfbe5);
    /* 007bfbe5: mov edx, dword ptr [esi + 0xaae948] */ r_edx = R32((u32)(r_esi+0xaae948u));
    /* 007bfbeb: or dword ptr [0xaae8ec], edx */ { u32 ad = (u32)(0xaae8ecu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007bfbf1:; BB(0x007bfbf1);
    /* 007bfbf1: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007bfbf4: cmp esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bfbf7: jl 0x7bfbc5 */ if ((fS!=fO)) goto L_007bfbc5;
L_007bfbf9:; BB(0x007bfbf9);
    /* 007bfbf9: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 007bfbfd: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 007bfc01: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007bfc06: call 0x78f3b8 */ r_esp -= 4; W32(r_esp, 0x7bfc0bu); f_0078f3b8();
    /* 007bfc0b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 007bfc0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bfc10: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007bfc12: jle 0x7bfcc0 */ if ((fZ||fS!=fO)) goto L_007bfcc0;
L_007bfc18:; BB(0x007bfc18);
    /* 007bfc18: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 007bfc1c: mov ebx, eax */ r_ebx = r_eax;
    /* 007bfc1e: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 007bfc22: mov esi, edx */ r_esi = r_edx;
L_007bfc24:; BB(0x007bfc24);
    /* 007bfc24: movzx ecx, bl */ r_ecx = (u32)(u8)r_ebx;
    /* 007bfc27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007bfc28: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007bfc2d: call 0x78f3c0 */ r_esp -= 4; W32(r_esp, 0x7bfc32u); f_0078f3c0();
    /* 007bfc32: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007bfc35: cmp eax, dword ptr [0xa0f6d4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f6d4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bfc3b: jne 0x7bfc49 */ if (!fZ) goto L_007bfc49;
L_007bfc3d:; BB(0x007bfc3d);
    /* 007bfc3d: mov ecx, dword ptr [0xaae948] */ r_ecx = R32((u32)(0xaae948u));
    /* 007bfc43: or dword ptr [0xaae8f4], ecx */ { u32 ad = (u32)(0xaae8f4u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007bfc49:; BB(0x007bfc49);
    /* 007bfc49: cmp eax, dword ptr [0xa0f6d8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f6d8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bfc4f: jne 0x7bfc5d */ if (!fZ) goto L_007bfc5d;
L_007bfc51:; BB(0x007bfc51);
    /* 007bfc51: mov ecx, dword ptr [0xaae94c] */ r_ecx = R32((u32)(0xaae94cu));
    /* 007bfc57: or dword ptr [0xaae8f4], ecx */ { u32 ad = (u32)(0xaae8f4u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007bfc5d:; BB(0x007bfc5d);
    /* 007bfc5d: cmp eax, dword ptr [0xa0f6dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f6dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bfc63: jne 0x7bfc71 */ if (!fZ) goto L_007bfc71;
L_007bfc65:; BB(0x007bfc65);
    /* 007bfc65: mov ecx, dword ptr [0xaae950] */ r_ecx = R32((u32)(0xaae950u));
    /* 007bfc6b: or dword ptr [0xaae8f4], ecx */ { u32 ad = (u32)(0xaae8f4u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007bfc71:; BB(0x007bfc71);
    /* 007bfc71: cmp eax, dword ptr [0xa0f6e0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f6e0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bfc77: jne 0x7bfc85 */ if (!fZ) goto L_007bfc85;
L_007bfc79:; BB(0x007bfc79);
    /* 007bfc79: mov ecx, dword ptr [0xaae954] */ r_ecx = R32((u32)(0xaae954u));
    /* 007bfc7f: or dword ptr [0xaae8f4], ecx */ { u32 ad = (u32)(0xaae8f4u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007bfc85:; BB(0x007bfc85);
    /* 007bfc85: cmp eax, dword ptr [0xa0f6e4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f6e4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bfc8b: jne 0x7bfc99 */ if (!fZ) goto L_007bfc99;
L_007bfc8d:; BB(0x007bfc8d);
    /* 007bfc8d: mov ecx, dword ptr [0xaae958] */ r_ecx = R32((u32)(0xaae958u));
    /* 007bfc93: or dword ptr [0xaae8f4], ecx */ { u32 ad = (u32)(0xaae8f4u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007bfc99:; BB(0x007bfc99);
    /* 007bfc99: cmp eax, dword ptr [0xa0f6e8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f6e8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bfc9f: jne 0x7bfcad */ if (!fZ) goto L_007bfcad;
L_007bfca1:; BB(0x007bfca1);
    /* 007bfca1: mov ecx, dword ptr [0xaae95c] */ r_ecx = R32((u32)(0xaae95cu));
    /* 007bfca7: or dword ptr [0xaae8f4], ecx */ { u32 ad = (u32)(0xaae8f4u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_007bfcad:; BB(0x007bfcad);
    /* 007bfcad: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007bfcb0: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bfcb2: jl 0x7bfc24 */ if ((fS!=fO)) goto L_007bfc24;
L_007bfcb8:; BB(0x007bfcb8);
    /* 007bfcb8: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 007bfcbc: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_007bfcc0:; BB(0x007bfcc0);
    /* 007bfcc0: mov eax, dword ptr [0xaae8ec] */ r_eax = R32((u32)(0xaae8ecu));
    /* 007bfcc5: mov edx, dword ptr [0xaae8f4] */ r_edx = R32((u32)(0xaae8f4u));
    /* 007bfccb: mov dword ptr [0xaae934], eax */ W32((u32)(0xaae934u), r_eax);
    /* 007bfcd0: mov dword ptr [0xaae938], edx */ W32((u32)(0xaae938u), r_edx);
    /* 007bfcd6: mov ecx, 0xaae8ec */ r_ecx = 0xaae8ecu;
    /* 007bfcdb: call 0x7bfcf8 */ r_esp -= 4; W32(r_esp, 0x7bfce0u); f_007bfcf8();
    /* 007bfce0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007bfce3: ret  */ FN_RET(0x007bfba0); r_esp += 4; return;
}

void f_007bfce4(void) /* sub_7BFCE4 */
{
    FN_ENTER(0x007bfce4);
    /* 007bfce4: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 007bfce9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bfcea: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007bfcef: call 0x78f380 */ r_esp -= 4; W32(r_esp, 0x7bfcf4u); f_0078f380();
    /* 007bfcf4: ret  */ FN_RET(0x007bfce4); r_esp += 4; return;
}

void f_007bfce9(void) /* sub_7BFCE9 */
{
    FN_ENTER(0x007bfce9);
    /* 007bfce9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bfcea: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007bfcef: call 0x78f380 */ r_esp -= 4; W32(r_esp, 0x7bfcf4u); f_0078f380();
    /* 007bfcf4: ret  */ FN_RET(0x007bfce9); r_esp += 4; return;
}

void f_007bfcf8(void) /* sub_7BFCF8 */
{
    FN_ENTER(0x007bfcf8);
    /* 007bfcf8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007bfcf9: mov edi, ecx */ r_edi = r_ecx;
    /* 007bfcfb: lea eax, [edi + 0x2c] */ r_eax = (u32)(r_edi+0x2cu);
    /* 007bfcfe: mov ecx, edi */ r_ecx = r_edi;
    /* 007bfd00: push dword ptr [edi + 0x48] */ { u32 v = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfd03: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfd09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bfd0a: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfd0fu); f_007bfb64();
    /* 007bfd0f: push dword ptr [edi + 0x48] */ { u32 v = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfd12: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfd18: lea eax, [edi + 0x2e] */ r_eax = (u32)(r_edi+0x2eu);
    /* 007bfd1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bfd1c: mov ecx, edi */ r_ecx = r_edi;
    /* 007bfd1e: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfd23u); f_007bfb64();
    /* 007bfd23: push dword ptr [edi + 0x48] */ { u32 v = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfd26: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfd2c: lea eax, [edi + 0x30] */ r_eax = (u32)(r_edi+0x30u);
    /* 007bfd2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bfd30: mov ecx, edi */ r_ecx = r_edi;
    /* 007bfd32: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfd37u); f_007bfb64();
    /* 007bfd37: push dword ptr [edi + 0x48] */ { u32 v = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfd3a: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfd40: lea eax, [edi + 0x32] */ r_eax = (u32)(r_edi+0x32u);
    /* 007bfd43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bfd44: mov ecx, edi */ r_ecx = r_edi;
    /* 007bfd46: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfd4bu); f_007bfb64();
    /* 007bfd4b: push dword ptr [edi + 0x48] */ { u32 v = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfd4e: push dword ptr [0xa0f644] */ { u32 v = R32((u32)(0xa0f644u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfd54: lea eax, [edi + 0x34] */ r_eax = (u32)(r_edi+0x34u);
    /* 007bfd57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bfd58: mov ecx, edi */ r_ecx = r_edi;
    /* 007bfd5a: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfd5fu); f_007bfb64();
    /* 007bfd5f: push dword ptr [edi + 0x48] */ { u32 v = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfd62: push dword ptr [0xa0f648] */ { u32 v = R32((u32)(0xa0f648u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfd68: lea eax, [edi + 0x36] */ r_eax = (u32)(r_edi+0x36u);
    /* 007bfd6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bfd6c: mov ecx, edi */ r_ecx = r_edi;
    /* 007bfd6e: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfd73u); f_007bfb64();
    /* 007bfd73: push dword ptr [edi + 0x48] */ { u32 v = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfd76: push dword ptr [0xa0f64c] */ { u32 v = R32((u32)(0xa0f64cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfd7c: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 007bfd7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bfd80: mov ecx, edi */ r_ecx = r_edi;
    /* 007bfd82: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfd87u); f_007bfb64();
    /* 007bfd87: push dword ptr [edi + 0x48] */ { u32 v = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfd8a: push dword ptr [0xa0f650] */ { u32 v = R32((u32)(0xa0f650u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfd90: lea eax, [edi + 0x3a] */ r_eax = (u32)(r_edi+0x3au);
    /* 007bfd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bfd94: mov ecx, edi */ r_ecx = r_edi;
    /* 007bfd96: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfd9bu); f_007bfb64();
    /* 007bfd9b: push dword ptr [edi + 0x48] */ { u32 v = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfd9e: push dword ptr [0xa0f654] */ { u32 v = R32((u32)(0xa0f654u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfda4: lea eax, [edi + 0x3c] */ r_eax = (u32)(r_edi+0x3cu);
    /* 007bfda7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bfda8: mov ecx, edi */ r_ecx = r_edi;
    /* 007bfdaa: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfdafu); f_007bfb64();
    /* 007bfdaf: push dword ptr [edi + 0x48] */ { u32 v = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfdb2: push dword ptr [0xa0f658] */ { u32 v = R32((u32)(0xa0f658u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfdb8: lea eax, [edi + 0x3e] */ r_eax = (u32)(r_edi+0x3eu);
    /* 007bfdbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bfdbc: mov ecx, edi */ r_ecx = r_edi;
    /* 007bfdbe: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfdc3u); f_007bfb64();
    /* 007bfdc3: push dword ptr [edi + 0x48] */ { u32 v = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfdc6: push dword ptr [0xa0f65c] */ { u32 v = R32((u32)(0xa0f65cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfdcc: lea eax, [edi + 0x40] */ r_eax = (u32)(r_edi+0x40u);
    /* 007bfdcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bfdd0: mov ecx, edi */ r_ecx = r_edi;
    /* 007bfdd2: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfdd7u); f_007bfb64();
    /* 007bfdd7: push dword ptr [edi + 0x48] */ { u32 v = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfdda: push dword ptr [0xa0f660] */ { u32 v = R32((u32)(0xa0f660u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfde0: lea eax, [edi + 0x42] */ r_eax = (u32)(r_edi+0x42u);
    /* 007bfde3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bfde4: mov ecx, edi */ r_ecx = r_edi;
    /* 007bfde6: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfdebu); f_007bfb64();
    /* 007bfdeb: push dword ptr [edi + 0x48] */ { u32 v = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfdee: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfdf4: lea eax, [edi + 0x44] */ r_eax = (u32)(r_edi+0x44u);
    /* 007bfdf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bfdf8: mov ecx, edi */ r_ecx = r_edi;
    /* 007bfdfa: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfdffu); f_007bfb64();
    /* 007bfdff: push dword ptr [edi + 0x48] */ { u32 v = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfe02: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bfe08: lea eax, [edi + 0x46] */ r_eax = (u32)(r_edi+0x46u);
    /* 007bfe0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bfe0c: mov ecx, edi */ r_ecx = r_edi;
    /* 007bfe0e: call 0x7bfb64 */ r_esp -= 4; W32(r_esp, 0x7bfe13u); f_007bfb64();
    /* 007bfe13: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007bfe14: ret  */ FN_RET(0x007bfcf8); r_esp += 4; return;
}

void f_007bfe1d(void) /* sub_7BFE1D */
{
    FN_ENTER(0x007bfe1d);
    /* 007bfe1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bfe1e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007bfe1f: mov ebp, eax */ r_ebp = r_eax;
    /* 007bfe21: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007bfe26: call 0x78f414 */ r_esp -= 4; W32(r_esp, 0x7bfe2bu); f_0078f414();
    /* 007bfe2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bfe2d: je 0x7bfe39 */ if (fZ) goto L_007bfe39;
L_007bfe2f:; BB(0x007bfe2f);
    /* 007bfe2f: mov eax, ebp */ r_eax = r_ebp;
    /* 007bfe31: call 0x7bfce9 */ r_esp -= 4; W32(r_esp, 0x7bfe36u); f_007bfce9();
    /* 007bfe36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bfe37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bfe38: ret  */ FN_RET(0x007bfe1d); r_esp += 4; return;
L_007bfe39:; BB(0x007bfe39);
    /* 007bfe39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bfe3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bfe3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bfe3d: ret  */ FN_RET(0x007bfe1d); r_esp += 4; return;
}

void f_007bfe40(void) /* sub_7BFE40 */
{
    FN_ENTER(0x007bfe40);
    /* 007bfe40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007bfe41: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 007bfe46: call 0x7bfe1d */ r_esp -= 4; W32(r_esp, 0x7bfe4bu); f_007bfe1d();
    /* 007bfe4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bfe4c: ret  */ FN_RET(0x007bfe40); r_esp += 4; return;
}

void f_007bfe50(void) /* sub_7BFE50 */
{
    FN_ENTER(0x007bfe50);
    /* 007bfe50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007bfe51: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 007bfe56: call 0x7bfe65 */ r_esp -= 4; W32(r_esp, 0x7bfe5bu); f_007bfe65();
    /* 007bfe5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bfe5c: ret  */ FN_RET(0x007bfe50); r_esp += 4; return;
}

void f_007bfe60(void) /* sub_7BFE60 */
{
    FN_ENTER(0x007bfe60);
    /* 007bfe60: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 007bfe65: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007bfe66: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bfe69: mov ebx, eax */ r_ebx = r_eax;
    /* 007bfe6b: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007bfe70: call 0x78f414 */ r_esp -= 4; W32(r_esp, 0x7bfe75u); f_0078f414();
    /* 007bfe75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bfe77: je 0x7bfec6 */ if (fZ) goto L_007bfec6;
L_007bfe79:; BB(0x007bfe79);
    /* 007bfe79: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007bfe7e: call 0x78f3b8 */ r_esp -= 4; W32(r_esp, 0x7bfe83u); f_0078f3b8();
    /* 007bfe83: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 007bfe86: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bfe88: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007bfe8a: jle 0x7bfebf */ if ((fZ||fS!=fO)) goto L_007bfebf;
L_007bfe8c:; BB(0x007bfe8c);
    /* 007bfe8c: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 007bfe90: mov esi, edx */ r_esi = r_edx;
    /* 007bfe92: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 007bfe95: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 007bfe98: mov edi, ebx */ r_edi = r_ebx;
    /* 007bfe9a: mov ebx, eax */ r_ebx = r_eax;
L_007bfe9c:; BB(0x007bfe9c);
    /* 007bfe9c: movzx ecx, bl */ r_ecx = (u32)(u8)r_ebx;
    /* 007bfe9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007bfea0: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007bfea5: call 0x78f3c0 */ r_esp -= 4; W32(r_esp, 0x7bfeaau); f_0078f3c0();
    /* 007bfeaa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007bfead: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bfeaf: je 0x7bfecd */ if (fZ) goto L_007bfecd;
L_007bfeb1:; BB(0x007bfeb1);
    /* 007bfeb1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007bfeb4: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bfeb6: jl 0x7bfe9c */ if ((fS!=fO)) goto L_007bfe9c;
L_007bfeb8:; BB(0x007bfeb8);
    /* 007bfeb8: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 007bfebc: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_007bfebf:; BB(0x007bfebf);
    /* 007bfebf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007bfec1:; BB(0x007bfec1);
    /* 007bfec1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007bfec4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007bfec5: ret  */ FN_RET(0x007bfe60); r_esp += 4; return;
L_007bfec6:; BB(0x007bfec6);
    /* 007bfec6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bfec8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007bfecb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007bfecc: ret  */ FN_RET(0x007bfe60); r_esp += 4; return;
L_007bfecd:; BB(0x007bfecd);
    /* 007bfecd: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 007bfed1: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 007bfed4: mov eax, 1 */ r_eax = 0x1u;
    /* 007bfed9: jmp 0x7bfec1 */ goto L_007bfec1;
}

void f_007bfe65(void)
{
    FN_ENTER(0x007bfe65);
    /* 007bfe65: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007bfe66: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bfe69: mov ebx, eax */ r_ebx = r_eax;
    /* 007bfe6b: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007bfe70: call 0x78f414 */ r_esp -= 4; W32(r_esp, 0x7bfe75u); f_0078f414();
    /* 007bfe75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bfe77: je 0x7bfec6 */ if (fZ) goto L_007bfec6;
L_007bfe79:; BB(0x007bfe79);
    /* 007bfe79: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007bfe7e: call 0x78f3b8 */ r_esp -= 4; W32(r_esp, 0x7bfe83u); f_0078f3b8();
    /* 007bfe83: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 007bfe86: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bfe88: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007bfe8a: jle 0x7bfebf */ if ((fZ||fS!=fO)) goto L_007bfebf;
L_007bfe8c:; BB(0x007bfe8c);
    /* 007bfe8c: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 007bfe90: mov esi, edx */ r_esi = r_edx;
    /* 007bfe92: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 007bfe95: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 007bfe98: mov edi, ebx */ r_edi = r_ebx;
    /* 007bfe9a: mov ebx, eax */ r_ebx = r_eax;
L_007bfe9c:; BB(0x007bfe9c);
    /* 007bfe9c: movzx ecx, bl */ r_ecx = (u32)(u8)r_ebx;
    /* 007bfe9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007bfea0: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007bfea5: call 0x78f3c0 */ r_esp -= 4; W32(r_esp, 0x7bfeaau); f_0078f3c0();
    /* 007bfeaa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007bfead: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bfeaf: je 0x7bfecd */ if (fZ) goto L_007bfecd;
L_007bfeb1:; BB(0x007bfeb1);
    /* 007bfeb1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007bfeb4: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bfeb6: jl 0x7bfe9c */ if ((fS!=fO)) goto L_007bfe9c;
L_007bfeb8:; BB(0x007bfeb8);
    /* 007bfeb8: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 007bfebc: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_007bfebf:; BB(0x007bfebf);
    /* 007bfebf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007bfec1:; BB(0x007bfec1);
    /* 007bfec1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007bfec4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007bfec5: ret  */ FN_RET(0x007bfe65); r_esp += 4; return;
L_007bfec6:; BB(0x007bfec6);
    /* 007bfec6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bfec8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007bfecb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007bfecc: ret  */ FN_RET(0x007bfe65); r_esp += 4; return;
L_007bfecd:; BB(0x007bfecd);
    /* 007bfecd: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 007bfed1: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 007bfed4: mov eax, 1 */ r_eax = 0x1u;
    /* 007bfed9: jmp 0x7bfec1 */ goto L_007bfec1;
}

void f_007bfedc(void) /* sub_7BFEDC */
{
    FN_ENTER(0x007bfedc);
    /* 007bfedc: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x7bfee1u); f_007083d4();
    /* 007bfee1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bfee3: jne 0x7bfeee */ if (!fZ) goto L_007bfeee;
L_007bfee5:; BB(0x007bfee5);
    /* 007bfee5: call 0x7beca0 */ r_esp -= 4; W32(r_esp, 0x7bfeeau); f_007beca0();
    /* 007bfeea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bfeec: jne 0x7bff02 */ if (!fZ) goto L_007bff02;
L_007bfeee:; BB(0x007bfeee);
    /* 007bfeee: mov eax, dword ptr [0xaab3ac] */ r_eax = R32((u32)(0xaab3acu));
    /* 007bfef3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bfef5: je 0x7bfefa */ if (fZ) goto L_007bfefa;
L_007bfef7:; BB(0x007bfef7);
    /* 007bfef7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bfef9: ret  */ FN_RET(0x007bfedc); r_esp += 4; return;
L_007bfefa:; BB(0x007bfefa);
    /* 007bfefa: movsx eax, byte ptr [0xaae93c] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaae93cu));
    /* 007bff01: ret  */ FN_RET(0x007bfedc); r_esp += 4; return;
L_007bff02:; BB(0x007bff02);
    /* 007bff02: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bff07u); f_0061cdb0();
    /* 007bff07: jmp 0x7bfeee */ goto L_007bfeee;
}

void f_007bff7d(void)
{
    FN_ENTER(0x007bff7d);
    /* 007bff7d: mov eax, 0xd */ r_eax = 0xdu;
    /* 007bff82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007bff83: ret  */ FN_RET(0x007bff7d); r_esp += 4; return;
}

void f_007bff84(void)
{
    FN_ENTER(0x007bff84);
    /* 007bff84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bff86: je 0x7bfff3 */ if (fZ) goto L_007bfff3;
L_007bff88:; BB(0x007bff88);
    /* 007bff88: mov eax, 0x5f */ r_eax = 0x5fu;
    /* 007bff8d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007bff8e: ret  */ FN_RET(0x007bff84); r_esp += 4; return;
L_007bfff3:; BB(0x007bfff3);
    /* 007bfff3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bfff5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007bfff6: ret  */ FN_RET(0x007bff84); r_esp += 4; return;
}

void f_007bff8f(void)
{
    FN_ENTER(0x007bff8f);
    /* 007bff8f: mov eax, 9 */ r_eax = 0x9u;
    /* 007bff94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007bff95: ret  */ FN_RET(0x007bff8f); r_esp += 4; return;
}

void f_007bff96(void)
{
    FN_ENTER(0x007bff96);
    /* 007bff96: mov eax, 8 */ r_eax = 0x8u;
    /* 007bff9b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007bff9c: ret  */ FN_RET(0x007bff96); r_esp += 4; return;
}

void f_007bff9d(void)
{
    FN_ENTER(0x007bff9d);
    /* 007bff9d: mov eax, 0x1b */ r_eax = 0x1bu;
    /* 007bffa2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007bffa3: ret  */ FN_RET(0x007bff9d); r_esp += 4; return;
}

void f_007bffa4(void)
{
    FN_ENTER(0x007bffa4);
    /* 007bffa4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bffa6: je 0x7bffaf */ if (fZ) goto L_007bffaf;
L_007bffa8:; BB(0x007bffa8);
    /* 007bffa8: mov eax, 0x3e */ r_eax = 0x3eu;
    /* 007bffad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007bffae: ret  */ FN_RET(0x007bffa4); r_esp += 4; return;
L_007bffaf:; BB(0x007bffaf);
    /* 007bffaf: mov eax, 0x2e */ r_eax = 0x2eu;
    /* 007bffb4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007bffb5: ret  */ FN_RET(0x007bffa4); r_esp += 4; return;
}

void f_007bffb6(void)
{
    FN_ENTER(0x007bffb6);
    /* 007bffb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bffb8: je 0x7bffc1 */ if (fZ) goto L_007bffc1;
L_007bffba:; BB(0x007bffba);
    /* 007bffba: mov eax, 0x3c */ r_eax = 0x3cu;
    /* 007bffbf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007bffc0: ret  */ FN_RET(0x007bffb6); r_esp += 4; return;
L_007bffc1:; BB(0x007bffc1);
    /* 007bffc1: mov eax, 0x2c */ r_eax = 0x2cu;
    /* 007bffc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007bffc7: ret  */ FN_RET(0x007bffb6); r_esp += 4; return;
}

void f_007bffc8(void)
{
    FN_ENTER(0x007bffc8);
    /* 007bffc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bffca: je 0x7bffd3 */ if (fZ) goto L_007bffd3;
L_007bffcc:; BB(0x007bffcc);
    /* 007bffcc: mov eax, 0x2a */ r_eax = 0x2au;
    /* 007bffd1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007bffd2: ret  */ FN_RET(0x007bffc8); r_esp += 4; return;
L_007bffd3:; BB(0x007bffd3);
    /* 007bffd3: mov eax, 0x3a */ r_eax = 0x3au;
    /* 007bffd8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007bffd9: ret  */ FN_RET(0x007bffc8); r_esp += 4; return;
}

void f_007bffda(void)
{
    FN_ENTER(0x007bffda);
    /* 007bffda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bffdc: je 0x7bffe5 */ if (fZ) goto L_007bffe5;
L_007bffde:; BB(0x007bffde);
    /* 007bffde: mov eax, 0x2b */ r_eax = 0x2bu;
    /* 007bffe3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007bffe4: ret  */ FN_RET(0x007bffda); r_esp += 4; return;
L_007bffe5:; BB(0x007bffe5);
    /* 007bffe5: mov eax, 0x3b */ r_eax = 0x3bu;
    /* 007bffea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007bffeb: ret  */ FN_RET(0x007bffda); r_esp += 4; return;
}

void f_007bffec(void)
{
    FN_ENTER(0x007bffec);
    /* 007bffec: mov eax, 0x30 */ r_eax = 0x30u;
    /* 007bfff1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007bfff2: ret  */ FN_RET(0x007bffec); r_esp += 4; return;
}

void f_007bfff3(void)
{
    FN_ENTER(0x007bfff3);
    /* 007bfff3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bfff5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007bfff6: ret  */ FN_RET(0x007bfff3); r_esp += 4; return;
}

void f_007bfff8(void) /* sub_7BFFF8 */
{
    FN_ENTER(0x007bfff8);
    /* 007bfff8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007bfff9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007bfffa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007bfffb: movzx ebx, byte ptr [esp + 0x10] */ r_ebx = (u32)R8((u32)(r_esp+0x10u));
    /* 007c0000: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007c0005: call 0x78f3b8 */ r_esp -= 4; W32(r_esp, 0x7c000au); f_0078f3b8();
    /* 007c000a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 007c000d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007c000f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007c0011: jle 0x7c0035 */ if ((fZ||fS!=fO)) goto L_007c0035;
L_007c0013:; BB(0x007c0013);
    /* 007c0013: mov edi, ebx */ r_edi = r_ebx;
    /* 007c0015: mov ebx, eax */ r_ebx = r_eax;
    /* 007c0017: mov esi, edx */ r_esi = r_edx;
L_007c0019:; BB(0x007c0019);
    /* 007c0019: movzx ecx, bl */ r_ecx = (u32)(u8)r_ebx;
    /* 007c001c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007c001d: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007c0022: call 0x78f3c0 */ r_esp -= 4; W32(r_esp, 0x7c0027u); f_0078f3c0();
    /* 007c0027: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007c002a: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c002c: je 0x7c003b */ if (fZ) goto L_007c003b;
L_007c002e:; BB(0x007c002e);
    /* 007c002e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007c0031: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007c0033: jl 0x7c0019 */ if ((fS!=fO)) goto L_007c0019;
L_007c0035:; BB(0x007c0035);
    /* 007c0035: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c0037: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c0038: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c0039: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c003a: ret  */ FN_RET(0x007bfff8); r_esp += 4; return;
L_007c003b:; BB(0x007c003b);
    /* 007c003b: mov eax, 1 */ r_eax = 0x1u;
    /* 007c0040: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c0041: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c0042: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c0043: ret  */ FN_RET(0x007bfff8); r_esp += 4; return;
}

