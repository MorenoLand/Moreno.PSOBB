#include "protos.h"

void f_004f9db8(void) /* sub_4F9DB8 */
{
    FN_ENTER(0x004f9db8);
    /* 004f9db8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f9db9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f9dba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9dbb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9dbc: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f9dbf: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f9dc1: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 004f9dc5: mov esi, dword ptr [0xaab3b0] */ r_esi = R32((u32)(0xaab3b0u));
    /* 004f9dcb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9dcd: je 0x4f9deb */ if (fZ) goto L_004f9deb;
L_004f9dcf:; BB(0x004f9dcf);
    /* 004f9dcf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f9dd0: lea eax, [ebx + 0x11c] */ r_eax = (u32)(r_ebx+0x11cu);
    /* 004f9dd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9dd7: call 0x5b9ec4 */ r_esp -= 4; W32(r_esp, 0x4f9ddcu); f_005b9ec4();
    /* 004f9ddc: mov edx, eax */ r_edx = r_eax;
    /* 004f9dde: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9de1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9de3: jl 0x4fa0e8 */ if ((fS!=fO)) goto L_004fa0e8;
L_004f9de9:; BB(0x004f9de9);
    /* 004f9de9: jmp 0x4f9e05 */ goto L_004f9e05;
L_004f9deb:; BB(0x004f9deb);
    /* 004f9deb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f9dec: lea eax, [ebx + 0x11c] */ r_eax = (u32)(r_ebx+0x11cu);
    /* 004f9df2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9df3: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x4f9df8u); f_005b9910();
    /* 004f9df8: mov edx, eax */ r_edx = r_eax;
    /* 004f9dfa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9dfd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9dff: jl 0x4fa174 */ if ((fS!=fO)) goto L_004fa174;
L_004f9e05:; BB(0x004f9e05);
    /* 004f9e05: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 004f9e0a: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004f9e0c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004f9e0e: shr edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004f9e11: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9e13: jle 0x4f9fcc */ if ((fZ||fS!=fO)) goto L_004f9fcc;
L_004f9e19:; BB(0x004f9e19);
    /* 004f9e19: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004f9e1c: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
L_004f9e20:; BB(0x004f9e20);
    /* 004f9e20: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004f9e26: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f9e27: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f9e2cu); f_008101d0();
    /* 004f9e2c: mov ebx, eax */ r_ebx = r_eax;
    /* 004f9e2e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f9e2f: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f9e34u); f_008123e4();
    /* 004f9e34: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9e37: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f9e39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9e3b: jle 0x4f9e9d */ if ((fZ||fS!=fO)) goto L_004f9e9d;
L_004f9e3d:; BB(0x004f9e3d);
    /* 004f9e3d: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9e40: jl 0x4f9e8b */ if ((fS!=fO)) goto L_004f9e8b;
L_004f9e42:; BB(0x004f9e42);
    /* 004f9e42: lea edi, [eax - 6] */ r_edi = (u32)(r_eax+0xfffffffau);
L_004f9e45:; BB(0x004f9e45);
    /* 004f9e45: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9e48: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9e4b: je 0x4f9ede */ if (fZ) goto L_004f9ede;
L_004f9e51:; BB(0x004f9e51);
    /* 004f9e51: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9e54: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9e57: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9e5a: je 0x4f9ede */ if (fZ) goto L_004f9ede;
L_004f9e60:; BB(0x004f9e60);
    /* 004f9e60: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9e63: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9e66: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9e69: je 0x4f9ede */ if (fZ) goto L_004f9ede;
L_004f9e6b:; BB(0x004f9e6b);
    /* 004f9e6b: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9e6e: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9e71: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9e74: je 0x4f9ede */ if (fZ) goto L_004f9ede;
L_004f9e76:; BB(0x004f9e76);
    /* 004f9e76: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9e79: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9e7c: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9e7f: je 0x4f9ede */ if (fZ) goto L_004f9ede;
L_004f9e81:; BB(0x004f9e81);
    /* 004f9e81: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9e84: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9e87: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9e89: jle 0x4f9e45 */ if ((fZ||fS!=fO)) goto L_004f9e45;
L_004f9e8b:; BB(0x004f9e8b);
    /* 004f9e8b: movsx edi, word ptr [ebx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9e8e: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9e91: je 0x4f9ede */ if (fZ) goto L_004f9ede;
L_004f9e93:; BB(0x004f9e93);
    /* 004f9e93: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9e96: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9e99: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9e9b: jl 0x4f9e8b */ if ((fS!=fO)) goto L_004f9e8b;
L_004f9e9d:; BB(0x004f9e9d);
    /* 004f9e9d: mov ebx, dword ptr [0xa727a0] */ r_ebx = R32((u32)(0xa727a0u));
    /* 004f9ea3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004f9ea5:; BB(0x004f9ea5);
    /* 004f9ea5: movsx edi, word ptr [ebx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9ea8: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9eab: je 0x4f9ede */ if (fZ) goto L_004f9ede;
L_004f9ead:; BB(0x004f9ead);
    /* 004f9ead: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9eb0: movsx edi, word ptr [ebx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9eb3: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9eb6: je 0x4f9ede */ if (fZ) goto L_004f9ede;
L_004f9eb8:; BB(0x004f9eb8);
    /* 004f9eb8: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9ebb: movsx edi, word ptr [ebx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9ebe: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9ec1: je 0x4f9ede */ if (fZ) goto L_004f9ede;
L_004f9ec3:; BB(0x004f9ec3);
    /* 004f9ec3: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9ec6: movsx edi, word ptr [ebx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9ec9: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9ecc: je 0x4f9ede */ if (fZ) goto L_004f9ede;
L_004f9ece:; BB(0x004f9ece);
    /* 004f9ece: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9ed1: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9ed4: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9eda: jl 0x4f9ea5 */ if ((fS!=fO)) goto L_004f9ea5;
L_004f9edc:; BB(0x004f9edc);
    /* 004f9edc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004f9ede:; BB(0x004f9ede);
    /* 004f9ede: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9ee0: je 0x4fa160 */ if (fZ) goto L_004fa160;
L_004f9ee6:; BB(0x004f9ee6);
    /* 004f9ee6: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004f9ee8: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 004f9eeb: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 004f9eed: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 004f9ef0: mov dword ptr [ebx + 4], edi */ W32((u32)(r_ebx+0x4u), r_edi);
    /* 004f9ef3: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 004f9ef6: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 004f9ef9: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 004f9efc: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 004f9eff: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 004f9f02: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 004f9f05: mov dword ptr [ebx + 0x14], edx */ W32((u32)(r_ebx+0x14u), r_edx);
    /* 004f9f08: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 004f9f0b: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 004f9f0e: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 004f9f11: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 004f9f14: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 004f9f17: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 004f9f1a: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 004f9f1d: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 004f9f20: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 004f9f23: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 004f9f26: mov edx, dword ptr [esi + 0x2c] */ r_edx = R32((u32)(r_esi+0x2cu));
    /* 004f9f29: mov dword ptr [ebx + 0x2c], edx */ W32((u32)(r_ebx+0x2cu), r_edx);
    /* 004f9f2c: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 004f9f2f: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 004f9f32: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 004f9f35: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
    /* 004f9f38: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 004f9f3b: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 004f9f3e: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 004f9f41: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 004f9f44: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 004f9f47: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 004f9f4a: mov edx, dword ptr [esi + 0x44] */ r_edx = R32((u32)(r_esi+0x44u));
    /* 004f9f4d: mov dword ptr [ebx + 0x44], edx */ W32((u32)(r_ebx+0x44u), r_edx);
    /* 004f9f50: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f9f52: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9f57u); f_0061cdb0();
    /* 004f9f57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9f59: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004f9f5d: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9f60: lea edi, [ebx + 0x14] */ r_edi = (u32)(r_ebx+0x14u);
    /* 004f9f63: lea edx, [ebx + 0x20] */ r_edx = (u32)(r_ebx+0x20u);
    /* 004f9f66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9f67: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f9f68: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f9f6du); f_004f7fc0();
    /* 004f9f6d: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004f9f71: mov edi, dword ptr [edx + 0x58] */ r_edi = R32((u32)(r_edx+0x58u));
    /* 004f9f74: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004f9f76: mov word ptr [ebx + 0xc], dx */ W16((u32)(r_ebx+0xcu), (u16)r_edx);
    /* 004f9f7a: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4f9f7fu); f_00807ac0();
    /* 004f9f7f: mov edx, dword ptr [eax*4 + 0x9fba60] */ r_edx = R32((u32)(r_eax*4+0x9fba60u));
    /* 004f9f86: mov edi, edx */ r_edi = r_edx;
    /* 004f9f88: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9f8a: je 0x4f9fa4 */ if (fZ) goto L_004f9fa4;
L_004f9f8c:; BB(0x004f9f8c);
    /* 004f9f8c: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 004f9f8f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9f92: je 0x4f9fa4 */ if (fZ) goto L_004f9fa4;
L_004f9f94:; BB(0x004f9f94);
    /* 004f9f94: cmp ax, word ptr [ebx] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebx)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004f9f97: je 0x4fa10c */ if (fZ) goto L_004fa10c;
L_004f9f9d:; BB(0x004f9f9d);
    /* 004f9f9d: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f9fa0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9fa2: jne 0x4f9f8c */ if (!fZ) goto L_004f9f8c;
L_004f9fa4:; BB(0x004f9fa4);
    /* 004f9fa4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f9fa6:; BB(0x004f9fa6);
    /* 004f9fa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9fa8: je 0x4fa100 */ if (fZ) goto L_004fa100;
L_004f9fae:; BB(0x004f9fae);
    /* 004f9fae: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 004f9fb1: mov dword ptr [eax + 0x80], ebx */ W32((u32)(r_eax+0x80u), r_ebx);
L_004f9fb7:; BB(0x004f9fb7);
    /* 004f9fb7: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004f9fba: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9fbd: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004f9fc0: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9fc2: jl 0x4f9e20 */ if ((fS!=fO)) goto L_004f9e20;
L_004f9fc8:; BB(0x004f9fc8);
    /* 004f9fc8: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_004f9fcc:; BB(0x004f9fcc);
    /* 004f9fcc: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9fd2: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004f9fd4: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f9fd9u); f_008101d0();
    /* 004f9fd9: mov esi, eax */ r_esi = r_eax;
    /* 004f9fdb: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9fe1: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f9fe6u); f_008123e4();
    /* 004f9fe6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9fe9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f9feb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9fed: jle 0x4fa004 */ if ((fZ||fS!=fO)) goto L_004fa004;
L_004f9fef:; BB(0x004f9fef);
    /* 004f9fef: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004f9ff2: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9ff5: je 0x4f9ffa */ if (fZ) goto L_004f9ffa;
L_004f9ff7:; BB(0x004f9ff7);
    /* 004f9ff7: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004f9ffa:; BB(0x004f9ffa);
    /* 004f9ffa: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9ffd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa000: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa002: jl 0x4f9fef */ if ((fS!=fO)) goto L_004f9fef;
L_004fa004:; BB(0x004fa004);
    /* 004fa004: mov ecx, dword ptr [0xa727a0] */ r_ecx = R32((u32)(0xa727a0u));
    /* 004fa00a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fa00c:; BB(0x004fa00c);
    /* 004fa00c: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fa00f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa012: je 0x4fa017 */ if (fZ) goto L_004fa017;
L_004fa014:; BB(0x004fa014);
    /* 004fa014: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fa017:; BB(0x004fa017);
    /* 004fa017: movsx esi, word ptr [ecx + 0x48] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x48u));
    /* 004fa01b: lea eax, [ecx + 0x48] */ r_eax = (u32)(r_ecx+0x48u);
    /* 004fa01e: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa021: je 0x4fa026 */ if (fZ) goto L_004fa026;
L_004fa023:; BB(0x004fa023);
    /* 004fa023: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fa026:; BB(0x004fa026);
    /* 004fa026: movsx esi, word ptr [eax + 0x48] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x48u));
    /* 004fa02a: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa02d: je 0x4fa032 */ if (fZ) goto L_004fa032;
L_004fa02f:; BB(0x004fa02f);
    /* 004fa02f: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fa032:; BB(0x004fa032);
    /* 004fa032: movsx esi, word ptr [eax + 0x90] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x90u));
    /* 004fa039: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa03c: je 0x4fa041 */ if (fZ) goto L_004fa041;
L_004fa03e:; BB(0x004fa03e);
    /* 004fa03e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fa041:; BB(0x004fa041);
    /* 004fa041: lea ecx, [eax + 0xd8] */ r_ecx = (u32)(r_eax+0xd8u);
    /* 004fa047: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa04a: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa050: jl 0x4fa00c */ if ((fS!=fO)) goto L_004fa00c;
L_004fa052:; BB(0x004fa052);
    /* 004fa052: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fa058: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 004fa05b: mov dword ptr [ebx + 0x40], ebp */ W32((u32)(r_ebx+0x40u), r_ebp);
    /* 004fa05e: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004fa060: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004fa062: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4fa067u); f_008101d0();
    /* 004fa067: mov ebp, eax */ r_ebp = r_eax;
    /* 004fa069: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fa06f: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4fa074u); f_008123e4();
    /* 004fa074: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa077: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fa079: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fa07b: jle 0x4fa09b */ if ((fZ||fS!=fO)) goto L_004fa09b;
L_004fa07d:; BB(0x004fa07d);
    /* 004fa07d: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fa081: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa084: je 0x4fa091 */ if (fZ) goto L_004fa091;
L_004fa086:; BB(0x004fa086);
    /* 004fa086: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fa08a: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa08c: jne 0x4fa091 */ if (!fZ) goto L_004fa091;
L_004fa08e:; BB(0x004fa08e);
    /* 004fa08e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fa091:; BB(0x004fa091);
    /* 004fa091: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fa094: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa097: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa099: jl 0x4fa07d */ if ((fS!=fO)) goto L_004fa07d;
L_004fa09b:; BB(0x004fa09b);
    /* 004fa09b: mov ecx, dword ptr [0xa727a0] */ r_ecx = R32((u32)(0xa727a0u));
    /* 004fa0a1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fa0a3:; BB(0x004fa0a3);
    /* 004fa0a3: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fa0a6: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa0a9: je 0x4fa0b6 */ if (fZ) goto L_004fa0b6;
L_004fa0ab:; BB(0x004fa0ab);
    /* 004fa0ab: movsx eax, word ptr [ecx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004fa0af: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa0b1: jne 0x4fa0b6 */ if (!fZ) goto L_004fa0b6;
L_004fa0b3:; BB(0x004fa0b3);
    /* 004fa0b3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fa0b6:; BB(0x004fa0b6);
    /* 004fa0b6: movsx ebp, word ptr [ecx + 0x48] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ecx+0x48u));
    /* 004fa0ba: lea eax, [ecx + 0x48] */ r_eax = (u32)(r_ecx+0x48u);
    /* 004fa0bd: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa0c0: je 0x4fa0cd */ if (fZ) goto L_004fa0cd;
L_004fa0c2:; BB(0x004fa0c2);
    /* 004fa0c2: movsx ebp, word ptr [eax + 0xc] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004fa0c6: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa0c8: jne 0x4fa0cd */ if (!fZ) goto L_004fa0cd;
L_004fa0ca:; BB(0x004fa0ca);
    /* 004fa0ca: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fa0cd:; BB(0x004fa0cd);
    /* 004fa0cd: lea ecx, [eax + 0x48] */ r_ecx = (u32)(r_eax+0x48u);
    /* 004fa0d0: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fa0d3: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa0d9: jl 0x4fa0a3 */ if ((fS!=fO)) goto L_004fa0a3;
L_004fa0db:; BB(0x004fa0db);
    /* 004fa0db: mov dword ptr [ebx + 0x44], esi */ W32((u32)(r_ebx+0x44u), r_esi);
    /* 004fa0de: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fa0e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fa0e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa0e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fa0e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fa0e5: ret 4 */ FN_RET(0x004f9db8); r_esp += 8; return;
L_004fa0e8:; BB(0x004fa0e8);
    /* 004fa0e8: add ebx, 0x78 */ {  u32 a = r_ebx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fa0eb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa0ec: push 0x91ec80 */ { u32 v = 0x91ec80u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa0f1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fa0f6u); f_0061cdb0();
    /* 004fa0f6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fa0f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fa0fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa0fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fa0fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fa0fd: ret 4 */ FN_RET(0x004f9db8); r_esp += 8; return;
L_004fa100:; BB(0x004fa100);
    /* 004fa100: mov dword ptr [ebx + 0x44], 0 */ W32((u32)(r_ebx+0x44u), 0x0u);
    /* 004fa107: jmp 0x4f9fb7 */ goto L_004f9fb7;
L_004fa10c:; BB(0x004fa10c);
    /* 004fa10c: movsx edx, word ptr [ebx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x6u));
    /* 004fa110: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004fa114: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa116: jne 0x4fa11f */ if (!fZ) goto L_004fa11f;
L_004fa118:; BB(0x004fa118);
    /* 004fa118: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 004fa11b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_004fa11f:; BB(0x004fa11f);
    /* 004fa11f: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 004fa122: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa123: call 0x7ba8d0 */ r_esp -= 4; W32(r_esp, 0x4fa128u); f_007ba8d0();
    /* 004fa128: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fa129: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004fa12d: mov word ptr [ebx + 0xa], ax */ W16((u32)(r_ebx+0xau), (u16)r_eax);
    /* 004fa131: mov eax, dword ptr [0xab02b0] */ r_eax = R32((u32)(0xab02b0u));
    /* 004fa136: lea edx, [eax + edx + 1] */ r_edx = (u32)(r_eax+r_edx+0x1u);
    /* 004fa13a: cmp edx, 0xb4f */ {  u32 a = r_edx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa140: jle 0x4fa149 */ if ((fZ||fS!=fO)) goto L_004fa149;
L_004fa142:; BB(0x004fa142);
    /* 004fa142: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004fa147: jmp 0x4fa14f */ goto L_004fa14f;
L_004fa149:; BB(0x004fa149);
    /* 004fa149: mov dword ptr [0xab02b0], edx */ W32((u32)(0xab02b0u), r_edx);
L_004fa14f:; BB(0x004fa14f);
    /* 004fa14f: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
    /* 004fa153: lea edx, [ebx + 4] */ r_edx = (u32)(r_ebx+0x4u);
    /* 004fa156: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa157: call dword ptr [edi + 4] */ { u32 t = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, 0x4fa15au); call_ind(t); }
    /* 004fa15a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fa15b: jmp 0x4f9fa6 */ goto L_004f9fa6;
L_004fa160:; BB(0x004fa160);
    /* 004fa160: push 0x91ec94 */ { u32 v = 0x91ec94u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa165: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fa16au); f_0061cdb0();
    /* 004fa16a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fa16d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fa16e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa16f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fa170: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fa171: ret 4 */ FN_RET(0x004f9db8); r_esp += 8; return;
L_004fa174:; BB(0x004fa174);
    /* 004fa174: add ebx, 0x78 */ {  u32 a = r_ebx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fa177: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa178: push 0x91ec80 */ { u32 v = 0x91ec80u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa17d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fa182u); f_0061cdb0();
    /* 004fa182: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fa185: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fa186: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa187: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fa188: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fa189: ret 4 */ FN_RET(0x004f9db8); r_esp += 8; return;
}

