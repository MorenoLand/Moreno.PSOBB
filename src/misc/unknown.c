#include "protos.h"

void f_0048f0e0(void) /* unknown_libname_12 */
{
    FN_ENTER(0x0048f0e0);
    /* 0048f0e0: mov dword ptr [0xa46fa8], 0x469c4000 */ W32((u32)(0xa46fa8u), 0x469c4000u);
    /* 0048f0ea: mov dword ptr [0xa46fac], 0 */ W32((u32)(0xa46facu), 0x0u);
    /* 0048f0f4: mov dword ptr [0xa46fb0], 0xc2c80000 */ W32((u32)(0xa46fb0u), 0xc2c80000u);
    /* 0048f0fe: ret  */ FN_RET(0x0048f0e0); r_esp += 4; return;
}

void f_006a34f8(void) /* unknown_libname_13 */
{
    FN_ENTER(0x006a34f8);
    /* 006a34f8: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a34fc: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a3500: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6a3505u); f_0050b510();
    /* 006a3505: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a3508: ret 8 */ FN_RET(0x006a34f8); r_esp += 12; return;
}

void f_007087d0(void) /* unknown_libname_1 */
{
    FN_ENTER(0x007087d0);
    /* 007087d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007087d2: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 007087d4: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 007087d7: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 007087da: ret  */ FN_RET(0x007087d0); r_esp += 4; return;
}

