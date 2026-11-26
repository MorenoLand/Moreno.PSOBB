#include "protos.h"

void f_004a410c(void) /* sub_4A410C */
{
    FN_ENTER(0x004a410c);
    /* 004a410c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a410d: mov esi, ecx */ r_esi = r_ecx;
    /* 004a410f: mov ecx, dword ptr [esi + 0x72c] */ r_ecx = R32((u32)(r_esi+0x72cu));
    /* 004a4115: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4117: je 0x4a412e */ if (fZ) goto L_004a412e;
L_004a4119:; BB(0x004a4119);
    /* 004a4119: push 0x9a7a00 */ { u32 v = 0x9a7a00u; r_esp -= 4; W32(r_esp, v); }
    /* 004a411e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4a4123u); f_00508db8();
    /* 004a4123: mov ecx, dword ptr [esi + 0x72c] */ r_ecx = R32((u32)(r_esi+0x72cu));
    /* 004a4129: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4a412eu); f_00508f48();
L_004a412e:; BB(0x004a412e);
    /* 004a412e: mov ecx, dword ptr [esi + 0x730] */ r_ecx = R32((u32)(r_esi+0x730u));
    /* 004a4134: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4136: je 0x4a414d */ if (fZ) goto L_004a414d;
L_004a4138:; BB(0x004a4138);
    /* 004a4138: push 0x9a7a00 */ { u32 v = 0x9a7a00u; r_esp -= 4; W32(r_esp, v); }
    /* 004a413d: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4a4142u); f_00508db8();
    /* 004a4142: mov ecx, dword ptr [esi + 0x730] */ r_ecx = R32((u32)(r_esi+0x730u));
    /* 004a4148: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4a414du); f_00508f48();
L_004a414d:; BB(0x004a414d);
    /* 004a414d: mov ecx, dword ptr [esi + 0x734] */ r_ecx = R32((u32)(r_esi+0x734u));
    /* 004a4153: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a4155: je 0x4a416c */ if (fZ) goto L_004a416c;
L_004a4157:; BB(0x004a4157);
    /* 004a4157: push 0x9a7a00 */ { u32 v = 0x9a7a00u; r_esp -= 4; W32(r_esp, v); }
    /* 004a415c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4a4161u); f_00508db8();
    /* 004a4161: mov ecx, dword ptr [esi + 0x734] */ r_ecx = R32((u32)(r_esi+0x734u));
    /* 004a4167: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4a416cu); f_00508f48();
L_004a416c:; BB(0x004a416c);
    /* 004a416c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a416d: ret  */ FN_RET(0x004a410c); r_esp += 4; return;
}

