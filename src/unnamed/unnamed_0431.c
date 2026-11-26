#include "protos.h"

void f_00431058(void) /* sub_431058 */
{
    FN_ENTER(0x00431058);
    /* 00431058: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00431059: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043105c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0043105e: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00431062: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431065: je 0x431802 */ if (fZ) goto L_00431802;
L_0043106b:; BB(0x0043106b);
    /* 0043106b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043106e: je 0x4317b0 */ if (fZ) goto L_004317b0;
L_00431074:; BB(0x00431074);
    /* 00431074: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431077: je 0x431626 */ if (fZ) goto L_00431626;
L_0043107d:; BB(0x0043107d);
    /* 0043107d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431080: je 0x431572 */ if (fZ) goto L_00431572;
L_00431086:; BB(0x00431086);
    /* 00431086: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431088: je 0x4310ba */ if (fZ) goto L_004310ba;
L_0043108a:; BB(0x0043108a);
    /* 0043108a: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043108d: je 0x431572 */ if (fZ) goto L_00431572;
L_00431093:; BB(0x00431093);
    /* 00431093: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431096: jne 0x431572 */ if (!fZ) goto L_00431572;
L_0043109c:; BB(0x0043109c);
    /* 0043109c: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004310a2: mov dword ptr [ebx + 0x65c], 1 */ W32((u32)(r_ebx+0x65cu), 0x1u);
    /* 004310ac: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004310af: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 004310b5: jmp 0x431572 */ goto L_00431572;
L_004310ba:; BB(0x004310ba);
    /* 004310ba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004310bc: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4310c1u); f_007aa094();
    /* 004310c1: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 004310c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004310c9: je 0x431519 */ if (fZ) goto L_00431519;
L_004310cf:; BB(0x004310cf);
    /* 004310cf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004310d2: jne 0x4310f1 */ if (!fZ) goto L_004310f1;
L_004310d4:; BB(0x004310d4);
    /* 004310d4: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 004310da: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004310dc: jne 0x431572 */ if (!fZ) goto L_00431572;
L_004310e2:; BB(0x004310e2);
    /* 004310e2: mov dword ptr [ebx + 0x6e8], 2 */ W32((u32)(r_ebx+0x6e8u), 0x2u);
    /* 004310ec: jmp 0x431572 */ goto L_00431572;
L_004310f1:; BB(0x004310f1);
    /* 004310f1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004310f4: jne 0x431572 */ if (!fZ) goto L_00431572;
L_004310fa:; BB(0x004310fa);
    /* 004310fa: mov eax, dword ptr [ebx + 0x6ec] */ r_eax = R32((u32)(r_ebx+0x6ecu));
    /* 00431100: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431102: je 0x4315b9 */ if (fZ) goto L_004315b9;
L_00431108:; BB(0x00431108);
    /* 00431108: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043110b: je 0x431171 */ if (fZ) goto L_00431171;
L_0043110d:; BB(0x0043110d);
    /* 0043110d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431110: jne 0x43114f */ if (!fZ) goto L_0043114f;
L_00431112:; BB(0x00431112);
    /* 00431112: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 00431118: fcomp dword ptr [0x8fce6c] */ fx_compare(ST(0), R_F32((u32)(0x8fce6cu))); FPOP();
    /* 0043111e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00431120: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00431121: jb 0x4311c7 */ if (fC) goto L_004311c7;
L_00431127:; BB(0x00431127);
    /* 00431127: fld dword ptr [ebx + 0x70c] */ FPUSH(R_F32((u32)(r_ebx+0x70cu)));
    /* 0043112d: fmul dword ptr [0x8fce98] */ ST(0) = ST(0) * R_F32((u32)(0x8fce98u));
    /* 00431133: fstp dword ptr [ebx + 0x70c] */ W_F32((u32)(r_ebx+0x70cu), ST(0)); FPOP();
    /* 00431139: mov dword ptr [ebx + 0x6ec], 3 */ W32((u32)(r_ebx+0x6ecu), 0x3u);
    /* 00431143: mov dword ptr [ebx + 0x710], 0 */ W32((u32)(r_ebx+0x710u), 0x0u);
    /* 0043114d: jmp 0x4311c7 */ goto L_004311c7;
L_0043114f:; BB(0x0043114f);
    /* 0043114f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431152: jne 0x4311c7 */ if (!fZ) goto L_004311c7;
L_00431154:; BB(0x00431154);
    /* 00431154: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0043115a: fcomp dword ptr [0x8fce70] */ fx_compare(ST(0), R_F32((u32)(0x8fce70u))); FPOP();
    /* 00431160: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00431162: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00431163: jb 0x4311c7 */ if (fC) goto L_004311c7;
L_00431165:; BB(0x00431165);
    /* 00431165: mov dword ptr [ebx + 0x6ec], 4 */ W32((u32)(r_ebx+0x6ecu), 0x4u);
    /* 0043116f: jmp 0x4311c7 */ goto L_004311c7;
L_00431171:; BB(0x00431171);
    /* 00431171: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 00431177: fcomp dword ptr [0x8fce68] */ fx_compare(ST(0), R_F32((u32)(0x8fce68u))); FPOP();
    /* 0043117d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043117f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00431180: jb 0x4311c7 */ if (fC) goto L_004311c7;
L_00431182:; BB(0x00431182);
    /* 00431182: fld dword ptr [0x8fce64] */ FPUSH(R_F32((u32)(0x8fce64u)));
    /* 00431188: fsub dword ptr [ebx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x3cu));
    /* 0043118b: fmul dword ptr [0x8fce90] */ ST(0) = ST(0) * R_F32((u32)(0x8fce90u));
    /* 00431191: fld dword ptr [0x8fce8c] */ FPUSH(R_F32((u32)(0x8fce8cu)));
    /* 00431197: mov dword ptr [ebx + 0x6ec], 2 */ W32((u32)(r_ebx+0x6ecu), 0x2u);
    /* 004311a1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004311a3: fdiv dword ptr [0xa43ca8] */ ST(0) = ST(0) / R_F32((u32)(0xa43ca8u));
    /* 004311a9: fst dword ptr [ebx + 0x704] */ W_F32((u32)(r_ebx+0x704u), ST(0));
    /* 004311af: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004311b1: fdiv dword ptr [0xa43ca8] */ ST(0) = ST(0) / R_F32((u32)(0xa43ca8u));
    /* 004311b7: fstp dword ptr [ebx + 0x708] */ W_F32((u32)(r_ebx+0x708u), ST(0)); FPOP();
    /* 004311bd: mov dword ptr [ebx + 0x6f4], 0 */ W32((u32)(r_ebx+0x6f4u), 0x0u);
L_004311c7:; BB(0x004311c7);
    /* 004311c7: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 004311ce: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004311d1: je 0x431235 */ if (fZ) goto L_00431235;
L_004311d3:; BB(0x004311d3);
    /* 004311d3: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004311d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004311da: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4311dfu); f_007aaa30();
    /* 004311df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004311e1: jne 0x43121d */ if (!fZ) goto L_0043121d;
L_004311e3:; BB(0x004311e3);
    /* 004311e3: push 0x41b00000 */ { u32 v = 0x41b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004311e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004311ea: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4311efu); f_007aaa30();
    /* 004311ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004311f1: jne 0x43121d */ if (!fZ) goto L_0043121d;
L_004311f3:; BB(0x004311f3);
    /* 004311f3: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 004311f8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004311fa: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4311ffu); f_007aaa30();
    /* 004311ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431201: je 0x431235 */ if (fZ) goto L_00431235;
L_00431203:; BB(0x00431203);
    /* 00431203: lea edx, [ebx + 0x520] */ r_edx = (u32)(r_ebx+0x520u);
    /* 00431209: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043120b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043120c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043120d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043120e: push 0x339 */ { u32 v = 0x339u; r_esp -= 4; W32(r_esp, v); }
    /* 00431213: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x431218u); f_00814298();
    /* 00431218: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043121b: jmp 0x431235 */ goto L_00431235;
L_0043121d:; BB(0x0043121d);
    /* 0043121d: lea edx, [ebx + 0x520] */ r_edx = (u32)(r_ebx+0x520u);
    /* 00431223: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00431225: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431226: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431227: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00431228: push 0x338 */ { u32 v = 0x338u; r_esp -= 4; W32(r_esp, v); }
    /* 0043122d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x431232u); f_00814298();
    /* 00431232: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00431235:; BB(0x00431235);
    /* 00431235: mov eax, dword ptr [ebx + 0x6ec] */ r_eax = R32((u32)(r_ebx+0x6ecu));
    /* 0043123b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043123e: jne 0x4312f2 */ if (!fZ) goto L_004312f2;
L_00431244:; BB(0x00431244);
    /* 00431244: mov edx, dword ptr [ebx + 0x6f4] */ r_edx = R32((u32)(r_ebx+0x6f4u));
    /* 0043124a: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 00431250: fcomp dword ptr [0x8fce48] */ fx_compare(ST(0), R_F32((u32)(0x8fce48u))); FPOP();
    /* 00431256: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00431258: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043125b: mov dword ptr [ebx + 0x6f4], edx */ W32((u32)(r_ebx+0x6f4u), r_edx);
    /* 00431261: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00431262: jb 0x4312e7 */ if (fC) goto L_004312e7;
L_00431268:; BB(0x00431268);
    /* 00431268: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043126b: jge 0x431278 */ if ((fS==fO)) goto L_00431278;
L_0043126d:; BB(0x0043126d);
    /* 0043126d: mov eax, dword ptr [ebx + 0x6ec] */ r_eax = R32((u32)(r_ebx+0x6ecu));
    /* 00431273: jmp 0x4313bc */ goto L_004313bc;
L_00431278:; BB(0x00431278);
    /* 00431278: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0043127b: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0043127e: mov dword ptr [ebx + 0x6f4], 0 */ W32((u32)(r_ebx+0x6f4u), 0x0u);
    /* 00431288: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043128a: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0043128e: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00431291: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00431295: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00431299: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x43129eu); f_00520bf4();
    /* 0043129e: fld dword ptr [0x8fce44] */ FPUSH(R_F32((u32)(0x8fce44u)));
    /* 004312a4: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004312a8: fadd dword ptr [0x8fce40] */ ST(0) = ST(0) + R_F32((u32)(0x8fce40u));
    /* 004312ae: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004312b0: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004312b2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004312b4: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 004312b8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004312ba: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004312be: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004312c2: mov dword ptr [esp + 0x10], 0xc0a00000 */ W32((u32)(r_esp+0x10u), 0xc0a00000u);
    /* 004312ca: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004312ce: push 0x121 */ { u32 v = 0x121u; r_esp -= 4; W32(r_esp, v); }
    /* 004312d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004312d4: call 0x43aaec */ r_esp -= 4; W32(r_esp, 0x4312d9u); f_0043aaec();
    /* 004312d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004312dc: mov eax, dword ptr [ebx + 0x6ec] */ r_eax = R32((u32)(r_ebx+0x6ecu));
    /* 004312e2: jmp 0x4313bc */ goto L_004313bc;
L_004312e7:; BB(0x004312e7);
    /* 004312e7: mov eax, dword ptr [ebx + 0x6ec] */ r_eax = R32((u32)(r_ebx+0x6ecu));
    /* 004312ed: jmp 0x4313bc */ goto L_004313bc;
L_004312f2:; BB(0x004312f2);
    /* 004312f2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004312f5: jl 0x4313bc */ if ((fS!=fO)) goto L_004313bc;
L_004312fb:; BB(0x004312fb);
    /* 004312fb: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004312fe: jg 0x4313bc */ if ((!fZ&&fS==fO)) goto L_004313bc;
L_00431304:; BB(0x00431304);
    /* 00431304: mov eax, dword ptr [ebx + 0x6f4] */ r_eax = R32((u32)(r_ebx+0x6f4u));
    /* 0043130a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043130d: mov dword ptr [ebx + 0x6f4], eax */ W32((u32)(r_ebx+0x6f4u), r_eax);
    /* 00431313: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00431316: jl 0x4313b6 */ if ((fS!=fO)) goto L_004313b6;
L_0043131c:; BB(0x0043131c);
    /* 0043131c: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 00431322: fcom dword ptr [0x8fce58] */ fx_compare(ST(0), R_F32((u32)(0x8fce58u))); 
    /* 00431328: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043132a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043132b: jb 0x4313ac */ if (fC) goto L_004313ac;
L_00431331:; BB(0x00431331);
    /* 00431331: fcomp dword ptr [0x8fce54] */ fx_compare(ST(0), R_F32((u32)(0x8fce54u))); FPOP();
    /* 00431337: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00431339: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043133a: jbe 0x431344 */ if ((fC||fZ)) goto L_00431344;
L_0043133c:; BB(0x0043133c);
    /* 0043133c: mov eax, dword ptr [ebx + 0x6ec] */ r_eax = R32((u32)(r_ebx+0x6ecu));
    /* 00431342: jmp 0x4313bc */ goto L_004313bc;
L_00431344:; BB(0x00431344);
    /* 00431344: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00431347: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0043134a: mov dword ptr [ebx + 0x6f4], 0 */ W32((u32)(r_ebx+0x6f4u), 0x0u);
    /* 00431354: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431356: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00431359: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0043135c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00431360: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00431364: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x431369u); f_00520bf4();
    /* 00431369: fld dword ptr [0x8fce50] */ FPUSH(R_F32((u32)(0x8fce50u)));
    /* 0043136f: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00431373: fadd dword ptr [0x8fce4c] */ ST(0) = ST(0) + R_F32((u32)(0x8fce4cu));
    /* 00431379: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043137b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0043137d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043137f: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 00431382: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00431384: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00431388: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043138b: mov dword ptr [esp + 4], 0xc0a00000 */ W32((u32)(r_esp+0x4u), 0xc0a00000u);
    /* 00431393: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00431396: push 0x121 */ { u32 v = 0x121u; r_esp -= 4; W32(r_esp, v); }
    /* 0043139b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043139c: call 0x43aaec */ r_esp -= 4; W32(r_esp, 0x4313a1u); f_0043aaec();
    /* 004313a1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004313a4: mov eax, dword ptr [ebx + 0x6ec] */ r_eax = R32((u32)(r_ebx+0x6ecu));
    /* 004313aa: jmp 0x4313bc */ goto L_004313bc;
L_004313ac:; BB(0x004313ac);
    /* 004313ac: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004313ae: mov eax, dword ptr [ebx + 0x6ec] */ r_eax = R32((u32)(r_ebx+0x6ecu));
    /* 004313b4: jmp 0x4313bc */ goto L_004313bc;
L_004313b6:; BB(0x004313b6);
    /* 004313b6: mov eax, dword ptr [ebx + 0x6ec] */ r_eax = R32((u32)(r_ebx+0x6ecu));
L_004313bc:; BB(0x004313bc);
    /* 004313bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004313be: je 0x431588 */ if (fZ) goto L_00431588;
L_004313c4:; BB(0x004313c4);
    /* 004313c4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004313c7: je 0x4314ee */ if (fZ) goto L_004314ee;
L_004313cd:; BB(0x004313cd);
    /* 004313cd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004313d0: jne 0x431421 */ if (!fZ) goto L_00431421;
L_004313d2:; BB(0x004313d2);
    /* 004313d2: fld dword ptr [0x8fce38] */ FPUSH(R_F32((u32)(0x8fce38u)));
    /* 004313d8: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004313db: fadd dword ptr [ebx + 0x70c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x70cu));
    /* 004313e1: fld dword ptr [ebx + 0x6ac] */ FPUSH(R_F32((u32)(r_ebx+0x6acu)));
    /* 004313e7: fadd dword ptr [ebx + 0x704] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x704u));
    /* 004313ed: fld dword ptr [ebx + 0x704] */ FPUSH(R_F32((u32)(r_ebx+0x704u)));
    /* 004313f3: fsub dword ptr [ebx + 0x708] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x708u));
    /* 004313f9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004313fb: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004313fe: fstp dword ptr [ebx + 0x6ac] */ W_F32((u32)(r_ebx+0x6acu), ST(0)); FPOP();
    /* 00431404: fstp dword ptr [ebx + 0x704] */ W_F32((u32)(r_ebx+0x704u), ST(0)); FPOP();
    /* 0043140a: fsub dword ptr [0xa43cb0] */ ST(0) = ST(0) - R_F32((u32)(0xa43cb0u));
    /* 00431410: fsubr dword ptr [ebx + 0xc0] */ ST(0) = R_F32((u32)(r_ebx+0xc0u)) - ST(0);
    /* 00431416: fstp dword ptr [ebx + 0xc0] */ W_F32((u32)(r_ebx+0xc0u), ST(0)); FPOP();
    /* 0043141c: jmp 0x431572 */ goto L_00431572;
L_00431421:; BB(0x00431421);
    /* 00431421: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00431424: jl 0x431572 */ if ((fS!=fO)) goto L_00431572;
L_0043142a:; BB(0x0043142a);
    /* 0043142a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043142d: jg 0x431572 */ if ((!fZ&&fS==fO)) goto L_00431572;
L_00431433:; BB(0x00431433);
    /* 00431433: fld dword ptr [0x8fce94] */ FPUSH(R_F32((u32)(0x8fce94u)));
    /* 00431439: fcom dword ptr [ebx + 0x710] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x710u))); 
    /* 0043143f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00431441: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00431442: jb 0x4314bd */ if (fC) goto L_004314bd;
L_00431444:; BB(0x00431444);
    /* 00431444: fld dword ptr [ebx + 0x70c] */ FPUSH(R_F32((u32)(r_ebx+0x70cu)));
    /* 0043144a: fsub dword ptr [0x8fd054] */ ST(0) = ST(0) - R_F32((u32)(0x8fd054u));
    /* 00431450: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00431452: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00431454: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00431456: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00431458: fst dword ptr [ebx + 0x70c] */ W_F32((u32)(r_ebx+0x70cu), ST(0));
    /* 0043145e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043145f: jbe 0x43146b */ if ((fC||fZ)) goto L_0043146b;
L_00431461:; BB(0x00431461);
    /* 00431461: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 00431464: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00431466: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 00431469: jmp 0x4314e2 */ goto L_004314e2;
L_0043146b:; BB(0x0043146b);
    /* 0043146b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043146d: fld dword ptr [0x8fce3c] */ FPUSH(R_F32((u32)(0x8fce3cu)));
    /* 00431473: fsub dword ptr [ebx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x40u));
    /* 00431476: mov dword ptr [ebx + 0x710], 0x3f800000 */ W32((u32)(r_ebx+0x710u), 0x3f800000u);
    /* 00431480: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00431481: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00431484: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x431489u); f_0082e900();
    /* 00431489: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043148c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00431490: lea ecx, [ebx + 0x68c] */ r_ecx = (u32)(r_ebx+0x68cu);
    /* 00431496: mov dword ptr [esp], 0x40e00000 */ W32((u32)(r_esp), 0x40e00000u);
    /* 0043149d: mov dword ptr [esp + 8], 0x3e4ccccd */ W32((u32)(r_esp+0x8u), 0x3e4ccccdu);
    /* 004314a5: mov dword ptr [esp + 0xc], 0x3d4ccccd */ W32((u32)(r_esp+0xcu), 0x3d4ccccdu);
    /* 004314ad: call 0x434ac4 */ r_esp -= 4; W32(r_esp, 0x4314b2u); f_00434ac4();
    /* 004314b2: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 004314b5: mov dword ptr [ebx + 0x70c], eax */ W32((u32)(r_ebx+0x70cu), r_eax);
    /* 004314bb: jmp 0x4314e2 */ goto L_004314e2;
L_004314bd:; BB(0x004314bd);
    /* 004314bd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004314bf: lea ecx, [ebx + 0x68c] */ r_ecx = (u32)(r_ebx+0x68cu);
    /* 004314c5: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x4314cau); f_0042cdc0();
    /* 004314ca: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004314cd: je 0x431579 */ if (fZ) goto L_00431579;
L_004314d3:; BB(0x004314d3);
    /* 004314d3: fld dword ptr [ebx + 0x70c] */ FPUSH(R_F32((u32)(r_ebx+0x70cu)));
    /* 004314d9: fsub dword ptr [ebx + 0x6a4] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x6a4u));
    /* 004314df: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
L_004314e2:; BB(0x004314e2);
    /* 004314e2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004314e4: call 0x42cd78 */ r_esp -= 4; W32(r_esp, 0x4314e9u); f_0042cd78();
    /* 004314e9: jmp 0x431572 */ goto L_00431572;
L_004314ee:; BB(0x004314ee);
    /* 004314ee: fld dword ptr [ebx + 0x70c] */ FPUSH(R_F32((u32)(r_ebx+0x70cu)));
    /* 004314f4: fadd dword ptr [ebx + 0x710] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x710u));
    /* 004314fa: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004314fd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004314ff: fst dword ptr [ebx + 0x70c] */ W_F32((u32)(r_ebx+0x70cu), ST(0));
    /* 00431505: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00431507: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0043150a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043150c: call 0x422768 */ r_esp -= 4; W32(r_esp, 0x431511u); f_00422768();
    /* 00431511: fstp dword ptr [ebx + 0x704] */ W_F32((u32)(r_ebx+0x704u), ST(0)); FPOP();
    /* 00431517: jmp 0x431572 */ goto L_00431572;
L_00431519:; BB(0x00431519);
    /* 00431519: mov eax, dword ptr [ebx + 0x6f0] */ r_eax = R32((u32)(r_ebx+0x6f0u));
    /* 0043151f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00431522: mov dword ptr [ebx + 0x6f0], eax */ W32((u32)(r_ebx+0x6f0u), r_eax);
    /* 00431528: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043152b: jle 0x431543 */ if ((fZ||fS!=fO)) goto L_00431543;
L_0043152d:; BB(0x0043152d);
    /* 0043152d: mov dword ptr [ebx + 0x6e8], 1 */ W32((u32)(r_ebx+0x6e8u), 0x1u);
    /* 00431537: mov eax, 4 */ r_eax = 0x4u;
    /* 0043153c: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
L_00431543:; BB(0x00431543);
    /* 00431543: fld dword ptr [0x8fcfcc] */ FPUSH(R_F32((u32)(0x8fcfccu)));
    /* 00431549: fld dword ptr [ebx + 0x70c] */ FPUSH(R_F32((u32)(r_ebx+0x70cu)));
    /* 0043154f: fsub dword ptr [0x8fd054] */ ST(0) = ST(0) - R_F32((u32)(0x8fd054u));
    /* 00431555: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 00431558: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043155a: fchs  */ ST(0) = -ST(0);
    /* 0043155c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0043155e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00431560: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00431561: jb 0x431565 */ if (fC) goto L_00431565;
L_00431563:; BB(0x00431563);
    /* 00431563: fst st(1) */ ST(1) = ST(0);
L_00431565:; BB(0x00431565);
    /* 00431565: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00431567: fst dword ptr [ebx + 0x70c] */ W_F32((u32)(r_ebx+0x70cu), ST(0));
    /* 0043156d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0043156f: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
L_00431572:; BB(0x00431572);
    /* 00431572: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00431575: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00431576: ret 4 */ FN_RET(0x00431058); r_esp += 8; return;
L_00431579:; BB(0x00431579);
    /* 00431579: mov dword ptr [ebx + 0x6e8], 3 */ W32((u32)(r_ebx+0x6e8u), 0x3u);
    /* 00431583: jmp 0x4314e2 */ goto L_004314e2;
L_00431588:; BB(0x00431588);
    /* 00431588: fld dword ptr [0x8fcfcc] */ FPUSH(R_F32((u32)(0x8fcfccu)));
    /* 0043158e: fld dword ptr [ebx + 0x70c] */ FPUSH(R_F32((u32)(r_ebx+0x70cu)));
    /* 00431594: fsub dword ptr [0x8fd054] */ ST(0) = ST(0) - R_F32((u32)(0x8fd054u));
    /* 0043159a: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 0043159d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043159f: fchs  */ ST(0) = -ST(0);
    /* 004315a1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004315a3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004315a5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004315a6: jb 0x4315aa */ if (fC) goto L_004315aa;
L_004315a8:; BB(0x004315a8);
    /* 004315a8: fst st(1) */ ST(1) = ST(0);
L_004315aa:; BB(0x004315aa);
    /* 004315aa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004315ac: fst dword ptr [ebx + 0x70c] */ W_F32((u32)(r_ebx+0x70cu), ST(0));
    /* 004315b2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004315b4: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004315b7: jmp 0x431572 */ goto L_00431572;
L_004315b9:; BB(0x004315b9);
    /* 004315b9: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 004315bf: fcomp dword ptr [0x8fce60] */ fx_compare(ST(0), R_F32((u32)(0x8fce60u))); FPOP();
    /* 004315c5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004315c7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004315c8: jb 0x4311c7 */ if (fC) goto L_004311c7;
L_004315ce:; BB(0x004315ce);
    /* 004315ce: fld dword ptr [0x8fce5c] */ FPUSH(R_F32((u32)(0x8fce5cu)));
    /* 004315d4: fsub dword ptr [ebx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x40u));
    /* 004315d7: fld dword ptr [0x8fce98] */ FPUSH(R_F32((u32)(0x8fce98u)));
    /* 004315dd: fld dword ptr [ebx + 0x70c] */ FPUSH(R_F32((u32)(r_ebx+0x70cu)));
    /* 004315e3: fchs  */ ST(0) = -ST(0);
    /* 004315e5: mov dword ptr [ebx + 0x6ec], 1 */ W32((u32)(r_ebx+0x6ecu), 0x1u);
    /* 004315ef: fld dword ptr [0xa43ca8] */ FPUSH(R_F32((u32)(0xa43ca8u)));
    /* 004315f5: fld dword ptr [0xa43cac] */ FPUSH(R_F32((u32)(0xa43cacu)));
    /* 004315fb: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 004315fd: fld dword ptr [0xa43cac] */ FPUSH(R_F32((u32)(0xa43cacu)));
    /* 00431603: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00431605: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00431607: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00431609: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0043160b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0043160d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0043160f: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00431611: fstp dword ptr [ebx + 0x710] */ W_F32((u32)(r_ebx+0x710u), ST(0)); FPOP();
    /* 00431617: mov dword ptr [ebx + 0x6f4], 0 */ W32((u32)(r_ebx+0x6f4u), 0x0u);
    /* 00431621: jmp 0x4311c7 */ goto L_004311c7;
L_00431626:; BB(0x00431626);
    /* 00431626: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0043162c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043162f: jne 0x431572 */ if (!fZ) goto L_00431572;
L_00431635:; BB(0x00431635);
    /* 00431635: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 0043163b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043163e: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 00431644: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x431649u); f_00520e6c();
    /* 00431649: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0043164f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431651: je 0x43165c */ if (fZ) goto L_0043165c;
L_00431653:; BB(0x00431653);
    /* 00431653: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0043165a: jmp 0x431663 */ goto L_00431663;
L_0043165c:; BB(0x0043165c);
    /* 0043165c: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_00431663:; BB(0x00431663);
    /* 00431663: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 00431666: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00431669: ja 0x4317a3 */ if ((!fC&&!fZ)) goto L_004317a3;
L_0043166f:; BB(0x0043166f);
    /* 0043166f: mov edx, dword ptr [edx*4 + 0x8fc9d0] */ r_edx = R32((u32)(r_edx*4+0x8fc9d0u));
    /* 00431676: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_004317a3:; BB(0x004317a3);
    /* 004317a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004317a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004317a6: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4317abu); f_0042abf8();
    /* 004317ab: jmp 0x431572 */ goto L_00431572;
L_004317b0:; BB(0x004317b0);
    /* 004317b0: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 004317b6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004317b9: jne 0x431572 */ if (!fZ) goto L_00431572;
L_004317bf:; BB(0x004317bf);
    /* 004317bf: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004317c1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004317c3: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004317c5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004317c7: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4317cdu); call_ind(t); }
    /* 004317cd: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004317d1: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 004317d7: mov byte ptr [esp + 0x18], 0x13 */ W8((u32)(r_esp+0x18u), 0x13u);
    /* 004317dc: mov edx, 2 */ r_edx = 0x2u;
    /* 004317e1: mov byte ptr [esp + 0x19], dl */ W8((u32)(r_esp+0x19u), (u8)r_edx);
    /* 004317e5: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004317ea: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 004317ef: mov word ptr [esp + 0x1e], bx */ W16((u32)(r_esp+0x1eu), (u16)r_ebx);
    /* 004317f4: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004317f8: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4317fdu); f_008003e0();
    /* 004317fd: jmp 0x431572 */ goto L_00431572;
L_00431802:; BB(0x00431802);
    /* 00431802: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00431804: mov eax, 1 */ r_eax = 0x1u;
    /* 00431809: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00431810: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431812: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x431818u); call_ind(t); }
    /* 00431818: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0043181c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043181e: mov esi, eax */ r_esi = r_eax;
L_00431820:; BB(0x00431820);
    /* 00431820: mov ecx, dword ptr [ebx + esi*4 + 0x5e8] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x5e8u));
    /* 00431827: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00431829: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x43182fu); call_ind(t); }
    /* 0043182f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00431832: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00431835: jl 0x431820 */ if ((fS!=fO)) goto L_00431820;
L_00431837:; BB(0x00431837);
    /* 00431837: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0043183b: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 00431841: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00431844: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00431849: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0043184f: mov edx, 3 */ r_edx = 0x3u;
    /* 00431854: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00431855: mov dword ptr [ebx + 0x65c], edx */ W32((u32)(r_ebx+0x65cu), r_edx);
    /* 0043185b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043185d: call 0x42c154 */ r_esp -= 4; W32(r_esp, 0x431862u); f_0042c154();
    /* 00431862: mov dword ptr [ebx + 0x704], 0 */ W32((u32)(r_ebx+0x704u), 0x0u);
    /* 0043186c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043186e: mov dword ptr [ebx + 0x6e8], eax */ W32((u32)(r_ebx+0x6e8u), r_eax);
    /* 00431874: mov dword ptr [ebx + 0x6f0], eax */ W32((u32)(r_ebx+0x6f0u), r_eax);
    /* 0043187a: mov dword ptr [ebx + 0x708], 0 */ W32((u32)(r_ebx+0x708u), 0x0u);
    /* 00431884: mov dword ptr [ebx + 0x6ec], eax */ W32((u32)(r_ebx+0x6ecu), r_eax);
    /* 0043188a: mov dword ptr [ebx + 0x6f4], eax */ W32((u32)(r_ebx+0x6f4u), r_eax);
    /* 00431890: mov dword ptr [ebx + 0x70c], 0 */ W32((u32)(r_ebx+0x70cu), 0x0u);
    /* 0043189a: mov dword ptr [ebx + 0x710], 0 */ W32((u32)(r_ebx+0x710u), 0x0u);
    /* 004318a4: jmp 0x431572 */ goto L_00431572;
}

