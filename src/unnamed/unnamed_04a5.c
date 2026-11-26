#include "protos.h"

void f_004a51c0(void) /* sub_4A51C0 */
{
    FN_ENTER(0x004a51c0);
    /* 004a51c0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a51c3: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 004a51c7: mov edx, dword ptr [0x9038dc] */ r_edx = R32((u32)(0x9038dcu));
    /* 004a51cd: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004a51d0: mov edx, dword ptr [0x9038ec] */ r_edx = R32((u32)(0x9038ecu));
    /* 004a51d6: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 004a51de: mov dword ptr [esp + 8], 0x41200000 */ W32((u32)(r_esp+0x8u), 0x41200000u);
    /* 004a51e6: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004a51ea: mov edx, dword ptr [0xa47640] */ r_edx = R32((u32)(0xa47640u));
    /* 004a51f0: mov dword ptr [esp + 0xc], 0x41a00000 */ W32((u32)(r_esp+0xcu), 0x41a00000u);
    /* 004a51f8: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 004a51fb: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004a51ff: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a5203: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a5206: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5208: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a5209: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a520d: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x4a5212u); f_0051fc9c();
    /* 004a5212: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a5215: ret 8 */ FN_RET(0x004a51c0); r_esp += 12; return;
}

void f_004a5218(void) /* sub_4A5218 */
{
    FN_ENTER(0x004a5218);
    /* 004a5218: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a5219: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a521a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a521b: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a521e: mov esi, ecx */ r_esi = r_ecx;
    /* 004a5220: mov ebp, dword ptr [esp + 0x6c] */ r_ebp = R32((u32)(r_esp+0x6cu));
    /* 004a5224: lea edi, [esi + 0x5fc] */ r_edi = (u32)(r_esi+0x5fcu);
    /* 004a522a: mov ecx, edi */ r_ecx = r_edi;
    /* 004a522c: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4a5231u); f_00763498();
    /* 004a5231: fld dword ptr [0x903cec] */ FPUSH(R_F32((u32)(0x903cecu)));
    /* 004a5237: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004a523a: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004a523e: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004a5242: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004a5245: fadd dword ptr [eax*4 + 0x903a80] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x903a80u));
    /* 004a524c: fdiv dword ptr [0x903cf8] */ ST(0) = ST(0) / R_F32((u32)(0x903cf8u));
    /* 004a5252: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a5254: mov ecx, edi */ r_ecx = r_edi;
    /* 004a5256: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a5258: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 004a525c: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4a5261u); f_00763498();
    /* 004a5261: fild dword ptr [esi + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x60u)));
    /* 004a5264: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004a5267: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004a526b: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004a526f: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004a5272: fadd dword ptr [eax*4 + 0x903a80] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x903a80u));
    /* 004a5279: fdiv dword ptr [0x903cf8] */ ST(0) = ST(0) / R_F32((u32)(0x903cf8u));
    /* 004a527f: fmul dword ptr [0x903ce8] */ ST(0) = ST(0) * R_F32((u32)(0x903ce8u));
    /* 004a5285: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a5287: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 004a528b: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 004a5290: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a5295: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004a5299: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 004a529d: fistp dword ptr [esp + 0x50] */ W32((u32)(r_esp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a52a1: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004a52a5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a52a7: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 004a52ab: je 0x4a52c7 */ if (fZ) goto L_004a52c7;
L_004a52ad:; BB(0x004a52ad);
    /* 004a52ad: mov ecx, dword ptr [esi + 0x6e4] */ r_ecx = R32((u32)(r_esi+0x6e4u));
    /* 004a52b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a52b5: je 0x4a541e */ if (fZ) goto L_004a541e;
L_004a52bb:; BB(0x004a52bb);
    /* 004a52bb: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004a52bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a52c0: call 0x4a9740 */ r_esp -= 4; W32(r_esp, 0x4a52c5u); f_004a9740();
    /* 004a52c5: jmp 0x4a52df */ goto L_004a52df;
L_004a52c7:; BB(0x004a52c7);
    /* 004a52c7: mov ecx, dword ptr [esi + 0x6e8] */ r_ecx = R32((u32)(r_esi+0x6e8u));
    /* 004a52cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a52cf: je 0x4a541e */ if (fZ) goto L_004a541e;
L_004a52d5:; BB(0x004a52d5);
    /* 004a52d5: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004a52d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a52da: call 0x4a9740 */ r_esp -= 4; W32(r_esp, 0x4a52dfu); f_004a9740();
L_004a52df:; BB(0x004a52df);
    /* 004a52df: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004a52e3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a52e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a52e7: mov ecx, esi */ r_ecx = r_esi;
    /* 004a52e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a52ea: push dword ptr [esp + 0x78] */ { u32 v = R32((u32)(r_esp+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a52ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a52ef: call 0x4a5428 */ r_esp -= 4; W32(r_esp, 0x4a52f4u); f_004a5428();
    /* 004a52f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a52f6: jne 0x4a53d0 */ if (!fZ) goto L_004a53d0;
L_004a52fc:; BB(0x004a52fc);
    /* 004a52fc: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a52fe: je 0x4a5330 */ if (fZ) goto L_004a5330;
L_004a5300:; BB(0x004a5300);
    /* 004a5300: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 004a5304: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 004a5308: fadd dword ptr [0x903cf4] */ ST(0) = ST(0) + R_F32((u32)(0x903cf4u));
    /* 004a530e: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 004a5312: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 004a5317: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a531c: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004a5320: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 004a5324: fistp dword ptr [esp + 0x50] */ W32((u32)(r_esp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a5328: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004a532c: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_004a5330:; BB(0x004a5330);
    /* 004a5330: mov ecx, edi */ r_ecx = r_edi;
    /* 004a5332: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4a5337u); f_0082dcbc();
    /* 004a5337: fmul dword ptr [esp + 0x58] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x58u));
    /* 004a533b: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 004a533e: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 004a5341: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004a5344: mov ecx, edi */ r_ecx = r_edi;
    /* 004a5346: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004a534a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a534fu); f_0082ddd8();
    /* 004a534f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004a5353: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a5355: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 004a5358: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004a535b: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004a535f: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 004a5363: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004a5367: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004a536b: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 004a536f: lea ebp, [esp + 0x18] */ r_ebp = (u32)(r_esp+0x18u);
    /* 004a5373: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 004a5378: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a5379: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x4a537eu); f_00780630();
    /* 004a537e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a5381: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5383: je 0x4a539c */ if (fZ) goto L_004a539c;
L_004a5385:; BB(0x004a5385);
    /* 004a5385: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004a5388: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004a538b: fcomp dword ptr [0x903ae0] */ fx_compare(ST(0), R_F32((u32)(0x903ae0u))); FPOP();
    /* 004a5391: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a5393: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a5394: ja 0x4a539c */ if ((!fC&&!fZ)) goto L_004a539c;
L_004a5396:; BB(0x004a5396);
    /* 004a5396: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004a539a: jmp 0x4a53d4 */ goto L_004a53d4;
L_004a539c:; BB(0x004a539c);
    /* 004a539c: mov ecx, edi */ r_ecx = r_edi;
    /* 004a539e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4a53a3u); f_0082dcbc();
    /* 004a53a3: fld dword ptr [0x903cec] */ FPUSH(R_F32((u32)(0x903cecu)));
    /* 004a53a9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a53ab: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 004a53ae: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 004a53b1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004a53b4: mov ecx, edi */ r_ecx = r_edi;
    /* 004a53b6: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004a53ba: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a53bfu); f_0082ddd8();
    /* 004a53bf: fld dword ptr [0x903cec] */ FPUSH(R_F32((u32)(0x903cecu)));
    /* 004a53c5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a53c7: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 004a53ca: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 004a53ce: jmp 0x4a53d4 */ goto L_004a53d4;
L_004a53d0:; BB(0x004a53d0);
    /* 004a53d0: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
L_004a53d4:; BB(0x004a53d4);
    /* 004a53d4: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 004a53d8: fld dword ptr [0x903cf0] */ FPUSH(R_F32((u32)(0x903cf0u)));
    /* 004a53de: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004a53e0: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004a53e4: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 004a53e7: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004a53eb: fadd dword ptr [0x903ce4] */ ST(0) = ST(0) + R_F32((u32)(0x903ce4u));
    /* 004a53f1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a53f3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a53f5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a53f7: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004a53fb: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a53ff: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004a5403: lea ebp, [esp + 0xc] */ r_ebp = (u32)(r_esp+0xcu);
    /* 004a5407: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 004a540b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a540e: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5410: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5412: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a5413: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5414: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a5415: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a5416: call 0x4aa4ec */ r_esp -= 4; W32(r_esp, 0x4a541bu); f_004aa4ec();
    /* 004a541b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a541e:; BB(0x004a541e);
    /* 004a541e: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a5421: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a5422: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a5423: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a5424: ret 8 */ FN_RET(0x004a5218); r_esp += 12; return;
}

void f_004a5428(void) /* sub_4A5428 */
{
    FN_ENTER(0x004a5428);
    /* 004a5428: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a5429: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a542a: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a542d: mov esi, ecx */ r_esi = r_ecx;
    /* 004a542f: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a5433: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4a5438u); f_0068d5a8();
    /* 004a5438: mov ebp, eax */ r_ebp = r_eax;
    /* 004a543a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a543d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a543f: je 0x4a54fb */ if (fZ) goto L_004a54fb;
L_004a5445:; BB(0x004a5445);
    /* 004a5445: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 004a5448: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 004a544b: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 004a544d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004a544f: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 004a5452: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 004a5455: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 004a5457: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004a5459: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004a545b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a545d: fcomp dword ptr [0x903ce0] */ fx_compare(ST(0), R_F32((u32)(0x903ce0u))); FPOP();
    /* 004a5463: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a5465: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a5466: jae 0x4a5476 */ if (!fC) goto L_004a5476;
L_004a5468:; BB(0x004a5468);
    /* 004a5468: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a546a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a546c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a546e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a5471: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a5472: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a5473: ret 0x10 */ FN_RET(0x004a5428); r_esp += 20; return;
L_004a5476:; BB(0x004a5476);
    /* 004a5476: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 004a547a: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 004a547c: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 004a547e: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 004a5482: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 004a5485: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004a5487: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004a5489: fmul qword ptr [0x903a78] */ ST(0) = ST(0) * R_F64((u32)(0x903a78u));
    /* 004a548f: fdiv qword ptr [0x903a70] */ ST(0) = ST(0) / R_F64((u32)(0x903a70u));
    /* 004a5495: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a5498: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a549c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a54a1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a54a5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a54a9: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a54ad: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a54b0: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004a54b4: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a54b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a54b8: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x4a54bdu); f_007a900c();
    /* 004a54bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a54c0: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 004a54c4: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 004a54c7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a54c9: je 0x4a54e8 */ if (fZ) goto L_004a54e8;
L_004a54cb:; BB(0x004a54cb);
    /* 004a54cb: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 004a54cf: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004a54d3: fcomp dword ptr [0x903ce8] */ fx_compare(ST(0), R_F32((u32)(0x903ce8u))); FPOP();
    /* 004a54d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a54db: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a54dc: jbe 0x4a5505 */ if ((fC||fZ)) goto L_004a5505;
L_004a54de:; BB(0x004a54de);
    /* 004a54de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a54e0: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a54e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a54e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a54e5: ret 0x10 */ FN_RET(0x004a5428); r_esp += 20; return;
L_004a54e8:; BB(0x004a54e8);
    /* 004a54e8: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 004a54ec: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004a54f0: fcomp dword ptr [0x903cdc] */ fx_compare(ST(0), R_F32((u32)(0x903cdcu))); FPOP();
    /* 004a54f6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a54f8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a54f9: jae 0x4a5505 */ if (!fC) goto L_004a5505;
L_004a54fb:; BB(0x004a54fb);
    /* 004a54fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a54fd: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a5500: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a5501: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a5502: ret 0x10 */ FN_RET(0x004a5428); r_esp += 20; return;
L_004a5505:; BB(0x004a5505);
    /* 004a5505: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 004a5509: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 004a550c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 004a550e: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 004a5512: mov esi, dword ptr [ebp + 0x3c] */ r_esi = R32((u32)(r_ebp+0x3cu));
    /* 004a5515: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 004a5518: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 004a551b: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 004a551f: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 004a5522: mov eax, 1 */ r_eax = 0x1u;
    /* 004a5527: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a552a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a552b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a552c: ret 0x10 */ FN_RET(0x004a5428); r_esp += 20; return;
}

void f_004a5530(void) /* sub_4A5530 */
{
    FN_ENTER(0x004a5530);
    /* 004a5530: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5531: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a5533: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004a5537: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a553a: je 0x4a559a */ if (fZ) goto L_004a559a;
L_004a553c:; BB(0x004a553c);
    /* 004a553c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a553f: je 0x4a5596 */ if (fZ) goto L_004a5596;
L_004a5541:; BB(0x004a5541);
    /* 004a5541: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a5544: je 0x4a5596 */ if (fZ) goto L_004a5596;
L_004a5546:; BB(0x004a5546);
    /* 004a5546: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a5549: je 0x4a5596 */ if (fZ) goto L_004a5596;
L_004a554b:; BB(0x004a554b);
    /* 004a554b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a554d: jne 0x4a5596 */ if (!fZ) goto L_004a5596;
L_004a554f:; BB(0x004a554f);
    /* 004a554f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a5551: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a5556u); f_007aa094();
    /* 004a5556: push 0x40c00000 */ { u32 v = 0x40c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a555b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a555d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a5562u); f_007aaa30();
    /* 004a5562: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 004a5564: je 0x4a557e */ if (fZ) goto L_004a557e;
L_004a5566:; BB(0x004a5566);
    /* 004a5566: lea edx, [ebx + 0x568] */ r_edx = (u32)(r_ebx+0x568u);
    /* 004a556c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a556e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a556f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a5570: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5571: push 0x3aa */ { u32 v = 0x3aau; r_esp -= 4; W32(r_esp, v); }
    /* 004a5576: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a557bu); f_00814298();
    /* 004a557b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_004a557e:; BB(0x004a557e);
    /* 004a557e: fld dword ptr [ebx + 0xc8] */ FPUSH(R_F32((u32)(r_ebx+0xc8u)));
    /* 004a5584: fcomp dword ptr [0x903cd4] */ fx_compare(ST(0), R_F32((u32)(0x903cd4u))); FPOP();
    /* 004a558a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a558c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a558d: ja 0x4a5596 */ if ((!fC&&!fZ)) goto L_004a5596;
L_004a558f:; BB(0x004a558f);
    /* 004a558f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a5591: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a5596u); f_004a7e20();
L_004a5596:; BB(0x004a5596);
    /* 004a5596: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a5597: ret 4 */ FN_RET(0x004a5530); r_esp += 8; return;
L_004a559a:; BB(0x004a559a);
    /* 004a559a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004a559c: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004a55a1: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004a55a8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a55aa: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a55b0u); call_ind(t); }
    /* 004a55b0: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a55b5: mov dword ptr [ebx + 0x4ec], 0 */ W32((u32)(r_ebx+0x4ecu), 0x0u);
    /* 004a55bf: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 004a55c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a55c3: ret 4 */ FN_RET(0x004a5530); r_esp += 8; return;
}

void f_004a55c8(void) /* sub_4A55C8 */
{
    FN_ENTER(0x004a55c8);
    /* 004a55c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a55c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a55ca: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004a55cc: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004a55d0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a55d3: je 0x4a56e7 */ if (fZ) goto L_004a56e7;
L_004a55d9:; BB(0x004a55d9);
    /* 004a55d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a55db: jne 0x4a56b6 */ if (!fZ) goto L_004a56b6;
L_004a55e1:; BB(0x004a55e1);
    /* 004a55e1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a55e3: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a55e8u); f_007aa094();
    /* 004a55e8: mov eax, dword ptr [ebp + 0x6e4] */ r_eax = R32((u32)(r_ebp+0x6e4u));
    /* 004a55ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a55f0: jne 0x4a5647 */ if (!fZ) goto L_004a5647;
L_004a55f2:; BB(0x004a55f2);
    /* 004a55f2: fld dword ptr [0x903ccc] */ FPUSH(R_F32((u32)(0x903cccu)));
    /* 004a55f8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004a55fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a55fd: call 0x7aabd8 */ r_esp -= 4; W32(r_esp, 0x4a5602u); f_007aabd8();
    /* 004a5602: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004a5604: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5609: fld dword ptr [0x903fd8] */ FPUSH(R_F32((u32)(0x903fd8u)));
    /* 004a560f: fld dword ptr [0xa475d4] */ FPUSH(R_F32((u32)(0xa475d4u)));
    /* 004a5615: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004a5617: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a5619: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a561b: fdiv dword ptr [0x903cc8] */ ST(0) = ST(0) / R_F32((u32)(0x903cc8u));
    /* 004a5621: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a5623: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a5625: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004a5628: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a562du); f_007aaa30();
    /* 004a562d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a562f: je 0x4a5699 */ if (fZ) goto L_004a5699;
L_004a5631:; BB(0x004a5631);
    /* 004a5631: mov dword ptr [ebp + 0x6e8], 0 */ W32((u32)(r_ebp+0x6e8u), 0x0u);
    /* 004a563b: mov dword ptr [ebp + 0x6e4], 1 */ W32((u32)(r_ebp+0x6e4u), 0x1u);
    /* 004a5645: jmp 0x4a5699 */ goto L_004a5699;
L_004a5647:; BB(0x004a5647);
    /* 004a5647: fldz  */ FPUSH(0.0);
    /* 004a5649: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004a564c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a564f: jne 0x4a5699 */ if (!fZ) goto L_004a5699;
L_004a5651:; BB(0x004a5651);
    /* 004a5651: fld dword ptr [0x903ccc] */ FPUSH(R_F32((u32)(0x903cccu)));
    /* 004a5657: fld dword ptr [0x903cc0] */ FPUSH(R_F32((u32)(0x903cc0u)));
    /* 004a565d: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004a5660: mov eax, dword ptr [ebp + 0x6e8] */ r_eax = R32((u32)(r_ebp+0x6e8u));
    /* 004a5666: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004a5669: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004a566c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a566f: mov dword ptr [ebp + 0x6e8], eax */ W32((u32)(r_ebp+0x6e8u), r_eax);
    /* 004a5675: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a5678: jl 0x4a5699 */ if ((fS!=fO)) goto L_004a5699;
L_004a567a:; BB(0x004a567a);
    /* 004a567a: mov dword ptr [ebp + 0x4ec], 3 */ W32((u32)(r_ebp+0x4ecu), 0x3u);
    /* 004a5684: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a5686: mov dword ptr [ebp + 0x3c], 0x45fa0000 */ W32((u32)(r_ebp+0x3cu), 0x45fa0000u);
    /* 004a568d: mov dword ptr [ebp + 0x5c], 0x4000 */ W32((u32)(r_ebp+0x5cu), 0x4000u);
    /* 004a5694: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a5699u); f_004a7e20();
L_004a5699:; BB(0x004a5699);
    /* 004a5699: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 004a569c: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a569f: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004a56a3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004a56a6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a56a8: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004a56ac: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a56b1u); f_004a15ac();
    /* 004a56b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a56b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a56b3: ret 4 */ FN_RET(0x004a55c8); r_esp += 8; return;
L_004a56b6:; BB(0x004a56b6);
    /* 004a56b6: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a56b9: jne 0x4a572c */ if (!fZ) goto L_004a572c;
L_004a56bb:; BB(0x004a56bb);
    /* 004a56bb: mov eax, dword ptr [ebp + 0x4c8] */ r_eax = R32((u32)(r_ebp+0x4c8u));
    /* 004a56c1: mov dword ptr [ebp + 0x4ec], 3 */ W32((u32)(r_ebp+0x4ecu), 0x3u);
    /* 004a56cb: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a56ce: mov dword ptr [ebp + 0x4c8], eax */ W32((u32)(r_ebp+0x4c8u), r_eax);
    /* 004a56d4: mov dword ptr [ebp + 0x3c], 0x45fa0000 */ W32((u32)(r_ebp+0x3cu), 0x45fa0000u);
    /* 004a56db: mov dword ptr [ebp + 0x5c], 0x4000 */ W32((u32)(r_ebp+0x5cu), 0x4000u);
    /* 004a56e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a56e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a56e4: ret 4 */ FN_RET(0x004a55c8); r_esp += 8; return;
L_004a56e7:; BB(0x004a56e7);
    /* 004a56e7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004a56ea: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004a56ef: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004a56f6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a56f8: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a56feu); call_ind(t); }
    /* 004a56fe: mov eax, dword ptr [ebp + 0x4c8] */ r_eax = R32((u32)(r_ebp+0x4c8u));
    /* 004a5704: mov dword ptr [ebp + 0x4ec], 1 */ W32((u32)(r_ebp+0x4ecu), 0x1u);
    /* 004a570e: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a5711: mov dword ptr [ebp + 0x4c8], eax */ W32((u32)(r_ebp+0x4c8u), r_eax);
    /* 004a5717: mov dword ptr [ebp + 0x3c], 0x43340000 */ W32((u32)(r_ebp+0x3cu), 0x43340000u);
    /* 004a571e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a5720: mov dword ptr [ebp + 0x6e8], edx */ W32((u32)(r_ebp+0x6e8u), r_edx);
    /* 004a5726: mov dword ptr [ebp + 0x6e4], edx */ W32((u32)(r_ebp+0x6e4u), r_edx);
L_004a572c:; BB(0x004a572c);
    /* 004a572c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a572d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a572e: ret 4 */ FN_RET(0x004a55c8); r_esp += 8; return;
}

void f_004a5734(void) /* sub_4A5734 */
{
    FN_ENTER(0x004a5734);
    /* 004a5734: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a5735: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a5736: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a5737: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a573a: mov esi, ecx */ r_esi = r_ecx;
    /* 004a573c: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 004a5740: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5743: je 0x4a5d17 */ if (fZ) goto L_004a5d17;
L_004a5749:; BB(0x004a5749);
    /* 004a5749: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a574b: je 0x4a57b0 */ if (fZ) goto L_004a57b0;
L_004a574d:; BB(0x004a574d);
    /* 004a574d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5750: jne 0x4a5780 */ if (!fZ) goto L_004a5780;
L_004a5752:; BB(0x004a5752);
    /* 004a5752: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a5757: mov ebp, dword ptr [esi + 0x4c8] */ r_ebp = R32((u32)(r_esi+0x4c8u));
    /* 004a575d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004a575f: mov dword ptr [esi + 0x4ec], edx */ W32((u32)(r_esi+0x4ecu), r_edx);
    /* 004a5765: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 004a5768: mov dword ptr [esi + 0x5c], edx */ W32((u32)(r_esi+0x5cu), r_edx);
    /* 004a576b: mov dword ptr [esi + 0x64], edx */ W32((u32)(r_esi+0x64u), r_edx);
    /* 004a576e: and ebp, 0xfffffffb */ {  u32 a = r_ebp; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 004a5771: mov dword ptr [esi + 0x4c8], ebp */ W32((u32)(r_esi+0x4c8u), r_ebp);
    /* 004a5777: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a577a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a577b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a577c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a577d: ret 4 */ FN_RET(0x004a5734); r_esp += 8; return;
L_004a5780:; BB(0x004a5780);
    /* 004a5780: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5783: jne 0x4a5926 */ if (!fZ) goto L_004a5926;
L_004a5789:; BB(0x004a5789);
    /* 004a5789: mov eax, dword ptr [esi + 0x6e4] */ r_eax = R32((u32)(r_esi+0x6e4u));
    /* 004a578f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004a5791: jl 0x4a5926 */ if ((fS!=fO)) goto L_004a5926;
L_004a5797:; BB(0x004a5797);
    /* 004a5797: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a579a: jg 0x4a5926 */ if ((!fZ&&fS==fO)) goto L_004a5926;
L_004a57a0:; BB(0x004a57a0);
    /* 004a57a0: mov ecx, esi */ r_ecx = r_esi;
    /* 004a57a2: call 0x4a12dc */ r_esp -= 4; W32(r_esp, 0x4a57a7u); f_004a12dc();
    /* 004a57a7: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a57aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a57ab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a57ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a57ad: ret 4 */ FN_RET(0x004a5734); r_esp += 8; return;
L_004a57b0:; BB(0x004a57b0);
    /* 004a57b0: mov ecx, esi */ r_ecx = r_esi;
    /* 004a57b2: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a57b7u); f_007aa094();
    /* 004a57b7: mov eax, dword ptr [esi + 0x6e4] */ r_eax = R32((u32)(r_esi+0x6e4u));
    /* 004a57bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a57bf: je 0x4a592f */ if (fZ) goto L_004a592f;
L_004a57c5:; BB(0x004a57c5);
    /* 004a57c5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a57c8: je 0x4a5878 */ if (fZ) goto L_004a5878;
L_004a57ce:; BB(0x004a57ce);
    /* 004a57ce: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a57d1: jne 0x4a5926 */ if (!fZ) goto L_004a5926;
L_004a57d7:; BB(0x004a57d7);
    /* 004a57d7: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a57da: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a57df: mov ecx, esi */ r_ecx = r_esi;
    /* 004a57e1: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a57e6u); f_004a15ac();
    /* 004a57e6: push 0x41880000 */ { u32 v = 0x41880000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a57eb: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 004a57ee: fsub dword ptr [esi + 0x6fc] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x6fcu));
    /* 004a57f4: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 004a57f7: mov ecx, esi */ r_ecx = r_esi;
    /* 004a57f9: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a57feu); f_007aaa30();
    /* 004a57fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5800: je 0x4a5926 */ if (fZ) goto L_004a5926;
L_004a5806:; BB(0x004a5806);
    /* 004a5806: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a580b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004a580d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a580e: mov dword ptr [esi + 0x4ec], edx */ W32((u32)(r_esi+0x4ecu), r_edx);
    /* 004a5814: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 004a5817: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5818: lea ebp, [esi + 0x568] */ r_ebp = (u32)(r_esi+0x568u);
    /* 004a581e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a581f: push 0x3a7 */ { u32 v = 0x3a7u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5824: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a5829u); f_00814298();
    /* 004a5829: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 004a582c: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 004a582f: mov ebp, dword ptr [esi + 0x5f8] */ r_ebp = R32((u32)(r_esi+0x5f8u));
    /* 004a5835: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a5839: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004a583d: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004a5845: lea edi, [esp + 0x10] */ r_edi = (u32)(r_esp+0x10u);
    /* 004a5849: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a584b: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a584e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a584f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a5854u); f_0050b7a4();
    /* 004a5854: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5856: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x4a585bu); f_004d4288();
    /* 004a585b: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a585e: mov ecx, esi */ r_ecx = r_esi;
    /* 004a5860: call 0x4a1f34 */ r_esp -= 4; W32(r_esp, 0x4a5865u); f_004a1f34();
    /* 004a5865: mov dword ptr [esi + 0x6e4], 3 */ W32((u32)(r_esi+0x6e4u), 0x3u);
    /* 004a586f: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a5872: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a5873: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a5874: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a5875: ret 4 */ FN_RET(0x004a5734); r_esp += 8; return;
L_004a5878:; BB(0x004a5878);
    /* 004a5878: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a587b: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5880: mov ecx, esi */ r_ecx = r_esi;
    /* 004a5882: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a5887u); f_004a15ac();
    /* 004a5887: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 004a588a: fsub dword ptr [esi + 0x6fc] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x6fcu));
    /* 004a5890: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 004a5893: mov ecx, esi */ r_ecx = r_esi;
    /* 004a5895: call 0x7aabd8 */ r_esp -= 4; W32(r_esp, 0x4a589au); f_007aabd8();
    /* 004a589a: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a589f: fld dword ptr [0x903cac] */ FPUSH(R_F32((u32)(0x903cacu)));
    /* 004a58a5: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 004a58a7: fadd dword ptr [0x903cbc] */ ST(0) = ST(0) + R_F32((u32)(0x903cbcu));
    /* 004a58ad: fmul dword ptr [0x903cb0] */ ST(0) = ST(0) * R_F32((u32)(0x903cb0u));
    /* 004a58b3: fld dword ptr [0x903c7c] */ FPUSH(R_F32((u32)(0x903c7cu)));
    /* 004a58b9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a58bb: fadd dword ptr [0x903cb4] */ ST(0) = ST(0) + R_F32((u32)(0x903cb4u));
    /* 004a58c1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a58c3: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 004a58c5: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 004a58c9: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 004a58ce: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a58d3: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004a58d7: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004a58db: fistp dword ptr [esi + 0x5c] */ W32((u32)(r_esi+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004a58de: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004a58e2: mov ecx, esi */ r_ecx = r_esi;
    /* 004a58e4: fld dword ptr [0x903ca8] */ FPUSH(R_F32((u32)(0x903ca8u)));
    /* 004a58ea: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a58ec: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a58ee: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 004a58f2: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 004a58f7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a58fc: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004a5900: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004a5904: fistp dword ptr [esi + 0x64] */ W32((u32)(r_esi+0x64u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a5907: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004a590b: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a5910u); f_007aaa30();
    /* 004a5910: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5912: je 0x4a5926 */ if (fZ) goto L_004a5926;
L_004a5914:; BB(0x004a5914);
    /* 004a5914: mov dword ptr [esi + 0x6e4], 2 */ W32((u32)(r_esi+0x6e4u), 0x2u);
    /* 004a591e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a5920: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 004a5923: mov dword ptr [esi + 0x64], eax */ W32((u32)(r_esi+0x64u), r_eax);
L_004a5926:; BB(0x004a5926);
    /* 004a5926: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a5929: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a592a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a592b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a592c: ret 4 */ FN_RET(0x004a5734); r_esp += 8; return;
L_004a592f:; BB(0x004a592f);
    /* 004a592f: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 004a5932: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 004a5935: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004a5937: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 004a593a: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 004a593d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004a593f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004a5941: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a5943: fcomp dword ptr [0x903ca0] */ fx_compare(ST(0), R_F32((u32)(0x903ca0u))); FPOP();
    /* 004a5949: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a594b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a594c: jbe 0x4a5995 */ if ((fC||fZ)) goto L_004a5995;
L_004a594e:; BB(0x004a594e);
    /* 004a594e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a5950: fchs  */ ST(0) = -ST(0);
    /* 004a5952: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a5954: fchs  */ ST(0) = -ST(0);
    /* 004a5956: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004a5958: fmul qword ptr [0x903a68] */ ST(0) = ST(0) * R_F64((u32)(0x903a68u));
    /* 004a595e: fdiv qword ptr [0x903a60] */ ST(0) = ST(0) / R_F64((u32)(0x903a60u));
    /* 004a5964: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 004a5968: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 004a596d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a5972: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004a5976: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 004a597a: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a597e: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004a5982: mov ecx, esi */ r_ecx = r_esi;
    /* 004a5984: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 004a5988: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a5989: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 004a598e: call 0x4a5e10 */ r_esp -= 4; W32(r_esp, 0x4a5993u); f_004a5e10();
    /* 004a5993: jmp 0x4a59e9 */ goto L_004a59e9;
L_004a5995:; BB(0x004a5995);
    /* 004a5995: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004a5997: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a5999: mov ecx, esi */ r_ecx = r_esi;
    /* 004a599b: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x4a59a0u); f_00521410();
    /* 004a59a0: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 004a59a6: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 004a59ac: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004a59ae: fmul qword ptr [0x903a68] */ ST(0) = ST(0) * R_F64((u32)(0x903a68u));
    /* 004a59b4: fdiv qword ptr [0x903a60] */ ST(0) = ST(0) / R_F64((u32)(0x903a60u));
    /* 004a59ba: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 004a59be: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 004a59c3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a59c8: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004a59cc: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 004a59d0: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a59d4: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004a59d8: mov ecx, esi */ r_ecx = r_esi;
    /* 004a59da: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 004a59de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a59df: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 004a59e4: call 0x4a5e10 */ r_esp -= 4; W32(r_esp, 0x4a59e9u); f_004a5e10();
L_004a59e9:; BB(0x004a59e9);
    /* 004a59e9: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a59ee: mov ecx, esi */ r_ecx = r_esi;
    /* 004a59f0: call 0x4a5e90 */ r_esp -= 4; W32(r_esp, 0x4a59f5u); f_004a5e90();
    /* 004a59f5: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 004a59f8: fsub dword ptr [esi + 0x6fc] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x6fcu));
    /* 004a59fe: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
    /* 004a5a01: mov edx, dword ptr [esi + 0x6f0] */ r_edx = R32((u32)(r_esi+0x6f0u));
    /* 004a5a07: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 004a5a0a: add eax, 0x3311 */ {  u32 a = r_eax; u32 b = 0x3311u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a5a0f: cmp edx, dword ptr [esi + 0x6e8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x6e8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a5a15: mov dword ptr [esi + 0x64], eax */ W32((u32)(r_esi+0x64u), r_eax);
    /* 004a5a18: jge 0x4a5cea */ if ((fS==fO)) goto L_004a5cea;
L_004a5a1e:; BB(0x004a5a1e);
    /* 004a5a1e: lea edi, [esi + 0x5fc] */ r_edi = (u32)(r_esi+0x5fcu);
    /* 004a5a24: mov ecx, edi */ r_ecx = r_edi;
    /* 004a5a26: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4a5a2bu); f_00763498();
    /* 004a5a2b: fld dword ptr [0x903cb4] */ FPUSH(R_F32((u32)(0x903cb4u)));
    /* 004a5a31: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004a5a34: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004a5a38: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 004a5a3c: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004a5a3f: fadd dword ptr [eax*4 + 0x903a58] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x903a58u));
    /* 004a5a46: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004a5a48: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a5a4a: mov ecx, edi */ r_ecx = r_edi;
    /* 004a5a4c: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 004a5a50: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 004a5a55: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a5a5a: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004a5a5e: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 004a5a62: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a5a66: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004a5a6a: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 004a5a6e: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4a5a73u); f_00763498();
    /* 004a5a73: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004a5a76: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004a5a7a: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 004a5a7e: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004a5a81: fadd dword ptr [eax*4 + 0x903a58] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x903a58u));
    /* 004a5a88: fdiv dword ptr [0x903cb4] */ ST(0) = ST(0) / R_F32((u32)(0x903cb4u));
    /* 004a5a8e: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004a5a92: mov ecx, edi */ r_ecx = r_edi;
    /* 004a5a94: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4a5a99u); f_00763498();
    /* 004a5a99: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004a5a9c: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004a5aa0: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 004a5aa4: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004a5aa7: fadd dword ptr [eax*4 + 0x903a58] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x903a58u));
    /* 004a5aae: fdiv dword ptr [0x903cb4] */ ST(0) = ST(0) / R_F32((u32)(0x903cb4u));
    /* 004a5ab4: fcomp dword ptr [0x903c98] */ fx_compare(ST(0), R_F32((u32)(0x903c98u))); FPOP();
    /* 004a5aba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a5abc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a5abd: jbe 0x4a5b91 */ if ((fC||fZ)) goto L_004a5b91;
L_004a5ac3:; BB(0x004a5ac3);
    /* 004a5ac3: mov ecx, edi */ r_ecx = r_edi;
    /* 004a5ac5: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4a5acau); f_00763498();
    /* 004a5aca: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004a5acd: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004a5ad1: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 004a5ad5: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004a5ad8: fadd dword ptr [eax*4 + 0x903a58] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x903a58u));
    /* 004a5adf: fdiv dword ptr [0x903cb4] */ ST(0) = ST(0) / R_F32((u32)(0x903cb4u));
    /* 004a5ae5: fmul dword ptr [0x903c94] */ ST(0) = ST(0) * R_F32((u32)(0x903c94u));
    /* 004a5aeb: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 004a5aef: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 004a5af4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a5af9: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004a5afd: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 004a5b01: fistp qword ptr [esp + 0x34] */ W64((u32)(r_esp+0x34u), (u64)fx_int64(ST(0))); FPOP();
    /* 004a5b05: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004a5b09: movzx eax, word ptr [esp + 0x34] */ r_eax = (u32)R16((u32)(r_esp+0x34u));
    /* 004a5b0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a5b0f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4a5b14u); f_0068d5a8();
    /* 004a5b14: mov edi, eax */ r_edi = r_eax;
    /* 004a5b16: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a5b17: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x4a5b1cu); f_00520f3c();
    /* 004a5b1c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a5b1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5b21: je 0x4a5b91 */ if (fZ) goto L_004a5b91;
L_004a5b23:; BB(0x004a5b23);
    /* 004a5b23: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004a5b27: fmul dword ptr [0x903c78] */ ST(0) = ST(0) * R_F32((u32)(0x903c78u));
    /* 004a5b2d: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_004a5b31:; BB(0x004a5b31);
    /* 004a5b31: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a5b33: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4a5b38u); f_0082dcbc();
    /* 004a5b38: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 004a5b3c: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 004a5b3f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004a5b43: fld dword ptr [0x903c90] */ FPUSH(R_F32((u32)(0x903c90u)));
    /* 004a5b49: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 004a5b4c: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004a5b50: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a5b52: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a5b57u); f_0082ddd8();
    /* 004a5b57: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 004a5b5b: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 004a5b5e: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004a5b62: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004a5b66: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 004a5b6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5b6c: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x4a5b71u); f_00780630();
    /* 004a5b71: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a5b74: add ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004a5b7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5b7c: je 0x4a5b31 */ if (fZ) goto L_004a5b31;
L_004a5b7e:; BB(0x004a5b7e);
    /* 004a5b7e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004a5b81: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004a5b84: fcomp dword ptr [0x903ae0] */ fx_compare(ST(0), R_F32((u32)(0x903ae0u))); FPOP();
    /* 004a5b8a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a5b8c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a5b8d: ja 0x4a5b31 */ if ((!fC&&!fZ)) goto L_004a5b31;
L_004a5b8f:; BB(0x004a5b8f);
    /* 004a5b8f: jmp 0x4a5bfa */ goto L_004a5bfa;
L_004a5b91:; BB(0x004a5b91);
    /* 004a5b91: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004a5b95: fmul dword ptr [0x903c74] */ ST(0) = ST(0) * R_F32((u32)(0x903c74u));
    /* 004a5b9b: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_004a5b9f:; BB(0x004a5b9f);
    /* 004a5b9f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a5ba1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4a5ba6u); f_0082dcbc();
    /* 004a5ba6: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 004a5baa: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004a5bae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a5bb0: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004a5bb8: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a5bbdu); f_0082ddd8();
    /* 004a5bbd: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 004a5bc1: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004a5bc5: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004a5bc9: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 004a5bce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a5bcf: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x4a5bd4u); f_00780630();
    /* 004a5bd4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a5bd7: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004a5bdb: fadd dword ptr [0x903c88] */ ST(0) = ST(0) + R_F32((u32)(0x903c88u));
    /* 004a5be1: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004a5be5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5be7: je 0x4a5b9f */ if (fZ) goto L_004a5b9f;
L_004a5be9:; BB(0x004a5be9);
    /* 004a5be9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004a5bec: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004a5bef: fcomp dword ptr [0x903ae0] */ fx_compare(ST(0), R_F32((u32)(0x903ae0u))); FPOP();
    /* 004a5bf5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a5bf7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a5bf8: ja 0x4a5b9f */ if ((!fC&&!fZ)) goto L_004a5b9f;
L_004a5bfa:; BB(0x004a5bfa);
    /* 004a5bfa: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004a5bfe: fsub dword ptr [esi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38u));
    /* 004a5c01: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004a5c05: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 004a5c08: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004a5c0a: fmul qword ptr [0x903a68] */ ST(0) = ST(0) * R_F64((u32)(0x903a68u));
    /* 004a5c10: fdiv qword ptr [0x903a60] */ ST(0) = ST(0) / R_F64((u32)(0x903a60u));
    /* 004a5c16: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 004a5c1a: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 004a5c1f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a5c24: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004a5c28: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 004a5c2c: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a5c30: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004a5c34: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 004a5c38: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a5c3a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4a5c3fu); f_0082dcbc();
    /* 004a5c3f: fld dword ptr [0x903c70] */ FPUSH(R_F32((u32)(0x903c70u)));
    /* 004a5c45: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a5c47: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 004a5c4a: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 004a5c4e: fld dword ptr [0x903c6c] */ FPUSH(R_F32((u32)(0x903c6cu)));
    /* 004a5c54: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 004a5c57: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 004a5c5b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a5c5d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a5c62u); f_0082ddd8();
    /* 004a5c62: fld dword ptr [0x903c70] */ FPUSH(R_F32((u32)(0x903c70u)));
    /* 004a5c68: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a5c6a: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 004a5c6d: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004a5c71: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004a5c76: mov ebp, dword ptr [esi + 0x6f0] */ r_ebp = R32((u32)(r_esi+0x6f0u));
    /* 004a5c7c: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a5c7e: mov edi, ebp */ r_edi = r_ebp;
    /* 004a5c80: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004a5c83: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004a5c85: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a5c87: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004a5c8a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a5c8c: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a5c8e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a5c90: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a5c92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5c94: jne 0x4a5cb3 */ if (!fZ) goto L_004a5cb3;
L_004a5c96:; BB(0x004a5c96);
    /* 004a5c96: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 004a5c9a: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004a5c9e: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5ca0: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5ca2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a5ca3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5ca4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a5ca5: call 0x4aa4b0 */ r_esp -= 4; W32(r_esp, 0x4a5caau); f_004aa4b0();
    /* 004a5caa: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a5cad: mov ebp, dword ptr [esi + 0x6f0] */ r_ebp = R32((u32)(r_esi+0x6f0u));
L_004a5cb3:; BB(0x004a5cb3);
    /* 004a5cb3: cmp ebp, 0x14 */ {  u32 a = r_ebp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5cb6: je 0x4a5cca */ if (fZ) goto L_004a5cca;
L_004a5cb8:; BB(0x004a5cb8);
    /* 004a5cb8: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004a5cbb: mov dword ptr [esi + 0x6f0], ebp */ W32((u32)(r_esi+0x6f0u), r_ebp);
    /* 004a5cc1: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a5cc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a5cc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a5cc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a5cc7: ret 4 */ FN_RET(0x004a5734); r_esp += 8; return;
L_004a5cca:; BB(0x004a5cca);
    /* 004a5cca: lea edx, [esi + 0x568] */ r_edx = (u32)(r_esi+0x568u);
    /* 004a5cd0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a5cd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a5cd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a5cd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5cd5: push 0x3ac */ { u32 v = 0x3acu; r_esp -= 4; W32(r_esp, v); }
    /* 004a5cda: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a5cdfu); f_00814298();
    /* 004a5cdf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a5ce2: mov ebp, dword ptr [esi + 0x6f0] */ r_ebp = R32((u32)(r_esi+0x6f0u));
    /* 004a5ce8: jmp 0x4a5cb8 */ goto L_004a5cb8;
L_004a5cea:; BB(0x004a5cea);
    /* 004a5cea: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 004a5cf0: mov dword ptr [esi + 0x6e4], 1 */ W32((u32)(r_esi+0x6e4u), 0x1u);
    /* 004a5cfa: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004a5cff: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004a5d06: and edx, 0xfffffffb */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004a5d09: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004a5d0c: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 004a5d12: jmp 0x4a5a1e */ goto L_004a5a1e;
L_004a5d17:; BB(0x004a5d17);
    /* 004a5d17: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004a5d19: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004a5d1e: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004a5d25: mov ecx, esi */ r_ecx = r_esi;
    /* 004a5d27: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a5d2du); call_ind(t); }
    /* 004a5d2d: mov eax, dword ptr [esi + 0x4c8] */ r_eax = R32((u32)(r_esi+0x4c8u));
    /* 004a5d33: mov dword ptr [esi + 0x4ec], 3 */ W32((u32)(r_esi+0x4ecu), 0x3u);
    /* 004a5d3d: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a5d40: mov dword ptr [esi + 0x4c8], eax */ W32((u32)(r_esi+0x4c8u), r_eax);
    /* 004a5d46: mov dword ptr [esi + 0x3c], 0x45fa0000 */ W32((u32)(r_esi+0x3cu), 0x45fa0000u);
    /* 004a5d4d: lea ebp, [esi + 0x568] */ r_ebp = (u32)(r_esi+0x568u);
    /* 004a5d53: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004a5d55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5d56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5d57: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a5d58: push 0x3b2 */ { u32 v = 0x3b2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5d5d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a5d62u); f_00814298();
    /* 004a5d62: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a5d65: mov eax, dword ptr [esi + 0x4c4] */ r_eax = R32((u32)(r_esi+0x4c4u));
    /* 004a5d6b: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a5d6e: lea ecx, [esi + 0x5fc] */ r_ecx = (u32)(r_esi+0x5fcu);
    /* 004a5d74: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x4a5d79u); f_0084c390();
    /* 004a5d79: mov dword ptr [esi + 0x5c], 0x4000 */ W32((u32)(r_esi+0x5cu), 0x4000u);
    /* 004a5d80: mov dword ptr [esi + 0x6f0], 0 */ W32((u32)(r_esi+0x6f0u), 0x0u);
    /* 004a5d8a: push 0x42960000 */ { u32 v = 0x42960000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5d8f: call 0x83a248 */ r_esp -= 4; W32(r_esp, 0x4a5d94u); f_0083a248();
    /* 004a5d94: mov edx, dword ptr [esi + 0x4c4] */ r_edx = R32((u32)(r_esi+0x4c4u));
    /* 004a5d9a: movsx ebp, word ptr [edx + 2] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 004a5d9e: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 004a5da2: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 004a5da6: push 0x42020000 */ { u32 v = 0x42020000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5dab: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004a5dad: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 004a5db1: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 004a5db6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a5dbb: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004a5dbf: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004a5dc3: fistp dword ptr [esi + 0x6e8] */ W32((u32)(r_esi+0x6e8u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a5dc9: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004a5dcd: call 0x83a248 */ r_esp -= 4; W32(r_esp, 0x4a5dd2u); f_0083a248();
    /* 004a5dd2: mov eax, dword ptr [esi + 0x4c4] */ r_eax = R32((u32)(r_esi+0x4c4u));
    /* 004a5dd8: movsx edx, word ptr [eax + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 004a5ddc: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 004a5de0: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 004a5de4: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004a5de6: fld dword ptr [0x903fd0] */ FPUSH(R_F32((u32)(0x903fd0u)));
    /* 004a5dec: fsub dword ptr [0xa47564] */ ST(0) = ST(0) - R_F32((u32)(0xa47564u));
    /* 004a5df2: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004a5df4: fstp dword ptr [esi + 0x6fc] */ W_F32((u32)(r_esi+0x6fcu), ST(0)); FPOP();
    /* 004a5dfa: mov dword ptr [esi + 0x6e4], 0 */ W32((u32)(r_esi+0x6e4u), 0x0u);
    /* 004a5e04: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a5e07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a5e08: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a5e09: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a5e0a: ret 4 */ FN_RET(0x004a5734); r_esp += 8; return;
}

void f_004a5e10(void) /* sub_4A5E10 */
{
    FN_ENTER(0x004a5e10);
    /* 004a5e10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5e11: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a5e14: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a5e16: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004a5e1a: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a5e1d: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x4a5e22u); f_007a900c();
    /* 004a5e22: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a5e26: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004a5e2a: fmul dword ptr [0x903c68] */ ST(0) = ST(0) * R_F32((u32)(0x903c68u));
    /* 004a5e30: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004a5e34: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004a5e39: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a5e3e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004a5e42: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004a5e46: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a5e4a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004a5e4e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 004a5e52: push dword ptr [ebx + 0x488] */ { u32 v = R32((u32)(r_ebx+0x488u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a5e58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a5e59: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x4a5e5eu); f_007a900c();
    /* 004a5e5e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a5e61: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 004a5e65: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a5e67: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a5e69: jl 0x4a5e7b */ if ((fS!=fO)) goto L_004a5e7b;
L_004a5e6b:; BB(0x004a5e6b);
    /* 004a5e6b: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 004a5e6f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a5e71: mov edx, eax */ r_edx = r_eax;
    /* 004a5e73: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004a5e77: jl 0x4a5e7b */ if ((fS!=fO)) goto L_004a5e7b;
L_004a5e79:; BB(0x004a5e79);
    /* 004a5e79: mov edx, eax */ r_edx = r_eax;
L_004a5e7b:; BB(0x004a5e7b);
    /* 004a5e7b: mov eax, dword ptr [ebx + 0x488] */ r_eax = R32((u32)(r_ebx+0x488u));
    /* 004a5e81: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a5e83: mov dword ptr [ebx + 0x488], eax */ W32((u32)(r_ebx+0x488u), r_eax);
    /* 004a5e89: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a5e8c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a5e8d: ret 8 */ FN_RET(0x004a5e10); r_esp += 12; return;
}

void f_004a5e90(void) /* sub_4A5E90 */
{
    FN_ENTER(0x004a5e90);
    /* 004a5e90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a5e91: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a5e94: mov edi, ecx */ r_edi = r_ecx;
    /* 004a5e96: mov ecx, edi */ r_ecx = r_edi;
    /* 004a5e98: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x4a5e9du); f_00521410();
    /* 004a5e9d: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 004a5ea3: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 004a5ea9: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004a5eab: fmul qword ptr [0x903a50] */ ST(0) = ST(0) * R_F64((u32)(0x903a50u));
    /* 004a5eb1: fdiv qword ptr [0x903a48] */ ST(0) = ST(0) / R_F64((u32)(0x903a48u));
    /* 004a5eb7: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a5eba: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a5ebe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a5ec3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a5ec7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a5ecb: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a5ecf: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a5ed2: mov ecx, edi */ r_ecx = r_edi;
    /* 004a5ed4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004a5ed8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a5ed9: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a5edd: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a5ee2u); f_004a15ac();
    /* 004a5ee2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a5ee5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a5ee6: ret 4 */ FN_RET(0x004a5e90); r_esp += 8; return;
}

void f_004a5eec(void) /* sub_4A5EEC */
{
    FN_ENTER(0x004a5eec);
    /* 004a5eec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a5eed: mov ebp, esp */ r_ebp = r_esp;
    /* 004a5eef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a5ef1: push 0x8d04bc */ { u32 v = 0x8d04bcu; r_esp -= 4; W32(r_esp, v); }
    /* 004a5ef6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a5efc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a5efd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a5f04: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a5f07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a5f0a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004a5f0d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004a5f10: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004a5f13: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004a5f16: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a5f19: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5f1c: je 0x4a6040 */ if (fZ) goto L_004a6040;
L_004a5f22:; BB(0x004a5f22);
    /* 004a5f22: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a5f25: je 0x4a602a */ if (fZ) goto L_004a602a;
L_004a5f2b:; BB(0x004a5f2b);
    /* 004a5f2b: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a5f2e: je 0x4a602a */ if (fZ) goto L_004a602a;
L_004a5f34:; BB(0x004a5f34);
    /* 004a5f34: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a5f37: je 0x4a602a */ if (fZ) goto L_004a602a;
L_004a5f3d:; BB(0x004a5f3d);
    /* 004a5f3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a5f3f: jne 0x4a602a */ if (!fZ) goto L_004a602a;
L_004a5f45:; BB(0x004a5f45);
    /* 004a5f45: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a5f4au); f_007aa094();
    /* 004a5f4a: push 0x41b00000 */ { u32 v = 0x41b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5f4f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a5f52: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a5f57u); f_007aaa30();
    /* 004a5f57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 004a5f59: je 0x4a600f */ if (fZ) goto L_004a600f;
L_004a5f5f:; BB(0x004a5f5f);
    /* 004a5f5f: fld dword ptr [0x903c60] */ FPUSH(R_F32((u32)(0x903c60u)));
    /* 004a5f65: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a5f68: fld dword ptr [eax + 0x3d4] */ FPUSH(R_F32((u32)(r_eax+0x3d4u)));
    /* 004a5f6e: fadd dword ptr [eax + 0x3e0] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3e0u));
    /* 004a5f74: fld dword ptr [eax + 0x3d8] */ FPUSH(R_F32((u32)(r_eax+0x3d8u)));
    /* 004a5f7a: fadd dword ptr [eax + 0x3e4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3e4u));
    /* 004a5f80: fld dword ptr [eax + 0x3dc] */ FPUSH(R_F32((u32)(r_eax+0x3dcu)));
    /* 004a5f86: fadd dword ptr [eax + 0x3e8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3e8u));
    /* 004a5f8c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a5f8e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004a5f90: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a5f92: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004a5f94: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004a5f96: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a5f98: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004a5f9b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a5f9d: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004a5fa0: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004a5fa3: push 0x130 */ { u32 v = 0x130u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5fa8: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004a5faf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4a5fb4u); f_005caba4();
    /* 004a5fb4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a5fb5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004a5fb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5fba: je 0x4a5fe6 */ if (fZ) goto L_004a5fe6;
L_004a5fbc:; BB(0x004a5fbc);
    /* 004a5fbc: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004a5fc3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a5fca: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a5fcd: lea ebx, [ebp - 0x34] */ r_ebx = (u32)(r_ebp+0xffffffccu);
    /* 004a5fd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5fd1: lea esi, [edx + 0x4cc] */ r_esi = (u32)(r_edx+0x4ccu);
    /* 004a5fd7: mov ecx, eax */ r_ecx = r_eax;
    /* 004a5fd9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a5fda: call 0x4aabd8 */ r_esp -= 4; W32(r_esp, 0x4a5fdfu); f_004aabd8();
    /* 004a5fdf: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004a5fe6:; BB(0x004a5fe6);
    /* 004a5fe6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004a5fed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5fef: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x4a5ff4u); f_004d4288();
    /* 004a5ff4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a5ff7: lea ecx, [eax + 0x568] */ r_ecx = (u32)(r_eax+0x568u);
    /* 004a5ffd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004a5fff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a6000: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a6001: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a6002: push 0x3a0 */ { u32 v = 0x3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6007: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a600cu); f_00814298();
    /* 004a600c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_004a600f:; BB(0x004a600f);
    /* 004a600f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a6012: fld dword ptr [edx + 0xc8] */ FPUSH(R_F32((u32)(r_edx+0xc8u)));
    /* 004a6018: fcomp dword ptr [0x903c5c] */ fx_compare(ST(0), R_F32((u32)(0x903c5cu))); FPOP();
    /* 004a601e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a6020: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a6021: ja 0x4a602a */ if ((!fC&&!fZ)) goto L_004a602a;
L_004a6023:; BB(0x004a6023);
    /* 004a6023: mov ecx, edx */ r_ecx = r_edx;
    /* 004a6025: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a602au); f_004a7e20();
L_004a602a:; BB(0x004a602a);
    /* 004a602a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004a602d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a6030: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a6033: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a603a: mov esp, ebp */ r_esp = r_ebp;
    /* 004a603c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a603d: ret 4 */ FN_RET(0x004a5eec); r_esp += 8; return;
L_004a6040:; BB(0x004a6040);
    /* 004a6040: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004a6042: mov eax, 2 */ r_eax = 0x2u;
    /* 004a6047: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004a604e: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a6054u); call_ind(t); }
    /* 004a6054: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a6057: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a605c: mov dword ptr [edx + 0x4ec], 0 */ W32((u32)(r_edx+0x4ecu), 0x0u);
    /* 004a6066: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 004a6069: jmp 0x4a602a */ goto L_004a602a;
}

