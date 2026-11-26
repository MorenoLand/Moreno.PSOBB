#include "protos.h"

void f_00718010(void) /* sub_718010 */
{
    FN_ENTER(0x00718010);
    /* 00718010: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00718016: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718018: je 0x718028 */ if (fZ) goto L_00718028;
L_0071801a:; BB(0x0071801a);
    /* 0071801a: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0071801e: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718023: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 00718027: ret  */ FN_RET(0x00718010); r_esp += 4; return;
L_00718028:; BB(0x00718028);
    /* 00718028: ret  */ FN_RET(0x00718010); r_esp += 4; return;
}

void f_0071802c(void) /* sub_71802C */
{
    FN_ENTER(0x0071802c);
    /* 0071802c: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00718032: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718034: je 0x718044 */ if (fZ) goto L_00718044;
L_00718036:; BB(0x00718036);
    /* 00718036: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0071803a: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071803f: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 00718043: ret  */ FN_RET(0x0071802c); r_esp += 4; return;
L_00718044:; BB(0x00718044);
    /* 00718044: ret  */ FN_RET(0x0071802c); r_esp += 4; return;
}

void f_00718048(void) /* sub_718048 */
{
    FN_ENTER(0x00718048);
    /* 00718048: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0071804c: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718051: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718053: je 0x718074 */ if (fZ) goto L_00718074;
L_00718055:; BB(0x00718055);
    /* 00718055: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00718057: jl 0x718070 */ if ((fS!=fO)) goto L_00718070;
L_00718059:; BB(0x00718059);
    /* 00718059: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071805c: jl 0x718062 */ if ((fS!=fO)) goto L_00718062;
L_0071805e:; BB(0x0071805e);
    /* 0071805e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718060: jmp 0x718066 */ goto L_00718066;
L_00718062:; BB(0x00718062);
    /* 00718062: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_00718066:; BB(0x00718066);
    /* 00718066: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718068: je 0x71806f */ if (fZ) goto L_0071806f;
L_0071806a:; BB(0x0071806a);
    /* 0071806a: call 0x716108 */ r_esp -= 4; W32(r_esp, 0x71806fu); f_00716108();
L_0071806f:; BB(0x0071806f);
    /* 0071806f: ret  */ FN_RET(0x00718048); r_esp += 4; return;
L_00718070:; BB(0x00718070);
    /* 00718070: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718072: jmp 0x718066 */ goto L_00718066;
L_00718074:; BB(0x00718074);
    /* 00718074: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718076: jmp 0x718066 */ goto L_00718066;
}

void f_00718078(void) /* sub_718078 */
{
    FN_ENTER(0x00718078);
    /* 00718078: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0071807c: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718081: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718083: je 0x7180a4 */ if (fZ) goto L_007180a4;
L_00718085:; BB(0x00718085);
    /* 00718085: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00718087: jl 0x7180a0 */ if ((fS!=fO)) goto L_007180a0;
L_00718089:; BB(0x00718089);
    /* 00718089: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071808c: jl 0x718092 */ if ((fS!=fO)) goto L_00718092;
L_0071808e:; BB(0x0071808e);
    /* 0071808e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718090: jmp 0x718096 */ goto L_00718096;
L_00718092:; BB(0x00718092);
    /* 00718092: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_00718096:; BB(0x00718096);
    /* 00718096: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718098: je 0x71809f */ if (fZ) goto L_0071809f;
L_0071809a:; BB(0x0071809a);
    /* 0071809a: call 0x716118 */ r_esp -= 4; W32(r_esp, 0x71809fu); f_00716118();
L_0071809f:; BB(0x0071809f);
    /* 0071809f: ret  */ FN_RET(0x00718078); r_esp += 4; return;
L_007180a0:; BB(0x007180a0);
    /* 007180a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007180a2: jmp 0x718096 */ goto L_00718096;
L_007180a4:; BB(0x007180a4);
    /* 007180a4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007180a6: jmp 0x718096 */ goto L_00718096;
}

void f_007180a0(void)
{
    FN_ENTER(0x007180a0);
    goto L_007180a0;
L_00718096:; BB(0x00718096);
    /* 00718096: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718098: je 0x71809f */ if (fZ) goto L_0071809f;
L_0071809a:; BB(0x0071809a);
    /* 0071809a: call 0x716118 */ r_esp -= 4; W32(r_esp, 0x71809fu); f_00716118();
L_0071809f:; BB(0x0071809f);
    /* 0071809f: ret  */ FN_RET(0x007180a0); r_esp += 4; return;
L_007180a0:; BB(0x007180a0);
    /* 007180a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007180a2: jmp 0x718096 */ goto L_00718096;
}

void f_007180a8(void) /* sub_7180A8 */
{
    FN_ENTER(0x007180a8);
    /* 007180a8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007180ac: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 007180b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007180b3: je 0x7180d4 */ if (fZ) goto L_007180d4;
L_007180b5:; BB(0x007180b5);
    /* 007180b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007180b7: jl 0x7180d0 */ if ((fS!=fO)) goto L_007180d0;
L_007180b9:; BB(0x007180b9);
    /* 007180b9: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007180bc: jl 0x7180c2 */ if ((fS!=fO)) goto L_007180c2;
L_007180be:; BB(0x007180be);
    /* 007180be: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007180c0: jmp 0x7180c6 */ goto L_007180c6;
L_007180c2:; BB(0x007180c2);
    /* 007180c2: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_007180c6:; BB(0x007180c6);
    /* 007180c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007180c8: je 0x7180cf */ if (fZ) goto L_007180cf;
L_007180ca:; BB(0x007180ca);
    /* 007180ca: call 0x7160f8 */ r_esp -= 4; W32(r_esp, 0x7180cfu); f_007160f8();
L_007180cf:; BB(0x007180cf);
    /* 007180cf: ret  */ FN_RET(0x007180a8); r_esp += 4; return;
L_007180d0:; BB(0x007180d0);
    /* 007180d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007180d2: jmp 0x7180c6 */ goto L_007180c6;
L_007180d4:; BB(0x007180d4);
    /* 007180d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007180d6: jmp 0x7180c6 */ goto L_007180c6;
}

void f_007180d8(void) /* sub_7180D8 */
{
    FN_ENTER(0x007180d8);
    /* 007180d8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007180dc: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 007180e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007180e3: je 0x718104 */ if (fZ) goto L_00718104;
L_007180e5:; BB(0x007180e5);
    /* 007180e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007180e7: jl 0x718100 */ if ((fS!=fO)) goto L_00718100;
L_007180e9:; BB(0x007180e9);
    /* 007180e9: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007180ec: jl 0x7180f2 */ if ((fS!=fO)) goto L_007180f2;
L_007180ee:; BB(0x007180ee);
    /* 007180ee: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007180f0: jmp 0x7180f6 */ goto L_007180f6;
L_007180f2:; BB(0x007180f2);
    /* 007180f2: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_007180f6:; BB(0x007180f6);
    /* 007180f6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007180f8: je 0x7180ff */ if (fZ) goto L_007180ff;
L_007180fa:; BB(0x007180fa);
    /* 007180fa: call 0x7160e8 */ r_esp -= 4; W32(r_esp, 0x7180ffu); f_007160e8();
L_007180ff:; BB(0x007180ff);
    /* 007180ff: ret  */ FN_RET(0x007180d8); r_esp += 4; return;
L_00718100:; BB(0x00718100);
    /* 00718100: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718102: jmp 0x7180f6 */ goto L_007180f6;
L_00718104:; BB(0x00718104);
    /* 00718104: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718106: jmp 0x7180f6 */ goto L_007180f6;
}

void f_00718108(void) /* sub_718108 */
{
    FN_ENTER(0x00718108);
    /* 00718108: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0071810c: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718111: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718113: je 0x718134 */ if (fZ) goto L_00718134;
L_00718115:; BB(0x00718115);
    /* 00718115: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00718117: jl 0x718130 */ if ((fS!=fO)) goto L_00718130;
L_00718119:; BB(0x00718119);
    /* 00718119: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071811c: jl 0x718122 */ if ((fS!=fO)) goto L_00718122;
L_0071811e:; BB(0x0071811e);
    /* 0071811e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718120: jmp 0x718126 */ goto L_00718126;
L_00718122:; BB(0x00718122);
    /* 00718122: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_00718126:; BB(0x00718126);
    /* 00718126: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718128: je 0x71812f */ if (fZ) goto L_0071812f;
L_0071812a:; BB(0x0071812a);
    /* 0071812a: call 0x7160d8 */ r_esp -= 4; W32(r_esp, 0x71812fu); f_007160d8();
L_0071812f:; BB(0x0071812f);
    /* 0071812f: ret  */ FN_RET(0x00718108); r_esp += 4; return;
L_00718130:; BB(0x00718130);
    /* 00718130: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718132: jmp 0x718126 */ goto L_00718126;
L_00718134:; BB(0x00718134);
    /* 00718134: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718136: jmp 0x718126 */ goto L_00718126;
}

void f_00718138(void) /* sub_718138 */
{
    FN_ENTER(0x00718138);
    /* 00718138: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0071813c: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718141: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718143: je 0x718164 */ if (fZ) goto L_00718164;
L_00718145:; BB(0x00718145);
    /* 00718145: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00718147: jl 0x718160 */ if ((fS!=fO)) goto L_00718160;
L_00718149:; BB(0x00718149);
    /* 00718149: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071814c: jl 0x718152 */ if ((fS!=fO)) goto L_00718152;
L_0071814e:; BB(0x0071814e);
    /* 0071814e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718150: jmp 0x718156 */ goto L_00718156;
L_00718152:; BB(0x00718152);
    /* 00718152: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_00718156:; BB(0x00718156);
    /* 00718156: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718158: je 0x71815f */ if (fZ) goto L_0071815f;
L_0071815a:; BB(0x0071815a);
    /* 0071815a: call 0x716148 */ r_esp -= 4; W32(r_esp, 0x71815fu); f_00716148();
L_0071815f:; BB(0x0071815f);
    /* 0071815f: ret  */ FN_RET(0x00718138); r_esp += 4; return;
L_00718160:; BB(0x00718160);
    /* 00718160: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718162: jmp 0x718156 */ goto L_00718156;
L_00718164:; BB(0x00718164);
    /* 00718164: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718166: jmp 0x718156 */ goto L_00718156;
}

void f_00718168(void) /* sub_718168 */
{
    FN_ENTER(0x00718168);
    /* 00718168: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0071816c: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718171: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718173: je 0x718194 */ if (fZ) goto L_00718194;
L_00718175:; BB(0x00718175);
    /* 00718175: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00718177: jl 0x718190 */ if ((fS!=fO)) goto L_00718190;
L_00718179:; BB(0x00718179);
    /* 00718179: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071817c: jl 0x718182 */ if ((fS!=fO)) goto L_00718182;
L_0071817e:; BB(0x0071817e);
    /* 0071817e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718180: jmp 0x718186 */ goto L_00718186;
L_00718182:; BB(0x00718182);
    /* 00718182: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_00718186:; BB(0x00718186);
    /* 00718186: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718188: je 0x71818f */ if (fZ) goto L_0071818f;
L_0071818a:; BB(0x0071818a);
    /* 0071818a: call 0x716158 */ r_esp -= 4; W32(r_esp, 0x71818fu); f_00716158();
L_0071818f:; BB(0x0071818f);
    /* 0071818f: ret  */ FN_RET(0x00718168); r_esp += 4; return;
L_00718190:; BB(0x00718190);
    /* 00718190: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718192: jmp 0x718186 */ goto L_00718186;
L_00718194:; BB(0x00718194);
    /* 00718194: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718196: jmp 0x718186 */ goto L_00718186;
}

