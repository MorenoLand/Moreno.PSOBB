#include "protos.h"

void f_00866d7b(void) /* __hw_cw */
{
    FN_ENTER(0x00866d7b);
    /* 00866d7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00866d7d: test bl, 0x10 */ {  u32 a = (u8)r_ebx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00866d80: je 0x866d83 */ if (fZ) goto L_00866d83;
L_00866d82:; BB(0x00866d82);
    /* 00866d82: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00866d83:; BB(0x00866d83);
    /* 00866d83: test bl, 8 */ {  u32 a = (u8)r_ebx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00866d86: je 0x866d8b */ if (fZ) goto L_00866d8b;
L_00866d88:; BB(0x00866d88);
    /* 00866d88: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00866d8b:; BB(0x00866d8b);
    /* 00866d8b: test bl, 4 */ {  u32 a = (u8)r_ebx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00866d8e: je 0x866d93 */ if (fZ) goto L_00866d93;
L_00866d90:; BB(0x00866d90);
    /* 00866d90: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00866d93:; BB(0x00866d93);
    /* 00866d93: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00866d96: je 0x866d9b */ if (fZ) goto L_00866d9b;
L_00866d98:; BB(0x00866d98);
    /* 00866d98: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00866d9b:; BB(0x00866d9b);
    /* 00866d9b: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00866d9e: je 0x866da3 */ if (fZ) goto L_00866da3;
L_00866da0:; BB(0x00866da0);
    /* 00866da0: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00866da3:; BB(0x00866da3);
    /* 00866da3: test ebx, 0x80000 */ {  u32 a = r_ebx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866da9: je 0x866dae */ if (fZ) goto L_00866dae;
L_00866dab:; BB(0x00866dab);
    /* 00866dab: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00866dae:; BB(0x00866dae);
    /* 00866dae: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00866db0: mov edx, 0x300 */ r_edx = 0x300u;
    /* 00866db5: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00866db7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00866db8: mov esi, 0x200 */ r_esi = 0x200u;
    /* 00866dbd: je 0x866de2 */ if (fZ) goto L_00866de2;
L_00866dbf:; BB(0x00866dbf);
    /* 00866dbf: cmp ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866dc5: je 0x866ddd */ if (fZ) goto L_00866ddd;
L_00866dc7:; BB(0x00866dc7);
    /* 00866dc7: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866dc9: je 0x866dd6 */ if (fZ) goto L_00866dd6;
L_00866dcb:; BB(0x00866dcb);
    /* 00866dcb: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866dcd: jne 0x866de2 */ if (!fZ) goto L_00866de2;
L_00866dcf:; BB(0x00866dcf);
    /* 00866dcf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00866dd4: jmp 0x866de2 */ goto L_00866de2;
L_00866dd6:; BB(0x00866dd6);
    /* 00866dd6: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00866ddb: jmp 0x866de2 */ goto L_00866de2;
L_00866ddd:; BB(0x00866ddd);
    /* 00866ddd: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00866de2:; BB(0x00866de2);
    /* 00866de2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00866de4: and ecx, 0x30000 */ {  u32 a = r_ecx; u32 b = 0x30000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00866dea: je 0x866df8 */ if (fZ) goto L_00866df8;
L_00866dec:; BB(0x00866dec);
    /* 00866dec: cmp ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866df2: jne 0x866dfa */ if (!fZ) goto L_00866dfa;
L_00866df4:; BB(0x00866df4);
    /* 00866df4: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00866df6: jmp 0x866dfa */ goto L_00866dfa;
L_00866df8:; BB(0x00866df8);
    /* 00866df8: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00866dfa:; BB(0x00866dfa);
    /* 00866dfa: test ebx, 0x40000 */ {  u32 a = r_ebx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00866e00: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00866e01: je 0x866e08 */ if (fZ) goto L_00866e08;
L_00866e03:; BB(0x00866e03);
    /* 00866e03: or eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00866e08:; BB(0x00866e08);
    /* 00866e08: ret  */ FN_RET(0x00866d7b); r_esp += 4; return;
}