void f_00431678(void)
{
    FN_ENTER(0x00431678);
    goto L_00431678;
L_00431572:; BB(0x00431572);
    /* 00431572: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00431575: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00431576: ret 4 */ FN_RET(0x00431678); r_esp += 8; return;
L_0043163b:; BB(0x0043163b);
    /* 0043163b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043163e: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 00431644: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x431649u); f_00520e6c();
    /* 00431649: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0043164f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431651: je 0x43165c */ if (fZ) goto L_0043165c;
L_00431653:; BB(0x00431653);
    /* 00431653: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0043165a: jmp 0x431663 */ goto L_00431663;
L_0043165c:; BB(0x0043165c);
    /* 0043165c: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_00431663:; BB(0x00431663);
    /* 00431663: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 00431666: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00431669: ja 0x4317a3 */ if ((!fC&&!fZ)) goto L_004317a3;
L_0043166f:; BB(0x0043166f);
    /* 0043166f: mov edx, dword ptr [edx*4 + 0x8fc9d0] */ r_edx = R32((u32)(r_edx*4+0x8fc9d0u));
    /* 00431676: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00431678:; BB(0x00431678);
    /* 00431678: mov eax, 5 */ r_eax = 0x5u;
    /* 0043167d: jmp 0x43163b */ goto L_0043163b;
L_004317a3:; BB(0x004317a3);
    /* 004317a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004317a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004317a6: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4317abu); f_0042abf8();
    /* 004317ab: jmp 0x431572 */ goto L_00431572;
}

