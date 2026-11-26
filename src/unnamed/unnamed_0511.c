#include "protos.h"

void f_00511004(void) /* sub_511004 */
{
    FN_ENTER(0x00511004);
    /* 00511004: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00511005: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00511008: mov edi, ecx */ r_edi = r_ecx;
    /* 0051100a: mov ecx, edi */ r_ecx = r_edi;
    /* 0051100c: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x511011u); f_008173b4();
    /* 00511011: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511013: je 0x5111b8 */ if (fZ) goto L_005111b8;
L_00511019:; BB(0x00511019);
    /* 00511019: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 0051101c: movzx eax, byte ptr [edx + 0x88] */ r_eax = (u32)R8((u32)(r_edx+0x88u));
    /* 00511023: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00511025: je 0x51114a */ if (fZ) goto L_0051114a;
L_0051102b:; BB(0x0051102b);
    /* 0051102b: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 0051102f: fld dword ptr [edi + 0x74] */ FPUSH(R_F32((u32)(r_edi+0x74u)));
    /* 00511032: mov edx, dword ptr [edi + 0x74] */ r_edx = R32((u32)(r_edi+0x74u));
    /* 00511035: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00511037: je 0x511064 */ if (fZ) goto L_00511064;
L_00511039:; BB(0x00511039);
    /* 00511039: fld dword ptr [edi + 0x80] */ FPUSH(R_F32((u32)(r_edi+0x80u)));
    /* 0051103f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00511041: fld dword ptr [edi + 0x7c] */ FPUSH(R_F32((u32)(r_edi+0x7cu)));
    /* 00511044: fadd dword ptr [edi + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x88u));
    /* 0051104a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051104c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051104f: fld dword ptr [edi + 0x78] */ FPUSH(R_F32((u32)(r_edi+0x78u)));
    /* 00511052: fadd dword ptr [edi + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x84u));
    /* 00511058: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051105a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0051105e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00511062: jmp 0x511077 */ goto L_00511077;
L_00511064:; BB(0x00511064);
    /* 00511064: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00511066: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 00511069: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0051106c: mov edx, dword ptr [edi + 0x7c] */ r_edx = R32((u32)(r_edi+0x7cu));
    /* 0051106f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00511073: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
L_00511077:; BB(0x00511077);
    /* 00511077: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0051107a: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 0051107d: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00511081: fadd dword ptr [edi + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x44u));
    /* 00511084: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00511088: fadd dword ptr [edi + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x48u));
    /* 0051108b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0051108d: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00511091: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00511095: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00511099: lea ecx, [edi + 0x40] */ r_ecx = (u32)(r_edi+0x40u);
    /* 0051109c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x5110a1u); f_0083173c();
    /* 005110a1: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 005110a5: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 005110a9: fcomp dword ptr [0x9204fc] */ fx_compare(ST(0), R_F32((u32)(0x9204fcu))); FPOP();
    /* 005110af: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005110b1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005110b2: je 0x5111b8 */ if (fZ) goto L_005111b8;
L_005110b8:; BB(0x005110b8);
    /* 005110b8: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 005110bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005110bd: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005110c1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005110c3: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x5110c8u); f_0082f09c();
    /* 005110c8: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 005110cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005110cd: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005110d1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005110d3: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x5110d8u); f_0082f09c();
    /* 005110d8: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005110dc: fsub dword ptr [esp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x18u));
    /* 005110e0: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 005110e4: fsub dword ptr [esp + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x1cu));
    /* 005110e8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005110ea: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 005110ee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005110f0: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 005110f4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005110f6: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005110f8: fmul qword ptr [0x9204c8] */ ST(0) = ST(0) * R_F64((u32)(0x9204c8u));
    /* 005110fe: fdiv qword ptr [0x9204c0] */ ST(0) = ST(0) / R_F64((u32)(0x9204c0u));
    /* 00511104: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 00511107: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0051110b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051110d: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 00511111: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 00511116: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051111b: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0051111f: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 00511123: fistp dword ptr [esp + 0x50] */ W32((u32)(r_esp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 00511127: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 0051112b: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0051112f: mov word ptr [edi + 0x9a], ax */ W16((u32)(r_edi+0x9au), (u16)r_eax);
    /* 00511136: fld dword ptr [edx + 0x60] */ FPUSH(R_F32((u32)(r_edx+0x60u)));
    /* 00511139: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0051113b: fst dword ptr [edi + 0x8c] */ W_F32((u32)(r_edi+0x8cu), ST(0));
    /* 00511141: fld dword ptr [edx + 0x64] */ FPUSH(R_F32((u32)(r_edx+0x64u)));
    /* 00511144: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00511146: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00511148: jmp 0x511150 */ goto L_00511150;
L_0051114a:; BB(0x0051114a);
    /* 0051114a: fld dword ptr [edi + 0x2c] */ FPUSH(R_F32((u32)(r_edi+0x2cu)));
    /* 0051114d: fld dword ptr [edi + 0x30] */ FPUSH(R_F32((u32)(r_edi+0x30u)));
L_00511150:; BB(0x00511150);
    /* 00511150: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00511152: fmul dword ptr [edi + 0xa8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0xa8u));
    /* 00511158: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051115a: fmul dword ptr [edi + 0xac] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0xacu));
    /* 00511160: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 00511164: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00511166: fstp dword ptr [edi + 0x8c] */ W_F32((u32)(r_edi+0x8cu), ST(0)); FPOP();
    /* 0051116c: fstp dword ptr [edi + 0x90] */ W_F32((u32)(r_edi+0x90u), ST(0)); FPOP();
    /* 00511172: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511177: jne 0x5111c9 */ if (!fZ) goto L_005111c9;
L_00511179:; BB(0x00511179);
    /* 00511179: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051117e: jne 0x5111bd */ if (!fZ) goto L_005111bd;
L_00511180:; BB(0x00511180);
    /* 00511180: movzx eax, byte ptr [edx + 0x88] */ r_eax = (u32)R8((u32)(r_edx+0x88u));
    /* 00511187: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00511189: je 0x5111a4 */ if (fZ) goto L_005111a4;
L_0051118b:; BB(0x0051118b);
    /* 0051118b: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0051118f: mov ecx, dword ptr [eax*4 + 0xaaeef8] */ r_ecx = R32((u32)(r_eax*4+0xaaeef8u));
    /* 00511196: add edi, 0x70 */ {  u32 a = r_edi; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00511199: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051119a: call 0x801090 */ r_esp -= 4; W32(r_esp, 0x51119fu); f_00801090();
    /* 0051119f: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005111a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005111a3: ret  */ FN_RET(0x00511004); r_esp += 4; return;
L_005111a4:; BB(0x005111a4);
    /* 005111a4: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 005111a8: mov ecx, dword ptr [eax*4 + 0xaaee20] */ r_ecx = R32((u32)(r_eax*4+0xaaee20u));
    /* 005111af: add edi, 0x70 */ {  u32 a = r_edi; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005111b2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005111b3: call 0x801090 */ r_esp -= 4; W32(r_esp, 0x5111b8u); f_00801090();
L_005111b8:; BB(0x005111b8);
    /* 005111b8: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005111bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005111bc: ret  */ FN_RET(0x00511004); r_esp += 4; return;
L_005111bd:; BB(0x005111bd);
    /* 005111bd: mov ecx, edi */ r_ecx = r_edi;
    /* 005111bf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5111c4u); f_0061cdb0();
    /* 005111c4: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005111c7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005111c8: ret  */ FN_RET(0x00511004); r_esp += 4; return;
L_005111c9:; BB(0x005111c9);
    /* 005111c9: call 0x505a20 */ r_esp -= 4; W32(r_esp, 0x5111ceu); f_00505a20();
    /* 005111ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005111d0: jne 0x5111dd */ if (!fZ) goto L_005111dd;
L_005111d2:; BB(0x005111d2);
    /* 005111d2: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 005111d6: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005111db: jne 0x5111b8 */ if (!fZ) goto L_005111b8;
L_005111dd:; BB(0x005111dd);
    /* 005111dd: mov eax, dword ptr [edi + 0x108] */ r_eax = R32((u32)(r_edi+0x108u));
    /* 005111e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005111e5: je 0x5111b8 */ if (fZ) goto L_005111b8;
L_005111e7:; BB(0x005111e7);
    /* 005111e7: mov eax, dword ptr [edi + 0x104] */ r_eax = R32((u32)(r_edi+0x104u));
    /* 005111ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005111ef: je 0x5111b8 */ if (fZ) goto L_005111b8;
L_005111f1:; BB(0x005111f1);
    /* 005111f1: mov eax, dword ptr [0x9204b0] */ r_eax = R32((u32)(0x9204b0u));
    /* 005111f6: mov edx, dword ptr [0x9204b4] */ r_edx = R32((u32)(0x9204b4u));
    /* 005111fc: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00511200: mov eax, dword ptr [0x9204b8] */ r_eax = R32((u32)(0x9204b8u));
    /* 00511205: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00511209: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0051120d: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 00511211: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00511215: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511216: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511217: lea ecx, [edi + 0x40] */ r_ecx = (u32)(r_edi+0x40u);
    /* 0051121a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051121b: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x511220u); f_007a8d98();
    /* 00511220: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00511223: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00511226: fld dword ptr [edi + 0x74] */ FPUSH(R_F32((u32)(r_edi+0x74u)));
    /* 00511229: mov ecx, dword ptr [edi + 0x74] */ r_ecx = R32((u32)(r_edi+0x74u));
    /* 0051122c: movzx edx, byte ptr [eax + 0x88] */ r_edx = (u32)R8((u32)(r_eax+0x88u));
    /* 00511233: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00511236: je 0x511264 */ if (fZ) goto L_00511264;
L_00511238:; BB(0x00511238);
    /* 00511238: fld dword ptr [edi + 0x80] */ FPUSH(R_F32((u32)(r_edi+0x80u)));
    /* 0051123e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00511240: fld dword ptr [edi + 0x7c] */ FPUSH(R_F32((u32)(r_edi+0x7cu)));
    /* 00511243: fadd dword ptr [edi + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x88u));
    /* 00511249: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051124b: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0051124f: fld dword ptr [edi + 0x78] */ FPUSH(R_F32((u32)(r_edi+0x78u)));
    /* 00511252: fadd dword ptr [edi + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x84u));
    /* 00511258: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051125a: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0051125e: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00511262: jmp 0x511278 */ goto L_00511278;
L_00511264:; BB(0x00511264);
    /* 00511264: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00511266: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 00511269: mov edx, dword ptr [edi + 0x7c] */ r_edx = R32((u32)(r_edi+0x7cu));
    /* 0051126c: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00511270: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00511274: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
L_00511278:; BB(0x00511278);
    /* 00511278: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x51127du); f_0082d7b0();
    /* 0051127d: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 00511281: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x511286u); f_0082d838();
    /* 00511286: mov eax, dword ptr [edi + 0x8c] */ r_eax = R32((u32)(r_edi+0x8cu));
    /* 0051128c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051128d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051128e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00511290: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511291: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x511296u); f_0082fa0c();
    /* 00511296: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00511299: movzx edx, byte ptr [eax + 0x88] */ r_edx = (u32)R8((u32)(r_eax+0x88u));
    /* 005112a0: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005112a3: je 0x5112db */ if (fZ) goto L_005112db;
L_005112a5:; BB(0x005112a5);
    /* 005112a5: movzx eax, word ptr [edi + 0x26] */ r_eax = (u32)R16((u32)(r_edi+0x26u));
    /* 005112a9: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005112ab: je 0x5112ba */ if (fZ) goto L_005112ba;
L_005112ad:; BB(0x005112ad);
    /* 005112ad: lea eax, [edi + 0xc0] */ r_eax = (u32)(r_edi+0xc0u);
    /* 005112b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005112b4: call 0x83ba24 */ r_esp -= 4; W32(r_esp, 0x5112b9u); f_0083ba24();
    /* 005112b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005112ba:; BB(0x005112ba);
    /* 005112ba: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 005112be: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005112c0: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5112c5u); f_00830c04();
    /* 005112c5: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 005112c9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005112cb: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5112d0u); f_0082e9e4();
    /* 005112d0: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 005112d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005112d6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5112dbu); f_0082d8bc();
L_005112db:; BB(0x005112db);
    /* 005112db: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 005112df: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005112e4: je 0x5112fc */ if (fZ) goto L_005112fc;
L_005112e6:; BB(0x005112e6);
    /* 005112e6: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005112eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005112ed: je 0x5112fc */ if (fZ) goto L_005112fc;
L_005112ef:; BB(0x005112ef);
    /* 005112ef: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 005112f5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005112f7: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5112fcu); f_0082d8bc();
L_005112fc:; BB(0x005112fc);
    /* 005112fc: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x511301u); f_0082dbac();
    /* 00511301: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 00511305: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051130a: jne 0x5113d0 */ if (!fZ) goto L_005113d0;
L_00511310:; BB(0x00511310);
    /* 00511310: movsx edx, word ptr [edi + 0x9a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x9au));
    /* 00511317: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00511319: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x51131eu); f_0082d8bc();
    /* 0051131e: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 00511322: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511327: jne 0x5113c6 */ if (!fZ) goto L_005113c6;
L_0051132d:; BB(0x0051132d);
    /* 0051132d: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00511332: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00511337: mov ecx, edi */ r_ecx = r_edi;
    /* 00511339: or eax, 0x8021 */ {  u32 a = r_eax; u32 b = 0x8021u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051133e: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00511343: call 0x508a30 */ r_esp -= 4; W32(r_esp, 0x511348u); f_00508a30();
    /* 00511348: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051134a: je 0x511357 */ if (fZ) goto L_00511357;
L_0051134c:; BB(0x0051134c);
    /* 0051134c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051134e: mov ecx, edi */ r_ecx = r_edi;
    /* 00511350: call 0x508958 */ r_esp -= 4; W32(r_esp, 0x511355u); f_00508958();
    /* 00511355: jmp 0x511360 */ goto L_00511360;
L_00511357:; BB(0x00511357);
    /* 00511357: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511359: mov ecx, edi */ r_ecx = r_edi;
    /* 0051135b: call 0x508958 */ r_esp -= 4; W32(r_esp, 0x511360u); f_00508958();
L_00511360:; BB(0x00511360);
    /* 00511360: mov ecx, dword ptr [edi + 0x108] */ r_ecx = R32((u32)(r_edi+0x108u));
    /* 00511366: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x51136bu); f_00829cc8();
    /* 0051136b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051136d: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x511372u); f_007a94a0();
    /* 00511372: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00511373: mov edx, dword ptr [edi + 0x10c] */ r_edx = R32((u32)(r_edi+0x10cu));
    /* 00511379: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051137b: je 0x5113b9 */ if (fZ) goto L_005113b9;
L_0051137d:; BB(0x0051137d);
    /* 0051137d: push dword ptr [edi + 0x110] */ { u32 v = R32((u32)(r_edi+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 00511383: mov ecx, dword ptr [edi + 0x104] */ r_ecx = R32((u32)(r_edi+0x104u));
    /* 00511389: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x51138eu); f_0083bd00();
L_0051138e:; BB(0x0051138e);
    /* 0051138e: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 00511392: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511397: jne 0x5113b2 */ if (!fZ) goto L_005113b2;
L_00511399:; BB(0x00511399);
    /* 00511399: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0051139e: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_005113a3:; BB(0x005113a3);
    /* 005113a3: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5113a8u); f_0082dab0();
    /* 005113a8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5113adu); f_0082da80();
    /* 005113ad: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005113b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005113b1: ret  */ FN_RET(0x00511004); r_esp += 4; return;
L_005113b2:; BB(0x005113b2);
    /* 005113b2: call 0x5022a0 */ r_esp -= 4; W32(r_esp, 0x5113b7u); f_005022a0();
    /* 005113b7: jmp 0x5113a3 */ goto L_005113a3;
L_005113b9:; BB(0x005113b9);
    /* 005113b9: mov ecx, dword ptr [edi + 0x104] */ r_ecx = R32((u32)(r_edi+0x104u));
    /* 005113bf: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5113c4u); f_00831758();
    /* 005113c4: jmp 0x51138e */ goto L_0051138e;
L_005113c6:; BB(0x005113c6);
    /* 005113c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005113c8: call 0x501fb8 */ r_esp -= 4; W32(r_esp, 0x5113cdu); f_00501fb8();
    /* 005113cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005113ce: jmp 0x511360 */ goto L_00511360;
L_005113d0:; BB(0x005113d0);
    /* 005113d0: push 0x3faa3d71 */ { u32 v = 0x3faa3d71u; r_esp -= 4; W32(r_esp, v); }
    /* 005113d5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5113dau); f_0061cdb0();
    /* 005113da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005113db: jmp 0x511310 */ goto L_00511310;
}

void f_005113e0(void) /* sub_5113E0 */
{
    FN_ENTER(0x005113e0);
    /* 005113e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005113e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005113e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005113e5: push 0x8d4160 */ { u32 v = 0x8d4160u; r_esp -= 4; W32(r_esp, v); }
    /* 005113ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005113f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005113f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005113f8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005113fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005113fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00511401: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00511404: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00511407: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 0051140c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00511413: call 0x508424 */ r_esp -= 4; W32(r_esp, 0x511418u); f_00508424();
    /* 00511418: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00511419: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0051141c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051141e: je 0x511457 */ if (fZ) goto L_00511457;
L_00511420:; BB(0x00511420);
    /* 00511420: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00511427: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051142e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00511431: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00511434: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00511437: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051143a: call 0x51145c */ r_esp -= 4; W32(r_esp, 0x51143fu); f_0051145c();
    /* 0051143f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00511442: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00511449:; BB(0x00511449);
    /* 00511449: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051144c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00511453: mov esp, ebp */ r_esp = r_ebp;
    /* 00511455: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00511456: ret  */ FN_RET(0x005113e0); r_esp += 4; return;
L_00511457:; BB(0x00511457);
    /* 00511457: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00511459: jmp 0x511449 */ goto L_00511449;
}

void f_0051145c(void) /* sub_51145C */
{
    FN_ENTER(0x0051145c);
    /* 0051145c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051145d: mov ebp, esp */ r_ebp = r_esp;
    /* 0051145f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00511461: push 0x8d417c */ { u32 v = 0x8d417cu; r_esp -= 4; W32(r_esp, v); }
    /* 00511466: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051146c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051146d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00511474: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00511477: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0051147a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0051147d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00511480: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00511483: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00511486: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00511489: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0051148c: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0051148f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511490: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00511493: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00511496: call 0x508460 */ r_esp -= 4; W32(r_esp, 0x51149bu); f_00508460();
    /* 0051149b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005114a2: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005114a5: mov dword ptr [eax], 0xaff658 */ W32((u32)(r_eax), 0xaff658u);
    /* 005114ab: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5114b0u); f_008587a5();
    /* 005114b0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005114b3: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005114b6: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005114b9: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 005114bc: fdiv dword ptr [0x9204f0] */ ST(0) = ST(0) / R_F32((u32)(0x9204f0u));
    /* 005114c2: fadd dword ptr [0x9204f4] */ ST(0) = ST(0) + R_F32((u32)(0x9204f4u));
    /* 005114c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005114cb: fmul dword ptr [eax + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x18u));
    /* 005114ce: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 005114d0: fstp dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0)); FPOP();
    /* 005114d3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5114d8u); f_008587a5();
    /* 005114d8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005114db: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005114de: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005114e1: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 005114e4: fdiv dword ptr [0x9204f0] */ ST(0) = ST(0) / R_F32((u32)(0x9204f0u));
    /* 005114ea: fadd dword ptr [0x9204f4] */ ST(0) = ST(0) + R_F32((u32)(0x9204f4u));
    /* 005114f0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005114f3: fmul dword ptr [eax + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x1cu));
    /* 005114f6: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 005114f9: fstp dword ptr [ecx + 0x78] */ W_F32((u32)(r_ecx+0x78u), ST(0)); FPOP();
    /* 005114fc: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x511501u); f_008587a5();
    /* 00511501: mov edx, eax */ r_edx = r_eax;
    /* 00511503: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00511506: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00511509: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0051150c: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0051150f: fdiv dword ptr [0x9204f0] */ ST(0) = ST(0) / R_F32((u32)(0x9204f0u));
    /* 00511515: fadd dword ptr [0x9204f4] */ ST(0) = ST(0) + R_F32((u32)(0x9204f4u));
    /* 0051151b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051151e: fmul dword ptr [edx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x20u));
    /* 00511521: fadd dword ptr [esi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x8u));
    /* 00511524: fstp dword ptr [eax + 0x7c] */ W_F32((u32)(r_eax+0x7cu), ST(0)); FPOP();
    /* 00511527: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00511529: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 0051152c: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 0051152f: mov dword ptr [eax + 0x38], ebx */ W32((u32)(r_eax+0x38u), r_ebx);
    /* 00511532: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 00511535: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 00511538: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x51153du); f_008587a5();
    /* 0051153d: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00511540: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00511543: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 00511546: fdiv dword ptr [0x9204f0] */ ST(0) = ST(0) / R_F32((u32)(0x9204f0u));
    /* 0051154c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051154f: fmul dword ptr [eax + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x28u));
    /* 00511552: fadd dword ptr [eax + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x24u));
    /* 00511555: fst dword ptr [edx + 0x2c] */ W_F32((u32)(r_edx+0x2cu), ST(0));
    /* 00511558: fstp dword ptr [edx + 0x30] */ W_F32((u32)(r_edx+0x30u), ST(0)); FPOP();
    /* 0051155b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x511560u); f_008587a5();
    /* 00511560: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00511563: fild dword ptr [edx + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x48u)));
    /* 00511566: fild dword ptr [edx + 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4cu)));
    /* 00511569: movzx ecx, byte ptr [edx + 0x88] */ r_ecx = (u32)R8((u32)(r_edx+0x88u));
    /* 00511570: fld dword ptr [0x9204ec] */ FPUSH(R_F32((u32)(0x9204ecu)));
    /* 00511576: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00511579: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0051157c: fdiv dword ptr [0x9204f0] */ ST(0) = ST(0) / R_F32((u32)(0x9204f0u));
    /* 00511582: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00511584: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00511586: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00511588: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051158a: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 0051158d: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 00511591: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00511596: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00511599: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 0051159c: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0051159f: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 005115a2: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005115a5: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005115a8: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005115ab: je 0x5115c5 */ if (fZ) goto L_005115c5;
L_005115ad:; BB(0x005115ad);
    /* 005115ad: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005115b1: mov ecx, dword ptr [edx*4 + 0xaaee20] */ r_ecx = R32((u32)(r_edx*4+0xaaee20u));
    /* 005115b8: mov ebx, dword ptr [ecx + 0x28] */ r_ebx = R32((u32)(r_ecx+0x28u));
    /* 005115bb: fild dword ptr [ebx + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0xcu)));
    /* 005115be: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 005115c0: fstp dword ptr [eax + 0x60] */ W_F32((u32)(r_eax+0x60u), ST(0)); FPOP();
    /* 005115c3: jmp 0x5115d0 */ goto L_005115d0;
L_005115c5:; BB(0x005115c5);
    /* 005115c5: mov dword ptr [ebp - 0x44], ebx */ W32((u32)(r_ebp+0xffffffbcu), r_ebx);
    /* 005115c8: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 005115cb: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 005115cd: fstp dword ptr [eax + 0x60] */ W_F32((u32)(r_eax+0x60u), ST(0)); FPOP();
L_005115d0:; BB(0x005115d0);
    /* 005115d0: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5115d5u); f_008587a5();
    /* 005115d5: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005115d8: movzx edx, word ptr [ecx + 0x24] */ r_edx = (u32)R16((u32)(r_ecx+0x24u));
    /* 005115dc: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005115df: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 005115e2: fdiv dword ptr [0x9204f0] */ ST(0) = ST(0) / R_F32((u32)(0x9204f0u));
    /* 005115e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005115eb: fmul dword ptr [eax + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x38u));
    /* 005115ee: fadd dword ptr [eax + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x30u));
    /* 005115f1: fstp dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0)); FPOP();
    /* 005115f4: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005115fa: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 00511601: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
    /* 00511608: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 0051160f: jne 0x51162c */ if (!fZ) goto L_0051162c;
L_00511611:; BB(0x00511611);
    /* 00511611: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511614: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00511617: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051161a: mov eax, ecx */ r_eax = r_ecx;
    /* 0051161c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051161f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00511626: mov esp, ebp */ r_esp = r_ebp;
    /* 00511628: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00511629: ret 0xc */ FN_RET(0x0051145c); r_esp += 16; return;
L_0051162c:; BB(0x0051162c);
    /* 0051162c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051162e: call 0x505918 */ r_esp -= 4; W32(r_esp, 0x511633u); f_00505918();
    /* 00511633: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00511634: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00511637: jmp 0x511611 */ goto L_00511611;
}

void f_0051163c(void) /* sub_51163C */
{
    FN_ENTER(0x0051163c);
    /* 0051163c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051163d: mov ebp, esp */ r_ebp = r_esp;
    /* 0051163f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00511641: push 0x8d41a4 */ { u32 v = 0x8d41a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00511646: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051164c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051164d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00511654: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00511657: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0051165a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0051165d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00511660: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00511663: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 00511668: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0051166f: call 0x508424 */ r_esp -= 4; W32(r_esp, 0x511674u); f_00508424();
    /* 00511674: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00511675: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00511678: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051167a: je 0x5116bd */ if (fZ) goto L_005116bd;
L_0051167c:; BB(0x0051167c);
    /* 0051167c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00511683: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051168a: movzx eax, word ptr [ebp + 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0x18u));
    /* 0051168e: movzx edx, word ptr [ebp + 0x14] */ r_edx = (u32)R16((u32)(r_ebp+0x14u));
    /* 00511692: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00511695: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511696: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511697: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051169a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051169d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005116a0: call 0x5116c4 */ r_esp -= 4; W32(r_esp, 0x5116a5u); f_005116c4();
    /* 005116a5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005116a8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005116af:; BB(0x005116af);
    /* 005116af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005116b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005116b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005116bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005116bc: ret  */ FN_RET(0x0051163c); r_esp += 4; return;
L_005116bd:; BB(0x005116bd);
    /* 005116bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005116bf: jmp 0x5116af */ goto L_005116af;
}

void f_005116c4(void) /* sub_5116C4 */
{
    FN_ENTER(0x005116c4);
    /* 005116c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005116c5: mov ebp, esp */ r_ebp = r_esp;
    /* 005116c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005116c9: push 0x8d41c0 */ { u32 v = 0x8d41c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005116ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005116d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005116d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005116dc: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005116df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005116e2: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 005116e5: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005116e8: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 005116eb: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 005116ee: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005116f1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005116f4: movzx edx, word ptr [ebp + 0x14] */ r_edx = (u32)R16((u32)(r_ebp+0x14u));
    /* 005116f8: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 005116fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005116fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005116ff: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00511702: movzx eax, word ptr [ebp + 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0x18u));
    /* 00511706: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00511709: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0051170c: call 0x508460 */ r_esp -= 4; W32(r_esp, 0x511711u); f_00508460();
    /* 00511711: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00511718: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051171b: mov dword ptr [eax], 0xaff658 */ W32((u32)(r_eax), 0xaff658u);
    /* 00511721: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x511726u); f_008587a5();
    /* 00511726: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00511729: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051172c: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0051172f: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 00511732: fdiv dword ptr [0x9204e0] */ ST(0) = ST(0) / R_F32((u32)(0x9204e0u));
    /* 00511738: fadd dword ptr [0x9204e4] */ ST(0) = ST(0) + R_F32((u32)(0x9204e4u));
    /* 0051173e: mov eax, ebx */ r_eax = r_ebx;
    /* 00511740: fmul dword ptr [eax + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x18u));
    /* 00511743: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 00511745: fstp dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0)); FPOP();
    /* 00511748: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x51174du); f_008587a5();
    /* 0051174d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00511750: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00511753: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00511756: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 00511759: fdiv dword ptr [0x9204e0] */ ST(0) = ST(0) / R_F32((u32)(0x9204e0u));
    /* 0051175f: fadd dword ptr [0x9204e4] */ ST(0) = ST(0) + R_F32((u32)(0x9204e4u));
    /* 00511765: mov eax, ebx */ r_eax = r_ebx;
    /* 00511767: fmul dword ptr [eax + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x1cu));
    /* 0051176a: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 0051176d: fstp dword ptr [ecx + 0x78] */ W_F32((u32)(r_ecx+0x78u), ST(0)); FPOP();
    /* 00511770: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x511775u); f_008587a5();
    /* 00511775: mov edx, eax */ r_edx = r_eax;
    /* 00511777: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051177a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051177d: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00511780: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00511783: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 00511786: fdiv dword ptr [0x9204e0] */ ST(0) = ST(0) / R_F32((u32)(0x9204e0u));
    /* 0051178c: fadd dword ptr [0x9204e4] */ ST(0) = ST(0) + R_F32((u32)(0x9204e4u));
    /* 00511792: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00511795: fmul dword ptr [edx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x20u));
    /* 00511798: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 0051179b: fstp dword ptr [eax + 0x7c] */ W_F32((u32)(r_eax+0x7cu), ST(0)); FPOP();
    /* 0051179e: mov word ptr [eax + 0x24], bx */ W16((u32)(r_eax+0x24u), (u16)r_ebx);
    /* 005117a2: test ebx, 0x80 */ {  u32 a = r_ebx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005117a8: je 0x5117b1 */ if (fZ) goto L_005117b1;
L_005117aa:; BB(0x005117aa);
    /* 005117aa: mov byte ptr [eax + 0x99], 1 */ W8((u32)(r_eax+0x99u), 0x1u);
L_005117b1:; BB(0x005117b1);
    /* 005117b1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005117b4: mov esi, ecx */ r_esi = r_ecx;
    /* 005117b6: mov word ptr [eax + 0x28], dx */ W16((u32)(r_eax+0x28u), (u16)r_edx);
    /* 005117ba: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 005117bc: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 005117bf: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 005117c2: mov dword ptr [eax + 0x38], ebx */ W32((u32)(r_eax+0x38u), r_ebx);
    /* 005117c5: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 005117c8: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 005117cb: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5117d0u); f_008587a5();
    /* 005117d0: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005117d3: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005117d6: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 005117d9: fdiv dword ptr [0x9204e0] */ ST(0) = ST(0) / R_F32((u32)(0x9204e0u));
    /* 005117df: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005117e2: fmul dword ptr [eax + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x28u));
    /* 005117e5: fadd dword ptr [eax + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x24u));
    /* 005117e8: fst dword ptr [edx + 0x2c] */ W_F32((u32)(r_edx+0x2cu), ST(0));
    /* 005117eb: fstp dword ptr [edx + 0x30] */ W_F32((u32)(r_edx+0x30u), ST(0)); FPOP();
    /* 005117ee: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5117f3u); f_008587a5();
    /* 005117f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005117f6: fild dword ptr [edx + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x48u)));
    /* 005117f9: fild dword ptr [edx + 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4cu)));
    /* 005117fc: movzx ecx, byte ptr [edx + 0x88] */ r_ecx = (u32)R8((u32)(r_edx+0x88u));
    /* 00511803: fld dword ptr [0x9204dc] */ FPUSH(R_F32((u32)(0x9204dcu)));
    /* 00511809: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0051180c: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 0051180f: fdiv dword ptr [0x9204e0] */ ST(0) = ST(0) / R_F32((u32)(0x9204e0u));
    /* 00511815: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00511817: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00511819: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0051181b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051181d: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 00511820: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 00511824: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00511829: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0051182c: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0051182f: fistp dword ptr [ebp - 0x34] */ W32((u32)(r_ebp+0xffffffccu), (u32)fx_int32(ST(0))); FPOP();
    /* 00511832: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 00511835: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00511838: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0051183b: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 0051183e: je 0x511858 */ if (fZ) goto L_00511858;
L_00511840:; BB(0x00511840);
    /* 00511840: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00511844: mov ecx, dword ptr [edx*4 + 0xaaee20] */ r_ecx = R32((u32)(r_edx*4+0xaaee20u));
    /* 0051184b: mov ebx, dword ptr [ecx + 0x28] */ r_ebx = R32((u32)(r_ecx+0x28u));
    /* 0051184e: fild dword ptr [ebx + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0xcu)));
    /* 00511851: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00511853: fstp dword ptr [eax + 0x60] */ W_F32((u32)(r_eax+0x60u), ST(0)); FPOP();
    /* 00511856: jmp 0x511863 */ goto L_00511863;
L_00511858:; BB(0x00511858);
    /* 00511858: mov dword ptr [ebp - 0x4c], ebx */ W32((u32)(r_ebp+0xffffffb4u), r_ebx);
    /* 0051185b: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 0051185e: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00511860: fstp dword ptr [eax + 0x60] */ W_F32((u32)(r_eax+0x60u), ST(0)); FPOP();
L_00511863:; BB(0x00511863);
    /* 00511863: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x511868u); f_008587a5();
    /* 00511868: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051186b: movzx edx, word ptr [ecx + 0x24] */ r_edx = (u32)R16((u32)(r_ecx+0x24u));
    /* 0051186f: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00511872: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 00511875: fdiv dword ptr [0x9204e0] */ ST(0) = ST(0) / R_F32((u32)(0x9204e0u));
    /* 0051187b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051187e: fmul dword ptr [eax + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x38u));
    /* 00511881: fadd dword ptr [eax + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x30u));
    /* 00511884: fstp dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0)); FPOP();
    /* 00511887: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051188d: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 00511894: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
    /* 0051189b: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 005118a2: jne 0x5118bf */ if (!fZ) goto L_005118bf;
L_005118a4:; BB(0x005118a4);
    /* 005118a4: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005118a7: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005118aa: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005118ad: mov eax, ecx */ r_eax = r_ecx;
    /* 005118af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005118b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005118b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005118bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005118bc: ret 0x14 */ FN_RET(0x005116c4); r_esp += 24; return;
L_005118bf:; BB(0x005118bf);
    /* 005118bf: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005118c1: call 0x505918 */ r_esp -= 4; W32(r_esp, 0x5118c6u); f_00505918();
    /* 005118c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005118c7: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005118ca: jmp 0x5118a4 */ goto L_005118a4;
}

void f_005118cc(void) /* sub_5118CC */
{
    FN_ENTER(0x005118cc);
    /* 005118cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005118cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005118cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005118d1: call 0x5118f0 */ r_esp -= 4; W32(r_esp, 0x5118d6u); f_005118f0();
    /* 005118d6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005118da: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005118dc: jne 0x5118e2 */ if (!fZ) goto L_005118e2;
L_005118de:; BB(0x005118de);
    /* 005118de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005118df: ret 4 */ FN_RET(0x005118cc); r_esp += 8; return;
L_005118e2:; BB(0x005118e2);
    /* 005118e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005118e3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5118e8u); f_005c2f74();
    /* 005118e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005118e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005118ea: ret 4 */ FN_RET(0x005118cc); r_esp += 8; return;
}

void f_005118f0(void) /* sub_5118F0 */
{
    FN_ENTER(0x005118f0);
    /* 005118f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005118f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005118f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005118f5: push 0x8d41dc */ { u32 v = 0x8d41dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005118fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00511900: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511901: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00511908: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051190b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0051190e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00511911: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00511914: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00511917: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0051191a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051191d: mov dword ptr [ecx], 0xaff6b8 */ W32((u32)(r_ecx), 0xaff6b8u);
    /* 00511923: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051192a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x51192fu); f_008171e8();
    /* 0051192f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00511932: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00511939: mov esp, ebp */ r_esp = r_ebp;
    /* 0051193b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051193c: ret  */ FN_RET(0x005118f0); r_esp += 4; return;
}

void f_00511940(void) /* sub_511940 */
{
    FN_ENTER(0x00511940);
    /* 00511940: call 0x83adbc */ r_esp -= 4; W32(r_esp, 0x511945u); f_0083adbc();
    /* 00511945: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x51194au); f_007becd4();
    /* 0051194a: call 0x7bfba0 */ r_esp -= 4; W32(r_esp, 0x51194fu); f_007bfba0();
    /* 0051194f: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 00511954: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x511959u); f_0061cdb0();
    /* 00511959: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0051195e: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x511963u); f_0081745c();
    /* 00511963: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 00511968: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x51196du); f_00817604();
    /* 0051196d: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 00511972: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x511977u); f_00818f80();
    /* 00511977: call 0x5ba748 */ r_esp -= 4; W32(r_esp, 0x51197cu); f_005ba748();
    /* 0051197c: call 0x7bfedc */ r_esp -= 4; W32(r_esp, 0x511981u); f_007bfedc();
    /* 00511981: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00511984: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511986: je 0x51198d */ if (fZ) goto L_0051198d;
L_00511988:; BB(0x00511988);
    /* 00511988: call 0x7a6174 */ r_esp -= 4; W32(r_esp, 0x51198du); f_007a6174();
L_0051198d:; BB(0x0051198d);
    /* 0051198d: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x511992u); f_006dc358();
    /* 00511992: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511994: je 0x51199e */ if (fZ) goto L_0051199e;
L_00511996:; BB(0x00511996);
    /* 00511996: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511998: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x51199du); f_007a60dc();
    /* 0051199d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0051199e:; BB(0x0051199e);
    /* 0051199e: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x5119a3u); f_0080030c();
    /* 005119a3: ret  */ FN_RET(0x00511940); r_esp += 4; return;
}

void f_005119a4(void) /* sub_5119A4 */
{
    FN_ENTER(0x005119a4);
    /* 005119a4: mov dword ptr [0xa72ce4], 0 */ W32((u32)(0xa72ce4u), 0x0u);
    /* 005119ae: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 005119b3: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x5119b8u); f_00818560();
    /* 005119b8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5119bdu); f_0061cdb0();
    /* 005119bd: call 0x793190 */ r_esp -= 4; W32(r_esp, 0x5119c2u); f_00793190();
    /* 005119c2: call 0x409938 */ r_esp -= 4; W32(r_esp, 0x5119c7u); f_00409938();
    /* 005119c7: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x5119ccu); f_0080030c();
    /* 005119cc: ret  */ FN_RET(0x005119a4); r_esp += 4; return;
}

void f_005119d0(void) /* sub_5119D0 */
{
    FN_ENTER(0x005119d0);
    /* 005119d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005119d1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005119d3: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 005119d9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005119db: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5119e0u); f_008193cc();
    /* 005119e0: mov dword ptr [ebp], 0xaff6b8 */ W32((u32)(r_ebp), 0xaff6b8u);
    /* 005119e7: mov eax, ebp */ r_eax = r_ebp;
    /* 005119e9: mov dword ptr [0xa72ce0], 0 */ W32((u32)(0xa72ce0u), 0x0u);
    /* 005119f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005119f4: ret  */ FN_RET(0x005119d0); r_esp += 4; return;
}

void f_005119f8(void) /* sub_5119F8 */
{
    FN_ENTER(0x005119f8);
    /* 005119f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005119f9: mov ebp, esp */ r_ebp = r_esp;
    /* 005119fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005119fd: push 0x8d4204 */ { u32 v = 0x8d4204u; r_esp -= 4; W32(r_esp, v); }
    /* 00511a02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00511a08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511a09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00511a10: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00511a13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00511a16: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00511a19: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00511a1c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00511a1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00511a21: mov dword ptr [0xa72ce4], 1 */ W32((u32)(0xa72ce4u), 0x1u);
    /* 00511a2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511a2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511a2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511a2e: call 0x82acd8 */ r_esp -= 4; W32(r_esp, 0x511a33u); f_0082acd8();
    /* 00511a33: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00511a36: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x511a3bu); f_007bebe8();
    /* 00511a3b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00511a3d: call 0x7a618c */ r_esp -= 4; W32(r_esp, 0x511a42u); f_007a618c();
    /* 00511a42: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00511a44: call 0x7a6198 */ r_esp -= 4; W32(r_esp, 0x511a49u); f_007a6198();
    /* 00511a49: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00511a4c: call 0x409c80 */ r_esp -= 4; W32(r_esp, 0x511a51u); f_00409c80();
    /* 00511a51: call 0x7933bc */ r_esp -= 4; W32(r_esp, 0x511a56u); f_007933bc();
    /* 00511a56: call 0x7896c8 */ r_esp -= 4; W32(r_esp, 0x511a5bu); f_007896c8();
    /* 00511a5b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00511a62: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00511a64: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x511a69u); f_005caba4();
    /* 00511a69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00511a6a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00511a6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511a6f: je 0x511a8e */ if (fZ) goto L_00511a8e;
L_00511a71:; BB(0x00511a71);
    /* 00511a71: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00511a78: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00511a7f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00511a82: call 0x5119d0 */ r_esp -= 4; W32(r_esp, 0x511a87u); f_005119d0();
    /* 00511a87: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00511a8e:; BB(0x00511a8e);
    /* 00511a8e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00511a95: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x511a9au); f_0080030c();
    /* 00511a9a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00511a9d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00511aa4: mov esp, ebp */ r_esp = r_ebp;
    /* 00511aa6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00511aa7: ret  */ FN_RET(0x005119f8); r_esp += 4; return;
}

void f_00511aa8(void) /* sub_511AA8 */
{
    FN_ENTER(0x00511aa8);
    /* 00511aa8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00511aa9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00511aab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00511aad: call 0x511acc */ r_esp -= 4; W32(r_esp, 0x511ab2u); f_00511acc();
    /* 00511ab2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00511ab6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00511ab8: jne 0x511abe */ if (!fZ) goto L_00511abe;
L_00511aba:; BB(0x00511aba);
    /* 00511aba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00511abb: ret 4 */ FN_RET(0x00511aa8); r_esp += 8; return;
L_00511abe:; BB(0x00511abe);
    /* 00511abe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00511abf: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x511ac4u); f_00857e98();
    /* 00511ac4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00511ac5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00511ac6: ret 4 */ FN_RET(0x00511aa8); r_esp += 8; return;
}

void f_00511acc(void) /* sub_511ACC */
{
    FN_ENTER(0x00511acc);
    /* 00511acc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00511acd: mov esi, ecx */ r_esi = r_ecx;
    /* 00511acf: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00511ad2: mov dword ptr [esi], 0xaff718 */ W32((u32)(r_esi), 0xaff718u);
    /* 00511ad8: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x511addu); f_00857e98();
    /* 00511add: mov dword ptr [esi + 8], 0 */ W32((u32)(r_esi+0x8u), 0x0u);
    /* 00511ae4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00511ae5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00511ae6: ret  */ FN_RET(0x00511acc); r_esp += 4; return;
}

void f_00511ae8(void) /* sub_511AE8 */
{
    FN_ENTER(0x00511ae8);
    /* 00511ae8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00511ae9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00511aeb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00511aed: call 0x511b0c */ r_esp -= 4; W32(r_esp, 0x511af2u); f_00511b0c();
    /* 00511af2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00511af6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00511af8: jne 0x511afe */ if (!fZ) goto L_00511afe;
L_00511afa:; BB(0x00511afa);
    /* 00511afa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00511afb: ret 4 */ FN_RET(0x00511ae8); r_esp += 8; return;
L_00511afe:; BB(0x00511afe);
    /* 00511afe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00511aff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x511b04u); f_005c2f74();
    /* 00511b04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00511b05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00511b06: ret 4 */ FN_RET(0x00511ae8); r_esp += 8; return;
}

void f_00511b0c(void) /* sub_511B0C */
{
    FN_ENTER(0x00511b0c);
    /* 00511b0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00511b0d: mov ebp, esp */ r_ebp = r_esp;
    /* 00511b0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00511b11: push 0x8d4220 */ { u32 v = 0x8d4220u; r_esp -= 4; W32(r_esp, v); }
    /* 00511b16: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00511b1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511b1d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00511b24: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00511b27: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00511b2a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00511b2d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00511b30: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00511b33: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00511b36: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00511b3d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00511b40: push dword ptr [eax + 0x34] */ { u32 v = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00511b43: mov dword ptr [eax], 0xaff71c */ W32((u32)(r_eax), 0xaff71cu);
    /* 00511b49: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x511b4eu); f_00857e98();
    /* 00511b4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00511b4f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00511b52: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
    /* 00511b59: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00511b60: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x511b65u); f_008171e8();
    /* 00511b65: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00511b68: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00511b6f: mov esp, ebp */ r_esp = r_ebp;
    /* 00511b71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00511b72: ret  */ FN_RET(0x00511b0c); r_esp += 4; return;
}

void f_00511b74(void) /* sub_511B74 */
{
    FN_ENTER(0x00511b74);
    /* 00511b74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00511b75: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00511b76: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00511b78: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00511b7c: mov dword ptr [ebp], 0xaff718 */ W32((u32)(r_ebp), 0xaff718u);
    /* 00511b83: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00511b85: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00511b86: call 0x5121f8 */ r_esp -= 4; W32(r_esp, 0x511b8bu); f_005121f8();
    /* 00511b8b: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00511b90: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x511b95u); f_0082d990();
    /* 00511b95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511b97: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00511b98: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00511b9a: call 0x512124 */ r_esp -= 4; W32(r_esp, 0x511b9fu); f_00512124();
    /* 00511b9f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x511ba4u); f_0082da80();
    /* 00511ba4: mov dword ptr [ebp + 0xc], 0 */ W32((u32)(r_ebp+0xcu), 0x0u);
    /* 00511bab: mov eax, ebp */ r_eax = r_ebp;
    /* 00511bad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00511bae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00511baf: ret 4 */ FN_RET(0x00511b74); r_esp += 8; return;
}

void f_00511bb4(void) /* sub_511BB4 */
{
    FN_ENTER(0x00511bb4);
    /* 00511bb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00511bb5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00511bb6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00511bb8: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00511bbc: mov dword ptr [ebp], 0xaff718 */ W32((u32)(r_ebp), 0xaff718u);
    /* 00511bc3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00511bc5: mov dword ptr [ebp + 0xc], 0 */ W32((u32)(r_ebp+0xcu), 0x0u);
    /* 00511bcc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00511bcd: call 0x5121f8 */ r_esp -= 4; W32(r_esp, 0x511bd2u); f_005121f8();
    /* 00511bd2: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00511bd6: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00511bda: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x511bdfu); f_008304c8();
    /* 00511bdf: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00511be4: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x511be9u); f_0082d990();
    /* 00511be9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511beb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00511bec: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00511bee: call 0x512064 */ r_esp -= 4; W32(r_esp, 0x511bf3u); f_00512064();
    /* 00511bf3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x511bf8u); f_0082da80();
    /* 00511bf8: mov eax, ebp */ r_eax = r_ebp;
    /* 00511bfa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00511bfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00511bfc: ret 0xc */ FN_RET(0x00511bb4); r_esp += 16; return;
}

void f_00511c00(void) /* sub_511C00 */
{
    FN_ENTER(0x00511c00);
    /* 00511c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00511c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00511c03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00511c05: push 0x8d423c */ { u32 v = 0x8d423cu; r_esp -= 4; W32(r_esp, v); }
    /* 00511c0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00511c10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511c11: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00511c18: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00511c1b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00511c1e: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 00511c21: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 00511c24: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 00511c27: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00511c2a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00511c2d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00511c30: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00511c33: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00511c36: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00511c39: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00511c3c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00511c3f: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00511c42: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00511c45: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00511c48: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00511c4b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x511c50u); f_008193cc();
    /* 00511c50: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00511c57: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00511c5a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00511c5d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00511c60: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 00511c63: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511c65: mov dword ptr [edx], 0xaff71c */ W32((u32)(r_edx), 0xaff71cu);
    /* 00511c6b: mov eax, dword ptr [0x9bb1e0] */ r_eax = R32((u32)(0x9bb1e0u));
    /* 00511c70: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00511c73: je 0x511e21 */ if (fZ) goto L_00511e21;
L_00511c79:; BB(0x00511c79);
    /* 00511c79: mov eax, ebx */ r_eax = r_ebx;
    /* 00511c7b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00511c7d: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 00511c80: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 00511c83: mov dword ptr [edx + 0x3c], ebx */ W32((u32)(r_edx+0x3cu), r_ebx);
    /* 00511c86: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 00511c89: mov dword ptr [edx + 0x40], esi */ W32((u32)(r_edx+0x40u), r_esi);
    /* 00511c8c: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 00511c8f: mov dword ptr [edx + 0x44], edi */ W32((u32)(r_edx+0x44u), r_edi);
    /* 00511c92: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00511c95: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 00511c98: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00511c9b: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 00511c9e: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00511ca1: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
L_00511ca4:; BB(0x00511ca4);
    /* 00511ca4: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00511ca7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511caa: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00511cad: fld dword ptr [ecx + 0x4c] */ FPUSH(R_F32((u32)(r_ecx+0x4cu)));
    /* 00511cb0: fld dword ptr [ecx + 0x50] */ FPUSH(R_F32((u32)(r_ecx+0x50u)));
    /* 00511cb3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00511cb5: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00511cb8: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 00511cbb: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00511cbe: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 00511cc1: mov dword ptr [ecx + 0x1c], ebx */ W32((u32)(r_ecx+0x1cu), r_ebx);
    /* 00511cc4: lea esi, [ebx + ebx*4] */ r_esi = (u32)(r_ebx+r_ebx*4);
    /* 00511cc7: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00511cc9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00511ccb: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00511ccd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00511cce: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x511cd3u); f_008581c5();
    /* 00511cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00511cd4: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00511cd7: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00511cda: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00511cdf: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x511ce4u); f_0082d990();
    /* 00511ce4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00511ce7: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x511cecu); f_0082d838();
    /* 00511cec: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00511cef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00511cf1: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x511cf6u); f_0082d8bc();
    /* 00511cf6: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00511cf9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00511cfc: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00511cfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00511d00: jle 0x511dec */ if ((fZ||fS!=fO)) goto L_00511dec;
L_00511d06:; BB(0x00511d06);
    /* 00511d06: lea ebx, [esi + esi*4] */ r_ebx = (u32)(r_esi+r_esi*4);
    /* 00511d09: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 00511d0c: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00511d0f: mov ebx, dword ptr [edx + 0x34] */ r_ebx = R32((u32)(r_edx+0x34u));
    /* 00511d12: mov edx, dword ptr [edx + 0x20] */ r_edx = R32((u32)(r_edx+0x20u));
    /* 00511d15: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00511d18: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00511d1a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00511d1c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00511d1f: lea edi, [ebx + eax] */ r_edi = (u32)(r_ebx+r_eax);
    /* 00511d22: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 00511d25: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00511d26: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00511d28: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00511d2b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00511d2d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00511d2f: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00511d31: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00511d34: lea edx, [edx + eax + 4] */ r_edx = (u32)(r_edx+r_eax+0x4u);
    /* 00511d38: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00511d3a: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x511d3fu); f_00830aa0();
    /* 00511d3f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00511d42: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00511d45: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00511d48: mov edx, dword ptr [edx + 0x20] */ r_edx = R32((u32)(r_edx+0x20u));
    /* 00511d4b: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00511d4e: lea eax, [ebx + edi + 0xc] */ r_eax = (u32)(r_ebx+r_edi+0xcu);
    /* 00511d52: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00511d55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511d56: lea edx, [edx + ecx + 0x10] */ r_edx = (u32)(r_edx+r_ecx+0x10u);
    /* 00511d5a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00511d5c: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x511d61u); f_0082eab8();
    /* 00511d61: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00511d64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511d65: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x511d6au); f_007828e4();
    /* 00511d6a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00511d6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00511d6f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x511d74u); f_008587a5();
    /* 00511d74: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00511d77: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00511d7a: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 00511d7d: fdiv dword ptr [0x920560] */ ST(0) = ST(0) / R_F32((u32)(0x920560u));
    /* 00511d83: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 00511d86: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00511d89: fadd dword ptr [ebp - 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffe8u));
    /* 00511d8c: fstp dword ptr [ebx + ecx*8 + 0x10] */ W_F32((u32)(r_ebx+r_ecx*8+0x10u), ST(0)); FPOP();
    /* 00511d90: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00511d92: mov dword ptr [ebx + ecx*8 + 0x18], edx */ W32((u32)(r_ebx+r_ecx*8+0x18u), r_edx);
    /* 00511d96: mov dword ptr [ebx + ecx*8 + 0x1c], eax */ W32((u32)(r_ebx+r_ecx*8+0x1cu), r_eax);
    /* 00511d9a: mov dword ptr [ebx + ecx*8 + 0x20], edx */ W32((u32)(r_ebx+r_ecx*8+0x20u), r_edx);
    /* 00511d9e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x511da3u); f_008587a5();
    /* 00511da3: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00511da6: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00511da9: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 00511dac: fdiv dword ptr [0x920560] */ ST(0) = ST(0) / R_F32((u32)(0x920560u));
    /* 00511db2: fadd dword ptr [0x92055c] */ ST(0) = ST(0) + R_F32((u32)(0x92055cu));
    /* 00511db8: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00511dbb: fmul dword ptr [0x920558] */ ST(0) = ST(0) * R_F32((u32)(0x920558u));
    /* 00511dc1: fmul dword ptr [0x920554] */ ST(0) = ST(0) * R_F32((u32)(0x920554u));
    /* 00511dc7: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 00511dca: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 00511dce: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00511dd3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00511dd6: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 00511dd9: fistp dword ptr [ebx + edx*8 + 0x24] */ W32((u32)(r_ebx+r_edx*8+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00511ddd: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 00511de0: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00511de3: cmp esi, dword ptr [edx + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00511de6: jl 0x511d06 */ if ((fS!=fO)) goto L_00511d06;
L_00511dec:; BB(0x00511dec);
    /* 00511dec: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x511df1u); f_0082da80();
    /* 00511df1: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00511df4: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00511df7: push dword ptr [ecx + 0x38] */ { u32 v = R32((u32)(r_ecx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00511dfa: call 0x512050 */ r_esp -= 4; W32(r_esp, 0x511dffu); f_00512050();
    /* 00511dff: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00511e02: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00511e05: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00511e08: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00511e0b: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00511e0e: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00511e11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00511e14: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00511e1b: mov esp, ebp */ r_esp = r_ebp;
    /* 00511e1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00511e1e: ret 0x18 */ FN_RET(0x00511c00); r_esp += 28; return;
L_00511e21:; BB(0x00511e21);
    /* 00511e21: mov dword ptr [edx + 0x38], 0xc */ W32((u32)(r_edx+0x38u), 0xcu);
    /* 00511e28: mov dword ptr [edx + 0x3c], 0x3d8f5c29 */ W32((u32)(r_edx+0x3cu), 0x3d8f5c29u);
    /* 00511e2f: mov dword ptr [edx + 0x40], 0x3fc00000 */ W32((u32)(r_edx+0x40u), 0x3fc00000u);
    /* 00511e36: mov dword ptr [edx + 0x44], 0x3f666666 */ W32((u32)(r_edx+0x44u), 0x3f666666u);
    /* 00511e3d: mov dword ptr [edx + 0x48], 0x3df5c28f */ W32((u32)(r_edx+0x48u), 0x3df5c28fu);
    /* 00511e44: mov dword ptr [edx + 0x4c], 0x3f000000 */ W32((u32)(r_edx+0x4cu), 0x3f000000u);
    /* 00511e4b: mov dword ptr [edx + 0x50], 0x3f000000 */ W32((u32)(r_edx+0x50u), 0x3f000000u);
    /* 00511e52: jmp 0x511ca4 */ goto L_00511ca4;
}

void f_00511e00(void)
{
    FN_ENTER(0x00511e00);
    goto L_00511e00;
L_00511dcd:; BB(0x00511dcd);
    /* 00511dcd: mov esp, 0xc000d */ r_esp = 0xc000du;
    /* 00511dd2: add byte ptr [ecx + 0x6dd9c445], cl */ { u32 ad = (u32)(r_ecx+0x6dd9c445u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    UNSUP(0x00511dd8, "falls out of decoded code");
L_00511e00:; BB(0x00511e00);
    /* 00511e00: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00511e01: test al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00511e03: jge 0x511dcd */ if ((fS==fO)) goto L_00511dcd;
L_00511e05:; BB(0x00511e05);
    /* 00511e05: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00511e08: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00511e0b: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00511e0e: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00511e11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00511e14: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00511e1b: mov esp, ebp */ r_esp = r_ebp;
    /* 00511e1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00511e1e: ret 0x18 */ FN_RET(0x00511e00); r_esp += 28; return;
}

void f_00511e58(void) /* sub_511E58 */
{
    FN_ENTER(0x00511e58);
    /* 00511e58: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00511e5b: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 00511e5e: fsub dword ptr [ecx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x3cu));
    /* 00511e61: fcom dword ptr [0x920534] */ fx_compare(ST(0), R_F32((u32)(0x920534u))); 
    /* 00511e67: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00511e69: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 00511e6c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00511e6d: ja 0x511e7c */ if ((!fC&&!fZ)) goto L_00511e7c;
L_00511e6f:; BB(0x00511e6f);
    /* 00511e6f: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 00511e73: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00511e78: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
L_00511e7c:; BB(0x00511e7c);
    /* 00511e7c: fld dword ptr [ecx + 0x48] */ FPUSH(R_F32((u32)(r_ecx+0x48u)));
    /* 00511e7f: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00511e82: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00511e84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00511e86: jle 0x511f15 */ if ((fZ||fS!=fO)) goto L_00511f15;
L_00511e8c:; BB(0x00511e8c);
    /* 00511e8c: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00511e90: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00511e94: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00511e97: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 00511e9a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00511e9c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00511e9e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00511ea0:; BB(0x00511ea0);
    /* 00511ea0: mov edi, dword ptr [ecx + 0x34] */ r_edi = R32((u32)(r_ecx+0x34u));
    /* 00511ea3: fld dword ptr [edi + eax + 0xc] */ FPUSH(R_F32((u32)(r_edi+r_eax+0xcu)));
    /* 00511ea7: fmul dword ptr [ecx + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x30u));
    /* 00511eaa: fadd dword ptr [edi + eax] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_eax));
    /* 00511ead: fld dword ptr [edi + eax + 0x10] */ FPUSH(R_F32((u32)(r_edi+r_eax+0x10u)));
    /* 00511eb1: fld dword ptr [edi + eax + 4] */ FPUSH(R_F32((u32)(r_edi+r_eax+0x4u)));
    /* 00511eb5: fld dword ptr [edi + eax + 0x14] */ FPUSH(R_F32((u32)(r_edi+r_eax+0x14u)));
    /* 00511eb9: mov esi, dword ptr [edi + eax + 0x24] */ r_esi = R32((u32)(r_edi+r_eax+0x24u));
    /* 00511ebd: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00511ebf: fstp dword ptr [edi + eax] */ W_F32((u32)(r_edi+r_eax), ST(0)); FPOP();
    /* 00511ec2: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00511ec4: fstp dword ptr [edi + eax + 4] */ W_F32((u32)(r_edi+r_eax+0x4u), ST(0)); FPOP();
    /* 00511ec8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00511eca: fmul dword ptr [ecx + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x30u));
    /* 00511ecd: fadd dword ptr [edi + eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_eax+0x8u));
    /* 00511ed1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00511ed3: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00511ed5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00511ed7: fstp dword ptr [edi + eax + 8] */ W_F32((u32)(r_edi+r_eax+0x8u), ST(0)); FPOP();
    /* 00511edb: fstp dword ptr [edi + eax + 0x10] */ W_F32((u32)(r_edi+r_eax+0x10u), ST(0)); FPOP();
    /* 00511edf: mov ebx, esi */ r_ebx = r_esi;
    /* 00511ee1: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00511ee4: add dword ptr [edi + eax + 0x18], esi */ { u32 ad = (u32)(r_edi+r_eax+0x18u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00511ee8: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00511eea: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00511eec: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00511eef: add dword ptr [edi + eax + 0x1c], esi */ { u32 ad = (u32)(r_edi+r_eax+0x1cu);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00511ef3: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00511ef6: cmp edx, dword ptr [ecx + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00511ef9: jl 0x511ea0 */ if ((fS!=fO)) goto L_00511ea0;
L_00511efb:; BB(0x00511efb);
    /* 00511efb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00511efd: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00511f01: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00511f05: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00511f08:; BB(0x00511f08);
    /* 00511f08: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 00511f0b: fmul dword ptr [ecx + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x44u));
    /* 00511f0e: fstp dword ptr [ecx + 0x30] */ W_F32((u32)(r_ecx+0x30u), ST(0)); FPOP();
    /* 00511f11: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00511f14: ret  */ FN_RET(0x00511e58); r_esp += 4; return;
L_00511f15:; BB(0x00511f15);
    /* 00511f15: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00511f17: jmp 0x511f08 */ goto L_00511f08;
}

void f_00511f1c(void) /* sub_511F1C */
{
    FN_ENTER(0x00511f1c);
    /* 00511f1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00511f1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00511f1e: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00511f21: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00511f23: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00511f26: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511f28: je 0x511f2f */ if (fZ) goto L_00511f2f;
L_00511f2a:; BB(0x00511f2a);
    /* 00511f2a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x511f2fu); f_00829cc8();
L_00511f2f:; BB(0x00511f2f);
    /* 00511f2f: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00511f35: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 00511f38: fcomp dword ptr [0x920530] */ fx_compare(ST(0), R_F32((u32)(0x920530u))); FPOP();
    /* 00511f3e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00511f40: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 00511f46: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00511f47: jae 0x511f97 */ if (!fC) goto L_00511f97;
L_00511f49:; BB(0x00511f49);
    /* 00511f49: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 00511f50: or edx, 0x810 */ {  u32 a = r_edx; u32 b = 0x810u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00511f56: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00511f5c: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 00511f64: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 00511f6c: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 00511f74: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00511f79: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00511f7e: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x511f83u); f_0082d6fc();
    /* 00511f83: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00511f87: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00511f8a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00511f8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511f8f: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x511f94u); f_0082d710();
    /* 00511f94: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00511f97:; BB(0x00511f97);
    /* 00511f97: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00511f9a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00511f9c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00511f9e: jle 0x512033 */ if ((fZ||fS!=fO)) goto L_00512033;
L_00511fa4:; BB(0x00511fa4);
    /* 00511fa4: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00511fa8: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00511fac: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00511fb0: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00511fb3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00511fb5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00511fb7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00511fb9: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00511fbc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00511fbe: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 00511fc1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00511fc3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00511fc5: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00511fc7: mov ebp, eax */ r_ebp = r_eax;
    /* 00511fc9: mov ebx, edx */ r_ebx = r_edx;
L_00511fcb:; BB(0x00511fcb);
    /* 00511fcb: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00511fcf: mov edi, ebx */ r_edi = r_ebx;
    /* 00511fd1: add edi, dword ptr [eax + 0x34] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x34u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00511fd4: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x511fd9u); f_0082d7b0();
    /* 00511fd9: mov ecx, edi */ r_ecx = r_edi;
    /* 00511fdb: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x511fe0u); f_0082d838();
    /* 00511fe0: add edi, 0x18 */ {  u32 a = r_edi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00511fe3: mov ecx, edi */ r_ecx = r_edi;
    /* 00511fe5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00511fe7: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x511fecu); f_00830df8();
    /* 00511fec: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00511ff0: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00511ff3: mov edi, dword ptr [ecx + 0xc] */ r_edi = R32((u32)(r_ecx+0xcu));
    /* 00511ff6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511ff8: je 0x512008 */ if (fZ) goto L_00512008;
L_00511ffa:; BB(0x00511ffa);
    /* 00511ffa: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00511ffd: push dword ptr [esi + ecx] */ { u32 v = R32((u32)(r_esi+r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 00512000: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x512005u); f_008321d8();
    /* 00512005: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00512006: jmp 0x512014 */ goto L_00512014;
L_00512008:; BB(0x00512008);
    /* 00512008: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0051200b: push dword ptr [esi + ecx] */ { u32 v = R32((u32)(r_esi+r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 0051200e: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x512013u); f_0082e6b0();
    /* 00512013: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00512014:; BB(0x00512014);
    /* 00512014: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x512019u); f_0082da80();
    /* 00512019: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0051201d: add ebx, 0x28 */ {  u32 a = r_ebx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00512020: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00512023: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00512026: cmp ebp, dword ptr [ecx + 0x1c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00512029: jl 0x511fcb */ if ((fS!=fO)) goto L_00511fcb;
L_0051202b:; BB(0x0051202b);
    /* 0051202b: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0051202f: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_00512033:; BB(0x00512033);
    /* 00512033: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512035: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0051203a: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x51203fu); f_0082d6fc();
    /* 0051203f: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00512044: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00512049: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051204c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051204d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051204e: ret  */ FN_RET(0x00511f1c); r_esp += 4; return;
}

