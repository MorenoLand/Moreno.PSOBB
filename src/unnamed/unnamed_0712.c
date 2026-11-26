#include "protos.h"

void f_007120ec(void) /* sub_7120EC */
{
    FN_ENTER(0x007120ec);
    /* 007120ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007120ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007120ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007120ef: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007120f2: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 007120f6: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 007120fa: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 007120fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007120ff: jl 0x71235a */ if ((fS!=fO)) goto L_0071235a;
L_00712105:; BB(0x00712105);
    /* 00712105: mov eax, 0x42980000 */ r_eax = 0x42980000u;
    /* 0071210a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0071210e: mov edx, 0x43170000 */ r_edx = 0x43170000u;
    /* 00712113: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00712117: mov ebx, 0x42640000 */ r_ebx = 0x42640000u;
    /* 0071211c: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00712120: mov eax, 0x43170000 */ r_eax = 0x43170000u;
    /* 00712125: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00712129: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 0071212d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071212f: je 0x712137 */ if (fZ) goto L_00712137;
L_00712131:; BB(0x00712131);
    /* 00712131: lea ebx, [esp + 0x14] */ r_ebx = (u32)(r_esp+0x14u);
    /* 00712135: jmp 0x71213b */ goto L_0071213b;
L_00712137:; BB(0x00712137);
    /* 00712137: lea ebx, [esp + 0xc] */ r_ebx = (u32)(r_esp+0xcu);
L_0071213b:; BB(0x0071213b);
    /* 0071213b: fld dword ptr [0x96f6c4] */ FPUSH(R_F32((u32)(0x96f6c4u)));
    /* 00712141: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 00712144: fdivr dword ptr [0x96f6c8] */ ST(0) = R_F32((u32)(0x96f6c8u)) / ST(0);
    /* 0071214a: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0071214d: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 00712150: fadd dword ptr [ebp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xcu));
    /* 00712153: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00712155: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00712159: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071215b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071215e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00712162: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x712167u); f_007a902c();
    /* 00712167: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0071216c: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x712171u); f_0082bb30();
    /* 00712171: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 00712177: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x71217cu); f_00829cc8();
    /* 0071217c: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00712181: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00712186: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x71218bu); f_0082bb60();
    /* 0071218b: fld dword ptr [0x96f6c0] */ FPUSH(R_F32((u32)(0x96f6c0u)));
    /* 00712191: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00712195: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00712197: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0071219b: fld dword ptr [0x96f6bc] */ FPUSH(R_F32((u32)(0x96f6bcu)));
    /* 007121a1: fld dword ptr [0x96f6b4] */ FPUSH(R_F32((u32)(0x96f6b4u)));
    /* 007121a7: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007121a9: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007121ad: fld dword ptr [0x96f6b8] */ FPUSH(R_F32((u32)(0x96f6b8u)));
    /* 007121b3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007121b5: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 007121b9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007121bb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007121bd: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007121c1: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 007121c5: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 007121c8: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007121ca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007121cc: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007121d0: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 007121d2: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 007121d4: mov ecx, esi */ r_ecx = r_esi;
    /* 007121d6: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 007121da: fld dword ptr [0x96f6b0] */ FPUSH(R_F32((u32)(0x96f6b0u)));
    /* 007121e0: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 007121e3: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 007121e5: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 007121e9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007121eb: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 007121ed: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 007121ef: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007121f3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007121f5: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 007121f8: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 007121fa: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007121fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007121ff: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x712204u); f_0071ba34();
    /* 00712204: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712206: je 0x712219 */ if (fZ) goto L_00712219;
L_00712208:; BB(0x00712208);
    /* 00712208: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00712209: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0071220d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00712210: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00712214: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x712219u); f_0082b440();
L_00712219:; BB(0x00712219);
    /* 00712219: fld dword ptr [0x96f6ac] */ FPUSH(R_F32((u32)(0x96f6acu)));
    /* 0071221f: fadd dword ptr [esi + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x18u));
    /* 00712222: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00712226: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00712228: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0071222c: fld dword ptr [0x96f6a8] */ FPUSH(R_F32((u32)(0x96f6a8u)));
    /* 00712232: fld dword ptr [0x96f6a4] */ FPUSH(R_F32((u32)(0x96f6a4u)));
    /* 00712238: fld dword ptr [0x96f6a0] */ FPUSH(R_F32((u32)(0x96f6a0u)));
    /* 0071223e: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00712240: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00712244: fld dword ptr [0x96f6b8] */ FPUSH(R_F32((u32)(0x96f6b8u)));
    /* 0071224a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071224c: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00712250: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00712252: fadd dword ptr [esi + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x18u));
    /* 00712255: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00712257: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00712259: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0071225d: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 00712261: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 00712264: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00712266: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0071226a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071226c: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 0071226e: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00712270: mov ecx, esi */ r_ecx = r_esi;
    /* 00712272: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00712276: fld dword ptr [0x96f6b0] */ FPUSH(R_F32((u32)(0x96f6b0u)));
    /* 0071227c: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 0071227f: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00712281: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00712285: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00712287: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 00712289: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0071228b: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0071228f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00712291: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 00712294: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00712296: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0071229a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071229b: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x7122a0u); f_0071ba34();
    /* 007122a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007122a2: je 0x7122b5 */ if (fZ) goto L_007122b5;
L_007122a4:; BB(0x007122a4);
    /* 007122a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007122a5: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007122a9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007122ac: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 007122b0: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x7122b5u); f_0082b440();
L_007122b5:; BB(0x007122b5);
    /* 007122b5: fld dword ptr [0x96f6bc] */ FPUSH(R_F32((u32)(0x96f6bcu)));
    /* 007122bb: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007122bf: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 007122c1: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007122c5: fld dword ptr [0x96f6ac] */ FPUSH(R_F32((u32)(0x96f6acu)));
    /* 007122cb: fld dword ptr [0x96f6b4] */ FPUSH(R_F32((u32)(0x96f6b4u)));
    /* 007122d1: fld dword ptr [0x96f6a4] */ FPUSH(R_F32((u32)(0x96f6a4u)));
    /* 007122d7: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007122d9: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007122dd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007122df: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 007122e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007122e5: fadd dword ptr [esi + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x18u));
    /* 007122e8: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 007122ea: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007122ec: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007122f0: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 007122f4: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 007122f7: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007122f9: fld dword ptr [0x96f6b8] */ FPUSH(R_F32((u32)(0x96f6b8u)));
    /* 007122ff: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00712301: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00712305: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 00712307: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00712309: fld dword ptr [0x96f6b0] */ FPUSH(R_F32((u32)(0x96f6b0u)));
    /* 0071230f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00712311: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00712315: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 00712318: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0071231a: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0071231e: mov ecx, esi */ r_ecx = r_esi;
    /* 00712320: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00712322: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 00712324: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00712326: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0071232a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071232c: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 0071232f: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00712331: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00712335: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00712336: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x71233bu); f_0071ba34();
    /* 0071233b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071233d: je 0x712350 */ if (fZ) goto L_00712350;
L_0071233f:; BB(0x0071233f);
    /* 0071233f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00712340: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00712344: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00712347: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0071234b: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x712350u); f_0082b440();
L_00712350:; BB(0x00712350);
    /* 00712350: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x712355u); f_004ac444();
    /* 00712355: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x71235au); f_007a9044();
L_0071235a:; BB(0x0071235a);
    /* 0071235a: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071235d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071235e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071235f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00712360: ret  */ FN_RET(0x007120ec); r_esp += 4; return;
}

void f_0071233d(void)
{
    FN_ENTER(0x0071233d);
    /* 0071233d: je 0x712350 */ if (fZ) goto L_00712350;
L_0071233f:; BB(0x0071233f);
    /* 0071233f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00712340: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00712344: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00712347: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0071234b: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x712350u); f_0082b440();
L_00712350:; BB(0x00712350);
    /* 00712350: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x712355u); f_004ac444();
    /* 00712355: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x71235au); f_007a9044();
    /* 0071235a: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071235d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071235e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071235f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00712360: ret  */ FN_RET(0x0071233d); r_esp += 4; return;
}

