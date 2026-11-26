#include "protos.h"

void f_005ad034(void) /* sub_5AD034 */
{
    FN_ENTER(0x005ad034);
    /* 005ad034: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad035: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad036: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad037: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ad03a: mov esi, ecx */ r_esi = r_ecx;
    /* 005ad03c: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad03e: call 0x5acae8 */ r_esp -= 4; W32(r_esp, 0x5ad043u); f_005acae8();
    /* 005ad043: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad045: je 0x5ad246 */ if (fZ) goto L_005ad246;
L_005ad04b:; BB(0x005ad04b);
    /* 005ad04b: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad04d: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5ad052u); f_00770738();
    /* 005ad052: mov ebx, eax */ r_ebx = r_eax;
    /* 005ad054: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad056: je 0x5ad246 */ if (fZ) goto L_005ad246;
L_005ad05c:; BB(0x005ad05c);
    /* 005ad05c: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad05e: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5ad063u); f_007751b0();
    /* 005ad063: fld dword ptr [0x92a7d8] */ FPUSH(R_F32((u32)(0x92a7d8u)));
    /* 005ad069: fadd dword ptr [esi + 0x364] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x364u));
    /* 005ad06f: fmul dword ptr [0x92a7b8] */ ST(0) = ST(0) * R_F32((u32)(0x92a7b8u));
    /* 005ad075: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005ad077: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ad079: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ad07a: jbe 0x5ad246 */ if ((fC||fZ)) goto L_005ad246;
L_005ad080:; BB(0x005ad080);
    /* 005ad080: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005ad083: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad084: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad085: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ad087: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x5ad08cu); f_00771458();
    /* 005ad08c: mov edi, dword ptr [0xa748bc] */ r_edi = R32((u32)(0xa748bcu));
    /* 005ad092: mov edx, dword ptr [esi + 0x33c] */ r_edx = R32((u32)(r_esi+0x33cu));
    /* 005ad098: mov edi, dword ptr [edi + edx*4] */ r_edi = R32((u32)(r_edi+r_edx*4));
    /* 005ad09b: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 005ad09e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005ad0a0: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005ad0a2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ad0a4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ad0a5: jbe 0x5ad0b0 */ if ((fC||fZ)) goto L_005ad0b0;
L_005ad0a7:; BB(0x005ad0a7);
    /* 005ad0a7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ad0a9: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ad0ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ad0ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ad0ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ad0af: ret  */ FN_RET(0x005ad034); r_esp += 4; return;
L_005ad0b0:; BB(0x005ad0b0);
    /* 005ad0b0: fcomp dword ptr [0x92a7b4] */ fx_compare(ST(0), R_F32((u32)(0x92a7b4u))); FPOP();
    /* 005ad0b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ad0b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ad0b9: ja 0x5ad246 */ if ((!fC&&!fZ)) goto L_005ad246;
L_005ad0bf:; BB(0x005ad0bf);
    /* 005ad0bf: mov edi, dword ptr [0xa748b4] */ r_edi = R32((u32)(0xa748b4u));
    /* 005ad0c5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005ad0c9: mov edx, dword ptr [edi + edx*4] */ r_edx = R32((u32)(r_edi+r_edx*4));
    /* 005ad0cc: fild dword ptr [edx + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x18u)));
    /* 005ad0cf: fmul dword ptr [0x92a7b0] */ ST(0) = ST(0) * R_F32((u32)(0x92a7b0u));
    /* 005ad0d5: fdiv dword ptr [0x92a7ac] */ ST(0) = ST(0) / R_F32((u32)(0x92a7acu));
    /* 005ad0db: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 005ad0df: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 005ad0e4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ad0e9: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005ad0ed: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005ad0f1: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 005ad0f5: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005ad0f9: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005ad0fc: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 005ad100: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005ad102: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005ad104: fmul qword ptr [0x92a6e8] */ ST(0) = ST(0) * R_F64((u32)(0x92a6e8u));
    /* 005ad10a: fdiv qword ptr [0x92a6e0] */ ST(0) = ST(0) / R_F64((u32)(0x92a6e0u));
    /* 005ad110: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 005ad114: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 005ad119: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ad11e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005ad122: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005ad126: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 005ad12a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005ad12e: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 005ad132: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad133: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ad136: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5ad13bu); f_007a9018();
    /* 005ad13b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ad13e: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ad140: jl 0x5ad246 */ if ((fS!=fO)) goto L_005ad246;
L_005ad146:; BB(0x005ad146);
    /* 005ad146: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad148: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5ad14du); f_00770738();
    /* 005ad14d: mov ebx, eax */ r_ebx = r_eax;
    /* 005ad14f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad151: je 0x5ad246 */ if (fZ) goto L_005ad246;
L_005ad157:; BB(0x005ad157);
    /* 005ad157: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 005ad15b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad15c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad15d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ad15f: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x5ad164u); f_00771458();
    /* 005ad164: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005ad168: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005ad16c: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 005ad170: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005ad172: fmul qword ptr [0x92a6e8] */ ST(0) = ST(0) * R_F64((u32)(0x92a6e8u));
    /* 005ad178: fdiv qword ptr [0x92a6e0] */ ST(0) = ST(0) / R_F64((u32)(0x92a6e0u));
    /* 005ad17e: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 005ad182: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 005ad187: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ad18c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005ad190: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005ad194: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 005ad198: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005ad19c: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 005ad1a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad1a1: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ad1a4: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x5ad1a9u); f_007a900c();
    /* 005ad1a9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ad1ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005ad1ae: jl 0x5ad24d */ if ((fS!=fO)) goto L_005ad24d;
L_005ad1b4:; BB(0x005ad1b4);
    /* 005ad1b4: mov edi, 0x4000 */ r_edi = 0x4000u;
L_005ad1b9:; BB(0x005ad1b9);
    /* 005ad1b9: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005ad1be: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5ad1c3u); f_0082d990();
    /* 005ad1c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ad1c5: mov edx, edi */ r_edx = r_edi;
    /* 005ad1c7: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5ad1ccu); f_0082d8bc();
    /* 005ad1cc: mov edi, dword ptr [0xa748bc] */ r_edi = R32((u32)(0xa748bcu));
    /* 005ad1d2: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005ad1d6: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 005ad1dc: mov edi, dword ptr [edi + eax*4 + 0xc] */ r_edi = R32((u32)(r_edi+r_eax*4+0xcu));
    /* 005ad1e0: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 005ad1e3: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 005ad1e6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005ad1e8: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 005ad1ea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005ad1ec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ad1ee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ad1f0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ad1f1: ja 0x5ad1f7 */ if ((!fC&&!fZ)) goto L_005ad1f7;
L_005ad1f3:; BB(0x005ad1f3);
    /* 005ad1f3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ad1f5: jmp 0x5ad212 */ goto L_005ad212;
L_005ad1f7:; BB(0x005ad1f7);
    /* 005ad1f7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005ad1f9: fdiv dword ptr [esp + 0x30] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x30u));
    /* 005ad1fd: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ad200: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 005ad203: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 005ad207: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005ad20b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ad20d: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5ad212u); f_0082fa0c();
L_005ad212:; BB(0x005ad212);
    /* 005ad212: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 005ad216: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad217: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005ad21b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ad21d: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5ad222u); f_0082eab8();
    /* 005ad222: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005ad227: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x5ad22cu); f_0082eb80();
    /* 005ad22c: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005ad230: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005ad233: mov edx, ebx */ r_edx = r_ebx;
    /* 005ad235: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5ad23au); f_0082ebac();
    /* 005ad23a: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005ad23e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad23f: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad241: call 0x5acb10 */ r_esp -= 4; W32(r_esp, 0x5ad246u); f_005acb10();
L_005ad246:; BB(0x005ad246);
    /* 005ad246: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ad249: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ad24a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ad24b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ad24c: ret  */ FN_RET(0x005ad034); r_esp += 4; return;
L_005ad24d:; BB(0x005ad24d);
    /* 005ad24d: mov edi, 0xc000 */ r_edi = 0xc000u;
    /* 005ad252: jmp 0x5ad1b9 */ goto L_005ad1b9;
}