void f_0043167f(void)
{
    FN_ENTER(0x0043167f);
    goto L_0043167f;
L_00431572:; BB(0x00431572);
    /* 00431572: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00431575: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00431576: ret 4 */ FN_RET(0x0043167f); r_esp += 8; return;
L_0043167f:; BB(0x0043167f);
    /* 0043167f: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 00431685: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431687: jne 0x431693 */ if (!fZ) goto L_00431693;
L_00431689:; BB(0x00431689);
    /* 00431689: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0043168e: jmp 0x4317a3 */ goto L_004317a3;
L_00431693:; BB(0x00431693);
    /* 00431693: mov eax, 0x17 */ r_eax = 0x17u;
    /* 00431698: jmp 0x4317a3 */ goto L_004317a3;
L_004317a3:; BB(0x004317a3);
    /* 004317a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004317a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004317a6: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4317abu); f_0042abf8();
    /* 004317ab: jmp 0x431572 */ goto L_00431572;
}

void f_0043169d(void)
{
    FN_ENTER(0x0043169d);
    goto L_0043169d;
L_00431572:; BB(0x00431572);
    /* 00431572: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00431575: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00431576: ret 4 */ FN_RET(0x0043169d); r_esp += 8; return;
L_0043169d:; BB(0x0043169d);
    /* 0043169d: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 004316a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004316a5: jne 0x4316b1 */ if (!fZ) goto L_004316b1;
L_004316a7:; BB(0x004316a7);
    /* 004316a7: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004316ac: jmp 0x4317a3 */ goto L_004317a3;
L_004316b1:; BB(0x004316b1);
    /* 004316b1: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004316b6: jmp 0x4317a3 */ goto L_004317a3;
L_004317a3:; BB(0x004317a3);
    /* 004317a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004317a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004317a6: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4317abu); f_0042abf8();
    /* 004317ab: jmp 0x431572 */ goto L_00431572;
}

