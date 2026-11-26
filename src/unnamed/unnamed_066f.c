#include "protos.h"

void f_0066f044(void) /* sub_66F044 */
{
    FN_ENTER(0x0066f044);
    /* 0066f044: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066f045: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066f046: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f047: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066f04a: mov esi, ecx */ r_esi = r_ecx;
    /* 0066f04c: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0066f053: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0066f058: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0066f060: mov dword ptr [esp + 8], 0xbf800000 */ W32((u32)(r_esp+0x8u), 0xbf800000u);
    /* 0066f068: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x66f06du); f_004f7c84();
    /* 0066f06d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f06f: jne 0x66f0c3 */ if (!fZ) goto L_0066f0c3;
L_0066f071:; BB(0x0066f071);
    /* 0066f071: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066f073: mov edi, eax */ r_edi = r_eax;
L_0066f075:; BB(0x0066f075);
    /* 0066f075: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066f076: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66f07bu); f_0068d5a8();
    /* 0066f07b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066f07c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f07e: je 0x66f0bb */ if (fZ) goto L_0066f0bb;
L_0066f080:; BB(0x0066f080);
    /* 0066f080: fld dword ptr [esi + 0x68] */ FPUSH(R_F32((u32)(r_esi+0x68u)));
    /* 0066f083: fmul dword ptr [0x939f68] */ ST(0) = ST(0) * R_F32((u32)(0x939f68u));
    /* 0066f089: fadd dword ptr [0x939f6c] */ ST(0) = ST(0) + R_F32((u32)(0x939f6cu));
    /* 0066f08f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0066f091: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0066f095: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066f096: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66f09bu); f_0068d5a8();
    /* 0066f09b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066f09c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f09e: je 0x66f0bb */ if (fZ) goto L_0066f0bb;
L_0066f0a0:; BB(0x0066f0a0);
    /* 0066f0a0: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066f0a3: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0066f0a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f0a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f0a8: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x66f0adu); f_007a9180();
    /* 0066f0ad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066f0b0: fcomp dword ptr [esp + 0x30] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x30u))); FPOP();
    /* 0066f0b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066f0b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066f0b7: jae 0x66f0bb */ if (!fC) goto L_0066f0bb;
L_0066f0b9:; BB(0x0066f0b9);
    /* 0066f0b9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0066f0bb:; BB(0x0066f0bb);
    /* 0066f0bb: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066f0be: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066f0c1: jl 0x66f075 */ if ((fS!=fO)) goto L_0066f075;
L_0066f0c3:; BB(0x0066f0c3);
    /* 0066f0c3: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x66f0c8u); f_004f7c84();
    /* 0066f0c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f0ca: jne 0x66f0d7 */ if (!fZ) goto L_0066f0d7;
L_0066f0cc:; BB(0x0066f0cc);
    /* 0066f0cc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f0ce: je 0x66f0d7 */ if (fZ) goto L_0066f0d7;
L_0066f0d0:; BB(0x0066f0d0);
    /* 0066f0d0: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066f0d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066f0d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066f0d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066f0d6: ret  */ FN_RET(0x0066f044); r_esp += 4; return;
L_0066f0d7:; BB(0x0066f0d7);
    /* 0066f0d7: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0066f0dc: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x66f0e1u); f_0082d990();
    /* 0066f0e1: mov edx, dword ptr [esi + 0x88] */ r_edx = R32((u32)(r_esi+0x88u));
    /* 0066f0e7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066f0e9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x66f0eeu); f_0082d8bc();
    /* 0066f0ee: lea ebx, [esi + 0x90] */ r_ebx = (u32)(r_esi+0x90u);
    /* 0066f0f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f0f5: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0066f0f9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066f0fb: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x66f100u); f_00830aa0();
    /* 0066f100: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0066f105: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x66f10au); f_0082eb80();
    /* 0066f10a: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 0066f10e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066f110: mov ebp, ebx */ r_ebp = r_ebx;
    /* 0066f112: mov ebx, eax */ r_ebx = r_eax;
L_0066f114:; BB(0x0066f114);
    /* 0066f114: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f115: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66f11au); f_0068d5a8();
    /* 0066f11a: mov edi, eax */ r_edi = r_eax;
    /* 0066f11c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066f11f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f121: je 0x66f21a */ if (fZ) goto L_0066f21a;
L_0066f127:; BB(0x0066f127);
    /* 0066f127: fld dword ptr [esi + 0x68] */ FPUSH(R_F32((u32)(r_esi+0x68u)));
    /* 0066f12a: fmul dword ptr [0x939f68] */ ST(0) = ST(0) * R_F32((u32)(0x939f68u));
    /* 0066f130: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0066f132: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0066f136: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f137: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66f13cu); f_0068d5a8();
    /* 0066f13c: mov edx, eax */ r_edx = r_eax;
    /* 0066f13e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066f141: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f143: je 0x66f21a */ if (fZ) goto L_0066f21a;
L_0066f149:; BB(0x0066f149);
    /* 0066f149: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066f14c: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0066f14f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f150: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f151: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x66f156u); f_007a9180();
    /* 0066f156: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066f159: fcomp dword ptr [esp + 0x30] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x30u))); FPOP();
    /* 0066f15d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066f15f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066f160: jae 0x66f21a */ if (!fC) goto L_0066f21a;
L_0066f166:; BB(0x0066f166);
    /* 0066f166: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 0066f169: fsub dword ptr [esi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38u));
    /* 0066f16c: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 0066f16f: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 0066f172: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066f174: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0066f178: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0066f17c: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0066f184: mov edx, ebp */ r_edx = r_ebp;
    /* 0066f186: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0066f18a: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x66f18fu); f_0082f9e0();
    /* 0066f18f: fcomp dword ptr [0x939f64] */ fx_compare(ST(0), R_F32((u32)(0x939f64u))); FPOP();
    /* 0066f195: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066f197: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066f198: jbe 0x66f1db */ if ((fC||fZ)) goto L_0066f1db;
L_0066f19a:; BB(0x0066f19a);
    /* 0066f19a: mov eax, dword ptr [esi + 0x8c] */ r_eax = R32((u32)(r_esi+0x8cu));
    /* 0066f1a0: cmp eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f1a5: je 0x66f231 */ if (fZ) goto L_0066f231;
L_0066f1ab:; BB(0x0066f1ab);
    /* 0066f1ab: fld dword ptr [esi + 0x6c] */ FPUSH(R_F32((u32)(r_esi+0x6cu)));
    /* 0066f1ae: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0066f1b2: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0066f1b7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066f1bc: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0066f1c0: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0066f1c4: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0066f1c8: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0066f1cc: movsx eax, word ptr [esp + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x28u));
    /* 0066f1d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f1d2: mov ecx, edi */ r_ecx = r_edi;
    /* 0066f1d4: call 0x7ba924 */ r_esp -= 4; W32(r_esp, 0x66f1d9u); f_007ba924();
    /* 0066f1d9: jmp 0x66f21a */ goto L_0066f21a;
L_0066f1db:; BB(0x0066f1db);
    /* 0066f1db: mov eax, dword ptr [esi + 0x8c] */ r_eax = R32((u32)(r_esi+0x8cu));
    /* 0066f1e1: cmp eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f1e6: je 0x66f26d */ if (fZ) goto L_0066f26d;
L_0066f1ec:; BB(0x0066f1ec);
    /* 0066f1ec: fld dword ptr [esi + 0x70] */ FPUSH(R_F32((u32)(r_esi+0x70u)));
    /* 0066f1ef: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0066f1f3: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0066f1f8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066f1fd: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0066f201: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0066f205: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0066f209: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0066f20d: movsx eax, word ptr [esp + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x28u));
    /* 0066f212: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f213: mov ecx, edi */ r_ecx = r_edi;
    /* 0066f215: call 0x7ba924 */ r_esp -= 4; W32(r_esp, 0x66f21au); f_007ba924();
L_0066f21a:; BB(0x0066f21a);
    /* 0066f21a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0066f21d: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066f220: jl 0x66f114 */ if ((fS!=fO)) goto L_0066f114;
L_0066f226:; BB(0x0066f226);
    /* 0066f226: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 0066f22a: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066f22d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066f22e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066f22f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066f230: ret  */ FN_RET(0x0066f044); r_esp += 4; return;
L_0066f231:; BB(0x0066f231);
    /* 0066f231: fld dword ptr [esi + 0x6c] */ FPUSH(R_F32((u32)(r_esi+0x6cu)));
    /* 0066f234: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0066f238: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0066f23d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066f242: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0066f246: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0066f24a: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0066f24e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0066f252: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0066f256: mov word ptr [edi + 0x28], ax */ W16((u32)(r_edi+0x28u), (u16)r_eax);
    /* 0066f25a: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0066f260: or eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066f265: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0066f26b: jmp 0x66f21a */ goto L_0066f21a;
L_0066f26d:; BB(0x0066f26d);
    /* 0066f26d: fld dword ptr [esi + 0x70] */ FPUSH(R_F32((u32)(r_esi+0x70u)));
    /* 0066f270: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0066f274: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0066f279: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066f27e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0066f282: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0066f286: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0066f28a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0066f28e: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0066f292: mov word ptr [edi + 0x28], ax */ W16((u32)(r_edi+0x28u), (u16)r_eax);
    /* 0066f296: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0066f29c: or eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066f2a1: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0066f2a7: jmp 0x66f21a */ goto L_0066f21a;
}