void f_00858c80(void) /* unknown_libname_59 */
{
    FN_ENTER(0x00858c80);
    /* 00858c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00858c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00858c83: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00858c84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00858c85: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00858c88: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00858c8b: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00858c8e: mov eax, ecx */ r_eax = r_ecx;
    /* 00858c90: mov edx, ecx */ r_edx = r_ecx;
    /* 00858c92: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00858c94: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00858c96: jbe 0x858ca0 */ if ((fC||fZ)) goto L_00858ca0;
L_00858c98:; BB(0x00858c98);
    /* 00858c98: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00858c9a: jb 0x858e1c */ if (fC) goto L_00858e1c;
L_00858ca0:; BB(0x00858ca0);
    /* 00858ca0: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858ca6: jne 0x858cbc */ if (!fZ) goto L_00858cbc;
L_00858ca8:; BB(0x00858ca8);
    /* 00858ca8: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00858cab: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00858cae: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00858cb1: jb 0x858cdc */ if (fC) goto L_00858cdc;
L_00858cb3:; BB(0x00858cb3);
    /* 00858cb3: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00858cb5: jmp dword ptr [edx*4 + 0x858dcc] */ { u32 t = R32((u32)(r_edx*4+0x858dccu)); switch (t) { case 0x858ddcu: goto L_00858ddc; case 0x858de4u: goto L_00858de4; case 0x858df0u: goto L_00858df0; case 0x858e04u: goto L_00858e04; default: UNSUP(0x00858cb5, "jump table entry is not a known target"); } }
L_00858cbc:; BB(0x00858cbc);
    /* 00858cbc: mov eax, edi */ r_eax = r_edi;
    /* 00858cbe: mov edx, 3 */ r_edx = 0x3u;
    /* 00858cc3: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00858cc6: jb 0x858cd4 */ if (fC) goto L_00858cd4;
L_00858cc8:; BB(0x00858cc8);
    /* 00858cc8: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00858ccb: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00858ccd: jmp dword ptr [eax*4 + 0x858ce0] */ { u32 t = R32((u32)(r_eax*4+0x858ce0u)); switch (t) { case 0x858cf0u: goto L_00858cf0; case 0x858d1cu: goto L_00858d1c; case 0x858d40u: goto L_00858d40; default: UNSUP(0x00858ccd, "jump table entry is not a known target"); } }
L_00858cd4:; BB(0x00858cd4);
    /* 00858cd4: jmp dword ptr [ecx*4 + 0x858ddc] */ { u32 t = R32((u32)(r_ecx*4+0x858ddcu)); switch (t) { case 0x858e04u: goto L_00858e04; case 0x858df0u: goto L_00858df0; case 0x858de4u: goto L_00858de4; case 0x858ddcu: goto L_00858ddc; default: UNSUP(0x00858cd4, "jump table entry is not a known target"); } }
L_00858cdc:; BB(0x00858cdc);
    /* 00858cdc: jmp dword ptr [ecx*4 + 0x858d60] */ { u32 t = R32((u32)(r_ecx*4+0x858d60u)); switch (t) { case 0x858dc3u: goto L_00858dc3; case 0x858db0u: goto L_00858db0; case 0x858da8u: goto L_00858da8; case 0x858da0u: goto L_00858da0; case 0x858d98u: goto L_00858d98; case 0x858d90u: goto L_00858d90; case 0x858d88u: goto L_00858d88; case 0x858d80u: goto L_00858d80; default: UNSUP(0x00858cdc, "jump table entry is not a known target"); } }
L_00858cf0:; BB(0x00858cf0);
    /* 00858cf0: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00858cf2: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00858cf4: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00858cf6: mov al, byte ptr [esi + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 00858cf9: mov byte ptr [edi + 1], al */ W8((u32)(r_edi+0x1u), (u8)r_eax);
    /* 00858cfc: mov al, byte ptr [esi + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x2u))) & 0xffu);
    /* 00858cff: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00858d02: mov byte ptr [edi + 2], al */ W8((u32)(r_edi+0x2u), (u8)r_eax);
    /* 00858d05: add esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00858d08: add edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00858d0b: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00858d0e: jb 0x858cdc */ if (fC) goto L_00858cdc;
L_00858d10:; BB(0x00858d10);
    /* 00858d10: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00858d12: jmp dword ptr [edx*4 + 0x858dcc] */ { u32 t = R32((u32)(r_edx*4+0x858dccu)); switch (t) { case 0x858ddcu: goto L_00858ddc; case 0x858de4u: goto L_00858de4; case 0x858df0u: goto L_00858df0; case 0x858e04u: goto L_00858e04; default: UNSUP(0x00858d12, "jump table entry is not a known target"); } }
L_00858d1c:; BB(0x00858d1c);
    /* 00858d1c: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00858d1e: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00858d20: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00858d22: mov al, byte ptr [esi + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 00858d25: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00858d28: mov byte ptr [edi + 1], al */ W8((u32)(r_edi+0x1u), (u8)r_eax);
    /* 00858d2b: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00858d2e: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00858d31: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00858d34: jb 0x858cdc */ if (fC) goto L_00858cdc;
L_00858d36:; BB(0x00858d36);
    /* 00858d36: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00858d38: jmp dword ptr [edx*4 + 0x858dcc] */ { u32 t = R32((u32)(r_edx*4+0x858dccu)); switch (t) { case 0x858ddcu: goto L_00858ddc; case 0x858de4u: goto L_00858de4; case 0x858df0u: goto L_00858df0; case 0x858e04u: goto L_00858e04; default: UNSUP(0x00858d38, "jump table entry is not a known target"); } }
L_00858d40:; BB(0x00858d40);
    /* 00858d40: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00858d42: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00858d44: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00858d46: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00858d49: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00858d4c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00858d4f: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00858d52: jb 0x858cdc */ if (fC) goto L_00858cdc;
L_00858d54:; BB(0x00858d54);
    /* 00858d54: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00858d56: jmp dword ptr [edx*4 + 0x858dcc] */ { u32 t = R32((u32)(r_edx*4+0x858dccu)); switch (t) { case 0x858ddcu: goto L_00858ddc; case 0x858de4u: goto L_00858de4; case 0x858df0u: goto L_00858df0; case 0x858e04u: goto L_00858e04; default: UNSUP(0x00858d56, "jump table entry is not a known target"); } }
L_00858d80:; BB(0x00858d80);
    /* 00858d80: mov eax, dword ptr [esi + ecx*4 - 0x1c] */ r_eax = R32((u32)(r_esi+r_ecx*4+0xffffffe4u));
    /* 00858d84: mov dword ptr [edi + ecx*4 - 0x1c], eax */ W32((u32)(r_edi+r_ecx*4+0xffffffe4u), r_eax);
L_00858d88:; BB(0x00858d88);
    /* 00858d88: mov eax, dword ptr [esi + ecx*4 - 0x18] */ r_eax = R32((u32)(r_esi+r_ecx*4+0xffffffe8u));
    /* 00858d8c: mov dword ptr [edi + ecx*4 - 0x18], eax */ W32((u32)(r_edi+r_ecx*4+0xffffffe8u), r_eax);
L_00858d90:; BB(0x00858d90);
    /* 00858d90: mov eax, dword ptr [esi + ecx*4 - 0x14] */ r_eax = R32((u32)(r_esi+r_ecx*4+0xffffffecu));
    /* 00858d94: mov dword ptr [edi + ecx*4 - 0x14], eax */ W32((u32)(r_edi+r_ecx*4+0xffffffecu), r_eax);
L_00858d98:; BB(0x00858d98);
    /* 00858d98: mov eax, dword ptr [esi + ecx*4 - 0x10] */ r_eax = R32((u32)(r_esi+r_ecx*4+0xfffffff0u));
    /* 00858d9c: mov dword ptr [edi + ecx*4 - 0x10], eax */ W32((u32)(r_edi+r_ecx*4+0xfffffff0u), r_eax);
L_00858da0:; BB(0x00858da0);
    /* 00858da0: mov eax, dword ptr [esi + ecx*4 - 0xc] */ r_eax = R32((u32)(r_esi+r_ecx*4+0xfffffff4u));
    /* 00858da4: mov dword ptr [edi + ecx*4 - 0xc], eax */ W32((u32)(r_edi+r_ecx*4+0xfffffff4u), r_eax);
L_00858da8:; BB(0x00858da8);
    /* 00858da8: mov eax, dword ptr [esi + ecx*4 - 8] */ r_eax = R32((u32)(r_esi+r_ecx*4+0xfffffff8u));
    /* 00858dac: mov dword ptr [edi + ecx*4 - 8], eax */ W32((u32)(r_edi+r_ecx*4+0xfffffff8u), r_eax);
L_00858db0:; BB(0x00858db0);
    /* 00858db0: mov eax, dword ptr [esi + ecx*4 - 4] */ r_eax = R32((u32)(r_esi+r_ecx*4+0xfffffffcu));
    /* 00858db4: mov dword ptr [edi + ecx*4 - 4], eax */ W32((u32)(r_edi+r_ecx*4+0xfffffffcu), r_eax);
    /* 00858db8: lea eax, [ecx*4] */ r_eax = (u32)(r_ecx*4);
    /* 00858dbf: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00858dc1: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00858dc3:; BB(0x00858dc3);
    /* 00858dc3: jmp dword ptr [edx*4 + 0x858dcc] */ { u32 t = R32((u32)(r_edx*4+0x858dccu)); switch (t) { case 0x858ddcu: goto L_00858ddc; case 0x858de4u: goto L_00858de4; case 0x858df0u: goto L_00858df0; case 0x858e04u: goto L_00858e04; default: UNSUP(0x00858dc3, "jump table entry is not a known target"); } }
L_00858ddc:; BB(0x00858ddc);
    /* 00858ddc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00858ddf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00858de0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00858de1: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00858de2: ret  */ FN_RET(0x00858c80); r_esp += 4; return;
L_00858de4:; BB(0x00858de4);
    /* 00858de4: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00858de6: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00858de8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00858deb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00858dec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00858ded: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00858dee: ret  */ FN_RET(0x00858c80); r_esp += 4; return;
L_00858df0:; BB(0x00858df0);
    /* 00858df0: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00858df2: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00858df4: mov al, byte ptr [esi + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 00858df7: mov byte ptr [edi + 1], al */ W8((u32)(r_edi+0x1u), (u8)r_eax);
    /* 00858dfa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00858dfd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00858dfe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00858dff: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00858e00: ret  */ FN_RET(0x00858c80); r_esp += 4; return;
L_00858e04:; BB(0x00858e04);
    /* 00858e04: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00858e06: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00858e08: mov al, byte ptr [esi + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 00858e0b: mov byte ptr [edi + 1], al */ W8((u32)(r_edi+0x1u), (u8)r_eax);
    /* 00858e0e: mov al, byte ptr [esi + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x2u))) & 0xffu);
    /* 00858e11: mov byte ptr [edi + 2], al */ W8((u32)(r_edi+0x2u), (u8)r_eax);
    /* 00858e14: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00858e17: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00858e18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00858e19: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00858e1a: ret  */ FN_RET(0x00858c80); r_esp += 4; return;
L_00858e1c:; BB(0x00858e1c);
    /* 00858e1c: lea esi, [ecx + esi - 4] */ r_esi = (u32)(r_ecx+r_esi+0xfffffffcu);
    /* 00858e20: lea edi, [ecx + edi - 4] */ r_edi = (u32)(r_ecx+r_edi+0xfffffffcu);
    /* 00858e24: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858e2a: jne 0x858e50 */ if (!fZ) goto L_00858e50;
L_00858e2c:; BB(0x00858e2c);
    /* 00858e2c: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00858e2f: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00858e32: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00858e35: jb 0x858e44 */ if (fC) goto L_00858e44;
L_00858e37:; BB(0x00858e37);
    /* 00858e37: std  */ rt_df = 1;
    /* 00858e38: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00858e3a: cld  */ rt_df = 0;
    /* 00858e3b: jmp dword ptr [edx*4 + 0x858f68] */ { u32 t = R32((u32)(r_edx*4+0x858f68u)); switch (t) { case 0x858f78u: goto L_00858f78; case 0x858f80u: goto L_00858f80; case 0x858f90u: goto L_00858f90; case 0x858fa4u: goto L_00858fa4; default: UNSUP(0x00858e3b, "jump table entry is not a known target"); } }
L_00858e44:; BB(0x00858e44);
    /* 00858e44: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); fC = (b != 0); }
    /* 00858e46: jmp dword ptr [ecx*4 + 0x858f18] */ { u32 t = R32((u32)(r_ecx*4+0x858f18u)); switch (t) { case 0x858f4cu: goto L_00858f4c; case 0x858f44u: goto L_00858f44; case 0x858f3cu: goto L_00858f3c; case 0x858f34u: goto L_00858f34; case 0x858f2cu: goto L_00858f2c; case 0x858f24u: goto L_00858f24; case 0x858f1cu: goto L_00858f1c; case 0x858f5fu: goto L_00858f5f; default: UNSUP(0x00858e46, "jump table entry is not a known target"); } }
L_00858e50:; BB(0x00858e50);
    /* 00858e50: mov eax, edi */ r_eax = r_edi;
    /* 00858e52: mov edx, 3 */ r_edx = 0x3u;
    /* 00858e57: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00858e5a: jb 0x858e68 */ if (fC) goto L_00858e68;
L_00858e5c:; BB(0x00858e5c);
    /* 00858e5c: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00858e5f: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00858e61: jmp dword ptr [eax*4 + 0x858e6c] */ { u32 t = R32((u32)(r_eax*4+0x858e6cu)); switch (t) { case 0x858e6cu: goto L_00858e6c; case 0x858e7cu: goto L_00858e7c; case 0x858ea0u: goto L_00858ea0; case 0x858ec8u: goto L_00858ec8; default: UNSUP(0x00858e61, "jump table entry is not a known target"); } }
L_00858e68:; BB(0x00858e68);
    /* 00858e68: jmp dword ptr [ecx*4 + 0x858f68] */ { u32 t = R32((u32)(r_ecx*4+0x858f68u)); switch (t) { case 0x858f78u: goto L_00858f78; case 0x858f80u: goto L_00858f80; case 0x858f90u: goto L_00858f90; case 0x858fa4u: goto L_00858fa4; default: UNSUP(0x00858e68, "jump table entry is not a known target"); } }
L_00858e6c:; BB(0x00858e6c);
    /* 00858e6c: pop dword ptr [ebp - 0x71837000] */ { u32 v = R32(r_esp); r_esp += 4; W32((u32)(r_ebp+0x8e7c9000u), v); }
    /* 00858e72: test dword ptr [eax], eax */ {  u32 a = R32((u32)(r_eax)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;   }
    /* 00858e74: mov al, byte ptr [0xc800858e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xc800858eu))) & 0xffu);
    /* 00858e79: mov es, word ptr [ebp + 0x3468a00] */ UNSUP(0x00858e79, "mov es, word ptr [ebp + 0x3468a00]");
L_00858e7c:; BB(0x00858e7c);
    /* 00858e7c: mov al, byte ptr [esi + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x3u))) & 0xffu);
    /* 00858e7f: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00858e81: mov byte ptr [edi + 3], al */ W8((u32)(r_edi+0x3u), (u8)r_eax);
    /* 00858e84: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00858e87: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00858e8a: sub edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00858e8d: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00858e90: jb 0x858e44 */ if (fC) goto L_00858e44;
L_00858e92:; BB(0x00858e92);
    /* 00858e92: std  */ rt_df = 1;
    /* 00858e93: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00858e95: cld  */ rt_df = 0;
    /* 00858e96: jmp dword ptr [edx*4 + 0x858f68] */ { u32 t = R32((u32)(r_edx*4+0x858f68u)); switch (t) { case 0x858f78u: goto L_00858f78; case 0x858f80u: goto L_00858f80; case 0x858f90u: goto L_00858f90; case 0x858fa4u: goto L_00858fa4; default: UNSUP(0x00858e96, "jump table entry is not a known target"); } }
L_00858ea0:; BB(0x00858ea0);
    /* 00858ea0: mov al, byte ptr [esi + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x3u))) & 0xffu);
    /* 00858ea3: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00858ea5: mov byte ptr [edi + 3], al */ W8((u32)(r_edi+0x3u), (u8)r_eax);
    /* 00858ea8: mov al, byte ptr [esi + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x2u))) & 0xffu);
    /* 00858eab: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00858eae: mov byte ptr [edi + 2], al */ W8((u32)(r_edi+0x2u), (u8)r_eax);
    /* 00858eb1: sub esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00858eb4: sub edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00858eb7: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00858eba: jb 0x858e44 */ if (fC) goto L_00858e44;
L_00858ebc:; BB(0x00858ebc);
    /* 00858ebc: std  */ rt_df = 1;
    /* 00858ebd: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00858ebf: cld  */ rt_df = 0;
    /* 00858ec0: jmp dword ptr [edx*4 + 0x858f68] */ { u32 t = R32((u32)(r_edx*4+0x858f68u)); switch (t) { case 0x858f78u: goto L_00858f78; case 0x858f80u: goto L_00858f80; case 0x858f90u: goto L_00858f90; case 0x858fa4u: goto L_00858fa4; default: UNSUP(0x00858ec0, "jump table entry is not a known target"); } }
L_00858ec8:; BB(0x00858ec8);
    /* 00858ec8: mov al, byte ptr [esi + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x3u))) & 0xffu);
    /* 00858ecb: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00858ecd: mov byte ptr [edi + 3], al */ W8((u32)(r_edi+0x3u), (u8)r_eax);
    /* 00858ed0: mov al, byte ptr [esi + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x2u))) & 0xffu);
    /* 00858ed3: mov byte ptr [edi + 2], al */ W8((u32)(r_edi+0x2u), (u8)r_eax);
    /* 00858ed6: mov al, byte ptr [esi + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 00858ed9: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00858edc: mov byte ptr [edi + 1], al */ W8((u32)(r_edi+0x1u), (u8)r_eax);
    /* 00858edf: sub esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00858ee2: sub edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00858ee5: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00858ee8: jb 0x858e44 */ if (fC) goto L_00858e44;
L_00858eee:; BB(0x00858eee);
    /* 00858eee: std  */ rt_df = 1;
    /* 00858eef: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00858ef1: cld  */ rt_df = 0;
    /* 00858ef2: jmp dword ptr [edx*4 + 0x858f68] */ { u32 t = R32((u32)(r_edx*4+0x858f68u)); switch (t) { case 0x858f78u: goto L_00858f78; case 0x858f80u: goto L_00858f80; case 0x858f90u: goto L_00858f90; case 0x858fa4u: goto L_00858fa4; default: UNSUP(0x00858ef2, "jump table entry is not a known target"); } }
L_00858f1c:; BB(0x00858f1c);
    /* 00858f1c: mov eax, dword ptr [esi + ecx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_ecx*4+0x1cu));
    /* 00858f20: mov dword ptr [edi + ecx*4 + 0x1c], eax */ W32((u32)(r_edi+r_ecx*4+0x1cu), r_eax);
L_00858f24:; BB(0x00858f24);
    /* 00858f24: mov eax, dword ptr [esi + ecx*4 + 0x18] */ r_eax = R32((u32)(r_esi+r_ecx*4+0x18u));
    /* 00858f28: mov dword ptr [edi + ecx*4 + 0x18], eax */ W32((u32)(r_edi+r_ecx*4+0x18u), r_eax);
L_00858f2c:; BB(0x00858f2c);
    /* 00858f2c: mov eax, dword ptr [esi + ecx*4 + 0x14] */ r_eax = R32((u32)(r_esi+r_ecx*4+0x14u));
    /* 00858f30: mov dword ptr [edi + ecx*4 + 0x14], eax */ W32((u32)(r_edi+r_ecx*4+0x14u), r_eax);
L_00858f34:; BB(0x00858f34);
    /* 00858f34: mov eax, dword ptr [esi + ecx*4 + 0x10] */ r_eax = R32((u32)(r_esi+r_ecx*4+0x10u));
    /* 00858f38: mov dword ptr [edi + ecx*4 + 0x10], eax */ W32((u32)(r_edi+r_ecx*4+0x10u), r_eax);
L_00858f3c:; BB(0x00858f3c);
    /* 00858f3c: mov eax, dword ptr [esi + ecx*4 + 0xc] */ r_eax = R32((u32)(r_esi+r_ecx*4+0xcu));
    /* 00858f40: mov dword ptr [edi + ecx*4 + 0xc], eax */ W32((u32)(r_edi+r_ecx*4+0xcu), r_eax);
L_00858f44:; BB(0x00858f44);
    /* 00858f44: mov eax, dword ptr [esi + ecx*4 + 8] */ r_eax = R32((u32)(r_esi+r_ecx*4+0x8u));
    /* 00858f48: mov dword ptr [edi + ecx*4 + 8], eax */ W32((u32)(r_edi+r_ecx*4+0x8u), r_eax);
L_00858f4c:; BB(0x00858f4c);
    /* 00858f4c: mov eax, dword ptr [esi + ecx*4 + 4] */ r_eax = R32((u32)(r_esi+r_ecx*4+0x4u));
    /* 00858f50: mov dword ptr [edi + ecx*4 + 4], eax */ W32((u32)(r_edi+r_ecx*4+0x4u), r_eax);
    /* 00858f54: lea eax, [ecx*4] */ r_eax = (u32)(r_ecx*4);
    /* 00858f5b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00858f5d: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00858f5f:; BB(0x00858f5f);
    /* 00858f5f: jmp dword ptr [edx*4 + 0x858f68] */ { u32 t = R32((u32)(r_edx*4+0x858f68u)); switch (t) { case 0x858f78u: goto L_00858f78; case 0x858f80u: goto L_00858f80; case 0x858f90u: goto L_00858f90; case 0x858fa4u: goto L_00858fa4; default: UNSUP(0x00858f5f, "jump table entry is not a known target"); } }
L_00858f78:; BB(0x00858f78);
    /* 00858f78: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00858f7b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00858f7c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00858f7d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00858f7e: ret  */ FN_RET(0x00858c80); r_esp += 4; return;
L_00858f80:; BB(0x00858f80);
    /* 00858f80: mov al, byte ptr [esi + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x3u))) & 0xffu);
    /* 00858f83: mov byte ptr [edi + 3], al */ W8((u32)(r_edi+0x3u), (u8)r_eax);
    /* 00858f86: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00858f89: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00858f8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00858f8b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00858f8c: ret  */ FN_RET(0x00858c80); r_esp += 4; return;
L_00858f90:; BB(0x00858f90);
    /* 00858f90: mov al, byte ptr [esi + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x3u))) & 0xffu);
    /* 00858f93: mov byte ptr [edi + 3], al */ W8((u32)(r_edi+0x3u), (u8)r_eax);
    /* 00858f96: mov al, byte ptr [esi + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x2u))) & 0xffu);
    /* 00858f99: mov byte ptr [edi + 2], al */ W8((u32)(r_edi+0x2u), (u8)r_eax);
    /* 00858f9c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00858f9f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00858fa0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00858fa1: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00858fa2: ret  */ FN_RET(0x00858c80); r_esp += 4; return;
L_00858fa4:; BB(0x00858fa4);
    /* 00858fa4: mov al, byte ptr [esi + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x3u))) & 0xffu);
    /* 00858fa7: mov byte ptr [edi + 3], al */ W8((u32)(r_edi+0x3u), (u8)r_eax);
    /* 00858faa: mov al, byte ptr [esi + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x2u))) & 0xffu);
    /* 00858fad: mov byte ptr [edi + 2], al */ W8((u32)(r_edi+0x2u), (u8)r_eax);
    /* 00858fb0: mov al, byte ptr [esi + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 00858fb3: mov byte ptr [edi + 1], al */ W8((u32)(r_edi+0x1u), (u8)r_eax);
    /* 00858fb6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00858fb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00858fba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00858fbb: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00858fbc: ret  */ FN_RET(0x00858c80); r_esp += 4; return;
}

void f_0085b69c(void) /* unknown_libname_50 */
{
    FN_ENTER(0x0085b69c);
    /* 0085b69c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b69d: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0085b69e: xor dh, byte ptr [eax] */ {  u32 a = (u8)(r_edx>>8); u32 b = R8((u32)(r_eax)); u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0085b6a0: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0085b6a1: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0085b6a2: xor byte ptr [eax], dh */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 0085b6a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085b6a5: mov ebp, esp */ r_ebp = r_esp;
    /* 0085b6a7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085b6aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b6ab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b6ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b6ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085b6ae: cld  */ rt_df = 0;
    /* 0085b6af: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0085b6b2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085b6b5: test dword ptr [eax + 4], 6 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x6u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b6bc: jne 0x85b76d */ if (!fZ) goto L_0085b76d;
L_0085b6c2:; BB(0x0085b6c2);
    /* 0085b6c2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0085b6c5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0085b6c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0085b6cb: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0085b6ce: mov dword ptr [ebx - 4], eax */ W32((u32)(r_ebx+0xfffffffcu), r_eax);
    /* 0085b6d1: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 0085b6d4: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0085b6d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b6d8: call 0x8654f2 */ r_esp -= 4; W32(r_esp, 0x85b6ddu); f_008654f2();
    /* 0085b6dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085b6e0: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085b6e2: je 0x85b75f */ if (fZ) goto L_0085b75f;
L_0085b6e4:; BB(0x0085b6e4);
    /* 0085b6e4: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085b6e7: je 0x85b766 */ if (fZ) goto L_0085b766;
L_0085b6e9:; BB(0x0085b6e9);
    /* 0085b6e9: lea ecx, [esi + esi*2] */ r_ecx = (u32)(r_esi+r_esi*2);
    /* 0085b6ec: mov eax, dword ptr [edi + ecx*4 + 4] */ r_eax = R32((u32)(r_edi+r_ecx*4+0x4u));
    /* 0085b6f0: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085b6f2: je 0x85b74d */ if (fZ) goto L_0085b74d;
L_0085b6f4:; BB(0x0085b6f4);
    /* 0085b6f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b6f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085b6f6: lea ebp, [ebx + 0x10] */ r_ebp = (u32)(r_ebx+0x10u);
    /* 0085b6f9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0085b6fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0085b6fd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0085b6ff: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0085b701: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085b703: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x85b705u); call_ind(t); }
    /* 0085b705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085b706: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085b707: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0085b70a: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085b70c: je 0x85b74d */ if (fZ) goto L_0085b74d;
L_0085b70e:; BB(0x0085b70e);
    /* 0085b70e: js 0x85b758 */ if (fS) goto L_0085b758;
L_0085b710:; BB(0x0085b710);
    /* 0085b710: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0085b713: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b714: call 0x8578cc */ r_esp -= 4; W32(r_esp, 0x85b719u); f_008578cc();
    /* 0085b719: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085b71c: lea ebp, [ebx + 0x10] */ r_ebp = (u32)(r_ebx+0x10u);
    /* 0085b71f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b720: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b721: call 0x85790e */ r_esp -= 4; W32(r_esp, 0x85b726u); f_0085790e();
    /* 0085b726: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085b729: lea ecx, [esi + esi*2] */ r_ecx = (u32)(r_esi+r_esi*2);
    /* 0085b72c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b72e: mov eax, dword ptr [edi + ecx*4 + 8] */ r_eax = R32((u32)(r_edi+r_ecx*4+0x8u));
    /* 0085b732: call 0x8579a2 */ r_esp -= 4; W32(r_esp, 0x85b737u); f_008579a2();
    /* 0085b737: mov eax, dword ptr [edi + ecx*4] */ r_eax = R32((u32)(r_edi+r_ecx*4));
    /* 0085b73a: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 0085b73d: mov eax, dword ptr [edi + ecx*4 + 8] */ r_eax = R32((u32)(r_edi+r_ecx*4+0x8u));
    /* 0085b741: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0085b743: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0085b745: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0085b747: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0085b749: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085b74b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x85b74du); call_ind(t); }
L_0085b74d:; BB(0x0085b74d);
    /* 0085b74d: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0085b750: lea ecx, [esi + esi*2] */ r_ecx = (u32)(r_esi+r_esi*2);
    /* 0085b753: mov esi, dword ptr [edi + ecx*4] */ r_esi = R32((u32)(r_edi+r_ecx*4));
    /* 0085b756: jmp 0x85b6e4 */ goto L_0085b6e4;
L_0085b758:; BB(0x0085b758);
    /* 0085b758: mov eax, 0 */ r_eax = 0x0u;
    /* 0085b75d: jmp 0x85b782 */ goto L_0085b782;
L_0085b75f:; BB(0x0085b75f);
    /* 0085b75f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085b762: or dword ptr [eax + 4], 8 */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0085b766:; BB(0x0085b766);
    /* 0085b766: mov eax, 1 */ r_eax = 0x1u;
    /* 0085b76b: jmp 0x85b782 */ goto L_0085b782;
L_0085b76d:; BB(0x0085b76d);
    /* 0085b76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085b76e: lea ebp, [ebx + 0x10] */ r_ebp = (u32)(r_ebx+0x10u);
    /* 0085b771: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0085b773: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b774: call 0x85790e */ r_esp -= 4; W32(r_esp, 0x85b779u); f_0085790e();
    /* 0085b779: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085b77c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085b77d: mov eax, 1 */ r_eax = 0x1u;
L_0085b782:; BB(0x0085b782);
    /* 0085b782: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085b783: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085b784: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085b785: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085b786: mov esp, ebp */ r_esp = r_ebp;
    /* 0085b788: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085b789: ret  */ FN_RET(0x0085b69c); r_esp += 4; return;
}

void f_00895eb1(void) /* unknown_libname_107 */
{
    FN_ENTER(0x00895eb1);
    /* 00895eb1: mov eax, ecx */ r_eax = r_ecx;
    /* 00895eb3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00895eb5: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00895eb7: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00895eba: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00895ebd: ret  */ FN_RET(0x00895eb1); r_esp += 4; return;
}

void f_008a89cf(void) /* unknown_libname_18 */
{
    FN_ENTER(0x008a89cf);
    /* 008a89cf: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 008a89d2: and dword ptr [ecx + 0xc], 0 */ { u32 ad = (u32)(r_ecx+0xcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a89d6: ret  */ FN_RET(0x008a89cf); r_esp += 4; return;
}

void f_008c0b80(void) /* unknown_libname_4 */
{
    FN_ENTER(0x008c0b80);
    /* 008c0b80: mov ecx, 0xaea4b8 */ r_ecx = 0xaea4b8u;
    /* 008c0b85: jmp 0x8c76a0 */ goto L_008c76a0;
L_008c76a0:; BB(0x008c76a0);
    /* 008c76a0: mov eax, ecx */ r_eax = r_ecx;
    /* 008c76a2: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 008c76a8: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 008c76ac: ret  */ FN_RET(0x008c0b80); r_esp += 4; return;
}

void f_008c0b90(void) /* unknown_libname_102 */
{
    FN_ENTER(0x008c0b90);
    /* 008c0b90: push 0x8c0ba0 */ { u32 v = 0x8c0ba0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c0b95: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x8c0b9au); f_0085909d();
    /* 008c0b9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008c0b9b: ret  */ FN_RET(0x008c0b90); r_esp += 4; return;
}

void f_008c0ba0(void) /* unknown_libname_5 */
{
    FN_ENTER(0x008c0ba0);
    /* 008c0ba0: mov ecx, 0xaea4b8 */ r_ecx = 0xaea4b8u;
    /* 008c0ba5: jmp 0x8c76b0 */ f_008c76b0(); return;
}

void f_008c96b0(void) /* unknown_libname_47 */
{
    FN_ENTER(0x008c96b0);
    /* 008c96b0: push 0xaeaa78 */ { u32 v = 0xaeaa78u; r_esp -= 4; W32(r_esp, v); }
    /* 008c96b5: call dword ptr [0x8f81b0] */ { u32 t = R32((u32)(0x8f81b0u)); r_esp -= 4; W32(r_esp, 0x8c96bbu); call_ind(t); }
    /* 008c96bb: ret  */ FN_RET(0x008c96b0); r_esp += 4; return;
}

void f_008c9920(void) /* unknown_libname_103 */
{
    FN_ENTER(0x008c9920);
    /* 008c9920: push 0x8c9930 */ { u32 v = 0x8c9930u; r_esp -= 4; W32(r_esp, v); }
    /* 008c9925: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x8c992au); f_0085909d();
    /* 008c992a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008c992b: ret  */ FN_RET(0x008c9920); r_esp += 4; return;
}

void f_008c9930(void) /* unknown_libname_7 */
{
    FN_ENTER(0x008c9930);
    /* 008c9930: mov ecx, 0xaeaf28 */ r_ecx = 0xaeaf28u;
    /* 008c9935: jmp 0x8c76b0 */ f_008c76b0(); return;
}

void f_008c9af8(void) /* unknown_libname_9 */
{
    FN_ENTER(0x008c9af8);
    /* 008c9af8: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008c9afc: call dword ptr [0x8f81bc] */ { u32 t = R32((u32)(0x8f81bcu)); r_esp -= 4; W32(r_esp, 0x8c9b02u); call_ind(t); }
    /* 008c9b02: ret  */ FN_RET(0x008c9af8); r_esp += 4; return;
}