void f_00712364(void) /* sub_712364 */
{
    FN_ENTER(0x00712364);
    /* 00712364: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00712365: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00712366: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00712367: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00712369: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0071236d: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00712370: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00712373: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712378: je 0x712469 */ if (fZ) goto L_00712469;
L_0071237e:; BB(0x0071237e);
    /* 0071237e: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712383: je 0x71238c */ if (fZ) goto L_0071238c;
L_00712385:; BB(0x00712385);
    /* 00712385: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00712387: jmp 0x71246b */ goto L_0071246b;
L_0071238c:; BB(0x0071238c);
    /* 0071238c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071238e: call 0x712480 */ r_esp -= 4; W32(r_esp, 0x712393u); f_00712480();
    /* 00712393: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712395: je 0x712465 */ if (fZ) goto L_00712465;
L_0071239b:; BB(0x0071239b);
    /* 0071239b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071239d: je 0x712461 */ if (fZ) goto L_00712461;
L_007123a3:; BB(0x007123a3);
    /* 007123a3: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
L_007123a6:; BB(0x007123a6);
    /* 007123a6: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 007123a9: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007123ae: je 0x7123b7 */ if (fZ) goto L_007123b7;
L_007123b0:; BB(0x007123b0);
    /* 007123b0: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007123b5: jmp 0x7123b9 */ goto L_007123b9;
L_007123b7:; BB(0x007123b7);
    /* 007123b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_007123b9:; BB(0x007123b9);
    /* 007123b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007123bb: je 0x712456 */ if (fZ) goto L_00712456;
L_007123c1:; BB(0x007123c1);
    /* 007123c1: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007123c6: je 0x7123cf */ if (fZ) goto L_007123cf;
L_007123c8:; BB(0x007123c8);
    /* 007123c8: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007123cd: jmp 0x7123d1 */ goto L_007123d1;
L_007123cf:; BB(0x007123cf);
    /* 007123cf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_007123d1:; BB(0x007123d1);
    /* 007123d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007123d3: jne 0x712456 */ if (!fZ) goto L_00712456;
L_007123d9:; BB(0x007123d9);
    /* 007123d9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007123db: jne 0x7123e4 */ if (!fZ) goto L_007123e4;
L_007123dd:; BB(0x007123dd);
    /* 007123dd: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007123e2: jmp 0x7123e6 */ goto L_007123e6;
L_007123e4:; BB(0x007123e4);
    /* 007123e4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_007123e6:; BB(0x007123e6);
    /* 007123e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007123e8: jne 0x712456 */ if (!fZ) goto L_00712456;
L_007123ea:; BB(0x007123ea);
    /* 007123ea: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007123ec: jne 0x712456 */ if (!fZ) goto L_00712456;
L_007123ee:; BB(0x007123ee);
    /* 007123ee: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007123f0: je 0x712456 */ if (fZ) goto L_00712456;
L_007123f2:; BB(0x007123f2);
    /* 007123f2: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007123f8: je 0x712401 */ if (fZ) goto L_00712401;
L_007123fa:; BB(0x007123fa);
    /* 007123fa: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007123ff: jmp 0x712403 */ goto L_00712403;
L_00712401:; BB(0x00712401);
    /* 00712401: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00712403:; BB(0x00712403);
    /* 00712403: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 00712405: je 0x71241b */ if (fZ) goto L_0071241b;
L_00712407:; BB(0x00712407);
    /* 00712407: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071240c: je 0x712415 */ if (fZ) goto L_00712415;
L_0071240e:; BB(0x0071240e);
    /* 0071240e: mov eax, 1 */ r_eax = 0x1u;
    /* 00712413: jmp 0x712417 */ goto L_00712417;
L_00712415:; BB(0x00712415);
    /* 00712415: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00712417:; BB(0x00712417);
    /* 00712417: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 00712419: jne 0x712456 */ if (!fZ) goto L_00712456;
L_0071241b:; BB(0x0071241b);
    /* 0071241b: fld dword ptr [ebx + 0x30] */ FPUSH(R_F32((u32)(r_ebx+0x30u)));
    /* 0071241e: fld dword ptr [esi + 0x30] */ FPUSH(R_F32((u32)(r_esi+0x30u)));
    /* 00712421: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 00712424: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00712426: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00712428: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00712429: jbe 0x712473 */ if ((fC||fZ)) goto L_00712473;
L_0071242b:; BB(0x0071242b);
    /* 0071242b: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 0071242e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00712430: fcomp dword ptr [esi + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x40u))); FPOP();
    /* 00712433: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00712435: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00712436: jbe 0x712456 */ if ((fC||fZ)) goto L_00712456;
L_00712438:; BB(0x00712438);
    /* 00712438: fld dword ptr [ebx + 0x34] */ FPUSH(R_F32((u32)(r_ebx+0x34u)));
    /* 0071243b: fld dword ptr [esi + 0x34] */ FPUSH(R_F32((u32)(r_esi+0x34u)));
    /* 0071243e: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00712441: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00712443: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00712445: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00712447: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00712448: jbe 0x712477 */ if ((fC||fZ)) goto L_00712477;
L_0071244a:; BB(0x0071244a);
    /* 0071244a: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 0071244d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0071244f: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00712451: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00712453: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00712454: jb 0x71246b */ if (fC) goto L_0071246b;
L_00712456:; BB(0x00712456);
    /* 00712456: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 00712459: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071245b: jne 0x7123a6 */ if (!fZ) goto L_007123a6;
L_00712461:; BB(0x00712461);
    /* 00712461: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00712463: jmp 0x71246b */ goto L_0071246b;
L_00712465:; BB(0x00712465);
    /* 00712465: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00712467: jmp 0x71246b */ goto L_0071246b;
L_00712469:; BB(0x00712469);
    /* 00712469: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0071246b:; BB(0x0071246b);
    /* 0071246b: mov eax, esi */ r_eax = r_esi;
    /* 0071246d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071246e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071246f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00712470: ret 4 */ FN_RET(0x00712364); r_esp += 8; return;
L_00712473:; BB(0x00712473);
    /* 00712473: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00712475: jmp 0x712456 */ goto L_00712456;
L_00712477:; BB(0x00712477);
    /* 00712477: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00712479: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071247b: jmp 0x712456 */ goto L_00712456;
}

void f_00712480(void) /* sub_712480 */
{
    FN_ENTER(0x00712480);
    /* 00712480: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00712483: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00712485: jne 0x71248a */ if (!fZ) goto L_0071248a;
L_00712487:; BB(0x00712487);
    /* 00712487: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00712489: ret  */ FN_RET(0x00712480); r_esp += 4; return;
L_0071248a:; BB(0x0071248a);
    /* 0071248a: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071248c: je 0x712491 */ if (fZ) goto L_00712491;
L_0071248e:; BB(0x0071248e);
    /* 0071248e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00712490: ret  */ FN_RET(0x00712480); r_esp += 4; return;
L_00712491:; BB(0x00712491);
    /* 00712491: mov eax, 1 */ r_eax = 0x1u;
    /* 00712496: ret  */ FN_RET(0x00712480); r_esp += 4; return;
}