void f_004316bb(void)
{
    FN_ENTER(0x004316bb);
    goto L_004316bb;
L_00431572:; BB(0x00431572);
    /* 00431572: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00431575: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00431576: ret 4 */ FN_RET(0x004316bb); r_esp += 8; return;
L_004316bb:; BB(0x004316bb);
    /* 004316bb: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 004316c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004316c3: jne 0x4316cf */ if (!fZ) goto L_004316cf;
L_004316c5:; BB(0x004316c5);
    /* 004316c5: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004316ca: jmp 0x4317a3 */ goto L_004317a3;
L_004316cf:; BB(0x004316cf);
    /* 004316cf: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004316d4: jmp 0x4317a3 */ goto L_004317a3;
L_004317a3:; BB(0x004317a3);
    /* 004317a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004317a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004317a6: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4317abu); f_0042abf8();
    /* 004317ab: jmp 0x431572 */ goto L_00431572;
}

void f_004316d9(void)
{
    FN_ENTER(0x004316d9);
    goto L_004316d9;
L_00431572:; BB(0x00431572);
    /* 00431572: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00431575: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00431576: ret 4 */ FN_RET(0x004316d9); r_esp += 8; return;
L_004316d9:; BB(0x004316d9);
    /* 004316d9: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 004316df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004316e1: jne 0x4316ed */ if (!fZ) goto L_004316ed;
L_004316e3:; BB(0x004316e3);
    /* 004316e3: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004316e8: jmp 0x4317a3 */ goto L_004317a3;
L_004316ed:; BB(0x004316ed);
    /* 004316ed: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004316f2: jmp 0x4317a3 */ goto L_004317a3;
L_004317a3:; BB(0x004317a3);
    /* 004317a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004317a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004317a6: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4317abu); f_0042abf8();
    /* 004317ab: jmp 0x431572 */ goto L_00431572;
}

void f_004316f7(void)
{
    FN_ENTER(0x004316f7);
    goto L_004316f7;
L_00431572:; BB(0x00431572);
    /* 00431572: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00431575: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00431576: ret 4 */ FN_RET(0x004316f7); r_esp += 8; return;
L_004316f7:; BB(0x004316f7);
    /* 004316f7: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 004316fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004316ff: jne 0x43170b */ if (!fZ) goto L_0043170b;
L_00431701:; BB(0x00431701);
    /* 00431701: mov eax, 4 */ r_eax = 0x4u;
    /* 00431706: jmp 0x4317a3 */ goto L_004317a3;
L_0043170b:; BB(0x0043170b);
    /* 0043170b: mov eax, 0xa */ r_eax = 0xau;
    /* 00431710: jmp 0x4317a3 */ goto L_004317a3;
L_004317a3:; BB(0x004317a3);
    /* 004317a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004317a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004317a6: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4317abu); f_0042abf8();
    /* 004317ab: jmp 0x431572 */ goto L_00431572;
}

void f_00431715(void)
{
    FN_ENTER(0x00431715);
    goto L_00431715;
L_00431572:; BB(0x00431572);
    /* 00431572: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00431575: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00431576: ret 4 */ FN_RET(0x00431715); r_esp += 8; return;
L_00431715:; BB(0x00431715);
    /* 00431715: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431717: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x43171cu); f_00520bf4();
    /* 0043171c: fcomp dword ptr [0x8fce94] */ fx_compare(ST(0), R_F32((u32)(0x8fce94u))); FPOP();
    /* 00431722: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00431724: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00431725: jbe 0x43172e */ if ((fC||fZ)) goto L_0043172e;
L_00431727:; BB(0x00431727);
    /* 00431727: mov eax, 0x18 */ r_eax = 0x18u;
    /* 0043172c: jmp 0x4317a3 */ goto L_004317a3;
L_0043172e:; BB(0x0043172e);
    /* 0043172e: mov eax, 0x19 */ r_eax = 0x19u;
    /* 00431733: jmp 0x4317a3 */ goto L_004317a3;
L_004317a3:; BB(0x004317a3);
    /* 004317a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004317a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004317a6: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4317abu); f_0042abf8();
    /* 004317ab: jmp 0x431572 */ goto L_00431572;
}

void f_00431735(void)
{
    FN_ENTER(0x00431735);
    goto L_00431735;
L_00431572:; BB(0x00431572);
    /* 00431572: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00431575: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00431576: ret 4 */ FN_RET(0x00431735); r_esp += 8; return;
L_00431735:; BB(0x00431735);
    /* 00431735: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0043173b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043173d: jne 0x431746 */ if (!fZ) goto L_00431746;
L_0043173f:; BB(0x0043173f);
    /* 0043173f: mov eax, 3 */ r_eax = 0x3u;
    /* 00431744: jmp 0x4317a3 */ goto L_004317a3;
L_00431746:; BB(0x00431746);
    /* 00431746: mov eax, 0xb */ r_eax = 0xbu;
    /* 0043174b: jmp 0x4317a3 */ goto L_004317a3;
L_004317a3:; BB(0x004317a3);
    /* 004317a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004317a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004317a6: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4317abu); f_0042abf8();
    /* 004317ab: jmp 0x431572 */ goto L_00431572;
}

void f_0043174d(void)
{
    FN_ENTER(0x0043174d);
    goto L_0043174d;
L_00431572:; BB(0x00431572);
    /* 00431572: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00431575: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00431576: ret 4 */ FN_RET(0x0043174d); r_esp += 8; return;
L_0043174d:; BB(0x0043174d);
    /* 0043174d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043174f: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x431754u); f_00520bf4();
    /* 00431754: fcomp dword ptr [0x8fce94] */ fx_compare(ST(0), R_F32((u32)(0x8fce94u))); FPOP();
    /* 0043175a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043175c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043175d: jbe 0x431766 */ if ((fC||fZ)) goto L_00431766;
L_0043175f:; BB(0x0043175f);
    /* 0043175f: mov eax, 0xc */ r_eax = 0xcu;
    /* 00431764: jmp 0x4317a3 */ goto L_004317a3;
L_00431766:; BB(0x00431766);
    /* 00431766: mov eax, 0xe */ r_eax = 0xeu;
    /* 0043176b: jmp 0x4317a3 */ goto L_004317a3;
L_004317a3:; BB(0x004317a3);
    /* 004317a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004317a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004317a6: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4317abu); f_0042abf8();
    /* 004317ab: jmp 0x431572 */ goto L_00431572;
}

