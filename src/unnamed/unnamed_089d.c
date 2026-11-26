#include "protos.h"

void f_0089d048(void)
{
    FN_ENTER(0x0089d048);
    /* 0089d048: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0089d04a: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089d04d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089d04f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d050: mov ecx, esi */ r_ecx = r_esi;
    /* 0089d052: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89d057u); f_0089aae4();
    /* 0089d057: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089d058: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089d059: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089d05a: ret 0xc */ FN_RET(0x0089d048); r_esp += 16; return;
}

void f_0089d05d(void) /* sub_89D05D */
{
    FN_ENTER(0x0089d05d);
    /* 0089d05d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089d05e: mov ebp, esp */ r_ebp = r_esp;
    /* 0089d060: mov eax, dword ptr [ecx + 0x1050] */ r_eax = R32((u32)(r_ecx+0x1050u));
    /* 0089d066: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d06a: mov edx, dword ptr [ecx + 0x1054] */ r_edx = R32((u32)(r_ecx+0x1054u));
    /* 0089d070: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d074: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d076: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d079: mov edx, dword ptr [ecx + 0x1058] */ r_edx = R32((u32)(r_ecx+0x1058u));
    /* 0089d07f: lea edx, [eax + edx*2] */ r_edx = (u32)(r_eax+r_edx*2);
    /* 0089d082: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0089d085: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d087: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089d08a: jae 0x89d0c9 */ if (!fC) goto L_0089d0c9;
L_0089d08c:; BB(0x0089d08c);
    /* 0089d08c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d08d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d08e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0089d08f:; BB(0x0089d08f);
    /* 0089d08f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0089d091: mov bl, byte ptr [eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0089d093: mov edi, edx */ r_edi = r_edx;
    /* 0089d095: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089d098: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0089d09e: add ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089d0a1: shl ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0089d0a4: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089d0a6: mov esi, ebx */ r_esi = r_ebx;
    /* 0089d0a8: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089d0a9: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089d0aa: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089d0ab: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089d0ac: movzx esi, byte ptr [eax + 1] */ r_esi = (u32)R8((u32)(r_eax+0x1u));
    /* 0089d0b0: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 0089d0b3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d0b4: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d0b5: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d0b8: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d0bb: fmul dword ptr [0x99ba7c] */ ST(0) = ST(0) * R_F32((u32)(0x99ba7cu));
    /* 0089d0c1: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089d0c4: jb 0x89d08f */ if (fC) goto L_0089d08f;
L_0089d0c6:; BB(0x0089d0c6);
    /* 0089d0c6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089d0c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089d0c8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089d0c9:; BB(0x0089d0c9);
    /* 0089d0c9: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089d0cd: je 0x89d0e0 */ if (fZ) goto L_0089d0e0;
L_0089d0cf:; BB(0x0089d0cf);
    /* 0089d0cf: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089d0d5: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089d0d8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089d0da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d0db: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89d0e0u); f_0089aae4();
L_0089d0e0:; BB(0x0089d0e0);
    /* 0089d0e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089d0e1: ret 0xc */ FN_RET(0x0089d05d); r_esp += 16; return;
}

void f_0089d0e4(void) /* sub_89D0E4 */
{
    FN_ENTER(0x0089d0e4);
    /* 0089d0e4: mov eax, dword ptr [ecx + 0x1050] */ r_eax = R32((u32)(r_ecx+0x1050u));
    /* 0089d0ea: imul eax, dword ptr [esp + 4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d0ef: mov edx, dword ptr [ecx + 0x1054] */ r_edx = R32((u32)(r_ecx+0x1054u));
    /* 0089d0f5: imul edx, dword ptr [esp + 8] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d0fa: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d0fc: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d0ff: mov edx, dword ptr [ecx + 0x1058] */ r_edx = R32((u32)(r_ecx+0x1058u));
    /* 0089d105: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089d107: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d109: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d10a: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0089d10e: jae 0x89d12d */ if (!fC) goto L_0089d12d;
L_0089d110:; BB(0x0089d110);
    /* 0089d110: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d111: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0089d112:; BB(0x0089d112);
    /* 0089d112: movzx esi, byte ptr [eax] */ r_esi = (u32)R8((u32)(r_eax));
    /* 0089d115: add esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089d118: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0089d11b: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089d11d: mov edi, ebx */ r_edi = r_ebx;
    /* 0089d11f: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089d120: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089d121: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089d122: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d123: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089d126: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d128: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089d129: jb 0x89d112 */ if (fC) goto L_0089d112;
L_0089d12b:; BB(0x0089d12b);
    /* 0089d12b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089d12c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_0089d12d:; BB(0x0089d12d);
    /* 0089d12d: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089d131: je 0x89d144 */ if (fZ) goto L_0089d144;
L_0089d133:; BB(0x0089d133);
    /* 0089d133: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089d139: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089d13c: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0089d13e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d13f: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89d144u); f_0089aae4();
L_0089d144:; BB(0x0089d144);
    /* 0089d144: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089d145: ret 0xc */ FN_RET(0x0089d0e4); r_esp += 16; return;
}

void f_0089d148(void) /* sub_89D148 */
{
    FN_ENTER(0x0089d148);
    /* 0089d148: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089d149: mov ebp, esp */ r_ebp = r_esp;
    /* 0089d14b: mov eax, dword ptr [ecx + 0x1050] */ r_eax = R32((u32)(r_ecx+0x1050u));
    /* 0089d151: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d155: mov edx, dword ptr [ecx + 0x1054] */ r_edx = R32((u32)(r_ecx+0x1054u));
    /* 0089d15b: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d15f: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d161: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d164: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089d167: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d168: mov esi, dword ptr [ecx + 0x1058] */ r_esi = R32((u32)(r_ecx+0x1058u));
    /* 0089d16e: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089d170: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d172: jae 0x89d19a */ if (!fC) goto L_0089d19a;
L_0089d174:; BB(0x0089d174);
    /* 0089d174: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0089d175:; BB(0x0089d175);
    /* 0089d175: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 0089d178: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089d17b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d17c: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d17f: fmul dword ptr [0x99ba7c] */ ST(0) = ST(0) * R_F32((u32)(0x99ba7cu));
    /* 0089d185: fst dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0));
    /* 0089d188: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 0089d18b: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089d18d: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089d190: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d192: fld1  */ FPUSH(1.0);
    /* 0089d194: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089d197: jb 0x89d175 */ if (fC) goto L_0089d175;
L_0089d199:; BB(0x0089d199);
    /* 0089d199: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0089d19a:; BB(0x0089d19a);
    /* 0089d19a: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089d19e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089d19f: je 0x89d1b2 */ if (fZ) goto L_0089d1b2;
L_0089d1a1:; BB(0x0089d1a1);
    /* 0089d1a1: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089d1a7: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089d1aa: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089d1ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d1ad: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89d1b2u); f_0089aae4();
L_0089d1b2:; BB(0x0089d1b2);
    /* 0089d1b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089d1b3: ret 0xc */ FN_RET(0x0089d148); r_esp += 16; return;
}

