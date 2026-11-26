#include "protos.h"

void f_0088a0fc(void) /* sub_88A0FC */
{
    FN_ENTER(0x0088a0fc);
L_0088a0fc:; BB(0x0088a0fc);
    /* 0088a0fc: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a106: jne 0x88a124 */ if (!fZ) goto L_0088a124;
L_0088a10c:; BB(0x0088a10c);
    /* 0088a10c: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a116: jne 0x88a154 */ if (!fZ) goto L_0088a154;
L_0088a11c:; BB(0x0088a11c);
    /* 0088a11c: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x88a121u); f_0086b8a0();
    /* 0088a121: jmp 0x88a0fc */ goto L_0088a0fc;
L_0088a124:; BB(0x0088a124);
    /* 0088a124: movss xmm0, dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0088a128: mulss xmm0, dword ptr [0x99afd8] */ { XMM s; s.d[0] = R32((u32)(0x99afd8u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 0088a130: addss xmm0, dword ptr [0x99afdc] */ { XMM s; s.d[0] = R32((u32)(0x99afdcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 0088a138: cvttss2si eax, xmm0 */ { XMM s = xmm[0]; double v = (double)s.fs[0]; double r = trunc(v); r_eax = (r >= -2147483648.0 && r < 2147483648.0) ? (u32)(i32)r : 0x80000000u; }
    /* 0088a13c: cmp eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088a141: jg 0x88a148 */ if ((!fZ&&fS==fO)) goto L_0088a148;
L_0088a143:; BB(0x0088a143);
    /* 0088a143: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088a145: jl 0x88a14e */ if ((fS!=fO)) goto L_0088a14e;
L_0088a147:; BB(0x0088a147);
    /* 0088a147: ret  */ FN_RET(0x0088a0fc); r_esp += 4; return;
L_0088a148:; BB(0x0088a148);
    /* 0088a148: mov eax, 0x3ff */ r_eax = 0x3ffu;
    /* 0088a14d: ret  */ FN_RET(0x0088a0fc); r_esp += 4; return;
L_0088a14e:; BB(0x0088a14e);
    /* 0088a14e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088a150: ret  */ FN_RET(0x0088a0fc); r_esp += 4; return;
L_0088a154:; BB(0x0088a154);
    /* 0088a154: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088a157: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0088a159: fmul dword ptr [0x99afd0] */ ST(0) = ST(0) * R_F32((u32)(0x99afd0u));
    /* 0088a15f: fadd dword ptr [0x99afd4] */ ST(0) = ST(0) + R_F32((u32)(0x99afd4u));
    /* 0088a165: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0088a168: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0088a16c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0088a171: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0088a175: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0088a179: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0088a17d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0088a180: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0088a184: cmp eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a189: jg 0x88a193 */ if ((!fZ&&fS==fO)) goto L_0088a193;
L_0088a18b:; BB(0x0088a18b);
    /* 0088a18b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088a18d: jl 0x88a19c */ if ((fS!=fO)) goto L_0088a19c;
L_0088a18f:; BB(0x0088a18f);
    /* 0088a18f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088a192: ret  */ FN_RET(0x0088a0fc); r_esp += 4; return;
L_0088a193:; BB(0x0088a193);
    /* 0088a193: mov eax, 0x3ff */ r_eax = 0x3ffu;
    /* 0088a198: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088a19b: ret  */ FN_RET(0x0088a0fc); r_esp += 4; return;
L_0088a19c:; BB(0x0088a19c);
    /* 0088a19c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088a19e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088a1a1: ret  */ FN_RET(0x0088a0fc); r_esp += 4; return;
}

void f_0088a1a4(void) /* sub_88A1A4 */
{
    FN_ENTER(0x0088a1a4);
    /* 0088a1a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088a1a5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088a1a8: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0088a1ac: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0088a1b0: mov ebx, dword ptr [eax + 0x504] */ r_ebx = R32((u32)(r_eax+0x504u));
    /* 0088a1b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088a1b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a1ba: je 0x88a265 */ if (fZ) goto L_0088a265;
L_0088a1c0:; BB(0x0088a1c0);
    /* 0088a1c0: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0088a1c4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a1c6: je 0x88a265 */ if (fZ) goto L_0088a265;
L_0088a1cc:; BB(0x0088a1cc);
    /* 0088a1cc: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0088a1cf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088a1d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088a1d2: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0088a1d6: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88a1dbu); f_0087421c();
    /* 0088a1db: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088a1de: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088a1e0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088a1e2: jle 0x88a265 */ if ((fZ||fS!=fO)) goto L_0088a265;
L_0088a1e8:; BB(0x0088a1e8);
    /* 0088a1e8: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0088a1ec: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088a1ee: add ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088a1f4: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0088a1f8: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0088a1fc: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0088a200: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0088a204: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0088a207: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
L_0088a20b:; BB(0x0088a20b);
    /* 0088a20b: mov esi, dword ptr [ebp + edx*4] */ r_esi = R32((u32)(r_ebp+r_edx*4));
    /* 0088a20f: and esi, 0x7fff */ {  u32 a = r_esi; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0088a215: mov edi, dword ptr [ecx + edx*4] */ r_edi = R32((u32)(r_ecx+r_edx*4));
    /* 0088a218: imul esi, dword ptr [esp + 0xc] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_esp+0xcu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088a21d: and edi, 0x7fff */ {  u32 a = r_edi; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0088a223: imul edi, dword ptr [esp + 0x28] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_esp+0x28u)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088a228: lea edi, [esi + edi + 0x8000] */ r_edi = (u32)(r_esi+r_edi+0x8000u);
    /* 0088a22f: sar edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0088a232: mov dword ptr [eax + edx*4], edi */ W32((u32)(r_eax+r_edx*4), r_edi);
    /* 0088a235: mov esi, dword ptr [ebp + edx*4] */ r_esi = R32((u32)(r_ebp+r_edx*4));
    /* 0088a239: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088a23a: test esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a240: je 0x88a256 */ if (fZ) goto L_0088a256;
L_0088a242:; BB(0x0088a242);
    /* 0088a242: test dword ptr [ecx + edx*4 - 4], 0x8000 */ {  u32 a = R32((u32)(r_ecx+r_edx*4+0xfffffffcu)); u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a24a: je 0x88a256 */ if (fZ) goto L_0088a256;
L_0088a24c:; BB(0x0088a24c);
    /* 0088a24c: or edi, 0x8000 */ {  u32 a = r_edi; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0088a252: mov dword ptr [eax + edx*4 - 4], edi */ W32((u32)(r_eax+r_edx*4+0xfffffffcu), r_edi);
L_0088a256:; BB(0x0088a256);
    /* 0088a256: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a258: jl 0x88a20b */ if ((fS!=fO)) goto L_0088a20b;
L_0088a25a:; BB(0x0088a25a);
    /* 0088a25a: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0088a25e: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0088a262: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0088a265:; BB(0x0088a265);
    /* 0088a265: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088a268: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088a269: ret  */ FN_RET(0x0088a1a4); r_esp += 4; return;
}

void f_0088a1ad(void)
{
    FN_ENTER(0x0088a1ad);
    /* 0088a1ad: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 0088a1ae: and al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0088a1b0: mov ebx, dword ptr [eax + 0x504] */ r_ebx = R32((u32)(r_eax+0x504u));
    /* 0088a1b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088a1b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a1ba: je 0x88a265 */ if (fZ) goto L_0088a265;
L_0088a1c0:; BB(0x0088a1c0);
    /* 0088a1c0: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0088a1c4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a1c6: je 0x88a265 */ if (fZ) goto L_0088a265;
L_0088a1cc:; BB(0x0088a1cc);
    /* 0088a1cc: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0088a1cf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088a1d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088a1d2: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0088a1d6: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88a1dbu); f_0087421c();
    /* 0088a1db: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088a1de: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088a1e0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088a1e2: jle 0x88a265 */ if ((fZ||fS!=fO)) goto L_0088a265;
L_0088a1e8:; BB(0x0088a1e8);
    /* 0088a1e8: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0088a1ec: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088a1ee: add ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088a1f4: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0088a1f8: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0088a1fc: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0088a200: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0088a204: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0088a207: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
L_0088a20b:; BB(0x0088a20b);
    /* 0088a20b: mov esi, dword ptr [ebp + edx*4] */ r_esi = R32((u32)(r_ebp+r_edx*4));
    /* 0088a20f: and esi, 0x7fff */ {  u32 a = r_esi; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0088a215: mov edi, dword ptr [ecx + edx*4] */ r_edi = R32((u32)(r_ecx+r_edx*4));
    /* 0088a218: imul esi, dword ptr [esp + 0xc] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_esp+0xcu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088a21d: and edi, 0x7fff */ {  u32 a = r_edi; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0088a223: imul edi, dword ptr [esp + 0x28] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_esp+0x28u)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088a228: lea edi, [esi + edi + 0x8000] */ r_edi = (u32)(r_esi+r_edi+0x8000u);
    /* 0088a22f: sar edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0088a232: mov dword ptr [eax + edx*4], edi */ W32((u32)(r_eax+r_edx*4), r_edi);
    /* 0088a235: mov esi, dword ptr [ebp + edx*4] */ r_esi = R32((u32)(r_ebp+r_edx*4));
    /* 0088a239: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088a23a: test esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a240: je 0x88a256 */ if (fZ) goto L_0088a256;
L_0088a242:; BB(0x0088a242);
    /* 0088a242: test dword ptr [ecx + edx*4 - 4], 0x8000 */ {  u32 a = R32((u32)(r_ecx+r_edx*4+0xfffffffcu)); u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a24a: je 0x88a256 */ if (fZ) goto L_0088a256;
L_0088a24c:; BB(0x0088a24c);
    /* 0088a24c: or edi, 0x8000 */ {  u32 a = r_edi; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0088a252: mov dword ptr [eax + edx*4 - 4], edi */ W32((u32)(r_eax+r_edx*4+0xfffffffcu), r_edi);
L_0088a256:; BB(0x0088a256);
    /* 0088a256: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a258: jl 0x88a20b */ if ((fS!=fO)) goto L_0088a20b;
L_0088a25a:; BB(0x0088a25a);
    /* 0088a25a: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0088a25e: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0088a262: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0088a265:; BB(0x0088a265);
    /* 0088a265: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088a268: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088a269: ret  */ FN_RET(0x0088a1ad); r_esp += 4; return;
}

void f_0088a26c(void) /* sub_88A26C */
{
    FN_ENTER(0x0088a26c);
    /* 0088a26c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088a26d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088a26e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088a26f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088a270: sub esp, 0x174 */ {  u32 a = r_esp; u32 b = 0x174u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088a276: mov edx, dword ptr [esp + 0x188] */ r_edx = R32((u32)(r_esp+0x188u));
    /* 0088a27d: mov esi, dword ptr [esp + 0x18c] */ r_esi = R32((u32)(r_esp+0x18cu));
    /* 0088a284: mov ebp, dword ptr [esp + 0x190] */ r_ebp = R32((u32)(r_esp+0x190u));
    /* 0088a28b: mov ebx, dword ptr [esi + 0x510] */ r_ebx = R32((u32)(r_esi+0x510u));
    /* 0088a291: mov eax, dword ptr [esi + 0x504] */ r_eax = R32((u32)(r_esi+0x504u));
    /* 0088a297: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 0088a29a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0088a29d: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 0088a2a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a2a2: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0088a2a6: mov edx, dword ptr [edx + 0xb20] */ r_edx = R32((u32)(r_edx+0xb20u));
    /* 0088a2ac: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0088a2b0: je 0x88a90d */ if (fZ) goto L_0088a90d;
L_0088a2b6:; BB(0x0088a2b6);
    /* 0088a2b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088a2b8: jle 0x88a329 */ if ((fZ||fS!=fO)) goto L_0088a329;
L_0088a2ba:; BB(0x0088a2ba);
    /* 0088a2ba: mov edi, ebp */ r_edi = r_ebp;
    /* 0088a2bc: lea ecx, [ebp + eax*4] */ r_ecx = (u32)(r_ebp+r_eax*4);
    /* 0088a2c0: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
L_0088a2c4:; BB(0x0088a2c4);
    /* 0088a2c4: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 0088a2c6: mov ebp, esi */ r_ebp = r_esi;
    /* 0088a2c8: and ebp, 0x7fff */ {  u32 a = r_ebp; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0088a2ce: mov eax, dword ptr [ebx + 0x340] */ r_eax = R32((u32)(r_ebx+0x340u));
    /* 0088a2d4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a2d7: je 0x88a905 */ if (fZ) goto L_0088a905;
L_0088a2dd:; BB(0x0088a2dd);
    /* 0088a2dd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a2e0: je 0x88a303 */ if (fZ) goto L_0088a303;
L_0088a2e2:; BB(0x0088a2e2);
    /* 0088a2e2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a2e5: jne 0x88a2f9 */ if (!fZ) goto L_0088a2f9;
L_0088a2e7:; BB(0x0088a2e7);
    /* 0088a2e7: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 0088a2ec: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088a2ee: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0088a2f0: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0088a2f3: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088a2f5: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088a2f7: jmp 0x88a306 */ goto L_0088a306;
L_0088a2f9:; BB(0x0088a2f9);
    /* 0088a2f9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a2fc: jne 0x88a306 */ if (!fZ) goto L_0088a306;
L_0088a2fe:; BB(0x0088a2fe);
    /* 0088a2fe: sar ebp, 4 */ { u32 c = (4u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0088a301: jmp 0x88a306 */ goto L_0088a306;
L_0088a303:; BB(0x0088a303);
    /* 0088a303: sar ebp, 3 */ { u32 c = (3u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
L_0088a306:; BB(0x0088a306);
    /* 0088a306: and esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0088a30c: or ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0088a30e: mov dword ptr [edi], ebp */ W32((u32)(r_edi), r_ebp);
    /* 0088a310: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088a313: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088a315: jb 0x88a2c4 */ if (fC) goto L_0088a2c4;
L_0088a317:; BB(0x0088a317);
    /* 0088a317: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0088a31b: mov ebp, dword ptr [esp + 0x190] */ r_ebp = R32((u32)(r_esp+0x190u));
    /* 0088a322: mov esi, dword ptr [esp + 0x18c] */ r_esi = R32((u32)(r_esp+0x18cu));
L_0088a329:; BB(0x0088a329);
    /* 0088a329: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0088a32c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a32f: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0088a333: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0088a336: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0088a33a: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0088a33f: jle 0x88a45c */ if ((fZ||fS!=fO)) goto L_0088a45c;
L_0088a345:; BB(0x0088a345);
    /* 0088a345: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0088a349: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_0088a34c:; BB(0x0088a34c);
    /* 0088a34c: mov eax, dword ptr [esp + 0x18c] */ r_eax = R32((u32)(r_esp+0x18cu));
    /* 0088a353: mov edi, dword ptr [eax + ecx*4 + 0x400] */ r_edi = R32((u32)(r_eax+r_ecx*4+0x400u));
    /* 0088a35a: mov ebx, dword ptr [eax + ecx*4 + 0x304] */ r_ebx = R32((u32)(r_eax+r_ecx*4+0x304u));
    /* 0088a361: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0088a365: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0088a368: mov esi, dword ptr [ebp + ebx*4 + 0x344] */ r_esi = R32((u32)(r_ebp+r_ebx*4+0x344u));
    /* 0088a36f: mov eax, dword ptr [esp + 0x190] */ r_eax = R32((u32)(r_esp+0x190u));
    /* 0088a376: mov edx, dword ptr [eax + edi*4] */ r_edx = R32((u32)(r_eax+r_edi*4));
    /* 0088a379: mov eax, dword ptr [eax + ebx*4] */ r_eax = R32((u32)(r_eax+r_ebx*4));
    /* 0088a37c: mov ebx, dword ptr [ebp + ecx*4 + 0x344] */ r_ebx = R32((u32)(r_ebp+r_ecx*4+0x344u));
    /* 0088a383: and edx, 0x7fff */ {  u32 a = r_edx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0088a389: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088a38e: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0088a392: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088a394: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088a395: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0088a399: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088a39a: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088a39c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088a39e: sub ebx, dword ptr [ebp + edi*4 + 0x344] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_edi*4+0x344u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a3a5: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088a3a8: mov eax, ebx */ r_eax = r_ebx;
    /* 0088a3aa: sub esi, dword ptr [ebp + edi*4 + 0x344] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+r_edi*4+0x344u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088a3b1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088a3b2: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0088a3b2, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088a3b2, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088a3b4: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0088a3b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088a3ba: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0088a3be: jl 0x88a8fe */ if ((fS!=fO)) goto L_0088a8fe;
L_0088a3c4:; BB(0x0088a3c4);
    /* 0088a3c4: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0088a3c6:; BB(0x0088a3c6);
    /* 0088a3c6: mov eax, dword ptr [esp + 0x190] */ r_eax = R32((u32)(r_esp+0x190u));
    /* 0088a3cd: mov ebx, dword ptr [eax + ecx*4 - 4] */ r_ebx = R32((u32)(r_eax+r_ecx*4+0xfffffffcu));
    /* 0088a3d1: test ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a3d7: jne 0x88a426 */ if (!fZ) goto L_0088a426;
L_0088a3d9:; BB(0x0088a3d9);
    /* 0088a3d9: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a3db: je 0x88a426 */ if (fZ) goto L_0088a426;
L_0088a3dd:; BB(0x0088a3dd);
    /* 0088a3dd: mov eax, dword ptr [esp + 0x18c] */ r_eax = R32((u32)(r_esp+0x18cu));
    /* 0088a3e4: mov ebp, dword ptr [eax + 0x50c] */ r_ebp = R32((u32)(r_eax+0x50cu));
    /* 0088a3ea: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088a3ec: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a3ee: jl 0x88a3f2 */ if ((fS!=fO)) goto L_0088a3f2;
L_0088a3f0:; BB(0x0088a3f0);
    /* 0088a3f0: mov ebp, edx */ r_ebp = r_edx;
L_0088a3f2:; BB(0x0088a3f2);
    /* 0088a3f2: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a3f4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088a3f6: jl 0x88a8a1 */ if ((fS!=fO)) goto L_0088a8a1;
L_0088a3fc:; BB(0x0088a3fc);
    /* 0088a3fc: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a3fe: jl 0x88a404 */ if ((fS!=fO)) goto L_0088a404;
L_0088a400:; BB(0x0088a400);
    /* 0088a400: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088a402: jmp 0x88a407 */ goto L_0088a407;
L_0088a404:; BB(0x0088a404);
    /* 0088a404: lea ebp, [ebx + ebx] */ r_ebp = (u32)(r_ebx+r_ebx);
L_0088a407:; BB(0x0088a407);
    /* 0088a407: mov dword ptr [esp + ecx*4 + 0x2c], ebp */ W32((u32)(r_esp+r_ecx*4+0x2cu), r_ebp);
    /* 0088a40b: mov eax, dword ptr [esp + 0x190] */ r_eax = R32((u32)(r_esp+0x190u));
    /* 0088a412: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0088a416: and dword ptr [eax + edi*4], 0x7fff */ { u32 ad = (u32)(r_eax+r_edi*4);  u32 a = R32(ad); u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0088a41d: and dword ptr [eax + edx*4], 0x7fff */ { u32 ad = (u32)(r_eax+r_edx*4);  u32 a = R32(ad); u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0088a424: jmp 0x88a43f */ goto L_0088a43f;
L_0088a426:; BB(0x0088a426);
    /* 0088a426: or edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0088a42c: mov eax, dword ptr [esp + 0x190] */ r_eax = R32((u32)(r_esp+0x190u));
    /* 0088a433: mov dword ptr [eax + ecx*4 - 4], edx */ W32((u32)(r_eax+r_ecx*4+0xfffffffcu), r_edx);
    /* 0088a437: mov dword ptr [esp + ecx*4 + 0x2c], 0 */ W32((u32)(r_esp+r_ecx*4+0x2cu), 0x0u);
L_0088a43f:; BB(0x0088a43f);
    /* 0088a43f: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0088a443: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a445: jl 0x88a34c */ if ((fS!=fO)) goto L_0088a34c;
L_0088a44b:; BB(0x0088a44b);
    /* 0088a44b: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0088a44e: mov ebp, dword ptr [esp + 0x190] */ r_ebp = R32((u32)(r_esp+0x190u));
    /* 0088a455: mov esi, dword ptr [esp + 0x18c] */ r_esi = R32((u32)(r_esp+0x18cu));
L_0088a45c:; BB(0x0088a45c);
    /* 0088a45c: mov edi, dword ptr [esp + 0x188] */ r_edi = R32((u32)(r_esp+0x188u));
    /* 0088a463: lea edi, [edi + 4] */ r_edi = (u32)(r_edi+0x4u);
    /* 0088a466: mov eax, 1 */ r_eax = 0x1u;
    /* 0088a46b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088a46c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088a46d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088a46e: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88a473u); f_008779d8();
    /* 0088a473: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088a476: inc dword ptr [esi + 0x51c] */ { u32 ad = (u32)(r_esi+0x51cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088a47c: mov eax, dword ptr [esi + 0x50c] */ r_eax = R32((u32)(r_esi+0x50cu));
    /* 0088a482: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0088a483: mov edx, eax */ r_edx = r_eax;
    /* 0088a485: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0088a48a: je 0x88a493 */ if (fZ) goto L_0088a493;
L_0088a48c:; BB(0x0088a48c);
    /* 0088a48c: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088a48d: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0088a48f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a491: jne 0x88a48c */ if (!fZ) goto L_0088a48c;
L_0088a493:; BB(0x0088a493);
    /* 0088a493: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088a495: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088a497: add dword ptr [esi + 0x518], ecx */ { u32 ad = (u32)(r_esi+0x518u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088a49d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a49f: je 0x88a4a8 */ if (fZ) goto L_0088a4a8;
L_0088a4a1:; BB(0x0088a4a1);
    /* 0088a4a1: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088a4a2: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0088a4a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a4a6: jne 0x88a4a1 */ if (!fZ) goto L_0088a4a1;
L_0088a4a8:; BB(0x0088a4a8);
    /* 0088a4a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088a4a9: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088a4ad: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088a4ae: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88a4b3u); f_008779d8();
    /* 0088a4b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088a4b6: mov eax, dword ptr [esi + 0x50c] */ r_eax = R32((u32)(r_esi+0x50cu));
    /* 0088a4bc: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0088a4bd: mov edx, 0 */ r_edx = 0x0u;
    /* 0088a4c2: je 0x88a4cb */ if (fZ) goto L_0088a4cb;
L_0088a4c4:; BB(0x0088a4c4);
    /* 0088a4c4: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088a4c5: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0088a4c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a4c9: jne 0x88a4c4 */ if (!fZ) goto L_0088a4c4;
L_0088a4cb:; BB(0x0088a4cb);
    /* 0088a4cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088a4cc: push dword ptr [esp + 0x38] */ { u32 v = R32((u32)(r_esp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088a4d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088a4d1: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88a4d6u); f_008779d8();
    /* 0088a4d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088a4d9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088a4db: mov eax, 2 */ r_eax = 0x2u;
    /* 0088a4e0: cmp dword ptr [ebx], 0 */ {  u32 a = R32((u32)(r_ebx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a4e3: jle 0x88a720 */ if ((fZ||fS!=fO)) goto L_0088a720;
L_0088a4e9:; BB(0x0088a4e9);
    /* 0088a4e9: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0088a4ed: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0088a4f1: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0088a4f4: mov edi, eax */ r_edi = r_eax;
L_0088a4f6:; BB(0x0088a4f6);
    /* 0088a4f6: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0088a4f9: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 0088a4fd: mov ebp, dword ptr [edx + ebp*4 + 4] */ r_ebp = R32((u32)(r_edx+r_ebp*4+0x4u));
    /* 0088a501: mov esi, dword ptr [edx + ebp*4 + 0x80] */ r_esi = R32((u32)(r_edx+r_ebp*4+0x80u));
    /* 0088a508: mov ecx, dword ptr [edx + ebp*4 + 0xc0] */ r_ecx = R32((u32)(r_edx+r_ebp*4+0xc0u));
    /* 0088a50f: mov eax, 1 */ r_eax = 0x1u;
    /* 0088a514: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a516: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0088a518: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0088a51a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a51c: mov dword ptr [esp + 0x134], ebx */ W32((u32)(r_esp+0x134u), r_ebx);
    /* 0088a523: mov dword ptr [esp + 0x138], ebx */ W32((u32)(r_esp+0x138u), r_ebx);
    /* 0088a52a: mov dword ptr [esp + 0x13c], ebx */ W32((u32)(r_esp+0x13cu), r_ebx);
    /* 0088a531: mov dword ptr [esp + 0x140], ebx */ W32((u32)(r_esp+0x140u), r_ebx);
    /* 0088a538: mov dword ptr [esp + 0x144], ebx */ W32((u32)(r_esp+0x144u), r_ebx);
    /* 0088a53f: mov dword ptr [esp + 0x148], ebx */ W32((u32)(r_esp+0x148u), r_ebx);
    /* 0088a546: mov dword ptr [esp + 0x14c], ebx */ W32((u32)(r_esp+0x14cu), r_ebx);
    /* 0088a54d: mov dword ptr [esp + 0x150], ebx */ W32((u32)(r_esp+0x150u), r_ebx);
    /* 0088a554: mov ebx, 0 */ r_ebx = 0x0u;
    /* 0088a559: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 0088a55d: je 0x88a67d */ if (fZ) goto L_0088a67d;
L_0088a563:; BB(0x0088a563);
    /* 0088a563: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a565: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088a567: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0088a56b: jle 0x88a8e5 */ if ((fZ||fS!=fO)) goto L_0088a8e5;
L_0088a571:; BB(0x0088a571);
    /* 0088a571: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 0088a575: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a577: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a579: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a57b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a57d: add ebx, dword ptr [esp] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a580: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0088a584: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0088a588: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0088a58a: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0088a58e: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0088a592: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0088a596: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
L_0088a59a:; BB(0x0088a59a);
    /* 0088a59a: mov edi, dword ptr [ecx + ebx*4 + 0x140] */ r_edi = R32((u32)(r_ecx+r_ebx*4+0x140u));
    /* 0088a5a1: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a5a2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088a5a4: jl 0x88a8d5 */ if ((fS!=fO)) goto L_0088a8d5;
L_0088a5aa:; BB(0x0088a5aa);
    /* 0088a5aa: mov edi, dword ptr [esi + edi*4 + 0x720] */ r_edi = R32((u32)(r_esi+r_edi*4+0x720u));
    /* 0088a5b1: mov edi, dword ptr [edi + 4] */ r_edi = R32((u32)(r_edi+0x4u));
    /* 0088a5b4: mov dword ptr [esp + ebx*4 + 0x150], edi */ W32((u32)(r_esp+r_ebx*4+0x150u), r_edi);
L_0088a5bb:; BB(0x0088a5bb);
    /* 0088a5bb: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a5bd: jl 0x88a59a */ if ((fS!=fO)) goto L_0088a59a;
L_0088a5bf:; BB(0x0088a5bf);
    /* 0088a5bf: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0088a5c3: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0088a5c7: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0088a5cb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088a5cd: jle 0x88a642 */ if ((fZ||fS!=fO)) goto L_0088a642;
L_0088a5cf:; BB(0x0088a5cf);
    /* 0088a5cf: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a5d1: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0088a5d5: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 0088a5d8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a5da: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0088a5de: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0088a5e2: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0088a5e6: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0088a5ea: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0088a5ee: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0088a5f2: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
L_0088a5f6:; BB(0x0088a5f6);
    /* 0088a5f6: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0088a5f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; fC = 0; }
    /* 0088a5fa: jle 0x88a8c9 */ if ((fZ||fS!=fO)) goto L_0088a8c9;
L_0088a600:; BB(0x0088a600);
    /* 0088a600: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0088a603: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 0088a606: add edi, dword ptr [esp + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088a60a: mov edi, dword ptr [esp + edi + 0x30] */ r_edi = R32((u32)(r_esp+r_edi+0x30u));
L_0088a60e:; BB(0x0088a60e);
    /* 0088a60e: cmp edi, dword ptr [esp + ebp*4 + 0x154] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+r_ebp*4+0x154u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088a615: jl 0x88a8bd */ if ((fS!=fO)) goto L_0088a8bd;
L_0088a61b:; BB(0x0088a61b);
    /* 0088a61b: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088a61c: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088a61e: jl 0x88a60e */ if ((fS!=fO)) goto L_0088a60e;
L_0088a620:; BB(0x0088a620);
    /* 0088a620: mov ebp, dword ptr [esp + ebx*2 + 0x134] */ r_ebp = R32((u32)(r_esp+r_ebx*2+0x134u));
L_0088a627:; BB(0x0088a627);
    /* 0088a627: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0088a628: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0088a62c: shl ebp, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0088a62e: or edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0088a630: add ecx, dword ptr [esp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088a634: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a636: jl 0x88a5f6 */ if ((fS!=fO)) goto L_0088a5f6;
L_0088a638:; BB(0x0088a638);
    /* 0088a638: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0088a63c: mov esi, ebx */ r_esi = r_ebx;
    /* 0088a63e: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
L_0088a642:; BB(0x0088a642);
    /* 0088a642: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0088a645: mov ebx, dword ptr [ecx + ebp*4 + 0x100] */ r_ebx = R32((u32)(r_ecx+r_ebp*4+0x100u));
    /* 0088a64c: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0088a64f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088a651: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088a653: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088a655: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088a657: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088a659: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088a65b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088a65d: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0088a661: add eax, dword ptr [esp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088a665: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088a666: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088a667: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088a668: call 0x885fd4 */ r_esp -= 4; W32(r_esp, 0x88a66du); f_00885fd4();
    /* 0088a66d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088a670: mov edx, dword ptr [esp + 0x18c] */ r_edx = R32((u32)(r_esp+0x18cu));
    /* 0088a677: add dword ptr [edx + 0x514], eax */ { u32 ad = (u32)(r_edx+0x514u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0088a67d:; BB(0x0088a67d);
    /* 0088a67d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088a67f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088a681: jle 0x88a6fa */ if ((fZ||fS!=fO)) goto L_0088a6fa;
L_0088a683:; BB(0x0088a683);
    /* 0088a683: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0088a686: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088a688: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088a68a: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088a68c: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088a68e: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088a690: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088a692: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 0088a695: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a697: add ebp, dword ptr [esp] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088a69a: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a69c: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0088a6a0: mov edi, eax */ r_edi = r_eax;
L_0088a6a2:; BB(0x0088a6a2);
    /* 0088a6a2: mov edx, dword ptr [esp + edi*4 + 0x134] */ r_edx = R32((u32)(r_esp+r_edi*4+0x134u));
    /* 0088a6a9: mov ecx, dword ptr [ebp + edx*4 + 0x140] */ r_ecx = R32((u32)(r_ebp+r_edx*4+0x140u));
    /* 0088a6b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088a6b2: jl 0x88a6ee */ if ((fS!=fO)) goto L_0088a6ee;
L_0088a6b4:; BB(0x0088a6b4);
    /* 0088a6b4: mov eax, dword ptr [esp + ebx + 0x30] */ r_eax = R32((u32)(r_esp+r_ebx+0x30u));
    /* 0088a6b8: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0088a6bb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088a6bd: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088a6bf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088a6c1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088a6c3: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088a6c5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088a6c7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088a6c9: add edx, dword ptr [esp + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088a6cd: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a6d0: jge 0x88a6ee */ if ((fS==fO)) goto L_0088a6ee;
L_0088a6d2:; BB(0x0088a6d2);
    /* 0088a6d2: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0088a6d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088a6d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088a6d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088a6d9: call 0x885fd4 */ r_esp -= 4; W32(r_esp, 0x88a6deu); f_00885fd4();
    /* 0088a6de: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088a6e1: mov edx, dword ptr [esp + 0x18c] */ r_edx = R32((u32)(r_esp+0x18cu));
    /* 0088a6e8: add dword ptr [edx + 0x518], eax */ { u32 ad = (u32)(r_edx+0x518u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0088a6ee:; BB(0x0088a6ee);
    /* 0088a6ee: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a6f1: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088a6f2: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a6f4: jl 0x88a6a2 */ if ((fS!=fO)) goto L_0088a6a2;
L_0088a6f6:; BB(0x0088a6f6);
    /* 0088a6f6: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
L_0088a6fa:; BB(0x0088a6fa);
    /* 0088a6fa: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088a6fc: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0088a700: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088a701: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0088a705: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0088a708: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a70a: jl 0x88a4f6 */ if ((fS!=fO)) goto L_0088a4f6;
L_0088a710:; BB(0x0088a710);
    /* 0088a710: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0088a712: mov ebp, dword ptr [esp + 0x190] */ r_ebp = R32((u32)(r_esp+0x190u));
    /* 0088a719: mov esi, dword ptr [esp + 0x18c] */ r_esi = R32((u32)(r_esp+0x18cu));
L_0088a720:; BB(0x0088a720);
    /* 0088a720: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0088a722: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088a724: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0088a727: imul edx, dword ptr [ebx + 0x340] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebx+0x340u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088a72e: mov eax, 1 */ r_eax = 0x1u;
    /* 0088a733: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0088a737: mov eax, dword ptr [esi + 0x504] */ r_eax = R32((u32)(r_esi+0x504u));
    /* 0088a73d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a740: jle 0x88a852 */ if ((fZ||fS!=fO)) goto L_0088a852;
L_0088a746:; BB(0x0088a746);
    /* 0088a746: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0088a74a: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0088a74e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_0088a751:; BB(0x0088a751);
    /* 0088a751: mov esi, dword ptr [esp + 0x18c] */ r_esi = R32((u32)(r_esp+0x18cu));
    /* 0088a758: mov esi, dword ptr [esi + ebp*4 + 0x104] */ r_esi = R32((u32)(r_esi+r_ebp*4+0x104u));
    /* 0088a75f: mov edx, dword ptr [esp + 0x190] */ r_edx = R32((u32)(r_esp+0x190u));
    /* 0088a766: mov ebx, dword ptr [edx + esi*4] */ r_ebx = R32((u32)(r_edx+r_esi*4));
    /* 0088a769: mov edx, ebx */ r_edx = r_ebx;
    /* 0088a76b: and edx, 0x7fff */ {  u32 a = r_edx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0088a771: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a773: jne 0x88a845 */ if (!fZ) goto L_0088a845;
L_0088a779:; BB(0x0088a779);
    /* 0088a779: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0088a77c: mov ebx, dword ptr [edi + 0x340] */ r_ebx = R32((u32)(r_edi+0x340u));
    /* 0088a782: imul ebx, edx */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_edx; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088a785: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0088a789: mov edi, dword ptr [edi + esi*4 + 0x344] */ r_edi = R32((u32)(r_edi+r_esi*4+0x344u));
    /* 0088a790: sub ebx, dword ptr [esp + 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a794: mov esi, edi */ r_esi = r_edi;
    /* 0088a796: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088a798: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0088a79c: mov eax, ebx */ r_eax = r_ebx;
    /* 0088a79e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088a79f: mov eax, ebx */ r_eax = r_ebx;
    /* 0088a7a1: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088a7a3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088a7a5: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0088a7a9: mov eax, ebx */ r_eax = r_ebx;
    /* 0088a7ab: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088a7ac: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0088a7ac, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088a7ac, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088a7ae: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0088a7b2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088a7b4: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0088a7b8: jl 0x88a8f2 */ if ((fS!=fO)) goto L_0088a8f2;
L_0088a7be:; BB(0x0088a7be);
    /* 0088a7be: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0088a7c1: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
L_0088a7c5:; BB(0x0088a7c5);
    /* 0088a7c5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088a7c7: imul eax, dword ptr [esp + 0x20] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x20u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088a7cc: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0088a7d0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088a7d1: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088a7d3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088a7d5: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a7d7: mov edx, dword ptr [esp + 0x194] */ r_edx = R32((u32)(r_esp+0x194u));
    /* 0088a7de: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0088a7e2: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 0088a7e5: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088a7e6: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a7e8: jge 0x88a82e */ if ((fS==fO)) goto L_0088a82e;
L_0088a7ea:; BB(0x0088a7ea);
    /* 0088a7ea: mov eax, dword ptr [esp + 0x194] */ r_eax = R32((u32)(r_esp+0x194u));
    /* 0088a7f1: lea edx, [eax + ecx*4] */ r_edx = (u32)(r_eax+r_ecx*4);
    /* 0088a7f4: lea eax, [eax + edi*4] */ r_eax = (u32)(r_eax+r_edi*4);
    /* 0088a7f7: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0088a7fb: mov ecx, esi */ r_ecx = r_esi;
    /* 0088a7fd: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0088a801: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0088a805: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0088a809: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
L_0088a80d:; BB(0x0088a80d);
    /* 0088a80d: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088a80f: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a811: jl 0x88a819 */ if ((fS!=fO)) goto L_0088a819;
L_0088a813:; BB(0x0088a813);
    /* 0088a813: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088a815: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088a817: jmp 0x88a81d */ goto L_0088a81d;
L_0088a819:; BB(0x0088a819);
    /* 0088a819: add edi, dword ptr [esp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0088a81d:; BB(0x0088a81d);
    /* 0088a81d: mov dword ptr [edx], edi */ W32((u32)(r_edx), r_edi);
    /* 0088a81f: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088a822: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088a824: jb 0x88a80d */ if (fC) goto L_0088a80d;
L_0088a826:; BB(0x0088a826);
    /* 0088a826: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0088a82a: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_0088a82e:; BB(0x0088a82e);
    /* 0088a82e: mov ecx, edi */ r_ecx = r_edi;
    /* 0088a830: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0088a834: mov edx, dword ptr [esp + 0x18c] */ r_edx = R32((u32)(r_esp+0x18cu));
    /* 0088a83b: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0088a83f: mov eax, dword ptr [edx + 0x504] */ r_eax = R32((u32)(r_edx+0x504u));
L_0088a845:; BB(0x0088a845);
    /* 0088a845: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088a846: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a848: jl 0x88a751 */ if ((fS!=fO)) goto L_0088a751;
L_0088a84e:; BB(0x0088a84e);
    /* 0088a84e: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
L_0088a852:; BB(0x0088a852);
    /* 0088a852: mov eax, dword ptr [esp + 0x188] */ r_eax = R32((u32)(r_esp+0x188u));
    /* 0088a859: mov ebx, dword ptr [eax + 0x24] */ r_ebx = R32((u32)(r_eax+0x24u));
    /* 0088a85c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0088a85e: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0088a861: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a863: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0088a865: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a867: jge 0x88a88b */ if ((fS==fO)) goto L_0088a88b;
L_0088a869:; BB(0x0088a869);
    /* 0088a869: mov ecx, dword ptr [esp + 0x194] */ r_ecx = R32((u32)(r_esp+0x194u));
    /* 0088a870: mov ebx, dword ptr [esp + 0x188] */ r_ebx = R32((u32)(r_esp+0x188u));
L_0088a877:; BB(0x0088a877);
    /* 0088a877: mov dword ptr [ecx + edi*4], edx */ W32((u32)(r_ecx+r_edi*4), r_edx);
    /* 0088a87a: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088a87b: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
    /* 0088a87e: mov eax, ebp */ r_eax = r_ebp;
    /* 0088a880: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0088a883: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088a885: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0088a887: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a889: jl 0x88a877 */ if ((fS!=fO)) goto L_0088a877;
L_0088a88b:; BB(0x0088a88b);
    /* 0088a88b: inc dword ptr [0xae9740] */ { u32 ad = (u32)(0xae9740u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088a891: mov eax, 1 */ r_eax = 0x1u;
    /* 0088a896: add esp, 0x174 */ {  u32 a = r_esp; u32 b = 0x174u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088a89c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088a89d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088a89e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088a89f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088a8a0: ret  */ FN_RET(0x0088a26c); r_esp += 4; return;
L_0088a8a1:; BB(0x0088a8a1);
    /* 0088a8a1: mov eax, ebp */ r_eax = r_ebp;
    /* 0088a8a3: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088a8a5: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088a8a7: jge 0x88a8b1 */ if ((fS==fO)) goto L_0088a8b1;
L_0088a8a9:; BB(0x0088a8a9);
    /* 0088a8a9: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088a8ab: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088a8ac: jmp 0x88a407 */ goto L_0088a407;
L_0088a8b1:; BB(0x0088a8b1);
    /* 0088a8b1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a8b3: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0088a8b5: lea ebp, [ebx - 1] */ r_ebp = (u32)(r_ebx+0xffffffffu);
    /* 0088a8b8: jmp 0x88a407 */ goto L_0088a407;
L_0088a8bd:; BB(0x0088a8bd);
    /* 0088a8bd: mov dword ptr [esp + ebx*2 + 0x134], ebp */ W32((u32)(r_esp+r_ebx*2+0x134u), r_ebp);
    /* 0088a8c4: jmp 0x88a627 */ goto L_0088a627;
L_0088a8c9:; BB(0x0088a8c9);
    /* 0088a8c9: mov ebp, dword ptr [esp + esi*4 + 0x134] */ r_ebp = R32((u32)(r_esp+r_esi*4+0x134u));
    /* 0088a8d0: jmp 0x88a627 */ goto L_0088a627;
L_0088a8d5:; BB(0x0088a8d5);
    /* 0088a8d5: mov dword ptr [esp + ebx*4 + 0x150], 1 */ W32((u32)(r_esp+r_ebx*4+0x150u), 0x1u);
    /* 0088a8e0: jmp 0x88a5bb */ goto L_0088a5bb;
L_0088a8e5:; BB(0x0088a8e5);
    /* 0088a8e5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088a8e7: jg 0x88a5cf */ if ((!fZ&&fS==fO)) goto L_0088a5cf;
L_0088a8ed:; BB(0x0088a8ed);
    /* 0088a8ed: jmp 0x88a642 */ goto L_0088a642;
L_0088a8f2:; BB(0x0088a8f2);
    /* 0088a8f2: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 0088a8f5: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0088a8f9: jmp 0x88a7c5 */ goto L_0088a7c5;
L_0088a8fe:; BB(0x0088a8fe);
    /* 0088a8fe: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088a900: jmp 0x88a3c6 */ goto L_0088a3c6;
L_0088a905:; BB(0x0088a905);
    /* 0088a905: sar ebp, 2 */ { u32 c = (2u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0088a908: jmp 0x88a306 */ goto L_0088a306;
L_0088a90d:; BB(0x0088a90d);
    /* 0088a90d: mov eax, dword ptr [esp + 0x188] */ r_eax = R32((u32)(r_esp+0x188u));
    /* 0088a914: lea edx, [eax + 4] */ r_edx = (u32)(r_eax+0x4u);
    /* 0088a917: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088a919: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088a91b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088a91c: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88a921u); f_008779d8();
    /* 0088a921: mov eax, dword ptr [esp + 0x194] */ r_eax = R32((u32)(r_esp+0x194u));
    /* 0088a928: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0088a92b: mov edx, ecx */ r_edx = r_ecx;
    /* 0088a92d: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0088a930: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088a932: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0088a934: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088a936: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088a938: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088a939: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088a93b: mov ebx, dword ptr [esp + 0x1a8] */ r_ebx = R32((u32)(r_esp+0x1a8u));
    /* 0088a942: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088a943: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x88a948u); f_0086b688();
    /* 0088a948: inc dword ptr [0xae9740] */ { u32 ad = (u32)(0xae9740u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088a94e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088a950: add esp, 0x18c */ {  u32 a = r_esp; u32 b = 0x18cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088a956: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088a957: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088a958: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088a959: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088a95a: ret  */ FN_RET(0x0088a26c); r_esp += 4; return;
}

void f_0088a95c(void) /* sub_88A95C */
{
    FN_ENTER(0x0088a95c);
    /* 0088a95c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088a95d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088a95e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088a95f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088a960: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088a963: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 0088a967: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0088a96b: mov ebx, dword ptr [eax + 0x510] */ r_ebx = R32((u32)(r_eax+0x510u));
    /* 0088a971: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 0088a974: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0088a977: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0088a97a: mov edi, dword ptr [eax + 0xb20] */ r_edi = R32((u32)(r_eax+0xb20u));
    /* 0088a980: lea esi, [ebp + 4] */ r_esi = (u32)(r_ebp+0x4u);
    /* 0088a983: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088a985: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088a986: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88a98bu); f_00877c98();
    /* 0088a98b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088a98e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a991: je 0x88a99d */ if (fZ) goto L_0088a99d;
L_0088a993:; BB(0x0088a993);
    /* 0088a993: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088a995: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088a998: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088a999: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088a99a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088a99b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088a99c: ret  */ FN_RET(0x0088a95c); r_esp += 4; return;
L_0088a99d:; BB(0x0088a99d);
    /* 0088a99d: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0088a9a1: mov edx, dword ptr [eax + 0x504] */ r_edx = R32((u32)(r_eax+0x504u));
    /* 0088a9a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088a9a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088a9ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088a9ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088a9ad: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88a9b2u); f_0087421c();
    /* 0088a9b2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0088a9b6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088a9b9: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0088a9bd: mov eax, dword ptr [eax + 0x50c] */ r_eax = R32((u32)(r_eax+0x50cu));
    /* 0088a9c3: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0088a9c4: mov edx, 0 */ r_edx = 0x0u;
    /* 0088a9c9: je 0x88a9d2 */ if (fZ) goto L_0088a9d2;
L_0088a9cb:; BB(0x0088a9cb);
    /* 0088a9cb: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088a9cc: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0088a9ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a9d0: jne 0x88a9cb */ if (!fZ) goto L_0088a9cb;
L_0088a9d2:; BB(0x0088a9d2);
    /* 0088a9d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088a9d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088a9d4: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88a9d9u); f_00877c98();
    /* 0088a9d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088a9dc: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0088a9df: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0088a9e1: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0088a9e5: mov eax, dword ptr [eax + 0x50c] */ r_eax = R32((u32)(r_eax+0x50cu));
    /* 0088a9eb: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0088a9ec: mov edx, 0 */ r_edx = 0x0u;
    /* 0088a9f1: je 0x88a9fa */ if (fZ) goto L_0088a9fa;
L_0088a9f3:; BB(0x0088a9f3);
    /* 0088a9f3: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088a9f4: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0088a9f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088a9f8: jne 0x88a9f3 */ if (!fZ) goto L_0088a9f3;
L_0088a9fa:; BB(0x0088a9fa);
    /* 0088a9fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088a9fb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088a9fc: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88aa01u); f_00877c98();
    /* 0088aa01: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088aa04: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0088aa07: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0088aa0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088aa0c: mov edx, 2 */ r_edx = 0x2u;
    /* 0088aa11: cmp dword ptr [ebx], 0 */ {  u32 a = R32((u32)(r_ebx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088aa14: jle 0x88ab3a */ if ((fZ||fS!=fO)) goto L_0088ab3a;
L_0088aa1a:; BB(0x0088aa1a);
    /* 0088aa1a: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0088aa1e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0088aa22: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0088aa26: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0088aa2a: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
L_0088aa2e:; BB(0x0088aa2e);
    /* 0088aa2e: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0088aa32: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0088aa36: mov esi, dword ptr [eax + ebp*4 + 4] */ r_esi = R32((u32)(r_eax+r_ebp*4+0x4u));
    /* 0088aa3a: mov ebp, dword ptr [eax + esi*4 + 0x80] */ r_ebp = R32((u32)(r_eax+r_esi*4+0x80u));
    /* 0088aa41: mov ebx, dword ptr [eax + esi*4 + 0xc0] */ r_ebx = R32((u32)(r_eax+r_esi*4+0xc0u));
    /* 0088aa48: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0088aa4a: mov edi, 1 */ r_edi = 0x1u;
    /* 0088aa4f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0088aa51: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0088aa53: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088aa55: je 0x88aa8c */ if (fZ) goto L_0088aa8c;
L_0088aa57:; BB(0x0088aa57);
    /* 0088aa57: mov edx, dword ptr [eax + esi*4 + 0x100] */ r_edx = R32((u32)(r_eax+r_esi*4+0x100u));
    /* 0088aa5e: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0088aa61: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aa63: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aa65: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aa67: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aa69: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aa6b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aa6d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aa6f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0088aa73: add ecx, dword ptr [esp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aa77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088aa78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088aa79: call 0x88600c */ r_esp -= 4; W32(r_esp, 0x88aa7eu); f_0088600c();
    /* 0088aa7e: mov edx, eax */ r_edx = r_eax;
    /* 0088aa80: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088aa83: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088aa86: je 0x88a993 */ if (fZ) goto L_0088a993;
L_0088aa8c:; BB(0x0088aa8c);
    /* 0088aa8c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088aa8e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088aa90: jle 0x88ab1f */ if ((fZ||fS!=fO)) goto L_0088ab1f;
L_0088aa96:; BB(0x0088aa96);
    /* 0088aa96: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088aa98: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088aa9a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088aa9c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088aa9e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088aaa0: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0088aaa1: add esi, dword ptr [esp + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088aaa5: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0088aaa9: lea ecx, [ecx + ecx] */ r_ecx = (u32)(r_ecx+r_ecx);
    /* 0088aaac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aaae: add ecx, dword ptr [esp] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aab1: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0088aab5: mov edi, edx */ r_edi = r_edx;
    /* 0088aab7: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0088aabb: mov ebx, eax */ r_ebx = r_eax;
    /* 0088aabd: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0088aac1: mov ebp, ecx */ r_ebp = r_ecx;
L_0088aac3:; BB(0x0088aac3);
    /* 0088aac3: mov eax, edi */ r_eax = r_edi;
    /* 0088aac5: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0088aac9: and eax, dword ptr [esp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a & b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0088aacd: mov edx, dword ptr [esi + eax*4 + 0x140] */ r_edx = R32((u32)(r_esi+r_eax*4+0x140u));
    /* 0088aad4: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0088aad5: sar edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0088aad7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088aad9: jl 0x88ab0d */ if ((fS!=fO)) goto L_0088ab0d;
L_0088aadb:; BB(0x0088aadb);
    /* 0088aadb: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0088aade: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aae0: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aae2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aae4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aae6: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aae8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aaea: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aaec: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0088aaf0: add ecx, dword ptr [esp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aaf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088aaf5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088aaf6: call 0x88600c */ r_esp -= 4; W32(r_esp, 0x88aafbu); f_0088600c();
    /* 0088aafb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088aafe: mov dword ptr [ebp + ebx*4 - 4], eax */ W32((u32)(r_ebp+r_ebx*4+0xfffffffcu), r_eax);
    /* 0088ab02: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088ab05: je 0x88a993 */ if (fZ) goto L_0088a993;
L_0088ab0b:; BB(0x0088ab0b);
    /* 0088ab0b: jmp 0x88ab15 */ goto L_0088ab15;
L_0088ab0d:; BB(0x0088ab0d);
    /* 0088ab0d: mov dword ptr [ebp + ebx*4 - 4], 0 */ W32((u32)(r_ebp+r_ebx*4+0xfffffffcu), 0x0u);
L_0088ab15:; BB(0x0088ab15);
    /* 0088ab15: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0088ab19: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ab1b: jl 0x88aac3 */ if ((fS!=fO)) goto L_0088aac3;
L_0088ab1d:; BB(0x0088ab1d);
    /* 0088ab1d: mov ebp, eax */ r_ebp = r_eax;
L_0088ab1f:; BB(0x0088ab1f);
    /* 0088ab1f: add dword ptr [esp + 0x14], ebp */ { u32 ad = (u32)(r_esp+0x14u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0088ab23: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0088ab27: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088ab28: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0088ab2c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0088ab30: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ab32: jl 0x88aa2e */ if ((fS!=fO)) goto L_0088aa2e;
L_0088ab38:; BB(0x0088ab38);
    /* 0088ab38: mov ebx, edx */ r_ebx = r_edx;
L_0088ab3a:; BB(0x0088ab3a);
    /* 0088ab3a: mov edx, 2 */ r_edx = 0x2u;
    /* 0088ab3f: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0088ab43: mov ecx, dword ptr [eax + 0x504] */ r_ecx = R32((u32)(r_eax+0x504u));
    /* 0088ab49: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ab4c: jle 0x88ac53 */ if ((fZ||fS!=fO)) goto L_0088ac53;
L_0088ab52:; BB(0x0088ab52);
    /* 0088ab52: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
L_0088ab56:; BB(0x0088ab56);
    /* 0088ab56: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0088ab5a: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0088ab5e: mov ebx, dword ptr [eax + edx*4 + 0x400] */ r_ebx = R32((u32)(r_eax+r_edx*4+0x400u));
    /* 0088ab65: mov edi, dword ptr [eax + edx*4 + 0x304] */ r_edi = R32((u32)(r_eax+r_edx*4+0x304u));
    /* 0088ab6c: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0088ab70: mov esi, dword ptr [ecx + edi*4 + 0x344] */ r_esi = R32((u32)(r_ecx+r_edi*4+0x344u));
    /* 0088ab77: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0088ab7a: mov eax, dword ptr [ebp + ebx*4] */ r_eax = R32((u32)(r_ebp+r_ebx*4));
    /* 0088ab7e: mov ebp, dword ptr [ebp + edi*4] */ r_ebp = R32((u32)(r_ebp+r_edi*4));
    /* 0088ab82: mov edi, dword ptr [ecx + edx*4 + 0x344] */ r_edi = R32((u32)(r_ecx+r_edx*4+0x344u));
    /* 0088ab89: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088ab8e: and ebp, 0x7fff */ {  u32 a = r_ebp; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0088ab94: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0088ab98: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088ab9a: mov eax, ebp */ r_eax = r_ebp;
    /* 0088ab9c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088ab9d: mov eax, ebp */ r_eax = r_ebp;
    /* 0088ab9f: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088aba1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088aba3: sub edi, dword ptr [ecx + ebx*4 + 0x344] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+r_ebx*4+0x344u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0088abaa: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088abad: mov eax, edi */ r_eax = r_edi;
    /* 0088abaf: sub esi, dword ptr [ecx + ebx*4 + 0x344] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+r_ebx*4+0x344u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088abb6: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0088abba: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088abbb: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0088abbb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088abbb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088abbd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088abbf: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0088abc3: jl 0x88ac5e */ if ((fS!=fO)) goto L_0088ac5e;
L_0088abc9:; BB(0x0088abc9);
    /* 0088abc9: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0088abcb:; BB(0x0088abcb);
    /* 0088abcb: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0088abcf: mov ebp, dword ptr [eax + 0x50c] */ r_ebp = R32((u32)(r_eax+0x50cu));
    /* 0088abd5: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088abd7: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088abd9: mov eax, ecx */ r_eax = r_ecx;
    /* 0088abdb: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0088abde: jge 0x88abe2 */ if ((fS==fO)) goto L_0088abe2;
L_0088abe0:; BB(0x0088abe0);
    /* 0088abe0: mov eax, ebp */ r_eax = r_ebp;
L_0088abe2:; BB(0x0088abe2);
    /* 0088abe2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088abe4: mov ebx, dword ptr [ebx + edx*4] */ r_ebx = R32((u32)(r_ebx+r_edx*4));
    /* 0088abe7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088abe9: je 0x88ac36 */ if (fZ) goto L_0088ac36;
L_0088abeb:; BB(0x0088abeb);
    /* 0088abeb: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088abed: jl 0x88abfe */ if ((fS!=fO)) goto L_0088abfe;
L_0088abef:; BB(0x0088abef);
    /* 0088abef: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088abf1: jle 0x88abf7 */ if ((fZ||fS!=fO)) goto L_0088abf7;
L_0088abf3:; BB(0x0088abf3);
    /* 0088abf3: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0088abf5: jmp 0x88ac0c */ goto L_0088ac0c;
L_0088abf7:; BB(0x0088abf7);
    /* 0088abf7: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088abf9: lea ebx, [ebp - 1] */ r_ebx = (u32)(r_ebp+0xffffffffu);
    /* 0088abfc: jmp 0x88ac0c */ goto L_0088ac0c;
L_0088abfe:; BB(0x0088abfe);
    /* 0088abfe: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0088ac01: je 0x88ac0a */ if (fZ) goto L_0088ac0a;
L_0088ac03:; BB(0x0088ac03);
    /* 0088ac03: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088ac04: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0088ac06: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0088ac08: jmp 0x88ac0c */ goto L_0088ac0c;
L_0088ac0a:; BB(0x0088ac0a);
    /* 0088ac0a: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
L_0088ac0c:; BB(0x0088ac0c);
    /* 0088ac0c: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088ac0e: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0088ac11: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0088ac15: mov dword ptr [ebx + edx*4], ecx */ W32((u32)(r_ebx+r_edx*4), r_ecx);
    /* 0088ac18: mov ecx, dword ptr [eax + edx*4 + 0x400] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x400u));
    /* 0088ac1f: and dword ptr [ebx + ecx*4], 0x7fff */ { u32 ad = (u32)(r_ebx+r_ecx*4);  u32 a = R32(ad); u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0088ac26: mov ebp, dword ptr [eax + edx*4 + 0x304] */ r_ebp = R32((u32)(r_eax+r_edx*4+0x304u));
    /* 0088ac2d: and dword ptr [ebx + ebp*4], 0x7fff */ { u32 ad = (u32)(r_ebx+r_ebp*4);  u32 a = R32(ad); u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0088ac34: jmp 0x88ac42 */ goto L_0088ac42;
L_0088ac36:; BB(0x0088ac36);
    /* 0088ac36: or ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0088ac3c: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0088ac3f: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
L_0088ac42:; BB(0x0088ac42);
    /* 0088ac42: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ac43: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0088ac47: cmp edx, dword ptr [eax + 0x504] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x504u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ac4d: jl 0x88ab56 */ if ((fS!=fO)) goto L_0088ab56;
L_0088ac53:; BB(0x0088ac53);
    /* 0088ac53: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0088ac56: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088ac59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088ac5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088ac5b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088ac5c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088ac5d: ret  */ FN_RET(0x0088a95c); r_esp += 4; return;
L_0088ac5e:; BB(0x0088ac5e);
    /* 0088ac5e: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088ac60: jmp 0x88abcb */ goto L_0088abcb;
}

void f_0088ac68(void) /* sub_88AC68 */
{
    FN_ENTER(0x0088ac68);
L_0088ac68:; BB(0x0088ac68);
    /* 0088ac68: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088ac72: jne 0x88ac90 */ if (!fZ) goto L_0088ac90;
L_0088ac78:; BB(0x0088ac78);
    /* 0088ac78: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088ac82: jne 0x88afe8 */ if (!fZ) goto L_0088afe8;
L_0088ac88:; BB(0x0088ac88);
    /* 0088ac88: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x88ac8du); f_0086b8a0();
    /* 0088ac8d: jmp 0x88ac68 */ goto L_0088ac68;
L_0088ac90:; BB(0x0088ac90);
    /* 0088ac90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ac91: mov ebx, esp */ r_ebx = r_esp;
    /* 0088ac93: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088ac96: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ac97: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ac98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088ac99: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088ac9c: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0088ac9f: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0088aca2: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0088aca5: mov edi, dword ptr [edx + 0x510] */ r_edi = R32((u32)(r_edx+0x510u));
    /* 0088acab: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0088acae: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0088acb1: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 0088acb4: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0088acb7: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 0088acba: mov edx, ecx */ r_edx = r_ecx;
    /* 0088acbc: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0088acbf: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088acc1: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0088acc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088acc5: je 0x88afc9 */ if (fZ) goto L_0088afc9;
L_0088accb:; BB(0x0088accb);
    /* 0088accb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088accd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088accf: mov ebp, dword ptr [ebx + 0x10] */ r_ebp = R32((u32)(r_ebx+0x10u));
    /* 0088acd2: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0088acd6: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
    /* 0088acd9: mov eax, 1 */ r_eax = 0x1u;
    /* 0088acde: imul ebp, dword ptr [edi + 0x340] */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)R32((u32)(r_edi+0x340u)); r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088ace5: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 0088ace8: mov esi, dword ptr [esi + 0x504] */ r_esi = R32((u32)(r_esi+0x504u));
    /* 0088acee: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088acf1: jle 0x88ae46 */ if ((fZ||fS!=fO)) goto L_0088ae46;
L_0088acf7:; BB(0x0088acf7);
    /* 0088acf7: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0088acfb: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0088acff: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 0088ad03: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0088ad07: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_0088ad0a:; BB(0x0088ad0a);
    /* 0088ad0a: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 0088ad0d: mov edi, dword ptr [edi + eax*4 + 0x104] */ r_edi = R32((u32)(r_edi+r_eax*4+0x104u));
    /* 0088ad14: mov ebp, dword ptr [ebx + 0x10] */ r_ebp = R32((u32)(r_ebx+0x10u));
    /* 0088ad17: mov ecx, dword ptr [ebp + edi*4] */ r_ecx = R32((u32)(r_ebp+r_edi*4));
    /* 0088ad1b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0088ad1d: and ebp, 0x7fff */ {  u32 a = r_ebp; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0088ad23: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088ad25: jne 0x88ae31 */ if (!fZ) goto L_0088ae31;
L_0088ad2b:; BB(0x0088ad2b);
    /* 0088ad2b: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0088ad2f: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0088ad32: mov ecx, dword ptr [esi + 0x340] */ r_ecx = R32((u32)(r_esi+0x340u));
    /* 0088ad38: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0088ad3c: imul ecx, ebp */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebp; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088ad3f: mov ebp, dword ptr [esi + edi*4 + 0x344] */ r_ebp = R32((u32)(r_esi+r_edi*4+0x344u));
    /* 0088ad46: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0088ad4a: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0088ad4e: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088ad50: sub ecx, dword ptr [esp + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088ad54: mov eax, ecx */ r_eax = r_ecx;
    /* 0088ad56: mov esi, ecx */ r_esi = r_ecx;
    /* 0088ad58: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 0088ad5c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088ad5d: xor esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088ad5f: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088ad61: mov eax, ecx */ r_eax = r_ecx;
    /* 0088ad63: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088ad64: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x0088ad64, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088ad64, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088ad66: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 0088ad69: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0088ad6d: lea edi, [eax + 1] */ r_edi = (u32)(r_eax+0x1u);
    /* 0088ad70: cmp ecx, 0 */ {  u32 a = r_ecx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ad73: cmovl edi, edx */ if ((fS!=fO)) { r_edi = r_edx; }
    /* 0088ad76: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088ad78: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0088ad7c: imul eax, ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088ad7f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088ad80: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088ad82: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088ad84: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088ad86: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 0088ad89: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0088ad8d: movss xmm1, dword ptr [ecx + edx*4] */ { u32 v = R32((u32)(r_ecx+r_edx*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0088ad92: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0088ad96: mulss xmm1, dword ptr [eax*4 + 0xa335e0] */ { XMM s; s.d[0] = R32((u32)(r_eax*4+0xa335e0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 0088ad9f: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 0088ada2: movss dword ptr [ecx + edx*4], xmm1 */ W32((u32)(r_ecx+r_edx*4), xmm[1].d[0]);
    /* 0088ada7: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0088adab: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088adad: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0088adb1: jge 0x88ae1c */ if ((fS==fO)) goto L_0088ae1c;
L_0088adb3:; BB(0x0088adb3);
    /* 0088adb3: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 0088adb6: lea edx, [ecx + edx*4 + 4] */ r_edx = (u32)(r_ecx+r_edx*4+0x4u);
    /* 0088adba: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0088adbe: lea ecx, [ecx + ebp*4] */ r_ecx = (u32)(r_ecx+r_ebp*4);
    /* 0088adc1: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0088adc5: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0088adc9: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0088adcd: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0088add1: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0088add5: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 0088add9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_0088addd:; BB(0x0088addd);
    /* 0088addd: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0088ade1: lea eax, [edi + ecx] */ r_eax = (u32)(r_edi+r_ecx);
    /* 0088ade4: mov ecx, eax */ r_ecx = r_eax;
    /* 0088ade6: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088ade8: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0088adec: lea edi, [edi + ebp] */ r_edi = (u32)(r_edi+r_ebp);
    /* 0088adef: add ebp, dword ptr [esp + 0x24] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088adf3: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088adf5: movss xmm1, dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0088adf9: cmovl ecx, eax */ if ((fS!=fO)) { r_ecx = r_eax; }
    /* 0088adfc: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0088ae00: jl 0x88ae04 */ if ((fS!=fO)) goto L_0088ae04;
L_0088ae02:; BB(0x0088ae02);
    /* 0088ae02: mov ebp, edi */ r_ebp = r_edi;
L_0088ae04:; BB(0x0088ae04);
    /* 0088ae04: mulss xmm1, dword ptr [ebp*4 + 0xa335e0] */ { XMM s; s.d[0] = R32((u32)(r_ebp*4+0xa335e0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 0088ae0d: movss dword ptr [edx], xmm1 */ W32((u32)(r_edx), xmm[1].d[0]);
    /* 0088ae11: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ae14: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088ae16: jb 0x88addd */ if (fC) goto L_0088addd;
L_0088ae18:; BB(0x0088ae18);
    /* 0088ae18: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
L_0088ae1c:; BB(0x0088ae1c);
    /* 0088ae1c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0088ae20: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0088ae24: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0088ae28: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 0088ae2b: mov esi, dword ptr [ebp + 0x504] */ r_esi = R32((u32)(r_ebp+0x504u));
L_0088ae31:; BB(0x0088ae31);
    /* 0088ae31: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088ae32: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ae34: jl 0x88ad0a */ if ((fS!=fO)) goto L_0088ad0a;
L_0088ae3a:; BB(0x0088ae3a);
    /* 0088ae3a: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0088ae3e: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0088ae42: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
L_0088ae46:; BB(0x0088ae46);
    /* 0088ae46: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ae48: jge 0x88af88 */ if ((fS==fO)) goto L_0088af88;
L_0088ae4e:; BB(0x0088ae4e);
    /* 0088ae4e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088ae50: mov eax, ecx */ r_eax = r_ecx;
    /* 0088ae52: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088ae54: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088ae57: jb 0x88afbd */ if (fC) goto L_0088afbd;
L_0088ae5d:; BB(0x0088ae5d);
    /* 0088ae5d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0088ae61: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0088ae64: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088ae66: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 0088ae6a: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 0088ae6e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088ae70: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0088ae74: lea edx, [edx + edx + 0xa335e0] */ r_edx = (u32)(r_edx+r_edx+0xa335e0u);
    /* 0088ae7b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088ae7d: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 0088ae80: lea ecx, [edi + ecx] */ r_ecx = (u32)(r_edi+r_ecx);
    /* 0088ae83: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088ae85: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0088ae89: ja 0x88af97 */ if ((!fC&&!fZ)) goto L_0088af97;
L_0088ae8f:; BB(0x0088ae8f);
    /* 0088ae8f: mov ecx, eax */ r_ecx = r_eax;
    /* 0088ae91: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ae93: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ae95: add edx, dword ptr [ebx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ae98: mov edi, edx */ r_edi = r_edx;
    /* 0088ae9a: and edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0088ae9d: je 0x88aecb */ if (fZ) goto L_0088aecb;
L_0088ae9f:; BB(0x0088ae9f);
    /* 0088ae9f: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088aea5: jne 0x88af0b */ if (!fZ) goto L_0088af0b;
L_0088aea7:; BB(0x0088aea7);
    /* 0088aea7: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0088aea9: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088aeac: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0088aeaf: mov ecx, eax */ r_ecx = r_eax;
    /* 0088aeb1: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_0088aeb3:; BB(0x0088aeb3);
    /* 0088aeb3: movss xmm0, dword ptr [edx + esi*4] */ { u32 v = R32((u32)(r_edx+r_esi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0088aeb8: mulss xmm0, dword ptr [ebp*4 + 0xa335e0] */ { XMM s; s.d[0] = R32((u32)(r_ebp*4+0xa335e0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 0088aec1: movss dword ptr [edx + esi*4], xmm0 */ W32((u32)(r_edx+r_esi*4), xmm[0].d[0]);
    /* 0088aec6: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088aec7: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088aec9: jb 0x88aeb3 */ if (fC) goto L_0088aeb3;
L_0088aecb:; BB(0x0088aecb);
    /* 0088aecb: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aece: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aed0: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aed2: movss xmm0, dword ptr [ebp*4 + 0xa335e0] */ { u32 v = R32((u32)(r_ebp*4+0xa335e0u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0088aedb: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
L_0088aedf:; BB(0x0088aedf);
    /* 0088aedf: prefetchnta byte ptr [edx + esi*4 + 0x40] */ ;
    /* 0088aee4: movaps xmm1, xmmword ptr [edx + esi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+r_esi*4), 16); xmm[1] = s; }
    /* 0088aee8: mulps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 0088aeeb: movaps xmmword ptr [edx + esi*4], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+r_esi*4), &xmm[1], 16);
    /* 0088aeef: movaps xmm2, xmmword ptr [edx + esi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+r_esi*4+0x10u), 16); xmm[2] = s; }
    /* 0088aef4: mulps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 0088aef7: movaps xmmword ptr [edx + esi*4 + 0x10], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_edx+r_esi*4+0x10u), &xmm[2], 16);
    /* 0088aefc: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088aeff: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088af01: jb 0x88aedf */ if (fC) goto L_0088aedf;
L_0088af03:; BB(0x0088af03);
    /* 0088af03: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088af05: jae 0x88af88 */ if (!fC) goto L_0088af88;
L_0088af0b:; BB(0x0088af0b);
    /* 0088af0b: mov ecx, eax */ r_ecx = r_eax;
    /* 0088af0d: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088af0f: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088af12: jb 0x88af70 */ if (fC) goto L_0088af70;
L_0088af14:; BB(0x0088af14);
    /* 0088af14: lea ecx, [eax - 5] */ r_ecx = (u32)(r_eax+0xfffffffbu);
L_0088af17:; BB(0x0088af17);
    /* 0088af17: movss xmm0, dword ptr [edx + esi*4] */ { u32 v = R32((u32)(r_edx+r_esi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0088af1c: mulss xmm0, dword ptr [ebp*4 + 0xa335e0] */ { XMM s; s.d[0] = R32((u32)(r_ebp*4+0xa335e0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 0088af25: movss xmm1, dword ptr [edx + esi*4 + 4] */ { u32 v = R32((u32)(r_edx+r_esi*4+0x4u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0088af2b: movss dword ptr [edx + esi*4], xmm0 */ W32((u32)(r_edx+r_esi*4), xmm[0].d[0]);
    /* 0088af30: mulss xmm1, dword ptr [ebp*4 + 0xa335e0] */ { XMM s; s.d[0] = R32((u32)(r_ebp*4+0xa335e0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 0088af39: movss xmm2, dword ptr [edx + esi*4 + 8] */ { u32 v = R32((u32)(r_edx+r_esi*4+0x8u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 0088af3f: movss dword ptr [edx + esi*4 + 4], xmm1 */ W32((u32)(r_edx+r_esi*4+0x4u), xmm[1].d[0]);
    /* 0088af45: mulss xmm2, dword ptr [ebp*4 + 0xa335e0] */ { XMM s; s.d[0] = R32((u32)(r_ebp*4+0xa335e0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 0088af4e: movss xmm3, dword ptr [edx + esi*4 + 0xc] */ { u32 v = R32((u32)(r_edx+r_esi*4+0xcu)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 0088af54: movss dword ptr [edx + esi*4 + 8], xmm2 */ W32((u32)(r_edx+r_esi*4+0x8u), xmm[2].d[0]);
    /* 0088af5a: mulss xmm3, dword ptr [ebp*4 + 0xa335e0] */ { XMM s; s.d[0] = R32((u32)(r_ebp*4+0xa335e0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 0088af63: movss dword ptr [edx + esi*4 + 0xc], xmm3 */ W32((u32)(r_edx+r_esi*4+0xcu), xmm[3].d[0]);
    /* 0088af69: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088af6c: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088af6e: jbe 0x88af17 */ if ((fC||fZ)) goto L_0088af17;
L_0088af70:; BB(0x0088af70);
    /* 0088af70: movss xmm0, dword ptr [edx + esi*4] */ { u32 v = R32((u32)(r_edx+r_esi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0088af75: mulss xmm0, dword ptr [ebp*4 + 0xa335e0] */ { XMM s; s.d[0] = R32((u32)(r_ebp*4+0xa335e0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 0088af7e: movss dword ptr [edx + esi*4], xmm0 */ W32((u32)(r_edx+r_esi*4), xmm[0].d[0]);
    /* 0088af83: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088af84: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088af86: jb 0x88af70 */ if (fC) goto L_0088af70;
L_0088af88:; BB(0x0088af88);
    /* 0088af88: mov eax, 1 */ r_eax = 0x1u;
    /* 0088af8d: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088af90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088af91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088af92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088af93: mov esp, ebx */ r_esp = r_ebx;
    /* 0088af95: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088af96: ret  */ FN_RET(0x0088ac68); r_esp += 4; return;
L_0088af97:; BB(0x0088af97);
    /* 0088af97: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0088af9b: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0088af9f: lea edi, [edi + edi + 0xa335e4] */ r_edi = (u32)(r_edi+r_edi+0xa335e4u);
    /* 0088afa6: add ecx, dword ptr [ebx + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088afa9: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088afab: jae 0x88ae8f */ if (!fC) goto L_0088ae8f;
L_0088afb1:; BB(0x0088afb1);
    /* 0088afb1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088afb3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088afb5: add edx, dword ptr [ebx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088afb8: jmp 0x88af0b */ goto L_0088af0b;
L_0088afbd:; BB(0x0088afbd);
    /* 0088afbd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088afbf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088afc1: add edx, dword ptr [ebx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088afc4: jmp 0x88af0b */ goto L_0088af0b;
L_0088afc9:; BB(0x0088afc9);
    /* 0088afc9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088afcb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088afcd: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0088afd0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088afd1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088afd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088afd4: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x88afd9u); f_0086b688();
    /* 0088afd9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088afdb: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088afde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088afdf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088afe0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088afe1: mov esp, ebx */ r_esp = r_ebx;
    /* 0088afe3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088afe4: ret  */ FN_RET(0x0088ac68); r_esp += 4; return;
L_0088afe8:; BB(0x0088afe8);
    /* 0088afe8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088afe9: mov ebx, esp */ r_ebx = r_esp;
    /* 0088afeb: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088afee: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088afef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088aff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088aff1: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088aff4: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0088aff7: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0088affa: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0088affd: mov edx, dword ptr [edx + 0x510] */ r_edx = R32((u32)(r_edx+0x510u));
    /* 0088b003: mov ebp, dword ptr [eax + 0x40] */ r_ebp = R32((u32)(r_eax+0x40u));
    /* 0088b006: mov ebp, dword ptr [ebp + 4] */ r_ebp = R32((u32)(r_ebp+0x4u));
    /* 0088b009: mov ebp, dword ptr [ebp + 0x1c] */ r_ebp = R32((u32)(r_ebp+0x1cu));
    /* 0088b00c: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 0088b00f: mov eax, dword ptr [ebp + eax*4] */ r_eax = R32((u32)(r_ebp+r_eax*4));
    /* 0088b013: mov ebp, eax */ r_ebp = r_eax;
    /* 0088b015: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 0088b018: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088b01a: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0088b01c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088b01e: je 0x88b212 */ if (fZ) goto L_0088b212;
L_0088b024:; BB(0x0088b024);
    /* 0088b024: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0088b026: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088b028: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
    /* 0088b02b: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0088b02d: imul esi, dword ptr [edx + 0x340] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_edx+0x340u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088b034: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0088b039: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0088b03d: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 0088b040: mov ebp, dword ptr [ebp + 0x504] */ r_ebp = R32((u32)(r_ebp+0x504u));
    /* 0088b046: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b049: jle 0x88b16e */ if ((fZ||fS!=fO)) goto L_0088b16e;
L_0088b04f:; BB(0x0088b04f);
    /* 0088b04f: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0088b053: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0088b057: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0088b05b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0088b05e: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_0088b062:; BB(0x0088b062);
    /* 0088b062: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 0088b065: mov edi, dword ptr [edi + esi*4 + 0x104] */ r_edi = R32((u32)(r_edi+r_esi*4+0x104u));
    /* 0088b06c: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0088b06f: mov eax, dword ptr [edx + edi*4] */ r_eax = R32((u32)(r_edx+r_edi*4));
    /* 0088b072: mov edx, eax */ r_edx = r_eax;
    /* 0088b074: and edx, 0x7fff */ {  u32 a = r_edx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0088b07a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088b07c: jne 0x88b159 */ if (!fZ) goto L_0088b159;
L_0088b082:; BB(0x0088b082);
    /* 0088b082: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0088b085: mov eax, dword ptr [ebp + 0x340] */ r_eax = R32((u32)(r_ebp+0x340u));
    /* 0088b08b: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088b08e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0088b092: mov ebp, dword ptr [ebp + edi*4 + 0x344] */ r_ebp = R32((u32)(r_ebp+r_edi*4+0x344u));
    /* 0088b099: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0088b09d: mov edi, eax */ r_edi = r_eax;
    /* 0088b09f: sub edi, dword ptr [esp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0088b0a3: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088b0a5: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 0088b0a9: mov eax, edi */ r_eax = r_edi;
    /* 0088b0ab: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088b0ac: mov eax, edi */ r_eax = r_edi;
    /* 0088b0ae: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088b0b0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088b0b2: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0088b0b6: mov eax, edi */ r_eax = r_edi;
    /* 0088b0b8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088b0b9: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x0088b0b9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088b0b9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088b0bb: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0088b0bf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088b0c1: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0088b0c5: jl 0x88b206 */ if ((fS!=fO)) goto L_0088b206;
L_0088b0cb:; BB(0x0088b0cb);
    /* 0088b0cb: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0088b0ce: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
L_0088b0d2:; BB(0x0088b0d2);
    /* 0088b0d2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0088b0d4: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0088b0d8: imul eax, dword ptr [esp + 0x24] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x24u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088b0dd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088b0de: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088b0e0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088b0e2: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088b0e4: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0088b0e7: fld dword ptr [edx + ecx*4] */ FPUSH(R_F32((u32)(r_edx+r_ecx*4)));
    /* 0088b0ea: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0088b0ee: fmul dword ptr [eax*4 + 0xa335e0] */ ST(0) = ST(0) * R_F32((u32)(r_eax*4+0xa335e0u));
    /* 0088b0f5: fstp dword ptr [edx + ecx*4] */ W_F32((u32)(r_edx+r_ecx*4), ST(0)); FPOP();
    /* 0088b0f8: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088b0f9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0088b0fd: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b0ff: jge 0x88b144 */ if ((fS==fO)) goto L_0088b144;
L_0088b101:; BB(0x0088b101);
    /* 0088b101: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0088b104: lea edx, [eax + ecx*4] */ r_edx = (u32)(r_eax+r_ecx*4);
    /* 0088b107: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0088b10b: lea eax, [eax + ecx*4] */ r_eax = (u32)(r_eax+r_ecx*4);
    /* 0088b10e: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0088b112: mov ecx, edi */ r_ecx = r_edi;
    /* 0088b114: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0088b118: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
L_0088b11c:; BB(0x0088b11c);
    /* 0088b11c: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088b11e: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b120: jl 0x88b12a */ if ((fS!=fO)) goto L_0088b12a;
L_0088b122:; BB(0x0088b122);
    /* 0088b122: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088b124: add edi, dword ptr [esp + 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088b128: jmp 0x88b12e */ goto L_0088b12e;
L_0088b12a:; BB(0x0088b12a);
    /* 0088b12a: add edi, dword ptr [esp + 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0088b12e:; BB(0x0088b12e);
    /* 0088b12e: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0088b130: fmul dword ptr [edi*4 + 0xa335e0] */ ST(0) = ST(0) * R_F32((u32)(r_edi*4+0xa335e0u));
    /* 0088b137: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0088b139: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088b13c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088b13e: jb 0x88b11c */ if (fC) goto L_0088b11c;
L_0088b140:; BB(0x0088b140);
    /* 0088b140: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_0088b144:; BB(0x0088b144);
    /* 0088b144: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0088b148: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0088b14c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0088b150: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0088b153: mov ebp, dword ptr [edx + 0x504] */ r_ebp = R32((u32)(r_edx+0x504u));
L_0088b159:; BB(0x0088b159);
    /* 0088b159: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088b15a: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b15c: jl 0x88b062 */ if ((fS!=fO)) goto L_0088b062;
L_0088b162:; BB(0x0088b162);
    /* 0088b162: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0088b166: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0088b16a: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
L_0088b16e:; BB(0x0088b16e);
    /* 0088b16e: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b170: jge 0x88b1f7 */ if ((fS==fO)) goto L_0088b1f7;
L_0088b176:; BB(0x0088b176);
    /* 0088b176: mov edx, eax */ r_edx = r_eax;
    /* 0088b178: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088b17a: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b17d: jl 0x88b1db */ if ((fS!=fO)) goto L_0088b1db;
L_0088b17f:; BB(0x0088b17f);
    /* 0088b17f: lea edx, [eax - 6] */ r_edx = (u32)(r_eax+0xfffffffau);
    /* 0088b182: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 0088b185: jmp 0x88b18b */ goto L_0088b18b;
L_0088b187:; BB(0x0088b187);
    /* 0088b187: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
L_0088b18b:; BB(0x0088b18b);
    /* 0088b18b: fld dword ptr [ecx + edi*4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4)));
    /* 0088b18e: fmul dword ptr [esi*4 + 0xa335e0] */ ST(0) = ST(0) * R_F32((u32)(r_esi*4+0xa335e0u));
    /* 0088b195: fstp dword ptr [ecx + edi*4] */ W_F32((u32)(r_ecx+r_edi*4), ST(0)); FPOP();
    /* 0088b198: fld dword ptr [ecx + edi*4 + 4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4+0x4u)));
    /* 0088b19c: fmul dword ptr [esi*4 + 0xa335e0] */ ST(0) = ST(0) * R_F32((u32)(r_esi*4+0xa335e0u));
    /* 0088b1a3: fstp dword ptr [ecx + edi*4 + 4] */ W_F32((u32)(r_ecx+r_edi*4+0x4u), ST(0)); FPOP();
    /* 0088b1a7: fld dword ptr [ecx + edi*4 + 8] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4+0x8u)));
    /* 0088b1ab: fmul dword ptr [esi*4 + 0xa335e0] */ ST(0) = ST(0) * R_F32((u32)(r_esi*4+0xa335e0u));
    /* 0088b1b2: fstp dword ptr [ecx + edi*4 + 8] */ W_F32((u32)(r_ecx+r_edi*4+0x8u), ST(0)); FPOP();
    /* 0088b1b6: fld dword ptr [ecx + edi*4 + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4+0xcu)));
    /* 0088b1ba: fmul dword ptr [esi*4 + 0xa335e0] */ ST(0) = ST(0) * R_F32((u32)(r_esi*4+0xa335e0u));
    /* 0088b1c1: fstp dword ptr [ecx + edi*4 + 0xc] */ W_F32((u32)(r_ecx+r_edi*4+0xcu), ST(0)); FPOP();
    /* 0088b1c5: fld dword ptr [ecx + edi*4 + 0x10] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4+0x10u)));
    /* 0088b1c9: fmul dword ptr [esi*4 + 0xa335e0] */ ST(0) = ST(0) * R_F32((u32)(r_esi*4+0xa335e0u));
    /* 0088b1d0: add edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088b1d3: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b1d5: jle 0x88b187 */ if ((fZ||fS!=fO)) goto L_0088b187;
L_0088b1d7:; BB(0x0088b1d7);
    /* 0088b1d7: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
L_0088b1db:; BB(0x0088b1db);
    /* 0088b1db: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0088b1de: jmp 0x88b1e4 */ goto L_0088b1e4;
L_0088b1e0:; BB(0x0088b1e0);
    /* 0088b1e0: fstp dword ptr [edx + edi*4 - 4] */ W_F32((u32)(r_edx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
L_0088b1e4:; BB(0x0088b1e4);
    /* 0088b1e4: fld dword ptr [edx + edi*4] */ FPUSH(R_F32((u32)(r_edx+r_edi*4)));
    /* 0088b1e7: fmul dword ptr [esi*4 + 0xa335e0] */ ST(0) = ST(0) * R_F32((u32)(r_esi*4+0xa335e0u));
    /* 0088b1ee: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088b1ef: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088b1f1: jl 0x88b1e0 */ if ((fS!=fO)) goto L_0088b1e0;
L_0088b1f3:; BB(0x0088b1f3);
    /* 0088b1f3: fstp dword ptr [edx + edi*4 - 4] */ W_F32((u32)(r_edx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
L_0088b1f7:; BB(0x0088b1f7);
    /* 0088b1f7: mov eax, 1 */ r_eax = 0x1u;
    /* 0088b1fc: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088b1ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088b200: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088b201: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088b202: mov esp, ebx */ r_esp = r_ebx;
    /* 0088b204: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088b205: ret  */ FN_RET(0x0088ac68); r_esp += 4; return;
L_0088b206:; BB(0x0088b206);
    /* 0088b206: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 0088b209: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0088b20d: jmp 0x88b0d2 */ goto L_0088b0d2;
L_0088b212:; BB(0x0088b212);
    /* 0088b212: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088b214: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088b216: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088b217: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088b219: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0088b21c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088b21d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x88b222u); f_0086b688();
    /* 0088b222: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088b224: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088b227: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088b228: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088b229: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088b22a: mov esp, ebx */ r_esp = r_ebx;
    /* 0088b22c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088b22d: ret  */ FN_RET(0x0088ac68); r_esp += 4; return;
}

void f_0088acd0(void)
{
    FN_ENTER(0x0088acd0);
    /* 0088acd0: imul edx, dword ptr [eax], -0x77 */ { i64 t = (i64)(i32)R32((u32)(r_eax)) * (i64)(i32)0xffffff89u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088acd3: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088acd4: and al, 0x14 */ {  u32 a = (u8)r_eax; u32 b = 0x14u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0088acd6: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
    /* 0088acd9: mov eax, 1 */ r_eax = 0x1u;
    /* 0088acde: imul ebp, dword ptr [edi + 0x340] */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)R32((u32)(r_edi+0x340u)); r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088ace5: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 0088ace8: mov esi, dword ptr [esi + 0x504] */ r_esi = R32((u32)(r_esi+0x504u));
    /* 0088acee: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088acf1: jle 0x88ae46 */ if ((fZ||fS!=fO)) goto L_0088ae46;
L_0088acf7:; BB(0x0088acf7);
    /* 0088acf7: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0088acfb: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0088acff: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 0088ad03: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0088ad07: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_0088ad0a:; BB(0x0088ad0a);
    /* 0088ad0a: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 0088ad0d: mov edi, dword ptr [edi + eax*4 + 0x104] */ r_edi = R32((u32)(r_edi+r_eax*4+0x104u));
    /* 0088ad14: mov ebp, dword ptr [ebx + 0x10] */ r_ebp = R32((u32)(r_ebx+0x10u));
    /* 0088ad17: mov ecx, dword ptr [ebp + edi*4] */ r_ecx = R32((u32)(r_ebp+r_edi*4));
    /* 0088ad1b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0088ad1d: and ebp, 0x7fff */ {  u32 a = r_ebp; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0088ad23: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088ad25: jne 0x88ae31 */ if (!fZ) goto L_0088ae31;
L_0088ad2b:; BB(0x0088ad2b);
    /* 0088ad2b: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0088ad2f: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0088ad32: mov ecx, dword ptr [esi + 0x340] */ r_ecx = R32((u32)(r_esi+0x340u));
    /* 0088ad38: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0088ad3c: imul ecx, ebp */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebp; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088ad3f: mov ebp, dword ptr [esi + edi*4 + 0x344] */ r_ebp = R32((u32)(r_esi+r_edi*4+0x344u));
    /* 0088ad46: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0088ad4a: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0088ad4e: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088ad50: sub ecx, dword ptr [esp + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088ad54: mov eax, ecx */ r_eax = r_ecx;
    /* 0088ad56: mov esi, ecx */ r_esi = r_ecx;
    /* 0088ad58: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 0088ad5c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088ad5d: xor esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088ad5f: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088ad61: mov eax, ecx */ r_eax = r_ecx;
    /* 0088ad63: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088ad64: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x0088ad64, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088ad64, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088ad66: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 0088ad69: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0088ad6d: lea edi, [eax + 1] */ r_edi = (u32)(r_eax+0x1u);
    /* 0088ad70: cmp ecx, 0 */ {  u32 a = r_ecx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ad73: cmovl edi, edx */ if ((fS!=fO)) { r_edi = r_edx; }
    /* 0088ad76: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088ad78: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0088ad7c: imul eax, ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088ad7f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088ad80: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088ad82: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088ad84: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088ad86: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 0088ad89: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0088ad8d: movss xmm1, dword ptr [ecx + edx*4] */ { u32 v = R32((u32)(r_ecx+r_edx*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0088ad92: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0088ad96: mulss xmm1, dword ptr [eax*4 + 0xa335e0] */ { XMM s; s.d[0] = R32((u32)(r_eax*4+0xa335e0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 0088ad9f: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 0088ada2: movss dword ptr [ecx + edx*4], xmm1 */ W32((u32)(r_ecx+r_edx*4), xmm[1].d[0]);
    /* 0088ada7: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0088adab: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088adad: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0088adb1: jge 0x88ae1c */ if ((fS==fO)) goto L_0088ae1c;
L_0088adb3:; BB(0x0088adb3);
    /* 0088adb3: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 0088adb6: lea edx, [ecx + edx*4 + 4] */ r_edx = (u32)(r_ecx+r_edx*4+0x4u);
    /* 0088adba: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0088adbe: lea ecx, [ecx + ebp*4] */ r_ecx = (u32)(r_ecx+r_ebp*4);
    /* 0088adc1: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0088adc5: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0088adc9: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0088adcd: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0088add1: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0088add5: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 0088add9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_0088addd:; BB(0x0088addd);
    /* 0088addd: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0088ade1: lea eax, [edi + ecx] */ r_eax = (u32)(r_edi+r_ecx);
    /* 0088ade4: mov ecx, eax */ r_ecx = r_eax;
    /* 0088ade6: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088ade8: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0088adec: lea edi, [edi + ebp] */ r_edi = (u32)(r_edi+r_ebp);
    /* 0088adef: add ebp, dword ptr [esp + 0x24] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088adf3: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088adf5: movss xmm1, dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0088adf9: cmovl ecx, eax */ if ((fS!=fO)) { r_ecx = r_eax; }
    /* 0088adfc: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0088ae00: jl 0x88ae04 */ if ((fS!=fO)) goto L_0088ae04;
L_0088ae02:; BB(0x0088ae02);
    /* 0088ae02: mov ebp, edi */ r_ebp = r_edi;
L_0088ae04:; BB(0x0088ae04);
    /* 0088ae04: mulss xmm1, dword ptr [ebp*4 + 0xa335e0] */ { XMM s; s.d[0] = R32((u32)(r_ebp*4+0xa335e0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 0088ae0d: movss dword ptr [edx], xmm1 */ W32((u32)(r_edx), xmm[1].d[0]);
    /* 0088ae11: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ae14: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088ae16: jb 0x88addd */ if (fC) goto L_0088addd;
L_0088ae18:; BB(0x0088ae18);
    /* 0088ae18: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
L_0088ae1c:; BB(0x0088ae1c);
    /* 0088ae1c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0088ae20: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0088ae24: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0088ae28: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 0088ae2b: mov esi, dword ptr [ebp + 0x504] */ r_esi = R32((u32)(r_ebp+0x504u));
L_0088ae31:; BB(0x0088ae31);
    /* 0088ae31: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088ae32: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ae34: jl 0x88ad0a */ if ((fS!=fO)) goto L_0088ad0a;
L_0088ae3a:; BB(0x0088ae3a);
    /* 0088ae3a: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0088ae3e: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0088ae42: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
L_0088ae46:; BB(0x0088ae46);
    /* 0088ae46: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ae48: jge 0x88af88 */ if ((fS==fO)) goto L_0088af88;
L_0088ae4e:; BB(0x0088ae4e);
    /* 0088ae4e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088ae50: mov eax, ecx */ r_eax = r_ecx;
    /* 0088ae52: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088ae54: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088ae57: jb 0x88afbd */ if (fC) goto L_0088afbd;
L_0088ae5d:; BB(0x0088ae5d);
    /* 0088ae5d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0088ae61: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0088ae64: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088ae66: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 0088ae6a: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 0088ae6e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088ae70: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0088ae74: lea edx, [edx + edx + 0xa335e0] */ r_edx = (u32)(r_edx+r_edx+0xa335e0u);
    /* 0088ae7b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088ae7d: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 0088ae80: lea ecx, [edi + ecx] */ r_ecx = (u32)(r_edi+r_ecx);
    /* 0088ae83: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088ae85: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0088ae89: ja 0x88af97 */ if ((!fC&&!fZ)) goto L_0088af97;
L_0088ae8f:; BB(0x0088ae8f);
    /* 0088ae8f: mov ecx, eax */ r_ecx = r_eax;
    /* 0088ae91: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ae93: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ae95: add edx, dword ptr [ebx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ae98: mov edi, edx */ r_edi = r_edx;
    /* 0088ae9a: and edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0088ae9d: je 0x88aecb */ if (fZ) goto L_0088aecb;
L_0088ae9f:; BB(0x0088ae9f);
    /* 0088ae9f: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088aea5: jne 0x88af0b */ if (!fZ) goto L_0088af0b;
L_0088aea7:; BB(0x0088aea7);
    /* 0088aea7: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0088aea9: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088aeac: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0088aeaf: mov ecx, eax */ r_ecx = r_eax;
    /* 0088aeb1: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_0088aeb3:; BB(0x0088aeb3);
    /* 0088aeb3: movss xmm0, dword ptr [edx + esi*4] */ { u32 v = R32((u32)(r_edx+r_esi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0088aeb8: mulss xmm0, dword ptr [ebp*4 + 0xa335e0] */ { XMM s; s.d[0] = R32((u32)(r_ebp*4+0xa335e0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 0088aec1: movss dword ptr [edx + esi*4], xmm0 */ W32((u32)(r_edx+r_esi*4), xmm[0].d[0]);
    /* 0088aec6: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088aec7: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088aec9: jb 0x88aeb3 */ if (fC) goto L_0088aeb3;
L_0088aecb:; BB(0x0088aecb);
    /* 0088aecb: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aece: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aed0: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088aed2: movss xmm0, dword ptr [ebp*4 + 0xa335e0] */ { u32 v = R32((u32)(r_ebp*4+0xa335e0u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0088aedb: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
L_0088aedf:; BB(0x0088aedf);
    /* 0088aedf: prefetchnta byte ptr [edx + esi*4 + 0x40] */ ;
    /* 0088aee4: movaps xmm1, xmmword ptr [edx + esi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+r_esi*4), 16); xmm[1] = s; }
    /* 0088aee8: mulps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 0088aeeb: movaps xmmword ptr [edx + esi*4], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+r_esi*4), &xmm[1], 16);
    /* 0088aeef: movaps xmm2, xmmword ptr [edx + esi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+r_esi*4+0x10u), 16); xmm[2] = s; }
    /* 0088aef4: mulps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 0088aef7: movaps xmmword ptr [edx + esi*4 + 0x10], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_edx+r_esi*4+0x10u), &xmm[2], 16);
    /* 0088aefc: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088aeff: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088af01: jb 0x88aedf */ if (fC) goto L_0088aedf;
L_0088af03:; BB(0x0088af03);
    /* 0088af03: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088af05: jae 0x88af88 */ if (!fC) goto L_0088af88;
L_0088af0b:; BB(0x0088af0b);
    /* 0088af0b: mov ecx, eax */ r_ecx = r_eax;
    /* 0088af0d: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088af0f: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088af12: jb 0x88af70 */ if (fC) goto L_0088af70;
L_0088af14:; BB(0x0088af14);
    /* 0088af14: lea ecx, [eax - 5] */ r_ecx = (u32)(r_eax+0xfffffffbu);
L_0088af17:; BB(0x0088af17);
    /* 0088af17: movss xmm0, dword ptr [edx + esi*4] */ { u32 v = R32((u32)(r_edx+r_esi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0088af1c: mulss xmm0, dword ptr [ebp*4 + 0xa335e0] */ { XMM s; s.d[0] = R32((u32)(r_ebp*4+0xa335e0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 0088af25: movss xmm1, dword ptr [edx + esi*4 + 4] */ { u32 v = R32((u32)(r_edx+r_esi*4+0x4u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0088af2b: movss dword ptr [edx + esi*4], xmm0 */ W32((u32)(r_edx+r_esi*4), xmm[0].d[0]);
    /* 0088af30: mulss xmm1, dword ptr [ebp*4 + 0xa335e0] */ { XMM s; s.d[0] = R32((u32)(r_ebp*4+0xa335e0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 0088af39: movss xmm2, dword ptr [edx + esi*4 + 8] */ { u32 v = R32((u32)(r_edx+r_esi*4+0x8u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 0088af3f: movss dword ptr [edx + esi*4 + 4], xmm1 */ W32((u32)(r_edx+r_esi*4+0x4u), xmm[1].d[0]);
    /* 0088af45: mulss xmm2, dword ptr [ebp*4 + 0xa335e0] */ { XMM s; s.d[0] = R32((u32)(r_ebp*4+0xa335e0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 0088af4e: movss xmm3, dword ptr [edx + esi*4 + 0xc] */ { u32 v = R32((u32)(r_edx+r_esi*4+0xcu)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 0088af54: movss dword ptr [edx + esi*4 + 8], xmm2 */ W32((u32)(r_edx+r_esi*4+0x8u), xmm[2].d[0]);
    /* 0088af5a: mulss xmm3, dword ptr [ebp*4 + 0xa335e0] */ { XMM s; s.d[0] = R32((u32)(r_ebp*4+0xa335e0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 0088af63: movss dword ptr [edx + esi*4 + 0xc], xmm3 */ W32((u32)(r_edx+r_esi*4+0xcu), xmm[3].d[0]);
    /* 0088af69: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088af6c: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088af6e: jbe 0x88af17 */ if ((fC||fZ)) goto L_0088af17;
L_0088af70:; BB(0x0088af70);
    /* 0088af70: movss xmm0, dword ptr [edx + esi*4] */ { u32 v = R32((u32)(r_edx+r_esi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0088af75: mulss xmm0, dword ptr [ebp*4 + 0xa335e0] */ { XMM s; s.d[0] = R32((u32)(r_ebp*4+0xa335e0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 0088af7e: movss dword ptr [edx + esi*4], xmm0 */ W32((u32)(r_edx+r_esi*4), xmm[0].d[0]);
    /* 0088af83: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088af84: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088af86: jb 0x88af70 */ if (fC) goto L_0088af70;
L_0088af88:; BB(0x0088af88);
    /* 0088af88: mov eax, 1 */ r_eax = 0x1u;
    /* 0088af8d: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088af90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088af91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088af92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088af93: mov esp, ebx */ r_esp = r_ebx;
    /* 0088af95: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088af96: ret  */ FN_RET(0x0088acd0); r_esp += 4; return;
L_0088af97:; BB(0x0088af97);
    /* 0088af97: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0088af9b: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0088af9f: lea edi, [edi + edi + 0xa335e4] */ r_edi = (u32)(r_edi+r_edi+0xa335e4u);
    /* 0088afa6: add ecx, dword ptr [ebx + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088afa9: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088afab: jae 0x88ae8f */ if (!fC) goto L_0088ae8f;
L_0088afb1:; BB(0x0088afb1);
    /* 0088afb1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088afb3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088afb5: add edx, dword ptr [ebx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088afb8: jmp 0x88af0b */ goto L_0088af0b;
L_0088afbd:; BB(0x0088afbd);
    /* 0088afbd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088afbf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088afc1: add edx, dword ptr [ebx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088afc4: jmp 0x88af0b */ goto L_0088af0b;
}

