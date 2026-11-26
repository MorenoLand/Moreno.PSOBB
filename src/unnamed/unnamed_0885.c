#include "protos.h"

void f_008859cc(void) /* sub_8859CC */
{
    FN_ENTER(0x008859cc);
    /* 008859cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008859cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008859ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008859cf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008859d0: sub esp, 0xcc */ {  u32 a = r_esp; u32 b = 0xccu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008859d6: mov esi, dword ptr [esp + 0xe0] */ r_esi = R32((u32)(r_esp+0xe0u));
    /* 008859dd: mov ebp, dword ptr [esp + 0xe4] */ r_ebp = R32((u32)(r_esp+0xe4u));
    /* 008859e4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008859e6: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 008859e8: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 008859eb: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 008859ee: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 008859f1: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 008859f4: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 008859f7: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 008859fa: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 008859fd: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 00885a00: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 00885a03: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 00885a06: mov dword ptr [esi + 0xc], ebp */ W32((u32)(r_esi+0xcu), r_ebp);
    /* 00885a09: mov ebx, dword ptr [ebp + 4] */ r_ebx = R32((u32)(r_ebp+0x4u));
    /* 00885a0c: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 00885a0f: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 00885a12: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 00885a15: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00885a18: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00885a1a: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 00885a1c: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00885a1f: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 00885a22: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00885a26: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 00885a29: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00885a2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00885a2c: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x885a31u); f_00859c55();
    /* 00885a31: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00885a35: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 00885a39: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 00885a3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00885a40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00885a41: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x885a46u); f_0086b688();
    /* 00885a46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00885a49: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00885a4b: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00885a4f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00885a51: jle 0x885b5d */ if ((fZ||fS!=fO)) goto L_00885b5d;
L_00885a57:; BB(0x00885a57);
    /* 00885a57: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00885a5b: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
L_00885a5f:; BB(0x00885a5f);
    /* 00885a5f: mov ecx, dword ptr [ebx + edx*4] */ r_ecx = R32((u32)(r_ebx+r_edx*4));
    /* 00885a62: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00885a63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00885a65: jle 0x885cf5 */ if ((fZ||fS!=fO)) goto L_00885cf5;
L_00885a6b:; BB(0x00885a6b);
    /* 00885a6b: mov eax, dword ptr [esp + ecx*4 + 0x48] */ r_eax = R32((u32)(r_esp+r_ecx*4+0x48u));
    /* 00885a6f: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00885a72: jge 0x885a80 */ if ((fS==fO)) goto L_00885a80;
L_00885a74:; BB(0x00885a74);
    /* 00885a74: mov ebp, eax */ r_ebp = r_eax;
    /* 00885a76: shr ebp, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 00885a78: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885a7a: jne 0x885cb0 */ if (!fZ) goto L_00885cb0;
L_00885a80:; BB(0x00885a80);
    /* 00885a80: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00885a84: mov esi, ecx */ r_esi = r_ecx;
    /* 00885a86: mov dword ptr [ebp + edi*4], eax */ W32((u32)(r_ebp+r_edi*4), r_eax);
    /* 00885a8a: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00885a8b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00885a8d: jle 0x885ab5 */ if ((fZ||fS!=fO)) goto L_00885ab5;
L_00885a8f:; BB(0x00885a8f);
    /* 00885a8f: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
L_00885a93:; BB(0x00885a93);
    /* 00885a93: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 00885a96: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 00885a9a: mov ebx, dword ptr [esp + ebx + 0x48] */ r_ebx = R32((u32)(r_esp+r_ebx+0x48u));
    /* 00885a9e: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00885aa1: jne 0x885cd4 */ if (!fZ) goto L_00885cd4;
L_00885aa7:; BB(0x00885aa7);
    /* 00885aa7: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00885aa8: mov dword ptr [esp + esi*4 + 0x48], ebx */ W32((u32)(r_esp+r_esi*4+0x48u), r_ebx);
    /* 00885aac: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00885aad: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00885aaf: jg 0x885a93 */ if ((!fZ&&fS==fO)) goto L_00885a93;
L_00885ab1:; BB(0x00885ab1);
    /* 00885ab1: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
L_00885ab5:; BB(0x00885ab5);
    /* 00885ab5: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00885ab6: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885ab9: jge 0x885b49 */ if ((fS==fO)) goto L_00885b49;
L_00885abf:; BB(0x00885abf);
    /* 00885abf: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00885ac1: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00885ac3: add ebp, 0x21 */ {  u32 a = r_ebp; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00885ac6: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885ac9: jl 0x885b2b */ if ((fS!=fO)) goto L_00885b2b;
L_00885acb:; BB(0x00885acb);
    /* 00885acb: mov ebp, dword ptr [esp + ecx*4 + 0x48] */ r_ebp = R32((u32)(r_esp+r_ecx*4+0x48u));
    /* 00885acf: mov esi, ebp */ r_esi = r_ebp;
    /* 00885ad1: shr esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00885ad3: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885ad5: jne 0x885b49 */ if (!fZ) goto L_00885b49;
L_00885ad7:; BB(0x00885ad7);
    /* 00885ad7: mov eax, dword ptr [esp + ecx*4 + 0x44] */ r_eax = R32((u32)(r_esp+r_ecx*4+0x44u));
    /* 00885adb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00885add: mov dword ptr [esp + ecx*4 + 0x48], eax */ W32((u32)(r_esp+r_ecx*4+0x48u), r_eax);
    /* 00885ae1: mov eax, dword ptr [esp + ecx*4 + 0x4c] */ r_eax = R32((u32)(r_esp+r_ecx*4+0x4cu));
    /* 00885ae5: mov esi, eax */ r_esi = r_eax;
    /* 00885ae7: shr esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00885ae9: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885aeb: jne 0x885b49 */ if (!fZ) goto L_00885b49;
L_00885aed:; BB(0x00885aed);
    /* 00885aed: mov ebp, dword ptr [esp + ecx*4 + 0x48] */ r_ebp = R32((u32)(r_esp+r_ecx*4+0x48u));
    /* 00885af1: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00885af3: mov dword ptr [esp + ecx*4 + 0x4c], ebp */ W32((u32)(r_esp+r_ecx*4+0x4cu), r_ebp);
    /* 00885af7: mov ebp, dword ptr [esp + ecx*4 + 0x50] */ r_ebp = R32((u32)(r_esp+r_ecx*4+0x50u));
    /* 00885afb: mov esi, ebp */ r_esi = r_ebp;
    /* 00885afd: shr esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00885aff: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885b01: jne 0x885b49 */ if (!fZ) goto L_00885b49;
L_00885b03:; BB(0x00885b03);
    /* 00885b03: mov eax, dword ptr [esp + ecx*4 + 0x4c] */ r_eax = R32((u32)(r_esp+r_ecx*4+0x4cu));
    /* 00885b07: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00885b09: mov dword ptr [esp + ecx*4 + 0x50], eax */ W32((u32)(r_esp+r_ecx*4+0x50u), r_eax);
    /* 00885b0d: mov eax, dword ptr [esp + ecx*4 + 0x54] */ r_eax = R32((u32)(r_esp+r_ecx*4+0x54u));
    /* 00885b11: mov esi, eax */ r_esi = r_eax;
    /* 00885b13: shr esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00885b15: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885b17: jne 0x885b49 */ if (!fZ) goto L_00885b49;
L_00885b19:; BB(0x00885b19);
    /* 00885b19: mov ebp, dword ptr [esp + ecx*4 + 0x50] */ r_ebp = R32((u32)(r_esp+r_ecx*4+0x50u));
    /* 00885b1d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00885b1f: mov dword ptr [esp + ecx*4 + 0x54], ebp */ W32((u32)(r_esp+r_ecx*4+0x54u), r_ebp);
    /* 00885b23: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00885b26: cmp ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885b29: jl 0x885acb */ if ((fS!=fO)) goto L_00885acb;
L_00885b2b:; BB(0x00885b2b);
    /* 00885b2b: mov esi, dword ptr [esp + ecx*4 + 0x48] */ r_esi = R32((u32)(r_esp+r_ecx*4+0x48u));
    /* 00885b2f: mov ebp, esi */ r_ebp = r_esi;
    /* 00885b31: shr ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 00885b33: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885b35: jne 0x885b49 */ if (!fZ) goto L_00885b49;
L_00885b37:; BB(0x00885b37);
    /* 00885b37: mov eax, esi */ r_eax = r_esi;
    /* 00885b39: mov ebp, dword ptr [esp + ecx*4 + 0x44] */ r_ebp = R32((u32)(r_esp+r_ecx*4+0x44u));
    /* 00885b3d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00885b3f: mov dword ptr [esp + ecx*4 + 0x48], ebp */ W32((u32)(r_esp+r_ecx*4+0x48u), r_ebp);
    /* 00885b43: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00885b44: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885b47: jl 0x885b2b */ if ((fS!=fO)) goto L_00885b2b;
L_00885b49:; BB(0x00885b49);
    /* 00885b49: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00885b4d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885b4f: jl 0x885a5f */ if ((fS!=fO)) goto L_00885a5f;
L_00885b55:; BB(0x00885b55);
    /* 00885b55: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00885b59: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_00885b5d:; BB(0x00885b5d);
    /* 00885b5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00885b5f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00885b61: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00885b65: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00885b67: jle 0x885c8d */ if ((fZ||fS!=fO)) goto L_00885c8d;
L_00885b6d:; BB(0x00885b6d);
    /* 00885b6d: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00885b71: mov ebx, eax */ r_ebx = r_eax;
    /* 00885b73: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00885b77: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00885b7b: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
L_00885b7f:; BB(0x00885b7f);
    /* 00885b7f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00885b81: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00885b83: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00885b87: mov eax, dword ptr [ebp + ebx*4] */ r_eax = R32((u32)(r_ebp+r_ebx*4));
    /* 00885b8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00885b8d: jle 0x885c74 */ if ((fZ||fS!=fO)) goto L_00885c74;
L_00885b93:; BB(0x00885b93);
    /* 00885b93: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885b96: jl 0x885ccb */ if ((fS!=fO)) goto L_00885ccb;
L_00885b9c:; BB(0x00885b9c);
    /* 00885b9c: lea ebp, [eax - 6] */ r_ebp = (u32)(r_eax+0xfffffffau);
    /* 00885b9f: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00885ba3: mov ebp, dword ptr [esi + edx*4] */ r_ebp = R32((u32)(r_esi+r_edx*4));
    /* 00885ba6: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00885baa: lea ebp, [ecx + 1] */ r_ebp = (u32)(r_ecx+0x1u);
    /* 00885bad: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 00885bb1: lea ebp, [ecx + 2] */ r_ebp = (u32)(r_ecx+0x2u);
    /* 00885bb4: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00885bb8: lea ebp, [ecx + 3] */ r_ebp = (u32)(r_ecx+0x3u);
    /* 00885bbb: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00885bbf: lea ebp, [ecx + 4] */ r_ebp = (u32)(r_ecx+0x4u);
    /* 00885bc2: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 00885bc6: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00885bca: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 00885bce: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00885bd2: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00885bd6: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
L_00885bda:; BB(0x00885bda);
    /* 00885bda: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 00885bde: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00885be0: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00885be4: mov esi, edx */ r_esi = r_edx;
    /* 00885be6: mov eax, edx */ r_eax = r_edx;
    /* 00885be8: shr esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00885bea: and esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00885bed: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00885bef: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00885bf1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00885bf3: mov esi, edx */ r_esi = r_edx;
    /* 00885bf5: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00885bf7: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00885bfa: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00885bfc: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00885bfe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00885c00: mov eax, edx */ r_eax = r_edx;
    /* 00885c02: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00885c04: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00885c07: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00885c09: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00885c0b: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00885c0f: mov ecx, eax */ r_ecx = r_eax;
    /* 00885c11: shr esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00885c13: and esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00885c16: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00885c18: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00885c1a: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00885c1e: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00885c21: add ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00885c24: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00885c26: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00885c29: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00885c2b: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00885c2e: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00885c31: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00885c35: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00885c39: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00885c3d: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 00885c41: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00885c44: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885c46: jle 0x885bda */ if ((fZ||fS!=fO)) goto L_00885bda;
L_00885c48:; BB(0x00885c48);
    /* 00885c48: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00885c4c: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00885c50: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00885c54: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
L_00885c58:; BB(0x00885c58);
    /* 00885c58: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00885c5c: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_00885c60:; BB(0x00885c60);
    /* 00885c60: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00885c62: mov ebx, ebp */ r_ebx = r_ebp;
    /* 00885c64: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00885c66: and ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00885c69: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00885c6b: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00885c6c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885c6e: jl 0x885c60 */ if ((fS!=fO)) goto L_00885c60;
L_00885c70:; BB(0x00885c70);
    /* 00885c70: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
L_00885c74:; BB(0x00885c74);
    /* 00885c74: mov dword ptr [esi + edx*4], edi */ W32((u32)(r_esi+r_edx*4), r_edi);
    /* 00885c77: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00885c78: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00885c79: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00885c7d: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885c7f: jl 0x885b7f */ if ((fS!=fO)) goto L_00885b7f;
L_00885c85:; BB(0x00885c85);
    /* 00885c85: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00885c89: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_00885c8d:; BB(0x00885c8d);
    /* 00885c8d: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 00885c91: mov eax, ebp */ r_eax = r_ebp;
    /* 00885c93: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00885c95: mov dword ptr [esi + 0x14], ebx */ W32((u32)(r_esi+0x14u), r_ebx);
    /* 00885c98: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00885c9b: call 0x884be4 */ r_esp -= 4; W32(r_esp, 0x885ca0u); f_00884be4();
    /* 00885ca0: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 00885ca3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00885ca5: add esp, 0xcc */ {  u32 a = r_esp; u32 b = 0xccu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00885cab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00885cac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00885cad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00885cae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00885caf: ret  */ FN_RET(0x008859cc); r_esp += 4; return;
L_00885cb0:; BB(0x00885cb0);
    /* 00885cb0: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00885cb4: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00885cb8: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00885cbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00885cbd: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x885cc2u); f_00858882();
    /* 00885cc2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00885cc3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00885cc5: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00885cc9: jmp 0x885c8d */ goto L_00885c8d;
L_00885ccb:; BB(0x00885ccb);
    /* 00885ccb: mov ebp, dword ptr [esi + edx*4] */ r_ebp = R32((u32)(r_esi+r_edx*4));
    /* 00885cce: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00885cd2: jmp 0x885c58 */ goto L_00885c58;
L_00885cd4:; BB(0x00885cd4);
    /* 00885cd4: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00885cd8: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885cdb: je 0x885cec */ if (fZ) goto L_00885cec;
L_00885cdd:; BB(0x00885cdd);
    /* 00885cdd: mov ebp, dword ptr [esp + ebp*2 + 0x44] */ r_ebp = R32((u32)(r_esp+r_ebp*2+0x44u));
    /* 00885ce1: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00885ce3: mov dword ptr [esp + esi*4 + 0x48], ebp */ W32((u32)(r_esp+r_esi*4+0x48u), r_ebp);
    /* 00885ce7: jmp 0x885ab5 */ goto L_00885ab5;
L_00885cec:; BB(0x00885cec);
    /* 00885cec: inc dword ptr [esp + 0x4c] */ { u32 ad = (u32)(r_esp+0x4cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00885cf0: jmp 0x885ab5 */ goto L_00885ab5;
L_00885cf5:; BB(0x00885cf5);
    /* 00885cf5: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00885cf6: jmp 0x885b49 */ goto L_00885b49;
}

void f_00885cfc(void) /* sub_885CFC */
{
    FN_ENTER(0x00885cfc);
    /* 00885cfc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00885cfd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00885cfe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00885cff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00885d00: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00885d04: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00885d08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00885d0a: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00885d0c: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00885d0f: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00885d12: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00885d15: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 00885d18: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 00885d1b: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 00885d1e: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00885d21: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 00885d24: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 00885d27: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 00885d2a: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 00885d2d: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00885d30: mov dword ptr [esi + 0x30], 1 */ W32((u32)(r_esi+0x30u), 0x1u);
    /* 00885d37: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00885d39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00885d3a: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x885d3fu); f_00877c98();
    /* 00885d3f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00885d42: cmp eax, 0x564342 */ {  u32 a = r_eax; u32 b = 0x564342u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885d47: je 0x885d5a */ if (fZ) goto L_00885d5a;
L_00885d49:; BB(0x00885d49);
    /* 00885d49: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00885d4a: call 0x884a20 */ r_esp -= 4; W32(r_esp, 0x885d4fu); f_00884a20();
    /* 00885d4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00885d50:; BB(0x00885d50);
    /* 00885d50: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00885d55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00885d56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00885d57: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00885d58: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00885d59: ret  */ FN_RET(0x00885cfc); r_esp += 4; return;
L_00885d5a:; BB(0x00885d5a);
    /* 00885d5a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00885d5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00885d5d: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x885d62u); f_00877c98();
    /* 00885d62: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00885d64: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00885d66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00885d67: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x885d6cu); f_00877c98();
    /* 00885d6c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00885d6f: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00885d72: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885d75: je 0x885d49 */ if (fZ) goto L_00885d49;
L_00885d77:; BB(0x00885d77);
    /* 00885d77: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00885d79: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00885d7a: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x885d7fu); f_00877c98();
    /* 00885d7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00885d82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885d84: jne 0x885e26 */ if (!fZ) goto L_00885e26;
L_00885d8a:; BB(0x00885d8a);
    /* 00885d8a: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00885d8d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00885d8f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00885d91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00885d92: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x885d97u); f_00859c55();
    /* 00885d97: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00885d9a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00885d9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00885d9d: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x885da2u); f_00877c98();
    /* 00885da2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00885da5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00885da7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885da9: je 0x885df6 */ if (fZ) goto L_00885df6;
L_00885dab:; BB(0x00885dab);
    /* 00885dab: cmp dword ptr [esi + 4], 0 */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885daf: jle 0x885efd */ if ((fZ||fS!=fO)) goto L_00885efd;
L_00885db5:; BB(0x00885db5);
    /* 00885db5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00885db7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00885db8: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x885dbdu); f_00877c98();
    /* 00885dbd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00885dc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885dc2: jne 0x885dd0 */ if (!fZ) goto L_00885dd0;
L_00885dc4:; BB(0x00885dc4);
    /* 00885dc4: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00885dc7: mov dword ptr [eax + edi*4], 0 */ W32((u32)(r_eax+r_edi*4), 0x0u);
    /* 00885dce: jmp 0x885deb */ goto L_00885deb;
L_00885dd0:; BB(0x00885dd0);
    /* 00885dd0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00885dd2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00885dd3: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x885dd8u); f_00877c98();
    /* 00885dd8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00885ddb: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885dde: je 0x885d49 */ if (fZ) goto L_00885d49;
L_00885de4:; BB(0x00885de4);
    /* 00885de4: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00885de5: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00885de8: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
L_00885deb:; BB(0x00885deb);
    /* 00885deb: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00885dec: cmp edi, dword ptr [esi + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885def: jl 0x885db5 */ if ((fS!=fO)) goto L_00885db5;
L_00885df1:; BB(0x00885df1);
    /* 00885df1: jmp 0x885efd */ goto L_00885efd;
L_00885df6:; BB(0x00885df6);
    /* 00885df6: cmp dword ptr [esi + 4], 0 */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885dfa: jle 0x885efd */ if ((fZ||fS!=fO)) goto L_00885efd;
L_00885e00:; BB(0x00885e00);
    /* 00885e00: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00885e02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00885e03: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x885e08u); f_00877c98();
    /* 00885e08: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00885e0b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885e0e: je 0x885d49 */ if (fZ) goto L_00885d49;
L_00885e14:; BB(0x00885e14);
    /* 00885e14: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00885e15: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00885e18: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
    /* 00885e1b: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00885e1c: cmp edi, dword ptr [esi + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885e1f: jl 0x885e00 */ if ((fS!=fO)) goto L_00885e00;
L_00885e21:; BB(0x00885e21);
    /* 00885e21: jmp 0x885efd */ goto L_00885efd;
L_00885e26:; BB(0x00885e26);
    /* 00885e26: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00885e29: jne 0x885d50 */ if (!fZ) goto L_00885d50;
L_00885e2f:; BB(0x00885e2f);
    /* 00885e2f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00885e31: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00885e32: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x885e37u); f_00877c98();
    /* 00885e37: mov edi, eax */ r_edi = r_eax;
    /* 00885e39: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00885e3a: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00885e3d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00885e3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00885e41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00885e42: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x885e47u); f_00859c55();
    /* 00885e47: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00885e4a: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00885e4d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00885e4f: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00885e52: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00885e54: jle 0x885efd */ if ((fZ||fS!=fO)) goto L_00885efd;
L_00885e5a:; BB(0x00885e5a);
    /* 00885e5a: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00885e5d: mov ebx, edi */ r_ebx = r_edi;
    /* 00885e5f: mov edi, eax */ r_edi = r_eax;
L_00885e61:; BB(0x00885e61);
    /* 00885e61: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00885e63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00885e64: call 0x884908 */ r_esp -= 4; W32(r_esp, 0x885e69u); f_00884908();
    /* 00885e69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00885e6a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00885e6b: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x885e70u); f_00877c98();
    /* 00885e70: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00885e73: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885e76: je 0x885fcb */ if (fZ) goto L_00885fcb;
L_00885e7c:; BB(0x00885e7c);
    /* 00885e7c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00885e7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00885e80: jle 0x885fc3 */ if ((fZ||fS!=fO)) goto L_00885fc3;
L_00885e86:; BB(0x00885e86);
    /* 00885e86: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885e89: jl 0x885edb */ if ((fS!=fO)) goto L_00885edb;
L_00885e8b:; BB(0x00885e8b);
    /* 00885e8b: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00885e8e: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885e90: jge 0x885ef1 */ if ((fS==fO)) goto L_00885ef1;
L_00885e92:; BB(0x00885e92);
    /* 00885e92: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00885e95: mov dword ptr [ecx + edi*4], ebx */ W32((u32)(r_ecx+r_edi*4), r_ebx);
    /* 00885e98: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00885e99: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00885e9c: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885e9e: jge 0x885ef1 */ if ((fS==fO)) goto L_00885ef1;
L_00885ea0:; BB(0x00885ea0);
    /* 00885ea0: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00885ea3: mov dword ptr [ecx + edi*4], ebx */ W32((u32)(r_ecx+r_edi*4), r_ebx);
    /* 00885ea6: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00885ea7: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00885eaa: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885eac: jge 0x885ef1 */ if ((fS==fO)) goto L_00885ef1;
L_00885eae:; BB(0x00885eae);
    /* 00885eae: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00885eb1: mov dword ptr [ecx + edi*4], ebx */ W32((u32)(r_ecx+r_edi*4), r_ebx);
    /* 00885eb4: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00885eb5: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00885eb8: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885eba: jge 0x885ef1 */ if ((fS==fO)) goto L_00885ef1;
L_00885ebc:; BB(0x00885ebc);
    /* 00885ebc: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00885ebf: mov dword ptr [ecx + edi*4], ebx */ W32((u32)(r_ecx+r_edi*4), r_ebx);
    /* 00885ec2: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00885ec3: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00885ec6: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885ec8: jge 0x885ef1 */ if ((fS==fO)) goto L_00885ef1;
L_00885eca:; BB(0x00885eca);
    /* 00885eca: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00885ecd: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00885ed0: mov dword ptr [ecx + edi*4], ebx */ W32((u32)(r_ecx+r_edi*4), r_ebx);
    /* 00885ed3: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00885ed4: lea ecx, [eax - 6] */ r_ecx = (u32)(r_eax+0xfffffffau);
    /* 00885ed7: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885ed9: jle 0x885e8b */ if ((fZ||fS!=fO)) goto L_00885e8b;
L_00885edb:; BB(0x00885edb);
    /* 00885edb: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00885ede: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885ee0: jge 0x885ef1 */ if ((fS==fO)) goto L_00885ef1;
L_00885ee2:; BB(0x00885ee2);
    /* 00885ee2: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00885ee5: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00885ee6: mov dword ptr [ecx + edi*4], ebx */ W32((u32)(r_ecx+r_edi*4), r_ebx);
    /* 00885ee9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00885eea: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885eec: jl 0x885edb */ if ((fS!=fO)) goto L_00885edb;
L_00885eee:; BB(0x00885eee);
    /* 00885eee: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
L_00885ef1:; BB(0x00885ef1);
    /* 00885ef1: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00885ef2: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885ef4: jl 0x885e61 */ if ((fS!=fO)) goto L_00885e61;
L_00885efa:; BB(0x00885efa);
    /* 00885efa: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00885efd:; BB(0x00885efd);
    /* 00885efd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00885eff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00885f00: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x885f05u); f_00877c98();
    /* 00885f05: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00885f08: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00885f0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00885f0d: je 0x885fbc */ if (fZ) goto L_00885fbc;
L_00885f13:; BB(0x00885f13);
    /* 00885f13: jle 0x885d49 */ if ((fZ||fS!=fO)) goto L_00885d49;
L_00885f19:; BB(0x00885f19);
    /* 00885f19: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885f1c: jg 0x885d49 */ if ((!fZ&&fS==fO)) goto L_00885d49;
L_00885f22:; BB(0x00885f22);
    /* 00885f22: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00885f24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00885f25: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x885f2au); f_00877c98();
    /* 00885f2a: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 00885f2d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00885f2f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00885f30: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x885f35u); f_00877c98();
    /* 00885f35: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 00885f38: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00885f3a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00885f3b: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x885f40u); f_00877c98();
    /* 00885f40: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00885f41: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 00885f44: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00885f46: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00885f47: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x885f4cu); f_00877c98();
    /* 00885f4c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00885f4f: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00885f52: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00885f54: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 00885f57: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885f5a: jne 0x885f69 */ if (!fZ) goto L_00885f69;
L_00885f5c:; BB(0x00885f5c);
    /* 00885f5c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00885f5d: call 0x88491c */ r_esp -= 4; W32(r_esp, 0x885f62u); f_0088491c();
    /* 00885f62: mov edi, eax */ r_edi = r_eax;
    /* 00885f64: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00885f67: jmp 0x885f74 */ goto L_00885f74;
L_00885f69:; BB(0x00885f69);
    /* 00885f69: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885f6c: jne 0x885f74 */ if (!fZ) goto L_00885f74;
L_00885f6e:; BB(0x00885f6e);
    /* 00885f6e: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00885f71: imul edi, dword ptr [esi] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_esi)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
L_00885f74:; BB(0x00885f74);
    /* 00885f74: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00885f77: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00885f79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00885f7a: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x885f7fu); f_00859c55();
    /* 00885f7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00885f80: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 00885f83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00885f85: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00885f87: jle 0x885fa8 */ if ((fZ||fS!=fO)) goto L_00885fa8;
L_00885f89:; BB(0x00885f89);
    /* 00885f89: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00885f8c: mov ebx, eax */ r_ebx = r_eax;
L_00885f8e:; BB(0x00885f8e);
    /* 00885f8e: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00885f91: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00885f92: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x885f97u); f_00877c98();
    /* 00885f97: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00885f9a: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00885f9d: mov dword ptr [edx + ebx*4], eax */ W32((u32)(r_edx+r_ebx*4), r_eax);
    /* 00885fa0: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00885fa1: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00885fa3: jl 0x885f8e */ if ((fS!=fO)) goto L_00885f8e;
L_00885fa5:; BB(0x00885fa5);
    /* 00885fa5: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00885fa8:; BB(0x00885fa8);
    /* 00885fa8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885faa: je 0x885fbc */ if (fZ) goto L_00885fbc;
L_00885fac:; BB(0x00885fac);
    /* 00885fac: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00885faf: mov eax, dword ptr [edx + edi*4 - 4] */ r_eax = R32((u32)(r_edx+r_edi*4+0xfffffffcu));
    /* 00885fb3: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00885fb6: je 0x885d49 */ if (fZ) goto L_00885d49;
L_00885fbc:; BB(0x00885fbc);
    /* 00885fbc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00885fbe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00885fbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00885fc0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00885fc1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00885fc2: ret  */ FN_RET(0x00885cfc); r_esp += 4; return;
L_00885fc3:; BB(0x00885fc3);
    /* 00885fc3: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00885fc6: jmp 0x885ef1 */ goto L_00885ef1;
L_00885fcb:; BB(0x00885fcb);
    /* 00885fcb: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00885fce: jmp 0x885d49 */ goto L_00885d49;
}

void f_00885fd4(void) /* sub_885FD4 */
{
    FN_ENTER(0x00885fd4);
    /* 00885fd4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00885fd8: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00885fdc: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00885fe0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00885fe1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00885fe2: mov ebx, edx */ r_ebx = r_edx;
    /* 00885fe4: mov edi, eax */ r_edi = r_eax;
    /* 00885fe6: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 00885fe9: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 00885fec: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00885fef: push dword ptr [edx + ebx*4] */ { u32 v = R32((u32)(r_edx+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00885ff2: push dword ptr [eax + ebx*4] */ { u32 v = R32((u32)(r_eax+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00885ff5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00885ff6: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x885ffbu); f_008779d8();
    /* 00885ffb: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 00885ffe: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00886001: mov eax, dword ptr [eax + ebx*4] */ r_eax = R32((u32)(r_eax+r_ebx*4));
    /* 00886004: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00886007: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00886008: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00886009: ret  */ FN_RET(0x00885fd4); r_esp += 4; return;
}