void f_0089d1b6(void) /* sub_89D1B6 */
{
    FN_ENTER(0x0089d1b6);
    /* 0089d1b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089d1b7: mov ebp, esp */ r_ebp = r_esp;
    /* 0089d1b9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089d1bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d1bd: mov esi, ecx */ r_esi = r_ecx;
    /* 0089d1bf: mov eax, dword ptr [esi + 0x1050] */ r_eax = R32((u32)(r_esi+0x1050u));
    /* 0089d1c5: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d1c9: mov ecx, dword ptr [esi + 0x1054] */ r_ecx = R32((u32)(r_esi+0x1054u));
    /* 0089d1cf: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d1d3: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d1d5: add eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d1d8: mov ecx, dword ptr [esi + 0x1058] */ r_ecx = R32((u32)(r_esi+0x1058u));
    /* 0089d1de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d1df: lea edi, [eax + ecx*2] */ r_edi = (u32)(r_eax+r_ecx*2);
    /* 0089d1e2: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d1e4: jae 0x89d220 */ if (!fC) goto L_0089d220;
L_0089d1e6:; BB(0x0089d1e6);
    /* 0089d1e6: fld dword ptr [0x99ba7c] */ FPUSH(R_F32((u32)(0x99ba7cu)));
L_0089d1ec:; BB(0x0089d1ec);
    /* 0089d1ec: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089d1ee: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0089d1f0: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089d1f6: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089d1f9: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d1fc: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d1fd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d1fe: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d200: fst dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0));
    /* 0089d203: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 0089d206: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089d208: movzx ecx, byte ptr [eax - 1] */ r_ecx = (u32)R8((u32)(r_eax+0xffffffffu));
    /* 0089d20c: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089d20f: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089d212: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d214: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d217: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d219: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089d21c: jb 0x89d1ec */ if (fC) goto L_0089d1ec;
L_0089d21e:; BB(0x0089d21e);
    /* 0089d21e: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0089d220:; BB(0x0089d220);
    /* 0089d220: cmp dword ptr [esi + 0x10], 0 */ {  u32 a = R32((u32)(r_esi+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089d224: je 0x89d239 */ if (fZ) goto L_0089d239;
L_0089d226:; BB(0x0089d226);
    /* 0089d226: mov eax, dword ptr [esi + 0x1058] */ r_eax = R32((u32)(r_esi+0x1058u));
    /* 0089d22c: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089d22f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089d231: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d232: mov ecx, esi */ r_ecx = r_esi;
    /* 0089d234: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89d239u); f_0089aae4();
L_0089d239:; BB(0x0089d239);
    /* 0089d239: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089d23a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089d23b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089d23c: ret 0xc */ FN_RET(0x0089d1b6); r_esp += 16; return;
}

void f_0089d23f(void) /* sub_89D23F */
{
    FN_ENTER(0x0089d23f);
    /* 0089d23f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089d240: mov ebp, esp */ r_ebp = r_esp;
    /* 0089d242: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089d245: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d246: mov esi, ecx */ r_esi = r_ecx;
    /* 0089d248: mov eax, dword ptr [esi + 0x1050] */ r_eax = R32((u32)(r_esi+0x1050u));
    /* 0089d24e: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d252: mov ecx, dword ptr [esi + 0x1054] */ r_ecx = R32((u32)(r_esi+0x1054u));
    /* 0089d258: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d25c: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d25e: add eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d261: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d262: mov edi, dword ptr [esi + 0x1058] */ r_edi = R32((u32)(r_esi+0x1058u));
    /* 0089d268: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089d26a: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d26c: jae 0x89d2a9 */ if (!fC) goto L_0089d2a9;
L_0089d26e:; BB(0x0089d26e);
    /* 0089d26e: fld dword ptr [0x99bacc] */ FPUSH(R_F32((u32)(0x99baccu)));
L_0089d274:; BB(0x0089d274);
    /* 0089d274: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0089d276: and cl, 0xf */ {  u32 a = (u8)r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0089d279: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 0089d27c: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089d27f: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d282: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d284: fst dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0));
    /* 0089d287: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 0089d28a: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089d28c: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0089d28e: shr cl, 4 */ { u32 c = (4u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0089d291: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 0089d294: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089d297: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d298: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089d29b: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d29d: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d2a0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d2a2: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089d2a5: jb 0x89d274 */ if (fC) goto L_0089d274;
L_0089d2a7:; BB(0x0089d2a7);
    /* 0089d2a7: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0089d2a9:; BB(0x0089d2a9);
    /* 0089d2a9: cmp dword ptr [esi + 0x10], 0 */ {  u32 a = R32((u32)(r_esi+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089d2ad: je 0x89d2c2 */ if (fZ) goto L_0089d2c2;
L_0089d2af:; BB(0x0089d2af);
    /* 0089d2af: mov eax, dword ptr [esi + 0x1058] */ r_eax = R32((u32)(r_esi+0x1058u));
    /* 0089d2b5: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089d2b8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089d2ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d2bb: mov ecx, esi */ r_ecx = r_esi;
    /* 0089d2bd: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89d2c2u); f_0089aae4();
L_0089d2c2:; BB(0x0089d2c2);
    /* 0089d2c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089d2c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089d2c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089d2c5: ret 0xc */ FN_RET(0x0089d23f); r_esp += 16; return;
}

void f_0089d2c8(void) /* sub_89D2C8 */
{
    FN_ENTER(0x0089d2c8);
    /* 0089d2c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089d2c9: mov ebp, esp */ r_ebp = r_esp;
    /* 0089d2cb: mov eax, dword ptr [ecx + 0x1050] */ r_eax = R32((u32)(r_ecx+0x1050u));
    /* 0089d2d1: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d2d5: mov edx, dword ptr [ecx + 0x1054] */ r_edx = R32((u32)(r_ecx+0x1054u));
    /* 0089d2db: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d2df: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d2e1: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d2e4: mov edx, dword ptr [ecx + 0x1058] */ r_edx = R32((u32)(r_ecx+0x1058u));
    /* 0089d2ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d2eb: lea esi, [eax + edx*2] */ r_esi = (u32)(r_eax+r_edx*2);
    /* 0089d2ee: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d2f0: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089d2f3: jae 0x89d32e */ if (!fC) goto L_0089d32e;
L_0089d2f5:; BB(0x0089d2f5);
    /* 0089d2f5: fld dword ptr [0x99bae0] */ FPUSH(R_F32((u32)(0x99bae0u)));
    /* 0089d2fb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0089d2fc:; BB(0x0089d2fc);
    /* 0089d2fc: movsx edi, byte ptr [eax] */ r_edi = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0089d2ff: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089d302: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d303: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d304: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d307: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d309: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089d30b: movsx edi, byte ptr [eax - 1] */ r_edi = (u32)(i32)(i8)R8((u32)(r_eax+0xffffffffu));
    /* 0089d30f: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089d312: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089d315: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d317: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d31a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d31c: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
    /* 0089d31f: fldz  */ FPUSH(0.0);
    /* 0089d321: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0089d324: fld1  */ FPUSH(1.0);
    /* 0089d326: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089d329: jb 0x89d2fc */ if (fC) goto L_0089d2fc;
L_0089d32b:; BB(0x0089d32b);
    /* 0089d32b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089d32d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0089d32e:; BB(0x0089d32e);
    /* 0089d32e: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089d332: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089d333: je 0x89d346 */ if (fZ) goto L_0089d346;
L_0089d335:; BB(0x0089d335);
    /* 0089d335: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089d33b: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089d33e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089d340: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d341: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89d346u); f_0089aae4();
L_0089d346:; BB(0x0089d346);
    /* 0089d346: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089d347: ret 0xc */ FN_RET(0x0089d2c8); r_esp += 16; return;
}

void f_0089d34a(void) /* sub_89D34A */
{
    FN_ENTER(0x0089d34a);
    /* 0089d34a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089d34b: mov ebp, esp */ r_ebp = r_esp;
    /* 0089d34d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089d350: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d351: mov esi, ecx */ r_esi = r_ecx;
    /* 0089d353: mov eax, dword ptr [esi + 0x1050] */ r_eax = R32((u32)(r_esi+0x1050u));
    /* 0089d359: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d35d: mov ecx, dword ptr [esi + 0x1054] */ r_ecx = R32((u32)(r_esi+0x1054u));
    /* 0089d363: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d367: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d369: add eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d36c: mov ecx, dword ptr [esi + 0x1058] */ r_ecx = R32((u32)(r_esi+0x1058u));
    /* 0089d372: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d373: lea edi, [eax + ecx*2] */ r_edi = (u32)(r_eax+r_ecx*2);
    /* 0089d376: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d378: jae 0x89d3dc */ if (!fC) goto L_0089d3dc;
L_0089d37a:; BB(0x0089d37a);
    /* 0089d37a: fld dword ptr [0x99bae4] */ FPUSH(R_F32((u32)(0x99bae4u)));
    /* 0089d380: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_0089d381:; BB(0x0089d381);
    /* 0089d381: mov bl, byte ptr [eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0089d383: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089d385: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0089d388: shl bl, 3 */ { u32 c = (3u) & 31; u32 a = (u8)r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0089d38b: sar bl, 3 */ { u32 c = (3u) & 31; u32 a = (u8)r_ebx; u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0089d38e: movsx ebx, bl */ r_ebx = (u32)(i32)(i8)(u8)r_ebx;
    /* 0089d391: mov dword ptr [ebp + 0x10], ebx */ W32((u32)(r_ebp+0x10u), r_ebx);
    /* 0089d394: shr ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089d397: shl cl, 3 */ { u32 c = (3u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0089d39a: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d39d: sar cl, 3 */ { u32 c = (3u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0089d3a0: movsx ecx, cl */ r_ecx = (u32)(i32)(i8)(u8)r_ecx;
    /* 0089d3a3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d3a5: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089d3a8: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089d3aa: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089d3ad: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d3b0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d3b2: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
    /* 0089d3b5: fldz  */ FPUSH(0.0);
    /* 0089d3b7: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0089d3ba: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0089d3bd: shr cx, 0xa */ { u32 c = (10u) & 31; u32 a = (u16)r_ecx; u32 r = a; if (c) { r = (c >= 16) ? 0 : (a >> c); r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 0089d3c1: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 0089d3c4: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 0089d3c7: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d3c8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d3c9: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d3cb: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d3ce: fmul dword ptr [0x99bac4] */ ST(0) = ST(0) * R_F32((u32)(0x99bac4u));
    /* 0089d3d4: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089d3d7: jb 0x89d381 */ if (fC) goto L_0089d381;
L_0089d3d9:; BB(0x0089d3d9);
    /* 0089d3d9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089d3db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089d3dc:; BB(0x0089d3dc);
    /* 0089d3dc: cmp dword ptr [esi + 0x10], 0 */ {  u32 a = R32((u32)(r_esi+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089d3e0: je 0x89d3f5 */ if (fZ) goto L_0089d3f5;
L_0089d3e2:; BB(0x0089d3e2);
    /* 0089d3e2: mov eax, dword ptr [esi + 0x1058] */ r_eax = R32((u32)(r_esi+0x1058u));
    /* 0089d3e8: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089d3eb: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089d3ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d3ee: mov ecx, esi */ r_ecx = r_esi;
    /* 0089d3f0: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89d3f5u); f_0089aae4();
L_0089d3f5:; BB(0x0089d3f5);
    /* 0089d3f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089d3f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089d3f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089d3f8: ret 0xc */ FN_RET(0x0089d34a); r_esp += 16; return;
}

void f_0089d3fb(void) /* sub_89D3FB */
{
    FN_ENTER(0x0089d3fb);
    /* 0089d3fb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089d3fc: mov ebp, esp */ r_ebp = r_esp;
    /* 0089d3fe: mov eax, dword ptr [ecx + 0x1050] */ r_eax = R32((u32)(r_ecx+0x1050u));
    /* 0089d404: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d408: mov edx, dword ptr [ecx + 0x1054] */ r_edx = R32((u32)(r_ecx+0x1054u));
    /* 0089d40e: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d412: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d414: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d417: mov edx, dword ptr [ecx + 0x1058] */ r_edx = R32((u32)(r_ecx+0x1058u));
    /* 0089d41d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d41e: lea esi, [eax + edx*4] */ r_esi = (u32)(r_eax+r_edx*4);
    /* 0089d421: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d423: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089d426: jae 0x89d470 */ if (!fC) goto L_0089d470;
L_0089d428:; BB(0x0089d428);
    /* 0089d428: fld dword ptr [0x99bae0] */ FPUSH(R_F32((u32)(0x99bae0u)));
    /* 0089d42e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0089d42f:; BB(0x0089d42f);
    /* 0089d42f: movsx edi, byte ptr [eax] */ r_edi = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0089d432: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089d435: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d438: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d43b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d43d: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089d43f: movsx edi, byte ptr [eax - 3] */ r_edi = (u32)(i32)(i8)R8((u32)(r_eax+0xfffffffdu));
    /* 0089d443: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089d446: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089d449: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d44b: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d44e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d450: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
    /* 0089d453: fldz  */ FPUSH(0.0);
    /* 0089d455: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0089d458: movzx edi, byte ptr [eax - 2] */ r_edi = (u32)R8((u32)(r_eax+0xfffffffeu));
    /* 0089d45c: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089d45f: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d462: fmul dword ptr [0x99ba7c] */ ST(0) = ST(0) * R_F32((u32)(0x99ba7cu));
    /* 0089d468: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089d46b: jb 0x89d42f */ if (fC) goto L_0089d42f;
L_0089d46d:; BB(0x0089d46d);
    /* 0089d46d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089d46f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0089d470:; BB(0x0089d470);
    /* 0089d470: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089d474: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089d475: je 0x89d488 */ if (fZ) goto L_0089d488;
L_0089d477:; BB(0x0089d477);
    /* 0089d477: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089d47d: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089d480: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089d482: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d483: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89d488u); f_0089aae4();
L_0089d488:; BB(0x0089d488);
    /* 0089d488: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089d489: ret 0xc */ FN_RET(0x0089d3fb); r_esp += 16; return;
}

void f_0089d48c(void) /* sub_89D48C */
{
    FN_ENTER(0x0089d48c);
    /* 0089d48c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089d48d: mov ebp, esp */ r_ebp = r_esp;
    /* 0089d48f: mov eax, dword ptr [ecx + 0x1050] */ r_eax = R32((u32)(r_ecx+0x1050u));
    /* 0089d495: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d499: mov edx, dword ptr [ecx + 0x1054] */ r_edx = R32((u32)(r_ecx+0x1054u));
    /* 0089d49f: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d4a3: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d4a5: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d4a8: mov edx, dword ptr [ecx + 0x1058] */ r_edx = R32((u32)(r_ecx+0x1058u));
    /* 0089d4ae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d4af: lea esi, [eax + edx*4] */ r_esi = (u32)(r_eax+r_edx*4);
    /* 0089d4b2: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d4b4: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089d4b7: jae 0x89d507 */ if (!fC) goto L_0089d507;
L_0089d4b9:; BB(0x0089d4b9);
    /* 0089d4b9: fld dword ptr [0x99bae0] */ FPUSH(R_F32((u32)(0x99bae0u)));
    /* 0089d4bf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0089d4c0:; BB(0x0089d4c0);
    /* 0089d4c0: movsx edi, byte ptr [eax] */ r_edi = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0089d4c3: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089d4c6: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d4c9: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d4cc: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d4ce: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089d4d0: movsx edi, byte ptr [eax - 3] */ r_edi = (u32)(i32)(i8)R8((u32)(r_eax+0xfffffffdu));
    /* 0089d4d4: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089d4d7: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089d4da: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d4dc: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d4df: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d4e1: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
    /* 0089d4e4: movsx edi, byte ptr [eax - 2] */ r_edi = (u32)(i32)(i8)R8((u32)(r_eax+0xfffffffeu));
    /* 0089d4e8: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089d4eb: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d4ee: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d4f0: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0089d4f3: movsx edi, byte ptr [eax - 1] */ r_edi = (u32)(i32)(i8)R8((u32)(r_eax+0xffffffffu));
    /* 0089d4f7: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089d4fa: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d4fd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d4ff: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089d502: jb 0x89d4c0 */ if (fC) goto L_0089d4c0;
L_0089d504:; BB(0x0089d504);
    /* 0089d504: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089d506: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0089d507:; BB(0x0089d507);
    /* 0089d507: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089d50b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089d50c: je 0x89d51f */ if (fZ) goto L_0089d51f;
L_0089d50e:; BB(0x0089d50e);
    /* 0089d50e: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089d514: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089d517: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089d519: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d51a: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89d51fu); f_0089aae4();
L_0089d51f:; BB(0x0089d51f);
    /* 0089d51f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089d520: ret 0xc */ FN_RET(0x0089d48c); r_esp += 16; return;
}

void f_0089d523(void) /* sub_89D523 */
{
    FN_ENTER(0x0089d523);
    /* 0089d523: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089d524: mov ebp, esp */ r_ebp = r_esp;
    /* 0089d526: mov eax, dword ptr [ecx + 0x1050] */ r_eax = R32((u32)(r_ecx+0x1050u));
    /* 0089d52c: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d530: mov edx, dword ptr [ecx + 0x1054] */ r_edx = R32((u32)(r_ecx+0x1054u));
    /* 0089d536: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d53a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d53c: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d53f: mov edx, dword ptr [ecx + 0x1058] */ r_edx = R32((u32)(r_ecx+0x1058u));
    /* 0089d545: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d546: lea esi, [eax + edx*4] */ r_esi = (u32)(r_eax+r_edx*4);
    /* 0089d549: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d54b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089d54e: jae 0x89d58a */ if (!fC) goto L_0089d58a;
L_0089d550:; BB(0x0089d550);
    /* 0089d550: fld dword ptr [0x99bae8] */ FPUSH(R_F32((u32)(0x99bae8u)));
    /* 0089d556: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0089d557:; BB(0x0089d557);
    /* 0089d557: movsx edi, word ptr [eax] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0089d55a: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089d55d: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d560: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d563: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d565: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089d567: movsx edi, word ptr [eax - 2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0xfffffffeu));
    /* 0089d56b: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089d56e: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089d571: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d573: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d576: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d578: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
    /* 0089d57b: fldz  */ FPUSH(0.0);
    /* 0089d57d: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0089d580: fld1  */ FPUSH(1.0);
    /* 0089d582: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089d585: jb 0x89d557 */ if (fC) goto L_0089d557;
L_0089d587:; BB(0x0089d587);
    /* 0089d587: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089d589: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0089d58a:; BB(0x0089d58a);
    /* 0089d58a: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089d58e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089d58f: je 0x89d5a2 */ if (fZ) goto L_0089d5a2;
L_0089d591:; BB(0x0089d591);
    /* 0089d591: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089d597: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089d59a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089d59c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d59d: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89d5a2u); f_0089aae4();
L_0089d5a2:; BB(0x0089d5a2);
    /* 0089d5a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089d5a3: ret 0xc */ FN_RET(0x0089d523); r_esp += 16; return;
}

void f_0089d5a6(void) /* sub_89D5A6 */
{
    FN_ENTER(0x0089d5a6);
    /* 0089d5a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089d5a7: mov ebp, esp */ r_ebp = r_esp;
    /* 0089d5a9: mov eax, dword ptr [ecx + 0x1050] */ r_eax = R32((u32)(r_ecx+0x1050u));
    /* 0089d5af: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d5b3: mov edx, dword ptr [ecx + 0x1054] */ r_edx = R32((u32)(r_ecx+0x1054u));
    /* 0089d5b9: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d5bd: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d5bf: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d5c2: mov edx, dword ptr [ecx + 0x1058] */ r_edx = R32((u32)(r_ecx+0x1058u));
    /* 0089d5c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d5c9: lea ebx, [eax + edx*4] */ r_ebx = (u32)(r_eax+r_edx*4);
    /* 0089d5cc: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d5ce: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089d5d1: jae 0x89d644 */ if (!fC) goto L_0089d644;
L_0089d5d3:; BB(0x0089d5d3);
    /* 0089d5d3: fld dword ptr [0x99baf0] */ FPUSH(R_F32((u32)(0x99baf0u)));
    /* 0089d5d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d5da: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0089d5db:; BB(0x0089d5db);
    /* 0089d5db: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0089d5dd: mov edi, esi */ r_edi = r_esi;
    /* 0089d5df: shr esi, 0x15 */ { u32 c = (21u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0089d5e2: shl si, 5 */ { u32 c = (5u) & 31; u32 a = (u16)r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffu; r_esi = (r_esi & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 0089d5e6: sar si, 5 */ { u32 c = (5u) & 31; u32 a = (u16)r_esi; u32 r = a; if (c) { r = (u32)((i16)a >> (c > 15 ? 15 : c)) & 0xffffu; r_esi = (r_esi & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 0089d5ea: shr edi, 0xa */ { u32 c = (10u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0089d5ed: shl di, 5 */ { u32 c = (5u) & 31; u32 a = (u16)r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffu; r_edi = (r_edi & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 0089d5f1: sar di, 5 */ { u32 c = (5u) & 31; u32 a = (u16)r_edi; u32 r = a; if (c) { r = (u32)((i16)a >> (c > 15 ? 15 : c)) & 0xffffu; r_edi = (r_edi & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 0089d5f5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 0089d5f8: mov si, word ptr [eax] */ r_esi = (r_esi & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0089d5fb: shl si, 6 */ { u32 c = (6u) & 31; u32 a = (u16)r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffu; r_esi = (r_esi & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 0089d5ff: sar si, 6 */ { u32 c = (6u) & 31; u32 a = (u16)r_esi; u32 r = a; if (c) { r = (u32)((i16)a >> (c > 15 ? 15 : c)) & 0xffffu; r_esi = (r_esi & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 0089d603: movsx esi, si */ r_esi = (u32)(i32)(i16)(u16)r_esi;
    /* 0089d606: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 0089d609: movsx esi, di */ r_esi = (u32)(i32)(i16)(u16)r_edi;
    /* 0089d60c: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d60f: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 0089d612: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0089d616: fmul dword ptr [0x99baec] */ ST(0) = ST(0) * R_F32((u32)(0x99baecu));
    /* 0089d61c: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d61f: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089d621: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089d624: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d626: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d629: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 0089d62c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d62e: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
    /* 0089d631: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d634: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d636: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0089d639: fld1  */ FPUSH(1.0);
    /* 0089d63b: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089d63e: jb 0x89d5db */ if (fC) goto L_0089d5db;
L_0089d640:; BB(0x0089d640);
    /* 0089d640: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089d641: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089d643: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_0089d644:; BB(0x0089d644);
    /* 0089d644: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089d648: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089d649: je 0x89d65c */ if (fZ) goto L_0089d65c;
L_0089d64b:; BB(0x0089d64b);
    /* 0089d64b: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089d651: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089d654: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089d656: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d657: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89d65cu); f_0089aae4();
L_0089d65c:; BB(0x0089d65c);
    /* 0089d65c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089d65d: ret 0xc */ FN_RET(0x0089d5a6); r_esp += 16; return;
}

void f_0089d660(void) /* sub_89D660 */
{
    FN_ENTER(0x0089d660);
    /* 0089d660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089d661: mov ebp, esp */ r_ebp = r_esp;
    /* 0089d663: mov eax, dword ptr [ecx + 0x1050] */ r_eax = R32((u32)(r_ecx+0x1050u));
    /* 0089d669: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d66d: mov edx, dword ptr [ecx + 0x1054] */ r_edx = R32((u32)(r_ecx+0x1054u));
    /* 0089d673: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d677: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d679: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d67c: mov edx, dword ptr [ecx + 0x1058] */ r_edx = R32((u32)(r_ecx+0x1058u));
    /* 0089d682: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d683: lea ebx, [eax + edx*4] */ r_ebx = (u32)(r_eax+r_edx*4);
    /* 0089d686: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d688: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089d68b: jae 0x89d717 */ if (!fC) goto L_0089d717;
L_0089d691:; BB(0x0089d691);
    /* 0089d691: fld dword ptr [0x99baec] */ FPUSH(R_F32((u32)(0x99baecu)));
    /* 0089d697: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d698: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0089d699:; BB(0x0089d699);
    /* 0089d699: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0089d69b: mov edi, esi */ r_edi = r_esi;
    /* 0089d69d: shr esi, 0x14 */ { u32 c = (20u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0089d6a0: shl si, 6 */ { u32 c = (6u) & 31; u32 a = (u16)r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffu; r_esi = (r_esi & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 0089d6a4: sar si, 6 */ { u32 c = (6u) & 31; u32 a = (u16)r_esi; u32 r = a; if (c) { r = (u32)((i16)a >> (c > 15 ? 15 : c)) & 0xffffu; r_esi = (r_esi & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 0089d6a8: shr edi, 0xa */ { u32 c = (10u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0089d6ab: shl di, 6 */ { u32 c = (6u) & 31; u32 a = (u16)r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffu; r_edi = (r_edi & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 0089d6af: sar di, 6 */ { u32 c = (6u) & 31; u32 a = (u16)r_edi; u32 r = a; if (c) { r = (u32)((i16)a >> (c > 15 ? 15 : c)) & 0xffffu; r_edi = (r_edi & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 0089d6b3: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 0089d6b6: mov si, word ptr [eax] */ r_esi = (r_esi & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0089d6b9: shl si, 6 */ { u32 c = (6u) & 31; u32 a = (u16)r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffu; r_esi = (r_esi & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 0089d6bd: sar si, 6 */ { u32 c = (6u) & 31; u32 a = (u16)r_esi; u32 r = a; if (c) { r = (u32)((i16)a >> (c > 15 ? 15 : c)) & 0xffffu; r_esi = (r_esi & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 0089d6c1: movsx esi, si */ r_esi = (u32)(i32)(i16)(u16)r_esi;
    /* 0089d6c4: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 0089d6c7: movsx esi, di */ r_esi = (u32)(i32)(i16)(u16)r_edi;
    /* 0089d6ca: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d6cd: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 0089d6d0: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0089d6d4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d6d6: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089d6d8: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d6db: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 0089d6de: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d6e0: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0089d6e3: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d6e6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d6e8: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 0089d6eb: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0089d6ed: shr esi, 0x1e */ { u32 c = (30u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0089d6f0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089d6f2: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 0089d6f5: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d6f8: jge 0x89d700 */ if ((fS==fO)) goto L_0089d700;
L_0089d6fa:; BB(0x0089d6fa);
    /* 0089d6fa: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_0089d700:; BB(0x0089d700);
    /* 0089d700: fmul dword ptr [0x99bad0] */ ST(0) = ST(0) * R_F32((u32)(0x99bad0u));
    /* 0089d706: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d709: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089d70c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d70e: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089d711: jb 0x89d699 */ if (fC) goto L_0089d699;
L_0089d713:; BB(0x0089d713);
    /* 0089d713: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089d714: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089d716: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_0089d717:; BB(0x0089d717);
    /* 0089d717: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089d71b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089d71c: je 0x89d72f */ if (fZ) goto L_0089d72f;
L_0089d71e:; BB(0x0089d71e);
    /* 0089d71e: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089d724: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089d727: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089d729: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d72a: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89d72fu); f_0089aae4();
L_0089d72f:; BB(0x0089d72f);
    /* 0089d72f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089d730: ret 0xc */ FN_RET(0x0089d660); r_esp += 16; return;
}

void f_0089d733(void) /* sub_89D733 */
{
    FN_ENTER(0x0089d733);
    /* 0089d733: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089d734: mov ebp, esp */ r_ebp = r_esp;
    /* 0089d736: mov eax, dword ptr [ecx + 0x1050] */ r_eax = R32((u32)(r_ecx+0x1050u));
    /* 0089d73c: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d740: mov edx, dword ptr [ecx + 0x1054] */ r_edx = R32((u32)(r_ecx+0x1054u));
    /* 0089d746: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d74a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d74c: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d74f: mov edx, dword ptr [ecx + 0x1058] */ r_edx = R32((u32)(r_ecx+0x1058u));
    /* 0089d755: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d756: lea esi, [eax + edx*2] */ r_esi = (u32)(r_eax+r_edx*2);
    /* 0089d759: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d75b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089d75e: jae 0x89d787 */ if (!fC) goto L_0089d787;
L_0089d760:; BB(0x0089d760);
    /* 0089d760: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0089d761:; BB(0x0089d761);
    /* 0089d761: movzx edi, word ptr [eax] */ r_edi = (u32)R16((u32)(r_eax));
    /* 0089d764: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089d767: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d768: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d769: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d76c: fmul dword ptr [0x99bad8] */ ST(0) = ST(0) * R_F32((u32)(0x99bad8u));
    /* 0089d772: fst dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0));
    /* 0089d775: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 0089d778: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089d77a: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089d77d: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d77f: fld1  */ FPUSH(1.0);
    /* 0089d781: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089d784: jb 0x89d761 */ if (fC) goto L_0089d761;
L_0089d786:; BB(0x0089d786);
    /* 0089d786: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0089d787:; BB(0x0089d787);
    /* 0089d787: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089d78b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089d78c: je 0x89d79f */ if (fZ) goto L_0089d79f;
L_0089d78e:; BB(0x0089d78e);
    /* 0089d78e: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089d794: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089d797: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089d799: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d79a: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89d79fu); f_0089aae4();
L_0089d79f:; BB(0x0089d79f);
    /* 0089d79f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089d7a0: ret 0xc */ FN_RET(0x0089d733); r_esp += 16; return;
}

void f_0089d7a3(void) /* sub_89D7A3 */
{
    FN_ENTER(0x0089d7a3);
    /* 0089d7a3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089d7a4: mov ebp, esp */ r_ebp = r_esp;
    /* 0089d7a6: mov eax, dword ptr [ecx + 0x1050] */ r_eax = R32((u32)(r_ecx+0x1050u));
    /* 0089d7ac: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d7b0: mov edx, dword ptr [ecx + 0x1054] */ r_edx = R32((u32)(r_ecx+0x1054u));
    /* 0089d7b6: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d7ba: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d7bc: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d7bf: mov edx, dword ptr [ecx + 0x1058] */ r_edx = R32((u32)(r_ecx+0x1058u));
    /* 0089d7c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d7c6: lea esi, [eax + edx*4] */ r_esi = (u32)(r_eax+r_edx*4);
    /* 0089d7c9: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d7cb: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089d7ce: jae 0x89d815 */ if (!fC) goto L_0089d815;
L_0089d7d0:; BB(0x0089d7d0);
    /* 0089d7d0: fld dword ptr [0x99bad8] */ FPUSH(R_F32((u32)(0x99bad8u)));
    /* 0089d7d6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0089d7d7:; BB(0x0089d7d7);
    /* 0089d7d7: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0089d7d9: and edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0089d7df: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089d7e1: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089d7e4: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d7e7: jge 0x89d7ef */ if ((fS==fO)) goto L_0089d7ef;
L_0089d7e9:; BB(0x0089d7e9);
    /* 0089d7e9: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_0089d7ef:; BB(0x0089d7ef);
    /* 0089d7ef: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d7f1: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d7f4: fst dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0));
    /* 0089d7f7: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 0089d7fa: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089d7fc: movzx edi, word ptr [eax - 2] */ r_edi = (u32)R16((u32)(r_eax+0xfffffffeu));
    /* 0089d800: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089d803: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089d806: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d808: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d80b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d80d: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089d810: jb 0x89d7d7 */ if (fC) goto L_0089d7d7;
L_0089d812:; BB(0x0089d812);
    /* 0089d812: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089d814: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0089d815:; BB(0x0089d815);
    /* 0089d815: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089d819: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089d81a: je 0x89d82d */ if (fZ) goto L_0089d82d;
L_0089d81c:; BB(0x0089d81c);
    /* 0089d81c: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089d822: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089d825: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089d827: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d828: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89d82du); f_0089aae4();
L_0089d82d:; BB(0x0089d82d);
    /* 0089d82d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089d82e: ret 0xc */ FN_RET(0x0089d7a3); r_esp += 16; return;
}

void f_0089d831(void) /* sub_89D831 */
{
    FN_ENTER(0x0089d831);
    /* 0089d831: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089d832: mov ebp, esp */ r_ebp = r_esp;
    /* 0089d834: mov eax, dword ptr [ecx + 0x1050] */ r_eax = R32((u32)(r_ecx+0x1050u));
    /* 0089d83a: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d83e: mov edx, dword ptr [ecx + 0x1054] */ r_edx = R32((u32)(r_ecx+0x1054u));
    /* 0089d844: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d848: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d84a: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d84d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0089d850: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d851: mov esi, dword ptr [ecx + 0x1064] */ r_esi = R32((u32)(r_ecx+0x1064u));
    /* 0089d857: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089d859: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d85b: jae 0x89d8a1 */ if (!fC) goto L_0089d8a1;
L_0089d85d:; BB(0x0089d85d);
    /* 0089d85d: fld dword ptr [0x99bad8] */ FPUSH(R_F32((u32)(0x99bad8u)));
    /* 0089d863: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0089d864:; BB(0x0089d864);
    /* 0089d864: movzx edi, word ptr [eax + 4] */ r_edi = (u32)R16((u32)(r_eax+0x4u));
    /* 0089d868: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089d86b: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d86e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d870: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089d872: movzx edi, word ptr [eax + 2] */ r_edi = (u32)R16((u32)(r_eax+0x2u));
    /* 0089d876: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089d879: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089d87c: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d87f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d881: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
    /* 0089d884: movzx edi, word ptr [eax] */ r_edi = (u32)R16((u32)(r_eax));
    /* 0089d887: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0089d88a: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d88d: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d88f: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d892: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d894: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0089d897: fld1  */ FPUSH(1.0);
    /* 0089d899: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0089d89c: jb 0x89d864 */ if (fC) goto L_0089d864;
L_0089d89e:; BB(0x0089d89e);
    /* 0089d89e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089d8a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0089d8a1:; BB(0x0089d8a1);
    /* 0089d8a1: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089d8a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089d8a6: je 0x89d8b9 */ if (fZ) goto L_0089d8b9;
L_0089d8a8:; BB(0x0089d8a8);
    /* 0089d8a8: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089d8ae: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089d8b1: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0089d8b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d8b4: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89d8b9u); f_0089aae4();
L_0089d8b9:; BB(0x0089d8b9);
    /* 0089d8b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089d8ba: ret 0xc */ FN_RET(0x0089d831); r_esp += 16; return;
}

void f_0089d8bd(void) /* sub_89D8BD */
{
    FN_ENTER(0x0089d8bd);
    /* 0089d8bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089d8be: mov ebp, esp */ r_ebp = r_esp;
    /* 0089d8c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d8c1: mov eax, dword ptr [ecx + 0x1054] */ r_eax = R32((u32)(r_ecx+0x1054u));
    /* 0089d8c7: imul eax, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d8cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d8cc: mov esi, dword ptr [ecx + 0x1050] */ r_esi = R32((u32)(r_ecx+0x1050u));
    /* 0089d8d2: imul esi, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089d8d6: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089d8d8: add esi, dword ptr [ecx + 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089d8db: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089d8e1: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089d8e4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d8e6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d8e7: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0089d8ea: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089d8ed: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0089d8f0: jae 0x89d980 */ if (!fC) goto L_0089d980;
L_0089d8f6:; BB(0x0089d8f6);
    /* 0089d8f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d8f7: mov ebx, 0xffff */ r_ebx = 0xffffu;
L_0089d8fc:; BB(0x0089d8fc);
    /* 0089d8fc: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0089d8fe: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0089d901: mov cl, 0x20 */ r_ecx = (r_ecx & 0xffffff00u) | ((0x20u) & 0xffu);
    /* 0089d903: call 0x8cb210 */ r_esp -= 4; W32(r_esp, 0x89d908u); f_008cb210();
    /* 0089d908: fld dword ptr [0x99bad8] */ FPUSH(R_F32((u32)(0x99bad8u)));
    /* 0089d90e: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089d910: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089d912: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0089d915: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d918: jge 0x89d920 */ if ((fS==fO)) goto L_0089d920;
L_0089d91a:; BB(0x0089d91a);
    /* 0089d91a: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_0089d920:; BB(0x0089d920);
    /* 0089d920: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d922: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 0089d924: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0089d926: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0089d929: shrd eax, ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 b = r_ecx; u32 r = a; if (c) { r = (a >> c) | (b << (32 - c)); fC = (a >> (c - 1)) & 1; r_eax = r; } }
    /* 0089d92d: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089d92f: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089d932: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089d934: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0089d937: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d93a: jge 0x89d942 */ if ((fS==fO)) goto L_0089d942;
L_0089d93c:; BB(0x0089d93c);
    /* 0089d93c: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_0089d942:; BB(0x0089d942);
    /* 0089d942: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d944: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 0089d947: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0089d949: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089d94b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089d94d: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0089d950: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d953: jge 0x89d95b */ if ((fS==fO)) goto L_0089d95b;
L_0089d955:; BB(0x0089d955);
    /* 0089d955: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_0089d95b:; BB(0x0089d95b);
    /* 0089d95b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d95d: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089d960: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089d963: cmp esi, dword ptr [ebp + 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089d966: fstp dword ptr [edi - 8] */ W_F32((u32)(r_edi+0xfffffff8u), ST(0)); FPOP();
    /* 0089d969: movzx eax, word ptr [esi - 2] */ r_eax = (u32)R16((u32)(r_esi+0xfffffffeu));
    /* 0089d96d: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0089d970: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 0089d973: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089d975: fstp dword ptr [edi - 4] */ W_F32((u32)(r_edi+0xfffffffcu), ST(0)); FPOP();
    /* 0089d978: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089d97a: jb 0x89d8fc */ if (fC) goto L_0089d8fc;
L_0089d97c:; BB(0x0089d97c);
    /* 0089d97c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089d97f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089d980:; BB(0x0089d980);
    /* 0089d980: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089d984: je 0x89d997 */ if (fZ) goto L_0089d997;
L_0089d986:; BB(0x0089d986);
    /* 0089d986: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 0089d98c: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089d98f: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0089d991: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d992: call 0x89aae4 */ r_esp -= 4; W32(r_esp, 0x89d997u); f_0089aae4();
L_0089d997:; BB(0x0089d997);
    /* 0089d997: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089d998: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089d999: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089d99a: ret 0xc */ FN_RET(0x0089d8bd); r_esp += 16; return;
}

void f_0089d99d(void) /* sub_89D99D */
{
    FN_ENTER(0x0089d99d);
    /* 0089d99d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d99e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089d9a0: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0089d9a2: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089d9a6: mov esi, ecx */ r_esi = r_ecx;
    /* 0089d9a8: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89d9adu); f_0089a735();
    /* 0089d9ad: mov dword ptr [esi], 0x99baf4 */ W32((u32)(r_esi), 0x99baf4u);
    /* 0089d9b3: mov eax, esi */ r_eax = r_esi;
    /* 0089d9b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089d9b6: ret 4 */ FN_RET(0x0089d99d); r_esp += 8; return;
}

void f_0089dacd(void) /* sub_89DACD */
{
    FN_ENTER(0x0089dacd);
    /* 0089dacd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089dace: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089dad0: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0089dad2: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089dad6: mov esi, ecx */ r_esi = r_ecx;
    /* 0089dad8: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89daddu); f_0089a735();
    /* 0089dadd: mov dword ptr [esi], 0x99bb14 */ W32((u32)(r_esi), 0x99bb14u);
    /* 0089dae3: mov eax, esi */ r_eax = r_esi;
    /* 0089dae5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089dae6: ret 4 */ FN_RET(0x0089dacd); r_esp += 8; return;
}

void f_0089dae9(void) /* sub_89DAE9 */
{
    FN_ENTER(0x0089dae9);
    /* 0089dae9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089daea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089daec: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0089daee: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089daf2: mov esi, ecx */ r_esi = r_ecx;
    /* 0089daf4: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89daf9u); f_0089a735();
    /* 0089daf9: mov dword ptr [esi], 0x99bb24 */ W32((u32)(r_esi), 0x99bb24u);
    /* 0089daff: mov eax, esi */ r_eax = r_esi;
    /* 0089db01: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089db02: ret 4 */ FN_RET(0x0089dae9); r_esp += 8; return;
}

void f_0089db05(void) /* sub_89DB05 */
{
    FN_ENTER(0x0089db05);
    /* 0089db05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089db06: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089db08: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089db0a: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089db0e: mov esi, ecx */ r_esi = r_ecx;
    /* 0089db10: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89db15u); f_0089a735();
    /* 0089db15: mov dword ptr [esi], 0x99bb34 */ W32((u32)(r_esi), 0x99bb34u);
    /* 0089db1b: mov eax, esi */ r_eax = r_esi;
    /* 0089db1d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089db1e: ret 4 */ FN_RET(0x0089db05); r_esp += 8; return;
}

void f_0089db21(void) /* sub_89DB21 */
{
    FN_ENTER(0x0089db21);
    /* 0089db21: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089db22: mov ebp, esp */ r_ebp = r_esp;
    /* 0089db24: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089db27: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089db2a: cmp dword ptr [ecx + 0x108c], 0 */ {  u32 a = R32((u32)(r_ecx+0x108cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089db31: je 0x89dd09 */ if (fZ) goto L_0089dd09;
L_0089db37:; BB(0x0089db37);
    /* 0089db37: cmp dword ptr [ecx + 0x1090], 0 */ {  u32 a = R32((u32)(r_ecx+0x1090u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089db3e: je 0x89dd09 */ if (fZ) goto L_0089dd09;
L_0089db44:; BB(0x0089db44);
    /* 0089db44: mov eax, dword ptr [ecx + 0x1080] */ r_eax = R32((u32)(r_ecx+0x1080u));
    /* 0089db4a: imul eax, dword ptr [ecx + 0x1054] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ecx+0x1054u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089db51: mov edx, dword ptr [ecx + 0x1070] */ r_edx = R32((u32)(r_ecx+0x1070u));
    /* 0089db57: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089db58: mov esi, dword ptr [ecx + 0x1074] */ r_esi = R32((u32)(r_ecx+0x1074u));
    /* 0089db5e: imul esi, dword ptr [ecx + 0x1050] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ecx+0x1050u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089db65: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089db67: lea eax, [eax + edx*2] */ r_eax = (u32)(r_eax+r_edx*2);
    /* 0089db6a: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089db6d: cmp edx, dword ptr [ecx + 0x1078] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1078u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089db73: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0089db76: mov eax, dword ptr [ecx + 0x106c] */ r_eax = R32((u32)(r_ecx+0x106cu));
    /* 0089db7c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0089db7f: jae 0x89dd01 */ if (!fC) goto L_0089dd01;
L_0089db85:; BB(0x0089db85);
    /* 0089db85: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089db86: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0089db87:; BB(0x0089db87);
    /* 0089db87: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 0089db8a: mov ecx, 0xff */ r_ecx = 0xffu;
    /* 0089db8f: fmul dword ptr [0x99bb60] */ ST(0) = ST(0) * R_F32((u32)(0x99bb60u));
    /* 0089db95: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 0089db98: fmul dword ptr [0x99bb5c] */ ST(0) = ST(0) * R_F32((u32)(0x99bb5cu));
    /* 0089db9e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089dba0: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 0089dba3: fmul dword ptr [0x99bb58] */ ST(0) = ST(0) * R_F32((u32)(0x99bb58u));
    /* 0089dba9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089dbab: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0089dbae: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0089dbb1: fmul dword ptr [0x99bb54] */ ST(0) = ST(0) * R_F32((u32)(0x99bb54u));
    /* 0089dbb7: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0089dbba: fmul dword ptr [0x99bb50] */ ST(0) = ST(0) * R_F32((u32)(0x99bb50u));
    /* 0089dbc0: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0089dbc2: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0089dbc4: fmul dword ptr [0x99bb4c] */ ST(0) = ST(0) * R_F32((u32)(0x99bb4cu));
    /* 0089dbca: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0089dbcc: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0089dbcf: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0089dbd1: fmul dword ptr [0x99bb54] */ ST(0) = ST(0) * R_F32((u32)(0x99bb54u));
    /* 0089dbd7: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0089dbda: fmul dword ptr [0x99bb48] */ ST(0) = ST(0) * R_F32((u32)(0x99bb48u));
    /* 0089dbe0: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0089dbe3: fmul dword ptr [0x99bb44] */ ST(0) = ST(0) * R_F32((u32)(0x99bb44u));
    /* 0089dbe9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089dbeb: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0089dbed: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0089dbf0: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0089dbf2: fmul dword ptr [0x99bb60] */ ST(0) = ST(0) * R_F32((u32)(0x99bb60u));
    /* 0089dbf8: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0089dbfb: fmul dword ptr [0x99bb58] */ ST(0) = ST(0) * R_F32((u32)(0x99bb58u));
    /* 0089dc01: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089dc03: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0089dc06: fmul dword ptr [0x99bb5c] */ ST(0) = ST(0) * R_F32((u32)(0x99bb5cu));
    /* 0089dc0c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089dc0e: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 0089dc14: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0089dc17: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0089dc1a: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089dc1d: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 0089dc20: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0089dc23: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 0089dc29: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089dc2c: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0089dc2f: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 0089dc32: fistp dword ptr [ebp - 0x1c] */ W32((u32)(r_ebp+0xffffffe4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089dc35: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0089dc38: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0089dc3b: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 0089dc41: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089dc44: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0089dc47: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0089dc4a: fistp dword ptr [ebp - 0x24] */ W32((u32)(r_ebp+0xffffffdcu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089dc4d: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 0089dc50: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0089dc53: fadd dword ptr [0x99b9b4] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b4u));
    /* 0089dc59: add ebx, 0x80 */ {  u32 a = r_ebx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089dc5f: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0089dc62: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 0089dc65: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089dc68: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0089dc6b: add edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089dc71: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089dc73: jge 0x89dc79 */ if ((fS==fO)) goto L_0089dc79;
L_0089dc75:; BB(0x0089dc75);
    /* 0089dc75: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0089dc77: jmp 0x89dc7f */ goto L_0089dc7f;
L_0089dc79:; BB(0x0089dc79);
    /* 0089dc79: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0089dc7b: jle 0x89dc7f */ if ((fZ||fS!=fO)) goto L_0089dc7f;
L_0089dc7d:; BB(0x0089dc7d);
    /* 0089dc7d: mov edx, ecx */ r_edx = r_ecx;
L_0089dc7f:; BB(0x0089dc7f);
    /* 0089dc7f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089dc81: jge 0x89dc87 */ if ((fS==fO)) goto L_0089dc87;
L_0089dc83:; BB(0x0089dc83);
    /* 0089dc83: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089dc85: jmp 0x89dc8d */ goto L_0089dc8d;
L_0089dc87:; BB(0x0089dc87);
    /* 0089dc87: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0089dc89: jle 0x89dc8d */ if ((fZ||fS!=fO)) goto L_0089dc8d;
L_0089dc8b:; BB(0x0089dc8b);
    /* 0089dc8b: mov esi, ecx */ r_esi = r_ecx;
L_0089dc8d:; BB(0x0089dc8d);
    /* 0089dc8d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089dc8f: jge 0x89dc95 */ if ((fS==fO)) goto L_0089dc95;
L_0089dc91:; BB(0x0089dc91);
    /* 0089dc91: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0089dc93: jmp 0x89dc9b */ goto L_0089dc9b;
L_0089dc95:; BB(0x0089dc95);
    /* 0089dc95: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0089dc97: jle 0x89dc9b */ if ((fZ||fS!=fO)) goto L_0089dc9b;
L_0089dc99:; BB(0x0089dc99);
    /* 0089dc99: mov ebx, ecx */ r_ebx = r_ecx;
L_0089dc9b:; BB(0x0089dc9b);
    /* 0089dc9b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089dc9d: jge 0x89dca3 */ if ((fS==fO)) goto L_0089dca3;
L_0089dc9f:; BB(0x0089dc9f);
    /* 0089dc9f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0089dca1: jmp 0x89dca9 */ goto L_0089dca9;
L_0089dca3:; BB(0x0089dca3);
    /* 0089dca3: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089dca5: jle 0x89dca9 */ if ((fZ||fS!=fO)) goto L_0089dca9;
L_0089dca7:; BB(0x0089dca7);
    /* 0089dca7: mov edi, ecx */ r_edi = r_ecx;
L_0089dca9:; BB(0x0089dca9);
    /* 0089dca9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089dcac: mov ecx, dword ptr [ecx + 0x1094] */ r_ecx = R32((u32)(r_ecx+0x1094u));
    /* 0089dcb2: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0089dcb4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089dcb7: mov ecx, dword ptr [ecx + 0x1098] */ r_ecx = R32((u32)(r_ecx+0x1098u));
    /* 0089dcbd: add dword ptr [ebp - 8], 2 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0089dcc1: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0089dcc3: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089dcc6: or edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0089dcc8: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089dccb: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 0089dcce: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089dcd1: mov ecx, dword ptr [edx + 0x1094] */ r_ecx = R32((u32)(r_edx+0x1094u));
    /* 0089dcd7: shl esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r; fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; fO = ((r >> 31) & 1) ^ fC; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0089dcd9: mov ecx, dword ptr [edx + 0x1098] */ r_ecx = R32((u32)(r_edx+0x1098u));
    /* 0089dcdf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089dce2: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0089dce4: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089dce7: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 0089dcea: or esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0089dcec: mov word ptr [ebx - 2], si */ W16((u32)(r_ebx+0xfffffffeu), (u16)r_esi);
    /* 0089dcf0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089dcf3: cmp edx, dword ptr [ecx + 0x1078] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1078u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089dcf9: jb 0x89db87 */ if (fC) goto L_0089db87;
L_0089dcff:; BB(0x0089dcff);
    /* 0089dcff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089dd00: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089dd01:; BB(0x0089dd01);
    /* 0089dd01: and dword ptr [ecx + 0x108c], 0 */ { u32 ad = (u32)(r_ecx+0x108cu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089dd08: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_0089dd09:; BB(0x0089dd09);
    /* 0089dd09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089dd0b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089dd0c: ret  */ FN_RET(0x0089db21); r_esp += 4; return;
}

void f_0089dd0d(void) /* sub_89DD0D */
{
    FN_ENTER(0x0089dd0d);
    /* 0089dd0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089dd0e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089dd10: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089dd12: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089dd16: mov esi, ecx */ r_esi = r_ecx;
    /* 0089dd18: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89dd1du); f_0089a735();
    /* 0089dd1d: mov dword ptr [esi], 0x99bb64 */ W32((u32)(r_esi), 0x99bb64u);
    /* 0089dd23: mov eax, esi */ r_eax = r_esi;
    /* 0089dd25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089dd26: ret 4 */ FN_RET(0x0089dd0d); r_esp += 8; return;
}

void f_0089dd29(void) /* sub_89DD29 */
{
    FN_ENTER(0x0089dd29);
    /* 0089dd29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089dd2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089dd2c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089dd2e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089dd32: mov esi, ecx */ r_esi = r_ecx;
    /* 0089dd34: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89dd39u); f_0089a735();
    /* 0089dd39: mov dword ptr [esi], 0x99bb74 */ W32((u32)(r_esi), 0x99bb74u);
    /* 0089dd3f: mov eax, esi */ r_eax = r_esi;
    /* 0089dd41: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089dd42: ret 4 */ FN_RET(0x0089dd29); r_esp += 8; return;
}

void f_0089dd45(void) /* sub_89DD45 */
{
    FN_ENTER(0x0089dd45);
    /* 0089dd45: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089dd46: mov ebp, esp */ r_ebp = r_esp;
    /* 0089dd48: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089dd4b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089dd4c: mov esi, ecx */ r_esi = r_ecx;
    /* 0089dd4e: cmp dword ptr [esi + 0x1090], 0 */ {  u32 a = R32((u32)(r_esi+0x1090u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089dd55: jne 0x89dd61 */ if (!fZ) goto L_0089dd61;
L_0089dd57:; BB(0x0089dd57);
    /* 0089dd57: mov eax, 0x8007000e */ r_eax = 0x8007000eu;
    /* 0089dd5c: jmp 0x89e011 */ goto L_0089e011;
L_0089dd61:; BB(0x0089dd61);
    /* 0089dd61: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089dd62: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0089dd65: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089dd66: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0089dd69: cmp edi, dword ptr [esi + 0x1074] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x1074u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089dd6f: jb 0x89dd8d */ if (fC) goto L_0089dd8d;
L_0089dd71:; BB(0x0089dd71);
    /* 0089dd71: cmp edi, dword ptr [esi + 0x107c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x107cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089dd77: jae 0x89dd8d */ if (!fC) goto L_0089dd8d;
L_0089dd79:; BB(0x0089dd79);
    /* 0089dd79: cmp ebx, dword ptr [esi + 0x1080] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x1080u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089dd7f: jb 0x89dd8d */ if (fC) goto L_0089dd8d;
L_0089dd81:; BB(0x0089dd81);
    /* 0089dd81: cmp ebx, dword ptr [esi + 0x1084] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x1084u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089dd87: jb 0x89e00d */ if (fC) goto L_0089e00d;
L_0089dd8d:; BB(0x0089dd8d);
    /* 0089dd8d: mov ecx, esi */ r_ecx = r_esi;
    /* 0089dd8f: call 0x89db21 */ r_esp -= 4; W32(r_esp, 0x89dd94u); f_0089db21();
    /* 0089dd94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089dd96: jl 0x89e00f */ if ((fS!=fO)) goto L_0089e00f;
L_0089dd9c:; BB(0x0089dd9c);
    /* 0089dd9c: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089dda0: lea eax, [edi + 1] */ r_eax = (u32)(r_edi+0x1u);
    /* 0089dda3: mov dword ptr [esi + 0x107c], eax */ W32((u32)(r_esi+0x107cu), r_eax);
    /* 0089dda9: lea eax, [ebx + 1] */ r_eax = (u32)(r_ebx+0x1u);
    /* 0089ddac: mov dword ptr [esi + 0x1074], edi */ W32((u32)(r_esi+0x1074u), r_edi);
    /* 0089ddb2: mov dword ptr [esi + 0x1080], ebx */ W32((u32)(r_esi+0x1080u), r_ebx);
    /* 0089ddb8: mov dword ptr [esi + 0x1084], eax */ W32((u32)(r_esi+0x1084u), r_eax);
    /* 0089ddbe: je 0x89e00d */ if (fZ) goto L_0089e00d;
L_0089ddc4:; BB(0x0089ddc4);
    /* 0089ddc4: mov ecx, dword ptr [esi + 0x1050] */ r_ecx = R32((u32)(r_esi+0x1050u));
    /* 0089ddca: mov edx, dword ptr [esi + 0x1054] */ r_edx = R32((u32)(r_esi+0x1054u));
    /* 0089ddd0: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089ddd3: mov eax, dword ptr [esi + 0x1070] */ r_eax = R32((u32)(r_esi+0x1070u));
    /* 0089ddd9: imul edx, ebx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ebx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089dddc: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089ddde: mov edx, dword ptr [esi + 0x106c] */ r_edx = R32((u32)(r_esi+0x106cu));
    /* 0089dde4: lea ebx, [ecx + eax*2] */ r_ebx = (u32)(r_ecx+r_eax*2);
    /* 0089dde7: add ebx, dword ptr [esi + 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089ddea: cmp eax, dword ptr [esi + 0x1078] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x1078u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089ddf0: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 0089ddf3: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0089ddf6: jae 0x89e00d */ if (!fC) goto L_0089e00d;
L_0089ddfc:; BB(0x0089ddfc);
    /* 0089ddfc: fld dword ptr [0x99b9cc] */ FPUSH(R_F32((u32)(0x99b9ccu)));
    /* 0089de02: mov edi, 0xff */ r_edi = 0xffu;
    /* 0089de07: fld dword ptr [0x99b9b8] */ FPUSH(R_F32((u32)(0x99b9b8u)));
    /* 0089de0d: fld dword ptr [0x99bab4] */ FPUSH(R_F32((u32)(0x99bab4u)));
L_0089de13:; BB(0x0089de13);
    /* 0089de13: mov cx, word ptr [esi + 0x1094] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+0x1094u))) & 0xffffu);
    /* 0089de1a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0089de1c: mov ax, word ptr [ebx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebx))) & 0xffffu);
    /* 0089de1f: mov ebx, eax */ r_ebx = r_eax;
    /* 0089de21: shr bx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u16)r_ebx; u32 r = a; if (c) { r = (c >= 16) ? 0 : (a >> c); r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu); fC = (c <= 16) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 15) & 1; fZ = (r == 0); fS = (r >> 15) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0089de24: mov cx, word ptr [esi + 0x1098] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+0x1098u))) & 0xffffu);
    /* 0089de2b: shr ax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u16)r_eax; u32 r = a; if (c) { r = (c >= 16) ? 0 : (a >> c); r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 0089de2e: mov cx, word ptr [esi + 0x1094] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+0x1094u))) & 0xffffu);
    /* 0089de35: and ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0089de37: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
    /* 0089de3a: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 0089de3d: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0089de40: and eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089de42: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0089de45: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0089de47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0089de49: mov ax, word ptr [ebx + 2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebx+0x2u))) & 0xffffu);
    /* 0089de4d: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0089de50: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 0089de53: fsub dword ptr [0x99bab0] */ ST(0) = ST(0) - R_F32((u32)(0x99bab0u));
    /* 0089de59: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0089de5c: shr ax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u16)r_eax; u32 r = a; if (c) { r = (c >= 16) ? 0 : (a >> c); r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 0089de5f: mov cx, word ptr [esi + 0x1098] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+0x1098u))) & 0xffffu);
    /* 0089de66: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 0089de69: and eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0089de6b: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0089de6e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0089de71: fild dword ptr [ebp + 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x8u)));
    /* 0089de74: shr ax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u16)r_eax; u32 r = a; if (c) { r = (c >= 16) ? 0 : (a >> c); r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 0089de77: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0089de79: and eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089de7b: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0089de7e: fild dword ptr [ebp + 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x8u)));
    /* 0089de81: fsub dword ptr [0x99bab0] */ ST(0) = ST(0) - R_F32((u32)(0x99bab0u));
    /* 0089de87: fst dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0));
    /* 0089de8a: fmul dword ptr [0x99bb94] */ ST(0) = ST(0) * R_F32((u32)(0x99bb94u));
    /* 0089de90: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0089de93: fmul dword ptr [0x99bb90] */ ST(0) = ST(0) * R_F32((u32)(0x99bb90u));
    /* 0089de99: fst dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0));
    /* 0089de9c: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089de9e: fst dword ptr [edx] */ W_F32((u32)(r_edx), ST(0));
    /* 0089dea0: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 0089dea3: fmul dword ptr [0x99bb8c] */ ST(0) = ST(0) * R_F32((u32)(0x99bb8cu));
    /* 0089dea9: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0089deac: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0089deaf: fmul dword ptr [0x99bb88] */ ST(0) = ST(0) * R_F32((u32)(0x99bb88u));
    /* 0089deb5: fst dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0));
    /* 0089deb8: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0089debb: fsub dword ptr [ebp - 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089debe: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0089dec0: fst dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0));
    /* 0089dec3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0089dec5: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0089dec8: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 0089decb: fmul dword ptr [0x99bb84] */ ST(0) = ST(0) * R_F32((u32)(0x99bb84u));
    /* 0089ded1: fst dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0));
    /* 0089ded4: fadd dword ptr [ebp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x8u));
    /* 0089ded7: fst dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0));
    /* 0089deda: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 0089dedd: fld1  */ FPUSH(1.0);
    /* 0089dedf: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 0089dee2: fcom st(5) */ fx_compare(ST(0), ST(5)); 
    /* 0089dee4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089dee6: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0089dee9: jp 0x89def1 */ if (fP) goto L_0089def1;
L_0089deeb:; BB(0x0089deeb);
    /* 0089deeb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089deed: fldz  */ FPUSH(0.0);
    /* 0089deef: jmp 0x89defe */ goto L_0089defe;
L_0089def1:; BB(0x0089def1);
    /* 0089def1: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 0089def3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089def5: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0089def8: jne 0x89defe */ if (!fZ) goto L_0089defe;
L_0089defa:; BB(0x0089defa);
    /* 0089defa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089defc: fld1  */ FPUSH(1.0);
L_0089defe:; BB(0x0089defe);
    /* 0089defe: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0089df00: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0089df03: fcomp st(5) */ fx_compare(ST(0), ST(5)); FPOP();
    /* 0089df05: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089df07: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0089df0a: jp 0x89df10 */ if (fP) goto L_0089df10;
L_0089df0c:; BB(0x0089df0c);
    /* 0089df0c: fldz  */ FPUSH(0.0);
    /* 0089df0e: jmp 0x89df23 */ goto L_0089df23;
L_0089df10:; BB(0x0089df10);
    /* 0089df10: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0089df13: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 0089df15: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089df17: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0089df1a: jne 0x89df20 */ if (!fZ) goto L_0089df20;
L_0089df1c:; BB(0x0089df1c);
    /* 0089df1c: fld1  */ FPUSH(1.0);
    /* 0089df1e: jmp 0x89df23 */ goto L_0089df23;
L_0089df20:; BB(0x0089df20);
    /* 0089df20: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
L_0089df23:; BB(0x0089df23);
    /* 0089df23: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0089df26: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0089df29: fcomp st(5) */ fx_compare(ST(0), ST(5)); FPOP();
    /* 0089df2b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089df2d: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0089df30: jp 0x89df36 */ if (fP) goto L_0089df36;
L_0089df32:; BB(0x0089df32);
    /* 0089df32: fldz  */ FPUSH(0.0);
    /* 0089df34: jmp 0x89df49 */ goto L_0089df49;
L_0089df36:; BB(0x0089df36);
    /* 0089df36: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0089df39: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 0089df3b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089df3d: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0089df40: jne 0x89df46 */ if (!fZ) goto L_0089df46;
L_0089df42:; BB(0x0089df42);
    /* 0089df42: fld1  */ FPUSH(1.0);
    /* 0089df44: jmp 0x89df49 */ goto L_0089df49;
L_0089df46:; BB(0x0089df46);
    /* 0089df46: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
L_0089df49:; BB(0x0089df49);
    /* 0089df49: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 0089df4c: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0089df4e: fmul dword ptr [0x99bb90] */ ST(0) = ST(0) * R_F32((u32)(0x99bb90u));
    /* 0089df54: fst dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0));
    /* 0089df57: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089df59: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0089df5b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089df5d: fst dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0));
    /* 0089df60: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0089df63: fsub dword ptr [ebp - 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089df66: fsub dword ptr [ebp - 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0089df69: fst dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0));
    /* 0089df6c: fstp dword ptr [edx + 0x14] */ W_F32((u32)(r_edx+0x14u), ST(0)); FPOP();
    /* 0089df6f: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0089df72: fadd dword ptr [ebp - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0089df75: fst dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0));
    /* 0089df78: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 0089df7b: fld1  */ FPUSH(1.0);
    /* 0089df7d: fstp dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0)); FPOP();
    /* 0089df80: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0089df82: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089df84: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0089df87: jp 0x89df8f */ if (fP) goto L_0089df8f;
L_0089df89:; BB(0x0089df89);
    /* 0089df89: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089df8b: fldz  */ FPUSH(0.0);
    /* 0089df8d: jmp 0x89df9c */ goto L_0089df9c;
L_0089df8f:; BB(0x0089df8f);
    /* 0089df8f: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0089df91: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089df93: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0089df96: jne 0x89df9c */ if (!fZ) goto L_0089df9c;
L_0089df98:; BB(0x0089df98);
    /* 0089df98: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089df9a: fld1  */ FPUSH(1.0);
L_0089df9c:; BB(0x0089df9c);
    /* 0089df9c: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 0089df9f: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0089dfa2: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0089dfa4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089dfa6: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0089dfa9: jp 0x89dfaf */ if (fP) goto L_0089dfaf;
L_0089dfab:; BB(0x0089dfab);
    /* 0089dfab: fldz  */ FPUSH(0.0);
    /* 0089dfad: jmp 0x89dfc2 */ goto L_0089dfc2;
L_0089dfaf:; BB(0x0089dfaf);
    /* 0089dfaf: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0089dfb2: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0089dfb4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089dfb6: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0089dfb9: jne 0x89dfbf */ if (!fZ) goto L_0089dfbf;
L_0089dfbb:; BB(0x0089dfbb);
    /* 0089dfbb: fld1  */ FPUSH(1.0);
    /* 0089dfbd: jmp 0x89dfc2 */ goto L_0089dfc2;
L_0089dfbf:; BB(0x0089dfbf);
    /* 0089dfbf: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
L_0089dfc2:; BB(0x0089dfc2);
    /* 0089dfc2: fstp dword ptr [edx + 0x14] */ W_F32((u32)(r_edx+0x14u), ST(0)); FPOP();
    /* 0089dfc5: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0089dfc8: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0089dfca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089dfcc: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0089dfcf: jp 0x89dfd5 */ if (fP) goto L_0089dfd5;
L_0089dfd1:; BB(0x0089dfd1);
    /* 0089dfd1: fldz  */ FPUSH(0.0);
    /* 0089dfd3: jmp 0x89dfe8 */ goto L_0089dfe8;
L_0089dfd5:; BB(0x0089dfd5);
    /* 0089dfd5: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0089dfd8: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0089dfda: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089dfdc: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0089dfdf: jne 0x89dfe5 */ if (!fZ) goto L_0089dfe5;
L_0089dfe1:; BB(0x0089dfe1);
    /* 0089dfe1: fld1  */ FPUSH(1.0);
    /* 0089dfe3: jmp 0x89dfe8 */ goto L_0089dfe8;
L_0089dfe5:; BB(0x0089dfe5);
    /* 0089dfe5: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
L_0089dfe8:; BB(0x0089dfe8);
    /* 0089dfe8: add dword ptr [ebp + 0x10], 2 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089dfec: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 0089dfef: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089dff2: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089dff5: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089dff8: cmp eax, dword ptr [esi + 0x1078] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x1078u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089dffe: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 0089e001: jb 0x89de13 */ if (fC) goto L_0089de13;
L_0089e007:; BB(0x0089e007);
    /* 0089e007: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089e009: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089e00b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0089e00d:; BB(0x0089e00d);
    /* 0089e00d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0089e00f:; BB(0x0089e00f);
    /* 0089e00f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089e010: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089e011:; BB(0x0089e011);
    /* 0089e011: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e012: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089e013: ret 0xc */ FN_RET(0x0089dd45); r_esp += 16; return;
}

