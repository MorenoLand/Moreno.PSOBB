#include "protos.h"

void f_0071f0c0(void) /* sub_71F0C0 */
{
    FN_ENTER(0x0071f0c0);
    /* 0071f0c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071f0c1: mov ebx, esp */ r_ebx = r_esp;
    /* 0071f0c3: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0071f0c6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071f0c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071f0c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071f0c9: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071f0cc: mov esi, ecx */ r_esi = r_ecx;
    /* 0071f0ce: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 0071f0d1: movzx eax, word ptr [esi + 0x8a] */ r_eax = (u32)R16((u32)(r_esi+0x8au));
    /* 0071f0d8: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071f0dd: je 0x71f12c */ if (fZ) goto L_0071f12c;
L_0071f0df:; BB(0x0071f0df);
    /* 0071f0df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f0e0: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x71f0e5u); f_007b4d18();
    /* 0071f0e5: mov edi, eax */ r_edi = r_eax;
    /* 0071f0e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071f0ea: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071f0ec: je 0x71f12c */ if (fZ) goto L_0071f12c;
L_0071f0ee:; BB(0x0071f0ee);
    /* 0071f0ee: movzx edx, word ptr [esi + 0x8a] */ r_edx = (u32)R16((u32)(r_esi+0x8au));
    /* 0071f0f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071f0f6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71f0fbu); f_0068d5a8();
    /* 0071f0fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071f0fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071f0fe: je 0x71f112 */ if (fZ) goto L_0071f112;
L_0071f100:; BB(0x0071f100);
    /* 0071f100: movzx edx, word ptr [esi + 0x8a] */ r_edx = (u32)R16((u32)(r_esi+0x8au));
    /* 0071f107: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071f108: call 0x6944ec */ r_esp -= 4; W32(r_esp, 0x71f10du); f_006944ec();
    /* 0071f10d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071f10e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071f110: je 0x71f12c */ if (fZ) goto L_0071f12c;
L_0071f112:; BB(0x0071f112);
    /* 0071f112: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0071f115: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0071f118: fld dword ptr [esi + 0x90] */ FPUSH(R_F32((u32)(r_esi+0x90u)));
    /* 0071f11e: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 0071f121: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0071f125: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0071f128: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_0071f12c:; BB(0x0071f12c);
    /* 0071f12c: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 0071f132: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0071f135: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f136: add edx, 0x178 */ {  u32 a = r_edx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0071f13c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071f13d: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x71f142u); f_00836208();
    /* 0071f142: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0071f146: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071f149: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0071f14d: fdivr dword ptr [0x9704cc] */ ST(0) = R_F32((u32)(0x9704ccu)) / ST(0);
    /* 0071f153: fld dword ptr [0x9704c8] */ FPUSH(R_F32((u32)(0x9704c8u)));
    /* 0071f159: fld dword ptr [esi + 0x48] */ FPUSH(R_F32((u32)(r_esi+0x48u)));
    /* 0071f15c: fld dword ptr [esi + 0x4c] */ FPUSH(R_F32((u32)(r_esi+0x4cu)));
    /* 0071f15f: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0071f162: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071f164: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0071f166: fsub dword ptr [esi + 0xa4] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0xa4u));
    /* 0071f16c: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0071f16e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071f170: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071f172: fsub dword ptr [esi + 0xa8] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0xa8u));
    /* 0071f178: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 0071f17b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071f17d: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0071f181: fst dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0));
    /* 0071f185: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071f187: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 0071f18b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071f18d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0071f18f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071f191: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0071f193: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f195: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071f196: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071f199: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x71f19eu); f_0082dc9c();
    /* 0071f19e: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0071f1a2: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0071f1a6: fcomp dword ptr [0x9704c4] */ fx_compare(ST(0), R_F32((u32)(0x9704c4u))); FPOP();
    /* 0071f1ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071f1ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071f1af: jae 0x71f1bb */ if (!fC) goto L_0071f1bb;
L_0071f1b1:; BB(0x0071f1b1);
    /* 0071f1b1: mov edx, 0xd400 */ r_edx = 0xd400u;
    /* 0071f1b6: jmp 0x71f275 */ goto L_0071f275;
L_0071f1bb:; BB(0x0071f1bb);
    /* 0071f1bb: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0071f1bf: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0071f1c3: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071f1c5: fmul qword ptr [0x970318] */ ST(0) = ST(0) * R_F64((u32)(0x970318u));
    /* 0071f1cb: fdiv qword ptr [0x970310] */ ST(0) = ST(0) / R_F64((u32)(0x970310u));
    /* 0071f1d1: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071f1d5: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071f1da: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071f1df: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071f1e3: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071f1e7: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071f1eb: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071f1ef: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0071f1f3: mov ecx, edi */ r_ecx = r_edi;
    /* 0071f1f5: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71f1fau); f_0082ddd8();
    /* 0071f1fa: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0071f1fe: fchs  */ ST(0) = -ST(0);
    /* 0071f200: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0071f202: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071f204: fadd dword ptr [esp + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4cu));
    /* 0071f208: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071f20a: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0071f20e: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0071f212: mov ecx, edi */ r_ecx = r_edi;
    /* 0071f214: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71f219u); f_0082dcbc();
    /* 0071f219: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0071f21d: fadd dword ptr [esp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x48u));
    /* 0071f221: fld dword ptr [0x9704c0] */ FPUSH(R_F32((u32)(0x9704c0u)));
    /* 0071f227: fadd dword ptr [esi + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x48u));
    /* 0071f22a: fdivr dword ptr [esp + 0x18] */ ST(0) = R_F32((u32)(r_esp+0x18u)) / ST(0);
    /* 0071f22e: fld dword ptr [0x9704bc] */ FPUSH(R_F32((u32)(0x9704bcu)));
    /* 0071f234: fadd dword ptr [esi + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4cu));
    /* 0071f237: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 0071f239: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0071f23d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071f23f: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 0071f243: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071f245: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071f247: fmul qword ptr [0x970318] */ ST(0) = ST(0) * R_F64((u32)(0x970318u));
    /* 0071f24d: fdiv qword ptr [0x970310] */ ST(0) = ST(0) / R_F64((u32)(0x970310u));
    /* 0071f253: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071f257: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071f25c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071f261: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071f265: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071f269: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071f26d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071f271: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
L_0071f275:; BB(0x0071f275);
    /* 0071f275: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0071f279: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f27a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071f27b: mov ecx, esi */ r_ecx = r_esi;
    /* 0071f27d: call 0x71f830 */ r_esp -= 4; W32(r_esp, 0x71f282u); f_0071f830();
    /* 0071f282: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0071f286: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0071f28a: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071f28c: fmul qword ptr [0x970318] */ ST(0) = ST(0) * R_F64((u32)(0x970318u));
    /* 0071f292: fdiv qword ptr [0x970310] */ ST(0) = ST(0) / R_F64((u32)(0x970310u));
    /* 0071f298: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071f29c: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071f2a1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071f2a6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071f2aa: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071f2ae: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071f2b2: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071f2b6: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0071f2ba: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 0071f2be: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71f2c3u); f_0082ddd8();
    /* 0071f2c3: fmul dword ptr [esp + 0x58] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x58u));
    /* 0071f2c7: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0071f2cb: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 0071f2cf: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0071f2d3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71f2d8u); f_0082dcbc();
    /* 0071f2d8: fmul dword ptr [esp + 0x58] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x58u));
    /* 0071f2dc: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0071f2e0: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0071f2e4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0071f2e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071f2e8: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 0071f2ec: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0071f2ee: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f2f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071f2f1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071f2f4: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x71f2f9u); f_0082dc9c();
    /* 0071f2f9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071f2fa: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0071f2fe: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0071f300: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071f303: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x71f308u); f_0082e900();
    /* 0071f308: fcomp dword ptr [0x9704bc] */ fx_compare(ST(0), R_F32((u32)(0x9704bcu))); FPOP();
    /* 0071f30e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071f310: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071f311: jae 0x71f321 */ if (!fC) goto L_0071f321;
L_0071f313:; BB(0x0071f313);
    /* 0071f313: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071f315: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071f318: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071f319: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071f31a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071f31b: mov esp, ebx */ r_esp = r_ebx;
    /* 0071f31d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071f31e: ret 8 */ FN_RET(0x0071f0c0); r_esp += 12; return;
L_0071f321:; BB(0x0071f321);
    /* 0071f321: fld dword ptr [0x9704b8] */ FPUSH(R_F32((u32)(0x9704b8u)));
    /* 0071f327: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0071f32b: fadd dword ptr [esi + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa4u));
    /* 0071f331: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 0071f334: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0071f336: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f338: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0071f33b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0071f33d: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0071f341: fadd dword ptr [esi + 0xa8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa8u));
    /* 0071f347: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0071f34a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071f34c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f34e: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0071f351: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071f355: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f356: call 0x7199a0 */ r_esp -= 4; W32(r_esp, 0x71f35bu); f_007199a0();
    /* 0071f35b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071f35c: fld dword ptr [0x9704c0] */ FPUSH(R_F32((u32)(0x9704c0u)));
    /* 0071f362: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f364: fcom dword ptr [ebp] */ fx_compare(ST(0), R_F32((u32)(r_ebp))); 
    /* 0071f367: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071f369: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071f36a: jbe 0x71f374 */ if ((fC||fZ)) goto L_0071f374;
L_0071f36c:; BB(0x0071f36c);
    /* 0071f36c: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0071f36f: mov edi, 1 */ r_edi = 0x1u;
L_0071f374:; BB(0x0071f374);
    /* 0071f374: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071f376: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071f37a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f37b: call 0x7199c0 */ r_esp -= 4; W32(r_esp, 0x71f380u); f_007199c0();
    /* 0071f380: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071f381: fld dword ptr [esi + 0x48] */ FPUSH(R_F32((u32)(r_esi+0x48u)));
    /* 0071f384: fmul dword ptr [0x9704b0] */ ST(0) = ST(0) * R_F32((u32)(0x9704b0u));
    /* 0071f38a: fadd dword ptr [0x9704b4] */ ST(0) = ST(0) + R_F32((u32)(0x9704b4u));
    /* 0071f390: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f392: fcom dword ptr [ebp] */ fx_compare(ST(0), R_F32((u32)(r_ebp))); 
    /* 0071f395: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071f397: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071f398: jae 0x71f3a2 */ if (!fC) goto L_0071f3a2;
L_0071f39a:; BB(0x0071f39a);
    /* 0071f39a: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0071f39d: mov edi, 1 */ r_edi = 0x1u;
L_0071f3a2:; BB(0x0071f3a2);
    /* 0071f3a2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071f3a4: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071f3a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f3a9: call 0x7199b0 */ r_esp -= 4; W32(r_esp, 0x71f3aeu); f_007199b0();
    /* 0071f3ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071f3af: fld dword ptr [0x9704ac] */ FPUSH(R_F32((u32)(0x9704acu)));
    /* 0071f3b5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f3b7: fcom dword ptr [ebp + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4u))); 
    /* 0071f3ba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071f3bc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071f3bd: jbe 0x71f3c7 */ if ((fC||fZ)) goto L_0071f3c7;
L_0071f3bf:; BB(0x0071f3bf);
    /* 0071f3bf: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0071f3c2: mov edi, 1 */ r_edi = 0x1u;
L_0071f3c7:; BB(0x0071f3c7);
    /* 0071f3c7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071f3c9: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071f3cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f3ce: call 0x7199d0 */ r_esp -= 4; W32(r_esp, 0x71f3d3u); f_007199d0();
    /* 0071f3d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071f3d4: fld dword ptr [esi + 0x4c] */ FPUSH(R_F32((u32)(r_esi+0x4cu)));
    /* 0071f3d7: fmul dword ptr [0x9704b0] */ ST(0) = ST(0) * R_F32((u32)(0x9704b0u));
    /* 0071f3dd: fadd dword ptr [0x9704a8] */ ST(0) = ST(0) + R_F32((u32)(0x9704a8u));
    /* 0071f3e3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f3e5: fcom dword ptr [ebp + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4u))); 
    /* 0071f3e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071f3ea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071f3eb: jae 0x71f3f5 */ if (!fC) goto L_0071f3f5;
L_0071f3ed:; BB(0x0071f3ed);
    /* 0071f3ed: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0071f3f0: mov edi, 1 */ r_edi = 0x1u;
L_0071f3f5:; BB(0x0071f3f5);
    /* 0071f3f5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071f3f7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071f3f9: je 0x71f409 */ if (fZ) goto L_0071f409;
L_0071f3fb:; BB(0x0071f3fb);
    /* 0071f3fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071f3fd: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071f400: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071f401: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071f402: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071f403: mov esp, ebx */ r_esp = r_ebx;
    /* 0071f405: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071f406: ret 8 */ FN_RET(0x0071f0c0); r_esp += 12; return;
L_0071f409:; BB(0x0071f409);
    /* 0071f409: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0071f40c: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0071f410: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0071f412: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f413: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071f414: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071f415: call 0x71534c */ r_esp -= 4; W32(r_esp, 0x71f41au); f_0071534c();
    /* 0071f41a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071f41d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071f41f: je 0x71f81f */ if (fZ) goto L_0071f81f;
L_0071f425:; BB(0x0071f425);
    /* 0071f425: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x71f42au); f_008587a5();
    /* 0071f42a: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0071f42e: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0071f432: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0071f436: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0071f43a: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 0071f43d: fld dword ptr [0x9704b8] */ FPUSH(R_F32((u32)(0x9704b8u)));
    /* 0071f443: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0071f445: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071f447: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 0071f449: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071f44b: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0071f44d: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0071f451: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0071f455: fdiv dword ptr [0x9704a4] */ ST(0) = ST(0) / R_F32((u32)(0x9704a4u));
    /* 0071f45b: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0071f45d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071f45f: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 0071f461: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071f463: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071f465: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0071f469: fadd dword ptr [esi + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa4u));
    /* 0071f46f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071f471: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0071f473: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071f475: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0071f479: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0071f47b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071f47d: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0071f480: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0071f483: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071f485: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0071f489: fadd dword ptr [esi + 0xa8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa8u));
    /* 0071f48f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f491: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0071f494: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0071f496: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0071f49a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f49b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071f49c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071f49d: call 0x71534c */ r_esp -= 4; W32(r_esp, 0x71f4a2u); f_0071534c();
    /* 0071f4a2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071f4a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071f4a7: je 0x71f81f */ if (fZ) goto L_0071f81f;
L_0071f4ad:; BB(0x0071f4ad);
    /* 0071f4ad: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x71f4b2u); f_008587a5();
    /* 0071f4b2: fld dword ptr [0x9704a4] */ FPUSH(R_F32((u32)(0x9704a4u)));
    /* 0071f4b8: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 0071f4bc: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0071f4c0: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0071f4c4: fadd dword ptr [0x9704a0] */ ST(0) = ST(0) + R_F32((u32)(0x9704a0u));
    /* 0071f4ca: mov ecx, esi */ r_ecx = r_esi;
    /* 0071f4cc: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0071f4d0: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0071f4d4: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0071f4d6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071f4d8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f4da: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071f4de: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071f4e3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071f4e8: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071f4ec: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071f4f0: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071f4f4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071f4f8: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0071f4fc: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0071f500: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f501: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071f502: call 0x71f830 */ r_esp -= 4; W32(r_esp, 0x71f507u); f_0071f830();
    /* 0071f507: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0071f50b: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0071f50f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071f511: fmul qword ptr [0x970318] */ ST(0) = ST(0) * R_F64((u32)(0x970318u));
    /* 0071f517: fdiv qword ptr [0x970310] */ ST(0) = ST(0) / R_F64((u32)(0x970310u));
    /* 0071f51d: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071f521: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071f526: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071f52b: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071f52f: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071f533: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071f537: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071f53b: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0071f53f: mov ecx, edi */ r_ecx = r_edi;
    /* 0071f541: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71f546u); f_0082ddd8();
    /* 0071f546: fmul dword ptr [esp + 0x58] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x58u));
    /* 0071f54a: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0071f54e: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0071f552: mov ecx, edi */ r_ecx = r_edi;
    /* 0071f554: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71f559u); f_0082dcbc();
    /* 0071f559: fmul dword ptr [esp + 0x58] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x58u));
    /* 0071f55d: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0071f561: fld dword ptr [0x9704b8] */ FPUSH(R_F32((u32)(0x9704b8u)));
    /* 0071f567: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0071f56b: fadd dword ptr [esi + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa4u));
    /* 0071f571: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 0071f574: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0071f576: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071f578: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0071f57c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0071f57e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071f580: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0071f583: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0071f586: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071f588: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0071f58c: fadd dword ptr [esi + 0xa8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa8u));
    /* 0071f592: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f594: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0071f597: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0071f599: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071f59d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f59e: call 0x7199a0 */ r_esp -= 4; W32(r_esp, 0x71f5a3u); f_007199a0();
    /* 0071f5a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071f5a4: fld dword ptr [0x9704c0] */ FPUSH(R_F32((u32)(0x9704c0u)));
    /* 0071f5aa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f5ac: fcom dword ptr [ebp] */ fx_compare(ST(0), R_F32((u32)(r_ebp))); 
    /* 0071f5af: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071f5b1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071f5b2: jbe 0x71f5bc */ if ((fC||fZ)) goto L_0071f5bc;
L_0071f5b4:; BB(0x0071f5b4);
    /* 0071f5b4: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0071f5b7: mov edi, 1 */ r_edi = 0x1u;
L_0071f5bc:; BB(0x0071f5bc);
    /* 0071f5bc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071f5be: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071f5c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f5c3: call 0x7199c0 */ r_esp -= 4; W32(r_esp, 0x71f5c8u); f_007199c0();
    /* 0071f5c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071f5c9: fld dword ptr [esi + 0x48] */ FPUSH(R_F32((u32)(r_esi+0x48u)));
    /* 0071f5cc: fmul dword ptr [0x9704b0] */ ST(0) = ST(0) * R_F32((u32)(0x9704b0u));
    /* 0071f5d2: fadd dword ptr [0x9704b4] */ ST(0) = ST(0) + R_F32((u32)(0x9704b4u));
    /* 0071f5d8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f5da: fcom dword ptr [ebp] */ fx_compare(ST(0), R_F32((u32)(r_ebp))); 
    /* 0071f5dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071f5df: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071f5e0: jae 0x71f5ea */ if (!fC) goto L_0071f5ea;
L_0071f5e2:; BB(0x0071f5e2);
    /* 0071f5e2: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0071f5e5: mov edi, 1 */ r_edi = 0x1u;
L_0071f5ea:; BB(0x0071f5ea);
    /* 0071f5ea: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071f5ec: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071f5f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f5f1: call 0x7199b0 */ r_esp -= 4; W32(r_esp, 0x71f5f6u); f_007199b0();
    /* 0071f5f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071f5f7: fld dword ptr [0x9704ac] */ FPUSH(R_F32((u32)(0x9704acu)));
    /* 0071f5fd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f5ff: fcom dword ptr [ebp + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4u))); 
    /* 0071f602: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071f604: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071f605: jbe 0x71f60f */ if ((fC||fZ)) goto L_0071f60f;
L_0071f607:; BB(0x0071f607);
    /* 0071f607: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0071f60a: mov edi, 1 */ r_edi = 0x1u;
L_0071f60f:; BB(0x0071f60f);
    /* 0071f60f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071f611: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071f615: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f616: call 0x7199d0 */ r_esp -= 4; W32(r_esp, 0x71f61bu); f_007199d0();
    /* 0071f61b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071f61c: fld dword ptr [esi + 0x4c] */ FPUSH(R_F32((u32)(r_esi+0x4cu)));
    /* 0071f61f: fmul dword ptr [0x9704b0] */ ST(0) = ST(0) * R_F32((u32)(0x9704b0u));
    /* 0071f625: fadd dword ptr [0x9704a8] */ ST(0) = ST(0) + R_F32((u32)(0x9704a8u));
    /* 0071f62b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f62d: fcom dword ptr [ebp + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4u))); 
    /* 0071f630: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071f632: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071f633: jae 0x71f63d */ if (!fC) goto L_0071f63d;
L_0071f635:; BB(0x0071f635);
    /* 0071f635: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0071f638: mov edi, 1 */ r_edi = 0x1u;
L_0071f63d:; BB(0x0071f63d);
    /* 0071f63d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071f63f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071f641: je 0x71f651 */ if (fZ) goto L_0071f651;
L_0071f643:; BB(0x0071f643);
    /* 0071f643: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071f645: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071f648: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071f649: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071f64a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071f64b: mov esp, ebx */ r_esp = r_ebx;
    /* 0071f64d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071f64e: ret 8 */ FN_RET(0x0071f0c0); r_esp += 12; return;
L_0071f651:; BB(0x0071f651);
    /* 0071f651: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0071f653: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0071f657: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f658: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071f659: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071f65a: call 0x71534c */ r_esp -= 4; W32(r_esp, 0x71f65fu); f_0071534c();
    /* 0071f65f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071f662: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071f664: je 0x71f81f */ if (fZ) goto L_0071f81f;
L_0071f66a:; BB(0x0071f66a);
    /* 0071f66a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x71f66fu); f_008587a5();
    /* 0071f66f: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0071f673: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0071f677: fdiv dword ptr [0x9704a4] */ ST(0) = ST(0) / R_F32((u32)(0x9704a4u));
    /* 0071f67d: fmul dword ptr [0x97049c] */ ST(0) = ST(0) * R_F32((u32)(0x97049cu));
    /* 0071f683: mov ecx, esi */ r_ecx = r_esi;
    /* 0071f685: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071f689: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071f68e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071f693: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071f697: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071f69b: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071f69f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071f6a3: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0071f6a7: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0071f6ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f6ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071f6ad: call 0x71f830 */ r_esp -= 4; W32(r_esp, 0x71f6b2u); f_0071f830();
    /* 0071f6b2: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0071f6b6: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0071f6ba: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071f6bc: fmul qword ptr [0x970318] */ ST(0) = ST(0) * R_F64((u32)(0x970318u));
    /* 0071f6c2: fdiv qword ptr [0x970310] */ ST(0) = ST(0) / R_F64((u32)(0x970310u));
    /* 0071f6c8: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071f6cc: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071f6d1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071f6d6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071f6da: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071f6de: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071f6e2: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071f6e6: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0071f6ea: mov ecx, edi */ r_ecx = r_edi;
    /* 0071f6ec: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71f6f1u); f_0082ddd8();
    /* 0071f6f1: fmul dword ptr [esp + 0x58] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x58u));
    /* 0071f6f5: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0071f6f9: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0071f6fd: mov ecx, edi */ r_ecx = r_edi;
    /* 0071f6ff: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71f704u); f_0082dcbc();
    /* 0071f704: fmul dword ptr [esp + 0x58] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x58u));
    /* 0071f708: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0071f70c: fld dword ptr [0x9704b8] */ FPUSH(R_F32((u32)(0x9704b8u)));
    /* 0071f712: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0071f716: fadd dword ptr [esi + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa4u));
    /* 0071f71c: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 0071f71f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0071f721: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071f723: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0071f727: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0071f729: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071f72b: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0071f72e: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0071f731: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071f733: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0071f737: fadd dword ptr [esi + 0xa8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa8u));
    /* 0071f73d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f73f: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0071f742: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0071f744: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071f748: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f749: call 0x7199a0 */ r_esp -= 4; W32(r_esp, 0x71f74eu); f_007199a0();
    /* 0071f74e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071f74f: fld dword ptr [0x9704c0] */ FPUSH(R_F32((u32)(0x9704c0u)));
    /* 0071f755: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f757: fcom dword ptr [ebp] */ fx_compare(ST(0), R_F32((u32)(r_ebp))); 
    /* 0071f75a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071f75c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071f75d: jbe 0x71f767 */ if ((fC||fZ)) goto L_0071f767;
L_0071f75f:; BB(0x0071f75f);
    /* 0071f75f: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0071f762: mov edi, 1 */ r_edi = 0x1u;
L_0071f767:; BB(0x0071f767);
    /* 0071f767: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071f769: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071f76d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f76e: call 0x7199c0 */ r_esp -= 4; W32(r_esp, 0x71f773u); f_007199c0();
    /* 0071f773: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071f774: fld dword ptr [esi + 0x48] */ FPUSH(R_F32((u32)(r_esi+0x48u)));
    /* 0071f777: fmul dword ptr [0x9704b0] */ ST(0) = ST(0) * R_F32((u32)(0x9704b0u));
    /* 0071f77d: fadd dword ptr [0x9704b4] */ ST(0) = ST(0) + R_F32((u32)(0x9704b4u));
    /* 0071f783: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f785: fcom dword ptr [ebp] */ fx_compare(ST(0), R_F32((u32)(r_ebp))); 
    /* 0071f788: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071f78a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071f78b: jae 0x71f795 */ if (!fC) goto L_0071f795;
L_0071f78d:; BB(0x0071f78d);
    /* 0071f78d: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0071f790: mov edi, 1 */ r_edi = 0x1u;
L_0071f795:; BB(0x0071f795);
    /* 0071f795: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071f797: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071f79b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f79c: call 0x7199b0 */ r_esp -= 4; W32(r_esp, 0x71f7a1u); f_007199b0();
    /* 0071f7a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071f7a2: fld dword ptr [0x9704ac] */ FPUSH(R_F32((u32)(0x9704acu)));
    /* 0071f7a8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f7aa: fcom dword ptr [ebp + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4u))); 
    /* 0071f7ad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071f7af: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071f7b0: jbe 0x71f7ba */ if ((fC||fZ)) goto L_0071f7ba;
L_0071f7b2:; BB(0x0071f7b2);
    /* 0071f7b2: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0071f7b5: mov edi, 1 */ r_edi = 0x1u;
L_0071f7ba:; BB(0x0071f7ba);
    /* 0071f7ba: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071f7bc: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071f7c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f7c1: call 0x7199d0 */ r_esp -= 4; W32(r_esp, 0x71f7c6u); f_007199d0();
    /* 0071f7c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071f7c7: fld dword ptr [esi + 0x4c] */ FPUSH(R_F32((u32)(r_esi+0x4cu)));
    /* 0071f7ca: fmul dword ptr [0x9704b0] */ ST(0) = ST(0) * R_F32((u32)(0x9704b0u));
    /* 0071f7d0: fadd dword ptr [0x9704a8] */ ST(0) = ST(0) + R_F32((u32)(0x9704a8u));
    /* 0071f7d6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f7d8: fcom dword ptr [ebp + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4u))); 
    /* 0071f7db: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071f7dd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071f7de: jae 0x71f7e8 */ if (!fC) goto L_0071f7e8;
L_0071f7e0:; BB(0x0071f7e0);
    /* 0071f7e0: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0071f7e3: mov edi, 1 */ r_edi = 0x1u;
L_0071f7e8:; BB(0x0071f7e8);
    /* 0071f7e8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071f7ea: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071f7ec: je 0x71f7fc */ if (fZ) goto L_0071f7fc;
L_0071f7ee:; BB(0x0071f7ee);
    /* 0071f7ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071f7f0: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071f7f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071f7f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071f7f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071f7f6: mov esp, ebx */ r_esp = r_ebx;
    /* 0071f7f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071f7f9: ret 8 */ FN_RET(0x0071f0c0); r_esp += 12; return;
L_0071f7fc:; BB(0x0071f7fc);
    /* 0071f7fc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0071f7fe: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0071f802: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f803: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071f804: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071f805: call 0x71534c */ r_esp -= 4; W32(r_esp, 0x71f80au); f_0071534c();
    /* 0071f80a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071f80d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071f80f: je 0x71f81f */ if (fZ) goto L_0071f81f;
L_0071f811:; BB(0x0071f811);
    /* 0071f811: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071f813: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071f816: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071f817: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071f818: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071f819: mov esp, ebx */ r_esp = r_ebx;
    /* 0071f81b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071f81c: ret 8 */ FN_RET(0x0071f0c0); r_esp += 12; return;
L_0071f81f:; BB(0x0071f81f);
    /* 0071f81f: mov eax, 1 */ r_eax = 0x1u;
    /* 0071f824: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071f827: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071f828: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071f829: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071f82a: mov esp, ebx */ r_esp = r_ebx;
    /* 0071f82c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071f82d: ret 8 */ FN_RET(0x0071f0c0); r_esp += 12; return;
}

