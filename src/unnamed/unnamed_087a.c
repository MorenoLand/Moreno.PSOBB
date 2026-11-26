#include "protos.h"

void f_0087a8c0(void)
{
    FN_ENTER(0x0087a8c0);
    goto L_0087a8c0;
L_0087a8be:; BB(0x0087a8be);
    /* 0087a8be: fld st(4) */ { long double v = ST(4); FPUSH(v); }
L_0087a8c0:; BB(0x0087a8c0);
    /* 0087a8c0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087a8c2: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0087a8c4: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 0087a8c6: fld dword ptr [esi + edx*4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4)));
    /* 0087a8c9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a8cb: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0087a8cd: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a8cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a8d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a8d2: ja 0x87a8d6 */ if ((!fC&&!fZ)) goto L_0087a8d6;
L_0087a8d4:; BB(0x0087a8d4);
    /* 0087a8d4: fst st(1) */ ST(1) = ST(0);
L_0087a8d6:; BB(0x0087a8d6);
    /* 0087a8d6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a8d8: fstp dword ptr [esi + edx*4] */ W_F32((u32)(r_esi+r_edx*4), ST(0)); FPOP();
    /* 0087a8db: fld dword ptr [0x99ac80] */ FPUSH(R_F32((u32)(0x99ac80u)));
    /* 0087a8e1: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0087a8e3: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087a8e5: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0087a8e7: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 0087a8e9: fld dword ptr [esi + edx*4 + 4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4+0x4u)));
    /* 0087a8ed: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a8ef: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0087a8f1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a8f3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a8f5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a8f6: ja 0x87a8fa */ if ((!fC&&!fZ)) goto L_0087a8fa;
L_0087a8f8:; BB(0x0087a8f8);
    /* 0087a8f8: fst st(1) */ ST(1) = ST(0);
L_0087a8fa:; BB(0x0087a8fa);
    /* 0087a8fa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a8fc: fstp dword ptr [esi + edx*4 + 4] */ W_F32((u32)(r_esi+r_edx*4+0x4u), ST(0)); FPOP();
    /* 0087a900: fld dword ptr [0x99ac7c] */ FPUSH(R_F32((u32)(0x99ac7cu)));
    /* 0087a906: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0087a908: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087a90a: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0087a90c: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 0087a90e: fld dword ptr [esi + edx*4 + 8] */ FPUSH(R_F32((u32)(r_esi+r_edx*4+0x8u)));
    /* 0087a912: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a914: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0087a916: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a918: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a91a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a91b: ja 0x87a91f */ if ((!fC&&!fZ)) goto L_0087a91f;
L_0087a91d:; BB(0x0087a91d);
    /* 0087a91d: fst st(1) */ ST(1) = ST(0);
L_0087a91f:; BB(0x0087a91f);
    /* 0087a91f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a921: fstp dword ptr [esi + edx*4 + 8] */ W_F32((u32)(r_esi+r_edx*4+0x8u), ST(0)); FPOP();
    /* 0087a925: fld dword ptr [0x99ac78] */ FPUSH(R_F32((u32)(0x99ac78u)));
    /* 0087a92b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0087a92d: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087a92f: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0087a931: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 0087a933: fld dword ptr [esi + edx*4 + 0xc] */ FPUSH(R_F32((u32)(r_esi+r_edx*4+0xcu)));
    /* 0087a937: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a939: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0087a93b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a93d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a93f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a940: ja 0x87a944 */ if ((!fC&&!fZ)) goto L_0087a944;
L_0087a942:; BB(0x0087a942);
    /* 0087a942: fst st(1) */ ST(1) = ST(0);
L_0087a944:; BB(0x0087a944);
    /* 0087a944: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a946: fstp dword ptr [esi + edx*4 + 0xc] */ W_F32((u32)(r_esi+r_edx*4+0xcu), ST(0)); FPOP();
    /* 0087a94a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a94c: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0087a94e: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087a951: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087a953: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a955: jle 0x87a8be */ if ((fZ||fS!=fO)) goto L_0087a8be;
L_0087a95b:; BB(0x0087a95b);
    /* 0087a95b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a95d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a95f: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 0087a962: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087a965: fld dword ptr [0x99ac80] */ FPUSH(R_F32((u32)(0x99ac80u)));
    /* 0087a96b: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
L_0087a96e:; BB(0x0087a96e);
    /* 0087a96e: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0087a970: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087a972: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0087a974: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 0087a976: fld dword ptr [ecx + edx*4] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4)));
    /* 0087a979: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a97b: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0087a97d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a97f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a981: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a982: ja 0x87a986 */ if ((!fC&&!fZ)) goto L_0087a986;
L_0087a984:; BB(0x0087a984);
    /* 0087a984: fst st(1) */ ST(1) = ST(0);
L_0087a986:; BB(0x0087a986);
    /* 0087a986: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a988: fstp dword ptr [ecx + edx*4] */ W_F32((u32)(r_ecx+r_edx*4), ST(0)); FPOP();
    /* 0087a98b: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087a98c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a98e: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0087a990: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087a992: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a994: jl 0x87a96e */ if ((fS!=fO)) goto L_0087a96e;
L_0087a996:; BB(0x0087a996);
    /* 0087a996: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0087a998: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0087a99a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a99c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a99e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a9a0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a9a2: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0087a9a5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0087a9a8: mov esp, ebp */ r_esp = r_ebp;
    /* 0087a9aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087a9ab: mov esp, ebx */ r_esp = r_ebx;
    /* 0087a9ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087a9ae: ret  */ FN_RET(0x0087a8c0); r_esp += 4; return;
}

