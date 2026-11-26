#include "protos.h"

void f_008c6a60(void) /* sub_8C6A60 */
{
    FN_ENTER(0x008c6a60);
    /* 008c6a60: sub esp, 0x540 */ {  u32 a = r_esp; u32 b = 0x540u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c6a66: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6a67: lea eax, [esp + 0x33c] */ r_eax = (u32)(r_esp+0x33cu);
    /* 008c6a6e: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6a73: xor bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c6a75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6a76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6a78: mov byte ptr [esp + 0x13], bl */ W8((u32)(r_esp+0x13u), (u8)r_ebx);
    /* 008c6a7c: call dword ptr [0x8f8110] */ { u32 t = R32((u32)(0x8f8110u)); r_esp -= 4; W32(r_esp, 0x8c6a82u); call_ind(t); }
    /* 008c6a82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6a84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6a86: lea ecx, [esp + 0x13c] */ r_ecx = (u32)(r_esp+0x13cu);
    /* 008c6a8d: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6a92: lea edx, [esp + 0x348] */ r_edx = (u32)(r_esp+0x348u);
    /* 008c6a99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6a9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6a9b: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x8c6aa0u); f_00858009();
    /* 008c6aa0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6aa3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c6aa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6aa5: lea eax, [esp + 0x350] */ r_eax = (u32)(r_esp+0x350u);
    /* 008c6aac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6aad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6aaf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6ab1: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x8c6ab7u); call_ind(t); }
    /* 008c6ab7: lea ecx, [esp + 0x134] */ r_ecx = (u32)(r_esp+0x134u);
    /* 008c6abe: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c6ac0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6ac1: call 0x8612da */ r_esp -= 4; W32(r_esp, 0x8c6ac6u); f_008612da();
    /* 008c6ac6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6ac9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6acb: je 0x8c6acf */ if (fZ) goto L_008c6acf;
L_008c6acd:; BB(0x008c6acd);
    /* 008c6acd: mov byte ptr [eax], bl */ W8((u32)(r_eax), (u8)r_ebx);
L_008c6acf:; BB(0x008c6acf);
    /* 008c6acf: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 008c6ad3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6ad4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6ad6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6ad8: push 0xa391f0 */ { u32 v = 0xa391f0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6add: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c6ae2u); f_008c94e0();
    /* 008c6ae2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6ae5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6ae6: push 0x80000001 */ { u32 v = 0x80000001u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6aeb: call dword ptr [0x8f800c] */ { u32 t = R32((u32)(0x8f800cu)); r_esp -= 4; W32(r_esp, 0x8c6af1u); call_ind(t); }
    /* 008c6af1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6af3: jne 0x8c6c44 */ if (!fZ) goto L_008c6c44;
L_008c6af9:; BB(0x008c6af9);
    /* 008c6af9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c6afa: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008c6afe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6aff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6b00: mov ebx, dword ptr [0x8f8058] */ r_ebx = R32((u32)(0x8f8058u));
    /* 008c6b06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6b07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6b08: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 008c6b0c: lea ecx, [esp + 0x44] */ r_ecx = (u32)(r_esp+0x44u);
    /* 008c6b10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6b11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6b12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6b14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6b15: mov dword ptr [esp + 0x30], 0x104 */ W32((u32)(r_esp+0x30u), 0x104u);
    /* 008c6b1d: mov ebp, 1 */ r_ebp = 0x1u;
    /* 008c6b22: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x8c6b24u); call_ind(t); }
    /* 008c6b24: cmp eax, 0x103 */ {  u32 a = r_eax; u32 b = 0x103u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6b29: je 0x8c6c2c */ if (fZ) goto L_008c6c2c;
L_008c6b2f:; BB(0x008c6b2f);
    /* 008c6b2f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c6b30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_008c6b31:; BB(0x008c6b31);
    /* 008c6b31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6b33: jne 0x8c6bfa */ if (!fZ) goto L_008c6bfa;
L_008c6b39:; BB(0x008c6b39);
    /* 008c6b39: lea edi, [esp + 0x3c] */ r_edi = (u32)(r_esp+0x3cu);
    /* 008c6b3d: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c6b40: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c6b42: not ecx */ r_ecx = ~r_ecx;
    /* 008c6b44: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c6b46: lea edx, [esp + 0x244] */ r_edx = (u32)(r_esp+0x244u);
    /* 008c6b4d: mov eax, ecx */ r_eax = r_ecx;
    /* 008c6b4f: mov esi, edi */ r_esi = r_edi;
    /* 008c6b51: mov edi, edx */ r_edi = r_edx;
    /* 008c6b53: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c6b55: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c6b58: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c6b5a: mov ecx, eax */ r_ecx = r_eax;
    /* 008c6b5c: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c6b5f: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c6b61: lea ecx, [esp + 0x248] */ r_ecx = (u32)(r_esp+0x248u);
    /* 008c6b68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6b69: call 0x8612da */ r_esp -= 4; W32(r_esp, 0x8c6b6eu); f_008612da();
    /* 008c6b6e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6b71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6b73: je 0x8c6b78 */ if (fZ) goto L_008c6b78;
L_008c6b75:; BB(0x008c6b75);
    /* 008c6b75: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
L_008c6b78:; BB(0x008c6b78);
    /* 008c6b78: lea edx, [esp + 0x140] */ r_edx = (u32)(r_esp+0x140u);
    /* 008c6b7f: lea eax, [esp + 0x244] */ r_eax = (u32)(r_esp+0x244u);
    /* 008c6b86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6b87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6b88: call 0x86118f */ r_esp -= 4; W32(r_esp, 0x8c6b8du); f_0086118f();
    /* 008c6b8d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6b90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6b92: jne 0x8c6bfa */ if (!fZ) goto L_008c6bfa;
L_008c6b94:; BB(0x008c6b94);
    /* 008c6b94: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 008c6b98: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 008c6b9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6b9d: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 008c6ba1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6ba2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6ba3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6ba4: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 008c6ba8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6ba9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6baa: call dword ptr [0x8f8008] */ { u32 t = R32((u32)(0x8f8008u)); r_esp -= 4; W32(r_esp, 0x8c6bb0u); call_ind(t); }
    /* 008c6bb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6bb2: jne 0x8c6bfa */ if (!fZ) goto L_008c6bfa;
L_008c6bb4:; BB(0x008c6bb4);
    /* 008c6bb4: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c6bb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6bbb: je 0x8c6be1 */ if (fZ) goto L_008c6be1;
L_008c6bbd:; BB(0x008c6bbd);
    /* 008c6bbd: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 008c6bc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6bc2: push 0xa391d8 */ { u32 v = 0xa391d8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6bc7: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c6bccu); f_008c94e0();
    /* 008c6bcc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6bcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6bd0: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c6bd5: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c6bd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6bd9: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c6bdeu); f_008c3720();
    /* 008c6bde: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c6be1:; BB(0x008c6be1);
    /* 008c6be1: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008c6be5: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 008c6be9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6bea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6beb: call dword ptr [0x8f8020] */ { u32 t = R32((u32)(0x8f8020u)); r_esp -= 4; W32(r_esp, 0x8c6bf1u); call_ind(t); }
    /* 008c6bf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6bf3: jne 0x8c6bfa */ if (!fZ) goto L_008c6bfa;
L_008c6bf5:; BB(0x008c6bf5);
    /* 008c6bf5: mov byte ptr [esp + 0x13], 1 */ W8((u32)(r_esp+0x13u), 0x1u);
L_008c6bfa:; BB(0x008c6bfa);
    /* 008c6bfa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6bfc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6bfe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c00: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 008c6c04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c06: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 008c6c0a: mov eax, ebp */ r_eax = r_ebp;
    /* 008c6c0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c0f: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 008c6c13: mov dword ptr [esp + 0x34], 0x104 */ W32((u32)(r_esp+0x34u), 0x104u);
    /* 008c6c1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c1c: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c6c1d: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x8c6c1fu); call_ind(t); }
    /* 008c6c1f: cmp eax, 0x103 */ {  u32 a = r_eax; u32 b = 0x103u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6c24: jne 0x8c6b31 */ if (!fZ) goto L_008c6b31;
L_008c6c2a:; BB(0x008c6c2a);
    /* 008c6c2a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c6c2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008c6c2c:; BB(0x008c6c2c);
    /* 008c6c2c: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008c6c30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c31: call dword ptr [0x8f8000] */ { u32 t = R32((u32)(0x8f8000u)); r_esp -= 4; W32(r_esp, 0x8c6c37u); call_ind(t); }
    /* 008c6c37: mov al, byte ptr [esp + 0xb] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0xbu))) & 0xffu);
    /* 008c6c3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c6c3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c6c3d: add esp, 0x540 */ {  u32 a = r_esp; u32 b = 0x540u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c6c43: ret  */ FN_RET(0x008c6a60); r_esp += 4; return;
L_008c6c44:; BB(0x008c6c44);
    /* 008c6c44: mov al, bl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 008c6c46: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c6c47: add esp, 0x540 */ {  u32 a = r_esp; u32 b = 0x540u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c6c4d: ret  */ FN_RET(0x008c6a60); r_esp += 4; return;
}

void f_008c6c50(void) /* sub_8C6C50 */
{
    FN_ENTER(0x008c6c50);
    /* 008c6c50: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c51: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008c6c55: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c57: push 0xf003f */ { u32 v = 0xf003fu; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c5e: push 0xa39250 */ { u32 v = 0xa39250u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c63: xor bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c6c65: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c6c6au); f_008c94e0();
    /* 008c6c6a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6c6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c6e: push 0x80000002 */ { u32 v = 0x80000002u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c73: call dword ptr [0x8f800c] */ { u32 t = R32((u32)(0x8f800cu)); r_esp -= 4; W32(r_esp, 0x8c6c79u); call_ind(t); }
    /* 008c6c79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c6c7b: jne 0x8c6cb1 */ if (!fZ) goto L_008c6cb1;
L_008c6c7d:; BB(0x008c6c7d);
    /* 008c6c7d: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 008c6c81: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c84: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c87: push 0xa39238 */ { u32 v = 0xa39238u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c8c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c6c91u); f_008c94e0();
    /* 008c6c91: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 008c6c95: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6c98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6c9a: call dword ptr [0x8f8010] */ { u32 t = R32((u32)(0x8f8010u)); r_esp -= 4; W32(r_esp, 0x8c6ca0u); call_ind(t); }
    /* 008c6ca0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6ca2: jne 0x8c6ca6 */ if (!fZ) goto L_008c6ca6;
L_008c6ca4:; BB(0x008c6ca4);
    /* 008c6ca4: mov bl, 1 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x1u) & 0xffu);
L_008c6ca6:; BB(0x008c6ca6);
    /* 008c6ca6: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008c6caa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6cab: call dword ptr [0x8f8000] */ { u32 t = R32((u32)(0x8f8000u)); r_esp -= 4; W32(r_esp, 0x8c6cb1u); call_ind(t); }
L_008c6cb1:; BB(0x008c6cb1);
    /* 008c6cb1: mov al, bl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 008c6cb3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c6cb4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008c6cb5: ret  */ FN_RET(0x008c6c50); r_esp += 4; return;
}

void f_008c6cc0(void) /* sub_8C6CC0 */
{
    FN_ENTER(0x008c6cc0);
    /* 008c6cc0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c6cc1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6cc3: call dword ptr [0x8f81f0] */ { u32 t = R32((u32)(0x8f81f0u)); r_esp -= 4; W32(r_esp, 0x8c6cc9u); call_ind(t); }
    /* 008c6cc9: cmp word ptr [eax], 0x5a4d */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x5a4du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 008c6cce: jne 0x8c6d29 */ if (!fZ) goto L_008c6d29;
L_008c6cd0:; BB(0x008c6cd0);
    /* 008c6cd0: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 008c6cd3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6cd5: je 0x8c6cf3 */ if (fZ) goto L_008c6cf3;
L_008c6cd7:; BB(0x008c6cd7);
    /* 008c6cd7: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 008c6cda: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6cdc: je 0x8c6cf3 */ if (fZ) goto L_008c6cf3;
L_008c6cde:; BB(0x008c6cde);
    /* 008c6cde: mov byte ptr [0xaea814], 1 */ W8((u32)(0xaea814u), 0x1u);
    /* 008c6ce5: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 008c6ce8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6cea: jne 0x8c6cf3 */ if (!fZ) goto L_008c6cf3;
L_008c6cec:; BB(0x008c6cec);
    /* 008c6cec: mov byte ptr [0xaea815], 1 */ W8((u32)(0xaea815u), 0x1u);
L_008c6cf3:; BB(0x008c6cf3);
    /* 008c6cf3: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 008c6cf6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c6cf8: je 0x8c6d29 */ if (fZ) goto L_008c6d29;
L_008c6cfa:; BB(0x008c6cfa);
    /* 008c6cfa: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 008c6cfd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c6cff: je 0x8c6d29 */ if (fZ) goto L_008c6d29;
L_008c6d01:; BB(0x008c6d01);
    /* 008c6d01: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 008c6d04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c6d06: je 0x8c6d29 */ if (fZ) goto L_008c6d29;
L_008c6d08:; BB(0x008c6d08);
    /* 008c6d08: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008c6d0a: jbe 0x8c6d12 */ if ((fC||fZ)) goto L_008c6d12;
L_008c6d0c:; BB(0x008c6d0c);
    /* 008c6d0c: mov ecx, edx */ r_ecx = r_edx;
    /* 008c6d0e: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c6d10: jmp 0x8c6d16 */ goto L_008c6d16;
L_008c6d12:; BB(0x008c6d12);
    /* 008c6d12: mov ecx, esi */ r_ecx = r_esi;
    /* 008c6d14: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_008c6d16:; BB(0x008c6d16);
    /* 008c6d16: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c6d18: je 0x8c6d22 */ if (fZ) goto L_008c6d22;
L_008c6d1a:; BB(0x008c6d1a);
    /* 008c6d1a: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c6d1c: jne 0x8c6d29 */ if (!fZ) goto L_008c6d29;
L_008c6d1e:; BB(0x008c6d1e);
    /* 008c6d1e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c6d20: jne 0x8c6d29 */ if (!fZ) goto L_008c6d29;
L_008c6d22:; BB(0x008c6d22);
    /* 008c6d22: mov byte ptr [0xaea815], 1 */ W8((u32)(0xaea815u), 0x1u);
L_008c6d29:; BB(0x008c6d29);
    /* 008c6d29: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c6d2a: ret  */ FN_RET(0x008c6cc0); r_esp += 4; return;
}

void f_008c6d30(void) /* sub_8C6D30 */
{
    FN_ENTER(0x008c6d30);
    /* 008c6d30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6d31: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6d32: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c6d33: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c6d34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c6d35: push 0xa392c4 */ { u32 v = 0xa392c4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6d3a: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c6d3fu); f_008c94e0();
    /* 008c6d3f: mov esi, dword ptr [0x8f8104] */ r_esi = R32((u32)(0x8f8104u));
    /* 008c6d45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6d48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6d49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6d4b: push 0xf001f */ { u32 v = 0xf001fu; r_esp -= 4; W32(r_esp, v); }
    /* 008c6d50: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c6d52u); call_ind(t); }
    /* 008c6d52: mov edi, eax */ r_edi = r_eax;
    /* 008c6d54: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6d56: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 008c6d5a: jne 0x8c6d84 */ if (!fZ) goto L_008c6d84;
L_008c6d5c:; BB(0x008c6d5c);
    /* 008c6d5c: push 0xa392b8 */ { u32 v = 0xa392b8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6d61: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c6d66u); f_008c94e0();
    /* 008c6d66: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6d69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6d6a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c6d6b: push 0xf001f */ { u32 v = 0xf001fu; r_esp -= 4; W32(r_esp, v); }
    /* 008c6d70: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c6d72u); call_ind(t); }
    /* 008c6d72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c6d74: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 008c6d78: jne 0x8c6d80 */ if (!fZ) goto L_008c6d80;
L_008c6d7a:; BB(0x008c6d7a);
    /* 008c6d7a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c6d7b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c6d7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c6d7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c6d7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008c6d7f: ret  */ FN_RET(0x008c6d30); r_esp += 4; return;
L_008c6d80:; BB(0x008c6d80);
    /* 008c6d80: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_008c6d84:; BB(0x008c6d84);
    /* 008c6d84: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6d89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6d8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6d8d: push 0xf001f */ { u32 v = 0xf001fu; r_esp -= 4; W32(r_esp, v); }
    /* 008c6d92: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c6d93: call dword ptr [0x8f82ec] */ { u32 t = R32((u32)(0x8f82ecu)); r_esp -= 4; W32(r_esp, 0x8c6d99u); call_ind(t); }
    /* 008c6d99: mov ebx, eax */ r_ebx = r_eax;
    /* 008c6d9b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6d9d: jne 0x8c6dae */ if (!fZ) goto L_008c6dae;
L_008c6d9f:; BB(0x008c6d9f);
    /* 008c6d9f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c6da0: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c6da6u); call_ind(t); }
    /* 008c6da6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c6da7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c6da8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c6da9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c6dab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c6dac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008c6dad: ret  */ FN_RET(0x008c6d30); r_esp += 4; return;
L_008c6dae:; BB(0x008c6dae);
    /* 008c6dae: push 0xa392a4 */ { u32 v = 0xa392a4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6db3: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c6db8u); f_008c94e0();
    /* 008c6db8: mov esi, dword ptr [0x8f8318] */ r_esi = R32((u32)(0x8f8318u));
    /* 008c6dbe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6dc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6dc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6dc4: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6dc9: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c6dcbu); call_ind(t); }
    /* 008c6dcb: mov ebp, eax */ r_ebp = r_eax;
    /* 008c6dcd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6dcf: jne 0x8c6e03 */ if (!fZ) goto L_008c6e03;
L_008c6dd1:; BB(0x008c6dd1);
    /* 008c6dd1: push 0xa39298 */ { u32 v = 0xa39298u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6dd6: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c6ddbu); f_008c94e0();
    /* 008c6ddb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6dde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6ddf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c6de0: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6de5: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c6de7u); call_ind(t); }
    /* 008c6de7: mov ebp, eax */ r_ebp = r_eax;
    /* 008c6de9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6deb: jne 0x8c6e03 */ if (!fZ) goto L_008c6e03;
L_008c6ded:; BB(0x008c6ded);
    /* 008c6ded: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6dee: call dword ptr [0x8f82f4] */ { u32 t = R32((u32)(0x8f82f4u)); r_esp -= 4; W32(r_esp, 0x8c6df4u); call_ind(t); }
    /* 008c6df4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c6df5: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c6dfbu); call_ind(t); }
    /* 008c6dfb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c6dfc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c6dfd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c6dfe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c6e00: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c6e01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008c6e02: ret  */ FN_RET(0x008c6d30); r_esp += 4; return;
L_008c6e03:; BB(0x008c6e03);
    /* 008c6e03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008c6e05: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c6e06: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x8c6e0cu); call_ind(t); }
    /* 008c6e0c: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008c6e0e: mov eax, ebx */ r_eax = r_ebx;
    /* 008c6e10: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6e12: je 0x8c6e2c */ if (fZ) goto L_008c6e2c;
L_008c6e14:; BB(0x008c6e14);
    /* 008c6e14: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c6e16: mov ecx, eax */ r_ecx = r_eax;
    /* 008c6e18: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c6e1a: cmp ecx, 0xffc */ {  u32 a = r_ecx; u32 b = 0xffcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c6e20: jae 0x8c6e2a */ if (!fC) goto L_008c6e2a;
L_008c6e22:; BB(0x008c6e22);
    /* 008c6e22: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008c6e24: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6e26: jne 0x8c6e14 */ if (!fZ) goto L_008c6e14;
L_008c6e28:; BB(0x008c6e28);
    /* 008c6e28: jmp 0x8c6e2c */ goto L_008c6e2c;
L_008c6e2a:; BB(0x008c6e2a);
    /* 008c6e2a: mov eax, ebx */ r_eax = r_ebx;
L_008c6e2c:; BB(0x008c6e2c);
    /* 008c6e2c: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 008c6e30: mov edx, eax */ r_edx = r_eax;
    /* 008c6e32: mov esi, 0xffc */ r_esi = 0xffcu;
    /* 008c6e37: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008c6e39: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008c6e3b: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008c6e3d: jb 0x8c6e43 */ if (fC) goto L_008c6e43;
L_008c6e3f:; BB(0x008c6e3f);
    /* 008c6e3f: mov eax, ebx */ r_eax = r_ebx;
    /* 008c6e41: jmp 0x8c6e61 */ goto L_008c6e61;
L_008c6e43:; BB(0x008c6e43);
    /* 008c6e43: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 008c6e47: mov edx, ecx */ r_edx = r_ecx;
    /* 008c6e49: mov edi, eax */ r_edi = r_eax;
    /* 008c6e4b: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c6e4e: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c6e50: mov ecx, edx */ r_ecx = r_edx;
    /* 008c6e52: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c6e55: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c6e57: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 008c6e5b: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 008c6e5f: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008c6e61:; BB(0x008c6e61);
    /* 008c6e61: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6e62: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 008c6e68: call dword ptr [0x8f82f4] */ { u32 t = R32((u32)(0x8f82f4u)); r_esp -= 4; W32(r_esp, 0x8c6e6eu); call_ind(t); }
    /* 008c6e6e: mov esi, dword ptr [0x8f8140] */ r_esi = R32((u32)(0x8f8140u));
    /* 008c6e74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c6e75: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c6e77u); call_ind(t); }
    /* 008c6e77: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c6e78: call dword ptr [0x8f8158] */ { u32 t = R32((u32)(0x8f8158u)); r_esp -= 4; W32(r_esp, 0x8c6e7eu); call_ind(t); }
    /* 008c6e7e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c6e7f: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c6e81u); call_ind(t); }
    /* 008c6e81: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c6e82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c6e83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c6e84: mov eax, 1 */ r_eax = 0x1u;
    /* 008c6e89: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c6e8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008c6e8b: ret  */ FN_RET(0x008c6d30); r_esp += 4; return;
}

void f_008c6e90(void) /* sub_8C6E90 */
{
    FN_ENTER(0x008c6e90);
    /* 008c6e90: sub esp, 0x22c */ {  u32 a = r_esp; u32 b = 0x22cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c6e96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c6e97: mov esi, dword ptr [esp + 0x234] */ r_esi = R32((u32)(r_esp+0x234u));
    /* 008c6e9e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6ea0: je 0x8c7259 */ if (fZ) goto L_008c7259;
L_008c6ea6:; BB(0x008c6ea6);
    /* 008c6ea6: cmp byte ptr [esi], 0 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c6ea9: je 0x8c7259 */ if (fZ) goto L_008c7259;
L_008c6eaf:; BB(0x008c6eaf);
    /* 008c6eaf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c6eb1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c6eb2: mov ecx, 0x40 */ r_ecx = 0x40u;
    /* 008c6eb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c6eb9: lea edi, [esp + 0x35] */ r_edi = (u32)(r_esp+0x35u);
    /* 008c6ebd: mov byte ptr [esp + 0x34], 0 */ W8((u32)(r_esp+0x34u), 0x0u);
    /* 008c6ec2: mov byte ptr [esp + 0x138], 0 */ W8((u32)(r_esp+0x138u), 0x0u);
    /* 008c6eca: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c6ecc: stosw word ptr es:[edi], ax */ W16(r_edi, (u16)r_eax); r_edi += rt_df ? -2 : 2;
    /* 008c6ece: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 008c6ecf: mov ecx, 0x40 */ r_ecx = 0x40u;
    /* 008c6ed4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c6ed6: lea edi, [esp + 0x139] */ r_edi = (u32)(r_esp+0x139u);
    /* 008c6edd: push 0xa39394 */ { u32 v = 0xa39394u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6ee2: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c6ee4: stosw word ptr es:[edi], ax */ W16(r_edi, (u16)r_eax); r_edi += rt_df ? -2 : 2;
    /* 008c6ee6: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 008c6ee7: mov dword ptr [esp + 0x24], 0xa39394 */ W32((u32)(r_esp+0x24u), 0xa39394u);
    /* 008c6eef: mov dword ptr [esp + 0x28], 0xa39388 */ W32((u32)(r_esp+0x28u), 0xa39388u);
    /* 008c6ef7: mov dword ptr [esp + 0x2c], 0xa3937c */ W32((u32)(r_esp+0x2cu), 0xa3937cu);
    /* 008c6eff: mov dword ptr [esp + 0x30], 0xa39370 */ W32((u32)(r_esp+0x30u), 0xa39370u);
    /* 008c6f07: mov dword ptr [esp + 0x34], 0xa39364 */ W32((u32)(r_esp+0x34u), 0xa39364u);
    /* 008c6f0f: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c6f14u); f_008c9470();
    /* 008c6f14: push 0xa39388 */ { u32 v = 0xa39388u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6f19: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c6f1eu); f_008c9470();
    /* 008c6f1e: push 0xa3937c */ { u32 v = 0xa3937cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c6f23: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c6f28u); f_008c9470();
    /* 008c6f28: push 0xa39370 */ { u32 v = 0xa39370u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6f2d: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c6f32u); f_008c9470();
    /* 008c6f32: push 0xa39364 */ { u32 v = 0xa39364u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6f37: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c6f3cu); f_008c9470();
    /* 008c6f3c: mov eax, dword ptr [esp + 0x258] */ r_eax = R32((u32)(r_esp+0x258u));
    /* 008c6f43: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6f46: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c6f49: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 008c6f51: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 008c6f55: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 008c6f59: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 008c6f5d: or ebp, 0xffffffff */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 008c6f60: jmp 0x8c6f6f */ goto L_008c6f6f;
L_008c6f62:; BB(0x008c6f62);
    /* 008c6f62: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008c6f66: or ebp, 0xffffffff */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 008c6f69: jmp 0x8c6f6f */ goto L_008c6f6f;
L_008c6f6b:; BB(0x008c6f6b);
    /* 008c6f6b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_008c6f6f:; BB(0x008c6f6f);
    /* 008c6f6f: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6f72: jne 0x8c6f95 */ if (!fZ) goto L_008c6f95;
L_008c6f74:; BB(0x008c6f74);
    /* 008c6f74: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008c6f76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6f77: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c6f78: push 0xa39354 */ { u32 v = 0xa39354u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6f7d: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c6f82u); f_008c94e0();
    /* 008c6f82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6f85: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 008c6f89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6f8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6f8b: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c6f90u); f_00858bf5();
    /* 008c6f90: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6f93: jmp 0x8c6fb5 */ goto L_008c6fb5;
L_008c6f95:; BB(0x008c6f95);
    /* 008c6f95: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008c6f97: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c6f98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6f99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c6f9a: push 0xa39344 */ { u32 v = 0xa39344u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6f9f: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c6fa4u); f_008c94e0();
    /* 008c6fa4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c6fa7: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 008c6fab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c6fac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6fad: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c6fb2u); f_00858bf5();
    /* 008c6fb2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c6fb5:; BB(0x008c6fb5);
    /* 008c6fb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6fb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6fb9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6fbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6fbd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6fbf: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 008c6fc3: push 0xc0000000 */ { u32 v = 0xc0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c6fc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6fc9: call dword ptr [0x8f8144] */ { u32 t = R32((u32)(0x8f8144u)); r_esp -= 4; W32(r_esp, 0x8c6fcfu); call_ind(t); }
    /* 008c6fcf: mov ebx, eax */ r_ebx = r_eax;
    /* 008c6fd1: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c6fd7u); call_ind(t); }
    /* 008c6fd7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c6fd8: mov edi, eax */ r_edi = r_eax;
    /* 008c6fda: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c6fe0u); call_ind(t); }
    /* 008c6fe0: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6fe3: je 0x8c7221 */ if (fZ) goto L_008c7221;
L_008c6fe9:; BB(0x008c6fe9);
    /* 008c6fe9: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c6fec: je 0x8c6ff8 */ if (fZ) goto L_008c6ff8;
L_008c6fee:; BB(0x008c6fee);
    /* 008c6fee: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c6fef: cmp ebp, 0x63 */ {  u32 a = r_ebp; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c6ff2: jle 0x8c6f6b */ if ((fZ||fS!=fO)) goto L_008c6f6b;
L_008c6ff8:; BB(0x008c6ff8);
    /* 008c6ff8: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 008c6ffc: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008c7000: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c7001: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c7004: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c7007: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 008c700b: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008c700f: jl 0x8c6f62 */ if ((fS!=fO)) goto L_008c6f62;
L_008c7015:; BB(0x008c7015);
    /* 008c7015: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 008c7019: mov dword ptr [esp + 0x18], 5 */ W32((u32)(r_esp+0x18u), 0x5u);
    /* 008c7021: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_008c7025:; BB(0x008c7025);
    /* 008c7025: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 008c7029: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c702c: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 008c7030: jl 0x8c720b */ if ((fS!=fO)) goto L_008c720b;
L_008c7036:; BB(0x008c7036);
    /* 008c7036: lea ebx, [ecx + 1] */ r_ebx = (u32)(r_ecx+0x1u);
    /* 008c7039: or ebp, 0xffffffff */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 008c703c: jmp 0x8c7056 */ goto L_008c7056;
L_008c703e:; BB(0x008c703e);
    /* 008c703e: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008c7042: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 008c7046: or ebp, 0xffffffff */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 008c7049: lea ebx, [ecx + 1] */ r_ebx = (u32)(r_ecx+0x1u);
    /* 008c704c: jmp 0x8c7056 */ goto L_008c7056;
L_008c704e:; BB(0x008c704e);
    /* 008c704e: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008c7052: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
L_008c7056:; BB(0x008c7056);
    /* 008c7056: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7059: jne 0x8c70a8 */ if (!fZ) goto L_008c70a8;
L_008c705b:; BB(0x008c705b);
    /* 008c705b: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 008c705d: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c705f: jne 0x8c70f0 */ if (!fZ) goto L_008c70f0;
L_008c7065:; BB(0x008c7065);
    /* 008c7065: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7066: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7067: push 0xa39354 */ { u32 v = 0xa39354u; r_esp -= 4; W32(r_esp, v); }
    /* 008c706c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c7071u); f_008c94e0();
    /* 008c7071: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7074: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7075: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008c7079: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c707a: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c707fu); f_00858bf5();
    /* 008c707f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7082: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7083: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7084: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7085: push 0xa39334 */ { u32 v = 0xa39334u; r_esp -= 4; W32(r_esp, v); }
    /* 008c708a: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c708fu); f_008c94e0();
    /* 008c708f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7092: lea ecx, [esp + 0x144] */ r_ecx = (u32)(r_esp+0x144u);
    /* 008c7099: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c709a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c709b: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c70a0u); f_00858bf5();
    /* 008c70a0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c70a3: jmp 0x8c716b */ goto L_008c716b;
L_008c70a8:; BB(0x008c70a8);
    /* 008c70a8: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 008c70aa: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c70ad: jne 0x8c712a */ if (!fZ) goto L_008c712a;
L_008c70af:; BB(0x008c70af);
    /* 008c70af: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c70b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c70b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c70b2: push 0xa39324 */ { u32 v = 0xa39324u; r_esp -= 4; W32(r_esp, v); }
    /* 008c70b7: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c70bcu); f_008c94e0();
    /* 008c70bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c70bf: lea edx, [esp + 0x40] */ r_edx = (u32)(r_esp+0x40u);
    /* 008c70c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c70c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c70c5: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c70cau); f_00858bf5();
    /* 008c70ca: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c70cd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c70ce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c70cf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c70d0: push 0xa39314 */ { u32 v = 0xa39314u; r_esp -= 4; W32(r_esp, v); }
    /* 008c70d5: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c70dau); f_008c94e0();
    /* 008c70da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c70dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c70de: lea eax, [esp + 0x148] */ r_eax = (u32)(r_esp+0x148u);
    /* 008c70e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c70e6: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c70ebu); f_00858bf5();
    /* 008c70eb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c70ee: jmp 0x8c716b */ goto L_008c716b;
L_008c70f0:; BB(0x008c70f0);
    /* 008c70f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c70f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c70f2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c70f3: push 0xa39344 */ { u32 v = 0xa39344u; r_esp -= 4; W32(r_esp, v); }
    /* 008c70f8: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c70fdu); f_008c94e0();
    /* 008c70fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7100: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 008c7104: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7105: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7106: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c710bu); f_00858bf5();
    /* 008c710b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c710e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c710f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7110: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7111: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7112: push 0xa39300 */ { u32 v = 0xa39300u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7117: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c711cu); f_008c94e0();
    /* 008c711c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c711f: lea edx, [esp + 0x148] */ r_edx = (u32)(r_esp+0x148u);
    /* 008c7126: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7127: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c7128: jmp 0x8c7163 */ goto L_008c7163;
L_008c712a:; BB(0x008c712a);
    /* 008c712a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c712b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c712c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c712d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c712e: push 0xa392ec */ { u32 v = 0xa392ecu; r_esp -= 4; W32(r_esp, v); }
    /* 008c7133: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c7138u); f_008c9470();
    /* 008c7138: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c713b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c713c: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 008c7140: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7141: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c7146u); f_00858bf5();
    /* 008c7146: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7149: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c714a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c714b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c714c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c714d: push 0xa392d8 */ { u32 v = 0xa392d8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7152: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c7157u); f_008c9470();
    /* 008c7157: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c715a: lea ecx, [esp + 0x148] */ r_ecx = (u32)(r_esp+0x148u);
    /* 008c7161: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c7162: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
L_008c7163:; BB(0x008c7163);
    /* 008c7163: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c7168u); f_00858bf5();
    /* 008c7168: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c716b:; BB(0x008c716b);
    /* 008c716b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c716d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c716f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7171: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7173: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7175: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 008c7179: push 0xc0000000 */ { u32 v = 0xc0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c717e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c717f: call dword ptr [0x8f8144] */ { u32 t = R32((u32)(0x8f8144u)); r_esp -= 4; W32(r_esp, 0x8c7185u); call_ind(t); }
    /* 008c7185: mov edi, eax */ r_edi = r_eax;
    /* 008c7187: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c718du); call_ind(t); }
    /* 008c718d: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c7190: je 0x8c71f5 */ if (fZ) goto L_008c71f5;
L_008c7192:; BB(0x008c7192);
    /* 008c7192: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c7193: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c7199u); call_ind(t); }
    /* 008c7199: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 008c719d: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008c71a1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c71a3: jne 0x8c71ac */ if (!fZ) goto L_008c71ac;
L_008c71a5:; BB(0x008c71a5);
    /* 008c71a5: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 008c71a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c71aa: jmp 0x8c71e5 */ goto L_008c71e5;
L_008c71ac:; BB(0x008c71ac);
    /* 008c71ac: lea edx, [esp + 0x138] */ r_edx = (u32)(r_esp+0x138u);
    /* 008c71b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c71b5: lea eax, [esp + 0x38] */ r_eax = (u32)(r_esp+0x38u);
    /* 008c71b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c71ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c71bb: call dword ptr [0x8f8164] */ { u32 t = R32((u32)(0x8f8164u)); r_esp -= 4; W32(r_esp, 0x8c71c1u); call_ind(t); }
    /* 008c71c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c71c3: jne 0x8c71eb */ if (!fZ) goto L_008c71eb;
L_008c71c5:; BB(0x008c71c5);
    /* 008c71c5: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c71cbu); call_ind(t); }
    /* 008c71cb: lea ecx, [esp + 0x138] */ r_ecx = (u32)(r_esp+0x138u);
    /* 008c71d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c71d4: lea edx, [esp + 0x38] */ r_edx = (u32)(r_esp+0x38u);
    /* 008c71d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c71d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c71da: call dword ptr [0x8f8168] */ { u32 t = R32((u32)(0x8f8168u)); r_esp -= 4; W32(r_esp, 0x8c71e0u); call_ind(t); }
    /* 008c71e0: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 008c71e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
L_008c71e5:; BB(0x008c71e5);
    /* 008c71e5: call dword ptr [0x8f81fc] */ { u32 t = R32((u32)(0x8f81fcu)); r_esp -= 4; W32(r_esp, 0x8c71ebu); call_ind(t); }
L_008c71eb:; BB(0x008c71eb);
    /* 008c71eb: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008c71ec: cmp ebp, 0x63 */ {  u32 a = r_ebp; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c71ef: jle 0x8c704e */ if ((fZ||fS!=fO)) goto L_008c704e;
L_008c71f5:; BB(0x008c71f5);
    /* 008c71f5: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008c71f9: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008c71fa: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c71fd: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 008c7201: jge 0x8c703e */ if ((fS==fO)) goto L_008c703e;
L_008c7207:; BB(0x008c7207);
    /* 008c7207: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
L_008c720b:; BB(0x008c720b);
    /* 008c720b: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 008c720f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c7212: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008c7213: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 008c7217: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 008c721b: jne 0x8c7025 */ if (!fZ) goto L_008c7025;
L_008c7221:; BB(0x008c7221);
    /* 008c7221: push 0xa39394 */ { u32 v = 0xa39394u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7226: call 0x8c93d0 */ r_esp -= 4; W32(r_esp, 0x8c722bu); f_008c93d0();
    /* 008c722b: push 0xa39388 */ { u32 v = 0xa39388u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7230: call 0x8c93d0 */ r_esp -= 4; W32(r_esp, 0x8c7235u); f_008c93d0();
    /* 008c7235: push 0xa3937c */ { u32 v = 0xa3937cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c723a: call 0x8c93d0 */ r_esp -= 4; W32(r_esp, 0x8c723fu); f_008c93d0();
    /* 008c723f: push 0xa39370 */ { u32 v = 0xa39370u; r_esp -= 4; W32(r_esp, v); }
    /* 008c7244: call 0x8c93d0 */ r_esp -= 4; W32(r_esp, 0x8c7249u); f_008c93d0();
    /* 008c7249: push 0xa39364 */ { u32 v = 0xa39364u; r_esp -= 4; W32(r_esp, v); }
    /* 008c724e: call 0x8c93d0 */ r_esp -= 4; W32(r_esp, 0x8c7253u); f_008c93d0();
    /* 008c7253: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c7256: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c7257: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c7258: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008c7259:; BB(0x008c7259);
    /* 008c7259: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c725a: add esp, 0x22c */ {  u32 a = r_esp; u32 b = 0x22cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c7260: ret  */ FN_RET(0x008c6e90); r_esp += 4; return;
}