void f_00712498(void) /* sub_712498 */
{
    FN_ENTER(0x00712498);
    /* 00712498: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00712499: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071249a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071249d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071249f: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 007124a3: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 007124a6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007124aa: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007124af: je 0x7125b0 */ if (fZ) goto L_007125b0;
L_007124b5:; BB(0x007124b5);
    /* 007124b5: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007124ba: je 0x7124c6 */ if (fZ) goto L_007124c6;
L_007124bc:; BB(0x007124bc);
    /* 007124bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007124be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007124c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007124c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007124c3: ret 0xc */ FN_RET(0x00712498); r_esp += 16; return;
L_007124c6:; BB(0x007124c6);
    /* 007124c6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007124c8: call 0x712480 */ r_esp -= 4; W32(r_esp, 0x7124cdu); f_00712480();
    /* 007124cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007124cf: je 0x7125b0 */ if (fZ) goto L_007125b0;
L_007124d5:; BB(0x007124d5);
    /* 007124d5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007124d7: je 0x7125b0 */ if (fZ) goto L_007125b0;
L_007124dd:; BB(0x007124dd);
    /* 007124dd: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007124e1: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 007124e5: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 007124e9: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 007124ec: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
L_007124f0:; BB(0x007124f0);
    /* 007124f0: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 007124f3: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007124f8: je 0x71259e */ if (fZ) goto L_0071259e;
L_007124fe:; BB(0x007124fe);
    /* 007124fe: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712503: jne 0x71259e */ if (!fZ) goto L_0071259e;
L_00712509:; BB(0x00712509);
    /* 00712509: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071250b: jne 0x712514 */ if (!fZ) goto L_00712514;
L_0071250d:; BB(0x0071250d);
    /* 0071250d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00712512: jmp 0x712516 */ goto L_00712516;
L_00712514:; BB(0x00712514);
    /* 00712514: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00712516:; BB(0x00712516);
    /* 00712516: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712518: jne 0x71259e */ if (!fZ) goto L_0071259e;
L_0071251e:; BB(0x0071251e);
    /* 0071251e: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00712520: jne 0x71259e */ if (!fZ) goto L_0071259e;
L_00712526:; BB(0x00712526);
    /* 00712526: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712528: je 0x71259e */ if (fZ) goto L_0071259e;
L_0071252a:; BB(0x0071252a);
    /* 0071252a: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712530: je 0x712539 */ if (fZ) goto L_00712539;
L_00712532:; BB(0x00712532);
    /* 00712532: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00712537: jmp 0x71253b */ goto L_0071253b;
L_00712539:; BB(0x00712539);
    /* 00712539: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0071253b:; BB(0x0071253b);
    /* 0071253b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071253d: je 0x712553 */ if (fZ) goto L_00712553;
L_0071253f:; BB(0x0071253f);
    /* 0071253f: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712544: je 0x71254d */ if (fZ) goto L_0071254d;
L_00712546:; BB(0x00712546);
    /* 00712546: mov eax, 1 */ r_eax = 0x1u;
    /* 0071254b: jmp 0x71254f */ goto L_0071254f;
L_0071254d:; BB(0x0071254d);
    /* 0071254d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0071254f:; BB(0x0071254f);
    /* 0071254f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712551: jne 0x71259e */ if (!fZ) goto L_0071259e;
L_00712553:; BB(0x00712553);
    /* 00712553: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00712555: fld dword ptr [esi + 0x30] */ FPUSH(R_F32((u32)(r_esi+0x30u)));
    /* 00712558: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 0071255b: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0071255d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071255f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00712560: jbe 0x7125ba */ if ((fC||fZ)) goto L_007125ba;
L_00712562:; BB(0x00712562);
    /* 00712562: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00712565: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00712567: fcomp dword ptr [esi + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x40u))); FPOP();
    /* 0071256a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071256c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071256d: jbe 0x71259e */ if ((fC||fZ)) goto L_0071259e;
L_0071256f:; BB(0x0071256f);
    /* 0071256f: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00712572: fld dword ptr [esi + 0x34] */ FPUSH(R_F32((u32)(r_esi+0x34u)));
    /* 00712575: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00712578: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0071257a: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0071257c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071257e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071257f: jbe 0x7125be */ if ((fC||fZ)) goto L_007125be;
L_00712581:; BB(0x00712581);
    /* 00712581: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 00712584: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00712586: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00712588: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071258a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071258b: jae 0x71259e */ if (!fC) goto L_0071259e;
L_0071258d:; BB(0x0071258d);
    /* 0071258d: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00712591: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00712594: mov eax, esi */ r_eax = r_esi;
    /* 00712596: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00712599: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071259a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071259b: ret 0xc */ FN_RET(0x00712498); r_esp += 16; return;
L_0071259e:; BB(0x0071259e);
    /* 0071259e: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 007125a1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007125a3: jne 0x7124f0 */ if (!fZ) goto L_007124f0;
L_007125a9:; BB(0x007125a9);
    /* 007125a9: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 007125ad: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_007125b0:; BB(0x007125b0);
    /* 007125b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007125b2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007125b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007125b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007125b7: ret 0xc */ FN_RET(0x00712498); r_esp += 16; return;
L_007125ba:; BB(0x007125ba);
    /* 007125ba: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007125bc: jmp 0x71259e */ goto L_0071259e;
L_007125be:; BB(0x007125be);
    /* 007125be: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007125c0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007125c2: jmp 0x71259e */ goto L_0071259e;
}

void f_007125c4(void) /* sub_7125C4 */
{
    FN_ENTER(0x007125c4);
    /* 007125c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007125c5: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 007125c8: fadd dword ptr [ecx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x38u));
    /* 007125cb: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007125cf: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 007125d3: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 007125d5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007125d7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007125d9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007125db: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007125dd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007125de: jae 0x71260c */ if (!fC) goto L_0071260c;
L_007125e0:; BB(0x007125e0);
    /* 007125e0: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007125e2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007125e4: fcomp dword ptr [ecx + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x40u))); FPOP();
    /* 007125e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007125e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007125ea: jbe 0x71260e */ if ((fC||fZ)) goto L_0071260e;
L_007125ec:; BB(0x007125ec);
    /* 007125ec: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007125ef: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 007125f2: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 007125f5: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007125f7: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007125f9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007125fb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007125fc: jbe 0x71261d */ if ((fC||fZ)) goto L_0071261d;
L_007125fe:; BB(0x007125fe);
    /* 007125fe: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00712601: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00712603: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00712605: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00712607: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00712608: jae 0x71260e */ if (!fC) goto L_0071260e;
L_0071260a:; BB(0x0071260a);
    /* 0071260a: jmp 0x712614 */ goto L_00712614;
L_0071260c:; BB(0x0071260c);
    /* 0071260c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0071260e:; BB(0x0071260e);
    /* 0071260e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00712610: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00712611: ret 8 */ FN_RET(0x007125c4); r_esp += 12; return;
L_00712614:; BB(0x00712614);
    /* 00712614: mov eax, 1 */ r_eax = 0x1u;
    /* 00712619: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071261a: ret 8 */ FN_RET(0x007125c4); r_esp += 12; return;
L_0071261d:; BB(0x0071261d);
    /* 0071261d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0071261f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00712621: jmp 0x71260e */ goto L_0071260e;
}

void f_00712624(void) /* sub_712624 */
{
    FN_ENTER(0x00712624);
    /* 00712624: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00712625: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00712627: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00712628: call 0x73ec88 */ r_esp -= 4; W32(r_esp, 0x71262du); f_0073ec88();
    /* 0071262d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00712631: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00712632: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00712635: call 0x73ece0 */ r_esp -= 4; W32(r_esp, 0x71263au); f_0073ece0();
    /* 0071263a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071263d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071263e: ret 4 */ FN_RET(0x00712624); r_esp += 8; return;
}

void f_00712644(void) /* sub_712644 */
{
    FN_ENTER(0x00712644);
    /* 00712644: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00712645: mov esi, ecx */ r_esi = r_ecx;
    /* 00712647: call 0x73ec78 */ r_esp -= 4; W32(r_esp, 0x71264cu); f_0073ec78();
    /* 0071264c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071264d: mov ecx, esi */ r_ecx = r_esi;
    /* 0071264f: call 0x712658 */ r_esp -= 4; W32(r_esp, 0x712654u); f_00712658();
    /* 00712654: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00712655: ret  */ FN_RET(0x00712644); r_esp += 4; return;
}