void f_0066f2ac(void)
{
    FN_ENTER(0x0066f2ac);
    /* 0066f2ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066f2ad: mov ebp, esp */ r_ebp = r_esp;
    /* 0066f2af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066f2b1: push 0x8e8fa8 */ { u32 v = 0x8e8fa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f2b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066f2bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f2bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066f2c4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066f2c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066f2ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066f2cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066f2d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066f2d3: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066f2d8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0066f2df: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x66f2e4u); f_005caba4();
    /* 0066f2e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066f2e5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0066f2e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f2ea: je 0x66f323 */ if (fZ) goto L_0066f323;
L_0066f2ec:; BB(0x0066f2ec);
    /* 0066f2ec: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0066f2f3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066f2fa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066f2fd: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066f303: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066f306: call 0x66f328 */ r_esp -= 4; W32(r_esp, 0x66f30bu); f_0066f328();
    /* 0066f30b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066f30e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0066f315:; BB(0x0066f315);
    /* 0066f315: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066f318: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066f31f: mov esp, ebp */ r_esp = r_ebp;
    /* 0066f321: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066f322: ret  */ FN_RET(0x0066f2ac); r_esp += 4; return;
L_0066f323:; BB(0x0066f323);
    /* 0066f323: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066f325: jmp 0x66f315 */ goto L_0066f315;
}

void f_0066f328(void) /* sub_66F328 */
{
    FN_ENTER(0x0066f328);
    /* 0066f328: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066f329: mov ebp, esp */ r_ebp = r_esp;
    /* 0066f32b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066f32d: push 0x8e8fc4 */ { u32 v = 0x8e8fc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f332: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066f338: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f339: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066f340: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066f343: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066f346: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0066f349: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0066f34c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0066f34f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0066f352: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066f355: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0066f358: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066f35b: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x66f360u); f_007ba278();
    /* 0066f360: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066f367: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066f36a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066f36d: mov dword ptr [ecx], 0xb35a20 */ W32((u32)(r_ecx), 0xb35a20u);
    /* 0066f373: mov eax, dword ptr [0x9c9694] */ r_eax = R32((u32)(0x9c9694u));
    /* 0066f378: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f379: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0066f37c: call dword ptr [0xb35a34] */ { u32 t = R32((u32)(0xb35a34u)); r_esp -= 4; W32(r_esp, 0x66f382u); call_ind(t); }
    /* 0066f382: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066f385: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
    /* 0066f38f: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
    /* 0066f399: mov dword ptr [eax + 0x98], 0 */ W32((u32)(r_eax+0x98u), 0x0u);
    /* 0066f3a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066f3a6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066f3ad: mov esp, ebp */ r_esp = r_ebp;
    /* 0066f3af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066f3b0: ret 8 */ FN_RET(0x0066f328); r_esp += 12; return;
}

void f_0066f3b4(void) /* sub_66F3B4 */
{
    FN_ENTER(0x0066f3b4);
    /* 0066f3b4: mov dword ptr [0xa8fd90], 0x3f800000 */ W32((u32)(0xa8fd90u), 0x3f800000u);
    /* 0066f3be: mov dword ptr [0xa8fd94], 0x41000000 */ W32((u32)(0xa8fd94u), 0x41000000u);
    /* 0066f3c8: mov dword ptr [0xa8fd98], 0x3fc00000 */ W32((u32)(0xa8fd98u), 0x3fc00000u);
    /* 0066f3d2: ret  */ FN_RET(0x0066f3b4); r_esp += 4; return;
}