void f_00718198(void) /* sub_718198 */
{
    FN_ENTER(0x00718198);
    /* 00718198: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00718199: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 0071819e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007181a0: je 0x7181ac */ if (fZ) goto L_007181ac;
L_007181a2:; BB(0x007181a2);
    /* 007181a2: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 007181a6: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007181a8: je 0x7181ac */ if (fZ) goto L_007181ac;
L_007181aa:; BB(0x007181aa);
    /* 007181aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007181ab: ret  */ FN_RET(0x00718198); r_esp += 4; return;
L_007181ac:; BB(0x007181ac);
    /* 007181ac: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007181b0: call 0x7181bc */ r_esp -= 4; W32(r_esp, 0x7181b5u); f_007181bc();
    /* 007181b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007181b6: ret  */ FN_RET(0x00718198); r_esp += 4; return;
}

void f_007181b8(void) /* sub_7181B8 */
{
    FN_ENTER(0x007181b8);
    /* 007181b8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007181bc: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 007181c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007181c4: je 0x7181e5 */ if (fZ) goto L_007181e5;
L_007181c6:; BB(0x007181c6);
    /* 007181c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007181c8: jl 0x7181e1 */ if ((fS!=fO)) goto L_007181e1;
L_007181ca:; BB(0x007181ca);
    /* 007181ca: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007181cd: jl 0x7181d3 */ if ((fS!=fO)) goto L_007181d3;
L_007181cf:; BB(0x007181cf);
    /* 007181cf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007181d1: jmp 0x7181d7 */ goto L_007181d7;
L_007181d3:; BB(0x007181d3);
    /* 007181d3: mov ecx, dword ptr [edx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x54u));
L_007181d7:; BB(0x007181d7);
    /* 007181d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007181d9: je 0x7181e0 */ if (fZ) goto L_007181e0;
L_007181db:; BB(0x007181db);
    /* 007181db: call 0x7160c8 */ r_esp -= 4; W32(r_esp, 0x7181e0u); f_007160c8();
L_007181e0:; BB(0x007181e0);
    /* 007181e0: ret  */ FN_RET(0x007181b8); r_esp += 4; return;
L_007181e1:; BB(0x007181e1);
    /* 007181e1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007181e3: jmp 0x7181d7 */ goto L_007181d7;
L_007181e5:; BB(0x007181e5);
    /* 007181e5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007181e7: jmp 0x7181d7 */ goto L_007181d7;
}

void f_007181bc(void) /* sub_7181BC */
{
    FN_ENTER(0x007181bc);
    /* 007181bc: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 007181c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007181c4: je 0x7181e5 */ if (fZ) goto L_007181e5;
L_007181c6:; BB(0x007181c6);
    /* 007181c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007181c8: jl 0x7181e1 */ if ((fS!=fO)) goto L_007181e1;
L_007181ca:; BB(0x007181ca);
    /* 007181ca: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007181cd: jl 0x7181d3 */ if ((fS!=fO)) goto L_007181d3;
L_007181cf:; BB(0x007181cf);
    /* 007181cf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007181d1: jmp 0x7181d7 */ goto L_007181d7;
L_007181d3:; BB(0x007181d3);
    /* 007181d3: mov ecx, dword ptr [edx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x54u));
L_007181d7:; BB(0x007181d7);
    /* 007181d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007181d9: je 0x7181e0 */ if (fZ) goto L_007181e0;
L_007181db:; BB(0x007181db);
    /* 007181db: call 0x7160c8 */ r_esp -= 4; W32(r_esp, 0x7181e0u); f_007160c8();
L_007181e0:; BB(0x007181e0);
    /* 007181e0: ret  */ FN_RET(0x007181bc); r_esp += 4; return;
L_007181e1:; BB(0x007181e1);
    /* 007181e1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007181e3: jmp 0x7181d7 */ goto L_007181d7;
L_007181e5:; BB(0x007181e5);
    /* 007181e5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007181e7: jmp 0x7181d7 */ goto L_007181d7;
}

void f_007181ec(void) /* sub_7181EC */
{
    FN_ENTER(0x007181ec);
    /* 007181ec: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007181f0: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 007181f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007181f7: je 0x71821e */ if (fZ) goto L_0071821e;
L_007181f9:; BB(0x007181f9);
    /* 007181f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007181fb: jl 0x71821a */ if ((fS!=fO)) goto L_0071821a;
L_007181fd:; BB(0x007181fd);
    /* 007181fd: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00718200: jl 0x718206 */ if ((fS!=fO)) goto L_00718206;
L_00718202:; BB(0x00718202);
    /* 00718202: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718204: jmp 0x71820a */ goto L_0071820a;
L_00718206:; BB(0x00718206);
    /* 00718206: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_0071820a:; BB(0x0071820a);
    /* 0071820a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071820c: je 0x718219 */ if (fZ) goto L_00718219;
L_0071820e:; BB(0x0071820e);
    /* 0071820e: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00718213: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00718214: call 0x71b494 */ r_esp -= 4; W32(r_esp, 0x718219u); f_0071b494();
L_00718219:; BB(0x00718219);
    /* 00718219: ret  */ FN_RET(0x007181ec); r_esp += 4; return;
L_0071821a:; BB(0x0071821a);
    /* 0071821a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071821c: jmp 0x71820a */ goto L_0071820a;
L_0071821e:; BB(0x0071821e);
    /* 0071821e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718220: jmp 0x71820a */ goto L_0071820a;
}

void f_00718224(void) /* sub_718224 */
{
    FN_ENTER(0x00718224);
    /* 00718224: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00718228: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 0071822d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071822f: je 0x718256 */ if (fZ) goto L_00718256;
L_00718231:; BB(0x00718231);
    /* 00718231: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00718233: jl 0x718252 */ if ((fS!=fO)) goto L_00718252;
L_00718235:; BB(0x00718235);
    /* 00718235: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00718238: jl 0x71823e */ if ((fS!=fO)) goto L_0071823e;
L_0071823a:; BB(0x0071823a);
    /* 0071823a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071823c: jmp 0x718242 */ goto L_00718242;
L_0071823e:; BB(0x0071823e);
    /* 0071823e: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_00718242:; BB(0x00718242);
    /* 00718242: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718244: je 0x718251 */ if (fZ) goto L_00718251;
L_00718246:; BB(0x00718246);
    /* 00718246: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 0071824b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071824c: call 0x71b4ac */ r_esp -= 4; W32(r_esp, 0x718251u); f_0071b4ac();
L_00718251:; BB(0x00718251);
    /* 00718251: ret  */ FN_RET(0x00718224); r_esp += 4; return;
L_00718252:; BB(0x00718252);
    /* 00718252: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718254: jmp 0x718242 */ goto L_00718242;
L_00718256:; BB(0x00718256);
    /* 00718256: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718258: jmp 0x718242 */ goto L_00718242;
}

void f_0071825c(void) /* sub_71825C */
{
    FN_ENTER(0x0071825c);
    /* 0071825c: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718261: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718263: je 0x71827a */ if (fZ) goto L_0071827a;
L_00718265:; BB(0x00718265);
    /* 00718265: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00718269: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
    /* 0071826d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071826f: je 0x71827a */ if (fZ) goto L_0071827a;
L_00718271:; BB(0x00718271);
    /* 00718271: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00718275: call 0x71b53c */ r_esp -= 4; W32(r_esp, 0x71827au); f_0071b53c();
L_0071827a:; BB(0x0071827a);
    /* 0071827a: ret  */ FN_RET(0x0071825c); r_esp += 4; return;
}

void f_0071827c(void) /* sub_71827C */
{
    FN_ENTER(0x0071827c);
    /* 0071827c: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 00718281: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00718286: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00718288: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00718289: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071828a: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00718290: call 0x71ce9c */ r_esp -= 4; W32(r_esp, 0x718295u); f_0071ce9c();
    /* 00718295: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00718298: ret  */ FN_RET(0x0071827c); r_esp += 4; return;
}

void f_0071829c(void) /* sub_71829C */
{
    FN_ENTER(0x0071829c);
    /* 0071829c: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 007182a1: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007182a6: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007182aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007182ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007182ac: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 007182b2: call 0x71ce9c */ r_esp -= 4; W32(r_esp, 0x7182b7u); f_0071ce9c();
    /* 007182b7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007182ba: ret  */ FN_RET(0x0071829c); r_esp += 4; return;
}

void f_007182bc(void) /* sub_7182BC */
{
    FN_ENTER(0x007182bc);
    /* 007182bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007182bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007182bf: mov ebx, eax */ r_ebx = r_eax;
L_007182c1:; BB(0x007182c1);
    /* 007182c1: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 007182c7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007182c9: je 0x7182f9 */ if (fZ) goto L_007182f9;
L_007182cb:; BB(0x007182cb);
    /* 007182cb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007182cd: jl 0x7182f5 */ if ((fS!=fO)) goto L_007182f5;
L_007182cf:; BB(0x007182cf);
    /* 007182cf: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007182d2: jl 0x7182d8 */ if ((fS!=fO)) goto L_007182d8;
L_007182d4:; BB(0x007182d4);
    /* 007182d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007182d6: jmp 0x7182dc */ goto L_007182dc;
L_007182d8:; BB(0x007182d8);
    /* 007182d8: mov ecx, dword ptr [edx + ebx*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_ebx*4+0x54u));
L_007182dc:; BB(0x007182dc);
    /* 007182dc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007182de: je 0x7182eb */ if (fZ) goto L_007182eb;
L_007182e0:; BB(0x007182e0);
    /* 007182e0: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007182e2: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007182e6: call 0x71b550 */ r_esp -= 4; W32(r_esp, 0x7182ebu); f_0071b550();
L_007182eb:; BB(0x007182eb);
    /* 007182eb: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007182ee: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007182f1: jl 0x7182c1 */ if ((fS!=fO)) goto L_007182c1;
L_007182f3:; BB(0x007182f3);
    /* 007182f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007182f4: ret  */ FN_RET(0x007182bc); r_esp += 4; return;
L_007182f5:; BB(0x007182f5);
    /* 007182f5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007182f7: jmp 0x7182dc */ goto L_007182dc;
L_007182f9:; BB(0x007182f9);
    /* 007182f9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007182fb: jmp 0x7182dc */ goto L_007182dc;
}

