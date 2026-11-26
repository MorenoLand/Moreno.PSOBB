#include "protos.h"

void f_007a59d4(void) /* sub_7A59D4 */
{
    FN_ENTER(0x007a59d4);
    /* 007a59d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a59d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a59d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a59d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a59d8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a59db: mov edi, ecx */ r_edi = r_ecx;
    /* 007a59dd: mov ecx, 0xfee */ r_ecx = 0xfeeu;
    /* 007a59e2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a59e4: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 007a59e8: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 007a59ec: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 007a59ef: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 007a59f2: mov dword ptr [edi + 0x7220], eax */ W32((u32)(r_edi+0x7220u), r_eax);
    /* 007a59f8: mov dword ptr [edi + 0x7224], ebp */ W32((u32)(r_edi+0x7224u), r_ebp);
    /* 007a59fe: lea eax, [ebx + esi + 8] */ r_eax = (u32)(r_ebx+r_esi+0x8u);
    /* 007a5a02: mov dword ptr [edi + 0x7228], eax */ W32((u32)(r_edi+0x7228u), r_eax);
    /* 007a5a08: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007a5a0a:; BB(0x007a5a0a);
    /* 007a5a0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a5a0c: mov byte ptr [ebx + edi], al */ W8((u32)(r_ebx+r_edi), (u8)r_eax);
    /* 007a5a0f: mov byte ptr [ebx + edi + 1], al */ W8((u32)(r_ebx+r_edi+0x1u), (u8)r_eax);
    /* 007a5a13: mov byte ptr [ebx + edi + 2], al */ W8((u32)(r_ebx+r_edi+0x2u), (u8)r_eax);
    /* 007a5a17: mov byte ptr [ebx + edi + 3], al */ W8((u32)(r_ebx+r_edi+0x3u), (u8)r_eax);
    /* 007a5a1b: mov byte ptr [ebx + edi + 4], al */ W8((u32)(r_ebx+r_edi+0x4u), (u8)r_eax);
    /* 007a5a1f: mov byte ptr [ebx + edi + 5], al */ W8((u32)(r_ebx+r_edi+0x5u), (u8)r_eax);
    /* 007a5a23: add ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a5a26: cmp ebx, 0xfe8 */ {  u32 a = r_ebx; u32 b = 0xfe8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a5a2c: jl 0x7a5a0a */ if ((fS!=fO)) goto L_007a5a0a;
L_007a5a2e:; BB(0x007a5a2e);
    /* 007a5a2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a5a30: mov byte ptr [ebx + edi], al */ W8((u32)(r_ebx+r_edi), (u8)r_eax);
    /* 007a5a33: mov byte ptr [ebx + edi + 1], al */ W8((u32)(r_ebx+r_edi+0x1u), (u8)r_eax);
    /* 007a5a37: mov byte ptr [ebx + edi + 2], al */ W8((u32)(r_ebx+r_edi+0x2u), (u8)r_eax);
    /* 007a5a3b: mov byte ptr [ebx + edi + 3], al */ W8((u32)(r_ebx+r_edi+0x3u), (u8)r_eax);
    /* 007a5a3f: mov eax, dword ptr [edi + 0x7220] */ r_eax = R32((u32)(r_edi+0x7220u));
    /* 007a5a45: mov ebx, dword ptr [edi + 0x7228] */ r_ebx = R32((u32)(r_edi+0x7228u));
L_007a5a4b:; BB(0x007a5a4b);
    /* 007a5a4b: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007a5a4d: test edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a5a53: jne 0x7a5a7a */ if (!fZ) goto L_007a5a7a;
L_007a5a55:; BB(0x007a5a55);
    /* 007a5a55: mov edx, eax */ r_edx = r_eax;
    /* 007a5a57: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a5a5a: mov dword ptr [edi + 0x7220], eax */ W32((u32)(r_edi+0x7220u), r_eax);
    /* 007a5a60: movzx edx, byte ptr [edx] */ r_edx = (u32)R8((u32)(r_edx));
    /* 007a5a63: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007a5a65: jbe 0x7a5a74 */ if ((fC||fZ)) goto L_007a5a74;
L_007a5a67:; BB(0x007a5a67);
    /* 007a5a67: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 007a5a6b: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 007a5a6f: jmp 0x7a5aff */ goto L_007a5aff;
L_007a5a74:; BB(0x007a5a74);
    /* 007a5a74: or edx, 0xff00 */ {  u32 a = r_edx; u32 b = 0xff00u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
L_007a5a7a:; BB(0x007a5a7a);
    /* 007a5a7a: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a5a7d: je 0x7a5ac9 */ if (fZ) goto L_007a5ac9;
L_007a5a7f:; BB(0x007a5a7f);
    /* 007a5a7f: lea ebp, [eax + 1] */ r_ebp = (u32)(r_eax+0x1u);
    /* 007a5a82: mov dword ptr [edi + 0x7220], ebp */ W32((u32)(r_edi+0x7220u), r_ebp);
    /* 007a5a88: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 007a5a8b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007a5a8f: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007a5a91: jbe 0x7a5a9d */ if ((fC||fZ)) goto L_007a5a9d;
L_007a5a93:; BB(0x007a5a93);
    /* 007a5a93: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 007a5a97: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 007a5a9b: jmp 0x7a5aff */ goto L_007a5aff;
L_007a5a9d:; BB(0x007a5a9d);
    /* 007a5a9d: mov ebp, dword ptr [edi + 0x7224] */ r_ebp = R32((u32)(r_edi+0x7224u));
    /* 007a5aa3: lea ebx, [ebp + 1] */ r_ebx = (u32)(r_ebp+0x1u);
    /* 007a5aa6: mov dword ptr [edi + 0x7224], ebx */ W32((u32)(r_edi+0x7224u), r_ebx);
    /* 007a5aac: mov byte ptr [ebp], al */ W8((u32)(r_ebp), (u8)r_eax);
    /* 007a5aaf: mov byte ptr [ecx + edi], al */ W8((u32)(r_ecx+r_edi), (u8)r_eax);
    /* 007a5ab2: mov eax, dword ptr [edi + 0x7220] */ r_eax = R32((u32)(r_edi+0x7220u));
    /* 007a5ab8: mov ebx, dword ptr [edi + 0x7228] */ r_ebx = R32((u32)(r_edi+0x7228u));
    /* 007a5abe: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a5ac1: and ecx, 0xfff */ {  u32 a = r_ecx; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007a5ac7: jmp 0x7a5a4b */ goto L_007a5a4b;
L_007a5ac9:; BB(0x007a5ac9);
    /* 007a5ac9: lea esi, [eax + 1] */ r_esi = (u32)(r_eax+0x1u);
    /* 007a5acc: mov dword ptr [edi + 0x7220], esi */ W32((u32)(r_edi+0x7220u), r_esi);
    /* 007a5ad2: movzx ebp, byte ptr [eax] */ r_ebp = (u32)R8((u32)(r_eax));
    /* 007a5ad5: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007a5ad7: jbe 0x7a5ae3 */ if ((fC||fZ)) goto L_007a5ae3;
L_007a5ad9:; BB(0x007a5ad9);
    /* 007a5ad9: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 007a5add: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 007a5ae1: jmp 0x7a5aff */ goto L_007a5aff;
L_007a5ae3:; BB(0x007a5ae3);
    /* 007a5ae3: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 007a5ae6: mov dword ptr [edi + 0x7220], eax */ W32((u32)(r_edi+0x7220u), r_eax);
    /* 007a5aec: movzx esi, byte ptr [esi] */ r_esi = (u32)R8((u32)(r_esi));
    /* 007a5aef: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 007a5af3: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007a5af5: jbe 0x7a5b1a */ if ((fC||fZ)) goto L_007a5b1a;
L_007a5af7:; BB(0x007a5af7);
    /* 007a5af7: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 007a5afb: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
L_007a5aff:; BB(0x007a5aff);
    /* 007a5aff: mov eax, dword ptr [edi + 0x7224] */ r_eax = R32((u32)(r_edi+0x7224u));
    /* 007a5b05: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007a5b07: cmp eax, dword ptr [esi] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a5b09: jne 0x7a5b15 */ if (!fZ) goto L_007a5b15;
L_007a5b0b:; BB(0x007a5b0b);
    /* 007a5b0b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a5b0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a5b0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a5b10: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a5b11: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a5b12: ret 0xc */ FN_RET(0x007a59d4); r_esp += 16; return;
L_007a5b15:; BB(0x007a5b15);
    /* 007a5b15: jmp 0x7a5b15 */ goto L_007a5b15;
L_007a5b1a:; BB(0x007a5b1a);
    /* 007a5b1a: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 007a5b1e: mov ebx, esi */ r_ebx = r_esi;
    /* 007a5b20: and ebx, 0xf0 */ {  u32 a = r_ebx; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 007a5b26: shl ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 007a5b29: or ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 007a5b2b: and esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 007a5b2e: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 007a5b32: lea esi, [esi + 2] */ r_esi = (u32)(r_esi+0x2u);
    /* 007a5b35: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 007a5b39: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007a5b3b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 007a5b3d: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 007a5b41: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 007a5b45: jb 0x7a5a4b */ if (fC) goto L_007a5a4b;
L_007a5b4b:; BB(0x007a5b4b);
    /* 007a5b4b: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007a5b4f: lea ebx, [eax + 2] */ r_ebx = (u32)(r_eax+0x2u);
    /* 007a5b52: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007a5b55: jb 0x7a5c28 */ if (fC) goto L_007a5c28;
L_007a5b5b:; BB(0x007a5b5b);
    /* 007a5b5b: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 007a5b5f: add dword ptr [esp + 0x18], -2 */ { u32 ad = (u32)(r_esp+0x18u);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007a5b64: lea ebx, [esi + ebp] */ r_ebx = (u32)(r_esi+r_ebp);
    /* 007a5b67: lea eax, [ebp + esi + 1] */ r_eax = (u32)(r_ebp+r_esi+0x1u);
    /* 007a5b6b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007a5b6f: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 007a5b73: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 007a5b77: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007a5b7a: lea eax, [ebp + esi + 2] */ r_eax = (u32)(r_ebp+r_esi+0x2u);
    /* 007a5b7e: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
L_007a5b82:; BB(0x007a5b82);
    /* 007a5b82: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 007a5b86: add dword ptr [esp + 0x10], 3 */ { u32 ad = (u32)(r_esp+0x10u);  u32 a = R32(ad); u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007a5b8b: and esi, 0xfff */ {  u32 a = r_esi; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 007a5b91: movzx edx, byte ptr [esi + edi] */ r_edx = (u32)R8((u32)(r_esi+r_edi));
    /* 007a5b95: mov esi, dword ptr [edi + 0x7224] */ r_esi = R32((u32)(r_edi+0x7224u));
    /* 007a5b9b: lea ebx, [esi + 1] */ r_ebx = (u32)(r_esi+0x1u);
    /* 007a5b9e: mov dword ptr [edi + 0x7224], ebx */ W32((u32)(r_edi+0x7224u), r_ebx);
    /* 007a5ba4: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 007a5ba6: mov byte ptr [ecx + edi], dl */ W8((u32)(r_ecx+r_edi), (u8)r_edx);
    /* 007a5ba9: mov esi, dword ptr [edi + 0x7224] */ r_esi = R32((u32)(r_edi+0x7224u));
    /* 007a5baf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a5bb2: and ecx, 0xfff */ {  u32 a = r_ecx; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007a5bb8: mov edx, ebp */ r_edx = r_ebp;
    /* 007a5bba: and edx, 0xfff */ {  u32 a = r_edx; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007a5bc0: movzx ebx, byte ptr [edx + edi] */ r_ebx = (u32)R8((u32)(r_edx+r_edi));
    /* 007a5bc4: lea edx, [esi + 1] */ r_edx = (u32)(r_esi+0x1u);
    /* 007a5bc7: mov dword ptr [edi + 0x7224], edx */ W32((u32)(r_edi+0x7224u), r_edx);
    /* 007a5bcd: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 007a5bcf: mov edx, eax */ r_edx = r_eax;
    /* 007a5bd1: mov byte ptr [ecx + edi], bl */ W8((u32)(r_ecx+r_edi), (u8)r_ebx);
    /* 007a5bd4: mov esi, dword ptr [edi + 0x7224] */ r_esi = R32((u32)(r_edi+0x7224u));
    /* 007a5bda: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a5bdd: and ecx, 0xfff */ {  u32 a = r_ecx; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007a5be3: and edx, 0xfff */ {  u32 a = r_edx; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007a5be9: movzx edx, byte ptr [edx + edi] */ r_edx = (u32)R8((u32)(r_edx+r_edi));
    /* 007a5bed: lea ebx, [esi + 1] */ r_ebx = (u32)(r_esi+0x1u);
    /* 007a5bf0: mov dword ptr [edi + 0x7224], ebx */ W32((u32)(r_edi+0x7224u), r_ebx);
    /* 007a5bf6: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 007a5bfa: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 007a5bfc: add ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a5bff: mov byte ptr [ecx + edi], dl */ W8((u32)(r_ecx+r_edi), (u8)r_edx);
    /* 007a5c02: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007a5c06: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a5c09: and ecx, 0xfff */ {  u32 a = r_ecx; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007a5c0f: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a5c12: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a5c15: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007a5c19: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007a5c1b: jbe 0x7a5b82 */ if ((fC||fZ)) goto L_007a5b82;
L_007a5c21:; BB(0x007a5c21);
    /* 007a5c21: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 007a5c25: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
L_007a5c28:; BB(0x007a5c28);
    /* 007a5c28: add ebp, dword ptr [esp + 0xc] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a5c2c: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007a5c2f: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
L_007a5c33:; BB(0x007a5c33);
    /* 007a5c33: mov ebx, ebp */ r_ebx = r_ebp;
    /* 007a5c35: and ebx, 0xfff */ {  u32 a = r_ebx; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 007a5c3b: movzx eax, byte ptr [ebx + edi] */ r_eax = (u32)R8((u32)(r_ebx+r_edi));
    /* 007a5c3f: mov ebx, dword ptr [edi + 0x7224] */ r_ebx = R32((u32)(r_edi+0x7224u));
    /* 007a5c45: lea esi, [ebx + 1] */ r_esi = (u32)(r_ebx+0x1u);
    /* 007a5c48: mov dword ptr [edi + 0x7224], esi */ W32((u32)(r_edi+0x7224u), r_esi);
    /* 007a5c4e: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 007a5c50: mov byte ptr [ecx + edi], al */ W8((u32)(r_ecx+r_edi), (u8)r_eax);
    /* 007a5c53: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007a5c57: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a5c5a: and ecx, 0xfff */ {  u32 a = r_ecx; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007a5c60: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a5c63: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a5c66: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007a5c68: jbe 0x7a5c33 */ if ((fC||fZ)) goto L_007a5c33;
L_007a5c6a:; BB(0x007a5c6a);
    /* 007a5c6a: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007a5c6d: mov eax, dword ptr [edi + 0x7220] */ r_eax = R32((u32)(r_edi+0x7220u));
    /* 007a5c73: mov ebx, dword ptr [edi + 0x7228] */ r_ebx = R32((u32)(r_edi+0x7228u));
    /* 007a5c79: jmp 0x7a5a4b */ goto L_007a5a4b;
}

void f_007a5c80(void) /* sub_7A5C80 */
{
    FN_ENTER(0x007a5c80);
    /* 007a5c80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a5c81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a5c82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a5c83: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a5c84: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a5c87: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007a5c89: mov esi, 0xfee */ r_esi = 0xfeeu;
    /* 007a5c8e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a5c90: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007a5c93: push 0x92b680 */ { u32 v = 0x92b680u; r_esp -= 4; W32(r_esp, v); }
    /* 007a5c98: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007a5c9c: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x7a5ca1u); f_0085957c();
    /* 007a5ca1: mov ebx, eax */ r_ebx = r_eax;
    /* 007a5ca3: push 0x92b684 */ { u32 v = 0x92b684u; r_esp -= 4; W32(r_esp, v); }
    /* 007a5ca8: push dword ptr [esp + 0x38] */ { u32 v = R32((u32)(r_esp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a5cac: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x7a5cb1u); f_0085957c();
    /* 007a5cb1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a5cb4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_007a5cb6:; BB(0x007a5cb6);
    /* 007a5cb6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a5cb8: mov byte ptr [ecx + ebp], dl */ W8((u32)(r_ecx+r_ebp), (u8)r_edx);
    /* 007a5cbb: mov byte ptr [ecx + ebp + 1], dl */ W8((u32)(r_ecx+r_ebp+0x1u), (u8)r_edx);
    /* 007a5cbf: mov byte ptr [ecx + ebp + 2], dl */ W8((u32)(r_ecx+r_ebp+0x2u), (u8)r_edx);
    /* 007a5cc3: mov byte ptr [ecx + ebp + 3], dl */ W8((u32)(r_ecx+r_ebp+0x3u), (u8)r_edx);
    /* 007a5cc7: mov byte ptr [ecx + ebp + 4], dl */ W8((u32)(r_ecx+r_ebp+0x4u), (u8)r_edx);
    /* 007a5ccb: mov byte ptr [ecx + ebp + 5], dl */ W8((u32)(r_ecx+r_ebp+0x5u), (u8)r_edx);
    /* 007a5ccf: add ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a5cd2: cmp ecx, 0xfe8 */ {  u32 a = r_ecx; u32 b = 0xfe8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a5cd8: jl 0x7a5cb6 */ if ((fS!=fO)) goto L_007a5cb6;
L_007a5cda:; BB(0x007a5cda);
    /* 007a5cda: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 007a5cdd: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007a5ce1: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 007a5ce5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a5ce7: mov byte ptr [ecx + ebp], dl */ W8((u32)(r_ecx+r_ebp), (u8)r_edx);
    /* 007a5cea: mov byte ptr [ecx + ebp + 1], dl */ W8((u32)(r_ecx+r_ebp+0x1u), (u8)r_edx);
    /* 007a5cee: mov byte ptr [ecx + ebp + 2], dl */ W8((u32)(r_ecx+r_ebp+0x2u), (u8)r_edx);
    /* 007a5cf2: mov byte ptr [ecx + ebp + 3], dl */ W8((u32)(r_ecx+r_ebp+0x3u), (u8)r_edx);
L_007a5cf6:; BB(0x007a5cf6);
    /* 007a5cf6: shr edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 007a5cf8: test edi, 0x100 */ {  u32 a = r_edi; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a5cfe: jne 0x7a5d1c */ if (!fZ) goto L_007a5d1c;
L_007a5d00:; BB(0x007a5d00);
    /* 007a5d00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a5d01: call 0x859e5b */ r_esp -= 4; W32(r_esp, 0x7a5d06u); f_00859e5b();
    /* 007a5d06: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a5d07: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 007a5d0a: movzx edi, al */ r_edi = (u32)(u8)r_eax;
    /* 007a5d0d: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a5d10: jne 0x7a5e2a */ if (!fZ) goto L_007a5e2a;
L_007a5d16:; BB(0x007a5d16);
    /* 007a5d16: or edi, 0xff00 */ {  u32 a = r_edi; u32 b = 0xff00u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_007a5d1c:; BB(0x007a5d1c);
    /* 007a5d1c: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a5d22: je 0x7a5d64 */ if (fZ) goto L_007a5d64;
L_007a5d24:; BB(0x007a5d24);
    /* 007a5d24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a5d25: call 0x859e5b */ r_esp -= 4; W32(r_esp, 0x7a5d2au); f_00859e5b();
    /* 007a5d2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a5d2b: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 007a5d2e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007a5d31: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007a5d35: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a5d38: jne 0x7a5e02 */ if (!fZ) goto L_007a5e02;
L_007a5d3e:; BB(0x007a5d3e);
    /* 007a5d3e: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 007a5d42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a5d43: mov edx, eax */ r_edx = r_eax;
    /* 007a5d45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a5d46: call 0x85a45b */ r_esp -= 4; W32(r_esp, 0x7a5d4bu); f_0085a45b();
    /* 007a5d4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a5d4e: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007a5d52: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 007a5d56: mov byte ptr [esi + ecx], dl */ W8((u32)(r_esi+r_ecx), (u8)r_edx);
    /* 007a5d59: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007a5d5c: and esi, 0xfff */ {  u32 a = r_esi; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 007a5d62: jmp 0x7a5cf6 */ goto L_007a5cf6;
L_007a5d64:; BB(0x007a5d64);
    /* 007a5d64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a5d65: call 0x859e5b */ r_esp -= 4; W32(r_esp, 0x7a5d6au); f_00859e5b();
    /* 007a5d6a: mov ebp, eax */ r_ebp = r_eax;
    /* 007a5d6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a5d6f: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 007a5d72: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a5d75: jne 0x7a5e1e */ if (!fZ) goto L_007a5e1e;
L_007a5d7b:; BB(0x007a5d7b);
    /* 007a5d7b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a5d7c: call 0x859e5b */ r_esp -= 4; W32(r_esp, 0x7a5d81u); f_00859e5b();
    /* 007a5d81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a5d82: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 007a5d85: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a5d88: jne 0x7a5e24 */ if (!fZ) goto L_007a5e24;
L_007a5d8e:; BB(0x007a5d8e);
    /* 007a5d8e: mov edx, eax */ r_edx = r_eax;
    /* 007a5d90: and edx, 0xf0 */ {  u32 a = r_edx; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007a5d96: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 007a5d99: or ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 007a5d9b: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007a5d9e: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a5da1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a5da3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 007a5da5: jb 0x7a5cf6 */ if (fC) goto L_007a5cf6;
L_007a5dab:; BB(0x007a5dab);
    /* 007a5dab: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007a5daf: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a5db1: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 007a5db5: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 007a5db8: mov edi, edx */ r_edi = r_edx;
L_007a5dba:; BB(0x007a5dba);
    /* 007a5dba: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 007a5dbe: mov ebx, ebp */ r_ebx = r_ebp;
    /* 007a5dc0: and ebx, 0xfff */ {  u32 a = r_ebx; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 007a5dc6: movzx ebx, byte ptr [ebx + ecx] */ r_ebx = (u32)R8((u32)(r_ebx+r_ecx));
    /* 007a5dca: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007a5dce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a5dcf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a5dd0: call 0x85a45b */ r_esp -= 4; W32(r_esp, 0x7a5dd5u); f_0085a45b();
    /* 007a5dd5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a5dd8: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 007a5ddc: mov byte ptr [esi + ecx], bl */ W8((u32)(r_esi+r_ecx), (u8)r_ebx);
    /* 007a5ddf: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 007a5de3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007a5de6: and esi, 0xfff */ {  u32 a = r_esi; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 007a5dec: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a5def: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a5df2: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007a5df4: jbe 0x7a5dba */ if ((fC||fZ)) goto L_007a5dba;
L_007a5df6:; BB(0x007a5df6);
    /* 007a5df6: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 007a5dfa: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 007a5dfd: jmp 0x7a5cf6 */ goto L_007a5cf6;
L_007a5e02:; BB(0x007a5e02);
    /* 007a5e02: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
L_007a5e06:; BB(0x007a5e06);
    /* 007a5e06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a5e07: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x7a5e0cu); f_00859710();
    /* 007a5e0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a5e0d: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x7a5e12u); f_00859710();
    /* 007a5e12: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a5e14: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a5e17: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a5e18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a5e19: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a5e1a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a5e1b: ret 8 */ FN_RET(0x007a5c80); r_esp += 12; return;
L_007a5e1e:; BB(0x007a5e1e);
    /* 007a5e1e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a5e22: jmp 0x7a5e06 */ goto L_007a5e06;
L_007a5e24:; BB(0x007a5e24);
    /* 007a5e24: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a5e28: jmp 0x7a5e06 */ goto L_007a5e06;
L_007a5e2a:; BB(0x007a5e2a);
    /* 007a5e2a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a5e2e: jmp 0x7a5e06 */ goto L_007a5e06;
}

void f_007a5e30(void) /* sub_7A5E30 */
{
    FN_ENTER(0x007a5e30);
    /* 007a5e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a5e31: lea edx, [ecx + 0x7018] */ r_edx = (u32)(r_ecx+0x7018u);
    /* 007a5e37: lea eax, [ecx + 0x7216] */ r_eax = (u32)(r_ecx+0x7216u);
L_007a5e3d:; BB(0x007a5e3d);
    /* 007a5e3d: mov ebp, 0x1000 */ r_ebp = 0x1000u;
    /* 007a5e42: mov word ptr [edx], bp */ W16((u32)(r_edx), (u16)r_ebp);
    /* 007a5e45: mov word ptr [edx + 2], bp */ W16((u32)(r_edx+0x2u), (u16)r_ebp);
    /* 007a5e49: mov word ptr [edx + 4], bp */ W16((u32)(r_edx+0x4u), (u16)r_ebp);
    /* 007a5e4d: mov word ptr [edx + 6], bp */ W16((u32)(r_edx+0x6u), (u16)r_ebp);
    /* 007a5e51: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a5e54: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007a5e56: jae 0x7a5e3d */ if (!fC) goto L_007a5e3d;
L_007a5e58:; BB(0x007a5e58);
    /* 007a5e58: lea eax, [ecx + 0x1012] */ r_eax = (u32)(r_ecx+0x1012u);
    /* 007a5e5e: add ecx, 0x3012 */ {  u32 a = r_ecx; u32 b = 0x3012u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_007a5e64:; BB(0x007a5e64);
    /* 007a5e64: mov edx, 0x1000 */ r_edx = 0x1000u;
    /* 007a5e69: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007a5e6c: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
    /* 007a5e70: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 007a5e74: mov word ptr [eax + 6], dx */ W16((u32)(r_eax+0x6u), (u16)r_edx);
    /* 007a5e78: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a5e7b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a5e7d: ja 0x7a5e64 */ if ((!fC&&!fZ)) goto L_007a5e64;
L_007a5e7f:; BB(0x007a5e7f);
    /* 007a5e7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a5e80: ret  */ FN_RET(0x007a5e30); r_esp += 4; return;
}

void f_007a5e84(void) /* sub_7A5E84 */
{
    FN_ENTER(0x007a5e84);
    /* 007a5e84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a5e85: mov ebx, esp */ r_ebx = r_esp;
    /* 007a5e87: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 007a5e8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a5e8b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a5e8c: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 007a5e8f: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 007a5e93: mov ebp, esp */ r_ebp = r_esp;
    /* 007a5e95: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a5e97: push 0x7a6044 */ { u32 v = 0x7a6044u; r_esp -= 4; W32(r_esp, v); }
    /* 007a5e9c: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a5ea2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a5ea3: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a5eaa: sub esp, 0x22c */ {  u32 a = r_esp; u32 b = 0x22cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a5eb0: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a5eb3: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a5eb6: call 0x86b768 */ r_esp -= 4; W32(r_esp, 0x7a5ebbu); f_0086b768();
    /* 007a5ebb: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007a5ebe: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007a5ec1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a5ec8: call 0x7a64b0 */ r_esp -= 4; W32(r_esp, 0x7a5ecdu); f_007a64b0();
    /* 007a5ecd: mov ecx, dword ptr [0xaab384] */ r_ecx = R32((u32)(0xaab384u));
L_007a5ed3:; BB(0x007a5ed3);
    /* 007a5ed3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a5ed5: je 0x7a6036 */ if (fZ) goto L_007a6036;
L_007a5edb:; BB(0x007a5edb);
    /* 007a5edb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a5edd: mov dword ptr [0xaab394], 0 */ W32((u32)(0xaab394u), 0x0u);
    /* 007a5ee7: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 007a5eea: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007a5eec: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 007a5eef: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a5ef1: mov esi, dword ptr [eax + 0x9ff7c0] */ r_esi = R32((u32)(r_eax+0x9ff7c0u));
    /* 007a5ef7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a5ef9: je 0x7a5f13 */ if (fZ) goto L_007a5f13;
L_007a5efb:; BB(0x007a5efb);
    /* 007a5efb: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x7a5efdu); call_ind(t); }
    /* 007a5efd: mov ecx, dword ptr [0xaab384] */ r_ecx = R32((u32)(0xaab384u));
    /* 007a5f03: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 007a5f06: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a5f08: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007a5f0b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a5f0d: mov edx, dword ptr [0xaab394] */ r_edx = R32((u32)(0xaab394u));
L_007a5f13:; BB(0x007a5f13);
    /* 007a5f13: mov esi, dword ptr [eax + 0x9ff7c4] */ r_esi = R32((u32)(r_eax+0x9ff7c4u));
    /* 007a5f19: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a5f1b: jne 0x7a5f44 */ if (!fZ) goto L_007a5f44;
L_007a5f1d:; BB(0x007a5f1d);
    /* 007a5f1d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a5f1f: je 0x7a5f44 */ if (fZ) goto L_007a5f44;
L_007a5f21:; BB(0x007a5f21);
    /* 007a5f21: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x7a5f23u); call_ind(t); }
    /* 007a5f23: add dword ptr [0xa9c4ec], 1 */ { u32 ad = (u32)(0xa9c4ecu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007a5f2a: mov edx, dword ptr [0xaab394] */ r_edx = R32((u32)(0xaab394u));
    /* 007a5f30: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a5f32: je 0x7a5f21 */ if (fZ) goto L_007a5f21;
L_007a5f34:; BB(0x007a5f34);
    /* 007a5f34: mov ecx, dword ptr [0xaab384] */ r_ecx = R32((u32)(0xaab384u));
    /* 007a5f3a: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 007a5f3d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007a5f3f: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 007a5f42: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_007a5f44:; BB(0x007a5f44);
    /* 007a5f44: mov eax, dword ptr [eax + 0x9ff7c8] */ r_eax = R32((u32)(r_eax+0x9ff7c8u));
    /* 007a5f4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a5f4c: je 0x7a5f5c */ if (fZ) goto L_007a5f5c;
L_007a5f4e:; BB(0x007a5f4e);
    /* 007a5f4e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x7a5f50u); call_ind(t); }
    /* 007a5f50: mov ecx, dword ptr [0xaab384] */ r_ecx = R32((u32)(0xaab384u));
    /* 007a5f56: mov edx, dword ptr [0xaab394] */ r_edx = R32((u32)(0xaab394u));
L_007a5f5c:; BB(0x007a5f5c);
    /* 007a5f5c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007a5f5e: jle 0x7a5ed3 */ if ((fZ||fS!=fO)) goto L_007a5ed3;
L_007a5f64:; BB(0x007a5f64);
    /* 007a5f64: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a5f67: jg 0x7a5ed3 */ if ((!fZ&&fS==fO)) goto L_007a5ed3;
L_007a5f6d:; BB(0x007a5f6d);
    /* 007a5f6d: mov dword ptr [0xaab398], ecx */ W32((u32)(0xaab398u), r_ecx);
    /* 007a5f73: mov ecx, dword ptr [0xaab388] */ r_ecx = R32((u32)(0xaab388u));
    /* 007a5f79: mov dword ptr [0xaab384], ecx */ W32((u32)(0xaab384u), r_ecx);
    /* 007a5f7f: jmp 0x7a5ed3 */ goto L_007a5ed3;
L_007a600f:; BB(0x007a600f);
    /* 007a600f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a6012: push 0x7a6374 */ { u32 v = 0x7a6374u; r_esp -= 4; W32(r_esp, v); }
    /* 007a6017: call 0x82d33c */ r_esp -= 4; W32(r_esp, 0x7a601cu); f_0082d33c();
    /* 007a601c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a601d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a6020: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007a6023: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a6026: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a602d: mov esp, ebp */ r_esp = r_ebp;
    /* 007a602f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a6030: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a6032: mov esp, ebx */ r_esp = r_ebx;
    /* 007a6034: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a6035: ret  */ FN_RET(0x007a5e84); r_esp += 4; return;
L_007a6036:; BB(0x007a6036);
    /* 007a6036: call 0x7a6398 */ r_esp -= 4; W32(r_esp, 0x7a603bu); f_007a6398();
    /* 007a603b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a6042: jmp 0x7a600f */ goto L_007a600f;
}

void f_007a5f84(void)
{
    FN_ENTER(0x007a5f84);
    /* 007a5f84: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a5f87: lea eax, [ebp - 0x238] */ r_eax = (u32)(r_ebp+0xfffffdc8u);
    /* 007a5f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a5f8e: call 0x859d2d */ r_esp -= 4; W32(r_esp, 0x7a5f93u); f_00859d2d();
    /* 007a5f93: lea eax, [ebp - 0x238] */ r_eax = (u32)(r_ebp+0xfffffdc8u);
    /* 007a5f99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a5f9a: call 0x85a27d */ r_esp -= 4; W32(r_esp, 0x7a5f9fu); f_0085a27d();
    /* 007a5f9f: mov dword ptr [ebp - 0x234], eax */ W32((u32)(r_ebp+0xfffffdccu), r_eax);
    /* 007a5fa5: lea esi, [ebp - 0x230] */ r_esi = (u32)(r_ebp+0xfffffdd0u);
    /* 007a5fab: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 007a5fae: add ecx, 0x76c */ {  u32 a = r_ecx; u32 b = 0x76cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a5fb4: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 007a5fb7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a5fba: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007a5fbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a5fbe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a5fbf: push 0x97d0f4 */ { u32 v = 0x97d0f4u; r_esp -= 4; W32(r_esp, v); }
    /* 007a5fc4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a5fc5: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x7a5fcau); f_00858bf5();
    /* 007a5fca: lea eax, [ebp - 0x230] */ r_eax = (u32)(r_ebp+0xfffffdd0u);
    /* 007a5fd0: push 0x97d11c */ { u32 v = 0x97d11cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a5fd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a5fd6: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x7a5fdbu); f_0085957c();
    /* 007a5fdb: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a5fde: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 007a5fe1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a5fe3: je 0x7a6009 */ if (fZ) goto L_007a6009;
L_007a5fe5:; BB(0x007a5fe5);
    /* 007a5fe5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007a5fe8: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 007a5feb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007a5fed: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x7a5ff0u); call_ind(t); }
    /* 007a5ff0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a5ff1: push 0x979adc */ { u32 v = 0x979adcu; r_esp -= 4; W32(r_esp, v); }
    /* 007a5ff6: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a5ff9: call 0x85a5d8 */ r_esp -= 4; W32(r_esp, 0x7a5ffeu); f_0085a5d8();
    /* 007a5ffe: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a6001: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x7a6006u); f_00859710();
    /* 007a6006: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_007a6009:; BB(0x007a6009);
    /* 007a6009: mov eax, 0x7a600f */ r_eax = 0x7a600fu;
    /* 007a600e: ret  */ FN_RET(0x007a5f84); r_esp += 4; return;
}