void f_005ad258(void) /* sub_5AD258 */
{
    FN_ENTER(0x005ad258);
    /* 005ad258: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005ad25f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad262: jne 0x5ad270 */ if (!fZ) goto L_005ad270;
L_005ad264:; BB(0x005ad264);
    /* 005ad264: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005ad267: and eax, 0xfffff9ff */ {  u32 a = r_eax; u32 b = 0xfffff9ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ad26c: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 005ad26f: ret  */ FN_RET(0x005ad258); r_esp += 4; return;
L_005ad270:; BB(0x005ad270);
    /* 005ad270: call 0x52bc44 */ r_esp -= 4; W32(r_esp, 0x5ad275u); f_0052bc44();
    /* 005ad275: ret  */ FN_RET(0x005ad258); r_esp += 4; return;
}

void f_005ad278(void) /* sub_5AD278 */
{
    FN_ENTER(0x005ad278);
    /* 005ad278: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005ad27f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ad282: je 0x5ad291 */ if (fZ) goto L_005ad291;
L_005ad284:; BB(0x005ad284);
    /* 005ad284: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ad288: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ad28c: call 0x7774a0 */ r_esp -= 4; W32(r_esp, 0x5ad291u); f_007774a0();
L_005ad291:; BB(0x005ad291);
    /* 005ad291: ret 8 */ FN_RET(0x005ad278); r_esp += 12; return;
}

void f_005ad294(void) /* sub_5AD294 */
{
    FN_ENTER(0x005ad294);
    /* 005ad294: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ad295: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ad297: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 005ad29e: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad2a1: je 0x5ad2ac */ if (fZ) goto L_005ad2ac;
L_005ad2a3:; BB(0x005ad2a3);
    /* 005ad2a3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ad2a5: call 0x52bc74 */ r_esp -= 4; W32(r_esp, 0x5ad2aau); f_0052bc74();
    /* 005ad2aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ad2ab: ret  */ FN_RET(0x005ad294); r_esp += 4; return;
L_005ad2ac:; BB(0x005ad2ac);
    /* 005ad2ac: lea ecx, [ebp + 0x3b0] */ r_ecx = (u32)(r_ebp+0x3b0u);
    /* 005ad2b2: call 0x512458 */ r_esp -= 4; W32(r_esp, 0x5ad2b7u); f_00512458();
    /* 005ad2b7: jmp 0x5ad2a3 */ goto L_005ad2a3;
}

void f_005ad2bc(void) /* sub_5AD2BC */
{
    FN_ENTER(0x005ad2bc);
    /* 005ad2bc: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005ad2c3: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ad2c6: je 0x5ad2d1 */ if (fZ) goto L_005ad2d1;
L_005ad2c8:; BB(0x005ad2c8);
    /* 005ad2c8: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ad2cc: call 0x778cc0 */ r_esp -= 4; W32(r_esp, 0x5ad2d1u); f_00778cc0();
L_005ad2d1:; BB(0x005ad2d1);
    /* 005ad2d1: ret 4 */ FN_RET(0x005ad2bc); r_esp += 8; return;
}

void f_005ad2d4(void) /* sub_5AD2D4 */
{
    FN_ENTER(0x005ad2d4);
    /* 005ad2d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad2d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ad2d6: mov edi, ecx */ r_edi = r_ecx;
    /* 005ad2d8: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 005ad2dc: mov ecx, edi */ r_ecx = r_edi;
    /* 005ad2de: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5ad2e3u); f_00770738();
    /* 005ad2e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad2e5: je 0x5ad35c */ if (fZ) goto L_005ad35c;
L_005ad2e7:; BB(0x005ad2e7);
    /* 005ad2e7: mov ecx, edi */ r_ecx = r_edi;
    /* 005ad2e9: call 0x5acae8 */ r_esp -= 4; W32(r_esp, 0x5ad2eeu); f_005acae8();
    /* 005ad2ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad2f0: je 0x5ad343 */ if (fZ) goto L_005ad343;
L_005ad2f2:; BB(0x005ad2f2);
    /* 005ad2f2: mov ecx, edi */ r_ecx = r_edi;
    /* 005ad2f4: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5ad2f9u); f_00770738();
    /* 005ad2f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad2fb: je 0x5ad343 */ if (fZ) goto L_005ad343;
L_005ad2fd:; BB(0x005ad2fd);
    /* 005ad2fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad2ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad300: mov ecx, eax */ r_ecx = r_eax;
    /* 005ad302: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x5ad307u); f_00771458();
    /* 005ad307: mov eax, dword ptr [0xa748bc] */ r_eax = R32((u32)(0xa748bcu));
    /* 005ad30c: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 005ad312: mov eax, dword ptr [eax + edx*4 + 0xc] */ r_eax = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 005ad316: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 005ad319: mov eax, dword ptr [0xa748b4] */ r_eax = R32((u32)(0xa748b4u));
    /* 005ad31e: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 005ad321: fadd dword ptr [eax + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x14u));
    /* 005ad324: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005ad326: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005ad328: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ad32a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ad32b: ja 0x5ad343 */ if ((!fC&&!fZ)) goto L_005ad343;
L_005ad32d:; BB(0x005ad32d);
    /* 005ad32d: mov ecx, edi */ r_ecx = r_edi;
    /* 005ad32f: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5ad334u); f_00770738();
    /* 005ad334: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad336: je 0x5ad343 */ if (fZ) goto L_005ad343;
L_005ad338:; BB(0x005ad338);
    /* 005ad338: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ad33b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad33c: mov ecx, edi */ r_ecx = r_edi;
    /* 005ad33e: call 0x5acb10 */ r_esp -= 4; W32(r_esp, 0x5ad343u); f_005acb10();
L_005ad343:; BB(0x005ad343);
    /* 005ad343: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ad347: mov ecx, edi */ r_ecx = r_edi;
    /* 005ad349: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ad34d: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ad351: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ad352: call 0x7730ec */ r_esp -= 4; W32(r_esp, 0x5ad357u); f_007730ec();
    /* 005ad357: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ad358: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ad359: ret 0x10 */ FN_RET(0x005ad2d4); r_esp += 20; return;
L_005ad35c:; BB(0x005ad35c);
    /* 005ad35c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ad35d: mov ecx, edi */ r_ecx = r_edi;
    /* 005ad35f: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5ad364u); f_007706b0();
    /* 005ad364: jmp 0x5ad2e7 */ goto L_005ad2e7;
}

void f_005ad368(void) /* sub_5AD368 */
{
    FN_ENTER(0x005ad368);
    /* 005ad368: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad369: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad36a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad36b: mov dword ptr [ecx + 0x444], 0 */ W32((u32)(r_ecx+0x444u), 0x0u);
    /* 005ad375: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ad377: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ad379: mov ebx, ecx */ r_ebx = r_ecx;
L_005ad37b:; BB(0x005ad37b);
    /* 005ad37b: mov ecx, dword ptr [ebx + 0x370] */ r_ecx = R32((u32)(r_ebx+0x370u));
    /* 005ad381: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 005ad384: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ad386: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 005ad389: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005ad38b: add edi, dword ptr [0xa748bc] */ {  u32 a = r_edi; u32 b = R32((u32)(0xa748bcu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005ad391: mov esi, dword ptr [edi + ecx*4] */ r_esi = R32((u32)(r_edi+r_ecx*4));
    /* 005ad394: mov dword ptr [ebx + 0x31c], esi */ W32((u32)(r_ebx+0x31cu), r_esi);
    /* 005ad39a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad39c: je 0x5ad3af */ if (fZ) goto L_005ad3af;
L_005ad39e:; BB(0x005ad39e);
    /* 005ad39e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ad3a0: call 0x777904 */ r_esp -= 4; W32(r_esp, 0x5ad3a5u); f_00777904();
    /* 005ad3a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ad3a7: jne 0x5ad3bd */ if (!fZ) goto L_005ad3bd;
L_005ad3a9:; BB(0x005ad3a9);
    /* 005ad3a9: mov edx, dword ptr [ebx + 0x444] */ r_edx = R32((u32)(r_ebx+0x444u));
L_005ad3af:; BB(0x005ad3af);
    /* 005ad3af: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ad3b2: mov dword ptr [ebx + 0x444], edx */ W32((u32)(r_ebx+0x444u), r_edx);
    /* 005ad3b8: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ad3bb: jl 0x5ad37b */ if ((fS!=fO)) goto L_005ad37b;
L_005ad3bd:; BB(0x005ad3bd);
    /* 005ad3bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ad3be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ad3bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ad3c0: ret  */ FN_RET(0x005ad368); r_esp += 4; return;
}

void f_005ad3c4(void) /* sub_5AD3C4 */
{
    FN_ENTER(0x005ad3c4);
    /* 005ad3c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad3c5: mov esi, ecx */ r_esi = r_ecx;
    /* 005ad3c7: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad3c9: call 0x52be48 */ r_esp -= 4; W32(r_esp, 0x5ad3ceu); f_0052be48();
    /* 005ad3ce: movsx eax, word ptr [esi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 005ad3d5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ad3d8: jl 0x5ad408 */ if ((fS!=fO)) goto L_005ad408;
L_005ad3da:; BB(0x005ad3da);
    /* 005ad3da: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ad3dd: jg 0x5ad408 */ if ((!fZ&&fS==fO)) goto L_005ad408;
L_005ad3df:; BB(0x005ad3df);
    /* 005ad3df: mov eax, dword ptr [esi + 0x444] */ r_eax = R32((u32)(r_esi+0x444u));
    /* 005ad3e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ad3e7: jne 0x5ad3f7 */ if (!fZ) goto L_005ad3f7;
L_005ad3e9:; BB(0x005ad3e9);
    /* 005ad3e9: mov eax, 3 */ r_eax = 0x3u;
    /* 005ad3ee: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005ad3f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ad3f6: ret  */ FN_RET(0x005ad3c4); r_esp += 4; return;
L_005ad3f7:; BB(0x005ad3f7);
    /* 005ad3f7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ad3fa: jne 0x5ad408 */ if (!fZ) goto L_005ad408;
L_005ad3fc:; BB(0x005ad3fc);
    /* 005ad3fc: mov eax, 4 */ r_eax = 0x4u;
    /* 005ad401: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
L_005ad408:; BB(0x005ad408);
    /* 005ad408: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ad409: ret  */ FN_RET(0x005ad3c4); r_esp += 4; return;
}

void f_005ad40c(void) /* sub_5AD40C */
{
    FN_ENTER(0x005ad40c);
    /* 005ad40c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ad40d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad40e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ad410: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ad412: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5ad417u); f_00770738();
    /* 005ad417: mov ebx, eax */ r_ebx = r_eax;
    /* 005ad419: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 005ad420: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad423: jne 0x5ad42c */ if (!fZ) goto L_005ad42c;
L_005ad425:; BB(0x005ad425);
    /* 005ad425: mov eax, 0x41500000 */ r_eax = 0x41500000u;
    /* 005ad42a: jmp 0x5ad431 */ goto L_005ad431;
L_005ad42c:; BB(0x005ad42c);
    /* 005ad42c: mov eax, 0x40e00000 */ r_eax = 0x40e00000u;
L_005ad431:; BB(0x005ad431);
    /* 005ad431: movsx edx, word ptr [ebp + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 005ad438: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad43a: je 0x5ad469 */ if (fZ) goto L_005ad469;
L_005ad43c:; BB(0x005ad43c);
    /* 005ad43c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad43f: je 0x5ad475 */ if (fZ) goto L_005ad475;
L_005ad441:; BB(0x005ad441);
    /* 005ad441: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ad444: jne 0x5ad4f4 */ if (!fZ) goto L_005ad4f4;
L_005ad44a:; BB(0x005ad44a);
    /* 005ad44a: movsx edx, word ptr [ebp + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x344u));
    /* 005ad451: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ad454: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005ad457: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ad459: jl 0x5ad4f7 */ if ((fS!=fO)) goto L_005ad4f7;
L_005ad45f:; BB(0x005ad45f);
    /* 005ad45f: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 005ad466: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ad467: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ad468: ret  */ FN_RET(0x005ad40c); r_esp += 4; return;
L_005ad469:; BB(0x005ad469);
    /* 005ad469: mov edx, 1 */ r_edx = 0x1u;
    /* 005ad46e: mov word ptr [ebp + 0x330], dx */ W16((u32)(r_ebp+0x330u), (u16)r_edx);
L_005ad475:; BB(0x005ad475);
    /* 005ad475: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad476: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ad478: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5ad47du); f_007aaa30();
    /* 005ad47d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad47f: je 0x5ad4bd */ if (fZ) goto L_005ad4bd;
L_005ad481:; BB(0x005ad481);
    /* 005ad481: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad483: je 0x5ad4b2 */ if (fZ) goto L_005ad4b2;
L_005ad485:; BB(0x005ad485);
    /* 005ad485: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad48a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ad48b: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005ad48d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ad48f: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5ad492u); call_ind(t); }
    /* 005ad492: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad494: je 0x5ad4b2 */ if (fZ) goto L_005ad4b2;
L_005ad496:; BB(0x005ad496);
    /* 005ad496: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad49b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ad49c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005ad49e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ad4a0: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5ad4a3u); call_ind(t); }
    /* 005ad4a3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ad4a5: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad4aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ad4ab: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005ad4ad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ad4af: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x5ad4b2u); call_ind(t); }
L_005ad4b2:; BB(0x005ad4b2);
    /* 005ad4b2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005ad4b5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ad4b7: call dword ptr [eax + 0x18c] */ { u32 t = R32((u32)(r_eax+0x18cu)); r_esp -= 4; W32(r_esp, 0x5ad4bdu); call_ind(t); }
L_005ad4bd:; BB(0x005ad4bd);
    /* 005ad4bd: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005ad4c0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ad4c2: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x5ad4c8u); call_ind(t); }
    /* 005ad4c8: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 005ad4ce: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ad4d1: je 0x5ad4f4 */ if (fZ) goto L_005ad4f4;
L_005ad4d3:; BB(0x005ad4d3);
    /* 005ad4d3: mov eax, 2 */ r_eax = 0x2u;
    /* 005ad4d8: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 005ad4df: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ad4e1: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 005ad4e8: mov ebx, 0xf */ r_ebx = 0xfu;
    /* 005ad4ed: mov word ptr [ebp + 0x344], bx */ W16((u32)(r_ebp+0x344u), (u16)r_ebx);
L_005ad4f4:; BB(0x005ad4f4);
    /* 005ad4f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ad4f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ad4f6: ret  */ FN_RET(0x005ad40c); r_esp += 4; return;
L_005ad4f7:; BB(0x005ad4f7);
    /* 005ad4f7: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005ad4fa: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 005ad4fd: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ad502: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 005ad505: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ad507: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 005ad50e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ad510: call dword ptr [ebx + 0x19c] */ { u32 t = R32((u32)(r_ebx+0x19cu)); r_esp -= 4; W32(r_esp, 0x5ad516u); call_ind(t); }
    /* 005ad516: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ad517: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ad518: ret  */ FN_RET(0x005ad40c); r_esp += 4; return;
}

void f_005ad51c(void) /* sub_5AD51C */
{
    FN_ENTER(0x005ad51c);
    /* 005ad51c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad51d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ad51f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ad521: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5ad526u); f_007aa094();
    /* 005ad526: movsx eax, word ptr [ebx + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x330u));
    /* 005ad52d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad530: jne 0x5ad55e */ if (!fZ) goto L_005ad55e;
L_005ad532:; BB(0x005ad532);
    /* 005ad532: mov eax, dword ptr [ebx + 0x3b0] */ r_eax = R32((u32)(r_ebx+0x3b0u));
    /* 005ad538: lea ecx, [ebx + 0x3b0] */ r_ecx = (u32)(r_ebx+0x3b0u);
    /* 005ad53e: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5ad541u); call_ind(t); }
    /* 005ad541: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ad544: jne 0x5ad588 */ if (!fZ) goto L_005ad588;
L_005ad546:; BB(0x005ad546);
    /* 005ad546: mov dword ptr [ebx + 0x398], 0 */ W32((u32)(r_ebx+0x398u), 0x0u);
    /* 005ad550: mov eax, 2 */ r_eax = 0x2u;
    /* 005ad555: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 005ad55c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ad55d: ret  */ FN_RET(0x005ad51c); r_esp += 4; return;
L_005ad55e:; BB(0x005ad55e);
    /* 005ad55e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ad561: jne 0x5ad571 */ if (!fZ) goto L_005ad571;
L_005ad563:; BB(0x005ad563);
    /* 005ad563: mov eax, 1 */ r_eax = 0x1u;
    /* 005ad568: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 005ad56f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ad570: ret  */ FN_RET(0x005ad51c); r_esp += 4; return;
L_005ad571:; BB(0x005ad571);
    /* 005ad571: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 005ad577: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ad57a: je 0x5ad58a */ if (fZ) goto L_005ad58a;
L_005ad57c:; BB(0x005ad57c);
    /* 005ad57c: mov eax, 2 */ r_eax = 0x2u;
    /* 005ad581: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
L_005ad588:; BB(0x005ad588);
    /* 005ad588: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ad589: ret  */ FN_RET(0x005ad51c); r_esp += 4; return;
L_005ad58a:; BB(0x005ad58a);
    /* 005ad58a: mov eax, 1 */ r_eax = 0x1u;
    /* 005ad58f: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 005ad596: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 005ad599: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad59a: call 0x578a20 */ r_esp -= 4; W32(r_esp, 0x5ad59fu); f_00578a20();
    /* 005ad59f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ad5a0: add ebx, 0x3b0 */ {  u32 a = r_ebx; u32 b = 0x3b0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005ad5a6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ad5a8: call 0x512494 */ r_esp -= 4; W32(r_esp, 0x5ad5adu); f_00512494();
    /* 005ad5ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ad5ae: ret  */ FN_RET(0x005ad51c); r_esp += 4; return;
}

void f_005ad5b0(void) /* sub_5AD5B0 */
{
    FN_ENTER(0x005ad5b0);
    /* 005ad5b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad5b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ad5b2: mov esi, ecx */ r_esi = r_ecx;
    /* 005ad5b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad5b6: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 005ad5b9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ad5ba: call 0x5786e8 */ r_esp -= 4; W32(r_esp, 0x5ad5bfu); f_005786e8();
    /* 005ad5bf: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 005ad5c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad5c6: call 0x5787fc */ r_esp -= 4; W32(r_esp, 0x5ad5cbu); f_005787fc();
    /* 005ad5cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ad5ce: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5ad5d3u); f_00807ac0();
    /* 005ad5d3: push dword ptr [eax*4 + 0x9c1114] */ { u32 v = R32((u32)(r_eax*4+0x9c1114u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ad5da: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad5dc: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5ad5e1u); f_007879b8();
    /* 005ad5e1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ad5e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad5e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad5e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ad5e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad5e7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5ad5ecu); f_00814298();
    /* 005ad5ec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ad5ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ad5f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ad5f1: ret  */ FN_RET(0x005ad5b0); r_esp += 4; return;
}

void f_005ad5f4(void) /* sub_5AD5F4 */
{
    FN_ENTER(0x005ad5f4);
    /* 005ad5f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad5f5: mov esi, ecx */ r_esi = r_ecx;
    /* 005ad5f7: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad5f9: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5ad5feu); f_007751b0();
    /* 005ad5fe: fcomp dword ptr [0x92a798] */ fx_compare(ST(0), R_F32((u32)(0x92a798u))); FPOP();
    /* 005ad604: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ad606: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ad607: jae 0x5ad62f */ if (!fC) goto L_005ad62f;
L_005ad609:; BB(0x005ad609);
    /* 005ad609: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5ad60eu); f_00807ac0();
    /* 005ad60e: push dword ptr [eax*4 + 0x9c10f0] */ { u32 v = R32((u32)(r_eax*4+0x9c10f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ad615: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad617: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5ad61cu); f_007879b8();
    /* 005ad61c: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ad61f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ad621: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad622: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad623: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad624: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad625: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5ad62au); f_00814298();
    /* 005ad62a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ad62d: jmp 0x5ad653 */ goto L_005ad653;
L_005ad62f:; BB(0x005ad62f);
    /* 005ad62f: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5ad634u); f_00807ac0();
    /* 005ad634: push dword ptr [eax*4 + 0x9c10f0] */ { u32 v = R32((u32)(r_eax*4+0x9c10f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ad63b: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad63d: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5ad642u); f_007879b8();
    /* 005ad642: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ad645: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ad647: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad648: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad649: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad64a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad64b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5ad650u); f_00814298();
    /* 005ad650: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ad653:; BB(0x005ad653);
    /* 005ad653: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad658: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5ad65du); f_00814680();
    /* 005ad65d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ad65e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ad65f: ret  */ FN_RET(0x005ad5f4); r_esp += 4; return;
}

void f_005ad660(void) /* sub_5AD660 */
{
    FN_ENTER(0x005ad660);
    /* 005ad660: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad661: mov esi, ecx */ r_esi = r_ecx;
    /* 005ad663: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5ad668u); f_00807ac0();
    /* 005ad668: push dword ptr [eax*4 + 0x9c115c] */ { u32 v = R32((u32)(r_eax*4+0x9c115cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ad66f: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad671: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5ad676u); f_007879b8();
    /* 005ad676: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ad679: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ad67b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad67c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad67d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad67e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad67f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5ad684u); f_00814298();
    /* 005ad684: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad689: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5ad68eu); f_00814680();
    /* 005ad68e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ad691: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ad692: ret  */ FN_RET(0x005ad660); r_esp += 4; return;
}

void f_005ad694(void) /* sub_5AD694 */
{
    FN_ENTER(0x005ad694);
    /* 005ad694: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad695: mov esi, ecx */ r_esi = r_ecx;
    /* 005ad697: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5ad69cu); f_00807ac0();
    /* 005ad69c: push dword ptr [eax*4 + 0x9c1138] */ { u32 v = R32((u32)(r_eax*4+0x9c1138u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ad6a3: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad6a5: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5ad6aau); f_007879b8();
    /* 005ad6aa: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ad6ad: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ad6af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad6b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad6b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad6b3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5ad6b8u); f_00814298();
    /* 005ad6b8: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad6bd: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5ad6c2u); f_00814680();
    /* 005ad6c2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ad6c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ad6c6: ret  */ FN_RET(0x005ad694); r_esp += 4; return;
}

void f_005ad6c8(void) /* sub_5AD6C8 */
{
    FN_ENTER(0x005ad6c8);
    /* 005ad6c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad6c9: mov esi, ecx */ r_esi = r_ecx;
    /* 005ad6cb: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5ad6d0u); f_00807ac0();
    /* 005ad6d0: push dword ptr [eax*4 + 0x9c1114] */ { u32 v = R32((u32)(r_eax*4+0x9c1114u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ad6d7: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad6d9: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5ad6deu); f_007879b8();
    /* 005ad6de: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ad6e1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ad6e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad6e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad6e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad6e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad6e7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5ad6ecu); f_00814298();
    /* 005ad6ec: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad6f1: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5ad6f6u); f_00814680();
    /* 005ad6f6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ad6f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ad6fa: ret  */ FN_RET(0x005ad6c8); r_esp += 4; return;
}

void f_005ad6fc(void) /* sub_5AD6FC */
{
    FN_ENTER(0x005ad6fc);
    /* 005ad6fc: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad701: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5ad706u); f_00814680();
    /* 005ad706: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ad707: ret  */ FN_RET(0x005ad6fc); r_esp += 4; return;
}

void f_005ad708(void) /* sub_5AD708 */
{
    FN_ENTER(0x005ad708);
    /* 005ad708: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad709: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ad70b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ad70e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ad710: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 005ad715: mov edx, dword ptr [ebp + 0x370] */ r_edx = R32((u32)(r_ebp+0x370u));
    /* 005ad71b: cmp eax, dword ptr [edx*4 + 0xa748c4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*4+0xa748c4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad722: je 0x5ad756 */ if (fZ) goto L_005ad756;
L_005ad724:; BB(0x005ad724);
    /* 005ad724: mov dword ptr [edx*4 + 0xa748c4], eax */ W32((u32)(r_edx*4+0xa748c4u), r_eax);
    /* 005ad72b: mov eax, dword ptr [ebp + 0x33c] */ r_eax = R32((u32)(r_ebp+0x33cu));
    /* 005ad731: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad734: jne 0x5ad73d */ if (!fZ) goto L_005ad73d;
L_005ad736:; BB(0x005ad736);
    /* 005ad736: mov eax, 3 */ r_eax = 0x3u;
    /* 005ad73b: jmp 0x5ad742 */ goto L_005ad742;
L_005ad73d:; BB(0x005ad73d);
    /* 005ad73d: mov eax, 2 */ r_eax = 0x2u;
L_005ad742:; BB(0x005ad742);
    /* 005ad742: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad743: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad745: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad747: push dword ptr [edx*4 + 0xa748d0] */ { u32 v = R32((u32)(r_edx*4+0xa748d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ad74e: call 0x81a2b0 */ r_esp -= 4; W32(r_esp, 0x5ad753u); f_0081a2b0();
    /* 005ad753: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ad756:; BB(0x005ad756);
    /* 005ad756: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad75b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ad75d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005ad760: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad765: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad76a: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5ad76du); call_ind(t); }
    /* 005ad76d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad76f: je 0x5ad947 */ if (fZ) goto L_005ad947;
L_005ad775:; BB(0x005ad775);
    /* 005ad775: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 005ad77b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005ad77d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005ad77f: jl 0x5ad786 */ if ((fS!=fO)) goto L_005ad786;
L_005ad781:; BB(0x005ad781);
    /* 005ad781: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ad784: jle 0x5ad7a3 */ if ((fZ||fS!=fO)) goto L_005ad7a3;
L_005ad786:; BB(0x005ad786);
    /* 005ad786: lea esi, [ebp + 0x3d4] */ r_esi = (u32)(r_ebp+0x3d4u);
    /* 005ad78c: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad78e: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x5ad793u); f_005771a4();
    /* 005ad793: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 005ad799: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad79a: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad79c: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x5ad7a1u); f_0057725c();
    /* 005ad7a1: mov edi, eax */ r_edi = r_eax;
L_005ad7a3:; BB(0x005ad7a3);
    /* 005ad7a3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ad7a4: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x5ad7a9u); f_00794548();
    /* 005ad7a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ad7aa: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 005ad7ad: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5ad7b2u); f_00829cc8();
    /* 005ad7b2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5ad7b7u); f_0082d7b0();
    /* 005ad7b7: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 005ad7ba: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5ad7bfu); f_0082d838();
    /* 005ad7bf: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 005ad7c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ad7c4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5ad7c9u); f_0082d8bc();
    /* 005ad7c9: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5ad7ceu); f_004f7c84();
    /* 005ad7ce: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad7d1: je 0x5ad9d8 */ if (fZ) goto L_005ad9d8;
L_005ad7d7:; BB(0x005ad7d7);
    /* 005ad7d7: movsx edx, word ptr [ebp + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 005ad7de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005ad7e0: jl 0x5ad816 */ if ((fS!=fO)) goto L_005ad816;
L_005ad7e2:; BB(0x005ad7e2);
    /* 005ad7e2: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ad7e5: jle 0x5ad7ec */ if ((fZ||fS!=fO)) goto L_005ad7ec;
L_005ad7e7:; BB(0x005ad7e7);
    /* 005ad7e7: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad7ea: jne 0x5ad816 */ if (!fZ) goto L_005ad816;
L_005ad7ec:; BB(0x005ad7ec);
    /* 005ad7ec: mov dword ptr [0xa748e4], 0xbf800000 */ W32((u32)(0xa748e4u), 0xbf800000u);
    /* 005ad7f6: mov dword ptr [0xa748e8], 0 */ W32((u32)(0xa748e8u), 0x0u);
    /* 005ad800: mov dword ptr [0xa748ec], 0 */ W32((u32)(0xa748ecu), 0x0u);
    /* 005ad80a: mov dword ptr [0xa748f0], 0 */ W32((u32)(0xa748f0u), 0x0u);
    /* 005ad814: jmp 0x5ad83e */ goto L_005ad83e;
L_005ad816:; BB(0x005ad816);
    /* 005ad816: mov dword ptr [0xa748e4], 0 */ W32((u32)(0xa748e4u), 0x0u);
    /* 005ad820: mov dword ptr [0xa748e8], 0 */ W32((u32)(0xa748e8u), 0x0u);
    /* 005ad82a: mov dword ptr [0xa748ec], 0 */ W32((u32)(0xa748ecu), 0x0u);
    /* 005ad834: mov dword ptr [0xa748f0], 0 */ W32((u32)(0xa748f0u), 0x0u);
L_005ad83e:; BB(0x005ad83e);
    /* 005ad83e: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5ad843u); f_00578b38();
    /* 005ad843: mov edx, dword ptr [ebp + 0x398] */ r_edx = R32((u32)(r_ebp+0x398u));
    /* 005ad849: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad84c: je 0x5ad94e */ if (fZ) goto L_005ad94e;
L_005ad852:; BB(0x005ad852);
    /* 005ad852: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad854: je 0x5ad872 */ if (fZ) goto L_005ad872;
L_005ad856:; BB(0x005ad856);
    /* 005ad856: mov edx, dword ptr [ebp + 0x3d4] */ r_edx = R32((u32)(r_ebp+0x3d4u));
    /* 005ad85c: lea esi, [ebp + 0x3d4] */ r_esi = (u32)(r_ebp+0x3d4u);
    /* 005ad862: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad864: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5ad867u); call_ind(t); }
    /* 005ad867: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ad869: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x5ad86eu); f_008173d0();
    /* 005ad86e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad870: jne 0x5ad8a3 */ if (!fZ) goto L_005ad8a3;
L_005ad872:; BB(0x005ad872);
    /* 005ad872: push 0x5aca30 */ { u32 v = 0x5aca30u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad877: call 0x82e8e4 */ r_esp -= 4; W32(r_esp, 0x5ad87cu); f_0082e8e4();
    /* 005ad87c: mov esi, eax */ r_esi = r_eax;
    /* 005ad87e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ad881: mov dword ptr [0xa748e0], 0 */ W32((u32)(0xa748e0u), 0x0u);
    /* 005ad88b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ad88d: call 0x7aa850 */ r_esp -= 4; W32(r_esp, 0x5ad892u); f_007aa850();
    /* 005ad892: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad893: call 0x82e8e4 */ r_esp -= 4; W32(r_esp, 0x5ad898u); f_0082e8e4();
    /* 005ad898: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ad899: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad89b: je 0x5ad8ae */ if (fZ) goto L_005ad8ae;
L_005ad89d:; BB(0x005ad89d);
    /* 005ad89d: lea esi, [ebp + 0x3d4] */ r_esi = (u32)(r_ebp+0x3d4u);
L_005ad8a3:; BB(0x005ad8a3);
    /* 005ad8a3: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 005ad8a9: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad8ab: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x5ad8aeu); call_ind(t); }
L_005ad8ae:; BB(0x005ad8ae);
    /* 005ad8ae: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5ad8b3u); f_0082dab0();
L_005ad8b3:; BB(0x005ad8b3);
    /* 005ad8b3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5ad8b8u); f_0082da80();
    /* 005ad8b8: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x5ad8bdu); f_00794750();
    /* 005ad8bd: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 005ad8c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad8c5: jne 0x5ad947 */ if (!fZ) goto L_005ad947;
L_005ad8cb:; BB(0x005ad8cb);
    /* 005ad8cb: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 005ad8d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad8d2: jne 0x5ad947 */ if (!fZ) goto L_005ad947;
L_005ad8d4:; BB(0x005ad8d4);
    /* 005ad8d4: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 005ad8db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005ad8dd: jl 0x5ad8ee */ if ((fS!=fO)) goto L_005ad8ee;
L_005ad8df:; BB(0x005ad8df);
    /* 005ad8df: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ad8e2: jle 0x5ad947 */ if ((fZ||fS!=fO)) goto L_005ad947;
L_005ad8e4:; BB(0x005ad8e4);
    /* 005ad8e4: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ad8e7: jl 0x5ad8ee */ if ((fS!=fO)) goto L_005ad8ee;
L_005ad8e9:; BB(0x005ad8e9);
    /* 005ad8e9: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ad8ec: jle 0x5ad947 */ if ((fZ||fS!=fO)) goto L_005ad947;
L_005ad8ee:; BB(0x005ad8ee);
    /* 005ad8ee: mov eax, dword ptr [ebp + 0x33c] */ r_eax = R32((u32)(r_ebp+0x33cu));
    /* 005ad8f4: mov dword ptr [esp], 0x3fc00000 */ W32((u32)(r_esp), 0x3fc00000u);
    /* 005ad8fb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad8fe: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 005ad906: mov dword ptr [esp + 8], 0x40000000 */ W32((u32)(r_esp+0x8u), 0x40000000u);
    /* 005ad90e: jne 0x5ad93a */ if (!fZ) goto L_005ad93a;
L_005ad910:; BB(0x005ad910);
    /* 005ad910: fld dword ptr [0x92a774] */ FPUSH(R_F32((u32)(0x92a774u)));
    /* 005ad916: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005ad919: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005ad91b: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005ad91f: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005ad923: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005ad925: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 005ad927: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005ad929: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005ad92b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005ad92d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005ad930: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005ad932: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005ad936: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_005ad93a:; BB(0x005ad93a);
    /* 005ad93a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ad93d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ad93f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad940: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ad942: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x5ad947u); f_00779d4c();
L_005ad947:; BB(0x005ad947);
    /* 005ad947: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ad94a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ad94b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ad94c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ad94d: ret  */ FN_RET(0x005ad708); r_esp += 4; return;
L_005ad94e:; BB(0x005ad94e);
    /* 005ad94e: mov eax, dword ptr [ebp + 0x3b0] */ r_eax = R32((u32)(r_ebp+0x3b0u));
    /* 005ad954: lea esi, [ebp + 0x3b0] */ r_esi = (u32)(r_ebp+0x3b0u);
    /* 005ad95a: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad95c: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5ad95fu); call_ind(t); }
    /* 005ad95f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad961: je 0x5ad8ae */ if (fZ) goto L_005ad8ae;
L_005ad967:; BB(0x005ad967);
    /* 005ad967: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005ad96c: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 005ad972: mov edi, dword ptr [0xaf0364] */ r_edi = R32((u32)(0xaf0364u));
    /* 005ad978: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 005ad97d: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad97f: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 005ad985: mov dword ptr [0xaab500], edi */ W32((u32)(0xaab500u), r_edi);
    /* 005ad98b: mov eax, dword ptr [ebp + 0x3b0] */ r_eax = R32((u32)(r_ebp+0x3b0u));
    /* 005ad991: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5ad994u); call_ind(t); }
    /* 005ad994: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ad996: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x5ad99bu); f_008173d0();
    /* 005ad99b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad99d: jne 0x5ad9a6 */ if (!fZ) goto L_005ad9a6;
L_005ad99f:; BB(0x005ad99f);
    /* 005ad99f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ad9a1: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5ad9a6u); f_007aa668();
L_005ad9a6:; BB(0x005ad9a6);
    /* 005ad9a6: mov eax, dword ptr [ebp + 0x3b0] */ r_eax = R32((u32)(r_ebp+0x3b0u));
    /* 005ad9ac: mov ecx, esi */ r_ecx = r_esi;
    /* 005ad9ae: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x5ad9b1u); call_ind(t); }
    /* 005ad9b1: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 005ad9b6: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 005ad9bc: mov esi, dword ptr [0xaab518] */ r_esi = R32((u32)(0xaab518u));
    /* 005ad9c2: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 005ad9c7: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 005ad9cd: mov dword ptr [0xaf034c], esi */ W32((u32)(0xaf034cu), r_esi);
    /* 005ad9d3: jmp 0x5ad8ae */ goto L_005ad8ae;
L_005ad9d8:; BB(0x005ad9d8);
    /* 005ad9d8: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ad9db: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x5ad9e0u); f_0082e1e8();
    /* 005ad9e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ad9e1: jmp 0x5ad8b3 */ goto L_005ad8b3;
}

void f_005ad9e8(void) /* sub_5AD9E8 */
{
    FN_ENTER(0x005ad9e8);
    /* 005ad9e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ad9e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ad9ea: mov eax, dword ptr [0xa748c0] */ r_eax = R32((u32)(0xa748c0u));
    /* 005ad9ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ad9f1: je 0x5ada04 */ if (fZ) goto L_005ada04;
L_005ad9f3:; BB(0x005ad9f3);
    /* 005ad9f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ad9f4: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5ad9f9u); f_00857e98();
    /* 005ad9f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ad9fa: mov dword ptr [0xa748c0], 0 */ W32((u32)(0xa748c0u), 0x0u);
L_005ada04:; BB(0x005ada04);
    /* 005ada04: mov eax, dword ptr [0xa748bc] */ r_eax = R32((u32)(0xa748bcu));
    /* 005ada09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ada0b: je 0x5ada1e */ if (fZ) goto L_005ada1e;
L_005ada0d:; BB(0x005ada0d);
    /* 005ada0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ada0e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5ada13u); f_00857e98();
    /* 005ada13: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ada14: mov dword ptr [0xa748bc], 0 */ W32((u32)(0xa748bcu), 0x0u);
L_005ada1e:; BB(0x005ada1e);
    /* 005ada1e: mov eax, dword ptr [0xa748b8] */ r_eax = R32((u32)(0xa748b8u));
    /* 005ada23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ada25: je 0x5ada38 */ if (fZ) goto L_005ada38;
L_005ada27:; BB(0x005ada27);
    /* 005ada27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ada28: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5ada2du); f_00857e98();
    /* 005ada2d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ada2e: mov dword ptr [0xa748b8], 0 */ W32((u32)(0xa748b8u), 0x0u);
L_005ada38:; BB(0x005ada38);
    /* 005ada38: mov eax, dword ptr [0xa748b4] */ r_eax = R32((u32)(0xa748b4u));
    /* 005ada3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ada3f: je 0x5ada52 */ if (fZ) goto L_005ada52;
L_005ada41:; BB(0x005ada41);
    /* 005ada41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ada42: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5ada47u); f_00857e98();
    /* 005ada47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ada48: mov dword ptr [0xa748b4], 0 */ W32((u32)(0xa748b4u), 0x0u);
L_005ada52:; BB(0x005ada52);
    /* 005ada52: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ada54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ada56: mov ebx, eax */ r_ebx = r_eax;
    /* 005ada58: mov esi, edx */ r_esi = r_edx;
L_005ada5a:; BB(0x005ada5a);
    /* 005ada5a: mov ecx, dword ptr [ebx + 0xa74900] */ r_ecx = R32((u32)(r_ebx+0xa74900u));
    /* 005ada60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ada62: je 0x5ada79 */ if (fZ) goto L_005ada79;
L_005ada64:; BB(0x005ada64);
    /* 005ada64: je 0x5ada79 */ if (fZ) goto L_005ada79;
L_005ada66:; BB(0x005ada66);
    /* 005ada66: je 0x5ada6f */ if (fZ) goto L_005ada6f;
L_005ada68:; BB(0x005ada68);
    /* 005ada68: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ada6a: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x5ada6fu); f_0045a950();
L_005ada6f:; BB(0x005ada6f);
    /* 005ada6f: mov dword ptr [ebx + 0xa74900], 0 */ W32((u32)(r_ebx+0xa74900u), 0x0u);
L_005ada79:; BB(0x005ada79);
    /* 005ada79: mov ecx, dword ptr [esi + 0xa748f4] */ r_ecx = R32((u32)(r_esi+0xa748f4u));
    /* 005ada7f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ada81: je 0x5ada98 */ if (fZ) goto L_005ada98;
L_005ada83:; BB(0x005ada83);
    /* 005ada83: je 0x5ada98 */ if (fZ) goto L_005ada98;
L_005ada85:; BB(0x005ada85);
    /* 005ada85: je 0x5ada8e */ if (fZ) goto L_005ada8e;
L_005ada87:; BB(0x005ada87);
    /* 005ada87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ada89: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x5ada8eu); f_0045a950();
L_005ada8e:; BB(0x005ada8e);
    /* 005ada8e: mov dword ptr [ebx + 0xa748f4], 0 */ W32((u32)(r_ebx+0xa748f4u), 0x0u);
L_005ada98:; BB(0x005ada98);
    /* 005ada98: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ada9b: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005ada9e: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005adaa1: jl 0x5ada5a */ if ((fS!=fO)) goto L_005ada5a;
L_005adaa3:; BB(0x005adaa3);
    /* 005adaa3: mov ecx, dword ptr [0xa748dc] */ r_ecx = R32((u32)(0xa748dcu));
    /* 005adaa9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005adaab: je 0x5adac0 */ if (fZ) goto L_005adac0;
L_005adaad:; BB(0x005adaad);
    /* 005adaad: je 0x5adab6 */ if (fZ) goto L_005adab6;
L_005adaaf:; BB(0x005adaaf);
    /* 005adaaf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005adab1: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5adab6u); f_004066a8();
L_005adab6:; BB(0x005adab6);
    /* 005adab6: mov dword ptr [0xa748dc], 0 */ W32((u32)(0xa748dcu), 0x0u);
L_005adac0:; BB(0x005adac0);
    /* 005adac0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005adac1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005adac2: ret  */ FN_RET(0x005ad9e8); r_esp += 4; return;
}

void f_005adac4(void)
{
    FN_ENTER(0x005adac4);
    /* 005adac4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005adac5: mov ebp, esp */ r_ebp = r_esp;
    /* 005adac7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005adac9: push 0x8d8e76 */ { u32 v = 0x8d8e76u; r_esp -= 4; W32(r_esp, v); }
    /* 005adace: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005adad4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005adad5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005adadc: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005adadf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005adae2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005adae5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005adae8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005adaeb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005adaed: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005adaf4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5adaf9u); f_005caba4();
    /* 005adaf9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005adafa: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005adafd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005adaff: je 0x5adb87 */ if (fZ) goto L_005adb87;
L_005adb05:; BB(0x005adb05);
    /* 005adb05: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005adb0c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005adb13: push dword ptr [0xaca364] */ { u32 v = R32((u32)(0xaca364u)); r_esp -= 4; W32(r_esp, v); }
    /* 005adb19: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005adb1c: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x5adb21u); f_00787a4c();
    /* 005adb21: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005adb24: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005adb2b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005adb2e:; BB(0x005adb2e);
    /* 005adb2e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005adb35: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005adb3c: push 0x448 */ { u32 v = 0x448u; r_esp -= 4; W32(r_esp, v); }
    /* 005adb41: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5adb46u); f_005caba4();
    /* 005adb46: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005adb47: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005adb4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005adb4c: je 0x5adb83 */ if (fZ) goto L_005adb83;
L_005adb4e:; BB(0x005adb4e);
    /* 005adb4e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005adb55: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005adb5c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005adb5f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005adb62: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005adb65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005adb66: call 0x5adb90 */ r_esp -= 4; W32(r_esp, 0x5adb6bu); f_005adb90();
    /* 005adb6b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005adb6e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005adb75:; BB(0x005adb75);
    /* 005adb75: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005adb78: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005adb7f: mov esp, ebp */ r_esp = r_ebp;
    /* 005adb81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005adb82: ret  */ FN_RET(0x005adac4); r_esp += 4; return;
L_005adb83:; BB(0x005adb83);
    /* 005adb83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005adb85: jmp 0x5adb75 */ goto L_005adb75;
L_005adb87:; BB(0x005adb87);
    /* 005adb87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005adb89: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005adb8c: jmp 0x5adb2e */ goto L_005adb2e;
}

void f_005adb90(void) /* sub_5ADB90 */
{
    FN_ENTER(0x005adb90);
    /* 005adb90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005adb91: mov ebp, esp */ r_ebp = r_esp;
    /* 005adb93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005adb95: push 0x8d8ec4 */ { u32 v = 0x8d8ec4u; r_esp -= 4; W32(r_esp, v); }
    /* 005adb9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005adba0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005adba1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005adba8: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005adbab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005adbae: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005adbb1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005adbb4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005adbb7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005adbba: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005adbbd: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005adbc0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005adbc3: call 0x52b6ec */ r_esp -= 4; W32(r_esp, 0x5adbc8u); f_0052b6ec();
    /* 005adbc8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005adbcf: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005adbd2: mov dword ptr [ecx], 0xb0af40 */ W32((u32)(r_ecx), 0xb0af40u);
    /* 005adbd8: add ecx, 0x3b0 */ {  u32 a = r_ecx; u32 b = 0x3b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005adbde: call 0x5122f8 */ r_esp -= 4; W32(r_esp, 0x5adbe3u); f_005122f8();
    /* 005adbe3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005adbea: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005adbef: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 005adbf4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005adbf7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005adbf9: add eax, 0x3d4 */ {  u32 a = r_eax; u32 b = 0x3d4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005adbfe: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005adc00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005adc01: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x5adc06u); f_00858736();
    /* 005adc06: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005adc0d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005adc10: mov eax, dword ptr [0x9c1288] */ r_eax = R32((u32)(0x9c1288u));
    /* 005adc15: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005adc18: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005adc1a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005adc1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005adc1e: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x5adc24u); call_ind(t); }
    /* 005adc24: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005adc27: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 005adc2a: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 005adc2d: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 005adc30: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 005adc36: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 005adc3c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005adc3f: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 005adc45: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 005adc4b: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 005adc51: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 005adc57: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 005adc5d: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 005adc63: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005adc66: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 005adc6c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005adc6f: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 005adc75: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 005adc78: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 005adc7e: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 005adc81: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 005adc87: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 005adc8a: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 005adc90: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 005adc96: call 0x5adf28 */ r_esp -= 4; W32(r_esp, 0x5adc9bu); f_005adf28();
    /* 005adc9b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005adc9e: mov eax, dword ptr [0xa748dc] */ r_eax = R32((u32)(0xa748dcu));
    /* 005adca3: mov edi, dword ptr [ecx + 0x370] */ r_edi = R32((u32)(r_ecx+0x370u));
    /* 005adca9: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 005adcaf: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005adcb1: mov ebx, dword ptr [edx + edi*8 + 8] */ r_ebx = R32((u32)(r_edx+r_edi*8+0x8u));
    /* 005adcb5: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 005adcb8: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005adcbe: mov edx, dword ptr [esi + edi*8 + 0xc] */ r_edx = R32((u32)(r_esi+r_edi*8+0xcu));
    /* 005adcc2: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 005adcc5: mov dword ptr [ecx + 0xd8], 0x9c10c0 */ W32((u32)(r_ecx+0xd8u), 0x9c10c0u);
    /* 005adccf: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 005adcd5: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 005adcdb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005adcdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005adcde: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005adce5: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x5adceau); f_007aa4c8();
    /* 005adcea: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005adced: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005adcef: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 005adcf6: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 005adcfc: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005add03: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 005add06: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005add08: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005add0a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005add0c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005add0e: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005add10: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005add12: lea esi, [ebx + ebx + 0x9c1020] */ r_esi = (u32)(r_ebx+r_ebx+0x9c1020u);
    /* 005add19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005add1a: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x5add1fu); f_007b9a88();
    /* 005add1f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005add22: mov edx, dword ptr [0xa748bc] */ r_edx = R32((u32)(0xa748bcu));
    /* 005add28: mov esi, dword ptr [0xa748c0] */ r_esi = R32((u32)(0xa748c0u));
    /* 005add2e: mov eax, dword ptr [0xa748b8] */ r_eax = R32((u32)(0xa748b8u));
    /* 005add33: mov ebx, dword ptr [ecx + 0x370] */ r_ebx = R32((u32)(r_ecx+0x370u));
    /* 005add39: mov edi, dword ptr [ecx + 0x33c] */ r_edi = R32((u32)(r_ecx+0x33cu));
    /* 005add3f: push dword ptr [eax + edi*4] */ { u32 v = R32((u32)(r_eax+r_edi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 005add42: push dword ptr [edx + ebx*4] */ { u32 v = R32((u32)(r_edx+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 005add45: push dword ptr [esi + edi*4] */ { u32 v = R32((u32)(r_esi+r_edi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 005add48: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x5add4du); f_007868f8();
    /* 005add4d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005add50: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 005add56: movzx esi, word ptr [ecx + 0x334] */ r_esi = (u32)R16((u32)(r_ecx+0x334u));
    /* 005add5d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005add5f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005add61: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005add64: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005add66: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005add68: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005add6a: lea ebx, [edx + 0x9c0fc0] */ r_ebx = (u32)(r_edx+0x9c0fc0u);
    /* 005add70: mov dword ptr [ecx + 0x358], ebx */ W32((u32)(r_ecx+0x358u), r_ebx);
    /* 005add76: mov word ptr [ecx + 0x346], si */ W16((u32)(r_ecx+0x346u), (u16)r_esi);
    /* 005add7d: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5add82u); f_0078730c();
    /* 005add82: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005add85: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005add88: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005add8e: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005add94: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 005add9a: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005add9d: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005adda0: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 005adda3: call 0x786bbc */ r_esp -= 4; W32(r_esp, 0x5adda8u); f_00786bbc();
    /* 005adda8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005addab: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5addb0u); f_007751b0();
    /* 005addb0: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005addb3: fld dword ptr [0x92a770] */ FPUSH(R_F32((u32)(0x92a770u)));
    /* 005addb9: mov ecx, dword ptr [esi + 0x2e8] */ r_ecx = R32((u32)(r_esi+0x2e8u));
    /* 005addbf: mov ebx, dword ptr [esi + 0x30] */ r_ebx = R32((u32)(r_esi+0x30u));
    /* 005addc2: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 005addc4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005addc6: fmul dword ptr [0x92a76c] */ ST(0) = ST(0) * R_F32((u32)(0x92a76cu));
    /* 005addcc: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 005addce: fnstcw word ptr [ebp - 0x2c] */ W16((u32)(r_ebp+0xffffffd4u), fcw);
    /* 005addd1: movzx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 005addd5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005addda: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005adddd: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 005adde0: fistp dword ptr [esi + 0x2b0] */ W32((u32)(r_esi+0x2b0u), (u32)fx_int32(ST(0))); FPOP();
    /* 005adde6: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 005adde9: mov eax, 0xf */ r_eax = 0xfu;
    /* 005addee: mov dword ptr [esi + 0x390], 0xc0800000 */ W32((u32)(r_esi+0x390u), 0xc0800000u);
    /* 005addf8: or ebx, 0x40000 */ {  u32 a = r_ebx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 005addfe: mov word ptr [esi + 0x342], ax */ W16((u32)(r_esi+0x342u), (u16)r_eax);
    /* 005ade05: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005ade0c: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 005ade12: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ade14: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
    /* 005ade1b: mov word ptr [esi + 0x37c], dx */ W16((u32)(r_esi+0x37cu), (u16)r_edx);
    /* 005ade22: mov word ptr [esi + 0x37e], dx */ W16((u32)(r_esi+0x37eu), (u16)r_edx);
    /* 005ade29: mov dword ptr [esi + 0x380], edx */ W32((u32)(r_esi+0x380u), r_edx);
    /* 005ade2f: mov dword ptr [esi + 0x384], edx */ W32((u32)(r_esi+0x384u), r_edx);
    /* 005ade35: or ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005ade38: mov dword ptr [esi + 0x2e8], ecx */ W32((u32)(r_esi+0x2e8u), r_ecx);
    /* 005ade3e: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 005ade41: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ade44: jne 0x5ade4d */ if (!fZ) goto L_005ade4d;
L_005ade46:; BB(0x005ade46);
    /* 005ade46: mov ebx, 0xff55ff00 */ r_ebx = 0xff55ff00u;
    /* 005ade4b: jmp 0x5ade5e */ goto L_005ade5e;
L_005ade4d:; BB(0x005ade4d);
    /* 005ade4d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ade50: jne 0x5ade59 */ if (!fZ) goto L_005ade59;
L_005ade52:; BB(0x005ade52);
    /* 005ade52: mov ebx, 0xffff0055 */ r_ebx = 0xffff0055u;
    /* 005ade57: jmp 0x5ade5e */ goto L_005ade5e;
L_005ade59:; BB(0x005ade59);
    /* 005ade59: mov ebx, 0xffff0077 */ r_ebx = 0xffff0077u;
L_005ade5e:; BB(0x005ade5e);
    /* 005ade5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ade5f: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 005ade64: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x5ade69u); f_00578cc4();
    /* 005ade69: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ade6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ade6d: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 005ade72: mov dword ptr [edx + 0x3cc], eax */ W32((u32)(r_edx+0x3ccu), r_eax);
    /* 005ade78: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x5ade7du); f_00578cc4();
    /* 005ade7d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ade80: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ade83: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 005ade89: mov dword ptr [ecx + 0x398], 1 */ W32((u32)(r_ecx+0x398u), 0x1u);
    /* 005ade93: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 005ade99: mov eax, dword ptr [0xa748b4] */ r_eax = R32((u32)(0xa748b4u));
    /* 005ade9e: mov ebx, dword ptr [eax + edx*4] */ r_ebx = R32((u32)(r_eax+r_edx*4));
    /* 005adea1: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 005adea3: mov dword ptr [ecx + 0x3a0], esi */ W32((u32)(r_ecx+0x3a0u), r_esi);
    /* 005adea9: mov edi, dword ptr [eax + edx*4] */ r_edi = R32((u32)(r_eax+r_edx*4));
    /* 005adeac: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 005adeaf: mov dword ptr [ecx + 0x3a8], ebx */ W32((u32)(r_ecx+0x3a8u), r_ebx);
    /* 005adeb5: mov ebx, dword ptr [eax + edx*4] */ r_ebx = R32((u32)(r_eax+r_edx*4));
    /* 005adeb8: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 005adebb: mov dword ptr [ecx + 0x3a4], ebx */ W32((u32)(r_ecx+0x3a4u), r_ebx);
    /* 005adec1: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 005adec4: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005adec7: mov dword ptr [ecx + 0x3ac], eax */ W32((u32)(r_ecx+0x3acu), r_eax);
    /* 005adecd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005adecf:; BB(0x005adecf);
    /* 005adecf: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 005aded2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005aded4: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005aded7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005aded9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005adedb: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005adedd: lea ecx, [ecx + edx + 0x3d4] */ r_ecx = (u32)(r_ecx+r_edx+0x3d4u);
    /* 005adee4: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x5adee9u); f_0057739c();
    /* 005adee9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005adeec: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005adeef: jge 0x5adef6 */ if ((fS==fO)) goto L_005adef6;
L_005adef1:; BB(0x005adef1);
    /* 005adef1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005adef4: jmp 0x5adecf */ goto L_005adecf;
L_005adef6:; BB(0x005adef6);
    /* 005adef6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005adef9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005adefb: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x5adf01u); call_ind(t); }
    /* 005adf01: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005adf04: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005adf07: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005adf0a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005adf0d: mov dword ptr [eax + 0x444], 0 */ W32((u32)(r_eax+0x444u), 0x0u);
    /* 005adf17: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005adf1a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005adf21: mov esp, ebp */ r_esp = r_ebp;
    /* 005adf23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005adf24: ret 8 */ FN_RET(0x005adb90); r_esp += 12; return;
}

void f_005adf28(void) /* sub_5ADF28 */
{
    FN_ENTER(0x005adf28);
    /* 005adf28: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 005adf2e: mov edx, 2 */ r_edx = 0x2u;
    /* 005adf33: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005adf36: jl 0x5adf3a */ if ((fS!=fO)) goto L_005adf3a;
L_005adf38:; BB(0x005adf38);
    /* 005adf38: mov eax, edx */ r_eax = r_edx;
L_005adf3a:; BB(0x005adf3a);
    /* 005adf3a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005adf3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005adf3e: jg 0x5adf42 */ if ((!fZ&&fS==fO)) goto L_005adf42;
L_005adf40:; BB(0x005adf40);
    /* 005adf40: mov eax, edx */ r_eax = r_edx;
L_005adf42:; BB(0x005adf42);
    /* 005adf42: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 005adf48: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005adf4b: jne 0x5adf5f */ if (!fZ) goto L_005adf5f;
L_005adf4d:; BB(0x005adf4d);
    /* 005adf4d: mov dword ptr [ecx + 0x370], 2 */ W32((u32)(r_ecx+0x370u), 0x2u);
    /* 005adf57: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 005adf59: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x5adf5eu); f_00787550();
    /* 005adf5e: ret  */ FN_RET(0x005adf28); r_esp += 4; return;
L_005adf5f:; BB(0x005adf5f);
    /* 005adf5f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005adf62: jne 0x5adf76 */ if (!fZ) goto L_005adf76;
L_005adf64:; BB(0x005adf64);
    /* 005adf64: mov dword ptr [ecx + 0x370], 1 */ W32((u32)(r_ecx+0x370u), 0x1u);
    /* 005adf6e: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 005adf70: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x5adf75u); f_00787550();
    /* 005adf75: ret  */ FN_RET(0x005adf28); r_esp += 4; return;
L_005adf76:; BB(0x005adf76);
    /* 005adf76: mov dword ptr [ecx + 0x370], 0 */ W32((u32)(r_ecx+0x370u), 0x0u);
    /* 005adf80: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 005adf82: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x5adf87u); f_00787550();
    /* 005adf87: ret  */ FN_RET(0x005adf28); r_esp += 4; return;
}

void f_005adfc8(void) /* sub_5ADFC8 */
{
    FN_ENTER(0x005adfc8);
    /* 005adfc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005adfc9: mov ebp, esp */ r_ebp = r_esp;
    /* 005adfcb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005adfcd: push 0x8d8f22 */ { u32 v = 0x8d8f22u; r_esp -= 4; W32(r_esp, v); }
    /* 005adfd2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005adfd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005adfd9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005adfe0: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005adfe3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005adfe6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005adfe9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005adfec: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005adfef: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 005adff4: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005adffb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5ae000u); f_008581c5();
    /* 005ae000: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ae001: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005ae004: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae006: je 0x5ae3c4 */ if (fZ) goto L_005ae3c4;
L_005ae00c:; BB(0x005ae00c);
    /* 005ae00c: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 005ae013: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ae01a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ae01d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ae01f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae020: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae021: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae022: push 0x9c1278 */ { u32 v = 0x9c1278u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae027: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae029: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x5ae02eu); f_005b7a84();
    /* 005ae02e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ae031: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_005ae038:; BB(0x005ae038);
    /* 005ae038: mov dword ptr [0xa748dc], eax */ W32((u32)(0xa748dcu), r_eax);
    /* 005ae03d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ae044: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 005ae04a: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005ae04d: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005ae050: mov ebx, dword ptr [ecx + 0x30] */ r_ebx = R32((u32)(r_ecx+0x30u));
    /* 005ae053: mov esi, dword ptr [ebx + 0x30] */ r_esi = R32((u32)(r_ebx+0x30u));
    /* 005ae056: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 005ae059: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 005ae05c: mov dword ptr [0xa748d0], edx */ W32((u32)(0xa748d0u), r_edx);
    /* 005ae062: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005ae065: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 005ae068: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 005ae06b: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 005ae06e: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 005ae071: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 005ae074: mov dword ptr [0xa748d4], edx */ W32((u32)(0xa748d4u), r_edx);
    /* 005ae07a: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 005ae07d: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005ae080: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005ae083: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005ae086: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005ae089: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005ae08c: mov dword ptr [0xa748d8], eax */ W32((u32)(0xa748d8u), r_eax);
    /* 005ae091: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ae093: mov dword ptr [0xa748c4], eax */ W32((u32)(0xa748c4u), r_eax);
    /* 005ae098: mov dword ptr [0xa748c8], eax */ W32((u32)(0xa748c8u), r_eax);
    /* 005ae09d: mov dword ptr [0xa748cc], eax */ W32((u32)(0xa748ccu), r_eax);
    /* 005ae0a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ae0a4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005ae0a7:; BB(0x005ae0a7);
    /* 005ae0a7: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005ae0ae: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae0b0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5ae0b5u); f_008581c5();
    /* 005ae0b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ae0b6: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005ae0b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae0bb: je 0x5ae3bd */ if (fZ) goto L_005ae3bd;
L_005ae0c1:; BB(0x005ae0c1);
    /* 005ae0c1: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 005ae0c8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005ae0cf: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ae0d2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae0d4: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae0d9: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae0de: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae0e3: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x5ae0e8u); f_005795a0();
    /* 005ae0e8: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ae0eb: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005ae0f2:; BB(0x005ae0f2);
    /* 005ae0f2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ae0f5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005ae0f8: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005ae0fb: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005ae0fe: mov dword ptr [ecx + 0xa748f4], ebx */ W32((u32)(r_ecx+0xa748f4u), r_ebx);
    /* 005ae104: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ae10b: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005ae112: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae114: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5ae119u); f_008581c5();
    /* 005ae119: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ae11a: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005ae11d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae11f: je 0x5ae3b6 */ if (fZ) goto L_005ae3b6;
L_005ae125:; BB(0x005ae125);
    /* 005ae125: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005ae12c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005ae133: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ae136: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae138: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae13d: push 0x41b00000 */ { u32 v = 0x41b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae142: push 0x41100000 */ { u32 v = 0x41100000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae147: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x5ae14cu); f_005795a0();
    /* 005ae14c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ae14f: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005ae156:; BB(0x005ae156);
    /* 005ae156: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ae159: mov dword ptr [eax*2 + 0xa74900], edx */ W32((u32)(r_eax*2+0xa74900u), r_edx);
    /* 005ae160: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ae167: mov eax, dword ptr [0xa748dc] */ r_eax = R32((u32)(0xa748dcu));
    /* 005ae16c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ae16f: mov esi, dword ptr [0x9c10f4] */ r_esi = R32((u32)(0x9c10f4u));
    /* 005ae175: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005ae177: mov edi, dword ptr [eax + 0x42c] */ r_edi = R32((u32)(r_eax+0x42cu));
    /* 005ae17d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005ae17f: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005ae185: push dword ptr [edx + esi*8 + 4] */ { u32 v = R32((u32)(r_edx+r_esi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ae189: lea ebx, [ebx + ebx] */ r_ebx = (u32)(r_ebx+r_ebx);
    /* 005ae18c: push dword ptr [edi + ebx*8 + 8] */ { u32 v = R32((u32)(r_edi+r_ebx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ae190: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 005ae193: mov ecx, dword ptr [ecx + 0xa748f4] */ r_ecx = R32((u32)(r_ecx+0xa748f4u));
    /* 005ae199: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5ae19eu); f_00579a28();
    /* 005ae19e: mov eax, dword ptr [0xa748dc] */ r_eax = R32((u32)(0xa748dcu));
    /* 005ae1a3: mov esi, dword ptr [0x9c1104] */ r_esi = R32((u32)(0x9c1104u));
    /* 005ae1a9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae1ab: mov edi, dword ptr [eax + 0x42c] */ r_edi = R32((u32)(r_eax+0x42cu));
    /* 005ae1b1: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005ae1b7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae1b9: push dword ptr [edx + esi*8 + 4] */ { u32 v = R32((u32)(r_edx+r_esi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ae1bd: push dword ptr [edi + ebx*8 + 8] */ { u32 v = R32((u32)(r_edi+r_ebx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ae1c1: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ae1c4: mov ecx, dword ptr [ebx*4 + 0xa74900] */ r_ecx = R32((u32)(r_ebx*4+0xa74900u));
    /* 005ae1cb: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5ae1d0u); f_00579a28();
    /* 005ae1d0: mov eax, ebx */ r_eax = r_ebx;
    /* 005ae1d2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ae1d5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ae1d8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ae1db: jl 0x5ae0a7 */ if ((fS!=fO)) goto L_005ae0a7;
L_005ae1e1:; BB(0x005ae1e1);
    /* 005ae1e1: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ae1e3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5ae1e8u); f_008581c5();
    /* 005ae1e8: mov dword ptr [0xa748c0], eax */ W32((u32)(0xa748c0u), r_eax);
    /* 005ae1ed: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae1ef: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5ae1f4u); f_008581c5();
    /* 005ae1f4: mov dword ptr [0xa748bc], eax */ W32((u32)(0xa748bcu), r_eax);
    /* 005ae1f9: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ae1fb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5ae200u); f_008581c5();
    /* 005ae200: mov dword ptr [0xa748b8], eax */ W32((u32)(0xa748b8u), r_eax);
    /* 005ae205: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ae207: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5ae20cu); f_008581c5();
    /* 005ae20c: mov dword ptr [0xa748b4], eax */ W32((u32)(0xa748b4u), r_eax);
    /* 005ae211: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae213: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5ae218u); f_0077a684();
    /* 005ae218: mov edx, dword ptr [0xa748c0] */ r_edx = R32((u32)(0xa748c0u));
    /* 005ae21e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae220: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005ae222: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5ae227u); f_0077a684();
    /* 005ae227: mov edx, dword ptr [0xa748c0] */ r_edx = R32((u32)(0xa748c0u));
    /* 005ae22d: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae22f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005ae232: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5ae237u); f_0077a684();
    /* 005ae237: mov edx, dword ptr [0xa748c0] */ r_edx = R32((u32)(0xa748c0u));
    /* 005ae23d: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae23f: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005ae242: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5ae247u); f_0077a698();
    /* 005ae247: mov edx, dword ptr [0xa748bc] */ r_edx = R32((u32)(0xa748bcu));
    /* 005ae24d: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae24f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005ae251: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5ae256u); f_0077a698();
    /* 005ae256: mov edx, dword ptr [0xa748bc] */ r_edx = R32((u32)(0xa748bcu));
    /* 005ae25c: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae25e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005ae261: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5ae266u); f_0077a698();
    /* 005ae266: mov edx, dword ptr [0xa748bc] */ r_edx = R32((u32)(0xa748bcu));
    /* 005ae26c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae26e: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005ae271: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5ae276u); f_0077a698();
    /* 005ae276: mov edx, dword ptr [0xa748bc] */ r_edx = R32((u32)(0xa748bcu));
    /* 005ae27c: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae27e: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005ae281: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5ae286u); f_0077a698();
    /* 005ae286: mov edx, dword ptr [0xa748bc] */ r_edx = R32((u32)(0xa748bcu));
    /* 005ae28c: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae28e: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 005ae291: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5ae296u); f_0077a698();
    /* 005ae296: mov edx, dword ptr [0xa748bc] */ r_edx = R32((u32)(0xa748bcu));
    /* 005ae29c: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae29e: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 005ae2a1: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5ae2a6u); f_0077a6b4();
    /* 005ae2a6: mov edx, dword ptr [0xa748b8] */ r_edx = R32((u32)(0xa748b8u));
    /* 005ae2ac: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae2ae: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005ae2b0: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5ae2b5u); f_0077a6b4();
    /* 005ae2b5: mov edx, dword ptr [0xa748b8] */ r_edx = R32((u32)(0xa748b8u));
    /* 005ae2bb: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae2bd: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005ae2c0: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5ae2c5u); f_0077a6b4();
    /* 005ae2c5: mov edx, dword ptr [0xa748b8] */ r_edx = R32((u32)(0xa748b8u));
    /* 005ae2cb: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae2cd: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005ae2d0: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5ae2d5u); f_0077a6cc();
    /* 005ae2d5: mov edx, dword ptr [0xa748b4] */ r_edx = R32((u32)(0xa748b4u));
    /* 005ae2db: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae2dd: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005ae2df: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5ae2e4u); f_0077a6cc();
    /* 005ae2e4: mov edx, dword ptr [0xa748b4] */ r_edx = R32((u32)(0xa748b4u));
    /* 005ae2ea: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae2ec: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005ae2ef: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5ae2f4u); f_0077a6cc();
    /* 005ae2f4: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ae2f7: mov edx, dword ptr [0xa748b4] */ r_edx = R32((u32)(0xa748b4u));
    /* 005ae2fd: mov esi, dword ptr [0x92a6d4] */ r_esi = R32((u32)(0x92a6d4u));
    /* 005ae303: movzx edi, word ptr [0x92a6d8] */ r_edi = (u32)R16((u32)(0x92a6d8u));
    /* 005ae30a: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005ae30d: mov edx, dword ptr [0xa748dc] */ r_edx = R32((u32)(0xa748dcu));
    /* 005ae313: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 005ae316: mov word ptr [ebp - 0x2c], di */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_edi);
    /* 005ae31a: mov eax, 0x1b */ r_eax = 0x1bu;
    /* 005ae31f: mov ecx, 0x1c */ r_ecx = 0x1cu;
    /* 005ae324: mov word ptr [ebp - 0x3c], ax */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_eax);
    /* 005ae328: movzx eax, word ptr [0x92a6da] */ r_eax = (u32)R16((u32)(0x92a6dau));
    /* 005ae32f: mov word ptr [ebp - 0x3a], cx */ W16((u32)(r_ebp+0xffffffc6u), (u16)r_ecx);
    /* 005ae333: mov ebx, 0x1d */ r_ebx = 0x1du;
    /* 005ae338: mov word ptr [ebp - 0x38], bx */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_ebx);
    /* 005ae33c: mov word ptr [ebp - 0x2a], ax */ W16((u32)(r_ebp+0xffffffd6u), (u16)r_eax);
    /* 005ae340: movzx eax, word ptr [0x92a6dc] */ r_eax = (u32)R16((u32)(0x92a6dcu));
    /* 005ae347: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 005ae34b: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 005ae351: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005ae354: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005ae356:; BB(0x005ae356);
    /* 005ae356: movsx edi, word ptr [ebp + ebx*2 - 0x3c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2+0xffffffc4u));
    /* 005ae35b: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 005ae35e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae35f: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 005ae365: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005ae368: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae36a: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 005ae36d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ae36f: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ae371: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ae373: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ae375: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ae377: push dword ptr [edx*4 + 0x9c102c] */ { u32 v = R32((u32)(r_edx*4+0x9c102cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ae37e: push dword ptr [ecx + esi*8 + 0xc] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ae382: push dword ptr [ecx + esi*8 + 8] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ae386: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ae387: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5ae38cu); f_00608470();
    /* 005ae38c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ae38f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005ae392: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ae395: jge 0x5ae39f */ if ((fS==fO)) goto L_005ae39f;
L_005ae397:; BB(0x005ae397);
    /* 005ae397: mov edx, dword ptr [0xa748dc] */ r_edx = R32((u32)(0xa748dcu));
    /* 005ae39d: jmp 0x5ae356 */ goto L_005ae356;
L_005ae39f:; BB(0x005ae39f);
    /* 005ae39f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ae3a2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ae3a5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ae3a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ae3ab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ae3b2: mov esp, ebp */ r_esp = r_ebp;
    /* 005ae3b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ae3b5: ret  */ FN_RET(0x005adfc8); r_esp += 4; return;
L_005ae3b6:; BB(0x005ae3b6);
    /* 005ae3b6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ae3b8: jmp 0x5ae156 */ goto L_005ae156;
L_005ae3bd:; BB(0x005ae3bd);
    /* 005ae3bd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005ae3bf: jmp 0x5ae0f2 */ goto L_005ae0f2;
L_005ae3c4:; BB(0x005ae3c4);
    /* 005ae3c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ae3c6: jmp 0x5ae038 */ goto L_005ae038;
}