void f_00718300(void) /* sub_718300 */
{
    FN_ENTER(0x00718300);
    /* 00718300: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00718301: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00718302: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00718304: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00718308: mov ebx, eax */ r_ebx = r_eax;
    /* 0071830a: mov esi, edx */ r_esi = r_edx;
L_0071830c:; BB(0x0071830c);
    /* 0071830c: mov ecx, dword ptr [0xa98478] */ r_ecx = R32((u32)(0xa98478u));
    /* 00718312: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718314: je 0x718349 */ if (fZ) goto L_00718349;
L_00718316:; BB(0x00718316);
    /* 00718316: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00718318: jl 0x718345 */ if ((fS!=fO)) goto L_00718345;
L_0071831a:; BB(0x0071831a);
    /* 0071831a: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071831d: jl 0x718323 */ if ((fS!=fO)) goto L_00718323;
L_0071831f:; BB(0x0071831f);
    /* 0071831f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718321: jmp 0x718327 */ goto L_00718327;
L_00718323:; BB(0x00718323);
    /* 00718323: mov ecx, dword ptr [ecx + ebx*4 + 0x54] */ r_ecx = R32((u32)(r_ecx+r_ebx*4+0x54u));
L_00718327:; BB(0x00718327);
    /* 00718327: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718329: je 0x71833a */ if (fZ) goto L_0071833a;
L_0071832b:; BB(0x0071832b);
    /* 0071832b: mov eax, esi */ r_eax = r_esi;
    /* 0071832d: or eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00718330: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00718331: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00718335: call 0x71b550 */ r_esp -= 4; W32(r_esp, 0x71833au); f_0071b550();
L_0071833a:; BB(0x0071833a);
    /* 0071833a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0071833d: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00718340: jl 0x71830c */ if ((fS!=fO)) goto L_0071830c;
L_00718342:; BB(0x00718342);
    /* 00718342: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00718343: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00718344: ret  */ FN_RET(0x00718300); r_esp += 4; return;
L_00718345:; BB(0x00718345);
    /* 00718345: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718347: jmp 0x718327 */ goto L_00718327;
L_00718349:; BB(0x00718349);
    /* 00718349: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071834b: jmp 0x718327 */ goto L_00718327;
}

void f_00718350(void) /* sub_718350 */
{
    FN_ENTER(0x00718350);
    /* 00718350: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00718354: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718359: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071835b: je 0x718382 */ if (fZ) goto L_00718382;
L_0071835d:; BB(0x0071835d);
    /* 0071835d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0071835f: jl 0x71837e */ if ((fS!=fO)) goto L_0071837e;
L_00718361:; BB(0x00718361);
    /* 00718361: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00718364: jl 0x71836a */ if ((fS!=fO)) goto L_0071836a;
L_00718366:; BB(0x00718366);
    /* 00718366: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718368: jmp 0x71836e */ goto L_0071836e;
L_0071836a:; BB(0x0071836a);
    /* 0071836a: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_0071836e:; BB(0x0071836e);
    /* 0071836e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718370: je 0x71837d */ if (fZ) goto L_0071837d;
L_00718372:; BB(0x00718372);
    /* 00718372: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00718374: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00718378: call 0x71b550 */ r_esp -= 4; W32(r_esp, 0x71837du); f_0071b550();
L_0071837d:; BB(0x0071837d);
    /* 0071837d: ret  */ FN_RET(0x00718350); r_esp += 4; return;
L_0071837e:; BB(0x0071837e);
    /* 0071837e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718380: jmp 0x71836e */ goto L_0071836e;
L_00718382:; BB(0x00718382);
    /* 00718382: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718384: jmp 0x71836e */ goto L_0071836e;
}

void f_00718388(void) /* sub_718388 */
{
    FN_ENTER(0x00718388);
    /* 00718388: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00718389: mov ebp, esp */ r_ebp = r_esp;
    /* 0071838b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071838d: push 0x8f0980 */ { u32 v = 0x8f0980u; r_esp -= 4; W32(r_esp, v); }
    /* 00718392: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00718398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00718399: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007183a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007183a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007183a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007183a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007183ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007183af: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 007183b1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007183b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7183bdu); f_005caba4();
    /* 007183bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007183be: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007183c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007183c3: je 0x7183ee */ if (fZ) goto L_007183ee;
L_007183c5:; BB(0x007183c5);
    /* 007183c5: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007183cc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007183d3: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007183d6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007183d9: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 007183df: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007183e2: call 0x73f97c */ r_esp -= 4; W32(r_esp, 0x7183e7u); f_0073f97c();
    /* 007183e7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007183ee:; BB(0x007183ee);
    /* 007183ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007183f1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007183f8: mov esp, ebp */ r_esp = r_ebp;
    /* 007183fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007183fb: ret  */ FN_RET(0x00718388); r_esp += 4; return;
}

void f_007183fc(void) /* sub_7183FC */
{
    FN_ENTER(0x007183fc);
    /* 007183fc: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718401: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718403: je 0x718412 */ if (fZ) goto L_00718412;
L_00718405:; BB(0x00718405);
    /* 00718405: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00718408: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071840a: je 0x718412 */ if (fZ) goto L_00718412;
L_0071840c:; BB(0x0071840c);
    /* 0071840c: call 0x714090 */ r_esp -= 4; W32(r_esp, 0x718411u); f_00714090();
    /* 00718411: ret  */ FN_RET(0x007183fc); r_esp += 4; return;
L_00718412:; BB(0x00718412);
    /* 00718412: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718414: ret  */ FN_RET(0x007183fc); r_esp += 4; return;
}

void f_00718418(void) /* sub_718418 */
{
    FN_ENTER(0x00718418);
    /* 00718418: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 0071841d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071841f: je 0x718439 */ if (fZ) goto L_00718439;
L_00718421:; BB(0x00718421);
    /* 00718421: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 00718424: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718426: je 0x718439 */ if (fZ) goto L_00718439;
L_00718428:; BB(0x00718428);
    /* 00718428: movzx eax, word ptr [eax + 0x1e] */ r_eax = (u32)R16((u32)(r_eax+0x1eu));
    /* 0071842c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071842e: je 0x718433 */ if (fZ) goto L_00718433;
L_00718430:; BB(0x00718430);
    /* 00718430: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718432: ret  */ FN_RET(0x00718418); r_esp += 4; return;
L_00718433:; BB(0x00718433);
    /* 00718433: mov eax, 1 */ r_eax = 0x1u;
    /* 00718438: ret  */ FN_RET(0x00718418); r_esp += 4; return;
L_00718439:; BB(0x00718439);
    /* 00718439: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071843b: ret  */ FN_RET(0x00718418); r_esp += 4; return;
}

void f_0071843c(void) /* sub_71843C */
{
    FN_ENTER(0x0071843c);
    /* 0071843c: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718441: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718443: je 0x71845c */ if (fZ) goto L_0071845c;
L_00718445:; BB(0x00718445);
    /* 00718445: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 00718448: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071844a: je 0x71845c */ if (fZ) goto L_0071845c;
L_0071844c:; BB(0x0071844c);
    /* 0071844c: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0071844f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718451: je 0x718459 */ if (fZ) goto L_00718459;
L_00718453:; BB(0x00718453);
    /* 00718453: mov eax, 1 */ r_eax = 0x1u;
    /* 00718458: ret  */ FN_RET(0x0071843c); r_esp += 4; return;
L_00718459:; BB(0x00718459);
    /* 00718459: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071845b: ret  */ FN_RET(0x0071843c); r_esp += 4; return;
L_0071845c:; BB(0x0071845c);
    /* 0071845c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071845e: ret  */ FN_RET(0x0071843c); r_esp += 4; return;
}

void f_00718460(void) /* sub_718460 */
{
    FN_ENTER(0x00718460);
    /* 00718460: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718465: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718467: je 0x71847d */ if (fZ) goto L_0071847d;
L_00718469:; BB(0x00718469);
    /* 00718469: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0071846c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071846e: je 0x71847d */ if (fZ) goto L_0071847d;
L_00718470:; BB(0x00718470);
    /* 00718470: call 0x713fdc */ r_esp -= 4; W32(r_esp, 0x718475u); f_00713fdc();
    /* 00718475: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00718477: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x71847cu); f_00791748();
    /* 0071847c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0071847d:; BB(0x0071847d);
    /* 0071847d: ret  */ FN_RET(0x00718460); r_esp += 4; return;
}

void f_00718480(void) /* sub_718480 */
{
    FN_ENTER(0x00718480);
    /* 00718480: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718485: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718487: je 0x718491 */ if (fZ) goto L_00718491;
L_00718489:; BB(0x00718489);
    /* 00718489: movsx eax, word ptr [eax + 0x22] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x22u));
    /* 0071848d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071848f: jle 0x718494 */ if ((fZ||fS!=fO)) goto L_00718494;
L_00718491:; BB(0x00718491);
    /* 00718491: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718493: ret  */ FN_RET(0x00718480); r_esp += 4; return;
L_00718494:; BB(0x00718494);
    /* 00718494: mov eax, 1 */ r_eax = 0x1u;
    /* 00718499: ret  */ FN_RET(0x00718480); r_esp += 4; return;
}

void f_0071849c(void) /* sub_71849C */
{
    FN_ENTER(0x0071849c);
    /* 0071849c: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 007184a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007184a4: je 0x7184b0 */ if (fZ) goto L_007184b0;
L_007184a6:; BB(0x007184a6);
    /* 007184a6: mov eax, 0x2d */ r_eax = 0x2du;
    /* 007184ab: mov word ptr [edx + 0x22], ax */ W16((u32)(r_edx+0x22u), (u16)r_eax);
    /* 007184af: ret  */ FN_RET(0x0071849c); r_esp += 4; return;
L_007184b0:; BB(0x007184b0);
    /* 007184b0: ret  */ FN_RET(0x0071849c); r_esp += 4; return;
}

void f_007184b4(void) /* sub_7184B4 */
{
    FN_ENTER(0x007184b4);
    /* 007184b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007184b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007184b6: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 007184ba: mov ecx, dword ptr [0xa98478] */ r_ecx = R32((u32)(0xa98478u));
    /* 007184c0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007184c2: je 0x7184f1 */ if (fZ) goto L_007184f1;
L_007184c4:; BB(0x007184c4);
    /* 007184c4: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007184ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007184cb: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007184cd: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 007184d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007184d3: call 0x718b74 */ r_esp -= 4; W32(r_esp, 0x7184d8u); f_00718b74();
    /* 007184d8: mov ebp, eax */ r_ebp = r_eax;
    /* 007184da: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007184dc: je 0x7184ed */ if (fZ) goto L_007184ed;
L_007184de:; BB(0x007184de);
    /* 007184de: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007184e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007184e1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007184e3: call 0x720940 */ r_esp -= 4; W32(r_esp, 0x7184e8u); f_00720940();
L_007184e8:; BB(0x007184e8);
    /* 007184e8: mov eax, ebp */ r_eax = r_ebp;
    /* 007184ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007184eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007184ec: ret  */ FN_RET(0x007184b4); r_esp += 4; return;
L_007184ed:; BB(0x007184ed);
    /* 007184ed: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007184ef: jmp 0x7184e8 */ goto L_007184e8;
L_007184f1:; BB(0x007184f1);
    /* 007184f1: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007184f3: jmp 0x7184e8 */ goto L_007184e8;
}

