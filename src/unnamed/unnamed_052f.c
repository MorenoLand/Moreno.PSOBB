#include "protos.h"

void f_0052f110(void) /* sub_52F110 */
{
    FN_ENTER(0x0052f110);
    /* 0052f110: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052f111: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f112: mov esi, ecx */ r_esi = r_ecx;
    /* 0052f114: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0052f118: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0052f11c: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f11e: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x52f123u); f_007ba278();
    /* 0052f123: mov dword ptr [esi], 0xb018c0 */ W32((u32)(r_esi), 0xb018c0u);
    /* 0052f129: mov eax, dword ptr [0x9bc4c8] */ r_eax = R32((u32)(0x9bc4c8u));
    /* 0052f12e: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0052f131: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052f133: je 0x52f16d */ if (fZ) goto L_0052f16d;
L_0052f135:; BB(0x0052f135);
    /* 0052f135: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0052f138: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0052f13b: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0052f13e: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 0052f141: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0052f144: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0052f147: movzx ebx, word ptr [ebx + 0x1c] */ r_ebx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0052f14b: mov dword ptr [esi + 0x94], 0xb4 */ W32((u32)(r_esi+0x94u), 0xb4u);
    /* 0052f155: mov word ptr [esi + 0x98], bx */ W16((u32)(r_esi+0x98u), (u16)r_ebx);
    /* 0052f15c: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
L_0052f166:; BB(0x0052f166);
    /* 0052f166: mov eax, esi */ r_eax = r_esi;
    /* 0052f168: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052f169: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052f16a: ret 8 */ FN_RET(0x0052f110); r_esp += 12; return;
L_0052f16d:; BB(0x0052f16d);
    /* 0052f16d: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0052f172: movzx ebx, word ptr [esi + 8] */ r_ebx = (u32)R16((u32)(r_esi+0x8u));
    /* 0052f176: mov word ptr [esi + 0x98], dx */ W16((u32)(r_esi+0x98u), (u16)r_edx);
    /* 0052f17d: or ebx, 0xffff0001 */ {  u32 a = r_ebx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052f183: mov word ptr [esi + 8], bx */ W16((u32)(r_esi+0x8u), (u16)r_ebx);
    /* 0052f187: jmp 0x52f166 */ goto L_0052f166;
}

void f_0052f18c(void) /* sub_52F18C */
{
    FN_ENTER(0x0052f18c);
    /* 0052f18c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f18d: mov ebx, esp */ r_ebx = r_esp;
    /* 0052f18f: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0052f192: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052f193: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052f194: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052f195: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052f198: mov esi, ecx */ r_esi = r_ecx;
    /* 0052f19a: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
    /* 0052f1a1: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052f1a6: jl 0x52f1b8 */ if ((fS!=fO)) goto L_0052f1b8;
L_0052f1a8:; BB(0x0052f1a8);
    /* 0052f1a8: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0052f1ad: mov word ptr [esi + 0x340], ax */ W16((u32)(r_esi+0x340u), (u16)r_eax);
    /* 0052f1b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052f1b6: jmp 0x52f1d3 */ goto L_0052f1d3;
L_0052f1b8:; BB(0x0052f1b8);
    /* 0052f1b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f1b9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x52f1beu); f_0068d5a8();
    /* 0052f1be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052f1bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f1c1: je 0x52f1d1 */ if (fZ) goto L_0052f1d1;
L_0052f1c3:; BB(0x0052f1c3);
    /* 0052f1c3: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0052f1c9: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f1cf: je 0x52f1d3 */ if (fZ) goto L_0052f1d3;
L_0052f1d1:; BB(0x0052f1d1);
    /* 0052f1d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0052f1d3:; BB(0x0052f1d3);
    /* 0052f1d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f1d4: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f1d6: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52f1dbu); f_007706b0();
    /* 0052f1db: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f1dd: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52f1e2u); f_00770738();
    /* 0052f1e2: mov ebp, eax */ r_ebp = r_eax;
    /* 0052f1e4: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 0052f1e7: and edi, 0xfffbffff */ {  u32 a = r_edi; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0052f1ed: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f1ef: je 0x52fb4d */ if (fZ) goto L_0052fb4d;
L_0052f1f5:; BB(0x0052f1f5);
    /* 0052f1f5: movsx edx, word ptr [esi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 0052f1fc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f1fe: je 0x52f4b7 */ if (fZ) goto L_0052f4b7;
L_0052f204:; BB(0x0052f204);
    /* 0052f204: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f207: je 0x52f76e */ if (fZ) goto L_0052f76e;
L_0052f20d:; BB(0x0052f20d);
    /* 0052f20d: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f210: jne 0x52f442 */ if (!fZ) goto L_0052f442;
L_0052f216:; BB(0x0052f216);
    /* 0052f216: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f21b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f21d: and edi, 0xfbffffff */ {  u32 a = r_edi; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0052f223: mov dword ptr [esi + 0x30], edi */ W32((u32)(r_esi+0x30u), r_edi);
    /* 0052f226: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f228: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x52f22du); f_007b52ec();
    /* 0052f22d: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 0052f234: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 0052f23a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052f23c: mov ebp, dword ptr [eax + edx*8 + 8] */ r_ebp = R32((u32)(r_eax+r_edx*8+0x8u));
    /* 0052f240: mov dword ptr [esi + 0xc8], ebp */ W32((u32)(r_esi+0xc8u), r_ebp);
    /* 0052f246: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f248: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52f24du); f_007aa094();
    /* 0052f24d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0052f24f:; BB(0x0052f24f);
    /* 0052f24f: mov eax, dword ptr [esi + edi*4 + 0x3e8] */ r_eax = R32((u32)(r_esi+r_edi*4+0x3e8u));
    /* 0052f256: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052f259: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f25b: je 0x52f9d6 */ if (fZ) goto L_0052f9d6;
L_0052f261:; BB(0x0052f261);
    /* 0052f261: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052f264: jl 0x52f24f */ if ((fS!=fO)) goto L_0052f24f;
L_0052f266:; BB(0x0052f266);
    /* 0052f266: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f268: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52f26du); f_00770738();
    /* 0052f26d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f26f: je 0x52f3cf */ if (fZ) goto L_0052f3cf;
L_0052f275:; BB(0x0052f275);
    /* 0052f275: fld dword ptr [0x9225b4] */ FPUSH(R_F32((u32)(0x9225b4u)));
    /* 0052f27b: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 0052f280: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 0052f286: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0052f289: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0052f28b: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0052f28f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f292: je 0x52f9b9 */ if (fZ) goto L_0052f9b9;
L_0052f298:; BB(0x0052f298);
    /* 0052f298: fild dword ptr [edx + 8] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x8u)));
    /* 0052f29b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0052f29d: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0052f2a1: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0052f2a6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052f2ab: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0052f2af: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0052f2b3: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052f2b7: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0052f2bb: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f2bd: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0052f2c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f2c2: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x52f2c7u); f_00772358();
    /* 0052f2c7: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0052f2c9: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 0052f2cc: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052f2cf: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0052f2d3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052f2d6: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0052f2da: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f2dc: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x52f2dfu); call_ind(t); }
    /* 0052f2df: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052f2e1: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f2e3: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x52f2e6u); call_ind(t); }
    /* 0052f2e6: lea edx, [esi + 0x2a4] */ r_edx = (u32)(r_esi+0x2a4u);
    /* 0052f2ec: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 0052f2f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f2f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f2f4: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x52f2f9u); f_007a9180();
    /* 0052f2f9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052f2fc: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0052f300: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 0052f306: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 0052f309: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052f30b: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0052f30d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052f30f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052f310: ja 0x52f340 */ if ((!fC&&!fZ)) goto L_0052f340;
L_0052f312:; BB(0x0052f312);
    /* 0052f312: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 0052f318: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0052f31a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052f31c: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0052f31e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052f320: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052f321: jb 0x52f340 */ if (fC) goto L_0052f340;
L_0052f323:; BB(0x0052f323);
    /* 0052f323: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052f325: fild dword ptr [esi + 0x418] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x418u)));
    /* 0052f32b: fcom dword ptr [0x9225bc] */ fx_compare(ST(0), R_F32((u32)(0x9225bcu))); 
    /* 0052f331: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052f333: mov edx, dword ptr [esi + 0x418] */ r_edx = R32((u32)(r_esi+0x418u));
    /* 0052f339: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052f33a: jbe 0x52f3c4 */ if ((fC||fZ)) goto L_0052f3c4;
L_0052f340:; BB(0x0052f340);
    /* 0052f340: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052f342: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
    /* 0052f349: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f34e: jne 0x52f35b */ if (!fZ) goto L_0052f35b;
L_0052f350:; BB(0x0052f350);
    /* 0052f350: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f352: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f354: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52f359u); f_007706b0();
    /* 0052f359: jmp 0x52f3a2 */ goto L_0052f3a2;
L_0052f35b:; BB(0x0052f35b);
    /* 0052f35b: mov edi, dword ptr [0xa7336c] */ r_edi = R32((u32)(0xa7336cu));
    /* 0052f361: mov edx, 4 */ r_edx = 0x4u;
    /* 0052f366: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
    /* 0052f36d: mov ebp, 9 */ r_ebp = 0x9u;
    /* 0052f372: mov word ptr [esi + 0xb8], bp */ W16((u32)(r_esi+0xb8u), (u16)r_ebp);
    /* 0052f379: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0052f37b: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0052f37f: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0052f384: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052f389: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0052f38d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0052f391: fistp dword ptr [esi + 0x3a4] */ W32((u32)(r_esi+0x3a4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052f397: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0052f39b: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f39d: call 0x53140c */ r_esp -= 4; W32(r_esp, 0x52f3a2u); f_0053140c();
L_0052f3a2:; BB(0x0052f3a2);
    /* 0052f3a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052f3a4: mov dword ptr [esi + 0x3e8], eax */ W32((u32)(r_esi+0x3e8u), r_eax);
    /* 0052f3aa: mov dword ptr [esi + 0x3ec], eax */ W32((u32)(r_esi+0x3ecu), r_eax);
    /* 0052f3b0: mov dword ptr [esi + 0x3f0], eax */ W32((u32)(r_esi+0x3f0u), r_eax);
    /* 0052f3b6: mov dword ptr [esi + 0x3f4], eax */ W32((u32)(r_esi+0x3f4u), r_eax);
    /* 0052f3bc: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 0052f3c2: jmp 0x52f3cf */ goto L_0052f3cf;
L_0052f3c4:; BB(0x0052f3c4);
    /* 0052f3c4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052f3c6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052f3c9: mov dword ptr [esi + 0x418], edx */ W32((u32)(r_esi+0x418u), r_edx);
L_0052f3cf:; BB(0x0052f3cf);
    /* 0052f3cf: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0052f3d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052f3d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f3d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f3d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052f3d7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052f3d8: push 0x2da */ { u32 v = 0x2dau; r_esp -= 4; W32(r_esp, v); }
    /* 0052f3dd: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x52f3e2u); f_008144b0();
    /* 0052f3e2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052f3e5: mov ecx, dword ptr [esi + 0x41c] */ r_ecx = R32((u32)(r_esi+0x41cu));
    /* 0052f3eb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f3ed: je 0x52f40a */ if (fZ) goto L_0052f40a;
L_0052f3ef:; BB(0x0052f3ef);
    /* 0052f3ef: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x52f3f4u); f_008173b4();
    /* 0052f3f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f3f6: je 0x52f40a */ if (fZ) goto L_0052f40a;
L_0052f3f8:; BB(0x0052f3f8);
    /* 0052f3f8: mov ecx, dword ptr [esi + 0x41c] */ r_ecx = R32((u32)(r_esi+0x41cu));
    /* 0052f3fe: lea eax, [esi + 0x3d0] */ r_eax = (u32)(r_esi+0x3d0u);
    /* 0052f404: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f405: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x52f40au); f_00508db8();
L_0052f40a:; BB(0x0052f40a);
    /* 0052f40a: mov eax, dword ptr [esi + 0x420] */ r_eax = R32((u32)(r_esi+0x420u));
    /* 0052f410: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f412: je 0x52f99a */ if (fZ) goto L_0052f99a;
L_0052f418:; BB(0x0052f418);
    /* 0052f418: mov ecx, dword ptr [esi + 0x41c] */ r_ecx = R32((u32)(r_esi+0x41cu));
    /* 0052f41e: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x52f423u); f_008173b4();
    /* 0052f423: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f425: je 0x52f99a */ if (fZ) goto L_0052f99a;
L_0052f42b:; BB(0x0052f42b);
    /* 0052f42b: mov ecx, dword ptr [esi + 0x420] */ r_ecx = R32((u32)(r_esi+0x420u));
    /* 0052f431: lea eax, [esi + 0x3dc] */ r_eax = (u32)(r_esi+0x3dcu);
    /* 0052f437: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f438: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x52f43du); f_00508db8();
    /* 0052f43d: jmp 0x52f99a */ goto L_0052f99a;
L_0052f442:; BB(0x0052f442);
    /* 0052f442: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f445: jne 0x52f4ae */ if (!fZ) goto L_0052f4ae;
L_0052f447:; BB(0x0052f447);
    /* 0052f447: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f44c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f44e: and edi, 0xfbffffff */ {  u32 a = r_edi; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0052f454: mov dword ptr [esi + 0x30], edi */ W32((u32)(r_esi+0x30u), r_edi);
    /* 0052f457: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f459: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x52f45eu); f_007b52ec();
    /* 0052f45e: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 0052f465: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 0052f46b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052f46d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 0052f471: fmul dword ptr [0x9225b8] */ ST(0) = ST(0) * R_F32((u32)(0x9225b8u));
    /* 0052f477: fstp dword ptr [esi + 0xc8] */ W_F32((u32)(r_esi+0xc8u), ST(0)); FPOP();
    /* 0052f47d: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f47f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52f484u); f_007aa094();
    /* 0052f484: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f486: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f488: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f48a: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52f48fu); f_00772b44();
    /* 0052f48f: mov eax, dword ptr [esi + 0x3a4] */ r_eax = R32((u32)(r_esi+0x3a4u));
    /* 0052f495: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052f498: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0052f49a: jl 0x52fa76 */ if ((fS!=fO)) goto L_0052fa76;
L_0052f4a0:; BB(0x0052f4a0);
    /* 0052f4a0: mov dword ptr [esi + 0x3a4], eax */ W32((u32)(r_esi+0x3a4u), r_eax);
    /* 0052f4a6: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0052f4a9: jmp 0x52f99a */ goto L_0052f99a;
L_0052f4ae:; BB(0x0052f4ae);
    /* 0052f4ae: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052f4b0: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0052f4b7:; BB(0x0052f4b7);
    /* 0052f4b7: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f4bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f4be: and edi, 0xfbffffff */ {  u32 a = r_edi; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0052f4c4: mov dword ptr [esi + 0x30], edi */ W32((u32)(r_esi+0x30u), r_edi);
    /* 0052f4c7: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f4c9: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x52f4ceu); f_007b52ec();
    /* 0052f4ce: movsx edi, word ptr [esi + 0xb8] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 0052f4d5: mov edx, dword ptr [esi + 0xd8] */ r_edx = R32((u32)(r_esi+0xd8u));
    /* 0052f4db: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052f4dd: fld dword ptr [edx + edi*8 + 8] */ FPUSH(R_F32((u32)(r_edx+r_edi*8+0x8u)));
    /* 0052f4e1: fmul dword ptr [0x9225b8] */ ST(0) = ST(0) * R_F32((u32)(0x9225b8u));
    /* 0052f4e7: fstp dword ptr [esi + 0xc8] */ W_F32((u32)(r_esi+0xc8u), ST(0)); FPOP();
    /* 0052f4ed: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f4ef: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52f4f4u); f_007aa094();
    /* 0052f4f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f4f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f4f8: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f4fa: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52f4ffu); f_00772b44();
    /* 0052f4ff: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0052f503: mov edi, dword ptr [ebp + 0x300] */ r_edi = R32((u32)(r_ebp+0x300u));
    /* 0052f509: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 0052f50f: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0052f513: lea edi, [esi + 0x300] */ r_edi = (u32)(r_esi+0x300u);
    /* 0052f519: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0052f51d: mov edx, dword ptr [ebp + 0x308] */ r_edx = R32((u32)(r_ebp+0x308u));
    /* 0052f523: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0052f527: mov edx, edi */ r_edx = r_edi;
    /* 0052f529: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x52f52eu); f_0082f9c4();
    /* 0052f52e: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052f534: fild dword ptr [eax + 8] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x8u)));
    /* 0052f537: fmul dword ptr [0x9225b8] */ ST(0) = ST(0) * R_F32((u32)(0x9225b8u));
    /* 0052f53d: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0052f541: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0052f546: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052f54b: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0052f54f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0052f553: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052f557: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0052f55b: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0052f55f: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f561: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0052f565: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f566: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f567: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x52f56cu); f_00771858();
    /* 0052f56c: mov edx, dword ptr [esi + 0x31c] */ r_edx = R32((u32)(r_esi+0x31cu));
    /* 0052f572: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052f575: jge 0x52f766 */ if ((fS==fO)) goto L_0052f766;
L_0052f57b:; BB(0x0052f57b);
    /* 0052f57b: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0052f57f: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0052f583: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0052f585: fmul qword ptr [0x922508] */ ST(0) = ST(0) * R_F64((u32)(0x922508u));
    /* 0052f58b: fdiv qword ptr [0x922500] */ ST(0) = ST(0) / R_F64((u32)(0x922500u));
    /* 0052f591: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0052f595: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0052f59a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052f59f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0052f5a3: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0052f5a7: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052f5ab: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0052f5af: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f5b1: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0052f5b5: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0052f5b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f5bb: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
    /* 0052f5c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f5c3: call 0x7713d4 */ r_esp -= 4; W32(r_esp, 0x52f5c8u); f_007713d4();
    /* 0052f5c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052f5c9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052f5cc: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x52f5d1u); f_0082dc9c();
    /* 0052f5d1: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0052f5d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f5d7: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f5d9: call 0x7b5264 */ r_esp -= 4; W32(r_esp, 0x52f5deu); f_007b5264();
    /* 0052f5de: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0052f5e2: fadd dword ptr [0x9225b0] */ ST(0) = ST(0) + R_F32((u32)(0x9225b0u));
    /* 0052f5e8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0052f5ea: fld dword ptr [0x9225ac] */ FPUSH(R_F32((u32)(0x9225acu)));
    /* 0052f5f0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0052f5f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052f5f4: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0052f5f9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052f5fa: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0052f602: jb 0x52f606 */ if (fC) goto L_0052f606;
L_0052f604:; BB(0x0052f604);
    /* 0052f604: fst st(1) */ ST(1) = ST(0);
L_0052f606:; BB(0x0052f606);
    /* 0052f606: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052f608: fst dword ptr [esi + 0x3b4] */ W_F32((u32)(r_esi+0x3b4u), ST(0));
    /* 0052f60e: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0052f612: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x52f617u); f_0082d990();
    /* 0052f617: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0052f61b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052f61d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x52f622u); f_0082d8bc();
    /* 0052f622: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0052f626: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f627: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0052f62b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052f62d: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x52f632u); f_0082eab8();
    /* 0052f632: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0052f637: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x52f63cu); f_0082eb80();
    /* 0052f63c: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0052f640: mov edx, edi */ r_edx = r_edi;
    /* 0052f642: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x52f647u); f_0082ebac();
    /* 0052f647: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f649: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052f64d: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f64f: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052f653: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052f657: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x52f65cu); f_00771c8c();
    /* 0052f65c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f65e: jne 0x52f6f7 */ if (!fZ) goto L_0052f6f7;
L_0052f664:; BB(0x0052f664);
    /* 0052f664: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f666: push dword ptr [ebp + 0x308] */ { u32 v = R32((u32)(r_ebp+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052f66c: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f66e: push dword ptr [ebp + 0x304] */ { u32 v = R32((u32)(r_ebp+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052f674: push dword ptr [ebp + 0x300] */ { u32 v = R32((u32)(r_ebp+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052f67a: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x52f67fu); f_00771c8c();
    /* 0052f67f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f681: jne 0x52f6f7 */ if (!fZ) goto L_0052f6f7;
L_0052f683:; BB(0x0052f683);
    /* 0052f683: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
    /* 0052f68a: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f68f: je 0x52faa5 */ if (fZ) goto L_0052faa5;
L_0052f695:; BB(0x0052f695);
    /* 0052f695: mov edi, dword ptr [0xa7336c] */ r_edi = R32((u32)(0xa7336cu));
    /* 0052f69b: mov edx, 4 */ r_edx = 0x4u;
    /* 0052f6a0: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
    /* 0052f6a7: mov ebp, 9 */ r_ebp = 0x9u;
    /* 0052f6ac: mov word ptr [esi + 0xb8], bp */ W16((u32)(r_esi+0xb8u), (u16)r_ebp);
    /* 0052f6b3: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0052f6b5: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0052f6b9: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0052f6be: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052f6c3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0052f6c7: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0052f6cb: fistp dword ptr [esi + 0x3a4] */ W32((u32)(r_esi+0x3a4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052f6d1: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
L_0052f6d5:; BB(0x0052f6d5);
    /* 0052f6d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052f6d7: mov dword ptr [esi + 0x3e8], eax */ W32((u32)(r_esi+0x3e8u), r_eax);
    /* 0052f6dd: mov dword ptr [esi + 0x3ec], eax */ W32((u32)(r_esi+0x3ecu), r_eax);
    /* 0052f6e3: mov dword ptr [esi + 0x3f0], eax */ W32((u32)(r_esi+0x3f0u), r_eax);
    /* 0052f6e9: mov dword ptr [esi + 0x3f4], eax */ W32((u32)(r_esi+0x3f4u), r_eax);
    /* 0052f6ef: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0052f6f2: jmp 0x52f99a */ goto L_0052f99a;
L_0052f6f7:; BB(0x0052f6f7);
    /* 0052f6f7: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f6fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f6fe: mov ebp, dword ptr [esi + 0x30] */ r_ebp = R32((u32)(r_esi+0x30u));
    /* 0052f701: mov eax, 1 */ r_eax = 0x1u;
    /* 0052f706: or ebp, 0x4000000 */ {  u32 a = r_ebp; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0052f70c: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0052f713: mov edx, 8 */ r_edx = 0x8u;
    /* 0052f718: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 0052f71f: mov dword ptr [esi + 0x30], ebp */ W32((u32)(r_esi+0x30u), r_ebp);
    /* 0052f722: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f724: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x52f729u); f_007b52c4();
    /* 0052f729: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052f72f: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052f735: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f737: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052f73d: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x52f742u); f_00771f1c();
    /* 0052f742: mov dword ptr [esi + 0x3a4], 0xa */ W32((u32)(r_esi+0x3a4u), 0xau);
    /* 0052f74c: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0052f74f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052f751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f752: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f753: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052f754: push 0x2d9 */ { u32 v = 0x2d9u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f759: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x52f75eu); f_00814298();
    /* 0052f75e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052f761: jmp 0x52f99a */ goto L_0052f99a;
L_0052f766:; BB(0x0052f766);
    /* 0052f766: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0052f769: jmp 0x52f99a */ goto L_0052f99a;
L_0052f76e:; BB(0x0052f76e);
    /* 0052f76e: or edi, 0x4000000 */ {  u32 a = r_edi; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0052f774: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f779: mov dword ptr [esi + 0x30], edi */ W32((u32)(r_esi+0x30u), r_edi);
    /* 0052f77c: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f77e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f780: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x52f785u); f_007b52c4();
    /* 0052f785: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0052f788: mov edi, dword ptr [ebp + 0x300] */ r_edi = R32((u32)(r_ebp+0x300u));
    /* 0052f78e: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 0052f794: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0052f797: lea edi, [esi + 0x300] */ r_edi = (u32)(r_esi+0x300u);
    /* 0052f79d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0052f7a1: mov edx, dword ptr [ebp + 0x308] */ r_edx = R32((u32)(r_ebp+0x308u));
    /* 0052f7a7: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0052f7ab: mov edx, edi */ r_edx = r_edi;
    /* 0052f7ad: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x52f7b2u); f_0082f9c4();
    /* 0052f7b2: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052f7b8: fild dword ptr [eax + 8] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x8u)));
    /* 0052f7bb: fmul dword ptr [0x9225b8] */ ST(0) = ST(0) * R_F32((u32)(0x9225b8u));
    /* 0052f7c1: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0052f7c5: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0052f7ca: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052f7cf: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0052f7d3: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0052f7d7: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052f7db: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0052f7df: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0052f7e2: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f7e4: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0052f7e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f7e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f7ea: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x52f7efu); f_00771858();
    /* 0052f7ef: mov edx, dword ptr [esi + 0x31c] */ r_edx = R32((u32)(r_esi+0x31cu));
    /* 0052f7f5: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052f7f8: jge 0x52f96e */ if ((fS==fO)) goto L_0052f96e;
L_0052f7fe:; BB(0x0052f7fe);
    /* 0052f7fe: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0052f801: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0052f805: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0052f807: fmul qword ptr [0x922508] */ ST(0) = ST(0) * R_F64((u32)(0x922508u));
    /* 0052f80d: fdiv qword ptr [0x922500] */ ST(0) = ST(0) / R_F64((u32)(0x922500u));
    /* 0052f813: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0052f817: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0052f81c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052f821: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0052f825: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0052f829: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052f82d: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0052f831: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f833: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0052f837: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0052f83b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f83d: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
    /* 0052f844: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f845: call 0x7713d4 */ r_esp -= 4; W32(r_esp, 0x52f84au); f_007713d4();
    /* 0052f84a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052f84b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052f84e: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x52f853u); f_0082dc9c();
    /* 0052f853: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0052f857: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f859: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f85b: call 0x7b5264 */ r_esp -= 4; W32(r_esp, 0x52f860u); f_007b5264();
    /* 0052f860: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0052f864: fadd dword ptr [0x9225b0] */ ST(0) = ST(0) + R_F32((u32)(0x9225b0u));
    /* 0052f86a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0052f86c: fld dword ptr [0x9225ac] */ FPUSH(R_F32((u32)(0x9225acu)));
    /* 0052f872: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0052f874: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052f876: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0052f87b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052f87c: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0052f883: jb 0x52f887 */ if (fC) goto L_0052f887;
L_0052f885:; BB(0x0052f885);
    /* 0052f885: fst st(1) */ ST(1) = ST(0);
L_0052f887:; BB(0x0052f887);
    /* 0052f887: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052f889: fst dword ptr [esi + 0x3b4] */ W_F32((u32)(r_esi+0x3b4u), ST(0));
    /* 0052f88f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0052f893: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x52f898u); f_0082d990();
    /* 0052f898: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0052f89c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052f89e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x52f8a3u); f_0082d8bc();
    /* 0052f8a3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0052f8a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f8a7: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0052f8ab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052f8ad: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x52f8b2u); f_0082eab8();
    /* 0052f8b2: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0052f8b7: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x52f8bcu); f_0082eb80();
    /* 0052f8bc: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0052f8bf: mov edx, edi */ r_edx = r_edi;
    /* 0052f8c1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x52f8c6u); f_0082ebac();
    /* 0052f8c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f8c8: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0052f8cc: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f8ce: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0052f8d2: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0052f8d6: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x52f8dbu); f_00771c8c();
    /* 0052f8db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f8dd: jne 0x52f96e */ if (!fZ) goto L_0052f96e;
L_0052f8e3:; BB(0x0052f8e3);
    /* 0052f8e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f8e5: push dword ptr [ebp + 0x308] */ { u32 v = R32((u32)(r_ebp+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052f8eb: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f8ed: push dword ptr [ebp + 0x304] */ { u32 v = R32((u32)(r_ebp+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052f8f3: push dword ptr [ebp + 0x300] */ { u32 v = R32((u32)(r_ebp+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052f8f9: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x52f8feu); f_00771c8c();
    /* 0052f8fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f900: jne 0x52f96e */ if (!fZ) goto L_0052f96e;
L_0052f902:; BB(0x0052f902);
    /* 0052f902: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
    /* 0052f909: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f90e: je 0x52fab3 */ if (fZ) goto L_0052fab3;
L_0052f914:; BB(0x0052f914);
    /* 0052f914: mov edi, dword ptr [0xa7336c] */ r_edi = R32((u32)(0xa7336cu));
    /* 0052f91a: mov edx, 4 */ r_edx = 0x4u;
    /* 0052f91f: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
    /* 0052f926: mov ebp, 9 */ r_ebp = 0x9u;
    /* 0052f92b: mov word ptr [esi + 0xb8], bp */ W16((u32)(r_esi+0xb8u), (u16)r_ebp);
    /* 0052f932: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0052f934: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0052f938: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0052f93d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052f942: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0052f946: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0052f94a: fistp dword ptr [esi + 0x3a4] */ W32((u32)(r_esi+0x3a4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052f950: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
L_0052f954:; BB(0x0052f954);
    /* 0052f954: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052f956: mov dword ptr [esi + 0x3e8], eax */ W32((u32)(r_esi+0x3e8u), r_eax);
    /* 0052f95c: mov dword ptr [esi + 0x3ec], eax */ W32((u32)(r_esi+0x3ecu), r_eax);
    /* 0052f962: mov dword ptr [esi + 0x3f0], eax */ W32((u32)(r_esi+0x3f0u), r_eax);
    /* 0052f968: mov dword ptr [esi + 0x3f4], eax */ W32((u32)(r_esi+0x3f4u), r_eax);
L_0052f96e:; BB(0x0052f96e);
    /* 0052f96e: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f970: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52f975u); f_007aa094();
    /* 0052f975: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f977: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f979: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f97b: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52f980u); f_00772b44();
    /* 0052f980: mov eax, dword ptr [esi + 0x3a4] */ r_eax = R32((u32)(r_esi+0x3a4u));
    /* 0052f986: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052f989: mov dword ptr [esi + 0x3a4], eax */ W32((u32)(r_esi+0x3a4u), r_eax);
    /* 0052f98f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0052f991: jl 0x52fac1 */ if ((fS!=fO)) goto L_0052fac1;
L_0052f997:; BB(0x0052f997);
    /* 0052f997: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
L_0052f99a:; BB(0x0052f99a);
    /* 0052f99a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052f99b: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x52f9a0u); f_007b999c();
    /* 0052f9a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f9a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f9a4: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052f9a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052f9aa: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x52f9afu); f_00805608();
    /* 0052f9af: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052f9b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052f9b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052f9b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052f9b5: mov esp, ebx */ r_esp = r_ebx;
    /* 0052f9b7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052f9b8: ret  */ FN_RET(0x0052f18c); r_esp += 4; return;
L_0052f9b9:; BB(0x0052f9b9);
    /* 0052f9b9: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0052f9be: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f9c1: jne 0x52f298 */ if (!fZ) goto L_0052f298;
L_0052f9c7:; BB(0x0052f9c7);
    /* 0052f9c7: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0052f9cb: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0052f9cd: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0052f9d1: jmp 0x52f298 */ goto L_0052f298;
L_0052f9d6:; BB(0x0052f9d6);
    /* 0052f9d6: mov ebp, dword ptr [edi*4 + 0xaad71c] */ r_ebp = R32((u32)(r_edi*4+0xaad71cu));
    /* 0052f9dd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f9df: je 0x52f266 */ if (fZ) goto L_0052f266;
L_0052f9e5:; BB(0x0052f9e5);
    /* 0052f9e5: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0052f9e9: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052f9ee: jge 0x52f266 */ if ((fS==fO)) goto L_0052f266;
L_0052f9f4:; BB(0x0052f9f4);
    /* 0052f9f4: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f9f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052f9fa: mov ecx, esi */ r_ecx = r_esi;
    /* 0052f9fc: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x52fa01u); f_007b65b4();
    /* 0052fa01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fa03: je 0x52f261 */ if (fZ) goto L_0052f261;
L_0052fa09:; BB(0x0052fa09);
    /* 0052fa09: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fa0e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052fa0f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0052fa12: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052fa14: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x52fa17u); call_ind(t); }
    /* 0052fa17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fa19: je 0x52f261 */ if (fZ) goto L_0052f261;
L_0052fa1f:; BB(0x0052fa1f);
    /* 0052fa1f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fa24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052fa25: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0052fa28: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052fa2a: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x52fa2du); call_ind(t); }
    /* 0052fa2d: fld dword ptr [0x9225b8] */ FPUSH(R_F32((u32)(0x9225b8u)));
    /* 0052fa33: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0052fa35: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052fa38: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0052fa3b: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052fa40: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052fa43: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052fa46: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0052fa4a: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0052fa4d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052fa4f: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x52fa52u); call_ind(t); }
    /* 0052fa52: mov dword ptr [esi + edi*4 + 0x3e4], ebp */ W32((u32)(r_esi+r_edi*4+0x3e4u), r_ebp);
    /* 0052fa59: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0052fa5d: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fa63: jne 0x52f261 */ if (!fZ) goto L_0052f261;
L_0052fa69:; BB(0x0052fa69);
    /* 0052fa69: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fa6b: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x52fa70u); f_004d4288();
    /* 0052fa70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052fa71: jmp 0x52f261 */ goto L_0052f261;
L_0052fa76:; BB(0x0052fa76);
    /* 0052fa76: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0052fa7b: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0052fa7e: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052fa83: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052fa86: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0052fa88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052fa89: mov dword ptr [esi + 0x3a4], ebp */ W32((u32)(r_esi+0x3a4u), r_ebp);
    /* 0052fa8f: mov word ptr [esi + 0x340], dx */ W16((u32)(r_esi+0x340u), (u16)r_edx);
    /* 0052fa96: mov ecx, esi */ r_ecx = r_esi;
    /* 0052fa98: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52fa9du); f_007706b0();
    /* 0052fa9d: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0052faa0: jmp 0x52f99a */ goto L_0052f99a;
L_0052faa5:; BB(0x0052faa5);
    /* 0052faa5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052faa7: mov ecx, esi */ r_ecx = r_esi;
    /* 0052faa9: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52faaeu); f_007706b0();
    /* 0052faae: jmp 0x52f6d5 */ goto L_0052f6d5;
L_0052fab3:; BB(0x0052fab3);
    /* 0052fab3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fab5: mov ecx, esi */ r_ecx = r_esi;
    /* 0052fab7: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52fabcu); f_007706b0();
    /* 0052fabc: jmp 0x52f954 */ goto L_0052f954;
L_0052fac1:; BB(0x0052fac1);
    /* 0052fac1: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fac6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fac8: mov ebp, dword ptr [esi + 0x30] */ r_ebp = R32((u32)(r_esi+0x30u));
    /* 0052facb: mov eax, 2 */ r_eax = 0x2u;
    /* 0052fad0: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0052fad7: mov edx, 9 */ r_edx = 0x9u;
    /* 0052fadc: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 0052fae3: and ebp, 0xfbffffff */ {  u32 a = r_ebp; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0052fae9: mov dword ptr [esi + 0x30], ebp */ W32((u32)(r_esi+0x30u), r_ebp);
    /* 0052faec: mov ecx, esi */ r_ecx = r_esi;
    /* 0052faee: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x52faf3u); f_007b52ec();
    /* 0052faf3: mov eax, dword ptr [esi + 0x41c] */ r_eax = R32((u32)(r_esi+0x41cu));
    /* 0052faf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fafb: je 0x52fb31 */ if (fZ) goto L_0052fb31;
L_0052fafd:; BB(0x0052fafd);
    /* 0052fafd: mov eax, dword ptr [esi + 0x420] */ r_eax = R32((u32)(r_esi+0x420u));
    /* 0052fb03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fb05: je 0x52fb0f */ if (fZ) goto L_0052fb0f;
L_0052fb07:; BB(0x0052fb07);
    /* 0052fb07: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0052fb0a: jmp 0x52f99a */ goto L_0052f99a;
L_0052fb0f:; BB(0x0052fb0f);
    /* 0052fb0f: push 0x222 */ { u32 v = 0x222u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fb14: lea eax, [esi + 0x3dc] */ r_eax = (u32)(r_esi+0x3dcu);
    /* 0052fb1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fb1b: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x52fb20u); f_00509590();
    /* 0052fb20: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052fb23: mov dword ptr [esi + 0x420], eax */ W32((u32)(r_esi+0x420u), r_eax);
    /* 0052fb29: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0052fb2c: jmp 0x52f99a */ goto L_0052f99a;
L_0052fb31:; BB(0x0052fb31);
    /* 0052fb31: push 0x222 */ { u32 v = 0x222u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fb36: lea eax, [esi + 0x3d0] */ r_eax = (u32)(r_esi+0x3d0u);
    /* 0052fb3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fb3d: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x52fb42u); f_00509590();
    /* 0052fb42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052fb45: mov dword ptr [esi + 0x41c], eax */ W32((u32)(r_esi+0x41cu), r_eax);
    /* 0052fb4b: jmp 0x52fafd */ goto L_0052fafd;
L_0052fb4d:; BB(0x0052fb4d);
    /* 0052fb4d: mov dword ptr [esi + 0x3a4], 0 */ W32((u32)(r_esi+0x3a4u), 0x0u);
    /* 0052fb57: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0052fb5c: mov word ptr [esi + 0x340], ax */ W16((u32)(r_esi+0x340u), (u16)r_eax);
    /* 0052fb63: and edi, 0xfbdfdfff */ {  u32 a = r_edi; u32 b = 0xfbdfdfffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0052fb69: mov dword ptr [esi + 0x30], edi */ W32((u32)(r_esi+0x30u), r_edi);
    /* 0052fb6c: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052fb6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052fb70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052fb71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052fb72: mov esp, ebx */ r_esp = r_ebx;
    /* 0052fb74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052fb75: ret  */ FN_RET(0x0052f18c); r_esp += 4; return;
}

void f_0052f740(void)
{
    FN_ENTER(0x0052f740);
    /* 0052f740: and al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0052f742: mov dword ptr [esi + 0x3a4], 0xa */ W32((u32)(r_esi+0x3a4u), 0xau);
    /* 0052f74c: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0052f74f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052f751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f752: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f753: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052f754: push 0x2d9 */ { u32 v = 0x2d9u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f759: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x52f75eu); f_00814298();
    /* 0052f75e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052f761: jmp 0x52f99a */ goto L_0052f99a;
L_0052f99a:; BB(0x0052f99a);
    /* 0052f99a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052f99b: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x52f9a0u); f_007b999c();
    /* 0052f9a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f9a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f9a4: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052f9a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052f9aa: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x52f9afu); f_00805608();
    /* 0052f9af: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052f9b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052f9b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052f9b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052f9b5: mov esp, ebx */ r_esp = r_ebx;
    /* 0052f9b7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052f9b8: ret  */ FN_RET(0x0052f740); r_esp += 4; return;
}

void f_0052fb78(void)
{
    FN_ENTER(0x0052fb78);
    /* 0052fb78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052fb79: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052fb7a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052fb7b: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052fb7e: mov edi, ecx */ r_edi = r_ecx;
    /* 0052fb80: movzx eax, word ptr [edi + 0x340] */ r_eax = (u32)R16((u32)(r_edi+0x340u));
    /* 0052fb87: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052fb8c: jl 0x52fbbd */ if ((fS!=fO)) goto L_0052fbbd;
L_0052fb8e:; BB(0x0052fb8e);
    /* 0052fb8e: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052fb93: jge 0x52fba6 */ if ((fS==fO)) goto L_0052fba6;
L_0052fb95:; BB(0x0052fb95);
    /* 0052fb95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fb96: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x52fb9bu); f_00786b3c();
    /* 0052fb9b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052fb9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fb9d: mov ecx, edi */ r_ecx = r_edi;
    /* 0052fb9f: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52fba4u); f_007706b0();
    /* 0052fba4: jmp 0x52fbe9 */ goto L_0052fbe9;
L_0052fba6:; BB(0x0052fba6);
    /* 0052fba6: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0052fbab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fbad: mov word ptr [edi + 0x340], ax */ W16((u32)(r_edi+0x340u), (u16)r_eax);
    /* 0052fbb4: mov ecx, edi */ r_ecx = r_edi;
    /* 0052fbb6: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52fbbbu); f_007706b0();
    /* 0052fbbb: jmp 0x52fbe9 */ goto L_0052fbe9;
L_0052fbbd:; BB(0x0052fbbd);
    /* 0052fbbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fbbe: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x52fbc3u); f_0068d5a8();
    /* 0052fbc3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052fbc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fbc6: je 0x52fbe0 */ if (fZ) goto L_0052fbe0;
L_0052fbc8:; BB(0x0052fbc8);
    /* 0052fbc8: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0052fbce: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fbd4: jne 0x52fbe0 */ if (!fZ) goto L_0052fbe0;
L_0052fbd6:; BB(0x0052fbd6);
    /* 0052fbd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fbd7: mov ecx, edi */ r_ecx = r_edi;
    /* 0052fbd9: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52fbdeu); f_007706b0();
    /* 0052fbde: jmp 0x52fbe9 */ goto L_0052fbe9;
L_0052fbe0:; BB(0x0052fbe0);
    /* 0052fbe0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fbe2: mov ecx, edi */ r_ecx = r_edi;
    /* 0052fbe4: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52fbe9u); f_007706b0();
L_0052fbe9:; BB(0x0052fbe9);
    /* 0052fbe9: mov esi, dword ptr [0xa7336c] */ r_esi = R32((u32)(0xa7336cu));
    /* 0052fbef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0052fbf2: movsx ebp, word ptr [edi + 0xb8] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 0052fbf9: mov edx, dword ptr [edi + 0xd8] */ r_edx = R32((u32)(r_edi+0xd8u));
    /* 0052fbff: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052fc04: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0052fc07: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052fc09: fld dword ptr [edx + ebp*8 + 8] */ FPUSH(R_F32((u32)(r_edx+r_ebp*8+0x8u)));
    /* 0052fc0d: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 0052fc10: fstp dword ptr [edi + 0xc8] */ W_F32((u32)(r_edi+0xc8u), ST(0)); FPOP();
    /* 0052fc16: mov ecx, edi */ r_ecx = r_edi;
    /* 0052fc18: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52fc1du); f_007aa094();
    /* 0052fc1d: mov ecx, edi */ r_ecx = r_edi;
    /* 0052fc1f: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52fc24u); f_00770738();
    /* 0052fc24: mov ebp, eax */ r_ebp = r_eax;
    /* 0052fc26: movsx edx, word ptr [edi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 0052fc2d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fc2f: je 0x52fe90 */ if (fZ) goto L_0052fe90;
L_0052fc35:; BB(0x0052fc35);
    /* 0052fc35: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fc38: jne 0x52fe58 */ if (!fZ) goto L_0052fe58;
L_0052fc3e:; BB(0x0052fc3e);
    /* 0052fc3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc40: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc42: mov ecx, edi */ r_ecx = r_edi;
    /* 0052fc44: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52fc49u); f_00772b44();
    /* 0052fc49: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc4e: mov ecx, edi */ r_ecx = r_edi;
    /* 0052fc50: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x52fc55u); f_007aaa30();
    /* 0052fc55: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0052fc58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fc5a: je 0x52fc6e */ if (fZ) goto L_0052fc6e;
L_0052fc5c:; BB(0x0052fc5c);
    /* 0052fc5c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052fc5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc60: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc61: push 0x2de */ { u32 v = 0x2deu; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc66: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x52fc6bu); f_00814298();
    /* 0052fc6b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0052fc6e:; BB(0x0052fc6e);
    /* 0052fc6e: fild dword ptr [edi + 0x3ac] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x3acu)));
    /* 0052fc74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc75: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052fc78: mov ecx, edi */ r_ecx = r_edi;
    /* 0052fc7a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x52fc7fu); f_007aaa30();
    /* 0052fc7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fc81: je 0x52fdd5 */ if (fZ) goto L_0052fdd5;
L_0052fc87:; BB(0x0052fc87);
    /* 0052fc87: mov dword ptr [edi + 0x3ac], 0 */ W32((u32)(r_edi+0x3acu), 0x0u);
    /* 0052fc91: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fc93: je 0x52fdd5 */ if (fZ) goto L_0052fdd5;
L_0052fc99:; BB(0x0052fc99);
    /* 0052fc99: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc9e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc9f: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0052fca2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052fca4: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x52fca7u); call_ind(t); }
    /* 0052fca7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fca9: je 0x52fdd5 */ if (fZ) goto L_0052fdd5;
L_0052fcaf:; BB(0x0052fcaf);
    /* 0052fcaf: mov edx, dword ptr [edi + 0x3a0] */ r_edx = R32((u32)(r_edi+0x3a0u));
    /* 0052fcb5: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fcb8: je 0x52fd9a */ if (fZ) goto L_0052fd9a;
L_0052fcbe:; BB(0x0052fcbe);
    /* 0052fcbe: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fcc1: jne 0x52fd03 */ if (!fZ) goto L_0052fd03;
L_0052fcc3:; BB(0x0052fcc3);
    /* 0052fcc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fcc5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052fcc6: mov edx, 0xa */ r_edx = 0xau;
    /* 0052fccb: mov word ptr [edi + 0x116], dx */ W16((u32)(r_edi+0x116u), (u16)r_edx);
    /* 0052fcd2: mov edx, dword ptr [0xa7336c] */ r_edx = R32((u32)(0xa7336cu));
    /* 0052fcd8: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 0052fcdb: mov word ptr [edi + 0x118], dx */ W16((u32)(r_edi+0x118u), (u16)r_edx);
    /* 0052fce2: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0052fce5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052fce7: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x52fceau); call_ind(t); }
    /* 0052fcea: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052fcec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052fcee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fcef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fcf0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052fcf1: push 0x2df */ { u32 v = 0x2dfu; r_esp -= 4; W32(r_esp, v); }
    /* 0052fcf6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x52fcfbu); f_00814298();
    /* 0052fcfb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052fcfe: jmp 0x52fdd5 */ f_0052fdd5(); return;
L_0052fd03:; BB(0x0052fd03);
    /* 0052fd03: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fd06: jne 0x52fd5e */ if (!fZ) goto L_0052fd5e;
L_0052fd08:; BB(0x0052fd08);
    /* 0052fd08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fd0a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052fd0b: mov edx, 0xb */ r_edx = 0xbu;
    /* 0052fd10: mov word ptr [edi + 0x116], dx */ W16((u32)(r_edi+0x116u), (u16)r_edx);
    /* 0052fd17: mov edx, dword ptr [0xa7336c] */ r_edx = R32((u32)(0xa7336cu));
    /* 0052fd1d: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 0052fd20: mov word ptr [edi + 0x118], dx */ W16((u32)(r_edi+0x118u), (u16)r_edx);
    /* 0052fd27: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0052fd2a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052fd2c: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x52fd2fu); call_ind(t); }
    /* 0052fd2f: fcomp dword ptr [0x9225a8] */ fx_compare(ST(0), R_F32((u32)(0x9225a8u))); FPOP();
    /* 0052fd35: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052fd37: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052fd38: ja 0x52fd4a */ if ((!fC&&!fZ)) goto L_0052fd4a;
L_0052fd3a:; BB(0x0052fd3a);
    /* 0052fd3a: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fd3f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052fd40: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0052fd43: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052fd45: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x52fd48u); call_ind(t); }
    /* 0052fd48: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0052fd4a:; BB(0x0052fd4a);
    /* 0052fd4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052fd4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fd4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fd4e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052fd4f: push 0x2e0 */ { u32 v = 0x2e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fd54: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x52fd59u); f_00814298();
    /* 0052fd59: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052fd5c: jmp 0x52fdd5 */ f_0052fdd5(); return;
L_0052fd5e:; BB(0x0052fd5e);
    /* 0052fd5e: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fd63: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052fd64: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0052fd67: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052fd69: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x52fd6cu); call_ind(t); }
    /* 0052fd6c: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0052fd70: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052fd72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052fd73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052fd74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052fd75: push 0x2df */ { u32 v = 0x2dfu; r_esp -= 4; W32(r_esp, v); }
    /* 0052fd7a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x52fd7fu); f_00814298();
    /* 0052fd7f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052fd82: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0052fd85: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052fd88: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0052fd8c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0052fd90: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052fd92: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0052fd95: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x52fd98u); call_ind(t); }
    /* 0052fd98: jmp 0x52fdd5 */ f_0052fdd5(); return;
L_0052fd9a:; BB(0x0052fd9a);
    /* 0052fd9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fd9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052fd9d: mov edx, 7 */ r_edx = 0x7u;
    /* 0052fda2: mov word ptr [edi + 0x116], dx */ W16((u32)(r_edi+0x116u), (u16)r_edx);
    /* 0052fda9: mov edx, dword ptr [0xa7336c] */ r_edx = R32((u32)(0xa7336cu));
    /* 0052fdaf: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 0052fdb2: mov word ptr [edi + 0x118], dx */ W16((u32)(r_edi+0x118u), (u16)r_edx);
    /* 0052fdb9: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0052fdbc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052fdbe: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x52fdc1u); call_ind(t); }
    /* 0052fdc1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052fdc3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052fdc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fdc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fdc7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052fdc8: push 0x2df */ { u32 v = 0x2dfu; r_esp -= 4; W32(r_esp, v); }
    /* 0052fdcd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x52fdd2u); f_00814298();
    /* 0052fdd2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0052fdd5:; BB(0x0052fdd5);
    /* 0052fdd5: mov ecx, dword ptr [edi + 0x41c] */ r_ecx = R32((u32)(r_edi+0x41cu));
    /* 0052fddb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fddd: je 0x52fdfa */ if (fZ) goto L_0052fdfa;
L_0052fddf:; BB(0x0052fddf);
    /* 0052fddf: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x52fde4u); f_008173b4();
    /* 0052fde4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fde6: je 0x52fdfa */ if (fZ) goto L_0052fdfa;
L_0052fde8:; BB(0x0052fde8);
    /* 0052fde8: mov ecx, dword ptr [edi + 0x41c] */ r_ecx = R32((u32)(r_edi+0x41cu));
    /* 0052fdee: lea eax, [edi + 0x3b8] */ r_eax = (u32)(r_edi+0x3b8u);
    /* 0052fdf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fdf5: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x52fdfau); f_00508db8();
L_0052fdfa:; BB(0x0052fdfa);
    /* 0052fdfa: mov ecx, dword ptr [edi + 0x420] */ r_ecx = R32((u32)(r_edi+0x420u));
    /* 0052fe00: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fe02: je 0x52fe1f */ if (fZ) goto L_0052fe1f;
L_0052fe04:; BB(0x0052fe04);
    /* 0052fe04: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x52fe09u); f_008173b4();
    /* 0052fe09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fe0b: je 0x52fe1f */ if (fZ) goto L_0052fe1f;
L_0052fe0d:; BB(0x0052fe0d);
    /* 0052fe0d: mov ecx, dword ptr [edi + 0x420] */ r_ecx = R32((u32)(r_edi+0x420u));
    /* 0052fe13: lea eax, [edi + 0x3b8] */ r_eax = (u32)(r_edi+0x3b8u);
    /* 0052fe19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fe1a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x52fe1fu); f_00508db8();
L_0052fe1f:; BB(0x0052fe1f);
    /* 0052fe1f: mov ecx, dword ptr [edi + 0x424] */ r_ecx = R32((u32)(r_edi+0x424u));
    /* 0052fe25: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fe27: je 0x52fe44 */ if (fZ) goto L_0052fe44;
L_0052fe29:; BB(0x0052fe29);
    /* 0052fe29: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x52fe2eu); f_008173b4();
    /* 0052fe2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fe30: je 0x52fe44 */ if (fZ) goto L_0052fe44;
L_0052fe32:; BB(0x0052fe32);
    /* 0052fe32: mov ecx, dword ptr [edi + 0x424] */ r_ecx = R32((u32)(r_edi+0x424u));
    /* 0052fe38: lea eax, [edi + 0x3b8] */ r_eax = (u32)(r_edi+0x3b8u);
    /* 0052fe3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fe3f: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x52fe44u); f_00508db8();
L_0052fe44:; BB(0x0052fe44);
    /* 0052fe44: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 0052fe4a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fe4d: jne 0x530077 */ if (!fZ) goto L_00530077;
L_0052fe53:; BB(0x0052fe53);
    /* 0052fe53: jmp 0x53005a */ goto L_0053005a;
L_0052fe58:; BB(0x0052fe58);
    /* 0052fe58: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fe5b: jne 0x52fe87 */ if (!fZ) goto L_0052fe87;
L_0052fe5d:; BB(0x0052fe5d);
    /* 0052fe5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fe5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fe61: mov ecx, edi */ r_ecx = r_edi;
    /* 0052fe63: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52fe68u); f_00772b44();
    /* 0052fe68: mov eax, dword ptr [edi + 0x3a4] */ r_eax = R32((u32)(r_edi+0x3a4u));
    /* 0052fe6e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052fe71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0052fe73: jl 0x53009f */ if ((fS!=fO)) goto L_0053009f;
L_0052fe79:; BB(0x0052fe79);
    /* 0052fe79: mov dword ptr [edi + 0x3a4], eax */ W32((u32)(r_edi+0x3a4u), r_eax);
    /* 0052fe7f: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0052fe82: jmp 0x53005a */ goto L_0053005a;
L_0052fe87:; BB(0x0052fe87);
    /* 0052fe87: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052fe89: mov word ptr [edi + 0x330], dx */ W16((u32)(r_edi+0x330u), (u16)r_edx);
L_0052fe90:; BB(0x0052fe90);
    /* 0052fe90: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fe92: jne 0x52feb1 */ if (!fZ) goto L_0052feb1;
L_0052fe94:; BB(0x0052fe94);
    /* 0052fe94: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0052fe97: mov dword ptr [edi + 0x3a4], 0 */ W32((u32)(r_edi+0x3a4u), 0x0u);
    /* 0052fea1: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052fea6: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0052fea9: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0052feac: jmp 0x53005a */ goto L_0053005a;
L_0052feb1:; BB(0x0052feb1);
    /* 0052feb1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0052feb4: mov esi, dword ptr [ebp + 0x300] */ r_esi = R32((u32)(r_ebp+0x300u));
    /* 0052feba: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 0052fec0: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 0052fec6: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0052fec9: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0052fecd: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052fed1: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 0052fed7: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x52fedcu); f_0082f9c4();
    /* 0052fedc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0052fedf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fee0: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 0052fee6: mov ecx, edi */ r_ecx = r_edi;
    /* 0052fee8: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052feeb: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x52fef0u); f_00771858();
    /* 0052fef0: mov ebp, eax */ r_ebp = r_eax;
    /* 0052fef2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fef4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fef6: mov ecx, edi */ r_ecx = r_edi;
    /* 0052fef8: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52fefdu); f_00772b44();
    /* 0052fefd: mov edx, dword ptr [edi + 0x31c] */ r_edx = R32((u32)(r_edi+0x31cu));
    /* 0052ff03: cmp ebp, dword ptr [edx + 0xc] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052ff06: jge 0x530057 */ if ((fS==fO)) goto L_00530057;
L_0052ff0c:; BB(0x0052ff0c);
    /* 0052ff0c: fld dword ptr [edi + 0x360] */ FPUSH(R_F32((u32)(r_edi+0x360u)));
    /* 0052ff12: fcom dword ptr [0x9225a8] */ fx_compare(ST(0), R_F32((u32)(0x9225a8u))); 
    /* 0052ff18: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052ff1a: mov edx, 2 */ r_edx = 0x2u;
    /* 0052ff1f: mov word ptr [edi + 0x330], dx */ W16((u32)(r_edi+0x330u), (u16)r_edx);
    /* 0052ff26: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052ff27: je 0x53018c */ if (fZ) goto L_0053018c;
L_0052ff2d:; BB(0x0052ff2d);
    /* 0052ff2d: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0052ff31: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0052ff36: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052ff3b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0052ff3f: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0052ff43: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0052ff47: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0052ff4b: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0052ff4f: mov dword ptr [edi + 0x3a0], eax */ W32((u32)(r_edi+0x3a0u), r_eax);
L_0052ff55:; BB(0x0052ff55);
    /* 0052ff55: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ff58: jne 0x52ffac */ if (!fZ) goto L_0052ffac;
L_0052ff5a:; BB(0x0052ff5a);
    /* 0052ff5a: mov edx, dword ptr [edi + 0x41c] */ r_edx = R32((u32)(r_edi+0x41cu));
    /* 0052ff60: mov eax, 2 */ r_eax = 0x2u;
    /* 0052ff65: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0052ff6c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ff6e: je 0x5300d5 */ if (fZ) goto L_005300d5;
L_0052ff74:; BB(0x0052ff74);
    /* 0052ff74: mov eax, dword ptr [edi + 0x420] */ r_eax = R32((u32)(r_edi+0x420u));
    /* 0052ff7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ff7c: je 0x5300b9 */ if (fZ) goto L_005300b9;
L_0052ff82:; BB(0x0052ff82);
    /* 0052ff82: mov dword ptr [edi + 0x3ac], 0x1e */ W32((u32)(r_edi+0x3acu), 0x1eu);
    /* 0052ff8c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052ff8e: mov dword ptr [edi + 0x424], eax */ W32((u32)(r_edi+0x424u), r_eax);
    /* 0052ff94: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0052ff97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ff98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ff99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052ff9a: push 0x2dd */ { u32 v = 0x2ddu; r_esp -= 4; W32(r_esp, v); }
    /* 0052ff9f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x52ffa4u); f_00814298();
    /* 0052ffa4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052ffa7: jmp 0x53005a */ goto L_0053005a;
L_0052ffac:; BB(0x0052ffac);
    /* 0052ffac: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ffaf: jne 0x530000 */ if (!fZ) goto L_00530000;
L_0052ffb1:; BB(0x0052ffb1);
    /* 0052ffb1: mov edx, dword ptr [edi + 0x41c] */ r_edx = R32((u32)(r_edi+0x41cu));
    /* 0052ffb7: mov eax, 2 */ r_eax = 0x2u;
    /* 0052ffbc: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0052ffc3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ffc5: je 0x530110 */ if (fZ) goto L_00530110;
L_0052ffcb:; BB(0x0052ffcb);
    /* 0052ffcb: mov eax, dword ptr [edi + 0x420] */ r_eax = R32((u32)(r_edi+0x420u));
    /* 0052ffd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ffd3: je 0x5300f1 */ if (fZ) goto L_005300f1;
L_0052ffd9:; BB(0x0052ffd9);
    /* 0052ffd9: mov dword ptr [edi + 0x3ac], 0x1e */ W32((u32)(r_edi+0x3acu), 0x1eu);
    /* 0052ffe3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052ffe5: mov dword ptr [edi + 0x424], eax */ W32((u32)(r_edi+0x424u), r_eax);
    /* 0052ffeb: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0052ffee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ffef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fff0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052fff1: push 0x2dd */ { u32 v = 0x2ddu; r_esp -= 4; W32(r_esp, v); }
    /* 0052fff6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x52fffbu); f_00814298();
    /* 0052fffb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052fffe: jmp 0x53005a */ goto L_0053005a;
L_00530000:; BB(0x00530000);
    /* 00530000: mov edx, dword ptr [edi + 0x41c] */ r_edx = R32((u32)(r_edi+0x41cu));
    /* 00530006: mov eax, 3 */ r_eax = 0x3u;
    /* 0053000b: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00530012: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530014: je 0x53016d */ if (fZ) goto L_0053016d;
L_0053001a:; BB(0x0053001a);
    /* 0053001a: mov eax, dword ptr [edi + 0x420] */ r_eax = R32((u32)(r_edi+0x420u));
    /* 00530020: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530022: je 0x53014e */ if (fZ) goto L_0053014e;
L_00530028:; BB(0x00530028);
    /* 00530028: mov eax, dword ptr [edi + 0x424] */ r_eax = R32((u32)(r_edi+0x424u));
    /* 0053002e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530030: je 0x53012f */ if (fZ) goto L_0053012f;
L_00530036:; BB(0x00530036);
    /* 00530036: mov dword ptr [edi + 0x3ac], 0x23 */ W32((u32)(r_edi+0x3acu), 0x23u);
    /* 00530040: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 00530043: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00530045: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530046: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530047: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00530048: push 0x2dd */ { u32 v = 0x2ddu; r_esp -= 4; W32(r_esp, v); }
    /* 0053004d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x530052u); f_00814298();
    /* 00530052: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00530055: jmp 0x53005a */ goto L_0053005a;
L_00530057:; BB(0x00530057);
    /* 00530057: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
L_0053005a:; BB(0x0053005a);
    /* 0053005a: mov ecx, edi */ r_ecx = r_edi;
    /* 0053005c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x530061u); f_007b6880();
    /* 00530061: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530065: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053006a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053006b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x530070u); f_00805608();
    /* 00530070: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530074: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00530076: ret  */ FN_RET(0x0052fb78); r_esp += 4; return;
L_00530077:; BB(0x00530077);
    /* 00530077: mov dword ptr [edi + 0x3a4], 0x1e */ W32((u32)(r_edi+0x3a4u), 0x1eu);
    /* 00530081: mov eax, 3 */ r_eax = 0x3u;
    /* 00530086: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0053008d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053008f: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 00530096: mov ecx, edi */ r_ecx = r_edi;
    /* 00530098: call 0x53140c */ r_esp -= 4; W32(r_esp, 0x53009du); f_0053140c();
    /* 0053009d: jmp 0x53005a */ goto L_0053005a;
L_0053009f:; BB(0x0053009f);
    /* 0053009f: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005300a2: mov dword ptr [edi + 0x3a4], 0 */ W32((u32)(r_edi+0x3a4u), 0x0u);
    /* 005300ac: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005300b1: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005300b4: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 005300b7: jmp 0x53005a */ goto L_0053005a;
L_005300b9:; BB(0x005300b9);
    /* 005300b9: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005300bb: lea eax, [edi + 0x3b8] */ r_eax = (u32)(r_edi+0x3b8u);
    /* 005300c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005300c2: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5300c7u); f_00509590();
    /* 005300c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005300ca: mov dword ptr [edi + 0x420], eax */ W32((u32)(r_edi+0x420u), r_eax);
    /* 005300d0: jmp 0x52ff82 */ goto L_0052ff82;
L_005300d5:; BB(0x005300d5);
    /* 005300d5: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005300d7: lea eax, [edi + 0x3b8] */ r_eax = (u32)(r_edi+0x3b8u);
    /* 005300dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005300de: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5300e3u); f_00509590();
    /* 005300e3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005300e6: mov dword ptr [edi + 0x41c], eax */ W32((u32)(r_edi+0x41cu), r_eax);
    /* 005300ec: jmp 0x52ff74 */ goto L_0052ff74;
L_005300f1:; BB(0x005300f1);
    /* 005300f1: push 0x188 */ { u32 v = 0x188u; r_esp -= 4; W32(r_esp, v); }
    /* 005300f6: lea eax, [edi + 0x3b8] */ r_eax = (u32)(r_edi+0x3b8u);
    /* 005300fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005300fd: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x530102u); f_00509590();
    /* 00530102: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00530105: mov dword ptr [edi + 0x420], eax */ W32((u32)(r_edi+0x420u), r_eax);
    /* 0053010b: jmp 0x52ffd9 */ goto L_0052ffd9;
L_00530110:; BB(0x00530110);
    /* 00530110: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530115: lea eax, [edi + 0x3b8] */ r_eax = (u32)(r_edi+0x3b8u);
    /* 0053011b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053011c: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x530121u); f_00509590();
    /* 00530121: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00530124: mov dword ptr [edi + 0x41c], eax */ W32((u32)(r_edi+0x41cu), r_eax);
    /* 0053012a: jmp 0x52ffcb */ goto L_0052ffcb;
L_0053012f:; BB(0x0053012f);
    /* 0053012f: push 0x1c8 */ { u32 v = 0x1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00530134: lea eax, [edi + 0x3b8] */ r_eax = (u32)(r_edi+0x3b8u);
    /* 0053013a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053013b: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x530140u); f_00509590();
    /* 00530140: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00530143: mov dword ptr [edi + 0x424], eax */ W32((u32)(r_edi+0x424u), r_eax);
    /* 00530149: jmp 0x530036 */ goto L_00530036;
L_0053014e:; BB(0x0053014e);
    /* 0053014e: push 0x1c5 */ { u32 v = 0x1c5u; r_esp -= 4; W32(r_esp, v); }
    /* 00530153: lea eax, [edi + 0x3b8] */ r_eax = (u32)(r_edi+0x3b8u);
    /* 00530159: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053015a: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x53015fu); f_00509590();
    /* 0053015f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00530162: mov dword ptr [edi + 0x420], eax */ W32((u32)(r_edi+0x420u), r_eax);
    /* 00530168: jmp 0x530028 */ goto L_00530028;
L_0053016d:; BB(0x0053016d);
    /* 0053016d: push 0x1c4 */ { u32 v = 0x1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00530172: lea eax, [edi + 0x3b8] */ r_eax = (u32)(r_edi+0x3b8u);
    /* 00530178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530179: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x53017eu); f_00509590();
    /* 0053017e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00530181: mov dword ptr [edi + 0x41c], eax */ W32((u32)(r_edi+0x41cu), r_eax);
    /* 00530187: jmp 0x53001a */ goto L_0053001a;
L_0053018c:; BB(0x0053018c);
    /* 0053018c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053018e: mov ecx, edi */ r_ecx = r_edi;
    /* 00530190: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x530195u); f_007751b0();
    /* 00530195: fcomp dword ptr [0x92259c] */ fx_compare(ST(0), R_F32((u32)(0x92259cu))); FPOP();
    /* 0053019b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053019d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053019e: ja 0x5301b4 */ if ((!fC&&!fZ)) goto L_005301b4;
L_005301a0:; BB(0x005301a0);
    /* 005301a0: mov dword ptr [edi + 0x3a0], 3 */ W32((u32)(r_edi+0x3a0u), 0x3u);
    /* 005301aa: mov eax, 3 */ r_eax = 0x3u;
    /* 005301af: jmp 0x52ff55 */ goto L_0052ff55;
L_005301b4:; BB(0x005301b4);
    /* 005301b4: mov ecx, edi */ r_ecx = r_edi;
    /* 005301b6: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5301bbu); f_007751b0();
    /* 005301bb: fcomp dword ptr [0x922598] */ fx_compare(ST(0), R_F32((u32)(0x922598u))); FPOP();
    /* 005301c1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005301c3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005301c4: jbe 0x5301da */ if ((fC||fZ)) goto L_005301da;
L_005301c6:; BB(0x005301c6);
    /* 005301c6: mov dword ptr [edi + 0x3a0], 1 */ W32((u32)(r_edi+0x3a0u), 0x1u);
    /* 005301d0: mov eax, 1 */ r_eax = 0x1u;
    /* 005301d5: jmp 0x52ff55 */ goto L_0052ff55;
L_005301da:; BB(0x005301da);
    /* 005301da: mov dword ptr [edi + 0x3a0], 2 */ W32((u32)(r_edi+0x3a0u), 0x2u);
    /* 005301e4: mov eax, 2 */ r_eax = 0x2u;
    /* 005301e9: jmp 0x52ff55 */ goto L_0052ff55;
}