void f_0043176d(void)
{
    FN_ENTER(0x0043176d);
    goto L_0043176d;
L_00431572:; BB(0x00431572);
    /* 00431572: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00431575: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00431576: ret 4 */ FN_RET(0x0043176d); r_esp += 8; return;
L_0043176d:; BB(0x0043176d);
    /* 0043176d: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 00431773: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431775: jne 0x43177e */ if (!fZ) goto L_0043177e;
L_00431777:; BB(0x00431777);
    /* 00431777: mov eax, 5 */ r_eax = 0x5u;
    /* 0043177c: jmp 0x4317a3 */ goto L_004317a3;
L_0043177e:; BB(0x0043177e);
    /* 0043177e: mov eax, 9 */ r_eax = 0x9u;
    /* 00431783: jmp 0x4317a3 */ goto L_004317a3;
L_004317a3:; BB(0x004317a3);
    /* 004317a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004317a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004317a6: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4317abu); f_0042abf8();
    /* 004317ab: jmp 0x431572 */ goto L_00431572;
}

void f_00431785(void)
{
    FN_ENTER(0x00431785);
    goto L_00431785;
L_00431572:; BB(0x00431572);
    /* 00431572: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00431575: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00431576: ret 4 */ FN_RET(0x00431785); r_esp += 8; return;
L_00431785:; BB(0x00431785);
    /* 00431785: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431787: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x43178cu); f_00520bf4();
    /* 0043178c: fcomp dword ptr [0x8fce94] */ fx_compare(ST(0), R_F32((u32)(0x8fce94u))); FPOP();
    /* 00431792: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00431794: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00431795: jbe 0x43179e */ if ((fC||fZ)) goto L_0043179e;
L_00431797:; BB(0x00431797);
    /* 00431797: mov eax, 8 */ r_eax = 0x8u;
    /* 0043179c: jmp 0x4317a3 */ goto L_004317a3;
L_0043179e:; BB(0x0043179e);
    /* 0043179e: mov eax, 6 */ r_eax = 0x6u;
L_004317a3:; BB(0x004317a3);
    /* 004317a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004317a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004317a6: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4317abu); f_0042abf8();
    /* 004317ab: jmp 0x431572 */ goto L_00431572;
}

void f_004317a3(void)
{
    FN_ENTER(0x004317a3);
    goto L_004317a3;
L_00431572:; BB(0x00431572);
    /* 00431572: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00431575: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00431576: ret 4 */ FN_RET(0x004317a3); r_esp += 8; return;
L_004317a3:; BB(0x004317a3);
    /* 004317a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004317a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004317a6: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4317abu); f_0042abf8();
    /* 004317ab: jmp 0x431572 */ goto L_00431572;
}

