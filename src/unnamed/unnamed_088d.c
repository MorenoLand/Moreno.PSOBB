#include "protos.h"

void f_0088d154(void) /* sub_88D154 */
{
    FN_ENTER(0x0088d154);
    /* 0088d154: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088d155: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088d156: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088d157: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088d158: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088d15b: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0088d15f: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 0088d163: mov ebx, dword ptr [edi + 0x24] */ r_ebx = R32((u32)(r_edi+0x24u));
    /* 0088d166: mov edx, ebx */ r_edx = r_ebx;
    /* 0088d168: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0088d16b: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088d16d: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0088d16f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088d171: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 0088d175: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088d177: imul ecx, ebx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088d17a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088d17b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088d17c: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88d181u); f_0087421c();
    /* 0088d181: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088d184: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088d186: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088d188: jle 0x88d359 */ if ((fZ||fS!=fO)) goto L_0088d359;
L_0088d18e:; BB(0x0088d18e);
    /* 0088d18e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0088d192: lea ecx, [ebx - 6] */ r_ecx = (u32)(r_ebx+0xfffffffau);
    /* 0088d195: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
L_0088d199:; BB(0x0088d199);
    /* 0088d199: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0088d19d: mov edi, dword ptr [edi + edx*4] */ r_edi = R32((u32)(r_edi+r_edx*4));
    /* 0088d1a0: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0088d1a4: cmp dword ptr [eax + edx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088d1a8: je 0x88d1ab */ if (fZ) goto L_0088d1ab;
L_0088d1aa:; BB(0x0088d1aa);
    /* 0088d1aa: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0088d1ab:; BB(0x0088d1ab);
    /* 0088d1ab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088d1ad: mov eax, edx */ r_eax = r_edx;
    /* 0088d1af: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088d1b1: jle 0x88d240 */ if ((fZ||fS!=fO)) goto L_0088d240;
L_0088d1b7:; BB(0x0088d1b7);
    /* 0088d1b7: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d1ba: jl 0x88d21f */ if ((fS!=fO)) goto L_0088d21f;
L_0088d1bc:; BB(0x0088d1bc);
    /* 0088d1bc: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0088d1c0: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0088d1c4: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0088d1c8: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
L_0088d1cc:; BB(0x0088d1cc);
    /* 0088d1cc: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0088d1d0: mov ebx, dword ptr [edi + ecx*4] */ r_ebx = R32((u32)(r_edi+r_ecx*4));
    /* 0088d1d3: mov dword ptr [esi + eax*4], ebx */ W32((u32)(r_esi+r_eax*4), r_ebx);
    /* 0088d1d6: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088d1d8: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0088d1dc: mov ebx, dword ptr [edi + ecx*4 + 4] */ r_ebx = R32((u32)(r_edi+r_ecx*4+0x4u));
    /* 0088d1e0: mov dword ptr [esi + eax*4], ebx */ W32((u32)(r_esi+r_eax*4), r_ebx);
    /* 0088d1e3: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088d1e5: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0088d1e9: mov ebx, dword ptr [edi + ecx*4 + 8] */ r_ebx = R32((u32)(r_edi+r_ecx*4+0x8u));
    /* 0088d1ed: mov dword ptr [esi + eax*4], ebx */ W32((u32)(r_esi+r_eax*4), r_ebx);
    /* 0088d1f0: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088d1f2: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0088d1f6: mov ebx, dword ptr [edi + ecx*4 + 0xc] */ r_ebx = R32((u32)(r_edi+r_ecx*4+0xcu));
    /* 0088d1fa: mov dword ptr [esi + eax*4], ebx */ W32((u32)(r_esi+r_eax*4), r_ebx);
    /* 0088d1fd: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088d1ff: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0088d203: mov ebx, dword ptr [edi + ecx*4 + 0x10] */ r_ebx = R32((u32)(r_edi+r_ecx*4+0x10u));
    /* 0088d207: mov dword ptr [esi + eax*4], ebx */ W32((u32)(r_esi+r_eax*4), r_ebx);
    /* 0088d20a: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088d20c: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088d20f: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d211: jle 0x88d1cc */ if ((fZ||fS!=fO)) goto L_0088d1cc;
L_0088d213:; BB(0x0088d213);
    /* 0088d213: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0088d217: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0088d21b: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_0088d21f:; BB(0x0088d21f);
    /* 0088d21f: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0088d223: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
L_0088d227:; BB(0x0088d227);
    /* 0088d227: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0088d22b: mov edx, dword ptr [edi + ecx*4] */ r_edx = R32((u32)(r_edi+r_ecx*4));
    /* 0088d22e: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088d22f: mov dword ptr [esi + eax*4], edx */ W32((u32)(r_esi+r_eax*4), r_edx);
    /* 0088d232: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088d234: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d236: jl 0x88d227 */ if ((fS!=fO)) goto L_0088d227;
L_0088d238:; BB(0x0088d238);
    /* 0088d238: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0088d23c: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
L_0088d240:; BB(0x0088d240);
    /* 0088d240: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088d241: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d243: jl 0x88d199 */ if ((fS!=fO)) goto L_0088d199;
L_0088d249:; BB(0x0088d249);
    /* 0088d249: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0088d24d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088d24f: je 0x88d359 */ if (fZ) goto L_0088d359;
L_0088d255:; BB(0x0088d255);
    /* 0088d255: mov dword ptr [esp + 0xc], 1 */ W32((u32)(r_esp+0xcu), 0x1u);
    /* 0088d25d: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
    /* 0088d261: mov eax, edi */ r_eax = r_edi;
    /* 0088d263: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0088d267: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0088d26b: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0088d26f: mov dword ptr [esp + 0x14], 0x88bd40 */ W32((u32)(r_esp+0x14u), 0x88bd40u);
    /* 0088d277: call 0x88c24c */ r_esp -= 4; W32(r_esp, 0x88d27cu); f_0088c24c();
    /* 0088d27c: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0088d280: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088d282: je 0x88d359 */ if (fZ) goto L_0088d359;
L_0088d288:; BB(0x0088d288);
    /* 0088d288: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0088d28a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088d28c: jle 0x88d359 */ if ((fZ||fS!=fO)) goto L_0088d359;
L_0088d292:; BB(0x0088d292);
    /* 0088d292: lea eax, [ebx - 5] */ r_eax = (u32)(r_ebx+0xfffffffbu);
    /* 0088d295: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
L_0088d299:; BB(0x0088d299);
    /* 0088d299: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 0088d29d: mov esi, dword ptr [esi + edi*4] */ r_esi = R32((u32)(r_esi+r_edi*4));
    /* 0088d2a0: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0088d2a4: mov ecx, dword ptr [eax + edi*4] */ r_ecx = R32((u32)(r_eax+r_edi*4));
    /* 0088d2a7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088d2a9: mov eax, edi */ r_eax = r_edi;
    /* 0088d2ab: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088d2ad: jle 0x88d363 */ if ((fZ||fS!=fO)) goto L_0088d363;
L_0088d2b3:; BB(0x0088d2b3);
    /* 0088d2b3: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d2b6: jl 0x88d32a */ if ((fS!=fO)) goto L_0088d32a;
L_0088d2b8:; BB(0x0088d2b8);
    /* 0088d2b8: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0088d2bc: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0088d2c0: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0088d2c4: jmp 0x88d2ca */ goto L_0088d2ca;
L_0088d2c6:; BB(0x0088d2c6);
    /* 0088d2c6: fstp dword ptr [ecx + edx*4 - 4] */ W_F32((u32)(r_ecx+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_0088d2ca:; BB(0x0088d2ca);
    /* 0088d2ca: fld dword ptr [ecx + edx*4] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4)));
    /* 0088d2cd: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0088d2d1: fadd dword ptr [esi + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_edx*4));
    /* 0088d2d4: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 0088d2d7: fstp dword ptr [ecx + edx*4] */ W_F32((u32)(r_ecx+r_edx*4), ST(0)); FPOP();
    /* 0088d2da: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088d2dc: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0088d2e0: fld dword ptr [ecx + edx*4 + 4] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0x4u)));
    /* 0088d2e4: fadd dword ptr [esi + edx*4 + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_edx*4+0x4u));
    /* 0088d2e8: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 0088d2eb: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088d2ed: fstp dword ptr [ecx + edx*4 + 4] */ W_F32((u32)(r_ecx+r_edx*4+0x4u), ST(0)); FPOP();
    /* 0088d2f1: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0088d2f5: fld dword ptr [ecx + edx*4 + 8] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0x8u)));
    /* 0088d2f9: fadd dword ptr [esi + edx*4 + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_edx*4+0x8u));
    /* 0088d2fd: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 0088d300: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088d302: fstp dword ptr [ecx + edx*4 + 8] */ W_F32((u32)(r_ecx+r_edx*4+0x8u), ST(0)); FPOP();
    /* 0088d306: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0088d30a: fld dword ptr [ecx + edx*4 + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0xcu)));
    /* 0088d30e: fadd dword ptr [esi + edx*4 + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_edx*4+0xcu));
    /* 0088d312: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 0088d315: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088d317: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088d31a: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d31c: jle 0x88d2c6 */ if ((fZ||fS!=fO)) goto L_0088d2c6;
L_0088d31e:; BB(0x0088d31e);
    /* 0088d31e: fstp dword ptr [ecx + edx*4 - 4] */ W_F32((u32)(r_ecx+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 0088d322: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0088d326: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_0088d32a:; BB(0x0088d32a);
    /* 0088d32a: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0088d32e: jmp 0x88d334 */ goto L_0088d334;
L_0088d330:; BB(0x0088d330);
    /* 0088d330: fstp dword ptr [ecx + edx*4 - 4] */ W_F32((u32)(r_ecx+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_0088d334:; BB(0x0088d334);
    /* 0088d334: fld dword ptr [ecx + edx*4] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4)));
    /* 0088d337: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0088d33b: fadd dword ptr [esi + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_edx*4));
    /* 0088d33e: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 0088d341: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088d342: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088d344: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d346: jl 0x88d330 */ if ((fS!=fO)) goto L_0088d330;
L_0088d348:; BB(0x0088d348);
    /* 0088d348: fstp dword ptr [ecx + edx*4 - 4] */ W_F32((u32)(r_ecx+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 0088d34c: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0088d350: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088d351: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d353: jl 0x88d299 */ if ((fS!=fO)) goto L_0088d299;
L_0088d359:; BB(0x0088d359);
    /* 0088d359: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088d35b: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088d35e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088d35f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088d360: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088d361: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088d362: ret  */ FN_RET(0x0088d154); r_esp += 4; return;
L_0088d363:; BB(0x0088d363);
    /* 0088d363: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088d364: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d366: jl 0x88d299 */ if ((fS!=fO)) goto L_0088d299;
L_0088d36c:; BB(0x0088d36c);
    /* 0088d36c: jmp 0x88d359 */ goto L_0088d359;
}

void f_0088d370(void) /* sub_88D370 */
{
    FN_ENTER(0x0088d370);
    /* 0088d370: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088d371: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088d372: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088d373: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088d374: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088d377: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 0088d37b: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 0088d37f: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 0088d383: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0088d386: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0088d38a: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 0088d38d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0088d390: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0088d393: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0088d395: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0088d398: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0088d39c: sub eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088d39e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088d39f: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x0088d39f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088d39f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088d3a1: mov ebx, eax */ r_ebx = r_eax;
    /* 0088d3a3: lea eax, [ecx + ebx - 1] */ r_eax = (u32)(r_ecx+r_ebx+0xffffffffu);
    /* 0088d3a7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088d3a8: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0088d3a8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088d3a8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088d3aa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088d3ac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088d3ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088d3af: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088d3b0: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88d3b5u); f_0087421c();
    /* 0088d3b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088d3b8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088d3ba: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088d3bc: jle 0x88d418 */ if ((fZ||fS!=fO)) goto L_0088d418;
L_0088d3be:; BB(0x0088d3be);
    /* 0088d3be: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d3c1: jl 0x88d409 */ if ((fS!=fO)) goto L_0088d409;
L_0088d3c3:; BB(0x0088d3c3);
    /* 0088d3c3: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
L_0088d3c7:; BB(0x0088d3c7);
    /* 0088d3c7: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088d3cb: jne 0x88d561 */ if (!fZ) goto L_0088d561;
L_0088d3d1:; BB(0x0088d3d1);
    /* 0088d3d1: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088d3d2: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088d3d6: jne 0x88d585 */ if (!fZ) goto L_0088d585;
L_0088d3dc:; BB(0x0088d3dc);
    /* 0088d3dc: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088d3dd: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088d3e1: jne 0x88d57c */ if (!fZ) goto L_0088d57c;
L_0088d3e7:; BB(0x0088d3e7);
    /* 0088d3e7: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088d3e8: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088d3ec: jne 0x88d573 */ if (!fZ) goto L_0088d573;
L_0088d3f2:; BB(0x0088d3f2);
    /* 0088d3f2: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088d3f3: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088d3f7: jne 0x88d56a */ if (!fZ) goto L_0088d56a;
L_0088d3fd:; BB(0x0088d3fd);
    /* 0088d3fd: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088d3fe: lea edi, [esi - 6] */ r_edi = (u32)(r_esi+0xfffffffau);
    /* 0088d401: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d403: jle 0x88d3c7 */ if ((fZ||fS!=fO)) goto L_0088d3c7;
L_0088d405:; BB(0x0088d405);
    /* 0088d405: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
L_0088d409:; BB(0x0088d409);
    /* 0088d409: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
L_0088d40d:; BB(0x0088d40d);
    /* 0088d40d: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088d411: jne 0x88d418 */ if (!fZ) goto L_0088d418;
L_0088d413:; BB(0x0088d413);
    /* 0088d413: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088d414: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d416: jl 0x88d40d */ if ((fS!=fO)) goto L_0088d40d;
L_0088d418:; BB(0x0088d418);
    /* 0088d418: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088d41a: je 0x88d53a */ if (fZ) goto L_0088d53a;
L_0088d420:; BB(0x0088d420);
    /* 0088d420: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088d422: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0088d425: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088d427: jle 0x88d53a */ if ((fZ||fS!=fO)) goto L_0088d53a;
L_0088d42d:; BB(0x0088d42d);
    /* 0088d42d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0088d431: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0088d435: mov eax, edi */ r_eax = r_edi;
L_0088d437:; BB(0x0088d437);
    /* 0088d437: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0088d439: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088d43b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0088d43d: jle 0x88d544 */ if ((fZ||fS!=fO)) goto L_0088d544;
L_0088d443:; BB(0x0088d443);
    /* 0088d443: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0088d447: mov edx, 1 */ r_edx = 0x1u;
    /* 0088d44c: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0088d44e: lea ecx, [ecx + ecx] */ r_ecx = (u32)(r_ecx+r_ecx);
    /* 0088d451: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0088d455: lea ecx, [eax + 4] */ r_ecx = (u32)(r_eax+0x4u);
    /* 0088d458: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0088d45c: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
L_0088d460:; BB(0x0088d460);
    /* 0088d460: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0088d464: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088d466: jne 0x88d496 */ if (!fZ) goto L_0088d496;
L_0088d468:; BB(0x0088d468);
    /* 0088d468: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0088d46c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088d46d: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088d470: call 0x88600c */ r_esp -= 4; W32(r_esp, 0x88d475u); f_0088600c();
    /* 0088d475: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088d478: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088d47b: je 0x88d53a */ if (fZ) goto L_0088d53a;
L_0088d481:; BB(0x0088d481);
    /* 0088d481: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0088d484: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 0088d487: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0088d48b: mov dword ptr [ecx + esi*4], edx */ W32((u32)(r_ecx+r_esi*4), r_edx);
    /* 0088d48e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088d490: je 0x88d53a */ if (fZ) goto L_0088d53a;
L_0088d496:; BB(0x0088d496);
    /* 0088d496: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088d498: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0088d49c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088d49e: jle 0x88d519 */ if ((fZ||fS!=fO)) goto L_0088d519;
L_0088d4a0:; BB(0x0088d4a0);
    /* 0088d4a0: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0088d4a4: mov ebp, eax */ r_ebp = r_eax;
    /* 0088d4a6: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_0088d4aa:; BB(0x0088d4aa);
    /* 0088d4aa: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d4ac: jge 0x88d557 */ if ((fS==fO)) goto L_0088d557;
L_0088d4b2:; BB(0x0088d4b2);
    /* 0088d4b2: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0088d4b6: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0088d4ba: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 0088d4bd: mov edx, dword ptr [edx + ebp*4] */ r_edx = R32((u32)(r_edx+r_ebp*4));
    /* 0088d4c0: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0088d4c4: test dword ptr [esi + edx*4 + 0x14], ecx */ {  u32 a = R32((u32)(r_esi+r_edx*4+0x14u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088d4c8: je 0x88d507 */ if (fZ) goto L_0088d507;
L_0088d4ca:; BB(0x0088d4ca);
    /* 0088d4ca: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0088d4ce: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0088d4d1: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 0088d4d4: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0088d4d8: mov ecx, dword ptr [edx + ecx*2] */ r_ecx = R32((u32)(r_edx+r_ecx*2));
    /* 0088d4db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088d4dd: je 0x88d507 */ if (fZ) goto L_0088d507;
L_0088d4df:; BB(0x0088d4df);
    /* 0088d4df: mov edx, edi */ r_edx = r_edi;
    /* 0088d4e1: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0088d4e4: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088d4e7: add edx, dword ptr [esi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088d4e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088d4ea: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0088d4ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088d4ef: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0088d4f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088d4f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088d4f5: push dword ptr [esp + 0x50] */ { u32 v = R32((u32)(r_esp+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088d4f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088d4fa: call 0x8869f8 */ r_esp -= 4; W32(r_esp, 0x88d4ffu); f_008869f8();
    /* 0088d4ff: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088d502: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088d505: je 0x88d53a */ if (fZ) goto L_0088d53a;
L_0088d507:; BB(0x0088d507);
    /* 0088d507: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088d508: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088d509: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0088d50d: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d50f: jl 0x88d4aa */ if ((fS!=fO)) goto L_0088d4aa;
L_0088d511:; BB(0x0088d511);
    /* 0088d511: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0088d515: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
L_0088d519:; BB(0x0088d519);
    /* 0088d519: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088d51a: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d51c: jl 0x88d460 */ if ((fS!=fO)) goto L_0088d460;
L_0088d522:; BB(0x0088d522);
    /* 0088d522: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0088d526: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0088d52a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088d52b: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0088d52f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0088d532: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d534: jl 0x88d437 */ if ((fS!=fO)) goto L_0088d437;
L_0088d53a:; BB(0x0088d53a);
    /* 0088d53a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088d53c: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088d53f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088d540: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088d541: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088d542: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088d543: ret  */ FN_RET(0x0088d370); r_esp += 4; return;
L_0088d544:; BB(0x0088d544);
    /* 0088d544: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0088d548: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088d549: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d54b: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0088d54f: jl 0x88d437 */ if ((fS!=fO)) goto L_0088d437;
L_0088d555:; BB(0x0088d555);
    /* 0088d555: jmp 0x88d53a */ goto L_0088d53a;
L_0088d557:; BB(0x0088d557);
    /* 0088d557: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0088d55b: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 0088d55f: jmp 0x88d519 */ goto L_0088d519;
L_0088d561:; BB(0x0088d561);
    /* 0088d561: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 0088d565: jmp 0x88d418 */ goto L_0088d418;
L_0088d56a:; BB(0x0088d56a);
    /* 0088d56a: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 0088d56e: jmp 0x88d418 */ goto L_0088d418;
L_0088d573:; BB(0x0088d573);
    /* 0088d573: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 0088d577: jmp 0x88d418 */ goto L_0088d418;
L_0088d57c:; BB(0x0088d57c);
    /* 0088d57c: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 0088d580: jmp 0x88d418 */ goto L_0088d418;
L_0088d585:; BB(0x0088d585);
    /* 0088d585: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 0088d589: jmp 0x88d418 */ goto L_0088d418;
}

void f_0088d590(void) /* sub_88D590 */
{
    FN_ENTER(0x0088d590);
L_0088d590:; BB(0x0088d590);
    /* 0088d590: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088d59a: jne 0x88d5b8 */ if (!fZ) goto L_0088d5b8;
L_0088d5a0:; BB(0x0088d5a0);
    /* 0088d5a0: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088d5aa: jne 0x88dba4 */ if (!fZ) goto L_0088dba4;
L_0088d5b0:; BB(0x0088d5b0);
    /* 0088d5b0: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x88d5b5u); f_0086b8a0();
    /* 0088d5b5: jmp 0x88d590 */ goto L_0088d590;
L_0088d5b8:; BB(0x0088d5b8);
    /* 0088d5b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088d5b9: mov ebx, esp */ r_ebx = r_esp;
    /* 0088d5bb: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088d5be: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088d5bf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088d5c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088d5c1: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088d5c4: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0088d5c7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0088d5c9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088d5cb: mov ebp, dword ptr [eax + 0xc] */ r_ebp = R32((u32)(r_eax+0xcu));
    /* 0088d5ce: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0088d5d2: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 0088d5d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088d5d7: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0088d5db: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088d5dd: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0088d5e1: jle 0x88d7ad */ if ((fZ||fS!=fO)) goto L_0088d7ad;
L_0088d5e7:; BB(0x0088d5e7);
    /* 0088d5e7: mov edi, dword ptr [ecx + 0xc] */ r_edi = R32((u32)(r_ecx+0xcu));
    /* 0088d5ea: mov eax, edi */ r_eax = r_edi;
    /* 0088d5ec: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; } }
    /* 0088d5ee: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 0088d5f2: lea esi, [edi - 1] */ r_esi = (u32)(r_edi+0xffffffffu);
    /* 0088d5f5: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0088d5f9: lea esi, [edi - 7] */ r_esi = (u32)(r_edi+0xfffffff9u);
    /* 0088d5fc: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0088d600: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0088d602: movss xmm0, dword ptr [esi + eax*4] */ { u32 v = R32((u32)(r_esi+r_eax*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0088d607: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0088d60b: lea esi, [eax + 1] */ r_esi = (u32)(r_eax+0x1u);
    /* 0088d60e: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 0088d612: mov esi, dword ptr [ecx + 8] */ r_esi = R32((u32)(r_ecx+0x8u));
    /* 0088d615: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 0088d619: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 0088d61c: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 0088d61f: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0088d623: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 0088d626: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0088d62a: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 0088d62e: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0088d632: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0088d636: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0088d63a: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0088d63e: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0088d641: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
L_0088d645:; BB(0x0088d645);
    /* 0088d645: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0088d649: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088d64a: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0088d64d: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 0088d651: movss xmm1, dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0088d656: comiss xmm1, xmm0 */ { XMM s = xmm[0]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088d659: jae 0x88d70b */ if (!fC) goto L_0088d70b;
L_0088d65f:; BB(0x0088d65f);
    /* 0088d65f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0088d663: comiss xmm1, dword ptr [edx + eax*4 - 4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_eax*4+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088d668: jae 0x88d701 */ if (!fC) goto L_0088d701;
L_0088d66e:; BB(0x0088d66e);
    /* 0088d66e: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 0088d672: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088d674: jle 0x88d97d */ if ((fZ||fS!=fO)) goto L_0088d97d;
L_0088d67a:; BB(0x0088d67a);
    /* 0088d67a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0088d67e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d681: jl 0x88d6e2 */ if ((fS!=fO)) goto L_0088d6e2;
L_0088d683:; BB(0x0088d683);
    /* 0088d683: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0088d686: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0088d688: comiss xmm1, dword ptr [edx + eax - 4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_eax+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088d68d: jae 0x88d78b */ if (!fC) goto L_0088d78b;
L_0088d693:; BB(0x0088d693);
    /* 0088d693: lea edi, [esi - 1] */ r_edi = (u32)(r_esi+0xffffffffu);
    /* 0088d696: lea eax, [esi + esi - 2] */ r_eax = (u32)(r_esi+r_esi+0xfffffffeu);
    /* 0088d69a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0088d69c: comiss xmm1, dword ptr [edx + eax - 4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_eax+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088d6a1: jae 0x88d78b */ if (!fC) goto L_0088d78b;
L_0088d6a7:; BB(0x0088d6a7);
    /* 0088d6a7: lea eax, [edi + edi - 2] */ r_eax = (u32)(r_edi+r_edi+0xfffffffeu);
    /* 0088d6ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0088d6ad: comiss xmm1, dword ptr [edx + eax - 4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_eax+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088d6b2: jae 0x88d78b */ if (!fC) goto L_0088d78b;
L_0088d6b8:; BB(0x0088d6b8);
    /* 0088d6b8: lea eax, [edi + edi - 4] */ r_eax = (u32)(r_edi+r_edi+0xfffffffcu);
    /* 0088d6bc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0088d6be: comiss xmm1, dword ptr [edx + eax - 4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_eax+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088d6c3: jae 0x88d78b */ if (!fC) goto L_0088d78b;
L_0088d6c9:; BB(0x0088d6c9);
    /* 0088d6c9: lea eax, [edi + edi - 6] */ r_eax = (u32)(r_edi+r_edi+0xfffffffau);
    /* 0088d6cd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0088d6cf: comiss xmm1, dword ptr [edx + eax - 4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_eax+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088d6d4: jae 0x88d78b */ if (!fC) goto L_0088d78b;
L_0088d6da:; BB(0x0088d6da);
    /* 0088d6da: lea esi, [edi - 4] */ r_esi = (u32)(r_edi+0xfffffffcu);
    /* 0088d6dd: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d6e0: jge 0x88d683 */ if ((fS==fO)) goto L_0088d683;
L_0088d6e2:; BB(0x0088d6e2);
    /* 0088d6e2: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0088d6e5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0088d6e7: comiss xmm1, dword ptr [edx + eax - 4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_eax+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088d6ec: jae 0x88d78b */ if (!fC) goto L_0088d78b;
L_0088d6f2:; BB(0x0088d6f2);
    /* 0088d6f2: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088d6f3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088d6f5: jg 0x88d6e2 */ if ((!fZ&&fS==fO)) goto L_0088d6e2;
L_0088d6f7:; BB(0x0088d6f7);
    /* 0088d6f7: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088d6f9: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0088d6fc: jmp 0x88d78b */ goto L_0088d78b;
L_0088d701:; BB(0x0088d701);
    /* 0088d701: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 0088d704: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088d706: jmp 0x88d78b */ goto L_0088d78b;
L_0088d70b:; BB(0x0088d70b);
    /* 0088d70b: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0088d70f: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0088d713: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d715: jge 0x88db95 */ if ((fS==fO)) goto L_0088db95;
L_0088d71b:; BB(0x0088d71b);
    /* 0088d71b: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0088d71f: sub eax, dword ptr [esp + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088d723: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088d724: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d727: jl 0x88d772 */ if ((fS!=fO)) goto L_0088d772;
L_0088d729:; BB(0x0088d729);
    /* 0088d729: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0088d72c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0088d72e: comiss xmm1, dword ptr [edx + eax] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_eax)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088d732: jb 0x88d78b */ if (fC) goto L_0088d78b;
L_0088d734:; BB(0x0088d734);
    /* 0088d734: lea esi, [edi + 1] */ r_esi = (u32)(r_edi+0x1u);
    /* 0088d737: lea eax, [edi + edi + 2] */ r_eax = (u32)(r_edi+r_edi+0x2u);
    /* 0088d73b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0088d73d: comiss xmm1, dword ptr [edx + eax] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_eax)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088d741: jb 0x88d78b */ if (fC) goto L_0088d78b;
L_0088d743:; BB(0x0088d743);
    /* 0088d743: lea eax, [esi + esi + 2] */ r_eax = (u32)(r_esi+r_esi+0x2u);
    /* 0088d747: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0088d749: comiss xmm1, dword ptr [edx + eax] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_eax)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088d74d: jb 0x88d78b */ if (fC) goto L_0088d78b;
L_0088d74f:; BB(0x0088d74f);
    /* 0088d74f: lea eax, [esi + esi + 4] */ r_eax = (u32)(r_esi+r_esi+0x4u);
    /* 0088d753: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0088d755: comiss xmm1, dword ptr [edx + eax] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_eax)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088d759: jb 0x88d78b */ if (fC) goto L_0088d78b;
L_0088d75b:; BB(0x0088d75b);
    /* 0088d75b: lea eax, [esi + esi + 6] */ r_eax = (u32)(r_esi+r_esi+0x6u);
    /* 0088d75f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0088d761: comiss xmm1, dword ptr [edx + eax] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_eax)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088d765: jb 0x88d78b */ if (fC) goto L_0088d78b;
L_0088d767:; BB(0x0088d767);
    /* 0088d767: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0088d76b: lea edi, [esi + 4] */ r_edi = (u32)(r_esi+0x4u);
    /* 0088d76e: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d770: jle 0x88d729 */ if ((fZ||fS!=fO)) goto L_0088d729;
L_0088d772:; BB(0x0088d772);
    /* 0088d772: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_0088d776:; BB(0x0088d776);
    /* 0088d776: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0088d779: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0088d77b: comiss xmm1, dword ptr [edx + eax] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_eax)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088d77f: jb 0x88d78b */ if (fC) goto L_0088d78b;
L_0088d781:; BB(0x0088d781);
    /* 0088d781: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088d782: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d784: jl 0x88d776 */ if ((fS!=fO)) goto L_0088d776;
L_0088d786:; BB(0x0088d786);
    /* 0088d786: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088d788: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
L_0088d78b:; BB(0x0088d78b);
    /* 0088d78b: imul ebp, dword ptr [esp + 0x28] */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)R32((u32)(r_esp+0x28u)); r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088d790: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0088d794: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088d795: add ebp, dword ptr [esi + eax] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+r_eax)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088d798: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0088d79b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088d79d: jl 0x88d645 */ if ((fS!=fO)) goto L_0088d645;
L_0088d7a3:; BB(0x0088d7a3);
    /* 0088d7a3: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0088d7a7: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0088d7ab: mov edx, eax */ r_edx = r_eax;
L_0088d7ad:; BB(0x0088d7ad);
    /* 0088d7ad: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 0088d7b0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0088d7b4: cmp dword ptr [ebp + eax*4], 0 */ {  u32 a = R32((u32)(r_ebp+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088d7b9: jle 0x88d99f */ if ((fZ||fS!=fO)) goto L_0088d99f;
L_0088d7bf:; BB(0x0088d7bf);
    /* 0088d7bf: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0088d7c2: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
L_0088d7c5:; BB(0x0088d7c5);
    /* 0088d7c5: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0088d7c8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088d7ca: imul ecx, dword ptr [esp + 4] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_esp+0x4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088d7cf: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088d7d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088d7d3: jle 0x88d96f */ if ((fZ||fS!=fO)) goto L_0088d96f;
L_0088d7d9:; BB(0x0088d7d9);
    /* 0088d7d9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088d7db: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088d7de: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0088d7e2: jb 0x88d8db */ if (fC) goto L_0088d8db;
L_0088d7e8:; BB(0x0088d7e8);
    /* 0088d7e8: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0088d7eb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088d7ed: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 0088d7f0: lea esi, [ebp + ecx - 4] */ r_esi = (u32)(r_ebp+r_ecx+0xfffffffcu);
    /* 0088d7f4: lea edi, [eax - 4] */ r_edi = (u32)(r_eax+0xfffffffcu);
    /* 0088d7f7: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088d7f9: ja 0x88d988 */ if ((!fC&&!fZ)) goto L_0088d988;
L_0088d7ff:; BB(0x0088d7ff);
    /* 0088d7ff: mov esi, edx */ r_esi = r_edx;
    /* 0088d801: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 0088d804: and edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0088d807: mov ebp, eax */ r_ebp = r_eax;
    /* 0088d809: je 0x88d84c */ if (fZ) goto L_0088d84c;
L_0088d80b:; BB(0x0088d80b);
    /* 0088d80b: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088d811: jne 0x88d8db */ if (!fZ) goto L_0088d8db;
L_0088d817:; BB(0x0088d817);
    /* 0088d817: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0088d819: lea ecx, [edi + 0x10] */ r_ecx = (u32)(r_edi+0x10u);
    /* 0088d81c: lea ebp, [eax + edi + 0x10] */ r_ebp = (u32)(r_eax+r_edi+0x10u);
    /* 0088d820: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0088d823: mov esi, edx */ r_esi = r_edx;
    /* 0088d825: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088d827: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0088d82a: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0088d82e: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
L_0088d831:; BB(0x0088d831);
    /* 0088d831: movss xmm0, dword ptr [edx + edi*4] */ { u32 v = R32((u32)(r_edx+r_edi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0088d836: subss xmm0, dword ptr [eax + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; }
    /* 0088d83b: movss dword ptr [edx + edi*4], xmm0 */ W32((u32)(r_edx+r_edi*4), xmm[0].d[0]);
    /* 0088d840: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088d841: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088d843: jb 0x88d831 */ if (fC) goto L_0088d831;
L_0088d845:; BB(0x0088d845);
    /* 0088d845: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 0088d849: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
L_0088d84c:; BB(0x0088d84c);
    /* 0088d84c: and esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0088d84f: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088d851: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088d853: test ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088d859: jne 0x88d894 */ if (!fZ) goto L_0088d894;
L_0088d85b:; BB(0x0088d85b);
    /* 0088d85b: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 0088d85f: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
L_0088d862:; BB(0x0088d862);
    /* 0088d862: prefetchnta byte ptr [eax + ebp*4 + 0x40] */ ;
    /* 0088d867: movaps xmm0, xmmword ptr [ecx + ebp*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_ebp*4), 16); xmm[0] = s; }
    /* 0088d86b: movaps xmm1, xmmword ptr [ecx + ebp*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_ebp*4+0x10u), 16); xmm[1] = s; }
    /* 0088d870: subps xmm0, xmmword ptr [eax + ebp*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_ebp*4), 16); xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 0088d874: movaps xmmword ptr [ecx + ebp*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_ecx+r_ebp*4), &xmm[0], 16);
    /* 0088d878: prefetchnta byte ptr [ecx + ebp*4 + 0x40] */ ;
    /* 0088d87d: subps xmm1, xmmword ptr [eax + ebp*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_ebp*4+0x10u), 16); xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] - s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] - s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] - s.fs[3]; }
    /* 0088d882: movaps xmmword ptr [ecx + ebp*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_ecx+r_ebp*4+0x10u), &xmm[1], 16);
    /* 0088d887: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088d88a: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088d88c: jb 0x88d862 */ if (fC) goto L_0088d862;
L_0088d88e:; BB(0x0088d88e);
    /* 0088d88e: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 0088d892: jmp 0x88d8d1 */ goto L_0088d8d1;
L_0088d894:; BB(0x0088d894);
    /* 0088d894: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 0088d898: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
L_0088d89b:; BB(0x0088d89b);
    /* 0088d89b: movups xmm0, xmmword ptr [eax + ebp*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_ebp*4), 16); xmm[0] = s; }
    /* 0088d89f: prefetchnta byte ptr [eax + ebp*4 + 0x40] */ ;
    /* 0088d8a4: movaps xmm1, xmmword ptr [ecx + ebp*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_ebp*4), 16); xmm[1] = s; }
    /* 0088d8a8: subps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] - s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] - s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] - s.fs[3]; }
    /* 0088d8ab: movaps xmmword ptr [ecx + ebp*4], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_ecx+r_ebp*4), &xmm[1], 16);
    /* 0088d8af: movaps xmm3, xmmword ptr [ecx + ebp*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_ebp*4+0x10u), 16); xmm[3] = s; }
    /* 0088d8b4: movups xmm2, xmmword ptr [eax + ebp*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_ebp*4+0x10u), 16); xmm[2] = s; }
    /* 0088d8b9: prefetchnta byte ptr [ecx + ebp*4 + 0x40] */ ;
    /* 0088d8be: subps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] - s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] - s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] - s.fs[3]; }
    /* 0088d8c1: movaps xmmword ptr [ecx + ebp*4 + 0x10], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_ecx+r_ebp*4+0x10u), &xmm[3], 16);
    /* 0088d8c6: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088d8c9: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088d8cb: jb 0x88d89b */ if (fC) goto L_0088d89b;
L_0088d8cd:; BB(0x0088d8cd);
    /* 0088d8cd: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
L_0088d8d1:; BB(0x0088d8d1);
    /* 0088d8d1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0088d8d3: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088d8d5: jae 0x88d96f */ if (!fC) goto L_0088d96f;
L_0088d8db:; BB(0x0088d8db);
    /* 0088d8db: mov ecx, edx */ r_ecx = r_edx;
    /* 0088d8dd: sub ecx, dword ptr [esp + 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088d8e1: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088d8e4: jb 0x88d954 */ if (fC) goto L_0088d954;
L_0088d8e6:; BB(0x0088d8e6);
    /* 0088d8e6: lea ecx, [edx - 6] */ r_ecx = (u32)(r_edx+0xfffffffau);
    /* 0088d8e9: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 0088d8ed: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
L_0088d8f0:; BB(0x0088d8f0);
    /* 0088d8f0: movss xmm0, dword ptr [ebp + esi*4] */ { u32 v = R32((u32)(r_ebp+r_esi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0088d8f6: subss xmm0, dword ptr [eax + esi*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_esi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; }
    /* 0088d8fb: movss xmm1, dword ptr [ebp + esi*4 + 4] */ { u32 v = R32((u32)(r_ebp+r_esi*4+0x4u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0088d901: movss dword ptr [ebp + esi*4], xmm0 */ W32((u32)(r_ebp+r_esi*4), xmm[0].d[0]);
    /* 0088d907: subss xmm1, dword ptr [eax + esi*4 + 4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_esi*4+0x4u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 0088d90d: movss xmm2, dword ptr [ebp + esi*4 + 8] */ { u32 v = R32((u32)(r_ebp+r_esi*4+0x8u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 0088d913: movss dword ptr [ebp + esi*4 + 4], xmm1 */ W32((u32)(r_ebp+r_esi*4+0x4u), xmm[1].d[0]);
    /* 0088d919: subss xmm2, dword ptr [eax + esi*4 + 8] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_esi*4+0x8u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 0088d91f: movss xmm3, dword ptr [ebp + esi*4 + 0xc] */ { u32 v = R32((u32)(r_ebp+r_esi*4+0xcu)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 0088d925: movss dword ptr [ebp + esi*4 + 8], xmm2 */ W32((u32)(r_ebp+r_esi*4+0x8u), xmm[2].d[0]);
    /* 0088d92b: subss xmm3, dword ptr [eax + esi*4 + 0xc] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_esi*4+0xcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; }
    /* 0088d931: movss xmm4, dword ptr [ebp + esi*4 + 0x10] */ { u32 v = R32((u32)(r_ebp+r_esi*4+0x10u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 0088d937: movss dword ptr [ebp + esi*4 + 0xc], xmm3 */ W32((u32)(r_ebp+r_esi*4+0xcu), xmm[3].d[0]);
    /* 0088d93d: subss xmm4, dword ptr [eax + esi*4 + 0x10] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_esi*4+0x10u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; }
    /* 0088d943: movss dword ptr [ebp + esi*4 + 0x10], xmm4 */ W32((u32)(r_ebp+r_esi*4+0x10u), xmm[4].d[0]);
    /* 0088d949: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088d94c: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088d94e: jbe 0x88d8f0 */ if ((fC||fZ)) goto L_0088d8f0;
L_0088d950:; BB(0x0088d950);
    /* 0088d950: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
L_0088d954:; BB(0x0088d954);
    /* 0088d954: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 0088d958: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
L_0088d95b:; BB(0x0088d95b);
    /* 0088d95b: movss xmm0, dword ptr [ecx + ebp*4] */ { u32 v = R32((u32)(r_ecx+r_ebp*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0088d960: subss xmm0, dword ptr [eax + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; }
    /* 0088d965: movss dword ptr [ecx + ebp*4], xmm0 */ W32((u32)(r_ecx+r_ebp*4), xmm[0].d[0]);
    /* 0088d96a: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088d96b: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088d96d: jb 0x88d95b */ if (fC) goto L_0088d95b;
L_0088d96f:; BB(0x0088d96f);
    /* 0088d96f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0088d973: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088d976: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088d977: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088d978: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088d979: mov esp, ebx */ r_esp = r_ebx;
    /* 0088d97b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088d97c: ret  */ FN_RET(0x0088d590); r_esp += 4; return;
L_0088d97d:; BB(0x0088d97d);
    /* 0088d97d: lea eax, [eax + eax - 2] */ r_eax = (u32)(r_eax+r_eax+0xfffffffeu);
    /* 0088d981: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088d983: jmp 0x88d78b */ goto L_0088d78b;
L_0088d988:; BB(0x0088d988);
    /* 0088d988: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 0088d98b: lea esi, [ebp - 4] */ r_esi = (u32)(r_ebp+0xfffffffcu);
    /* 0088d98e: lea ecx, [eax + ecx - 4] */ r_ecx = (u32)(r_eax+r_ecx+0xfffffffcu);
    /* 0088d992: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088d994: jb 0x88d8db */ if (fC) goto L_0088d8db;
L_0088d99a:; BB(0x0088d99a);
    /* 0088d99a: jmp 0x88d7ff */ goto L_0088d7ff;
L_0088d99f:; BB(0x0088d99f);
    /* 0088d99f: movss xmm1, dword ptr [0x99b034] */ { u32 v = R32((u32)(0x99b034u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0088d9a7: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0088d9aa: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0088d9ad: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0088d9b2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088d9b4: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0088d9b8: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0088d9bb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088d9bd: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0088d9c1: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 0088d9c5: jle 0x88d7c5 */ if ((fZ||fS!=fO)) goto L_0088d7c5;
L_0088d9cb:; BB(0x0088d9cb);
    /* 0088d9cb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088d9cd: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0088d9d0: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088d9d2: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0088d9d6: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0088d9d9: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 0088d9dd: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0088d9e0: mov edi, ecx */ r_edi = r_ecx;
    /* 0088d9e2: and edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0088d9e5: mov esi, ecx */ r_esi = r_ecx;
    /* 0088d9e7: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088d9e9: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0088d9ed: mov edi, edx */ r_edi = r_edx;
    /* 0088d9ef: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 0088d9f3: lea esi, [esi + 0x10] */ r_esi = (u32)(r_esi+0x10u);
    /* 0088d9f6: shr esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0088d9f9: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 0088d9fd: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0088d9ff: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0088da03: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 0088da07: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0088da0b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0088da0f: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0088da13: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_0088da16:; BB(0x0088da16);
    /* 0088da16: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0088da1a: cmp dword ptr [eax + esi*4], 0 */ {  u32 a = R32((u32)(r_eax+r_esi*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088da1e: jle 0x88db69 */ if ((fZ||fS!=fO)) goto L_0088db69;
L_0088da24:; BB(0x0088da24);
    /* 0088da24: movss xmm2, dword ptr [0x99b034] */ { u32 v = R32((u32)(0x99b034u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 0088da2c: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0088da2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088da31: jle 0x88db53 */ if ((fZ||fS!=fO)) goto L_0088db53;
L_0088da37:; BB(0x0088da37);
    /* 0088da37: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0088da39: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088da3c: jb 0x88db86 */ if (fC) goto L_0088db86;
L_0088da42:; BB(0x0088da42);
    /* 0088da42: mov edx, eax */ r_edx = r_eax;
    /* 0088da44: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0088da48: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0088da4c: imul ecx, dword ptr [esp + 0x24] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_esp+0x24u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088da51: add ecx, dword ptr [esp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088da55: mov eax, ecx */ r_eax = r_ecx;
    /* 0088da57: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088da59: je 0x88da99 */ if (fZ) goto L_0088da99;
L_0088da5b:; BB(0x0088da5b);
    /* 0088da5b: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0088da5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088da61: jne 0x88db36 */ if (!fZ) goto L_0088db36;
L_0088da67:; BB(0x0088da67);
    /* 0088da67: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0088da6b: lea eax, [ecx + eax + 0x10] */ r_eax = (u32)(r_ecx+r_eax+0x10u);
    /* 0088da6f: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0088da73: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0088da77: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0088da7b: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
L_0088da7e:; BB(0x0088da7e);
    /* 0088da7e: movss xmm0, dword ptr [ecx + ebp*4] */ { u32 v = R32((u32)(r_ecx+r_ebp*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0088da83: subss xmm0, dword ptr [esi + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; }
    /* 0088da88: mulss xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 0088da8c: addss xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; }
    /* 0088da90: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088da91: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088da93: jb 0x88da7e */ if (fC) goto L_0088da7e;
L_0088da95:; BB(0x0088da95);
    /* 0088da95: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
L_0088da99:; BB(0x0088da99);
    /* 0088da99: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0088da9c: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088da9e: add edx, dword ptr [esp] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088daa1: test al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0088daa3: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 0088daa6: movss xmm0, xmm2 */ xmm[0].d[0] = xmm[2].d[0];
    /* 0088daaa: xorps xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].q[0] = xmm[2].q[0] ^ s.q[0]; xmm[2].q[1] = xmm[2].q[1] ^ s.q[1]; }
    /* 0088daad: jne 0x88dae3 */ if (!fZ) goto L_0088dae3;
L_0088daaf:; BB(0x0088daaf);
    /* 0088daaf: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
L_0088dab2:; BB(0x0088dab2);
    /* 0088dab2: prefetchnta byte ptr [eax + ebp*4 + 0x40] */ ;
    /* 0088dab7: movaps xmm3, xmmword ptr [ecx + ebp*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_ebp*4), 16); xmm[3] = s; }
    /* 0088dabb: movaps xmm4, xmmword ptr [ecx + ebp*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_ebp*4+0x10u), 16); xmm[4] = s; }
    /* 0088dac0: subps xmm3, xmmword ptr [eax + ebp*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_ebp*4), 16); xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] - s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] - s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] - s.fs[3]; }
    /* 0088dac4: mulps xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 0088dac7: addps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 0088daca: subps xmm4, xmmword ptr [eax + ebp*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_ebp*4+0x10u), 16); xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 0088dacf: prefetchnta byte ptr [ecx + ebp*4 + 0x40] */ ;
    /* 0088dad4: mulps xmm4, xmm4 */ { XMM s = xmm[4]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 0088dad7: addps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 0088dada: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088dadd: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088dadf: jb 0x88dab2 */ if (fC) goto L_0088dab2;
L_0088dae1:; BB(0x0088dae1);
    /* 0088dae1: jmp 0x88db15 */ goto L_0088db15;
L_0088dae3:; BB(0x0088dae3);
    /* 0088dae3: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
L_0088dae6:; BB(0x0088dae6);
    /* 0088dae6: movups xmm3, xmmword ptr [ecx + ebp*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_ebp*4), 16); xmm[3] = s; }
    /* 0088daea: prefetchnta byte ptr [eax + ebp*4 + 0x40] */ ;
    /* 0088daef: prefetchnta byte ptr [ecx + ebp*4 + 0x40] */ ;
    /* 0088daf4: movups xmm4, xmmword ptr [ecx + ebp*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_ebp*4+0x10u), 16); xmm[4] = s; }
    /* 0088daf9: subps xmm3, xmmword ptr [eax + ebp*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_ebp*4), 16); xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] - s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] - s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] - s.fs[3]; }
    /* 0088dafd: mulps xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 0088db00: addps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 0088db03: subps xmm4, xmmword ptr [eax + ebp*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_ebp*4+0x10u), 16); xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 0088db08: mulps xmm4, xmm4 */ { XMM s = xmm[4]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 0088db0b: addps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 0088db0e: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088db11: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088db13: jb 0x88dae6 */ if (fC) goto L_0088dae6;
L_0088db15:; BB(0x0088db15);
    /* 0088db15: addps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 0088db18: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 0088db1b: movhlps xmm2, xmm2 */ xmm[2].q[0] = xmm[2].q[1];
    /* 0088db1e: addps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 0088db21: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 0088db24: shufps xmm3, xmm3, 1 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[1]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 0088db28: addss xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 0088db2c: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0088db2f: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088db31: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 0088db34: jae 0x88db53 */ if (!fC) goto L_0088db53;
L_0088db36:; BB(0x0088db36);
    /* 0088db36: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0088db39: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
L_0088db3c:; BB(0x0088db3c);
    /* 0088db3c: movss xmm0, dword ptr [ecx + ebp*4] */ { u32 v = R32((u32)(r_ecx+r_ebp*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0088db41: subss xmm0, dword ptr [eax + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; }
    /* 0088db46: mulss xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 0088db4a: addss xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; }
    /* 0088db4e: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088db4f: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088db51: jb 0x88db3c */ if (fC) goto L_0088db3c;
L_0088db53:; BB(0x0088db53);
    /* 0088db53: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0088db57: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088db5a: je 0x88db61 */ if (fZ) goto L_0088db61;
L_0088db5c:; BB(0x0088db5c);
    /* 0088db5c: comiss xmm2, xmm1 */ { XMM s = xmm[1]; float a = xmm[2].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 0088db5f: jae 0x88db69 */ if (!fC) goto L_0088db69;
L_0088db61:; BB(0x0088db61);
    /* 0088db61: movss xmm1, xmm2 */ xmm[1].d[0] = xmm[2].d[0];
    /* 0088db65: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_0088db69:; BB(0x0088db69);
    /* 0088db69: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088db6a: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0088db6e: inc dword ptr [esp + 0x18] */ { u32 ad = (u32)(r_esp+0x18u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088db72: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088db74: jl 0x88da16 */ if ((fS!=fO)) goto L_0088da16;
L_0088db7a:; BB(0x0088db7a);
    /* 0088db7a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0088db7e: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0088db81: jmp 0x88d7c5 */ goto L_0088d7c5;
L_0088db86:; BB(0x0088db86);
    /* 0088db86: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0088db8a: imul ecx, dword ptr [esp + 0x24] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_esp+0x24u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088db8f: add ecx, dword ptr [esp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088db93: jmp 0x88db36 */ goto L_0088db36;
L_0088db95:; BB(0x0088db95);
    /* 0088db95: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0088db99: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0088db9d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088db9f: jmp 0x88d78b */ goto L_0088d78b;
L_0088dba4:; BB(0x0088dba4);
    /* 0088dba4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088dba5: mov ebx, esp */ r_ebx = r_esp;
    /* 0088dba7: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088dbaa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088dbab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088dbac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088dbad: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088dbb0: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0088dbb3: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0088dbb6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0088dbba: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 0088dbbc: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088dbbe: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0088dbc1: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0088dbc4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088dbc6: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0088dbca: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 0088dbce: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088dbd0: jle 0x88dddb */ if ((fZ||fS!=fO)) goto L_0088dddb;
L_0088dbd6:; BB(0x0088dbd6);
    /* 0088dbd6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0088dbda: mov ebp, dword ptr [ecx + 0xc] */ r_ebp = R32((u32)(r_ecx+0xcu));
    /* 0088dbdd: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 0088dbe1: mov edx, ebp */ r_edx = r_ebp;
    /* 0088dbe3: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0088dbe5: lea eax, [ebp - 1] */ r_eax = (u32)(r_ebp+0xffffffffu);
    /* 0088dbe8: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0088dbec: lea eax, [ebp - 7] */ r_eax = (u32)(r_ebp+0xfffffff9u);
    /* 0088dbef: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0088dbf3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0088dbf5: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0088dbf9: fld dword ptr [eax + edx*4] */ FPUSH(R_F32((u32)(r_eax+r_edx*4)));
    /* 0088dbfc: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0088dbff: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0088dc03: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0088dc06: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0088dc0a: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 0088dc0d: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0088dc11: lea ecx, [edx - 1] */ r_ecx = (u32)(r_edx+0xffffffffu);
    /* 0088dc14: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0088dc18: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0088dc1c: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0088dc20: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0088dc24: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0088dc28: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0088dc2b: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0088dc2f: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
L_0088dc33:; BB(0x0088dc33);
    /* 0088dc33: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088dc34: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0088dc38: fld dword ptr [edx + ebp*4] */ FPUSH(R_F32((u32)(r_edx+r_ebp*4)));
    /* 0088dc3b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0088dc3d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088dc3f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088dc40: jae 0x88dd06 */ if (!fC) goto L_0088dd06;
L_0088dc46:; BB(0x0088dc46);
    /* 0088dc46: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0088dc4a: fcom dword ptr [ecx + edx*4 - 4] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_edx*4+0xfffffffcu))); 
    /* 0088dc4e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088dc50: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088dc51: jae 0x88dcf8 */ if (!fC) goto L_0088dcf8;
L_0088dc57:; BB(0x0088dc57);
    /* 0088dc57: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0088dc5b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088dc5d: jle 0x88de89 */ if ((fZ||fS!=fO)) goto L_0088de89;
L_0088dc63:; BB(0x0088dc63);
    /* 0088dc63: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0088dc67: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088dc6a: jl 0x88dcd5 */ if ((fS!=fO)) goto L_0088dcd5;
L_0088dc6c:; BB(0x0088dc6c);
    /* 0088dc6c: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0088dc6f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088dc71: fcom dword ptr [ecx + edx - 4] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_edx+0xfffffffcu))); 
    /* 0088dc75: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088dc77: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088dc78: jae 0x88de82 */ if (!fC) goto L_0088de82;
L_0088dc7e:; BB(0x0088dc7e);
    /* 0088dc7e: lea edi, [esi - 1] */ r_edi = (u32)(r_esi+0xffffffffu);
    /* 0088dc81: lea edx, [esi + esi - 2] */ r_edx = (u32)(r_esi+r_esi+0xfffffffeu);
    /* 0088dc85: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088dc87: fcom dword ptr [ecx + edx - 4] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_edx+0xfffffffcu))); 
    /* 0088dc8b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088dc8d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088dc8e: jae 0x88de7b */ if (!fC) goto L_0088de7b;
L_0088dc94:; BB(0x0088dc94);
    /* 0088dc94: lea edx, [edi + edi - 2] */ r_edx = (u32)(r_edi+r_edi+0xfffffffeu);
    /* 0088dc98: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088dc9a: fcom dword ptr [ecx + edx - 4] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_edx+0xfffffffcu))); 
    /* 0088dc9e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088dca0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088dca1: jae 0x88de7b */ if (!fC) goto L_0088de7b;
L_0088dca7:; BB(0x0088dca7);
    /* 0088dca7: lea edx, [edi + edi - 4] */ r_edx = (u32)(r_edi+r_edi+0xfffffffcu);
    /* 0088dcab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088dcad: fcom dword ptr [ecx + edx - 4] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_edx+0xfffffffcu))); 
    /* 0088dcb1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088dcb3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088dcb4: jae 0x88de7b */ if (!fC) goto L_0088de7b;
L_0088dcba:; BB(0x0088dcba);
    /* 0088dcba: lea edx, [edi + edi - 6] */ r_edx = (u32)(r_edi+r_edi+0xfffffffau);
    /* 0088dcbe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088dcc0: fcom dword ptr [ecx + edx - 4] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_edx+0xfffffffcu))); 
    /* 0088dcc4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088dcc6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088dcc7: jae 0x88de7b */ if (!fC) goto L_0088de7b;
L_0088dccd:; BB(0x0088dccd);
    /* 0088dccd: lea esi, [edi - 4] */ r_esi = (u32)(r_edi+0xfffffffcu);
    /* 0088dcd0: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088dcd3: jge 0x88dc6c */ if ((fS==fO)) goto L_0088dc6c;
L_0088dcd5:; BB(0x0088dcd5);
    /* 0088dcd5: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0088dcd8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088dcda: fcom dword ptr [ecx + edx - 4] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_edx+0xfffffffcu))); 
    /* 0088dcde: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088dce0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088dce1: jae 0x88de74 */ if (!fC) goto L_0088de74;
L_0088dce7:; BB(0x0088dce7);
    /* 0088dce7: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088dce8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088dcea: jg 0x88dcd5 */ if ((!fZ&&fS==fO)) goto L_0088dcd5;
L_0088dcec:; BB(0x0088dcec);
    /* 0088dcec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088dcee: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088dcf0: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0088dcf3: jmp 0x88ddad */ goto L_0088ddad;
L_0088dcf8:; BB(0x0088dcf8);
    /* 0088dcf8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088dcfa: mov eax, edx */ r_eax = r_edx;
    /* 0088dcfc: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0088dcff: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088dd01: jmp 0x88ddad */ goto L_0088ddad;
L_0088dd06:; BB(0x0088dd06);
    /* 0088dd06: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0088dd0a: lea edi, [edi + 1] */ r_edi = (u32)(r_edi+0x1u);
    /* 0088dd0d: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0088dd11: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088dd13: jge 0x88dfb2 */ if ((fS==fO)) goto L_0088dfb2;
L_0088dd19:; BB(0x0088dd19);
    /* 0088dd19: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0088dd1d: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088dd1f: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088dd20: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088dd23: jl 0x88dd8c */ if ((fS!=fO)) goto L_0088dd8c;
L_0088dd25:; BB(0x0088dd25);
    /* 0088dd25: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0088dd28: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088dd2a: fcom dword ptr [ecx + edx] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_edx))); 
    /* 0088dd2d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088dd2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088dd30: jb 0x88dfab */ if (fC) goto L_0088dfab;
L_0088dd36:; BB(0x0088dd36);
    /* 0088dd36: lea esi, [edi + 1] */ r_esi = (u32)(r_edi+0x1u);
    /* 0088dd39: lea edx, [edi + edi + 2] */ r_edx = (u32)(r_edi+r_edi+0x2u);
    /* 0088dd3d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088dd3f: fcom dword ptr [ecx + edx] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_edx))); 
    /* 0088dd42: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088dd44: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088dd45: jb 0x88dfab */ if (fC) goto L_0088dfab;
L_0088dd4b:; BB(0x0088dd4b);
    /* 0088dd4b: lea edx, [esi + esi + 2] */ r_edx = (u32)(r_esi+r_esi+0x2u);
    /* 0088dd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088dd51: fcom dword ptr [ecx + edx] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_edx))); 
    /* 0088dd54: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088dd56: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088dd57: jb 0x88dfab */ if (fC) goto L_0088dfab;
L_0088dd5d:; BB(0x0088dd5d);
    /* 0088dd5d: lea edx, [esi + esi + 4] */ r_edx = (u32)(r_esi+r_esi+0x4u);
    /* 0088dd61: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088dd63: fcom dword ptr [ecx + edx] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_edx))); 
    /* 0088dd66: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088dd68: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088dd69: jb 0x88dfab */ if (fC) goto L_0088dfab;
L_0088dd6f:; BB(0x0088dd6f);
    /* 0088dd6f: lea edx, [esi + esi + 6] */ r_edx = (u32)(r_esi+r_esi+0x6u);
    /* 0088dd73: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088dd75: fcom dword ptr [ecx + edx] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_edx))); 
    /* 0088dd78: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088dd7a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088dd7b: jb 0x88dfab */ if (fC) goto L_0088dfab;
L_0088dd81:; BB(0x0088dd81);
    /* 0088dd81: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0088dd85: lea edi, [esi + 4] */ r_edi = (u32)(r_esi+0x4u);
    /* 0088dd88: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088dd8a: jle 0x88dd25 */ if ((fZ||fS!=fO)) goto L_0088dd25;
L_0088dd8c:; BB(0x0088dd8c);
    /* 0088dd8c: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
L_0088dd90:; BB(0x0088dd90);
    /* 0088dd90: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0088dd93: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088dd95: fcom dword ptr [ecx + edx] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_edx))); 
    /* 0088dd98: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088dd9a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088dd9b: jb 0x88dfa4 */ if (fC) goto L_0088dfa4;
L_0088dda1:; BB(0x0088dda1);
    /* 0088dda1: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088dda2: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088dda4: jl 0x88dd90 */ if ((fS!=fO)) goto L_0088dd90;
L_0088dda6:; BB(0x0088dda6);
    /* 0088dda6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088dda8: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088ddaa: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
L_0088ddad:; BB(0x0088ddad);
    /* 0088ddad: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0088ddb1: imul esi, dword ptr [esp + 0x1c] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_esp+0x1cu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088ddb6: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088ddba: add esi, dword ptr [eax + edx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+r_edx)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088ddbd: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0088ddc1: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0088ddc5: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ddc6: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0088ddca: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0088ddcd: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ddcf: jl 0x88dc33 */ if ((fS!=fO)) goto L_0088dc33;
L_0088ddd5:; BB(0x0088ddd5);
    /* 0088ddd5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088ddd7: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_0088dddb:; BB(0x0088dddb);
    /* 0088dddb: mov ebp, dword ptr [eax + 8] */ r_ebp = R32((u32)(r_eax+0x8u));
    /* 0088ddde: cmp dword ptr [ebp + esi*4], 0 */ {  u32 a = R32((u32)(r_ebp+r_esi*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088dde3: jle 0x88de98 */ if ((fZ||fS!=fO)) goto L_0088de98;
L_0088dde9:; BB(0x0088dde9);
    /* 0088dde9: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0088ddec: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0088ddef: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0088ddf2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0088ddf4:; BB(0x0088ddf4);
    /* 0088ddf4: imul eax, esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088ddf7: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ddf9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088ddfb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088ddfd: jle 0x88de68 */ if ((fZ||fS!=fO)) goto L_0088de68;
L_0088ddff:; BB(0x0088ddff);
    /* 0088ddff: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088de02: jl 0x88de4d */ if ((fS!=fO)) goto L_0088de4d;
L_0088de04:; BB(0x0088de04);
    /* 0088de04: lea ecx, [edi - 6] */ r_ecx = (u32)(r_edi+0xfffffffau);
    /* 0088de07: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0088de0b: jmp 0x88de10 */ goto L_0088de10;
L_0088de0d:; BB(0x0088de0d);
    /* 0088de0d: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
L_0088de10:; BB(0x0088de10);
    /* 0088de10: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0088de13: fsub dword ptr [edx] */ ST(0) = ST(0) - R_F32((u32)(r_edx));
    /* 0088de15: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0088de18: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0088de1b: fsub dword ptr [edx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x4u));
    /* 0088de1e: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0088de21: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0088de24: fsub dword ptr [edx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x8u));
    /* 0088de27: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 0088de2a: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0088de2d: fsub dword ptr [edx + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0xcu));
    /* 0088de30: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 0088de33: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 0088de36: fsub dword ptr [edx + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x10u));
    /* 0088de39: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088de3c: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088de3f: add ebp, 0x14 */ {  u32 a = r_ebp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088de42: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088de44: jle 0x88de0d */ if ((fZ||fS!=fO)) goto L_0088de0d;
L_0088de46:; BB(0x0088de46);
    /* 0088de46: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 0088de49: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
L_0088de4d:; BB(0x0088de4d);
    /* 0088de4d: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0088de51: jmp 0x88de56 */ goto L_0088de56;
L_0088de53:; BB(0x0088de53);
    /* 0088de53: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
L_0088de56:; BB(0x0088de56);
    /* 0088de56: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0088de58: fsub dword ptr [edx] */ ST(0) = ST(0) - R_F32((u32)(r_edx));
    /* 0088de5a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088de5b: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088de5e: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088de61: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088de63: jl 0x88de53 */ if ((fS!=fO)) goto L_0088de53;
L_0088de65:; BB(0x0088de65);
    /* 0088de65: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
L_0088de68:; BB(0x0088de68);
    /* 0088de68: mov eax, esi */ r_eax = r_esi;
    /* 0088de6a: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088de6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088de6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088de6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088de70: mov esp, ebx */ r_esp = r_ebx;
    /* 0088de72: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088de73: ret  */ FN_RET(0x0088d590); r_esp += 4; return;
L_0088de74:; BB(0x0088de74);
    /* 0088de74: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088de76: jmp 0x88ddad */ goto L_0088ddad;
L_0088de7b:; BB(0x0088de7b);
    /* 0088de7b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088de7d: jmp 0x88ddad */ goto L_0088ddad;
L_0088de82:; BB(0x0088de82);
    /* 0088de82: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088de84: jmp 0x88ddad */ goto L_0088ddad;
L_0088de89:; BB(0x0088de89);
    /* 0088de89: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088de8b: mov eax, edx */ r_eax = r_edx;
    /* 0088de8d: lea edx, [eax + eax - 2] */ r_edx = (u32)(r_eax+r_eax+0xfffffffeu);
    /* 0088de91: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088de93: jmp 0x88ddad */ goto L_0088ddad;
L_0088de98:; BB(0x0088de98);
    /* 0088de98: fld dword ptr [0x99b030] */ FPUSH(R_F32((u32)(0x99b030u)));
    /* 0088de9e: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0088dea1: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0088dea4: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0088dea8: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 0088dead: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088deaf: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0088deb3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0088deb6: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0088deba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088debc: jle 0x88df98 */ if ((fZ||fS!=fO)) goto L_0088df98;
L_0088dec2:; BB(0x0088dec2);
    /* 0088dec2: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0088dec5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088dec7: lea ecx, [edi - 5] */ r_ecx = (u32)(r_edi+0xfffffffbu);
    /* 0088deca: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0088dece: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0088ded2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0088ded6: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0088deda: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
L_0088dede:; BB(0x0088dede);
    /* 0088dede: cmp dword ptr [ebp + edx*4], 0 */ {  u32 a = R32((u32)(r_ebp+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088dee3: jle 0x88df78 */ if ((fZ||fS!=fO)) goto L_0088df78;
L_0088dee9:; BB(0x0088dee9);
    /* 0088dee9: fld dword ptr [0x99b030] */ FPUSH(R_F32((u32)(0x99b030u)));
    /* 0088deef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088def1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088def3: jle 0x88df68 */ if ((fZ||fS!=fO)) goto L_0088df68;
L_0088def5:; BB(0x0088def5);
    /* 0088def5: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088def8: jl 0x88df49 */ if ((fS!=fO)) goto L_0088df49;
L_0088defa:; BB(0x0088defa);
    /* 0088defa: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0088defe: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0088df01: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0088df05: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0088df09: jmp 0x88df0d */ goto L_0088df0d;
L_0088df0b:; BB(0x0088df0b);
    /* 0088df0b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_0088df0d:; BB(0x0088df0d);
    /* 0088df0d: fld dword ptr [ecx + eax*4] */ FPUSH(R_F32((u32)(r_ecx+r_eax*4)));
    /* 0088df10: fsub dword ptr [esi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4));
    /* 0088df13: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0088df15: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088df17: fld dword ptr [ecx + eax*4 + 4] */ FPUSH(R_F32((u32)(r_ecx+r_eax*4+0x4u)));
    /* 0088df1b: fsub dword ptr [esi + eax*4 + 4] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x4u));
    /* 0088df1f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0088df21: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088df23: fld dword ptr [ecx + eax*4 + 8] */ FPUSH(R_F32((u32)(r_ecx+r_eax*4+0x8u)));
    /* 0088df27: fsub dword ptr [esi + eax*4 + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x8u));
    /* 0088df2b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0088df2d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088df2f: fld dword ptr [ecx + eax*4 + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_eax*4+0xcu)));
    /* 0088df33: fsub dword ptr [esi + eax*4 + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0xcu));
    /* 0088df37: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0088df39: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088df3c: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088df3e: jle 0x88df0b */ if ((fZ||fS!=fO)) goto L_0088df0b;
L_0088df40:; BB(0x0088df40);
    /* 0088df40: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088df42: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0088df46: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0088df49:; BB(0x0088df49);
    /* 0088df49: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0088df4d: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0088df51: jmp 0x88df55 */ goto L_0088df55;
L_0088df53:; BB(0x0088df53);
    /* 0088df53: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_0088df55:; BB(0x0088df55);
    /* 0088df55: fld dword ptr [ecx + eax*4] */ FPUSH(R_F32((u32)(r_ecx+r_eax*4)));
    /* 0088df58: fsub dword ptr [esi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4));
    /* 0088df5b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0088df5d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088df5e: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088df60: jl 0x88df53 */ if ((fS!=fO)) goto L_0088df53;
L_0088df62:; BB(0x0088df62);
    /* 0088df62: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088df64: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_0088df68:; BB(0x0088df68);
    /* 0088df68: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088df6b: je 0x88df74 */ if (fZ) goto L_0088df74;
L_0088df6d:; BB(0x0088df6d);
    /* 0088df6d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0088df6f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088df71: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088df72: jae 0x88dfc3 */ if (!fC) goto L_0088dfc3;
L_0088df74:; BB(0x0088df74);
    /* 0088df74: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088df76: mov esi, edx */ r_esi = r_edx;
L_0088df78:; BB(0x0088df78);
    /* 0088df78: add ecx, dword ptr [esp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088df7c: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088df7d: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0088df81: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088df83: jl 0x88dede */ if ((fS!=fO)) goto L_0088dede;
L_0088df89:; BB(0x0088df89);
    /* 0088df89: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088df8b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0088df8f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0088df93: jmp 0x88ddf4 */ goto L_0088ddf4;
L_0088df98:; BB(0x0088df98);
    /* 0088df98: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088df9a: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0088df9d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088df9f: jmp 0x88ddf4 */ goto L_0088ddf4;
L_0088dfa4:; BB(0x0088dfa4);
    /* 0088dfa4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088dfa6: jmp 0x88ddad */ goto L_0088ddad;
L_0088dfab:; BB(0x0088dfab);
    /* 0088dfab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088dfad: jmp 0x88ddad */ goto L_0088ddad;
L_0088dfb2:; BB(0x0088dfb2);
    /* 0088dfb2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088dfb4: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0088dfb8: lea edx, [eax + eax + 2] */ r_edx = (u32)(r_eax+r_eax+0x2u);
    /* 0088dfbc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088dfbe: jmp 0x88ddad */ goto L_0088ddad;
L_0088dfc3:; BB(0x0088dfc3);
    /* 0088dfc3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088dfc5: jmp 0x88df78 */ goto L_0088df78;
}

void f_0088dfc8(void) /* sub_88DFC8 */
{
    FN_ENTER(0x0088dfc8);
    /* 0088dfc8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088dfc9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088dfca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088dfcb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088dfcc: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0088dfd0: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 0088dfd4: cmp dword ptr [edi], 1 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088dfd7: jle 0x88dff7 */ if ((fZ||fS!=fO)) goto L_0088dff7;
L_0088dfd9:; BB(0x0088dfd9);
    /* 0088dfd9: mov eax, 1 */ r_eax = 0x1u;
    /* 0088dfde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088dfdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088dfe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088dfe1: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88dfe6u); f_008779d8();
    /* 0088dfe6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0088dfe8: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088dfe9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0088dfeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088dfec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088dfed: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88dff2u); f_008779d8();
    /* 0088dff2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088dff5: jmp 0x88e004 */ goto L_0088e004;
L_0088dff7:; BB(0x0088dff7);
    /* 0088dff7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088dff9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088dffb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088dffc: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88e001u); f_008779d8();
    /* 0088e001: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0088e004:; BB(0x0088e004);
    /* 0088e004: cmp dword ptr [edi + 0x484], 0 */ {  u32 a = R32((u32)(r_edi+0x484u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e00b: jle 0x88e10f */ if ((fZ||fS!=fO)) goto L_0088e10f;
L_0088e011:; BB(0x0088e011);
    /* 0088e011: mov eax, 1 */ r_eax = 0x1u;
    /* 0088e016: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e017: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e018: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088e019: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88e01eu); f_008779d8();
    /* 0088e01e: mov eax, dword ptr [edi + 0x484] */ r_eax = R32((u32)(r_edi+0x484u));
    /* 0088e024: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088e025: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e027: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e028: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088e029: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88e02eu); f_008779d8();
    /* 0088e02e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e031: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088e033: cmp dword ptr [edi + 0x484], 0 */ {  u32 a = R32((u32)(r_edi+0x484u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e03a: jle 0x88e093 */ if ((fZ||fS!=fO)) goto L_0088e093;
L_0088e03c:; BB(0x0088e03c);
    /* 0088e03c: mov ebx, eax */ r_ebx = r_eax;
    /* 0088e03e: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_0088e042:; BB(0x0088e042);
    /* 0088e042: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0088e045: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088e047: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088e049: je 0x88e055 */ if (fZ) goto L_0088e055;
L_0088e04b:; BB(0x0088e04b);
    /* 0088e04b: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0088e04c: je 0x88e055 */ if (fZ) goto L_0088e055;
L_0088e04e:; BB(0x0088e04e);
    /* 0088e04e: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088e04f: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0088e051: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088e053: jne 0x88e04e */ if (!fZ) goto L_0088e04e;
L_0088e055:; BB(0x0088e055);
    /* 0088e055: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e056: push dword ptr [edi + ebx*4 + 0x488] */ { u32 v = R32((u32)(r_edi+r_ebx*4+0x488u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088e05d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088e05e: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88e063u); f_008779d8();
    /* 0088e063: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e066: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0088e069: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088e06b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088e06d: je 0x88e079 */ if (fZ) goto L_0088e079;
L_0088e06f:; BB(0x0088e06f);
    /* 0088e06f: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0088e070: je 0x88e079 */ if (fZ) goto L_0088e079;
L_0088e072:; BB(0x0088e072);
    /* 0088e072: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088e073: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0088e075: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088e077: jne 0x88e072 */ if (!fZ) goto L_0088e072;
L_0088e079:; BB(0x0088e079);
    /* 0088e079: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e07a: push dword ptr [edi + ebx*4 + 0x888] */ { u32 v = R32((u32)(r_edi+r_ebx*4+0x888u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088e081: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088e082: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88e087u); f_008779d8();
    /* 0088e087: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e08a: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088e08b: cmp ebx, dword ptr [edi + 0x484] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x484u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e091: jl 0x88e042 */ if ((fS!=fO)) goto L_0088e042;
L_0088e093:; BB(0x0088e093);
    /* 0088e093: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e095: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e097: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088e098: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88e09du); f_008779d8();
    /* 0088e09d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e0a0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0088e0a2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e0a5: jle 0x88e0d0 */ if ((fZ||fS!=fO)) goto L_0088e0d0;
L_0088e0a7:; BB(0x0088e0a7);
    /* 0088e0a7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088e0a9: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0088e0ad: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e0b1: jle 0x88e0d0 */ if ((fZ||fS!=fO)) goto L_0088e0d0;
L_0088e0b3:; BB(0x0088e0b3);
    /* 0088e0b3: mov ebx, edx */ r_ebx = r_edx;
    /* 0088e0b5: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_0088e0b9:; BB(0x0088e0b9);
    /* 0088e0b9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e0bb: push dword ptr [edi + ebx*4 + 4] */ { u32 v = R32((u32)(r_edi+r_ebx*4+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088e0bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088e0c0: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88e0c5u); f_008779d8();
    /* 0088e0c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e0c8: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088e0c9: cmp ebx, dword ptr [esi + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e0cc: jl 0x88e0b9 */ if ((fS!=fO)) goto L_0088e0b9;
L_0088e0ce:; BB(0x0088e0ce);
    /* 0088e0ce: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
L_0088e0d0:; BB(0x0088e0d0);
    /* 0088e0d0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088e0d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088e0d4: jle 0x88e10a */ if ((fZ||fS!=fO)) goto L_0088e10a;
L_0088e0d6:; BB(0x0088e0d6);
    /* 0088e0d6: mov esi, ebp */ r_esi = r_ebp;
    /* 0088e0d8: mov ebp, edx */ r_ebp = r_edx;
L_0088e0da:; BB(0x0088e0da);
    /* 0088e0da: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e0dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e0de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e0df: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88e0e4u); f_008779d8();
    /* 0088e0e4: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e0e6: push dword ptr [edi + ebp*4 + 0x404] */ { u32 v = R32((u32)(r_edi+r_ebp*4+0x404u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088e0ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e0ee: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88e0f3u); f_008779d8();
    /* 0088e0f3: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e0f5: push dword ptr [edi + ebp*4 + 0x444] */ { u32 v = R32((u32)(r_edi+r_ebp*4+0x444u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088e0fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e0fd: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88e102u); f_008779d8();
    /* 0088e102: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e105: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088e106: cmp ebp, dword ptr [edi] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088e108: jl 0x88e0da */ if ((fS!=fO)) goto L_0088e0da;
L_0088e10a:; BB(0x0088e10a);
    /* 0088e10a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088e10b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088e10c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088e10d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088e10e: ret  */ FN_RET(0x0088dfc8); r_esp += 4; return;
L_0088e10f:; BB(0x0088e10f);
    /* 0088e10f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e111: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e113: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088e114: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88e119u); f_008779d8();
    /* 0088e119: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e11c: jmp 0x88e093 */ goto L_0088e093;
}