void f_00712658(void) /* sub_712658 */
{
    FN_ENTER(0x00712658);
    /* 00712658: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00712659: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071265a: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071265d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0071265f: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00712662: push dword ptr [ebp + 0x54] */ { u32 v = R32((u32)(r_ebp+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00712665: lea edx, [ebp + 0x40] */ r_edx = (u32)(r_ebp+0x40u);
    /* 00712668: lea eax, [ebp + 0x48] */ r_eax = (u32)(r_ebp+0x48u);
    /* 0071266b: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071266f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00712670: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00712671: call 0x71b8d4 */ r_esp -= 4; W32(r_esp, 0x712676u); f_0071b8d4();
    /* 00712676: mov ebx, eax */ r_ebx = r_eax;
    /* 00712678: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071267b: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 0071267e: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00712681: je 0x71268d */ if (fZ) goto L_0071268d;
L_00712683:; BB(0x00712683);
    /* 00712683: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00712685: call 0x71bc28 */ r_esp -= 4; W32(r_esp, 0x71268au); f_0071bc28();
    /* 0071268a: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
L_0071268d:; BB(0x0071268d);
    /* 0071268d: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712693: je 0x71269f */ if (fZ) goto L_0071269f;
L_00712695:; BB(0x00712695);
    /* 00712695: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00712697: call 0x71bc50 */ r_esp -= 4; W32(r_esp, 0x71269cu); f_0071bc50();
    /* 0071269c: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
L_0071269f:; BB(0x0071269f);
    /* 0071269f: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007126a2: je 0x7126bc */ if (fZ) goto L_007126bc;
L_007126a4:; BB(0x007126a4);
    /* 007126a4: push 0x43f00000 */ { u32 v = 0x43f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 007126a9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007126ab: push 0x44200000 */ { u32 v = 0x44200000u; r_esp -= 4; W32(r_esp, v); }
    /* 007126b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007126b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007126b4: call 0x71bc6c */ r_esp -= 4; W32(r_esp, 0x7126b9u); f_0071bc6c();
    /* 007126b9: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
L_007126bc:; BB(0x007126bc);
    /* 007126bc: mov eax, dword ptr [ebp + 0x5c] */ r_eax = R32((u32)(r_ebp+0x5cu));
    /* 007126bf: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007126c5: jne 0x7126f5 */ if (!fZ) goto L_007126f5;
L_007126c7:; BB(0x007126c7);
    /* 007126c7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007126ca: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007126cd: fadd dword ptr [0x96f68c] */ ST(0) = ST(0) + R_F32((u32)(0x96f68cu));
    /* 007126d3: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 007126d7: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007126dc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007126e1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007126e5: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007126e9: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 007126ed: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007126f1: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
L_007126f5:; BB(0x007126f5);
    /* 007126f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007126f6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007126f8: call 0x71bc8c */ r_esp -= 4; W32(r_esp, 0x7126fdu); f_0071bc8c();
    /* 007126fd: movsx edx, word ptr [ebp + 0x22] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x22u));
    /* 00712701: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00712702: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00712704: call 0x71bcec */ r_esp -= 4; W32(r_esp, 0x712709u); f_0071bcec();
    /* 00712709: mov eax, ebx */ r_eax = r_ebx;
    /* 0071270b: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071270e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071270f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00712710: ret 4 */ FN_RET(0x00712658); r_esp += 8; return;
}

void f_00712714(void) /* sub_712714 */
{
    FN_ENTER(0x00712714);
    /* 00712714: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00712715: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00712717: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 0071271a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071271c: jne 0x712775 */ if (!fZ) goto L_00712775;
L_0071271e:; BB(0x0071271e);
    /* 0071271e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00712720: je 0x71272a */ if (fZ) goto L_0071272a;
L_00712722:; BB(0x00712722);
    /* 00712722: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00712725: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 00712728: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00712729: ret  */ FN_RET(0x00712714); r_esp += 4; return;
L_0071272a:; BB(0x0071272a);
    /* 0071272a: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0071272e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071272f: call 0x7be1bc */ r_esp -= 4; W32(r_esp, 0x712734u); f_007be1bc();
    /* 00712734: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00712735: fcomp dword ptr [0x96f688] */ fx_compare(ST(0), R_F32((u32)(0x96f688u))); FPOP();
    /* 0071273b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071273d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071273e: jbe 0x712747 */ if ((fC||fZ)) goto L_00712747;
L_00712740:; BB(0x00712740);
    /* 00712740: mov dword ptr [ebx + 0x5c], 0 */ W32((u32)(r_ebx+0x5cu), 0x0u);
L_00712747:; BB(0x00712747);
    /* 00712747: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 0071274a: or eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071274d: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 00712750: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00712752: jne 0x712766 */ if (!fZ) goto L_00712766;
L_00712754:; BB(0x00712754);
    /* 00712754: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00712756: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00712757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00712758: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00712759: push 0x572 */ { u32 v = 0x572u; r_esp -= 4; W32(r_esp, v); }
    /* 0071275e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x712763u); f_00814298();
    /* 00712763: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00712766:; BB(0x00712766);
    /* 00712766: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0071276a: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071276f: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00712773: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00712774: ret  */ FN_RET(0x00712714); r_esp += 4; return;
L_00712775:; BB(0x00712775);
    /* 00712775: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00712778: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 0071277b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071277c: ret  */ FN_RET(0x00712714); r_esp += 4; return;
}

void f_00712780(void) /* sub_712780 */
{
    FN_ENTER(0x00712780);
    /* 00712780: fild dword ptr [ecx + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x5cu)));
    /* 00712783: fcomp dword ptr [0x96f684] */ fx_compare(ST(0), R_F32((u32)(0x96f684u))); FPOP();
    /* 00712789: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071278b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071278c: jb 0x71278f */ if (fC) goto L_0071278f;
L_0071278e:; BB(0x0071278e);
    /* 0071278e: ret  */ FN_RET(0x00712780); r_esp += 4; return;
L_0071278f:; BB(0x0071278f);
    /* 0071278f: mov dword ptr [ecx + 0x5c], 7 */ W32((u32)(r_ecx+0x5cu), 0x7u);
    /* 00712796: ret  */ FN_RET(0x00712780); r_esp += 4; return;
}

void f_00712798(void) /* sub_712798 */
{
    FN_ENTER(0x00712798);
    /* 00712798: fild dword ptr [ecx + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x5cu)));
    /* 0071279b: fcomp dword ptr [0x96f680] */ fx_compare(ST(0), R_F32((u32)(0x96f680u))); FPOP();
    /* 007127a1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007127a3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007127a4: jb 0x7127ac */ if (fC) goto L_007127ac;
L_007127a6:; BB(0x007127a6);
    /* 007127a6: mov eax, 1 */ r_eax = 0x1u;
    /* 007127ab: ret  */ FN_RET(0x00712798); r_esp += 4; return;
L_007127ac:; BB(0x007127ac);
    /* 007127ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007127ae: ret  */ FN_RET(0x00712798); r_esp += 4; return;
}

void f_007127b0(void) /* sub_7127B0 */
{
    FN_ENTER(0x007127b0);
    /* 007127b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007127b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007127b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007127b5: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x7127bau); f_007127c8();
    /* 007127ba: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 007127bd: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007127c0: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 007127c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007127c4: ret  */ FN_RET(0x007127b0); r_esp += 4; return;
}

void f_007127c8(void) /* sub_7127C8 */
{
    FN_ENTER(0x007127c8);
    /* 007127c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007127c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007127cb: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 007127ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007127d0: je 0x712802 */ if (fZ) goto L_00712802;
L_007127d2:; BB(0x007127d2);
    /* 007127d2: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007127d4: jne 0x7127fa */ if (!fZ) goto L_007127fa;
L_007127d6:; BB(0x007127d6);
    /* 007127d6: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007127d8: jne 0x7127ef */ if (!fZ) goto L_007127ef;
L_007127da:; BB(0x007127da);
    /* 007127da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007127dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007127dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007127de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007127df: push 0x573 */ { u32 v = 0x573u; r_esp -= 4; W32(r_esp, v); }
    /* 007127e4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7127e9u); f_00814298();
    /* 007127e9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007127ec: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
L_007127ef:; BB(0x007127ef);
    /* 007127ef: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007127f2: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007127f5: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 007127f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007127f9: ret  */ FN_RET(0x007127c8); r_esp += 4; return;
L_007127fa:; BB(0x007127fa);
    /* 007127fa: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007127fd: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 00712800: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00712801: ret  */ FN_RET(0x007127c8); r_esp += 4; return;
L_00712802:; BB(0x00712802);
    /* 00712802: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00712805: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 00712808: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00712809: ret  */ FN_RET(0x007127c8); r_esp += 4; return;
}

void f_0071280c(void) /* sub_71280C */
{
    FN_ENTER(0x0071280c);
    /* 0071280c: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0071280f: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00712812: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 00712815: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 00712819: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0071281b: mov word ptr [ecx + 0x22], dx */ W16((u32)(r_ecx+0x22u), (u16)r_edx);
    /* 0071281f: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00712824: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 00712828: ret  */ FN_RET(0x0071280c); r_esp += 4; return;
}

void f_0071282c(void) /* sub_71282C */
{
    FN_ENTER(0x0071282c);
    /* 0071282c: call 0x712834 */ r_esp -= 4; W32(r_esp, 0x712831u); f_00712834();
    /* 00712831: ret  */ FN_RET(0x0071282c); r_esp += 4; return;
}

void f_00712834(void) /* sub_712834 */
{
    FN_ENTER(0x00712834);
    /* 00712834: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00712837: movzx eax, word ptr [0xa983e0] */ r_eax = (u32)R16((u32)(0xa983e0u));
    /* 0071283e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712840: je 0x71289f */ if (fZ) goto L_0071289f;
L_00712842:; BB(0x00712842);
    /* 00712842: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712845: je 0x712896 */ if (fZ) goto L_00712896;
L_00712847:; BB(0x00712847);
    /* 00712847: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071284a: jne 0x7128f7 */ if (!fZ) goto L_007128f7;
L_00712850:; BB(0x00712850);
    /* 00712850: add word ptr [0xa983dc], 1 */ { u32 ad = (u32)(0xa983dcu);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00712858: push 0x42f00000 */ { u32 v = 0x42f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071285d: call 0x83c230 */ r_esp -= 4; W32(r_esp, 0x712862u); f_0083c230();
    /* 00712862: movsx edx, word ptr [0xa983dc] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa983dcu));
    /* 00712869: fld dword ptr [0x96f678] */ FPUSH(R_F32((u32)(0x96f678u)));
    /* 0071286f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00712871: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00712874: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00712877: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00712879: fmul dword ptr [0x96f7b4] */ ST(0) = ST(0) * R_F32((u32)(0x96f7b4u));
    /* 0071287f: fcomp dword ptr [0x96f674] */ fx_compare(ST(0), R_F32((u32)(0x96f674u))); FPOP();
    /* 00712885: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00712887: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00712888: jb 0x7128f7 */ if (fC) goto L_007128f7;
L_0071288a:; BB(0x0071288a);
    /* 0071288a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071288c: mov word ptr [0xa983e0], ax */ W16((u32)(0xa983e0u), (u16)r_eax);
    /* 00712892: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00712895: ret  */ FN_RET(0x00712834); r_esp += 4; return;
L_00712896:; BB(0x00712896);
    /* 00712896: movsx edx, word ptr [0xa983dc] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa983dcu));
    /* 0071289d: jmp 0x7128ea */ goto L_007128ea;
L_0071289f:; BB(0x0071289f);
    /* 0071289f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x7128a4u); f_008587a5();
    /* 007128a4: fld dword ptr [0x96f670] */ FPUSH(R_F32((u32)(0x96f670u)));
    /* 007128aa: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007128ae: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007128b2: fdiv dword ptr [0x96f66c] */ ST(0) = ST(0) / R_F32((u32)(0x96f66cu));
    /* 007128b8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007128ba: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007128bc: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 007128c0: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 007128c5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007128ca: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007128ce: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 007128d2: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 007128d6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007128da: mov eax, 1 */ r_eax = 0x1u;
    /* 007128df: movsx edx, word ptr [esp + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 007128e4: mov word ptr [0xa983e0], ax */ W16((u32)(0xa983e0u), (u16)r_eax);
L_007128ea:; BB(0x007128ea);
    /* 007128ea: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 007128ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007128ef: jl 0x7128fb */ if ((fS!=fO)) goto L_007128fb;
L_007128f1:; BB(0x007128f1);
    /* 007128f1: mov word ptr [0xa983dc], ax */ W16((u32)(0xa983dcu), (u16)r_eax);
L_007128f7:; BB(0x007128f7);
    /* 007128f7: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007128fa: ret  */ FN_RET(0x00712834); r_esp += 4; return;
L_007128fb:; BB(0x007128fb);
    /* 007128fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007128fd: mov word ptr [0xa983dc], ax */ W16((u32)(0xa983dcu), (u16)r_eax);
    /* 00712903: mov edx, 2 */ r_edx = 0x2u;
    /* 00712908: mov word ptr [0xa983e0], dx */ W16((u32)(0xa983e0u), (u16)r_edx);
    /* 0071290f: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00712912: ret  */ FN_RET(0x00712834); r_esp += 4; return;
}

void f_00712914(void) /* sub_712914 */
{
    FN_ENTER(0x00712914);
    /* 00712914: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00712917: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0071291b: movsx edx, word ptr [0xa983dc] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa983dcu));
    /* 00712922: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00712924: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00712927: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0071292a: fmul dword ptr [0x96f668] */ ST(0) = ST(0) * R_F32((u32)(0x96f668u));
    /* 00712930: fsub dword ptr [0x96f664] */ ST(0) = ST(0) - R_F32((u32)(0x96f664u));
    /* 00712936: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00712938: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071293a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071293b: jbe 0x71294c */ if ((fC||fZ)) goto L_0071294c;
L_0071293d:; BB(0x0071293d);
    /* 0071293d: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00712941: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00712943: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00712945: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00712947: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00712949: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071294a: jb 0x712956 */ if (fC) goto L_00712956;
L_0071294c:; BB(0x0071294c);
    /* 0071294c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0071294e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00712950: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00712952: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00712955: ret  */ FN_RET(0x00712914); r_esp += 4; return;
L_00712956:; BB(0x00712956);
    /* 00712956: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00712958: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071295a: mov eax, 1 */ r_eax = 0x1u;
    /* 0071295f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00712962: ret  */ FN_RET(0x00712914); r_esp += 4; return;
}

void f_00712964(void) /* sub_712964 */
{
    FN_ENTER(0x00712964);
    /* 00712964: movzx eax, word ptr [0xa983e0] */ r_eax = (u32)R16((u32)(0xa983e0u));
    /* 0071296b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0071296d: jl 0x712975 */ if ((fS!=fO)) goto L_00712975;
L_0071296f:; BB(0x0071296f);
    /* 0071296f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00712972: jg 0x712975 */ if ((!fZ&&fS==fO)) goto L_00712975;
L_00712974:; BB(0x00712974);
    /* 00712974: ret  */ FN_RET(0x00712964); r_esp += 4; return;
L_00712975:; BB(0x00712975);
    /* 00712975: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x71297au); f_007a902c();
    /* 0071297a: mov eax, 3 */ r_eax = 0x3u;
    /* 0071297f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00712980: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00712981: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00712982: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00712983: call 0x7a9570 */ r_esp -= 4; W32(r_esp, 0x712988u); f_007a9570();
    /* 00712988: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071298b: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 00712991: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x712996u); f_00829cc8();
    /* 00712996: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0071299a: call 0x829d68 */ r_esp -= 4; W32(r_esp, 0x71299fu); f_00829d68();
    /* 0071299f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007129a1: call 0x82b13c */ r_esp -= 4; W32(r_esp, 0x7129a6u); f_0082b13c();
    /* 007129a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007129a7: ret  */ FN_RET(0x00712964); r_esp += 4; return;
}

void f_007129a8(void) /* sub_7129A8 */
{
    FN_ENTER(0x007129a8);
    /* 007129a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007129a9: sub esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007129af: mov ecx, dword ptr [esp + 0xb8] */ r_ecx = R32((u32)(r_esp+0xb8u));
    /* 007129b6: mov ebx, dword ptr [esp + 0xbc] */ r_ebx = R32((u32)(r_esp+0xbcu));
    /* 007129bd: movzx eax, word ptr [0xa983e0] */ r_eax = (u32)R16((u32)(0xa983e0u));
    /* 007129c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007129c6: jl 0x7129d5 */ if ((fS!=fO)) goto L_007129d5;
L_007129c8:; BB(0x007129c8);
    /* 007129c8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007129cb: jg 0x7129d5 */ if ((!fZ&&fS==fO)) goto L_007129d5;
L_007129cd:; BB(0x007129cd);
    /* 007129cd: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007129d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007129d4: ret  */ FN_RET(0x007129a8); r_esp += 4; return;
L_007129d5:; BB(0x007129d5);
    /* 007129d5: fld dword ptr [0x96f660] */ FPUSH(R_F32((u32)(0x96f660u)));
    /* 007129db: fdiv dword ptr [ebx + 0x38] */ ST(0) = ST(0) / R_F32((u32)(r_ebx+0x38u));
    /* 007129de: movsx edx, word ptr [0xa983dc] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa983dcu));
    /* 007129e5: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 007129e7: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 007129ea: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 007129ed: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 007129f0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007129f2: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 007129f4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007129f6: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 007129f8: mov dword ptr [esp + 0x90], edx */ W32((u32)(r_esp+0x90u), r_edx);
    /* 007129ff: fild dword ptr [esp + 0x90] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x90u)));
    /* 00712a06: fmul dword ptr [0x96f668] */ ST(0) = ST(0) * R_F32((u32)(0x96f668u));
    /* 00712a0c: fsub dword ptr [0x96f664] */ ST(0) = ST(0) - R_F32((u32)(0x96f664u));
    /* 00712a12: fsub dword ptr [ebx] */ ST(0) = ST(0) - R_F32((u32)(r_ebx));
    /* 00712a14: fdiv dword ptr [ebx + 8] */ ST(0) = ST(0) / R_F32((u32)(r_ebx+0x8u));
    /* 00712a17: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00712a19: fcom dword ptr [0x96f65c] */ fx_compare(ST(0), R_F32((u32)(0x96f65cu))); 
    /* 00712a1f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00712a21: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00712a23: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00712a25: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00712a27: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00712a29: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00712a2b: fld dword ptr [0x96f658] */ FPUSH(R_F32((u32)(0x96f658u)));
    /* 00712a31: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00712a32: jbe 0x712a7e */ if ((fC||fZ)) goto L_00712a7e;
L_00712a34:; BB(0x00712a34);
    /* 00712a34: fld dword ptr [0x96f654] */ FPUSH(R_F32((u32)(0x96f654u)));
    /* 00712a3a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 00712a3c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00712a3e: fmul dword ptr [0x96f650] */ ST(0) = ST(0) * R_F32((u32)(0x96f650u));
    /* 00712a44: fnstcw word ptr [esp + 0x98] */ W16((u32)(r_esp+0x98u), fcw);
    /* 00712a4b: movzx eax, word ptr [esp + 0x98] */ r_eax = (u32)R16((u32)(r_esp+0x98u));
    /* 00712a53: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00712a58: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 00712a5f: fldcw word ptr [esp + 0xa0] */ fcw = R16((u32)(r_esp+0xa0u));
    /* 00712a66: fistp qword ptr [esp + 0xa8] */ W64((u32)(r_esp+0xa8u), (u64)fx_int64(ST(0))); FPOP();
    /* 00712a6d: fldcw word ptr [esp + 0x98] */ fcw = R16((u32)(r_esp+0x98u));
    /* 00712a74: movzx edx, byte ptr [esp + 0xa8] */ r_edx = (u32)R8((u32)(r_esp+0xa8u));
    /* 00712a7c: jmp 0x712abc */ goto L_00712abc;
L_00712a7e:; BB(0x00712a7e);
    /* 00712a7e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00712a80: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00712a82: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00712a84: fnstcw word ptr [esp + 0x98] */ W16((u32)(r_esp+0x98u), fcw);
    /* 00712a8b: movzx eax, word ptr [esp + 0x98] */ r_eax = (u32)R16((u32)(r_esp+0x98u));
    /* 00712a93: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00712a98: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 00712a9f: fldcw word ptr [esp + 0xa0] */ fcw = R16((u32)(r_esp+0xa0u));
    /* 00712aa6: fistp qword ptr [esp + 0xa8] */ W64((u32)(r_esp+0xa8u), (u64)fx_int64(ST(0))); FPOP();
    /* 00712aad: fldcw word ptr [esp + 0x98] */ fcw = R16((u32)(r_esp+0x98u));
    /* 00712ab4: movzx edx, byte ptr [esp + 0xa8] */ r_edx = (u32)R8((u32)(r_esp+0xa8u));
L_00712abc:; BB(0x00712abc);
    /* 00712abc: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00712abf: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 00712ac2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00712ac4: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 00712ac8: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00712acc: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 00712acf: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00712ad2: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00712ad6: or edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00712adc: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 00712adf: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00712ae3: mov eax, 0xffffff */ r_eax = 0xffffffu;
    /* 00712ae8: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00712aec: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00712aee: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00712af2: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 00712af5: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00712af9: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00712afd: mov ebx, dword ptr [ecx + 0x10] */ r_ebx = R32((u32)(r_ecx+0x10u));
    /* 00712b00: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 00712b04: mov ebx, dword ptr [ecx + 0x1c] */ r_ebx = R32((u32)(r_ecx+0x1cu));
    /* 00712b07: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00712b09: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 00712b0d: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 00712b11: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00712b15: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 00712b18: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00712b1a: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 00712b1e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00712b20: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 00712b24: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 00712b28: mov ebx, dword ptr [ecx + 0x14] */ r_ebx = R32((u32)(r_ecx+0x14u));
    /* 00712b2b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00712b2d: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00712b31: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 00712b35: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00712b39: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 00712b3c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00712b3e: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 00712b42: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00712b44: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00712b48: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00712b4c: mov ebx, dword ptr [ecx + 0x1c] */ r_ebx = R32((u32)(r_ecx+0x1cu));
    /* 00712b4f: mov dword ptr [esp + 0x58], ebx */ W32((u32)(r_esp+0x58u), r_ebx);
    /* 00712b53: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00712b57: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00712b5a: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 00712b5e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00712b61: fst dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0));
    /* 00712b65: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00712b69: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00712b6c: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 00712b70: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00712b73: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 00712b77: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 00712b7b: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00712b7e: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 00712b82: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00712b85: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 00712b8c: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 00712b90: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00712b93: mov dword ptr [esp + 0x84], edx */ W32((u32)(r_esp+0x84u), r_edx);
    /* 00712b9a: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 00712b9d: mov dword ptr [esp + 0x88], ecx */ W32((u32)(r_esp+0x88u), r_ecx);
    /* 00712ba4: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 00712bab: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00712bae: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00712bb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00712bb1: call 0x82b148 */ r_esp -= 4; W32(r_esp, 0x712bb6u); f_0082b148();
    /* 00712bb6: add esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00712bbc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00712bbd: ret  */ FN_RET(0x007129a8); r_esp += 4; return;
}

void f_00712bc0(void) /* sub_712BC0 */
{
    FN_ENTER(0x00712bc0);
    /* 00712bc0: movzx eax, word ptr [0xa983e0] */ r_eax = (u32)R16((u32)(0xa983e0u));
    /* 00712bc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00712bc9: jl 0x712bd1 */ if ((fS!=fO)) goto L_00712bd1;
L_00712bcb:; BB(0x00712bcb);
    /* 00712bcb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00712bce: jg 0x712bd1 */ if ((!fZ&&fS==fO)) goto L_00712bd1;
L_00712bd0:; BB(0x00712bd0);
    /* 00712bd0: ret  */ FN_RET(0x00712bc0); r_esp += 4; return;
L_00712bd1:; BB(0x00712bd1);
    /* 00712bd1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x712bd6u); f_0061cdb0();
    /* 00712bd6: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x712bdbu); f_007a9044();
    /* 00712bdb: call 0x7a95ec */ r_esp -= 4; W32(r_esp, 0x712be0u); f_007a95ec();
    /* 00712be0: ret  */ FN_RET(0x00712bc0); r_esp += 4; return;
}

void f_00712be4(void) /* sub_712BE4 */
{
    FN_ENTER(0x00712be4);
    /* 00712be4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00712be8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00712bea: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00712bed: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00712bf0: mov dword ptr [ecx + 0x50], 3 */ W32((u32)(r_ecx+0x50u), 0x3u);
    /* 00712bf7: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00712bfa: ret 4 */ FN_RET(0x00712be4); r_esp += 8; return;
}

void f_00712c00(void) /* sub_712C00 */
{
    FN_ENTER(0x00712c00);
    /* 00712c00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00712c01: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00712c03: call 0x719928 */ r_esp -= 4; W32(r_esp, 0x712c08u); f_00719928();
    /* 00712c08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00712c09: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00712c0b: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x712c10u); f_008172d4();
    /* 00712c10: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00712c11: ret  */ FN_RET(0x00712c00); r_esp += 4; return;
}

void f_00712c14(void) /* sub_712C14 */
{
    FN_ENTER(0x00712c14);
    /* 00712c14: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00712c18: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00712c1a: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 00712c1d: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00712c20: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 00712c23: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 00712c26: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 00712c29: ret 4 */ FN_RET(0x00712c14); r_esp += 8; return;
}

void f_00712c2c(void) /* sub_712C2C */
{
    FN_ENTER(0x00712c2c);
    /* 00712c2c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00712c30: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00712c32: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00712c35: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00712c38: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00712c3b: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 00712c3e: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 00712c41: ret 4 */ FN_RET(0x00712c2c); r_esp += 8; return;
}

void f_00712c44(void) /* sub_712C44 */
{
    FN_ENTER(0x00712c44);
    /* 00712c44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00712c45: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00712c46: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00712c48: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00712c4c: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00712c50: mov eax, dword ptr [0x9f1668] */ r_eax = R32((u32)(0x9f1668u));
    /* 00712c55: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 00712c58: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00712c5a: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00712c5d: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00712c60: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 00712c63: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00712c65: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 00712c68: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00712c6b: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 00712c6e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00712c70: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x712c75u); f_00710f64();
    /* 00712c75: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00712c76: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00712c79: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00712c7c: mov dword ptr [ebp + 0x54], 0xc61c4000 */ W32((u32)(r_ebp+0x54u), 0xc61c4000u);
    /* 00712c83: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00712c86: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
    /* 00712c89: call 0x73ece0 */ r_esp -= 4; W32(r_esp, 0x712c8eu); f_0073ece0();
    /* 00712c8e: movsx eax, word ptr [esp + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x18u));
    /* 00712c93: mov dword ptr [ebp + 0x50], 0 */ W32((u32)(r_ebp+0x50u), 0x0u);
    /* 00712c9a: mov word ptr [ebp + 0x20], ax */ W16((u32)(r_ebp+0x20u), (u16)r_eax);
    /* 00712c9e: lea edx, [ebp + 0x24] */ r_edx = (u32)(r_ebp+0x24u);
    /* 00712ca1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00712ca2: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00712ca5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00712ca6: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x712cabu); f_0072a68c();
    /* 00712cab: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00712cae: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 00712cb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00712cb3: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
    /* 00712cb6: mov word ptr [ebp + 0x22], ax */ W16((u32)(r_ebp+0x22u), (u16)r_eax);
    /* 00712cba: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00712cbd: jne 0x712cd1 */ if (!fZ) goto L_00712cd1;
L_00712cbf:; BB(0x00712cbf);
    /* 00712cbf: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00712cc2: jne 0x712cd1 */ if (!fZ) goto L_00712cd1;
L_00712cc4:; BB(0x00712cc4);
    /* 00712cc4: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00712cc8: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00712ccd: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_00712cd1:; BB(0x00712cd1);
    /* 00712cd1: mov eax, edx */ r_eax = r_edx;
    /* 00712cd3: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00712cd6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712cd9: jne 0x712cf2 */ if (!fZ) goto L_00712cf2;
L_00712cdb:; BB(0x00712cdb);
    /* 00712cdb: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00712cde: jne 0x712cf2 */ if (!fZ) goto L_00712cf2;
L_00712ce0:; BB(0x00712ce0);
    /* 00712ce0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00712ce2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00712ce3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00712ce4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00712ce5: push 0x572 */ { u32 v = 0x572u; r_esp -= 4; W32(r_esp, v); }
    /* 00712cea: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x712cefu); f_00814298();
    /* 00712cef: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00712cf2:; BB(0x00712cf2);
    /* 00712cf2: movsx eax, word ptr [ebp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 00712cf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00712cf7: call 0x7be1bc */ r_esp -= 4; W32(r_esp, 0x712cfcu); f_007be1bc();
    /* 00712cfc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00712cfd: fcomp dword ptr [0x96f648] */ fx_compare(ST(0), R_F32((u32)(0x96f648u))); FPOP();
    /* 00712d03: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00712d05: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00712d06: ja 0x712d0f */ if ((!fC&&!fZ)) goto L_00712d0f;
L_00712d08:; BB(0x00712d08);
    /* 00712d08: mov dword ptr [ebp + 0x5c], 0x1000000 */ W32((u32)(r_ebp+0x5cu), 0x1000000u);
L_00712d0f:; BB(0x00712d0f);
    /* 00712d0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00712d10: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00712d11: ret 0xc */ FN_RET(0x00712c44); r_esp += 16; return;
}

void f_00712d14(void) /* sub_712D14 */
{
    FN_ENTER(0x00712d14);
    /* 00712d14: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00712d18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712d1a: jne 0x712d3a */ if (!fZ) goto L_00712d3a;
L_00712d1c:; BB(0x00712d1c);
    /* 00712d1c: push 0x9f58c8 */ { u32 v = 0x9f58c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00712d21: push 0x96f818 */ { u32 v = 0x96f818u; r_esp -= 4; W32(r_esp, v); }
    /* 00712d26: call 0x81a920 */ r_esp -= 4; W32(r_esp, 0x712d2bu); f_0081a920();
    /* 00712d2b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00712d2e: mov dword ptr [0xa983d8], 0x9f58c8 */ W32((u32)(0xa983d8u), 0x9f58c8u);
    /* 00712d38: jmp 0x712d5b */ goto L_00712d5b;
L_00712d3a:; BB(0x00712d3a);
    /* 00712d3a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712d3d: jne 0x712d5b */ if (!fZ) goto L_00712d5b;
L_00712d3f:; BB(0x00712d3f);
    /* 00712d3f: push 0x9f58f4 */ { u32 v = 0x9f58f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00712d44: push 0x96f824 */ { u32 v = 0x96f824u; r_esp -= 4; W32(r_esp, v); }
    /* 00712d49: call 0x81a920 */ r_esp -= 4; W32(r_esp, 0x712d4eu); f_0081a920();
    /* 00712d4e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00712d51: mov dword ptr [0xa983d8], 0x9f58f4 */ W32((u32)(0xa983d8u), 0x9f58f4u);
L_00712d5b:; BB(0x00712d5b);
    /* 00712d5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00712d5d: mov word ptr [0xa983e0], ax */ W16((u32)(0xa983e0u), (u16)r_eax);
    /* 00712d63: ret  */ FN_RET(0x00712d14); r_esp += 4; return;
}

void f_00712d64(void) /* sub_712D64 */
{
    FN_ENTER(0x00712d64);
    /* 00712d64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00712d65: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00712d67: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00712d69: call 0x712d88 */ r_esp -= 4; W32(r_esp, 0x712d6eu); f_00712d88();
    /* 00712d6e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00712d72: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00712d74: jne 0x712d7a */ if (!fZ) goto L_00712d7a;
L_00712d76:; BB(0x00712d76);
    /* 00712d76: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00712d77: ret 4 */ FN_RET(0x00712d64); r_esp += 8; return;
L_00712d7a:; BB(0x00712d7a);
    /* 00712d7a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00712d7b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x712d80u); f_005c2f74();
    /* 00712d80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00712d81: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00712d82: ret 4 */ FN_RET(0x00712d64); r_esp += 8; return;
}

void f_00712d88(void) /* sub_712D88 */
{
    FN_ENTER(0x00712d88);
    /* 00712d88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00712d89: mov ebp, esp */ r_ebp = r_esp;
    /* 00712d8b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00712d8d: push 0x8f04a8 */ { u32 v = 0x8f04a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00712d92: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00712d98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00712d99: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00712da0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00712da3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00712da6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00712da9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00712dac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00712daf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00712db2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00712db5: mov dword ptr [ecx], 0xb3f248 */ W32((u32)(r_ecx), 0xb3f248u);
    /* 00712dbb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00712dc2: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x712dc7u); f_00710c28();
    /* 00712dc7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00712dca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00712dd1: mov esp, ebp */ r_esp = r_ebp;
    /* 00712dd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00712dd4: ret  */ FN_RET(0x00712d88); r_esp += 4; return;
}

void f_00712dd8(void) /* sub_712DD8 */
{
    FN_ENTER(0x00712dd8);
    /* 00712dd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00712dd9: mov edi, ecx */ r_edi = r_ecx;
    /* 00712ddb: push 0xbb */ { u32 v = 0xbbu; r_esp -= 4; W32(r_esp, v); }
    /* 00712de0: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x712de5u); f_0073ec50();
    /* 00712de5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00712de6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00712de7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00712de9: mov ecx, edi */ r_ecx = r_edi;
    /* 00712deb: push 0x9f180c */ { u32 v = 0x9f180cu; r_esp -= 4; W32(r_esp, v); }
    /* 00712df0: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x712df5u); f_00710d30();
    /* 00712df5: mov dword ptr [edi], 0xb3f248 */ W32((u32)(r_edi), 0xb3f248u);
    /* 00712dfb: mov edx, dword ptr [0x9f1808] */ r_edx = R32((u32)(0x9f1808u));
    /* 00712e01: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00712e04: mov eax, edi */ r_eax = r_edi;
    /* 00712e06: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00712e07: ret  */ FN_RET(0x00712dd8); r_esp += 4; return;
}

void f_00712e08(void) /* sub_712E08 */
{
    FN_ENTER(0x00712e08);
    /* 00712e08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00712e09: mov esi, ecx */ r_esi = r_ecx;
    /* 00712e0b: mov ecx, esi */ r_ecx = r_esi;
    /* 00712e0d: call 0x712e28 */ r_esp -= 4; W32(r_esp, 0x712e12u); f_00712e28();
    /* 00712e12: mov ecx, esi */ r_ecx = r_esi;
    /* 00712e14: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x712e19u); f_00710db4();
    /* 00712e19: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 00712e1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00712e1d: mov ecx, esi */ r_ecx = r_esi;
    /* 00712e1f: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x712e24u); f_0072a5ec();
    /* 00712e24: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00712e25: ret  */ FN_RET(0x00712e08); r_esp += 4; return;
}

void f_00712e28(void) /* sub_712E28 */
{
    FN_ENTER(0x00712e28);
    /* 00712e28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00712e29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00712e2a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00712e2b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00712e2c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00712e2f: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00712e32: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 00712e35: mov ebp, dword ptr [eax + 0x18] */ r_ebp = R32((u32)(r_eax+0x18u));
    /* 00712e38: mov ebx, dword ptr [eax + 0x14] */ r_ebx = R32((u32)(r_eax+0x14u));
    /* 00712e3b: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00712e3e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00712e41: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00712e45: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00712e48: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00712e4b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00712e4e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00712e52: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00712e54: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 00712e5b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00712e5d: je 0x712e85 */ if (fZ) goto L_00712e85;
L_00712e5f:; BB(0x00712e5f);
    /* 00712e5f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712e61: je 0x712e71 */ if (fZ) goto L_00712e71;
L_00712e63:; BB(0x00712e63);
    /* 00712e63: movzx edi, word ptr [esi + 4] */ r_edi = (u32)R16((u32)(r_esi+0x4u));
    /* 00712e67: and edi, 0xfffd */ {  u32 a = r_edi; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00712e6d: mov word ptr [esi + 4], di */ W16((u32)(r_esi+0x4u), (u16)r_edi);
L_00712e71:; BB(0x00712e71);
    /* 00712e71: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712e73: je 0x712ea9 */ if (fZ) goto L_00712ea9;
L_00712e75:; BB(0x00712e75);
    /* 00712e75: movzx esi, word ptr [ebp + 4] */ r_esi = (u32)R16((u32)(r_ebp+0x4u));
    /* 00712e79: and esi, 0xfffd */ {  u32 a = r_esi; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00712e7f: mov word ptr [ebp + 4], si */ W16((u32)(r_ebp+0x4u), (u16)r_esi);
    /* 00712e83: jmp 0x712ea9 */ goto L_00712ea9;
L_00712e85:; BB(0x00712e85);
    /* 00712e85: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712e87: je 0x712e97 */ if (fZ) goto L_00712e97;
L_00712e89:; BB(0x00712e89);
    /* 00712e89: movzx edi, word ptr [esi + 4] */ r_edi = (u32)R16((u32)(r_esi+0x4u));
    /* 00712e8d: or edi, 0xffff0002 */ {  u32 a = r_edi; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00712e93: mov word ptr [esi + 4], di */ W16((u32)(r_esi+0x4u), (u16)r_edi);
L_00712e97:; BB(0x00712e97);
    /* 00712e97: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712e99: je 0x712ea9 */ if (fZ) goto L_00712ea9;
L_00712e9b:; BB(0x00712e9b);
    /* 00712e9b: movzx esi, word ptr [ebp + 4] */ r_esi = (u32)R16((u32)(r_ebp+0x4u));
    /* 00712e9f: or esi, 0xffff0002 */ {  u32 a = r_esi; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00712ea5: mov word ptr [ebp + 4], si */ W16((u32)(r_ebp+0x4u), (u16)r_esi);
L_00712ea9:; BB(0x00712ea9);
    /* 00712ea9: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00712eab: je 0x712ed9 */ if (fZ) goto L_00712ed9;
L_00712ead:; BB(0x00712ead);
    /* 00712ead: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712eaf: je 0x712ebf */ if (fZ) goto L_00712ebf;
L_00712eb1:; BB(0x00712eb1);
    /* 00712eb1: movzx ebp, word ptr [ebx + 4] */ r_ebp = (u32)R16((u32)(r_ebx+0x4u));
    /* 00712eb5: and ebp, 0xfffd */ {  u32 a = r_ebp; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00712ebb: mov word ptr [ebx + 4], bp */ W16((u32)(r_ebx+0x4u), (u16)r_ebp);
L_00712ebf:; BB(0x00712ebf);
    /* 00712ebf: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00712ec3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712ec5: je 0x712f03 */ if (fZ) goto L_00712f03;
L_00712ec7:; BB(0x00712ec7);
    /* 00712ec7: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00712ec9: movzx ebx, word ptr [ebp + 4] */ r_ebx = (u32)R16((u32)(r_ebp+0x4u));
    /* 00712ecd: and ebx, 0xfffd */ {  u32 a = r_ebx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00712ed3: mov word ptr [ebp + 4], bx */ W16((u32)(r_ebp+0x4u), (u16)r_ebx);
    /* 00712ed7: jmp 0x712f03 */ goto L_00712f03;
L_00712ed9:; BB(0x00712ed9);
    /* 00712ed9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712edb: je 0x712eeb */ if (fZ) goto L_00712eeb;
L_00712edd:; BB(0x00712edd);
    /* 00712edd: movzx ebp, word ptr [ebx + 4] */ r_ebp = (u32)R16((u32)(r_ebx+0x4u));
    /* 00712ee1: or ebp, 0xffff0002 */ {  u32 a = r_ebp; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00712ee7: mov word ptr [ebx + 4], bp */ W16((u32)(r_ebx+0x4u), (u16)r_ebp);
L_00712eeb:; BB(0x00712eeb);
    /* 00712eeb: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00712eef: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712ef1: je 0x712f03 */ if (fZ) goto L_00712f03;
L_00712ef3:; BB(0x00712ef3);
    /* 00712ef3: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00712ef5: movzx ebx, word ptr [ebp + 4] */ r_ebx = (u32)R16((u32)(r_ebp+0x4u));
    /* 00712ef9: or ebx, 0xffff0002 */ {  u32 a = r_ebx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00712eff: mov word ptr [ebp + 4], bx */ W16((u32)(r_ebp+0x4u), (u16)r_ebx);
L_00712f03:; BB(0x00712f03);
    /* 00712f03: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00712f05: je 0x712f32 */ if (fZ) goto L_00712f32;
L_00712f07:; BB(0x00712f07);
    /* 00712f07: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00712f0a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712f0c: je 0x712f1e */ if (fZ) goto L_00712f1e;
L_00712f0e:; BB(0x00712f0e);
    /* 00712f0e: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00712f10: movzx ebx, word ptr [ebp + 4] */ r_ebx = (u32)R16((u32)(r_ebp+0x4u));
    /* 00712f14: and ebx, 0xfffd */ {  u32 a = r_ebx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00712f1a: mov word ptr [ebp + 4], bx */ W16((u32)(r_ebp+0x4u), (u16)r_ebx);
L_00712f1e:; BB(0x00712f1e);
    /* 00712f1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712f20: je 0x712f5b */ if (fZ) goto L_00712f5b;
L_00712f22:; BB(0x00712f22);
    /* 00712f22: movzx ebx, word ptr [ecx + 4] */ r_ebx = (u32)R16((u32)(r_ecx+0x4u));
    /* 00712f26: and ebx, 0xfffd */ {  u32 a = r_ebx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00712f2c: mov word ptr [ecx + 4], bx */ W16((u32)(r_ecx+0x4u), (u16)r_ebx);
    /* 00712f30: jmp 0x712f5b */ goto L_00712f5b;
L_00712f32:; BB(0x00712f32);
    /* 00712f32: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00712f35: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712f37: je 0x712f49 */ if (fZ) goto L_00712f49;
L_00712f39:; BB(0x00712f39);
    /* 00712f39: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00712f3b: movzx ebx, word ptr [ebp + 4] */ r_ebx = (u32)R16((u32)(r_ebp+0x4u));
    /* 00712f3f: or ebx, 0xffff0002 */ {  u32 a = r_ebx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00712f45: mov word ptr [ebp + 4], bx */ W16((u32)(r_ebp+0x4u), (u16)r_ebx);
L_00712f49:; BB(0x00712f49);
    /* 00712f49: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712f4b: je 0x712f5b */ if (fZ) goto L_00712f5b;
L_00712f4d:; BB(0x00712f4d);
    /* 00712f4d: movzx ebx, word ptr [ecx + 4] */ r_ebx = (u32)R16((u32)(r_ecx+0x4u));
    /* 00712f51: or ebx, 0xffff0002 */ {  u32 a = r_ebx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00712f57: mov word ptr [ecx + 4], bx */ W16((u32)(r_ecx+0x4u), (u16)r_ebx);
L_00712f5b:; BB(0x00712f5b);
    /* 00712f5b: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00712f5d: je 0x712f8f */ if (fZ) goto L_00712f8f;
L_00712f5f:; BB(0x00712f5f);
    /* 00712f5f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00712f63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712f65: je 0x712f76 */ if (fZ) goto L_00712f76;
L_00712f67:; BB(0x00712f67);
    /* 00712f67: mov ecx, eax */ r_ecx = r_eax;
    /* 00712f69: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 00712f6d: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00712f72: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
L_00712f76:; BB(0x00712f76);
    /* 00712f76: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712f78: je 0x712fb7 */ if (fZ) goto L_00712fb7;
L_00712f7a:; BB(0x00712f7a);
    /* 00712f7a: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 00712f7e: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00712f83: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 00712f87: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00712f8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00712f8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00712f8c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00712f8d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00712f8e: ret  */ FN_RET(0x00712e28); r_esp += 4; return;
L_00712f8f:; BB(0x00712f8f);
    /* 00712f8f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00712f93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712f95: je 0x712fa6 */ if (fZ) goto L_00712fa6;
L_00712f97:; BB(0x00712f97);
    /* 00712f97: mov ecx, eax */ r_ecx = r_eax;
    /* 00712f99: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 00712f9d: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00712fa2: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
L_00712fa6:; BB(0x00712fa6);
    /* 00712fa6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00712fa8: je 0x712fb7 */ if (fZ) goto L_00712fb7;
L_00712faa:; BB(0x00712faa);
    /* 00712faa: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 00712fae: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00712fb3: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
L_00712fb7:; BB(0x00712fb7);
    /* 00712fb7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00712fba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00712fbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00712fbc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00712fbd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00712fbe: ret  */ FN_RET(0x00712e28); r_esp += 4; return;
}

void f_00712fc0(void) /* sub_712FC0 */
{
    FN_ENTER(0x00712fc0);
    /* 00712fc0: mov dword ptr [0xa983e8], 0x3f800000 */ W32((u32)(0xa983e8u), 0x3f800000u);
    /* 00712fca: mov dword ptr [0xa983ec], 0x41000000 */ W32((u32)(0xa983ecu), 0x41000000u);
    /* 00712fd4: mov dword ptr [0xa983f0], 0x3fc00000 */ W32((u32)(0xa983f0u), 0x3fc00000u);
    /* 00712fde: ret  */ FN_RET(0x00712fc0); r_esp += 4; return;
}

void f_00712fe0(void) /* sub_712FE0 */
{
    FN_ENTER(0x00712fe0);
    /* 00712fe0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00712fe1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00712fe3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00712fe5: call 0x713004 */ r_esp -= 4; W32(r_esp, 0x712feau); f_00713004();
    /* 00712fea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00712fee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00712ff0: jne 0x712ff6 */ if (!fZ) goto L_00712ff6;
L_00712ff2:; BB(0x00712ff2);
    /* 00712ff2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00712ff3: ret 4 */ FN_RET(0x00712fe0); r_esp += 8; return;
L_00712ff6:; BB(0x00712ff6);
    /* 00712ff6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00712ff7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x712ffcu); f_005c2f74();
    /* 00712ffc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00712ffd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00712ffe: ret 4 */ FN_RET(0x00712fe0); r_esp += 8; return;
}