void f_007184f8(void) /* sub_7184F8 */
{
    FN_ENTER(0x007184f8);
    /* 007184f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007184f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007184fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007184fb: movzx edi, word ptr [esp + 0x10] */ r_edi = (u32)R16((u32)(r_esp+0x10u));
    /* 00718500: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00718504: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00718508: mov ecx, dword ptr [0xa98478] */ r_ecx = R32((u32)(0xa98478u));
    /* 0071850e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718510: je 0x71854d */ if (fZ) goto L_0071854d;
L_00718512:; BB(0x00718512);
    /* 00718512: test ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718518: je 0x71852a */ if (fZ) goto L_0071852a;
L_0071851a:; BB(0x0071851a);
    /* 0071851a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071851b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071851c: call 0x73b858 */ r_esp -= 4; W32(r_esp, 0x718521u); f_0073b858();
    /* 00718521: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00718524: mov ecx, dword ptr [0xa98478] */ r_ecx = R32((u32)(0xa98478u));
L_0071852a:; BB(0x0071852a);
    /* 0071852a: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00718530: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00718531: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00718532: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00718533: call 0x718b74 */ r_esp -= 4; W32(r_esp, 0x718538u); f_00718b74();
    /* 00718538: mov edi, eax */ r_edi = r_eax;
    /* 0071853a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071853c: je 0x71854d */ if (fZ) goto L_0071854d;
L_0071853e:; BB(0x0071853e);
    /* 0071853e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071853f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00718540: mov ecx, edi */ r_ecx = r_edi;
    /* 00718542: call 0x720940 */ r_esp -= 4; W32(r_esp, 0x718547u); f_00720940();
    /* 00718547: mov eax, edi */ r_eax = r_edi;
    /* 00718549: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071854a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071854b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071854c: ret  */ FN_RET(0x007184f8); r_esp += 4; return;
L_0071854d:; BB(0x0071854d);
    /* 0071854d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071854f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00718550: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00718551: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00718552: ret  */ FN_RET(0x007184f8); r_esp += 4; return;
}

