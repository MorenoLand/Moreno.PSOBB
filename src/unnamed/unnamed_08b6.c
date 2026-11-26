#include "protos.h"

void f_008b613c(void)
{
    FN_ENTER(0x008b613c);
    goto L_008b613c;
L_008b5eb7:; BB(0x008b5eb7);
    /* 008b5eb7: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b5eba: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b5ebd: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008b5ec0: mov esi, dword ptr [esi + edi*4] */ r_esi = R32((u32)(r_esi+r_edi*4));
    /* 008b5ec3: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 008b5ec6: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b5ec9: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 008b5ecb: mov edi, dword ptr [ecx + esi*4 + 0x124] */ r_edi = R32((u32)(r_ecx+r_esi*4+0x124u));
    /* 008b5ed2: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 008b5ed5: mov ecx, dword ptr [ebx + ecx*4 + 0x34] */ r_ecx = R32((u32)(r_ebx+r_ecx*4+0x34u));
    /* 008b5ed9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008b5edc: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 008b5edf: mov ecx, dword ptr [ebx + ecx*4 + 0x44] */ r_ecx = R32((u32)(r_ebx+r_ecx*4+0x44u));
    /* 008b5ee3: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 008b5ee6: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 008b5ee9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 008b5eec: jge 0x8b5f16 */ if ((fS==fO)) goto L_008b5f16;
L_008b5eee:; BB(0x008b5eee);
    /* 008b5eee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008b5ef0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5ef1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5ef2: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b5ef5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5ef6: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b5efbu); f_008b5c08();
    /* 008b5efb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b5efe: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b5f00: je 0x8b6203 */ if (fZ) goto L_008b6203;
L_008b5f06:; BB(0x008b5f06);
    /* 008b5f06: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 008b5f09: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b5f0c: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b5f0f: jge 0x8b5f16 */ if ((fS==fO)) goto L_008b5f16;
L_008b5f11:; BB(0x008b5f11);
    /* 008b5f11: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008b5f13: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b5f14: jmp 0x8b5f43 */ goto L_008b5f43;
L_008b5f16:; BB(0x008b5f16);
    /* 008b5f16: lea ecx, [eax - 8] */ r_ecx = (u32)(r_eax+0xfffffff8u);
    /* 008b5f19: mov esi, edx */ r_esi = r_edx;
    /* 008b5f1b: sar esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008b5f1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b5f20: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008b5f26: mov ecx, dword ptr [ecx + esi*4 + 0xd4] */ r_ecx = R32((u32)(r_ecx+r_esi*4+0xd4u));
    /* 008b5f2d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5f2f: je 0x8b5f40 */ if (fZ) goto L_008b5f40;
L_008b5f31:; BB(0x008b5f31);
    /* 008b5f31: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b5f33: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b5f36: movzx esi, byte ptr [esi + ecx + 0x4d4] */ r_esi = (u32)R8((u32)(r_esi+r_ecx+0x4d4u));
    /* 008b5f3e: jmp 0x8b5f65 */ goto L_008b5f65;
L_008b5f40:; BB(0x008b5f40);
    /* 008b5f40: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 008b5f42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b5f43:; BB(0x008b5f43);
    /* 008b5f43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5f44: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b5f47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5f48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5f49: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b5f4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5f4d: call 0x8b5cf2 */ r_esp -= 4; W32(r_esp, 0x8b5f52u); f_008b5cf2();
    /* 008b5f52: mov esi, eax */ r_esi = r_eax;
    /* 008b5f54: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b5f57: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008b5f59: jl 0x8b6203 */ if ((fS!=fO)) goto L_008b6203;
L_008b5f5f:; BB(0x008b5f5f);
    /* 008b5f5f: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b5f62: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
L_008b5f65:; BB(0x008b5f65);
    /* 008b5f65: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b5f67: je 0x8b5fc0 */ if (fZ) goto L_008b5fc0;
L_008b5f69:; BB(0x008b5f69);
    /* 008b5f69: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5f6b: jge 0x8b5f8a */ if ((fS==fO)) goto L_008b5f8a;
L_008b5f6d:; BB(0x008b5f6d);
    /* 008b5f6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b5f6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5f6f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5f70: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b5f73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5f74: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b5f79u); f_008b5c08();
    /* 008b5f79: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b5f7c: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b5f7e: je 0x8b6203 */ if (fZ) goto L_008b6203;
L_008b5f84:; BB(0x008b5f84);
    /* 008b5f84: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b5f87: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
L_008b5f8a:; BB(0x008b5f8a);
    /* 008b5f8a: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b5f8c: mov ecx, esi */ r_ecx = r_esi;
    /* 008b5f8e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 008b5f95: shl dword ptr [ebp - 4], cl */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 c = ((u8)r_ecx) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (a << c) & 0xffffffffu; W32(ad, r); fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; } }
    /* 008b5f98: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5f9b: mov ecx, eax */ r_ecx = r_eax;
    /* 008b5f9d: mov edi, edx */ r_edi = r_edx;
    /* 008b5f9f: sar edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008b5fa1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b5fa4: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008b5fa7: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008b5fa9: cmp ecx, dword ptr [esi + 0x99e948] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x99e948u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5faf: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 008b5fb2: jge 0x8b5fbe */ if ((fS==fO)) goto L_008b5fbe;
L_008b5fb4:; BB(0x008b5fb4);
    /* 008b5fb4: mov esi, dword ptr [esi + 0x99e988] */ r_esi = R32((u32)(r_esi+0x99e988u));
    /* 008b5fba: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b5fbc: jmp 0x8b5fc0 */ goto L_008b5fc0;
L_008b5fbe:; BB(0x008b5fbe);
    /* 008b5fbe: mov esi, ecx */ r_esi = r_ecx;