void f_0071f830(void) /* sub_71F830 */
{
    FN_ENTER(0x0071f830);
    /* 0071f830: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071f831: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071f832: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071f833: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071f836: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0071f83a: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0071f83e: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 0071f841: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0071f844: fld dword ptr [0x970494] */ FPUSH(R_F32((u32)(0x970494u)));
    /* 0071f84a: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0071f84c: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0071f84e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071f850: fadd dword ptr [0x970498] */ ST(0) = ST(0) + R_F32((u32)(0x970498u));
    /* 0071f856: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0071f858: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071f85a: fadd dword ptr [0x970490] */ ST(0) = ST(0) + R_F32((u32)(0x970490u));
    /* 0071f860: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071f862: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0071f866: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0071f86a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071f86c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71f871u); f_0082ddd8();
    /* 0071f871: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 0071f875: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 0071f877: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071f879: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71f87eu); f_0082dcbc();
    /* 0071f87e: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 0071f882: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 0071f885: lea edi, [ebp + 0x2000] */ r_edi = (u32)(r_ebp+0x2000u);
    /* 0071f88b: test edi, 0x4000 */ {  u32 a = r_edi; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071f891: jne 0x71f8fd */ if (!fZ) goto L_0071f8fd;
L_0071f893:; BB(0x0071f893);
    /* 0071f893: and edi, 0x8000 */ {  u32 a = r_edi; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0071f899: je 0x71f8a6 */ if (fZ) goto L_0071f8a6;
L_0071f89b:; BB(0x0071f89b);
    /* 0071f89b: fld dword ptr [0x970488] */ FPUSH(R_F32((u32)(0x970488u)));
    /* 0071f8a1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071f8a4: jmp 0x71f8af */ goto L_0071f8af;
L_0071f8a6:; BB(0x0071f8a6);
    /* 0071f8a6: fld dword ptr [0x97048c] */ FPUSH(R_F32((u32)(0x97048cu)));
    /* 0071f8ac: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_0071f8af:; BB(0x0071f8af);
    /* 0071f8af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071f8b1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71f8b6u); f_0082dcbc();
    /* 0071f8b6: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071f8ba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071f8bc: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71f8c1u); f_0082ddd8();
    /* 0071f8c1: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0071f8c5: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0071f8c7: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071f8cb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071f8cd: je 0x71f8d9 */ if (fZ) goto L_0071f8d9;
L_0071f8cf:; BB(0x0071f8cf);
    /* 0071f8cf: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0071f8d3: fchs  */ ST(0) = -ST(0);
    /* 0071f8d5: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_0071f8d9:; BB(0x0071f8d9);
    /* 0071f8d9: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0071f8dd: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0071f8e0: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 0071f8e2: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0071f8e6: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 0071f8ea: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 0071f8ed: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071f8ef: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 0071f8f1: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 0071f8f4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071f8f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071f8f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071f8f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071f8fa: ret 8 */ FN_RET(0x0071f830); r_esp += 12; return;
L_0071f8fd:; BB(0x0071f8fd);
    /* 0071f8fd: lea edi, [ebp - 0x4000] */ r_edi = (u32)(r_ebp+0xffffc000u);
    /* 0071f903: mov ecx, edi */ r_ecx = r_edi;
    /* 0071f905: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71f90au); f_0082dcbc();
    /* 0071f90a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071f90d: mov ecx, edi */ r_ecx = r_edi;
    /* 0071f90f: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71f914u); f_0082ddd8();
    /* 0071f914: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071f917: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0071f919: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071f91c: and ebp, 0x8000 */ {  u32 a = r_ebp; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0071f922: jne 0x71f92c */ if (!fZ) goto L_0071f92c;
L_0071f924:; BB(0x0071f924);
    /* 0071f924: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071f927: fchs  */ ST(0) = -ST(0);
    /* 0071f929: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_0071f92c:; BB(0x0071f92c);
    /* 0071f92c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071f92e: je 0x71f93c */ if (fZ) goto L_0071f93c;
L_0071f930:; BB(0x0071f930);
    /* 0071f930: fld dword ptr [0x970488] */ FPUSH(R_F32((u32)(0x970488u)));
    /* 0071f936: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071f93a: jmp 0x71f8d9 */ goto L_0071f8d9;
L_0071f93c:; BB(0x0071f93c);
    /* 0071f93c: fld dword ptr [0x97048c] */ FPUSH(R_F32((u32)(0x97048cu)));
    /* 0071f942: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071f946: jmp 0x71f8d9 */ goto L_0071f8d9;
}

void f_0071f948(void) /* sub_71F948 */
{
    FN_ENTER(0x0071f948);
    /* 0071f948: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071f949: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071f94a: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071f94d: mov edi, ecx */ r_edi = r_ecx;
    /* 0071f94f: mov ecx, edi */ r_ecx = r_edi;
    /* 0071f951: call 0x71e70c */ r_esp -= 4; W32(r_esp, 0x71f956u); f_0071e70c();
    /* 0071f956: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071f958: je 0x71fa33 */ if (fZ) goto L_0071fa33;
L_0071f95e:; BB(0x0071f95e);
    /* 0071f95e: movsx eax, byte ptr [edi + 0x87] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x87u));
    /* 0071f965: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071f968: je 0x71fb5c */ if (fZ) goto L_0071fb5c;
L_0071f96e:; BB(0x0071f96e);
    /* 0071f96e: movsx edx, word ptr [edi + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071f972: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071f973: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f974: call 0x717ca8 */ r_esp -= 4; W32(r_esp, 0x71f979u); f_00717ca8();
    /* 0071f979: fld dword ptr [0x970484] */ FPUSH(R_F32((u32)(0x970484u)));
    /* 0071f97f: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 0071f982: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0071f984: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0071f986: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 0071f989: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071f98b: fstp dword ptr [edi + 0x30] */ W_F32((u32)(r_edi+0x30u), ST(0)); FPOP();
    /* 0071f98e: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 0071f991: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071f995: fstp dword ptr [edi + 0x34] */ W_F32((u32)(r_edi+0x34u), ST(0)); FPOP();
    /* 0071f998: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f999: call 0x7199a0 */ r_esp -= 4; W32(r_esp, 0x71f99eu); f_007199a0();
    /* 0071f99e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071f9a1: fld dword ptr [0x970480] */ FPUSH(R_F32((u32)(0x970480u)));
    /* 0071f9a7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f9a9: fcom dword ptr [edi + 0x30] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x30u))); 
    /* 0071f9ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071f9ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071f9af: jbe 0x71f9b4 */ if ((fC||fZ)) goto L_0071f9b4;
L_0071f9b1:; BB(0x0071f9b1);
    /* 0071f9b1: fst dword ptr [edi + 0x30] */ W_F32((u32)(r_edi+0x30u), ST(0));
L_0071f9b4:; BB(0x0071f9b4);
    /* 0071f9b4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071f9b6: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071f9ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f9bb: call 0x7199c0 */ r_esp -= 4; W32(r_esp, 0x71f9c0u); f_007199c0();
    /* 0071f9c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071f9c1: fld dword ptr [0x97047c] */ FPUSH(R_F32((u32)(0x97047cu)));
    /* 0071f9c7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f9c9: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 0071f9cc: fmul dword ptr [0x970478] */ ST(0) = ST(0) * R_F32((u32)(0x970478u));
    /* 0071f9d2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f9d4: fcom dword ptr [edi + 0x30] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x30u))); 
    /* 0071f9d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071f9d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071f9da: jae 0x71f9df */ if (!fC) goto L_0071f9df;
L_0071f9dc:; BB(0x0071f9dc);
    /* 0071f9dc: fst dword ptr [edi + 0x30] */ W_F32((u32)(r_edi+0x30u), ST(0));
L_0071f9df:; BB(0x0071f9df);
    /* 0071f9df: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071f9e1: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071f9e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f9e6: call 0x7199b0 */ r_esp -= 4; W32(r_esp, 0x71f9ebu); f_007199b0();
    /* 0071f9eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071f9ec: fld dword ptr [0x970474] */ FPUSH(R_F32((u32)(0x970474u)));
    /* 0071f9f2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f9f4: fcom dword ptr [edi + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x34u))); 
    /* 0071f9f7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071f9f9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071f9fa: jbe 0x71f9ff */ if ((fC||fZ)) goto L_0071f9ff;
L_0071f9fc:; BB(0x0071f9fc);
    /* 0071f9fc: fst dword ptr [edi + 0x34] */ W_F32((u32)(r_edi+0x34u), ST(0));
L_0071f9ff:; BB(0x0071f9ff);
    /* 0071f9ff: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071fa01: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071fa05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071fa06: call 0x7199d0 */ r_esp -= 4; W32(r_esp, 0x71fa0bu); f_007199d0();
    /* 0071fa0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071fa0c: fld dword ptr [0x970470] */ FPUSH(R_F32((u32)(0x970470u)));
    /* 0071fa12: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071fa14: fld dword ptr [edi + 0x4c] */ FPUSH(R_F32((u32)(r_edi+0x4cu)));
    /* 0071fa17: fmul dword ptr [0x970478] */ ST(0) = ST(0) * R_F32((u32)(0x970478u));
    /* 0071fa1d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071fa1f: fcom dword ptr [edi + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x34u))); 
    /* 0071fa22: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071fa24: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071fa25: jae 0x71fb54 */ if (!fC) goto L_0071fb54;
L_0071fa2b:; BB(0x0071fa2b);
    /* 0071fa2b: fst dword ptr [edi + 0x34] */ W_F32((u32)(r_edi+0x34u), ST(0));
    /* 0071fa2e: jmp 0x71fb54 */ goto L_0071fb54;
L_0071fa33:; BB(0x0071fa33);
    /* 0071fa33: movsx eax, byte ptr [edi + 0x87] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x87u));
    /* 0071fa3a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071fa3d: je 0x71fa6a */ if (fZ) goto L_0071fa6a;
L_0071fa3f:; BB(0x0071fa3f);
    /* 0071fa3f: movzx eax, byte ptr [edi + 0x85] */ r_eax = (u32)R8((u32)(r_edi+0x85u));
    /* 0071fa46: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 0071fa49: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0071fa4e: mov byte ptr [edi + 0x85], al */ W8((u32)(r_edi+0x85u), (u8)r_eax);
    /* 0071fa54: and edx, 0xfffffdff */ {  u32 a = r_edx; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0071fa5a: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 0071fa5d: lea ebp, [edi + 0x87] */ r_ebp = (u32)(r_edi+0x87u);
    /* 0071fa63: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071fa64: call 0x717c78 */ r_esp -= 4; W32(r_esp, 0x71fa69u); f_00717c78();
    /* 0071fa69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0071fa6a:; BB(0x0071fa6a);
    /* 0071fa6a: movzx eax, word ptr [edi + 0x8a] */ r_eax = (u32)R16((u32)(r_edi+0x8au));
    /* 0071fa71: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071fa76: je 0x71fba0 */ if (fZ) goto L_0071fba0;
L_0071fa7c:; BB(0x0071fa7c);
    /* 0071fa7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071fa7d: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x71fa82u); f_007b4d18();
    /* 0071fa82: mov ebp, eax */ r_ebp = r_eax;
    /* 0071fa84: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071fa87: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071fa89: je 0x71fb96 */ if (fZ) goto L_0071fb96;
L_0071fa8f:; BB(0x0071fa8f);
    /* 0071fa8f: movzx edx, word ptr [edi + 0x8a] */ r_edx = (u32)R16((u32)(r_edi+0x8au));
    /* 0071fa96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071fa97: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71fa9cu); f_0068d5a8();
    /* 0071fa9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071fa9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071fa9f: je 0x71fab7 */ if (fZ) goto L_0071fab7;
L_0071faa1:; BB(0x0071faa1);
    /* 0071faa1: movzx edx, word ptr [edi + 0x8a] */ r_edx = (u32)R16((u32)(r_edi+0x8au));
    /* 0071faa8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071faa9: call 0x6944ec */ r_esp -= 4; W32(r_esp, 0x71faaeu); f_006944ec();
    /* 0071faae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071faaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071fab1: je 0x71fb8c */ if (fZ) goto L_0071fb8c;
L_0071fab7:; BB(0x0071fab7);
    /* 0071fab7: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 0071faba: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0071fabd: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0071fac0: fadd dword ptr [edi + 0x90] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x90u));
    /* 0071fac6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0071faca: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0071facd: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0071fad1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x71fad6u); f_0082d7b0();
    /* 0071fad6: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x71fadbu); f_004d2968();
    /* 0071fadb: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0071fadf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071fae0: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0071fae4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071fae6: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x71faebu); f_0082f09c();
    /* 0071faeb: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x71faf0u); f_004d28a4();
    /* 0071faf0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x71faf5u); f_0082da80();
    /* 0071faf5: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0071faf9: fadd dword ptr [0xa48828] */ ST(0) = ST(0) + R_F32((u32)(0xa48828u));
    /* 0071faff: mov eax, dword ptr [0xaf0350] */ r_eax = R32((u32)(0xaf0350u));
    /* 0071fb04: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0071fb06: mov edx, dword ptr [0xaf0354] */ r_edx = R32((u32)(0xaf0354u));
    /* 0071fb0c: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0071fb10: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0071fb14: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0071fb16: fdiv dword ptr [0xaf0358] */ ST(0) = ST(0) / R_F32((u32)(0xaf0358u));
    /* 0071fb1c: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0071fb20: fadd dword ptr [0xa4882c] */ ST(0) = ST(0) + R_F32((u32)(0xa4882cu));
    /* 0071fb26: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0071fb28: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0071fb2c: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 0071fb30: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0071fb32: fdiv dword ptr [0xaf035c] */ ST(0) = ST(0) / R_F32((u32)(0xaf035cu));
L_0071fb38:; BB(0x0071fb38);
    /* 0071fb38: fld dword ptr [0x970484] */ FPUSH(R_F32((u32)(0x970484u)));
    /* 0071fb3e: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 0071fb41: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0071fb43: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0071fb45: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071fb47: fstp dword ptr [edi + 0x30] */ W_F32((u32)(r_edi+0x30u), ST(0)); FPOP();
    /* 0071fb4a: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 0071fb4d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071fb4f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071fb51: fstp dword ptr [edi + 0x34] */ W_F32((u32)(r_edi+0x34u), ST(0)); FPOP();
L_0071fb54:; BB(0x0071fb54);
    /* 0071fb54: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071fb56: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071fb59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071fb5a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071fb5b: ret  */ FN_RET(0x0071f948); r_esp += 4; return;
L_0071fb5c:; BB(0x0071fb5c);
    /* 0071fb5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071fb5d: movzx eax, byte ptr [edi + 0x85] */ r_eax = (u32)R8((u32)(r_edi+0x85u));
    /* 0071fb64: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 0071fb67: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071fb6c: mov byte ptr [edi + 0x85], al */ W8((u32)(r_edi+0x85u), (u8)r_eax);
    /* 0071fb72: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0071fb78: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 0071fb7b: call 0x717aec */ r_esp -= 4; W32(r_esp, 0x71fb80u); f_00717aec();
    /* 0071fb80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071fb81: mov byte ptr [edi + 0x87], al */ W8((u32)(r_edi+0x87u), (u8)r_eax);
    /* 0071fb87: jmp 0x71f96e */ goto L_0071f96e;
L_0071fb8c:; BB(0x0071fb8c);
    /* 0071fb8c: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0071fb90: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0071fb94: jmp 0x71fb38 */ goto L_0071fb38;
L_0071fb96:; BB(0x0071fb96);
    /* 0071fb96: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0071fb9a: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0071fb9e: jmp 0x71fb38 */ goto L_0071fb38;
L_0071fba0:; BB(0x0071fba0);
    /* 0071fba0: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0071fba4: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0071fba8: jmp 0x71fb38 */ goto L_0071fb38;
}

void f_0071fbac(void) /* sub_71FBAC */
{
    FN_ENTER(0x0071fbac);
    /* 0071fbac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071fbad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071fbae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071fbaf: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071fbb2: mov edi, ecx */ r_edi = r_ecx;
    /* 0071fbb4: fld dword ptr [0x97046c] */ FPUSH(R_F32((u32)(0x97046cu)));
    /* 0071fbba: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 0071fbbd: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 0071fbc0: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0071fbc2: fadd dword ptr [edi + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x30u));
    /* 0071fbc5: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 0071fbc8: movzx eax, byte ptr [edi + 0x85] */ r_eax = (u32)R8((u32)(r_edi+0x85u));
    /* 0071fbcf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071fbd1: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0071fbd5: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0071fbd7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071fbd9: fadd dword ptr [edi + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x34u));
    /* 0071fbdc: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0071fbe0: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071fbe2: je 0x71fc01 */ if (fZ) goto L_0071fc01;
L_0071fbe4:; BB(0x0071fbe4);
    /* 0071fbe4: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0071fbe8: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0071fbec: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071fbee: fstp dword ptr [edi + 0x9c] */ W_F32((u32)(r_edi+0x9cu), ST(0)); FPOP();
    /* 0071fbf4: fstp dword ptr [edi + 0xa0] */ W_F32((u32)(r_edi+0xa0u), ST(0)); FPOP();
    /* 0071fbfa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071fbfc: jmp 0x71fcc1 */ goto L_0071fcc1;
L_0071fc01:; BB(0x0071fc01);
    /* 0071fc01: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0071fc03: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071fc05: fld dword ptr [0x970468] */ FPUSH(R_F32((u32)(0x970468u)));
    /* 0071fc0b: fld dword ptr [edi + 0x9c] */ FPUSH(R_F32((u32)(r_edi+0x9cu)));
    /* 0071fc11: fsubr dword ptr [esp + 0x28] */ ST(0) = R_F32((u32)(r_esp+0x28u)) - ST(0);
    /* 0071fc15: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0071fc17: fld dword ptr [edi + 0xa0] */ FPUSH(R_F32((u32)(r_edi+0xa0u)));
    /* 0071fc1d: fsubr dword ptr [esp + 0x24] */ ST(0) = R_F32((u32)(r_esp+0x24u)) - ST(0);
    /* 0071fc21: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071fc23: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 0071fc27: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071fc29: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0071fc2d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071fc2e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071fc31: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x71fc36u); f_0082e900();
    /* 0071fc36: fcomp dword ptr [0x970464] */ fx_compare(ST(0), R_F32((u32)(0x970464u))); FPOP();
    /* 0071fc3c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071fc3e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071fc3f: jae 0x71fc4d */ if (!fC) goto L_0071fc4d;
L_0071fc41:; BB(0x0071fc41);
    /* 0071fc41: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0071fc45: fstp dword ptr [edi + 0x9c] */ W_F32((u32)(r_edi+0x9cu), ST(0)); FPOP();
    /* 0071fc4b: jmp 0x71fc5d */ goto L_0071fc5d;
L_0071fc4d:; BB(0x0071fc4d);
    /* 0071fc4d: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0071fc51: fadd dword ptr [edi + 0x9c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x9cu));
    /* 0071fc57: fstp dword ptr [edi + 0x9c] */ W_F32((u32)(r_edi+0x9cu), ST(0)); FPOP();
L_0071fc5d:; BB(0x0071fc5d);
    /* 0071fc5d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071fc5e: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0071fc62: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071fc65: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x71fc6au); f_0082e900();
    /* 0071fc6a: fcomp dword ptr [0x970464] */ fx_compare(ST(0), R_F32((u32)(0x970464u))); FPOP();
    /* 0071fc70: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071fc72: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071fc73: jae 0x71fc97 */ if (!fC) goto L_0071fc97;
L_0071fc75:; BB(0x0071fc75);
    /* 0071fc75: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0071fc79: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 0071fc7c: fld dword ptr [edi + 0x9c] */ FPUSH(R_F32((u32)(r_edi+0x9cu)));
    /* 0071fc82: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071fc84: fstp dword ptr [edi + 0xa0] */ W_F32((u32)(r_edi+0xa0u), ST(0)); FPOP();
    /* 0071fc8a: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 0071fc8d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071fc8f: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0071fc93: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071fc95: jmp 0x71fcc1 */ goto L_0071fcc1;
L_0071fc97:; BB(0x0071fc97);
    /* 0071fc97: fld dword ptr [edi + 0xa0] */ FPUSH(R_F32((u32)(r_edi+0xa0u)));
    /* 0071fc9d: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0071fca1: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 0071fca4: fld dword ptr [edi + 0x9c] */ FPUSH(R_F32((u32)(r_edi+0x9cu)));
    /* 0071fcaa: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071fcac: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 0071fcb0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071fcb2: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0071fcb6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071fcb8: fstp dword ptr [edi + 0xa0] */ W_F32((u32)(r_edi+0xa0u), ST(0)); FPOP();
    /* 0071fcbe: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
L_0071fcc1:; BB(0x0071fcc1);
    /* 0071fcc1: mov edx, dword ptr [edi + 0x50] */ r_edx = R32((u32)(r_edi+0x50u));
    /* 0071fcc4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071fcc6: jne 0x71fcd4 */ if (!fZ) goto L_0071fcd4;
L_0071fcc8:; BB(0x0071fcc8);
    /* 0071fcc8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071fcca: fst dword ptr [edi + 0x48] */ W_F32((u32)(r_edi+0x48u), ST(0));
    /* 0071fccd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071fccf: fst dword ptr [edi + 0x4c] */ W_F32((u32)(r_edi+0x4cu), ST(0));
    /* 0071fcd2: jmp 0x71fd10 */ goto L_0071fd10;
L_0071fcd4:; BB(0x0071fcd4);
    /* 0071fcd4: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 0071fcd7: fld dword ptr [edi + 0x4c] */ FPUSH(R_F32((u32)(r_edi+0x4cu)));
    /* 0071fcda: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071fcdc: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 0071fcde: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071fce0: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0071fce2: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0071fce6: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0071fcea: mov eax, edx */ r_eax = r_edx;
    /* 0071fcec: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0071fcef: fadd dword ptr [eax*4 + 0x970308] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x970308u));
    /* 0071fcf6: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 0071fcf8: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 0071fcfa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071fcfc: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0071fcfe: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071fd00: fst dword ptr [edi + 0x48] */ W_F32((u32)(r_edi+0x48u), ST(0));
    /* 0071fd03: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071fd05: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071fd07: fst dword ptr [edi + 0x4c] */ W_F32((u32)(r_edi+0x4cu), ST(0));
    /* 0071fd0a: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0071fd0d: mov dword ptr [edi + 0x50], edx */ W32((u32)(r_edi+0x50u), r_edx);
L_0071fd10:; BB(0x0071fd10);
    /* 0071fd10: fld dword ptr [0x970460] */ FPUSH(R_F32((u32)(0x970460u)));
    /* 0071fd16: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0071fd18: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071fd1a: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0071fd1e: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0071fd20: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0071fd24: push dword ptr [edi + 0x94] */ { u32 v = R32((u32)(r_edi+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071fd2a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071fd2c: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 0071fd2f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071fd31: fstp dword ptr [edi + 0x44] */ W_F32((u32)(r_edi+0x44u), ST(0)); FPOP();
    /* 0071fd34: lea eax, [edi + 0x40] */ r_eax = (u32)(r_edi+0x40u);
    /* 0071fd37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071fd38: mov ecx, edi */ r_ecx = r_edi;
    /* 0071fd3a: call 0x71fe58 */ r_esp -= 4; W32(r_esp, 0x71fd3fu); f_0071fe58();
    /* 0071fd3f: fld dword ptr [0x97046c] */ FPUSH(R_F32((u32)(0x97046cu)));
    /* 0071fd45: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 0071fd48: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0071fd4a: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 0071fd4d: fld dword ptr [edi + 0x4c] */ FPUSH(R_F32((u32)(r_edi+0x4cu)));
    /* 0071fd50: movzx eax, word ptr [edi + 0x8a] */ r_eax = (u32)R16((u32)(r_edi+0x8au));
    /* 0071fd57: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071fd59: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071fd5b: fadd dword ptr [edi + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x44u));
    /* 0071fd5e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071fd60: fstp dword ptr [edi + 0x9c] */ W_F32((u32)(r_edi+0x9cu), ST(0)); FPOP();
    /* 0071fd66: fstp dword ptr [edi + 0xa0] */ W_F32((u32)(r_edi+0xa0u), ST(0)); FPOP();
    /* 0071fd6c: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071fd71: lea esi, [edi + 0xa4] */ r_esi = (u32)(r_edi+0xa4u);
    /* 0071fd77: je 0x71fe4f */ if (fZ) goto L_0071fe4f;
L_0071fd7d:; BB(0x0071fd7d);
    /* 0071fd7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071fd7e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x71fd83u); f_007b4d18();
    /* 0071fd83: mov ebp, eax */ r_ebp = r_eax;
    /* 0071fd85: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071fd88: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071fd8a: je 0x71fe4f */ if (fZ) goto L_0071fe4f;
L_0071fd90:; BB(0x0071fd90);
    /* 0071fd90: movzx edx, word ptr [edi + 0x8a] */ r_edx = (u32)R16((u32)(r_edi+0x8au));
    /* 0071fd97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071fd98: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71fd9du); f_0068d5a8();
    /* 0071fd9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071fd9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071fda0: je 0x71fdb8 */ if (fZ) goto L_0071fdb8;
L_0071fda2:; BB(0x0071fda2);
    /* 0071fda2: movzx edx, word ptr [edi + 0x8a] */ r_edx = (u32)R16((u32)(r_edi+0x8au));
    /* 0071fda9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071fdaa: call 0x6944ec */ r_esp -= 4; W32(r_esp, 0x71fdafu); f_006944ec();
    /* 0071fdaf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071fdb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071fdb2: je 0x71fe4f */ if (fZ) goto L_0071fe4f;
L_0071fdb8:; BB(0x0071fdb8);
    /* 0071fdb8: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 0071fdbb: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0071fdbe: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0071fdc1: fadd dword ptr [edi + 0x90] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x90u));
    /* 0071fdc7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071fdc9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0071fdcd: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0071fdd0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0071fdd4: je 0x71fe4f */ if (fZ) goto L_0071fe4f;
L_0071fdd6:; BB(0x0071fdd6);
    /* 0071fdd6: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x71fddbu); f_0082d7b0();
    /* 0071fddb: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x71fde0u); f_004d2968();
    /* 0071fde0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071fde1: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0071fde5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071fde7: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x71fdecu); f_0082f09c();
    /* 0071fdec: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x71fdf1u); f_004d28a4();
    /* 0071fdf1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x71fdf6u); f_0082da80();
    /* 0071fdf6: mov eax, dword ptr [0xaf0350] */ r_eax = R32((u32)(0xaf0350u));
    /* 0071fdfb: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0071fdfd: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0071fe01: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0071fe05: fsubr dword ptr [0xa48828] */ ST(0) = R_F32((u32)(0xa48828u)) - ST(0);
    /* 0071fe0b: fadd dword ptr [edi + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xa4u));
    /* 0071fe11: fst dword ptr [edi + 0xa4] */ W_F32((u32)(r_edi+0xa4u), ST(0));
    /* 0071fe17: mov edx, dword ptr [0xaf0354] */ r_edx = R32((u32)(0xaf0354u));
    /* 0071fe1d: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0071fe1f: fld dword ptr [0xaf0358] */ FPUSH(R_F32((u32)(0xaf0358u)));
    /* 0071fe25: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0071fe27: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0071fe2b: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0071fe2f: fsubr dword ptr [0xa4882c] */ ST(0) = R_F32((u32)(0xa4882cu)) - ST(0);
    /* 0071fe35: fadd dword ptr [edi + 0xa8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xa8u));
    /* 0071fe3b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071fe3d: fstp dword ptr [edi + 0xa4] */ W_F32((u32)(r_edi+0xa4u), ST(0)); FPOP();
    /* 0071fe43: fdiv dword ptr [0xaf035c] */ ST(0) = ST(0) / R_F32((u32)(0xaf035cu));
    /* 0071fe49: fstp dword ptr [edi + 0xa8] */ W_F32((u32)(r_edi+0xa8u), ST(0)); FPOP();
L_0071fe4f:; BB(0x0071fe4f);
    /* 0071fe4f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071fe52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071fe53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071fe54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071fe55: ret  */ FN_RET(0x0071fbac); r_esp += 4; return;
}

void f_0071fe58(void) /* sub_71FE58 */
{
    FN_ENTER(0x0071fe58);
    /* 0071fe58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071fe59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071fe5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071fe5b: mov esi, ecx */ r_esi = r_ecx;
    /* 0071fe5d: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0071fe61: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071fe65: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0071fe67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071fe68: call 0x7199a0 */ r_esp -= 4; W32(r_esp, 0x71fe6du); f_007199a0();
    /* 0071fe6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071fe6e: fld dword ptr [0x97045c] */ FPUSH(R_F32((u32)(0x97045cu)));
    /* 0071fe74: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071fe76: fcom dword ptr [ebp] */ fx_compare(ST(0), R_F32((u32)(r_ebp))); 
    /* 0071fe79: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071fe7b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071fe7c: jbe 0x71fe86 */ if ((fC||fZ)) goto L_0071fe86;
L_0071fe7e:; BB(0x0071fe7e);
    /* 0071fe7e: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0071fe81: mov ebx, 1 */ r_ebx = 0x1u;
L_0071fe86:; BB(0x0071fe86);
    /* 0071fe86: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071fe88: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071fe8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071fe8d: call 0x7199c0 */ r_esp -= 4; W32(r_esp, 0x71fe92u); f_007199c0();
    /* 0071fe92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071fe93: fld dword ptr [esi + 0x48] */ FPUSH(R_F32((u32)(r_esi+0x48u)));
    /* 0071fe96: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 0071fe9a: fsubr dword ptr [0x970458] */ ST(0) = R_F32((u32)(0x970458u)) - ST(0);
    /* 0071fea0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071fea2: fcom dword ptr [ebp] */ fx_compare(ST(0), R_F32((u32)(r_ebp))); 
    /* 0071fea5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071fea7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071fea8: jae 0x71feb2 */ if (!fC) goto L_0071feb2;
L_0071feaa:; BB(0x0071feaa);
    /* 0071feaa: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0071fead: mov ebx, 1 */ r_ebx = 0x1u;
L_0071feb2:; BB(0x0071feb2);
    /* 0071feb2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071feb4: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071feb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071feb9: call 0x7199b0 */ r_esp -= 4; W32(r_esp, 0x71febeu); f_007199b0();
    /* 0071febe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071febf: fld dword ptr [0x970454] */ FPUSH(R_F32((u32)(0x970454u)));
    /* 0071fec5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071fec7: fcom dword ptr [ebp + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4u))); 
    /* 0071feca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071fecc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071fecd: jbe 0x71fed7 */ if ((fC||fZ)) goto L_0071fed7;
L_0071fecf:; BB(0x0071fecf);
    /* 0071fecf: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0071fed2: mov ebx, 1 */ r_ebx = 0x1u;
L_0071fed7:; BB(0x0071fed7);
    /* 0071fed7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071fed9: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071fedd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071fede: call 0x7199d0 */ r_esp -= 4; W32(r_esp, 0x71fee3u); f_007199d0();
    /* 0071fee3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071fee4: fld dword ptr [esi + 0x4c] */ FPUSH(R_F32((u32)(r_esi+0x4cu)));
    /* 0071fee7: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 0071feeb: fsubr dword ptr [0x970450] */ ST(0) = R_F32((u32)(0x970450u)) - ST(0);
    /* 0071fef1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071fef3: fcom dword ptr [ebp + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4u))); 
    /* 0071fef6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071fef8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071fef9: jae 0x71ff03 */ if (!fC) goto L_0071ff03;
L_0071fefb:; BB(0x0071fefb);
    /* 0071fefb: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0071fefe: mov ebx, 1 */ r_ebx = 0x1u;
L_0071ff03:; BB(0x0071ff03);
    /* 0071ff03: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071ff05: mov eax, ebx */ r_eax = r_ebx;
    /* 0071ff07: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071ff08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071ff09: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ff0a: ret 8 */ FN_RET(0x0071fe58); r_esp += 12; return;
}

void f_0071ff10(void) /* sub_71FF10 */
{
    FN_ENTER(0x0071ff10);
    /* 0071ff10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ff11: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071ff12: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071ff13: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071ff16: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071ff18: mov ebp, dword ptr [esp + 0x60] */ r_ebp = R32((u32)(r_esp+0x60u));
    /* 0071ff1c: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 0071ff20: fld dword ptr [ebx + 0x4c] */ FPUSH(R_F32((u32)(r_ebx+0x4cu)));
    /* 0071ff23: fmul dword ptr [0x97044c] */ ST(0) = ST(0) * R_F32((u32)(0x97044cu));
    /* 0071ff29: fadd dword ptr [ebx + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x48u));
    /* 0071ff2c: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0071ff30: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0071ff38: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0071ff3d: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 0071ff45: mov dword ptr [esp + 0x30], 0 */ W32((u32)(r_esp+0x30u), 0x0u);
    /* 0071ff4d: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x71ff52u); f_0082bb30();
    /* 0071ff52: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 0071ff58: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x71ff5du); f_00829cc8();
    /* 0071ff5d: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0071ff61: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0071ff66: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x71ff6bu); f_0082bb60();
    /* 0071ff6b: fld dword ptr [0x970444] */ FPUSH(R_F32((u32)(0x970444u)));
    /* 0071ff71: fld dword ptr [ebx + 0x4c] */ FPUSH(R_F32((u32)(r_ebx+0x4cu)));
    /* 0071ff74: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0071ff76: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071ff78: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0071ff7c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071ff7d: jae 0x71ff8f */ if (!fC) goto L_0071ff8f;
L_0071ff7f:; BB(0x0071ff7f);
    /* 0071ff7f: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0071ff83: fmul dword ptr [0x97043c] */ ST(0) = ST(0) * R_F32((u32)(0x97043cu));
    /* 0071ff89: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0071ff8d: jmp 0x71ff99 */ goto L_0071ff99;
L_0071ff8f:; BB(0x0071ff8f);
    /* 0071ff8f: fld dword ptr [0x970440] */ FPUSH(R_F32((u32)(0x970440u)));
    /* 0071ff95: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
L_0071ff99:; BB(0x0071ff99);
    /* 0071ff99: fld dword ptr [0x970438] */ FPUSH(R_F32((u32)(0x970438u)));
    /* 0071ff9f: fdiv dword ptr [esp + 0x6c] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x6cu));
    /* 0071ffa3: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0071ffa7: fld dword ptr [ebx + 0x44] */ FPUSH(R_F32((u32)(r_ebx+0x44u)));
    /* 0071ffaa: fld dword ptr [0x970448] */ FPUSH(R_F32((u32)(0x970448u)));
    /* 0071ffb0: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0071ffb4: fcomp st(5) */ fx_compare(ST(0), ST(5)); FPOP();
    /* 0071ffb6: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071ffb8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071ffba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071ffbc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071ffbe: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0071ffc2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071ffc4: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 0071ffc7: fld dword ptr [0x970434] */ FPUSH(R_F32((u32)(0x970434u)));
    /* 0071ffcd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071ffcf: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0071ffd3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071ffd5: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0071ffd9: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0071ffdd: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0071ffdf: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0071ffe3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071ffe4: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 0071ffec: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 0071ffef: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0071fff1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071fff3: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 0071fff6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071fff8: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0071fffc: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 0071ffff: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00720003: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00720005: jae 0x720017 */ if (!fC) goto L_00720017;
L_00720007:; BB(0x00720007);
    /* 00720007: fld dword ptr [0x97043c] */ FPUSH(R_F32((u32)(0x97043cu)));
    /* 0072000d: fmul dword ptr [esp + 0x48] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x48u));
    /* 00720011: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00720015: jmp 0x720021 */ goto L_00720021;
L_00720017:; BB(0x00720017);
    /* 00720017: fld dword ptr [0x970440] */ FPUSH(R_F32((u32)(0x970440u)));
    /* 0072001d: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
L_00720021:; BB(0x00720021);
    /* 00720021: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00720025: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00720029: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 0072002c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072002e: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 00720032: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00720034: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00720036: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00720038: fdivr st(4) */ ST(0) = ST(4) / ST(0);
    /* 0072003a: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0072003e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00720040: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 00720044: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00720047: mov dword ptr [esp + 0x20], 0x3ec40000 */ W32((u32)(r_esp+0x20u), 0x3ec40000u);
    /* 0072004f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00720052: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720054: fchs  */ ST(0) = -ST(0);
    /* 00720056: fmul dword ptr [0x97044c] */ ST(0) = ST(0) * R_F32((u32)(0x97044cu));
    /* 0072005c: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 00720060: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00720063: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00720066: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 00720068: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072006a: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 0072006d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0072006f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720071: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00720074: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 00720077: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00720079: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072007b: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0072007f: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 00720082: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00720086: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x72008bu); f_0082bb74();
    /* 0072008b: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0072008f: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00720093: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00720095: fsubr dword ptr [0x97042c] */ ST(0) = R_F32((u32)(0x97042cu)) - ST(0);
    /* 0072009b: fdiv dword ptr [0x970434] */ ST(0) = ST(0) / R_F32((u32)(0x970434u));
    /* 007200a1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007200a3: fadd dword ptr [esp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x44u));
    /* 007200a7: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 007200aa: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007200ad: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 007200b0: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 007200b2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007200b4: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 007200b7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007200b9: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 007200bd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007200bf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007200c2: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x7200c7u); f_0082bb74();
    /* 007200c7: fld dword ptr [0x970428] */ FPUSH(R_F32((u32)(0x970428u)));
    /* 007200cd: fadd dword ptr [esp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x48u));
    /* 007200d1: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 007200d4: fcom dword ptr [0x970448] */ fx_compare(ST(0), R_F32((u32)(0x970448u))); 
    /* 007200da: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007200dc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007200dd: jae 0x7200e3 */ if (!fC) goto L_007200e3;
L_007200df:; BB(0x007200df);
    /* 007200df: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007200e1: jmp 0x720115 */ goto L_00720115;
L_007200e3:; BB(0x007200e3);
    /* 007200e3: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007200e7: fadd dword ptr [0x970440] */ ST(0) = ST(0) + R_F32((u32)(0x970440u));
    /* 007200ed: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 007200f0: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007200f3: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 007200f6: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 007200f8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007200fa: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 007200fd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007200ff: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00720103: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00720105: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00720108: mov dword ptr [esp + 0x20], 0x3f020000 */ W32((u32)(r_esp+0x20u), 0x3f020000u);
    /* 00720110: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x720115u); f_0082bb74();
L_00720115:; BB(0x00720115);
    /* 00720115: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00720119: fld dword ptr [0x970420] */ FPUSH(R_F32((u32)(0x970420u)));
    /* 0072011f: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00720121: fdiv dword ptr [0x970434] */ ST(0) = ST(0) / R_F32((u32)(0x970434u));
    /* 00720127: fld dword ptr [ebx + 0x4c] */ FPUSH(R_F32((u32)(r_ebx+0x4cu)));
    /* 0072012a: fld dword ptr [ebx + 0x44] */ FPUSH(R_F32((u32)(r_ebx+0x44u)));
    /* 0072012d: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0072012f: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 00720132: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720134: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 00720136: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720138: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0072013a: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0072013e: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 00720141: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00720143: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00720145: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720147: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 0072014a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0072014c: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00720150: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00720152: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720154: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00720158: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0072015a: add esp, -0x18 */ {  u32 a = r_esp; u32 b = 0xffffffe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072015d: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00720161: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720163: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00720167: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0072016b: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0072016f: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00720173: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00720176: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0072017a: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0072017e: call 0x720308 */ r_esp -= 4; W32(r_esp, 0x720183u); f_00720308();
    /* 00720183: fld dword ptr [0x970428] */ FPUSH(R_F32((u32)(0x970428u)));
    /* 00720189: fadd dword ptr [ebx + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4cu));
    /* 0072018c: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 0072018f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00720191: fcom dword ptr [0x970448] */ fx_compare(ST(0), R_F32((u32)(0x970448u))); 
    /* 00720197: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00720199: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072019a: jae 0x7201a5 */ if (!fC) goto L_007201a5;
L_0072019c:; BB(0x0072019c);
    /* 0072019c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0072019e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007201a0: jmp 0x7202fa */ goto L_007202fa;
L_007201a5:; BB(0x007201a5);
    /* 007201a5: fld dword ptr [0x970440] */ FPUSH(R_F32((u32)(0x970440u)));
    /* 007201ab: fld dword ptr [ebx + 0x44] */ FPUSH(R_F32((u32)(r_ebx+0x44u)));
    /* 007201ae: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007201b0: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 007201b4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007201b6: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 007201b9: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 007201bd: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 007201c0: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 007201c2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007201c4: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 007201c7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007201c9: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007201cd: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 007201d1: fcomp dword ptr [0x970444] */ fx_compare(ST(0), R_F32((u32)(0x970444u))); FPOP();
    /* 007201d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007201d9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007201db: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007201df: mov dword ptr [esp + 0x24], 0x3e000000 */ W32((u32)(r_esp+0x24u), 0x3e000000u);
    /* 007201e7: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007201e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007201ea: jae 0x7201fa */ if (!fC) goto L_007201fa;
L_007201ec:; BB(0x007201ec);
    /* 007201ec: fld dword ptr [0x97043c] */ FPUSH(R_F32((u32)(0x97043cu)));
    /* 007201f2: fmul dword ptr [esp + 0x48] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x48u));
    /* 007201f6: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_007201fa:; BB(0x007201fa);
    /* 007201fa: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007201fe: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 00720201: fsub dword ptr [0x970418] */ ST(0) = ST(0) - R_F32((u32)(0x970418u));
    /* 00720207: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720209: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0072020d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072020f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00720211: fld dword ptr [0x970434] */ FPUSH(R_F32((u32)(0x970434u)));
    /* 00720217: fdivr st(2) */ ST(0) = ST(2) / ST(0);
    /* 00720219: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072021b: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 0072021f: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00720222: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720224: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00720228: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0072022b: mov dword ptr [esp + 0x20], 0x3ec40000 */ W32((u32)(r_esp+0x20u), 0x3ec40000u);
    /* 00720233: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00720235: fchs  */ ST(0) = -ST(0);
    /* 00720237: fmul dword ptr [0x97044c] */ ST(0) = ST(0) * R_F32((u32)(0x97044cu));
    /* 0072023d: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 00720241: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00720244: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00720247: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 00720249: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0072024b: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 0072024e: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00720250: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00720252: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00720255: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 00720258: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0072025a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0072025e: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 00720261: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00720265: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x72026au); f_0082bb74();
    /* 0072026a: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0072026e: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00720272: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00720274: fsubr dword ptr [0x97042c] */ ST(0) = R_F32((u32)(0x97042cu)) - ST(0);
    /* 0072027a: fdiv dword ptr [0x970434] */ ST(0) = ST(0) / R_F32((u32)(0x970434u));
    /* 00720280: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720282: fadd dword ptr [esp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x40u));
    /* 00720286: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00720289: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0072028c: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0072028f: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00720291: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720293: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 00720296: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00720298: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0072029c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0072029e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007202a1: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x7202a6u); f_0082bb74();
    /* 007202a6: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 007202aa: fadd dword ptr [0x970428] */ ST(0) = ST(0) + R_F32((u32)(0x970428u));
    /* 007202b0: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 007202b3: fcom dword ptr [0x970448] */ fx_compare(ST(0), R_F32((u32)(0x970448u))); 
    /* 007202b9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007202bb: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 007202bf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007202c0: jb 0x7202fa */ if (fC) goto L_007202fa;
L_007202c2:; BB(0x007202c2);
    /* 007202c2: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 007202c6: fadd dword ptr [0x970440] */ ST(0) = ST(0) + R_F32((u32)(0x970440u));
    /* 007202cc: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 007202d0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007202d2: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 007202d5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007202d8: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 007202db: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 007202dd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007202df: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 007202e2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007202e4: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007202e8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007202ea: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007202ed: mov dword ptr [esp + 0x20], 0x3f020000 */ W32((u32)(r_esp+0x20u), 0x3f020000u);
    /* 007202f5: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x7202fau); f_0082bb74();
L_007202fa:; BB(0x007202fa);
    /* 007202fa: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x7202ffu); f_004ac444();
    /* 007202ff: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00720302: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00720303: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00720304: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00720305: ret 0x10 */ FN_RET(0x0071ff10); r_esp += 20; return;
}