void f_004318ac(void) /* sub_4318AC */
{
    FN_ENTER(0x004318ac);
    /* 004318ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004318ad: sub esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004318b3: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004318b5: mov eax, dword ptr [esp + 0xc8] */ r_eax = R32((u32)(r_esp+0xc8u));
    /* 004318bc: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004318bf: je 0x43214f */ if (fZ) goto L_0043214f;
L_004318c5:; BB(0x004318c5);
    /* 004318c5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004318c8: je 0x43191f */ if (fZ) goto L_0043191f;
L_004318ca:; BB(0x004318ca);
    /* 004318ca: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004318cd: je 0x431915 */ if (fZ) goto L_00431915;
L_004318cf:; BB(0x004318cf);
    /* 004318cf: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004318d2: je 0x431915 */ if (fZ) goto L_00431915;
L_004318d4:; BB(0x004318d4);
    /* 004318d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004318d6: jne 0x431915 */ if (!fZ) goto L_00431915;
L_004318d8:; BB(0x004318d8);
    /* 004318d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004318da: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4318dfu); f_007aa094();
    /* 004318df: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 004318e5: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004318e7: jne 0x431915 */ if (!fZ) goto L_00431915;
L_004318e9:; BB(0x004318e9);
    /* 004318e9: fld dword ptr [0x8fce34] */ FPUSH(R_F32((u32)(0x8fce34u)));
    /* 004318ef: fadd dword ptr [ebx + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xc8u));
    /* 004318f5: fcom dword ptr [0x8fce28] */ fx_compare(ST(0), R_F32((u32)(0x8fce28u))); 
    /* 004318fb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004318fd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004318fe: jae 0x43190f */ if (!fC) goto L_0043190f;
L_00431900:; BB(0x00431900);
    /* 00431900: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00431902: mov eax, 0x3f19999a */ r_eax = 0x3f19999au;
    /* 00431907: mov dword ptr [ebx + 0xc8], eax */ W32((u32)(r_ebx+0xc8u), r_eax);
    /* 0043190d: jmp 0x431915 */ goto L_00431915;
L_0043190f:; BB(0x0043190f);
    /* 0043190f: fstp dword ptr [ebx + 0xc8] */ W_F32((u32)(r_ebx+0xc8u), ST(0)); FPOP();
L_00431915:; BB(0x00431915);
    /* 00431915: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043191b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043191c: ret 4 */ FN_RET(0x004318ac); r_esp += 8; return;
L_0043191f:; BB(0x0043191f);
    /* 0043191f: mov eax, dword ptr [ebx + 0x65c] */ r_eax = R32((u32)(r_ebx+0x65cu));
    /* 00431925: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431927: je 0x431ef7 */ if (fZ) goto L_00431ef7;
L_0043192d:; BB(0x0043192d);
    /* 0043192d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431930: je 0x431d30 */ if (fZ) goto L_00431d30;
L_00431936:; BB(0x00431936);
    /* 00431936: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431939: jne 0x431b1f */ if (!fZ) goto L_00431b1f;
L_0043193f:; BB(0x0043193f);
    /* 0043193f: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 00431945: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00431948: test dword ptr [0xa0f668], eax */ {  u32 a = R32((u32)(0xa0f668u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043194e: jne 0x431adb */ if (!fZ) goto L_00431adb;
L_00431954:; BB(0x00431954);
    /* 00431954: test dword ptr [0xa0f670], eax */ {  u32 a = R32((u32)(0xa0f670u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043195a: jne 0x431a97 */ if (!fZ) goto L_00431a97;
L_00431960:; BB(0x00431960);
    /* 00431960: test dword ptr [0xa0f664], eax */ {  u32 a = R32((u32)(0xa0f664u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431966: jne 0x431a53 */ if (!fZ) goto L_00431a53;
L_0043196c:; BB(0x0043196c);
    /* 0043196c: test dword ptr [0xa0f67c], eax */ {  u32 a = R32((u32)(0xa0f67cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431972: jne 0x431a10 */ if (!fZ) goto L_00431a10;
L_00431978:; BB(0x00431978);
    /* 00431978: test dword ptr [0xa0f674], eax */ {  u32 a = R32((u32)(0xa0f674u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043197e: jne 0x4319cc */ if (!fZ) goto L_004319cc;
L_00431980:; BB(0x00431980);
    /* 00431980: test dword ptr [0xa0f678], eax */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431986: je 0x431915 */ if (fZ) goto L_00431915;
L_00431988:; BB(0x00431988);
    /* 00431988: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043198a: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0043198c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0043198e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431990: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x431996u); call_ind(t); }
    /* 00431996: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0043199a: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 004319a0: mov byte ptr [esp + 0x30], 0x13 */ W8((u32)(r_esp+0x30u), 0x13u);
    /* 004319a5: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 004319aa: mov byte ptr [esp + 0x31], 2 */ W8((u32)(r_esp+0x31u), 0x2u);
    /* 004319af: mov word ptr [esp + 0x32], ax */ W16((u32)(r_esp+0x32u), (u16)r_eax);
    /* 004319b4: mov word ptr [esp + 0x34], dx */ W16((u32)(r_esp+0x34u), (u16)r_edx);
    /* 004319b9: mov word ptr [esp + 0x36], bx */ W16((u32)(r_esp+0x36u), (u16)r_ebx);
    /* 004319be: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 004319c2: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4319c7u); f_008003e0();
    /* 004319c7: jmp 0x431915 */ goto L_00431915;
L_004319cc:; BB(0x004319cc);
    /* 004319cc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004319ce: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004319d0: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004319d2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004319d4: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4319dau); call_ind(t); }
    /* 004319da: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004319de: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 004319e4: mov byte ptr [esp + 0x38], 0x13 */ W8((u32)(r_esp+0x38u), 0x13u);
    /* 004319e9: mov edx, 0x11 */ r_edx = 0x11u;
    /* 004319ee: mov byte ptr [esp + 0x39], 2 */ W8((u32)(r_esp+0x39u), 0x2u);
    /* 004319f3: mov word ptr [esp + 0x3a], ax */ W16((u32)(r_esp+0x3au), (u16)r_eax);
    /* 004319f8: mov word ptr [esp + 0x3c], dx */ W16((u32)(r_esp+0x3cu), (u16)r_edx);
    /* 004319fd: mov word ptr [esp + 0x3e], bx */ W16((u32)(r_esp+0x3eu), (u16)r_ebx);
    /* 00431a02: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 00431a06: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x431a0bu); f_008003e0();
    /* 00431a0b: jmp 0x431915 */ goto L_00431915;
L_00431a10:; BB(0x00431a10);
    /* 00431a10: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00431a12: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00431a14: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00431a16: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431a18: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x431a1eu); call_ind(t); }
    /* 00431a1e: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00431a22: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 00431a28: mov byte ptr [esp + 0x41], 2 */ W8((u32)(r_esp+0x41u), 0x2u);
    /* 00431a2d: mov edx, 0x13 */ r_edx = 0x13u;
    /* 00431a32: mov byte ptr [esp + 0x40], dl */ W8((u32)(r_esp+0x40u), (u8)r_edx);
    /* 00431a36: mov word ptr [esp + 0x42], ax */ W16((u32)(r_esp+0x42u), (u16)r_eax);
    /* 00431a3b: mov word ptr [esp + 0x44], dx */ W16((u32)(r_esp+0x44u), (u16)r_edx);
    /* 00431a40: mov word ptr [esp + 0x46], bx */ W16((u32)(r_esp+0x46u), (u16)r_ebx);
    /* 00431a45: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 00431a49: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x431a4eu); f_008003e0();
    /* 00431a4e: jmp 0x431915 */ goto L_00431915;
L_00431a53:; BB(0x00431a53);
    /* 00431a53: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00431a55: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00431a57: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00431a59: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431a5b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x431a61u); call_ind(t); }
    /* 00431a61: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00431a65: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 00431a6b: mov byte ptr [esp + 0x48], 0x13 */ W8((u32)(r_esp+0x48u), 0x13u);
    /* 00431a70: mov edx, 0xb */ r_edx = 0xbu;
    /* 00431a75: mov byte ptr [esp + 0x49], 2 */ W8((u32)(r_esp+0x49u), 0x2u);
    /* 00431a7a: mov word ptr [esp + 0x4a], ax */ W16((u32)(r_esp+0x4au), (u16)r_eax);
    /* 00431a7f: mov word ptr [esp + 0x4c], dx */ W16((u32)(r_esp+0x4cu), (u16)r_edx);
    /* 00431a84: mov word ptr [esp + 0x4e], bx */ W16((u32)(r_esp+0x4eu), (u16)r_ebx);
    /* 00431a89: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 00431a8d: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x431a92u); f_008003e0();
    /* 00431a92: jmp 0x431915 */ goto L_00431915;
L_00431a97:; BB(0x00431a97);
    /* 00431a97: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00431a99: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00431a9b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00431a9d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431a9f: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x431aa5u); call_ind(t); }
    /* 00431aa5: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00431aa9: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 00431aaf: mov byte ptr [esp + 0x50], 0x13 */ W8((u32)(r_esp+0x50u), 0x13u);
    /* 00431ab4: mov edx, 0xa */ r_edx = 0xau;
    /* 00431ab9: mov byte ptr [esp + 0x51], 2 */ W8((u32)(r_esp+0x51u), 0x2u);
    /* 00431abe: mov word ptr [esp + 0x52], ax */ W16((u32)(r_esp+0x52u), (u16)r_eax);
    /* 00431ac3: mov word ptr [esp + 0x54], dx */ W16((u32)(r_esp+0x54u), (u16)r_edx);
    /* 00431ac8: mov word ptr [esp + 0x56], bx */ W16((u32)(r_esp+0x56u), (u16)r_ebx);
    /* 00431acd: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 00431ad1: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x431ad6u); f_008003e0();
    /* 00431ad6: jmp 0x431915 */ goto L_00431915;
L_00431adb:; BB(0x00431adb);
    /* 00431adb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00431add: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00431adf: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00431ae1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431ae3: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x431ae9u); call_ind(t); }
    /* 00431ae9: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00431aed: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 00431af3: mov byte ptr [esp + 0x58], 0x13 */ W8((u32)(r_esp+0x58u), 0x13u);
    /* 00431af8: mov edx, 9 */ r_edx = 0x9u;
    /* 00431afd: mov byte ptr [esp + 0x59], 2 */ W8((u32)(r_esp+0x59u), 0x2u);
    /* 00431b02: mov word ptr [esp + 0x5a], ax */ W16((u32)(r_esp+0x5au), (u16)r_eax);
    /* 00431b07: mov word ptr [esp + 0x5c], dx */ W16((u32)(r_esp+0x5cu), (u16)r_edx);
    /* 00431b0c: mov word ptr [esp + 0x5e], bx */ W16((u32)(r_esp+0x5eu), (u16)r_ebx);
    /* 00431b11: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 00431b15: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x431b1au); f_008003e0();
    /* 00431b1a: jmp 0x431915 */ goto L_00431915;
L_00431b1f:; BB(0x00431b1f);
    /* 00431b1f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431b22: jne 0x431915 */ if (!fZ) goto L_00431915;
L_00431b28:; BB(0x00431b28);
    /* 00431b28: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 00431b2e: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00431b31: test dword ptr [0xa0f670], eax */ {  u32 a = R32((u32)(0xa0f670u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431b37: jne 0x431cec */ if (!fZ) goto L_00431cec;
L_00431b3d:; BB(0x00431b3d);
    /* 00431b3d: test dword ptr [0xa0f664], eax */ {  u32 a = R32((u32)(0xa0f664u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431b43: jne 0x431ca8 */ if (!fZ) goto L_00431ca8;
L_00431b49:; BB(0x00431b49);
    /* 00431b49: test dword ptr [0xa0f66c], eax */ {  u32 a = R32((u32)(0xa0f66cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431b4f: jne 0x431c64 */ if (!fZ) goto L_00431c64;
L_00431b55:; BB(0x00431b55);
    /* 00431b55: test dword ptr [0xa0f67c], eax */ {  u32 a = R32((u32)(0xa0f67cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431b5b: jne 0x431c20 */ if (!fZ) goto L_00431c20;
L_00431b61:; BB(0x00431b61);
    /* 00431b61: test dword ptr [0xa0f674], eax */ {  u32 a = R32((u32)(0xa0f674u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431b67: jne 0x431bdc */ if (!fZ) goto L_00431bdc;
L_00431b69:; BB(0x00431b69);
    /* 00431b69: test dword ptr [0xa0f680], eax */ {  u32 a = R32((u32)(0xa0f680u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431b6f: jne 0x431bbf */ if (!fZ) goto L_00431bbf;
L_00431b71:; BB(0x00431b71);
    /* 00431b71: test dword ptr [0xa0f678], eax */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431b77: je 0x431915 */ if (fZ) goto L_00431915;
L_00431b7d:; BB(0x00431b7d);
    /* 00431b7d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00431b7f: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00431b81: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00431b83: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431b85: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x431b8bu); call_ind(t); }
    /* 00431b8b: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00431b8f: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 00431b95: mov byte ptr [esp], 0x13 */ W8((u32)(r_esp), 0x13u);
    /* 00431b99: mov edx, 0x1f */ r_edx = 0x1fu;
    /* 00431b9e: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 00431ba3: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00431ba8: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 00431bad: mov word ptr [esp + 6], bx */ W16((u32)(r_esp+0x6u), (u16)r_ebx);
    /* 00431bb2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00431bb5: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x431bbau); f_008003e0();
    /* 00431bba: jmp 0x431915 */ goto L_00431915;
L_00431bbf:; BB(0x00431bbf);
    /* 00431bbf: call 0x43c45c */ r_esp -= 4; W32(r_esp, 0x431bc4u); f_0043c45c();
    /* 00431bc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431bc6: je 0x431bd2 */ if (fZ) goto L_00431bd2;
L_00431bc8:; BB(0x00431bc8);
    /* 00431bc8: call 0x43c40c */ r_esp -= 4; W32(r_esp, 0x431bcdu); f_0043c40c();
    /* 00431bcd: jmp 0x431915 */ goto L_00431915;
L_00431bd2:; BB(0x00431bd2);
    /* 00431bd2: call 0x43c3fc */ r_esp -= 4; W32(r_esp, 0x431bd7u); f_0043c3fc();
    /* 00431bd7: jmp 0x431915 */ goto L_00431915;
L_00431bdc:; BB(0x00431bdc);
    /* 00431bdc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00431bde: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 00431be0: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00431be2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431be4: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x431beau); call_ind(t); }
    /* 00431bea: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00431bee: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 00431bf4: mov byte ptr [esp + 8], 0x13 */ W8((u32)(r_esp+0x8u), 0x13u);
    /* 00431bf9: mov edx, 0x1a */ r_edx = 0x1au;
    /* 00431bfe: mov byte ptr [esp + 9], 2 */ W8((u32)(r_esp+0x9u), 0x2u);
    /* 00431c03: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 00431c08: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 00431c0d: mov word ptr [esp + 0xe], bx */ W16((u32)(r_esp+0xeu), (u16)r_ebx);
    /* 00431c12: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00431c16: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x431c1bu); f_008003e0();
    /* 00431c1b: jmp 0x431915 */ goto L_00431915;
L_00431c20:; BB(0x00431c20);
    /* 00431c20: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00431c22: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00431c24: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00431c26: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431c28: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x431c2eu); call_ind(t); }
    /* 00431c2e: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00431c32: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 00431c38: mov byte ptr [esp + 0x10], 0x13 */ W8((u32)(r_esp+0x10u), 0x13u);
    /* 00431c3d: mov edx, 0xf */ r_edx = 0xfu;
    /* 00431c42: mov byte ptr [esp + 0x11], 2 */ W8((u32)(r_esp+0x11u), 0x2u);
    /* 00431c47: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 00431c4c: mov word ptr [esp + 0x14], dx */ W16((u32)(r_esp+0x14u), (u16)r_edx);
    /* 00431c51: mov word ptr [esp + 0x16], bx */ W16((u32)(r_esp+0x16u), (u16)r_ebx);
    /* 00431c56: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00431c5a: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x431c5fu); f_008003e0();
    /* 00431c5f: jmp 0x431915 */ goto L_00431915;
L_00431c64:; BB(0x00431c64);
    /* 00431c64: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00431c66: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00431c68: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00431c6a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431c6c: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x431c72u); call_ind(t); }
    /* 00431c72: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00431c76: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 00431c7c: mov byte ptr [esp + 0x18], 0x13 */ W8((u32)(r_esp+0x18u), 0x13u);
    /* 00431c81: mov edx, 0xe */ r_edx = 0xeu;
    /* 00431c86: mov byte ptr [esp + 0x19], 2 */ W8((u32)(r_esp+0x19u), 0x2u);
    /* 00431c8b: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 00431c90: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 00431c95: mov word ptr [esp + 0x1e], bx */ W16((u32)(r_esp+0x1eu), (u16)r_ebx);
    /* 00431c9a: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00431c9e: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x431ca3u); f_008003e0();
    /* 00431ca3: jmp 0x431915 */ goto L_00431915;
L_00431ca8:; BB(0x00431ca8);
    /* 00431ca8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00431caa: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00431cac: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00431cae: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431cb0: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x431cb6u); call_ind(t); }
    /* 00431cb6: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00431cba: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 00431cc0: mov byte ptr [esp + 0x20], 0x13 */ W8((u32)(r_esp+0x20u), 0x13u);
    /* 00431cc5: mov edx, 0xd */ r_edx = 0xdu;
    /* 00431cca: mov byte ptr [esp + 0x21], 2 */ W8((u32)(r_esp+0x21u), 0x2u);
    /* 00431ccf: mov word ptr [esp + 0x22], ax */ W16((u32)(r_esp+0x22u), (u16)r_eax);
    /* 00431cd4: mov word ptr [esp + 0x24], dx */ W16((u32)(r_esp+0x24u), (u16)r_edx);
    /* 00431cd9: mov word ptr [esp + 0x26], bx */ W16((u32)(r_esp+0x26u), (u16)r_ebx);
    /* 00431cde: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00431ce2: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x431ce7u); f_008003e0();
    /* 00431ce7: jmp 0x431915 */ goto L_00431915;
L_00431cec:; BB(0x00431cec);
    /* 00431cec: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00431cee: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00431cf0: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00431cf2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431cf4: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x431cfau); call_ind(t); }
    /* 00431cfa: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00431cfe: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 00431d04: mov byte ptr [esp + 0x28], 0x13 */ W8((u32)(r_esp+0x28u), 0x13u);
    /* 00431d09: mov edx, 0xc */ r_edx = 0xcu;
    /* 00431d0e: mov byte ptr [esp + 0x29], 2 */ W8((u32)(r_esp+0x29u), 0x2u);
    /* 00431d13: mov word ptr [esp + 0x2a], ax */ W16((u32)(r_esp+0x2au), (u16)r_eax);
    /* 00431d18: mov word ptr [esp + 0x2c], dx */ W16((u32)(r_esp+0x2cu), (u16)r_edx);
    /* 00431d1d: mov word ptr [esp + 0x2e], bx */ W16((u32)(r_esp+0x2eu), (u16)r_ebx);
    /* 00431d22: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 00431d26: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x431d2bu); f_008003e0();
    /* 00431d2b: jmp 0x431915 */ goto L_00431915;
L_00431d30:; BB(0x00431d30);
    /* 00431d30: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 00431d36: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00431d39: test dword ptr [0xa0f66c], eax */ {  u32 a = R32((u32)(0xa0f66cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431d3f: jne 0x431e9e */ if (!fZ) goto L_00431e9e;
L_00431d45:; BB(0x00431d45);
    /* 00431d45: test dword ptr [0xa0f668], eax */ {  u32 a = R32((u32)(0xa0f668u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431d4b: jne 0x431915 */ if (!fZ) goto L_00431915;
L_00431d51:; BB(0x00431d51);
    /* 00431d51: test dword ptr [0xa0f670], eax */ {  u32 a = R32((u32)(0xa0f670u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431d57: jne 0x431e54 */ if (!fZ) goto L_00431e54;
L_00431d5d:; BB(0x00431d5d);
    /* 00431d5d: test dword ptr [0xa0f67c], eax */ {  u32 a = R32((u32)(0xa0f67cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431d63: jne 0x431e10 */ if (!fZ) goto L_00431e10;
L_00431d69:; BB(0x00431d69);
    /* 00431d69: test dword ptr [0xa0f674], eax */ {  u32 a = R32((u32)(0xa0f674u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431d6f: jne 0x431dc1 */ if (!fZ) goto L_00431dc1;
L_00431d71:; BB(0x00431d71);
    /* 00431d71: test dword ptr [0xa0f678], eax */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431d77: je 0x431915 */ if (fZ) goto L_00431915;
L_00431d7d:; BB(0x00431d7d);
    /* 00431d7d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00431d7f: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00431d81: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00431d83: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431d85: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x431d8bu); call_ind(t); }
    /* 00431d8b: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00431d8f: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 00431d95: mov byte ptr [esp + 0x60], 0x13 */ W8((u32)(r_esp+0x60u), 0x13u);
    /* 00431d9a: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 00431d9f: mov byte ptr [esp + 0x61], 2 */ W8((u32)(r_esp+0x61u), 0x2u);
    /* 00431da4: mov word ptr [esp + 0x62], ax */ W16((u32)(r_esp+0x62u), (u16)r_eax);
    /* 00431da9: mov word ptr [esp + 0x64], dx */ W16((u32)(r_esp+0x64u), (u16)r_edx);
    /* 00431dae: mov word ptr [esp + 0x66], bx */ W16((u32)(r_esp+0x66u), (u16)r_ebx);
    /* 00431db3: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 00431db7: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x431dbcu); f_008003e0();
    /* 00431dbc: jmp 0x431915 */ goto L_00431915;
L_00431dc1:; BB(0x00431dc1);
    /* 00431dc1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00431dc3: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00431dc5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00431dc7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431dc9: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x431dcfu); call_ind(t); }
    /* 00431dcf: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00431dd3: mov byte ptr [esp + 0x68], 0x14 */ W8((u32)(r_esp+0x68u), 0x14u);
    /* 00431dd8: mov edx, 0x19 */ r_edx = 0x19u;
    /* 00431ddd: mov byte ptr [esp + 0x69], 3 */ W8((u32)(r_esp+0x69u), 0x3u);
    /* 00431de2: mov word ptr [esp + 0x6a], ax */ W16((u32)(r_esp+0x6au), (u16)r_eax);
    /* 00431de7: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 00431ded: movzx ebx, word ptr [ebx + 0x394] */ r_ebx = (u32)R16((u32)(r_ebx+0x394u));
    /* 00431df4: mov word ptr [esp + 0x6c], dx */ W16((u32)(r_esp+0x6cu), (u16)r_edx);
    /* 00431df9: mov word ptr [esp + 0x6e], ax */ W16((u32)(r_esp+0x6eu), (u16)r_eax);
    /* 00431dfe: mov dword ptr [esp + 0x70], ebx */ W32((u32)(r_esp+0x70u), r_ebx);
    /* 00431e02: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 00431e06: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x431e0bu); f_008003e0();
    /* 00431e0b: jmp 0x431915 */ goto L_00431915;
L_00431e10:; BB(0x00431e10);
    /* 00431e10: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00431e12: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00431e14: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00431e16: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431e18: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x431e1eu); call_ind(t); }
    /* 00431e1e: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00431e22: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 00431e28: mov byte ptr [esp + 0x74], 0x13 */ W8((u32)(r_esp+0x74u), 0x13u);
    /* 00431e2d: mov edx, 0x18 */ r_edx = 0x18u;
    /* 00431e32: mov byte ptr [esp + 0x75], 2 */ W8((u32)(r_esp+0x75u), 0x2u);
    /* 00431e37: mov word ptr [esp + 0x76], ax */ W16((u32)(r_esp+0x76u), (u16)r_eax);
    /* 00431e3c: mov word ptr [esp + 0x78], dx */ W16((u32)(r_esp+0x78u), (u16)r_edx);
    /* 00431e41: mov word ptr [esp + 0x7a], bx */ W16((u32)(r_esp+0x7au), (u16)r_ebx);
    /* 00431e46: lea ecx, [esp + 0x74] */ r_ecx = (u32)(r_esp+0x74u);
    /* 00431e4a: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x431e4fu); f_008003e0();
    /* 00431e4f: jmp 0x431915 */ goto L_00431915;
L_00431e54:; BB(0x00431e54);
    /* 00431e54: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00431e56: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00431e58: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00431e5a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431e5c: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x431e62u); call_ind(t); }
    /* 00431e62: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00431e66: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 00431e6c: mov byte ptr [esp + 0x7c], 0x13 */ W8((u32)(r_esp+0x7cu), 0x13u);
    /* 00431e71: mov edx, 8 */ r_edx = 0x8u;
    /* 00431e76: mov byte ptr [esp + 0x7d], 2 */ W8((u32)(r_esp+0x7du), 0x2u);
    /* 00431e7b: mov word ptr [esp + 0x7e], ax */ W16((u32)(r_esp+0x7eu), (u16)r_eax);
    /* 00431e80: mov word ptr [esp + 0x80], dx */ W16((u32)(r_esp+0x80u), (u16)r_edx);
    /* 00431e88: mov word ptr [esp + 0x82], bx */ W16((u32)(r_esp+0x82u), (u16)r_ebx);
    /* 00431e90: lea ecx, [esp + 0x7c] */ r_ecx = (u32)(r_esp+0x7cu);
    /* 00431e94: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x431e99u); f_008003e0();
    /* 00431e99: jmp 0x431915 */ goto L_00431915;
L_00431e9e:; BB(0x00431e9e);
    /* 00431e9e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00431ea0: mov eax, 6 */ r_eax = 0x6u;
    /* 00431ea5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431ea6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431ea8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00431ea9: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x431eafu); call_ind(t); }
    /* 00431eaf: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00431eb3: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 00431eb9: mov byte ptr [esp + 0x84], 0x13 */ W8((u32)(r_esp+0x84u), 0x13u);
    /* 00431ec1: mov edx, 6 */ r_edx = 0x6u;
    /* 00431ec6: mov byte ptr [esp + 0x85], 2 */ W8((u32)(r_esp+0x85u), 0x2u);
    /* 00431ece: mov word ptr [esp + 0x86], ax */ W16((u32)(r_esp+0x86u), (u16)r_eax);
    /* 00431ed6: mov word ptr [esp + 0x88], dx */ W16((u32)(r_esp+0x88u), (u16)r_edx);
    /* 00431ede: mov word ptr [esp + 0x8a], bx */ W16((u32)(r_esp+0x8au), (u16)r_ebx);
    /* 00431ee6: lea ecx, [esp + 0x84] */ r_ecx = (u32)(r_esp+0x84u);
    /* 00431eed: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x431ef2u); f_008003e0();
    /* 00431ef2: jmp 0x431915 */ goto L_00431915;
L_00431ef7:; BB(0x00431ef7);
    /* 00431ef7: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 00431efd: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00431f00: test dword ptr [0xa0f664], eax */ {  u32 a = R32((u32)(0xa0f664u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431f06: jne 0x4320f9 */ if (!fZ) goto L_004320f9;
L_00431f0c:; BB(0x00431f0c);
    /* 00431f0c: test dword ptr [0xa0f66c], eax */ {  u32 a = R32((u32)(0xa0f66cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431f12: jne 0x4320a3 */ if (!fZ) goto L_004320a3;
L_00431f18:; BB(0x00431f18);
    /* 00431f18: test dword ptr [0xa0f668], eax */ {  u32 a = R32((u32)(0xa0f668u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431f1e: jne 0x43204d */ if (!fZ) goto L_0043204d;
L_00431f24:; BB(0x00431f24);
    /* 00431f24: test dword ptr [0xa0f67c], eax */ {  u32 a = R32((u32)(0xa0f67cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431f2a: jne 0x431ff7 */ if (!fZ) goto L_00431ff7;
L_00431f30:; BB(0x00431f30);
    /* 00431f30: test dword ptr [0xa0f674], eax */ {  u32 a = R32((u32)(0xa0f674u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431f36: jne 0x431fa1 */ if (!fZ) goto L_00431fa1;
L_00431f38:; BB(0x00431f38);
    /* 00431f38: test dword ptr [0xa0f678], eax */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00431f3e: je 0x431915 */ if (fZ) goto L_00431915;
L_00431f44:; BB(0x00431f44);
    /* 00431f44: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00431f46: mov dword ptr [ebx + 0x40], 0xc3520000 */ W32((u32)(r_ebx+0x40u), 0xc3520000u);
    /* 00431f4d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431f4f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00431f51: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00431f53: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x431f59u); call_ind(t); }
    /* 00431f59: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00431f5d: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 00431f63: mov byte ptr [esp + 0x8c], 0x13 */ W8((u32)(r_esp+0x8cu), 0x13u);
    /* 00431f6b: mov edx, 1 */ r_edx = 0x1u;
    /* 00431f70: mov byte ptr [esp + 0x8d], 2 */ W8((u32)(r_esp+0x8du), 0x2u);
    /* 00431f78: mov word ptr [esp + 0x8e], ax */ W16((u32)(r_esp+0x8eu), (u16)r_eax);
    /* 00431f80: mov word ptr [esp + 0x90], dx */ W16((u32)(r_esp+0x90u), (u16)r_edx);
    /* 00431f88: mov word ptr [esp + 0x92], bx */ W16((u32)(r_esp+0x92u), (u16)r_ebx);
    /* 00431f90: lea ecx, [esp + 0x8c] */ r_ecx = (u32)(r_esp+0x8cu);
    /* 00431f97: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x431f9cu); f_008003e0();
    /* 00431f9c: jmp 0x431915 */ goto L_00431915;
L_00431fa1:; BB(0x00431fa1);
    /* 00431fa1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00431fa3: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00431fa5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00431fa7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431fa9: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x431fafu); call_ind(t); }
    /* 00431faf: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00431fb3: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 00431fb9: mov byte ptr [esp + 0x94], 0x13 */ W8((u32)(r_esp+0x94u), 0x13u);
    /* 00431fc1: mov edx, 0x10 */ r_edx = 0x10u;
    /* 00431fc6: mov byte ptr [esp + 0x95], 2 */ W8((u32)(r_esp+0x95u), 0x2u);
    /* 00431fce: mov word ptr [esp + 0x96], ax */ W16((u32)(r_esp+0x96u), (u16)r_eax);
    /* 00431fd6: mov word ptr [esp + 0x98], dx */ W16((u32)(r_esp+0x98u), (u16)r_edx);
    /* 00431fde: mov word ptr [esp + 0x9a], bx */ W16((u32)(r_esp+0x9au), (u16)r_ebx);
    /* 00431fe6: lea ecx, [esp + 0x94] */ r_ecx = (u32)(r_esp+0x94u);
    /* 00431fed: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x431ff2u); f_008003e0();
    /* 00431ff2: jmp 0x431915 */ goto L_00431915;
L_00431ff7:; BB(0x00431ff7);
    /* 00431ff7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00431ff9: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00431ffb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00431ffd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00431fff: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x432005u); call_ind(t); }
    /* 00432005: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00432009: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 0043200f: mov byte ptr [esp + 0x9c], 0x13 */ W8((u32)(r_esp+0x9cu), 0x13u);
    /* 00432017: mov edx, 0x12 */ r_edx = 0x12u;
    /* 0043201c: mov byte ptr [esp + 0x9d], 2 */ W8((u32)(r_esp+0x9du), 0x2u);
    /* 00432024: mov word ptr [esp + 0x9e], ax */ W16((u32)(r_esp+0x9eu), (u16)r_eax);
    /* 0043202c: mov word ptr [esp + 0xa0], dx */ W16((u32)(r_esp+0xa0u), (u16)r_edx);
    /* 00432034: mov word ptr [esp + 0xa2], bx */ W16((u32)(r_esp+0xa2u), (u16)r_ebx);
    /* 0043203c: lea ecx, [esp + 0x9c] */ r_ecx = (u32)(r_esp+0x9cu);
    /* 00432043: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x432048u); f_008003e0();
    /* 00432048: jmp 0x431915 */ goto L_00431915;
L_0043204d:; BB(0x0043204d);
    /* 0043204d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043204f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00432051: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00432053: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00432055: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x43205bu); call_ind(t); }
    /* 0043205b: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0043205f: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 00432065: mov byte ptr [esp + 0xa4], 0x13 */ W8((u32)(r_esp+0xa4u), 0x13u);
    /* 0043206d: mov edx, 5 */ r_edx = 0x5u;
    /* 00432072: mov byte ptr [esp + 0xa5], 2 */ W8((u32)(r_esp+0xa5u), 0x2u);
    /* 0043207a: mov word ptr [esp + 0xa6], ax */ W16((u32)(r_esp+0xa6u), (u16)r_eax);
    /* 00432082: mov word ptr [esp + 0xa8], dx */ W16((u32)(r_esp+0xa8u), (u16)r_edx);
    /* 0043208a: mov word ptr [esp + 0xaa], bx */ W16((u32)(r_esp+0xaau), (u16)r_ebx);
    /* 00432092: lea ecx, [esp + 0xa4] */ r_ecx = (u32)(r_esp+0xa4u);
    /* 00432099: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43209eu); f_008003e0();
    /* 0043209e: jmp 0x431915 */ goto L_00431915;
L_004320a3:; BB(0x004320a3);
    /* 004320a3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004320a5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004320a7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004320a9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004320ab: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4320b1u); call_ind(t); }
    /* 004320b1: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004320b5: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 004320bb: mov byte ptr [esp + 0xac], 0x13 */ W8((u32)(r_esp+0xacu), 0x13u);
    /* 004320c3: mov edx, 4 */ r_edx = 0x4u;
    /* 004320c8: mov byte ptr [esp + 0xad], 2 */ W8((u32)(r_esp+0xadu), 0x2u);
    /* 004320d0: mov word ptr [esp + 0xae], ax */ W16((u32)(r_esp+0xaeu), (u16)r_eax);
    /* 004320d8: mov word ptr [esp + 0xb0], dx */ W16((u32)(r_esp+0xb0u), (u16)r_edx);
    /* 004320e0: mov word ptr [esp + 0xb2], bx */ W16((u32)(r_esp+0xb2u), (u16)r_ebx);
    /* 004320e8: lea ecx, [esp + 0xac] */ r_ecx = (u32)(r_esp+0xacu);
    /* 004320ef: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4320f4u); f_008003e0();
    /* 004320f4: jmp 0x431915 */ goto L_00431915;
L_004320f9:; BB(0x004320f9);
    /* 004320f9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004320fb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004320fd: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004320ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00432101: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x432107u); call_ind(t); }
    /* 00432107: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0043210b: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 00432111: mov byte ptr [esp + 0xb4], 0x13 */ W8((u32)(r_esp+0xb4u), 0x13u);
    /* 00432119: mov edx, 3 */ r_edx = 0x3u;
    /* 0043211e: mov byte ptr [esp + 0xb5], 2 */ W8((u32)(r_esp+0xb5u), 0x2u);
    /* 00432126: mov word ptr [esp + 0xb6], ax */ W16((u32)(r_esp+0xb6u), (u16)r_eax);
    /* 0043212e: mov word ptr [esp + 0xb8], dx */ W16((u32)(r_esp+0xb8u), (u16)r_edx);
    /* 00432136: mov word ptr [esp + 0xba], bx */ W16((u32)(r_esp+0xbau), (u16)r_ebx);
    /* 0043213e: lea ecx, [esp + 0xb4] */ r_ecx = (u32)(r_esp+0xb4u);
    /* 00432145: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43214au); f_008003e0();
    /* 0043214a: jmp 0x431915 */ goto L_00431915;
L_0043214f:; BB(0x0043214f);
    /* 0043214f: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00432151: mov eax, 1 */ r_eax = 0x1u;
    /* 00432156: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0043215d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043215f: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x432165u); call_ind(t); }
    /* 00432165: mov dword ptr [esp + 0xbc], esi */ W32((u32)(r_esp+0xbcu), r_esi);
    /* 0043216c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043216e: mov esi, eax */ r_esi = r_eax;
L_00432170:; BB(0x00432170);
    /* 00432170: mov ecx, dword ptr [ebx + esi*4 + 0x5e8] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x5e8u));
    /* 00432177: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432179: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x43217fu); call_ind(t); }
    /* 0043217f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432182: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00432185: jl 0x432170 */ if ((fS!=fO)) goto L_00432170;
L_00432187:; BB(0x00432187);
    /* 00432187: mov esi, dword ptr [esp + 0xbc] */ r_esi = R32((u32)(r_esp+0xbcu));
    /* 0043218e: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 00432194: mov dword ptr [ebx + 0x6ac], 0 */ W32((u32)(r_ebx+0x6acu), 0x0u);
    /* 0043219e: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004321a1: mov dword ptr [ebx + 0x6ec], 1 */ W32((u32)(r_ebx+0x6ecu), 0x1u);
    /* 004321ab: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004321b0: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 004321b6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004321b8: mov dword ptr [ebx + 0x64], edx */ W32((u32)(r_ebx+0x64u), r_edx);
    /* 004321bb: mov dword ptr [ebx + 0x6f0], edx */ W32((u32)(r_ebx+0x6f0u), r_edx);
    /* 004321c1: mov dword ptr [ebx + 0x6e8], edx */ W32((u32)(r_ebx+0x6e8u), r_edx);
    /* 004321c7: jmp 0x431915 */ goto L_00431915;
}