L_008b5fc0:; BB(0x008b5fc0);
    /* 008b5fc0: cmp byte ptr [edi + 0x30], 0 */ {  u32 a = R8((u32)(r_edi+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b5fc4: je 0x8b60f2 */ if (fZ) goto L_008b60f2;
L_008b5fca:; BB(0x008b5fca);
    /* 008b5fca: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b5fcd: lea ecx, [ebp + ecx*4 - 0x2c] */ r_ecx = (u32)(r_ebp+r_ecx*4+0xffffffd4u);
    /* 008b5fd1: add dword ptr [ecx], esi */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b5fd3: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 008b5fd5: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b5fd8: mov word ptr [esi], cx */ W16((u32)(r_esi), (u16)r_ecx);
    /* 008b5fdb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008b5fdd: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b5fde: cmp dword ptr [edi + 0x24], ecx */ {  u32 a = R32((u32)(r_edi+0x24u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b5fe1: jle 0x8b60f2 */ if ((fZ||fS!=fO)) goto L_008b60f2;
L_008b5fe7:; BB(0x008b5fe7);
    /* 008b5fe7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_008b5fea:; BB(0x008b5fea);
    /* 008b5fea: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b5fed: jge 0x8b601a */ if ((fS==fO)) goto L_008b601a;
L_008b5fef:; BB(0x008b5fef);
    /* 008b5fef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008b5ff1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5ff2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b5ff3: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b5ff6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b5ff7: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b5ffcu); f_008b5c08();
    /* 008b5ffc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b5fff: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b6001: je 0x8b6203 */ if (fZ) goto L_008b6203;
L_008b6007:; BB(0x008b6007);
    /* 008b6007: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 008b600a: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b600d: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b6010: jge 0x8b601a */ if ((fS==fO)) goto L_008b601a;
L_008b6012:; BB(0x008b6012);
    /* 008b6012: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b6015: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008b6017: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b6018: jmp 0x8b6044 */ goto L_008b6044;
L_008b601a:; BB(0x008b601a);
    /* 008b601a: lea ecx, [eax - 8] */ r_ecx = (u32)(r_eax+0xfffffff8u);
    /* 008b601d: mov esi, edx */ r_esi = r_edx;
    /* 008b601f: sar esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008b6021: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b6024: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008b602a: mov edi, dword ptr [ecx + esi*4 + 0xd4] */ r_edi = R32((u32)(r_ecx+r_esi*4+0xd4u));
    /* 008b6031: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6033: je 0x8b6041 */ if (fZ) goto L_008b6041;
L_008b6035:; BB(0x008b6035);
    /* 008b6035: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b6037: movzx edi, byte ptr [esi + ecx + 0x4d4] */ r_edi = (u32)R8((u32)(r_esi+r_ecx+0x4d4u));
    /* 008b603f: jmp 0x8b6064 */ goto L_008b6064;
L_008b6041:; BB(0x008b6041);
    /* 008b6041: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6043: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008b6044:; BB(0x008b6044);
    /* 008b6044: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6045: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6046: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6047: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6048: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b604b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b604c: call 0x8b5cf2 */ r_esp -= 4; W32(r_esp, 0x8b6051u); f_008b5cf2();
    /* 008b6051: mov edi, eax */ r_edi = r_eax;
    /* 008b6053: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b6056: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008b6058: jl 0x8b6203 */ if ((fS!=fO)) goto L_008b6203;
L_008b605e:; BB(0x008b605e);
    /* 008b605e: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b6061: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
L_008b6064:; BB(0x008b6064);
    /* 008b6064: mov ecx, edi */ r_ecx = r_edi;
    /* 008b6066: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008b6069: and edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 008b606c: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 008b606f: je 0x8b60d4 */ if (fZ) goto L_008b60d4;
L_008b6071:; BB(0x008b6071);
    /* 008b6071: add dword ptr [ebp - 4], ecx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b6074: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6076: jge 0x8b6095 */ if ((fS==fO)) goto L_008b6095;
L_008b6078:; BB(0x008b6078);
    /* 008b6078: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6079: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b607a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b607b: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b607e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b607f: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b6084u); f_008b5c08();
    /* 008b6084: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b6087: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b6089: je 0x8b6203 */ if (fZ) goto L_008b6203;
L_008b608f:; BB(0x008b608f);
    /* 008b608f: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b6092: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
L_008b6095:; BB(0x008b6095);
    /* 008b6095: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008b6097: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 008b6099: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008b609a: mov ecx, edi */ r_ecx = r_edi;
    /* 008b609c: shl esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r; fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; fO = ((r >> 31) & 1) ^ fC; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008b609e: mov ecx, eax */ r_ecx = r_eax;
    /* 008b60a0: mov edi, edx */ r_edi = r_edx;
    /* 008b60a2: sar edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008b60a4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b60a7: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008b60a8: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b60ab: and esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008b60ad: cmp esi, dword ptr [ecx + 0x99e948] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x99e948u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b60b3: jge 0x8b60bf */ if ((fS==fO)) goto L_008b60bf;
L_008b60b5:; BB(0x008b60b5);
    /* 008b60b5: mov ecx, dword ptr [ecx + 0x99e988] */ r_ecx = R32((u32)(r_ecx+0x99e988u));
    /* 008b60bb: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b60bd: jmp 0x8b60c1 */ goto L_008b60c1;
L_008b60bf:; BB(0x008b60bf);
    /* 008b60bf: mov ecx, esi */ r_ecx = r_esi;
L_008b60c1:; BB(0x008b60c1);
    /* 008b60c1: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b60c4: mov esi, dword ptr [esi*4 + 0x99de60] */ r_esi = R32((u32)(r_esi*4+0x99de60u));
    /* 008b60cb: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b60ce: mov word ptr [edi + esi*2], cx */ W16((u32)(r_edi+r_esi*2), (u16)r_ecx);
    /* 008b60d2: jmp 0x8b60e0 */ goto L_008b60e0;
L_008b60d4:; BB(0x008b60d4);
    /* 008b60d4: cmp ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b60d7: jne 0x8b61b6 */ if (!fZ) goto L_008b61b6;
L_008b60dd:; BB(0x008b60dd);
    /* 008b60dd: add dword ptr [ebp - 4], ecx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008b60e0:; BB(0x008b60e0);
    /* 008b60e0: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b60e3: cmp dword ptr [ebp - 4], 0x40 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b60e7: jl 0x8b5fea */ if ((fS!=fO)) goto L_008b5fea;
L_008b60ed:; BB(0x008b60ed);
    /* 008b60ed: jmp 0x8b61b6 */ goto L_008b61b6;
L_008b60f2:; BB(0x008b60f2);
    /* 008b60f2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_008b60f9:; BB(0x008b60f9);
    /* 008b60f9: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b60fc: jge 0x8b6129 */ if ((fS==fO)) goto L_008b6129;
L_008b60fe:; BB(0x008b60fe);
    /* 008b60fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6101: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6102: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b6105: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6106: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b610bu); f_008b5c08();
    /* 008b610b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b610e: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b6110: je 0x8b6203 */ if (fZ) goto L_008b6203;
L_008b6116:; BB(0x008b6116);
    /* 008b6116: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 008b6119: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b611c: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b611f: jge 0x8b6129 */ if ((fS==fO)) goto L_008b6129;
L_008b6121:; BB(0x008b6121);
    /* 008b6121: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b6124: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008b6126: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b6127: jmp 0x8b6153 */ goto L_008b6153;
L_008b6129:; BB(0x008b6129);
    /* 008b6129: lea ecx, [eax - 8] */ r_ecx = (u32)(r_eax+0xfffffff8u);
    /* 008b612c: mov esi, edx */ r_esi = r_edx;
    /* 008b612e: sar esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008b6130: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b6133: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008b6139: mov edi, dword ptr [ecx + esi*4 + 0xd4] */ r_edi = R32((u32)(r_ecx+r_esi*4+0xd4u));
L_008b613c:; BB(0x008b613c);
    /* 008b613c: aam 0 */ UNSUP(0x008b613c, "aam 0");
    /* 008b613e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008b6140: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6142: je 0x8b6150 */ if (fZ) goto L_008b6150;
L_008b6144:; BB(0x008b6144);
    /* 008b6144: movzx esi, byte ptr [esi + ecx + 0x4d4] */ r_esi = (u32)R8((u32)(r_esi+r_ecx+0x4d4u));
    /* 008b614c: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b614e: jmp 0x8b6173 */ goto L_008b6173;
L_008b6150:; BB(0x008b6150);
    /* 008b6150: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6152: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008b6153:; BB(0x008b6153);
    /* 008b6153: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6154: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6155: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6156: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6157: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b615a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b615b: call 0x8b5cf2 */ r_esp -= 4; W32(r_esp, 0x8b6160u); f_008b5cf2();
    /* 008b6160: mov esi, eax */ r_esi = r_eax;
    /* 008b6162: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b6165: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008b6167: jl 0x8b6203 */ if ((fS!=fO)) goto L_008b6203;
L_008b616d:; BB(0x008b616d);
    /* 008b616d: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b6170: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
L_008b6173:; BB(0x008b6173);
    /* 008b6173: mov ecx, esi */ r_ecx = r_esi;
    /* 008b6175: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008b6178: and esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008b617b: je 0x8b61a1 */ if (fZ) goto L_008b61a1;
L_008b617d:; BB(0x008b617d);
    /* 008b617d: add dword ptr [ebp - 4], ecx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b6180: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6182: jge 0x8b619d */ if ((fS==fO)) goto L_008b619d;
L_008b6184:; BB(0x008b6184);
    /* 008b6184: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6185: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6186: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6187: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b618a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b618b: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b6190u); f_008b5c08();
    /* 008b6190: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b6193: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b6195: je 0x8b6203 */ if (fZ) goto L_008b6203;
L_008b6197:; BB(0x008b6197);
    /* 008b6197: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b619a: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
L_008b619d:; BB(0x008b619d);
    /* 008b619d: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b619f: jmp 0x8b61a9 */ goto L_008b61a9;
L_008b61a1:; BB(0x008b61a1);
    /* 008b61a1: cmp ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b61a4: jne 0x8b61b6 */ if (!fZ) goto L_008b61b6;
L_008b61a6:; BB(0x008b61a6);
    /* 008b61a6: add dword ptr [ebp - 4], ecx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008b61a9:; BB(0x008b61a9);
    /* 008b61a9: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b61ac: cmp dword ptr [ebp - 4], 0x40 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b61b0: jl 0x8b60f9 */ if ((fS!=fO)) goto L_008b60f9;
L_008b61b6:; BB(0x008b61b6);
    /* 008b61b6: inc dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b61b9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008b61bc: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b61bf: add dword ptr [ebp - 0x10], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b61c3: cmp esi, dword ptr [ecx + 0x13c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x13cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b61c9: jl 0x8b5eb7 */ if ((fS!=fO)) goto L_008b5eb7;
L_008b61cf:; BB(0x008b61cf);
    /* 008b61cf: mov esi, dword ptr [ecx + 0x14] */ r_esi = R32((u32)(r_ecx+0x14u));
    /* 008b61d2: mov edi, dword ptr [ebp - 0x54] */ r_edi = R32((u32)(r_ebp+0xffffffacu));
    /* 008b61d5: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 008b61d7: mov esi, dword ptr [ecx + 0x14] */ r_esi = R32((u32)(r_ecx+0x14u));
    /* 008b61da: mov edi, dword ptr [ebp - 0x50] */ r_edi = R32((u32)(r_ebp+0xffffffb0u));
    /* 008b61dd: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 008b61e0: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 008b61e3: mov dword ptr [ecx + 0x178], esi */ W32((u32)(r_ecx+0x178u), r_esi);
    /* 008b61e9: dec dword ptr [ebx + 0x30] */ { u32 ad = (u32)(r_ebx+0x30u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b61ec: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 008b61ef: lea edi, [ebx + 0x20] */ r_edi = (u32)(r_ebx+0x20u);
    /* 008b61f2: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008b61f3: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008b61f4: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008b61f5: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 008b61f8: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 008b61fb: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008b61fc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008b61fe:; BB(0x008b61fe);
    /* 008b61fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b61ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b6200: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b6201: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b6202: ret  */ FN_RET(0x008b613c); r_esp += 4; return;
L_008b6203:; BB(0x008b6203);
    /* 008b6203: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b6205: jmp 0x8b61fe */ goto L_008b61fe;
}

void f_008b6207(void) /* sub_8B6207 */
{
    FN_ENTER(0x008b6207);
    /* 008b6207: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b6208: mov ebp, esp */ r_ebp = r_esp;
    /* 008b620a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b620d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b620e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b620f: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008b6212: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008b6214: cmp dword ptr [esi + 0x168], ebx */ {  u32 a = R32((u32)(r_esi+0x168u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b621a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b621b: mov edi, dword ptr [esi + 0x194] */ r_edi = R32((u32)(r_esi+0x194u));
    /* 008b6221: jne 0x8b623c */ if (!fZ) goto L_008b623c;
L_008b6223:; BB(0x008b6223);
    /* 008b6223: cmp dword ptr [esi + 0x16c], 0x3f */ {  u32 a = R32((u32)(r_esi+0x16cu)); u32 b = 0x3fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b622a: jne 0x8b623c */ if (!fZ) goto L_008b623c;
L_008b622c:; BB(0x008b622c);
    /* 008b622c: cmp dword ptr [esi + 0x170], ebx */ {  u32 a = R32((u32)(r_esi+0x170u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6232: jne 0x8b623c */ if (!fZ) goto L_008b623c;
L_008b6234:; BB(0x008b6234);
    /* 008b6234: cmp dword ptr [esi + 0x174], ebx */ {  u32 a = R32((u32)(r_esi+0x174u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b623a: je 0x8b624f */ if (fZ) goto L_008b624f;
L_008b623c:; BB(0x008b623c);
    /* 008b623c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b623e: mov dword ptr [eax + 0x14], 0x76 */ W32((u32)(r_eax+0x14u), 0x76u);
    /* 008b6245: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6247: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008b6249: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b624a: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8b624du); call_ind(t); }
    /* 008b624d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b624e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b624f:; BB(0x008b624f);
    /* 008b624f: cmp dword ptr [esi + 0x120], ebx */ {  u32 a = R32((u32)(r_esi+0x120u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6255: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 008b6258: jle 0x8b6318 */ if ((fZ||fS!=fO)) goto L_008b6318;
L_008b625e:; BB(0x008b625e);
    /* 008b625e: lea eax, [edi + 0x20] */ r_eax = (u32)(r_edi+0x20u);
    /* 008b6261: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008b6264: lea eax, [esi + 0x124] */ r_eax = (u32)(r_esi+0x124u);
    /* 008b626a: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_008b626d:; BB(0x008b626d);
    /* 008b626d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b6270: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b6272: mov ebx, dword ptr [eax + 0x14] */ r_ebx = R32((u32)(r_eax+0x14u));
    /* 008b6275: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008b6277: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 008b627a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008b627d: jl 0x8b628e */ if ((fS!=fO)) goto L_008b628e;
L_008b627f:; BB(0x008b627f);
    /* 008b627f: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6282: jge 0x8b628e */ if ((fS==fO)) goto L_008b628e;
L_008b6284:; BB(0x008b6284);
    /* 008b6284: cmp dword ptr [esi + ebx*4 + 0xa0], 0 */ {  u32 a = R32((u32)(r_esi+r_ebx*4+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b628c: jne 0x8b62a5 */ if (!fZ) goto L_008b62a5;
L_008b628e:; BB(0x008b628e);
    /* 008b628e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6290: mov dword ptr [eax + 0x14], 0x31 */ W32((u32)(r_eax+0x14u), 0x31u);
    /* 008b6297: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6299: mov dword ptr [eax + 0x18], ebx */ W32((u32)(r_eax+0x18u), r_ebx);
    /* 008b629c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b629e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b629f: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b62a1u); call_ind(t); }
    /* 008b62a1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b62a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b62a5:; BB(0x008b62a5);
    /* 008b62a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008b62a7: jl 0x8b62b8 */ if ((fS!=fO)) goto L_008b62b8;
L_008b62a9:; BB(0x008b62a9);
    /* 008b62a9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b62ac: jge 0x8b62b8 */ if ((fS==fO)) goto L_008b62b8;
L_008b62ae:; BB(0x008b62ae);
    /* 008b62ae: cmp dword ptr [esi + eax*4 + 0xb0], 0 */ {  u32 a = R32((u32)(r_esi+r_eax*4+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b62b6: jne 0x8b62cc */ if (!fZ) goto L_008b62cc;
L_008b62b8:; BB(0x008b62b8);
    /* 008b62b8: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008b62ba: mov dword ptr [ecx + 0x14], 0x31 */ W32((u32)(r_ecx+0x14u), 0x31u);
    /* 008b62c1: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008b62c3: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008b62c6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b62c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b62c9: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b62cbu); call_ind(t); }
    /* 008b62cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b62cc:; BB(0x008b62cc);
    /* 008b62cc: lea eax, [edi + ebx*4 + 0x34] */ r_eax = (u32)(r_edi+r_ebx*4+0x34u);
    /* 008b62d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b62d1: push dword ptr [esi + ebx*4 + 0xa0] */ { u32 v = R32((u32)(r_esi+r_ebx*4+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b62d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b62d9: call 0x8b5a5e */ r_esp -= 4; W32(r_esp, 0x8b62deu); f_008b5a5e();
    /* 008b62de: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b62e1: lea ecx, [edi + eax*4 + 0x44] */ r_ecx = (u32)(r_edi+r_eax*4+0x44u);
    /* 008b62e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b62e6: push dword ptr [esi + eax*4 + 0xb0] */ { u32 v = R32((u32)(r_esi+r_eax*4+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b62ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b62ee: call 0x8b5a5e */ r_esp -= 4; W32(r_esp, 0x8b62f3u); f_008b5a5e();
    /* 008b62f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b62f6: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b62f9: add dword ptr [ebp + 8], 4 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b62fd: add dword ptr [ebp - 4], 4 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b6301: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b6304: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b6307: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b630a: cmp eax, dword ptr [esi + 0x120] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x120u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6310: jl 0x8b626d */ if ((fS!=fO)) goto L_008b626d;
L_008b6316:; BB(0x008b6316);
    /* 008b6316: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_008b6318:; BB(0x008b6318);
    /* 008b6318: and byte ptr [edi + 0x18], 0 */ { u32 ad = (u32)(r_edi+0x18u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b631c: mov dword ptr [edi + 0x14], ebx */ W32((u32)(r_edi+0x14u), r_ebx);
    /* 008b631f: mov dword ptr [edi + 8], ebx */ W32((u32)(r_edi+0x8u), r_ebx);
    /* 008b6322: mov dword ptr [edi + 0xc], ebx */ W32((u32)(r_edi+0xcu), r_ebx);
    /* 008b6325: mov dword ptr [edi + 0x10], ebx */ W32((u32)(r_edi+0x10u), r_ebx);
    /* 008b6328: mov eax, dword ptr [esi + 0xfc] */ r_eax = R32((u32)(r_esi+0xfcu));
    /* 008b632e: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 008b6331: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b6332: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b6333: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b6334: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b6335: ret  */ FN_RET(0x008b6207); r_esp += 4; return;
}

void f_008b6336(void) /* sub_8B6336 */
{
    FN_ENTER(0x008b6336);
    /* 008b6336: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6337: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008b633b: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b633e: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6340: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6342: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6343: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b6345u); call_ind(t); }
    /* 008b6345: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b6348: mov dword ptr [esi + 0x194], eax */ W32((u32)(r_esi+0x194u), r_eax);
    /* 008b634e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6350: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b6351: mov dword ptr [eax], 0x8b6207 */ W32((u32)(r_eax), 0x8b6207u);
    /* 008b6357: mov dword ptr [eax + 4], 0x8b5e3a */ W32((u32)(r_eax+0x4u), 0x8b5e3au);
    /* 008b635e: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b6361: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008b6362:; BB(0x008b6362);
    /* 008b6362: and dword ptr [eax + 0x10], 0 */ { u32 ad = (u32)(r_eax+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b6366: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b6369: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 008b636c: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b636d: jne 0x8b6362 */ if (!fZ) goto L_008b6362;
L_008b636f:; BB(0x008b636f);
    /* 008b636f: ret  */ FN_RET(0x008b6336); r_esp += 4; return;
}

void f_008b6370(void) /* sub_8B6370 */
{
    FN_ENTER(0x008b6370);
    /* 008b6370: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6371: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b6372: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6373: mov esi, dword ptr [edi + 0x194] */ r_esi = R32((u32)(r_edi+0x194u));
    /* 008b6379: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 008b637c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b637d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008b637f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b6380: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x008b6380, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b6380, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b6382: lea ecx, [edi + 0x190] */ r_ecx = (u32)(r_edi+0x190u);
    /* 008b6388: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 008b638a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b638b: add dword ptr [ebx + 0x58], eax */ { u32 ad = (u32)(r_ebx+0x58u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b638e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008b6390: mov dword ptr [esi + 0x14], ebx */ W32((u32)(r_esi+0x14u), r_ebx);
    /* 008b6393: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008b6395: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x8b6398u); call_ind(t); }
    /* 008b6398: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b639a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b639b: je 0x8b63c7 */ if (fZ) goto L_008b63c7;
L_008b639d:; BB(0x008b639d);
    /* 008b639d: lea eax, [edi + 0x120] */ r_eax = (u32)(r_edi+0x120u);
    /* 008b63a3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008b63a5: cmp dword ptr [eax], ebx */ {  u32 a = R32((u32)(r_eax)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b63a7: jle 0x8b63b6 */ if ((fZ||fS!=fO)) goto L_008b63b6;
L_008b63a9:; BB(0x008b63a9);
    /* 008b63a9: lea ecx, [esi + 0x24] */ r_ecx = (u32)(r_esi+0x24u);
L_008b63ac:; BB(0x008b63ac);
    /* 008b63ac: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
    /* 008b63ae: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b63af: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b63b2: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b63b4: jl 0x8b63ac */ if ((fS!=fO)) goto L_008b63ac;
L_008b63b6:; BB(0x008b63b6);
    /* 008b63b6: mov dword ptr [esi + 0x20], ebx */ W32((u32)(r_esi+0x20u), r_ebx);
    /* 008b63b9: mov eax, dword ptr [edi + 0xfc] */ r_eax = R32((u32)(r_edi+0xfcu));
    /* 008b63bf: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 008b63c2: mov byte ptr [esi + 0x18], bl */ W8((u32)(r_esi+0x18u), (u8)r_ebx);
    /* 008b63c5: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008b63c7:; BB(0x008b63c7);
    /* 008b63c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b63c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b63c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b63ca: ret  */ FN_RET(0x008b6370); r_esp += 4; return;
}

void f_008b63cb(void) /* sub_8B63CB */
{
    FN_ENTER(0x008b63cb);
    /* 008b63cb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b63cc: mov ebp, esp */ r_ebp = r_esp;
    /* 008b63ce: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b63d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b63d2: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008b63d5: cmp dword ptr [ebx + 0xfc], 0 */ {  u32 a = R32((u32)(r_ebx+0xfcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b63dc: mov eax, dword ptr [ebx + 0x194] */ r_eax = R32((u32)(r_ebx+0x194u));
    /* 008b63e2: mov ecx, dword ptr [ebx + 0x174] */ r_ecx = R32((u32)(r_ebx+0x174u));
    /* 008b63e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b63e9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008b63ec: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 008b63ef: je 0x8b6409 */ if (fZ) goto L_008b6409;
L_008b63f1:; BB(0x008b63f1);
    /* 008b63f1: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b63f5: jne 0x8b6409 */ if (!fZ) goto L_008b6409;
L_008b63f7:; BB(0x008b63f7);
    /* 008b63f7: mov edi, ebx */ r_edi = r_ebx;
    /* 008b63f9: call 0x8b6370 */ r_esp -= 4; W32(r_esp, 0x8b63feu); f_008b6370();
    /* 008b63fe: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b6400: je 0x8b65c0 */ if (fZ) goto L_008b65c0;
L_008b6406:; BB(0x008b6406);
    /* 008b6406: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_008b6409:; BB(0x008b6409);
    /* 008b6409: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 008b640c: and dword ptr [ebp - 0xc], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b6410: cmp dword ptr [ebx + 0x13c], 0 */ {  u32 a = R32((u32)(r_ebx+0x13cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b6417: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 008b641a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 008b641c: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 008b641f: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 008b6422: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 008b6425: mov ecx, dword ptr [ebx + 0x178] */ r_ecx = R32((u32)(r_ebx+0x178u));
    /* 008b642b: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 008b642e: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 008b6431: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 008b6434: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6435: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008b6438: lea ecx, [eax + 0x18] */ r_ecx = (u32)(r_eax+0x18u);
    /* 008b643b: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 008b643e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6440: lea esi, [eax + 0x20] */ r_esi = (u32)(r_eax+0x20u);
    /* 008b6443: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b6444: lea edi, [ebp - 0x30] */ r_edi = (u32)(r_ebp+0xffffffd0u);
    /* 008b6447: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008b6449: jle 0x8b658c */ if ((fZ||fS!=fO)) goto L_008b658c;
L_008b644f:; BB(0x008b644f);
    /* 008b644f: lea ecx, [ebx + 0x140] */ r_ecx = (u32)(r_ebx+0x140u);
    /* 008b6455: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_008b6458:; BB(0x008b6458);
    /* 008b6458: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b645b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008b645e: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b6461: mov ecx, dword ptr [ecx + esi*4] */ r_ecx = R32((u32)(r_ecx+r_esi*4));
    /* 008b6464: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 008b6467: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b646a: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 008b646c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 008b646f: mov ecx, dword ptr [ebx + ecx*4 + 0x124] */ r_ecx = R32((u32)(r_ebx+r_ecx*4+0x124u));
    /* 008b6476: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 008b6479: mov edi, dword ptr [eax + ecx*4 + 0x38] */ r_edi = R32((u32)(r_eax+r_ecx*4+0x38u));
    /* 008b647d: jge 0x8b64af */ if ((fS==fO)) goto L_008b64af;
L_008b647f:; BB(0x008b647f);
    /* 008b647f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6481: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6482: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b6485: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 008b6488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6489: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b648eu); f_008b5c08();
    /* 008b648e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b6491: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b6493: je 0x8b65c4 */ if (fZ) goto L_008b65c4;
L_008b6499:; BB(0x008b6499);
    /* 008b6499: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 008b649c: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b649f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 008b64a2: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008b64a5: jge 0x8b64ac */ if ((fS==fO)) goto L_008b64ac;
L_008b64a7:; BB(0x008b64a7);
    /* 008b64a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008b64a9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b64aa: jmp 0x8b64d7 */ goto L_008b64d7;
L_008b64ac:; BB(0x008b64ac);
    /* 008b64ac: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_008b64af:; BB(0x008b64af);
    /* 008b64af: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008b64b2: lea ecx, [edx - 8] */ r_ecx = (u32)(r_edx+0xfffffff8u);
    /* 008b64b5: sar esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008b64b7: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008b64bd: mov ecx, dword ptr [edi + esi*4 + 0xd4] */ r_ecx = R32((u32)(r_edi+r_esi*4+0xd4u));
    /* 008b64c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b64c6: je 0x8b64d4 */ if (fZ) goto L_008b64d4;
L_008b64c8:; BB(0x008b64c8);
    /* 008b64c8: movzx esi, byte ptr [esi + edi + 0x4d4] */ r_esi = (u32)R8((u32)(r_esi+r_edi+0x4d4u));
    /* 008b64d0: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b64d2: jmp 0x8b64ff */ goto L_008b64ff;
L_008b64d4:; BB(0x008b64d4);
    /* 008b64d4: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 008b64d6: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
L_008b64d7:; BB(0x008b64d7);
    /* 008b64d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b64d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b64d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b64da: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b64dd: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 008b64e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b64e1: call 0x8b5cf2 */ r_esp -= 4; W32(r_esp, 0x8b64e6u); f_008b5cf2();
    /* 008b64e6: mov esi, eax */ r_esi = r_eax;
    /* 008b64e8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b64eb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008b64ed: jl 0x8b65c4 */ if ((fS!=fO)) goto L_008b65c4;
L_008b64f3:; BB(0x008b64f3);
    /* 008b64f3: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 008b64f6: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 008b64f9: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008b64fc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_008b64ff:; BB(0x008b64ff);
    /* 008b64ff: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6501: je 0x8b6560 */ if (fZ) goto L_008b6560;
L_008b6503:; BB(0x008b6503);
    /* 008b6503: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6505: jge 0x8b652c */ if ((fS==fO)) goto L_008b652c;
L_008b6507:; BB(0x008b6507);
    /* 008b6507: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6508: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6509: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b650c: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 008b650f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6510: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b6515u); f_008b5c08();
    /* 008b6515: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b6518: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b651a: je 0x8b65c4 */ if (fZ) goto L_008b65c4;
L_008b6520:; BB(0x008b6520);
    /* 008b6520: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 008b6523: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 008b6526: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008b6529: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_008b652c:; BB(0x008b652c);
    /* 008b652c: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008b652f: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b6531: mov ecx, esi */ r_ecx = r_esi;
    /* 008b6533: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 008b653a: shl dword ptr [ebp - 4], cl */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 c = ((u8)r_ecx) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (a << c) & 0xffffffffu; W32(ad, r); fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; } }
    /* 008b653d: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6540: mov ecx, edx */ r_ecx = r_edx;
    /* 008b6542: sar edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008b6544: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b6547: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008b654a: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008b654c: cmp ecx, dword ptr [esi + 0x99ea30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x99ea30u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6552: jge 0x8b655e */ if ((fS==fO)) goto L_008b655e;
L_008b6554:; BB(0x008b6554);
    /* 008b6554: mov esi, dword ptr [esi + 0x99ea70] */ r_esi = R32((u32)(r_esi+0x99ea70u));
    /* 008b655a: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b655c: jmp 0x8b6560 */ goto L_008b6560;
L_008b655e:; BB(0x008b655e);
    /* 008b655e: mov esi, ecx */ r_esi = r_ecx;
L_008b6560:; BB(0x008b6560);
    /* 008b6560: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b6563: add dword ptr [ebp - 0x10], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b6567: lea ecx, [ebp + ecx*4 - 0x2c] */ r_ecx = (u32)(r_ebp+r_ecx*4+0xffffffd4u);
    /* 008b656b: add dword ptr [ecx], esi */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008b656d: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 008b656f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b6572: shl esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008b6574: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b6577: inc dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b657a: mov word ptr [ecx], si */ W16((u32)(r_ecx), (u16)r_esi);
    /* 008b657d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b6580: cmp ecx, dword ptr [ebx + 0x13c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x13cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b6586: jl 0x8b6458 */ if ((fS!=fO)) goto L_008b6458;
L_008b658c:; BB(0x008b658c);
    /* 008b658c: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 008b658f: mov esi, dword ptr [ebp - 0x58] */ r_esi = R32((u32)(r_ebp+0xffffffa8u));
    /* 008b6592: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 008b6594: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 008b6597: mov esi, dword ptr [ebp - 0x54] */ r_esi = R32((u32)(r_ebp+0xffffffacu));
    /* 008b659a: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 008b659d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 008b65a0: mov dword ptr [ebx + 0x178], ecx */ W32((u32)(r_ebx+0x178u), r_ecx);
    /* 008b65a6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008b65a9: dec dword ptr [eax + 0x34] */ { u32 ad = (u32)(r_eax+0x34u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b65ac: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 008b65af: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008b65b1: lea edi, [eax + 0x20] */ r_edi = (u32)(r_eax+0x20u);
    /* 008b65b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b65b5: lea esi, [ebp - 0x30] */ r_esi = (u32)(r_ebp+0xffffffd0u);
    /* 008b65b8: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 008b65bb: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008b65bd: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008b65bf:; BB(0x008b65bf);
    /* 008b65bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008b65c0:; BB(0x008b65c0);
    /* 008b65c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b65c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b65c2: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b65c3: ret  */ FN_RET(0x008b63cb); r_esp += 4; return;
L_008b65c4:; BB(0x008b65c4);
    /* 008b65c4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b65c6: jmp 0x8b65bf */ goto L_008b65bf;
}

void f_008b65c8(void) /* sub_8B65C8 */
{
    FN_ENTER(0x008b65c8);
    /* 008b65c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b65c9: mov ebp, esp */ r_ebp = r_esp;
    /* 008b65cb: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b65ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b65cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b65d0: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008b65d3: cmp dword ptr [edi + 0xfc], 0 */ {  u32 a = R32((u32)(r_edi+0xfcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b65da: mov eax, dword ptr [edi + 0x16c] */ r_eax = R32((u32)(r_edi+0x16cu));
    /* 008b65e0: mov esi, dword ptr [edi + 0x194] */ r_esi = R32((u32)(r_edi+0x194u));
    /* 008b65e6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008b65e9: mov eax, dword ptr [edi + 0x174] */ r_eax = R32((u32)(r_edi+0x174u));
    /* 008b65ef: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008b65f2: je 0x8b6607 */ if (fZ) goto L_008b6607;
L_008b65f4:; BB(0x008b65f4);
    /* 008b65f4: cmp dword ptr [esi + 0x34], 0 */ {  u32 a = R32((u32)(r_esi+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b65f8: jne 0x8b6607 */ if (!fZ) goto L_008b6607;
L_008b65fa:; BB(0x008b65fa);
    /* 008b65fa: call 0x8b6370 */ r_esp -= 4; W32(r_esp, 0x8b65ffu); f_008b6370();
    /* 008b65ff: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b6601: je 0x8b67ed */ if (fZ) goto L_008b67ed;
L_008b6607:; BB(0x008b6607);
    /* 008b6607: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 008b660a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008b660c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b660d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008b6610: jbe 0x8b6618 */ if ((fC||fZ)) goto L_008b6618;
L_008b6612:; BB(0x008b6612);
    /* 008b6612: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b6613: jmp 0x8b67e4 */ goto L_008b67e4;
L_008b6618:; BB(0x008b6618);
    /* 008b6618: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 008b661b: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 008b661e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b6620: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 008b6623: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 008b6626: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 008b6629: mov eax, dword ptr [edi + 0x178] */ r_eax = R32((u32)(r_edi+0x178u));
    /* 008b662f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 008b6632: mov ebx, dword ptr [esi + 0x10] */ r_ebx = R32((u32)(r_esi+0x10u));
    /* 008b6635: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 008b6638: lea ecx, [esi + 0x18] */ r_ecx = (u32)(r_esi+0x18u);
    /* 008b663b: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 008b663e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008b6641: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 008b6643: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 008b6646: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 008b6649: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 008b664c: mov ecx, dword ptr [edi + 0x168] */ r_ecx = R32((u32)(r_edi+0x168u));
    /* 008b6652: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 008b6655: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008b6658: jmp 0x8b676c */ goto L_008b676c;
L_008b665d:; BB(0x008b665d);
    /* 008b665d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b6660: jge 0x8b668d */ if ((fS==fO)) goto L_008b668d;
L_008b6662:; BB(0x008b6662);
    /* 008b6662: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6664: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6665: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 008b6668: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6669: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b666a: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b666fu); f_008b5c08();
    /* 008b666f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b6672: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b6674: je 0x8b6777 */ if (fZ) goto L_008b6777;
L_008b667a:; BB(0x008b667a);
    /* 008b667a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 008b667d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b6680: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 008b6683: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 008b6686: jge 0x8b668d */ if ((fS==fO)) goto L_008b668d;
L_008b6688:; BB(0x008b6688);
    /* 008b6688: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008b668a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b668b: jmp 0x8b66bd */ goto L_008b66bd;
L_008b668d:; BB(0x008b668d);
    /* 008b668d: lea ecx, [eax - 8] */ r_ecx = (u32)(r_eax+0xfffffff8u);
    /* 008b6690: mov edx, ebx */ r_edx = r_ebx;
    /* 008b6692: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008b6694: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b6697: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008b669d: mov ecx, dword ptr [ecx + edx*4 + 0xd4] */ r_ecx = R32((u32)(r_ecx+r_edx*4+0xd4u));
    /* 008b66a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b66a6: je 0x8b66ba */ if (fZ) goto L_008b66ba;
L_008b66a8:; BB(0x008b66a8);
    /* 008b66a8: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b66aa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b66ad: movzx ecx, byte ptr [edx + ecx + 0x4d4] */ r_ecx = (u32)R8((u32)(r_edx+r_ecx+0x4d4u));
    /* 008b66b5: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008b66b8: jmp 0x8b66e3 */ goto L_008b66e3;
L_008b66ba:; BB(0x008b66ba);
    /* 008b66ba: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 008b66bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b66bd:; BB(0x008b66bd);
    /* 008b66bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b66be: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b66c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b66c2: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 008b66c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b66c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b66c7: call 0x8b5cf2 */ r_esp -= 4; W32(r_esp, 0x8b66ccu); f_008b5cf2();
    /* 008b66cc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b66cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008b66d1: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008b66d4: jl 0x8b6777 */ if ((fS!=fO)) goto L_008b6777;
L_008b66da:; BB(0x008b66da);
    /* 008b66da: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 008b66dd: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 008b66e0: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
L_008b66e3:; BB(0x008b66e3);
    /* 008b66e3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008b66e6: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008b66e9: and dword ptr [ebp + 8], 0xf */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b66ed: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008b66f0: je 0x8b675e */ if (fZ) goto L_008b675e;
L_008b66f2:; BB(0x008b66f2);
    /* 008b66f2: add dword ptr [ebp - 4], ecx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b66f5: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b66f8: jge 0x8b6718 */ if ((fS==fO)) goto L_008b6718;
L_008b66fa:; BB(0x008b66fa);
    /* 008b66fa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b66fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b66fe: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 008b6701: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6702: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6703: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b6708u); f_008b5c08();
    /* 008b6708: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b670b: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b670d: je 0x8b6777 */ if (fZ) goto L_008b6777;
L_008b670f:; BB(0x008b670f);
    /* 008b670f: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 008b6712: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 008b6715: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
L_008b6718:; BB(0x008b6718);
    /* 008b6718: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008b671b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008b671d: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 008b671f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008b6720: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r; fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; fO = ((r >> 31) & 1) ^ fC; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008b6722: mov ecx, eax */ r_ecx = r_eax;
    /* 008b6724: sar ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008b6726: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008b6729: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b672a: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b672d: and edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008b672f: cmp edx, dword ptr [ecx + 0x99ea30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x99ea30u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b6735: jge 0x8b6741 */ if ((fS==fO)) goto L_008b6741;
L_008b6737:; BB(0x008b6737);
    /* 008b6737: mov ebx, dword ptr [ecx + 0x99ea70] */ r_ebx = R32((u32)(r_ecx+0x99ea70u));
    /* 008b673d: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008b673f: jmp 0x8b6743 */ goto L_008b6743;
L_008b6741:; BB(0x008b6741);
    /* 008b6741: mov ebx, edx */ r_ebx = r_edx;
L_008b6743:; BB(0x008b6743);
    /* 008b6743: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b6746: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008b6749: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008b674b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b674e: mov ecx, dword ptr [ecx*4 + 0x99de60] */ r_ecx = R32((u32)(r_ecx*4+0x99de60u));
    /* 008b6755: mov word ptr [edx + ecx*2], bx */ W16((u32)(r_edx+r_ecx*2), (u16)r_ebx);
    /* 008b6759: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b675c: jmp 0x8b6766 */ goto L_008b6766;
L_008b675e:; BB(0x008b675e);
    /* 008b675e: cmp ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6761: jne 0x8b677b */ if (!fZ) goto L_008b677b;
L_008b6763:; BB(0x008b6763);
    /* 008b6763: add dword ptr [ebp - 4], ecx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008b6766:; BB(0x008b6766);
    /* 008b6766: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b6769: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
L_008b676c:; BB(0x008b676c);
    /* 008b676c: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b676f: jle 0x8b665d */ if ((fZ||fS!=fO)) goto L_008b665d;
L_008b6775:; BB(0x008b6775);
    /* 008b6775: jmp 0x8b67c1 */ goto L_008b67c1;
L_008b6777:; BB(0x008b6777);
    /* 008b6777: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b6779: jmp 0x8b67ec */ goto L_008b67ec;
L_008b677b:; BB(0x008b677b);
    /* 008b677b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 008b677d: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008b677e: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b6780: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b6784: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 008b6787: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 008b678a: je 0x8b67be */ if (fZ) goto L_008b67be;
L_008b678c:; BB(0x008b678c);
    /* 008b678c: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b678f: jge 0x8b67ac */ if ((fS==fO)) goto L_008b67ac;
L_008b6791:; BB(0x008b6791);
    /* 008b6791: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b6794: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6795: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 008b6798: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6799: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b679a: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b679fu); f_008b5c08();
    /* 008b679f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b67a2: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b67a4: je 0x8b6777 */ if (fZ) goto L_008b6777;
L_008b67a6:; BB(0x008b67a6);
    /* 008b67a6: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 008b67a9: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
L_008b67ac:; BB(0x008b67ac);
    /* 008b67ac: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b67af: mov edx, ebx */ r_edx = r_ebx;
    /* 008b67b1: mov ecx, eax */ r_ecx = r_eax;
    /* 008b67b3: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008b67b5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008b67b8: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008b67b9: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008b67bb: add dword ptr [ebp - 8], edx */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fC = (r < a); }
L_008b67be:; BB(0x008b67be);
    /* 008b67be: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_008b67c1:; BB(0x008b67c1);
    /* 008b67c1: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 008b67c4: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b67c7: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 008b67c9: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 008b67cc: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 008b67cf: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 008b67d2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 008b67d5: mov dword ptr [edi + 0x178], ecx */ W32((u32)(r_edi+0x178u), r_ecx);
    /* 008b67db: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 008b67de: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b67e1: mov dword ptr [esi + 0x10], ebx */ W32((u32)(r_esi+0x10u), r_ebx);
L_008b67e4:; BB(0x008b67e4);
    /* 008b67e4: dec dword ptr [esi + 0x34] */ { u32 ad = (u32)(r_esi+0x34u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b67e7: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 008b67ea: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008b67ec:; BB(0x008b67ec);
    /* 008b67ec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b67ed:; BB(0x008b67ed);
    /* 008b67ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b67ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b67ef: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b67f0: ret  */ FN_RET(0x008b65c8); r_esp += 4; return;
}

void f_008b67f1(void) /* sub_8B67F1 */
{
    FN_ENTER(0x008b67f1);
    /* 008b67f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b67f2: mov ebp, esp */ r_ebp = r_esp;
    /* 008b67f4: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b67f7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b67f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b67f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008b67fb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b67fc: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008b67ff: mov ecx, dword ptr [edi + 0x174] */ r_ecx = R32((u32)(r_edi+0x174u));
    /* 008b6805: mov esi, dword ptr [edi + 0x194] */ r_esi = R32((u32)(r_edi+0x194u));
    /* 008b680b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008b680c: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b680e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008b6810: cmp dword ptr [edi + 0xfc], ebx */ {  u32 a = R32((u32)(r_edi+0xfcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6816: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008b6819: je 0x8b682d */ if (fZ) goto L_008b682d;
L_008b681b:; BB(0x008b681b);
    /* 008b681b: cmp dword ptr [esi + 0x34], ebx */ {  u32 a = R32((u32)(r_esi+0x34u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b681e: jne 0x8b682d */ if (!fZ) goto L_008b682d;
L_008b6820:; BB(0x008b6820);
    /* 008b6820: call 0x8b6370 */ r_esp -= 4; W32(r_esp, 0x8b6825u); f_008b6370();
    /* 008b6825: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b6827: je 0x8b68cf */ if (fZ) goto L_008b68cf;
L_008b682d:; BB(0x008b682d);
    /* 008b682d: cmp dword ptr [edi + 0x13c], ebx */ {  u32 a = R32((u32)(r_edi+0x13cu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b6833: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 008b6836: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 008b6839: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b683b: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 008b683e: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 008b6841: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 008b6844: mov eax, dword ptr [edi + 0x178] */ r_eax = R32((u32)(r_edi+0x178u));
    /* 008b684a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 008b684d: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008b6850: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008b6853: lea edx, [esi + 0x18] */ r_edx = (u32)(r_esi+0x18u);
    /* 008b6856: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 008b6859: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 008b685c: jle 0x8b68a5 */ if ((fZ||fS!=fO)) goto L_008b68a5;
L_008b685e:; BB(0x008b685e);
    /* 008b685e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b6861: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008b6864: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008b6867: mov ebx, dword ptr [edx + ebx*4] */ r_ebx = R32((u32)(r_edx+r_ebx*4));
    /* 008b686a: jge 0x8b6886 */ if ((fS==fO)) goto L_008b6886;
L_008b686c:; BB(0x008b686c);
    /* 008b686c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b686e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b686f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6870: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 008b6873: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6874: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b6879u); f_008b5c08();
    /* 008b6879: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b687c: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fC = 0; }
    /* 008b687e: je 0x8b68cf */ if (fZ) goto L_008b68cf;
L_008b6880:; BB(0x008b6880);
    /* 008b6880: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 008b6883: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
L_008b6886:; BB(0x008b6886);
    /* 008b6886: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6887: mov edx, eax */ r_edx = r_eax;
    /* 008b6889: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008b688b: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b688e: je 0x8b6897 */ if (fZ) goto L_008b6897;
L_008b6890:; BB(0x008b6890);
    /* 008b6890: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 008b6894: or word ptr [ebx], dx */ { u32 ad = (u32)(r_ebx);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a | b) & 0xffffu; W16(ad, r);  }
L_008b6897:; BB(0x008b6897);
    /* 008b6897: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b689a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008b689d: cmp edx, dword ptr [edi + 0x13c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x13cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b68a3: jl 0x8b685e */ if ((fS!=fO)) goto L_008b685e;
L_008b68a5:; BB(0x008b68a5);
    /* 008b68a5: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 008b68a8: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008b68ab: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 008b68ad: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 008b68b0: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008b68b3: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 008b68b6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008b68b9: mov dword ptr [edi + 0x178], edx */ W32((u32)(r_edi+0x178u), r_edx);
    /* 008b68bf: dec dword ptr [esi + 0x34] */ { u32 ad = (u32)(r_esi+0x34u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b68c2: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 008b68c5: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 008b68c8: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008b68ca:; BB(0x008b68ca);
    /* 008b68ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b68cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b68cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b68cd: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b68ce: ret  */ FN_RET(0x008b67f1); r_esp += 4; return;
L_008b68cf:; BB(0x008b68cf);
    /* 008b68cf: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b68d1: jmp 0x8b68ca */ goto L_008b68ca;
}

void f_008b68d3(void) /* sub_8B68D3 */
{
    FN_ENTER(0x008b68d3);
    /* 008b68d3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b68d4: mov ebp, esp */ r_ebp = r_esp;
    /* 008b68d6: sub esp, 0x154 */ {  u32 a = r_esp; u32 b = 0x154u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b68dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b68dd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b68de: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008b68e1: mov eax, dword ptr [edi + 0x16c] */ r_eax = R32((u32)(r_edi+0x16cu));
    /* 008b68e7: mov ecx, dword ptr [edi + 0x174] */ r_ecx = R32((u32)(r_edi+0x174u));
    /* 008b68ed: mov esi, dword ptr [edi + 0x194] */ r_esi = R32((u32)(r_edi+0x194u));
    /* 008b68f3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008b68f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008b68f8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008b68f9: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b68fb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 008b68fe: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008b6901: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b6903: cmp dword ptr [edi + 0xfc], 0 */ {  u32 a = R32((u32)(r_edi+0xfcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b690a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 008b690d: je 0x8b6922 */ if (fZ) goto L_008b6922;
L_008b690f:; BB(0x008b690f);
    /* 008b690f: cmp dword ptr [esi + 0x34], 0 */ {  u32 a = R32((u32)(r_esi+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6913: jne 0x8b6922 */ if (!fZ) goto L_008b6922;
L_008b6915:; BB(0x008b6915);
    /* 008b6915: call 0x8b6370 */ r_esp -= 4; W32(r_esp, 0x8b691au); f_008b6370();
    /* 008b691a: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b691c: je 0x8b6c20 */ if (fZ) goto L_008b6c20;
L_008b6922:; BB(0x008b6922);
    /* 008b6922: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 008b6925: and dword ptr [ebp - 0x18], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b6929: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 008b692c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b692e: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 008b6931: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 008b6934: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 008b6937: mov eax, dword ptr [edi + 0x178] */ r_eax = R32((u32)(r_edi+0x178u));
    /* 008b693d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 008b6940: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008b6943: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008b6946: lea eax, [esi + 0x18] */ r_eax = (u32)(r_esi+0x18u);
    /* 008b6949: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b694a: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 008b694d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 008b6950: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008b6953: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b6955: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 008b6958: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b695a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008b695d: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 008b6960: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008b6963: mov eax, dword ptr [edi + 0x168] */ r_eax = R32((u32)(r_edi+0x168u));
    /* 008b6969: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 008b696c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008b696f: jne 0x8b6b71 */ if (!fZ) goto L_008b6b71;
L_008b6975:; BB(0x008b6975);
    /* 008b6975: jmp 0x8b6b1b */ goto L_008b6b1b;
L_008b697a:; BB(0x008b697a);
    /* 008b697a: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b697d: jge 0x8b69ac */ if ((fS==fO)) goto L_008b69ac;
L_008b697f:; BB(0x008b697f);
    /* 008b697f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6981: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6982: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b6985: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b6988: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6989: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b698eu); f_008b5c08();
    /* 008b698e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b6991: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b6993: je 0x8b6c24 */ if (fZ) goto L_008b6c24;
L_008b6999:; BB(0x008b6999);
    /* 008b6999: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 008b699c: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b699f: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b69a2: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008b69a5: jge 0x8b69ac */ if ((fS==fO)) goto L_008b69ac;
L_008b69a7:; BB(0x008b69a7);
    /* 008b69a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008b69a9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b69aa: jmp 0x8b69d9 */ goto L_008b69d9;
L_008b69ac:; BB(0x008b69ac);
    /* 008b69ac: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b69af: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b69b2: lea ecx, [ebx - 8] */ r_ecx = (u32)(r_ebx+0xfffffff8u);
    /* 008b69b5: sar eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008b69b7: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008b69bc: mov ecx, dword ptr [edx + eax*4 + 0xd4] */ r_ecx = R32((u32)(r_edx+r_eax*4+0xd4u));
    /* 008b69c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b69c5: je 0x8b69d6 */ if (fZ) goto L_008b69d6;
L_008b69c7:; BB(0x008b69c7);
    /* 008b69c7: movzx eax, byte ptr [eax + edx + 0x4d4] */ r_eax = (u32)R8((u32)(r_eax+r_edx+0x4d4u));
    /* 008b69cf: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008b69d1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008b69d4: jmp 0x8b6a01 */ goto L_008b6a01;
L_008b69d6:; BB(0x008b69d6);
    /* 008b69d6: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 008b69d8: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
L_008b69d9:; BB(0x008b69d9);
    /* 008b69d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b69da: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b69dd: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b69e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b69e1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b69e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b69e5: call 0x8b5cf2 */ r_esp -= 4; W32(r_esp, 0x8b69eau); f_008b5cf2();
    /* 008b69ea: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b69ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008b69ef: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008b69f2: jl 0x8b6c24 */ if ((fS!=fO)) goto L_008b6c24;
L_008b69f8:; BB(0x008b69f8);
    /* 008b69f8: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b69fb: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 008b69fe: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_008b6a01:; BB(0x008b6a01);
    /* 008b6a01: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b6a04: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008b6a07: and dword ptr [ebp - 8], 0xf */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b6a0b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 008b6a0e: je 0x8b6a68 */ if (fZ) goto L_008b6a68;
L_008b6a10:; BB(0x008b6a10);
    /* 008b6a10: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6a14: je 0x8b6a29 */ if (fZ) goto L_008b6a29;
L_008b6a16:; BB(0x008b6a16);
    /* 008b6a16: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008b6a18: mov dword ptr [eax + 0x14], 0x72 */ W32((u32)(r_eax+0x14u), 0x72u);
    /* 008b6a1f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008b6a21: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008b6a23: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6a24: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8b6a27u); call_ind(t); }
    /* 008b6a27: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b6a28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b6a29:; BB(0x008b6a29);
    /* 008b6a29: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b6a2c: jge 0x8b6a51 */ if ((fS==fO)) goto L_008b6a51;
L_008b6a2e:; BB(0x008b6a2e);
    /* 008b6a2e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6a30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6a31: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b6a34: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b6a37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6a38: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b6a3du); f_008b5c08();
    /* 008b6a3d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b6a40: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fC = 0; }
    /* 008b6a42: je 0x8b6c24 */ if (fZ) goto L_008b6c24;
L_008b6a48:; BB(0x008b6a48);
    /* 008b6a48: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b6a4b: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 008b6a4e: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_008b6a51:; BB(0x008b6a51);
    /* 008b6a51: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b6a54: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6a55: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008b6a57: sar eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008b6a59: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b6a5b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 008b6a5e: jne 0x8b6a63 */ if (!fZ) goto L_008b6a63;
L_008b6a60:; BB(0x008b6a60);
    /* 008b6a60: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
L_008b6a63:; BB(0x008b6a63);
    /* 008b6a63: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008b6a66: jmp 0x8b6a71 */ goto L_008b6a71;
L_008b6a68:; BB(0x008b6a68);
    /* 008b6a68: cmp ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6a6b: jne 0x8b6b29 */ if (!fZ) goto L_008b6b29;
L_008b6a71:; BB(0x008b6a71);
    /* 008b6a71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
L_008b6a74:; BB(0x008b6a74);
    /* 008b6a74: mov eax, dword ptr [ecx*4 + 0x99de60] */ r_eax = R32((u32)(r_ecx*4+0x99de60u));
    /* 008b6a7b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b6a7e: lea eax, [edx + eax*2] */ r_eax = (u32)(r_edx+r_eax*2);
    /* 008b6a81: cmp word ptr [eax], 0 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008b6a85: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 008b6a88: je 0x8b6ae2 */ if (fZ) goto L_008b6ae2;
L_008b6a8a:; BB(0x008b6a8a);
    /* 008b6a8a: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b6a8d: jge 0x8b6ab5 */ if ((fS==fO)) goto L_008b6ab5;
L_008b6a8f:; BB(0x008b6a8f);
    /* 008b6a8f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6a91: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6a92: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b6a95: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b6a98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6a99: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b6a9eu); f_008b5c08();
    /* 008b6a9e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b6aa1: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fC = 0; }
    /* 008b6aa3: je 0x8b6c24 */ if (fZ) goto L_008b6c24;
L_008b6aa9:; BB(0x008b6aa9);
    /* 008b6aa9: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b6aac: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 008b6aaf: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008b6ab2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_008b6ab5:; BB(0x008b6ab5);
    /* 008b6ab5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008b6ab8: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6ab9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008b6abb: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008b6abd: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b6ac0: je 0x8b6ae7 */ if (fZ) goto L_008b6ae7;
L_008b6ac2:; BB(0x008b6ac2);
    /* 008b6ac2: movsx ecx, word ptr [eax] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 008b6ac5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008b6ac8: test edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6aca: jne 0x8b6ae7 */ if (!fZ) goto L_008b6ae7;
L_008b6acc:; BB(0x008b6acc);
    /* 008b6acc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008b6ace: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 008b6ad1: test cx, cx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu;  fS = ((r >> 15) & 1); fO = 0; }
    /* 008b6ad4: jl 0x8b6add */ if ((fS!=fO)) goto L_008b6add;
L_008b6ad6:; BB(0x008b6ad6);
    /* 008b6ad6: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b6ad8: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 008b6adb: jmp 0x8b6ae7 */ goto L_008b6ae7;
L_008b6add:; BB(0x008b6add);
    /* 008b6add: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008b6ae0: jmp 0x8b6ad6 */ goto L_008b6ad6;
L_008b6ae2:; BB(0x008b6ae2);
    /* 008b6ae2: dec dword ptr [ebp - 0x20] */ { u32 ad = (u32)(r_ebp+0xffffffe0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fS = ((r >> 31) & 1); }
    /* 008b6ae5: js 0x8b6af3 */ if (fS) goto L_008b6af3;
L_008b6ae7:; BB(0x008b6ae7);
    /* 008b6ae7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b6aea: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b6aeb: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6aee: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008b6af1: jle 0x8b6a74 */ if ((fZ||fS!=fO)) goto L_008b6a74;
L_008b6af3:; BB(0x008b6af3);
    /* 008b6af3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b6af6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6af8: je 0x8b6b15 */ if (fZ) goto L_008b6b15;
L_008b6afa:; BB(0x008b6afa);
    /* 008b6afa: mov eax, dword ptr [ecx*4 + 0x99de60] */ r_eax = R32((u32)(r_ecx*4+0x99de60u));
    /* 008b6b01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b6b04: mov word ptr [ecx + eax*2], dx */ W16((u32)(r_ecx+r_eax*2), (u16)r_edx);
    /* 008b6b08: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b6b0b: inc dword ptr [ebp - 0x18] */ { u32 ad = (u32)(r_ebp+0xffffffe8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b6b0e: mov dword ptr [ebp + ecx*4 - 0x154], eax */ W32((u32)(r_ebp+r_ecx*4+0xfffffeacu), r_eax);
L_008b6b15:; BB(0x008b6b15);
    /* 008b6b15: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b6b18: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_008b6b1b:; BB(0x008b6b1b);
    /* 008b6b1b: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b6b1e: jle 0x8b697a */ if ((fZ||fS!=fO)) goto L_008b697a;
L_008b6b24:; BB(0x008b6b24);
    /* 008b6b24: jmp 0x8b6bf1 */ goto L_008b6bf1;
L_008b6b29:; BB(0x008b6b29);
    /* 008b6b29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008b6b2b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008b6b2c: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b6b2e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6b30: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008b6b33: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008b6b36: je 0x8b6b71 */ if (fZ) goto L_008b6b71;
L_008b6b38:; BB(0x008b6b38);
    /* 008b6b38: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6b3a: jge 0x8b6b61 */ if ((fS==fO)) goto L_008b6b61;
L_008b6b3c:; BB(0x008b6b3c);
    /* 008b6b3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6b3d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6b3e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b6b41: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b6b44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6b45: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b6b4au); f_008b5c08();
    /* 008b6b4a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b6b4d: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b6b4f: je 0x8b6c24 */ if (fZ) goto L_008b6c24;
L_008b6b55:; BB(0x008b6b55);
    /* 008b6b55: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b6b58: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 008b6b5b: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008b6b5e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
L_008b6b61:; BB(0x008b6b61);
    /* 008b6b61: sub ebx, dword ptr [ebp - 0x20] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b6b64: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008b6b67: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008b6b69: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008b6b6b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b6b6c: and edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008b6b6e: add dword ptr [ebp - 0xc], edx */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008b6b71:; BB(0x008b6b71);
    /* 008b6b71: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b6b75: jbe 0x8b6bf1 */ if ((fC||fZ)) goto L_008b6bf1;
L_008b6b77:; BB(0x008b6b77);
    /* 008b6b77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b6b7a: jmp 0x8b6be9 */ goto L_008b6be9;
L_008b6b7c:; BB(0x008b6b7c);
    /* 008b6b7c: mov eax, dword ptr [eax*4 + 0x99de60] */ r_eax = R32((u32)(r_eax*4+0x99de60u));
    /* 008b6b83: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b6b86: lea eax, [ecx + eax*2] */ r_eax = (u32)(r_ecx+r_eax*2);
    /* 008b6b89: cmp word ptr [eax], 0 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008b6b8d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 008b6b90: je 0x8b6be2 */ if (fZ) goto L_008b6be2;
L_008b6b92:; BB(0x008b6b92);
    /* 008b6b92: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b6b95: jge 0x8b6bb9 */ if ((fS==fO)) goto L_008b6bb9;
L_008b6b97:; BB(0x008b6b97);
    /* 008b6b97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6b99: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6b9a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b6b9d: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 008b6ba0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6ba1: call 0x8b5c08 */ r_esp -= 4; W32(r_esp, 0x8b6ba6u); f_008b5c08();
    /* 008b6ba6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b6ba9: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fC = 0; }
    /* 008b6bab: je 0x8b6c24 */ if (fZ) goto L_008b6c24;
L_008b6bad:; BB(0x008b6bad);
    /* 008b6bad: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 008b6bb0: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 008b6bb3: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008b6bb6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_008b6bb9:; BB(0x008b6bb9);
    /* 008b6bb9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008b6bbc: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6bbd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008b6bbf: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008b6bc1: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b6bc4: je 0x8b6be2 */ if (fZ) goto L_008b6be2;
L_008b6bc6:; BB(0x008b6bc6);
    /* 008b6bc6: movsx ecx, word ptr [eax] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 008b6bc9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008b6bcc: test edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6bce: jne 0x8b6be2 */ if (!fZ) goto L_008b6be2;
L_008b6bd0:; BB(0x008b6bd0);
    /* 008b6bd0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008b6bd2: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 008b6bd5: test cx, cx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu;  fS = ((r >> 15) & 1); fO = 0; }
    /* 008b6bd8: jge 0x8b6bdd */ if ((fS==fO)) goto L_008b6bdd;
L_008b6bda:; BB(0x008b6bda);
    /* 008b6bda: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
L_008b6bdd:; BB(0x008b6bdd);
    /* 008b6bdd: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b6bdf: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
L_008b6be2:; BB(0x008b6be2);
    /* 008b6be2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b6be5: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b6be6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008b6be9:; BB(0x008b6be9);
    /* 008b6be9: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b6bec: jle 0x8b6b7c */ if ((fZ||fS!=fO)) goto L_008b6b7c;
L_008b6bee:; BB(0x008b6bee);
    /* 008b6bee: dec dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_008b6bf1:; BB(0x008b6bf1);
    /* 008b6bf1: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 008b6bf4: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 008b6bf7: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008b6bf9: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 008b6bfc: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 008b6bff: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008b6c02: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 008b6c05: mov dword ptr [edi + 0x178], eax */ W32((u32)(r_edi+0x178u), r_eax);
    /* 008b6c0b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b6c0e: dec dword ptr [esi + 0x34] */ { u32 ad = (u32)(r_esi+0x34u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6c11: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 008b6c14: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b6c17: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 008b6c1a: mov dword ptr [esi + 0x14], ebx */ W32((u32)(r_esi+0x14u), r_ebx);
    /* 008b6c1d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008b6c1f:; BB(0x008b6c1f);
    /* 008b6c1f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b6c20:; BB(0x008b6c20);
    /* 008b6c20: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b6c21: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b6c22: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b6c23: ret  */ FN_RET(0x008b68d3); r_esp += 4; return;
L_008b6c24:; BB(0x008b6c24);
    /* 008b6c24: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b6c27: jmp 0x8b6c39 */ goto L_008b6c39;
L_008b6c29:; BB(0x008b6c29);
    /* 008b6c29: mov ecx, dword ptr [ebp + eax*4 - 0x158] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffea8u));
    /* 008b6c30: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b6c33: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b6c34: and word ptr [edx + ecx*2], 0 */ { u32 ad = (u32)(r_edx+r_ecx*2);  u32 a = R16(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffu; W16(ad, r);  }
L_008b6c39:; BB(0x008b6c39);
    /* 008b6c39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b6c3b: jg 0x8b6c29 */ if ((!fZ&&fS==fO)) goto L_008b6c29;
L_008b6c3d:; BB(0x008b6c3d);
    /* 008b6c3d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b6c3f: jmp 0x8b6c1f */ goto L_008b6c1f;
}

void f_008b6c41(void) /* sub_8B6C41 */
{
    FN_ENTER(0x008b6c41);
    /* 008b6c41: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b6c42: mov ebp, esp */ r_ebp = r_esp;
    /* 008b6c44: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b6c47: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6c48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6c49: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008b6c4c: mov eax, dword ptr [esi + 0x168] */ r_eax = R32((u32)(r_esi+0x168u));
    /* 008b6c52: mov ebx, dword ptr [esi + 0x194] */ r_ebx = R32((u32)(r_esi+0x194u));
    /* 008b6c58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6c59: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008b6c5b: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6c5d: sete byte ptr [ebp + 0xb] */ W8((u32)(r_ebp+0xbu), (fZ) ? 1 : 0);
    /* 008b6c61: xor dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008b6c63: cmp byte ptr [ebp + 0xb], dl */ {  u32 a = R8((u32)(r_ebp+0xbu)); u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b6c66: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 008b6c69: je 0x8b6c73 */ if (fZ) goto L_008b6c73;
L_008b6c6b:; BB(0x008b6c6b);
    /* 008b6c6b: cmp dword ptr [esi + 0x16c], edi */ {  u32 a = R32((u32)(r_esi+0x16cu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6c71: jmp 0x8b6c8b */ goto L_008b6c8b;
L_008b6c73:; BB(0x008b6c73);
    /* 008b6c73: mov ecx, dword ptr [esi + 0x16c] */ r_ecx = R32((u32)(r_esi+0x16cu));
    /* 008b6c79: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6c7b: jg 0x8b6c82 */ if ((!fZ&&fS==fO)) goto L_008b6c82;
L_008b6c7d:; BB(0x008b6c7d);
    /* 008b6c7d: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6c80: jl 0x8b6c84 */ if ((fS!=fO)) goto L_008b6c84;
L_008b6c82:; BB(0x008b6c82);
    /* 008b6c82: mov dl, 1 */ r_edx = (r_edx & 0xffffff00u) | ((0x1u) & 0xffu);
L_008b6c84:; BB(0x008b6c84);
    /* 008b6c84: cmp dword ptr [esi + 0x120], 1 */ {  u32 a = R32((u32)(r_esi+0x120u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
L_008b6c8b:; BB(0x008b6c8b);
    /* 008b6c8b: je 0x8b6c8f */ if (fZ) goto L_008b6c8f;
L_008b6c8d:; BB(0x008b6c8d);
    /* 008b6c8d: mov dl, 1 */ r_edx = (r_edx & 0xffffff00u) | ((0x1u) & 0xffu);
L_008b6c8f:; BB(0x008b6c8f);
    /* 008b6c8f: mov eax, dword ptr [esi + 0x170] */ r_eax = R32((u32)(r_esi+0x170u));
    /* 008b6c95: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6c97: je 0x8b6ca4 */ if (fZ) goto L_008b6ca4;
L_008b6c99:; BB(0x008b6c99);
    /* 008b6c99: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b6c9a: cmp dword ptr [esi + 0x174], eax */ {  u32 a = R32((u32)(r_esi+0x174u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6ca0: je 0x8b6ca4 */ if (fZ) goto L_008b6ca4;
L_008b6ca2:; BB(0x008b6ca2);
    /* 008b6ca2: mov dl, 1 */ r_edx = (r_edx & 0xffffff00u) | ((0x1u) & 0xffu);
L_008b6ca4:; BB(0x008b6ca4);
    /* 008b6ca4: cmp dword ptr [esi + 0x174], 0xd */ {  u32 a = R32((u32)(r_esi+0x174u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6cab: jle 0x8b6caf */ if ((fZ||fS!=fO)) goto L_008b6caf;
L_008b6cad:; BB(0x008b6cad);
    /* 008b6cad: mov dl, 1 */ r_edx = (r_edx & 0xffffff00u) | ((0x1u) & 0xffu);
L_008b6caf:; BB(0x008b6caf);
    /* 008b6caf: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b6cb1: je 0x8b6cee */ if (fZ) goto L_008b6cee;
L_008b6cb3:; BB(0x008b6cb3);
    /* 008b6cb3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6cb5: mov dword ptr [eax + 0x14], 0xe */ W32((u32)(r_eax+0x14u), 0xeu);
    /* 008b6cbc: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6cbe: mov ecx, dword ptr [esi + 0x168] */ r_ecx = R32((u32)(r_esi+0x168u));
    /* 008b6cc4: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 008b6cc7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6cc9: mov ecx, dword ptr [esi + 0x16c] */ r_ecx = R32((u32)(r_esi+0x16cu));
    /* 008b6ccf: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 008b6cd2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6cd4: mov ecx, dword ptr [esi + 0x170] */ r_ecx = R32((u32)(r_esi+0x170u));
    /* 008b6cda: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 008b6cdd: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6cdf: mov ecx, dword ptr [esi + 0x174] */ r_ecx = R32((u32)(r_esi+0x174u));
    /* 008b6ce5: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 008b6ce8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6cea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6ceb: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b6cedu); call_ind(t); }
    /* 008b6ced: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b6cee:; BB(0x008b6cee);
    /* 008b6cee: cmp dword ptr [esi + 0x120], edi */ {  u32 a = R32((u32)(r_esi+0x120u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6cf4: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008b6cf7: jle 0x8b6dac */ if ((fZ||fS!=fO)) goto L_008b6dac;
L_008b6cfd:; BB(0x008b6cfd);
    /* 008b6cfd: lea eax, [esi + 0x124] */ r_eax = (u32)(r_esi+0x124u);
    /* 008b6d03: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_008b6d06:; BB(0x008b6d06);
    /* 008b6d06: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b6d09: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b6d0b: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 008b6d0e: mov ebx, eax */ r_ebx = r_eax;
    /* 008b6d10: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008b6d13: add ebx, dword ptr [esi + 0x8c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x8cu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b6d19: cmp byte ptr [ebp + 0xb], 0 */ {  u32 a = R8((u32)(r_ebp+0xbu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b6d1d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008b6d20: jne 0x8b6d46 */ if (!fZ) goto L_008b6d46;
L_008b6d22:; BB(0x008b6d22);
    /* 008b6d22: cmp dword ptr [ebx], edi */ {  u32 a = R32((u32)(r_ebx)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6d24: jge 0x8b6d46 */ if ((fS==fO)) goto L_008b6d46;
L_008b6d26:; BB(0x008b6d26);
    /* 008b6d26: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008b6d28: mov dword ptr [ecx + 0x14], 0x6f */ W32((u32)(r_ecx+0x14u), 0x6fu);
    /* 008b6d2f: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008b6d31: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008b6d34: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6d36: mov dword ptr [eax + 0x1c], edi */ W32((u32)(r_eax+0x1cu), r_edi);
    /* 008b6d39: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6d3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008b6d3d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6d3e: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8b6d41u); call_ind(t); }
    /* 008b6d41: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b6d44: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b6d45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b6d46:; BB(0x008b6d46);
    /* 008b6d46: mov edi, dword ptr [esi + 0x168] */ r_edi = R32((u32)(r_esi+0x168u));
    /* 008b6d4c: jmp 0x8b6d89 */ goto L_008b6d89;
L_008b6d4e:; BB(0x008b6d4e);
    /* 008b6d4e: mov ecx, dword ptr [ebx + edi*4] */ r_ecx = R32((u32)(r_ebx+r_edi*4));
    /* 008b6d51: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008b6d53: jge 0x8b6d57 */ if ((fS==fO)) goto L_008b6d57;
L_008b6d55:; BB(0x008b6d55);
    /* 008b6d55: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_008b6d57:; BB(0x008b6d57);
    /* 008b6d57: cmp dword ptr [esi + 0x170], ecx */ {  u32 a = R32((u32)(r_esi+0x170u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6d5d: je 0x8b6d7f */ if (fZ) goto L_008b6d7f;
L_008b6d5f:; BB(0x008b6d5f);
    /* 008b6d5f: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008b6d61: mov dword ptr [ecx + 0x14], 0x6f */ W32((u32)(r_ecx+0x14u), 0x6fu);
    /* 008b6d68: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008b6d6a: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008b6d6d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6d6f: mov dword ptr [eax + 0x1c], edi */ W32((u32)(r_eax+0x1cu), r_edi);
    /* 008b6d72: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6d74: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008b6d76: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6d77: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8b6d7au); call_ind(t); }
    /* 008b6d7a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b6d7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b6d7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b6d7f:; BB(0x008b6d7f);
    /* 008b6d7f: mov ecx, dword ptr [esi + 0x174] */ r_ecx = R32((u32)(r_esi+0x174u));
    /* 008b6d85: mov dword ptr [ebx + edi*4], ecx */ W32((u32)(r_ebx+r_edi*4), r_ecx);
    /* 008b6d88: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_008b6d89:; BB(0x008b6d89);
    /* 008b6d89: cmp edi, dword ptr [esi + 0x16c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x16cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6d8f: jle 0x8b6d4e */ if ((fZ||fS!=fO)) goto L_008b6d4e;
L_008b6d91:; BB(0x008b6d91);
    /* 008b6d91: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b6d94: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b6d97: add dword ptr [ebp - 0xc], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b6d9b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008b6d9d: cmp eax, dword ptr [esi + 0x120] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x120u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6da3: jl 0x8b6d06 */ if ((fS!=fO)) goto L_008b6d06;
L_008b6da9:; BB(0x008b6da9);
    /* 008b6da9: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
L_008b6dac:; BB(0x008b6dac);
    /* 008b6dac: cmp dword ptr [esi + 0x170], edi */ {  u32 a = R32((u32)(r_esi+0x170u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6db2: jne 0x8b6dcc */ if (!fZ) goto L_008b6dcc;
L_008b6db4:; BB(0x008b6db4);
    /* 008b6db4: cmp byte ptr [ebp + 0xb], 0 */ {  u32 a = R8((u32)(r_ebp+0xbu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b6db8: je 0x8b6dc3 */ if (fZ) goto L_008b6dc3;
L_008b6dba:; BB(0x008b6dba);
    /* 008b6dba: mov dword ptr [ebx + 4], 0x8b63cb */ W32((u32)(r_ebx+0x4u), 0x8b63cbu);
    /* 008b6dc1: jmp 0x8b6de2 */ goto L_008b6de2;
L_008b6dc3:; BB(0x008b6dc3);
    /* 008b6dc3: mov dword ptr [ebx + 4], 0x8b65c8 */ W32((u32)(r_ebx+0x4u), 0x8b65c8u);
    /* 008b6dca: jmp 0x8b6de2 */ goto L_008b6de2;
L_008b6dcc:; BB(0x008b6dcc);
    /* 008b6dcc: cmp byte ptr [ebp + 0xb], 0 */ {  u32 a = R8((u32)(r_ebp+0xbu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b6dd0: je 0x8b6ddb */ if (fZ) goto L_008b6ddb;
L_008b6dd2:; BB(0x008b6dd2);
    /* 008b6dd2: mov dword ptr [ebx + 4], 0x8b67f1 */ W32((u32)(r_ebx+0x4u), 0x8b67f1u);
    /* 008b6dd9: jmp 0x8b6de2 */ goto L_008b6de2;
L_008b6ddb:; BB(0x008b6ddb);
    /* 008b6ddb: mov dword ptr [ebx + 4], 0x8b68d3 */ W32((u32)(r_ebx+0x4u), 0x8b68d3u);
L_008b6de2:; BB(0x008b6de2);
    /* 008b6de2: cmp dword ptr [esi + 0x120], edi */ {  u32 a = R32((u32)(r_esi+0x120u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6de8: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008b6deb: jle 0x8b6ec9 */ if ((fZ||fS!=fO)) goto L_008b6ec9;
L_008b6df1:; BB(0x008b6df1);
    /* 008b6df1: lea eax, [ebx + 0x24] */ r_eax = (u32)(r_ebx+0x24u);
    /* 008b6df4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008b6df7: lea eax, [esi + 0x124] */ r_eax = (u32)(r_esi+0x124u);
    /* 008b6dfd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_008b6e00:; BB(0x008b6e00);
    /* 008b6e00: cmp byte ptr [ebp + 0xb], 0 */ {  u32 a = R8((u32)(r_ebp+0xbu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b6e04: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b6e07: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b6e09: je 0x8b6e58 */ if (fZ) goto L_008b6e58;
L_008b6e0b:; BB(0x008b6e0b);
    /* 008b6e0b: cmp dword ptr [esi + 0x170], edi */ {  u32 a = R32((u32)(r_esi+0x170u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6e11: jne 0x8b6eaa */ if (!fZ) goto L_008b6eaa;
L_008b6e17:; BB(0x008b6e17);
    /* 008b6e17: mov edi, dword ptr [eax + 0x14] */ r_edi = R32((u32)(r_eax+0x14u));
    /* 008b6e1a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008b6e1c: jl 0x8b6e2d */ if ((fS!=fO)) goto L_008b6e2d;
L_008b6e1e:; BB(0x008b6e1e);
    /* 008b6e1e: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6e21: jge 0x8b6e2d */ if ((fS==fO)) goto L_008b6e2d;
L_008b6e23:; BB(0x008b6e23);
    /* 008b6e23: cmp dword ptr [esi + edi*4 + 0xa0], 0 */ {  u32 a = R32((u32)(r_esi+r_edi*4+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6e2b: jne 0x8b6e41 */ if (!fZ) goto L_008b6e41;
L_008b6e2d:; BB(0x008b6e2d);
    /* 008b6e2d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6e2f: mov dword ptr [eax + 0x14], 0x31 */ W32((u32)(r_eax+0x14u), 0x31u);
    /* 008b6e36: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6e38: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 008b6e3b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6e3d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6e3e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b6e40u); call_ind(t); }
    /* 008b6e40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b6e41:; BB(0x008b6e41);
    /* 008b6e41: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b6e44: lea eax, [eax + edi*4 + 0x38] */ r_eax = (u32)(r_eax+r_edi*4+0x38u);
    /* 008b6e48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6e49: push dword ptr [esi + edi*4 + 0xa0] */ { u32 v = R32((u32)(r_esi+r_edi*4+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b6e50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6e51: call 0x8b5a5e */ r_esp -= 4; W32(r_esp, 0x8b6e56u); f_008b5a5e();
    /* 008b6e56: jmp 0x8b6ea2 */ goto L_008b6ea2;
L_008b6e58:; BB(0x008b6e58);
    /* 008b6e58: mov edi, dword ptr [eax + 0x18] */ r_edi = R32((u32)(r_eax+0x18u));
    /* 008b6e5b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008b6e5d: jl 0x8b6e6e */ if ((fS!=fO)) goto L_008b6e6e;
L_008b6e5f:; BB(0x008b6e5f);
    /* 008b6e5f: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6e62: jge 0x8b6e6e */ if ((fS==fO)) goto L_008b6e6e;
L_008b6e64:; BB(0x008b6e64);
    /* 008b6e64: cmp dword ptr [esi + edi*4 + 0xb0], 0 */ {  u32 a = R32((u32)(r_esi+r_edi*4+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b6e6c: jne 0x8b6e82 */ if (!fZ) goto L_008b6e82;
L_008b6e6e:; BB(0x008b6e6e);
    /* 008b6e6e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6e70: mov dword ptr [eax + 0x14], 0x31 */ W32((u32)(r_eax+0x14u), 0x31u);
    /* 008b6e77: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6e79: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 008b6e7c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6e7e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6e7f: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b6e81u); call_ind(t); }
    /* 008b6e81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b6e82:; BB(0x008b6e82);
    /* 008b6e82: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b6e85: lea eax, [ebx + edi*4 + 0x38] */ r_eax = (u32)(r_ebx+r_edi*4+0x38u);
    /* 008b6e89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b6e8a: push dword ptr [esi + edi*4 + 0xb0] */ { u32 v = R32((u32)(r_esi+r_edi*4+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b6e91: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008b6e94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6e95: call 0x8b5a5e */ r_esp -= 4; W32(r_esp, 0x8b6e9au); f_008b5a5e();
    /* 008b6e9a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008b6e9d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b6e9f: mov dword ptr [ebx + 0x48], eax */ W32((u32)(r_ebx+0x48u), r_eax);
L_008b6ea2:; BB(0x008b6ea2);
    /* 008b6ea2: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b6ea5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b6ea8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008b6eaa:; BB(0x008b6eaa);
    /* 008b6eaa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b6ead: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b6eb0: add dword ptr [ebp - 0xc], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b6eb4: add dword ptr [ebp - 0x10], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b6eb8: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 008b6eba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b6ebd: cmp eax, dword ptr [esi + 0x120] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x120u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b6ec3: jl 0x8b6e00 */ if ((fS!=fO)) goto L_008b6e00;
L_008b6ec9:; BB(0x008b6ec9);
    /* 008b6ec9: and byte ptr [ebx + 0x18], 0 */ { u32 ad = (u32)(r_ebx+0x18u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b6ecd: mov dword ptr [ebx + 0x14], edi */ W32((u32)(r_ebx+0x14u), r_edi);
    /* 008b6ed0: mov dword ptr [ebx + 0x10], edi */ W32((u32)(r_ebx+0x10u), r_edi);
    /* 008b6ed3: mov dword ptr [ebx + 0x20], edi */ W32((u32)(r_ebx+0x20u), r_edi);
    /* 008b6ed6: mov eax, dword ptr [esi + 0xfc] */ r_eax = R32((u32)(r_esi+0xfcu));
    /* 008b6edc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b6edd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b6ede: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 008b6ee1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b6ee2: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b6ee3: ret  */ FN_RET(0x008b6c41); r_esp += 4; return;
}

void f_008b6ee4(void) /* sub_8B6EE4 */
{
    FN_ENTER(0x008b6ee4);
    /* 008b6ee4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6ee5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6ee6: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008b6eea: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b6eed: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6eee: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6ef0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6ef2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6ef3: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b6ef5u); call_ind(t); }
    /* 008b6ef5: mov dword ptr [esi + 0x194], eax */ W32((u32)(r_esi+0x194u), r_eax);
    /* 008b6efb: mov dword ptr [eax], 0x8b6c41 */ W32((u32)(r_eax), 0x8b6c41u);
    /* 008b6f01: lea edi, [eax + 0x38] */ r_edi = (u32)(r_eax+0x38u);
    /* 008b6f04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008b6f06: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008b6f07: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008b6f08: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008b6f09: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008b6f0a: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 008b6f0d: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b6f10: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b6f13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6f14: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6f16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6f17: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b6f19u); call_ind(t); }
    /* 008b6f19: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008b6f1b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b6f1e: cmp dword ptr [esi + 0x20], edx */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b6f21: mov dword ptr [esi + 0x8c], eax */ W32((u32)(r_esi+0x8cu), r_eax);
    /* 008b6f27: mov ebx, eax */ r_ebx = r_eax;
    /* 008b6f29: jle 0x8b6f41 */ if ((fZ||fS!=fO)) goto L_008b6f41;
L_008b6f2b:; BB(0x008b6f2b);
    /* 008b6f2b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6f2d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008b6f30: mov edi, ebx */ r_edi = r_ebx;
    /* 008b6f32: add ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b6f38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b6f39: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b6f3a: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008b6f3c: cmp edx, dword ptr [esi + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b6f3f: jl 0x8b6f2b */ if ((fS!=fO)) goto L_008b6f2b;
L_008b6f41:; BB(0x008b6f41);
    /* 008b6f41: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b6f42: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b6f43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b6f44: ret  */ FN_RET(0x008b6ee4); r_esp += 4; return;
}

void f_008b6f45(void) /* sub_8B6F45 */
{
    FN_ENTER(0x008b6f45);
    /* 008b6f45: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b6f46: mov ebp, esp */ r_ebp = r_esp;
    /* 008b6f48: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b6f4b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008b6f4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6f4e: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008b6f51: cmp dword ptr [esi + 0x20], ecx */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b6f54: mov eax, dword ptr [esi + 0x198] */ r_eax = R32((u32)(r_esi+0x198u));
    /* 008b6f5a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6f5b: mov edi, dword ptr [esi + 0xc4] */ r_edi = R32((u32)(r_esi+0xc4u));
    /* 008b6f61: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008b6f64: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008b6f67: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 008b6f6a: jle 0x8b70f8 */ if ((fZ||fS!=fO)) goto L_008b70f8;
L_008b6f70:; BB(0x008b6f70);
    /* 008b6f70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b6f71: lea ebx, [eax + 0x2c] */ r_ebx = (u32)(r_eax+0x2cu);
    /* 008b6f74: add edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b6f77: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 008b6f7a: jmp 0x8b6f7e */ goto L_008b6f7e;
L_008b6f7c:; BB(0x008b6f7c);
    /* 008b6f7c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_008b6f7e:; BB(0x008b6f7e);
    /* 008b6f7e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008b6f80: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008b6f81: je 0x8b6ff9 */ if (fZ) goto L_008b6ff9;
L_008b6f83:; BB(0x008b6f83);
    /* 008b6f83: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008b6f84: je 0x8b6ff0 */ if (fZ) goto L_008b6ff0;
L_008b6f86:; BB(0x008b6f86);
    /* 008b6f86: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008b6f88: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008b6f89: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008b6f8b: je 0x8b6fe7 */ if (fZ) goto L_008b6fe7;
L_008b6f8d:; BB(0x008b6f8d);
    /* 008b6f8d: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008b6f90: je 0x8b6fa4 */ if (fZ) goto L_008b6fa4;
L_008b6f92:; BB(0x008b6f92);
    /* 008b6f92: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6f94: mov dword ptr [eax + 0x14], 6 */ W32((u32)(r_eax+0x14u), 0x6u);
    /* 008b6f9b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6f9d: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 008b6f9f: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 008b6fa2: jmp 0x8b6fba */ goto L_008b6fba;
L_008b6fa4:; BB(0x008b6fa4);
    /* 008b6fa4: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 008b6fa7: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008b6fa9: je 0x8b6fde */ if (fZ) goto L_008b6fde;
L_008b6fab:; BB(0x008b6fab);
    /* 008b6fab: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008b6fac: je 0x8b6fce */ if (fZ) goto L_008b6fce;
L_008b6fae:; BB(0x008b6fae);
    /* 008b6fae: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008b6faf: je 0x8b6fc2 */ if (fZ) goto L_008b6fc2;
L_008b6fb1:; BB(0x008b6fb1);
    /* 008b6fb1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6fb3: mov dword ptr [eax + 0x14], 0x2f */ W32((u32)(r_eax+0x14u), 0x2fu);
L_008b6fba:; BB(0x008b6fba);
    /* 008b6fba: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b6fbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b6fbd: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b6fbfu); call_ind(t); }
    /* 008b6fbf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b6fc0: jmp 0x8b7003 */ goto L_008b7003;
L_008b6fc2:; BB(0x008b6fc2);
    /* 008b6fc2: mov dword ptr [ebp + 8], 0x8bc120 */ W32((u32)(r_ebp+0x8u), 0x8bc120u);
    /* 008b6fc9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008b6fcc: jmp 0x8b7003 */ goto L_008b7003;
L_008b6fce:; BB(0x008b6fce);
    /* 008b6fce: mov dword ptr [ebp + 8], 0x8bc0d4 */ W32((u32)(r_ebp+0x8u), 0x8bc0d4u);
    /* 008b6fd5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 008b6fdc: jmp 0x8b7003 */ goto L_008b7003;
L_008b6fde:; BB(0x008b6fde);
    /* 008b6fde: mov dword ptr [ebp + 8], 0x8bc088 */ W32((u32)(r_ebp+0x8u), 0x8bc088u);
    /* 008b6fe5: jmp 0x8b7000 */ goto L_008b7000;
L_008b6fe7:; BB(0x008b6fe7);
    /* 008b6fe7: mov dword ptr [ebp + 8], 0x8bbb78 */ W32((u32)(r_ebp+0x8u), 0x8bbb78u);
    /* 008b6fee: jmp 0x8b7000 */ goto L_008b7000;
L_008b6ff0:; BB(0x008b6ff0);
    /* 008b6ff0: mov dword ptr [ebp + 8], 0x8bbe8d */ W32((u32)(r_ebp+0x8u), 0x8bbe8du);
    /* 008b6ff7: jmp 0x8b7000 */ goto L_008b7000;
L_008b6ff9:; BB(0x008b6ff9);
    /* 008b6ff9: mov dword ptr [ebp + 8], 0x8bc04b */ W32((u32)(r_ebp+0x8u), 0x8bc04bu);
L_008b7000:; BB(0x008b7000);
    /* 008b7000: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_008b7003:; BB(0x008b7003);
    /* 008b7003: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b7006: mov dword ptr [ebx - 0x28], eax */ W32((u32)(r_ebx+0xffffffd8u), r_eax);
    /* 008b7009: cmp byte ptr [edi + 0xc], 0 */ {  u32 a = R8((u32)(r_edi+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b700d: je 0x8b70dc */ if (fZ) goto L_008b70dc;
L_008b7013:; BB(0x008b7013);
    /* 008b7013: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b7016: cmp dword ptr [ebx], eax */ {  u32 a = R32((u32)(r_ebx)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b7018: je 0x8b70dc */ if (fZ) goto L_008b70dc;
L_008b701e:; BB(0x008b701e);
    /* 008b701e: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 008b7021: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b7023: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 008b7026: je 0x8b70dc */ if (fZ) goto L_008b70dc;
L_008b702c:; BB(0x008b702c);
    /* 008b702c: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 008b702e: sub eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008b7031: je 0x8b70c6 */ if (fZ) goto L_008b70c6;
L_008b7037:; BB(0x008b7037);
    /* 008b7037: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008b7038: je 0x8b7091 */ if (fZ) goto L_008b7091;
L_008b703a:; BB(0x008b703a);
    /* 008b703a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008b703b: je 0x8b7051 */ if (fZ) goto L_008b7051;
L_008b703d:; BB(0x008b703d);
    /* 008b703d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b703f: mov dword ptr [eax + 0x14], 0x2f */ W32((u32)(r_eax+0x14u), 0x2fu);
    /* 008b7046: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b7048: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b7049: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b704bu); call_ind(t); }
    /* 008b704b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b704c: jmp 0x8b70dc */ goto L_008b70dc;
L_008b7051:; BB(0x008b7051);
    /* 008b7051: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 008b7054: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008b7056: mov dword ptr [ebp - 8], 0x99eb30 */ W32((u32)(r_ebp+0xfffffff8u), 0x99eb30u);
L_008b705d:; BB(0x008b705d);
    /* 008b705d: mov ecx, 0x99eb30 */ r_ecx = 0x99eb30u;
L_008b7062:; BB(0x008b7062);
    /* 008b7062: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b7065: movzx ebx, word ptr [ebx + eax*2] */ r_ebx = (u32)R16((u32)(r_ebx+r_eax*2));
    /* 008b7069: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 008b706c: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b706f: fild dword ptr [ebp - 0x18] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe8u)));
    /* 008b7072: fmul qword ptr [ecx] */ ST(0) = ST(0) * R_F64((u32)(r_ecx));
    /* 008b7074: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b7077: fmul qword ptr [ebx] */ ST(0) = ST(0) * R_F64((u32)(r_ebx));
    /* 008b7079: mov ebx, 0x99eb70 */ r_ebx = 0x99eb70u;
    /* 008b707e: fstp dword ptr [edx + eax*4] */ W_F32((u32)(r_edx+r_eax*4), ST(0)); FPOP();
    /* 008b7081: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b7082: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b7084: jl 0x8b7062 */ if ((fS!=fO)) goto L_008b7062;
L_008b7086:; BB(0x008b7086);
    /* 008b7086: add dword ptr [ebp - 8], 8 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b708a: cmp dword ptr [ebp - 8], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b708d: jl 0x8b705d */ if ((fS!=fO)) goto L_008b705d;
L_008b708f:; BB(0x008b708f);
    /* 008b708f: jmp 0x8b70dc */ goto L_008b70dc;
L_008b7091:; BB(0x008b7091);
    /* 008b7091: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 008b7094: mov eax, 0x99eab0 */ r_eax = 0x99eab0u;
    /* 008b7099: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 008b709c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b709e: sub dword ptr [ebp - 8], eax */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_008b70a1:; BB(0x008b70a1);
    /* 008b70a1: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 008b70a4: movsx ecx, word ptr [edx + eax] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+r_eax));
    /* 008b70a8: imul ecx, ebx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b70ab: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b70ae: add ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b70b4: sar ecx, 0xc */ { u32 c = (12u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008b70b7: mov word ptr [ebx + eax], cx */ W16((u32)(r_ebx+r_eax), (u16)r_ecx);
    /* 008b70bb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b70bc: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b70bd: cmp eax, 0x99eb30 */ {  u32 a = r_eax; u32 b = 0x99eb30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b70c2: jl 0x8b70a1 */ if ((fS!=fO)) goto L_008b70a1;
L_008b70c4:; BB(0x008b70c4);
    /* 008b70c4: jmp 0x8b70dc */ goto L_008b70dc;
L_008b70c6:; BB(0x008b70c6);
    /* 008b70c6: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 008b70c9: mov ecx, edx */ r_ecx = r_edx;
    /* 008b70cb: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 008b70cd: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008b70cf: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
L_008b70d0:; BB(0x008b70d0);
    /* 008b70d0: mov bx, word ptr [ecx + eax] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax))) & 0xffffu);
    /* 008b70d4: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 008b70d7: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b70d8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b70d9: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008b70da: jne 0x8b70d0 */ if (!fZ) goto L_008b70d0;
L_008b70dc:; BB(0x008b70dc);
    /* 008b70dc: inc dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b70df: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b70e2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b70e5: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b70e8: add edi, 0x54 */ {  u32 a = r_edi; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b70eb: cmp eax, dword ptr [esi + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b70ee: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 008b70f1: jl 0x8b6f7c */ if ((fS!=fO)) goto L_008b6f7c;
L_008b70f7:; BB(0x008b70f7);
    /* 008b70f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b70f8:; BB(0x008b70f8);
    /* 008b70f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b70f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b70fa: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b70fb: ret  */ FN_RET(0x008b6f45); r_esp += 4; return;
}

