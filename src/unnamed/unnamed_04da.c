#include "protos.h"

void f_004da01c(void) /* sub_4DA01C */
{
    FN_ENTER(0x004da01c);
    /* 004da01c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004da01d: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 004da021: mov eax, 0x91a2b3c5 */ r_eax = 0x91a2b3c5u;
    /* 004da026: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004da028: mov eax, edi */ r_eax = r_edi;
    /* 004da02a: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004da02d: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004da02f: sar edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004da032: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004da034: mov eax, 0x63 */ r_eax = 0x63u;
    /* 004da039: cmp edx, 0x63 */ {  u32 a = r_edx; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004da03c: jl 0x4da040 */ if ((fS!=fO)) goto L_004da040;
L_004da03e:; BB(0x004da03e);
    /* 004da03e: mov edx, eax */ r_edx = r_eax;
L_004da040:; BB(0x004da040);
    /* 004da040: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004da044: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 004da046: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 004da04b: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004da04d: mov eax, edi */ r_eax = r_edi;
    /* 004da04f: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004da052: mov ecx, edx */ r_ecx = r_edx;
    /* 004da054: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004da056: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004da059: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004da05b: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 004da05e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004da060: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004da063: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004da065: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004da067: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004da069: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004da06b: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004da06d: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 004da072: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004da074: mov eax, ecx */ r_eax = r_ecx;
    /* 004da076: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004da079: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004da07b: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004da07e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004da080: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004da082: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004da084: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004da087: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004da089: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004da08b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004da08d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004da08f: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004da091: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004da095: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004da097: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004da09b: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 004da09d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004da09e: ret  */ FN_RET(0x004da01c); r_esp += 4; return;
}

void f_004da0a0(void) /* sub_4DA0A0 */
{
    FN_ENTER(0x004da0a0);
    /* 004da0a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da0a1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004da0a2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004da0a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004da0a6: mov ebx, eax */ r_ebx = r_eax;
    /* 004da0a8: mov esi, edx */ r_esi = r_edx;
L_004da0aa:; BB(0x004da0aa);
    /* 004da0aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004da0ab: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4da0b0u); f_0068d5a8();
    /* 004da0b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da0b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da0b3: je 0x4da0b8 */ if (fZ) goto L_004da0b8;
L_004da0b5:; BB(0x004da0b5);
    /* 004da0b5: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004da0b8:; BB(0x004da0b8);
    /* 004da0b8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004da0bb: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004da0be: jl 0x4da0aa */ if ((fS!=fO)) goto L_004da0aa;
L_004da0c0:; BB(0x004da0c0);
    /* 004da0c0: mov edx, esi */ r_edx = r_esi;
    /* 004da0c2: mov eax, edx */ r_eax = r_edx;
    /* 004da0c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004da0c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004da0c6: ret  */ FN_RET(0x004da0a0); r_esp += 4; return;
}

void f_004da0c8(void) /* sub_4DA0C8 */
{
    FN_ENTER(0x004da0c8);
    /* 004da0c8: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004da0cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da0cf: je 0x4da0e5 */ if (fZ) goto L_004da0e5;
L_004da0d1:; BB(0x004da0d1);
    /* 004da0d1: mov eax, dword ptr [0xa48c08] */ r_eax = R32((u32)(0xa48c08u));
    /* 004da0d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da0d8: jne 0x4da0e5 */ if (!fZ) goto L_004da0e5;
L_004da0da:; BB(0x004da0da);
    /* 004da0da: mov dword ptr [0xa48c08], 1 */ W32((u32)(0xa48c08u), 0x1u);
    /* 004da0e4: ret  */ FN_RET(0x004da0c8); r_esp += 4; return;
L_004da0e5:; BB(0x004da0e5);
    /* 004da0e5: ret  */ FN_RET(0x004da0c8); r_esp += 4; return;
}

void f_004da0e8(void) /* sub_4DA0E8 */
{
    FN_ENTER(0x004da0e8);
    /* 004da0e8: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004da0ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da0ef: je 0x4da0f7 */ if (fZ) goto L_004da0f7;
L_004da0f1:; BB(0x004da0f1);
    /* 004da0f1: mov eax, dword ptr [0xa48c14] */ r_eax = R32((u32)(0xa48c14u));
    /* 004da0f6: ret  */ FN_RET(0x004da0e8); r_esp += 4; return;
L_004da0f7:; BB(0x004da0f7);
    /* 004da0f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da0f9: ret  */ FN_RET(0x004da0e8); r_esp += 4; return;
}

void f_004da0fc(void) /* sub_4DA0FC */
{
    FN_ENTER(0x004da0fc);
    /* 004da0fc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004da100: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004da105: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da107: je 0x4da111 */ if (fZ) goto L_004da111;
L_004da109:; BB(0x004da109);
    /* 004da109: mov eax, dword ptr [edx*4 + 0xa48c18] */ r_eax = R32((u32)(r_edx*4+0xa48c18u));
    /* 004da110: ret  */ FN_RET(0x004da0fc); r_esp += 4; return;
L_004da111:; BB(0x004da111);
    /* 004da111: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da113: ret  */ FN_RET(0x004da0fc); r_esp += 4; return;
}

void f_004da114(void) /* sub_4DA114 */
{
    FN_ENTER(0x004da114);
    /* 004da114: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da115: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004da119: call 0x4d91f8 */ r_esp -= 4; W32(r_esp, 0x4da11eu); f_004d91f8();
    /* 004da11e: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004da122: mov edx, dword ptr [eax*4 + 0x909898] */ r_edx = R32((u32)(r_eax*4+0x909898u));
    /* 004da129: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004da12b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004da12d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004da12f: lea eax, [edx + ecx + 0xf4] */ r_eax = (u32)(r_edx+r_ecx+0xf4u);
    /* 004da136: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da137: ret  */ FN_RET(0x004da114); r_esp += 4; return;
}

void f_004da138(void) /* sub_4DA138 */
{
    FN_ENTER(0x004da138);
    /* 004da138: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da139: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004da13d: call 0x4d91f8 */ r_esp -= 4; W32(r_esp, 0x4da142u); f_004d91f8();
    /* 004da142: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004da146: mov edx, dword ptr [eax*4 + 0x9098a4] */ r_edx = R32((u32)(r_eax*4+0x9098a4u));
    /* 004da14d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004da14f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004da151: lea eax, [edx + ecx + 4] */ r_eax = (u32)(r_edx+r_ecx+0x4u);
    /* 004da155: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da156: ret  */ FN_RET(0x004da138); r_esp += 4; return;
}

void f_004da158(void) /* sub_4DA158 */
{
    FN_ENTER(0x004da158);
    /* 004da158: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da159: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004da15d: call 0x4d91f8 */ r_esp -= 4; W32(r_esp, 0x4da162u); f_004d91f8();
    /* 004da162: mov eax, dword ptr [eax*4 + 0x9098b0] */ r_eax = R32((u32)(r_eax*4+0x9098b0u));
    /* 004da169: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da16a: ret  */ FN_RET(0x004da158); r_esp += 4; return;
}

void f_004da16c(void) /* sub_4DA16C */
{
    FN_ENTER(0x004da16c);
    /* 004da16c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da16d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004da171: call 0x4d91f8 */ r_esp -= 4; W32(r_esp, 0x4da176u); f_004d91f8();
    /* 004da176: mov edx, dword ptr [eax*4 + 0x9098bc] */ r_edx = R32((u32)(r_eax*4+0x9098bcu));
    /* 004da17d: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 004da180: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004da182: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004da184: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004da187: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004da189: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004da18b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004da18d: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004da18f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da190: ret  */ FN_RET(0x004da16c); r_esp += 4; return;
}

void f_004da194(void) /* sub_4DA194 */
{
    FN_ENTER(0x004da194);
    /* 004da194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da195: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004da199: call 0x4d91f8 */ r_esp -= 4; W32(r_esp, 0x4da19eu); f_004d91f8();
    /* 004da19e: imul eax, dword ptr [eax*4 + 0x9098c8], 0x8c9f */ { i64 t = (i64)(i32)R32((u32)(r_eax*4+0x9098c8u)) * (i64)(i32)0x8c9fu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004da1a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da1aa: ret  */ FN_RET(0x004da194); r_esp += 4; return;
}

void f_004da1ac(void) /* sub_4DA1AC */
{
    FN_ENTER(0x004da1ac);
    /* 004da1ac: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004da1b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da1b3: je 0x4da1bb */ if (fZ) goto L_004da1bb;
L_004da1b5:; BB(0x004da1b5);
    /* 004da1b5: mov eax, dword ptr [0xa48be0] */ r_eax = R32((u32)(0xa48be0u));
    /* 004da1ba: ret  */ FN_RET(0x004da1ac); r_esp += 4; return;
L_004da1bb:; BB(0x004da1bb);
    /* 004da1bb: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004da1c0: ret  */ FN_RET(0x004da1ac); r_esp += 4; return;
}

void f_004da1c4(void)
{
    FN_ENTER(0x004da1c4);
    /* 004da1c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004da1c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da1c6: mov edi, 0xa48be0 */ r_edi = 0xa48be0u;
    /* 004da1cb: mov dword ptr [0xa494fc], 0x3f800000 */ W32((u32)(0xa494fcu), 0x3f800000u);
    /* 004da1d5: mov esi, 0x9b06c0 */ r_esi = 0x9b06c0u;
    /* 004da1da: mov ecx, 0x91c */ r_ecx = 0x91cu;
    /* 004da1df: mov dword ptr [0xa49500], 0x41000000 */ W32((u32)(0xa49500u), 0x41000000u);
    /* 004da1e9: mov dword ptr [0xa49504], 0x3fc00000 */ W32((u32)(0xa49504u), 0x3fc00000u);
    /* 004da1f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004da1f4: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004da1f7: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 004da1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da1fa: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da1fd: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 004da1ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004da200: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004da201: ret  */ FN_RET(0x004da1c4); r_esp += 4; return;
}

void f_004da204(void) /* sub_4DA204 */
{
    FN_ENTER(0x004da204);
    /* 004da204: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004da209: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da20b: je 0x4da218 */ if (fZ) goto L_004da218;
L_004da20d:; BB(0x004da20d);
    /* 004da20d: mov dword ptr [0xa48c10], 1 */ W32((u32)(0xa48c10u), 0x1u);
    /* 004da217: ret  */ FN_RET(0x004da204); r_esp += 4; return;
L_004da218:; BB(0x004da218);
    /* 004da218: ret  */ FN_RET(0x004da204); r_esp += 4; return;
}

void f_004da21c(void) /* sub_4DA21C */
{
    FN_ENTER(0x004da21c);
    /* 004da21c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004da21d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da21e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004da220: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 004da226: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004da22b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004da22d: mov dword ptr [0xa48fdc], eax */ W32((u32)(0xa48fdcu), r_eax);
    /* 004da232: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004da234: mov dword ptr [0xa49120], eax */ W32((u32)(0xa49120u), r_eax);
    /* 004da239: mov dword ptr [0xa49264], eax */ W32((u32)(0xa49264u), r_eax);
    /* 004da23e: mov dword ptr [0xa493a8], eax */ W32((u32)(0xa493a8u), r_eax);
    /* 004da243: lea esi, [edx + edx*8] */ r_esi = (u32)(r_edx+r_edx*8);
    /* 004da246: lea edi, [esi + esi*8 + 0xa48fe0] */ r_edi = (u32)(r_esi+r_esi*8+0xa48fe0u);
    /* 004da24d: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4da252u); f_006c1bd4();
    /* 004da252: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da253: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da255: je 0x4da285 */ if (fZ) goto L_004da285;
L_004da257:; BB(0x004da257);
    /* 004da257: mov dword ptr [esi + esi*8 + 0xa48fdc], 1 */ W32((u32)(r_esi+r_esi*8+0xa48fdcu), 0x1u);
    /* 004da262: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004da267: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4da26cu); f_006c1bd4();
    /* 004da26c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da26d: add eax, 0x27dc */ {  u32 a = r_eax; u32 b = 0x27dcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004da272: mov esi, eax */ r_esi = r_eax;
    /* 004da274: mov ecx, 0x140 */ r_ecx = 0x140u;
    /* 004da279: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004da27a: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004da27d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 004da27f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da280: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da283: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
L_004da285:; BB(0x004da285);
    /* 004da285: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004da286: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004da287: ret  */ FN_RET(0x004da21c); r_esp += 4; return;
}

void f_004da288(void) /* sub_4DA288 */
{
    FN_ENTER(0x004da288);
    /* 004da288: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da28a: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 004da28c: mov byte ptr [ecx + 1], dl */ W8((u32)(r_ecx+0x1u), (u8)r_edx);
    /* 004da28f: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 004da293: mov eax, ecx */ r_eax = r_ecx;
    /* 004da295: ret  */ FN_RET(0x004da288); r_esp += 4; return;
}

void f_004da298(void) /* sub_4DA298 */
{
    FN_ENTER(0x004da298);
    /* 004da298: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004da299: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da29a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004da29b: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004da29f: call 0x4d91f4 */ r_esp -= 4; W32(r_esp, 0x4da2a4u); f_004d91f4();
    /* 004da2a4: mov ebx, eax */ r_ebx = r_eax;
    /* 004da2a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004da2a7: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004da2ab: call 0x4da138 */ r_esp -= 4; W32(r_esp, 0x4da2b0u); f_004da138();
    /* 004da2b0: mov edi, eax */ r_edi = r_eax;
    /* 004da2b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004da2b3: call 0x4da158 */ r_esp -= 4; W32(r_esp, 0x4da2b8u); f_004da158();
    /* 004da2b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da2bb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004da2bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da2bf: jle 0x4da2df */ if ((fZ||fS!=fO)) goto L_004da2df;
L_004da2c1:; BB(0x004da2c1);
    /* 004da2c1: mov esi, eax */ r_esi = r_eax;
L_004da2c3:; BB(0x004da2c3);
    /* 004da2c3: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 004da2c5: call 0x4d9604 */ r_esp -= 4; W32(r_esp, 0x4da2cau); f_004d9604();
    /* 004da2ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da2cb: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004da2cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da2cf: je 0x4da2df */ if (fZ) goto L_004da2df;
L_004da2d1:; BB(0x004da2d1);
    /* 004da2d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da2d3: je 0x4da2df */ if (fZ) goto L_004da2df;
L_004da2d5:; BB(0x004da2d5);
    /* 004da2d5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004da2d8: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004da2db: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004da2dd: jl 0x4da2c3 */ if ((fS!=fO)) goto L_004da2c3;
L_004da2df:; BB(0x004da2df);
    /* 004da2df: mov eax, ebx */ r_eax = r_ebx;
    /* 004da2e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004da2e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004da2e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004da2e4: ret 8 */ FN_RET(0x004da298); r_esp += 12; return;
}

void f_004da2e8(void) /* sub_4DA2E8 */
{
    FN_ENTER(0x004da2e8);
    /* 004da2e8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004da2ec: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004da2ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da2f0: je 0x4da2fd */ if (fZ) goto L_004da2fd;
L_004da2f2:; BB(0x004da2f2);
    /* 004da2f2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 004da2f4: je 0x4da2f9 */ if (fZ) goto L_004da2f9;
L_004da2f6:; BB(0x004da2f6);
    /* 004da2f6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
L_004da2f9:; BB(0x004da2f9);
    /* 004da2f9: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 004da2fb: jne 0x4da2f2 */ if (!fZ) goto L_004da2f2;
L_004da2fd:; BB(0x004da2fd);
    /* 004da2fd: mov eax, edx */ r_eax = r_edx;
    /* 004da2ff: ret  */ FN_RET(0x004da2e8); r_esp += 4; return;
}

void f_004da300(void) /* sub_4DA300 */
{
    FN_ENTER(0x004da300);
    /* 004da300: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004da301: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004da304: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 004da308: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004da309: call 0x4da158 */ r_esp -= 4; W32(r_esp, 0x4da30eu); f_004da158();
    /* 004da30e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da30f: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004da313: mov esi, ebx */ r_esi = r_ebx;
    /* 004da315: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 004da319: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 004da31c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004da31e: mov ebx, eax */ r_ebx = r_eax;
    /* 004da320: mov ebp, edx */ r_ebp = r_edx;
L_004da322:; BB(0x004da322);
    /* 004da322: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004da323: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4da328u); f_0068d5a8();
    /* 004da328: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da329: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da32b: je 0x4da3d8 */ if (fZ) goto L_004da3d8;
L_004da331:; BB(0x004da331);
    /* 004da331: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 004da335: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004da337: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 004da33a: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 004da33d: mov ecx, dword ptr [edi + 0xa48fdc] */ r_ecx = R32((u32)(r_edi+0xa48fdcu));
    /* 004da343: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da345: je 0x4da402 */ if (fZ) goto L_004da402;
L_004da34b:; BB(0x004da34b);
    /* 004da34b: lea edi, [eax + eax*8 + 0xa48fdc] */ r_edi = (u32)(r_eax+r_eax*8+0xa48fdcu);
    /* 004da352: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 004da354: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da356: jne 0x4da35f */ if (!fZ) goto L_004da35f;
L_004da358:; BB(0x004da358);
    /* 004da358: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004da35a: jmp 0x4da3d2 */ goto L_004da3d2;
L_004da35f:; BB(0x004da35f);
    /* 004da35f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da360: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004da363: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004da364: call 0x4da138 */ r_esp -= 4; W32(r_esp, 0x4da369u); f_004da138();
    /* 004da369: mov edi, eax */ r_edi = r_eax;
    /* 004da36b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da36c: call 0x4da158 */ r_esp -= 4; W32(r_esp, 0x4da371u); f_004da158();
    /* 004da371: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da374: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004da376: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004da378: jle 0x4da3d2 */ if ((fZ||fS!=fO)) goto L_004da3d2;
L_004da37a:; BB(0x004da37a);
    /* 004da37a: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004da37d: jl 0x4da3c4 */ if ((fS!=fO)) goto L_004da3c4;
L_004da37f:; BB(0x004da37f);
    /* 004da37f: lea ecx, [eax - 6] */ r_ecx = (u32)(r_eax+0xfffffffau);
L_004da382:; BB(0x004da382);
    /* 004da382: mov esi, dword ptr [edi + edx*4] */ r_esi = R32((u32)(r_edi+r_edx*4));
    /* 004da385: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da387: je 0x4da3f6 */ if (fZ) goto L_004da3f6;
L_004da389:; BB(0x004da389);
    /* 004da389: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004da38c: mov esi, dword ptr [edi + edx*4] */ r_esi = R32((u32)(r_edi+r_edx*4));
    /* 004da38f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da391: je 0x4da423 */ if (fZ) goto L_004da423;
L_004da397:; BB(0x004da397);
    /* 004da397: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004da39a: mov esi, dword ptr [edi + edx*4] */ r_esi = R32((u32)(r_edi+r_edx*4));
    /* 004da39d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da39f: je 0x4da41d */ if (fZ) goto L_004da41d;
L_004da3a5:; BB(0x004da3a5);
    /* 004da3a5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004da3a8: mov esi, dword ptr [edi + edx*4] */ r_esi = R32((u32)(r_edi+r_edx*4));
    /* 004da3ab: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da3ad: je 0x4da417 */ if (fZ) goto L_004da417;
L_004da3af:; BB(0x004da3af);
    /* 004da3af: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004da3b2: mov esi, dword ptr [edi + edx*4] */ r_esi = R32((u32)(r_edi+r_edx*4));
    /* 004da3b5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da3b7: je 0x4da3fc */ if (fZ) goto L_004da3fc;
L_004da3b9:; BB(0x004da3b9);
    /* 004da3b9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004da3bc: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004da3be: jle 0x4da382 */ if ((fZ||fS!=fO)) goto L_004da382;
L_004da3c0:; BB(0x004da3c0);
    /* 004da3c0: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_004da3c4:; BB(0x004da3c4);
    /* 004da3c4: mov ecx, dword ptr [edi + edx*4] */ r_ecx = R32((u32)(r_edi+r_edx*4));
    /* 004da3c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da3c9: je 0x4da3d2 */ if (fZ) goto L_004da3d2;
L_004da3cb:; BB(0x004da3cb);
    /* 004da3cb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004da3ce: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004da3d0: jl 0x4da3c4 */ if ((fS!=fO)) goto L_004da3c4;
L_004da3d2:; BB(0x004da3d2);
    /* 004da3d2: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004da3d4: jge 0x4da3d8 */ if ((fS==fO)) goto L_004da3d8;
L_004da3d6:; BB(0x004da3d6);
    /* 004da3d6: mov ebx, edx */ r_ebx = r_edx;
L_004da3d8:; BB(0x004da3d8);
    /* 004da3d8: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004da3db: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004da3de: jl 0x4da322 */ if ((fS!=fO)) goto L_004da322;
L_004da3e4:; BB(0x004da3e4);
    /* 004da3e4: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 004da3e8: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 004da3ec: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 004da3ef: mov eax, ebx */ r_eax = r_ebx;
    /* 004da3f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004da3f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004da3f5: ret  */ FN_RET(0x004da300); r_esp += 4; return;
L_004da3f6:; BB(0x004da3f6);
    /* 004da3f6: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 004da3fa: jmp 0x4da3d2 */ goto L_004da3d2;
L_004da3fc:; BB(0x004da3fc);
    /* 004da3fc: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 004da400: jmp 0x4da3d2 */ goto L_004da3d2;
L_004da402:; BB(0x004da402);
    /* 004da402: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 004da406: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 004da40a: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 004da40d: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004da412: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004da415: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004da416: ret  */ FN_RET(0x004da300); r_esp += 4; return;
L_004da417:; BB(0x004da417);
    /* 004da417: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 004da41b: jmp 0x4da3d2 */ goto L_004da3d2;
L_004da41d:; BB(0x004da41d);
    /* 004da41d: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 004da421: jmp 0x4da3d2 */ goto L_004da3d2;
L_004da423:; BB(0x004da423);
    /* 004da423: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 004da427: jmp 0x4da3d2 */ goto L_004da3d2;
}

void f_004da42c(void) /* sub_4DA42C */
{
    FN_ENTER(0x004da42c);
    /* 004da42c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da42d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004da42e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004da42f: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 004da433: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 004da438: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 004da43c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da43d: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4da442u); f_006c1bd4();
    /* 004da442: mov ebx, eax */ r_ebx = r_eax;
    /* 004da444: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da445: call 0x4da158 */ r_esp -= 4; W32(r_esp, 0x4da44au); f_004da158();
    /* 004da44a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da44d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004da44f: jl 0x4da455 */ if ((fS!=fO)) goto L_004da455;
L_004da451:; BB(0x004da451);
    /* 004da451: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004da453: jl 0x4da45b */ if ((fS!=fO)) goto L_004da45b;
L_004da455:; BB(0x004da455);
    /* 004da455: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da457: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004da458: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da459: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004da45a: ret  */ FN_RET(0x004da42c); r_esp += 4; return;
L_004da45b:; BB(0x004da45b);
    /* 004da45b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da45d: je 0x4da455 */ if (fZ) goto L_004da455;
L_004da45f:; BB(0x004da45f);
    /* 004da45f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da460: add ebx, 0x27dc */ {  u32 a = r_ebx; u32 b = 0x27dcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004da466: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004da467: call 0x4da138 */ r_esp -= 4; W32(r_esp, 0x4da46cu); f_004da138();
    /* 004da46c: push dword ptr [eax + ebp*4] */ { u32 v = R32((u32)(r_eax+r_ebp*4)); r_esp -= 4; W32(r_esp, v); }
    /* 004da46f: call 0x4d9604 */ r_esp -= 4; W32(r_esp, 0x4da474u); f_004d9604();
    /* 004da474: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004da477: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004da478: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da479: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004da47a: ret  */ FN_RET(0x004da42c); r_esp += 4; return;
}

void f_004da47c(void) /* sub_4DA47C */
{
    FN_ENTER(0x004da47c);
    /* 004da47c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004da47d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da47e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004da47f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004da480: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 004da485: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 004da489: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da48a: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4da48fu); f_006c1bd4();
    /* 004da48f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da490: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da492: je 0x4da4d7 */ if (fZ) goto L_004da4d7;
L_004da494:; BB(0x004da494);
    /* 004da494: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004da495: add eax, 0x27dc */ {  u32 a = r_eax; u32 b = 0x27dcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004da49a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da49b: call 0x4da138 */ r_esp -= 4; W32(r_esp, 0x4da4a0u); f_004da138();
    /* 004da4a0: mov ebx, eax */ r_ebx = r_eax;
    /* 004da4a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004da4a3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004da4a5: call 0x4da158 */ r_esp -= 4; W32(r_esp, 0x4da4aau); f_004da158();
    /* 004da4aa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da4ad: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004da4af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da4b1: jle 0x4da4d0 */ if ((fZ||fS!=fO)) goto L_004da4d0;
L_004da4b3:; BB(0x004da4b3);
    /* 004da4b3: mov ebp, ebx */ r_ebp = r_ebx;
    /* 004da4b5: mov ebx, eax */ r_ebx = r_eax;
L_004da4b7:; BB(0x004da4b7);
    /* 004da4b7: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 004da4ba: call 0x4d9604 */ r_esp -= 4; W32(r_esp, 0x4da4bfu); f_004d9604();
    /* 004da4bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da4c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da4c2: je 0x4da4de */ if (fZ) goto L_004da4de;
L_004da4c4:; BB(0x004da4c4);
    /* 004da4c4: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004da4c6: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004da4c9: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004da4cc: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004da4ce: jl 0x4da4b7 */ if ((fS!=fO)) goto L_004da4b7;
L_004da4d0:; BB(0x004da4d0);
    /* 004da4d0: mov eax, esi */ r_eax = r_esi;
    /* 004da4d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004da4d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da4d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004da4d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004da4d6: ret  */ FN_RET(0x004da47c); r_esp += 4; return;
L_004da4d7:; BB(0x004da4d7);
    /* 004da4d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da4d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004da4da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da4db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004da4dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004da4dd: ret  */ FN_RET(0x004da47c); r_esp += 4; return;
L_004da4de:; BB(0x004da4de);
    /* 004da4de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da4e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004da4e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da4e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004da4e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004da4e4: ret  */ FN_RET(0x004da47c); r_esp += 4; return;
}

void f_004da4e8(void) /* sub_4DA4E8 */
{
    FN_ENTER(0x004da4e8);
    /* 004da4e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004da4e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004da4ea: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004da4ed: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004da4ef: call 0x4da194 */ r_esp -= 4; W32(r_esp, 0x4da4f4u); f_004da194();
    /* 004da4f4: mov edi, eax */ r_edi = r_eax;
    /* 004da4f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da4f9: mov edx, dword ptr [0xa49510] */ r_edx = R32((u32)(0xa49510u));
    /* 004da4ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da501: je 0x4da59e */ if (fZ) goto L_004da59e;
L_004da507:; BB(0x004da507);
    /* 004da507: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004da50c: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4da511u); f_006c1bd4();
    /* 004da511: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da512: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da514: je 0x4da59e */ if (fZ) goto L_004da59e;
L_004da51a:; BB(0x004da51a);
    /* 004da51a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004da51c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004da51e: call 0x4da158 */ r_esp -= 4; W32(r_esp, 0x4da523u); f_004da158();
    /* 004da523: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da524: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004da526: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004da529: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004da52b: jl 0x4da590 */ if ((fS!=fO)) goto L_004da590;
L_004da52d:; BB(0x004da52d);
    /* 004da52d: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 004da530: mov edi, edx */ r_edi = r_edx;
    /* 004da532: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004da536: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004da53a: mov ebx, eax */ r_ebx = r_eax;
L_004da53c:; BB(0x004da53c);
    /* 004da53c: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004da541: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4da546u); f_006c1bd4();
    /* 004da546: mov esi, eax */ r_esi = r_eax;
    /* 004da548: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004da54a: call 0x4da158 */ r_esp -= 4; W32(r_esp, 0x4da54fu); f_004da158();
    /* 004da54f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da552: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004da554: jl 0x4da55a */ if ((fS!=fO)) goto L_004da55a;
L_004da556:; BB(0x004da556);
    /* 004da556: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004da558: jl 0x4da55e */ if ((fS!=fO)) goto L_004da55e;
L_004da55a:; BB(0x004da55a);
    /* 004da55a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004da55c: jmp 0x4da57b */ goto L_004da57b;
L_004da55e:; BB(0x004da55e);
    /* 004da55e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da560: je 0x4da55a */ if (fZ) goto L_004da55a;
L_004da562:; BB(0x004da562);
    /* 004da562: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004da564: add esi, 0x27dc */ {  u32 a = r_esi; u32 b = 0x27dcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004da56a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da56b: call 0x4da138 */ r_esp -= 4; W32(r_esp, 0x4da570u); f_004da138();
    /* 004da570: push dword ptr [eax + edi*4] */ { u32 v = R32((u32)(r_eax+r_edi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 004da573: call 0x4d9604 */ r_esp -= 4; W32(r_esp, 0x4da578u); f_004d9604();
    /* 004da578: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004da57b:; BB(0x004da57b);
    /* 004da57b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da57d: je 0x4da5a6 */ if (fZ) goto L_004da5a6;
L_004da57f:; BB(0x004da57f);
    /* 004da57f: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004da581: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004da584: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004da586: jle 0x4da53c */ if ((fZ||fS!=fO)) goto L_004da53c;
L_004da588:; BB(0x004da588);
    /* 004da588: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 004da58c: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
L_004da590:; BB(0x004da590);
    /* 004da590: add ebp, dword ptr [0xa48bec] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xa48becu)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004da596: mov eax, ebp */ r_eax = r_ebp;
    /* 004da598: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004da59b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da59c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004da59d: ret  */ FN_RET(0x004da4e8); r_esp += 4; return;
L_004da59e:; BB(0x004da59e);
    /* 004da59e: mov eax, edi */ r_eax = r_edi;
    /* 004da5a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004da5a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da5a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004da5a5: ret  */ FN_RET(0x004da4e8); r_esp += 4; return;
L_004da5a6:; BB(0x004da5a6);
    /* 004da5a6: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 004da5a9: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 004da5ad: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 004da5b1: mov eax, edi */ r_eax = r_edi;
    /* 004da5b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004da5b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da5b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004da5b8: ret  */ FN_RET(0x004da4e8); r_esp += 4; return;
}

void f_004da5bc(void) /* sub_4DA5BC */
{
    FN_ENTER(0x004da5bc);
    /* 004da5bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004da5bd: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004da5c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da5c3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4da5c8u); f_006c1bd4();
    /* 004da5c8: mov ebp, eax */ r_ebp = r_eax;
    /* 004da5ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da5cd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da5cf: je 0x4da5eb */ if (fZ) goto L_004da5eb;
L_004da5d1:; BB(0x004da5d1);
    /* 004da5d1: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004da5d5: call 0x4d91f4 */ r_esp -= 4; W32(r_esp, 0x4da5dau); f_004d91f4();
    /* 004da5da: push dword ptr [ebp + eax*8 + 0x28d4] */ { u32 v = R32((u32)(r_ebp+r_eax*8+0x28d4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004da5e1: call 0x4d9664 */ r_esp -= 4; W32(r_esp, 0x4da5e6u); f_004d9664();
    /* 004da5e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004da5e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da5ea: ret  */ FN_RET(0x004da5bc); r_esp += 4; return;
L_004da5eb:; BB(0x004da5eb);
    /* 004da5eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da5ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da5ee: ret  */ FN_RET(0x004da5bc); r_esp += 4; return;
}

void f_004da5f0(void) /* sub_4DA5F0 */
{
    FN_ENTER(0x004da5f0);
    /* 004da5f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da5f1: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004da5f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da5f7: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4da5fcu); f_006c1bd4();
    /* 004da5fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da5ff: je 0x4da60d */ if (fZ) goto L_004da60d;
L_004da601:; BB(0x004da601);
    /* 004da601: add eax, 0x27dc */ {  u32 a = r_eax; u32 b = 0x27dcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004da606: call 0x4da618 */ r_esp -= 4; W32(r_esp, 0x4da60bu); f_004da618();
    /* 004da60b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da60c: ret  */ FN_RET(0x004da5f0); r_esp += 4; return;
L_004da60d:; BB(0x004da60d);
    /* 004da60d: mov eax, 0xa49520 */ r_eax = 0xa49520u;
    /* 004da612: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da613: ret  */ FN_RET(0x004da5f0); r_esp += 4; return;
}

void f_004da614(void) /* sub_4DA614 */
{
    FN_ENTER(0x004da614);
    /* 004da614: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004da618: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da61a: je 0x4da637 */ if (fZ) goto L_004da637;
L_004da61c:; BB(0x004da61c);
    /* 004da61c: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004da61e: add eax, 0x10c */ {  u32 a = r_eax; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004da623: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da624: push 0xa49524 */ { u32 v = 0xa49524u; r_esp -= 4; W32(r_esp, v); }
    /* 004da629: call 0x4d9f78 */ r_esp -= 4; W32(r_esp, 0x4da62eu); f_004d9f78();
    /* 004da62e: mov eax, 0xa49524 */ r_eax = 0xa49524u;
    /* 004da633: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004da636: ret  */ FN_RET(0x004da614); r_esp += 4; return;
L_004da637:; BB(0x004da637);
    /* 004da637: mov eax, 0xa4953c */ r_eax = 0xa4953cu;
    /* 004da63c: ret  */ FN_RET(0x004da614); r_esp += 4; return;
}

void f_004da618(void) /* sub_4DA618 */
{
    FN_ENTER(0x004da618);
    /* 004da618: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da61a: je 0x4da637 */ if (fZ) goto L_004da637;
L_004da61c:; BB(0x004da61c);
    /* 004da61c: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004da61e: add eax, 0x10c */ {  u32 a = r_eax; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004da623: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da624: push 0xa49524 */ { u32 v = 0xa49524u; r_esp -= 4; W32(r_esp, v); }
    /* 004da629: call 0x4d9f78 */ r_esp -= 4; W32(r_esp, 0x4da62eu); f_004d9f78();
    /* 004da62e: mov eax, 0xa49524 */ r_eax = 0xa49524u;
    /* 004da633: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004da636: ret  */ FN_RET(0x004da618); r_esp += 4; return;
L_004da637:; BB(0x004da637);
    /* 004da637: mov eax, 0xa4953c */ r_eax = 0xa4953cu;
    /* 004da63c: ret  */ FN_RET(0x004da618); r_esp += 4; return;
}

void f_004da640(void) /* sub_4DA640 */
{
    FN_ENTER(0x004da640);
    /* 004da640: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da641: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004da646: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da647: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4da64cu); f_006c1bd4();
    /* 004da64c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da64d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da64f: je 0x4da65d */ if (fZ) goto L_004da65d;
L_004da651:; BB(0x004da651);
    /* 004da651: add eax, 0x27dc */ {  u32 a = r_eax; u32 b = 0x27dcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004da656: call 0x4da668 */ r_esp -= 4; W32(r_esp, 0x4da65bu); f_004da668();
    /* 004da65b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da65c: ret  */ FN_RET(0x004da640); r_esp += 4; return;
L_004da65d:; BB(0x004da65d);
    /* 004da65d: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004da662: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da663: ret  */ FN_RET(0x004da640); r_esp += 4; return;
}

void f_004da664(void) /* sub_4DA664 */
{
    FN_ENTER(0x004da664);
    /* 004da664: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004da668: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da66a: je 0x4da697 */ if (fZ) goto L_004da697;
L_004da66c:; BB(0x004da66c);
    /* 004da66c: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 004da66f: mov eax, ecx */ r_eax = r_ecx;
    /* 004da671: and eax, 0x7c00 */ {  u32 a = r_eax; u32 b = 0x7c00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004da676: shl eax, 9 */ { u32 c = (9u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004da679: or eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004da67e: mov edx, ecx */ r_edx = r_ecx;
    /* 004da680: and edx, 0x3e0 */ {  u32 a = r_edx; u32 b = 0x3e0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004da686: shl edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004da689: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004da68b: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004da68e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004da690: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004da692: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004da694: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da696: ret  */ FN_RET(0x004da664); r_esp += 4; return;
L_004da697:; BB(0x004da697);
    /* 004da697: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004da69c: ret  */ FN_RET(0x004da664); r_esp += 4; return;
}

void f_004da668(void) /* sub_4DA668 */
{
    FN_ENTER(0x004da668);
    /* 004da668: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da66a: je 0x4da697 */ if (fZ) goto L_004da697;
L_004da66c:; BB(0x004da66c);
    /* 004da66c: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 004da66f: mov eax, ecx */ r_eax = r_ecx;
    /* 004da671: and eax, 0x7c00 */ {  u32 a = r_eax; u32 b = 0x7c00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004da676: shl eax, 9 */ { u32 c = (9u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004da679: or eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004da67e: mov edx, ecx */ r_edx = r_ecx;
    /* 004da680: and edx, 0x3e0 */ {  u32 a = r_edx; u32 b = 0x3e0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004da686: shl edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004da689: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004da68b: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004da68e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004da690: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004da692: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004da694: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da696: ret  */ FN_RET(0x004da668); r_esp += 4; return;
L_004da697:; BB(0x004da697);
    /* 004da697: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004da69c: ret  */ FN_RET(0x004da668); r_esp += 4; return;
}

void f_004da6a0(void) /* sub_4DA6A0 */
{
    FN_ENTER(0x004da6a0);
    /* 004da6a0: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004da6a5: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4da6aau); f_006c1bd4();
    /* 004da6aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da6ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da6ad: je 0x4da6c2 */ if (fZ) goto L_004da6c2;
L_004da6af:; BB(0x004da6af);
    /* 004da6af: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004da6b4: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4da6b9u); f_006c1bd4();
    /* 004da6b9: movsx eax, word ptr [eax + 0x2840] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x2840u));
    /* 004da6c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da6c1: ret  */ FN_RET(0x004da6a0); r_esp += 4; return;
L_004da6c2:; BB(0x004da6c2);
    /* 004da6c2: mov eax, 0x3e7 */ r_eax = 0x3e7u;
    /* 004da6c7: ret  */ FN_RET(0x004da6a0); r_esp += 4; return;
}

void f_004da6c8(void) /* sub_4DA6C8 */
{
    FN_ENTER(0x004da6c8);
    /* 004da6c8: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 004da6cc: mov eax, ecx */ r_eax = r_ecx;
    /* 004da6ce: and eax, 0xf80000 */ {  u32 a = r_eax; u32 b = 0xf80000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004da6d3: shr eax, 9 */ { u32 c = (9u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004da6d6: mov edx, ecx */ r_edx = r_ecx;
    /* 004da6d8: and edx, 0xf800 */ {  u32 a = r_edx; u32 b = 0xf800u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004da6de: shr edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004da6e1: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004da6e3: and ecx, 0xf8 */ {  u32 a = r_ecx; u32 b = 0xf8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004da6e9: shr ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004da6ec: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da6ee: ret  */ FN_RET(0x004da6c8); r_esp += 4; return;
}

void f_004da6f0(void) /* sub_4DA6F0 */
{
    FN_ENTER(0x004da6f0);
    /* 004da6f0: mov eax, dword ptr [0xa48c00] */ r_eax = R32((u32)(0xa48c00u));
    /* 004da6f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da6f7: jne 0x4da6fc */ if (!fZ) goto L_004da6fc;
L_004da6f9:; BB(0x004da6f9);
    /* 004da6f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da6fb: ret  */ FN_RET(0x004da6f0); r_esp += 4; return;
L_004da6fc:; BB(0x004da6fc);
    /* 004da6fc: mov eax, dword ptr [0xa48c04] */ r_eax = R32((u32)(0xa48c04u));
    /* 004da701: ret  */ FN_RET(0x004da6f0); r_esp += 4; return;
}

void f_004da704(void) /* sub_4DA704 */
{
    FN_ENTER(0x004da704);
    /* 004da704: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da705: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004da708: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 004da70c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004da70e: call 0x4da158 */ r_esp -= 4; W32(r_esp, 0x4da713u); f_004da158();
    /* 004da713: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da714: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004da716: jl 0x4da71c */ if ((fS!=fO)) goto L_004da71c;
L_004da718:; BB(0x004da718);
    /* 004da718: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004da71a: jl 0x4da71e */ if ((fS!=fO)) goto L_004da71e;
L_004da71c:; BB(0x004da71c);
    /* 004da71c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004da71e:; BB(0x004da71e);
    /* 004da71e: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 004da723: cmp eax, dword ptr [0xa9c4dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da729: mov dword ptr [0xa48be0], esi */ W32((u32)(0xa48be0u), r_esi);
    /* 004da72f: jne 0x4da763 */ if (!fZ) goto L_004da763;
L_004da731:; BB(0x004da731);
    /* 004da731: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 004da737: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da739: je 0x4da763 */ if (fZ) goto L_004da763;
L_004da73b:; BB(0x004da73b);
    /* 004da73b: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004da73f: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004da747: mov eax, 0xc */ r_eax = 0xcu;
    /* 004da74c: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 004da750: mov byte ptr [esp + 2], 0xdf */ W8((u32)(r_esp+0x2u), 0xdfu);
    /* 004da755: mov byte ptr [esp + 3], 1 */ W8((u32)(r_esp+0x3u), 0x1u);
    /* 004da75a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004da75d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da75e: call 0x7c4fb4 */ r_esp -= 4; W32(r_esp, 0x4da763u); f_007c4fb4();
L_004da763:; BB(0x004da763);
    /* 004da763: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004da766: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004da767: ret  */ FN_RET(0x004da704); r_esp += 4; return;
}

void f_004da768(void) /* sub_4DA768 */
{
    FN_ENTER(0x004da768);
    /* 004da768: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004da76b: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004da76d: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004da771: push 0xa48c30 */ { u32 v = 0xa48c30u; r_esp -= 4; W32(r_esp, v); }
    /* 004da776: call 0x4d9eec */ r_esp -= 4; W32(r_esp, 0x4da77bu); f_004d9eec();
    /* 004da77b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da77e: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004da782: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 004da788: or eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004da78d: cmp edx, dword ptr [0xa9c4dc] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da793: mov dword ptr [0xa48bf8], eax */ W32((u32)(0xa48bf8u), r_eax);
    /* 004da798: jne 0x4da7f1 */ if (!fZ) goto L_004da7f1;
L_004da79a:; BB(0x004da79a);
    /* 004da79a: mov eax, dword ptr [0xaab284] */ r_eax = R32((u32)(0xaab284u));
    /* 004da79f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da7a1: je 0x4da7f1 */ if (fZ) goto L_004da7f1;
L_004da7a3:; BB(0x004da7a3);
    /* 004da7a3: mov byte ptr [esp + 2], 0xdf */ W8((u32)(r_esp+0x2u), 0xdfu);
    /* 004da7a8: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004da7ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004da7ae: mov eax, 0x24 */ r_eax = 0x24u;
    /* 004da7b3: mov byte ptr [esp + 3], 5 */ W8((u32)(r_esp+0x3u), 0x5u);
    /* 004da7b8: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004da7bc: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 004da7c0: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004da7c4: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 004da7c9: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004da7cb: push 0xa48c30 */ { u32 v = 0xa48c30u; r_esp -= 4; W32(r_esp, v); }
    /* 004da7d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004da7d1: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4da7d6u); f_00857dec();
    /* 004da7d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da7d9: mov eax, dword ptr [0xa48bf8] */ r_eax = R32((u32)(0xa48bf8u));
    /* 004da7de: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 004da7e4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004da7e8: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004da7eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004da7ec: call 0x7c4fb4 */ r_esp -= 4; W32(r_esp, 0x4da7f1u); f_007c4fb4();
L_004da7f1:; BB(0x004da7f1);
    /* 004da7f1: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004da7f4: ret  */ FN_RET(0x004da768); r_esp += 4; return;
}

void f_004da7f8(void) /* sub_4DA7F8 */
{
    FN_ENTER(0x004da7f8);
    /* 004da7f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da7f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004da7fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004da7fb: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 004da7ff: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004da804: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da806: je 0x4da85f */ if (fZ) goto L_004da85f;
L_004da808:; BB(0x004da808);
    /* 004da808: mov eax, dword ptr [0xa48bfc] */ r_eax = R32((u32)(0xa48bfcu));
    /* 004da80d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004da80f: jl 0x4da85f */ if ((fS!=fO)) goto L_004da85f;
L_004da811:; BB(0x004da811);
    /* 004da811: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004da814: jge 0x4da85f */ if ((fS==fO)) goto L_004da85f;
L_004da816:; BB(0x004da816);
    /* 004da816: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004da818: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004da81c: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004da81f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004da821: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 004da823: lea ebx, [eax + ebx*4] */ r_ebx = (u32)(r_eax+r_ebx*4);
    /* 004da826: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004da829: lea esi, [eax + eax + 0xa48c48] */ r_esi = (u32)(r_eax+r_eax+0xa48c48u);
    /* 004da830: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da831: call 0x4d9eec */ r_esp -= 4; W32(r_esp, 0x4da836u); f_004d9eec();
    /* 004da836: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004da838: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004da83c: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004da83f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004da840: call 0x4d9eec */ r_esp -= 4; W32(r_esp, 0x4da845u); f_004d9eec();
    /* 004da845: mov dword ptr [ebx*4 + 0xa48c78], ebp */ W32((u32)(r_ebx*4+0xa48c78u), r_ebp);
    /* 004da84c: add dword ptr [0xa48bfc], 1 */ { u32 ad = (u32)(0xa48bfcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004da853: mov eax, 1 */ r_eax = 0x1u;
    /* 004da858: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004da85b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004da85c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da85d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004da85e: ret  */ FN_RET(0x004da7f8); r_esp += 4; return;
L_004da85f:; BB(0x004da85f);
    /* 004da85f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004da861: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004da862: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da863: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004da864: ret  */ FN_RET(0x004da7f8); r_esp += 4; return;
}

void f_004da868(void) /* sub_4DA868 */
{
    FN_ENTER(0x004da868);
    /* 004da868: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004da86d: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4da872u); f_006c1bd4();
    /* 004da872: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004da874: add eax, 0x28e8 */ {  u32 a = r_eax; u32 b = 0x28e8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004da879: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004da87a: push 0xa49540 */ { u32 v = 0xa49540u; r_esp -= 4; W32(r_esp, v); }
    /* 004da87f: call 0x4d9f78 */ r_esp -= 4; W32(r_esp, 0x4da884u); f_004d9f78();
    /* 004da884: mov eax, 0xa49540 */ r_eax = 0xa49540u;
    /* 004da889: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004da88c: ret  */ FN_RET(0x004da868); r_esp += 4; return;
}

void f_004da890(void) /* sub_4DA890 */
{
    FN_ENTER(0x004da890);
    /* 004da890: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004da891: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004da892: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004da895: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 004da899: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 004da89d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004da89f: jl 0x4da97f */ if ((fS!=fO)) goto L_004da97f;
L_004da8a5:; BB(0x004da8a5);
    /* 004da8a5: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004da8a8: jge 0x4da97f */ if ((fS==fO)) goto L_004da97f;
L_004da8ae:; BB(0x004da8ae);
    /* 004da8ae: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004da8b0: call 0x4da16c */ r_esp -= 4; W32(r_esp, 0x4da8b5u); f_004da16c();
    /* 004da8b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da8b6: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004da8b8: jl 0x4da97f */ if ((fS!=fO)) goto L_004da97f;
L_004da8be:; BB(0x004da8be);
    /* 004da8be: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da8c0: jne 0x4da8ce */ if (!fZ) goto L_004da8ce;
L_004da8c2:; BB(0x004da8c2);
    /* 004da8c2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004da8c4: call 0x4da194 */ r_esp -= 4; W32(r_esp, 0x4da8c9u); f_004da194();
    /* 004da8c9: mov ebp, eax */ r_ebp = r_eax;
    /* 004da8cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004da8ce:; BB(0x004da8ce);
    /* 004da8ce: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 004da8d1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004da8d3: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 004da8d6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004da8d8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004da8da: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004da8dc: mov ecx, dword ptr [edx + 0xa48f88] */ r_ecx = R32((u32)(r_edx+0xa48f88u));
    /* 004da8e2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da8e4: jne 0x4da97f */ if (!fZ) goto L_004da97f;
L_004da8ea:; BB(0x004da8ea);
    /* 004da8ea: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 004da8ee: mov dword ptr [edx + 0xa48f88], ebp */ W32((u32)(r_edx+0xa48f88u), r_ebp);
    /* 004da8f4: mov dword ptr [edx + 0xa48f8c], ecx */ W32((u32)(r_edx+0xa48f8cu), r_ecx);
    /* 004da8fa: mov eax, 0xa48f88 */ r_eax = 0xa48f88u;
    /* 004da8ff: mov ecx, 0x7fffffff */ r_ecx = 0x7fffffffu;
    /* 004da904: mov edx, 0xa48fdc */ r_edx = 0xa48fdcu;
    /* 004da909: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004da90b: jae 0x4da926 */ if (!fC) goto L_004da926;
L_004da90d:; BB(0x004da90d);
    /* 004da90d: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_004da910:; BB(0x004da910);
    /* 004da910: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 004da912: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da914: je 0x4da91c */ if (fZ) goto L_004da91c;
L_004da916:; BB(0x004da916);
    /* 004da916: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004da918: jle 0x4da987 */ if ((fZ||fS!=fO)) goto L_004da987;
L_004da91a:; BB(0x004da91a);
    /* 004da91a: mov ecx, esi */ r_ecx = r_esi;
L_004da91c:; BB(0x004da91c);
    /* 004da91c: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004da91f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004da921: jb 0x4da910 */ if (fC) goto L_004da910;
L_004da923:; BB(0x004da923);
    /* 004da923: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_004da926:; BB(0x004da926);
    /* 004da926: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 004da92c: cmp edx, dword ptr [0xa9c4dc] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da932: jne 0x4da974 */ if (!fZ) goto L_004da974;
L_004da934:; BB(0x004da934);
    /* 004da934: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 004da93a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da93c: je 0x4da974 */ if (fZ) goto L_004da974;
L_004da93e:; BB(0x004da93e);
    /* 004da93e: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004da942: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 004da946: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 004da94a: mov edx, 0x14 */ r_edx = 0x14u;
    /* 004da94f: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 004da957: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004da95c: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004da960: mov byte ptr [esp + 6], 0xdf */ W8((u32)(r_esp+0x6u), 0xdfu);
    /* 004da965: mov byte ptr [esp + 7], 6 */ W8((u32)(r_esp+0x7u), 0x6u);
    /* 004da96a: lea ebp, [esp + 4] */ r_ebp = (u32)(r_esp+0x4u);
    /* 004da96e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004da96f: call 0x7c4fb4 */ r_esp -= 4; W32(r_esp, 0x4da974u); f_007c4fb4();
L_004da974:; BB(0x004da974);
    /* 004da974: mov eax, 1 */ r_eax = 0x1u;
    /* 004da979: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004da97c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da97d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004da97e: ret  */ FN_RET(0x004da890); r_esp += 4; return;
L_004da97f:; BB(0x004da97f);
    /* 004da97f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004da981: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004da984: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da985: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004da986: ret  */ FN_RET(0x004da890); r_esp += 4; return;
L_004da987:; BB(0x004da987);
    /* 004da987: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004da98a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004da98c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004da98f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da990: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004da991: ret  */ FN_RET(0x004da890); r_esp += 4; return;
}

void f_004da994(void) /* sub_4DA994 */
{
    FN_ENTER(0x004da994);
    /* 004da994: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004da995: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004da998: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 004da99c: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004da9a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da9a3: je 0x4daa40 */ if (fZ) goto L_004daa40;
L_004da9a9:; BB(0x004da9a9);
    /* 004da9a9: mov eax, dword ptr [0xa48be0] */ r_eax = R32((u32)(0xa48be0u));
    /* 004da9ae: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da9b1: je 0x4daa40 */ if (fZ) goto L_004daa40;
L_004da9b7:; BB(0x004da9b7);
    /* 004da9b7: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004da9bc: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4da9c1u); f_006c1bd4();
    /* 004da9c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da9c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da9c4: je 0x4daa40 */ if (fZ) goto L_004daa40;
L_004da9c6:; BB(0x004da9c6);
    /* 004da9c6: mov edx, dword ptr [0xa48bec] */ r_edx = R32((u32)(0xa48becu));
    /* 004da9cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004da9cd: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004da9cf: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004da9d1: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004da9d5: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 004da9d9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004da9dc: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4da9e1u); f_0082e900();
    /* 004da9e1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004da9e3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004da9e4: call 0x4d8d9c */ r_esp -= 4; W32(r_esp, 0x4da9e9u); f_004d8d9c();
    /* 004da9e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004da9ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004da9ec: je 0x4da9f3 */ if (fZ) goto L_004da9f3;
L_004da9ee:; BB(0x004da9ee);
    /* 004da9ee: mov ebx, 0x8c9f */ r_ebx = 0x8c9fu;
L_004da9f3:; BB(0x004da9f3);
    /* 004da9f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004da9f4: call 0x4d8dec */ r_esp -= 4; W32(r_esp, 0x4da9f9u); f_004d8dec();
    /* 004da9f9: mov ebx, eax */ r_ebx = r_eax;
    /* 004da9fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004da9fe: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 004daa04: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004daa06: je 0x4daa0d */ if (fZ) goto L_004daa0d;
L_004daa08:; BB(0x004daa08);
    /* 004daa08: call 0x7f2d50 */ r_esp -= 4; W32(r_esp, 0x4daa0du); f_007f2d50();
L_004daa0d:; BB(0x004daa0d);
    /* 004daa0d: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004daa10: je 0x4daa54 */ if (fZ) goto L_004daa54;
L_004daa12:; BB(0x004daa12);
    /* 004daa12: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004daa14: jl 0x4daa68 */ if ((fS!=fO)) goto L_004daa68;
L_004daa16:; BB(0x004daa16);
    /* 004daa16: call 0x4daa7c */ r_esp -= 4; W32(r_esp, 0x4daa1bu); f_004daa7c();
    /* 004daa1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004daa1d: jne 0x4daa33 */ if (!fZ) goto L_004daa33;
L_004daa1f:; BB(0x004daa1f);
    /* 004daa1f: mov dword ptr [0xa48bf4], 0xfffffffd */ W32((u32)(0xa48bf4u), 0xfffffffdu);
    /* 004daa29: mov eax, 0xfffffffd */ r_eax = 0xfffffffdu;
    /* 004daa2e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004daa31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004daa32: ret  */ FN_RET(0x004da994); r_esp += 4; return;
L_004daa33:; BB(0x004daa33);
    /* 004daa33: mov dword ptr [0xa48bf4], ebx */ W32((u32)(0xa48bf4u), r_ebx);
    /* 004daa39: mov eax, ebx */ r_eax = r_ebx;
    /* 004daa3b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004daa3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004daa3f: ret  */ FN_RET(0x004da994); r_esp += 4; return;
L_004daa40:; BB(0x004daa40);
    /* 004daa40: mov dword ptr [0xa48bf4], 0xfffffffc */ W32((u32)(0xa48bf4u), 0xfffffffcu);
    /* 004daa4a: mov eax, 0xfffffffc */ r_eax = 0xfffffffcu;
    /* 004daa4f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004daa52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004daa53: ret  */ FN_RET(0x004da994); r_esp += 4; return;
L_004daa54:; BB(0x004daa54);
    /* 004daa54: mov dword ptr [0xa48bf4], 0xffffffff */ W32((u32)(0xa48bf4u), 0xffffffffu);
    /* 004daa5e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004daa63: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004daa66: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004daa67: ret  */ FN_RET(0x004da994); r_esp += 4; return;
L_004daa68:; BB(0x004daa68);
    /* 004daa68: mov dword ptr [0xa48bf4], 0xfffffffe */ W32((u32)(0xa48bf4u), 0xfffffffeu);
    /* 004daa72: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 004daa77: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004daa7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004daa7b: ret  */ FN_RET(0x004da994); r_esp += 4; return;
}

void f_004daa7c(void) /* sub_4DAA7C */
{
    FN_ENTER(0x004daa7c);
    /* 004daa7c: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004daa81: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x4daa86u); f_006c1bcc();
    /* 004daa86: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 004daa89: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004daa8b: add eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004daa8e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004daa90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004daa92: jge 0x4daa96 */ if ((fS==fO)) goto L_004daa96;
L_004daa94:; BB(0x004daa94);
    /* 004daa94: mov eax, edx */ r_eax = r_edx;
L_004daa96:; BB(0x004daa96);
    /* 004daa96: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004daa97: ret  */ FN_RET(0x004daa7c); r_esp += 4; return;
}

void f_004daa98(void) /* sub_4DAA98 */
{
    FN_ENTER(0x004daa98);
    /* 004daa98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004daa99: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004daa9c: mov eax, dword ptr [0xa48bf4] */ r_eax = R32((u32)(0xa48bf4u));
    /* 004daaa1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004daaa3: jl 0x4daaaa */ if ((fS!=fO)) goto L_004daaaa;
L_004daaa5:; BB(0x004daaa5);
    /* 004daaa5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004daaa8: jle 0x4daab1 */ if ((fZ||fS!=fO)) goto L_004daab1;
L_004daaaa:; BB(0x004daaaa);
    /* 004daaaa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004daaac: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004daaaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004daab0: ret  */ FN_RET(0x004daa98); r_esp += 4; return;
L_004daab1:; BB(0x004daab1);
    /* 004daab1: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004daab6: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4daabbu); f_006c1bd4();
    /* 004daabb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004daabc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004daabe: je 0x4daaaa */ if (fZ) goto L_004daaaa;
L_004daac0:; BB(0x004daac0);
    /* 004daac0: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004daac4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004daac5: call 0x6c43f8 */ r_esp -= 4; W32(r_esp, 0x4daacau); f_006c43f8();
    /* 004daaca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004daacb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004daacd: je 0x4daaaa */ if (fZ) goto L_004daaaa;
L_004daacf:; BB(0x004daacf);
    /* 004daacf: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004daad4: mov eax, dword ptr [0xa48bf4] */ r_eax = R32((u32)(0xa48bf4u));
    /* 004daad9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004daadb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004daadd: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 004daae0: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004daae2: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004daae4: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004daae6: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4daaebu); f_006c1bd4();
    /* 004daaeb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004daaed: add eax, 0x27dc */ {  u32 a = r_eax; u32 b = 0x27dcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004daaf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004daaf3: call 0x4da114 */ r_esp -= 4; W32(r_esp, 0x4daaf8u); f_004da114();
    /* 004daaf8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004daafb: mov edx, dword ptr [ebp + 0xa48f8c] */ r_edx = R32((u32)(r_ebp+0xa48f8cu));
    /* 004dab01: or dword ptr [eax], edx */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 004dab03: mov eax, dword ptr [0xaab284] */ r_eax = R32((u32)(0xaab284u));
    /* 004dab08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dab0a: je 0x4dab97 */ if (fZ) goto L_004dab97;
L_004dab10:; BB(0x004dab10);
    /* 004dab10: mov byte ptr [esp + 2], 0xdf */ W8((u32)(r_esp+0x2u), 0xdfu);
    /* 004dab15: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 004dab19: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004dab1b: mov eax, 0x24 */ r_eax = 0x24u;
    /* 004dab20: mov byte ptr [esp + 3], 7 */ W8((u32)(r_esp+0x3u), 0x7u);
    /* 004dab25: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004dab29: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 004dab2d: mov dword ptr [esp + 8], 0xffffffff */ W32((u32)(r_esp+0x8u), 0xffffffffu);
    /* 004dab35: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004dab39: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x4dab3eu); f_005d6a3c();
    /* 004dab3e: mov eax, dword ptr [0xa48bf4] */ r_eax = R32((u32)(0xa48bf4u));
    /* 004dab43: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004dab47: mov edx, dword ptr [ebp + 0xa48f8c] */ r_edx = R32((u32)(r_ebp+0xa48f8cu));
    /* 004dab4d: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 004dab51: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004dab55: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 004dab58: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004dab5b: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004dab5f: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004dab63: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 004dab69: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004dab6d: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004dab71: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004dab74: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004dab78: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004dab7c: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 004dab7f: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004dab83: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004dab87: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 004dab8a: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004dab8e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004dab91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dab92: call 0x7c4fb4 */ r_esp -= 4; W32(r_esp, 0x4dab97u); f_007c4fb4();
L_004dab97:; BB(0x004dab97);
    /* 004dab97: mov eax, 1 */ r_eax = 0x1u;
    /* 004dab9c: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004dab9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004daba0: ret  */ FN_RET(0x004daa98); r_esp += 4; return;
}

void f_004daba4(void) /* sub_4DABA4 */
{
    FN_ENTER(0x004daba4);
    /* 004daba4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004daba5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004daba8: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 004dabac: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004dabb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dabb3: je 0x4dabe3 */ if (fZ) goto L_004dabe3;
L_004dabb5:; BB(0x004dabb5);
    /* 004dabb5: mov edx, dword ptr [0xa48bec] */ r_edx = R32((u32)(0xa48becu));
    /* 004dabbb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dabbc: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004dabbe: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004dabc0: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004dabc4: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 004dabc8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004dabcb: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4dabd0u); f_0082e900();
    /* 004dabd0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004dabd2: mov dword ptr [0xa48bec], edi */ W32((u32)(0xa48becu), r_edi);
    /* 004dabd8: mov dword ptr [0xa4989c], edi */ W32((u32)(0xa4989cu), r_edi);
    /* 004dabde: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004dabe1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dabe2: ret  */ FN_RET(0x004daba4); r_esp += 4; return;
L_004dabe3:; BB(0x004dabe3);
    /* 004dabe3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004dabe6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dabe7: ret  */ FN_RET(0x004daba4); r_esp += 4; return;
}

void f_004dabe8(void) /* sub_4DABE8 */
{
    FN_ENTER(0x004dabe8);
    /* 004dabe8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dabe9: mov ebp, esp */ r_ebp = r_esp;
    /* 004dabeb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dabed: push 0x8d22e0 */ { u32 v = 0x8d22e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dabf2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004dabf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dabf9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004dac00: sub esp, 0x5f0 */ {  u32 a = r_esp; u32 b = 0x5f0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dac06: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004dac09: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 004dac0c: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
    /* 004dac0f: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 004dac12: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004dac15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dac17: jl 0x4db2de */ if ((fS!=fO)) goto L_004db2de;
L_004dac1d:; BB(0x004dac1d);
    /* 004dac1d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004dac20: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004dac23: jge 0x4db2de */ if ((fS==fO)) goto L_004db2de;
L_004dac29:; BB(0x004dac29);
    /* 004dac29: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004dac2c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004dac2e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004dac31: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 004dac34: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004dac36: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004dac38: lea ecx, [esi + esi + 0x9ae1e0] */ r_ecx = (u32)(r_esi+r_esi+0x9ae1e0u);
    /* 004dac3f: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 004dac42: lea ebx, [esi + esi + 0x9b05a0] */ r_ebx = (u32)(r_esi+r_esi+0x9b05a0u);
    /* 004dac49: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 004dac4c: lea edi, [esi + esi + 0x9af360] */ r_edi = (u32)(r_esi+r_esi+0x9af360u);
    /* 004dac53: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
L_004dac56:; BB(0x004dac56);
    /* 004dac56: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004dac59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dac5a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4dac5fu); f_0068d5a8();
    /* 004dac5f: mov ecx, eax */ r_ecx = r_eax;
    /* 004dac61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dac64: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dac66: je 0x4db1d7 */ if (fZ) goto L_004db1d7;
L_004dac6c:; BB(0x004dac6c);
    /* 004dac6c: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 004dac6f: mov ebx, dword ptr [ecx + 0x3c] */ r_ebx = R32((u32)(r_ecx+0x3cu));
    /* 004dac72: mov esi, dword ptr [ecx + 0x40] */ r_esi = R32((u32)(r_ecx+0x40u));
    /* 004dac75: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004dac78: lea eax, [ecx + 0x930] */ r_eax = (u32)(r_ecx+0x930u);
    /* 004dac7e: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004dac80: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004dac83: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 004dac86: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004dac89: mov dword ptr [ebp - 0x5a0], edi */ W32((u32)(r_ebp+0xfffffa60u), r_edi);
    /* 004dac8f: mov dword ptr [ebp - 0x59c], edx */ W32((u32)(r_ebp+0xfffffa64u), r_edx);
    /* 004dac95: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004dac98: mov dword ptr [ebp - 0x598], edx */ W32((u32)(r_ebp+0xfffffa68u), r_edx);
    /* 004dac9e: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 004daca1: mov dword ptr [ebp - 0x594], edx */ W32((u32)(r_ebp+0xfffffa6cu), r_edx);
    /* 004daca7: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 004dacaa: mov dword ptr [ebp - 0x590], edx */ W32((u32)(r_ebp+0xfffffa70u), r_edx);
    /* 004dacb0: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 004dacb3: mov dword ptr [ebp - 0x58c], edx */ W32((u32)(r_ebp+0xfffffa74u), r_edx);
    /* 004dacb9: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004dacbc: mov dword ptr [ebp - 0x588], edx */ W32((u32)(r_ebp+0xfffffa78u), r_edx);
    /* 004dacc2: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004dacc5: mov dword ptr [ebp - 0x584], edx */ W32((u32)(r_ebp+0xfffffa7cu), r_edx);
    /* 004daccb: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 004dacce: mov dword ptr [ebp - 0x580], edx */ W32((u32)(r_ebp+0xfffffa80u), r_edx);
    /* 004dacd4: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 004dacd7: mov dword ptr [ebp - 0x57c], edx */ W32((u32)(r_ebp+0xfffffa84u), r_edx);
    /* 004dacdd: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 004dace0: mov dword ptr [ebp - 0x578], edx */ W32((u32)(r_ebp+0xfffffa88u), r_edx);
    /* 004dace6: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004dace9: mov dword ptr [ebp - 0x574], edx */ W32((u32)(r_ebp+0xfffffa8cu), r_edx);
    /* 004dacef: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004dacf2: mov dword ptr [ebp - 0x570], edx */ W32((u32)(r_ebp+0xfffffa90u), r_edx);
    /* 004dacf8: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 004dacfb: mov dword ptr [ebp - 0x56c], edx */ W32((u32)(r_ebp+0xfffffa94u), r_edx);
    /* 004dad01: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004dad04: mov dword ptr [ebp - 0x568], edx */ W32((u32)(r_ebp+0xfffffa98u), r_edx);
    /* 004dad0a: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 004dad0d: mov dword ptr [ebp - 0x564], edx */ W32((u32)(r_ebp+0xfffffa9cu), r_edx);
    /* 004dad13: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004dad16: mov dword ptr [ebp - 0x560], edx */ W32((u32)(r_ebp+0xfffffaa0u), r_edx);
    /* 004dad1c: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004dad1f: mov dword ptr [ebp - 0x55c], edx */ W32((u32)(r_ebp+0xfffffaa4u), r_edx);
    /* 004dad25: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 004dad28: mov dword ptr [ebp - 0x558], edx */ W32((u32)(r_ebp+0xfffffaa8u), r_edx);
    /* 004dad2e: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 004dad31: mov dword ptr [ebp - 0x554], edx */ W32((u32)(r_ebp+0xfffffaacu), r_edx);
    /* 004dad37: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 004dad3a: mov dword ptr [ebp - 0x550], edx */ W32((u32)(r_ebp+0xfffffab0u), r_edx);
    /* 004dad40: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 004dad43: mov dword ptr [ebp - 0x54c], edx */ W32((u32)(r_ebp+0xfffffab4u), r_edx);
    /* 004dad49: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 004dad4c: mov dword ptr [ebp - 0x548], edx */ W32((u32)(r_ebp+0xfffffab8u), r_edx);
    /* 004dad52: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 004dad55: mov dword ptr [ebp - 0x544], edx */ W32((u32)(r_ebp+0xfffffabcu), r_edx);
    /* 004dad5b: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 004dad5e: mov dword ptr [ebp - 0x540], edx */ W32((u32)(r_ebp+0xfffffac0u), r_edx);
    /* 004dad64: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 004dad67: mov dword ptr [ebp - 0x53c], edx */ W32((u32)(r_ebp+0xfffffac4u), r_edx);
    /* 004dad6d: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 004dad70: mov dword ptr [ebp - 0x538], edx */ W32((u32)(r_ebp+0xfffffac8u), r_edx);
    /* 004dad76: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 004dad79: mov dword ptr [ebp - 0x534], edx */ W32((u32)(r_ebp+0xfffffaccu), r_edx);
    /* 004dad7f: mov edx, dword ptr [ecx + 0xeb0] */ r_edx = R32((u32)(r_ecx+0xeb0u));
    /* 004dad85: mov ebx, dword ptr [ecx + 0xeb4] */ r_ebx = R32((u32)(r_ecx+0xeb4u));
    /* 004dad8b: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004dad8e: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 004dad91: je 0x4dad99 */ if (fZ) goto L_004dad99;
L_004dad93:; BB(0x004dad93);
    /* 004dad93: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004dad95: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004dad97: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x4dad99u); call_ind(t); }
L_004dad99:; BB(0x004dad99);
    /* 004dad99: mov eax, dword ptr [ebp - 0x56c] */ r_eax = R32((u32)(r_ebp+0xfffffa94u));
    /* 004dad9f: and eax, 0xe0 */ {  u32 a = r_eax; u32 b = 0xe0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004dada4: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dada7: je 0x4dadcd */ if (fZ) goto L_004dadcd;
L_004dada9:; BB(0x004dada9);
    /* 004dada9: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dadac: jne 0x4dadb6 */ if (!fZ) goto L_004dadb6;
L_004dadae:; BB(0x004dadae);
    /* 004dadae: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004dadb1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004dadb4: jmp 0x4dadd3 */ goto L_004dadd3;
L_004dadb6:; BB(0x004dadb6);
    /* 004dadb6: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dadbb: jne 0x4dadc5 */ if (!fZ) goto L_004dadc5;
L_004dadbd:; BB(0x004dadbd);
    /* 004dadbd: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004dadc0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004dadc3: jmp 0x4dadd3 */ goto L_004dadd3;
L_004dadc5:; BB(0x004dadc5);
    /* 004dadc5: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004dadc8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004dadcb: jmp 0x4dadd3 */ goto L_004dadd3;
L_004dadcd:; BB(0x004dadcd);
    /* 004dadcd: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004dadd0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_004dadd3:; BB(0x004dadd3);
    /* 004dadd3: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dadd8: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 004daddd: lea eax, [ebp - 0x530] */ r_eax = (u32)(r_ebp+0xfffffad0u);
    /* 004dade3: mov dword ptr [ebp - 0x5fc], eax */ W32((u32)(r_ebp+0xfffffa04u), r_eax);
    /* 004dade9: lea edx, [ebp - 0x150] */ r_edx = (u32)(r_ebp+0xfffffeb0u);
    /* 004dadef: mov dword ptr [ebp - 0x5f4], edx */ W32((u32)(r_ebp+0xfffffa0cu), r_edx);
    /* 004dadf5: lea ecx, [ebp - 0x150] */ r_ecx = (u32)(r_ebp+0xfffffeb0u);
    /* 004dadfb: mov dword ptr [ebp - 0x5ec], ecx */ W32((u32)(r_ebp+0xfffffa14u), r_ecx);
    /* 004dae01: lea ebx, [ebp - 0x14c] */ r_ebx = (u32)(r_ebp+0xfffffeb4u);
    /* 004dae07: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004dae09: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004dae0b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dae0c: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x4dae11u); f_00858736();
    /* 004dae11: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004dae18: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dae1d: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 004dae22: lea eax, [ebp - 0x114] */ r_eax = (u32)(r_ebp+0xfffffeecu);
    /* 004dae28: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004dae2a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004dae2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dae2d: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x4dae32u); f_00858736();
    /* 004dae32: mov dword ptr [ebp - 0x150], 0 */ W32((u32)(r_ebp+0xfffffeb0u), 0x0u);
    /* 004dae3c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004dae43: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dae48: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 004dae4d: lea eax, [ebp - 0xdc] */ r_eax = (u32)(r_ebp+0xffffff24u);
    /* 004dae53: mov dword ptr [ebp - 0x5e4], eax */ W32((u32)(r_ebp+0xfffffa1cu), r_eax);
    /* 004dae59: lea edx, [ebp - 0xd8] */ r_edx = (u32)(r_ebp+0xffffff28u);
    /* 004dae5f: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004dae61: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004dae63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dae64: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x4dae69u); f_00858736();
    /* 004dae69: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004dae70: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dae75: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 004dae7a: lea eax, [ebp - 0xa0] */ r_eax = (u32)(r_ebp+0xffffff60u);
    /* 004dae80: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004dae82: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004dae84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dae85: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x4dae8au); f_00858736();
    /* 004dae8a: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
    /* 004dae94: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004dae9b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004dae9d:; BB(0x004dae9d);
    /* 004dae9d: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004daea0: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004daea2: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 004daea5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004daea7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004daea9: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004daeab: mov byte ptr [ebp + edx - 0x52b], 0xff */ W8((u32)(r_ebp+r_edx+0xfffffad5u), 0xffu);
    /* 004daeb3: lea ecx, [ebp + edx - 0x524] */ r_ecx = (u32)(r_ebp+r_edx+0xfffffadcu);
    /* 004daeba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004daebc: mov byte ptr [ebp + edx - 0x52c], al */ W8((u32)(r_ebp+r_edx+0xfffffad4u), (u8)r_eax);
    /* 004daec3: mov dword ptr [ebp + edx - 0x528], eax */ W32((u32)(r_ebp+r_edx+0xfffffad8u), r_eax);
    /* 004daeca: mov byte ptr [ebp + edx - 0x529], al */ W8((u32)(r_ebp+r_edx+0xfffffad7u), (u8)r_eax);
    /* 004daed1: mov byte ptr [ebp + edx - 0x52a], al */ W8((u32)(r_ebp+r_edx+0xfffffad6u), (u8)r_eax);
    /* 004daed8: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x4daeddu); f_005d6a3c();
    /* 004daedd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004daee0: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004daee3: jl 0x4dae9d */ if ((fS!=fO)) goto L_004dae9d;
L_004daee5:; BB(0x004daee5);
    /* 004daee5: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004daeec: mov eax, dword ptr [ebp - 0x5a0] */ r_eax = R32((u32)(r_ebp+0xfffffa60u));
    /* 004daef2: mov edx, dword ptr [ebp - 0x59c] */ r_edx = R32((u32)(r_ebp+0xfffffa64u));
    /* 004daef8: mov ecx, dword ptr [ebp - 0x598] */ r_ecx = R32((u32)(r_ebp+0xfffffa68u));
    /* 004daefe: mov ebx, dword ptr [ebp - 0x594] */ r_ebx = R32((u32)(r_ebp+0xfffffa6cu));
    /* 004daf04: mov esi, dword ptr [ebp - 0x590] */ r_esi = R32((u32)(r_ebp+0xfffffa70u));
    /* 004daf0a: mov edi, dword ptr [ebp - 0x58c] */ r_edi = R32((u32)(r_ebp+0xfffffa74u));
    /* 004daf10: mov dword ptr [ebp - 0x1c0], eax */ W32((u32)(r_ebp+0xfffffe40u), r_eax);
    /* 004daf16: mov eax, dword ptr [ebp - 0x588] */ r_eax = R32((u32)(r_ebp+0xfffffa78u));
    /* 004daf1c: mov dword ptr [ebp - 0x1bc], edx */ W32((u32)(r_ebp+0xfffffe44u), r_edx);
    /* 004daf22: mov dword ptr [ebp - 0x1b8], ecx */ W32((u32)(r_ebp+0xfffffe48u), r_ecx);
    /* 004daf28: mov dword ptr [ebp - 0x1b4], ebx */ W32((u32)(r_ebp+0xfffffe4cu), r_ebx);
    /* 004daf2e: mov dword ptr [ebp - 0x1b0], esi */ W32((u32)(r_ebp+0xfffffe50u), r_esi);
    /* 004daf34: mov dword ptr [ebp - 0x1ac], edi */ W32((u32)(r_ebp+0xfffffe54u), r_edi);
    /* 004daf3a: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 004daf40: mov eax, dword ptr [ebp - 0x584] */ r_eax = R32((u32)(r_ebp+0xfffffa7cu));
    /* 004daf46: mov dword ptr [ebp - 0x1a4], eax */ W32((u32)(r_ebp+0xfffffe5cu), r_eax);
    /* 004daf4c: mov eax, dword ptr [ebp - 0x580] */ r_eax = R32((u32)(r_ebp+0xfffffa80u));
    /* 004daf52: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 004daf58: mov eax, dword ptr [ebp - 0x57c] */ r_eax = R32((u32)(r_ebp+0xfffffa84u));
    /* 004daf5e: mov dword ptr [ebp - 0x19c], eax */ W32((u32)(r_ebp+0xfffffe64u), r_eax);
    /* 004daf64: mov eax, dword ptr [ebp - 0x578] */ r_eax = R32((u32)(r_ebp+0xfffffa88u));
    /* 004daf6a: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 004daf70: mov eax, dword ptr [ebp - 0x574] */ r_eax = R32((u32)(r_ebp+0xfffffa8cu));
    /* 004daf76: mov dword ptr [ebp - 0x194], eax */ W32((u32)(r_ebp+0xfffffe6cu), r_eax);
    /* 004daf7c: mov eax, dword ptr [ebp - 0x570] */ r_eax = R32((u32)(r_ebp+0xfffffa90u));
    /* 004daf82: mov dword ptr [ebp - 0x190], eax */ W32((u32)(r_ebp+0xfffffe70u), r_eax);
    /* 004daf88: mov eax, dword ptr [ebp - 0x56c] */ r_eax = R32((u32)(r_ebp+0xfffffa94u));
    /* 004daf8e: mov dword ptr [ebp - 0x18c], eax */ W32((u32)(r_ebp+0xfffffe74u), r_eax);
    /* 004daf94: mov eax, dword ptr [ebp - 0x568] */ r_eax = R32((u32)(r_ebp+0xfffffa98u));
    /* 004daf9a: mov dword ptr [ebp - 0x188], eax */ W32((u32)(r_ebp+0xfffffe78u), r_eax);
    /* 004dafa0: mov eax, dword ptr [ebp - 0x564] */ r_eax = R32((u32)(r_ebp+0xfffffa9cu));
    /* 004dafa6: mov dword ptr [ebp - 0x184], eax */ W32((u32)(r_ebp+0xfffffe7cu), r_eax);
    /* 004dafac: mov eax, dword ptr [ebp - 0x560] */ r_eax = R32((u32)(r_ebp+0xfffffaa0u));
    /* 004dafb2: mov dword ptr [ebp - 0x180], eax */ W32((u32)(r_ebp+0xfffffe80u), r_eax);
    /* 004dafb8: mov eax, dword ptr [ebp - 0x55c] */ r_eax = R32((u32)(r_ebp+0xfffffaa4u));
    /* 004dafbe: mov dword ptr [ebp - 0x17c], eax */ W32((u32)(r_ebp+0xfffffe84u), r_eax);
    /* 004dafc4: mov eax, dword ptr [ebp - 0x558] */ r_eax = R32((u32)(r_ebp+0xfffffaa8u));
    /* 004dafca: mov dword ptr [ebp - 0x178], eax */ W32((u32)(r_ebp+0xfffffe88u), r_eax);
    /* 004dafd0: mov eax, dword ptr [ebp - 0x554] */ r_eax = R32((u32)(r_ebp+0xfffffaacu));
    /* 004dafd6: mov dword ptr [ebp - 0x174], eax */ W32((u32)(r_ebp+0xfffffe8cu), r_eax);
    /* 004dafdc: mov eax, dword ptr [ebp - 0x550] */ r_eax = R32((u32)(r_ebp+0xfffffab0u));
    /* 004dafe2: mov dword ptr [ebp - 0x170], eax */ W32((u32)(r_ebp+0xfffffe90u), r_eax);
    /* 004dafe8: mov eax, dword ptr [ebp - 0x54c] */ r_eax = R32((u32)(r_ebp+0xfffffab4u));
    /* 004dafee: mov dword ptr [ebp - 0x16c], eax */ W32((u32)(r_ebp+0xfffffe94u), r_eax);
    /* 004daff4: mov eax, dword ptr [ebp - 0x548] */ r_eax = R32((u32)(r_ebp+0xfffffab8u));
    /* 004daffa: mov dword ptr [ebp - 0x168], eax */ W32((u32)(r_ebp+0xfffffe98u), r_eax);
    /* 004db000: mov eax, dword ptr [ebp - 0x544] */ r_eax = R32((u32)(r_ebp+0xfffffabcu));
    /* 004db006: mov dword ptr [ebp - 0x164], eax */ W32((u32)(r_ebp+0xfffffe9cu), r_eax);
    /* 004db00c: mov eax, dword ptr [ebp - 0x540] */ r_eax = R32((u32)(r_ebp+0xfffffac0u));
    /* 004db012: mov dword ptr [ebp - 0x160], eax */ W32((u32)(r_ebp+0xfffffea0u), r_eax);
    /* 004db018: mov eax, dword ptr [ebp - 0x53c] */ r_eax = R32((u32)(r_ebp+0xfffffac4u));
    /* 004db01e: mov dword ptr [ebp - 0x15c], eax */ W32((u32)(r_ebp+0xfffffea4u), r_eax);
    /* 004db024: mov eax, dword ptr [ebp - 0x538] */ r_eax = R32((u32)(r_ebp+0xfffffac8u));
    /* 004db02a: mov dword ptr [ebp - 0x158], eax */ W32((u32)(r_ebp+0xfffffea8u), r_eax);
    /* 004db030: mov eax, dword ptr [ebp - 0x534] */ r_eax = R32((u32)(r_ebp+0xfffffaccu));
    /* 004db036: mov dword ptr [ebp - 0x154], eax */ W32((u32)(r_ebp+0xfffffeacu), r_eax);
    /* 004db03c: lea eax, [ebp - 0x530] */ r_eax = (u32)(r_ebp+0xfffffad0u);
    /* 004db042: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db043: call 0x6ab1dc */ r_esp -= 4; W32(r_esp, 0x4db048u); f_006ab1dc();
    /* 004db048: movsx ecx, byte ptr [ebp - 0x56f] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffa91u));
    /* 004db04f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004db052: lea eax, [ebp - 0x530] */ r_eax = (u32)(r_ebp+0xfffffad0u);
    /* 004db058: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db059: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 004db05b: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004db05e: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004db061: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db062: call 0x6aae34 */ r_esp -= 4; W32(r_esp, 0x4db067u); f_006aae34();
    /* 004db067: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db06a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004db06d: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db073: jne 0x4db08e */ if (!fZ) goto L_004db08e;
L_004db075:; BB(0x004db075);
    /* 004db075: mov edx, eax */ r_edx = r_eax;
    /* 004db077: lea eax, [ebp - 0x530] */ r_eax = (u32)(r_ebp+0xfffffad0u);
    /* 004db07d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db07e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004db080: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db081: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x4db086u); f_00686258();
    /* 004db086: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004db089: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db08c: jmp 0x4db0a5 */ goto L_004db0a5;
L_004db08e:; BB(0x004db08e);
    /* 004db08e: mov edx, eax */ r_edx = r_eax;
    /* 004db090: lea eax, [ebp - 0x530] */ r_eax = (u32)(r_ebp+0xfffffad0u);
    /* 004db096: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db097: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004db099: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db09a: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x4db09fu); f_00686258();
    /* 004db09f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004db0a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004db0a5:; BB(0x004db0a5);
    /* 004db0a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db0a7: je 0x4db23e */ if (fZ) goto L_004db23e;
L_004db0ad:; BB(0x004db0ad);
    /* 004db0ad: lea eax, [ebp - 0x530] */ r_eax = (u32)(r_ebp+0xfffffad0u);
    /* 004db0b3: mov dword ptr [ebp - 0x5bc], eax */ W32((u32)(r_ebp+0xfffffa44u), r_eax);
    /* 004db0b9: lea eax, [ebp - 0x150] */ r_eax = (u32)(r_ebp+0xfffffeb0u);
    /* 004db0bf: mov dword ptr [ebp - 0x5b4], eax */ W32((u32)(r_ebp+0xfffffa4cu), r_eax);
    /* 004db0c5: lea eax, [ebp - 0xdc] */ r_eax = (u32)(r_ebp+0xffffff24u);
    /* 004db0cb: mov dword ptr [ebp - 0x5ac], eax */ W32((u32)(r_ebp+0xfffffa54u), r_eax);
    /* 004db0d1: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 004db0d8: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004db0dd: lea eax, [ebp - 0xa0] */ r_eax = (u32)(r_ebp+0xffffff60u);
    /* 004db0e3: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004db0e5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004db0e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db0e8: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x4db0edu); f_008586d6();
    /* 004db0ed: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 004db0f4: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004db0f9: lea eax, [ebp - 0xd8] */ r_eax = (u32)(r_ebp+0xffffff28u);
    /* 004db0ff: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004db101: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004db103: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db104: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x4db109u); f_008586d6();
    /* 004db109: lea eax, [ebp - 0x150] */ r_eax = (u32)(r_ebp+0xfffffeb0u);
    /* 004db10f: mov dword ptr [ebp - 0x5a4], eax */ W32((u32)(r_ebp+0xfffffa5cu), r_eax);
    /* 004db115: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 004db11c: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004db121: lea eax, [ebp - 0x114] */ r_eax = (u32)(r_ebp+0xfffffeecu);
    /* 004db127: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004db129: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004db12b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db12c: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x4db131u); f_008586d6();
    /* 004db131: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004db138: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004db13d: lea eax, [ebp - 0x14c] */ r_eax = (u32)(r_ebp+0xfffffeb4u);
    /* 004db143: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004db145: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004db147: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db148: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x4db14du); f_008586d6();
    /* 004db14d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004db150: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004db153: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004db156: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004db159: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004db15c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004db15f: mov dword ptr [ecx + 0xeb0], eax */ W32((u32)(r_ecx+0xeb0u), r_eax);
    /* 004db165: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004db167: mov dword ptr [ecx + 0xeb4], edx */ W32((u32)(r_ecx+0xeb4u), r_edx);
    /* 004db16d: mov dword ptr [ecx + 0x38], ebx */ W32((u32)(r_ecx+0x38u), r_ebx);
    /* 004db170: mov dword ptr [ecx + 0x3c], esi */ W32((u32)(r_ecx+0x3cu), r_esi);
    /* 004db173: mov dword ptr [ecx + 0x40], edi */ W32((u32)(r_ecx+0x40u), r_edi);
    /* 004db176: mov dword ptr [ecx + 0x44], ebx */ W32((u32)(r_ecx+0x44u), r_ebx);
    /* 004db179: mov dword ptr [ecx + 0x48], esi */ W32((u32)(r_ecx+0x48u), r_esi);
    /* 004db17c: mov dword ptr [ecx + 0x4c], edi */ W32((u32)(r_ecx+0x4cu), r_edi);
    /* 004db17f: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x4db182u); call_ind(t); }
    /* 004db182: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004db185: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 004db18a: lea ecx, [eax + 0x460] */ r_ecx = (u32)(r_eax+0x460u);
    /* 004db190: call 0x6acf78 */ r_esp -= 4; W32(r_esp, 0x4db195u); f_006acf78();
    /* 004db195: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004db198: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 004db19b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db19d: je 0x4db1ca */ if (fZ) goto L_004db1ca;
L_004db19f:; BB(0x004db19f);
    /* 004db19f: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 004db1a2: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db1a7: je 0x4db1ca */ if (fZ) goto L_004db1ca;
L_004db1a9:; BB(0x004db1a9);
    /* 004db1a9: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
L_004db1ac:; BB(0x004db1ac);
    /* 004db1ac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004db1af: movsx eax, word ptr [ebx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004db1b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db1b3: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004db1b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db1b7: call 0x699fd8 */ r_esp -= 4; W32(r_esp, 0x4db1bcu); f_00699fd8();
    /* 004db1bc: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004db1bf: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 004db1c2: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db1c8: jne 0x4db1ac */ if (!fZ) goto L_004db1ac;
L_004db1ca:; BB(0x004db1ca);
    /* 004db1ca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004db1cd: mov dword ptr [eax + 0xe4c], 0 */ W32((u32)(r_eax+0xe4cu), 0x0u);
L_004db1d7:; BB(0x004db1d7);
    /* 004db1d7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004db1da: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004db1dd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004db1e0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004db1e3: jl 0x4dac56 */ if ((fS!=fO)) goto L_004dac56;
L_004db1e9:; BB(0x004db1e9);
    /* 004db1e9: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 004db1ee: cmp eax, dword ptr [0xa9c4dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004db1f4: jne 0x4db227 */ if (!fZ) goto L_004db227;
L_004db1f6:; BB(0x004db1f6);
    /* 004db1f6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 004db1fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db1fe: je 0x4db227 */ if (fZ) goto L_004db227;
L_004db200:; BB(0x004db200);
    /* 004db200: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004db203: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 004db20a: mov eax, 0xc */ r_eax = 0xcu;
    /* 004db20f: mov byte ptr [ebp - 0x52], 0xdf */ W8((u32)(r_ebp+0xffffffaeu), 0xdfu);
    /* 004db213: mov word ptr [ebp - 0x54], ax */ W16((u32)(r_ebp+0xffffffacu), (u16)r_eax);
    /* 004db217: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 004db21a: mov byte ptr [ebp - 0x51], 2 */ W8((u32)(r_ebp+0xffffffafu), 0x2u);
    /* 004db21e: lea ebx, [ebp - 0x54] */ r_ebx = (u32)(r_ebp+0xffffffacu);
    /* 004db221: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004db222: call 0x7c4fb4 */ r_esp -= 4; W32(r_esp, 0x4db227u); f_007c4fb4();
L_004db227:; BB(0x004db227);
    /* 004db227: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 004db22a: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 004db22d: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004db230: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004db233: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004db23a: mov esp, ebp */ r_esp = r_ebp;
    /* 004db23c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004db23d: ret  */ FN_RET(0x004dabe8); r_esp += 4; return;
L_004db23e:; BB(0x004db23e);
    /* 004db23e: lea eax, [ebp - 0x530] */ r_eax = (u32)(r_ebp+0xfffffad0u);
    /* 004db244: mov dword ptr [ebp - 0x5dc], eax */ W32((u32)(r_ebp+0xfffffa24u), r_eax);
    /* 004db24a: lea eax, [ebp - 0x150] */ r_eax = (u32)(r_ebp+0xfffffeb0u);
    /* 004db250: mov dword ptr [ebp - 0x5d4], eax */ W32((u32)(r_ebp+0xfffffa2cu), r_eax);
    /* 004db256: lea eax, [ebp - 0xdc] */ r_eax = (u32)(r_ebp+0xffffff24u);
    /* 004db25c: mov dword ptr [ebp - 0x5cc], eax */ W32((u32)(r_ebp+0xfffffa34u), r_eax);
    /* 004db262: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 004db269: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004db26e: lea eax, [ebp - 0xa0] */ r_eax = (u32)(r_ebp+0xffffff60u);
    /* 004db274: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004db276: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004db278: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db279: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x4db27eu); f_008586d6();
    /* 004db27e: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004db285: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004db28a: lea eax, [ebp - 0xd8] */ r_eax = (u32)(r_ebp+0xffffff28u);
    /* 004db290: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004db292: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004db294: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db295: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x4db29au); f_008586d6();
    /* 004db29a: lea eax, [ebp - 0x150] */ r_eax = (u32)(r_ebp+0xfffffeb0u);
    /* 004db2a0: mov dword ptr [ebp - 0x5c4], eax */ W32((u32)(r_ebp+0xfffffa3cu), r_eax);
    /* 004db2a6: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 004db2ad: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004db2b2: lea eax, [ebp - 0x114] */ r_eax = (u32)(r_ebp+0xfffffeecu);
    /* 004db2b8: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004db2ba: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004db2bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db2bd: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x4db2c2u); f_008586d6();
    /* 004db2c2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004db2c9: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004db2ce: lea eax, [ebp - 0x14c] */ r_eax = (u32)(r_ebp+0xfffffeb4u);
    /* 004db2d4: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004db2d6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004db2d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db2d9: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x4db2deu); f_008586d6();
L_004db2de:; BB(0x004db2de);
    /* 004db2de: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 004db2e1: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 004db2e4: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004db2e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004db2ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004db2f1: mov esp, ebp */ r_esp = r_ebp;
    /* 004db2f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004db2f4: ret  */ FN_RET(0x004dabe8); r_esp += 4; return;
}