void f_004a4170(void) /* sub_4A4170 */
{
    FN_ENTER(0x004a4170);
    /* 004a4170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a4171: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a4174: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004a4176: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 004a417a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a417d: je 0x4a4412 */ if (fZ) goto L_004a4412;
L_004a4183:; BB(0x004a4183);
    /* 004a4183: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4186: je 0x4a43fa */ if (fZ) goto L_004a43fa;
L_004a418c:; BB(0x004a418c);
    /* 004a418c: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a418f: je 0x4a43fa */ if (fZ) goto L_004a43fa;
L_004a4195:; BB(0x004a4195);
    /* 004a4195: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4198: je 0x4a43fa */ if (fZ) goto L_004a43fa;
L_004a419e:; BB(0x004a419e);
    /* 004a419e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a41a0: jne 0x4a43cf */ if (!fZ) goto L_004a43cf;
L_004a41a6:; BB(0x004a41a6);
    /* 004a41a6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a41a8: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a41adu); f_007aa094();
    /* 004a41ad: mov eax, dword ptr [ebp + 0x6e4] */ r_eax = R32((u32)(r_ebp+0x6e4u));
    /* 004a41b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a41b5: jne 0x4a4319 */ if (!fZ) goto L_004a4319;
L_004a41bb:; BB(0x004a41bb);
    /* 004a41bb: fild dword ptr [ebp + 0x6e8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x6e8u)));
    /* 004a41c1: fld dword ptr [0x903da4] */ FPUSH(R_F32((u32)(0x903da4u)));
    /* 004a41c7: fld dword ptr [0xa475b0] */ FPUSH(R_F32((u32)(0xa475b0u)));
    /* 004a41cd: fsub dword ptr [0x903fd4] */ ST(0) = ST(0) - R_F32((u32)(0x903fd4u));
    /* 004a41d3: fmul dword ptr [0x903da0] */ ST(0) = ST(0) * R_F32((u32)(0x903da0u));
    /* 004a41d9: fld dword ptr [0x903d9c] */ FPUSH(R_F32((u32)(0x903d9cu)));
    /* 004a41df: mov edx, dword ptr [ebp + 0x6e8] */ r_edx = R32((u32)(r_ebp+0x6e8u));
    /* 004a41e5: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 004a41e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a41e9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a41eb: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a41ef: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004a41f3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a41f5: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004a41f9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a41fa: jbe 0x4a4243 */ if ((fC||fZ)) goto L_004a4243;
L_004a41fc:; BB(0x004a41fc);
    /* 004a41fc: fld dword ptr [0x903da8] */ FPUSH(R_F32((u32)(0x903da8u)));
    /* 004a4202: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 004a4206: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004a4208: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a420b: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a420f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a4214: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a4218: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a421c: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a4220: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a4223: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004a4227: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a422cu); f_0082ddd8();
    /* 004a422c: fld dword ptr [0x903fd4] */ FPUSH(R_F32((u32)(0x903fd4u)));
    /* 004a4232: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004a4236: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 004a4238: fchs  */ ST(0) = -ST(0);
    /* 004a423a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a423c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a423e: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004a4241: jmp 0x4a4299 */ goto L_004a4299;
L_004a4243:; BB(0x004a4243);
    /* 004a4243: fld dword ptr [0x903da8] */ FPUSH(R_F32((u32)(0x903da8u)));
    /* 004a4249: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a424b: add edx, 0x27 */ {  u32 a = r_edx; u32 b = 0x27u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a424e: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004a4252: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004a4256: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004a4258: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a425a: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004a425c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a425e: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004a4262: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a4265: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a4269: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a426e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a4272: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a4276: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a427a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a427d: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004a4281: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a4286u); f_0082ddd8();
    /* 004a4286: fld dword ptr [0x903fd4] */ FPUSH(R_F32((u32)(0x903fd4u)));
    /* 004a428c: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004a4290: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 004a4292: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a4294: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a4296: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
L_004a4299:; BB(0x004a4299);
    /* 004a4299: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004a429d: fmul dword ptr [0x903d98] */ ST(0) = ST(0) * R_F32((u32)(0x903d98u));
    /* 004a42a3: fdiv dword ptr [0x903d9c] */ ST(0) = ST(0) / R_F32((u32)(0x903d9cu));
    /* 004a42a9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a42ac: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a42b0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a42b5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a42b9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a42bd: fistp dword ptr [ebp + 0x5c] */ W32((u32)(r_ebp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004a42c0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a42c3: mov eax, dword ptr [ebp + 0x6e8] */ r_eax = R32((u32)(r_ebp+0x6e8u));
    /* 004a42c9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a42cc: mov dword ptr [ebp + 0x6e8], eax */ W32((u32)(r_ebp+0x6e8u), r_eax);
    /* 004a42d2: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a42d5: je 0x4a4401 */ if (fZ) goto L_004a4401;
L_004a42db:; BB(0x004a42db);
    /* 004a42db: cmp eax, 0x27 */ {  u32 a = r_eax; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a42de: jle 0x4a42f9 */ if ((fZ||fS!=fO)) goto L_004a42f9;
L_004a42e0:; BB(0x004a42e0);
    /* 004a42e0: mov eax, dword ptr [0xa475b0] */ r_eax = R32((u32)(0xa475b0u));
    /* 004a42e5: mov dword ptr [ebp + 0x5c], 0 */ W32((u32)(r_ebp+0x5cu), 0x0u);
    /* 004a42ec: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 004a42ef: mov dword ptr [ebp + 0x6e4], 1 */ W32((u32)(r_ebp+0x6e4u), 0x1u);
L_004a42f9:; BB(0x004a42f9);
    /* 004a42f9: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a42fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a4300: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a4305u); f_007aaa30();
    /* 004a4305: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4307: je 0x4a43b0 */ if (fZ) goto L_004a43b0;
L_004a430d:; BB(0x004a430d);
    /* 004a430d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a430f: call 0x4a15fc */ r_esp -= 4; W32(r_esp, 0x4a4314u); f_004a15fc();
    /* 004a4314: jmp 0x4a43b0 */ goto L_004a43b0;
L_004a4319:; BB(0x004a4319);
    /* 004a4319: fldz  */ FPUSH(0.0);
    /* 004a431b: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a431f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4322: jne 0x4a43b0 */ if (!fZ) goto L_004a43b0;
L_004a4328:; BB(0x004a4328);
    /* 004a4328: fld dword ptr [0x903dac] */ FPUSH(R_F32((u32)(0x903dacu)));
    /* 004a432e: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a4332: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a4334: call 0x7aabd8 */ r_esp -= 4; W32(r_esp, 0x4a4339u); f_007aabd8();
    /* 004a4339: fld dword ptr [0x903d90] */ FPUSH(R_F32((u32)(0x903d90u)));
    /* 004a433f: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004a4341: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a4343: fmul dword ptr [0x903da8] */ ST(0) = ST(0) * R_F32((u32)(0x903da8u));
    /* 004a4349: fld dword ptr [0xa475b0] */ FPUSH(R_F32((u32)(0xa475b0u)));
    /* 004a434f: fsub dword ptr [0x903fd8] */ ST(0) = ST(0) - R_F32((u32)(0x903fd8u));
    /* 004a4355: fld dword ptr [ebp + 0xc4] */ FPUSH(R_F32((u32)(r_ebp+0xc4u)));
    /* 004a435b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a435d: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004a4361: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 004a4363: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004a4365: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a4368: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a436c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a4371: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a4375: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a4379: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a437d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a4380: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004a4384: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4a4389u); f_0082dcbc();
    /* 004a4389: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004a438d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a438f: fsubr dword ptr [0xa475b0] */ ST(0) = R_F32((u32)(0xa475b0u)) - ST(0);
    /* 004a4395: fld dword ptr [ebp + 0xc8] */ FPUSH(R_F32((u32)(r_ebp+0xc8u)));
    /* 004a439b: fcomp dword ptr [0x903db0] */ fx_compare(ST(0), R_F32((u32)(0x903db0u))); FPOP();
    /* 004a43a1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a43a3: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004a43a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a43a7: ja 0x4a43b0 */ if ((!fC&&!fZ)) goto L_004a43b0;
L_004a43a9:; BB(0x004a43a9);
    /* 004a43a9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a43ab: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a43b0u); f_004a7e20();
L_004a43b0:; BB(0x004a43b0);
    /* 004a43b0: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 004a43b3: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a43b6: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004a43ba: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004a43bd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a43bf: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004a43c3: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a43c8u); f_004a15ac();
    /* 004a43c8: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a43cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a43cc: ret 4 */ FN_RET(0x004a4170); r_esp += 8; return;
L_004a43cf:; BB(0x004a43cf);
    /* 004a43cf: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a43d2: jne 0x4a43fa */ if (!fZ) goto L_004a43fa;
L_004a43d4:; BB(0x004a43d4);
    /* 004a43d4: mov eax, dword ptr [ebp + 0x4c8] */ r_eax = R32((u32)(r_ebp+0x4c8u));
    /* 004a43da: and eax, 0xfffffefb */ {  u32 a = r_eax; u32 b = 0xfffffefbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a43df: mov dword ptr [ebp + 0x4c8], eax */ W32((u32)(r_ebp+0x4c8u), r_eax);
    /* 004a43e5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a43e7: call 0x4a8a24 */ r_esp -= 4; W32(r_esp, 0x4a43ecu); f_004a8a24();
    /* 004a43ec: mov dword ptr [ebp + 0x3c], 0x43340000 */ W32((u32)(r_ebp+0x3cu), 0x43340000u);
    /* 004a43f3: mov dword ptr [ebp + 0x5c], 0 */ W32((u32)(r_ebp+0x5cu), 0x0u);
L_004a43fa:; BB(0x004a43fa);
    /* 004a43fa: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a43fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a43fe: ret 4 */ FN_RET(0x004a4170); r_esp += 8; return;
L_004a4401:; BB(0x004a4401);
    /* 004a4401: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004a4406: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004a440d: jmp 0x4a42f9 */ goto L_004a42f9;
L_004a4412:; BB(0x004a4412);
    /* 004a4412: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004a4415: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004a441a: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004a4421: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a4423: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a4429u); call_ind(t); }
    /* 004a4429: mov eax, dword ptr [ebp + 0x4c8] */ r_eax = R32((u32)(r_ebp+0x4c8u));
    /* 004a442f: mov dword ptr [ebp + 0x4ec], 1 */ W32((u32)(r_ebp+0x4ecu), 0x1u);
    /* 004a4439: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a443c: mov dword ptr [ebp + 0x4c8], eax */ W32((u32)(r_ebp+0x4c8u), r_eax);
    /* 004a4442: mov dword ptr [ebp + 0x3c], 0x43340000 */ W32((u32)(r_ebp+0x3cu), 0x43340000u);
    /* 004a4449: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a444b: call 0x4a410c */ r_esp -= 4; W32(r_esp, 0x4a4450u); f_004a410c();
    /* 004a4450: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a4452: mov dword ptr [ebp + 0x6e4], eax */ W32((u32)(r_ebp+0x6e4u), r_eax);
    /* 004a4458: mov dword ptr [ebp + 0x6e8], eax */ W32((u32)(r_ebp+0x6e8u), r_eax);
    /* 004a445e: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a4461: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a4462: ret 4 */ FN_RET(0x004a4170); r_esp += 8; return;
}

void f_004a4468(void) /* sub_4A4468 */
{
    FN_ENTER(0x004a4468);
    /* 004a4468: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a4469: mov edi, ecx */ r_edi = r_ecx;
    /* 004a446b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004a446f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4472: je 0x4a44a4 */ if (fZ) goto L_004a44a4;
L_004a4474:; BB(0x004a4474);
    /* 004a4474: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a4477: je 0x4a44a0 */ if (fZ) goto L_004a44a0;
L_004a4479:; BB(0x004a4479);
    /* 004a4479: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a447c: je 0x4a44a0 */ if (fZ) goto L_004a44a0;
L_004a447e:; BB(0x004a447e);
    /* 004a447e: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a4481: je 0x4a44a0 */ if (fZ) goto L_004a44a0;
L_004a4483:; BB(0x004a4483);
    /* 004a4483: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a4485: jne 0x4a44a0 */ if (!fZ) goto L_004a44a0;
L_004a4487:; BB(0x004a4487);
    /* 004a4487: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4489: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a448eu); f_007aa094();
    /* 004a448e: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 004a4494: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a4497: jne 0x4a44a0 */ if (!fZ) goto L_004a44a0;
L_004a4499:; BB(0x004a4499);
    /* 004a4499: mov ecx, edi */ r_ecx = r_edi;
    /* 004a449b: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a44a0u); f_004a7e20();
L_004a44a0:; BB(0x004a44a0);
    /* 004a44a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a44a1: ret 4 */ FN_RET(0x004a4468); r_esp += 8; return;
L_004a44a4:; BB(0x004a44a4);
    /* 004a44a4: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004a44a6: mov eax, 0xa */ r_eax = 0xau;
    /* 004a44ab: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 004a44b2: mov ecx, edi */ r_ecx = r_edi;
    /* 004a44b4: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a44bau); call_ind(t); }
    /* 004a44ba: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a44bf: mov dword ptr [edi + 0x4ec], 0 */ W32((u32)(r_edi+0x4ecu), 0x0u);
    /* 004a44c9: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 004a44cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a44cd: ret 4 */ FN_RET(0x004a4468); r_esp += 8; return;
}

void f_004a44d0(void) /* sub_4A44D0 */
{
    FN_ENTER(0x004a44d0);
    /* 004a44d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a44d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a44d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a44d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a44d4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a44d7: mov edi, ecx */ r_edi = r_ecx;
    /* 004a44d9: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 004a44dd: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a44e0: je 0x4a461a */ if (fZ) goto L_004a461a;
L_004a44e6:; BB(0x004a44e6);
    /* 004a44e6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a44e9: je 0x4a4610 */ if (fZ) goto L_004a4610;
L_004a44ef:; BB(0x004a44ef);
    /* 004a44ef: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a44f2: je 0x4a4610 */ if (fZ) goto L_004a4610;
L_004a44f8:; BB(0x004a44f8);
    /* 004a44f8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a44fb: je 0x4a4609 */ if (fZ) goto L_004a4609;
L_004a4501:; BB(0x004a4501);
    /* 004a4501: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4503: jne 0x4a45eb */ if (!fZ) goto L_004a45eb;
L_004a4509:; BB(0x004a4509);
    /* 004a4509: mov ecx, edi */ r_ecx = r_edi;
    /* 004a450b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a4510u); f_007aa094();
    /* 004a4510: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4512: call 0x4a465c */ r_esp -= 4; W32(r_esp, 0x4a4517u); f_004a465c();
    /* 004a4517: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4519: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x4a451eu); f_00521410();
    /* 004a451e: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4520: call 0x4a46bc */ r_esp -= 4; W32(r_esp, 0x4a4525u); f_004a46bc();
    /* 004a4525: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4527: call 0x4a47a8 */ r_esp -= 4; W32(r_esp, 0x4a452cu); f_004a47a8();
    /* 004a452c: mov ecx, edi */ r_ecx = r_edi;
    /* 004a452e: call 0x7aabd8 */ r_esp -= 4; W32(r_esp, 0x4a4533u); f_007aabd8();
    /* 004a4533: fcom dword ptr [0x903d78] */ fx_compare(ST(0), R_F32((u32)(0x903d78u))); 
    /* 004a4539: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a453b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a453c: jb 0x4a4549 */ if (fC) goto L_004a4549;
L_004a453e:; BB(0x004a453e);
    /* 004a453e: fcom dword ptr [0x903d74] */ fx_compare(ST(0), R_F32((u32)(0x903d74u))); 
    /* 004a4544: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a4546: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a4547: jb 0x4a456c */ if (fC) goto L_004a456c;
L_004a4549:; BB(0x004a4549);
    /* 004a4549: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a454b: fld dword ptr [0x903d84] */ FPUSH(R_F32((u32)(0x903d84u)));
    /* 004a4551: mov ebx, dword ptr [0xa475bc] */ r_ebx = R32((u32)(0xa475bcu));
    /* 004a4557: mov eax, dword ptr [0xa475c0] */ r_eax = R32((u32)(0xa475c0u));
    /* 004a455c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004a4560: mov ebp, 0x3f666666 */ r_ebp = 0x3f666666u;
    /* 004a4565: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a4568: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004a456a: jmp 0x4a4590 */ goto L_004a4590;
L_004a456c:; BB(0x004a456c);
    /* 004a456c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a456e: fld dword ptr [0x903d8c] */ FPUSH(R_F32((u32)(0x903d8cu)));
    /* 004a4574: mov ebx, dword ptr [0xa475b4] */ r_ebx = R32((u32)(0xa475b4u));
    /* 004a457a: mov eax, dword ptr [0xa475b8] */ r_eax = R32((u32)(0xa475b8u));
    /* 004a457f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004a4583: mov ebp, 0x3f5c28f6 */ r_ebp = 0x3f5c28f6u;
    /* 004a4588: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a458b: mov esi, 0xd0 */ r_esi = 0xd0u;
L_004a4590:; BB(0x004a4590);
    /* 004a4590: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4595: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4597: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a459cu); f_007aaa30();
    /* 004a459c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a459e: je 0x4a45b4 */ if (fZ) goto L_004a45b4;
L_004a45a0:; BB(0x004a45a0);
    /* 004a45a0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004a45a4: fadd dword ptr [0x903d70] */ ST(0) = ST(0) + R_F32((u32)(0x903d70u));
    /* 004a45aa: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004a45ae: add esi, 0x500 */ {  u32 a = r_esi; u32 b = 0x500u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004a45b4:; BB(0x004a45b4);
    /* 004a45b4: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004a45b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a45b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a45b9: mov ecx, edi */ r_ecx = r_edi;
    /* 004a45bb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a45bc: call 0x4a4814 */ r_esp -= 4; W32(r_esp, 0x4a45c1u); f_004a4814();
    /* 004a45c1: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 004a45c4: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a45c7: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004a45cb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004a45ce: mov ecx, edi */ r_ecx = r_edi;
    /* 004a45d0: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004a45d4: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a45d9u); f_004a15ac();
    /* 004a45d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a45da: mov ecx, edi */ r_ecx = r_edi;
    /* 004a45dc: call 0x4a1b84 */ r_esp -= 4; W32(r_esp, 0x4a45e1u); f_004a1b84();
    /* 004a45e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a45e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a45e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a45e6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a45e7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a45e8: ret 4 */ FN_RET(0x004a44d0); r_esp += 8; return;
L_004a45eb:; BB(0x004a45eb);
    /* 004a45eb: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a45ee: jne 0x4a4610 */ if (!fZ) goto L_004a4610;
L_004a45f0:; BB(0x004a45f0);
    /* 004a45f0: mov eax, dword ptr [edi + 0x4c8] */ r_eax = R32((u32)(r_edi+0x4c8u));
    /* 004a45f6: and eax, 0xffffffcf */ {  u32 a = r_eax; u32 b = 0xffffffcfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a45f9: mov dword ptr [edi + 0x4c8], eax */ W32((u32)(r_edi+0x4c8u), r_eax);
    /* 004a45ff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a4602: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a4603: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a4604: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a4605: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a4606: ret 4 */ FN_RET(0x004a44d0); r_esp += 8; return;
L_004a4609:; BB(0x004a4609);
    /* 004a4609: mov ecx, edi */ r_ecx = r_edi;
    /* 004a460b: call 0x4a12dc */ r_esp -= 4; W32(r_esp, 0x4a4610u); f_004a12dc();
L_004a4610:; BB(0x004a4610);
    /* 004a4610: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a4613: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a4614: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a4615: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a4616: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a4617: ret 4 */ FN_RET(0x004a44d0); r_esp += 8; return;
L_004a461a:; BB(0x004a461a);
    /* 004a461a: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004a461c: mov eax, 0xb */ r_eax = 0xbu;
    /* 004a4621: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 004a4628: mov ecx, edi */ r_ecx = r_edi;
    /* 004a462a: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a4630u); call_ind(t); }
    /* 004a4630: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a4635: mov edx, dword ptr [edi + 0x4c8] */ r_edx = R32((u32)(r_edi+0x4c8u));
    /* 004a463b: mov dword ptr [edi + 0x4ec], 0 */ W32((u32)(r_edi+0x4ecu), 0x0u);
    /* 004a4645: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 004a4648: or edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004a464b: mov dword ptr [edi + 0x4c8], edx */ W32((u32)(r_edi+0x4c8u), r_edx);
    /* 004a4651: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a4654: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a4655: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a4656: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a4657: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a4658: ret 4 */ FN_RET(0x004a44d0); r_esp += 8; return;
}

void f_004a465c(void) /* sub_4A465C */
{
    FN_ENTER(0x004a465c);
    /* 004a465c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a465d: mov edi, ecx */ r_edi = r_ecx;
    /* 004a465f: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4661: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4666: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a466bu); f_007aaa30();
    /* 004a466b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a466d: jne 0x4a469f */ if (!fZ) goto L_004a469f;
L_004a466f:; BB(0x004a466f);
    /* 004a466f: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4674: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4676: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a467bu); f_007aaa30();
    /* 004a467b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a467d: jne 0x4a469f */ if (!fZ) goto L_004a469f;
L_004a467f:; BB(0x004a467f);
    /* 004a467f: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4684: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4686: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a468bu); f_007aaa30();
    /* 004a468b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a468d: jne 0x4a469f */ if (!fZ) goto L_004a469f;
L_004a468f:; BB(0x004a468f);
    /* 004a468f: push 0x41300000 */ { u32 v = 0x41300000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4694: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4696: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a469bu); f_007aaa30();
    /* 004a469b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a469d: je 0x4a46b7 */ if (fZ) goto L_004a46b7;
L_004a469f:; BB(0x004a469f);
    /* 004a469f: add edi, 0x568 */ {  u32 a = r_edi; u32 b = 0x568u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a46a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a46a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a46a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a46a9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a46aa: push 0x3a2 */ { u32 v = 0x3a2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a46af: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a46b4u); f_00814298();
    /* 004a46b4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004a46b7:; BB(0x004a46b7);
    /* 004a46b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a46b8: ret  */ FN_RET(0x004a465c); r_esp += 4; return;
}

void f_004a46bc(void) /* sub_4A46BC */
{
    FN_ENTER(0x004a46bc);
    /* 004a46bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a46bd: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a46c0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004a46c2: fld dword ptr [ebp + 0x44c] */ FPUSH(R_F32((u32)(r_ebp+0x44cu)));
    /* 004a46c8: fld dword ptr [ebp + 0x3c8] */ FPUSH(R_F32((u32)(r_ebp+0x3c8u)));
    /* 004a46ce: mov eax, dword ptr [0x9038b4] */ r_eax = R32((u32)(0x9038b4u));
    /* 004a46d3: mov edx, dword ptr [0x9038c4] */ r_edx = R32((u32)(0x9038c4u));
    /* 004a46d9: fld dword ptr [0x903d5c] */ FPUSH(R_F32((u32)(0x903d5cu)));
    /* 004a46df: fld dword ptr [ebp + 0x450] */ FPUSH(R_F32((u32)(r_ebp+0x450u)));
    /* 004a46e5: fld dword ptr [ebp + 0x3cc] */ FPUSH(R_F32((u32)(r_ebp+0x3ccu)));
    /* 004a46eb: fld dword ptr [ebp + 0x454] */ FPUSH(R_F32((u32)(r_ebp+0x454u)));
    /* 004a46f1: fld dword ptr [ebp + 0x3d0] */ FPUSH(R_F32((u32)(r_ebp+0x3d0u)));
    /* 004a46f7: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 004a46f9: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004a46fb: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004a46fd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a46ff: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 004a4701: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004a4703: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a4705: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 004a4707: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 004a4709: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004a470d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a470f: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 004a4713: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a4715: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 004a4717: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a4719: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a471b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 004a471f: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 004a4727: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a472a: mov dword ptr [esp + 8], 0x420c0000 */ W32((u32)(r_esp+0x8u), 0x420c0000u);
    /* 004a4732: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a4734: mov dword ptr [esp + 0xc], 0x41200000 */ W32((u32)(r_esp+0xcu), 0x41200000u);
    /* 004a473c: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004a4740: mov edx, dword ptr [ebp + 0x580] */ r_edx = R32((u32)(r_ebp+0x580u));
    /* 004a4746: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004a4749: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a474b: jle 0x4a4765 */ if ((fZ||fS!=fO)) goto L_004a4765;
L_004a474d:; BB(0x004a474d);
    /* 004a474d: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
L_004a4751:; BB(0x004a4751);
    /* 004a4751: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 004a4753: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004a4756: mov dword ptr [edi + eax*4], ecx */ W32((u32)(r_edi+r_eax*4), r_ecx);
    /* 004a4759: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a475c: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a475f: jl 0x4a4751 */ if ((fS!=fO)) goto L_004a4751;
L_004a4761:; BB(0x004a4761);
    /* 004a4761: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
L_004a4765:; BB(0x004a4765);
    /* 004a4765: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a4767: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4768: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004a476b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a476d: push dword ptr [0xa47658] */ { u32 v = R32((u32)(0xa47658u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a4773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4774: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4a4779u); f_00520c70();
    /* 004a4779: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 004a477d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a4780: push dword ptr [ebp + 0x580] */ { u32 v = R32((u32)(r_ebp+0x580u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a4786: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a4788: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4789: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a478a: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4a478fu); f_0051fdf8();
    /* 004a478f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a4791: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4792: push dword ptr [0xa47648] */ { u32 v = R32((u32)(0xa47648u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a4798: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4799: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a479b: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4a47a0u); f_00520c70();
    /* 004a47a0: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a47a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a47a4: ret  */ FN_RET(0x004a46bc); r_esp += 4; return;
}

void f_004a47a8(void) /* sub_4A47A8 */
{
    FN_ENTER(0x004a47a8);
    /* 004a47a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a47a9: mov esi, ecx */ r_esi = r_ecx;
    /* 004a47ab: push dword ptr [0xa475c4] */ { u32 v = R32((u32)(0xa475c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a47b1: mov ecx, esi */ r_ecx = r_esi;
    /* 004a47b3: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a47b8u); f_007aaa30();
    /* 004a47b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a47ba: je 0x4a47c5 */ if (fZ) goto L_004a47c5;
L_004a47bc:; BB(0x004a47bc);
    /* 004a47bc: mov ecx, esi */ r_ecx = r_esi;
    /* 004a47be: call 0x4a121c */ r_esp -= 4; W32(r_esp, 0x4a47c3u); f_004a121c();
    /* 004a47c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a47c4: ret  */ FN_RET(0x004a47a8); r_esp += 4; return;
L_004a47c5:; BB(0x004a47c5);
    /* 004a47c5: push dword ptr [0xa475c8] */ { u32 v = R32((u32)(0xa475c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a47cb: mov ecx, esi */ r_ecx = r_esi;
    /* 004a47cd: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a47d2u); f_007aaa30();
    /* 004a47d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a47d4: je 0x4a47df */ if (fZ) goto L_004a47df;
L_004a47d6:; BB(0x004a47d6);
    /* 004a47d6: mov ecx, esi */ r_ecx = r_esi;
    /* 004a47d8: call 0x4a115c */ r_esp -= 4; W32(r_esp, 0x4a47ddu); f_004a115c();
    /* 004a47dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a47de: ret  */ FN_RET(0x004a47a8); r_esp += 4; return;
L_004a47df:; BB(0x004a47df);
    /* 004a47df: push dword ptr [0xa475cc] */ { u32 v = R32((u32)(0xa475ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 004a47e5: mov ecx, esi */ r_ecx = r_esi;
    /* 004a47e7: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a47ecu); f_007aaa30();
    /* 004a47ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a47ee: je 0x4a47f9 */ if (fZ) goto L_004a47f9;
L_004a47f0:; BB(0x004a47f0);
    /* 004a47f0: mov ecx, esi */ r_ecx = r_esi;
    /* 004a47f2: call 0x4a109c */ r_esp -= 4; W32(r_esp, 0x4a47f7u); f_004a109c();
    /* 004a47f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a47f8: ret  */ FN_RET(0x004a47a8); r_esp += 4; return;
L_004a47f9:; BB(0x004a47f9);
    /* 004a47f9: push dword ptr [0xa475d0] */ { u32 v = R32((u32)(0xa475d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a47ff: mov ecx, esi */ r_ecx = r_esi;
    /* 004a4801: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a4806u); f_007aaa30();
    /* 004a4806: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a4808: je 0x4a4811 */ if (fZ) goto L_004a4811;
L_004a480a:; BB(0x004a480a);
    /* 004a480a: mov ecx, esi */ r_ecx = r_esi;
    /* 004a480c: call 0x4a0fdc */ r_esp -= 4; W32(r_esp, 0x4a4811u); f_004a0fdc();
L_004a4811:; BB(0x004a4811);
    /* 004a4811: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a4812: ret  */ FN_RET(0x004a47a8); r_esp += 4; return;
}

void f_004a4814(void) /* sub_4A4814 */
{
    FN_ENTER(0x004a4814);
    /* 004a4814: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a4817: fild dword ptr [ecx + 0x488] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x488u)));
    /* 004a481d: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 004a4821: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004a4825: fld dword ptr [ecx + 0x47c] */ FPUSH(R_F32((u32)(r_ecx+0x47cu)));
    /* 004a482b: fld dword ptr [ecx + 0x480] */ FPUSH(R_F32((u32)(r_ecx+0x480u)));
    /* 004a4831: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 004a4835: fld dword ptr [ecx + 0x484] */ FPUSH(R_F32((u32)(r_ecx+0x484u)));
    /* 004a483b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004a483d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a4840: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a4844: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a4849: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a484d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a4851: fistp dword ptr [ecx + 0x488] */ W32((u32)(r_ecx+0x488u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a4857: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a485a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a485c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004a485e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a4860: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004a4862: fstp dword ptr [ecx + 0x480] */ W_F32((u32)(r_ecx+0x480u), ST(0)); FPOP();
    /* 004a4868: fstp dword ptr [ecx + 0x47c] */ W_F32((u32)(r_ecx+0x47cu), ST(0)); FPOP();
    /* 004a486e: fstp dword ptr [ecx + 0x484] */ W_F32((u32)(r_ecx+0x484u), ST(0)); FPOP();
    /* 004a4874: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a4877: ret 0xc */ FN_RET(0x004a4814); r_esp += 16; return;
}

void f_004a487c(void) /* sub_4A487C */
{
    FN_ENTER(0x004a487c);
    /* 004a487c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a487d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a487e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a487f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4880: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a4883: mov edi, ecx */ r_edi = r_ecx;
    /* 004a4885: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 004a4889: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a488c: je 0x4a49c5 */ if (fZ) goto L_004a49c5;
L_004a4892:; BB(0x004a4892);
    /* 004a4892: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4895: je 0x4a49bb */ if (fZ) goto L_004a49bb;
L_004a489b:; BB(0x004a489b);
    /* 004a489b: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a489e: je 0x4a49bb */ if (fZ) goto L_004a49bb;
L_004a48a4:; BB(0x004a48a4);
    /* 004a48a4: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a48a7: je 0x4a49bb */ if (fZ) goto L_004a49bb;
L_004a48ad:; BB(0x004a48ad);
    /* 004a48ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a48af: jne 0x4a49a7 */ if (!fZ) goto L_004a49a7;
L_004a48b5:; BB(0x004a48b5);
    /* 004a48b5: mov ecx, edi */ r_ecx = r_edi;
    /* 004a48b7: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a48bcu); f_007aa094();
    /* 004a48bc: mov ecx, edi */ r_ecx = r_edi;
    /* 004a48be: call 0x7aabd8 */ r_esp -= 4; W32(r_esp, 0x4a48c3u); f_007aabd8();
    /* 004a48c3: fcomp dword ptr [0x903d40] */ fx_compare(ST(0), R_F32((u32)(0x903d40u))); FPOP();
    /* 004a48c9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a48cb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004a48cd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a48ce: jae 0x4a48e6 */ if (!fC) goto L_004a48e6;
L_004a48d0:; BB(0x004a48d0);
    /* 004a48d0: mov ebp, dword ptr [0xa475bc] */ r_ebp = R32((u32)(0xa475bcu));
    /* 004a48d6: mov ebx, dword ptr [0xa475c0] */ r_ebx = R32((u32)(0xa475c0u));
    /* 004a48dc: mov eax, 0x3f666666 */ r_eax = 0x3f666666u;
    /* 004a48e1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a48e4: jmp 0x4a48fa */ goto L_004a48fa;
L_004a48e6:; BB(0x004a48e6);
    /* 004a48e6: mov ebp, dword ptr [0xa475b4] */ r_ebp = R32((u32)(0xa475b4u));
    /* 004a48ec: mov ebx, dword ptr [0xa475b8] */ r_ebx = R32((u32)(0xa475b8u));
    /* 004a48f2: mov eax, 0x3f5c28f6 */ r_eax = 0x3f5c28f6u;
    /* 004a48f7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
L_004a48fa:; BB(0x004a48fa);
    /* 004a48fa: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a48ff: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4901: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a4906u); f_007aaa30();
    /* 004a4906: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4908: je 0x4a490f */ if (fZ) goto L_004a490f;
L_004a490a:; BB(0x004a490a);
    /* 004a490a: mov esi, 0x41300000 */ r_esi = 0x41300000u;
L_004a490f:; BB(0x004a490f);
    /* 004a490f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a4911: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4913: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004a4917: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4918: call 0x4a4814 */ r_esp -= 4; W32(r_esp, 0x4a491du); f_004a4814();
    /* 004a491d: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a4920: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a4921: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4923: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a4928u); f_004a15ac();
    /* 004a4928: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a492d: mov ecx, edi */ r_ecx = r_edi;
    /* 004a492f: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a4934u); f_007aaa30();
    /* 004a4934: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4936: je 0x4a4985 */ if (fZ) goto L_004a4985;
L_004a4938:; BB(0x004a4938);
    /* 004a4938: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 004a493b: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 004a493e: mov ebx, dword ptr [edi + 0x5f8] */ r_ebx = R32((u32)(r_edi+0x5f8u));
    /* 004a4944: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004a4948: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004a494c: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 004a4954: lea ebp, [esp + 4] */ r_ebp = (u32)(r_esp+0x4u);
    /* 004a4958: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a495a: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a495d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a495e: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a4963u); f_0050b7a4();
    /* 004a4963: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4966: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4968: call 0x4a1f34 */ r_esp -= 4; W32(r_esp, 0x4a496du); f_004a1f34();
    /* 004a496d: lea edx, [edi + 0x568] */ r_edx = (u32)(r_edi+0x568u);
    /* 004a4973: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a4975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4976: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4977: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4978: push 0x3a7 */ { u32 v = 0x3a7u; r_esp -= 4; W32(r_esp, v); }
    /* 004a497d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a4982u); f_00814298();
    /* 004a4982: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a4985:; BB(0x004a4985);
    /* 004a4985: fld dword ptr [edi + 0xc8] */ FPUSH(R_F32((u32)(r_edi+0xc8u)));
    /* 004a498b: fcomp dword ptr [0x903d58] */ fx_compare(ST(0), R_F32((u32)(0x903d58u))); FPOP();
    /* 004a4991: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a4993: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a4994: ja 0x4a49bb */ if ((!fC&&!fZ)) goto L_004a49bb;
L_004a4996:; BB(0x004a4996);
    /* 004a4996: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4998: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a499du); f_004a7e20();
    /* 004a499d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a49a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a49a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a49a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a49a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a49a4: ret 4 */ FN_RET(0x004a487c); r_esp += 8; return;
L_004a49a7:; BB(0x004a49a7);
    /* 004a49a7: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a49aa: jne 0x4a49bb */ if (!fZ) goto L_004a49bb;
L_004a49ac:; BB(0x004a49ac);
    /* 004a49ac: mov eax, dword ptr [edi + 0x4c8] */ r_eax = R32((u32)(r_edi+0x4c8u));
    /* 004a49b2: and eax, 0xffffffcf */ {  u32 a = r_eax; u32 b = 0xffffffcfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a49b5: mov dword ptr [edi + 0x4c8], eax */ W32((u32)(r_edi+0x4c8u), r_eax);
L_004a49bb:; BB(0x004a49bb);
    /* 004a49bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a49be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a49bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a49c0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a49c1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a49c2: ret 4 */ FN_RET(0x004a487c); r_esp += 8; return;
L_004a49c5:; BB(0x004a49c5);
    /* 004a49c5: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004a49c7: mov eax, 0xc */ r_eax = 0xcu;
    /* 004a49cc: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 004a49d3: mov ecx, edi */ r_ecx = r_edi;
    /* 004a49d5: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a49dbu); call_ind(t); }
    /* 004a49db: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a49e0: mov edx, dword ptr [edi + 0x4c8] */ r_edx = R32((u32)(r_edi+0x4c8u));
    /* 004a49e6: mov dword ptr [edi + 0x4ec], 0 */ W32((u32)(r_edi+0x4ecu), 0x0u);
    /* 004a49f0: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 004a49f3: or edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004a49f6: mov dword ptr [edi + 0x4c8], edx */ W32((u32)(r_edi+0x4c8u), r_edx);
    /* 004a49fc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a49ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a4a00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a4a01: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a4a02: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a4a03: ret 4 */ FN_RET(0x004a487c); r_esp += 8; return;
}

void f_004a4a08(void) /* sub_4A4A08 */
{
    FN_ENTER(0x004a4a08);
    /* 004a4a08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4a09: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a4a0b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004a4a0f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4a12: je 0x4a4ab9 */ if (fZ) goto L_004a4ab9;
L_004a4a18:; BB(0x004a4a18);
    /* 004a4a18: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a4a1b: je 0x4a4ab5 */ if (fZ) goto L_004a4ab5;
L_004a4a21:; BB(0x004a4a21);
    /* 004a4a21: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a4a24: je 0x4a4ab5 */ if (fZ) goto L_004a4ab5;
L_004a4a2a:; BB(0x004a4a2a);
    /* 004a4a2a: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a4a2d: je 0x4a4ab5 */ if (fZ) goto L_004a4ab5;
L_004a4a33:; BB(0x004a4a33);
    /* 004a4a33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4a35: jne 0x4a4aa5 */ if (!fZ) goto L_004a4aa5;
L_004a4a37:; BB(0x004a4a37);
    /* 004a4a37: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a4a39: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a4a3eu); f_007aa094();
    /* 004a4a3e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a4a40: call 0x4a4ae8 */ r_esp -= 4; W32(r_esp, 0x4a4a45u); f_004a4ae8();
    /* 004a4a45: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4a4a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a4a4c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a4a51u); f_007aaa30();
    /* 004a4a51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4a53: je 0x4a4a67 */ if (fZ) goto L_004a4a67;
L_004a4a55:; BB(0x004a4a55);
    /* 004a4a55: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a4a58: mov ecx, dword ptr [ebx + 0x584] */ r_ecx = R32((u32)(r_ebx+0x584u));
    /* 004a4a5e: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 004a4a61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4a62: call 0x4a9174 */ r_esp -= 4; W32(r_esp, 0x4a4a67u); f_004a9174();
L_004a4a67:; BB(0x004a4a67);
    /* 004a4a67: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4a6c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a4a6e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a4a73u); f_007aaa30();
    /* 004a4a73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4a75: je 0x4a4a8f */ if (fZ) goto L_004a4a8f;
L_004a4a77:; BB(0x004a4a77);
    /* 004a4a77: lea edx, [ebx + 0x568] */ r_edx = (u32)(r_ebx+0x568u);
    /* 004a4a7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a4a7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4a80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4a81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4a82: push 0x3a8 */ { u32 v = 0x3a8u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4a87: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a4a8cu); f_00814298();
    /* 004a4a8c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a4a8f:; BB(0x004a4a8f);
    /* 004a4a8f: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
    /* 004a4a95: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a4a98: jne 0x4a4ab5 */ if (!fZ) goto L_004a4ab5;
L_004a4a9a:; BB(0x004a4a9a);
    /* 004a4a9a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a4a9c: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a4aa1u); f_004a7e20();
    /* 004a4aa1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a4aa2: ret 4 */ FN_RET(0x004a4a08); r_esp += 8; return;
L_004a4aa5:; BB(0x004a4aa5);
    /* 004a4aa5: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a4aa8: jne 0x4a4ab5 */ if (!fZ) goto L_004a4ab5;
L_004a4aaa:; BB(0x004a4aaa);
    /* 004a4aaa: mov ecx, dword ptr [ebx + 0x584] */ r_ecx = R32((u32)(r_ebx+0x584u));
    /* 004a4ab0: call 0x4a91fc */ r_esp -= 4; W32(r_esp, 0x4a4ab5u); f_004a91fc();
L_004a4ab5:; BB(0x004a4ab5);
    /* 004a4ab5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a4ab6: ret 4 */ FN_RET(0x004a4a08); r_esp += 8; return;
L_004a4ab9:; BB(0x004a4ab9);
    /* 004a4ab9: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004a4abb: mov eax, 0xd */ r_eax = 0xdu;
    /* 004a4ac0: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004a4ac7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a4ac9: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a4acfu); call_ind(t); }
    /* 004a4acf: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a4ad4: mov dword ptr [ebx + 0x4ec], 0 */ W32((u32)(r_ebx+0x4ecu), 0x0u);
    /* 004a4ade: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 004a4ae1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a4ae2: ret 4 */ FN_RET(0x004a4a08); r_esp += 8; return;
}

void f_004a4ae8(void) /* sub_4A4AE8 */
{
    FN_ENTER(0x004a4ae8);
    /* 004a4ae8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a4ae9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a4aea: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a4aed: mov edi, ecx */ r_edi = r_ecx;
    /* 004a4aef: mov edx, dword ptr [0x9038c8] */ r_edx = R32((u32)(0x9038c8u));
    /* 004a4af5: mov eax, dword ptr [0x9038d8] */ r_eax = R32((u32)(0x9038d8u));
    /* 004a4afa: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 004a4b02: lea ebp, [edi + 0x470] */ r_ebp = (u32)(r_edi+0x470u);
    /* 004a4b08: mov dword ptr [esp + 8], 0x40a00000 */ W32((u32)(r_esp+0x8u), 0x40a00000u);
    /* 004a4b10: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004a4b13: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a4b17: mov dword ptr [esp + 0xc], 0x41200000 */ W32((u32)(r_esp+0xcu), 0x41200000u);
    /* 004a4b1f: fld dword ptr [edi + 0x474] */ FPUSH(R_F32((u32)(r_edi+0x474u)));
    /* 004a4b25: fcomp dword ptr [0x903d34] */ fx_compare(ST(0), R_F32((u32)(0x903d34u))); FPOP();
    /* 004a4b2b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a4b2d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a4b2e: jbe 0x4a4b36 */ if ((fC||fZ)) goto L_004a4b36;
L_004a4b30:; BB(0x004a4b30);
    /* 004a4b30: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a4b33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a4b34: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a4b35: ret  */ FN_RET(0x004a4ae8); r_esp += 4; return;
L_004a4b36:; BB(0x004a4b36);
    /* 004a4b36: mov edx, dword ptr [edi + 0x580] */ r_edx = R32((u32)(r_edi+0x580u));
    /* 004a4b3c: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004a4b3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a4b41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a4b43: jle 0x4a4b5d */ if ((fZ||fS!=fO)) goto L_004a4b5d;
L_004a4b45:; BB(0x004a4b45);
    /* 004a4b45: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
L_004a4b49:; BB(0x004a4b49);
    /* 004a4b49: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004a4b4b: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 004a4b4e: mov dword ptr [ecx + eax*4], esi */ W32((u32)(r_ecx+r_eax*4), r_esi);
    /* 004a4b51: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a4b54: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a4b57: jl 0x4a4b49 */ if ((fS!=fO)) goto L_004a4b49;
L_004a4b59:; BB(0x004a4b59);
    /* 004a4b59: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_004a4b5d:; BB(0x004a4b5d);
    /* 004a4b5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a4b5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4b60: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004a4b63: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4b65: push dword ptr [0xa4764c] */ { u32 v = R32((u32)(0xa4764cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004a4b6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4b6c: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4a4b71u); f_00520c70();
    /* 004a4b71: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a4b74: push dword ptr [edi + 0x580] */ { u32 v = R32((u32)(r_edi+0x580u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a4b7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4b7b: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4b7d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a4b7e: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4a4b83u); f_0051fdf8();
    /* 004a4b83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a4b85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4b86: push dword ptr [0xa47648] */ { u32 v = R32((u32)(0xa47648u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a4b8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4b8d: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4b8f: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4a4b94u); f_00520c70();
    /* 004a4b94: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a4b97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a4b98: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a4b99: ret  */ FN_RET(0x004a4ae8); r_esp += 4; return;
}

void f_004a4b9c(void) /* sub_4A4B9C */
{
    FN_ENTER(0x004a4b9c);
    /* 004a4b9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a4b9d: mov edi, ecx */ r_edi = r_ecx;
    /* 004a4b9f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004a4ba3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4ba6: je 0x4a4be1 */ if (fZ) goto L_004a4be1;
L_004a4ba8:; BB(0x004a4ba8);
    /* 004a4ba8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a4bab: je 0x4a4bdd */ if (fZ) goto L_004a4bdd;
L_004a4bad:; BB(0x004a4bad);
    /* 004a4bad: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a4bb0: je 0x4a4bdd */ if (fZ) goto L_004a4bdd;
L_004a4bb2:; BB(0x004a4bb2);
    /* 004a4bb2: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a4bb5: je 0x4a4bdd */ if (fZ) goto L_004a4bdd;
L_004a4bb7:; BB(0x004a4bb7);
    /* 004a4bb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4bb9: jne 0x4a4bcd */ if (!fZ) goto L_004a4bcd;
L_004a4bbb:; BB(0x004a4bbb);
    /* 004a4bbb: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4bbd: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a4bc2u); f_007aa094();
    /* 004a4bc2: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4bc4: call 0x4a4ae8 */ r_esp -= 4; W32(r_esp, 0x4a4bc9u); f_004a4ae8();
    /* 004a4bc9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a4bca: ret 4 */ FN_RET(0x004a4b9c); r_esp += 8; return;
L_004a4bcd:; BB(0x004a4bcd);
    /* 004a4bcd: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a4bd0: jne 0x4a4bdd */ if (!fZ) goto L_004a4bdd;
L_004a4bd2:; BB(0x004a4bd2);
    /* 004a4bd2: mov ecx, dword ptr [edi + 0x584] */ r_ecx = R32((u32)(r_edi+0x584u));
    /* 004a4bd8: call 0x4a91fc */ r_esp -= 4; W32(r_esp, 0x4a4bddu); f_004a91fc();
L_004a4bdd:; BB(0x004a4bdd);
    /* 004a4bdd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a4bde: ret 4 */ FN_RET(0x004a4b9c); r_esp += 8; return;
L_004a4be1:; BB(0x004a4be1);
    /* 004a4be1: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004a4be3: mov eax, 0xe */ r_eax = 0xeu;
    /* 004a4be8: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 004a4bef: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4bf1: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a4bf7u); call_ind(t); }
    /* 004a4bf7: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a4bfc: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a4bff: mov ecx, dword ptr [edi + 0x584] */ r_ecx = R32((u32)(r_edi+0x584u));
    /* 004a4c05: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 004a4c08: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 004a4c0b: mov dword ptr [edi + 0x4ec], 0 */ W32((u32)(r_edi+0x4ecu), 0x0u);
    /* 004a4c15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4c16: call 0x4a9174 */ r_esp -= 4; W32(r_esp, 0x4a4c1bu); f_004a9174();
    /* 004a4c1b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a4c1c: ret 4 */ FN_RET(0x004a4b9c); r_esp += 8; return;
}

void f_004a4c20(void) /* sub_4A4C20 */
{
    FN_ENTER(0x004a4c20);
    /* 004a4c20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4c21: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a4c23: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004a4c27: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4c2a: je 0x4a4c98 */ if (fZ) goto L_004a4c98;
L_004a4c2c:; BB(0x004a4c2c);
    /* 004a4c2c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a4c2f: je 0x4a4c94 */ if (fZ) goto L_004a4c94;
L_004a4c31:; BB(0x004a4c31);
    /* 004a4c31: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a4c34: je 0x4a4c94 */ if (fZ) goto L_004a4c94;
L_004a4c36:; BB(0x004a4c36);
    /* 004a4c36: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a4c39: je 0x4a4c94 */ if (fZ) goto L_004a4c94;
L_004a4c3b:; BB(0x004a4c3b);
    /* 004a4c3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4c3d: jne 0x4a4c84 */ if (!fZ) goto L_004a4c84;
L_004a4c3f:; BB(0x004a4c3f);
    /* 004a4c3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a4c41: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a4c46u); f_007aa094();
    /* 004a4c46: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a4c48: call 0x4a4ae8 */ r_esp -= 4; W32(r_esp, 0x4a4c4du); f_004a4ae8();
    /* 004a4c4d: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4c52: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a4c54: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a4c59u); f_007aaa30();
    /* 004a4c59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 004a4c5b: je 0x4a4c68 */ if (fZ) goto L_004a4c68;
L_004a4c5d:; BB(0x004a4c5d);
    /* 004a4c5d: mov ecx, dword ptr [ebx + 0x584] */ r_ecx = R32((u32)(r_ebx+0x584u));
    /* 004a4c63: call 0x4a91fc */ r_esp -= 4; W32(r_esp, 0x4a4c68u); f_004a91fc();
L_004a4c68:; BB(0x004a4c68);
    /* 004a4c68: fld dword ptr [ebx + 0xc8] */ FPUSH(R_F32((u32)(r_ebx+0xc8u)));
    /* 004a4c6e: fcomp dword ptr [0x903d2c] */ fx_compare(ST(0), R_F32((u32)(0x903d2cu))); FPOP();
    /* 004a4c74: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a4c76: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a4c77: ja 0x4a4c94 */ if ((!fC&&!fZ)) goto L_004a4c94;
L_004a4c79:; BB(0x004a4c79);
    /* 004a4c79: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a4c7b: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a4c80u); f_004a7e20();
    /* 004a4c80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a4c81: ret 4 */ FN_RET(0x004a4c20); r_esp += 8; return;
L_004a4c84:; BB(0x004a4c84);
    /* 004a4c84: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a4c87: jne 0x4a4c94 */ if (!fZ) goto L_004a4c94;
L_004a4c89:; BB(0x004a4c89);
    /* 004a4c89: mov ecx, dword ptr [ebx + 0x584] */ r_ecx = R32((u32)(r_ebx+0x584u));
    /* 004a4c8f: call 0x4a91fc */ r_esp -= 4; W32(r_esp, 0x4a4c94u); f_004a91fc();
L_004a4c94:; BB(0x004a4c94);
    /* 004a4c94: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a4c95: ret 4 */ FN_RET(0x004a4c20); r_esp += 8; return;
L_004a4c98:; BB(0x004a4c98);
    /* 004a4c98: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004a4c9a: mov eax, 0xf */ r_eax = 0xfu;
    /* 004a4c9f: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004a4ca6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a4ca8: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a4caeu); call_ind(t); }
    /* 004a4cae: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a4cb3: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a4cb6: mov ecx, dword ptr [ebx + 0x584] */ r_ecx = R32((u32)(r_ebx+0x584u));
    /* 004a4cbc: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 004a4cbf: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 004a4cc2: mov dword ptr [ebx + 0x4ec], 0 */ W32((u32)(r_ebx+0x4ecu), 0x0u);
    /* 004a4ccc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4ccd: call 0x4a9174 */ r_esp -= 4; W32(r_esp, 0x4a4cd2u); f_004a9174();
    /* 004a4cd2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a4cd3: ret 4 */ FN_RET(0x004a4c20); r_esp += 8; return;
}

void f_004a4cd8(void) /* sub_4A4CD8 */
{
    FN_ENTER(0x004a4cd8);
    /* 004a4cd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a4cd9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004a4cdb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004a4cdf: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4ce2: je 0x4a4d3c */ if (fZ) goto L_004a4d3c;
L_004a4ce4:; BB(0x004a4ce4);
    /* 004a4ce4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a4ce7: je 0x4a4d38 */ if (fZ) goto L_004a4d38;
L_004a4ce9:; BB(0x004a4ce9);
    /* 004a4ce9: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a4cec: je 0x4a4d38 */ if (fZ) goto L_004a4d38;
L_004a4cee:; BB(0x004a4cee);
    /* 004a4cee: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a4cf1: je 0x4a4d38 */ if (fZ) goto L_004a4d38;
L_004a4cf3:; BB(0x004a4cf3);
    /* 004a4cf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a4cf5: jne 0x4a4d38 */ if (!fZ) goto L_004a4d38;
L_004a4cf7:; BB(0x004a4cf7);
    /* 004a4cf7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a4cf9: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a4cfeu); f_007aa094();
    /* 004a4cfe: push 0x41980000 */ { u32 v = 0x41980000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4d03: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a4d05: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a4d0au); f_007aaa30();
    /* 004a4d0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4d0c: je 0x4a4d26 */ if (fZ) goto L_004a4d26;
L_004a4d0e:; BB(0x004a4d0e);
    /* 004a4d0e: lea edx, [ebp + 0x568] */ r_edx = (u32)(r_ebp+0x568u);
    /* 004a4d14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a4d16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4d17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4d18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4d19: push 0x3a9 */ { u32 v = 0x3a9u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4d1e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a4d23u); f_00814298();
    /* 004a4d23: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a4d26:; BB(0x004a4d26);
    /* 004a4d26: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 004a4d2c: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a4d2f: jne 0x4a4d38 */ if (!fZ) goto L_004a4d38;
L_004a4d31:; BB(0x004a4d31);
    /* 004a4d31: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a4d33: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a4d38u); f_004a7e20();
L_004a4d38:; BB(0x004a4d38);
    /* 004a4d38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a4d39: ret 4 */ FN_RET(0x004a4cd8); r_esp += 8; return;
L_004a4d3c:; BB(0x004a4d3c);
    /* 004a4d3c: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004a4d3f: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004a4d44: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004a4d4b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a4d4d: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a4d53u); call_ind(t); }
    /* 004a4d53: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a4d58: mov dword ptr [ebp + 0x4ec], 0 */ W32((u32)(r_ebp+0x4ecu), 0x0u);
    /* 004a4d62: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 004a4d65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a4d66: ret 4 */ FN_RET(0x004a4cd8); r_esp += 8; return;
}

void f_004a4d6c(void) /* sub_4A4D6C */
{
    FN_ENTER(0x004a4d6c);
    /* 004a4d6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a4d6d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4d6e: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a4d71: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a4d73: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004a4d77: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4d7a: je 0x4a4ef2 */ if (fZ) goto L_004a4ef2;
L_004a4d80:; BB(0x004a4d80);
    /* 004a4d80: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4d83: je 0x4a4eea */ if (fZ) goto L_004a4eea;
L_004a4d89:; BB(0x004a4d89);
    /* 004a4d89: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4d8c: je 0x4a4eea */ if (fZ) goto L_004a4eea;
L_004a4d92:; BB(0x004a4d92);
    /* 004a4d92: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4d95: je 0x4a4eea */ if (fZ) goto L_004a4eea;
L_004a4d9b:; BB(0x004a4d9b);
    /* 004a4d9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4d9d: jne 0x4a4ea8 */ if (!fZ) goto L_004a4ea8;
L_004a4da3:; BB(0x004a4da3);
    /* 004a4da3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a4da5: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a4daau); f_007aa094();
    /* 004a4daa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a4dac: call 0x4a4ae8 */ r_esp -= 4; W32(r_esp, 0x4a4db1u); f_004a4ae8();
    /* 004a4db1: mov eax, dword ptr [0xa47640] */ r_eax = R32((u32)(0xa47640u));
    /* 004a4db6: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 004a4db9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a4dbc: jl 0x4a4ddd */ if ((fS!=fO)) goto L_004a4ddd;
L_004a4dbe:; BB(0x004a4dbe);
    /* 004a4dbe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a4dc0: call 0x4a4fc4 */ r_esp -= 4; W32(r_esp, 0x4a4dc5u); f_004a4fc4();
    /* 004a4dc5: push 0x42700000 */ { u32 v = 0x42700000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4dca: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 004a4dcd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a4dcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4dd0: call 0x4a51c0 */ r_esp -= 4; W32(r_esp, 0x4a4dd5u); f_004a51c0();
    /* 004a4dd5: mov eax, dword ptr [0xa47640] */ r_eax = R32((u32)(0xa47640u));
    /* 004a4dda: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
L_004a4ddd:; BB(0x004a4ddd);
    /* 004a4ddd: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a4de0: jl 0x4a4e80 */ if ((fS!=fO)) goto L_004a4e80;
L_004a4de6:; BB(0x004a4de6);
    /* 004a4de6: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004a4deb: mov ebp, dword ptr [ebx + 0x6ec] */ r_ebp = R32((u32)(r_ebx+0x6ecu));
    /* 004a4df1: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a4df3: mov eax, ebp */ r_eax = r_ebp;
    /* 004a4df5: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004a4df8: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004a4dfb: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a4dfd: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 004a4e00: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a4e02: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a4e04: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a4e06: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a4e08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4e0a: jne 0x4a4e80 */ if (!fZ) goto L_004a4e80;
L_004a4e0c:; BB(0x004a4e0c);
    /* 004a4e0c: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004a4e11: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a4e13: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004a4e16: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004a4e19: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a4e1b: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a4e1e: je 0x4a4e24 */ if (fZ) goto L_004a4e24;
L_004a4e20:; BB(0x004a4e20);
    /* 004a4e20: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004a4e22: jmp 0x4a4e29 */ goto L_004a4e29;
L_004a4e24:; BB(0x004a4e24);
    /* 004a4e24: mov ebp, 1 */ r_ebp = 0x1u;
L_004a4e29:; BB(0x004a4e29);
    /* 004a4e29: lea ecx, [ebx + 0x5fc] */ r_ecx = (u32)(r_ebx+0x5fcu);
    /* 004a4e2f: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4a4e34u); f_00763498();
    /* 004a4e34: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004a4e37: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004a4e3b: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004a4e3f: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004a4e42: fadd dword ptr [eax*4 + 0x903a88] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x903a88u));
    /* 004a4e49: fdiv dword ptr [0x903d20] */ ST(0) = ST(0) / R_F32((u32)(0x903d20u));
    /* 004a4e4f: fmul dword ptr [0x903d1c] */ ST(0) = ST(0) * R_F32((u32)(0x903d1cu));
    /* 004a4e55: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a4e57: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004a4e5b: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004a4e60: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a4e65: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004a4e69: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004a4e6d: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a4e71: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004a4e75: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004a4e79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e7a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e7b: call 0x4a5218 */ r_esp -= 4; W32(r_esp, 0x4a4e80u); f_004a5218();
L_004a4e80:; BB(0x004a4e80);
    /* 004a4e80: lea edx, [ebx + 0x568] */ r_edx = (u32)(r_ebx+0x568u);
    /* 004a4e86: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a4e88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e8b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e8c: push 0x3ab */ { u32 v = 0x3abu; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e91: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4a4e96u); f_008144b0();
    /* 004a4e96: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4e99: add dword ptr [ebx + 0x6ec], 1 */ { u32 ad = (u32)(r_ebx+0x6ecu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004a4ea0: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a4ea3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a4ea4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a4ea5: ret 4 */ FN_RET(0x004a4d6c); r_esp += 8; return;
L_004a4ea8:; BB(0x004a4ea8);
    /* 004a4ea8: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4eab: jne 0x4a4eea */ if (!fZ) goto L_004a4eea;
L_004a4ead:; BB(0x004a4ead);
    /* 004a4ead: mov ecx, dword ptr [ebx + 0x6e8] */ r_ecx = R32((u32)(r_ebx+0x6e8u));
    /* 004a4eb3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4eb5: je 0x4a4ec6 */ if (fZ) goto L_004a4ec6;
L_004a4eb7:; BB(0x004a4eb7);
    /* 004a4eb7: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x4a4ebcu); f_0073d160();
    /* 004a4ebc: mov dword ptr [ebx + 0x6e8], 0 */ W32((u32)(r_ebx+0x6e8u), 0x0u);
L_004a4ec6:; BB(0x004a4ec6);
    /* 004a4ec6: mov ecx, dword ptr [ebx + 0x6e4] */ r_ecx = R32((u32)(r_ebx+0x6e4u));
    /* 004a4ecc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4ece: je 0x4a4edf */ if (fZ) goto L_004a4edf;
L_004a4ed0:; BB(0x004a4ed0);
    /* 004a4ed0: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x4a4ed5u); f_0073d160();
    /* 004a4ed5: mov dword ptr [ebx + 0x6e4], 0 */ W32((u32)(r_ebx+0x6e4u), 0x0u);
L_004a4edf:; BB(0x004a4edf);
    /* 004a4edf: mov ecx, dword ptr [ebx + 0x584] */ r_ecx = R32((u32)(r_ebx+0x584u));
    /* 004a4ee5: call 0x4a91fc */ r_esp -= 4; W32(r_esp, 0x4a4eeau); f_004a91fc();
L_004a4eea:; BB(0x004a4eea);
    /* 004a4eea: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a4eed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a4eee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a4eef: ret 4 */ FN_RET(0x004a4d6c); r_esp += 8; return;
L_004a4ef2:; BB(0x004a4ef2);
    /* 004a4ef2: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004a4ef4: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004a4ef9: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004a4f00: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a4f02: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a4f08u); call_ind(t); }
    /* 004a4f08: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a4f0d: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a4f10: mov ecx, dword ptr [ebx + 0x584] */ r_ecx = R32((u32)(r_ebx+0x584u));
    /* 004a4f16: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 004a4f19: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 004a4f1c: mov dword ptr [ebx + 0x4ec], 0 */ W32((u32)(r_ebx+0x4ecu), 0x0u);
    /* 004a4f26: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a4f27: call 0x4a9174 */ r_esp -= 4; W32(r_esp, 0x4a4f2cu); f_004a9174();
    /* 004a4f2c: mov dword ptr [ebx + 0x6ec], 0 */ W32((u32)(r_ebx+0x6ecu), 0x0u);
    /* 004a4f36: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4a4f3bu); f_0082d7b0();
    /* 004a4f3b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4f3d: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4a4f42u); f_00830cd8();
    /* 004a4f42: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a4f44: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4a4f49u); f_0082d838();
    /* 004a4f49: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 004a4f4c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4f4e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4a4f53u); f_0082d8bc();
    /* 004a4f53: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a4f56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4f57: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4f59: mov edx, 0x9a7a18 */ r_edx = 0x9a7a18u;
    /* 004a4f5e: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4a4f63u); f_00830aa0();
    /* 004a4f63: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004a4f67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4f68: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4f6a: mov edx, 0x9a7a0c */ r_edx = 0x9a7a0cu;
    /* 004a4f6f: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4a4f74u); f_00830aa0();
    /* 004a4f74: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4a4f79u); f_0082da80();
    /* 004a4f79: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a4f7c: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a4f7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4f80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4f81: call 0x4a9de0 */ r_esp -= 4; W32(r_esp, 0x4a4f86u); f_004a9de0();
    /* 004a4f86: mov dword ptr [ebx + 0x6e4], eax */ W32((u32)(r_ebx+0x6e4u), r_eax);
    /* 004a4f8c: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 004a4f90: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a4f93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4f94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4f95: call 0x4a9de0 */ r_esp -= 4; W32(r_esp, 0x4a4f9au); f_004a9de0();
    /* 004a4f9a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4f9d: mov dword ptr [ebx + 0x6e8], eax */ W32((u32)(r_ebx+0x6e8u), r_eax);
    /* 004a4fa3: lea eax, [ebx + 0x5fc] */ r_eax = (u32)(r_ebx+0x5fcu);
    /* 004a4fa9: mov ebx, dword ptr [ebx + 0x4c4] */ r_ebx = R32((u32)(r_ebx+0x4c4u));
    /* 004a4faf: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a4fb2: mov ecx, eax */ r_ecx = r_eax;
    /* 004a4fb4: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x4a4fb9u); f_0084c390();
    /* 004a4fb9: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a4fbc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a4fbd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a4fbe: ret 4 */ FN_RET(0x004a4d6c); r_esp += 8; return;
}

void f_004a4e45(void)
{
    FN_ENTER(0x004a4e45);
    /* 004a4e45: mov byte ptr [edx], bh */ W8((u32)(r_edx), (u8)(r_ebx>>8));
    /* 004a4e47: nop  */ ;
    /* 004a4e48: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004a4e4a: xor eax, 0x903d20 */ {  u32 a = r_eax; u32 b = 0x903d20u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a4e4f: fmul dword ptr [0x903d1c] */ ST(0) = ST(0) * R_F32((u32)(0x903d1cu));
    /* 004a4e55: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a4e57: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004a4e5b: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004a4e60: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a4e65: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004a4e69: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004a4e6d: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a4e71: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004a4e75: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004a4e79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e7a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e7b: call 0x4a5218 */ r_esp -= 4; W32(r_esp, 0x4a4e80u); f_004a5218();
    /* 004a4e80: lea edx, [ebx + 0x568] */ r_edx = (u32)(r_ebx+0x568u);
    /* 004a4e86: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a4e88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e8b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e8c: push 0x3ab */ { u32 v = 0x3abu; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e91: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4a4e96u); f_008144b0();
    /* 004a4e96: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4e99: add dword ptr [ebx + 0x6ec], 1 */ { u32 ad = (u32)(r_ebx+0x6ecu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004a4ea0: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a4ea3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a4ea4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a4ea5: ret 4 */ FN_RET(0x004a4e45); r_esp += 8; return;
}

void f_004a4fc4(void) /* sub_4A4FC4 */
{
    FN_ENTER(0x004a4fc4);
    /* 004a4fc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a4fc5: mov ebp, esp */ r_ebp = r_esp;
    /* 004a4fc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a4fc9: push 0x8d0494 */ { u32 v = 0x8d0494u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4fce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a4fd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4fd5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a4fdc: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a4fdf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a4fe2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004a4fe5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004a4fe8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004a4feb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004a4fee: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a4ff3u); f_008587a5();
    /* 004a4ff3: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004a4ff6: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 004a4ff9: fdiv dword ptr [0x903d14] */ ST(0) = ST(0) / R_F32((u32)(0x903d14u));
    /* 004a4fff: fmul dword ptr [0x903d18] */ ST(0) = ST(0) * R_F32((u32)(0x903d18u));
    /* 004a5005: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 004a5008: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 004a500c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a5011: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004a5014: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 004a5017: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a501a: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 004a501d: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a5020: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a5025u); f_008587a5();
    /* 004a5025: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004a5028: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 004a502b: fdiv dword ptr [0x903d14] */ ST(0) = ST(0) / R_F32((u32)(0x903d14u));
    /* 004a5031: fmul dword ptr [0x903d18] */ ST(0) = ST(0) * R_F32((u32)(0x903d18u));
    /* 004a5037: mov ecx, esi */ r_ecx = r_esi;
    /* 004a5039: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 004a503c: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 004a5040: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a5045: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004a5048: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 004a504b: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a504e: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 004a5051: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a5054: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4a5059u); f_0082dcbc();
    /* 004a5059: fmul dword ptr [0x903cfc] */ ST(0) = ST(0) * R_F32((u32)(0x903cfcu));
    /* 004a505f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a5062: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 004a5065: fstp dword ptr [ebp - 0x80] */ W_F32((u32)(r_ebp+0xffffff80u), ST(0)); FPOP();
    /* 004a5068: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 004a506f: mov ecx, esi */ r_ecx = r_esi;
    /* 004a5071: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a5076u); f_0082ddd8();
    /* 004a5076: fmul dword ptr [0x903cfc] */ ST(0) = ST(0) * R_F32((u32)(0x903cfcu));
    /* 004a507c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a507f: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 004a5082: fstp dword ptr [ebp - 0x78] */ W_F32((u32)(r_ebp+0xffffff88u), ST(0)); FPOP();
    /* 004a5085: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 004a508c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a508e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4a5093u); f_0082dcbc();
    /* 004a5093: fmul dword ptr [0x903cfc] */ ST(0) = ST(0) * R_F32((u32)(0x903cfcu));
    /* 004a5099: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a509c: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 004a509f: fstp dword ptr [ebp - 0x60] */ W_F32((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 004a50a2: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 004a50a9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a50ab: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a50b0u); f_0082ddd8();
    /* 004a50b0: fmul dword ptr [0x903cfc] */ ST(0) = ST(0) * R_F32((u32)(0x903cfcu));
    /* 004a50b6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a50b9: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 004a50bc: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 004a50bf: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 004a50c6: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a50c8: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 004a50cb: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 004a50ce: fmul dword ptr [0x903d0c] */ ST(0) = ST(0) * R_F32((u32)(0x903d0cu));
    /* 004a50d4: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 004a50d7: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 004a50db: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a50e0: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004a50e3: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 004a50e6: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a50e9: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 004a50ec: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a50ef: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a50f4u); f_008587a5();
    /* 004a50f4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004a50f7: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 004a50fa: fdiv dword ptr [0x903d14] */ ST(0) = ST(0) / R_F32((u32)(0x903d14u));
    /* 004a5100: fcomp dword ptr [0x903d0c] */ fx_compare(ST(0), R_F32((u32)(0x903d0cu))); FPOP();
    /* 004a5106: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a5108: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a5109: jbe 0x4a5111 */ if ((fC||fZ)) goto L_004a5111;
L_004a510b:; BB(0x004a510b);
    /* 004a510b: add ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004a5111:; BB(0x004a5111);
    /* 004a5111: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a5113: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4a5118u); f_0082dcbc();
    /* 004a5118: fmul dword ptr [0x903cfc] */ ST(0) = ST(0) * R_F32((u32)(0x903cfcu));
    /* 004a511e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a5121: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 004a5124: fstp dword ptr [ebp - 0x70] */ W_F32((u32)(r_ebp+0xffffff90u), ST(0)); FPOP();
    /* 004a5127: mov dword ptr [ebp - 0x6c], 0x41200000 */ W32((u32)(r_ebp+0xffffff94u), 0x41200000u);
    /* 004a512e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a5130: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a5135u); f_0082ddd8();
    /* 004a5135: fmul dword ptr [0x903cfc] */ ST(0) = ST(0) * R_F32((u32)(0x903cfcu));
    /* 004a513b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a513e: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 004a5141: fstp dword ptr [ebp - 0x68] */ W_F32((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 004a5144: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 004a514b: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 004a5152: push 0x264 */ { u32 v = 0x264u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5157: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4a515cu); f_005caba4();
    /* 004a515c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a515d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004a5160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5162: je 0x4a51ba */ if (fZ) goto L_004a51ba;
L_004a5164:; BB(0x004a5164);
    /* 004a5164: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 004a516b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a5172: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5177: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a517c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a517f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004a5182: lea eax, [ebp - 0x80] */ r_eax = (u32)(r_ebp+0xffffff80u);
    /* 004a5185: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5187: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5189: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a518a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a518b: call 0x4a980c */ r_esp -= 4; W32(r_esp, 0x4a5190u); f_004a980c();
    /* 004a5190: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004a5193: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_004a519a:; BB(0x004a519a);
    /* 004a519a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004a51a1: call 0x4a9d50 */ r_esp -= 4; W32(r_esp, 0x4a51a6u); f_004a9d50();
    /* 004a51a6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004a51a9: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a51ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a51af: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a51b6: mov esp, ebp */ r_esp = r_ebp;
    /* 004a51b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a51b9: ret  */ FN_RET(0x004a4fc4); r_esp += 4; return;
L_004a51ba:; BB(0x004a51ba);
    /* 004a51ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a51bc: jmp 0x4a519a */ goto L_004a519a;
}

