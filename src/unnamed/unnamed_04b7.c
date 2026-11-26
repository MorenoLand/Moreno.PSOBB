#include "protos.h"

void f_004b7040(void) /* sub_4B7040 */
{
    FN_ENTER(0x004b7040);
    /* 004b7040: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b7041: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b7044: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004b7046: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004b704a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b704d: je 0x4b77b6 */ if (fZ) goto L_004b77b6;
L_004b7053:; BB(0x004b7053);
    /* 004b7053: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7056: je 0x4b7764 */ if (fZ) goto L_004b7764;
L_004b705c:; BB(0x004b705c);
    /* 004b705c: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b705f: je 0x4b760e */ if (fZ) goto L_004b760e;
L_004b7065:; BB(0x004b7065);
    /* 004b7065: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7068: je 0x4b755a */ if (fZ) goto L_004b755a;
L_004b706e:; BB(0x004b706e);
    /* 004b706e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7070: je 0x4b70a2 */ if (fZ) goto L_004b70a2;
L_004b7072:; BB(0x004b7072);
    /* 004b7072: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7075: je 0x4b755a */ if (fZ) goto L_004b755a;
L_004b707b:; BB(0x004b707b);
    /* 004b707b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b707e: jne 0x4b755a */ if (!fZ) goto L_004b755a;
L_004b7084:; BB(0x004b7084);
    /* 004b7084: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b708a: mov dword ptr [ebx + 0x6c8], 1 */ W32((u32)(r_ebx+0x6c8u), 0x1u);
    /* 004b7094: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b7097: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b709d: jmp 0x4b755a */ goto L_004b755a;
L_004b70a2:; BB(0x004b70a2);
    /* 004b70a2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b70a4: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b70a9u); f_007aa094();
    /* 004b70a9: mov eax, dword ptr [ebx + 0x730] */ r_eax = R32((u32)(r_ebx+0x730u));
    /* 004b70af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b70b1: je 0x4b7501 */ if (fZ) goto L_004b7501;
L_004b70b7:; BB(0x004b70b7);
    /* 004b70b7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b70ba: jne 0x4b70d9 */ if (!fZ) goto L_004b70d9;
L_004b70bc:; BB(0x004b70bc);
    /* 004b70bc: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 004b70c2: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004b70c4: jne 0x4b755a */ if (!fZ) goto L_004b755a;
L_004b70ca:; BB(0x004b70ca);
    /* 004b70ca: mov dword ptr [ebx + 0x730], 2 */ W32((u32)(r_ebx+0x730u), 0x2u);
    /* 004b70d4: jmp 0x4b755a */ goto L_004b755a;
L_004b70d9:; BB(0x004b70d9);
    /* 004b70d9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b70dc: jne 0x4b755a */ if (!fZ) goto L_004b755a;
L_004b70e2:; BB(0x004b70e2);
    /* 004b70e2: mov eax, dword ptr [ebx + 0x734] */ r_eax = R32((u32)(r_ebx+0x734u));
    /* 004b70e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b70ea: je 0x4b75a1 */ if (fZ) goto L_004b75a1;
L_004b70f0:; BB(0x004b70f0);
    /* 004b70f0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b70f3: je 0x4b7159 */ if (fZ) goto L_004b7159;
L_004b70f5:; BB(0x004b70f5);
    /* 004b70f5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b70f8: jne 0x4b7137 */ if (!fZ) goto L_004b7137;
L_004b70fa:; BB(0x004b70fa);
    /* 004b70fa: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 004b7100: fcomp dword ptr [0x906cfc] */ fx_compare(ST(0), R_F32((u32)(0x906cfcu))); FPOP();
    /* 004b7106: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b7108: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b7109: jb 0x4b71af */ if (fC) goto L_004b71af;
L_004b710f:; BB(0x004b710f);
    /* 004b710f: fld dword ptr [ebx + 0x754] */ FPUSH(R_F32((u32)(r_ebx+0x754u)));
    /* 004b7115: fmul dword ptr [0x906d28] */ ST(0) = ST(0) * R_F32((u32)(0x906d28u));
    /* 004b711b: fstp dword ptr [ebx + 0x754] */ W_F32((u32)(r_ebx+0x754u), ST(0)); FPOP();
    /* 004b7121: mov dword ptr [ebx + 0x734], 3 */ W32((u32)(r_ebx+0x734u), 0x3u);
    /* 004b712b: mov dword ptr [ebx + 0x758], 0 */ W32((u32)(r_ebx+0x758u), 0x0u);
    /* 004b7135: jmp 0x4b71af */ goto L_004b71af;
L_004b7137:; BB(0x004b7137);
    /* 004b7137: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b713a: jne 0x4b71af */ if (!fZ) goto L_004b71af;
L_004b713c:; BB(0x004b713c);
    /* 004b713c: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 004b7142: fcomp dword ptr [0x906d00] */ fx_compare(ST(0), R_F32((u32)(0x906d00u))); FPOP();
    /* 004b7148: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b714a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b714b: jb 0x4b71af */ if (fC) goto L_004b71af;
L_004b714d:; BB(0x004b714d);
    /* 004b714d: mov dword ptr [ebx + 0x734], 4 */ W32((u32)(r_ebx+0x734u), 0x4u);
    /* 004b7157: jmp 0x4b71af */ goto L_004b71af;
L_004b7159:; BB(0x004b7159);
    /* 004b7159: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 004b715f: fcomp dword ptr [0x906cf8] */ fx_compare(ST(0), R_F32((u32)(0x906cf8u))); FPOP();
    /* 004b7165: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b7167: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b7168: jb 0x4b71af */ if (fC) goto L_004b71af;
L_004b716a:; BB(0x004b716a);
    /* 004b716a: fld dword ptr [0x906cf4] */ FPUSH(R_F32((u32)(0x906cf4u)));
    /* 004b7170: fsub dword ptr [ebx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x3cu));
    /* 004b7173: fmul dword ptr [0x906d20] */ ST(0) = ST(0) * R_F32((u32)(0x906d20u));
    /* 004b7179: fld dword ptr [0x906d1c] */ FPUSH(R_F32((u32)(0x906d1cu)));
    /* 004b717f: mov dword ptr [ebx + 0x734], 2 */ W32((u32)(r_ebx+0x734u), 0x2u);
    /* 004b7189: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b718b: fdiv dword ptr [0xa47a98] */ ST(0) = ST(0) / R_F32((u32)(0xa47a98u));
    /* 004b7191: fst dword ptr [ebx + 0x74c] */ W_F32((u32)(r_ebx+0x74cu), ST(0));
    /* 004b7197: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004b7199: fdiv dword ptr [0xa47a98] */ ST(0) = ST(0) / R_F32((u32)(0xa47a98u));
    /* 004b719f: fstp dword ptr [ebx + 0x750] */ W_F32((u32)(r_ebx+0x750u), ST(0)); FPOP();
    /* 004b71a5: mov dword ptr [ebx + 0x73c], 0 */ W32((u32)(r_ebx+0x73cu), 0x0u);
L_004b71af:; BB(0x004b71af);
    /* 004b71af: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 004b71b6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b71b9: je 0x4b721d */ if (fZ) goto L_004b721d;
L_004b71bb:; BB(0x004b71bb);
    /* 004b71bb: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b71c0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b71c2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b71c7u); f_007aaa30();
    /* 004b71c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b71c9: jne 0x4b7205 */ if (!fZ) goto L_004b7205;
L_004b71cb:; BB(0x004b71cb);
    /* 004b71cb: push 0x41b00000 */ { u32 v = 0x41b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b71d0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b71d2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b71d7u); f_007aaa30();
    /* 004b71d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b71d9: jne 0x4b7205 */ if (!fZ) goto L_004b7205;
L_004b71db:; BB(0x004b71db);
    /* 004b71db: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b71e0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b71e2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b71e7u); f_007aaa30();
    /* 004b71e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b71e9: je 0x4b721d */ if (fZ) goto L_004b721d;
L_004b71eb:; BB(0x004b71eb);
    /* 004b71eb: lea edx, [ebx + 0x514] */ r_edx = (u32)(r_ebx+0x514u);
    /* 004b71f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b71f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b71f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b71f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b71f6: push 0x3ed */ { u32 v = 0x3edu; r_esp -= 4; W32(r_esp, v); }
    /* 004b71fb: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b7200u); f_00814298();
    /* 004b7200: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b7203: jmp 0x4b721d */ goto L_004b721d;
L_004b7205:; BB(0x004b7205);
    /* 004b7205: lea edx, [ebx + 0x514] */ r_edx = (u32)(r_ebx+0x514u);
    /* 004b720b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b720d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b720e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b720f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b7210: push 0x3ec */ { u32 v = 0x3ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004b7215: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b721au); f_00814298();
    /* 004b721a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b721d:; BB(0x004b721d);
    /* 004b721d: mov eax, dword ptr [ebx + 0x734] */ r_eax = R32((u32)(r_ebx+0x734u));
    /* 004b7223: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7226: jne 0x4b72da */ if (!fZ) goto L_004b72da;
L_004b722c:; BB(0x004b722c);
    /* 004b722c: mov edx, dword ptr [ebx + 0x73c] */ r_edx = R32((u32)(r_ebx+0x73cu));
    /* 004b7232: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 004b7238: fcomp dword ptr [0x906cd8] */ fx_compare(ST(0), R_F32((u32)(0x906cd8u))); FPOP();
    /* 004b723e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b7240: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b7243: mov dword ptr [ebx + 0x73c], edx */ W32((u32)(r_ebx+0x73cu), r_edx);
    /* 004b7249: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b724a: jb 0x4b72cf */ if (fC) goto L_004b72cf;
L_004b7250:; BB(0x004b7250);
    /* 004b7250: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b7253: jge 0x4b7260 */ if ((fS==fO)) goto L_004b7260;
L_004b7255:; BB(0x004b7255);
    /* 004b7255: mov eax, dword ptr [ebx + 0x734] */ r_eax = R32((u32)(r_ebx+0x734u));
    /* 004b725b: jmp 0x4b73a4 */ goto L_004b73a4;
L_004b7260:; BB(0x004b7260);
    /* 004b7260: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 004b7263: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004b7266: mov dword ptr [ebx + 0x73c], 0 */ W32((u32)(r_ebx+0x73cu), 0x0u);
    /* 004b7270: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7272: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004b7276: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 004b7279: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004b727d: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004b7281: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b7286u); f_00520bf4();
    /* 004b7286: fld dword ptr [0x906cd4] */ FPUSH(R_F32((u32)(0x906cd4u)));
    /* 004b728c: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004b7290: fadd dword ptr [0x906cd0] */ ST(0) = ST(0) + R_F32((u32)(0x906cd0u));
    /* 004b7296: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b7298: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004b729a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b729c: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 004b72a0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b72a2: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004b72a6: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004b72aa: mov dword ptr [esp + 0x10], 0xc0a00000 */ W32((u32)(r_esp+0x10u), 0xc0a00000u);
    /* 004b72b2: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004b72b6: push 0x201 */ { u32 v = 0x201u; r_esp -= 4; W32(r_esp, v); }
    /* 004b72bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b72bc: call 0x4be7c0 */ r_esp -= 4; W32(r_esp, 0x4b72c1u); f_004be7c0();
    /* 004b72c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b72c4: mov eax, dword ptr [ebx + 0x734] */ r_eax = R32((u32)(r_ebx+0x734u));
    /* 004b72ca: jmp 0x4b73a4 */ goto L_004b73a4;
L_004b72cf:; BB(0x004b72cf);
    /* 004b72cf: mov eax, dword ptr [ebx + 0x734] */ r_eax = R32((u32)(r_ebx+0x734u));
    /* 004b72d5: jmp 0x4b73a4 */ goto L_004b73a4;
L_004b72da:; BB(0x004b72da);
    /* 004b72da: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b72dd: jl 0x4b73a4 */ if ((fS!=fO)) goto L_004b73a4;
L_004b72e3:; BB(0x004b72e3);
    /* 004b72e3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b72e6: jg 0x4b73a4 */ if ((!fZ&&fS==fO)) goto L_004b73a4;
L_004b72ec:; BB(0x004b72ec);
    /* 004b72ec: mov eax, dword ptr [ebx + 0x73c] */ r_eax = R32((u32)(r_ebx+0x73cu));
    /* 004b72f2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b72f5: mov dword ptr [ebx + 0x73c], eax */ W32((u32)(r_ebx+0x73cu), r_eax);
    /* 004b72fb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b72fe: jl 0x4b739e */ if ((fS!=fO)) goto L_004b739e;
L_004b7304:; BB(0x004b7304);
    /* 004b7304: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 004b730a: fcom dword ptr [0x906ce8] */ fx_compare(ST(0), R_F32((u32)(0x906ce8u))); 
    /* 004b7310: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b7312: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b7313: jb 0x4b7394 */ if (fC) goto L_004b7394;
L_004b7319:; BB(0x004b7319);
    /* 004b7319: fcomp dword ptr [0x906ce4] */ fx_compare(ST(0), R_F32((u32)(0x906ce4u))); FPOP();
    /* 004b731f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b7321: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b7322: jbe 0x4b732c */ if ((fC||fZ)) goto L_004b732c;
L_004b7324:; BB(0x004b7324);
    /* 004b7324: mov eax, dword ptr [ebx + 0x734] */ r_eax = R32((u32)(r_ebx+0x734u));
    /* 004b732a: jmp 0x4b73a4 */ goto L_004b73a4;
L_004b732c:; BB(0x004b732c);
    /* 004b732c: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 004b732f: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004b7332: mov dword ptr [ebx + 0x73c], 0 */ W32((u32)(r_ebx+0x73cu), 0x0u);
    /* 004b733c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b733e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004b7341: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 004b7344: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004b7348: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004b734c: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b7351u); f_00520bf4();
    /* 004b7351: fld dword ptr [0x906ce0] */ FPUSH(R_F32((u32)(0x906ce0u)));
    /* 004b7357: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004b735b: fadd dword ptr [0x906cdc] */ ST(0) = ST(0) + R_F32((u32)(0x906cdcu));
    /* 004b7361: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b7363: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004b7365: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b7367: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 004b736a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b736c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004b7370: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b7373: mov dword ptr [esp + 4], 0xc0a00000 */ W32((u32)(r_esp+0x4u), 0xc0a00000u);
    /* 004b737b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004b737e: push 0x201 */ { u32 v = 0x201u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7383: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7384: call 0x4be7c0 */ r_esp -= 4; W32(r_esp, 0x4b7389u); f_004be7c0();
    /* 004b7389: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b738c: mov eax, dword ptr [ebx + 0x734] */ r_eax = R32((u32)(r_ebx+0x734u));
    /* 004b7392: jmp 0x4b73a4 */ goto L_004b73a4;
L_004b7394:; BB(0x004b7394);
    /* 004b7394: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b7396: mov eax, dword ptr [ebx + 0x734] */ r_eax = R32((u32)(r_ebx+0x734u));
    /* 004b739c: jmp 0x4b73a4 */ goto L_004b73a4;
L_004b739e:; BB(0x004b739e);
    /* 004b739e: mov eax, dword ptr [ebx + 0x734] */ r_eax = R32((u32)(r_ebx+0x734u));
L_004b73a4:; BB(0x004b73a4);
    /* 004b73a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b73a6: je 0x4b7570 */ if (fZ) goto L_004b7570;
L_004b73ac:; BB(0x004b73ac);
    /* 004b73ac: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b73af: je 0x4b74d6 */ if (fZ) goto L_004b74d6;
L_004b73b5:; BB(0x004b73b5);
    /* 004b73b5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b73b8: jne 0x4b7409 */ if (!fZ) goto L_004b7409;
L_004b73ba:; BB(0x004b73ba);
    /* 004b73ba: fld dword ptr [0x906cc8] */ FPUSH(R_F32((u32)(0x906cc8u)));
    /* 004b73c0: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004b73c3: fadd dword ptr [ebx + 0x754] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x754u));
    /* 004b73c9: fld dword ptr [ebx + 0x6f8] */ FPUSH(R_F32((u32)(r_ebx+0x6f8u)));
    /* 004b73cf: fadd dword ptr [ebx + 0x74c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x74cu));
    /* 004b73d5: fld dword ptr [ebx + 0x74c] */ FPUSH(R_F32((u32)(r_ebx+0x74cu)));
    /* 004b73db: fsub dword ptr [ebx + 0x750] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x750u));
    /* 004b73e1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004b73e3: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004b73e6: fstp dword ptr [ebx + 0x6f8] */ W_F32((u32)(r_ebx+0x6f8u), ST(0)); FPOP();
    /* 004b73ec: fstp dword ptr [ebx + 0x74c] */ W_F32((u32)(r_ebx+0x74cu), ST(0)); FPOP();
    /* 004b73f2: fsub dword ptr [0xa47aa0] */ ST(0) = ST(0) - R_F32((u32)(0xa47aa0u));
    /* 004b73f8: fsubr dword ptr [ebx + 0xc0] */ ST(0) = R_F32((u32)(r_ebx+0xc0u)) - ST(0);
    /* 004b73fe: fstp dword ptr [ebx + 0xc0] */ W_F32((u32)(r_ebx+0xc0u), ST(0)); FPOP();
    /* 004b7404: jmp 0x4b755a */ goto L_004b755a;
L_004b7409:; BB(0x004b7409);
    /* 004b7409: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b740c: jl 0x4b755a */ if ((fS!=fO)) goto L_004b755a;
L_004b7412:; BB(0x004b7412);
    /* 004b7412: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b7415: jg 0x4b755a */ if ((!fZ&&fS==fO)) goto L_004b755a;
L_004b741b:; BB(0x004b741b);
    /* 004b741b: fld dword ptr [0x906d24] */ FPUSH(R_F32((u32)(0x906d24u)));
    /* 004b7421: fcom dword ptr [ebx + 0x758] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x758u))); 
    /* 004b7427: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b7429: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b742a: jb 0x4b74a5 */ if (fC) goto L_004b74a5;
L_004b742c:; BB(0x004b742c);
    /* 004b742c: fld dword ptr [ebx + 0x754] */ FPUSH(R_F32((u32)(r_ebx+0x754u)));
    /* 004b7432: fsub dword ptr [0x906f64] */ ST(0) = ST(0) - R_F32((u32)(0x906f64u));
    /* 004b7438: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004b743a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b743c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b743e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b7440: fst dword ptr [ebx + 0x754] */ W_F32((u32)(r_ebx+0x754u), ST(0));
    /* 004b7446: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b7447: jbe 0x4b7453 */ if ((fC||fZ)) goto L_004b7453;
L_004b7449:; BB(0x004b7449);
    /* 004b7449: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004b744c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b744e: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004b7451: jmp 0x4b74ca */ goto L_004b74ca;
L_004b7453:; BB(0x004b7453);
    /* 004b7453: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b7455: fld dword ptr [0x906ccc] */ FPUSH(R_F32((u32)(0x906cccu)));
    /* 004b745b: fsub dword ptr [ebx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x40u));
    /* 004b745e: mov dword ptr [ebx + 0x758], 0x3f800000 */ W32((u32)(r_ebx+0x758u), 0x3f800000u);
    /* 004b7468: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b7469: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b746c: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4b7471u); f_0082e900();
    /* 004b7471: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b7474: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004b7478: lea ecx, [ebx + 0x678] */ r_ecx = (u32)(r_ebx+0x678u);
    /* 004b747e: mov dword ptr [esp], 0x40e00000 */ W32((u32)(r_esp), 0x40e00000u);
    /* 004b7485: mov dword ptr [esp + 8], 0x3e4ccccd */ W32((u32)(r_esp+0x8u), 0x3e4ccccdu);
    /* 004b748d: mov dword ptr [esp + 0xc], 0x3d4ccccd */ W32((u32)(r_esp+0xcu), 0x3d4ccccdu);
    /* 004b7495: call 0x434ac4 */ r_esp -= 4; W32(r_esp, 0x4b749au); f_00434ac4();
    /* 004b749a: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 004b749d: mov dword ptr [ebx + 0x754], eax */ W32((u32)(r_ebx+0x754u), r_eax);
    /* 004b74a3: jmp 0x4b74ca */ goto L_004b74ca;
L_004b74a5:; BB(0x004b74a5);
    /* 004b74a5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b74a7: lea ecx, [ebx + 0x678] */ r_ecx = (u32)(r_ebx+0x678u);
    /* 004b74ad: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x4b74b2u); f_0042cdc0();
    /* 004b74b2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b74b5: je 0x4b7561 */ if (fZ) goto L_004b7561;
L_004b74bb:; BB(0x004b74bb);
    /* 004b74bb: fld dword ptr [ebx + 0x754] */ FPUSH(R_F32((u32)(r_ebx+0x754u)));
    /* 004b74c1: fsub dword ptr [ebx + 0x690] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x690u));
    /* 004b74c7: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
L_004b74ca:; BB(0x004b74ca);
    /* 004b74ca: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b74cc: call 0x4b1c94 */ r_esp -= 4; W32(r_esp, 0x4b74d1u); f_004b1c94();
    /* 004b74d1: jmp 0x4b755a */ goto L_004b755a;
L_004b74d6:; BB(0x004b74d6);
    /* 004b74d6: fld dword ptr [ebx + 0x754] */ FPUSH(R_F32((u32)(r_ebx+0x754u)));
    /* 004b74dc: fadd dword ptr [ebx + 0x758] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x758u));
    /* 004b74e2: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004b74e5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b74e7: fst dword ptr [ebx + 0x754] */ W_F32((u32)(r_ebx+0x754u), ST(0));
    /* 004b74ed: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b74ef: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004b74f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b74f4: call 0x4b1de4 */ r_esp -= 4; W32(r_esp, 0x4b74f9u); f_004b1de4();
    /* 004b74f9: fstp dword ptr [ebx + 0x74c] */ W_F32((u32)(r_ebx+0x74cu), ST(0)); FPOP();
    /* 004b74ff: jmp 0x4b755a */ goto L_004b755a;
L_004b7501:; BB(0x004b7501);
    /* 004b7501: mov eax, dword ptr [ebx + 0x738] */ r_eax = R32((u32)(r_ebx+0x738u));
    /* 004b7507: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b750a: mov dword ptr [ebx + 0x738], eax */ W32((u32)(r_ebx+0x738u), r_eax);
    /* 004b7510: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b7513: jle 0x4b752b */ if ((fZ||fS!=fO)) goto L_004b752b;
L_004b7515:; BB(0x004b7515);
    /* 004b7515: mov dword ptr [ebx + 0x730], 1 */ W32((u32)(r_ebx+0x730u), 0x1u);
    /* 004b751f: mov eax, 4 */ r_eax = 0x4u;
    /* 004b7524: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
L_004b752b:; BB(0x004b752b);
    /* 004b752b: fld dword ptr [0x906e74] */ FPUSH(R_F32((u32)(0x906e74u)));
    /* 004b7531: fld dword ptr [ebx + 0x754] */ FPUSH(R_F32((u32)(r_ebx+0x754u)));
    /* 004b7537: fsub dword ptr [0x906f64] */ ST(0) = ST(0) - R_F32((u32)(0x906f64u));
    /* 004b753d: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004b7540: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004b7542: fchs  */ ST(0) = -ST(0);
    /* 004b7544: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004b7546: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b7548: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b7549: jb 0x4b754d */ if (fC) goto L_004b754d;
L_004b754b:; BB(0x004b754b);
    /* 004b754b: fst st(1) */ ST(1) = ST(0);
L_004b754d:; BB(0x004b754d);
    /* 004b754d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b754f: fst dword ptr [ebx + 0x754] */ W_F32((u32)(r_ebx+0x754u), ST(0));
    /* 004b7555: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b7557: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
L_004b755a:; BB(0x004b755a);
    /* 004b755a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b755d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b755e: ret 4 */ FN_RET(0x004b7040); r_esp += 8; return;
L_004b7561:; BB(0x004b7561);
    /* 004b7561: mov dword ptr [ebx + 0x730], 3 */ W32((u32)(r_ebx+0x730u), 0x3u);
    /* 004b756b: jmp 0x4b74ca */ goto L_004b74ca;
L_004b7570:; BB(0x004b7570);
    /* 004b7570: fld dword ptr [0x906e74] */ FPUSH(R_F32((u32)(0x906e74u)));
    /* 004b7576: fld dword ptr [ebx + 0x754] */ FPUSH(R_F32((u32)(r_ebx+0x754u)));
    /* 004b757c: fsub dword ptr [0x906f64] */ ST(0) = ST(0) - R_F32((u32)(0x906f64u));
    /* 004b7582: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004b7585: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004b7587: fchs  */ ST(0) = -ST(0);
    /* 004b7589: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004b758b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b758d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b758e: jb 0x4b7592 */ if (fC) goto L_004b7592;
L_004b7590:; BB(0x004b7590);
    /* 004b7590: fst st(1) */ ST(1) = ST(0);
L_004b7592:; BB(0x004b7592);
    /* 004b7592: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b7594: fst dword ptr [ebx + 0x754] */ W_F32((u32)(r_ebx+0x754u), ST(0));
    /* 004b759a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b759c: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004b759f: jmp 0x4b755a */ goto L_004b755a;
L_004b75a1:; BB(0x004b75a1);
    /* 004b75a1: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 004b75a7: fcomp dword ptr [0x906cf0] */ fx_compare(ST(0), R_F32((u32)(0x906cf0u))); FPOP();
    /* 004b75ad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b75af: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b75b0: jb 0x4b71af */ if (fC) goto L_004b71af;
L_004b75b6:; BB(0x004b75b6);
    /* 004b75b6: fld dword ptr [0x906cec] */ FPUSH(R_F32((u32)(0x906cecu)));
    /* 004b75bc: fsub dword ptr [ebx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x40u));
    /* 004b75bf: fld dword ptr [0x906d28] */ FPUSH(R_F32((u32)(0x906d28u)));
    /* 004b75c5: fld dword ptr [ebx + 0x754] */ FPUSH(R_F32((u32)(r_ebx+0x754u)));
    /* 004b75cb: fchs  */ ST(0) = -ST(0);
    /* 004b75cd: mov dword ptr [ebx + 0x734], 1 */ W32((u32)(r_ebx+0x734u), 0x1u);
    /* 004b75d7: fld dword ptr [0xa47a98] */ FPUSH(R_F32((u32)(0xa47a98u)));
    /* 004b75dd: fld dword ptr [0xa47a9c] */ FPUSH(R_F32((u32)(0xa47a9cu)));
    /* 004b75e3: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 004b75e5: fld dword ptr [0xa47a9c] */ FPUSH(R_F32((u32)(0xa47a9cu)));
    /* 004b75eb: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 004b75ed: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004b75ef: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004b75f1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b75f3: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004b75f5: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004b75f7: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004b75f9: fstp dword ptr [ebx + 0x758] */ W_F32((u32)(r_ebx+0x758u), ST(0)); FPOP();
    /* 004b75ff: mov dword ptr [ebx + 0x73c], 0 */ W32((u32)(r_ebx+0x73cu), 0x0u);
    /* 004b7609: jmp 0x4b71af */ goto L_004b71af;
L_004b760e:; BB(0x004b760e);
    /* 004b760e: mov eax, dword ptr [ebx + 0x730] */ r_eax = R32((u32)(r_ebx+0x730u));
    /* 004b7614: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7617: jne 0x4b755a */ if (!fZ) goto L_004b755a;
L_004b761d:; BB(0x004b761d);
    /* 004b761d: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b7623: mov edx, dword ptr [edx*4 + 0x9abc68] */ r_edx = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b762a: mov eax, dword ptr [ebx + 0x6bc] */ r_eax = R32((u32)(r_ebx+0x6bcu));
    /* 004b7630: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b7633: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b7639: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b763d: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b7640: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b7643: ja 0x4b7757 */ if ((!fC&&!fZ)) goto L_004b7757;
L_004b7649:; BB(0x004b7649);
    /* 004b7649: mov ecx, dword ptr [ecx*4 + 0x9059c0] */ r_ecx = R32((u32)(r_ecx*4+0x9059c0u));
    /* 004b7650: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b7757:; BB(0x004b7757);
    /* 004b7757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7758: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b775a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b775fu); f_004b5150();
    /* 004b775f: jmp 0x4b755a */ goto L_004b755a;
L_004b7764:; BB(0x004b7764);
    /* 004b7764: mov eax, dword ptr [ebx + 0x730] */ r_eax = R32((u32)(r_ebx+0x730u));
    /* 004b776a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b776d: jne 0x4b755a */ if (!fZ) goto L_004b755a;
L_004b7773:; BB(0x004b7773);
    /* 004b7773: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7775: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7777: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b7779: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b777b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b7781u); call_ind(t); }
    /* 004b7781: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b7785: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b778b: mov byte ptr [esp + 0x18], 0xa9 */ W8((u32)(r_esp+0x18u), 0xa9u);
    /* 004b7790: mov edx, 2 */ r_edx = 0x2u;
    /* 004b7795: mov byte ptr [esp + 0x19], dl */ W8((u32)(r_esp+0x19u), (u8)r_edx);
    /* 004b7799: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004b779e: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 004b77a3: mov word ptr [esp + 0x1e], bx */ W16((u32)(r_esp+0x1eu), (u16)r_ebx);
    /* 004b77a8: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004b77ac: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b77b1u); f_008003e0();
    /* 004b77b1: jmp 0x4b755a */ goto L_004b755a;
L_004b77b6:; BB(0x004b77b6);
    /* 004b77b6: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004b77b8: mov eax, 1 */ r_eax = 0x1u;
    /* 004b77bd: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004b77c4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b77c6: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4b77ccu); call_ind(t); }
    /* 004b77cc: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 004b77d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b77d2: mov esi, eax */ r_esi = r_eax;
L_004b77d4:; BB(0x004b77d4);
    /* 004b77d4: mov ecx, dword ptr [ebx + esi*4 + 0x600] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x600u));
    /* 004b77db: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b77dd: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4b77e3u); call_ind(t); }
    /* 004b77e3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b77e6: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b77e9: jl 0x4b77d4 */ if ((fS!=fO)) goto L_004b77d4;
L_004b77eb:; BB(0x004b77eb);
    /* 004b77eb: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 004b77ef: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b77f5: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b77f8: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b77fd: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b7803: mov edx, 3 */ r_edx = 0x3u;
    /* 004b7808: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b7809: mov dword ptr [ebx + 0x6c8], edx */ W32((u32)(r_ebx+0x6c8u), r_edx);
    /* 004b780f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7811: call 0x4b1e58 */ r_esp -= 4; W32(r_esp, 0x4b7816u); f_004b1e58();
    /* 004b7816: mov dword ptr [ebx + 0x74c], 0 */ W32((u32)(r_ebx+0x74cu), 0x0u);
    /* 004b7820: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b7822: mov dword ptr [ebx + 0x730], eax */ W32((u32)(r_ebx+0x730u), r_eax);
    /* 004b7828: mov dword ptr [ebx + 0x738], eax */ W32((u32)(r_ebx+0x738u), r_eax);
    /* 004b782e: mov dword ptr [ebx + 0x750], 0 */ W32((u32)(r_ebx+0x750u), 0x0u);
    /* 004b7838: mov dword ptr [ebx + 0x734], eax */ W32((u32)(r_ebx+0x734u), r_eax);
    /* 004b783e: mov dword ptr [ebx + 0x73c], eax */ W32((u32)(r_ebx+0x73cu), r_eax);
    /* 004b7844: mov dword ptr [ebx + 0x754], 0 */ W32((u32)(r_ebx+0x754u), 0x0u);
    /* 004b784e: mov dword ptr [ebx + 0x758], 0 */ W32((u32)(r_ebx+0x758u), 0x0u);
    /* 004b7858: jmp 0x4b755a */ goto L_004b755a;
}

void f_004b7652(void)
{
    FN_ENTER(0x004b7652);
    goto L_004b7652;
L_004b755a:; BB(0x004b755a);
    /* 004b755a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b755d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b755e: ret 4 */ FN_RET(0x004b7652); r_esp += 8; return;
L_004b7630:; BB(0x004b7630);
    /* 004b7630: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b7633: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b7639: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b763d: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b7640: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b7643: ja 0x4b7757 */ if ((!fC&&!fZ)) goto L_004b7757;
L_004b7649:; BB(0x004b7649);
    /* 004b7649: mov ecx, dword ptr [ecx*4 + 0x9059c0] */ r_ecx = R32((u32)(r_ecx*4+0x9059c0u));
    /* 004b7650: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b7652:; BB(0x004b7652);
    /* 004b7652: mov eax, 1 */ r_eax = 0x1u;
    /* 004b7657: jmp 0x4b7630 */ goto L_004b7630;
L_004b7757:; BB(0x004b7757);
    /* 004b7757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7758: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b775a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b775fu); f_004b5150();
    /* 004b775f: jmp 0x4b755a */ goto L_004b755a;
}

void f_004b7659(void)
{
    FN_ENTER(0x004b7659);
    goto L_004b7659;
L_004b755a:; BB(0x004b755a);
    /* 004b755a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b755d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b755e: ret 4 */ FN_RET(0x004b7659); r_esp += 8; return;
L_004b7659:; BB(0x004b7659);
    /* 004b7659: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b765f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7661: jne 0x4b766d */ if (!fZ) goto L_004b766d;
L_004b7663:; BB(0x004b7663);
    /* 004b7663: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004b7668: jmp 0x4b7757 */ goto L_004b7757;
L_004b766d:; BB(0x004b766d);
    /* 004b766d: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004b7672: jmp 0x4b7757 */ goto L_004b7757;
L_004b7757:; BB(0x004b7757);
    /* 004b7757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7758: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b775a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b775fu); f_004b5150();
    /* 004b775f: jmp 0x4b755a */ goto L_004b755a;
}

void f_004b7677(void)
{
    FN_ENTER(0x004b7677);
    goto L_004b7677;
L_004b755a:; BB(0x004b755a);
    /* 004b755a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b755d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b755e: ret 4 */ FN_RET(0x004b7677); r_esp += 8; return;
L_004b7677:; BB(0x004b7677);
    /* 004b7677: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b767d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b767f: jne 0x4b768b */ if (!fZ) goto L_004b768b;
L_004b7681:; BB(0x004b7681);
    /* 004b7681: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004b7686: jmp 0x4b7757 */ goto L_004b7757;
L_004b768b:; BB(0x004b768b);
    /* 004b768b: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004b7690: jmp 0x4b7757 */ goto L_004b7757;
L_004b7757:; BB(0x004b7757);
    /* 004b7757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7758: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b775a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b775fu); f_004b5150();
    /* 004b775f: jmp 0x4b755a */ goto L_004b755a;
}

void f_004b7695(void)
{
    FN_ENTER(0x004b7695);
    goto L_004b7695;
L_004b755a:; BB(0x004b755a);
    /* 004b755a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b755d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b755e: ret 4 */ FN_RET(0x004b7695); r_esp += 8; return;
L_004b7695:; BB(0x004b7695);
    /* 004b7695: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b769b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b769d: jne 0x4b76a9 */ if (!fZ) goto L_004b76a9;
L_004b769f:; BB(0x004b769f);
    /* 004b769f: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004b76a4: jmp 0x4b7757 */ goto L_004b7757;
L_004b76a9:; BB(0x004b76a9);
    /* 004b76a9: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004b76ae: jmp 0x4b7757 */ goto L_004b7757;
L_004b7757:; BB(0x004b7757);
    /* 004b7757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7758: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b775a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b775fu); f_004b5150();
    /* 004b775f: jmp 0x4b755a */ goto L_004b755a;
}

void f_004b76b3(void)
{
    FN_ENTER(0x004b76b3);
    goto L_004b76b3;
L_004b755a:; BB(0x004b755a);
    /* 004b755a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b755d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b755e: ret 4 */ FN_RET(0x004b76b3); r_esp += 8; return;
L_004b76b3:; BB(0x004b76b3);
    /* 004b76b3: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b76b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b76bb: jne 0x4b76c7 */ if (!fZ) goto L_004b76c7;
L_004b76bd:; BB(0x004b76bd);
    /* 004b76bd: mov eax, 0xf */ r_eax = 0xfu;
    /* 004b76c2: jmp 0x4b7757 */ goto L_004b7757;
L_004b76c7:; BB(0x004b76c7);
    /* 004b76c7: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004b76cc: jmp 0x4b7757 */ goto L_004b7757;
L_004b7757:; BB(0x004b7757);
    /* 004b7757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7758: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b775a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b775fu); f_004b5150();
    /* 004b775f: jmp 0x4b755a */ goto L_004b755a;
}

void f_004b76d1(void)
{
    FN_ENTER(0x004b76d1);
    goto L_004b76d1;
L_004b755a:; BB(0x004b755a);
    /* 004b755a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b755d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b755e: ret 4 */ FN_RET(0x004b76d1); r_esp += 8; return;
L_004b76d1:; BB(0x004b76d1);
    /* 004b76d1: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b76d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b76d9: jne 0x4b76e2 */ if (!fZ) goto L_004b76e2;
L_004b76db:; BB(0x004b76db);
    /* 004b76db: mov eax, 4 */ r_eax = 0x4u;
    /* 004b76e0: jmp 0x4b7757 */ goto L_004b7757;
L_004b76e2:; BB(0x004b76e2);
    /* 004b76e2: mov eax, 0xa */ r_eax = 0xau;
    /* 004b76e7: jmp 0x4b7757 */ goto L_004b7757;
L_004b7757:; BB(0x004b7757);
    /* 004b7757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7758: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b775a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b775fu); f_004b5150();
    /* 004b775f: jmp 0x4b755a */ goto L_004b755a;
}

void f_004b76e9(void)
{
    FN_ENTER(0x004b76e9);
    goto L_004b76e9;
L_004b755a:; BB(0x004b755a);
    /* 004b755a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b755d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b755e: ret 4 */ FN_RET(0x004b76e9); r_esp += 8; return;
L_004b76e9:; BB(0x004b76e9);
    /* 004b76e9: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b76ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b76f1: jne 0x4b76fa */ if (!fZ) goto L_004b76fa;
L_004b76f3:; BB(0x004b76f3);
    /* 004b76f3: mov eax, 3 */ r_eax = 0x3u;
    /* 004b76f8: jmp 0x4b7757 */ goto L_004b7757;
L_004b76fa:; BB(0x004b76fa);
    /* 004b76fa: mov eax, 0xb */ r_eax = 0xbu;
    /* 004b76ff: jmp 0x4b7757 */ goto L_004b7757;
L_004b7757:; BB(0x004b7757);
    /* 004b7757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7758: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b775a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b775fu); f_004b5150();
    /* 004b775f: jmp 0x4b755a */ goto L_004b755a;
}

void f_004b7701(void)
{
    FN_ENTER(0x004b7701);
    goto L_004b7701;
L_004b755a:; BB(0x004b755a);
    /* 004b755a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b755d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b755e: ret 4 */ FN_RET(0x004b7701); r_esp += 8; return;
L_004b7701:; BB(0x004b7701);
    /* 004b7701: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7703: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b7708u); f_00520bf4();
    /* 004b7708: fcomp dword ptr [0x906d24] */ fx_compare(ST(0), R_F32((u32)(0x906d24u))); FPOP();
    /* 004b770e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b7710: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b7711: jbe 0x4b771a */ if ((fC||fZ)) goto L_004b771a;
L_004b7713:; BB(0x004b7713);
    /* 004b7713: mov eax, 0xc */ r_eax = 0xcu;
    /* 004b7718: jmp 0x4b7757 */ goto L_004b7757;
L_004b771a:; BB(0x004b771a);
    /* 004b771a: mov eax, 0xe */ r_eax = 0xeu;
    /* 004b771f: jmp 0x4b7757 */ goto L_004b7757;
L_004b7757:; BB(0x004b7757);
    /* 004b7757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7758: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b775a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b775fu); f_004b5150();
    /* 004b775f: jmp 0x4b755a */ goto L_004b755a;
}

void f_004b7721(void)
{
    FN_ENTER(0x004b7721);
    goto L_004b7721;
L_004b755a:; BB(0x004b755a);
    /* 004b755a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b755d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b755e: ret 4 */ FN_RET(0x004b7721); r_esp += 8; return;
L_004b7721:; BB(0x004b7721);
    /* 004b7721: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b7727: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7729: jne 0x4b7732 */ if (!fZ) goto L_004b7732;
L_004b772b:; BB(0x004b772b);
    /* 004b772b: mov eax, 5 */ r_eax = 0x5u;
    /* 004b7730: jmp 0x4b7757 */ goto L_004b7757;
L_004b7732:; BB(0x004b7732);
    /* 004b7732: mov eax, 9 */ r_eax = 0x9u;
    /* 004b7737: jmp 0x4b7757 */ goto L_004b7757;
L_004b7757:; BB(0x004b7757);
    /* 004b7757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7758: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b775a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b775fu); f_004b5150();
    /* 004b775f: jmp 0x4b755a */ goto L_004b755a;
}

void f_004b7739(void)
{
    FN_ENTER(0x004b7739);
    goto L_004b7739;
L_004b755a:; BB(0x004b755a);
    /* 004b755a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b755d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b755e: ret 4 */ FN_RET(0x004b7739); r_esp += 8; return;
L_004b7739:; BB(0x004b7739);
    /* 004b7739: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b773b: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b7740u); f_00520bf4();
    /* 004b7740: fcomp dword ptr [0x906d24] */ fx_compare(ST(0), R_F32((u32)(0x906d24u))); FPOP();
    /* 004b7746: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b7748: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b7749: jbe 0x4b7752 */ if ((fC||fZ)) goto L_004b7752;
L_004b774b:; BB(0x004b774b);
    /* 004b774b: mov eax, 8 */ r_eax = 0x8u;
    /* 004b7750: jmp 0x4b7757 */ goto L_004b7757;
L_004b7752:; BB(0x004b7752);
    /* 004b7752: mov eax, 6 */ r_eax = 0x6u;
L_004b7757:; BB(0x004b7757);
    /* 004b7757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7758: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b775a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b775fu); f_004b5150();
    /* 004b775f: jmp 0x4b755a */ goto L_004b755a;
}

void f_004b7757(void)
{
    FN_ENTER(0x004b7757);
    goto L_004b7757;
L_004b755a:; BB(0x004b755a);
    /* 004b755a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b755d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b755e: ret 4 */ FN_RET(0x004b7757); r_esp += 8; return;
L_004b7757:; BB(0x004b7757);
    /* 004b7757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7758: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b775a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b775fu); f_004b5150();
    /* 004b775f: jmp 0x4b755a */ goto L_004b755a;
}

void f_004b7860(void) /* sub_4B7860 */
{
    FN_ENTER(0x004b7860);
    /* 004b7860: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b7861: sub esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b7867: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004b7869: mov eax, dword ptr [esp + 0xac] */ r_eax = R32((u32)(r_esp+0xacu));
    /* 004b7870: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7873: je 0x4b7fb4 */ if (fZ) goto L_004b7fb4;
L_004b7879:; BB(0x004b7879);
    /* 004b7879: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b787c: je 0x4b78d3 */ if (fZ) goto L_004b78d3;
L_004b787e:; BB(0x004b787e);
    /* 004b787e: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7881: je 0x4b78c9 */ if (fZ) goto L_004b78c9;
L_004b7883:; BB(0x004b7883);
    /* 004b7883: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7886: je 0x4b78c9 */ if (fZ) goto L_004b78c9;
L_004b7888:; BB(0x004b7888);
    /* 004b7888: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b788a: jne 0x4b78c9 */ if (!fZ) goto L_004b78c9;
L_004b788c:; BB(0x004b788c);
    /* 004b788c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b788e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b7893u); f_007aa094();
    /* 004b7893: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 004b7899: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004b789b: jne 0x4b78c9 */ if (!fZ) goto L_004b78c9;
L_004b789d:; BB(0x004b789d);
    /* 004b789d: fld dword ptr [0x906cc4] */ FPUSH(R_F32((u32)(0x906cc4u)));
    /* 004b78a3: fadd dword ptr [ebx + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xc8u));
    /* 004b78a9: fcom dword ptr [0x906cb8] */ fx_compare(ST(0), R_F32((u32)(0x906cb8u))); 
    /* 004b78af: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b78b1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b78b2: jae 0x4b78c3 */ if (!fC) goto L_004b78c3;
L_004b78b4:; BB(0x004b78b4);
    /* 004b78b4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b78b6: mov eax, 0x3f19999a */ r_eax = 0x3f19999au;
    /* 004b78bb: mov dword ptr [ebx + 0xc8], eax */ W32((u32)(r_ebx+0xc8u), r_eax);
    /* 004b78c1: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b78c3:; BB(0x004b78c3);
    /* 004b78c3: fstp dword ptr [ebx + 0xc8] */ W_F32((u32)(r_ebx+0xc8u), ST(0)); FPOP();
L_004b78c9:; BB(0x004b78c9);
    /* 004b78c9: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b78cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b78d0: ret 4 */ FN_RET(0x004b7860); r_esp += 8; return;
L_004b78d3:; BB(0x004b78d3);
    /* 004b78d3: mov eax, dword ptr [ebx + 0x6c8] */ r_eax = R32((u32)(r_ebx+0x6c8u));
    /* 004b78d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b78db: je 0x4b7d80 */ if (fZ) goto L_004b7d80;
L_004b78e1:; BB(0x004b78e1);
    /* 004b78e1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b78e4: je 0x4b7c7c */ if (fZ) goto L_004b7c7c;
L_004b78ea:; BB(0x004b78ea);
    /* 004b78ea: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b78ed: jne 0x4b7ad4 */ if (!fZ) goto L_004b7ad4;
L_004b78f3:; BB(0x004b78f3);
    /* 004b78f3: mov eax, dword ptr [ebx + 0x62c] */ r_eax = R32((u32)(r_ebx+0x62cu));
    /* 004b78f9: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004b78fc: test dword ptr [0xa0f668], eax */ {  u32 a = R32((u32)(0xa0f668u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7902: jne 0x4b7a90 */ if (!fZ) goto L_004b7a90;
L_004b7908:; BB(0x004b7908);
    /* 004b7908: test dword ptr [0xa0f670], eax */ {  u32 a = R32((u32)(0xa0f670u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b790e: jne 0x4b7a4c */ if (!fZ) goto L_004b7a4c;
L_004b7914:; BB(0x004b7914);
    /* 004b7914: test dword ptr [0xa0f664], eax */ {  u32 a = R32((u32)(0xa0f664u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b791a: jne 0x4b7a08 */ if (!fZ) goto L_004b7a08;
L_004b7920:; BB(0x004b7920);
    /* 004b7920: test dword ptr [0xa0f67c], eax */ {  u32 a = R32((u32)(0xa0f67cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7926: jne 0x4b79c4 */ if (!fZ) goto L_004b79c4;
L_004b792c:; BB(0x004b792c);
    /* 004b792c: test dword ptr [0xa0f674], eax */ {  u32 a = R32((u32)(0xa0f674u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7932: jne 0x4b7980 */ if (!fZ) goto L_004b7980;
L_004b7934:; BB(0x004b7934);
    /* 004b7934: test dword ptr [0xa0f678], eax */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b793a: je 0x4b78c9 */ if (fZ) goto L_004b78c9;
L_004b793c:; BB(0x004b793c);
    /* 004b793c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b793e: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 004b7940: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b7942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7944: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b794au); call_ind(t); }
    /* 004b794a: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b794e: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b7954: mov byte ptr [esp + 0x28], 0xa9 */ W8((u32)(r_esp+0x28u), 0xa9u);
    /* 004b7959: mov edx, 0x1b */ r_edx = 0x1bu;
    /* 004b795e: mov byte ptr [esp + 0x29], 2 */ W8((u32)(r_esp+0x29u), 0x2u);
    /* 004b7963: mov word ptr [esp + 0x2a], ax */ W16((u32)(r_esp+0x2au), (u16)r_eax);
    /* 004b7968: mov word ptr [esp + 0x2c], dx */ W16((u32)(r_esp+0x2cu), (u16)r_edx);
    /* 004b796d: mov word ptr [esp + 0x2e], bx */ W16((u32)(r_esp+0x2eu), (u16)r_ebx);
    /* 004b7972: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 004b7976: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b797bu); f_008003e0();
    /* 004b797b: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b7980:; BB(0x004b7980);
    /* 004b7980: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7982: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7984: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b7986: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7988: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b798eu); call_ind(t); }
    /* 004b798e: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b7992: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b7998: mov byte ptr [esp + 0x30], 0xa9 */ W8((u32)(r_esp+0x30u), 0xa9u);
    /* 004b799d: mov edx, 0x10 */ r_edx = 0x10u;
    /* 004b79a2: mov byte ptr [esp + 0x31], 2 */ W8((u32)(r_esp+0x31u), 0x2u);
    /* 004b79a7: mov word ptr [esp + 0x32], ax */ W16((u32)(r_esp+0x32u), (u16)r_eax);
    /* 004b79ac: mov word ptr [esp + 0x34], dx */ W16((u32)(r_esp+0x34u), (u16)r_edx);
    /* 004b79b1: mov word ptr [esp + 0x36], bx */ W16((u32)(r_esp+0x36u), (u16)r_ebx);
    /* 004b79b6: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 004b79ba: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b79bfu); f_008003e0();
    /* 004b79bf: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b79c4:; BB(0x004b79c4);
    /* 004b79c4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b79c6: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004b79c8: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b79ca: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b79cc: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b79d2u); call_ind(t); }
    /* 004b79d2: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b79d6: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b79dc: mov byte ptr [esp + 0x38], 0xa9 */ W8((u32)(r_esp+0x38u), 0xa9u);
    /* 004b79e1: mov edx, 0x12 */ r_edx = 0x12u;
    /* 004b79e6: mov byte ptr [esp + 0x39], 2 */ W8((u32)(r_esp+0x39u), 0x2u);
    /* 004b79eb: mov word ptr [esp + 0x3a], ax */ W16((u32)(r_esp+0x3au), (u16)r_eax);
    /* 004b79f0: mov word ptr [esp + 0x3c], dx */ W16((u32)(r_esp+0x3cu), (u16)r_edx);
    /* 004b79f5: mov word ptr [esp + 0x3e], bx */ W16((u32)(r_esp+0x3eu), (u16)r_ebx);
    /* 004b79fa: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 004b79fe: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b7a03u); f_008003e0();
    /* 004b7a03: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b7a08:; BB(0x004b7a08);
    /* 004b7a08: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7a0a: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004b7a0c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b7a0e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7a10: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b7a16u); call_ind(t); }
    /* 004b7a16: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b7a1a: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b7a20: mov byte ptr [esp + 0x40], 0xa9 */ W8((u32)(r_esp+0x40u), 0xa9u);
    /* 004b7a25: mov edx, 0xb */ r_edx = 0xbu;
    /* 004b7a2a: mov byte ptr [esp + 0x41], 2 */ W8((u32)(r_esp+0x41u), 0x2u);
    /* 004b7a2f: mov word ptr [esp + 0x42], ax */ W16((u32)(r_esp+0x42u), (u16)r_eax);
    /* 004b7a34: mov word ptr [esp + 0x44], dx */ W16((u32)(r_esp+0x44u), (u16)r_edx);
    /* 004b7a39: mov word ptr [esp + 0x46], bx */ W16((u32)(r_esp+0x46u), (u16)r_ebx);
    /* 004b7a3e: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 004b7a42: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b7a47u); f_008003e0();
    /* 004b7a47: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b7a4c:; BB(0x004b7a4c);
    /* 004b7a4c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7a4e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004b7a50: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b7a52: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7a54: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b7a5au); call_ind(t); }
    /* 004b7a5a: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b7a5e: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b7a64: mov byte ptr [esp + 0x48], 0xa9 */ W8((u32)(r_esp+0x48u), 0xa9u);
    /* 004b7a69: mov edx, 0xa */ r_edx = 0xau;
    /* 004b7a6e: mov byte ptr [esp + 0x49], 2 */ W8((u32)(r_esp+0x49u), 0x2u);
    /* 004b7a73: mov word ptr [esp + 0x4a], ax */ W16((u32)(r_esp+0x4au), (u16)r_eax);
    /* 004b7a78: mov word ptr [esp + 0x4c], dx */ W16((u32)(r_esp+0x4cu), (u16)r_edx);
    /* 004b7a7d: mov word ptr [esp + 0x4e], bx */ W16((u32)(r_esp+0x4eu), (u16)r_ebx);
    /* 004b7a82: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 004b7a86: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b7a8bu); f_008003e0();
    /* 004b7a8b: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b7a90:; BB(0x004b7a90);
    /* 004b7a90: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7a92: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7a94: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b7a96: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7a98: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b7a9eu); call_ind(t); }
    /* 004b7a9e: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b7aa2: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b7aa8: mov byte ptr [esp + 0x50], 0xa9 */ W8((u32)(r_esp+0x50u), 0xa9u);
    /* 004b7aad: mov edx, 9 */ r_edx = 0x9u;
    /* 004b7ab2: mov byte ptr [esp + 0x51], 2 */ W8((u32)(r_esp+0x51u), 0x2u);
    /* 004b7ab7: mov word ptr [esp + 0x52], ax */ W16((u32)(r_esp+0x52u), (u16)r_eax);
    /* 004b7abc: mov word ptr [esp + 0x54], dx */ W16((u32)(r_esp+0x54u), (u16)r_edx);
    /* 004b7ac1: mov word ptr [esp + 0x56], bx */ W16((u32)(r_esp+0x56u), (u16)r_ebx);
    /* 004b7ac6: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 004b7aca: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b7acfu); f_008003e0();
    /* 004b7acf: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b7ad4:; BB(0x004b7ad4);
    /* 004b7ad4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7ad7: jne 0x4b78c9 */ if (!fZ) goto L_004b78c9;
L_004b7add:; BB(0x004b7add);
    /* 004b7add: mov eax, dword ptr [ebx + 0x62c] */ r_eax = R32((u32)(r_ebx+0x62cu));
    /* 004b7ae3: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004b7ae6: test dword ptr [0xa0f670], eax */ {  u32 a = R32((u32)(0xa0f670u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7aec: jne 0x4b7c38 */ if (!fZ) goto L_004b7c38;
L_004b7af2:; BB(0x004b7af2);
    /* 004b7af2: test dword ptr [0xa0f664], eax */ {  u32 a = R32((u32)(0xa0f664u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7af8: jne 0x4b7bf4 */ if (!fZ) goto L_004b7bf4;
L_004b7afe:; BB(0x004b7afe);
    /* 004b7afe: test dword ptr [0xa0f66c], eax */ {  u32 a = R32((u32)(0xa0f66cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7b04: jne 0x4b7bb0 */ if (!fZ) goto L_004b7bb0;
L_004b7b0a:; BB(0x004b7b0a);
    /* 004b7b0a: test dword ptr [0xa0f674], eax */ {  u32 a = R32((u32)(0xa0f674u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7b10: jne 0x4b7b6c */ if (!fZ) goto L_004b7b6c;
L_004b7b12:; BB(0x004b7b12);
    /* 004b7b12: test dword ptr [0xa0f680], eax */ {  u32 a = R32((u32)(0xa0f680u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7b18: jne 0x4b78c9 */ if (!fZ) goto L_004b78c9;
L_004b7b1e:; BB(0x004b7b1e);
    /* 004b7b1e: test dword ptr [0xa0f678], eax */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7b24: je 0x4b78c9 */ if (fZ) goto L_004b78c9;
L_004b7b2a:; BB(0x004b7b2a);
    /* 004b7b2a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7b2c: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b7b2e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b7b30: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7b32: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b7b38u); call_ind(t); }
    /* 004b7b38: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b7b3c: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b7b42: mov byte ptr [esp], 0xa9 */ W8((u32)(r_esp), 0xa9u);
    /* 004b7b46: mov edx, 0x1c */ r_edx = 0x1cu;
    /* 004b7b4b: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 004b7b50: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004b7b55: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004b7b5a: mov word ptr [esp + 6], bx */ W16((u32)(r_esp+0x6u), (u16)r_ebx);
    /* 004b7b5f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004b7b62: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b7b67u); f_008003e0();
    /* 004b7b67: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b7b6c:; BB(0x004b7b6c);
    /* 004b7b6c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7b6e: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7b70: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b7b72: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7b74: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b7b7au); call_ind(t); }
    /* 004b7b7a: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b7b7e: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b7b84: mov byte ptr [esp + 8], 0xa9 */ W8((u32)(r_esp+0x8u), 0xa9u);
    /* 004b7b89: mov edx, 0x17 */ r_edx = 0x17u;
    /* 004b7b8e: mov byte ptr [esp + 9], 2 */ W8((u32)(r_esp+0x9u), 0x2u);
    /* 004b7b93: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 004b7b98: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 004b7b9d: mov word ptr [esp + 0xe], bx */ W16((u32)(r_esp+0xeu), (u16)r_ebx);
    /* 004b7ba2: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 004b7ba6: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b7babu); f_008003e0();
    /* 004b7bab: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b7bb0:; BB(0x004b7bb0);
    /* 004b7bb0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7bb2: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004b7bb4: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b7bb6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7bb8: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b7bbeu); call_ind(t); }
    /* 004b7bbe: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b7bc2: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b7bc8: mov byte ptr [esp + 0x10], 0xa9 */ W8((u32)(r_esp+0x10u), 0xa9u);
    /* 004b7bcd: mov edx, 0xe */ r_edx = 0xeu;
    /* 004b7bd2: mov byte ptr [esp + 0x11], 2 */ W8((u32)(r_esp+0x11u), 0x2u);
    /* 004b7bd7: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 004b7bdc: mov word ptr [esp + 0x14], dx */ W16((u32)(r_esp+0x14u), (u16)r_edx);
    /* 004b7be1: mov word ptr [esp + 0x16], bx */ W16((u32)(r_esp+0x16u), (u16)r_ebx);
    /* 004b7be6: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 004b7bea: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b7befu); f_008003e0();
    /* 004b7bef: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b7bf4:; BB(0x004b7bf4);
    /* 004b7bf4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7bf6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 004b7bf8: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b7bfa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7bfc: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b7c02u); call_ind(t); }
    /* 004b7c02: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b7c06: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b7c0c: mov byte ptr [esp + 0x18], 0xa9 */ W8((u32)(r_esp+0x18u), 0xa9u);
    /* 004b7c11: mov edx, 0xd */ r_edx = 0xdu;
    /* 004b7c16: mov byte ptr [esp + 0x19], 2 */ W8((u32)(r_esp+0x19u), 0x2u);
    /* 004b7c1b: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004b7c20: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 004b7c25: mov word ptr [esp + 0x1e], bx */ W16((u32)(r_esp+0x1eu), (u16)r_ebx);
    /* 004b7c2a: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004b7c2e: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b7c33u); f_008003e0();
    /* 004b7c33: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b7c38:; BB(0x004b7c38);
    /* 004b7c38: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7c3a: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004b7c3c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b7c3e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7c40: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b7c46u); call_ind(t); }
    /* 004b7c46: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b7c4a: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b7c50: mov byte ptr [esp + 0x20], 0xa9 */ W8((u32)(r_esp+0x20u), 0xa9u);
    /* 004b7c55: mov edx, 0xc */ r_edx = 0xcu;
    /* 004b7c5a: mov byte ptr [esp + 0x21], 2 */ W8((u32)(r_esp+0x21u), 0x2u);
    /* 004b7c5f: mov word ptr [esp + 0x22], ax */ W16((u32)(r_esp+0x22u), (u16)r_eax);
    /* 004b7c64: mov word ptr [esp + 0x24], dx */ W16((u32)(r_esp+0x24u), (u16)r_edx);
    /* 004b7c69: mov word ptr [esp + 0x26], bx */ W16((u32)(r_esp+0x26u), (u16)r_ebx);
    /* 004b7c6e: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 004b7c72: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b7c77u); f_008003e0();
    /* 004b7c77: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b7c7c:; BB(0x004b7c7c);
    /* 004b7c7c: mov eax, dword ptr [ebx + 0x62c] */ r_eax = R32((u32)(r_ebx+0x62cu));
    /* 004b7c82: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004b7c85: test dword ptr [0xa0f66c], eax */ {  u32 a = R32((u32)(0xa0f66cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7c8b: jne 0x4b7d39 */ if (!fZ) goto L_004b7d39;
L_004b7c91:; BB(0x004b7c91);
    /* 004b7c91: test dword ptr [0xa0f668], eax */ {  u32 a = R32((u32)(0xa0f668u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7c97: jne 0x4b78c9 */ if (!fZ) goto L_004b78c9;
L_004b7c9d:; BB(0x004b7c9d);
    /* 004b7c9d: test dword ptr [0xa0f670], eax */ {  u32 a = R32((u32)(0xa0f670u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7ca3: jne 0x4b7cf5 */ if (!fZ) goto L_004b7cf5;
L_004b7ca5:; BB(0x004b7ca5);
    /* 004b7ca5: test dword ptr [0xa0f678], eax */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7cab: je 0x4b78c9 */ if (fZ) goto L_004b78c9;
L_004b7cb1:; BB(0x004b7cb1);
    /* 004b7cb1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7cb3: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 004b7cb5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b7cb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7cb9: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b7cbfu); call_ind(t); }
    /* 004b7cbf: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b7cc3: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b7cc9: mov byte ptr [esp + 0x58], 0xa9 */ W8((u32)(r_esp+0x58u), 0xa9u);
    /* 004b7cce: mov edx, 0x1b */ r_edx = 0x1bu;
    /* 004b7cd3: mov byte ptr [esp + 0x59], 2 */ W8((u32)(r_esp+0x59u), 0x2u);
    /* 004b7cd8: mov word ptr [esp + 0x5a], ax */ W16((u32)(r_esp+0x5au), (u16)r_eax);
    /* 004b7cdd: mov word ptr [esp + 0x5c], dx */ W16((u32)(r_esp+0x5cu), (u16)r_edx);
    /* 004b7ce2: mov word ptr [esp + 0x5e], bx */ W16((u32)(r_esp+0x5eu), (u16)r_ebx);
    /* 004b7ce7: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 004b7ceb: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b7cf0u); f_008003e0();
    /* 004b7cf0: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b7cf5:; BB(0x004b7cf5);
    /* 004b7cf5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7cf7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7cf9: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b7cfb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7cfd: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b7d03u); call_ind(t); }
    /* 004b7d03: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b7d07: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b7d0d: mov byte ptr [esp + 0x60], 0xa9 */ W8((u32)(r_esp+0x60u), 0xa9u);
    /* 004b7d12: mov edx, 8 */ r_edx = 0x8u;
    /* 004b7d17: mov byte ptr [esp + 0x61], 2 */ W8((u32)(r_esp+0x61u), 0x2u);
    /* 004b7d1c: mov word ptr [esp + 0x62], ax */ W16((u32)(r_esp+0x62u), (u16)r_eax);
    /* 004b7d21: mov word ptr [esp + 0x64], dx */ W16((u32)(r_esp+0x64u), (u16)r_edx);
    /* 004b7d26: mov word ptr [esp + 0x66], bx */ W16((u32)(r_esp+0x66u), (u16)r_ebx);
    /* 004b7d2b: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 004b7d2f: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b7d34u); f_008003e0();
    /* 004b7d34: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b7d39:; BB(0x004b7d39);
    /* 004b7d39: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004b7d3b: mov eax, 6 */ r_eax = 0x6u;
    /* 004b7d40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7d41: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7d43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7d44: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4b7d4au); call_ind(t); }
    /* 004b7d4a: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b7d4e: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b7d54: mov byte ptr [esp + 0x68], 0xa9 */ W8((u32)(r_esp+0x68u), 0xa9u);
    /* 004b7d59: mov edx, 6 */ r_edx = 0x6u;
    /* 004b7d5e: mov byte ptr [esp + 0x69], 2 */ W8((u32)(r_esp+0x69u), 0x2u);
    /* 004b7d63: mov word ptr [esp + 0x6a], ax */ W16((u32)(r_esp+0x6au), (u16)r_eax);
    /* 004b7d68: mov word ptr [esp + 0x6c], dx */ W16((u32)(r_esp+0x6cu), (u16)r_edx);
    /* 004b7d6d: mov word ptr [esp + 0x6e], bx */ W16((u32)(r_esp+0x6eu), (u16)r_ebx);
    /* 004b7d72: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 004b7d76: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b7d7bu); f_008003e0();
    /* 004b7d7b: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b7d80:; BB(0x004b7d80);
    /* 004b7d80: mov eax, dword ptr [ebx + 0x62c] */ r_eax = R32((u32)(r_ebx+0x62cu));
    /* 004b7d86: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004b7d89: test dword ptr [0xa0f664], eax */ {  u32 a = R32((u32)(0xa0f664u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7d8f: jne 0x4b7f5e */ if (!fZ) goto L_004b7f5e;
L_004b7d95:; BB(0x004b7d95);
    /* 004b7d95: test dword ptr [0xa0f66c], eax */ {  u32 a = R32((u32)(0xa0f66cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7d9b: jne 0x4b7f08 */ if (!fZ) goto L_004b7f08;
L_004b7da1:; BB(0x004b7da1);
    /* 004b7da1: test dword ptr [0xa0f668], eax */ {  u32 a = R32((u32)(0xa0f668u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7da7: jne 0x4b7eb2 */ if (!fZ) goto L_004b7eb2;
L_004b7dad:; BB(0x004b7dad);
    /* 004b7dad: test dword ptr [0xa0f67c], eax */ {  u32 a = R32((u32)(0xa0f67cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7db3: jne 0x4b7e5c */ if (!fZ) goto L_004b7e5c;
L_004b7db9:; BB(0x004b7db9);
    /* 004b7db9: test dword ptr [0xa0f674], eax */ {  u32 a = R32((u32)(0xa0f674u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7dbf: jne 0x4b7e18 */ if (!fZ) goto L_004b7e18;
L_004b7dc1:; BB(0x004b7dc1);
    /* 004b7dc1: test dword ptr [0xa0f678], eax */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7dc7: je 0x4b78c9 */ if (fZ) goto L_004b78c9;
L_004b7dcd:; BB(0x004b7dcd);
    /* 004b7dcd: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b7dcf: mov dword ptr [ebx + 0x40], 0xc3520000 */ W32((u32)(r_ebx+0x40u), 0xc3520000u);
    /* 004b7dd6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7dd8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7dda: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7ddc: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b7de2u); call_ind(t); }
    /* 004b7de2: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b7de6: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b7dec: mov byte ptr [esp + 0x70], 0xa9 */ W8((u32)(r_esp+0x70u), 0xa9u);
    /* 004b7df1: mov edx, 1 */ r_edx = 0x1u;
    /* 004b7df6: mov byte ptr [esp + 0x71], 2 */ W8((u32)(r_esp+0x71u), 0x2u);
    /* 004b7dfb: mov word ptr [esp + 0x72], ax */ W16((u32)(r_esp+0x72u), (u16)r_eax);
    /* 004b7e00: mov word ptr [esp + 0x74], dx */ W16((u32)(r_esp+0x74u), (u16)r_edx);
    /* 004b7e05: mov word ptr [esp + 0x76], bx */ W16((u32)(r_esp+0x76u), (u16)r_ebx);
    /* 004b7e0a: lea ecx, [esp + 0x70] */ r_ecx = (u32)(r_esp+0x70u);
    /* 004b7e0e: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b7e13u); f_008003e0();
    /* 004b7e13: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b7e18:; BB(0x004b7e18);
    /* 004b7e18: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7e1a: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004b7e1c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b7e1e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7e20: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b7e26u); call_ind(t); }
    /* 004b7e26: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b7e2a: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b7e30: mov byte ptr [esp + 0x78], 0xa9 */ W8((u32)(r_esp+0x78u), 0xa9u);
    /* 004b7e35: mov edx, 0xf */ r_edx = 0xfu;
    /* 004b7e3a: mov byte ptr [esp + 0x79], 2 */ W8((u32)(r_esp+0x79u), 0x2u);
    /* 004b7e3f: mov word ptr [esp + 0x7a], ax */ W16((u32)(r_esp+0x7au), (u16)r_eax);
    /* 004b7e44: mov word ptr [esp + 0x7c], dx */ W16((u32)(r_esp+0x7cu), (u16)r_edx);
    /* 004b7e49: mov word ptr [esp + 0x7e], bx */ W16((u32)(r_esp+0x7eu), (u16)r_ebx);
    /* 004b7e4e: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 004b7e52: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b7e57u); f_008003e0();
    /* 004b7e57: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b7e5c:; BB(0x004b7e5c);
    /* 004b7e5c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7e5e: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7e60: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b7e62: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7e64: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b7e6au); call_ind(t); }
    /* 004b7e6a: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b7e6e: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b7e74: mov byte ptr [esp + 0x80], 0xa9 */ W8((u32)(r_esp+0x80u), 0xa9u);
    /* 004b7e7c: mov edx, 0x11 */ r_edx = 0x11u;
    /* 004b7e81: mov byte ptr [esp + 0x81], 2 */ W8((u32)(r_esp+0x81u), 0x2u);
    /* 004b7e89: mov word ptr [esp + 0x82], ax */ W16((u32)(r_esp+0x82u), (u16)r_eax);
    /* 004b7e91: mov word ptr [esp + 0x84], dx */ W16((u32)(r_esp+0x84u), (u16)r_edx);
    /* 004b7e99: mov word ptr [esp + 0x86], bx */ W16((u32)(r_esp+0x86u), (u16)r_ebx);
    /* 004b7ea1: lea ecx, [esp + 0x80] */ r_ecx = (u32)(r_esp+0x80u);
    /* 004b7ea8: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b7eadu); f_008003e0();
    /* 004b7ead: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b7eb2:; BB(0x004b7eb2);
    /* 004b7eb2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7eb4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7eb6: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b7eb8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7eba: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b7ec0u); call_ind(t); }
    /* 004b7ec0: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b7ec4: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b7eca: mov byte ptr [esp + 0x88], 0xa9 */ W8((u32)(r_esp+0x88u), 0xa9u);
    /* 004b7ed2: mov edx, 5 */ r_edx = 0x5u;
    /* 004b7ed7: mov byte ptr [esp + 0x89], 2 */ W8((u32)(r_esp+0x89u), 0x2u);
    /* 004b7edf: mov word ptr [esp + 0x8a], ax */ W16((u32)(r_esp+0x8au), (u16)r_eax);
    /* 004b7ee7: mov word ptr [esp + 0x8c], dx */ W16((u32)(r_esp+0x8cu), (u16)r_edx);
    /* 004b7eef: mov word ptr [esp + 0x8e], bx */ W16((u32)(r_esp+0x8eu), (u16)r_ebx);
    /* 004b7ef7: lea ecx, [esp + 0x88] */ r_ecx = (u32)(r_esp+0x88u);
    /* 004b7efe: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b7f03u); f_008003e0();
    /* 004b7f03: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b7f08:; BB(0x004b7f08);
    /* 004b7f08: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7f0a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7f0c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b7f0e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7f10: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b7f16u); call_ind(t); }
    /* 004b7f16: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b7f1a: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b7f20: mov byte ptr [esp + 0x90], 0xa9 */ W8((u32)(r_esp+0x90u), 0xa9u);
    /* 004b7f28: mov edx, 4 */ r_edx = 0x4u;
    /* 004b7f2d: mov byte ptr [esp + 0x91], 2 */ W8((u32)(r_esp+0x91u), 0x2u);
    /* 004b7f35: mov word ptr [esp + 0x92], ax */ W16((u32)(r_esp+0x92u), (u16)r_eax);
    /* 004b7f3d: mov word ptr [esp + 0x94], dx */ W16((u32)(r_esp+0x94u), (u16)r_edx);
    /* 004b7f45: mov word ptr [esp + 0x96], bx */ W16((u32)(r_esp+0x96u), (u16)r_ebx);
    /* 004b7f4d: lea ecx, [esp + 0x90] */ r_ecx = (u32)(r_esp+0x90u);
    /* 004b7f54: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b7f59u); f_008003e0();
    /* 004b7f59: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b7f5e:; BB(0x004b7f5e);
    /* 004b7f5e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7f60: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7f62: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b7f64: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7f66: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b7f6cu); call_ind(t); }
    /* 004b7f6c: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b7f70: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b7f76: mov byte ptr [esp + 0x98], 0xa9 */ W8((u32)(r_esp+0x98u), 0xa9u);
    /* 004b7f7e: mov edx, 3 */ r_edx = 0x3u;
    /* 004b7f83: mov byte ptr [esp + 0x99], 2 */ W8((u32)(r_esp+0x99u), 0x2u);
    /* 004b7f8b: mov word ptr [esp + 0x9a], ax */ W16((u32)(r_esp+0x9au), (u16)r_eax);
    /* 004b7f93: mov word ptr [esp + 0x9c], dx */ W16((u32)(r_esp+0x9cu), (u16)r_edx);
    /* 004b7f9b: mov word ptr [esp + 0x9e], bx */ W16((u32)(r_esp+0x9eu), (u16)r_ebx);
    /* 004b7fa3: lea ecx, [esp + 0x98] */ r_ecx = (u32)(r_esp+0x98u);
    /* 004b7faa: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b7fafu); f_008003e0();
    /* 004b7faf: jmp 0x4b78c9 */ goto L_004b78c9;
L_004b7fb4:; BB(0x004b7fb4);
    /* 004b7fb4: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004b7fb6: mov eax, 1 */ r_eax = 0x1u;
    /* 004b7fbb: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004b7fc2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7fc4: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4b7fcau); call_ind(t); }
    /* 004b7fca: mov dword ptr [esp + 0xa0], esi */ W32((u32)(r_esp+0xa0u), r_esi);
    /* 004b7fd1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b7fd3: mov esi, eax */ r_esi = r_eax;
L_004b7fd5:; BB(0x004b7fd5);
    /* 004b7fd5: mov ecx, dword ptr [ebx + esi*4 + 0x600] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x600u));
    /* 004b7fdc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b7fde: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4b7fe4u); call_ind(t); }
    /* 004b7fe4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b7fe7: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b7fea: jl 0x4b7fd5 */ if ((fS!=fO)) goto L_004b7fd5;
L_004b7fec:; BB(0x004b7fec);
    /* 004b7fec: mov esi, dword ptr [esp + 0xa0] */ r_esi = R32((u32)(r_esp+0xa0u));
    /* 004b7ff3: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b7ff9: mov dword ptr [ebx + 0x6f8], 0 */ W32((u32)(r_ebx+0x6f8u), 0x0u);
    /* 004b8003: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b8006: mov dword ptr [ebx + 0x734], 1 */ W32((u32)(r_ebx+0x734u), 0x1u);
    /* 004b8010: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b8015: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b801b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004b801d: mov dword ptr [ebx + 0x64], edx */ W32((u32)(r_ebx+0x64u), r_edx);
    /* 004b8020: mov dword ptr [ebx + 0x738], edx */ W32((u32)(r_ebx+0x738u), r_edx);
    /* 004b8026: mov dword ptr [ebx + 0x730], edx */ W32((u32)(r_ebx+0x730u), r_edx);
    /* 004b802c: jmp 0x4b78c9 */ goto L_004b78c9;
}