void f_0066f3d4(void) /* sub_66F3D4 */
{
    FN_ENTER(0x0066f3d4);
    /* 0066f3d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066f3d5: mov ebp, esp */ r_ebp = r_esp;
    /* 0066f3d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066f3d9: push 0x8e9006 */ { u32 v = 0x8e9006u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f3de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066f3e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f3e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066f3ec: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066f3ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066f3f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066f3f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066f3f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066f3fb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0066f3fd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066f400: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f402: jne 0x66f444 */ if (!fZ) goto L_0066f444;
L_0066f404:; BB(0x0066f404);
    /* 0066f404: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0066f40b: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f40d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x66f412u); f_008581c5();
    /* 0066f412: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066f413: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0066f416: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f418: je 0x66f497 */ if (fZ) goto L_0066f497;
L_0066f41a:; BB(0x0066f41a);
    /* 0066f41a: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0066f421: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0066f428: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0066f42b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0066f42e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066f431: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f432: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f433: call 0x66f58c */ r_esp -= 4; W32(r_esp, 0x66f438u); f_0066f58c();
    /* 0066f438: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066f43b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0066f442: jmp 0x66f487 */ goto L_0066f487;
L_0066f444:; BB(0x0066f444);
    /* 0066f444: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066f447: jne 0x66f487 */ if (!fZ) goto L_0066f487;
L_0066f449:; BB(0x0066f449);
    /* 0066f449: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0066f450: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f452: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x66f457u); f_008581c5();
    /* 0066f457: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066f458: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0066f45b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f45d: je 0x66f49b */ if (fZ) goto L_0066f49b;
L_0066f45f:; BB(0x0066f45f);
    /* 0066f45f: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0066f466: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066f46d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0066f470: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0066f473: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066f476: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f477: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f478: call 0x66f904 */ r_esp -= 4; W32(r_esp, 0x66f47du); f_0066f904();
    /* 0066f47d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066f480: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0066f487:; BB(0x0066f487);
    /* 0066f487: mov eax, edx */ r_eax = r_edx;
    /* 0066f489: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066f48c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066f493: mov esp, ebp */ r_esp = r_ebp;
    /* 0066f495: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066f496: ret  */ FN_RET(0x0066f3d4); r_esp += 4; return;
L_0066f497:; BB(0x0066f497);
    /* 0066f497: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066f499: jmp 0x66f487 */ goto L_0066f487;
L_0066f49b:; BB(0x0066f49b);
    /* 0066f49b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066f49d: jmp 0x66f487 */ goto L_0066f487;
}

void f_0066f4a0(void)
{
    FN_ENTER(0x0066f4a0);
    /* 0066f4a0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0066f4a4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066f4a6: mov dword ptr [ecx], 0xb35ad0 */ W32((u32)(r_ecx), 0xb35ad0u);
    /* 0066f4ac: jne 0x66f4b1 */ if (!fZ) goto L_0066f4b1;
L_0066f4ae:; BB(0x0066f4ae);
    /* 0066f4ae: ret 4 */ FN_RET(0x0066f4a0); r_esp += 8; return;
L_0066f4b1:; BB(0x0066f4b1);
    /* 0066f4b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f4b2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x66f4b7u); f_00857e98();
    /* 0066f4b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066f4b8: ret 4 */ FN_RET(0x0066f4a0); r_esp += 8; return;
}

void f_0066f4bc(void) /* sub_66F4BC */
{
    FN_ENTER(0x0066f4bc);
    /* 0066f4bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f4bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066f4bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066f4c1: call 0x66f4e0 */ r_esp -= 4; W32(r_esp, 0x66f4c6u); f_0066f4e0();
    /* 0066f4c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0066f4ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066f4cc: jne 0x66f4d2 */ if (!fZ) goto L_0066f4d2;
L_0066f4ce:; BB(0x0066f4ce);
    /* 0066f4ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066f4cf: ret 4 */ FN_RET(0x0066f4bc); r_esp += 8; return;
L_0066f4d2:; BB(0x0066f4d2);
    /* 0066f4d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f4d3: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x66f4d8u); f_00857e98();
    /* 0066f4d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066f4d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066f4da: ret 4 */ FN_RET(0x0066f4bc); r_esp += 8; return;
}

void f_0066f4e0(void) /* sub_66F4E0 */
{
    FN_ENTER(0x0066f4e0);
    /* 0066f4e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066f4e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066f4e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066f4e5: push 0x8e9020 */ { u32 v = 0x8e9020u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f4ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066f4f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f4f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066f4f8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066f4fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066f4fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066f501: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066f504: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066f507: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066f50a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066f511: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066f514: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0066f517: mov dword ptr [edx], 0xb35ae4 */ W32((u32)(r_edx), 0xb35ae4u);
    /* 0066f51d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f51f: je 0x66f532 */ if (fZ) goto L_0066f532;
L_0066f521:; BB(0x0066f521);
    /* 0066f521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f522: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x66f527u); f_00857e98();
    /* 0066f527: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066f528: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066f52b: mov dword ptr [edx + 0x10], 0 */ W32((u32)(r_edx+0x10u), 0x0u);
L_0066f532:; BB(0x0066f532);
    /* 0066f532: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0066f535: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066f537: je 0x66f54a */ if (fZ) goto L_0066f54a;
L_0066f539:; BB(0x0066f539);
    /* 0066f539: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f53a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x66f53fu); f_00857e98();
    /* 0066f53f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066f540: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066f543: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
L_0066f54a:; BB(0x0066f54a);
    /* 0066f54a: mov dword ptr [edx], 0xb35ad0 */ W32((u32)(r_edx), 0xb35ad0u);
    /* 0066f550: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066f553: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066f55a: mov esp, ebp */ r_esp = r_ebp;
    /* 0066f55c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066f55d: ret  */ FN_RET(0x0066f4e0); r_esp += 4; return;
}

void f_0066f560(void) /* sub_66F560 */
{
    FN_ENTER(0x0066f560);
    /* 0066f560: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f561: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066f563: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066f565: call 0x66f584 */ r_esp -= 4; W32(r_esp, 0x66f56au); f_0066f584();
    /* 0066f56a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0066f56e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066f570: jne 0x66f576 */ if (!fZ) goto L_0066f576;
L_0066f572:; BB(0x0066f572);
    /* 0066f572: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066f573: ret 4 */ FN_RET(0x0066f560); r_esp += 8; return;
L_0066f576:; BB(0x0066f576);
    /* 0066f576: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f577: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x66f57cu); f_00857e98();
    /* 0066f57c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066f57d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066f57e: ret 4 */ FN_RET(0x0066f560); r_esp += 8; return;
}

void f_0066f584(void) /* sub_66F584 */
{
    FN_ENTER(0x0066f584);
    /* 0066f584: mov dword ptr [ecx], 0xb35ad0 */ W32((u32)(r_ecx), 0xb35ad0u);
    /* 0066f58a: ret  */ FN_RET(0x0066f584); r_esp += 4; return;
}

void f_0066f58c(void) /* sub_66F58C */
{
    FN_ENTER(0x0066f58c);
    /* 0066f58c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066f58d: mov ebp, esp */ r_ebp = r_esp;
    /* 0066f58f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066f591: push 0x8e903c */ { u32 v = 0x8e903cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066f596: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066f59c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f59d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066f5a4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066f5a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066f5aa: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0066f5ad: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0066f5b0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0066f5b3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066f5b6: mov dword ptr [ecx], 0xb35ad0 */ W32((u32)(r_ecx), 0xb35ad0u);
    /* 0066f5bc: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0066f5bf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066f5c2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0066f5c5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066f5cc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066f5cf: mov dword ptr [ecx], 0xb35ae4 */ W32((u32)(r_ecx), 0xb35ae4u);
    /* 0066f5d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0066f5d7: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0066f5da: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 0066f5e1: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0066f5e4: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0066f5e7: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 0066f5ee: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0066f5f1: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0066f5f4: mov word ptr [ecx + 0x14], dx */ W16((u32)(r_ecx+0x14u), (u16)r_edx);
    /* 0066f5f8: mov word ptr [ecx + 0x16], dx */ W16((u32)(r_ecx+0x16u), (u16)r_edx);
    /* 0066f5fc: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0066f5ff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066f602: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066f604: je 0x66f658 */ if (fZ) goto L_0066f658;
L_0066f606:; BB(0x0066f606);
    /* 0066f606: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066f609: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 0066f60c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f60e: je 0x66f636 */ if (fZ) goto L_0066f636;
L_0066f610:; BB(0x0066f610);
    /* 0066f610: je 0x66f636 */ if (fZ) goto L_0066f636;
L_0066f612:; BB(0x0066f612);
    /* 0066f612: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0066f615: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0066f617: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f619: je 0x66f67b */ if (fZ) goto L_0066f67b;
L_0066f61b:; BB(0x0066f61b);
    /* 0066f61b: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 0066f61e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066f620: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066f622: add eax, dword ptr [esi + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066f625: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f626: call 0x81a55c */ r_esp -= 4; W32(r_esp, 0x66f62bu); f_0081a55c();
    /* 0066f62b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066f62c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0066f62f: cmp ebx, dword ptr [esi + 0x10] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0066f632: jb 0x66f61b */ if (fC) goto L_0066f61b;
L_0066f634:; BB(0x0066f634);
    /* 0066f634: jmp 0x66f67b */ goto L_0066f67b;
L_0066f636:; BB(0x0066f636);
    /* 0066f636: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066f639: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0066f63c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f63e: je 0x66f649 */ if (fZ) goto L_0066f649;
L_0066f640:; BB(0x0066f640);
    /* 0066f640: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066f643: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f644: call 0x66f6a8 */ r_esp -= 4; W32(r_esp, 0x66f649u); f_0066f6a8();
L_0066f649:; BB(0x0066f649);
    /* 0066f649: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066f64c: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0066f64f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0066f652: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066f654: jne 0x66f606 */ if (!fZ) goto L_0066f606;
L_0066f656:; BB(0x0066f656);
    /* 0066f656: jmp 0x66f69f */ goto L_0066f69f;
L_0066f658:; BB(0x0066f658);
    /* 0066f658: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066f65b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066f65e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066f661: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066f664: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 0066f66b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066f66e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066f675: mov esp, ebp */ r_esp = r_ebp;
    /* 0066f677: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066f678: ret 8 */ FN_RET(0x0066f58c); r_esp += 12; return;
L_0066f67b:; BB(0x0066f67b);
    /* 0066f67b: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 0066f67e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0066f680: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f682: je 0x66f636 */ if (fZ) goto L_0066f636;
L_0066f684:; BB(0x0066f684);
    /* 0066f684: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 0066f687: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066f689: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066f68b: add eax, dword ptr [esi + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x14u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066f68e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f68f: call 0x81a55c */ r_esp -= 4; W32(r_esp, 0x66f694u); f_0081a55c();
    /* 0066f694: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066f695: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0066f698: cmp ebx, dword ptr [esi + 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0066f69b: jb 0x66f684 */ if (fC) goto L_0066f684;
L_0066f69d:; BB(0x0066f69d);
    /* 0066f69d: jmp 0x66f636 */ goto L_0066f636;
L_0066f69f:; BB(0x0066f69f);
    /* 0066f69f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066f6a2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0066f6a5: jmp 0x66f658 */ goto L_0066f658;
}

void f_0066f6a8(void) /* sub_66F6A8 */
{
    FN_ENTER(0x0066f6a8);
    /* 0066f6a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066f6a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066f6aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066f6ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f6ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066f6ad: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0066f6af: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0066f6b3: mov ebx, eax */ r_ebx = r_eax;
L_0066f6b5:; BB(0x0066f6b5);
    /* 0066f6b5: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0066f6b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f6ba: je 0x66f71e */ if (fZ) goto L_0066f71e;
L_0066f6bc:; BB(0x0066f6bc);
    /* 0066f6bc: je 0x66f71e */ if (fZ) goto L_0066f71e;
L_0066f6be:; BB(0x0066f6be);
    /* 0066f6be: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0066f6c1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0066f6c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f6c5: je 0x66f6ef */ if (fZ) goto L_0066f6ef;
L_0066f6c7:; BB(0x0066f6c7);
    /* 0066f6c7: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0066f6ca: lea esi, [edi + edi*4] */ r_esi = (u32)(r_edi+r_edi*4);
    /* 0066f6cd: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066f6cf: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066f6d1: mov ebp, eax */ r_ebp = r_eax;
L_0066f6d3:; BB(0x0066f6d3);
    /* 0066f6d3: mov edx, esi */ r_edx = r_esi;
    /* 0066f6d5: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066f6d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f6d9: call 0x81a55c */ r_esp -= 4; W32(r_esp, 0x66f6deu); f_0081a55c();
    /* 0066f6de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066f6df: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066f6e2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066f6e5: cmp edi, dword ptr [ebp + 0x10] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0066f6e8: jb 0x66f6d3 */ if (fC) goto L_0066f6d3;
L_0066f6ea:; BB(0x0066f6ea);
    /* 0066f6ea: mov eax, ebp */ r_eax = r_ebp;
    /* 0066f6ec: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0066f6ef:; BB(0x0066f6ef);
    /* 0066f6ef: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0066f6f2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0066f6f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f6f6: je 0x66f71e */ if (fZ) goto L_0066f71e;
L_0066f6f8:; BB(0x0066f6f8);
    /* 0066f6f8: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0066f6fb: lea edi, [esi + esi*4] */ r_edi = (u32)(r_esi+r_esi*4);
    /* 0066f6fe: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066f700: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066f702: mov ebp, eax */ r_ebp = r_eax;
L_0066f704:; BB(0x0066f704);
    /* 0066f704: mov edx, edi */ r_edx = r_edi;
    /* 0066f706: add edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066f709: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f70a: call 0x81a55c */ r_esp -= 4; W32(r_esp, 0x66f70fu); f_0081a55c();
    /* 0066f70f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066f710: add edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066f713: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066f716: cmp esi, dword ptr [ebp + 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0066f719: jb 0x66f704 */ if (fC) goto L_0066f704;
L_0066f71b:; BB(0x0066f71b);
    /* 0066f71b: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0066f71e:; BB(0x0066f71e);
    /* 0066f71e: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 0066f721: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f723: je 0x66f72d */ if (fZ) goto L_0066f72d;
L_0066f725:; BB(0x0066f725);
    /* 0066f725: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f726: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0066f728: call 0x66f6a8 */ r_esp -= 4; W32(r_esp, 0x66f72du); f_0066f6a8();
L_0066f72d:; BB(0x0066f72d);
    /* 0066f72d: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0066f730: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066f732: jne 0x66f6b5 */ if (!fZ) goto L_0066f6b5;
L_0066f734:; BB(0x0066f734);
    /* 0066f734: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066f735: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066f736: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066f737: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066f738: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066f739: ret 4 */ FN_RET(0x0066f6a8); r_esp += 8; return;
}

void f_0066f73c(void) /* sub_66F73C */
{
    FN_ENTER(0x0066f73c);
    /* 0066f73c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066f73d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066f73e: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066f741: mov edi, ecx */ r_edi = r_ecx;
    /* 0066f743: movsx eax, word ptr [esp + 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x24u));
    /* 0066f748: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066f749: mov ecx, eax */ r_ecx = r_eax;
    /* 0066f74b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0066f74d: movsx eax, word ptr [esp + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x28u));
    /* 0066f752: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066f754: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0066f756: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0066f75c: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066f75e: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0066f760: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066f761: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066f763: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066f765: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0066f76a: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066f76c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066f76e: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0066f771: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066f773: jle 0x66f7fa */ if ((fZ||fS!=fO)) goto L_0066f7fa;
L_0066f779:; BB(0x0066f779);
    /* 0066f779: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0066f77d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0066f781: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0066f785: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
L_0066f789:; BB(0x0066f789);
    /* 0066f789: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0066f78c: mov esi, dword ptr [eax + ebp*8] */ r_esi = R32((u32)(r_eax+r_ebp*8));
    /* 0066f78f: mov ecx, dword ptr [eax + ebp*8 + 4] */ r_ecx = R32((u32)(r_eax+r_ebp*8+0x4u));
    /* 0066f793: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 0066f796: movzx ebx, word ptr [esi + 2] */ r_ebx = (u32)R16((u32)(r_esi+0x2u));
    /* 0066f79a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066f79c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066f79e: jle 0x66f7dc */ if ((fZ||fS!=fO)) goto L_0066f7dc;
L_0066f7a0:; BB(0x0066f7a0);
    /* 0066f7a0: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0066f7a4: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0066f7a8: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0066f7ab: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_0066f7af:; BB(0x0066f7af);
    /* 0066f7af: movzx ebx, word ptr [ecx] */ r_ebx = (u32)R16((u32)(r_ecx));
    /* 0066f7b2: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0066f7b4: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 0066f7b7: movzx ebx, word ptr [ecx + 2] */ r_ebx = (u32)R16((u32)(r_ecx+0x2u));
    /* 0066f7bb: add ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0066f7bd: mov word ptr [edx + 2], bx */ W16((u32)(r_edx+0x2u), (u16)r_ebx);
    /* 0066f7c1: movzx ebx, word ptr [esi + 2] */ r_ebx = (u32)R16((u32)(r_esi+0x2u));
    /* 0066f7c5: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066f7c8: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066f7cb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066f7ce: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066f7d0: jl 0x66f7af */ if ((fS!=fO)) goto L_0066f7af;
L_0066f7d2:; BB(0x0066f7d2);
    /* 0066f7d2: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0066f7d6: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0066f7d9: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
L_0066f7dc:; BB(0x0066f7dc);
    /* 0066f7dc: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0066f7de: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0066f7e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f7e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f7e2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66f7e7u); f_0061cdb0();
    /* 0066f7e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066f7ea: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0066f7ed: cmp ebp, dword ptr [edi + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066f7f0: jl 0x66f789 */ if ((fS!=fO)) goto L_0066f789;
L_0066f7f2:; BB(0x0066f7f2);
    /* 0066f7f2: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0066f7f6: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_0066f7fa:; BB(0x0066f7fa);
    /* 0066f7fa: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066f7fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066f7fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066f7ff: ret 8 */ FN_RET(0x0066f73c); r_esp += 12; return;
}

void f_0066f804(void) /* sub_66F804 */
{
    FN_ENTER(0x0066f804);
    /* 0066f804: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066f805: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066f806: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066f809: mov esi, ecx */ r_esi = r_ecx;
    /* 0066f80b: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 0066f810: movzx edx, word ptr [esp + 0x20] */ r_edx = (u32)R16((u32)(r_esp+0x20u));
    /* 0066f815: fld dword ptr [0x939fc0] */ FPUSH(R_F32((u32)(0x939fc0u)));
    /* 0066f81b: movzx edi, word ptr [esi + 0x14] */ r_edi = (u32)R16((u32)(r_esi+0x14u));
    /* 0066f81f: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066f821: movsx ecx, di */ r_ecx = (u32)(i32)(i16)(u16)r_edi;
    /* 0066f824: movzx edi, word ptr [esi + 0x16] */ r_edi = (u32)R16((u32)(r_esi+0x16u));
    /* 0066f828: mov word ptr [esi + 0x14], cx */ W16((u32)(r_esi+0x14u), (u16)r_ecx);
    /* 0066f82c: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066f82e: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 0066f831: mov word ptr [esi + 0x16], di */ W16((u32)(r_esi+0x16u), (u16)r_edi);
    /* 0066f835: mov eax, ecx */ r_eax = r_ecx;
    /* 0066f837: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066f838: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066f83a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066f83c: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0066f841: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066f843: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066f845: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0066f848: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0066f84b: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0066f84d: mov eax, edi */ r_eax = r_edi;
    /* 0066f84f: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 0066f852: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066f853: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066f855: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066f857: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0066f85c: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066f85e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066f860: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0066f862: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0066f866: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0066f86a: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0066f86c: fstp dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0)); FPOP();
    /* 0066f86f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066f870: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f871: mov ecx, esi */ r_ecx = r_esi;
    /* 0066f873: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x66f876u); call_ind(t); }
    /* 0066f876: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066f879: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066f87a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066f87b: ret 8 */ FN_RET(0x0066f804); r_esp += 12; return;
}

void f_0066f880(void) /* sub_66F880 */
{
    FN_ENTER(0x0066f880);
    /* 0066f880: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f881: mov ebx, esp */ r_ebx = r_esp;
    /* 0066f883: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0066f886: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066f887: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066f88a: mov esi, ecx */ r_esi = r_ecx;
    /* 0066f88c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0066f88f: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x66f894u); f_00830cd8();
    /* 0066f894: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 0066f897: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 0066f89a: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0066f89d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0066f8a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f8a3: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0066f8a7: jne 0x66f8bd */ if (!fZ) goto L_0066f8bd;
L_0066f8a9:; BB(0x0066f8a9);
    /* 0066f8a9: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0066f8ac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066f8ae: call 0x835cfc */ r_esp -= 4; W32(r_esp, 0x66f8b3u); f_00835cfc();
    /* 0066f8b3: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066f8b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066f8b7: mov esp, ebx */ r_esp = r_ebx;
    /* 0066f8b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066f8ba: ret 4 */ FN_RET(0x0066f880); r_esp += 8; return;
L_0066f8bd:; BB(0x0066f8bd);
    /* 0066f8bd: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0066f8c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066f8c2: call 0x835cfc */ r_esp -= 4; W32(r_esp, 0x66f8c7u); f_00835cfc();
    /* 0066f8c7: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0066f8ca: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0066f8cf: call 0x835cfc */ r_esp -= 4; W32(r_esp, 0x66f8d4u); f_00835cfc();
    /* 0066f8d4: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066f8d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066f8d8: mov esp, ebx */ r_esp = r_ebx;
    /* 0066f8da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066f8db: ret 4 */ FN_RET(0x0066f880); r_esp += 8; return;
}

void f_0066f8e0(void) /* sub_66F8E0 */
{
    FN_ENTER(0x0066f8e0);
    /* 0066f8e0: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0066f8e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f8e5: jne 0x66f8ef */ if (!fZ) goto L_0066f8ef;
L_0066f8e7:; BB(0x0066f8e7);
    /* 0066f8e7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066f8e9: call 0x835de8 */ r_esp -= 4; W32(r_esp, 0x66f8eeu); f_00835de8();
    /* 0066f8ee: ret  */ FN_RET(0x0066f8e0); r_esp += 4; return;
L_0066f8ef:; BB(0x0066f8ef);
    /* 0066f8ef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066f8f1: call 0x835de8 */ r_esp -= 4; W32(r_esp, 0x66f8f6u); f_00835de8();
    /* 0066f8f6: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0066f8fb: call 0x835de8 */ r_esp -= 4; W32(r_esp, 0x66f900u); f_00835de8();
    /* 0066f900: ret  */ FN_RET(0x0066f8e0); r_esp += 4; return;
}

void f_0066f904(void) /* sub_66F904 */
{
    FN_ENTER(0x0066f904);
    /* 0066f904: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066f905: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066f906: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066f907: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f908: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0066f90a: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0066f90e: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0066f912: mov dword ptr [ebp], 0xb35af8 */ W32((u32)(r_ebp), 0xb35af8u);
    /* 0066f919: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066f91b: mov word ptr [ebp + 4], ax */ W16((u32)(r_ebp+0x4u), (u16)r_eax);
    /* 0066f91f: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 0066f926: mov word ptr [ebp + 6], ax */ W16((u32)(r_ebp+0x6u), (u16)r_eax);
    /* 0066f92a: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0066f92d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066f92f: mov dword ptr [ebp + 0xc], 0 */ W32((u32)(r_ebp+0xcu), 0x0u);
    /* 0066f936: je 0x66f99d */ if (fZ) goto L_0066f99d;
L_0066f938:; BB(0x0066f938);
    /* 0066f938: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0066f93b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066f93d: je 0x66f99d */ if (fZ) goto L_0066f99d;
L_0066f93f:; BB(0x0066f93f);
    /* 0066f93f: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0066f942: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0066f944: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f946: je 0x66f96f */ if (fZ) goto L_0066f96f;
L_0066f948:; BB(0x0066f948);
    /* 0066f948: lea ecx, [edi + edi*4] */ r_ecx = (u32)(r_edi+r_edi*4);
    /* 0066f94b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066f94d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066f94f: mov esi, edx */ r_esi = r_edx;
    /* 0066f951: mov ebx, ecx */ r_ebx = r_ecx;
L_0066f953:; BB(0x0066f953);
    /* 0066f953: mov edx, ebx */ r_edx = r_ebx;
    /* 0066f955: add edx, dword ptr [eax + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066f958: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f959: call 0x81a55c */ r_esp -= 4; W32(r_esp, 0x66f95eu); f_0081a55c();
    /* 0066f95e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066f95f: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0066f962: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0066f965: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066f968: cmp edi, dword ptr [eax + 0x10] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0066f96b: jb 0x66f953 */ if (fC) goto L_0066f953;
L_0066f96d:; BB(0x0066f96d);
    /* 0066f96d: mov edx, esi */ r_edx = r_esi;
L_0066f96f:; BB(0x0066f96f);
    /* 0066f96f: mov edi, dword ptr [eax + 0x18] */ r_edi = R32((u32)(r_eax+0x18u));
    /* 0066f972: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066f974: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066f976: je 0x66f99d */ if (fZ) goto L_0066f99d;
L_0066f978:; BB(0x0066f978);
    /* 0066f978: lea edi, [ecx + ecx*4] */ r_edi = (u32)(r_ecx+r_ecx*4);
    /* 0066f97b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066f97d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066f97f: mov esi, edx */ r_esi = r_edx;
    /* 0066f981: mov ebx, ecx */ r_ebx = r_ecx;
L_0066f983:; BB(0x0066f983);
    /* 0066f983: mov edx, edi */ r_edx = r_edi;
    /* 0066f985: add edx, dword ptr [eax + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066f988: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f989: call 0x81a55c */ r_esp -= 4; W32(r_esp, 0x66f98eu); f_0081a55c();
    /* 0066f98e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066f98f: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0066f992: add edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066f995: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0066f998: cmp ebx, dword ptr [eax + 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066f99b: jb 0x66f983 */ if (fC) goto L_0066f983;
L_0066f99d:; BB(0x0066f99d);
    /* 0066f99d: mov eax, ebp */ r_eax = r_ebp;
    /* 0066f99f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066f9a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066f9a1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066f9a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066f9a3: ret 8 */ FN_RET(0x0066f904); r_esp += 12; return;
}

void f_0066f9a8(void) /* sub_66F9A8 */
{
    FN_ENTER(0x0066f9a8);
    /* 0066f9a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066f9a9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066f9ac: mov edi, ecx */ r_edi = r_ecx;
    /* 0066f9ae: movsx eax, word ptr [esp + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x18u));
    /* 0066f9b3: movsx ecx, word ptr [esp + 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x1cu));
    /* 0066f9b8: fld dword ptr [0x939fb8] */ FPUSH(R_F32((u32)(0x939fb8u)));
    /* 0066f9be: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 0066f9c2: mov word ptr [edi + 6], cx */ W16((u32)(r_edi+0x6u), (u16)r_ecx);
    /* 0066f9c6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066f9c7: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066f9c9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066f9cb: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0066f9d0: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066f9d2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066f9d4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0066f9d7: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0066f9da: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0066f9dc: mov eax, ecx */ r_eax = r_ecx;
    /* 0066f9de: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 0066f9e1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066f9e2: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066f9e4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066f9e6: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0066f9eb: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066f9ed: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066f9ef: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0066f9f3: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0066f9f7: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0066f9f9: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 0066f9fc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066f9ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066fa00: ret 8 */ FN_RET(0x0066f9a8); r_esp += 12; return;
}

void f_0066fa04(void) /* sub_66FA04 */
{
    FN_ENTER(0x0066fa04);
    /* 0066fa04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066fa05: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066fa08: mov edi, ecx */ r_edi = r_ecx;
    /* 0066fa0a: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0066fa0e: movzx ecx, word ptr [edi + 6] */ r_ecx = (u32)R16((u32)(r_edi+0x6u));
    /* 0066fa12: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0066fa17: fld dword ptr [0x939fb4] */ FPUSH(R_F32((u32)(0x939fb4u)));
    /* 0066fa1d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066fa1f: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0066fa22: movzx edx, word ptr [esp + 0x1c] */ r_edx = (u32)R16((u32)(r_esp+0x1cu));
    /* 0066fa27: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 0066fa2b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066fa2d: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 0066fa30: mov word ptr [edi + 6], cx */ W16((u32)(r_edi+0x6u), (u16)r_ecx);
    /* 0066fa34: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066fa35: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066fa37: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066fa39: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0066fa3e: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066fa40: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066fa42: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0066fa45: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0066fa48: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0066fa4a: mov eax, ecx */ r_eax = r_ecx;
    /* 0066fa4c: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 0066fa4f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066fa50: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066fa52: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066fa54: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0066fa59: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066fa5b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066fa5d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0066fa61: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0066fa65: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0066fa67: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 0066fa6a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066fa6d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066fa6e: ret 8 */ FN_RET(0x0066fa04); r_esp += 12; return;
}

void f_0066fa74(void) /* sub_66FA74 */
{
    FN_ENTER(0x0066fa74);
    /* 0066fa74: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fa75: mov ebx, esp */ r_ebx = r_esp;
    /* 0066fa77: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0066fa7a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066fa7b: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066fa7e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0066fa80: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0066fa83: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0066fa86: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0066fa89: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x66fa8eu); f_00830cd8();
    /* 0066fa8e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066fa91: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0066fa94: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0066fa98: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0066fa9c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066fa9e: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x66faa3u); f_00835f78();
    /* 0066faa3: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0066faa6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0066faa9: call 0x835f88 */ r_esp -= 4; W32(r_esp, 0x66faaeu); f_00835f88();
    /* 0066faae: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066fab1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066fab2: mov esp, ebx */ r_esp = r_ebx;
    /* 0066fab4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066fab5: ret 4 */ FN_RET(0x0066fa74); r_esp += 8; return;
}

void f_0066fab8(void) /* sub_66FAB8 */
{
    FN_ENTER(0x0066fab8);
    /* 0066fab8: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x66fabdu); f_0083603c();
    /* 0066fabd: ret  */ FN_RET(0x0066fab8); r_esp += 4; return;
}

void f_0066fac0(void) /* sub_66FAC0 */
{
    FN_ENTER(0x0066fac0);
    /* 0066fac0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fac1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066fac3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066fac5: call 0x66fae4 */ r_esp -= 4; W32(r_esp, 0x66facau); f_0066fae4();
    /* 0066faca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0066face: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066fad0: jne 0x66fad6 */ if (!fZ) goto L_0066fad6;
L_0066fad2:; BB(0x0066fad2);
    /* 0066fad2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066fad3: ret 4 */ FN_RET(0x0066fac0); r_esp += 8; return;
L_0066fad6:; BB(0x0066fad6);
    /* 0066fad6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fad7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x66fadcu); f_005c2f74();
    /* 0066fadc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066fadd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066fade: ret 4 */ FN_RET(0x0066fac0); r_esp += 8; return;
}

void f_0066fae4(void) /* sub_66FAE4 */
{
    FN_ENTER(0x0066fae4);
    /* 0066fae4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066fae5: mov ebp, esp */ r_ebp = r_esp;
    /* 0066fae7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066fae9: push 0x8e9058 */ { u32 v = 0x8e9058u; r_esp -= 4; W32(r_esp, v); }
    /* 0066faee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066faf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066faf5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066fafc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066faff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066fb02: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066fb05: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066fb08: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066fb0b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066fb0e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066fb11: mov dword ptr [ecx], 0xb35bb0 */ W32((u32)(r_ecx), 0xb35bb0u);
    /* 0066fb17: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066fb1e: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x66fb23u); f_007ba1f0();
    /* 0066fb23: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066fb26: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066fb2d: mov esp, ebp */ r_esp = r_ebp;
    /* 0066fb2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066fb30: ret  */ FN_RET(0x0066fae4); r_esp += 4; return;
}

void f_0066fb34(void) /* sub_66FB34 */
{
    FN_ENTER(0x0066fb34);
    /* 0066fb34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066fb35: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066fb36: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066fb39: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0066fb3b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0066fb3d: call 0x6703c4 */ r_esp -= 4; W32(r_esp, 0x66fb42u); f_006703c4();
    /* 0066fb42: movsx ecx, word ptr [ebp + 0xbe] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xbeu));
    /* 0066fb49: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x66fb4eu); f_0082dcbc();
    /* 0066fb4e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 0066fb52: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0066fb56: fmul dword ptr [0x93a07c] */ ST(0) = ST(0) * R_F32((u32)(0x93a07cu));
    /* 0066fb5c: fadd dword ptr [ebp + 0x9c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x9cu));
    /* 0066fb62: movzx edx, byte ptr [ebp + 0xc1] */ r_edx = (u32)R8((u32)(r_ebp+0xc1u));
    /* 0066fb69: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 0066fb6d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066fb6f: jne 0x66fc2e */ if (!fZ) goto L_0066fc2e;
L_0066fb75:; BB(0x0066fb75);
    /* 0066fb75: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0066fb79: fld dword ptr [0x93a058] */ FPUSH(R_F32((u32)(0x93a058u)));
    /* 0066fb7f: fld dword ptr [0x93a050] */ FPUSH(R_F32((u32)(0x93a050u)));
    /* 0066fb85: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0066fb88: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 0066fb8a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0066fb8c: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0066fb8e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0066fb90: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0066fb92: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066fb94: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066fb95: jae 0x66fba6 */ if (!fC) goto L_0066fba6;
L_0066fb97:; BB(0x0066fb97);
    /* 0066fb97: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0066fb99: mov eax, 0xc0800000 */ r_eax = 0xc0800000u;
    /* 0066fb9e: mov dword ptr [ebp + 0xb8], eax */ W32((u32)(r_ebp+0xb8u), r_eax);
    /* 0066fba4: jmp 0x66fbc1 */ goto L_0066fbc1;
L_0066fba6:; BB(0x0066fba6);
    /* 0066fba6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0066fba8: fld dword ptr [0x93a070] */ FPUSH(R_F32((u32)(0x93a070u)));
    /* 0066fbae: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0066fbb0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066fbb2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066fbb3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066fbb5: jbe 0x66fbb9 */ if ((fC||fZ)) goto L_0066fbb9;
L_0066fbb7:; BB(0x0066fbb7);
    /* 0066fbb7: fst st(1) */ ST(1) = ST(0);
L_0066fbb9:; BB(0x0066fbb9);
    /* 0066fbb9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0066fbbb: fst dword ptr [ebp + 0xb8] */ W_F32((u32)(r_ebp+0xb8u), ST(0));
L_0066fbc1:; BB(0x0066fbc1);
    /* 0066fbc1: fld dword ptr [0x93a048] */ FPUSH(R_F32((u32)(0x93a048u)));
    /* 0066fbc7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0066fbc9: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 0066fbcf: fadd dword ptr [0x93a04c] */ ST(0) = ST(0) + R_F32((u32)(0x93a04cu));
    /* 0066fbd5: fld dword ptr [0x93a064] */ FPUSH(R_F32((u32)(0x93a064u)));
    /* 0066fbdb: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0066fbdd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066fbdf: fmul dword ptr [0x93a074] */ ST(0) = ST(0) * R_F32((u32)(0x93a074u));
    /* 0066fbe5: fadd dword ptr [ebp + 0xa8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xa8u));
    /* 0066fbeb: fld dword ptr [ebp + 0xb0] */ FPUSH(R_F32((u32)(r_ebp+0xb0u)));
    /* 0066fbf1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0066fbf3: fst dword ptr [ebp + 0xb4] */ W_F32((u32)(r_ebp+0xb4u), ST(0));
    /* 0066fbf9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066fbfb: fst dword ptr [ebp + 0xa8] */ W_F32((u32)(r_ebp+0xa8u), ST(0));
    /* 0066fc01: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066fc03: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0066fc05: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0066fc07: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0066fc09: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066fc0b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066fc0c: jae 0x66fc21 */ if (!fC) goto L_0066fc21;
L_0066fc0e:; BB(0x0066fc0e);
    /* 0066fc0e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0066fc10: mov dword ptr [ebp + 0xb0], 0 */ W32((u32)(r_ebp+0xb0u), 0x0u);
    /* 0066fc1a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066fc1c: jmp 0x66fce8 */ goto L_0066fce8;
L_0066fc21:; BB(0x0066fc21);
    /* 0066fc21: fstp dword ptr [ebp + 0xb0] */ W_F32((u32)(r_ebp+0xb0u), ST(0)); FPOP();
    /* 0066fc27: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066fc29: jmp 0x66fce8 */ goto L_0066fce8;
L_0066fc2e:; BB(0x0066fc2e);
    /* 0066fc2e: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0066fc32: fld dword ptr [0x93a074] */ FPUSH(R_F32((u32)(0x93a074u)));
    /* 0066fc38: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0066fc3b: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0066fc3d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0066fc3f: fmul dword ptr [0x93a078] */ ST(0) = ST(0) * R_F32((u32)(0x93a078u));
    /* 0066fc45: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0066fc47: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066fc49: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066fc4a: jae 0x66fc61 */ if (!fC) goto L_0066fc61;
L_0066fc4c:; BB(0x0066fc4c);
    /* 0066fc4c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0066fc4e: fld dword ptr [0x93a074] */ FPUSH(R_F32((u32)(0x93a074u)));
    /* 0066fc54: mov eax, 0x3dcccccd */ r_eax = 0x3dcccccdu;
    /* 0066fc59: mov dword ptr [ebp + 0xb8], eax */ W32((u32)(r_ebp+0xb8u), r_eax);
    /* 0066fc5f: jmp 0x66fc78 */ goto L_0066fc78;
L_0066fc61:; BB(0x0066fc61);
    /* 0066fc61: fld dword ptr [0x93a070] */ FPUSH(R_F32((u32)(0x93a070u)));
    /* 0066fc67: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0066fc69: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066fc6b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066fc6c: ja 0x66fc70 */ if ((!fC&&!fZ)) goto L_0066fc70;
L_0066fc6e:; BB(0x0066fc6e);
    /* 0066fc6e: fst st(1) */ ST(1) = ST(0);
L_0066fc70:; BB(0x0066fc70);
    /* 0066fc70: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0066fc72: fst dword ptr [ebp + 0xb8] */ W_F32((u32)(r_ebp+0xb8u), ST(0));
L_0066fc78:; BB(0x0066fc78);
    /* 0066fc78: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0066fc7a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066fc7c: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 0066fc82: fadd dword ptr [0x93a06c] */ ST(0) = ST(0) + R_F32((u32)(0x93a06cu));
    /* 0066fc88: fld dword ptr [0x93a064] */ FPUSH(R_F32((u32)(0x93a064u)));
    /* 0066fc8e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0066fc90: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066fc92: fmul dword ptr [0x93a060] */ ST(0) = ST(0) * R_F32((u32)(0x93a060u));
    /* 0066fc98: fadd dword ptr [ebp + 0xa8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xa8u));
    /* 0066fc9e: fld dword ptr [ebp + 0xb0] */ FPUSH(R_F32((u32)(r_ebp+0xb0u)));
    /* 0066fca4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066fca6: fadd dword ptr [0x93a05c] */ ST(0) = ST(0) + R_F32((u32)(0x93a05cu));
    /* 0066fcac: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0066fcae: fst dword ptr [ebp + 0xb4] */ W_F32((u32)(r_ebp+0xb4u), ST(0));
    /* 0066fcb4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0066fcb6: fst dword ptr [ebp + 0xa8] */ W_F32((u32)(r_ebp+0xa8u), ST(0));
    /* 0066fcbc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0066fcbe: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0066fcc0: fcom dword ptr [0x93a058] */ fx_compare(ST(0), R_F32((u32)(0x93a058u))); 
    /* 0066fcc6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066fcc8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066fcc9: jbe 0x66fce2 */ if ((fC||fZ)) goto L_0066fce2;
L_0066fccb:; BB(0x0066fccb);
    /* 0066fccb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0066fccd: mov dword ptr [ebp + 0xb0], 0 */ W32((u32)(r_ebp+0xb0u), 0x0u);
    /* 0066fcd7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0066fcd9: mov byte ptr [ebp + 0xc1], 0 */ W8((u32)(r_ebp+0xc1u), 0x0u);
    /* 0066fce0: jmp 0x66fce8 */ goto L_0066fce8;
L_0066fce2:; BB(0x0066fce2);
    /* 0066fce2: fstp dword ptr [ebp + 0xb0] */ W_F32((u32)(r_ebp+0xb0u), ST(0)); FPOP();
L_0066fce8:; BB(0x0066fce8);
    /* 0066fce8: movzx eax, byte ptr [ebp + 0xc0] */ r_eax = (u32)R8((u32)(r_ebp+0xc0u));
    /* 0066fcef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066fcf1: je 0x66ff94 */ if (fZ) goto L_0066ff94;
L_0066fcf7:; BB(0x0066fcf7);
    /* 0066fcf7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066fcfa: jne 0x66fdf7 */ if (!fZ) goto L_0066fdf7;
L_0066fd00:; BB(0x0066fd00);
    /* 0066fd00: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066fd02: je 0x66fd2b */ if (fZ) goto L_0066fd2b;
L_0066fd04:; BB(0x0066fd04);
    /* 0066fd04: fld dword ptr [0x93a028] */ FPUSH(R_F32((u32)(0x93a028u)));
    /* 0066fd0a: fld dword ptr [ebp + 0xa4] */ FPUSH(R_F32((u32)(r_ebp+0xa4u)));
    /* 0066fd10: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0066fd12: fld dword ptr [ebp + 0xac] */ FPUSH(R_F32((u32)(r_ebp+0xacu)));
    /* 0066fd18: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0066fd1a: fstp dword ptr [ebp + 0xa4] */ W_F32((u32)(r_ebp+0xa4u), ST(0)); FPOP();
    /* 0066fd20: fstp dword ptr [ebp + 0xac] */ W_F32((u32)(r_ebp+0xacu), ST(0)); FPOP();
    /* 0066fd26: jmp 0x66ffb6 */ goto L_0066ffb6;
L_0066fd2b:; BB(0x0066fd2b);
    /* 0066fd2b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0066fd2d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0066fd2f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x66fd34u); f_008587a5();
    /* 0066fd34: fld dword ptr [0x93a068] */ FPUSH(R_F32((u32)(0x93a068u)));
    /* 0066fd3a: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0066fd42: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0066fd46: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 0066fd4a: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 0066fd50: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0066fd52: fadd dword ptr [0x93a034] */ ST(0) = ST(0) + R_F32((u32)(0x93a034u));
    /* 0066fd58: fmul dword ptr [0x93a024] */ ST(0) = ST(0) * R_F32((u32)(0x93a024u));
    /* 0066fd5e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0066fd60: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0066fd64: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x66fd69u); f_008587a5();
    /* 0066fd69: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0066fd6d: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 0066fd71: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 0066fd77: fmul dword ptr [0x93a024] */ ST(0) = ST(0) * R_F32((u32)(0x93a024u));
    /* 0066fd7d: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0066fd82: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 0066fd88: fadd dword ptr [0x93a02c] */ ST(0) = ST(0) + R_F32((u32)(0x93a02cu));
    /* 0066fd8e: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0066fd92: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x66fd97u); f_0082d990();
    /* 0066fd97: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0066fd9a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066fd9c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x66fda1u); f_0082d8bc();
    /* 0066fda1: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0066fda5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066fda6: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0066fdaa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066fdac: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x66fdb1u); f_0082eab8();
    /* 0066fdb1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0066fdb6: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x66fdbbu); f_0082eb80();
    /* 0066fdbb: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0066fdbf: fadd dword ptr [ebp + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xa4u));
    /* 0066fdc5: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0066fdc9: fadd dword ptr [ebp + 0xac] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xacu));
    /* 0066fdcf: fld dword ptr [0x93a020] */ FPUSH(R_F32((u32)(0x93a020u)));
    /* 0066fdd5: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0066fdd7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0066fdd9: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0066fddc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0066fdde: fstp dword ptr [ebp + 0xa4] */ W_F32((u32)(r_ebp+0xa4u), ST(0)); FPOP();
    /* 0066fde4: fld dword ptr [ebp + 0xa8] */ FPUSH(R_F32((u32)(r_ebp+0xa8u)));
    /* 0066fdea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066fdec: fstp dword ptr [ebp + 0xac] */ W_F32((u32)(r_ebp+0xacu), ST(0)); FPOP();
    /* 0066fdf2: jmp 0x66ffb6 */ goto L_0066ffb6;
L_0066fdf7:; BB(0x0066fdf7);
    /* 0066fdf7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066fdfa: jne 0x66ffb6 */ if (!fZ) goto L_0066ffb6;
L_0066fe00:; BB(0x0066fe00);
    /* 0066fe00: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0066fe02: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0066fe04: movzx eax, byte ptr [ebp + 0xc2] */ r_eax = (u32)R8((u32)(r_ebp+0xc2u));
    /* 0066fe0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066fe0d: jne 0x66fe50 */ if (!fZ) goto L_0066fe50;
L_0066fe0f:; BB(0x0066fe0f);
    /* 0066fe0f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x66fe14u); f_008587a5();
    /* 0066fe14: fild dword ptr [ebp + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x60u)));
    /* 0066fe17: fld dword ptr [0x93a03c] */ FPUSH(R_F32((u32)(0x93a03cu)));
    /* 0066fe1d: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0066fe21: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 0066fe25: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 0066fe2b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0066fe2d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0066fe2f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0066fe31: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0066fe35: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 0066fe3a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066fe3f: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0066fe43: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 0066fe47: fistp dword ptr [ebp + 0x60] */ W32((u32)(r_ebp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0066fe4a: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 0066fe4e: jmp 0x66fe8f */ goto L_0066fe8f;
L_0066fe50:; BB(0x0066fe50);
    /* 0066fe50: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x66fe55u); f_008587a5();
    /* 0066fe55: fild dword ptr [ebp + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x60u)));
    /* 0066fe58: fld dword ptr [0x93a044] */ FPUSH(R_F32((u32)(0x93a044u)));
    /* 0066fe5e: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0066fe62: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 0066fe66: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 0066fe6c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0066fe6e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0066fe70: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0066fe72: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0066fe76: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 0066fe7b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066fe80: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0066fe84: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 0066fe88: fistp dword ptr [ebp + 0x60] */ W32((u32)(r_ebp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0066fe8b: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
L_0066fe8f:; BB(0x0066fe8f);
    /* 0066fe8f: movzx eax, byte ptr [ebp + 0xc1] */ r_eax = (u32)R8((u32)(r_ebp+0xc1u));
    /* 0066fe96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066fe98: je 0x66fed0 */ if (fZ) goto L_0066fed0;
L_0066fe9a:; BB(0x0066fe9a);
    /* 0066fe9a: fld dword ptr [0x93a038] */ FPUSH(R_F32((u32)(0x93a038u)));
    /* 0066fea0: fld dword ptr [ebp + 0xa4] */ FPUSH(R_F32((u32)(r_ebp+0xa4u)));
    /* 0066fea6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0066fea8: fld dword ptr [ebp + 0xac] */ FPUSH(R_F32((u32)(r_ebp+0xacu)));
    /* 0066feae: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0066feb0: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0066feb3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066feb5: fstp dword ptr [ebp + 0xa4] */ W_F32((u32)(r_ebp+0xa4u), ST(0)); FPOP();
    /* 0066febb: fld dword ptr [ebp + 0xa8] */ FPUSH(R_F32((u32)(r_ebp+0xa8u)));
    /* 0066fec1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0066fec3: fstp dword ptr [ebp + 0xac] */ W_F32((u32)(r_ebp+0xacu), ST(0)); FPOP();
    /* 0066fec9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066fecb: jmp 0x66ffb6 */ goto L_0066ffb6;
L_0066fed0:; BB(0x0066fed0);
    /* 0066fed0: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x66fed5u); f_008587a5();
    /* 0066fed5: fld dword ptr [0x93a068] */ FPUSH(R_F32((u32)(0x93a068u)));
    /* 0066fedb: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0066fee3: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0066fee7: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 0066feeb: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 0066fef1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0066fef3: fadd dword ptr [0x93a034] */ ST(0) = ST(0) + R_F32((u32)(0x93a034u));
    /* 0066fef9: fmul dword ptr [0x93a030] */ ST(0) = ST(0) * R_F32((u32)(0x93a030u));
    /* 0066feff: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0066ff01: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0066ff04: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x66ff09u); f_008587a5();
    /* 0066ff09: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0066ff0d: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 0066ff11: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 0066ff17: fmul dword ptr [0x93a030] */ ST(0) = ST(0) * R_F32((u32)(0x93a030u));
    /* 0066ff1d: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0066ff22: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 0066ff28: fadd dword ptr [0x93a02c] */ ST(0) = ST(0) + R_F32((u32)(0x93a02cu));
    /* 0066ff2e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0066ff32: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x66ff37u); f_0082d990();
    /* 0066ff37: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0066ff3a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066ff3c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x66ff41u); f_0082d8bc();
    /* 0066ff41: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0066ff45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ff46: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0066ff4a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066ff4c: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x66ff51u); f_0082eab8();
    /* 0066ff51: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0066ff56: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x66ff5bu); f_0082eb80();
    /* 0066ff5b: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0066ff5f: fadd dword ptr [ebp + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xa4u));
    /* 0066ff65: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0066ff69: fadd dword ptr [ebp + 0xac] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xacu));
    /* 0066ff6f: fld dword ptr [0x93a028] */ FPUSH(R_F32((u32)(0x93a028u)));
    /* 0066ff75: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0066ff77: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0066ff79: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0066ff7c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0066ff7e: fstp dword ptr [ebp + 0xa4] */ W_F32((u32)(r_ebp+0xa4u), ST(0)); FPOP();
    /* 0066ff84: fld dword ptr [ebp + 0xa8] */ FPUSH(R_F32((u32)(r_ebp+0xa8u)));
    /* 0066ff8a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066ff8c: fstp dword ptr [ebp + 0xac] */ W_F32((u32)(r_ebp+0xacu), ST(0)); FPOP();
    /* 0066ff92: jmp 0x66ffb6 */ goto L_0066ffb6;
L_0066ff94:; BB(0x0066ff94);
    /* 0066ff94: fld dword ptr [0x93a01c] */ FPUSH(R_F32((u32)(0x93a01cu)));
    /* 0066ff9a: fld dword ptr [ebp + 0xa4] */ FPUSH(R_F32((u32)(r_ebp+0xa4u)));
    /* 0066ffa0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0066ffa2: fld dword ptr [ebp + 0xac] */ FPUSH(R_F32((u32)(r_ebp+0xacu)));
    /* 0066ffa8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0066ffaa: fstp dword ptr [ebp + 0xa4] */ W_F32((u32)(r_ebp+0xa4u), ST(0)); FPOP();
    /* 0066ffb0: fstp dword ptr [ebp + 0xac] */ W_F32((u32)(r_ebp+0xacu), ST(0)); FPOP();
L_0066ffb6:; BB(0x0066ffb6);
    /* 0066ffb6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0066ffb8: mov edi, dword ptr [ebp + 0x38] */ r_edi = R32((u32)(r_ebp+0x38u));
    /* 0066ffbb: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0066ffbe: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0066ffc2: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0066ffc6: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0066ffca: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0066ffcd: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0066ffd1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ffd3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ffd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066ffd5: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x66ffdau); f_0077fffc();
    /* 0066ffda: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066ffdd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ffdf: je 0x6703a4 */ if (fZ) goto L_006703a4;
L_0066ffe5:; BB(0x0066ffe5);
    /* 0066ffe5: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0066ffe8: fld dword ptr [ebp + 0xa8] */ FPUSH(R_F32((u32)(r_ebp+0xa8u)));
    /* 0066ffee: fcomp dword ptr [0x93a054] */ fx_compare(ST(0), R_F32((u32)(0x93a054u))); FPOP();
    /* 0066fff4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066fff6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066fff7: jae 0x67000f */ if (!fC) goto L_0067000f;
L_0066fff9:; BB(0x0066fff9);
    /* 0066fff9: fld dword ptr [0x93a014] */ FPUSH(R_F32((u32)(0x93a014u)));
    /* 0066ffff: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00670001: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00670005: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00670007: fstp dword ptr [ebp + 0x9c] */ W_F32((u32)(r_ebp+0x9cu), ST(0)); FPOP();
    /* 0067000d: jmp 0x670023 */ goto L_00670023;
L_0067000f:; BB(0x0067000f);
    /* 0067000f: fld dword ptr [0x93a018] */ FPUSH(R_F32((u32)(0x93a018u)));
    /* 00670015: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00670017: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0067001b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067001d: fstp dword ptr [ebp + 0x9c] */ W_F32((u32)(r_ebp+0x9cu), ST(0)); FPOP();
L_00670023:; BB(0x00670023);
    /* 00670023: fadd dword ptr [ebp + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xa4u));
    /* 00670029: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067002d: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00670031: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00670033: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670034: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00670035: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x67003au); f_0077fffc();
    /* 0067003a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067003d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067003f: je 0x670386 */ if (fZ) goto L_00670386;
L_00670045:; BB(0x00670045);
    /* 00670045: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
L_00670049:; BB(0x00670049);
    /* 00670049: fadd dword ptr [ebp + 0xac] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xacu));
    /* 0067004f: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00670053: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00670057: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00670059: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067005a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067005b: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x670060u); f_0077fffc();
    /* 00670060: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00670063: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670065: je 0x67036f */ if (fZ) goto L_0067036f;
L_0067006b:; BB(0x0067006b);
    /* 0067006b: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
L_0067006e:; BB(0x0067006e);
    /* 0067006e: fld dword ptr [0x93a010] */ FPUSH(R_F32((u32)(0x93a010u)));
    /* 00670074: fadd dword ptr [esp + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x64u));
    /* 00670078: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0067007a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067007c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067007d: jae 0x670086 */ if (!fC) goto L_00670086;
L_0067007f:; BB(0x0067007f);
    /* 0067007f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00670081: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 00670084: jmp 0x6700a2 */ goto L_006700a2;
L_00670086:; BB(0x00670086);
    /* 00670086: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00670088: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0067008c: fadd dword ptr [0x93a00c] */ ST(0) = ST(0) + R_F32((u32)(0x93a00cu));
    /* 00670092: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00670094: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00670096: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00670097: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00670099: ja 0x67009d */ if ((!fC&&!fZ)) goto L_0067009d;
L_0067009b:; BB(0x0067009b);
    /* 0067009b: fst st(1) */ ST(1) = ST(0);
L_0067009d:; BB(0x0067009d);
    /* 0067009d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067009f: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
L_006700a2:; BB(0x006700a2);
    /* 006700a2: movsx eax, word ptr [ebp + 0xbc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xbcu));
    /* 006700a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700ab: je 0x6700bc */ if (fZ) goto L_006700bc;
L_006700ad:; BB(0x006700ad);
    /* 006700ad: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006700b0: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006700b7: jmp 0x670321 */ goto L_00670321;
L_006700bc:; BB(0x006700bc);
    /* 006700bc: movzx eax, byte ptr [ebp + 0xc0] */ r_eax = (u32)R8((u32)(r_ebp+0xc0u));
    /* 006700c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700c5: je 0x6702ce */ if (fZ) goto L_006702ce;
L_006700cb:; BB(0x006700cb);
    /* 006700cb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006700ce: jne 0x6701cb */ if (!fZ) goto L_006701cb;
L_006700d4:; BB(0x006700d4);
    /* 006700d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6700d9u); f_008587a5();
    /* 006700d9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006700dd: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006700e1: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006700e7: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 006700ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006700ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006700f0: jae 0x670179 */ if (!fC) goto L_00670179;
L_006700f6:; BB(0x006700f6);
    /* 006700f6: mov byte ptr [ebp + 0xc0], 2 */ W8((u32)(r_ebp+0xc0u), 0x2u);
    /* 006700fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670102u); f_008587a5();
    /* 00670102: fld dword ptr [0x93a000] */ FPUSH(R_F32((u32)(0x93a000u)));
    /* 00670108: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067010c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670110: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670116: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00670118: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067011a: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0067011e: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670123: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670128: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067012c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670130: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670134: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670138: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067013c: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 00670143: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670148u); f_008587a5();
    /* 00670148: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067014c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670150: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670156: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 0067015c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067015e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067015f: jae 0x67016d */ if (!fC) goto L_0067016d;
L_00670161:; BB(0x00670161);
    /* 00670161: mov byte ptr [ebp + 0xc2], 0 */ W8((u32)(r_ebp+0xc2u), 0x0u);
    /* 00670168: jmp 0x670321 */ goto L_00670321;
L_0067016d:; BB(0x0067016d);
    /* 0067016d: mov byte ptr [ebp + 0xc2], 1 */ W8((u32)(r_ebp+0xc2u), 0x1u);
    /* 00670174: jmp 0x670321 */ goto L_00670321;
L_00670179:; BB(0x00670179);
    /* 00670179: mov byte ptr [ebp + 0xc0], 0 */ W8((u32)(r_ebp+0xc0u), 0x0u);
    /* 00670180: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670185u); f_008587a5();
    /* 00670185: fld dword ptr [0x93a004] */ FPUSH(R_F32((u32)(0x93a004u)));
    /* 0067018b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067018f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670193: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670199: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0067019b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067019d: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006701a1: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 006701a6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006701ab: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006701af: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 006701b3: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006701b7: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 006701bb: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006701bf: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006701c6: jmp 0x670321 */ goto L_00670321;
L_006701cb:; BB(0x006701cb);
    /* 006701cb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006701ce: jne 0x670321 */ if (!fZ) goto L_00670321;
L_006701d4:; BB(0x006701d4);
    /* 006701d4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6701d9u); f_008587a5();
    /* 006701d9: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006701dd: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006701e1: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006701e7: fcomp dword ptr [0x93a008] */ fx_compare(ST(0), R_F32((u32)(0x93a008u))); FPOP();
    /* 006701ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006701ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006701f0: jae 0x670279 */ if (!fC) goto L_00670279;
L_006701f6:; BB(0x006701f6);
    /* 006701f6: mov byte ptr [ebp + 0xc0], 2 */ W8((u32)(r_ebp+0xc0u), 0x2u);
    /* 006701fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670202u); f_008587a5();
    /* 00670202: fld dword ptr [0x93a000] */ FPUSH(R_F32((u32)(0x93a000u)));
    /* 00670208: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067020c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670210: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670216: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00670218: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067021a: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 0067021e: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670223: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670228: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067022c: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670230: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670234: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670238: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067023c: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 00670243: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670248u); f_008587a5();
    /* 00670248: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067024c: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670250: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670256: fcomp dword ptr [0x939ffc] */ fx_compare(ST(0), R_F32((u32)(0x939ffcu))); FPOP();
    /* 0067025c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067025e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067025f: jae 0x67026d */ if (!fC) goto L_0067026d;
L_00670261:; BB(0x00670261);
    /* 00670261: mov byte ptr [ebp + 0xc2], 0 */ W8((u32)(r_ebp+0xc2u), 0x0u);
    /* 00670268: jmp 0x670321 */ goto L_00670321;
L_0067026d:; BB(0x0067026d);
    /* 0067026d: mov byte ptr [ebp + 0xc2], 1 */ W8((u32)(r_ebp+0xc2u), 0x1u);
    /* 00670274: jmp 0x670321 */ goto L_00670321;
L_00670279:; BB(0x00670279);
    /* 00670279: mov byte ptr [ebp + 0xc0], 1 */ W8((u32)(r_ebp+0xc0u), 0x1u);
    /* 00670280: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670285u); f_008587a5();
    /* 00670285: fld dword ptr [0x93a004] */ FPUSH(R_F32((u32)(0x93a004u)));
    /* 0067028b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067028f: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00670293: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670299: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0067029b: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 006702a1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006702a3: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006702a7: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 006702ac: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006702b1: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006702b5: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 006702b9: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006702bd: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 006702c1: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 006702c5: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
    /* 006702cc: jmp 0x670321 */ goto L_00670321;
L_006702ce:; BB(0x006702ce);
    /* 006702ce: mov byte ptr [ebp + 0xc0], 1 */ W8((u32)(r_ebp+0xc0u), 0x1u);
    /* 006702d5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6702dau); f_008587a5();
    /* 006702da: fld dword ptr [0x939ff8] */ FPUSH(R_F32((u32)(0x939ff8u)));
    /* 006702e0: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006702e4: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006702e8: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 006702ee: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006702f0: fmul dword ptr [0x93a068] */ ST(0) = ST(0) * R_F32((u32)(0x93a068u));
    /* 006702f6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006702f8: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 006702fc: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670301: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00670306: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0067030a: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 0067030e: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00670312: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00670316: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0067031a: mov word ptr [ebp + 0xbc], ax */ W16((u32)(r_ebp+0xbcu), (u16)r_eax);
L_00670321:; BB(0x00670321);
    /* 00670321: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x670326u); f_008587a5();
    /* 00670326: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067032a: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 0067032e: fdiv dword ptr [0x93a040] */ ST(0) = ST(0) / R_F32((u32)(0x93a040u));
    /* 00670334: fmul dword ptr [0x939ff0] */ ST(0) = ST(0) * R_F32((u32)(0x939ff0u));
    /* 0067033a: fadd dword ptr [0x939ff4] */ ST(0) = ST(0) + R_F32((u32)(0x939ff4u));
    /* 00670340: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 00670344: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00670349: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067034e: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00670352: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00670356: fistp qword ptr [esp + 0x5c] */ W64((u32)(r_esp+0x5cu), (u64)fx_int64(ST(0))); FPOP();
    /* 0067035a: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 0067035e: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00670362: add word ptr [ebp + 0xbe], ax */ { u32 ad = (u32)(r_ebp+0xbeu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00670369: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067036c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067036d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067036e: ret  */ FN_RET(0x0066fb34); r_esp += 4; return;
L_0067036f:; BB(0x0067036f);
    /* 0067036f: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00670373: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00670377: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0067037b: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0067037e: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 00670381: jmp 0x67006e */ goto L_0067006e;
L_00670386:; BB(0x00670386);
    /* 00670386: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0067038a: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067038e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00670392: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 00670395: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00670399: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 0067039c: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 0067039f: jmp 0x670049 */ goto L_00670049;
L_006703a4:; BB(0x006703a4);
    /* 006703a4: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006703a8: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 006703ac: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 006703b0: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 006703b3: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 006703b7: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 006703ba: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 006703bd: jmp 0x670023 */ goto L_00670023;
}

