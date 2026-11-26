#include "protos.h"

void f_005fa04c(void) /* sub_5FA04C */
{
    FN_ENTER(0x005fa04c);
    /* 005fa04c: mov eax, ecx */ r_eax = r_ecx;
    /* 005fa04e: movzx edx, byte ptr [eax + 0xf3] */ r_edx = (u32)R8((u32)(r_eax+0xf3u));
    /* 005fa055: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fa058: jne 0x5fa0de */ if (!fZ) goto L_005fa0de;
L_005fa05e:; BB(0x005fa05e);
    /* 005fa05e: movzx edx, byte ptr [eax + 0xf4] */ r_edx = (u32)R8((u32)(r_eax+0xf4u));
    /* 005fa065: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa068: je 0x5fa0c6 */ if (fZ) goto L_005fa0c6;
L_005fa06a:; BB(0x005fa06a);
    /* 005fa06a: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa06d: jne 0x5fa0ab */ if (!fZ) goto L_005fa0ab;
L_005fa06f:; BB(0x005fa06f);
    /* 005fa06f: mov edx, dword ptr [0xa8d84c] */ r_edx = R32((u32)(0xa8d84cu));
    /* 005fa075: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa078: je 0x5fa09e */ if (fZ) goto L_005fa09e;
L_005fa07a:; BB(0x005fa07a);
    /* 005fa07a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa07d: jne 0x5fa08c */ if (!fZ) goto L_005fa08c;
L_005fa07f:; BB(0x005fa07f);
    /* 005fa07f: add eax, 0x25c */ {  u32 a = r_eax; u32 b = 0x25cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fa084: mov ecx, eax */ r_ecx = r_eax;
    /* 005fa086: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5fa08bu); f_0082d838();
    /* 005fa08b: ret  */ FN_RET(0x005fa04c); r_esp += 4; return;
L_005fa08c:; BB(0x005fa08c);
    /* 005fa08c: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fa08f: jne 0x5fa0de */ if (!fZ) goto L_005fa0de;
L_005fa091:; BB(0x005fa091);
    /* 005fa091: add eax, 0x244 */ {  u32 a = r_eax; u32 b = 0x244u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fa096: mov ecx, eax */ r_ecx = r_eax;
    /* 005fa098: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x5fa09du); f_00831290();
    /* 005fa09d: ret  */ FN_RET(0x005fa04c); r_esp += 4; return;
L_005fa09e:; BB(0x005fa09e);
    /* 005fa09e: add eax, 0x250 */ {  u32 a = r_eax; u32 b = 0x250u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fa0a3: mov ecx, eax */ r_ecx = r_eax;
    /* 005fa0a5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5fa0aau); f_0082d838();
    /* 005fa0aa: ret  */ FN_RET(0x005fa04c); r_esp += 4; return;
L_005fa0ab:; BB(0x005fa0ab);
    /* 005fa0ab: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fa0ae: jne 0x5fa0de */ if (!fZ) goto L_005fa0de;
L_005fa0b0:; BB(0x005fa0b0);
    /* 005fa0b0: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005fa0b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fa0b7: jne 0x5fa0de */ if (!fZ) goto L_005fa0de;
L_005fa0b9:; BB(0x005fa0b9);
    /* 005fa0b9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa0bb: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 005fa0c0: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5fa0c5u); f_00830c04();
    /* 005fa0c5: ret  */ FN_RET(0x005fa04c); r_esp += 4; return;
L_005fa0c6:; BB(0x005fa0c6);
    /* 005fa0c6: mov edx, dword ptr [0xa8d84c] */ r_edx = R32((u32)(0xa8d84cu));
    /* 005fa0cc: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fa0cf: jne 0x5fa0de */ if (!fZ) goto L_005fa0de;
L_005fa0d1:; BB(0x005fa0d1);
    /* 005fa0d1: mov edx, dword ptr [eax + 0x240] */ r_edx = R32((u32)(r_eax+0x240u));
    /* 005fa0d7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa0d9: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5fa0deu); f_00830c04();
L_005fa0de:; BB(0x005fa0de);
    /* 005fa0de: ret  */ FN_RET(0x005fa04c); r_esp += 4; return;
}

void f_005fa0e0(void) /* sub_5FA0E0 */
{
    FN_ENTER(0x005fa0e0);
    /* 005fa0e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa0e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fa0e3: movzx eax, byte ptr [ebx + 0xf3] */ r_eax = (u32)R8((u32)(r_ebx+0xf3u));
    /* 005fa0ea: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fa0ed: jne 0x5fa15a */ if (!fZ) goto L_005fa15a;
L_005fa0ef:; BB(0x005fa0ef);
    /* 005fa0ef: movzx eax, byte ptr [ebx + 0xf4] */ r_eax = (u32)R8((u32)(r_ebx+0xf4u));
    /* 005fa0f6: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fa0f9: jne 0x5fa15a */ if (!fZ) goto L_005fa15a;
L_005fa0fb:; BB(0x005fa0fb);
    /* 005fa0fb: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005fa101: mov eax, dword ptr [eax + 0x2b4] */ r_eax = R32((u32)(r_eax+0x2b4u));
    /* 005fa107: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005fa10a: mov eax, 0x14f8b589 */ r_eax = 0x14f8b589u;
    /* 005fa10f: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fa111: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005fa114: add ebx, 0x240 */ {  u32 a = r_ebx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005fa11a: sar edx, 0xd */ { u32 c = (13u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005fa11d: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005fa11f: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005fa122: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fa124: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005fa126: lea eax, [edx + eax*4] */ r_eax = (u32)(r_edx+r_eax*4);
    /* 005fa129: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fa12b: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005fa12e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005fa130: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005fa132: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005fa135: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa137: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa139: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa13b: mov eax, 0x1555 */ r_eax = 0x1555u;
    /* 005fa140: cmp ecx, 0x1555 */ {  u32 a = r_ecx; u32 b = 0x1555u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fa146: jle 0x5fa14a */ if ((fZ||fS!=fO)) goto L_005fa14a;
L_005fa148:; BB(0x005fa148);
    /* 005fa148: mov ecx, eax */ r_ecx = r_eax;
L_005fa14a:; BB(0x005fa14a);
    /* 005fa14a: add ecx, 0x1555 */ {  u32 a = r_ecx; u32 b = 0x1555u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa150: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa151: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa152: call 0x5dd6d0 */ r_esp -= 4; W32(r_esp, 0x5fa157u); f_005dd6d0();
    /* 005fa157: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005fa15a:; BB(0x005fa15a);
    /* 005fa15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fa15b: ret  */ FN_RET(0x005fa0e0); r_esp += 4; return;
}

void f_005fa15c(void) /* sub_5FA15C */
{
    FN_ENTER(0x005fa15c);
    /* 005fa15c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fa15d: mov edi, ecx */ r_edi = r_ecx;
    /* 005fa15f: movzx eax, byte ptr [edi + 0xf3] */ r_eax = (u32)R8((u32)(r_edi+0xf3u));
    /* 005fa166: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fa169: jne 0x5fa177 */ if (!fZ) goto L_005fa177;
L_005fa16b:; BB(0x005fa16b);
    /* 005fa16b: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005fa172: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fa175: je 0x5fa179 */ if (fZ) goto L_005fa179;
L_005fa177:; BB(0x005fa177);
    /* 005fa177: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fa178: ret  */ FN_RET(0x005fa15c); r_esp += 4; return;
L_005fa179:; BB(0x005fa179);
    /* 005fa179: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa17b: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa180: lea eax, [edi + 0x254] */ r_eax = (u32)(r_edi+0x254u);
    /* 005fa186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa187: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5fa18cu); f_005dd728();
    /* 005fa18c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa18e: push 0xbe800000 */ { u32 v = 0xbe800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa193: lea eax, [edi + 0x260] */ r_eax = (u32)(r_edi+0x260u);
    /* 005fa199: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa19a: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5fa19fu); f_005dd728();
    /* 005fa19f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 005fa1a2: fld dword ptr [0x92ddf8] */ FPUSH(R_F32((u32)(0x92ddf8u)));
    /* 005fa1a8: fcomp dword ptr [edi + 0x254] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x254u))); FPOP();
    /* 005fa1ae: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005fa1b0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005fa1b1: ja 0x5fa177 */ if ((!fC&&!fZ)) goto L_005fa177;
L_005fa1b3:; BB(0x005fa1b3);
    /* 005fa1b3: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa1b8: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa1bd: add edi, 0x24c */ {  u32 a = r_edi; u32 b = 0x24cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005fa1c3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fa1c4: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5fa1c9u); f_005dd728();
    /* 005fa1c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fa1cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fa1cd: ret  */ FN_RET(0x005fa15c); r_esp += 4; return;
}

void f_005fa1d0(void) /* sub_5FA1D0 */
{
    FN_ENTER(0x005fa1d0);
    /* 005fa1d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fa1d1: mov edi, ecx */ r_edi = r_ecx;
    /* 005fa1d3: movzx eax, byte ptr [edi + 0xf3] */ r_eax = (u32)R8((u32)(r_edi+0xf3u));
    /* 005fa1da: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fa1dd: jne 0x5fa1eb */ if (!fZ) goto L_005fa1eb;
L_005fa1df:; BB(0x005fa1df);
    /* 005fa1df: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005fa1e6: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fa1e9: je 0x5fa1ed */ if (fZ) goto L_005fa1ed;
L_005fa1eb:; BB(0x005fa1eb);
    /* 005fa1eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fa1ec: ret  */ FN_RET(0x005fa1d0); r_esp += 4; return;
L_005fa1ed:; BB(0x005fa1ed);
    /* 005fa1ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa1ef: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa1f4: lea eax, [edi + 0x24c] */ r_eax = (u32)(r_edi+0x24cu);
    /* 005fa1fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa1fb: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5fa200u); f_005dd728();
    /* 005fa200: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 005fa203: fld dword ptr [edi + 0x24c] */ FPUSH(R_F32((u32)(r_edi+0x24cu)));
    /* 005fa209: fcomp dword ptr [0x92dddc] */ fx_compare(ST(0), R_F32((u32)(0x92dddcu))); FPOP();
    /* 005fa20f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005fa211: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005fa212: ja 0x5fa1eb */ if ((!fC&&!fZ)) goto L_005fa1eb;
L_005fa214:; BB(0x005fa214);
    /* 005fa214: push 0xbf870a3d */ { u32 v = 0xbf870a3du; r_esp -= 4; W32(r_esp, v); }
    /* 005fa219: push 0xbe4ccccd */ { u32 v = 0xbe4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa21e: lea eax, [edi + 0x254] */ r_eax = (u32)(r_edi+0x254u);
    /* 005fa224: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa225: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5fa22au); f_005dd728();
    /* 005fa22a: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa22f: push 0x3e19999a */ { u32 v = 0x3e19999au; r_esp -= 4; W32(r_esp, v); }
    /* 005fa234: add edi, 0x260 */ {  u32 a = r_edi; u32 b = 0x260u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005fa23a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fa23b: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5fa240u); f_005dd728();
    /* 005fa240: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fa243: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fa244: ret  */ FN_RET(0x005fa1d0); r_esp += 4; return;
}

void f_005fa248(void) /* sub_5FA248 */
{
    FN_ENTER(0x005fa248);
    /* 005fa248: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa249: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fa24b: movzx eax, byte ptr [ebx + 0xf3] */ r_eax = (u32)R8((u32)(r_ebx+0xf3u));
    /* 005fa252: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa255: jne 0x5fa319 */ if (!fZ) goto L_005fa319;
L_005fa25b:; BB(0x005fa25b);
    /* 005fa25b: movzx eax, byte ptr [ebx + 0xf4] */ r_eax = (u32)R8((u32)(r_ebx+0xf4u));
    /* 005fa262: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa265: jne 0x5fa310 */ if (!fZ) goto L_005fa310;
L_005fa26b:; BB(0x005fa26b);
    /* 005fa26b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fa26d: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5fa272u); f_005e90b0();
    /* 005fa272: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa274: je 0x5fa307 */ if (fZ) goto L_005fa307;
L_005fa27a:; BB(0x005fa27a);
    /* 005fa27a: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005fa280: mov eax, dword ptr [ecx + 0x2b4] */ r_eax = R32((u32)(r_ecx+0x2b4u));
    /* 005fa286: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 005fa289: cmp edx, 0x2710 */ {  u32 a = r_edx; u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fa28f: jl 0x5fa307 */ if ((fS!=fO)) goto L_005fa307;
L_005fa291:; BB(0x005fa291);
    /* 005fa291: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 005fa298: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa29b: jne 0x5fa2ad */ if (!fZ) goto L_005fa2ad;
L_005fa29d:; BB(0x005fa29d);
    /* 005fa29d: push 0x2710 */ { u32 v = 0x2710u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa2a2: call 0x777290 */ r_esp -= 4; W32(r_esp, 0x5fa2a7u); f_00777290();
    /* 005fa2a7: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
L_005fa2ad:; BB(0x005fa2ad);
    /* 005fa2ad: push 0x2710 */ { u32 v = 0x2710u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa2b2: call 0x7772bc */ r_esp -= 4; W32(r_esp, 0x5fa2b7u); f_007772bc();
    /* 005fa2b7: push 0xffffd8f0 */ { u32 v = 0xffffd8f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa2bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa2be: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005fa2c4: lea eax, [ecx + 0x300] */ r_eax = (u32)(r_ecx+0x300u);
    /* 005fa2ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa2cb: call 0x779fec */ r_esp -= 4; W32(r_esp, 0x5fa2d0u); f_00779fec();
    /* 005fa2d0: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa2d5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fa2d7: call 0x5e6544 */ r_esp -= 4; W32(r_esp, 0x5fa2dcu); f_005e6544();
    /* 005fa2dc: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa2de: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005fa2e4: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fa2e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa2ea: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5fa2efu); f_0050b510();
    /* 005fa2ef: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa2f1: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005fa2f7: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fa2fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa2fd: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5fa302u); f_0050b510();
    /* 005fa302: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fa305: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fa306: ret  */ FN_RET(0x005fa248); r_esp += 4; return;
L_005fa307:; BB(0x005fa307);
    /* 005fa307: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fa309: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5fa30eu); f_005e90e8();
    /* 005fa30e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fa30f: ret  */ FN_RET(0x005fa248); r_esp += 4; return;
L_005fa310:; BB(0x005fa310);
    /* 005fa310: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fa312: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5fa317u); f_005e90e8();
    /* 005fa317: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fa318: ret  */ FN_RET(0x005fa248); r_esp += 4; return;
L_005fa319:; BB(0x005fa319);
    /* 005fa319: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fa31b: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5fa320u); f_005e90e8();
    /* 005fa320: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fa321: ret  */ FN_RET(0x005fa248); r_esp += 4; return;
}

void f_005fa2fb(void)
{
    FN_ENTER(0x005fa2fb);
    /* 005fa2fb: add byte ptr [eax - 0x18], dl */ { u32 ad = (u32)(r_eax+0xffffffe8u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 005fa2fe: push cs */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa2ff: adc dh, cl */ { u32 c = fC; u32 a = (u8)(r_edx>>8); u32 b = (u8)r_ecx; u32 r = (a + b + c) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 005fa301: inc dword ptr [ebx - 0x3ca4ef3c] */ { u32 ad = (u32)(r_ebx+0xc35b10c4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005fa307: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fa309: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5fa30eu); f_005e90e8();
    /* 005fa30e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fa30f: ret  */ FN_RET(0x005fa2fb); r_esp += 4; return;
}

void f_005fa324(void) /* sub_5FA324 */
{
    FN_ENTER(0x005fa324);
    /* 005fa324: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fa325: mov ebp, esp */ r_ebp = r_esp;
    /* 005fa327: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa329: push 0x8dddec */ { u32 v = 0x8dddecu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa32e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fa334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa335: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fa33c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fa33f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fa342: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fa345: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fa348: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fa34b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fa34e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa350: je 0x5fa3a7 */ if (fZ) goto L_005fa3a7;
L_005fa352:; BB(0x005fa352);
    /* 005fa352: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fa359: push 0x268 */ { u32 v = 0x268u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa35e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fa363u); f_005caba4();
    /* 005fa363: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fa364: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fa367: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa369: je 0x5fa3a3 */ if (fZ) goto L_005fa3a3;
L_005fa36b:; BB(0x005fa36b);
    /* 005fa36b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fa372: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fa379: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fa37c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fa37f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa380: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fa386: call 0x5fa3b8 */ r_esp -= 4; W32(r_esp, 0x5fa38bu); f_005fa3b8();
    /* 005fa38b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fa38e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fa395:; BB(0x005fa395);
    /* 005fa395: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fa398: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fa39f: mov esp, ebp */ r_esp = r_ebp;
    /* 005fa3a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fa3a2: ret  */ FN_RET(0x005fa324); r_esp += 4; return;
L_005fa3a3:; BB(0x005fa3a3);
    /* 005fa3a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fa3a5: jmp 0x5fa395 */ goto L_005fa395;
L_005fa3a7:; BB(0x005fa3a7);
    /* 005fa3a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fa3a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fa3ac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fa3b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005fa3b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fa3b6: ret  */ FN_RET(0x005fa324); r_esp += 4; return;
}

void f_005fa3b8(void) /* sub_5FA3B8 */
{
    FN_ENTER(0x005fa3b8);
    /* 005fa3b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa3b9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fa3bb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fa3bf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fa3c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fa3c5: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fa3cau); f_005e959c();
    /* 005fa3ca: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005fa3d0: movzx eax, byte ptr [ebx + 0xf3] */ r_eax = (u32)R8((u32)(r_ebx+0xf3u));
    /* 005fa3d7: mov dword ptr [ebx], 0xb19700 */ W32((u32)(r_ebx), 0xb19700u);
    /* 005fa3dd: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005fa3e0: mov dword ptr [ebx + 0x240], 0 */ W32((u32)(r_ebx+0x240u), 0x0u);
    /* 005fa3ea: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fa3ed: mov dword ptr [ebx + 0x244], 0x3f800000 */ W32((u32)(r_ebx+0x244u), 0x3f800000u);
    /* 005fa3f7: mov dword ptr [ebx + 0x248], 0x3f800000 */ W32((u32)(r_ebx+0x248u), 0x3f800000u);
    /* 005fa401: mov dword ptr [ebx + 0x24c], 0x3f800000 */ W32((u32)(r_ebx+0x24cu), 0x3f800000u);
    /* 005fa40b: mov dword ptr [ebx + 0x250], 0 */ W32((u32)(r_ebx+0x250u), 0x0u);
    /* 005fa415: mov dword ptr [ebx + 0x254], 0 */ W32((u32)(r_ebx+0x254u), 0x0u);
    /* 005fa41f: mov dword ptr [ebx + 0x258], 0 */ W32((u32)(r_ebx+0x258u), 0x0u);
    /* 005fa429: mov dword ptr [ebx + 0x25c], 0 */ W32((u32)(r_ebx+0x25cu), 0x0u);
    /* 005fa433: mov dword ptr [ebx + 0x260], 0 */ W32((u32)(r_ebx+0x260u), 0x0u);
    /* 005fa43d: mov dword ptr [ebx + 0x264], 0 */ W32((u32)(r_ebx+0x264u), 0x0u);
    /* 005fa447: jne 0x5fa45d */ if (!fZ) goto L_005fa45d;
L_005fa449:; BB(0x005fa449);
    /* 005fa449: movzx eax, byte ptr [ebx + 0xf4] */ r_eax = (u32)R8((u32)(r_ebx+0xf4u));
    /* 005fa450: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fa453: je 0x5fa469 */ if (fZ) goto L_005fa469;
L_005fa455:; BB(0x005fa455);
    /* 005fa455: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005fa45b: jmp 0x5fa463 */ goto L_005fa463;
L_005fa45d:; BB(0x005fa45d);
    /* 005fa45d: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
L_005fa463:; BB(0x005fa463);
    /* 005fa463: mov eax, ebx */ r_eax = r_ebx;
    /* 005fa465: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fa466: ret 8 */ FN_RET(0x005fa3b8); r_esp += 12; return;
L_005fa469:; BB(0x005fa469);
    /* 005fa469: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fa46c: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005fa472: jmp 0x5fa463 */ goto L_005fa463;
}

void f_005fa474(void) /* sub_5FA474 */
{
    FN_ENTER(0x005fa474);
    /* 005fa474: mov dword ptr [0xa8e150], 0x3f800000 */ W32((u32)(0xa8e150u), 0x3f800000u);
    /* 005fa47e: mov dword ptr [0xa8e154], 0x41000000 */ W32((u32)(0xa8e154u), 0x41000000u);
    /* 005fa488: mov dword ptr [0xa8e158], 0x3fc00000 */ W32((u32)(0xa8e158u), 0x3fc00000u);
    /* 005fa492: ret  */ FN_RET(0x005fa474); r_esp += 4; return;
}

void f_005fa494(void) /* sub_5FA494 */
{
    FN_ENTER(0x005fa494);
    /* 005fa494: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa495: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fa497: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fa499: call 0x5fa4b8 */ r_esp -= 4; W32(r_esp, 0x5fa49eu); f_005fa4b8();
    /* 005fa49e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005fa4a2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fa4a4: jne 0x5fa4aa */ if (!fZ) goto L_005fa4aa;
L_005fa4a6:; BB(0x005fa4a6);
    /* 005fa4a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fa4a7: ret 4 */ FN_RET(0x005fa494); r_esp += 8; return;
L_005fa4aa:; BB(0x005fa4aa);
    /* 005fa4aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa4ab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fa4b0u); f_005c2f74();
    /* 005fa4b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fa4b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fa4b2: ret 4 */ FN_RET(0x005fa494); r_esp += 8; return;
}

void f_005fa4b8(void) /* sub_5FA4B8 */
{
    FN_ENTER(0x005fa4b8);
    /* 005fa4b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fa4b9: mov ebp, esp */ r_ebp = r_esp;
    /* 005fa4bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa4bd: push 0x8dde08 */ { u32 v = 0x8dde08u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa4c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fa4c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa4c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fa4d0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fa4d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fa4d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fa4d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fa4dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fa4df: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005fa4e2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fa4e5: mov dword ptr [ecx], 0xb19860 */ W32((u32)(r_ecx), 0xb19860u);
    /* 005fa4eb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fa4f2: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fa4f7u); f_005e61c8();
    /* 005fa4f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fa4fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fa501: mov esp, ebp */ r_esp = r_ebp;
    /* 005fa503: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fa504: ret  */ FN_RET(0x005fa4b8); r_esp += 4; return;
}

void f_005fa508(void) /* sub_5FA508 */
{
    FN_ENTER(0x005fa508);
    /* 005fa508: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa509: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fa50c: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 005fa512: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa514: je 0x5fa614 */ if (fZ) goto L_005fa614;
L_005fa51a:; BB(0x005fa51a);
    /* 005fa51a: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 005fa520: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005fa526: mov edx, dword ptr [edx + 0x328] */ r_edx = R32((u32)(r_edx+0x328u));
    /* 005fa52c: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fa52f: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005fa532: je 0x5fa549 */ if (fZ) goto L_005fa549;
L_005fa534:; BB(0x005fa534);
    /* 005fa534: fld dword ptr [0x92de2c] */ FPUSH(R_F32((u32)(0x92de2cu)));
    /* 005fa53a: fld dword ptr [0x92de28] */ FPUSH(R_F32((u32)(0x92de28u)));
    /* 005fa540: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005fa542: mov ebx, 0x4000 */ r_ebx = 0x4000u;
    /* 005fa547: jmp 0x5fa588 */ goto L_005fa588;
L_005fa549:; BB(0x005fa549);
    /* 005fa549: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005fa54c: je 0x5fa566 */ if (fZ) goto L_005fa566;
L_005fa54e:; BB(0x005fa54e);
    /* 005fa54e: fld dword ptr [0x92de24] */ FPUSH(R_F32((u32)(0x92de24u)));
    /* 005fa554: fld dword ptr [0x92de20] */ FPUSH(R_F32((u32)(0x92de20u)));
    /* 005fa55a: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 005fa55f: mov ebx, 0xffffc000 */ r_ebx = 0xffffc000u;
    /* 005fa564: jmp 0x5fa588 */ goto L_005fa588;
L_005fa566:; BB(0x005fa566);
    /* 005fa566: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa56c: je 0x5fa619 */ if (fZ) goto L_005fa619;
L_005fa572:; BB(0x005fa572);
    /* 005fa572: fld dword ptr [0x92de1c] */ FPUSH(R_F32((u32)(0x92de1cu)));
    /* 005fa578: fld dword ptr [0x92de18] */ FPUSH(R_F32((u32)(0x92de18u)));
    /* 005fa57e: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 005fa583: mov ebx, 0x2000 */ r_ebx = 0x2000u;
L_005fa588:; BB(0x005fa588);
    /* 005fa588: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa58a: jne 0x5fa608 */ if (!fZ) goto L_005fa608;
L_005fa58c:; BB(0x005fa58c);
    /* 005fa58c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005fa58e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005fa590: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005fa592: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005fa593: jae 0x5fa5a6 */ if (!fC) goto L_005fa5a6;
L_005fa595:; BB(0x005fa595);
    /* 005fa595: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 005fa597: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fa599: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fa59b: mov dword ptr [ecx + 0x240], edx */ W32((u32)(r_ecx+0x240u), r_edx);
    /* 005fa5a1: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fa5a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fa5a5: ret  */ FN_RET(0x005fa508); r_esp += 4; return;
L_005fa5a6:; BB(0x005fa5a6);
    /* 005fa5a6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005fa5a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005fa5aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005fa5ab: jb 0x5fa5f7 */ if (fC) goto L_005fa5f7;
L_005fa5ad:; BB(0x005fa5ad);
    /* 005fa5ad: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 005fa5af: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005fa5b1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005fa5b2: ja 0x5fa5f7 */ if ((!fC&&!fZ)) goto L_005fa5f7;
L_005fa5b4:; BB(0x005fa5b4);
    /* 005fa5b4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005fa5b6: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 005fa5b8: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005fa5ba: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005fa5bd: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005fa5c0: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005fa5c2: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 005fa5c6: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005fa5ca: fdivrp st(3) */ ST(3) = ST(0) / ST(3); FPOP();
    /* 005fa5cc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005fa5ce: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005fa5d0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005fa5d2: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005fa5d6: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005fa5db: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005fa5e0: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005fa5e4: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005fa5e8: fistp dword ptr [ecx + 0x240] */ W32((u32)(r_ecx+0x240u), (u32)fx_int32(ST(0))); FPOP();
    /* 005fa5ee: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005fa5f2: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fa5f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fa5f6: ret  */ FN_RET(0x005fa508); r_esp += 4; return;
L_005fa5f7:; BB(0x005fa5f7);
    /* 005fa5f7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fa5f9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fa5fb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fa5fd: mov dword ptr [ecx + 0x240], ebx */ W32((u32)(r_ecx+0x240u), r_ebx);
    /* 005fa603: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fa606: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fa607: ret  */ FN_RET(0x005fa508); r_esp += 4; return;
L_005fa608:; BB(0x005fa608);
    /* 005fa608: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fa60a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fa60c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fa60e: mov dword ptr [ecx + 0x240], ebx */ W32((u32)(r_ecx+0x240u), r_ebx);
L_005fa614:; BB(0x005fa614);
    /* 005fa614: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fa617: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fa618: ret  */ FN_RET(0x005fa508); r_esp += 4; return;
L_005fa619:; BB(0x005fa619);
    /* 005fa619: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fa61b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fa61e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fa61f: ret  */ FN_RET(0x005fa508); r_esp += 4; return;
}

void f_005fa620(void) /* sub_5FA620 */
{
    FN_ENTER(0x005fa620);
    /* 005fa620: mov edx, ecx */ r_edx = r_ecx;
    /* 005fa622: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005fa627: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fa629: jne 0x5fa638 */ if (!fZ) goto L_005fa638;
L_005fa62b:; BB(0x005fa62b);
    /* 005fa62b: mov edx, dword ptr [edx + 0x240] */ r_edx = R32((u32)(r_edx+0x240u));
    /* 005fa631: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa633: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5fa638u); f_00830c04();
L_005fa638:; BB(0x005fa638);
    /* 005fa638: ret  */ FN_RET(0x005fa620); r_esp += 4; return;
}

void f_005fa63c(void) /* sub_5FA63C */
{
    FN_ENTER(0x005fa63c);
    /* 005fa63c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fa63d: mov ebp, esp */ r_ebp = r_esp;
    /* 005fa63f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa641: push 0x8dde30 */ { u32 v = 0x8dde30u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa646: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fa64c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa64d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fa654: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fa657: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fa65a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fa65d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fa660: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fa663: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fa666: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa668: je 0x5fa6bf */ if (fZ) goto L_005fa6bf;
L_005fa66a:; BB(0x005fa66a);
    /* 005fa66a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fa671: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa676: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fa67bu); f_005caba4();
    /* 005fa67b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fa67c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fa67f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa681: je 0x5fa6bb */ if (fZ) goto L_005fa6bb;
L_005fa683:; BB(0x005fa683);
    /* 005fa683: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fa68a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fa691: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fa694: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fa697: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa698: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fa69e: call 0x5fa6d0 */ r_esp -= 4; W32(r_esp, 0x5fa6a3u); f_005fa6d0();
    /* 005fa6a3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fa6a6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fa6ad:; BB(0x005fa6ad);
    /* 005fa6ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fa6b0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fa6b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005fa6b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fa6ba: ret  */ FN_RET(0x005fa63c); r_esp += 4; return;
L_005fa6bb:; BB(0x005fa6bb);
    /* 005fa6bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fa6bd: jmp 0x5fa6ad */ goto L_005fa6ad;
L_005fa6bf:; BB(0x005fa6bf);
    /* 005fa6bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fa6c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fa6c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fa6cb: mov esp, ebp */ r_esp = r_ebp;
    /* 005fa6cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fa6ce: ret  */ FN_RET(0x005fa63c); r_esp += 4; return;
}

void f_005fa6d0(void) /* sub_5FA6D0 */
{
    FN_ENTER(0x005fa6d0);
    /* 005fa6d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fa6d1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005fa6d3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fa6d7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fa6db: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005fa6dd: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fa6e2u); f_005e959c();
    /* 005fa6e2: mov dword ptr [ebp], 0xb19860 */ W32((u32)(r_ebp), 0xb19860u);
    /* 005fa6e9: mov eax, ebp */ r_eax = r_ebp;
    /* 005fa6eb: mov dword ptr [ebp + 0x240], 0 */ W32((u32)(r_ebp+0x240u), 0x0u);
    /* 005fa6f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fa6f6: ret 8 */ FN_RET(0x005fa6d0); r_esp += 12; return;
}

void f_005fa6fc(void) /* sub_5FA6FC */
{
    FN_ENTER(0x005fa6fc);
    /* 005fa6fc: mov dword ptr [0xa8e15c], 0x3f800000 */ W32((u32)(0xa8e15cu), 0x3f800000u);
    /* 005fa706: mov dword ptr [0xa8e160], 0x41000000 */ W32((u32)(0xa8e160u), 0x41000000u);
    /* 005fa710: mov dword ptr [0xa8e164], 0x3fc00000 */ W32((u32)(0xa8e164u), 0x3fc00000u);
    /* 005fa71a: ret  */ FN_RET(0x005fa6fc); r_esp += 4; return;
}

void f_005fa71c(void) /* sub_5FA71C */
{
    FN_ENTER(0x005fa71c);
    /* 005fa71c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fa71d: mov ebp, esp */ r_ebp = r_esp;
    /* 005fa71f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa721: push 0x8dde4c */ { u32 v = 0x8dde4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa726: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fa72c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa72d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fa734: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fa737: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fa73a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005fa73d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005fa740: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005fa743: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fa746: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005fa749: mov eax, ecx */ r_eax = r_ecx;
    /* 005fa74b: mov dword ptr [eax], 0xb199c0 */ W32((u32)(r_eax), 0xb199c0u);
    /* 005fa751: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fa758: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fa75du); f_005e61c8();
    /* 005fa75d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fa760: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fa762: jne 0x5fa774 */ if (!fZ) goto L_005fa774;
L_005fa764:; BB(0x005fa764);
    /* 005fa764: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fa767: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fa76e: mov esp, ebp */ r_esp = r_ebp;
    /* 005fa770: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fa771: ret 4 */ FN_RET(0x005fa71c); r_esp += 8; return;
L_005fa774:; BB(0x005fa774);
    /* 005fa774: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fa777: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa778: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fa77du); f_005c2f74();
    /* 005fa77d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fa77e: jmp 0x5fa764 */ goto L_005fa764;
}

void f_005fa780(void) /* sub_5FA780 */
{
    FN_ENTER(0x005fa780);
    /* 005fa780: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005fa785: mov word ptr [ecx + 0x240], ax */ W16((u32)(r_ecx+0x240u), (u16)r_eax);
    /* 005fa78c: ret  */ FN_RET(0x005fa780); r_esp += 4; return;
}

void f_005fa790(void) /* sub_5FA790 */
{
    FN_ENTER(0x005fa790);
    /* 005fa790: mov edx, ecx */ r_edx = r_ecx;
    /* 005fa792: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005fa797: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa79a: je 0x5fa7f1 */ if (fZ) goto L_005fa7f1;
L_005fa79c:; BB(0x005fa79c);
    /* 005fa79c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa79f: je 0x5fa7e1 */ if (fZ) goto L_005fa7e1;
L_005fa7a1:; BB(0x005fa7a1);
    /* 005fa7a1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa7a4: je 0x5fa7bb */ if (fZ) goto L_005fa7bb;
L_005fa7a6:; BB(0x005fa7a6);
    /* 005fa7a6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fa7a9: jl 0x5fa7e0 */ if ((fS!=fO)) goto L_005fa7e0;
L_005fa7ab:; BB(0x005fa7ab);
    /* 005fa7ab: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fa7ae: jle 0x5fa7b5 */ if ((fZ||fS!=fO)) goto L_005fa7b5;
L_005fa7b0:; BB(0x005fa7b0);
    /* 005fa7b0: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fa7b3: jne 0x5fa7e0 */ if (!fZ) goto L_005fa7e0;
L_005fa7b5:; BB(0x005fa7b5);
    /* 005fa7b5: call 0x5c34a0 */ r_esp -= 4; W32(r_esp, 0x5fa7bau); f_005c34a0();
    /* 005fa7ba: ret  */ FN_RET(0x005fa790); r_esp += 4; return;
L_005fa7bb:; BB(0x005fa7bb);
    /* 005fa7bb: fld dword ptr [edx + 0x2bc] */ FPUSH(R_F32((u32)(r_edx+0x2bcu)));
    /* 005fa7c1: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fa7c4: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005fa7cb: fchs  */ ST(0) = -ST(0);
    /* 005fa7cd: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005fa7d1: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005fa7d9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa7db: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5fa7e0u); f_00830b74();
L_005fa7e0:; BB(0x005fa7e0);
    /* 005fa7e0: ret  */ FN_RET(0x005fa790); r_esp += 4; return;
L_005fa7e1:; BB(0x005fa7e1);
    /* 005fa7e1: mov edx, dword ptr [edx + 0x2c0] */ r_edx = R32((u32)(r_edx+0x2c0u));
    /* 005fa7e7: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005fa7e9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa7eb: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5fa7f0u); f_00830c04();
    /* 005fa7f0: ret  */ FN_RET(0x005fa790); r_esp += 4; return;
L_005fa7f1:; BB(0x005fa7f1);
    /* 005fa7f1: mov edx, dword ptr [edx + 0x2c0] */ r_edx = R32((u32)(r_edx+0x2c0u));
    /* 005fa7f7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa7f9: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5fa7feu); f_00830c04();
    /* 005fa7fe: ret  */ FN_RET(0x005fa790); r_esp += 4; return;
}

void f_005fa800(void) /* sub_5FA800 */
{
    FN_ENTER(0x005fa800);
    /* 005fa800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fa801: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005fa803: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005fa805: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5fa80au); f_005e7f6c();
    /* 005fa80a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa80c: jne 0x5fa81f */ if (!fZ) goto L_005fa81f;
L_005fa80e:; BB(0x005fa80e);
    /* 005fa80e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fa811: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fa817: call 0x5cc554 */ r_esp -= 4; W32(r_esp, 0x5fa81cu); f_005cc554();
    /* 005fa81c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005fa81f:; BB(0x005fa81f);
    /* 005fa81f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005fa821: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5fa826u); f_005e90b0();
    /* 005fa826: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa828: je 0x5fa833 */ if (fZ) goto L_005fa833;
L_005fa82a:; BB(0x005fa82a);
    /* 005fa82a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005fa82c: call 0x5fa83c */ r_esp -= 4; W32(r_esp, 0x5fa831u); f_005fa83c();
    /* 005fa831: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fa832: ret  */ FN_RET(0x005fa800); r_esp += 4; return;
L_005fa833:; BB(0x005fa833);
    /* 005fa833: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005fa835: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5fa83au); f_005e90e8();
    /* 005fa83a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fa83b: ret  */ FN_RET(0x005fa800); r_esp += 4; return;
}

void f_005fa83c(void) /* sub_5FA83C */
{
    FN_ENTER(0x005fa83c);
    /* 005fa83c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fa83d: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fa840: mov edi, ecx */ r_edi = r_ecx;
    /* 005fa842: lea eax, [edi + 0x244] */ r_eax = (u32)(r_edi+0x244u);
    /* 005fa848: mov ecx, edi */ r_ecx = r_edi;
    /* 005fa84a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa84b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa84d: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5fa852u); f_005e83c8();
    /* 005fa852: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005fa858: mov edx, dword ptr [eax + 0x8d0] */ r_edx = R32((u32)(r_eax+0x8d0u));
    /* 005fa85e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005fa860: jl 0x5fa86b */ if ((fS!=fO)) goto L_005fa86b;
L_005fa862:; BB(0x005fa862);
    /* 005fa862: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fa865: jg 0x5fa86b */ if ((!fZ&&fS==fO)) goto L_005fa86b;
L_005fa867:; BB(0x005fa867);
    /* 005fa867: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa869: jne 0x5fa877 */ if (!fZ) goto L_005fa877;
L_005fa86b:; BB(0x005fa86b);
    /* 005fa86b: mov dword ptr [edi + 0x250], 0 */ W32((u32)(r_edi+0x250u), 0x0u);
    /* 005fa875: jmp 0x5fa89d */ goto L_005fa89d;
L_005fa877:; BB(0x005fa877);
    /* 005fa877: mov dword ptr [edi + 0x250], 1 */ W32((u32)(r_edi+0x250u), 0x1u);
    /* 005fa881: movzx edx, word ptr [eax + 0x8d4] */ r_edx = (u32)R16((u32)(r_eax+0x8d4u));
    /* 005fa888: mov word ptr [edi + 0x254], dx */ W16((u32)(r_edi+0x254u), (u16)r_edx);
    /* 005fa88f: movzx edx, word ptr [eax + 0x8d6] */ r_edx = (u32)R16((u32)(r_eax+0x8d6u));
    /* 005fa896: mov word ptr [edi + 0x256], dx */ W16((u32)(r_edi+0x256u), (u16)r_edx);
L_005fa89d:; BB(0x005fa89d);
    /* 005fa89d: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 005fa8a0: mov dword ptr [edi + 0x2ac], edx */ W32((u32)(r_edi+0x2acu), r_edx);
    /* 005fa8a6: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 005fa8a9: mov dword ptr [edi + 0x2b0], edx */ W32((u32)(r_edi+0x2b0u), r_edx);
    /* 005fa8af: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005fa8b2: mov dword ptr [edi + 0x2b4], edx */ W32((u32)(r_edi+0x2b4u), r_edx);
    /* 005fa8b8: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 005fa8bb: mov dword ptr [edi + 0x2b8], eax */ W32((u32)(r_edi+0x2b8u), r_eax);
    /* 005fa8c1: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5fa8c6u); f_008587a5();
    /* 005fa8c6: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005fa8c9: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005fa8cc: fdiv dword ptr [0x92de54] */ ST(0) = ST(0) / R_F32((u32)(0x92de54u));
    /* 005fa8d2: fmul dword ptr [0x92de58] */ ST(0) = ST(0) * R_F32((u32)(0x92de58u));
    /* 005fa8d8: mov ecx, edi */ r_ecx = r_edi;
    /* 005fa8da: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005fa8de: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005fa8e3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005fa8e8: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005fa8ec: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005fa8f0: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005fa8f4: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005fa8f8: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 005fa8fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa8fd: call 0x5c36cc */ r_esp -= 4; W32(r_esp, 0x5fa902u); f_005c36cc();
    /* 005fa902: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fa905: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fa906: ret  */ FN_RET(0x005fa83c); r_esp += 4; return;
}

void f_005fa908(void) /* sub_5FA908 */
{
    FN_ENTER(0x005fa908);
    /* 005fa908: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa909: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fa90b: lea eax, [ebx + 0x2bc] */ r_eax = (u32)(r_ebx+0x2bcu);
    /* 005fa911: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa913: push 0xc0000000 */ { u32 v = 0xc0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa918: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa919: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5fa91eu); f_005dd728();
    /* 005fa91e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 005fa921: fld dword ptr [ebx + 0x2bc] */ FPUSH(R_F32((u32)(r_ebx+0x2bcu)));
    /* 005fa927: fcomp dword ptr [0x92de48] */ fx_compare(ST(0), R_F32((u32)(0x92de48u))); FPOP();
    /* 005fa92d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005fa92f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005fa930: je 0x5fa934 */ if (fZ) goto L_005fa934;
L_005fa932:; BB(0x005fa932);
    /* 005fa932: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fa933: ret  */ FN_RET(0x005fa908); r_esp += 4; return;
L_005fa934:; BB(0x005fa934);
    /* 005fa934: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa936: push 0xfffff8e4 */ { u32 v = 0xfffff8e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa93b: add ebx, 0x2c0 */ {  u32 a = r_ebx; u32 b = 0x2c0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005fa941: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa942: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5fa947u); f_005dd6f8();
    /* 005fa947: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fa94a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fa94b: ret  */ FN_RET(0x005fa908); r_esp += 4; return;
}

void f_005fa94c(void) /* sub_5FA94C */
{
    FN_ENTER(0x005fa94c);
    /* 005fa94c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa94d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fa94f: lea eax, [ebx + 0x2c0] */ r_eax = (u32)(r_ebx+0x2c0u);
    /* 005fa955: push 0x2aaa */ { u32 v = 0x2aaau; r_esp -= 4; W32(r_esp, v); }
    /* 005fa95a: push 0x38e */ { u32 v = 0x38eu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa95f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa960: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5fa965u); f_005dd6f8();
    /* 005fa965: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fa968: mov eax, dword ptr [ebx + 0x2c0] */ r_eax = R32((u32)(r_ebx+0x2c0u));
    /* 005fa96e: cmp eax, 0x2aaa */ {  u32 a = r_eax; u32 b = 0x2aaau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fa973: je 0x5fa977 */ if (fZ) goto L_005fa977;
L_005fa975:; BB(0x005fa975);
    /* 005fa975: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fa976: ret  */ FN_RET(0x005fa94c); r_esp += 4; return;
L_005fa977:; BB(0x005fa977);
    /* 005fa977: push 0x40c00000 */ { u32 v = 0x40c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa97c: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa981: add ebx, 0x2bc */ {  u32 a = r_ebx; u32 b = 0x2bcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005fa987: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa988: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5fa98du); f_005dd728();
    /* 005fa98d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fa990: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fa991: ret  */ FN_RET(0x005fa94c); r_esp += 4; return;
}

void f_005fa994(void) /* sub_5FA994 */
{
    FN_ENTER(0x005fa994);
    /* 005fa994: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fa995: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fa996: mov esi, ecx */ r_esi = r_ecx;
    /* 005fa998: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x5fa99du); f_00807d60();
    /* 005fa99d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fa99f: je 0x5fa9e6 */ if (fZ) goto L_005fa9e6;
L_005fa9a1:; BB(0x005fa9a1);
    /* 005fa9a1: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005fa9a7: movsx edx, word ptr [ecx + 0x336] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x336u));
    /* 005fa9ae: movzx eax, word ptr [esi + 0x240] */ r_eax = (u32)R16((u32)(r_esi+0x240u));
    /* 005fa9b5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005fa9b7: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 005fa9ba: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fa9bc: je 0x5fa9c5 */ if (fZ) goto L_005fa9c5;
L_005fa9be:; BB(0x005fa9be);
    /* 005fa9be: mov word ptr [esi + 0x240], dx */ W16((u32)(r_esi+0x240u), (u16)r_edx);
L_005fa9c5:; BB(0x005fa9c5);
    /* 005fa9c5: jle 0x5fa9e6 */ if ((fZ||fS!=fO)) goto L_005fa9e6;
L_005fa9c7:; BB(0x005fa9c7);
    /* 005fa9c7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fa9c8: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x5fa9cdu); f_00777414();
    /* 005fa9cd: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005fa9d3: lea eax, [ebp] */ r_eax = (u32)(r_ebp);
    /* 005fa9d6: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005fa9d9: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005fa9db: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 005fa9dd: movsx edx, bp */ r_edx = (u32)(i32)(i16)(u16)r_ebp;
    /* 005fa9e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa9e1: call 0x777368 */ r_esp -= 4; W32(r_esp, 0x5fa9e6u); f_00777368();
L_005fa9e6:; BB(0x005fa9e6);
    /* 005fa9e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fa9e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fa9e8: ret  */ FN_RET(0x005fa994); r_esp += 4; return;
}

void f_005fa9ec(void) /* sub_5FA9EC */
{
    FN_ENTER(0x005fa9ec);
    /* 005fa9ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fa9ed: mov ebp, esp */ r_ebp = r_esp;
    /* 005fa9ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa9f1: push 0x8dde74 */ { u32 v = 0x8dde74u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa9f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fa9fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa9fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005faa04: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005faa07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005faa0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005faa0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005faa10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005faa13: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005faa16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005faa18: je 0x5faa6f */ if (fZ) goto L_005faa6f;
L_005faa1a:; BB(0x005faa1a);
    /* 005faa1a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005faa21: push 0x2c4 */ { u32 v = 0x2c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005faa26: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5faa2bu); f_005caba4();
    /* 005faa2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005faa2c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005faa2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005faa31: je 0x5faa6b */ if (fZ) goto L_005faa6b;
L_005faa33:; BB(0x005faa33);
    /* 005faa33: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005faa3a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005faa41: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005faa44: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005faa47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005faa48: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005faa4e: call 0x5faa80 */ r_esp -= 4; W32(r_esp, 0x5faa53u); f_005faa80();
    /* 005faa53: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005faa56: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005faa5d:; BB(0x005faa5d);
    /* 005faa5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005faa60: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005faa67: mov esp, ebp */ r_esp = r_ebp;
    /* 005faa69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005faa6a: ret  */ FN_RET(0x005fa9ec); r_esp += 4; return;
L_005faa6b:; BB(0x005faa6b);
    /* 005faa6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005faa6d: jmp 0x5faa5d */ goto L_005faa5d;
L_005faa6f:; BB(0x005faa6f);
    /* 005faa6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005faa71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005faa74: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005faa7b: mov esp, ebp */ r_esp = r_ebp;
    /* 005faa7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005faa7e: ret  */ FN_RET(0x005fa9ec); r_esp += 4; return;
}

void f_005faa80(void) /* sub_5FAA80 */
{
    FN_ENTER(0x005faa80);
    /* 005faa80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005faa81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005faa82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005faa83: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005faa84: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005faa86: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005faa8a: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005faa8e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005faa90: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5faa95u); f_005e959c();
    /* 005faa95: mov dword ptr [ebp], 0xb199c0 */ W32((u32)(r_ebp), 0xb199c0u);
    /* 005faa9c: lea ecx, [ebp + 0x254] */ r_ecx = (u32)(r_ebp+0x254u);
    /* 005faaa2: mov edx, 0xb */ r_edx = 0xbu;
    /* 005faaa7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005faaa9:; BB(0x005faaa9);
    /* 005faaa9: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 005faaae: mov word ptr [ecx], bx */ W16((u32)(r_ecx), (u16)r_ebx);
    /* 005faab1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005faab3: mov word ptr [ecx + 2], si */ W16((u32)(r_ecx+0x2u), (u16)r_esi);
    /* 005faab7: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005faaba: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005faabd: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005faac0: jne 0x5faaa9 */ if (!fZ) goto L_005faaa9;
L_005faac2:; BB(0x005faac2);
    /* 005faac2: mov eax, dword ptr [ebp + 0x1dc] */ r_eax = R32((u32)(r_ebp+0x1dcu));
    /* 005faac8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005faaca: or eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005faacd: mov dword ptr [ebp + 0x1dc], eax */ W32((u32)(r_ebp+0x1dcu), r_eax);
    /* 005faad3: mov dword ptr [ebp + 0x2c0], edx */ W32((u32)(r_ebp+0x2c0u), r_edx);
    /* 005faad9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005faadb: mov dword ptr [ebp + 0x2bc], eax */ W32((u32)(r_ebp+0x2bcu), r_eax);
    /* 005faae1: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005faae6: mov word ptr [ebp + 0x240], ax */ W16((u32)(r_ebp+0x240u), (u16)r_eax);
    /* 005faaed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005faaef: mov dword ptr [ebp + 0x24c], eax */ W32((u32)(r_ebp+0x24cu), r_eax);
    /* 005faaf5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005faaf7: mov dword ptr [ebp + 0x248], eax */ W32((u32)(r_ebp+0x248u), r_eax);
    /* 005faafd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005faaff: mov dword ptr [ebp + 0x244], eax */ W32((u32)(r_ebp+0x244u), r_eax);
    /* 005fab05: mov dword ptr [ebp + 0x2ac], edx */ W32((u32)(r_ebp+0x2acu), r_edx);
    /* 005fab0b: mov dword ptr [ebp + 0x250], edx */ W32((u32)(r_ebp+0x250u), r_edx);
    /* 005fab11: mov eax, ebp */ r_eax = r_ebp;
    /* 005fab13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fab14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fab15: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fab16: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fab17: ret 8 */ FN_RET(0x005faa80); r_esp += 12; return;
}

void f_005fab1c(void) /* sub_5FAB1C */
{
    FN_ENTER(0x005fab1c);
    /* 005fab1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fab1d: mov edi, ecx */ r_edi = r_ecx;
    /* 005fab1f: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005fab25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fab27: je 0x5fabb9 */ if (fZ) goto L_005fabb9;
L_005fab2d:; BB(0x005fab2d);
    /* 005fab2d: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x5fab32u); f_00807d60();
    /* 005fab32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fab34: je 0x5fabb9 */ if (fZ) goto L_005fabb9;
L_005fab3a:; BB(0x005fab3a);
    /* 005fab3a: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 005fab40: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005fab46: cmp edx, dword ptr [eax + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fab4c: jne 0x5fabb9 */ if (!fZ) goto L_005fabb9;
L_005fab4e:; BB(0x005fab4e);
    /* 005fab4e: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005fab52: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fab54: je 0x5faba0 */ if (fZ) goto L_005faba0;
L_005fab56:; BB(0x005fab56);
    /* 005fab56: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005fab5a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fab5d: jne 0x5fab7b */ if (!fZ) goto L_005fab7b;
L_005fab5f:; BB(0x005fab5f);
    /* 005fab5f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005fab61: push dword ptr [edi + 0x2ac] */ { u32 v = R32((u32)(r_edi+0x2acu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fab67: lea edx, [edi + 0x244] */ r_edx = (u32)(r_edi+0x244u);
    /* 005fab6d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fab6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fab6f: call 0x6e2f20 */ r_esp -= 4; W32(r_esp, 0x5fab74u); f_006e2f20();
    /* 005fab74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fab77: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fab78: ret 4 */ FN_RET(0x005fab1c); r_esp += 8; return;
L_005fab7b:; BB(0x005fab7b);
    /* 005fab7b: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005fab7f: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fab82: jne 0x5fabb9 */ if (!fZ) goto L_005fabb9;
L_005fab84:; BB(0x005fab84);
    /* 005fab84: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005fab86: push dword ptr [edi + 0x2ac] */ { u32 v = R32((u32)(r_edi+0x2acu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fab8c: lea edx, [edi + 0x2b0] */ r_edx = (u32)(r_edi+0x2b0u);
    /* 005fab92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fab93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fab94: call 0x6dd7e4 */ r_esp -= 4; W32(r_esp, 0x5fab99u); f_006dd7e4();
    /* 005fab99: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fab9c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fab9d: ret 4 */ FN_RET(0x005fab1c); r_esp += 8; return;
L_005faba0:; BB(0x005faba0);
    /* 005faba0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005faba2: lea edx, [edi + 0x244] */ r_edx = (u32)(r_edi+0x244u);
    /* 005faba8: add edi, 0x250 */ {  u32 a = r_edi; u32 b = 0x250u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005fabae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fabaf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fabb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fabb1: call 0x6f2570 */ r_esp -= 4; W32(r_esp, 0x5fabb6u); f_006f2570();
    /* 005fabb6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005fabb9:; BB(0x005fabb9);
    /* 005fabb9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fabba: ret 4 */ FN_RET(0x005fab1c); r_esp += 8; return;
}

void f_005fabc0(void) /* sub_5FABC0 */
{
    FN_ENTER(0x005fabc0);
    /* 005fabc0: mov dword ptr [0xa8e168], 0x3f800000 */ W32((u32)(0xa8e168u), 0x3f800000u);
    /* 005fabca: mov dword ptr [0xa8e16c], 0x41000000 */ W32((u32)(0xa8e16cu), 0x41000000u);
    /* 005fabd4: mov dword ptr [0xa8e170], 0x3fc00000 */ W32((u32)(0xa8e170u), 0x3fc00000u);
    /* 005fabde: ret  */ FN_RET(0x005fabc0); r_esp += 4; return;
}

void f_005fabe0(void) /* sub_5FABE0 */
{
    FN_ENTER(0x005fabe0);
    /* 005fabe0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fabe1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fabe3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fabe5: call 0x5fac04 */ r_esp -= 4; W32(r_esp, 0x5fabeau); f_005fac04();
    /* 005fabea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005fabee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fabf0: jne 0x5fabf6 */ if (!fZ) goto L_005fabf6;
L_005fabf2:; BB(0x005fabf2);
    /* 005fabf2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fabf3: ret 4 */ FN_RET(0x005fabe0); r_esp += 8; return;
L_005fabf6:; BB(0x005fabf6);
    /* 005fabf6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fabf7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fabfcu); f_005c2f74();
    /* 005fabfc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fabfd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fabfe: ret 4 */ FN_RET(0x005fabe0); r_esp += 8; return;
}

void f_005fac04(void) /* sub_5FAC04 */
{
    FN_ENTER(0x005fac04);
    /* 005fac04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fac05: mov ebp, esp */ r_ebp = r_esp;
    /* 005fac07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fac09: push 0x8dde90 */ { u32 v = 0x8dde90u; r_esp -= 4; W32(r_esp, v); }
    /* 005fac0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fac14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fac15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fac1c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fac1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fac22: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fac25: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fac28: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fac2b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005fac2e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fac31: mov dword ptr [ecx], 0xb19b20 */ W32((u32)(r_ecx), 0xb19b20u);
    /* 005fac37: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fac3e: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fac43u); f_005e61c8();
    /* 005fac43: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fac46: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fac4d: mov esp, ebp */ r_esp = r_ebp;
    /* 005fac4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fac50: ret  */ FN_RET(0x005fac04); r_esp += 4; return;
}

void f_005fac54(void) /* sub_5FAC54 */
{
    FN_ENTER(0x005fac54);
    /* 005fac54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fac55: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005fac5b: mov ebx, dword ptr [0xa8d84c] */ r_ebx = R32((u32)(0xa8d84cu));
    /* 005fac61: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 005fac64: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005fac66: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005fac68: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005fac6a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005fac6c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005fac6e: add edx, dword ptr [eax + 0xebc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xebcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005fac74: mov ecx, edx */ r_ecx = r_edx;
    /* 005fac76: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x5fac7bu); f_00831650();
    /* 005fac7b: cmp ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fac7e: je 0x5fac82 */ if (fZ) goto L_005fac82;
L_005fac80:; BB(0x005fac80);
    /* 005fac80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fac81: ret  */ FN_RET(0x005fac54); r_esp += 4; return;
L_005fac82:; BB(0x005fac82);
    /* 005fac82: call 0x5c34a0 */ r_esp -= 4; W32(r_esp, 0x5fac87u); f_005c34a0();
    /* 005fac87: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fac88: ret  */ FN_RET(0x005fac54); r_esp += 4; return;
}

void f_005fac8c(void) /* sub_5FAC8C */
{
    FN_ENTER(0x005fac8c);
    /* 005fac8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fac8d: mov ebp, esp */ r_ebp = r_esp;
    /* 005fac8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fac91: push 0x8ddeb8 */ { u32 v = 0x8ddeb8u; r_esp -= 4; W32(r_esp, v); }
    /* 005fac96: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fac9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fac9d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005faca4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005faca7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005facaa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005facad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005facb0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005facb3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005facb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005facb8: je 0x5fad0f */ if (fZ) goto L_005fad0f;
L_005facba:; BB(0x005facba);
    /* 005facba: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005facc1: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005facc6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5faccbu); f_005caba4();
    /* 005faccb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005faccc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005faccf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005facd1: je 0x5fad0b */ if (fZ) goto L_005fad0b;
L_005facd3:; BB(0x005facd3);
    /* 005facd3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005facda: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005face1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005face4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005face7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005face8: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005facee: call 0x5fad20 */ r_esp -= 4; W32(r_esp, 0x5facf3u); f_005fad20();
    /* 005facf3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005facf6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005facfd:; BB(0x005facfd);
    /* 005facfd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fad00: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fad07: mov esp, ebp */ r_esp = r_ebp;
    /* 005fad09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fad0a: ret  */ FN_RET(0x005fac8c); r_esp += 4; return;
L_005fad0b:; BB(0x005fad0b);
    /* 005fad0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fad0d: jmp 0x5facfd */ goto L_005facfd;
L_005fad0f:; BB(0x005fad0f);
    /* 005fad0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fad11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fad14: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fad1b: mov esp, ebp */ r_esp = r_ebp;
    /* 005fad1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fad1e: ret  */ FN_RET(0x005fac8c); r_esp += 4; return;
}

void f_005fad20(void) /* sub_5FAD20 */
{
    FN_ENTER(0x005fad20);
    /* 005fad20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad21: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fad23: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fad27: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fad2b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fad2d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fad32u); f_005e959c();
    /* 005fad32: mov dword ptr [ebx], 0xb19b20 */ W32((u32)(r_ebx), 0xb19b20u);
    /* 005fad38: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005fad3d: mov byte ptr [ebx + 0x1c0], dl */ W8((u32)(r_ebx+0x1c0u), (u8)r_edx);
    /* 005fad43: mov byte ptr [ebx + 0x1c4], dl */ W8((u32)(r_ebx+0x1c4u), (u8)r_edx);
    /* 005fad49: mov byte ptr [ebx + 0x1c1], dl */ W8((u32)(r_ebx+0x1c1u), (u8)r_edx);
    /* 005fad4f: mov byte ptr [ebx + 0x1c5], dl */ W8((u32)(r_ebx+0x1c5u), (u8)r_edx);
    /* 005fad55: mov eax, ebx */ r_eax = r_ebx;
    /* 005fad57: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fad58: ret 8 */ FN_RET(0x005fad20); r_esp += 12; return;
}

void f_005fad5c(void) /* sub_5FAD5C */
{
    FN_ENTER(0x005fad5c);
    /* 005fad5c: mov dword ptr [0xa8e174], 0x3f800000 */ W32((u32)(0xa8e174u), 0x3f800000u);
    /* 005fad66: mov dword ptr [0xa8e178], 0x41000000 */ W32((u32)(0xa8e178u), 0x41000000u);
    /* 005fad70: mov dword ptr [0xa8e17c], 0x3fc00000 */ W32((u32)(0xa8e17cu), 0x3fc00000u);
    /* 005fad7a: ret  */ FN_RET(0x005fad5c); r_esp += 4; return;
}

void f_005fad7c(void) /* sub_5FAD7C */
{
    FN_ENTER(0x005fad7c);
    /* 005fad7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad7d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fad7f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fad81: call 0x5fada0 */ r_esp -= 4; W32(r_esp, 0x5fad86u); f_005fada0();
    /* 005fad86: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005fad8a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fad8c: jne 0x5fad92 */ if (!fZ) goto L_005fad92;
L_005fad8e:; BB(0x005fad8e);
    /* 005fad8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fad8f: ret 4 */ FN_RET(0x005fad7c); r_esp += 8; return;
L_005fad92:; BB(0x005fad92);
    /* 005fad92: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fad93: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fad98u); f_005c2f74();
    /* 005fad98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fad99: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fad9a: ret 4 */ FN_RET(0x005fad7c); r_esp += 8; return;
}

void f_005fada0(void) /* sub_5FADA0 */
{
    FN_ENTER(0x005fada0);
    /* 005fada0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fada1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fada3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fada5: push 0x8dded4 */ { u32 v = 0x8dded4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fadaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fadb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fadb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fadb8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fadbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fadbe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fadc1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fadc4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fadc7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005fadca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fadcd: mov dword ptr [ecx], 0xb19c80 */ W32((u32)(r_ecx), 0xb19c80u);
    /* 005fadd3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fadda: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5faddfu); f_005e61c8();
    /* 005faddf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fade2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fade9: mov esp, ebp */ r_esp = r_ebp;
    /* 005fadeb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fadec: ret  */ FN_RET(0x005fada0); r_esp += 4; return;
}

void f_005fadf0(void) /* sub_5FADF0 */
{
    FN_ENTER(0x005fadf0);
    /* 005fadf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fadf1: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fadf4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005fadf6: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005fadfc: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005fae01: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005fae09: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005fae0e: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 005fae12: mov dword ptr [esp + 0x14], 0x3f800000 */ W32((u32)(r_esp+0x14u), 0x3f800000u);
    /* 005fae1a: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005fae1e: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 005fae26: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 005fae2b: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 005fae33: mov word ptr [esp + 0x12], dx */ W16((u32)(r_esp+0x12u), (u16)r_edx);
    /* 005fae38: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 005fae40: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 005fae48: mov dword ptr [esp + 0x2c], 0xffffd556 */ W32((u32)(r_esp+0x2cu), 0xffffd556u);
    /* 005fae50: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 005fae54: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 005fae58: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 005fae5e: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fae64: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005fae68: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005fae6b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005fae6f: mov eax, dword ptr [ebp + 0x1ac] */ r_eax = R32((u32)(r_ebp+0x1acu));
    /* 005fae75: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005fae79: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5fae7eu); f_006a2e8c();
    /* 005fae7e: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005fae84: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 005fae89: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fae8f: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x5fae94u); f_006a3250();
    /* 005fae94: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 005fae99: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005fae9f: movzx edx, word ptr [eax + 0x8a4] */ r_edx = (u32)R16((u32)(r_eax+0x8a4u));
    /* 005faea6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005faea8: mov eax, dword ptr [edx*4 + 0x9cb9d0] */ r_eax = R32((u32)(r_edx*4+0x9cb9d0u));
    /* 005faeaf: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005faeb2: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005faeb6: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 005faeba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005faebb: call dword ptr [edx + 0xec] */ { u32 t = R32((u32)(r_edx+0xecu)); r_esp -= 4; W32(r_esp, 0x5faec1u); call_ind(t); }
    /* 005faec1: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005faec5: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 005faec9: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005faecd: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 005faed1: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 005faed5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005faed7: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005faedb: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 005faedf: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005faee3: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005faee9: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 005faeec: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005faef0: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 005faef4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005faef5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005faef7: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5faefcu); f_005e83c8();
    /* 005faefc: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 005faf00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005faf01: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005faf03: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005faf05: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5faf0au); f_005e83c8();
    /* 005faf0a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005faf0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005faf0e: call 0x6f1188 */ r_esp -= 4; W32(r_esp, 0x5faf13u); f_006f1188();
    /* 005faf13: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005faf16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005faf17: ret  */ FN_RET(0x005fadf0); r_esp += 4; return;
}

void f_005faf18(void) /* sub_5FAF18 */
{
    FN_ENTER(0x005faf18);
    /* 005faf18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005faf19: mov ebp, esp */ r_ebp = r_esp;
    /* 005faf1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005faf1d: push 0x8ddefc */ { u32 v = 0x8ddefcu; r_esp -= 4; W32(r_esp, v); }
    /* 005faf22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005faf28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005faf29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005faf30: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005faf33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005faf36: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005faf39: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005faf3c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005faf3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005faf42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005faf44: je 0x5faf9b */ if (fZ) goto L_005faf9b;
L_005faf46:; BB(0x005faf46);
    /* 005faf46: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005faf4d: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005faf52: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5faf57u); f_005caba4();
    /* 005faf57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005faf58: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005faf5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005faf5d: je 0x5faf97 */ if (fZ) goto L_005faf97;
L_005faf5f:; BB(0x005faf5f);
    /* 005faf5f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005faf66: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005faf6d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005faf70: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005faf73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005faf74: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005faf7a: call 0x5fafac */ r_esp -= 4; W32(r_esp, 0x5faf7fu); f_005fafac();
    /* 005faf7f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005faf82: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005faf89:; BB(0x005faf89);
    /* 005faf89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005faf8c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005faf93: mov esp, ebp */ r_esp = r_ebp;
    /* 005faf95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005faf96: ret  */ FN_RET(0x005faf18); r_esp += 4; return;
L_005faf97:; BB(0x005faf97);
    /* 005faf97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005faf99: jmp 0x5faf89 */ goto L_005faf89;
L_005faf9b:; BB(0x005faf9b);
    /* 005faf9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005faf9d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fafa0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fafa7: mov esp, ebp */ r_esp = r_ebp;
    /* 005fafa9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fafaa: ret  */ FN_RET(0x005faf18); r_esp += 4; return;
}

void f_005fafac(void) /* sub_5FAFAC */
{
    FN_ENTER(0x005fafac);
    /* 005fafac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fafad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fafaf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fafb3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fafb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fafb9: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fafbeu); f_005e959c();
    /* 005fafbe: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005fafc4: mov dword ptr [ebx], 0xb19c80 */ W32((u32)(r_ebx), 0xb19c80u);
    /* 005fafca: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fafcd: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005fafd3: mov eax, ebx */ r_eax = r_ebx;
    /* 005fafd5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fafd6: ret 8 */ FN_RET(0x005fafac); r_esp += 12; return;
}

void f_005fafdc(void) /* sub_5FAFDC */
{
    FN_ENTER(0x005fafdc);
    /* 005fafdc: mov dword ptr [0xa8e180], 0x3f800000 */ W32((u32)(0xa8e180u), 0x3f800000u);
    /* 005fafe6: mov dword ptr [0xa8e184], 0x41000000 */ W32((u32)(0xa8e184u), 0x41000000u);
    /* 005faff0: mov dword ptr [0xa8e188], 0x3fc00000 */ W32((u32)(0xa8e188u), 0x3fc00000u);
    /* 005faffa: ret  */ FN_RET(0x005fafdc); r_esp += 4; return;
}

void f_005faffc(void) /* sub_5FAFFC */
{
    FN_ENTER(0x005faffc);
    /* 005faffc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005faffd: mov ebp, esp */ r_ebp = r_esp;
    /* 005fafff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb001: push 0x8ddf18 */ { u32 v = 0x8ddf18u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb006: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fb00c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb00d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fb014: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb017: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fb01a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005fb01d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005fb020: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005fb023: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fb026: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005fb029: mov eax, ecx */ r_eax = r_ecx;
    /* 005fb02b: mov dword ptr [eax], 0xb19de0 */ W32((u32)(r_eax), 0xb19de0u);
    /* 005fb031: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fb038: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fb03du); f_005e61c8();
    /* 005fb03d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fb040: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb042: jne 0x5fb054 */ if (!fZ) goto L_005fb054;
L_005fb044:; BB(0x005fb044);
    /* 005fb044: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fb047: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fb04e: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb050: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb051: ret 4 */ FN_RET(0x005faffc); r_esp += 8; return;
L_005fb054:; BB(0x005fb054);
    /* 005fb054: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fb057: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb058: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fb05du); f_005c2f74();
    /* 005fb05d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fb05e: jmp 0x5fb044 */ goto L_005fb044;
}