void f_00718554(void) /* sub_718554 */
{
    FN_ENTER(0x00718554);
    /* 00718554: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00718555: mov ebp, esp */ r_ebp = r_esp;
    /* 00718557: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00718559: push 0x8f09ae */ { u32 v = 0x8f09aeu; r_esp -= 4; W32(r_esp, v); }
    /* 0071855e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00718564: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00718565: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071856c: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071856f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00718572: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00718575: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00718578: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0071857b: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718580: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00718583: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718585: je 0x7187b9 */ if (fZ) goto L_007187b9;
L_0071858b:; BB(0x0071858b);
    /* 0071858b: movzx ebx, word ptr [ebp + 8] */ r_ebx = (u32)R16((u32)(r_ebp+0x8u));
    /* 0071858f: mov ecx, eax */ r_ecx = r_eax;
    /* 00718591: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00718594: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 00718597: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00718598: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00718599: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071859a: call 0x716204 */ r_esp -= 4; W32(r_esp, 0x71859fu); f_00716204();
    /* 0071859f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 007185a2: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007185a4: jne 0x7185df */ if (!fZ) goto L_007185df;
L_007185a6:; BB(0x007185a6);
    /* 007185a6: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_007185a8:; BB(0x007185a8);
    /* 007185a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007185ab: mov ebx, dword ptr [eax + edi*4 + 0x90] */ r_ebx = R32((u32)(r_eax+r_edi*4+0x90u));
    /* 007185b2: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 007185b5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007185b7: je 0x7185d7 */ if (fZ) goto L_007185d7;
L_007185b9:; BB(0x007185b9);
    /* 007185b9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007185bb: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x7185c0u); f_008173b4();
    /* 007185c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007185c2: je 0x7185d7 */ if (fZ) goto L_007185d7;
L_007185c4:; BB(0x007185c4);
    /* 007185c4: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 007185c8: movzx eax, word ptr [ebx + 0x8a] */ r_eax = (u32)R16((u32)(r_ebx+0x8au));
    /* 007185cf: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007185d1: je 0x718783 */ if (fZ) goto L_00718783;
L_007185d7:; BB(0x007185d7);
    /* 007185d7: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007185da: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007185dd: jb 0x7185a8 */ if (fC) goto L_007185a8;
L_007185df:; BB(0x007185df);
    /* 007185df: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007185e2: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 007185e8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007185ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007185ec: je 0x718620 */ if (fZ) goto L_00718620;
L_007185ee:; BB(0x007185ee);
    /* 007185ee: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007185f4: mov esi, 1 */ r_esi = 0x1u;
    /* 007185f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007185fb: je 0x718620 */ if (fZ) goto L_00718620;
L_007185fd:; BB(0x007185fd);
    /* 007185fd: mov edx, dword ptr [eax + 0x98] */ r_edx = R32((u32)(r_eax+0x98u));
    /* 00718603: mov esi, 2 */ r_esi = 0x2u;
    /* 00718608: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071860a: je 0x718620 */ if (fZ) goto L_00718620;
L_0071860c:; BB(0x0071860c);
    /* 0071860c: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 00718612: mov esi, 3 */ r_esi = 0x3u;
    /* 00718617: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718619: je 0x718620 */ if (fZ) goto L_00718620;
L_0071861b:; BB(0x0071861b);
    /* 0071861b: mov esi, 4 */ r_esi = 0x4u;
L_00718620:; BB(0x00718620);
    /* 00718620: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00718623: jb 0x7186cf */ if (fC) goto L_007186cf;
L_00718629:; BB(0x00718629);
    /* 00718629: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071862f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x718634u); f_0068d5a8();
    /* 00718634: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00718637: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071863a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071863c: je 0x7187af */ if (fZ) goto L_007187af;
L_00718642:; BB(0x00718642);
    /* 00718642: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00718646: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00718649: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0071864c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071864d: mov esi, 4 */ r_esi = 0x4u;
    /* 00718652: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00718653: call 0x7161b8 */ r_esp -= 4; W32(r_esp, 0x718658u); f_007161b8();
    /* 00718658: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 0071865b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0071865d:; BB(0x0071865d);
    /* 0071865d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00718660: mov eax, dword ptr [eax + ebx*4 + 0x90] */ r_eax = R32((u32)(r_eax+r_ebx*4+0x90u));
    /* 00718667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718669: je 0x7186be */ if (fZ) goto L_007186be;
L_0071866b:; BB(0x0071866b);
    /* 0071866b: movzx eax, word ptr [eax + 0x8a] */ r_eax = (u32)R16((u32)(r_eax+0x8au));
    /* 00718672: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718677: je 0x7187a4 */ if (fZ) goto L_007187a4;
L_0071867d:; BB(0x0071867d);
    /* 0071867d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071867e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x718683u); f_007b4d18();
    /* 00718683: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00718684: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718686: je 0x718799 */ if (fZ) goto L_00718799;
L_0071868c:; BB(0x0071868c);
    /* 0071868c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071868f: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 00718692: fsub dword ptr [eax + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x38u));
    /* 00718695: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00718697: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 0071869a: fsub dword ptr [eax + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x3cu));
    /* 0071869d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0071869f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007186a1: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 007186a4: fsub dword ptr [eax + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x40u));
    /* 007186a7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007186a9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_007186ab:; BB(0x007186ab);
    /* 007186ab: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 007186ae: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007186b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007186b2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007186b3: ja 0x8f09a7 */ if ((!fC&&!fZ)) goto L_008f09a7;
L_007186b9:; BB(0x007186b9);
    /* 007186b9: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 007186bc: mov esi, ebx */ r_esi = r_ebx;
L_007186be:; BB(0x007186be);
    /* 007186be: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007186c1: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007186c4: jl 0x71865d */ if ((fS!=fO)) goto L_0071865d;
L_007186c6:; BB(0x007186c6);
    /* 007186c6: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007186c9: jae 0x71874e */ if (!fC) goto L_0071874e;
L_007186cf:; BB(0x007186cf);
    /* 007186cf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007186d2: mov ecx, dword ptr [edx + esi*4 + 0x90] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x90u));
    /* 007186d9: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 007186dc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007186df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007186e1: je 0x7186e8 */ if (fZ) goto L_007186e8;
L_007186e3:; BB(0x007186e3);
    /* 007186e3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7186e8u); f_007127b0();
L_007186e8:; BB(0x007186e8);
    /* 007186e8: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 007186ef: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 007186f4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7186f9u); f_005caba4();
    /* 007186f9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007186fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007186ff: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00718702: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718704: je 0x718792 */ if (fZ) goto L_00718792;
L_0071870a:; BB(0x0071870a);
    /* 0071870a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00718711: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00718718: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071871b: push dword ptr [ebp - 0x38] */ { u32 v = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071871e: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00718721: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00718725: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00718728: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00718729: call 0x71dc84 */ r_esp -= 4; W32(r_esp, 0x71872eu); f_0071dc84();
    /* 0071872e: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00718735:; BB(0x00718735);
    /* 00718735: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00718738: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0071873b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0071873e: mov dword ptr [edx + ecx*2 + 0x90], eax */ W32((u32)(r_edx+r_ecx*2+0x90u), r_eax);
    /* 00718745: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0071874c: jmp 0x718753 */ goto L_00718753;
L_0071874e:; BB(0x0071874e);
    /* 0071874e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00718750: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00718753:; BB(0x00718753);
    /* 00718753: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00718756: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718758: je 0x7187b9 */ if (fZ) goto L_007187b9;
L_0071875a:; BB(0x0071875a);
    /* 0071875a: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0071875d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00718760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00718761: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00718764: call 0x720b34 */ r_esp -= 4; W32(r_esp, 0x718769u); f_00720b34();
    /* 00718769: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0071876c: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0071876f: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00718772: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00718775: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00718778: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071877f: mov esp, ebp */ r_esp = r_ebp;
    /* 00718781: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00718782: ret  */ FN_RET(0x00718554); r_esp += 4; return;
L_00718783:; BB(0x00718783);
    /* 00718783: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00718786: mov edx, dword ptr [eax + esi*2 + 0x90] */ r_edx = R32((u32)(r_eax+r_esi*2+0x90u));
    /* 0071878d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00718790: jmp 0x718753 */ goto L_00718753;
L_00718792:; BB(0x00718792);
    /* 00718792: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00718794: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00718797: jmp 0x718735 */ goto L_00718735;
L_00718799:; BB(0x00718799);
    /* 00718799: fld dword ptr [0x96fe40] */ FPUSH(R_F32((u32)(0x96fe40u)));
    /* 0071879f: jmp 0x7186ab */ goto L_007186ab;
L_007187a4:; BB(0x007187a4);
    /* 007187a4: fld dword ptr [0x96fe40] */ FPUSH(R_F32((u32)(0x96fe40u)));
    /* 007187aa: jmp 0x7186ab */ goto L_007186ab;
L_007187af:; BB(0x007187af);
    /* 007187af: mov esi, 4 */ r_esi = 0x4u;
    /* 007187b4: jmp 0x7186c6 */ goto L_007186c6;
L_007187b9:; BB(0x007187b9);
    /* 007187b9: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 007187bc: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007187bf: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007187c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007187c4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007187c7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007187ce: mov esp, ebp */ r_esp = r_ebp;
    /* 007187d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007187d1: ret  */ FN_RET(0x00718554); r_esp += 4; return;
L_008f09a7:; BB(0x008f09a7);
    /* 008f09a7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008f09a9: jmp 0x7186be */ goto L_007186be;
}

void f_007187d4(void) /* sub_7187D4 */
{
    FN_ENTER(0x007187d4);
    /* 007187d4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007187d7: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 007187dd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007187df: je 0x71883d */ if (fZ) goto L_0071883d;
L_007187e1:; BB(0x007187e1);
    /* 007187e1: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 007187e5: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 007187e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007187ea: mov esi, eax */ r_esi = r_eax;
    /* 007187ec: jmp 0x7187f4 */ goto L_007187f4;
L_007187ee:; BB(0x007187ee);
    /* 007187ee: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
L_007187f4:; BB(0x007187f4);
    /* 007187f4: mov ebx, dword ptr [edx + esi*4 + 0x90] */ r_ebx = R32((u32)(r_edx+r_esi*4+0x90u));
    /* 007187fb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007187fd: je 0x718825 */ if (fZ) goto L_00718825;
L_007187ff:; BB(0x007187ff);
    /* 007187ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00718801: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x718806u); f_008173b4();
    /* 00718806: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718808: je 0x718825 */ if (fZ) goto L_00718825;
L_0071880a:; BB(0x0071880a);
    /* 0071880a: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0071880f: movzx edx, word ptr [ebx + 0x8a] */ r_edx = (u32)R16((u32)(r_ebx+0x8au));
    /* 00718816: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718818: jne 0x718825 */ if (!fZ) goto L_00718825;
L_0071881a:; BB(0x0071881a);
    /* 0071881a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071881c: call 0x720cd4 */ r_esp -= 4; W32(r_esp, 0x718821u); f_00720cd4();
    /* 00718821: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718823: je 0x718846 */ if (fZ) goto L_00718846;
L_00718825:; BB(0x00718825);
    /* 00718825: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00718828: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0071882b: jb 0x7187ee */ if (fC) goto L_007187ee;
L_0071882d:; BB(0x0071882d);
    /* 0071882d: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00718831: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00718834: mov eax, 1 */ r_eax = 0x1u;
    /* 00718839: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071883c: ret  */ FN_RET(0x007187d4); r_esp += 4; return;
L_0071883d:; BB(0x0071883d);
    /* 0071883d: mov eax, 1 */ r_eax = 0x1u;
    /* 00718842: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00718845: ret  */ FN_RET(0x007187d4); r_esp += 4; return;
L_00718846:; BB(0x00718846);
    /* 00718846: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0071884a: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0071884d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071884f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00718852: ret  */ FN_RET(0x007187d4); r_esp += 4; return;
}

void f_00718854(void) /* sub_718854 */
{
    FN_ENTER(0x00718854);
    /* 00718854: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00718857: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 0071885d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071885f: je 0x7188b4 */ if (fZ) goto L_007188b4;
L_00718861:; BB(0x00718861);
    /* 00718861: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00718865: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00718868: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071886a: mov esi, eax */ r_esi = r_eax;
    /* 0071886c: jmp 0x718874 */ goto L_00718874;
L_0071886e:; BB(0x0071886e);
    /* 0071886e: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
L_00718874:; BB(0x00718874);
    /* 00718874: mov ebx, dword ptr [edx + esi*4 + 0x90] */ r_ebx = R32((u32)(r_edx+r_esi*4+0x90u));
    /* 0071887b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071887d: je 0x7188a1 */ if (fZ) goto L_007188a1;
L_0071887f:; BB(0x0071887f);
    /* 0071887f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00718881: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x718886u); f_008173b4();
    /* 00718886: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718888: je 0x7188a1 */ if (fZ) goto L_007188a1;
L_0071888a:; BB(0x0071888a);
    /* 0071888a: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0071888f: movzx edx, word ptr [ebx + 0x8a] */ r_edx = (u32)R16((u32)(r_ebx+0x8au));
    /* 00718896: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718898: jne 0x7188a1 */ if (!fZ) goto L_007188a1;
L_0071889a:; BB(0x0071889a);
    /* 0071889a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071889c: call 0x720cf0 */ r_esp -= 4; W32(r_esp, 0x7188a1u); f_00720cf0();
L_007188a1:; BB(0x007188a1);
    /* 007188a1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007188a4: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007188a7: jb 0x71886e */ if (fC) goto L_0071886e;
L_007188a9:; BB(0x007188a9);
    /* 007188a9: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 007188ad: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 007188b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007188b3: ret  */ FN_RET(0x00718854); r_esp += 4; return;
L_007188b4:; BB(0x007188b4);
    /* 007188b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007188b7: ret  */ FN_RET(0x00718854); r_esp += 4; return;
}

void f_007188b8(void) /* sub_7188B8 */
{
    FN_ENTER(0x007188b8);
    /* 007188b8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007188bb: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 007188c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007188c3: je 0x718918 */ if (fZ) goto L_00718918;
L_007188c5:; BB(0x007188c5);
    /* 007188c5: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 007188c9: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 007188cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007188ce: mov esi, eax */ r_esi = r_eax;
    /* 007188d0: jmp 0x7188d8 */ goto L_007188d8;
L_007188d2:; BB(0x007188d2);
    /* 007188d2: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
L_007188d8:; BB(0x007188d8);
    /* 007188d8: mov ebx, dword ptr [edx + esi*4 + 0x90] */ r_ebx = R32((u32)(r_edx+r_esi*4+0x90u));
    /* 007188df: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007188e1: je 0x718905 */ if (fZ) goto L_00718905;
L_007188e3:; BB(0x007188e3);
    /* 007188e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007188e5: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x7188eau); f_008173b4();
    /* 007188ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007188ec: je 0x718905 */ if (fZ) goto L_00718905;
L_007188ee:; BB(0x007188ee);
    /* 007188ee: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 007188f3: movzx edx, word ptr [ebx + 0x8a] */ r_edx = (u32)R16((u32)(r_ebx+0x8au));
    /* 007188fa: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007188fc: jne 0x718905 */ if (!fZ) goto L_00718905;
L_007188fe:; BB(0x007188fe);
    /* 007188fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00718900: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x718905u); f_007127b0();
L_00718905:; BB(0x00718905);
    /* 00718905: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00718908: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0071890b: jb 0x7188d2 */ if (fC) goto L_007188d2;
L_0071890d:; BB(0x0071890d);
    /* 0071890d: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00718911: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00718914: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00718917: ret  */ FN_RET(0x007188b8); r_esp += 4; return;
L_00718918:; BB(0x00718918);
    /* 00718918: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071891b: ret  */ FN_RET(0x007188b8); r_esp += 4; return;
}

void f_0071891c(void) /* sub_71891C */
{
    FN_ENTER(0x0071891c);
    /* 0071891c: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718921: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718923: je 0x71892a */ if (fZ) goto L_0071892a;
L_00718925:; BB(0x00718925);
    /* 00718925: movzx eax, word ptr [eax + 0x28] */ r_eax = (u32)R16((u32)(r_eax+0x28u));
    /* 00718929: ret  */ FN_RET(0x0071891c); r_esp += 4; return;
L_0071892a:; BB(0x0071892a);
    /* 0071892a: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0071892f: ret  */ FN_RET(0x0071891c); r_esp += 4; return;
}

void f_00718930(void) /* sub_718930 */
{
    FN_ENTER(0x00718930);
    /* 00718930: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00718936: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718938: je 0x718944 */ if (fZ) goto L_00718944;
L_0071893a:; BB(0x0071893a);
    /* 0071893a: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 0071893f: mov word ptr [edx + 0x28], ax */ W16((u32)(r_edx+0x28u), (u16)r_eax);
    /* 00718943: ret  */ FN_RET(0x00718930); r_esp += 4; return;
L_00718944:; BB(0x00718944);
    /* 00718944: ret  */ FN_RET(0x00718930); r_esp += 4; return;
}

void f_00718948(void) /* sub_718948 */
{
    FN_ENTER(0x00718948);
    /* 00718948: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00718949: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071894a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071894b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071894c: sub esp, 0x208 */ {  u32 a = r_esp; u32 b = 0x208u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00718952: mov ebx, dword ptr [esp + 0x220] */ r_ebx = R32((u32)(r_esp+0x220u));
    /* 00718959: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 0071895e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718960: je 0x718b37 */ if (fZ) goto L_00718b37;
L_00718966:; BB(0x00718966);
    /* 00718966: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00718969: mov edx, ebx */ r_edx = r_ebx;
    /* 0071896b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071896d: je 0x71898d */ if (fZ) goto L_0071898d;
L_0071896f:; BB(0x0071896f);
    /* 0071896f: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
L_00718972:; BB(0x00718972);
    /* 00718972: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718975: jne 0x71897f */ if (!fZ) goto L_0071897f;
L_00718977:; BB(0x00718977);
    /* 00718977: mov eax, 0x20 */ r_eax = 0x20u;
    /* 0071897c: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
L_0071897f:; BB(0x0071897f);
    /* 0071897f: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 00718983: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00718986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718988: jne 0x718972 */ if (!fZ) goto L_00718972;
L_0071898a:; BB(0x0071898a);
    /* 0071898a: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
L_0071898d:; BB(0x0071898d);
    /* 0071898d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071898f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00718991: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718993: je 0x718b6b */ if (fZ) goto L_00718b6b;
L_00718999:; BB(0x00718999);
    /* 00718999: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
L_0071899c:; BB(0x0071899c);
    /* 0071899c: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071899f: je 0x718b5d */ if (fZ) goto L_00718b5d;
L_007189a5:; BB(0x007189a5);
    /* 007189a5: mov edx, eax */ r_edx = r_eax;
    /* 007189a7: movzx eax, word ptr [ecx + 2] */ r_eax = (u32)R16((u32)(r_ecx+0x2u));
    /* 007189ab: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007189ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007189b0: jne 0x71899c */ if (!fZ) goto L_0071899c;
L_007189b2:; BB(0x007189b2);
    /* 007189b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007189b4: je 0x7189b8 */ if (fZ) goto L_007189b8;
L_007189b6:; BB(0x007189b6);
    /* 007189b6: mov ebx, ecx */ r_ebx = r_ecx;
L_007189b8:; BB(0x007189b8);
    /* 007189b8: mov eax, dword ptr [esp + 0x21c] */ r_eax = R32((u32)(r_esp+0x21cu));
    /* 007189bf: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 007189c2: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_007189c4:; BB(0x007189c4);
    /* 007189c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007189c5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7189cau); f_0068d5a8();
    /* 007189ca: mov esi, eax */ r_esi = r_eax;
    /* 007189cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007189cf: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007189d1: je 0x7189db */ if (fZ) goto L_007189db;
L_007189d3:; BB(0x007189d3);
    /* 007189d3: cmp edi, dword ptr [esi + 0xeb4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0xeb4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007189d9: je 0x7189ee */ if (fZ) goto L_007189ee;
L_007189db:; BB(0x007189db);
    /* 007189db: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007189de: cmp ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007189e1: jl 0x7189c4 */ if ((fS!=fO)) goto L_007189c4;
L_007189e3:; BB(0x007189e3);
    /* 007189e3: add esp, 0x208 */ {  u32 a = r_esp; u32 b = 0x208u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007189e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007189ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007189eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007189ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007189ed: ret  */ FN_RET(0x00718948); r_esp += 4; return;
L_007189ee:; BB(0x007189ee);
    /* 007189ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007189ef: movzx ebp, bp */ r_ebp = (u32)(u16)r_ebp;
    /* 007189f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007189f3: call 0x616a2c */ r_esp -= 4; W32(r_esp, 0x7189f8u); f_00616a2c();
    /* 007189f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007189fb: call 0x482a98 */ r_esp -= 4; W32(r_esp, 0x718a00u); f_00482a98();
    /* 00718a00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718a02: jne 0x718a43 */ if (!fZ) goto L_00718a43;
L_00718a04:; BB(0x00718a04);
    /* 00718a04: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00718a0a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718a0c: je 0x718a80 */ if (fZ) goto L_00718a80;
L_00718a0e:; BB(0x00718a0e);
    /* 00718a0e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00718a0f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00718a10: call 0x73b858 */ r_esp -= 4; W32(r_esp, 0x718a15u); f_0073b858();
    /* 00718a15: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00718a18: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00718a1e: mov ecx, dword ptr [0xa98478] */ r_ecx = R32((u32)(0xa98478u));
    /* 00718a24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00718a25: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 00718a2a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00718a2b: call 0x718b74 */ r_esp -= 4; W32(r_esp, 0x718a30u); f_00718b74();
    /* 00718a30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718a32: je 0x718a80 */ if (fZ) goto L_00718a80;
L_00718a34:; BB(0x00718a34);
    /* 00718a34: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 00718a39: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00718a3a: mov ecx, eax */ r_ecx = r_eax;
    /* 00718a3c: call 0x720940 */ r_esp -= 4; W32(r_esp, 0x718a41u); f_00720940();
    /* 00718a41: jmp 0x718a80 */ goto L_00718a80;
L_00718a43:; BB(0x00718a43);
    /* 00718a43: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00718a49: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718a4b: je 0x718a80 */ if (fZ) goto L_00718a80;
L_00718a4d:; BB(0x00718a4d);
    /* 00718a4d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00718a4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00718a4f: call 0x73b858 */ r_esp -= 4; W32(r_esp, 0x718a54u); f_0073b858();
    /* 00718a54: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00718a57: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00718a5d: mov ecx, dword ptr [0xa98478] */ r_ecx = R32((u32)(0xa98478u));
    /* 00718a63: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00718a64: push 0x1cb */ { u32 v = 0x1cbu; r_esp -= 4; W32(r_esp, v); }
    /* 00718a69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00718a6a: call 0x718b74 */ r_esp -= 4; W32(r_esp, 0x718a6fu); f_00718b74();
    /* 00718a6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718a71: je 0x718a80 */ if (fZ) goto L_00718a80;
L_00718a73:; BB(0x00718a73);
    /* 00718a73: push 0x1cb */ { u32 v = 0x1cbu; r_esp -= 4; W32(r_esp, v); }
    /* 00718a78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00718a79: mov ecx, eax */ r_ecx = r_eax;
    /* 00718a7b: call 0x720940 */ r_esp -= 4; W32(r_esp, 0x718a80u); f_00720940();
L_00718a80:; BB(0x00718a80);
    /* 00718a80: mov ecx, esi */ r_ecx = r_esi;
    /* 00718a82: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x718a87u); f_006936b4();
    /* 00718a87: mov edi, eax */ r_edi = r_eax;
    /* 00718a89: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00718a8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00718a8e: call 0x859d2d */ r_esp -= 4; W32(r_esp, 0x718a93u); f_00859d2d();
    /* 00718a93: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00718a97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00718a98: call 0x85a27d */ r_esp -= 4; W32(r_esp, 0x718a9du); f_0085a27d();
    /* 00718a9d: lea ebp, [esp + 0x10] */ r_ebp = (u32)(r_esp+0x10u);
    /* 00718aa1: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00718aa4: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00718aa7: add ecx, 0x76c */ {  u32 a = r_ecx; u32 b = 0x76cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00718aad: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00718ab0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00718ab4: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00718ab7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00718ab8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00718ab9: push 0x96fea0 */ { u32 v = 0x96fea0u; r_esp -= 4; W32(r_esp, v); }
    /* 00718abe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00718abf: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x718ac4u); f_00858bf5();
    /* 00718ac4: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00718ac8: push 0x92b680 */ { u32 v = 0x92b680u; r_esp -= 4; W32(r_esp, v); }
    /* 00718acd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00718ace: mov esi, 1 */ r_esi = 0x1u;
    /* 00718ad3: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x718ad8u); f_0085957c();
    /* 00718ad8: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00718adb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718add: je 0x718ae8 */ if (fZ) goto L_00718ae8;
L_00718adf:; BB(0x00718adf);
    /* 00718adf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00718ae0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00718ae2: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x718ae7u); f_00859710();
    /* 00718ae7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00718ae8:; BB(0x00718ae8);
    /* 00718ae8: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00718aec: push 0x96f144 */ { u32 v = 0x96f144u; r_esp -= 4; W32(r_esp, v); }
    /* 00718af1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00718af2: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x718af7u); f_0085957c();
    /* 00718af7: mov ebp, eax */ r_ebp = r_eax;
    /* 00718af9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00718afc: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718afe: je 0x718b37 */ if (fZ) goto L_00718b37;
L_00718b00:; BB(0x00718b00);
    /* 00718b00: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718b03: je 0x718b42 */ if (fZ) goto L_00718b42;
L_00718b05:; BB(0x00718b05);
    /* 00718b05: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00718b08: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00718b0b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00718b0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00718b0d: mov edx, dword ptr [esp + 0x224] */ r_edx = R32((u32)(r_esp+0x224u));
    /* 00718b14: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00718b17: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00718b1b: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 00718b1d: push dword ptr [ecx + 4] */ { u32 v = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00718b20: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00718b23: push 0x96febc */ { u32 v = 0x96febcu; r_esp -= 4; W32(r_esp, v); }
    /* 00718b28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00718b29: call 0x85a3fd */ r_esp -= 4; W32(r_esp, 0x718b2eu); f_0085a3fd();
    /* 00718b2e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00718b2f: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x718b34u); f_00859710();
    /* 00718b34: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00718b37:; BB(0x00718b37);
    /* 00718b37: add esp, 0x208 */ {  u32 a = r_esp; u32 b = 0x208u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00718b3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00718b3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00718b3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00718b40: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00718b41: ret  */ FN_RET(0x00718948); r_esp += 4; return;
L_00718b42:; BB(0x00718b42);
    /* 00718b42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00718b43: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00718b48: call 0x85a45b */ r_esp -= 4; W32(r_esp, 0x718b4du); f_0085a45b();
    /* 00718b4d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00718b4e: push 0xfe */ { u32 v = 0xfeu; r_esp -= 4; W32(r_esp, v); }
    /* 00718b53: call 0x85a45b */ r_esp -= 4; W32(r_esp, 0x718b58u); f_0085a45b();
    /* 00718b58: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00718b5b: jmp 0x718b05 */ goto L_00718b05;
L_00718b5d:; BB(0x00718b5d);
    /* 00718b5d: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718b60: je 0x7189b2 */ if (fZ) goto L_007189b2;
L_00718b66:; BB(0x00718b66);
    /* 00718b66: jmp 0x7189a5 */ goto L_007189a5;
L_00718b6b:; BB(0x00718b6b);
    /* 00718b6b: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00718b6e: jmp 0x7189b2 */ goto L_007189b2;
}

void f_00718b74(void) /* sub_718B74 */
{
    FN_ENTER(0x00718b74);
    /* 00718b74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00718b75: mov ebp, esp */ r_ebp = r_esp;
    /* 00718b77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00718b79: push 0x8f09da */ { u32 v = 0x8f09dau; r_esp -= 4; W32(r_esp, v); }
    /* 00718b7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00718b84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00718b85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00718b8c: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00718b8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00718b92: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00718b95: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00718b98: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00718b9b: mov edi, ecx */ r_edi = r_ecx;
    /* 00718b9d: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718ba2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00718ba5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718ba7: je 0x718dd8 */ if (fZ) goto L_00718dd8;
L_00718bad:; BB(0x00718bad);
    /* 00718bad: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00718bb0: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00718bb2: je 0x718bfd */ if (fZ) goto L_00718bfd;
L_00718bb4:; BB(0x00718bb4);
    /* 00718bb4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00718bb6:; BB(0x00718bb6);
    /* 00718bb6: mov ebx, dword ptr [edi + esi*4 + 0x90] */ r_ebx = R32((u32)(r_edi+r_esi*4+0x90u));
    /* 00718bbd: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718bbf: je 0x718bed */ if (fZ) goto L_00718bed;
L_00718bc1:; BB(0x00718bc1);
    /* 00718bc1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00718bc3: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x718bc8u); f_008173b4();
    /* 00718bc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718bca: je 0x718bed */ if (fZ) goto L_00718bed;
L_00718bcc:; BB(0x00718bcc);
    /* 00718bcc: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 00718bd0: movzx eax, word ptr [ebx + 0x8a] */ r_eax = (u32)R16((u32)(r_ebx+0x8au));
    /* 00718bd7: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718bd9: jne 0x718bed */ if (!fZ) goto L_00718bed;
L_00718bdb:; BB(0x00718bdb);
    /* 00718bdb: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00718bde: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00718be0: call 0x720c00 */ r_esp -= 4; W32(r_esp, 0x718be5u); f_00720c00();
    /* 00718be5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718be7: jne 0x718dcd */ if (!fZ) goto L_00718dcd;
L_00718bed:; BB(0x00718bed);
    /* 00718bed: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00718bf0: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00718bf3: jb 0x718bb6 */ if (fC) goto L_00718bb6;
L_00718bf5:; BB(0x00718bf5);
    /* 00718bf5: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718bfa: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00718bfd:; BB(0x00718bfd);
    /* 00718bfd: movzx ebx, word ptr [ebp + 8] */ r_ebx = (u32)R16((u32)(r_ebp+0x8u));
    /* 00718c01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00718c04: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00718c07: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00718c0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00718c0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00718c0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00718c0d: call 0x716204 */ r_esp -= 4; W32(r_esp, 0x718c12u); f_00716204();
    /* 00718c12: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00718c15: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00718c17: jne 0x718c53 */ if (!fZ) goto L_00718c53;
L_00718c19:; BB(0x00718c19);
    /* 00718c19: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00718c1b:; BB(0x00718c1b);
    /* 00718c1b: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 00718c1e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00718c20: add esi, dword ptr [ebp - 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00718c23: mov ebx, dword ptr [esi + 0x90] */ r_ebx = R32((u32)(r_esi+0x90u));
    /* 00718c29: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718c2b: je 0x718c4b */ if (fZ) goto L_00718c4b;
L_00718c2d:; BB(0x00718c2d);
    /* 00718c2d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00718c2f: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x718c34u); f_008173b4();
    /* 00718c34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718c36: je 0x718c4b */ if (fZ) goto L_00718c4b;
L_00718c38:; BB(0x00718c38);
    /* 00718c38: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 00718c3c: movzx eax, word ptr [ebx + 0x8a] */ r_eax = (u32)R16((u32)(r_ebx+0x8au));
    /* 00718c43: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00718c45: je 0x718df3 */ if (fZ) goto L_00718df3;
L_00718c4b:; BB(0x00718c4b);
    /* 00718c4b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00718c4e: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00718c51: jb 0x718c1b */ if (fC) goto L_00718c1b;
L_00718c53:; BB(0x00718c53);
    /* 00718c53: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00718c56: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 00718c5c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00718c5e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718c60: je 0x718c94 */ if (fZ) goto L_00718c94;
L_00718c62:; BB(0x00718c62);
    /* 00718c62: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 00718c68: mov edi, 1 */ r_edi = 0x1u;
    /* 00718c6d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718c6f: je 0x718c94 */ if (fZ) goto L_00718c94;
L_00718c71:; BB(0x00718c71);
    /* 00718c71: mov edx, dword ptr [eax + 0x98] */ r_edx = R32((u32)(r_eax+0x98u));
    /* 00718c77: mov edi, 2 */ r_edi = 0x2u;
    /* 00718c7c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718c7e: je 0x718c94 */ if (fZ) goto L_00718c94;
L_00718c80:; BB(0x00718c80);
    /* 00718c80: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 00718c86: mov edi, 3 */ r_edi = 0x3u;
    /* 00718c8b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718c8d: je 0x718c94 */ if (fZ) goto L_00718c94;
L_00718c8f:; BB(0x00718c8f);
    /* 00718c8f: mov edi, 4 */ r_edi = 0x4u;
L_00718c94:; BB(0x00718c94);
    /* 00718c94: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00718c97: jb 0x718d39 */ if (fC) goto L_00718d39;
L_00718c9d:; BB(0x00718c9d);
    /* 00718c9d: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00718ca3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x718ca8u); f_0068d5a8();
    /* 00718ca8: mov esi, eax */ r_esi = r_eax;
    /* 00718caa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00718cad: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718caf: je 0x718e1b */ if (fZ) goto L_00718e1b;
L_00718cb5:; BB(0x00718cb5);
    /* 00718cb5: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 00718cb9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00718cbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00718cbd: mov edi, 4 */ r_edi = 0x4u;
    /* 00718cc2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00718cc3: call 0x7161b8 */ r_esp -= 4; W32(r_esp, 0x718cc8u); f_007161b8();
    /* 00718cc8: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 00718ccb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00718ccd:; BB(0x00718ccd);
    /* 00718ccd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00718cd0: mov edx, dword ptr [edx + ebx*4 + 0x90] */ r_edx = R32((u32)(r_edx+r_ebx*4+0x90u));
    /* 00718cd7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718cd9: je 0x718d2c */ if (fZ) goto L_00718d2c;
L_00718cdb:; BB(0x00718cdb);
    /* 00718cdb: movzx edx, word ptr [edx + 0x8a] */ r_edx = (u32)R16((u32)(r_edx+0x8au));
    /* 00718ce2: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718ce8: je 0x718e10 */ if (fZ) goto L_00718e10;
L_00718cee:; BB(0x00718cee);
    /* 00718cee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00718cef: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x718cf4u); f_007b4d18();
    /* 00718cf4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00718cf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718cf7: je 0x718e05 */ if (fZ) goto L_00718e05;
L_00718cfd:; BB(0x00718cfd);
    /* 00718cfd: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00718d00: fsub dword ptr [eax + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x38u));
    /* 00718d03: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00718d05: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00718d08: fsub dword ptr [eax + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x3cu));
    /* 00718d0b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00718d0d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00718d0f: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 00718d12: fsub dword ptr [eax + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x40u));
    /* 00718d15: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00718d17: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00718d19:; BB(0x00718d19);
    /* 00718d19: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 00718d1c: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00718d1e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00718d20: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00718d21: ja 0x8f09d3 */ if ((!fC&&!fZ)) goto L_008f09d3;
L_00718d27:; BB(0x00718d27);
    /* 00718d27: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 00718d2a: mov edi, ebx */ r_edi = r_ebx;
L_00718d2c:; BB(0x00718d2c);
    /* 00718d2c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00718d2f: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00718d32: jl 0x718ccd */ if ((fS!=fO)) goto L_00718ccd;
L_00718d34:; BB(0x00718d34);
    /* 00718d34: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00718d37: jae 0x718daf */ if (!fC) goto L_00718daf;
L_00718d39:; BB(0x00718d39);
    /* 00718d39: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00718d3c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00718d3e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00718d40: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00718d42: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00718d48: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718d4a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00718d4d: je 0x718d54 */ if (fZ) goto L_00718d54;
L_00718d4f:; BB(0x00718d4f);
    /* 00718d4f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x718d54u); f_007127b0();
L_00718d54:; BB(0x00718d54);
    /* 00718d54: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00718d5b: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00718d60: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x718d65u); f_005caba4();
    /* 00718d65: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00718d68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00718d6b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00718d6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718d70: je 0x718dfe */ if (fZ) goto L_00718dfe;
L_00718d76:; BB(0x00718d76);
    /* 00718d76: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00718d7d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00718d84: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00718d87: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00718d8a: push dword ptr [ebp - 0x38] */ { u32 v = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00718d8d: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00718d91: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00718d94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00718d95: call 0x71dc84 */ r_esp -= 4; W32(r_esp, 0x718d9au); f_0071dc84();
    /* 00718d9a: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00718da1:; BB(0x00718da1);
    /* 00718da1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00718da4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00718da7: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 00718dad: jmp 0x718db4 */ goto L_00718db4;
L_00718daf:; BB(0x00718daf);
    /* 00718daf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718db1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00718db4:; BB(0x00718db4);
    /* 00718db4: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00718db7: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00718dba: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00718dbd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00718dc0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00718dc7: mov esp, ebp */ r_esp = r_ebp;
    /* 00718dc9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00718dca: ret 0x10 */ FN_RET(0x00718b74); r_esp += 20; return;
L_00718dcd:; BB(0x00718dcd);
    /* 00718dcd: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00718dd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00718dd1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00718dd3: call 0x720c38 */ r_esp -= 4; W32(r_esp, 0x718dd8u); f_00720c38();
L_00718dd8:; BB(0x00718dd8);
    /* 00718dd8: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00718ddb: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00718dde: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00718de1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718de3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00718de6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00718ded: mov esp, ebp */ r_esp = r_ebp;
    /* 00718def: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00718df0: ret 0x10 */ FN_RET(0x00718b74); r_esp += 20; return;
L_00718df3:; BB(0x00718df3);
    /* 00718df3: mov eax, dword ptr [esi + 0x90] */ r_eax = R32((u32)(r_esi+0x90u));
    /* 00718df9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00718dfc: jmp 0x718db4 */ goto L_00718db4;
L_00718dfe:; BB(0x00718dfe);
    /* 00718dfe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718e00: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00718e03: jmp 0x718da1 */ goto L_00718da1;
L_00718e05:; BB(0x00718e05);
    /* 00718e05: fld dword ptr [0x96fe3c] */ FPUSH(R_F32((u32)(0x96fe3cu)));
    /* 00718e0b: jmp 0x718d19 */ goto L_00718d19;
L_00718e10:; BB(0x00718e10);
    /* 00718e10: fld dword ptr [0x96fe3c] */ FPUSH(R_F32((u32)(0x96fe3cu)));
    /* 00718e16: jmp 0x718d19 */ goto L_00718d19;
L_00718e1b:; BB(0x00718e1b);
    /* 00718e1b: mov edi, 4 */ r_edi = 0x4u;
    /* 00718e20: jmp 0x718d34 */ goto L_00718d34;
L_008f09d3:; BB(0x008f09d3);
    /* 008f09d3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008f09d5: jmp 0x718d2c */ goto L_00718d2c;
}

void f_00718e28(void) /* sub_718E28 */
{
    FN_ENTER(0x00718e28);
    /* 00718e28: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00718e2c: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718e31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718e33: je 0x718e54 */ if (fZ) goto L_00718e54;
L_00718e35:; BB(0x00718e35);
    /* 00718e35: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00718e37: jl 0x718e50 */ if ((fS!=fO)) goto L_00718e50;
L_00718e39:; BB(0x00718e39);
    /* 00718e39: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00718e3c: jl 0x718e42 */ if ((fS!=fO)) goto L_00718e42;
L_00718e3e:; BB(0x00718e3e);
    /* 00718e3e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718e40: jmp 0x718e46 */ goto L_00718e46;
L_00718e42:; BB(0x00718e42);
    /* 00718e42: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_00718e46:; BB(0x00718e46);
    /* 00718e46: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718e48: je 0x718e4f */ if (fZ) goto L_00718e4f;
L_00718e4a:; BB(0x00718e4a);
    /* 00718e4a: call 0x716188 */ r_esp -= 4; W32(r_esp, 0x718e4fu); f_00716188();
L_00718e4f:; BB(0x00718e4f);
    /* 00718e4f: ret  */ FN_RET(0x00718e28); r_esp += 4; return;
L_00718e50:; BB(0x00718e50);
    /* 00718e50: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718e52: jmp 0x718e46 */ goto L_00718e46;
L_00718e54:; BB(0x00718e54);
    /* 00718e54: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718e56: jmp 0x718e46 */ goto L_00718e46;
}

void f_00718e58(void) /* sub_718E58 */
{
    FN_ENTER(0x00718e58);
    /* 00718e58: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00718e5c: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718e61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718e63: je 0x718e84 */ if (fZ) goto L_00718e84;
L_00718e65:; BB(0x00718e65);
    /* 00718e65: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00718e67: jl 0x718e80 */ if ((fS!=fO)) goto L_00718e80;
L_00718e69:; BB(0x00718e69);
    /* 00718e69: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00718e6c: jl 0x718e72 */ if ((fS!=fO)) goto L_00718e72;
L_00718e6e:; BB(0x00718e6e);
    /* 00718e6e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718e70: jmp 0x718e76 */ goto L_00718e76;
L_00718e72:; BB(0x00718e72);
    /* 00718e72: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_00718e76:; BB(0x00718e76);
    /* 00718e76: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718e78: je 0x718e7f */ if (fZ) goto L_00718e7f;
L_00718e7a:; BB(0x00718e7a);
    /* 00718e7a: call 0x716198 */ r_esp -= 4; W32(r_esp, 0x718e7fu); f_00716198();
L_00718e7f:; BB(0x00718e7f);
    /* 00718e7f: ret  */ FN_RET(0x00718e58); r_esp += 4; return;
L_00718e80:; BB(0x00718e80);
    /* 00718e80: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718e82: jmp 0x718e76 */ goto L_00718e76;
L_00718e84:; BB(0x00718e84);
    /* 00718e84: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718e86: jmp 0x718e76 */ goto L_00718e76;
}

void f_00718e88(void) /* sub_718E88 */
{
    FN_ENTER(0x00718e88);
    /* 00718e88: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718e8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718e8f: je 0x718eac */ if (fZ) goto L_00718eac;
L_00718e91:; BB(0x00718e91);
    /* 00718e91: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00718e94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718e96: je 0x718eac */ if (fZ) goto L_00718eac;
L_00718e98:; BB(0x00718e98);
    /* 00718e98: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 00718e9e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00718ea1: jne 0x718ea9 */ if (!fZ) goto L_00718ea9;
L_00718ea3:; BB(0x00718ea3);
    /* 00718ea3: mov eax, 1 */ r_eax = 0x1u;
    /* 00718ea8: ret  */ FN_RET(0x00718e88); r_esp += 4; return;
L_00718ea9:; BB(0x00718ea9);
    /* 00718ea9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718eab: ret  */ FN_RET(0x00718e88); r_esp += 4; return;
L_00718eac:; BB(0x00718eac);
    /* 00718eac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718eae: ret  */ FN_RET(0x00718e88); r_esp += 4; return;
}

void f_00718eb0(void) /* sub_718EB0 */
{
    FN_ENTER(0x00718eb0);
    /* 00718eb0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00718eb4: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718eb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718ebb: je 0x718edf */ if (fZ) goto L_00718edf;
L_00718ebd:; BB(0x00718ebd);
    /* 00718ebd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00718ebf: jl 0x718edb */ if ((fS!=fO)) goto L_00718edb;
L_00718ec1:; BB(0x00718ec1);
    /* 00718ec1: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00718ec4: jl 0x718eca */ if ((fS!=fO)) goto L_00718eca;
L_00718ec6:; BB(0x00718ec6);
    /* 00718ec6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718ec8: jmp 0x718ece */ goto L_00718ece;
L_00718eca:; BB(0x00718eca);
    /* 00718eca: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_00718ece:; BB(0x00718ece);
    /* 00718ece: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718ed0: je 0x718ed8 */ if (fZ) goto L_00718ed8;
L_00718ed2:; BB(0x00718ed2);
    /* 00718ed2: call 0x716078 */ r_esp -= 4; W32(r_esp, 0x718ed7u); f_00716078();
    /* 00718ed7: ret  */ FN_RET(0x00718eb0); r_esp += 4; return;
L_00718ed8:; BB(0x00718ed8);
    /* 00718ed8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718eda: ret  */ FN_RET(0x00718eb0); r_esp += 4; return;
L_00718edb:; BB(0x00718edb);
    /* 00718edb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718edd: jmp 0x718ece */ goto L_00718ece;
L_00718edf:; BB(0x00718edf);
    /* 00718edf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718ee1: jmp 0x718ece */ goto L_00718ece;
}

void f_00718ee4(void) /* sub_718EE4 */
{
    FN_ENTER(0x00718ee4);
    /* 00718ee4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00718ee8: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718eed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718eef: je 0x718f13 */ if (fZ) goto L_00718f13;
L_00718ef1:; BB(0x00718ef1);
    /* 00718ef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00718ef3: jl 0x718f0f */ if ((fS!=fO)) goto L_00718f0f;
L_00718ef5:; BB(0x00718ef5);
    /* 00718ef5: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00718ef8: jl 0x718efe */ if ((fS!=fO)) goto L_00718efe;
L_00718efa:; BB(0x00718efa);
    /* 00718efa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718efc: jmp 0x718f02 */ goto L_00718f02;
L_00718efe:; BB(0x00718efe);
    /* 00718efe: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_00718f02:; BB(0x00718f02);
    /* 00718f02: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718f04: je 0x718f0c */ if (fZ) goto L_00718f0c;
L_00718f06:; BB(0x00718f06);
    /* 00718f06: call 0x716064 */ r_esp -= 4; W32(r_esp, 0x718f0bu); f_00716064();
    /* 00718f0b: ret  */ FN_RET(0x00718ee4); r_esp += 4; return;
L_00718f0c:; BB(0x00718f0c);
    /* 00718f0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718f0e: ret  */ FN_RET(0x00718ee4); r_esp += 4; return;
L_00718f0f:; BB(0x00718f0f);
    /* 00718f0f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718f11: jmp 0x718f02 */ goto L_00718f02;
L_00718f13:; BB(0x00718f13);
    /* 00718f13: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00718f15: jmp 0x718f02 */ goto L_00718f02;
}

void f_00718f18(void) /* sub_718F18 */
{
    FN_ENTER(0x00718f18);
    /* 00718f18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00718f19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00718f1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00718f1b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00718f1c: sub esp, 0x344 */ {  u32 a = r_esp; u32 b = 0x344u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00718f22: mov edi, dword ptr [esp + 0x35c] */ r_edi = R32((u32)(r_esp+0x35cu));
    /* 00718f29: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00718f2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718f30: je 0x719089 */ if (fZ) goto L_00719089;
L_00718f36:; BB(0x00718f36);
    /* 00718f36: mov edx, dword ptr [esp + 0x358] */ r_edx = R32((u32)(r_esp+0x358u));
    /* 00718f3d: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 00718f40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718f42: je 0x718f66 */ if (fZ) goto L_00718f66;
L_00718f44:; BB(0x00718f44);
    /* 00718f44: mov eax, dword ptr [esp + 0x358] */ r_eax = R32((u32)(r_esp+0x358u));
    /* 00718f4b: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
L_00718f4e:; BB(0x00718f4e);
    /* 00718f4e: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718f51: jne 0x718f5b */ if (!fZ) goto L_00718f5b;
L_00718f53:; BB(0x00718f53);
    /* 00718f53: mov eax, 0x20 */ r_eax = 0x20u;
    /* 00718f58: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
L_00718f5b:; BB(0x00718f5b);
    /* 00718f5b: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 00718f5f: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00718f62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718f64: jne 0x718f4e */ if (!fZ) goto L_00718f4e;
L_00718f66:; BB(0x00718f66);
    /* 00718f66: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 00718f69: mov edx, edi */ r_edx = r_edi;
    /* 00718f6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718f6d: je 0x718f8d */ if (fZ) goto L_00718f8d;
L_00718f6f:; BB(0x00718f6f);
    /* 00718f6f: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
L_00718f72:; BB(0x00718f72);
    /* 00718f72: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718f75: jne 0x718f7f */ if (!fZ) goto L_00718f7f;
L_00718f77:; BB(0x00718f77);
    /* 00718f77: mov eax, 0x20 */ r_eax = 0x20u;
    /* 00718f7c: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
L_00718f7f:; BB(0x00718f7f);
    /* 00718f7f: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 00718f83: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00718f86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718f88: jne 0x718f72 */ if (!fZ) goto L_00718f72;
L_00718f8a:; BB(0x00718f8a);
    /* 00718f8a: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
L_00718f8d:; BB(0x00718f8d);
    /* 00718f8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00718f8f: jne 0x718fac */ if (!fZ) goto L_00718fac;
L_00718f91:; BB(0x00718f91);
    /* 00718f91: mov eax, dword ptr [esp + 0x358] */ r_eax = R32((u32)(r_esp+0x358u));
    /* 00718f98: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00718f9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00718f9c: push 0x96fef0 */ { u32 v = 0x96fef0u; r_esp -= 4; W32(r_esp, v); }
    /* 00718fa1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00718fa2: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x718fa7u); f_00857e29();
    /* 00718fa7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00718faa: jmp 0x718fc9 */ goto L_00718fc9;
L_00718fac:; BB(0x00718fac);
    /* 00718fac: mov eax, dword ptr [esp + 0x358] */ r_eax = R32((u32)(r_esp+0x358u));
    /* 00718fb3: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00718fb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00718fb7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00718fb8: push 0x96fef8 */ { u32 v = 0x96fef8u; r_esp -= 4; W32(r_esp, v); }
    /* 00718fbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00718fbe: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x718fc3u); f_00857e29();
    /* 00718fc3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00718fc6: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00718fc9:; BB(0x00718fc9);
    /* 00718fc9: mov ecx, dword ptr [0xa98478] */ r_ecx = R32((u32)(0xa98478u));
    /* 00718fcf: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00718fd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00718fd3: call 0x7190b0 */ r_esp -= 4; W32(r_esp, 0x718fd8u); f_007190b0();
    /* 00718fd8: lea eax, [esp + 0x140] */ r_eax = (u32)(r_esp+0x140u);
    /* 00718fdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00718fe0: call 0x859d2d */ r_esp -= 4; W32(r_esp, 0x718fe5u); f_00859d2d();
    /* 00718fe5: lea eax, [esp + 0x144] */ r_eax = (u32)(r_esp+0x144u);
    /* 00718fec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00718fed: call 0x85a27d */ r_esp -= 4; W32(r_esp, 0x718ff2u); f_0085a27d();
    /* 00718ff2: lea ebx, [esp + 0x14c] */ r_ebx = (u32)(r_esp+0x14cu);
    /* 00718ff9: mov esi, eax */ r_esi = r_eax;
    /* 00718ffb: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00718ffe: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 00719001: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00719004: add ecx, 0x76c */ {  u32 a = r_ecx; u32 b = 0x76cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0071900a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0071900d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071900e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0071900f: push 0x96ff0c */ { u32 v = 0x96ff0cu; r_esp -= 4; W32(r_esp, v); }
    /* 00719014: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00719015: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x71901au); f_00858bf5();
    /* 0071901a: lea edx, [esp + 0x160] */ r_edx = (u32)(r_esp+0x160u);
    /* 00719021: push 0x92b680 */ { u32 v = 0x92b680u; r_esp -= 4; W32(r_esp, v); }
    /* 00719026: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00719027: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0071902c: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x719031u); f_0085957c();
    /* 00719031: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00719034: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00719036: je 0x719041 */ if (fZ) goto L_00719041;
L_00719038:; BB(0x00719038);
    /* 00719038: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00719039: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0071903b: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x719040u); f_00859710();
    /* 00719040: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00719041:; BB(0x00719041);
    /* 00719041: lea edx, [esp + 0x144] */ r_edx = (u32)(r_esp+0x144u);
    /* 00719048: push 0x96f144 */ { u32 v = 0x96f144u; r_esp -= 4; W32(r_esp, v); }
    /* 0071904d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071904e: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x719053u); f_0085957c();
    /* 00719053: mov ebx, eax */ r_ebx = r_eax;
    /* 00719055: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00719058: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071905a: je 0x719089 */ if (fZ) goto L_00719089;
L_0071905c:; BB(0x0071905c);
    /* 0071905c: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071905f: je 0x719094 */ if (fZ) goto L_00719094;
L_00719061:; BB(0x00719061);
    /* 00719061: mov edx, dword ptr [esp + 0x358] */ r_edx = R32((u32)(r_esp+0x358u));
    /* 00719068: lea ecx, [edx + 4] */ r_ecx = (u32)(r_edx+0x4u);
    /* 0071906b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0071906c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071906d: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0071906f: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00719072: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00719075: push 0x96ff2c */ { u32 v = 0x96ff2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0071907a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071907b: call 0x85a3fd */ r_esp -= 4; W32(r_esp, 0x719080u); f_0085a3fd();
    /* 00719080: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00719081: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x719086u); f_00859710();
    /* 00719086: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00719089:; BB(0x00719089);
    /* 00719089: add esp, 0x344 */ {  u32 a = r_esp; u32 b = 0x344u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071908f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00719090: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00719091: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00719092: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00719093: ret  */ FN_RET(0x00718f18); r_esp += 4; return;
L_00719094:; BB(0x00719094);
    /* 00719094: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00719095: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071909a: call 0x85a45b */ r_esp -= 4; W32(r_esp, 0x71909fu); f_0085a45b();
    /* 0071909f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007190a0: push 0xfe */ { u32 v = 0xfeu; r_esp -= 4; W32(r_esp, v); }
    /* 007190a5: call 0x85a45b */ r_esp -= 4; W32(r_esp, 0x7190aau); f_0085a45b();
    /* 007190aa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007190ad: jmp 0x719061 */ goto L_00719061;
}