void f_0087a9dc(void) /* sub_87A9DC */
{
    FN_ENTER(0x0087a9dc);
L_0087a9dc:; BB(0x0087a9dc);
    /* 0087a9dc: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087a9e6: jne 0x87aa04 */ if (!fZ) goto L_0087aa04;
L_0087a9ec:; BB(0x0087a9ec);
    /* 0087a9ec: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087a9f6: jne 0x87ace4 */ if (!fZ) goto L_0087ace4;
L_0087a9fc:; BB(0x0087a9fc);
    /* 0087a9fc: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x87aa01u); f_0086b8a0();
    /* 0087aa01: jmp 0x87a9dc */ goto L_0087a9dc;
L_0087aa04:; BB(0x0087aa04);
    /* 0087aa04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087aa05: mov ebp, esp */ r_ebp = r_esp;
    /* 0087aa07: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0087aa0a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0087aa0d: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0087aa10: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0087aa13: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0087aa16: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 0087aa18: mov ebx, dword ptr [edi + 0x28] */ r_ebx = R32((u32)(r_edi+0x28u));
    /* 0087aa1b: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0087aa1e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087aa20: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x87aa25u); f_00858020();
    /* 0087aa25: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087aa28: mov eax, esp */ r_eax = r_esp;
    /* 0087aa2a: mov ecx, eax */ r_ecx = r_eax;
    /* 0087aa2c: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0087aa2f: movss xmm1, dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087aa34: addss xmm1, dword ptr [ebp + 0x18] */ { XMM s; s.d[0] = R32((u32)(r_ebp+0x18u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; }
    /* 0087aa39: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087aa3b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087aa3d: jle 0x87aa50 */ if ((fZ||fS!=fO)) goto L_0087aa50;
L_0087aa3f:; BB(0x0087aa3f);
    /* 0087aa3f: mov ebx, 0xc61c3c00 */ r_ebx = 0xc61c3c00u;
L_0087aa44:; BB(0x0087aa44);
    /* 0087aa44: mov dword ptr [ecx + edx*4], ebx */ W32((u32)(r_ecx+r_edx*4), r_ebx);
    /* 0087aa47: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087aa48: cmp edx, dword ptr [edi + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087aa4b: jl 0x87aa44 */ if ((fS!=fO)) goto L_0087aa44;
L_0087aa4d:; BB(0x0087aa4d);
    /* 0087aa4d: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
L_0087aa50:; BB(0x0087aa50);
    /* 0087aa50: movss xmm0, dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087aa55: maxss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = (xmm[0].fs[0] > s.fs[0]) ? xmm[0].fs[0] : s.fs[0]; }
    /* 0087aa59: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087aa5b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087aa5d: jle 0x87aaf4 */ if ((fZ||fS!=fO)) goto L_0087aaf4;
L_0087aa63:; BB(0x0087aa63);
    /* 0087aa63: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087aa66: jl 0x87aad8 */ if ((fS!=fO)) goto L_0087aad8;
L_0087aa68:; BB(0x0087aa68);
    /* 0087aa68: lea eax, [esi - 6] */ r_eax = (u32)(r_esi+0xfffffffau);
    /* 0087aa6b: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0087aa6e: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
L_0087aa71:; BB(0x0087aa71);
    /* 0087aa71: mov esi, dword ptr [edi + 0x10] */ r_esi = R32((u32)(r_edi+0x10u));
    /* 0087aa74: movss xmm1, dword ptr [esi + edx*4] */ { u32 v = R32((u32)(r_esi+r_edx*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087aa79: addss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; }
    /* 0087aa7d: movss dword ptr [ebx + edx*4], xmm1 */ W32((u32)(r_ebx+r_edx*4), xmm[1].d[0]);
    /* 0087aa82: mov esi, dword ptr [edi + 0x10] */ r_esi = R32((u32)(r_edi+0x10u));
    /* 0087aa85: movss xmm2, dword ptr [esi + edx*4 + 4] */ { u32 v = R32((u32)(r_esi+r_edx*4+0x4u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 0087aa8b: addss xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; }
    /* 0087aa8f: movss dword ptr [ebx + edx*4 + 4], xmm2 */ W32((u32)(r_ebx+r_edx*4+0x4u), xmm[2].d[0]);
    /* 0087aa95: mov esi, dword ptr [edi + 0x10] */ r_esi = R32((u32)(r_edi+0x10u));
    /* 0087aa98: movss xmm3, dword ptr [esi + edx*4 + 8] */ { u32 v = R32((u32)(r_esi+r_edx*4+0x8u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 0087aa9e: addss xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 0087aaa2: movss dword ptr [ebx + edx*4 + 8], xmm3 */ W32((u32)(r_ebx+r_edx*4+0x8u), xmm[3].d[0]);
    /* 0087aaa8: mov esi, dword ptr [edi + 0x10] */ r_esi = R32((u32)(r_edi+0x10u));
    /* 0087aaab: movss xmm5, dword ptr [esi + edx*4 + 0xc] */ { u32 v = R32((u32)(r_esi+r_edx*4+0xcu)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 0087aab1: addss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; }
    /* 0087aab5: movss dword ptr [ebx + edx*4 + 0xc], xmm5 */ W32((u32)(r_ebx+r_edx*4+0xcu), xmm[5].d[0]);
    /* 0087aabb: mov esi, dword ptr [edi + 0x10] */ r_esi = R32((u32)(r_edi+0x10u));
    /* 0087aabe: movss xmm4, dword ptr [esi + edx*4 + 0x10] */ { u32 v = R32((u32)(r_esi+r_edx*4+0x10u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 0087aac4: addss xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; }
    /* 0087aac8: movss dword ptr [ebx + edx*4 + 0x10], xmm4 */ W32((u32)(r_ebx+r_edx*4+0x10u), xmm[4].d[0]);
    /* 0087aace: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087aad1: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087aad3: jle 0x87aa71 */ if ((fZ||fS!=fO)) goto L_0087aa71;
L_0087aad5:; BB(0x0087aad5);
    /* 0087aad5: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
L_0087aad8:; BB(0x0087aad8);
    /* 0087aad8: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
L_0087aadb:; BB(0x0087aadb);
    /* 0087aadb: mov ebx, dword ptr [edi + 0x10] */ r_ebx = R32((u32)(r_edi+0x10u));
    /* 0087aade: movss xmm1, dword ptr [ebx + edx*4] */ { u32 v = R32((u32)(r_ebx+r_edx*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087aae3: addss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; }
    /* 0087aae7: movss dword ptr [eax + edx*4], xmm1 */ W32((u32)(r_eax+r_edx*4), xmm[1].d[0]);
    /* 0087aaec: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087aaed: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087aaef: jl 0x87aadb */ if ((fS!=fO)) goto L_0087aadb;
L_0087aaf1:; BB(0x0087aaf1);
    /* 0087aaf1: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
L_0087aaf4:; BB(0x0087aaf4);
    /* 0087aaf4: mov ebx, dword ptr [edi + 8] */ r_ebx = R32((u32)(r_edi+0x8u));
    /* 0087aaf7: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 0087aaf9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087aafb: fld dword ptr [eax + 0x1f0] */ FPUSH(R_F32((u32)(r_eax+0x1f0u)));
    /* 0087ab01: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087ab03: fsub dword ptr [ebp + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x14u));
    /* 0087ab06: jle 0x87acda */ if ((fZ||fS!=fO)) goto L_0087acda;
L_0087ab0c:; BB(0x0087ab0c);
    /* 0087ab0c: fld qword ptr [0x99ab40] */ FPUSH(R_F64((u32)(0x99ab40u)));
    /* 0087ab12: fld qword ptr [0x99ab38] */ FPUSH(R_F64((u32)(0x99ab38u)));
    /* 0087ab18: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0087ab1b: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 0087ab1e: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_0087ab21:; BB(0x0087ab21);
    /* 0087ab21: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0087ab24: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087ab26: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0087ab29: fld dword ptr [ebx + edi] */ FPUSH(R_F32((u32)(r_ebx+r_edi)));
    /* 0087ab2c: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0087ab2f: mov esi, dword ptr [esi + 0x14] */ r_esi = R32((u32)(r_esi+0x14u));
    /* 0087ab32: mov ebx, dword ptr [esi + edi] */ r_ebx = R32((u32)(r_esi+r_edi));
    /* 0087ab35: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087ab36: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087ab39: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ab3b: jle 0x87ab5f */ if ((fZ||fS!=fO)) goto L_0087ab5f;
L_0087ab3d:; BB(0x0087ab3d);
    /* 0087ab3d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
L_0087ab40:; BB(0x0087ab40);
    /* 0087ab40: cmp ebx, dword ptr [esi + edi + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+r_edi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ab44: jne 0x87ab5f */ if (!fZ) goto L_0087ab5f;
L_0087ab46:; BB(0x0087ab46);
    /* 0087ab46: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0087ab49: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087ab4b: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087ab4c: fld dword ptr [ecx + edi] */ FPUSH(R_F32((u32)(r_ecx+r_edi)));
    /* 0087ab4f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087ab51: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ab53: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ab54: fcmovbe st(0), st(1) */ if (fC || fZ) ST(0) = ST(1);
    /* 0087ab56: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087ab58: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087ab5b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ab5d: jg 0x87ab40 */ if ((!fZ&&fS==fO)) goto L_0087ab40;
L_0087ab5f:; BB(0x0087ab5f);
    /* 0087ab5f: fld dword ptr [0x99ac60] */ FPUSH(R_F32((u32)(0x99ac60u)));
    /* 0087ab65: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087ab67: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0087ab6a: fcomp dword ptr [ecx + edi] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_edi))); FPOP();
    /* 0087ab6d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ab6f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ab70: jbe 0x87ac9b */ if ((fC||fZ)) goto L_0087ac9b;
L_0087ab76:; BB(0x0087ab76);
    /* 0087ab76: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0087ab79: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0087ab7c: mov esi, dword ptr [esi + edi] */ r_esi = R32((u32)(r_esi+r_edi));
    /* 0087ab7f: sar ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0087ab81: mov ecx, 0x10 */ r_ecx = 0x10u;
    /* 0087ab86: cmp ebx, 0x11 */ {  u32 a = r_ebx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ab89: jl 0x87ab8d */ if ((fS!=fO)) goto L_0087ab8d;
L_0087ab8b:; BB(0x0087ab8b);
    /* 0087ab8b: mov ebx, ecx */ r_ebx = r_ecx;
L_0087ab8d:; BB(0x0087ab8d);
    /* 0087ab8d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087ab8f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0087ab91: jge 0x87ab95 */ if ((fS==fO)) goto L_0087ab95;
L_0087ab93:; BB(0x0087ab93);
    /* 0087ab93: mov ebx, ecx */ r_ebx = r_ecx;
L_0087ab95:; BB(0x0087ab95);
    /* 0087ab95: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087ab98: mov ebx, dword ptr [ecx + ebx*4] */ r_ebx = R32((u32)(r_ecx+r_ebx*4));
    /* 0087ab9b: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 0087ab9e: mov edi, dword ptr [eax + 0x28] */ r_edi = R32((u32)(r_eax+0x28u));
    /* 0087aba1: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0087aba3: sub esi, dword ptr [eax + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0087aba6: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 0087aba9: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087abab: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 0087abae: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0087abb0: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0087abb2: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 0087abb5: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0087abb8: fstp qword ptr [ebp - 0x34] */ W_F64((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0087abbb: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0087abbe: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087abc1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0087abc3: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0087abc6: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087abcc: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087abd2: jle 0x87abf5 */ if ((fZ||fS!=fO)) goto L_0087abf5;
L_0087abd4:; BB(0x0087abd4);
    /* 0087abd4: mov eax, ebx */ r_eax = r_ebx;
    /* 0087abd6: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087abd8: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087abde: shld eax, esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 b = r_esi; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_eax = r; } }
    /* 0087abe2: or eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0087abe7: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0087abe9: mov ecx, eax */ r_ecx = r_eax;
    /* 0087abeb: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087abed: cmp ebx, 0 */ {  u32 a = r_ebx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087abf0: cmovge ecx, eax */ if ((fS==fO)) { r_ecx = r_eax; }
    /* 0087abf3: jmp 0x87abf7 */ goto L_0087abf7;
L_0087abf5:; BB(0x0087abf5);
    /* 0087abf5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0087abf7:; BB(0x0087abf7);
    /* 0087abf7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0087abf9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087abfb: mov esi, 7 */ r_esi = 0x7u;
    /* 0087ac00: jg 0x87ac04 */ if ((!fZ&&fS==fO)) goto L_0087ac04;
L_0087ac02:; BB(0x0087ac02);
    /* 0087ac02: mov ecx, ebx */ r_ecx = r_ebx;
L_0087ac04:; BB(0x0087ac04);
    /* 0087ac04: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ac07: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087ac0a: jl 0x87ac0e */ if ((fS!=fO)) goto L_0087ac0e;
L_0087ac0c:; BB(0x0087ac0c);
    /* 0087ac0c: mov ecx, esi */ r_ecx = r_esi;
L_0087ac0e:; BB(0x0087ac0e);
    /* 0087ac0e: mov esi, dword ptr [eax + ecx*4] */ r_esi = R32((u32)(r_eax+r_ecx*4));
    /* 0087ac11: movss xmm4, dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 0087ac15: cvttss2si ebx, dword ptr [esi + 4] */ { XMM s; s.d[0] = R32((u32)(r_esi+0x4u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; double v = (double)s.fs[0]; double r = trunc(v); r_ebx = (r >= -2147483648.0 && r < 2147483648.0) ? (u32)(i32)r : 0x80000000u; }
    /* 0087ac1a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0087ac1d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087ac20: cvtsi2ss xmm3, ecx */ xmm[3].fs[0] = (float)(i32)(r_ecx);
    /* 0087ac24: mov edi, eax */ r_edi = r_eax;
    /* 0087ac26: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0087ac28: cvtsi2ss xmm1, edi */ xmm[1].fs[0] = (float)(i32)(r_edi);
    /* 0087ac2c: subss xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; }
    /* 0087ac30: movss xmm2, dword ptr [0x99ac5c] */ { u32 v = R32((u32)(0x99ac5cu)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 0087ac38: addss xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; }
    /* 0087ac3c: cvtsi2ss xmm0, eax */ xmm[0].fs[0] = (float)(i32)(r_eax);
    /* 0087ac40: mulss xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 0087ac44: addss xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 0087ac48: cvttss2si ecx, xmm3 */ { XMM s = xmm[3]; double v = (double)s.fs[0]; double r = trunc(v); r_ecx = (r >= -2147483648.0 && r < 2147483648.0) ? (u32)(i32)r : 0x80000000u; }
    /* 0087ac4c: cvttss2si eax, xmm4 */ { XMM s = xmm[4]; double v = (double)s.fs[0]; double r = trunc(v); r_eax = (r >= -2147483648.0 && r < 2147483648.0) ? (u32)(i32)r : 0x80000000u; }
    /* 0087ac50: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ac52: jge 0x87acde */ if ((fS==fO)) goto L_0087acde;
L_0087ac58:; BB(0x0087ac58);
    /* 0087ac58: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 0087ac5b: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0087ac5e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0087ac61: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
L_0087ac64:; BB(0x0087ac64);
    /* 0087ac64: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087ac65: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087ac67: jle 0x87ac8a */ if ((fZ||fS!=fO)) goto L_0087ac8a;
L_0087ac69:; BB(0x0087ac69);
    /* 0087ac69: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0087ac6c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087ac6e: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087ac71: fadd dword ptr [edi + eax*4 + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_eax*4+0x4u));
    /* 0087ac75: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087ac78: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 0087ac7b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087ac7d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ac7f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ac80: fcmovb st(0), st(1) */ if (fC) ST(0) = ST(1);
    /* 0087ac82: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087ac84: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0087ac87: fstp dword ptr [edi + ecx*4] */ W_F32((u32)(r_edi+r_ecx*4), ST(0)); FPOP();
L_0087ac8a:; BB(0x0087ac8a);
    /* 0087ac8a: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087ac8c: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ac8e: jge 0x87acd3 */ if ((fS==fO)) goto L_0087acd3;
L_0087ac90:; BB(0x0087ac90);
    /* 0087ac90: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ac92: jl 0x87ac64 */ if ((fS!=fO)) goto L_0087ac64;
L_0087ac94:; BB(0x0087ac94);
    /* 0087ac94: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087ac96: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087ac99: jmp 0x87ac9d */ goto L_0087ac9d;
L_0087ac9b:; BB(0x0087ac9b);
    /* 0087ac9b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087ac9d:; BB(0x0087ac9d);
    /* 0087ac9d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087aca0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087aca2: jl 0x87ab21 */ if ((fS!=fO)) goto L_0087ab21;
L_0087aca8:; BB(0x0087aca8);
    /* 0087aca8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087acaa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087acac: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087acae: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087acb1: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
L_0087acb4:; BB(0x0087acb4);
    /* 0087acb4: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087acb7: mov eax, edi */ r_eax = r_edi;
    /* 0087acb9: mov edx, ecx */ r_edx = r_ecx;
    /* 0087acbb: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0087acbe: call 0x87afd4 */ r_esp -= 4; W32(r_esp, 0x87acc3u); f_0087afd4();
    /* 0087acc3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087acc6: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087acc9: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087accc: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087accf: mov esp, ebp */ r_esp = r_ebp;
    /* 0087acd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087acd2: ret  */ FN_RET(0x0087a9dc); r_esp += 4; return;
L_0087acd3:; BB(0x0087acd3);
    /* 0087acd3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087acd5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087acd8: jmp 0x87ac9d */ goto L_0087ac9d;
L_0087acda:; BB(0x0087acda);
    /* 0087acda: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087acdc: jmp 0x87acb4 */ goto L_0087acb4;
L_0087acde:; BB(0x0087acde);
    /* 0087acde: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087ace0: jmp 0x87ac9d */ goto L_0087ac9d;
L_0087ace4:; BB(0x0087ace4);
    /* 0087ace4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087ace5: mov ebp, esp */ r_ebp = r_esp;
    /* 0087ace7: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0087acea: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0087aced: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0087acf0: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0087acf3: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0087acf6: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0087acf8: mov esi, dword ptr [ebx + 0x28] */ r_esi = R32((u32)(r_ebx+0x28u));
    /* 0087acfb: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0087acfe: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087ad00: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x87ad05u); f_00858020();
    /* 0087ad05: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087ad08: mov eax, esp */ r_eax = r_esp;
    /* 0087ad0a: mov edx, eax */ r_edx = r_eax;
    /* 0087ad0c: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0087ad0f: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0087ad12: fadd dword ptr [ebp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x18u));
    /* 0087ad15: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087ad17: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087ad19: jle 0x87ad2c */ if ((fZ||fS!=fO)) goto L_0087ad2c;
L_0087ad1b:; BB(0x0087ad1b);
    /* 0087ad1b: mov ecx, 0xc61c3c00 */ r_ecx = 0xc61c3c00u;
L_0087ad20:; BB(0x0087ad20);
    /* 0087ad20: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 0087ad23: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087ad24: cmp eax, dword ptr [ebx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ad27: jl 0x87ad20 */ if ((fS!=fO)) goto L_0087ad20;
L_0087ad29:; BB(0x0087ad29);
    /* 0087ad29: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
L_0087ad2c:; BB(0x0087ad2c);
    /* 0087ad2c: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0087ad2f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087ad31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ad33: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ad34: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087ad36: ja 0x87ad3a */ if ((!fC&&!fZ)) goto L_0087ad3a;
L_0087ad38:; BB(0x0087ad38);
    /* 0087ad38: fst st(1) */ ST(1) = ST(0);
L_0087ad3a:; BB(0x0087ad3a);
    /* 0087ad3a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087ad3c: mov esi, 0 */ r_esi = 0x0u;
    /* 0087ad41: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087ad43: jle 0x87afc2 */ if ((fZ||fS!=fO)) goto L_0087afc2;
L_0087ad49:; BB(0x0087ad49);
    /* 0087ad49: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ad4c: jl 0x87ada6 */ if ((fS!=fO)) goto L_0087ada6;
L_0087ad4e:; BB(0x0087ad4e);
    /* 0087ad4e: lea eax, [edi - 6] */ r_eax = (u32)(r_edi+0xfffffffau);
    /* 0087ad51: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0087ad54: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0087ad57: jmp 0x87ad5d */ goto L_0087ad5d;
L_0087ad59:; BB(0x0087ad59);
    /* 0087ad59: fstp dword ptr [ecx + esi*4 - 4] */ W_F32((u32)(r_ecx+r_esi*4+0xfffffffcu), ST(0)); FPOP();
L_0087ad5d:; BB(0x0087ad5d);
    /* 0087ad5d: mov edi, dword ptr [ebx + 0x10] */ r_edi = R32((u32)(r_ebx+0x10u));
    /* 0087ad60: fld dword ptr [edi + esi*4] */ FPUSH(R_F32((u32)(r_edi+r_esi*4)));
    /* 0087ad63: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087ad65: fstp dword ptr [ecx + esi*4] */ W_F32((u32)(r_ecx+r_esi*4), ST(0)); FPOP();
    /* 0087ad68: mov edi, dword ptr [ebx + 0x10] */ r_edi = R32((u32)(r_ebx+0x10u));
    /* 0087ad6b: fld dword ptr [edi + esi*4 + 4] */ FPUSH(R_F32((u32)(r_edi+r_esi*4+0x4u)));
    /* 0087ad6f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087ad71: fstp dword ptr [ecx + esi*4 + 4] */ W_F32((u32)(r_ecx+r_esi*4+0x4u), ST(0)); FPOP();
    /* 0087ad75: mov edi, dword ptr [ebx + 0x10] */ r_edi = R32((u32)(r_ebx+0x10u));
    /* 0087ad78: fld dword ptr [edi + esi*4 + 8] */ FPUSH(R_F32((u32)(r_edi+r_esi*4+0x8u)));
    /* 0087ad7c: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087ad7e: fstp dword ptr [ecx + esi*4 + 8] */ W_F32((u32)(r_ecx+r_esi*4+0x8u), ST(0)); FPOP();
    /* 0087ad82: mov edi, dword ptr [ebx + 0x10] */ r_edi = R32((u32)(r_ebx+0x10u));
    /* 0087ad85: fld dword ptr [edi + esi*4 + 0xc] */ FPUSH(R_F32((u32)(r_edi+r_esi*4+0xcu)));
    /* 0087ad89: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087ad8b: fstp dword ptr [ecx + esi*4 + 0xc] */ W_F32((u32)(r_ecx+r_esi*4+0xcu), ST(0)); FPOP();
    /* 0087ad8f: mov edi, dword ptr [ebx + 0x10] */ r_edi = R32((u32)(r_ebx+0x10u));
    /* 0087ad92: fld dword ptr [edi + esi*4 + 0x10] */ FPUSH(R_F32((u32)(r_edi+r_esi*4+0x10u)));
    /* 0087ad96: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087ad98: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087ad9b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ad9d: jle 0x87ad59 */ if ((fZ||fS!=fO)) goto L_0087ad59;
L_0087ad9f:; BB(0x0087ad9f);
    /* 0087ad9f: fstp dword ptr [ecx + esi*4 - 4] */ W_F32((u32)(r_ecx+r_esi*4+0xfffffffcu), ST(0)); FPOP();
    /* 0087ada3: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
L_0087ada6:; BB(0x0087ada6);
    /* 0087ada6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0087ada9: jmp 0x87adaf */ goto L_0087adaf;
L_0087adab:; BB(0x0087adab);
    /* 0087adab: fstp dword ptr [eax + esi*4 - 4] */ W_F32((u32)(r_eax+r_esi*4+0xfffffffcu), ST(0)); FPOP();
L_0087adaf:; BB(0x0087adaf);
    /* 0087adaf: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0087adb2: fld dword ptr [ecx + esi*4] */ FPUSH(R_F32((u32)(r_ecx+r_esi*4)));
    /* 0087adb5: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087adb7: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087adb8: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087adba: jl 0x87adab */ if ((fS!=fO)) goto L_0087adab;
L_0087adbc:; BB(0x0087adbc);
    /* 0087adbc: fstp dword ptr [eax + esi*4 - 4] */ W_F32((u32)(r_eax+r_esi*4+0xfffffffcu), ST(0)); FPOP();
    /* 0087adc0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087adc2: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
L_0087adc5:; BB(0x0087adc5);
    /* 0087adc5: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0087adc8: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0087adca: fld dword ptr [ecx + 0x1f0] */ FPUSH(R_F32((u32)(r_ecx+0x1f0u)));
    /* 0087add0: fsub dword ptr [ebp + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x14u));
    /* 0087add3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0087add5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087add7: jle 0x87afc9 */ if ((fZ||fS!=fO)) goto L_0087afc9;
L_0087addd:; BB(0x0087addd);
    /* 0087addd: fld qword ptr [0x99ab30] */ FPUSH(R_F64((u32)(0x99ab30u)));
    /* 0087ade3: fld qword ptr [0x99ab28] */ FPUSH(R_F64((u32)(0x99ab28u)));
    /* 0087ade9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0087adec: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0087adef: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_0087adf2:; BB(0x0087adf2);
    /* 0087adf2: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 0087adf5: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087adf7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0087adfa: fld dword ptr [edx + edi] */ FPUSH(R_F32((u32)(r_edx+r_edi)));
    /* 0087adfd: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0087ae00: mov ebx, dword ptr [ebx + 0x14] */ r_ebx = R32((u32)(r_ebx+0x14u));
    /* 0087ae03: mov edx, dword ptr [ebx + edi] */ r_edx = R32((u32)(r_ebx+r_edi));
    /* 0087ae06: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087ae07: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087ae0a: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ae0c: jle 0x87ae32 */ if ((fZ||fS!=fO)) goto L_0087ae32;
L_0087ae0e:; BB(0x0087ae0e);
    /* 0087ae0e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
L_0087ae11:; BB(0x0087ae11);
    /* 0087ae11: cmp edx, dword ptr [ebx + edi + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+r_edi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ae15: jne 0x87ae32 */ if (!fZ) goto L_0087ae32;
L_0087ae17:; BB(0x0087ae17);
    /* 0087ae17: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 0087ae1a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087ae1c: fld dword ptr [ecx + edi] */ FPUSH(R_F32((u32)(r_ecx+r_edi)));
    /* 0087ae1f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087ae21: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ae23: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ae24: jbe 0x87ae28 */ if ((fC||fZ)) goto L_0087ae28;
L_0087ae26:; BB(0x0087ae26);
    /* 0087ae26: fst st(1) */ ST(1) = ST(0);
L_0087ae28:; BB(0x0087ae28);
    /* 0087ae28: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087ae2a: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087ae2b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087ae2e: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ae30: jg 0x87ae11 */ if ((!fZ&&fS==fO)) goto L_0087ae11;
L_0087ae32:; BB(0x0087ae32);
    /* 0087ae32: fld dword ptr [0x99ac54] */ FPUSH(R_F32((u32)(0x99ac54u)));
    /* 0087ae38: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087ae3a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0087ae3d: fcomp dword ptr [ecx + edi] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_edi))); FPOP();
    /* 0087ae40: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087ae42: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087ae43: jbe 0x87af85 */ if ((fC||fZ)) goto L_0087af85;
L_0087ae49:; BB(0x0087ae49);
    /* 0087ae49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0087ae4c: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0087ae4f: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0087ae51: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ae54: jl 0x87ae5b */ if ((fS!=fO)) goto L_0087ae5b;
L_0087ae56:; BB(0x0087ae56);
    /* 0087ae56: mov edx, 0x10 */ r_edx = 0x10u;
L_0087ae5b:; BB(0x0087ae5b);
    /* 0087ae5b: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 0087ae5e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087ae60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0087ae62: jge 0x87ae66 */ if ((fS==fO)) goto L_0087ae66;
L_0087ae64:; BB(0x0087ae64);
    /* 0087ae64: mov edx, ecx */ r_edx = r_ecx;
L_0087ae66:; BB(0x0087ae66);
    /* 0087ae66: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087ae69: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 0087ae6c: mov esi, dword ptr [ebx + edi] */ r_esi = R32((u32)(r_ebx+r_edi));
    /* 0087ae6f: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0087ae72: sub esi, dword ptr [ebx + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0087ae75: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0087ae78: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0087ae7b: mov edi, dword ptr [ebx + 0x24] */ r_edi = R32((u32)(r_ebx+0x24u));
    /* 0087ae7e: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 0087ae81: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087ae83: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0087ae85: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0087ae87: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0087ae89: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 0087ae8c: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 0087ae90: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087ae95: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0087ae98: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 0087ae9b: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0087ae9e: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 0087aea1: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0087aea4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087aea6: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0087aeab: jg 0x87aeaf */ if ((!fZ&&fS==fO)) goto L_0087aeaf;
L_0087aead:; BB(0x0087aead);
    /* 0087aead: mov eax, ecx */ r_eax = r_ecx;
L_0087aeaf:; BB(0x0087aeaf);
    /* 0087aeaf: mov ecx, 7 */ r_ecx = 0x7u;
    /* 0087aeb4: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087aeb7: jl 0x87aebb */ if ((fS!=fO)) goto L_0087aebb;
L_0087aeb9:; BB(0x0087aeb9);
    /* 0087aeb9: mov eax, ecx */ r_eax = r_ecx;
L_0087aebb:; BB(0x0087aebb);
    /* 0087aebb: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0087aebe: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0087aec1: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 0087aec4: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 0087aec8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087aecd: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0087aed0: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 0087aed3: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0087aed6: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 0087aed9: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0087aedc: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0087aede: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 0087aee1: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 0087aee4: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0087aee6: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0087aee9: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 0087aeec: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0087aeee: fld dword ptr [0x99ac50] */ FPUSH(R_F32((u32)(0x99ac50u)));
    /* 0087aef4: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087aef6: fild dword ptr [ebx + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x24u)));
    /* 0087aef9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0087aefb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087aefd: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 0087af00: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 0087af04: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087af09: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0087af0c: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 0087af0f: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0087af12: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 0087af15: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0087af18: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 0087af1b: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 0087af1f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087af24: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0087af27: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 0087af2a: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0087af2d: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 0087af30: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0087af33: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087af35: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087af38: jge 0x87afcd */ if ((fS==fO)) goto L_0087afcd;
L_0087af3e:; BB(0x0087af3e);
    /* 0087af3e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0087af41: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 0087af44: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087af47: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
L_0087af4a:; BB(0x0087af4a);
    /* 0087af4a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087af4b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087af4d: jle 0x87af74 */ if ((fZ||fS!=fO)) goto L_0087af74;
L_0087af4f:; BB(0x0087af4f);
    /* 0087af4f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0087af52: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087af54: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0087af57: fadd dword ptr [edi + eax*4 + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_eax*4+0x4u));
    /* 0087af5b: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087af5e: fld dword ptr [edi + ebx*4] */ FPUSH(R_F32((u32)(r_edi+r_ebx*4)));
    /* 0087af61: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087af63: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087af65: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087af66: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087af68: ja 0x87af6c */ if ((!fC&&!fZ)) goto L_0087af6c;
L_0087af6a:; BB(0x0087af6a);
    /* 0087af6a: fst st(1) */ ST(1) = ST(0);
L_0087af6c:; BB(0x0087af6c);
    /* 0087af6c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087af6e: fstp dword ptr [edi + ebx*4] */ W_F32((u32)(r_edi+r_ebx*4), ST(0)); FPOP();
    /* 0087af71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_0087af74:; BB(0x0087af74);
    /* 0087af74: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0087af76: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087af78: jge 0x87afbb */ if ((fS==fO)) goto L_0087afbb;
L_0087af7a:; BB(0x0087af7a);
    /* 0087af7a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087af7c: jl 0x87af4a */ if ((fS!=fO)) goto L_0087af4a;
L_0087af7e:; BB(0x0087af7e);
    /* 0087af7e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087af80: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087af83: jmp 0x87af87 */ goto L_0087af87;
L_0087af85:; BB(0x0087af85);
    /* 0087af85: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087af87:; BB(0x0087af87);
    /* 0087af87: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087af8a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087af8c: jl 0x87adf2 */ if ((fS!=fO)) goto L_0087adf2;
L_0087af92:; BB(0x0087af92);
    /* 0087af92: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087af94: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087af96: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087af98: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087af9b: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
L_0087af9e:; BB(0x0087af9e);
    /* 0087af9e: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087afa1: mov eax, ebx */ r_eax = r_ebx;
    /* 0087afa3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0087afa6: call 0x87afd4 */ r_esp -= 4; W32(r_esp, 0x87afabu); f_0087afd4();
    /* 0087afab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087afae: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087afb1: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087afb4: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087afb7: mov esp, ebp */ r_esp = r_ebp;
    /* 0087afb9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087afba: ret  */ FN_RET(0x0087a9dc); r_esp += 4; return;
L_0087afbb:; BB(0x0087afbb);
    /* 0087afbb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087afbd: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087afc0: jmp 0x87af87 */ goto L_0087af87;
L_0087afc2:; BB(0x0087afc2);
    /* 0087afc2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087afc4: jmp 0x87adc5 */ goto L_0087adc5;
L_0087afc9:; BB(0x0087afc9);
    /* 0087afc9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087afcb: jmp 0x87af9e */ goto L_0087af9e;
L_0087afcd:; BB(0x0087afcd);
    /* 0087afcd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087afcf: jmp 0x87af87 */ goto L_0087af87;
}

void f_0087afd4(void) /* sub_87AFD4 */
{
    FN_ENTER(0x0087afd4);
    /* 0087afd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087afd5: mov ebp, esp */ r_ebp = r_esp;
    /* 0087afd7: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0087afda: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 0087afdd: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 0087afe0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0087afe3: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0087afe6: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0087afe9: mov ebx, eax */ r_ebx = r_eax;
    /* 0087afeb: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0087afee: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0087aff1: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 0087aff4: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0087aff7: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0087affa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087affc: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087affe: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0087b001: mov eax, edi */ r_eax = r_edi;
    /* 0087b003: mov dword ptr [ebp - 0x30], esp */ W32((u32)(r_ebp+0xffffffd0u), r_esp);
    /* 0087b006: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x87b00bu); f_00858020();
    /* 0087b00b: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087b00e: mov eax, esp */ r_eax = r_esp;
    /* 0087b010: mov esi, eax */ r_esi = r_eax;
    /* 0087b012: mov eax, edi */ r_eax = r_edi;
    /* 0087b014: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x87b019u); f_00858020();
    /* 0087b019: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087b01c: mov eax, esp */ r_eax = r_esp;
    /* 0087b01e: mov ecx, eax */ r_ecx = r_eax;
    /* 0087b020: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0087b022: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087b024: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0087b027: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087b029: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087b02c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087b02e: jle 0x87b0c1 */ if ((fZ||fS!=fO)) goto L_0087b0c1;
L_0087b034:; BB(0x0087b034);
    /* 0087b034: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
L_0087b037:; BB(0x0087b037);
    /* 0087b037: mov dword ptr [esi + edi*4], edx */ W32((u32)(r_esi+r_edi*4), r_edx);
    /* 0087b03a: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087b03d: mov ebx, dword ptr [ebx + edx*4] */ r_ebx = R32((u32)(r_ebx+r_edx*4));
    /* 0087b040: mov eax, edi */ r_eax = r_edi;
    /* 0087b042: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087b043: mov dword ptr [ecx + eax*4], ebx */ W32((u32)(r_ecx+r_eax*4), r_ebx);
L_0087b046:; BB(0x0087b046);
    /* 0087b046: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087b047: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087b04a: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b04c: jge 0x87b0be */ if ((fS==fO)) goto L_0087b0be;
L_0087b04e:; BB(0x0087b04e);
    /* 0087b04e: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b051: jl 0x87b037 */ if ((fS!=fO)) goto L_0087b037;
L_0087b053:; BB(0x0087b053);
    /* 0087b053: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087b056: fld dword ptr [ebx + edx*4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4)));
    /* 0087b059: jmp 0x87b05c */ goto L_0087b05c;
L_0087b05b:; BB(0x0087b05b);
    /* 0087b05b: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
L_0087b05c:; BB(0x0087b05c);
    /* 0087b05c: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 0087b05f: fld dword ptr [ecx + edi*4 - 4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4+0xfffffffcu)));
    /* 0087b063: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087b065: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b067: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b068: ja 0x87b0a9 */ if ((!fC&&!fZ)) goto L_0087b0a9;
L_0087b06a:; BB(0x0087b06a);
    /* 0087b06a: mov ebx, dword ptr [esi + ebx*2 - 4] */ r_ebx = R32((u32)(r_esi+r_ebx*2+0xfffffffcu));
    /* 0087b06e: add ebx, dword ptr [ebp - 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0087b071: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b073: jge 0x87b0a3 */ if ((fS==fO)) goto L_0087b0a3;
L_0087b075:; BB(0x0087b075);
    /* 0087b075: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b078: jle 0x87b0a3 */ if ((fZ||fS!=fO)) goto L_0087b0a3;
L_0087b07a:; BB(0x0087b07a);
    /* 0087b07a: fcom dword ptr [ecx + edi*4 - 8] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_edi*4+0xfffffff8u))); 
    /* 0087b07e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b080: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b081: ja 0x87b0a3 */ if ((!fC&&!fZ)) goto L_0087b0a3;
L_0087b083:; BB(0x0087b083);
    /* 0087b083: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b085: mov ebx, dword ptr [esi + edi*4 - 8] */ r_ebx = R32((u32)(r_esi+r_edi*4+0xfffffff8u));
    /* 0087b089: add ebx, dword ptr [ebp - 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0087b08c: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b08e: jl 0x87b05b */ if ((fS!=fO)) goto L_0087b05b;
L_0087b090:; BB(0x0087b090);
    /* 0087b090: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087b092:; BB(0x0087b092);
    /* 0087b092: mov dword ptr [esi + edi*4], edx */ W32((u32)(r_esi+r_edi*4), r_edx);
    /* 0087b095: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087b098: mov ebx, dword ptr [ebx + edx*4] */ r_ebx = R32((u32)(r_ebx+r_edx*4));
    /* 0087b09b: mov eax, edi */ r_eax = r_edi;
    /* 0087b09d: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087b09e: mov dword ptr [ecx + eax*4], ebx */ W32((u32)(r_ecx+r_eax*4), r_ebx);
    /* 0087b0a1: jmp 0x87b046 */ goto L_0087b046;
L_0087b0a3:; BB(0x0087b0a3);
    /* 0087b0a3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087b0a5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b0a7: jmp 0x87b092 */ goto L_0087b092;
L_0087b0a9:; BB(0x0087b0a9);
    /* 0087b0a9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b0ab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b0ad: mov dword ptr [esi + ebx*2], edx */ W32((u32)(r_esi+r_ebx*2), r_edx);
    /* 0087b0b0: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087b0b3: mov ebx, dword ptr [ebx + edx*4] */ r_ebx = R32((u32)(r_ebx+r_edx*4));
    /* 0087b0b6: mov eax, edi */ r_eax = r_edi;
    /* 0087b0b8: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087b0b9: mov dword ptr [ecx + eax*4], ebx */ W32((u32)(r_ecx+r_eax*4), r_ebx);
    /* 0087b0bc: jmp 0x87b046 */ goto L_0087b046;
L_0087b0be:; BB(0x0087b0be);
    /* 0087b0be: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
L_0087b0c1:; BB(0x0087b0c1);
    /* 0087b0c1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087b0c3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087b0c5: jle 0x87b184 */ if ((fZ||fS!=fO)) goto L_0087b184;
L_0087b0cb:; BB(0x0087b0cb);
    /* 0087b0cb: lea eax, [edi - 1] */ r_eax = (u32)(r_edi+0xffffffffu);
    /* 0087b0ce: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0087b0d1: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0087b0d4: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0087b0d7: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0087b0da: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
L_0087b0dd:; BB(0x0087b0dd);
    /* 0087b0dd: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087b0e0: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b0e2: jge 0x87b0fe */ if ((fS==fO)) goto L_0087b0fe;
L_0087b0e4:; BB(0x0087b0e4);
    /* 0087b0e4: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0087b0e7: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087b0e9: fld dword ptr [ecx + esi + 4] */ FPUSH(R_F32((u32)(r_ecx+r_esi+0x4u)));
    /* 0087b0ed: fcomp dword ptr [ecx + esi] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_esi))); FPOP();
    /* 0087b0f0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b0f2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b0f3: jbe 0x87b103 */ if ((fC||fZ)) goto L_0087b103;
L_0087b0f5:; BB(0x0087b0f5);
    /* 0087b0f5: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087b0f8: mov eax, dword ptr [ebx + esi + 4] */ r_eax = R32((u32)(r_ebx+r_esi+0x4u));
    /* 0087b0fc: jmp 0x87b110 */ goto L_0087b110;
L_0087b0fe:; BB(0x0087b0fe);
    /* 0087b0fe: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0087b101: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0087b103:; BB(0x0087b103);
    /* 0087b103: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087b106: mov eax, dword ptr [ebx + esi] */ r_eax = R32((u32)(r_ebx+r_esi));
    /* 0087b109: mov ebx, dword ptr [ebp - 0x38] */ r_ebx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0087b10c: lea eax, [ebx + eax + 1] */ r_eax = (u32)(r_ebx+r_eax+0x1u);
L_0087b110:; BB(0x0087b110);
    /* 0087b110: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087b113: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b115: jge 0x87b119 */ if ((fS==fO)) goto L_0087b119;
L_0087b117:; BB(0x0087b117);
    /* 0087b117: mov eax, ebx */ r_eax = r_ebx;
L_0087b119:; BB(0x0087b119);
    /* 0087b119: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b11b: jge 0x87b175 */ if ((fS==fO)) goto L_0087b175;
L_0087b11d:; BB(0x0087b11d);
    /* 0087b11d: mov ebx, eax */ r_ebx = r_eax;
    /* 0087b11f: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0087b121: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b124: jl 0x87b161 */ if ((fS!=fO)) goto L_0087b161;
L_0087b126:; BB(0x0087b126);
    /* 0087b126: lea ebx, [eax - 6] */ r_ebx = (u32)(r_eax+0xfffffffau);
    /* 0087b129: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0087b12c: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0087b12f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
L_0087b132:; BB(0x0087b132);
    /* 0087b132: mov eax, dword ptr [ecx + esi] */ r_eax = R32((u32)(r_ecx+r_esi));
    /* 0087b135: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
    /* 0087b138: mov eax, dword ptr [ecx + esi] */ r_eax = R32((u32)(r_ecx+r_esi));
    /* 0087b13b: mov dword ptr [edx + edi*4 + 4], eax */ W32((u32)(r_edx+r_edi*4+0x4u), r_eax);
    /* 0087b13f: mov eax, dword ptr [ecx + esi] */ r_eax = R32((u32)(r_ecx+r_esi));
    /* 0087b142: mov dword ptr [edx + edi*4 + 8], eax */ W32((u32)(r_edx+r_edi*4+0x8u), r_eax);
    /* 0087b146: mov eax, dword ptr [ecx + esi] */ r_eax = R32((u32)(r_ecx+r_esi));
    /* 0087b149: mov dword ptr [edx + edi*4 + 0xc], eax */ W32((u32)(r_edx+r_edi*4+0xcu), r_eax);
    /* 0087b14d: mov eax, dword ptr [ecx + esi] */ r_eax = R32((u32)(r_ecx+r_esi));
    /* 0087b150: mov dword ptr [edx + edi*4 + 0x10], eax */ W32((u32)(r_edx+r_edi*4+0x10u), r_eax);
    /* 0087b154: add edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087b157: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b159: jle 0x87b132 */ if ((fZ||fS!=fO)) goto L_0087b132;
L_0087b15b:; BB(0x0087b15b);
    /* 0087b15b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087b15e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
L_0087b161:; BB(0x0087b161);
    /* 0087b161: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0087b164: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
L_0087b167:; BB(0x0087b167);
    /* 0087b167: mov edx, dword ptr [ecx + esi] */ r_edx = R32((u32)(r_ecx+r_esi));
    /* 0087b16a: mov dword ptr [ebx + edi*4], edx */ W32((u32)(r_ebx+r_edi*4), r_edx);
    /* 0087b16d: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087b16e: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b170: jl 0x87b167 */ if ((fS!=fO)) goto L_0087b167;
L_0087b172:; BB(0x0087b172);
    /* 0087b172: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
L_0087b175:; BB(0x0087b175);
    /* 0087b175: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087b176: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087b179: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b17b: jl 0x87b0dd */ if ((fS!=fO)) goto L_0087b0dd;
L_0087b181:; BB(0x0087b181);
    /* 0087b181: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
L_0087b184:; BB(0x0087b184);
    /* 0087b184: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087b187: mov esp, eax */ r_esp = r_eax;
    /* 0087b189: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 0087b18c: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 0087b18f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0087b191: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087b193: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0087b196: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0087b198: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087b19a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0087b19c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b19f: jle 0x87b2af */ if ((fZ||fS!=fO)) goto L_0087b2af;
L_0087b1a5:; BB(0x0087b1a5);
    /* 0087b1a5: mov esi, 1 */ r_esi = 0x1u;
    /* 0087b1aa: fld dword ptr [0x99ac4c] */ FPUSH(R_F32((u32)(0x99ac4cu)));
    /* 0087b1b0: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0087b1b3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0087b1b6: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 0087b1b9: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 0087b1bc: jmp 0x87b1ca */ goto L_0087b1ca;
L_0087b1be:; BB(0x0087b1be);
    /* 0087b1be: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0087b1c1: mov edi, dword ptr [eax + 0x14] */ r_edi = R32((u32)(r_eax+0x14u));
    /* 0087b1c4: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0087b1c7: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_0087b1ca:; BB(0x0087b1ca);
    /* 0087b1ca: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0087b1cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087b1d0: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087b1d3: fld dword ptr [ecx + esi*4] */ FPUSH(R_F32((u32)(r_ecx+r_esi*4)));
    /* 0087b1d6: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0087b1d9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087b1db: mov eax, dword ptr [edi + ecx] */ r_eax = R32((u32)(r_edi+r_ecx));
    /* 0087b1de: mov edi, dword ptr [edi + ecx + 4] */ r_edi = R32((u32)(r_edi+r_ecx+0x4u));
    /* 0087b1e2: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087b1e4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0087b1e7: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0087b1e9: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0087b1ec: sub edi, dword ptr [ebp - 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0087b1ef: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0087b1f2: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0087b1f5: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 0087b1f8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087b1fa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b1fc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b1fd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087b1ff: jb 0x87b203 */ if (fC) goto L_0087b203;
L_0087b201:; BB(0x0087b201);
    /* 0087b201: fst st(1) */ ST(1) = ST(0);
L_0087b203:; BB(0x0087b203);
    /* 0087b203: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b205: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b207: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087b20a: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0087b20d: jge 0x87b253 */ if ((fS==fO)) goto L_0087b253;
L_0087b20f:; BB(0x0087b20f);
    /* 0087b20f: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0087b212: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087b215: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0087b218: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087b21b: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 0087b21e: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
L_0087b221:; BB(0x0087b221);
    /* 0087b221: fld dword ptr [edx + ebx*4 + 4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4+0x4u)));
    /* 0087b225: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0087b226: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0087b228: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b22a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b22b: jbe 0x87b234 */ if ((fC||fZ)) goto L_0087b234;
L_0087b22d:; BB(0x0087b22d);
    /* 0087b22d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087b22f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b231: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b232: jb 0x87b23f */ if (fC) goto L_0087b23f;
L_0087b234:; BB(0x0087b234);
    /* 0087b234: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087b236: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0087b238: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b23a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b23b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087b23d: jne 0x87b241 */ if (!fZ) goto L_0087b241;
L_0087b23f:; BB(0x0087b23f);
    /* 0087b23f: fst st(1) */ ST(1) = ST(0);
L_0087b241:; BB(0x0087b241);
    /* 0087b241: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b243: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b245: jl 0x87b221 */ if ((fS!=fO)) goto L_0087b221;
L_0087b247:; BB(0x0087b247);
    /* 0087b247: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0087b24a: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087b24d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087b250: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
L_0087b253:; BB(0x0087b253);
    /* 0087b253: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087b256: add eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087b259: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0087b25c: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b25e: jl 0x87b274 */ if ((fS!=fO)) goto L_0087b274;
L_0087b260:; BB(0x0087b260);
    /* 0087b260: jmp 0x87b2f0 */ goto L_0087b2f0;
L_0087b265:; BB(0x0087b265);
    /* 0087b265: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0087b268: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 0087b26b: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0087b26e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087b270: mov edi, dword ptr [eax + ecx] */ r_edi = R32((u32)(r_eax+r_ecx));
    /* 0087b273: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0087b274:; BB(0x0087b274);
    /* 0087b274: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087b277: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b279: jg 0x87b2ec */ if ((!fZ&&fS==fO)) goto L_0087b2ec;
L_0087b27b:; BB(0x0087b27b);
    /* 0087b27b: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0087b27e: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0087b281: fld dword ptr [ecx + ebx] */ FPUSH(R_F32((u32)(r_ecx+r_ebx)));
    /* 0087b284: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087b286: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b288: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b289: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087b28b: ja 0x87b28f */ if ((!fC&&!fZ)) goto L_0087b28f;
L_0087b28d:; BB(0x0087b28d);
    /* 0087b28d: fst st(1) */ ST(1) = ST(0);
L_0087b28f:; BB(0x0087b28f);
    /* 0087b28f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087b291: fstp dword ptr [ecx + ebx] */ W_F32((u32)(r_ecx+r_ebx), ST(0)); FPOP();
    /* 0087b294: mov ebx, esi */ r_ebx = r_esi;
    /* 0087b296: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0087b298: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b29a: jl 0x87b265 */ if ((fS!=fO)) goto L_0087b265;
L_0087b29c:; BB(0x0087b29c);
    /* 0087b29c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b29e: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0087b29f:; BB(0x0087b29f);
    /* 0087b29f: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087b2a1: jl 0x87b1be */ if ((fS!=fO)) goto L_0087b1be;
L_0087b2a7:; BB(0x0087b2a7);
    /* 0087b2a7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b2a9: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 0087b2ac: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
L_0087b2af:; BB(0x0087b2af);
    /* 0087b2af: mov esi, dword ptr [ebx + 0x28] */ r_esi = R32((u32)(r_ebx+0x28u));
    /* 0087b2b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087b2b5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0087b2b8: fld dword ptr [ecx + esi*4 - 4] */ FPUSH(R_F32((u32)(r_ecx+r_esi*4+0xfffffffcu)));
    /* 0087b2bc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087b2be: jge 0x87b2f4 */ if ((fS==fO)) goto L_0087b2f4;
L_0087b2c0:; BB(0x0087b2c0);
    /* 0087b2c0: mov ecx, edi */ r_ecx = r_edi;
    /* 0087b2c2: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
L_0087b2c5:; BB(0x0087b2c5);
    /* 0087b2c5: fld dword ptr [edx + ecx*4] */ FPUSH(R_F32((u32)(r_edx+r_ecx*4)));
    /* 0087b2c8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087b2ca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087b2cc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087b2cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087b2cf: ja 0x87b2d3 */ if ((!fC&&!fZ)) goto L_0087b2d3;
L_0087b2d1:; BB(0x0087b2d1);
    /* 0087b2d1: fst st(1) */ ST(1) = ST(0);
L_0087b2d3:; BB(0x0087b2d3);
    /* 0087b2d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087b2d5: fstp dword ptr [edx + ecx*4] */ W_F32((u32)(r_edx+r_ecx*4), ST(0)); FPOP();
    /* 0087b2d8: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087b2d9: cmp ecx, dword ptr [ebx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087b2db: jl 0x87b2c5 */ if ((fS!=fO)) goto L_0087b2c5;
L_0087b2dd:; BB(0x0087b2dd);
    /* 0087b2dd: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087b2df:; BB(0x0087b2df);
    /* 0087b2df: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087b2e2: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0087b2e5: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087b2e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0087b2ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087b2eb: ret  */ FN_RET(0x0087afd4); r_esp += 4; return;
L_0087b2ec:; BB(0x0087b2ec);
    /* 0087b2ec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b2ee: jmp 0x87b29f */ goto L_0087b29f;
L_0087b2f0:; BB(0x0087b2f0);
    /* 0087b2f0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b2f2: jmp 0x87b29f */ goto L_0087b29f;
L_0087b2f4:; BB(0x0087b2f4);
    /* 0087b2f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087b2f6: jmp 0x87b2df */ goto L_0087b2df;
}

