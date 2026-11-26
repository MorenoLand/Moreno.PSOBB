#include "protos.h"

void f_0051f06c(void) /* sub_51F06C */
{
    FN_ENTER(0x0051f06c);
    /* 0051f06c: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051f06f: mov edx, ecx */ r_edx = r_ecx;
    /* 0051f071: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 0051f077: fadd dword ptr [edx + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xc8u));
    /* 0051f07d: fld dword ptr [edx + 0x100] */ FPUSH(R_F32((u32)(r_edx+0x100u)));
    /* 0051f083: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0051f085: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051f087: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051f088: jae 0x51f094 */ if (!fC) goto L_0051f094;
L_0051f08a:; BB(0x0051f08a);
    /* 0051f08a: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0051f08c: fstp dword ptr [edx + 0xc0] */ W_F32((u32)(r_edx+0xc0u), ST(0)); FPOP();
    /* 0051f092: jmp 0x51f09c */ goto L_0051f09c;
L_0051f094:; BB(0x0051f094);
    /* 0051f094: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051f096: fstp dword ptr [edx + 0xc0] */ W_F32((u32)(r_edx+0xc0u), ST(0)); FPOP();
L_0051f09c:; BB(0x0051f09c);
    /* 0051f09c: mov ecx, dword ptr [edx + 0x104] */ r_ecx = R32((u32)(r_edx+0x104u));
    /* 0051f0a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051f0a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051f0a6: jle 0x51f262 */ if ((fZ||fS!=fO)) goto L_0051f262;
L_0051f0ac:; BB(0x0051f0ac);
    /* 0051f0ac: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0051f0b0: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 0051f0b4: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0051f0b8: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 0051f0bc: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 0051f0c0: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0051f0c3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051f0c5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051f0c7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051f0c9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051f0cb: mov ebp, edx */ r_ebp = r_edx;
    /* 0051f0cd: mov ebx, ecx */ r_ebx = r_ecx;
L_0051f0cf:; BB(0x0051f0cf);
    /* 0051f0cf: mov eax, dword ptr [ebp + 0xfc] */ r_eax = R32((u32)(r_ebp+0xfcu));
    /* 0051f0d5: mov esi, dword ptr [eax + ebx] */ r_esi = R32((u32)(r_eax+r_ebx));
    /* 0051f0d8: mov ecx, dword ptr [eax + ebx + 0xc] */ r_ecx = R32((u32)(r_eax+r_ebx+0xcu));
    /* 0051f0dc: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0051f0df: mov edi, dword ptr [eax + ebx + 4] */ r_edi = R32((u32)(r_eax+r_ebx+0x4u));
    /* 0051f0e3: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0051f0e7: mov edx, dword ptr [eax + ebx + 8] */ r_edx = R32((u32)(r_eax+r_ebx+0x8u));
    /* 0051f0eb: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0051f0ef: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0051f0f3: mov ecx, dword ptr [eax + ebx + 0x10] */ r_ecx = R32((u32)(r_eax+r_ebx+0x10u));
    /* 0051f0f7: mov eax, dword ptr [eax + ebx + 0x14] */ r_eax = R32((u32)(r_eax+r_ebx+0x14u));
    /* 0051f0fb: mov dword ptr [ebp + 0x44], esi */ W32((u32)(r_ebp+0x44u), r_esi);
    /* 0051f0fe: mov dword ptr [ebp + 0x48], edi */ W32((u32)(r_ebp+0x48u), r_edi);
    /* 0051f101: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0051f105: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0051f109: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0051f10c: mov dword ptr [ebp + 0x4c], edx */ W32((u32)(r_ebp+0x4cu), r_edx);
    /* 0051f10f: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0051f113: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x51f118u); f_0082ebac();
    /* 0051f118: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 0051f11d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0051f11e: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0051f122: mov esi, dword ptr [ebp + 0x104] */ r_esi = R32((u32)(r_ebp+0x104u));
    /* 0051f128: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0051f128, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0051f128, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0051f12a: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f12c: je 0x51f15a */ if (fZ) goto L_0051f15a;
L_0051f12e:; BB(0x0051f12e);
    /* 0051f12e: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0051f131: fcomp dword ptr [esp + 4] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4u))); FPOP();
    /* 0051f135: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051f137: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051f138: ja 0x51f147 */ if ((!fC&&!fZ)) goto L_0051f147;
L_0051f13a:; BB(0x0051f13a);
    /* 0051f13a: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0051f142: jmp 0x51f1fc */ goto L_0051f1fc;
L_0051f147:; BB(0x0051f147);
    /* 0051f147: fld dword ptr [0x9215e0] */ FPUSH(R_F32((u32)(0x9215e0u)));
    /* 0051f14d: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 0051f151: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0051f155: jmp 0x51f1fc */ goto L_0051f1fc;
L_0051f15a:; BB(0x0051f15a);
    /* 0051f15a: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 0051f15d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f15f: lea eax, [ebp + 0x10c] */ r_eax = (u32)(r_ebp+0x10cu);
    /* 0051f165: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f166: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051f167: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x51f16cu); f_007806dc();
    /* 0051f16c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051f16f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f171: je 0x51f288 */ if (fZ) goto L_0051f288;
L_0051f177:; BB(0x0051f177);
    /* 0051f177: fld dword ptr [0x9215e0] */ FPUSH(R_F32((u32)(0x9215e0u)));
    /* 0051f17d: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 0051f181: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 0051f184: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0051f186: fld dword ptr [ebp + 0x48] */ FPUSH(R_F32((u32)(r_ebp+0x48u)));
    /* 0051f189: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0051f18b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0051f18e: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 0051f191: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0051f194: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0051f198: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0051f19b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051f19d: fst dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0));
    /* 0051f1a0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0051f1a4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051f1a6: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0051f1a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051f1aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051f1ab: jae 0x51f1b9 */ if (!fC) goto L_0051f1b9;
L_0051f1ad:; BB(0x0051f1ad);
    /* 0051f1ad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051f1af: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0051f1b3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0051f1b7: jmp 0x51f1c5 */ goto L_0051f1c5;
L_0051f1b9:; BB(0x0051f1b9);
    /* 0051f1b9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0051f1bb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051f1bd: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
L_0051f1c5:; BB(0x0051f1c5);
    /* 0051f1c5: mov edi, dword ptr [ebp + 0xfc] */ r_edi = R32((u32)(r_ebp+0xfcu));
    /* 0051f1cb: mov dword ptr [edi + ebx], edx */ W32((u32)(r_edi+r_ebx), r_edx);
    /* 0051f1ce: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0051f1d2: mov dword ptr [edi + ebx + 4], eax */ W32((u32)(r_edi+r_ebx+0x4u), r_eax);
    /* 0051f1d6: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0051f1da: mov dword ptr [edi + ebx + 8], esi */ W32((u32)(r_edi+r_ebx+0x8u), r_esi);
    /* 0051f1de: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0051f1e2: mov esi, dword ptr [ebp + 0xfc] */ r_esi = R32((u32)(r_ebp+0xfcu));
    /* 0051f1e8: mov dword ptr [esi + ebx + 0xc], eax */ W32((u32)(r_esi+r_ebx+0xcu), r_eax);
    /* 0051f1ec: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051f1f0: mov dword ptr [esi + ebx + 0x10], eax */ W32((u32)(r_esi+r_ebx+0x10u), r_eax);
    /* 0051f1f4: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0051f1f8: mov dword ptr [esi + ebx + 0x14], eax */ W32((u32)(r_esi+r_ebx+0x14u), r_eax);
L_0051f1fc:; BB(0x0051f1fc);
    /* 0051f1fc: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0051f1ff: mov edx, dword ptr [ebp + 0xfc] */ r_edx = R32((u32)(r_ebp+0xfcu));
    /* 0051f205: mov dword ptr [edx + ebx], eax */ W32((u32)(r_edx+r_ebx), r_eax);
    /* 0051f208: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0051f20c: mov dword ptr [edx + ebx + 4], esi */ W32((u32)(r_edx+r_ebx+0x4u), r_esi);
    /* 0051f210: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0051f214: mov dword ptr [edx + ebx + 8], edi */ W32((u32)(r_edx+r_ebx+0x8u), r_edi);
    /* 0051f218: mov esi, dword ptr [ebp + 0xfc] */ r_esi = R32((u32)(r_ebp+0xfcu));
    /* 0051f21e: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0051f222: mov dword ptr [esi + ebx + 0xc], eax */ W32((u32)(r_esi+r_ebx+0xcu), r_eax);
    /* 0051f226: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051f22a: mov dword ptr [esi + ebx + 0x10], eax */ W32((u32)(r_esi+r_ebx+0x10u), r_eax);
    /* 0051f22e: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0051f232: mov dword ptr [esi + ebx + 0x14], eax */ W32((u32)(r_esi+r_ebx+0x14u), r_eax);
    /* 0051f236: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0051f23a: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0051f23d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051f240: cmp eax, dword ptr [ebp + 0x104] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x104u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051f246: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0051f24a: jl 0x51f0cf */ if ((fS!=fO)) goto L_0051f0cf;
L_0051f250:; BB(0x0051f250);
    /* 0051f250: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0051f254: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0051f258: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0051f25c: mov edx, ebp */ r_edx = r_ebp;
    /* 0051f25e: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
L_0051f262:; BB(0x0051f262);
    /* 0051f262: mov ecx, dword ptr [edx + 0x108] */ r_ecx = R32((u32)(r_edx+0x108u));
    /* 0051f268: lea eax, [ecx - 1] */ r_eax = (u32)(r_ecx+0xffffffffu);
    /* 0051f26b: mov dword ptr [edx + 0x108], eax */ W32((u32)(r_edx+0x108u), r_eax);
    /* 0051f271: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0051f273: jl 0x51f279 */ if ((fS!=fO)) goto L_0051f279;
L_0051f275:; BB(0x0051f275);
    /* 0051f275: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051f278: ret  */ FN_RET(0x0051f06c); r_esp += 4; return;
L_0051f279:; BB(0x0051f279);
    /* 0051f279: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0051f27d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051f282: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0051f286: jmp 0x51f275 */ goto L_0051f275;
L_0051f288:; BB(0x0051f288);
    /* 0051f288: mov esi, dword ptr [ebp + 0xfc] */ r_esi = R32((u32)(r_ebp+0xfcu));
    /* 0051f28e: mov eax, dword ptr [esi + ebx + 0x1c] */ r_eax = R32((u32)(r_esi+r_ebx+0x1cu));
    /* 0051f292: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051f295: mov dword ptr [esi + ebx + 0x1c], eax */ W32((u32)(r_esi+r_ebx+0x1cu), r_eax);
    /* 0051f299: jmp 0x51f1fc */ goto L_0051f1fc;
}

