#include "protos.h"

void f_00866ce9(void) /* __abstract_cw */
{
    FN_ENTER(0x00866ce9);
    /* 00866ce9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00866ceb: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00866cee: je 0x866cf3 */ if (fZ) goto L_00866cf3;
L_00866cf0:; BB(0x00866cf0);
    /* 00866cf0: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00866cf2: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
L_00866cf3:; BB(0x00866cf3);
    /* 00866cf3: test bl, 4 */ {  u32 a = (u8)r_ebx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00866cf6: je 0x866cfb */ if (fZ) goto L_00866cfb;
L_00866cf8:; BB(0x00866cf8);
    /* 00866cf8: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00866cfb:; BB(0x00866cfb);
    /* 00866cfb: test bl, 8 */ {  u32 a = (u8)r_ebx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00866cfe: je 0x866d03 */ if (fZ) goto L_00866d03;
L_00866d00:; BB(0x00866d00);
    /* 00866d00: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00866d03:; BB(0x00866d03);
    /* 00866d03: test bl, 0x10 */ {  u32 a = (u8)r_ebx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00866d06: je 0x866d0b */ if (fZ) goto L_00866d0b;
L_00866d08:; BB(0x00866d08);
    /* 00866d08: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00866d0b:; BB(0x00866d0b);
    /* 00866d0b: test bl, 0x20 */ {  u32 a = (u8)r_ebx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00866d0e: je 0x866d13 */ if (fZ) goto L_00866d13;
L_00866d10:; BB(0x00866d10);
    /* 00866d10: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00866d13:; BB(0x00866d13);
    /* 00866d13: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00866d16: je 0x866d1d */ if (fZ) goto L_00866d1d;
L_00866d18:; BB(0x00866d18);
    /* 00866d18: or eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00866d1d:; BB(0x00866d1d);
    /* 00866d1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00866d1e: movzx edx, bx */ r_edx = (u32)(u16)r_ebx;
    /* 00866d21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00866d22: mov ecx, edx */ r_ecx = r_edx;
    /* 00866d24: mov esi, 0xc00 */ r_esi = 0xc00u;
    /* 00866d29: and ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00866d2b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00866d2c: mov edi, 0x300 */ r_edi = 0x300u;
    /* 00866d31: mov ebp, 0x200 */ r_ebp = 0x200u;
    /* 00866d36: je 0x866d59 */ if (fZ) goto L_00866d59;
L_00866d38:; BB(0x00866d38);
    /* 00866d38: cmp ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866d3e: je 0x866d54 */ if (fZ) goto L_00866d54;
L_00866d40:; BB(0x00866d40);
    /* 00866d40: cmp ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866d46: je 0x866d50 */ if (fZ) goto L_00866d50;
L_00866d48:; BB(0x00866d48);
    /* 00866d48: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866d4a: jne 0x866d59 */ if (!fZ) goto L_00866d59;
L_00866d4c:; BB(0x00866d4c);
    /* 00866d4c: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00866d4e: jmp 0x866d59 */ goto L_00866d59;
L_00866d50:; BB(0x00866d50);
    /* 00866d50: or eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00866d52: jmp 0x866d59 */ goto L_00866d59;
L_00866d54:; BB(0x00866d54);
    /* 00866d54: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00866d59:; BB(0x00866d59);
    /* 00866d59: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00866d5b: je 0x866d68 */ if (fZ) goto L_00866d68;
L_00866d5d:; BB(0x00866d5d);
    /* 00866d5d: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866d5f: jne 0x866d6d */ if (!fZ) goto L_00866d6d;
L_00866d61:; BB(0x00866d61);
    /* 00866d61: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00866d66: jmp 0x866d6d */ goto L_00866d6d;
L_00866d68:; BB(0x00866d68);
    /* 00866d68: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00866d6d:; BB(0x00866d6d);
    /* 00866d6d: test bh, 0x10 */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00866d70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00866d71: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00866d72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00866d73: je 0x866d7a */ if (fZ) goto L_00866d7a;
L_00866d75:; BB(0x00866d75);
    /* 00866d75: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00866d7a:; BB(0x00866d7a);
    /* 00866d7a: ret  */ FN_RET(0x00866ce9); r_esp += 4; return;
}