void f_0051f2a0(void) /* sub_51F2A0 */
{
    FN_ENTER(0x0051f2a0);
    /* 0051f2a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f2a1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051f2a4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051f2a6: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0051f2a9: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x51f2aeu); f_00829cc8();
    /* 0051f2ae: mov eax, dword ptr [ebx + 0x104] */ r_eax = R32((u32)(r_ebx+0x104u));
    /* 0051f2b4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051f2b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051f2b8: jle 0x51f351 */ if ((fZ||fS!=fO)) goto L_0051f351;
L_0051f2be:; BB(0x0051f2be);
    /* 0051f2be: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0051f2c2: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0051f2c5: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0051f2c8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051f2ca: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051f2cc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051f2ce: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051f2d0: mov esi, edx */ r_esi = r_edx;
    /* 0051f2d2: mov edi, ecx */ r_edi = r_ecx;
L_0051f2d4:; BB(0x0051f2d4);
    /* 0051f2d4: mov edx, dword ptr [ebx + 0xfc] */ r_edx = R32((u32)(r_ebx+0xfcu));
    /* 0051f2da: mov edx, dword ptr [esi + edx + 0x1c] */ r_edx = R32((u32)(r_esi+r_edx+0x1cu));
    /* 0051f2de: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0051f2e1: jne 0x51f340 */ if (!fZ) goto L_0051f340;
L_0051f2e3:; BB(0x0051f2e3);
    /* 0051f2e3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051f2e5: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x51f2eau); f_0082d990();
    /* 0051f2ea: mov edx, esi */ r_edx = r_esi;
    /* 0051f2ec: add edx, dword ptr [ebx + 0xfc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0xfcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051f2f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051f2f4: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x51f2f9u); f_008316b4();
    /* 0051f2f9: mov eax, dword ptr [ebx + 0xfc] */ r_eax = R32((u32)(r_ebx+0xfcu));
    /* 0051f2ff: mov edx, dword ptr [esi + eax + 0x18] */ r_edx = R32((u32)(r_esi+r_eax+0x18u));
    /* 0051f303: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051f305: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51f30au); f_0082d8bc();
    /* 0051f30a: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x51f30fu); f_0082fa9c();
    /* 0051f30f: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051f315: push dword ptr [ebx + 0xf8] */ { u32 v = R32((u32)(r_ebx+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051f31b: push dword ptr [ebx + 0x34] */ { u32 v = R32((u32)(r_ebx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051f31e: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x51f323u); f_0083046c();
    /* 0051f323: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051f326: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x51f32bu); f_0082faac();
    /* 0051f32b: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x51f330u); f_007a9044();
    /* 0051f330: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0051f335: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x51f33au); f_0082eb80();
    /* 0051f33a: mov eax, dword ptr [ebx + 0x104] */ r_eax = R32((u32)(r_ebx+0x104u));
L_0051f340:; BB(0x0051f340);
    /* 0051f340: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0051f343: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0051f346: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051f348: jl 0x51f2d4 */ if ((fS!=fO)) goto L_0051f2d4;
L_0051f34a:; BB(0x0051f34a);
    /* 0051f34a: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0051f34e: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0051f351:; BB(0x0051f351);
    /* 0051f351: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051f354: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051f355: ret  */ FN_RET(0x0051f2a0); r_esp += 4; return;
}

void f_0051f358(void)
{
    FN_ENTER(0x0051f358);
    /* 0051f358: mov ecx, dword ptr [0xa72e7c] */ r_ecx = R32((u32)(0xa72e7cu));
    /* 0051f35e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051f360: je 0x51f375 */ if (fZ) goto L_0051f375;
L_0051f362:; BB(0x0051f362);
    /* 0051f362: je 0x51f36b */ if (fZ) goto L_0051f36b;
L_0051f364:; BB(0x0051f364);
    /* 0051f364: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f366: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x51f36bu); f_004066a8();
L_0051f36b:; BB(0x0051f36b);
    /* 0051f36b: mov dword ptr [0xa72e7c], 0 */ W32((u32)(0xa72e7cu), 0x0u);
L_0051f375:; BB(0x0051f375);
    /* 0051f375: ret  */ FN_RET(0x0051f358); r_esp += 4; return;
}

void f_0051f3a4(void)
{
    FN_ENTER(0x0051f3a4);
    /* 0051f3a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f3a5: mov ebp, esp */ r_ebp = r_esp;
    /* 0051f3a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f3a9: push 0x8d4748 */ { u32 v = 0x8d4748u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f3ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051f3b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f3b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0051f3bc: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051f3bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0051f3c2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0051f3c5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0051f3c8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0051f3cb: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x51f3d0u); f_00520e6c();
    /* 0051f3d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f3d2: je 0x51f3ed */ if (fZ) goto L_0051f3ed;
L_0051f3d4:; BB(0x0051f3d4);
    /* 0051f3d4: push 0x92163c */ { u32 v = 0x92163cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f3d9: push 0x9bba30 */ { u32 v = 0x9bba30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f3de: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x51f3e3u); f_0051f674();
    /* 0051f3e3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051f3e6: mov dword ptr [0xa72e7c], eax */ W32((u32)(0xa72e7cu), r_eax);
    /* 0051f3eb: jmp 0x51f442 */ goto L_0051f442;
L_0051f3ed:; BB(0x0051f3ed);
    /* 0051f3ed: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0051f3f4: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f3f9: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x51f3feu); f_008581c5();
    /* 0051f3fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051f3ff: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0051f402: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f404: je 0x51f4ad */ if (fZ) goto L_0051f4ad;
L_0051f40a:; BB(0x0051f40a);
    /* 0051f40a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0051f411: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051f418: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0051f41b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051f41d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f41e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f41f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f420: push 0x9bba30 */ { u32 v = 0x9bba30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f425: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f427: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x51f42cu); f_005b7a84();
    /* 0051f42c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0051f42f: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0051f436:; BB(0x0051f436);
    /* 0051f436: mov dword ptr [0xa72e7c], eax */ W32((u32)(0xa72e7cu), r_eax);
    /* 0051f43b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0051f442:; BB(0x0051f442);
    /* 0051f442: mov edx, dword ptr [0x9215bc] */ r_edx = R32((u32)(0x9215bcu));
    /* 0051f448: movzx ecx, word ptr [0x9215c0] */ r_ecx = (u32)R16((u32)(0x9215c0u));
    /* 0051f44f: movzx ebx, word ptr [0x9215c2] */ r_ebx = (u32)R16((u32)(0x9215c2u));
    /* 0051f456: movzx esi, word ptr [0x9215c4] */ r_esi = (u32)R16((u32)(0x9215c4u));
    /* 0051f45d: mov edi, dword ptr [eax + 0x430] */ r_edi = R32((u32)(r_eax+0x430u));
    /* 0051f463: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0051f466: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0051f46c: mov word ptr [ebp - 0x24], cx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ecx);
    /* 0051f470: mov word ptr [ebp - 0x22], bx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ebx);
    /* 0051f474: mov word ptr [ebp - 0x20], si */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_esi);
    /* 0051f478: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0051f47b: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0051f47e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f47f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f481: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f486: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051f489: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051f48c: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f48e: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x51f493u); f_00608470();
    /* 0051f493: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051f496: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051f499: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051f49c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051f49f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051f4a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051f4a9: mov esp, ebp */ r_esp = r_ebp;
    /* 0051f4ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f4ac: ret  */ FN_RET(0x0051f3a4); r_esp += 4; return;
L_0051f4ad:; BB(0x0051f4ad);
    /* 0051f4ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051f4af: jmp 0x51f436 */ goto L_0051f436;
}

void f_0051f4b4(void) /* sub_51F4B4 */
{
    FN_ENTER(0x0051f4b4);
    /* 0051f4b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f4b5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051f4b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051f4b9: call 0x51f54c */ r_esp -= 4; W32(r_esp, 0x51f4beu); f_0051f54c();
    /* 0051f4be: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0051f4c2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051f4c4: jne 0x51f4ca */ if (!fZ) goto L_0051f4ca;
L_0051f4c6:; BB(0x0051f4c6);
    /* 0051f4c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051f4c7: ret 4 */ FN_RET(0x0051f4b4); r_esp += 8; return;
L_0051f4ca:; BB(0x0051f4ca);
    /* 0051f4ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f4cb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x51f4d0u); f_005c2f74();
    /* 0051f4d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051f4d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051f4d2: ret 4 */ FN_RET(0x0051f4b4); r_esp += 8; return;
}

void f_0051f4d8(void) /* sub_51F4D8 */
{
    FN_ENTER(0x0051f4d8);
    /* 0051f4d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f4d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051f4db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051f4dd: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x51f4e2u); f_0051f4fc();
    /* 0051f4e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0051f4e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051f4e8: jne 0x51f4ee */ if (!fZ) goto L_0051f4ee;
L_0051f4ea:; BB(0x0051f4ea);
    /* 0051f4ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051f4eb: ret 4 */ FN_RET(0x0051f4d8); r_esp += 8; return;
L_0051f4ee:; BB(0x0051f4ee);
    /* 0051f4ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f4ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x51f4f4u); f_005c2f74();
    /* 0051f4f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051f4f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051f4f6: ret 4 */ FN_RET(0x0051f4d8); r_esp += 8; return;
}

void f_0051f4fc(void) /* sub_51F4FC */
{
    FN_ENTER(0x0051f4fc);
    /* 0051f4fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f4fd: mov ebp, esp */ r_ebp = r_esp;
    /* 0051f4ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f501: push 0x8d4764 */ { u32 v = 0x8d4764u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f506: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051f50c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f50d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0051f514: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051f517: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0051f51a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0051f51d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0051f520: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0051f523: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0051f526: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051f529: mov dword ptr [ecx], 0xb00740 */ W32((u32)(r_ecx), 0xb00740u);
    /* 0051f52f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051f536: call 0x51f54c */ r_esp -= 4; W32(r_esp, 0x51f53bu); f_0051f54c();
    /* 0051f53b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051f53e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051f545: mov esp, ebp */ r_esp = r_ebp;
    /* 0051f547: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f548: ret  */ FN_RET(0x0051f4fc); r_esp += 4; return;
}

void f_0051f54c(void) /* sub_51F54C */
{
    FN_ENTER(0x0051f54c);
    /* 0051f54c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f54d: mov ebp, esp */ r_ebp = r_esp;
    /* 0051f54f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f551: push 0x8d4780 */ { u32 v = 0x8d4780u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f556: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051f55c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f55d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0051f564: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051f567: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0051f56a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0051f56d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0051f570: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0051f573: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0051f576: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051f579: mov dword ptr [ecx], 0xb00580 */ W32((u32)(r_ecx), 0xb00580u);
    /* 0051f57f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051f586: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x51f58bu); f_0078638c();
    /* 0051f58b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051f58e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051f595: mov esp, ebp */ r_esp = r_ebp;
    /* 0051f597: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f598: ret  */ FN_RET(0x0051f54c); r_esp += 4; return;
}

void f_0051f59c(void) /* sub_51F59C */
{
    FN_ENTER(0x0051f59c);
    /* 0051f59c: mov ecx, dword ptr [0xa72eb4] */ r_ecx = R32((u32)(0xa72eb4u));
    /* 0051f5a2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051f5a4: je 0x51f5b8 */ if (fZ) goto L_0051f5b8;
L_0051f5a6:; BB(0x0051f5a6);
    /* 0051f5a6: je 0x51f5ae */ if (fZ) goto L_0051f5ae;
L_0051f5a8:; BB(0x0051f5a8);
    /* 0051f5a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f5aa: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0051f5ac: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x51f5aeu); call_ind(t); }
L_0051f5ae:; BB(0x0051f5ae);
    /* 0051f5ae: mov dword ptr [0xa72eb4], 0 */ W32((u32)(0xa72eb4u), 0x0u);
L_0051f5b8:; BB(0x0051f5b8);
    /* 0051f5b8: ret  */ FN_RET(0x0051f59c); r_esp += 4; return;
}

void f_0051f5bc(void) /* sub_51F5BC */
{
    FN_ENTER(0x0051f5bc);
    /* 0051f5bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f5bd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051f5bf: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051f5c2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051f5c4: call dword ptr [eax + 0x160] */ { u32 t = R32((u32)(r_eax+0x160u)); r_esp -= 4; W32(r_esp, 0x51f5cau); call_ind(t); }
    /* 0051f5ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f5cc: jne 0x51f5e3 */ if (!fZ) goto L_0051f5e3;
L_0051f5ce:; BB(0x0051f5ce);
    /* 0051f5ce: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f5d0: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0051f5d3: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0051f5da: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051f5dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f5dd: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x51f5e3u); call_ind(t); }
L_0051f5e3:; BB(0x0051f5e3);
    /* 0051f5e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f5e5: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0051f5e8: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0051f5ef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051f5f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f5f2: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x51f5f8u); call_ind(t); }
    /* 0051f5f8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051f5fa: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x51f5ffu); f_0051f604();
    /* 0051f5ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f600: ret  */ FN_RET(0x0051f5bc); r_esp += 4; return;
}

void f_0051f604(void) /* sub_51F604 */
{
    FN_ENTER(0x0051f604);
    /* 0051f604: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0051f60b: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
    /* 0051f611: ret  */ FN_RET(0x0051f604); r_esp += 4; return;
}

void f_0051f614(void) /* sub_51F614 */
{
    FN_ENTER(0x0051f614);
    /* 0051f614: movsx edx, word ptr [ecx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0051f61b: cmp edx, dword ptr [ecx + 0x37c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051f621: mov eax, 0 */ r_eax = 0x0u;
    /* 0051f626: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0051f629: ret  */ FN_RET(0x0051f614); r_esp += 4; return;
}

void f_0051f62c(void) /* sub_51F62C */
{
    FN_ENTER(0x0051f62c);
    /* 0051f62c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051f62d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f62e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051f630: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0051f634: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f636: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0051f639: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0051f640: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051f642: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f643: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x51f649u); call_ind(t); }
    /* 0051f649: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f64b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051f64c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051f64f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051f651: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x51f657u); call_ind(t); }
    /* 0051f657: mov word ptr [ebp + 0x32e], si */ W16((u32)(r_ebp+0x32eu), (u16)r_esi);
    /* 0051f65e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f65f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051f660: ret 4 */ FN_RET(0x0051f62c); r_esp += 8; return;
}

void f_0051f664(void) /* sub_51F664 */
{
    FN_ENTER(0x0051f664);
    /* 0051f664: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0051f668: mov dword ptr [ecx + 0x380], eax */ W32((u32)(r_ecx+0x380u), r_eax);
    /* 0051f66e: ret 4 */ FN_RET(0x0051f664); r_esp += 8; return;
}

void f_0051f674(void) /* sub_51F674 */
{
    FN_ENTER(0x0051f674);
    /* 0051f674: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051f677: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0051f67b: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0051f67f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0051f682: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0051f686: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0051f689: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0051f68d: movzx ecx, word ptr [eax + 0xc] */ r_ecx = (u32)R16((u32)(r_eax+0xcu));
    /* 0051f691: movzx eax, word ptr [eax + 0xe] */ r_eax = (u32)R16((u32)(r_eax+0xeu));
    /* 0051f695: mov word ptr [esp + 0xc], cx */ W16((u32)(r_esp+0xcu), (u16)r_ecx);
    /* 0051f69a: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 0051f69f: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0051f6a2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0051f6a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f6a6: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x51f6abu); f_0051f6b0();
    /* 0051f6ab: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051f6ae: ret  */ FN_RET(0x0051f674); r_esp += 4; return;
}

void f_0051f6b0(void) /* sub_51F6B0 */
{
    FN_ENTER(0x0051f6b0);
    /* 0051f6b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f6b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051f6b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f6b5: push 0x8d47a8 */ { u32 v = 0x8d47a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f6ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051f6c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f6c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0051f6c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051f6cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0051f6ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0051f6d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0051f6d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0051f6d7: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f6dc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0051f6e3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x51f6e8u); f_008581c5();
    /* 0051f6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051f6e9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0051f6ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f6ee: je 0x51f728 */ if (fZ) goto L_0051f728;
L_0051f6f0:; BB(0x0051f6f0);
    /* 0051f6f0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0051f6f7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051f6fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051f701: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051f703: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f705: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f706: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051f709: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f70b: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x51f710u); f_005b7a84();
    /* 0051f710: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051f713: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0051f71a:; BB(0x0051f71a);
    /* 0051f71a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051f71d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051f724: mov esp, ebp */ r_esp = r_ebp;
    /* 0051f726: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f727: ret  */ FN_RET(0x0051f6b0); r_esp += 4; return;
L_0051f728:; BB(0x0051f728);
    /* 0051f728: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051f72a: jmp 0x51f71a */ goto L_0051f71a;
}

void f_0051f72c(void) /* sub_51F72C */
{
    FN_ENTER(0x0051f72c);
    /* 0051f72c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051f72d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f72e: mov esi, ecx */ r_esi = r_ecx;
    /* 0051f730: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051f734: movzx ebp, word ptr [esi + 0x32e] */ r_ebp = (u32)R16((u32)(r_esi+0x32eu));
    /* 0051f73b: mov ecx, esi */ r_ecx = r_esi;
    /* 0051f73d: call 0x7866b8 */ r_esp -= 4; W32(r_esp, 0x51f742u); f_007866b8();
    /* 0051f742: mov word ptr [esi + 0x32e], bp */ W16((u32)(r_esi+0x32eu), (u16)r_ebp);
    /* 0051f749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f74a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051f74b: ret 4 */ FN_RET(0x0051f72c); r_esp += 8; return;
}

void f_0051f750(void) /* sub_51F750 */
{
    FN_ENTER(0x0051f750);
    /* 0051f750: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051f754: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0051f756: call dword ptr [eax + 0x14c] */ { u32 t = R32((u32)(r_eax+0x14cu)); r_esp -= 4; W32(r_esp, 0x51f75cu); call_ind(t); }
    /* 0051f75c: ret 4 */ FN_RET(0x0051f750); r_esp += 8; return;
}

void f_0051f760(void) /* sub_51F760 */
{
    FN_ENTER(0x0051f760);
    /* 0051f760: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0051f764: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051f766: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 0051f769: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 0051f76c: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
    /* 0051f773: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 0051f776: mov dword ptr [ecx + 0x370], edx */ W32((u32)(r_ecx+0x370u), r_edx);
    /* 0051f77c: mov dword ptr [ecx + 0x374], edx */ W32((u32)(r_ecx+0x374u), r_edx);
    /* 0051f782: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 0051f789: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0051f78e: mov word ptr [ecx + 0x28], dx */ W16((u32)(r_ecx+0x28u), (u16)r_edx);
    /* 0051f792: mov word ptr [ecx + 0x2a], dx */ W16((u32)(r_ecx+0x2au), (u16)r_edx);
    /* 0051f796: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 0051f79d: mov dword ptr [ecx + 0x35c], 0 */ W32((u32)(r_ecx+0x35cu), 0x0u);
    /* 0051f7a7: mov dword ptr [ecx + 0x360], 0 */ W32((u32)(r_ecx+0x360u), 0x0u);
    /* 0051f7b1: mov dword ptr [ecx + 0x364], 0 */ W32((u32)(r_ecx+0x364u), 0x0u);
    /* 0051f7bb: mov dword ptr [ecx + 0x368], 0 */ W32((u32)(r_ecx+0x368u), 0x0u);
    /* 0051f7c5: mov dword ptr [ecx + 0x36c], 0 */ W32((u32)(r_ecx+0x36cu), 0x0u);
    /* 0051f7cf: movzx edx, word ptr [eax + 0x28] */ r_edx = (u32)R16((u32)(r_eax+0x28u));
    /* 0051f7d3: mov word ptr [ecx + 0x28], dx */ W16((u32)(r_ecx+0x28u), (u16)r_edx);
    /* 0051f7d7: movzx eax, word ptr [eax + 0x2a] */ r_eax = (u32)R16((u32)(r_eax+0x2au));
    /* 0051f7db: mov word ptr [ecx + 0x2a], ax */ W16((u32)(r_ecx+0x2au), (u16)r_eax);
    /* 0051f7df: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0051f7e3: lea edx, [ecx + 0x168] */ r_edx = (u32)(r_ecx+0x168u);
    /* 0051f7e9: add eax, dword ptr [0xa9c22c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c22cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051f7ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f7f0: mov ecx, edx */ r_ecx = r_edx;
    /* 0051f7f2: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x51f7f7u); f_0084c390();
    /* 0051f7f7: ret 4 */ FN_RET(0x0051f760); r_esp += 8; return;
}

void f_0051f7fc(void) /* sub_51F7FC */
{
    FN_ENTER(0x0051f7fc);
    /* 0051f7fc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0051f800: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0051f804: lea edx, [edx + 0x13] */ r_edx = (u32)(r_edx+0x13u);
    /* 0051f807: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0051f80a: lea eax, [ecx + 0x1a] */ r_eax = (u32)(r_ecx+0x1au);
    /* 0051f80d: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051f80f: mov eax, edx */ r_eax = r_edx;
    /* 0051f811: ret  */ FN_RET(0x0051f7fc); r_esp += 4; return;
}

void f_0051f814(void) /* sub_51F814 */
{
    FN_ENTER(0x0051f814);
    /* 0051f814: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f815: call 0x4fb70c */ r_esp -= 4; W32(r_esp, 0x51f81au); f_004fb70c();
    /* 0051f81a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051f81b: ret  */ FN_RET(0x0051f814); r_esp += 4; return;
}

void f_0051f81c(void) /* sub_51F81C */
{
    FN_ENTER(0x0051f81c);
    /* 0051f81c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051f81f: movzx edx, word ptr [ecx + 0x334] */ r_edx = (u32)R16((u32)(r_ecx+0x334u));
    /* 0051f826: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0051f829: mov word ptr [ecx + 0x346], dx */ W16((u32)(r_ecx+0x346u), (u16)r_edx);
    /* 0051f830: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0051f835: mov dword ptr [ecx + 0x2e0], 0 */ W32((u32)(r_ecx+0x2e0u), 0x0u);
    /* 0051f83f: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0051f842: mov eax, dword ptr [ecx + 0xa8] */ r_eax = R32((u32)(r_ecx+0xa8u));
    /* 0051f848: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051f84a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051f84c: jle 0x51f88f */ if ((fZ||fS!=fO)) goto L_0051f88f;
L_0051f84e:; BB(0x0051f84e);
    /* 0051f84e: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0051f852: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0051f855: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0051f858: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051f85a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051f85c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051f85e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051f860: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051f862: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051f864: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0051f866:; BB(0x0051f866);
    /* 0051f866: mov esi, dword ptr [ecx + 0xa4] */ r_esi = R32((u32)(r_ecx+0xa4u));
    /* 0051f86c: mov ebx, dword ptr [eax + esi + 0x18] */ r_ebx = R32((u32)(r_eax+r_esi+0x18u));
    /* 0051f870: and ebx, 0xfbffffff */ {  u32 a = r_ebx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0051f876: mov dword ptr [eax + esi + 0x18], ebx */ W32((u32)(r_eax+r_esi+0x18u), r_ebx);
    /* 0051f87a: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051f87d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051f880: cmp edx, dword ptr [ecx + 0xa8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051f886: jl 0x51f866 */ if ((fS!=fO)) goto L_0051f866;
L_0051f888:; BB(0x0051f888);
    /* 0051f888: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0051f88c: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0051f88f:; BB(0x0051f88f);
    /* 0051f88f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051f892: ret  */ FN_RET(0x0051f81c); r_esp += 4; return;
}

void f_0051f894(void) /* sub_51F894 */
{
    FN_ENTER(0x0051f894);
    /* 0051f894: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f895: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051f897: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051f899: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x51f89eu); f_00787534();
    /* 0051f89e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f89f: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x51f8a4u); f_008113e4();
    /* 0051f8a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051f8a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f8a6: ret  */ FN_RET(0x0051f894); r_esp += 4; return;
}

void f_0051f8a8(void) /* sub_51F8A8 */
{
    FN_ENTER(0x0051f8a8);
    /* 0051f8a8: mov edx, dword ptr [ecx + 0x2e0] */ r_edx = R32((u32)(r_ecx+0x2e0u));
    /* 0051f8ae: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051f8b1: mov eax, 0 */ r_eax = 0x0u;
    /* 0051f8b6: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0051f8b9: ret  */ FN_RET(0x0051f8a8); r_esp += 4; return;
}

void f_0051f8bc(void) /* sub_51F8BC */
{
    FN_ENTER(0x0051f8bc);
    /* 0051f8bc: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 0051f8c1: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051f8c6: jl 0x51f8d5 */ if ((fS!=fO)) goto L_0051f8d5;
L_0051f8c8:; BB(0x0051f8c8);
    /* 0051f8c8: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051f8cd: jge 0x51f8d5 */ if ((fS==fO)) goto L_0051f8d5;
L_0051f8cf:; BB(0x0051f8cf);
    /* 0051f8cf: mov eax, 1 */ r_eax = 0x1u;
    /* 0051f8d4: ret  */ FN_RET(0x0051f8bc); r_esp += 4; return;
L_0051f8d5:; BB(0x0051f8d5);
    /* 0051f8d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051f8d7: ret  */ FN_RET(0x0051f8bc); r_esp += 4; return;
}

void f_0051f8d8(void) /* sub_51F8D8 */
{
    FN_ENTER(0x0051f8d8);
    /* 0051f8d8: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 0051f8dd: lea eax, [edx - 0x1000] */ r_eax = (u32)(r_edx+0xfffff000u);
    /* 0051f8e3: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0051f8e6: ret  */ FN_RET(0x0051f8d8); r_esp += 4; return;
}

void f_0051f8e8(void) /* sub_51F8E8 */
{
    FN_ENTER(0x0051f8e8);
    /* 0051f8e8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0051f8ec: mov ecx, dword ptr [edx + 0x964] */ r_ecx = R32((u32)(r_edx+0x964u));
    /* 0051f8f2: test cl, 0x40 */ {  u32 a = (u8)r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051f8f5: mov eax, 0 */ r_eax = 0x0u;
    /* 0051f8fa: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0051f8fd: ret  */ FN_RET(0x0051f8e8); r_esp += 4; return;
}

void f_0051f900(void) /* sub_51F900 */
{
    FN_ENTER(0x0051f900);
    /* 0051f900: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0051f904: mov ecx, dword ptr [edx + 0x964] */ r_ecx = R32((u32)(r_edx+0x964u));
    /* 0051f90a: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051f90d: mov eax, 0 */ r_eax = 0x0u;
    /* 0051f912: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0051f915: ret  */ FN_RET(0x0051f900); r_esp += 4; return;
}

void f_0051f918(void) /* sub_51F918 */
{
    FN_ENTER(0x0051f918);
    /* 0051f918: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051f919: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051f91a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f91b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f91c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051f91f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051f921: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051f923: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0051f927: fcom dword ptr [0x9216dc] */ fx_compare(ST(0), R_F32((u32)(0x9216dcu))); 
    /* 0051f92d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051f92f: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0051f935: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051f936: jbe 0x51f9cb */ if ((fC||fZ)) goto L_0051f9cb;
L_0051f93c:; BB(0x0051f93c);
    /* 0051f93c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051f93e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051f940: jle 0x51fab3 */ if ((fZ||fS!=fO)) goto L_0051fab3;
L_0051f946:; BB(0x0051f946);
    /* 0051f946: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0051f949: mov ebx, edx */ r_ebx = r_edx;
    /* 0051f94b: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0051f94f: mov ebp, eax */ r_ebp = r_eax;
    /* 0051f951: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0051f953:; BB(0x0051f953);
    /* 0051f953: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0051f95a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f95c: je 0x51f97c */ if (fZ) goto L_0051f97c;
L_0051f95e:; BB(0x0051f95e);
    /* 0051f95e: mov ecx, esi */ r_ecx = r_esi;
    /* 0051f960: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x51f965u); f_008173b4();
    /* 0051f965: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f967: je 0x51f97c */ if (fZ) goto L_0051f97c;
L_0051f969:; BB(0x0051f969);
    /* 0051f969: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 0051f96c: test edi, 0x2040800 */ {  u32 a = r_edi; u32 b = 0x2040800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f972: mov eax, 0 */ r_eax = 0x0u;
    /* 0051f977: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0051f97a: jmp 0x51f97e */ goto L_0051f97e;
L_0051f97c:; BB(0x0051f97c);
    /* 0051f97c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0051f97e:; BB(0x0051f97e);
    /* 0051f97e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f980: je 0x51f9bc */ if (fZ) goto L_0051f9bc;
L_0051f982:; BB(0x0051f982);
    /* 0051f982: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0051f986: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0051f989: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 0051f98c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051f98d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f98e: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x51f993u); f_007a9180();
    /* 0051f993: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051f996: fcom dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); 
    /* 0051f99a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051f99c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051f99d: jb 0x51f9a3 */ if (fC) goto L_0051f9a3;
L_0051f99f:; BB(0x0051f99f);
    /* 0051f99f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051f9a1: jmp 0x51f9bc */ goto L_0051f9bc;
L_0051f9a3:; BB(0x0051f9a3);
    /* 0051f9a3: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0051f9a6: movzx ecx, word ptr [esi + 0x1c] */ r_ecx = (u32)R16((u32)(r_esi+0x1cu));
    /* 0051f9aa: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0051f9ae: fstp dword ptr [esi + edi*8 + 4] */ W_F32((u32)(r_esi+r_edi*8+0x4u), ST(0)); FPOP();
    /* 0051f9b2: mov word ptr [esi + edi*8], cx */ W16((u32)(r_esi+r_edi*8), (u16)r_ecx);
    /* 0051f9b6: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0051f9b9: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_0051f9bc:; BB(0x0051f9bc);
    /* 0051f9bc: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0051f9bf: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051f9c1: jl 0x51f953 */ if ((fS!=fO)) goto L_0051f953;
L_0051f9c3:; BB(0x0051f9c3);
    /* 0051f9c3: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0051f9c6: jmp 0x51fa48 */ goto L_0051fa48;
L_0051f9cb:; BB(0x0051f9cb);
    /* 0051f9cb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051f9cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051f9cf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051f9d1: jle 0x51faa7 */ if ((fZ||fS!=fO)) goto L_0051faa7;
L_0051f9d7:; BB(0x0051f9d7);
    /* 0051f9d7: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0051f9da: mov ebx, edx */ r_ebx = r_edx;
    /* 0051f9dc: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0051f9e0: mov ebp, eax */ r_ebp = r_eax;
L_0051f9e2:; BB(0x0051f9e2);
    /* 0051f9e2: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0051f9e9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f9eb: je 0x51fa0b */ if (fZ) goto L_0051fa0b;
L_0051f9ed:; BB(0x0051f9ed);
    /* 0051f9ed: mov ecx, esi */ r_ecx = r_esi;
    /* 0051f9ef: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x51f9f4u); f_008173b4();
    /* 0051f9f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f9f6: je 0x51fa0b */ if (fZ) goto L_0051fa0b;
L_0051f9f8:; BB(0x0051f9f8);
    /* 0051f9f8: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 0051f9fb: test edi, 0x2040800 */ {  u32 a = r_edi; u32 b = 0x2040800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fa01: mov eax, 0 */ r_eax = 0x0u;
    /* 0051fa06: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0051fa09: jmp 0x51fa0d */ goto L_0051fa0d;
L_0051fa0b:; BB(0x0051fa0b);
    /* 0051fa0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0051fa0d:; BB(0x0051fa0d);
    /* 0051fa0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fa0f: je 0x51fa3e */ if (fZ) goto L_0051fa3e;
L_0051fa11:; BB(0x0051fa11);
    /* 0051fa11: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0051fa15: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0051fa18: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 0051fa1b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051fa1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051fa1d: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x51fa22u); f_007a9180();
    /* 0051fa22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051fa25: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0051fa28: movzx ecx, word ptr [esi + 0x1c] */ r_ecx = (u32)R16((u32)(r_esi+0x1cu));
    /* 0051fa2c: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0051fa30: fstp dword ptr [esi + edi*8 + 4] */ W_F32((u32)(r_esi+r_edi*8+0x4u), ST(0)); FPOP();
    /* 0051fa34: mov word ptr [esi + edi*8], cx */ W16((u32)(r_esi+r_edi*8), (u16)r_ecx);
    /* 0051fa38: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0051fa3b: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_0051fa3e:; BB(0x0051fa3e);
    /* 0051fa3e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0051fa41: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051fa43: jl 0x51f9e2 */ if ((fS!=fO)) goto L_0051f9e2;
L_0051fa45:; BB(0x0051fa45);
    /* 0051fa45: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_0051fa48:; BB(0x0051fa48);
    /* 0051fa48: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051fa4b: jle 0x51faa7 */ if ((fZ||fS!=fO)) goto L_0051faa7;
L_0051fa4d:; BB(0x0051fa4d);
    /* 0051fa4d: lea edx, [ecx - 1] */ r_edx = (u32)(r_ecx+0xffffffffu);
    /* 0051fa50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051fa52: jle 0x51faa7 */ if ((fZ||fS!=fO)) goto L_0051faa7;
L_0051fa54:; BB(0x0051fa54);
    /* 0051fa54: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
L_0051fa58:; BB(0x0051fa58);
    /* 0051fa58: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0051fa5b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0051fa5d: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0051fa62: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051fa64: jle 0x51fab7 */ if ((fZ||fS!=fO)) goto L_0051fab7;
L_0051fa66:; BB(0x0051fa66);
    /* 0051fa66: fld dword ptr [esi + ebx*8 + 4] */ FPUSH(R_F32((u32)(r_esi+r_ebx*8+0x4u)));
    /* 0051fa6a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0051fa6c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051fa6e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051fa6f: jbe 0x51fa75 */ if ((fC||fZ)) goto L_0051fa75;
L_0051fa71:; BB(0x0051fa71);
    /* 0051fa71: fst st(1) */ ST(1) = ST(0);
    /* 0051fa73: mov ebp, ebx */ r_ebp = r_ebx;
L_0051fa75:; BB(0x0051fa75);
    /* 0051fa75: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051fa77: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0051fa7a: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051fa7c: jle 0x51fa66 */ if ((fZ||fS!=fO)) goto L_0051fa66;
L_0051fa7e:; BB(0x0051fa7e);
    /* 0051fa7e: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0051fa80:; BB(0x0051fa80);
    /* 0051fa80: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fa82: je 0x51faa0 */ if (fZ) goto L_0051faa0;
L_0051fa84:; BB(0x0051fa84);
    /* 0051fa84: mov eax, dword ptr [esi + ebp*8] */ r_eax = R32((u32)(r_esi+r_ebp*8));
    /* 0051fa87: mov ebx, dword ptr [esi + ebp*8 + 4] */ r_ebx = R32((u32)(r_esi+r_ebp*8+0x4u));
    /* 0051fa8b: mov edi, dword ptr [esi + edx*8] */ r_edi = R32((u32)(r_esi+r_edx*8));
    /* 0051fa8e: mov dword ptr [esi + ebp*8], edi */ W32((u32)(r_esi+r_ebp*8), r_edi);
    /* 0051fa91: mov edi, dword ptr [esi + edx*8 + 4] */ r_edi = R32((u32)(r_esi+r_edx*8+0x4u));
    /* 0051fa95: mov dword ptr [esi + ebp*8 + 4], edi */ W32((u32)(r_esi+r_ebp*8+0x4u), r_edi);
    /* 0051fa99: mov dword ptr [esi + edx*8], eax */ W32((u32)(r_esi+r_edx*8), r_eax);
    /* 0051fa9c: mov dword ptr [esi + edx*8 + 4], ebx */ W32((u32)(r_esi+r_edx*8+0x4u), r_ebx);
L_0051faa0:; BB(0x0051faa0);
    /* 0051faa0: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051faa3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051faa5: jg 0x51fa58 */ if ((!fZ&&fS==fO)) goto L_0051fa58;
L_0051faa7:; BB(0x0051faa7);
    /* 0051faa7: mov eax, ecx */ r_eax = r_ecx;
    /* 0051faa9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051faac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051faad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051faae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051faaf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051fab0: ret 8 */ FN_RET(0x0051f918); r_esp += 12; return;
L_0051fab3:; BB(0x0051fab3);
    /* 0051fab3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051fab5: jmp 0x51faa7 */ goto L_0051faa7;
L_0051fab7:; BB(0x0051fab7);
    /* 0051fab7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051fab9: jmp 0x51fa80 */ goto L_0051fa80;
}

void f_0051fabc(void) /* sub_51FABC */
{
    FN_ENTER(0x0051fabc);
    /* 0051fabc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051fabd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051fabe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051fabf: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051fac2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051fac4: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0051fac8: fcom dword ptr [0x9216d8] */ fx_compare(ST(0), R_F32((u32)(0x9216d8u))); 
    /* 0051face: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051fad0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051fad2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051fad3: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0051fad9: jbe 0x51fb7b */ if ((fC||fZ)) goto L_0051fb7b;
L_0051fadf:; BB(0x0051fadf);
    /* 0051fadf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051fae1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051fae3: jle 0x51fc91 */ if ((fZ||fS!=fO)) goto L_0051fc91;
L_0051fae9:; BB(0x0051fae9);
    /* 0051fae9: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0051faed: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051faef: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0051faf3: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0051faf6: mov ebp, eax */ r_ebp = r_eax;
    /* 0051faf8: mov ebx, edx */ r_ebx = r_edx;
L_0051fafa:; BB(0x0051fafa);
    /* 0051fafa: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0051fb01: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fb03: je 0x51fb23 */ if (fZ) goto L_0051fb23;
L_0051fb05:; BB(0x0051fb05);
    /* 0051fb05: mov ecx, esi */ r_ecx = r_esi;
    /* 0051fb07: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x51fb0cu); f_008173b4();
    /* 0051fb0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fb0e: je 0x51fb23 */ if (fZ) goto L_0051fb23;
L_0051fb10:; BB(0x0051fb10);
    /* 0051fb10: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 0051fb13: test edi, 0x2040800 */ {  u32 a = r_edi; u32 b = 0x2040800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fb19: mov eax, 0 */ r_eax = 0x0u;
    /* 0051fb1e: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0051fb21: jmp 0x51fb25 */ goto L_0051fb25;
L_0051fb23:; BB(0x0051fb23);
    /* 0051fb23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0051fb25:; BB(0x0051fb25);
    /* 0051fb25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fb27: je 0x51fb68 */ if (fZ) goto L_0051fb68;
L_0051fb29:; BB(0x0051fb29);
    /* 0051fb29: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0051fb2d: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0051fb30: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 0051fb33: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb35: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x51fb3au); f_007a9180();
    /* 0051fb3a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051fb3d: fcom dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); 
    /* 0051fb41: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051fb43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051fb44: jb 0x51fb4a */ if (fC) goto L_0051fb4a;
L_0051fb46:; BB(0x0051fb46);
    /* 0051fb46: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051fb48: jmp 0x51fb68 */ goto L_0051fb68;
L_0051fb4a:; BB(0x0051fb4a);
    /* 0051fb4a: movzx ecx, word ptr [esi + 0x1c] */ r_ecx = (u32)R16((u32)(r_esi+0x1cu));
    /* 0051fb4e: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0051fb52: fstp dword ptr [esi*8 + 0xa72e94] */ W_F32((u32)(r_esi*8+0xa72e94u), ST(0)); FPOP();
    /* 0051fb59: mov word ptr [esi*8 + 0xa72e90], cx */ W16((u32)(r_esi*8+0xa72e90u), (u16)r_ecx);
    /* 0051fb61: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0051fb64: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_0051fb68:; BB(0x0051fb68);
    /* 0051fb68: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0051fb6b: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051fb6d: jl 0x51fafa */ if ((fS!=fO)) goto L_0051fafa;
L_0051fb6f:; BB(0x0051fb6f);
    /* 0051fb6f: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0051fb73: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0051fb76: jmp 0x51fc05 */ goto L_0051fc05;
L_0051fb7b:; BB(0x0051fb7b);
    /* 0051fb7b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051fb7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051fb7f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051fb81: jle 0x51fc86 */ if ((fZ||fS!=fO)) goto L_0051fc86;
L_0051fb87:; BB(0x0051fb87);
    /* 0051fb87: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0051fb8b: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0051fb8f: mov ebp, eax */ r_ebp = r_eax;
    /* 0051fb91: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0051fb94: mov ebx, edx */ r_ebx = r_edx;
L_0051fb96:; BB(0x0051fb96);
    /* 0051fb96: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0051fb9d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fb9f: je 0x51fbbf */ if (fZ) goto L_0051fbbf;
L_0051fba1:; BB(0x0051fba1);
    /* 0051fba1: mov ecx, esi */ r_ecx = r_esi;
    /* 0051fba3: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x51fba8u); f_008173b4();
    /* 0051fba8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fbaa: je 0x51fbbf */ if (fZ) goto L_0051fbbf;
L_0051fbac:; BB(0x0051fbac);
    /* 0051fbac: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 0051fbaf: test edi, 0x2040800 */ {  u32 a = r_edi; u32 b = 0x2040800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fbb5: mov eax, 0 */ r_eax = 0x0u;
    /* 0051fbba: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0051fbbd: jmp 0x51fbc1 */ goto L_0051fbc1;
L_0051fbbf:; BB(0x0051fbbf);
    /* 0051fbbf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0051fbc1:; BB(0x0051fbc1);
    /* 0051fbc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fbc3: je 0x51fbf7 */ if (fZ) goto L_0051fbf7;
L_0051fbc5:; BB(0x0051fbc5);
    /* 0051fbc5: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0051fbc9: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0051fbcc: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 0051fbcf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051fbd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051fbd1: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x51fbd6u); f_007a9180();
    /* 0051fbd6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051fbd9: movzx ecx, word ptr [esi + 0x1c] */ r_ecx = (u32)R16((u32)(r_esi+0x1cu));
    /* 0051fbdd: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0051fbe1: fstp dword ptr [esi*8 + 0xa72e94] */ W_F32((u32)(r_esi*8+0xa72e94u), ST(0)); FPOP();
    /* 0051fbe8: mov word ptr [esi*8 + 0xa72e90], cx */ W16((u32)(r_esi*8+0xa72e90u), (u16)r_ecx);
    /* 0051fbf0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0051fbf3: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_0051fbf7:; BB(0x0051fbf7);
    /* 0051fbf7: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0051fbfa: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051fbfc: jl 0x51fb96 */ if ((fS!=fO)) goto L_0051fb96;
L_0051fbfe:; BB(0x0051fbfe);
    /* 0051fbfe: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0051fc02: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0051fc05:; BB(0x0051fc05);
    /* 0051fc05: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051fc08: jle 0x51fc86 */ if ((fZ||fS!=fO)) goto L_0051fc86;
L_0051fc0e:; BB(0x0051fc0e);
    /* 0051fc0e: lea edx, [ecx - 1] */ r_edx = (u32)(r_ecx+0xffffffffu);
    /* 0051fc11: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051fc13: jle 0x51fc86 */ if ((fZ||fS!=fO)) goto L_0051fc86;
L_0051fc15:; BB(0x0051fc15);
    /* 0051fc15: fld dword ptr [0xa72e94] */ FPUSH(R_F32((u32)(0xa72e94u)));
    /* 0051fc1b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0051fc1d: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0051fc22: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051fc24: jle 0x51fc95 */ if ((fZ||fS!=fO)) goto L_0051fc95;
L_0051fc26:; BB(0x0051fc26);
    /* 0051fc26: fld dword ptr [ebp*8 + 0xa72e94] */ FPUSH(R_F32((u32)(r_ebp*8+0xa72e94u)));
    /* 0051fc2d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0051fc2f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051fc31: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051fc32: jbe 0x51fc38 */ if ((fC||fZ)) goto L_0051fc38;
L_0051fc34:; BB(0x0051fc34);
    /* 0051fc34: fst st(1) */ ST(1) = ST(0);
    /* 0051fc36: mov esi, ebp */ r_esi = r_ebp;
L_0051fc38:; BB(0x0051fc38);
    /* 0051fc38: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051fc3a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0051fc3d: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051fc3f: jle 0x51fc26 */ if ((fZ||fS!=fO)) goto L_0051fc26;
L_0051fc41:; BB(0x0051fc41);
    /* 0051fc41: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0051fc43:; BB(0x0051fc43);
    /* 0051fc43: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fc45: je 0x51fc7f */ if (fZ) goto L_0051fc7f;
L_0051fc47:; BB(0x0051fc47);
    /* 0051fc47: mov eax, dword ptr [esi*8 + 0xa72e90] */ r_eax = R32((u32)(r_esi*8+0xa72e90u));
    /* 0051fc4e: mov ebp, dword ptr [esi*8 + 0xa72e94] */ r_ebp = R32((u32)(r_esi*8+0xa72e94u));
    /* 0051fc55: mov edi, dword ptr [edx*8 + 0xa72e90] */ r_edi = R32((u32)(r_edx*8+0xa72e90u));
    /* 0051fc5c: mov dword ptr [esi*8 + 0xa72e90], edi */ W32((u32)(r_esi*8+0xa72e90u), r_edi);
    /* 0051fc63: mov edi, dword ptr [edx*8 + 0xa72e94] */ r_edi = R32((u32)(r_edx*8+0xa72e94u));
    /* 0051fc6a: mov dword ptr [esi*8 + 0xa72e94], edi */ W32((u32)(r_esi*8+0xa72e94u), r_edi);
    /* 0051fc71: mov dword ptr [edx*8 + 0xa72e90], eax */ W32((u32)(r_edx*8+0xa72e90u), r_eax);
    /* 0051fc78: mov dword ptr [edx*8 + 0xa72e94], ebp */ W32((u32)(r_edx*8+0xa72e94u), r_ebp);
L_0051fc7f:; BB(0x0051fc7f);
    /* 0051fc7f: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051fc82: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051fc84: jg 0x51fc15 */ if ((!fZ&&fS==fO)) goto L_0051fc15;
L_0051fc86:; BB(0x0051fc86);
    /* 0051fc86: mov eax, ecx */ r_eax = r_ecx;
    /* 0051fc88: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051fc8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051fc8c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051fc8d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051fc8e: ret 4 */ FN_RET(0x0051fabc); r_esp += 8; return;
L_0051fc91:; BB(0x0051fc91);
    /* 0051fc91: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051fc93: jmp 0x51fc86 */ goto L_0051fc86;
L_0051fc95:; BB(0x0051fc95);
    /* 0051fc95: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051fc97: jmp 0x51fc43 */ goto L_0051fc43;
}

void f_0051fae0(void)
{
    FN_ENTER(0x0051fae0);
    /* 0051fae0: rol byte ptr [ebp - 0x5771f02e], 1 */ { u32 ad = (u32)(r_ebp+0xa88e0fd2u); u32 c = (1u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 0051fae7: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0051fae9: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0051faed: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051faef: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0051faf3: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0051faf6: mov ebp, eax */ r_ebp = r_eax;
    /* 0051faf8: mov ebx, edx */ r_ebx = r_edx;
L_0051fafa:; BB(0x0051fafa);
    /* 0051fafa: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0051fb01: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fb03: je 0x51fb23 */ if (fZ) goto L_0051fb23;
L_0051fb05:; BB(0x0051fb05);
    /* 0051fb05: mov ecx, esi */ r_ecx = r_esi;
    /* 0051fb07: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x51fb0cu); f_008173b4();
    /* 0051fb0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fb0e: je 0x51fb23 */ if (fZ) goto L_0051fb23;
L_0051fb10:; BB(0x0051fb10);
    /* 0051fb10: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 0051fb13: test edi, 0x2040800 */ {  u32 a = r_edi; u32 b = 0x2040800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fb19: mov eax, 0 */ r_eax = 0x0u;
    /* 0051fb1e: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0051fb21: jmp 0x51fb25 */ goto L_0051fb25;
L_0051fb23:; BB(0x0051fb23);
    /* 0051fb23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0051fb25:; BB(0x0051fb25);
    /* 0051fb25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fb27: je 0x51fb68 */ if (fZ) goto L_0051fb68;
L_0051fb29:; BB(0x0051fb29);
    /* 0051fb29: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0051fb2d: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0051fb30: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 0051fb33: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb35: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x51fb3au); f_007a9180();
    /* 0051fb3a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051fb3d: fcom dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); 
    /* 0051fb41: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051fb43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051fb44: jb 0x51fb4a */ if (fC) goto L_0051fb4a;
L_0051fb46:; BB(0x0051fb46);
    /* 0051fb46: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051fb48: jmp 0x51fb68 */ goto L_0051fb68;
L_0051fb4a:; BB(0x0051fb4a);
    /* 0051fb4a: movzx ecx, word ptr [esi + 0x1c] */ r_ecx = (u32)R16((u32)(r_esi+0x1cu));
    /* 0051fb4e: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0051fb52: fstp dword ptr [esi*8 + 0xa72e94] */ W_F32((u32)(r_esi*8+0xa72e94u), ST(0)); FPOP();
    /* 0051fb59: mov word ptr [esi*8 + 0xa72e90], cx */ W16((u32)(r_esi*8+0xa72e90u), (u16)r_ecx);
    /* 0051fb61: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0051fb64: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_0051fb68:; BB(0x0051fb68);
    /* 0051fb68: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0051fb6b: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051fb6d: jl 0x51fafa */ if ((fS!=fO)) goto L_0051fafa;
L_0051fb6f:; BB(0x0051fb6f);
    /* 0051fb6f: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0051fb73: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0051fb76: jmp 0x51fc05 */ goto L_0051fc05;
L_0051fc05:; BB(0x0051fc05);
    /* 0051fc05: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051fc08: jle 0x51fc86 */ if ((fZ||fS!=fO)) goto L_0051fc86;
L_0051fc0e:; BB(0x0051fc0e);
    /* 0051fc0e: lea edx, [ecx - 1] */ r_edx = (u32)(r_ecx+0xffffffffu);
    /* 0051fc11: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051fc13: jle 0x51fc86 */ if ((fZ||fS!=fO)) goto L_0051fc86;
L_0051fc15:; BB(0x0051fc15);
    /* 0051fc15: fld dword ptr [0xa72e94] */ FPUSH(R_F32((u32)(0xa72e94u)));
    /* 0051fc1b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0051fc1d: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0051fc22: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051fc24: jle 0x51fc95 */ if ((fZ||fS!=fO)) goto L_0051fc95;
L_0051fc26:; BB(0x0051fc26);
    /* 0051fc26: fld dword ptr [ebp*8 + 0xa72e94] */ FPUSH(R_F32((u32)(r_ebp*8+0xa72e94u)));
    /* 0051fc2d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0051fc2f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051fc31: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051fc32: jbe 0x51fc38 */ if ((fC||fZ)) goto L_0051fc38;
L_0051fc34:; BB(0x0051fc34);
    /* 0051fc34: fst st(1) */ ST(1) = ST(0);
    /* 0051fc36: mov esi, ebp */ r_esi = r_ebp;
L_0051fc38:; BB(0x0051fc38);
    /* 0051fc38: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051fc3a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0051fc3d: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051fc3f: jle 0x51fc26 */ if ((fZ||fS!=fO)) goto L_0051fc26;
L_0051fc41:; BB(0x0051fc41);
    /* 0051fc41: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0051fc43:; BB(0x0051fc43);
    /* 0051fc43: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fc45: je 0x51fc7f */ if (fZ) goto L_0051fc7f;
L_0051fc47:; BB(0x0051fc47);
    /* 0051fc47: mov eax, dword ptr [esi*8 + 0xa72e90] */ r_eax = R32((u32)(r_esi*8+0xa72e90u));
    /* 0051fc4e: mov ebp, dword ptr [esi*8 + 0xa72e94] */ r_ebp = R32((u32)(r_esi*8+0xa72e94u));
    /* 0051fc55: mov edi, dword ptr [edx*8 + 0xa72e90] */ r_edi = R32((u32)(r_edx*8+0xa72e90u));
    /* 0051fc5c: mov dword ptr [esi*8 + 0xa72e90], edi */ W32((u32)(r_esi*8+0xa72e90u), r_edi);
    /* 0051fc63: mov edi, dword ptr [edx*8 + 0xa72e94] */ r_edi = R32((u32)(r_edx*8+0xa72e94u));
    /* 0051fc6a: mov dword ptr [esi*8 + 0xa72e94], edi */ W32((u32)(r_esi*8+0xa72e94u), r_edi);
    /* 0051fc71: mov dword ptr [edx*8 + 0xa72e90], eax */ W32((u32)(r_edx*8+0xa72e90u), r_eax);
    /* 0051fc78: mov dword ptr [edx*8 + 0xa72e94], ebp */ W32((u32)(r_edx*8+0xa72e94u), r_ebp);
L_0051fc7f:; BB(0x0051fc7f);
    /* 0051fc7f: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051fc82: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051fc84: jg 0x51fc15 */ if ((!fZ&&fS==fO)) goto L_0051fc15;
L_0051fc86:; BB(0x0051fc86);
    /* 0051fc86: mov eax, ecx */ r_eax = r_ecx;
    /* 0051fc88: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051fc8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051fc8c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051fc8d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051fc8e: ret 4 */ FN_RET(0x0051fae0); r_esp += 8; return;
L_0051fc95:; BB(0x0051fc95);
    /* 0051fc95: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051fc97: jmp 0x51fc43 */ goto L_0051fc43;
}

void f_0051fc9c(void) /* sub_51FC9C */
{
    FN_ENTER(0x0051fc9c);
    /* 0051fc9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051fc9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051fc9e: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0051fca2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051fca3: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051fca7: call 0x51fcf4 */ r_esp -= 4; W32(r_esp, 0x51fcacu); f_0051fcf4();
    /* 0051fcac: fld dword ptr [0x9216d4] */ FPUSH(R_F32((u32)(0x9216d4u)));
    /* 0051fcb2: fcomp dword ptr [ebp + 8] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x8u))); FPOP();
    /* 0051fcb5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051fcb7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0051fcba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051fcbb: jae 0x51fcd8 */ if (!fC) goto L_0051fcd8;
L_0051fcbd:; BB(0x0051fcbd);
    /* 0051fcbd: mov ecx, dword ptr [0xa72eb4] */ r_ecx = R32((u32)(0xa72eb4u));
    /* 0051fcc3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fcc4: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0051fcc8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0051fcca: lea edi, [ebp + 0xc] */ r_edi = (u32)(r_ebp+0xcu);
    /* 0051fccd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fcce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051fccf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051fcd0: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x51fcd3u); call_ind(t); }
    /* 0051fcd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051fcd4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051fcd5: ret 0xc */ FN_RET(0x0051fc9c); r_esp += 16; return;
L_0051fcd8:; BB(0x0051fcd8);
    /* 0051fcd8: mov ecx, dword ptr [0xa72eb4] */ r_ecx = R32((u32)(0xa72eb4u));
    /* 0051fcde: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0051fce2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fce3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0051fce5: lea edi, [ebp + 0xc] */ r_edi = (u32)(r_ebp+0xcu);
    /* 0051fce8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051fce9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051fcea: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x51fcedu); call_ind(t); }
    /* 0051fced: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051fcee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051fcef: ret 0xc */ FN_RET(0x0051fc9c); r_esp += 16; return;
}

void f_0051fcf4(void) /* sub_51FCF4 */
{
    FN_ENTER(0x0051fcf4);
    /* 0051fcf4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fcf5: mov ecx, dword ptr [0xa72eb4] */ r_ecx = R32((u32)(0xa72eb4u));
    /* 0051fcfb: call 0x521c44 */ r_esp -= 4; W32(r_esp, 0x51fd00u); f_00521c44();
    /* 0051fd00: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051fd04: mov ecx, dword ptr [0xa72eb4] */ r_ecx = R32((u32)(0xa72eb4u));
    /* 0051fd0a: call 0x6ac1a4 */ r_esp -= 4; W32(r_esp, 0x51fd0fu); f_006ac1a4();
    /* 0051fd0f: mov edx, dword ptr [0xa72eb4] */ r_edx = R32((u32)(0xa72eb4u));
    /* 0051fd15: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 0051fd1b: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 0051fd22: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 0051fd28: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0051fd2c: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0051fd2f: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0051fd32: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 0051fd38: mov dword ptr [eax + 0x18], 0x9d03 */ W32((u32)(r_eax+0x18u), 0x9d03u);
    /* 0051fd3f: ret 8 */ FN_RET(0x0051fcf4); r_esp += 12; return;
}

void f_0051fd44(void) /* sub_51FD44 */
{
    FN_ENTER(0x0051fd44);
    /* 0051fd44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051fd45: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051fd46: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0051fd4a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051fd4b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051fd4f: call 0x51fd9c */ r_esp -= 4; W32(r_esp, 0x51fd54u); f_0051fd9c();
    /* 0051fd54: fld dword ptr [0x9216d0] */ FPUSH(R_F32((u32)(0x9216d0u)));
    /* 0051fd5a: fcomp dword ptr [ebp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xcu))); FPOP();
    /* 0051fd5d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051fd5f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0051fd62: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051fd63: jae 0x51fd80 */ if (!fC) goto L_0051fd80;
L_0051fd65:; BB(0x0051fd65);
    /* 0051fd65: mov ecx, dword ptr [0xa72eb4] */ r_ecx = R32((u32)(0xa72eb4u));
    /* 0051fd6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fd6c: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0051fd70: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0051fd72: lea edi, [ebp + 0x10] */ r_edi = (u32)(r_ebp+0x10u);
    /* 0051fd75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fd76: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051fd77: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051fd78: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x51fd7bu); call_ind(t); }
    /* 0051fd7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051fd7c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051fd7d: ret 0xc */ FN_RET(0x0051fd44); r_esp += 16; return;
L_0051fd80:; BB(0x0051fd80);
    /* 0051fd80: mov ecx, dword ptr [0xa72eb4] */ r_ecx = R32((u32)(0xa72eb4u));
    /* 0051fd86: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0051fd8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fd8b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0051fd8d: lea edi, [ebp + 0x10] */ r_edi = (u32)(r_ebp+0x10u);
    /* 0051fd90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051fd91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051fd92: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x51fd95u); call_ind(t); }
    /* 0051fd95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051fd96: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051fd97: ret 0xc */ FN_RET(0x0051fd44); r_esp += 16; return;
}

void f_0051fd9c(void) /* sub_51FD9C */
{
    FN_ENTER(0x0051fd9c);
    /* 0051fd9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051fd9d: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0051fda1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fda2: mov ecx, dword ptr [0xa72eb4] */ r_ecx = R32((u32)(0xa72eb4u));
    /* 0051fda8: call 0x521c44 */ r_esp -= 4; W32(r_esp, 0x51fdadu); f_00521c44();
    /* 0051fdad: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051fdb1: mov ecx, dword ptr [0xa72eb4] */ r_ecx = R32((u32)(0xa72eb4u));
    /* 0051fdb7: call 0x6ac1a4 */ r_esp -= 4; W32(r_esp, 0x51fdbcu); f_006ac1a4();
    /* 0051fdbc: mov eax, dword ptr [0xa72eb4] */ r_eax = R32((u32)(0xa72eb4u));
    /* 0051fdc1: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 0051fdc7: mov dword ptr [edx + 0x14], 1 */ W32((u32)(r_edx+0x14u), 0x1u);
    /* 0051fdce: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 0051fdd4: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 0051fdd7: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0051fdda: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 0051fde0: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 0051fde3: mov dword ptr [edx + 0x10], esi */ W32((u32)(r_edx+0x10u), r_esi);
    /* 0051fde6: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 0051fdec: mov dword ptr [eax + 0x18], 0x9d03 */ W32((u32)(r_eax+0x18u), 0x9d03u);
    /* 0051fdf3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051fdf4: ret 8 */ FN_RET(0x0051fd9c); r_esp += 12; return;
}

void f_0051fdf8(void) /* sub_51FDF8 */
{
    FN_ENTER(0x0051fdf8);
    /* 0051fdf8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fdf9: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0051fdfd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fdfe: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051fe02: call 0x51fcf4 */ r_esp -= 4; W32(r_esp, 0x51fe07u); f_0051fcf4();
    /* 0051fe07: fld dword ptr [0x9216cc] */ FPUSH(R_F32((u32)(0x9216ccu)));
    /* 0051fe0d: fcomp dword ptr [ebx + 8] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x8u))); FPOP();
    /* 0051fe10: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051fe12: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0051fe15: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051fe16: jae 0x51fe31 */ if (!fC) goto L_0051fe31;
L_0051fe18:; BB(0x0051fe18);
    /* 0051fe18: mov ecx, dword ptr [0xa72eb4] */ r_ecx = R32((u32)(0xa72eb4u));
    /* 0051fe1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe1f: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0051fe23: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0051fe25: lea ebx, [ebx + 0xc] */ r_ebx = (u32)(r_ebx+0xcu);
    /* 0051fe28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe29: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe2a: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x51fe2du); call_ind(t); }
    /* 0051fe2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051fe2e: ret 0xc */ FN_RET(0x0051fdf8); r_esp += 16; return;
L_0051fe31:; BB(0x0051fe31);
    /* 0051fe31: mov ecx, dword ptr [0xa72eb4] */ r_ecx = R32((u32)(0xa72eb4u));
    /* 0051fe37: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0051fe3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe3c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0051fe3e: lea ebx, [ebx + 0xc] */ r_ebx = (u32)(r_ebx+0xcu);
    /* 0051fe41: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe42: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x51fe45u); call_ind(t); }
    /* 0051fe45: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051fe46: ret 0xc */ FN_RET(0x0051fdf8); r_esp += 16; return;
}

void f_0051fe4c(void) /* sub_51FE4C */
{
    FN_ENTER(0x0051fe4c);
    /* 0051fe4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe4d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe4e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051fe51: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0051fe55: mov ebx, dword ptr [0x921650] */ r_ebx = R32((u32)(0x921650u));
    /* 0051fe5b: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0051fe5e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0051fe61: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0051fe66: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0051fe6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe72: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe77: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe79: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051fe7b: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x51fe7eu); call_ind(t); }
    /* 0051fe7e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051fe80: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051fe83: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051fe84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051fe85: ret 4 */ FN_RET(0x0051fe4c); r_esp += 8; return;
}

void f_0051fe88(void) /* sub_51FE88 */
{
    FN_ENTER(0x0051fe88);
    /* 0051fe88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe89: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe8a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051fe8d: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0051fe91: mov ebx, dword ptr [0x921658] */ r_ebx = R32((u32)(0x921658u));
    /* 0051fe97: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0051fe9a: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0051fe9d: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0051fea2: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0051feaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051feab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051feac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051feae: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051feb3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051feb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051feb5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051feb7: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x51febau); call_ind(t); }
    /* 0051feba: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051febc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051febf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051fec0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051fec1: ret 4 */ FN_RET(0x0051fe88); r_esp += 8; return;
}

void f_0051fec4(void) /* sub_51FEC4 */
{
    FN_ENTER(0x0051fec4);
    /* 0051fec4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051fec5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fec6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051fec9: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0051fecd: mov ebx, dword ptr [0x921660] */ r_ebx = R32((u32)(0x921660u));
    /* 0051fed3: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0051fed6: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0051fed9: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0051fede: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0051fee6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051fee7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051fee8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051feea: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051feef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fef0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fef1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051fef3: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x51fef6u); call_ind(t); }
    /* 0051fef6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051fef8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051fefb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051fefc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051fefd: ret 4 */ FN_RET(0x0051fec4); r_esp += 8; return;
}

void f_0051ff00(void) /* sub_51FF00 */
{
    FN_ENTER(0x0051ff00);
    /* 0051ff00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff01: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff02: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051ff05: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0051ff09: mov ebx, dword ptr [0x921668] */ r_ebx = R32((u32)(0x921668u));
    /* 0051ff0f: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0051ff12: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0051ff15: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0051ff1a: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0051ff22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff26: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff2b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff2d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051ff2f: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x51ff32u); call_ind(t); }
    /* 0051ff32: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051ff34: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051ff37: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051ff38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051ff39: ret 4 */ FN_RET(0x0051ff00); r_esp += 8; return;
}

void f_0051ff3c(void) /* sub_51FF3C */
{
    FN_ENTER(0x0051ff3c);
    /* 0051ff3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff3d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051ff40: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051ff42: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051ff46: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051ff4a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051ff4c: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x51ff51u); f_007b9a88();
    /* 0051ff51: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x51ff56u); f_0082d7b0();
    /* 0051ff56: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ff58: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x51ff5du); f_00830cd8();
    /* 0051ff5d: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0051ff60: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x51ff65u); f_0082d838();
    /* 0051ff65: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0051ff68: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ff6a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51ff6fu); f_0082d8bc();
    /* 0051ff6f: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x51ff74u); f_0082fa9c();
    /* 0051ff74: mov eax, dword ptr [ebx + 0xa8] */ r_eax = R32((u32)(r_ebx+0xa8u));
    /* 0051ff7a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051ff7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051ff7e: jle 0x51ffc8 */ if ((fZ||fS!=fO)) goto L_0051ffc8;
L_0051ff80:; BB(0x0051ff80);
    /* 0051ff80: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0051ff84: mov esi, edx */ r_esi = r_edx;
    /* 0051ff86: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0051ff89: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0051ff8c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051ff8e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051ff90: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051ff92: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051ff94: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051ff96: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051ff98: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051ff9a: mov edi, ebx */ r_edi = r_ebx;
    /* 0051ff9c: mov ebx, eax */ r_ebx = r_eax;
L_0051ff9e:; BB(0x0051ff9e);
    /* 0051ff9e: mov ecx, dword ptr [edi + 0xa4] */ r_ecx = R32((u32)(r_edi+0xa4u));
    /* 0051ffa4: lea edx, [ebx + ecx] */ r_edx = (u32)(r_ebx+r_ecx);
    /* 0051ffa7: lea ecx, [ecx + ebx + 0x1c] */ r_ecx = (u32)(r_ecx+r_ebx+0x1cu);
    /* 0051ffab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ffac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ffae: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x51ffb3u); f_00830aa0();
    /* 0051ffb3: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0051ffb6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0051ffb9: cmp esi, dword ptr [edi + 0xa8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051ffbf: jl 0x51ff9e */ if ((fS!=fO)) goto L_0051ff9e;
L_0051ffc1:; BB(0x0051ffc1);
    /* 0051ffc1: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0051ffc5: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0051ffc8:; BB(0x0051ffc8);
    /* 0051ffc8: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x51ffcdu); f_0082faac();
    /* 0051ffcd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x51ffd2u); f_0082da80();
    /* 0051ffd2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051ffd5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051ffd6: ret 8 */ FN_RET(0x0051ff3c); r_esp += 12; return;
}

void f_0051ffdc(void) /* sub_51FFDC */
{
    FN_ENTER(0x0051ffdc);
    /* 0051ffdc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ffdd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051ffe0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051ffe2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x51ffe7u); f_0082d7b0();
    /* 0051ffe7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ffe9: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x51ffeeu); f_00830cd8();
    /* 0051ffee: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0051fff1: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x51fff6u); f_0082d838();
    /* 0051fff6: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0051fff9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051fffb: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x520000u); f_0082d8bc();
    /* 00520000: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x520005u); f_0082fa9c();
    /* 00520005: mov eax, dword ptr [ebx + 0xa8] */ r_eax = R32((u32)(r_ebx+0xa8u));
    /* 0052000b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052000d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0052000f: jle 0x520059 */ if ((fZ||fS!=fO)) goto L_00520059;
L_00520011:; BB(0x00520011);
    /* 00520011: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00520015: mov esi, edx */ r_esi = r_edx;
    /* 00520017: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0052001a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0052001d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052001f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00520021: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00520023: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00520025: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00520027: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00520029: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052002b: mov edi, ebx */ r_edi = r_ebx;
    /* 0052002d: mov ebx, eax */ r_ebx = r_eax;
L_0052002f:; BB(0x0052002f);
    /* 0052002f: mov ecx, dword ptr [edi + 0xa4] */ r_ecx = R32((u32)(r_edi+0xa4u));
    /* 00520035: lea edx, [ebx + ecx] */ r_edx = (u32)(r_ebx+r_ecx);
    /* 00520038: lea ecx, [ecx + ebx + 0x1c] */ r_ecx = (u32)(r_ecx+r_ebx+0x1cu);
    /* 0052003c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052003d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052003f: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x520044u); f_00830aa0();
    /* 00520044: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520047: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052004a: cmp esi, dword ptr [edi + 0xa8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00520050: jl 0x52002f */ if ((fS!=fO)) goto L_0052002f;
L_00520052:; BB(0x00520052);
    /* 00520052: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00520056: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00520059:; BB(0x00520059);
    /* 00520059: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x52005eu); f_0082faac();
    /* 0052005e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x520063u); f_0082da80();
    /* 00520063: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520066: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00520067: ret  */ FN_RET(0x0051ffdc); r_esp += 4; return;
}

