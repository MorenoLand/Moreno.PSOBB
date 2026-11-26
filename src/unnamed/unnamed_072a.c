#include "protos.h"

void f_0072a0bc(void) /* sub_72A0BC */
{
    FN_ENTER(0x0072a0bc);
    /* 0072a0bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072a0bf: fld dword ptr [ecx + 0x44] */ FPUSH(R_F32((u32)(r_ecx+0x44u)));
    /* 0072a0c2: fld dword ptr [ecx + 0x54] */ FPUSH(R_F32((u32)(r_ecx+0x54u)));
    /* 0072a0c5: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0072a0c7: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 0072a0ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072a0cc: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0072a0ce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a0d0: mov edx, 1 */ r_edx = 0x1u;
    /* 0072a0d5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a0d6: jae 0x72a10c */ if (!fC) goto L_0072a10c;
L_0072a0d8:; BB(0x0072a0d8);
    /* 0072a0d8: fld dword ptr [0x970ae8] */ FPUSH(R_F32((u32)(0x970ae8u)));
    /* 0072a0de: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a0e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a0e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a0e3: jbe 0x72a0e9 */ if ((fC||fZ)) goto L_0072a0e9;
L_0072a0e5:; BB(0x0072a0e5);
    /* 0072a0e5: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0072a0e7: jmp 0x72a0fa */ goto L_0072a0fa;
L_0072a0e9:; BB(0x0072a0e9);
    /* 0072a0e9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a0eb: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a0ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a0ef: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0072a0f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a0f2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a0f4: ja 0x72a0f8 */ if ((!fC&&!fZ)) goto L_0072a0f8;
L_0072a0f6:; BB(0x0072a0f6);
    /* 0072a0f6: fst st(1) */ ST(1) = ST(0);
L_0072a0f8:; BB(0x0072a0f8);
    /* 0072a0f8: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0072a0fa:; BB(0x0072a0fa);
    /* 0072a0fa: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a0fc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a0fe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a100: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a102: fst dword ptr [ecx + 0x44] */ W_F32((u32)(r_ecx+0x44u), ST(0));
    /* 0072a105: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a106: jae 0x72a13c */ if (!fC) goto L_0072a13c;
L_0072a108:; BB(0x0072a108);
    /* 0072a108: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072a10a: jmp 0x72a13c */ goto L_0072a13c;
L_0072a10c:; BB(0x0072a10c);
    /* 0072a10c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a10e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a110: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a111: jae 0x72a119 */ if (!fC) goto L_0072a119;
L_0072a113:; BB(0x0072a113);
    /* 0072a113: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a115: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0072a117: jmp 0x72a12c */ goto L_0072a12c;
L_0072a119:; BB(0x0072a119);
    /* 0072a119: fld dword ptr [0x970aec] */ FPUSH(R_F32((u32)(0x970aecu)));
    /* 0072a11f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a121: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a123: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a124: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a126: jbe 0x72a12a */ if ((fC||fZ)) goto L_0072a12a;
L_0072a128:; BB(0x0072a128);
    /* 0072a128: fst st(1) */ ST(1) = ST(0);
L_0072a12a:; BB(0x0072a12a);
    /* 0072a12a: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0072a12c:; BB(0x0072a12c);
    /* 0072a12c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a12e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a130: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a132: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a134: fst dword ptr [ecx + 0x44] */ W_F32((u32)(r_ecx+0x44u), ST(0));
    /* 0072a137: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a138: jbe 0x72a13c */ if ((fC||fZ)) goto L_0072a13c;
L_0072a13a:; BB(0x0072a13a);
    /* 0072a13a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0072a13c:; BB(0x0072a13c);
    /* 0072a13c: fld dword ptr [ecx + 0x48] */ FPUSH(R_F32((u32)(r_ecx+0x48u)));
    /* 0072a13f: fld dword ptr [ecx + 0x58] */ FPUSH(R_F32((u32)(r_ecx+0x58u)));
    /* 0072a142: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0072a144: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 0072a147: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072a149: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0072a14b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a14d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a14e: jae 0x72a184 */ if (!fC) goto L_0072a184;
L_0072a150:; BB(0x0072a150);
    /* 0072a150: fld dword ptr [0x970ae8] */ FPUSH(R_F32((u32)(0x970ae8u)));
    /* 0072a156: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a158: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a15a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a15b: jbe 0x72a161 */ if ((fC||fZ)) goto L_0072a161;
L_0072a15d:; BB(0x0072a15d);
    /* 0072a15d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0072a15f: jmp 0x72a172 */ goto L_0072a172;
L_0072a161:; BB(0x0072a161);
    /* 0072a161: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a163: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a165: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a167: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0072a169: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a16a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a16c: ja 0x72a170 */ if ((!fC&&!fZ)) goto L_0072a170;
L_0072a16e:; BB(0x0072a16e);
    /* 0072a16e: fst st(1) */ ST(1) = ST(0);
L_0072a170:; BB(0x0072a170);
    /* 0072a170: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0072a172:; BB(0x0072a172);
    /* 0072a172: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a174: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a176: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a178: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a17a: fst dword ptr [ecx + 0x48] */ W_F32((u32)(r_ecx+0x48u), ST(0));
    /* 0072a17d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a17e: jae 0x72a1b4 */ if (!fC) goto L_0072a1b4;
L_0072a180:; BB(0x0072a180);
    /* 0072a180: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072a182: jmp 0x72a1b4 */ goto L_0072a1b4;
L_0072a184:; BB(0x0072a184);
    /* 0072a184: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a186: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a188: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a189: jae 0x72a191 */ if (!fC) goto L_0072a191;
L_0072a18b:; BB(0x0072a18b);
    /* 0072a18b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a18d: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0072a18f: jmp 0x72a1a4 */ goto L_0072a1a4;
L_0072a191:; BB(0x0072a191);
    /* 0072a191: fld dword ptr [0x970aec] */ FPUSH(R_F32((u32)(0x970aecu)));
    /* 0072a197: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a199: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a19b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a19c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a19e: jbe 0x72a1a2 */ if ((fC||fZ)) goto L_0072a1a2;
L_0072a1a0:; BB(0x0072a1a0);
    /* 0072a1a0: fst st(1) */ ST(1) = ST(0);
L_0072a1a2:; BB(0x0072a1a2);
    /* 0072a1a2: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0072a1a4:; BB(0x0072a1a4);
    /* 0072a1a4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a1a6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a1a8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a1aa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a1ac: fst dword ptr [ecx + 0x48] */ W_F32((u32)(r_ecx+0x48u), ST(0));
    /* 0072a1af: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a1b0: jbe 0x72a1b4 */ if ((fC||fZ)) goto L_0072a1b4;
L_0072a1b2:; BB(0x0072a1b2);
    /* 0072a1b2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0072a1b4:; BB(0x0072a1b4);
    /* 0072a1b4: fld dword ptr [ecx + 0x4c] */ FPUSH(R_F32((u32)(r_ecx+0x4cu)));
    /* 0072a1b7: fld dword ptr [ecx + 0x5c] */ FPUSH(R_F32((u32)(r_ecx+0x5cu)));
    /* 0072a1ba: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0072a1bc: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0072a1bf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072a1c1: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0072a1c3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a1c5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a1c6: jae 0x72a1fd */ if (!fC) goto L_0072a1fd;
L_0072a1c8:; BB(0x0072a1c8);
    /* 0072a1c8: fld dword ptr [0x970ae8] */ FPUSH(R_F32((u32)(0x970ae8u)));
    /* 0072a1ce: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a1d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a1d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a1d3: jbe 0x72a1d9 */ if ((fC||fZ)) goto L_0072a1d9;
L_0072a1d5:; BB(0x0072a1d5);
    /* 0072a1d5: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0072a1d7: jmp 0x72a1ea */ goto L_0072a1ea;
L_0072a1d9:; BB(0x0072a1d9);
    /* 0072a1d9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a1db: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a1dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a1df: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0072a1e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a1e2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a1e4: ja 0x72a1e8 */ if ((!fC&&!fZ)) goto L_0072a1e8;
L_0072a1e6:; BB(0x0072a1e6);
    /* 0072a1e6: fst st(1) */ ST(1) = ST(0);
L_0072a1e8:; BB(0x0072a1e8);
    /* 0072a1e8: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0072a1ea:; BB(0x0072a1ea);
    /* 0072a1ea: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a1ec: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a1ee: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a1f0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a1f2: fst dword ptr [ecx + 0x4c] */ W_F32((u32)(r_ecx+0x4cu), ST(0));
    /* 0072a1f5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a1f6: jb 0x72a22b */ if (fC) goto L_0072a22b;
L_0072a1f8:; BB(0x0072a1f8);
    /* 0072a1f8: jmp 0x72a2a3 */ goto L_0072a2a3;
L_0072a1fd:; BB(0x0072a1fd);
    /* 0072a1fd: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a1ff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a201: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a202: jae 0x72a20a */ if (!fC) goto L_0072a20a;
L_0072a204:; BB(0x0072a204);
    /* 0072a204: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a206: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0072a208: jmp 0x72a21d */ goto L_0072a21d;
L_0072a20a:; BB(0x0072a20a);
    /* 0072a20a: fld dword ptr [0x970aec] */ FPUSH(R_F32((u32)(0x970aecu)));
    /* 0072a210: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a212: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a214: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a215: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a217: jbe 0x72a21b */ if ((fC||fZ)) goto L_0072a21b;
L_0072a219:; BB(0x0072a219);
    /* 0072a219: fst st(1) */ ST(1) = ST(0);
L_0072a21b:; BB(0x0072a21b);
    /* 0072a21b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0072a21d:; BB(0x0072a21d);
    /* 0072a21d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a21f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a221: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a223: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a225: fst dword ptr [ecx + 0x4c] */ W_F32((u32)(r_ecx+0x4cu), ST(0));
    /* 0072a228: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a229: jbe 0x72a2a3 */ if ((fC||fZ)) goto L_0072a2a3;
L_0072a22b:; BB(0x0072a22b);
    /* 0072a22b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072a22d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0072a230: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0072a234: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072a239: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0072a23d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0072a241: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0072a245: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0072a248: movzx edx, byte ptr [esp + 0x10] */ r_edx = (u32)R8((u32)(r_esp+0x10u));
    /* 0072a24d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0072a250: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0072a254: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072a259: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0072a25d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0072a261: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0072a265: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0072a268: movzx ecx, byte ptr [esp + 0x10] */ r_ecx = (u32)R8((u32)(r_esp+0x10u));
    /* 0072a26d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0072a270: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0072a274: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072a279: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0072a27d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0072a281: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0072a285: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0072a288: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 0072a28d: or edx, 0xffffff00 */ {  u32 a = r_edx; u32 b = 0xffffff00u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072a293: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0072a296: or edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072a298: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0072a29b: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072a29d: mov eax, edx */ r_eax = r_edx;
    /* 0072a29f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072a2a2: ret  */ FN_RET(0x0072a0bc); r_esp += 4; return;
L_0072a2a3:; BB(0x0072a2a3);
    /* 0072a2a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a2a5: je 0x72a22b */ if (fZ) goto L_0072a22b;
L_0072a2a7:; BB(0x0072a2a7);
    /* 0072a2a7: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0072a2a9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a2ab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a2ad: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 0072a2b1: and edx, 0xffbf */ {  u32 a = r_edx; u32 b = 0xffbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0072a2b7: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0072a2ba: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 0072a2be: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072a2c1: ret  */ FN_RET(0x0072a0bc); r_esp += 4; return;
}

void f_0072a2c4(void) /* sub_72A2C4 */
{
    FN_ENTER(0x0072a2c4);
    /* 0072a2c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072a2c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072a2c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072a2c7: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072a2ca: mov esi, ecx */ r_esi = r_ecx;
    /* 0072a2cc: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 0072a2d0: fild dword ptr [ebp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x30u)));
    /* 0072a2d3: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0072a2d6: fld dword ptr [0x970ae4] */ FPUSH(R_F32((u32)(0x970ae4u)));
    /* 0072a2dc: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 0072a2de: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 0072a2e1: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 0072a2e4: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 0072a2e6: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0072a2e8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a2ea: fmul dword ptr [0x970ae0] */ ST(0) = ST(0) * R_F32((u32)(0x970ae0u));
    /* 0072a2f0: fld dword ptr [0x970ad8] */ FPUSH(R_F32((u32)(0x970ad8u)));
    /* 0072a2f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a2f8: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 0072a2fa: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0072a2fc: fmul dword ptr [0x970adc] */ ST(0) = ST(0) * R_F32((u32)(0x970adcu));
    /* 0072a302: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0072a304: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a306: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0072a30a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a30b: jbe 0x72a490 */ if ((fC||fZ)) goto L_0072a490;
L_0072a311:; BB(0x0072a311);
    /* 0072a311: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 0072a314: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0072a316: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a318: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a319: jbe 0x72a327 */ if ((fC||fZ)) goto L_0072a327;
L_0072a31b:; BB(0x0072a31b);
    /* 0072a31b: fld dword ptr [esi + 0x24] */ FPUSH(R_F32((u32)(r_esi+0x24u)));
    /* 0072a31e: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 0072a320: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a322: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a323: ja 0x72a331 */ if ((!fC&&!fZ)) goto L_0072a331;
L_0072a325:; BB(0x0072a325);
    /* 0072a325: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0072a327:; BB(0x0072a327);
    /* 0072a327: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a329: fld dword ptr [0x970ad8] */ FPUSH(R_F32((u32)(0x970ad8u)));
    /* 0072a32f: jmp 0x72a338 */ goto L_0072a338;
L_0072a331:; BB(0x0072a331);
    /* 0072a331: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 0072a334: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0072a336: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
L_0072a338:; BB(0x0072a338);
    /* 0072a338: fld dword ptr [esi + 0x1c] */ FPUSH(R_F32((u32)(r_esi+0x1cu)));
    /* 0072a33b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a33d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a33f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a340: ja 0x72a34b */ if ((!fC&&!fZ)) goto L_0072a34b;
L_0072a342:; BB(0x0072a342);
    /* 0072a342: mov ebx, dword ptr [esi + 0x60] */ r_ebx = R32((u32)(r_esi+0x60u));
    /* 0072a345: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0072a349: jmp 0x72a35a */ goto L_0072a35a;
L_0072a34b:; BB(0x0072a34b);
    /* 0072a34b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a34d: fadd dword ptr [0x970ad4] */ ST(0) = ST(0) + R_F32((u32)(0x970ad4u));
    /* 0072a353: mov ebx, dword ptr [esi + 0x64] */ r_ebx = R32((u32)(r_esi+0x64u));
    /* 0072a356: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_0072a35a:; BB(0x0072a35a);
    /* 0072a35a: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0072a35e: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0072a362: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072a364: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a366: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a367: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0072a369: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a36b: jae 0x72a36f */ if (!fC) goto L_0072a36f;
L_0072a36d:; BB(0x0072a36d);
    /* 0072a36d: fst st(1) */ ST(1) = ST(0);
L_0072a36f:; BB(0x0072a36f);
    /* 0072a36f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a371: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0072a375: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a376: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a378: jb 0x72a37c */ if (fC) goto L_0072a37c;
L_0072a37a:; BB(0x0072a37a);
    /* 0072a37a: fst st(1) */ ST(1) = ST(0);
L_0072a37c:; BB(0x0072a37c);
    /* 0072a37c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a37e: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0072a380: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0072a382: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a384: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a386: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072a388: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0072a38c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a38d: ja 0x72a3a4 */ if ((!fC&&!fZ)) goto L_0072a3a4;
L_0072a38f:; BB(0x0072a38f);
    /* 0072a38f: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 0072a393: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072a395: jne 0x72a3a4 */ if (!fZ) goto L_0072a3a4;
L_0072a397:; BB(0x0072a397);
    /* 0072a397: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0072a399: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a39b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072a39e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072a39f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072a3a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072a3a1: ret 4 */ FN_RET(0x0072a2c4); r_esp += 8; return;
L_0072a3a4:; BB(0x0072a3a4);
    /* 0072a3a4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a3a6: fadd dword ptr [ebp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x10u));
    /* 0072a3a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a3ab: fadd dword ptr [ebp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x14u));
    /* 0072a3ae: fld dword ptr [0x970ad0] */ FPUSH(R_F32((u32)(0x970ad0u)));
    /* 0072a3b4: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 0072a3b7: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 0072a3ba: fdivr dword ptr [0x970ad4] */ ST(0) = R_F32((u32)(0x970ad4u)) / ST(0);
    /* 0072a3c0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072a3c2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072a3c5: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0072a3c9: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0072a3cd: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0072a3d2: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x72a3d7u); f_0082bb30();
    /* 0072a3d7: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 0072a3dd: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x72a3e2u); f_00829cc8();
    /* 0072a3e2: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 0072a3e7: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0072a3ec: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x72a3f1u); f_0082bb60();
    /* 0072a3f1: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 0072a3f5: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072a3f7: je 0x72a416 */ if (fZ) goto L_0072a416;
L_0072a3f9:; BB(0x0072a3f9);
    /* 0072a3f9: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072a3fc: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0072a400: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0072a404: mov ecx, esi */ r_ecx = r_esi;
    /* 0072a406: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0072a409: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0072a40d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0072a411: call 0x729b1c */ r_esp -= 4; W32(r_esp, 0x72a416u); f_00729b1c();
L_0072a416:; BB(0x0072a416);
    /* 0072a416: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0072a41a: fcomp dword ptr [0x970ad8] */ fx_compare(ST(0), R_F32((u32)(0x970ad8u))); FPOP();
    /* 0072a420: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a422: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a423: jbe 0x72a482 */ if ((fC||fZ)) goto L_0072a482;
L_0072a425:; BB(0x0072a425);
    /* 0072a425: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072a427: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x72a42cu); f_0082b438();
    /* 0072a42c: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072a42f: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0072a433: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0072a437: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a439: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0072a43d: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0072a441: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0072a444: mov ecx, esi */ r_ecx = r_esi;
    /* 0072a446: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0072a44a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0072a44e: call 0x729c90 */ r_esp -= 4; W32(r_esp, 0x72a453u); f_00729c90();
    /* 0072a453: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 0072a456: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x72a45bu); f_0082b438();
    /* 0072a45b: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072a45e: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0072a462: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0072a466: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072a468: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0072a46c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0072a470: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0072a473: mov ecx, esi */ r_ecx = r_esi;
    /* 0072a475: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0072a479: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0072a47d: call 0x729c90 */ r_esp -= 4; W32(r_esp, 0x72a482u); f_00729c90();
L_0072a482:; BB(0x0072a482);
    /* 0072a482: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x72a487u); f_004ac444();
    /* 0072a487: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072a48a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072a48b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072a48c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072a48d: ret 4 */ FN_RET(0x0072a2c4); r_esp += 8; return;
L_0072a490:; BB(0x0072a490);
    /* 0072a490: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0072a492: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0072a494: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072a496: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072a499: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072a49a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072a49b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072a49c: ret 4 */ FN_RET(0x0072a2c4); r_esp += 8; return;
}

void f_0072a4a0(void) /* sub_72A4A0 */
{
    FN_ENTER(0x0072a4a0);
    /* 0072a4a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072a4a1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072a4a4: mov edi, ecx */ r_edi = r_ecx;
    /* 0072a4a6: mov ecx, edi */ r_ecx = r_edi;
    /* 0072a4a8: call 0x729e98 */ r_esp -= 4; W32(r_esp, 0x72a4adu); f_00729e98();
    /* 0072a4ad: fld dword ptr [edi + 0x24] */ FPUSH(R_F32((u32)(r_edi+0x24u)));
    /* 0072a4b0: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0072a4b3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0072a4b7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072a4bc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0072a4c0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0072a4c4: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0072a4c8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0072a4cb: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0072a4cf: mov word ptr [edi + 0x28], ax */ W16((u32)(r_edi+0x28u), (u16)r_eax);
    /* 0072a4d3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072a4d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072a4d7: ret  */ FN_RET(0x0072a4a0); r_esp += 4; return;
}

void f_0072a4d8(void) /* sub_72A4D8 */
{
    FN_ENTER(0x0072a4d8);
    /* 0072a4d8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072a4db: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0072a4df: cmp edx, dword ptr [ecx + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a4e2: jne 0x72a4ea */ if (!fZ) goto L_0072a4ea;
L_0072a4e4:; BB(0x0072a4e4);
    /* 0072a4e4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072a4e7: ret 8 */ FN_RET(0x0072a4d8); r_esp += 12; return;
L_0072a4ea:; BB(0x0072a4ea);
    /* 0072a4ea: fld dword ptr [0x970acc] */ FPUSH(R_F32((u32)(0x970accu)));
    /* 0072a4f0: fdiv dword ptr [esp + 0x18] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x18u));
    /* 0072a4f4: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 0072a4f7: and edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0072a4fd: mov eax, edx */ r_eax = r_edx;
    /* 0072a4ff: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0072a502: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0072a505: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0072a508: mov eax, edx */ r_eax = r_edx;
    /* 0072a50a: fst dword ptr [ecx + 0x34] */ W_F32((u32)(r_ecx+0x34u), ST(0));
    /* 0072a50d: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0072a510: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0072a513: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0072a517: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0072a51b: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 0072a51e: fst dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0));
    /* 0072a521: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0072a524: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0072a528: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0072a52c: fst dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0));
    /* 0072a52f: mov edx, eax */ r_edx = r_eax;
    /* 0072a531: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0072a534: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0072a537: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0072a53b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0072a53f: mov edx, eax */ r_edx = r_eax;
    /* 0072a541: fst dword ptr [ecx + 0x44] */ W_F32((u32)(r_ecx+0x44u), ST(0));
    /* 0072a544: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0072a546: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072a548: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0072a54a: fstp dword ptr [ecx + 0x54] */ W_F32((u32)(r_ecx+0x54u), ST(0)); FPOP();
    /* 0072a54d: shr edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0072a550: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0072a553: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0072a556: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0072a55a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0072a55e: fst dword ptr [ecx + 0x48] */ W_F32((u32)(r_ecx+0x48u), ST(0));
    /* 0072a561: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0072a563: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0072a565: fstp dword ptr [ecx + 0x58] */ W_F32((u32)(r_ecx+0x58u), ST(0)); FPOP();
    /* 0072a568: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0072a56c: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0072a570: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 0072a574: fst dword ptr [ecx + 0x4c] */ W_F32((u32)(r_ecx+0x4cu), ST(0));
    /* 0072a577: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0072a579: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0072a57b: fstp dword ptr [ecx + 0x5c] */ W_F32((u32)(r_ecx+0x5cu), ST(0)); FPOP();
    /* 0072a57e: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072a583: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 0072a587: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072a58a: ret 8 */ FN_RET(0x0072a4d8); r_esp += 12; return;
}

void f_0072a590(void) /* sub_72A590 */
{
    FN_ENTER(0x0072a590);
    /* 0072a590: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072a591: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072a592: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072a593: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0072a597: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0072a599: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072a59b: je 0x72a5e5 */ if (fZ) goto L_0072a5e5;
L_0072a59d:; BB(0x0072a59d);
    /* 0072a59d: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0072a5a0: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0072a5a3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0072a5a5: lea ecx, [ecx + edx - 4] */ r_ecx = (u32)(r_ecx+r_edx+0xfffffffcu);
    /* 0072a5a9: lea ebp, [eax - 1] */ r_ebp = (u32)(r_eax+0xffffffffu);
    /* 0072a5ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a5ae: je 0x72a5d2 */ if (fZ) goto L_0072a5d2;
L_0072a5b0:; BB(0x0072a5b0);
    /* 0072a5b0: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0072a5b3: mov esi, ecx */ r_esi = r_ecx;
L_0072a5b5:; BB(0x0072a5b5);
    /* 0072a5b5: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0072a5b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a5b9: je 0x72a5c1 */ if (fZ) goto L_0072a5c1;
L_0072a5bb:; BB(0x0072a5bb);
    /* 0072a5bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0072a5bd: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0072a5bf: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x72a5c1u); call_ind(t); }
L_0072a5c1:; BB(0x0072a5c1);
    /* 0072a5c1: add esi, -4 */ {  u32 a = r_esi; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072a5c4: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0072a5c7: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a5ca: jne 0x72a5b5 */ if (!fZ) goto L_0072a5b5;
L_0072a5cc:; BB(0x0072a5cc);
    /* 0072a5cc: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0072a5cf: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
L_0072a5d2:; BB(0x0072a5d2);
    /* 0072a5d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072a5d3: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72a5d8u); f_00857e98();
    /* 0072a5d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072a5da: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0072a5dc: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0072a5df: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072a5e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072a5e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072a5e4: ret  */ FN_RET(0x0072a590); r_esp += 4; return;
L_0072a5e5:; BB(0x0072a5e5);
    /* 0072a5e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072a5e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072a5e7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072a5e8: ret  */ FN_RET(0x0072a590); r_esp += 4; return;
}

void f_0072a5ec(void) /* sub_72A5EC */
{
    FN_ENTER(0x0072a5ec);
    /* 0072a5ec: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072a5ef: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0072a5f3: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0072a5f6: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a5fb: jne 0x72a611 */ if (!fZ) goto L_0072a611;
L_0072a5fd:; BB(0x0072a5fd);
    /* 0072a5fd: fild dword ptr [ecx + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x5cu)));
    /* 0072a600: fcomp dword ptr [0x970b28] */ fx_compare(ST(0), R_F32((u32)(0x970b28u))); FPOP();
    /* 0072a606: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072a608: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072a609: jae 0x72a611 */ if (!fC) goto L_0072a611;
L_0072a60b:; BB(0x0072a60b);
    /* 0072a60b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072a60e: ret 4 */ FN_RET(0x0072a5ec); r_esp += 8; return;
L_0072a611:; BB(0x0072a611);
    /* 0072a611: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0072a613: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0072a616: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 0072a619: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a61b: je 0x72a641 */ if (fZ) goto L_0072a641;
L_0072a61d:; BB(0x0072a61d);
    /* 0072a61d: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0072a621: mov ebx, edx */ r_ebx = r_edx;
    /* 0072a623: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0072a626: mov esi, ecx */ r_esi = r_ecx;
L_0072a628:; BB(0x0072a628);
    /* 0072a628: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0072a62a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0072a62c: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x72a62fu); call_ind(t); }
    /* 0072a62f: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072a632: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0072a635: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a638: jne 0x72a628 */ if (!fZ) goto L_0072a628;
L_0072a63a:; BB(0x0072a63a);
    /* 0072a63a: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0072a63e: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0072a641:; BB(0x0072a641);
    /* 0072a641: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072a644: ret 4 */ FN_RET(0x0072a5ec); r_esp += 8; return;
}

void f_0072a648(void) /* sub_72A648 */
{
    FN_ENTER(0x0072a648);
    /* 0072a648: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072a64b: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0072a64f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0072a651: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0072a654: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0072a656: jbe 0x72a685 */ if ((fC||fZ)) goto L_0072a685;
L_0072a658:; BB(0x0072a658);
    /* 0072a658: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0072a65c: mov ebx, eax */ r_ebx = r_eax;
    /* 0072a65e: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0072a661: mov esi, edx */ r_esi = r_edx;
L_0072a663:; BB(0x0072a663);
    /* 0072a663: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0072a665: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 0072a669: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072a66b: jne 0x72a676 */ if (!fZ) goto L_0072a676;
L_0072a66d:; BB(0x0072a66d);
    /* 0072a66d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072a671: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0072a673: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x72a676u); call_ind(t); }
L_0072a676:; BB(0x0072a676);
    /* 0072a676: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0072a679: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0072a67c: jne 0x72a663 */ if (!fZ) goto L_0072a663;
L_0072a67e:; BB(0x0072a67e);
    /* 0072a67e: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0072a682: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0072a685:; BB(0x0072a685);
    /* 0072a685: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072a688: ret 8 */ FN_RET(0x0072a648); r_esp += 12; return;
}

void f_0072a68c(void) /* sub_72A68C */
{
    FN_ENTER(0x0072a68c);
    /* 0072a68c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072a68d: mov ebp, esp */ r_ebp = r_esp;
    /* 0072a68f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072a691: push 0x8f126e */ { u32 v = 0x8f126eu; r_esp -= 4; W32(r_esp, v); }
    /* 0072a696: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0072a69c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072a69d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0072a6a4: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072a6aa: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0072a6ad: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0072a6b0: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0072a6b3: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0072a6b6: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0072a6b9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0072a6bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a6be: je 0x72ac68 */ if (fZ) goto L_0072ac68;
L_0072a6c4:; BB(0x0072a6c4);
    /* 0072a6c4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0072a6c7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0072a6c9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0072a6cc: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0072a6cf: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0072a6d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0072a6d4: ja 0x72a6ee */ if ((!fC&&!fZ)) goto L_0072a6ee;
L_0072a6d6:; BB(0x0072a6d6);
    /* 0072a6d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072a6d8: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0072a6da: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0072a6dd: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0072a6e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072a6e3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072a6ea: mov esp, ebp */ r_esp = r_ebp;
    /* 0072a6ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072a6ed: ret  */ FN_RET(0x0072a68c); r_esp += 4; return;
L_0072a6ee:; BB(0x0072a6ee);
    /* 0072a6ee: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 0072a6f0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0072a6f2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0072a6f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0072a6f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72a6fau); f_008581c5();
    /* 0072a6fa: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0072a6fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072a700: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0072a703: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0072a706: lea ecx, [edx + 8] */ r_ecx = (u32)(r_edx+0x8u);
    /* 0072a709: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_0072a70c:; BB(0x0072a70c);
    /* 0072a70c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0072a70f: mov edx, eax */ r_edx = r_eax;
    /* 0072a711: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a714: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0072a717: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072a719: je 0x72ac51 */ if (fZ) goto L_0072ac51;
L_0072a71f:; BB(0x0072a71f);
    /* 0072a71f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072a722: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0072a725: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0072a727: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0072a72a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0072a72d:; BB(0x0072a72d);
    /* 0072a72d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072a730: mov edx, eax */ r_edx = r_eax;
    /* 0072a732: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a735: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0072a738: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a73a: je 0x72a70c */ if (fZ) goto L_0072a70c;
L_0072a73c:; BB(0x0072a73c);
    /* 0072a73c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a73f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0072a741: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0072a744: ja 0x72abf0 */ if ((!fC&&!fZ)) goto L_0072abf0;
L_0072a74a:; BB(0x0072a74a);
    /* 0072a74a: mov eax, dword ptr [eax*4 + 0x970af4] */ r_eax = R32((u32)(r_eax*4+0x970af4u));
    /* 0072a751: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0072abf0:; BB(0x0072abf0);
    /* 0072abf0: add dword ptr [ebp - 0x18], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072abf4: jmp 0x72a72d */ goto L_0072a72d;
L_0072ac51:; BB(0x0072ac51);
    /* 0072ac51: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072ac54: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0072ac57: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0072ac5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072ac5d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072ac64: mov esp, ebp */ r_esp = r_ebp;
    /* 0072ac66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ac67: ret  */ FN_RET(0x0072a68c); r_esp += 4; return;
L_0072ac68:; BB(0x0072ac68);
    /* 0072ac68: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072ac6a: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0072ac6c: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0072ac6f: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0072ac72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072ac75: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072ac7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0072ac7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ac7f: ret  */ FN_RET(0x0072a68c); r_esp += 4; return;
}

void f_0072a753(void)
{
    FN_ENTER(0x0072a753);
    goto L_0072a753;
L_0072a70c:; BB(0x0072a70c);
    /* 0072a70c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0072a70f: mov edx, eax */ r_edx = r_eax;
    /* 0072a711: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a714: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0072a717: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072a719: je 0x72ac51 */ if (fZ) goto L_0072ac51;
L_0072a71f:; BB(0x0072a71f);
    /* 0072a71f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072a722: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0072a725: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0072a727: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0072a72a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0072a72d:; BB(0x0072a72d);
    /* 0072a72d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072a730: mov edx, eax */ r_edx = r_eax;
    /* 0072a732: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a735: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0072a738: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a73a: je 0x72a70c */ if (fZ) goto L_0072a70c;
L_0072a73c:; BB(0x0072a73c);
    /* 0072a73c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a73f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0072a741: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0072a744: ja 0x72abf0 */ if ((!fC&&!fZ)) goto L_0072abf0;
L_0072a74a:; BB(0x0072a74a);
    /* 0072a74a: mov eax, dword ptr [eax*4 + 0x970af4] */ r_eax = R32((u32)(r_eax*4+0x970af4u));
    /* 0072a751: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0072a753:; BB(0x0072a753);
    /* 0072a753: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0072a75a: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0072a75c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72a761u); f_008581c5();
    /* 0072a761: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072a762: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0072a765: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a767: je 0x72abf9 */ if (fZ) goto L_0072abf9;
L_0072a76d:; BB(0x0072a76d);
    /* 0072a76d: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0072a774: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 0072a77b: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0072a77f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a782: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0072a785: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072a786: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072a787: call 0x72e17c */ r_esp -= 4; W32(r_esp, 0x72a78cu); f_0072e17c();
    /* 0072a78c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0072a78f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0072a796:; BB(0x0072a796);
    /* 0072a796: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0072a799: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0072a79b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072a7a2: add dword ptr [ebp - 0x1c], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072a7a6: jmp 0x72abf0 */ goto L_0072abf0;
L_0072abf0:; BB(0x0072abf0);
    /* 0072abf0: add dword ptr [ebp - 0x18], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072abf4: jmp 0x72a72d */ goto L_0072a72d;
L_0072abf9:; BB(0x0072abf9);
    /* 0072abf9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072abfb: jmp 0x72a796 */ goto L_0072a796;
L_0072ac51:; BB(0x0072ac51);
    /* 0072ac51: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072ac54: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0072ac57: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0072ac5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072ac5d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072ac64: mov esp, ebp */ r_esp = r_ebp;
    /* 0072ac66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ac67: ret  */ FN_RET(0x0072a753); r_esp += 4; return;
}

void f_0072a7ab(void)
{
    FN_ENTER(0x0072a7ab);
    goto L_0072a7ab;
L_0072a70c:; BB(0x0072a70c);
    /* 0072a70c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0072a70f: mov edx, eax */ r_edx = r_eax;
    /* 0072a711: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a714: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0072a717: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072a719: je 0x72ac51 */ if (fZ) goto L_0072ac51;
L_0072a71f:; BB(0x0072a71f);
    /* 0072a71f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072a722: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0072a725: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0072a727: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0072a72a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0072a72d:; BB(0x0072a72d);
    /* 0072a72d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072a730: mov edx, eax */ r_edx = r_eax;
    /* 0072a732: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a735: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0072a738: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a73a: je 0x72a70c */ if (fZ) goto L_0072a70c;
L_0072a73c:; BB(0x0072a73c);
    /* 0072a73c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a73f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0072a741: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0072a744: ja 0x72abf0 */ if ((!fC&&!fZ)) goto L_0072abf0;
L_0072a74a:; BB(0x0072a74a);
    /* 0072a74a: mov eax, dword ptr [eax*4 + 0x970af4] */ r_eax = R32((u32)(r_eax*4+0x970af4u));
    /* 0072a751: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0072a7ab:; BB(0x0072a7ab);
    /* 0072a7ab: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0072a7b2: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0072a7b4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72a7b9u); f_008581c5();
    /* 0072a7b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072a7ba: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0072a7bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a7bf: je 0x72ac00 */ if (fZ) goto L_0072ac00;
L_0072a7c5:; BB(0x0072a7c5);
    /* 0072a7c5: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 0072a7cc: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 0072a7d3: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0072a7d7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a7da: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0072a7dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072a7de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072a7df: call 0x72d194 */ r_esp -= 4; W32(r_esp, 0x72a7e4u); f_0072d194();
    /* 0072a7e4: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0072a7e7: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0072a7ee:; BB(0x0072a7ee);
    /* 0072a7ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0072a7f1: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0072a7f3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072a7fa: add dword ptr [ebp - 0x1c], 0xc */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072a7fe: jmp 0x72abf0 */ goto L_0072abf0;
L_0072abf0:; BB(0x0072abf0);
    /* 0072abf0: add dword ptr [ebp - 0x18], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072abf4: jmp 0x72a72d */ goto L_0072a72d;
L_0072ac00:; BB(0x0072ac00);
    /* 0072ac00: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072ac02: jmp 0x72a7ee */ goto L_0072a7ee;
L_0072ac51:; BB(0x0072ac51);
    /* 0072ac51: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072ac54: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0072ac57: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0072ac5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072ac5d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072ac64: mov esp, ebp */ r_esp = r_ebp;
    /* 0072ac66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ac67: ret  */ FN_RET(0x0072a7ab); r_esp += 4; return;
}

void f_0072a803(void)
{
    FN_ENTER(0x0072a803);
    goto L_0072a803;
L_0072a70c:; BB(0x0072a70c);
    /* 0072a70c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0072a70f: mov edx, eax */ r_edx = r_eax;
    /* 0072a711: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a714: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0072a717: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072a719: je 0x72ac51 */ if (fZ) goto L_0072ac51;
L_0072a71f:; BB(0x0072a71f);
    /* 0072a71f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072a722: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0072a725: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0072a727: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0072a72a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0072a72d:; BB(0x0072a72d);
    /* 0072a72d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072a730: mov edx, eax */ r_edx = r_eax;
    /* 0072a732: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a735: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0072a738: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a73a: je 0x72a70c */ if (fZ) goto L_0072a70c;
L_0072a73c:; BB(0x0072a73c);
    /* 0072a73c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a73f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0072a741: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0072a744: ja 0x72abf0 */ if ((!fC&&!fZ)) goto L_0072abf0;
L_0072a74a:; BB(0x0072a74a);
    /* 0072a74a: mov eax, dword ptr [eax*4 + 0x970af4] */ r_eax = R32((u32)(r_eax*4+0x970af4u));
    /* 0072a751: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0072a803:; BB(0x0072a803);
    /* 0072a803: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0072a80a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0072a80c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72a811u); f_008581c5();
    /* 0072a811: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072a812: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0072a815: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a817: je 0x72ac07 */ if (fZ) goto L_0072ac07;
L_0072a81d:; BB(0x0072a81d);
    /* 0072a81d: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 0072a824: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0072a82b: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0072a82f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a832: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0072a835: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072a836: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072a837: call 0x72d7c8 */ r_esp -= 4; W32(r_esp, 0x72a83cu); f_0072d7c8();
    /* 0072a83c: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0072a83f: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0072a846:; BB(0x0072a846);
    /* 0072a846: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0072a849: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0072a84b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072a852: add dword ptr [ebp - 0x1c], 0xc */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072a856: jmp 0x72abf0 */ goto L_0072abf0;
L_0072abf0:; BB(0x0072abf0);
    /* 0072abf0: add dword ptr [ebp - 0x18], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072abf4: jmp 0x72a72d */ goto L_0072a72d;
L_0072ac07:; BB(0x0072ac07);
    /* 0072ac07: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072ac09: jmp 0x72a846 */ goto L_0072a846;
L_0072ac51:; BB(0x0072ac51);
    /* 0072ac51: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072ac54: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0072ac57: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0072ac5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072ac5d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072ac64: mov esp, ebp */ r_esp = r_ebp;
    /* 0072ac66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ac67: ret  */ FN_RET(0x0072a803); r_esp += 4; return;
}

void f_0072a85b(void)
{
    FN_ENTER(0x0072a85b);
    goto L_0072a85b;
L_0072a70c:; BB(0x0072a70c);
    /* 0072a70c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0072a70f: mov edx, eax */ r_edx = r_eax;
    /* 0072a711: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a714: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0072a717: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072a719: je 0x72ac51 */ if (fZ) goto L_0072ac51;
L_0072a71f:; BB(0x0072a71f);
    /* 0072a71f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072a722: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0072a725: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0072a727: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0072a72a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0072a72d:; BB(0x0072a72d);
    /* 0072a72d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072a730: mov edx, eax */ r_edx = r_eax;
    /* 0072a732: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a735: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0072a738: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a73a: je 0x72a70c */ if (fZ) goto L_0072a70c;
L_0072a73c:; BB(0x0072a73c);
    /* 0072a73c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a73f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0072a741: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0072a744: ja 0x72abf0 */ if ((!fC&&!fZ)) goto L_0072abf0;
L_0072a74a:; BB(0x0072a74a);
    /* 0072a74a: mov eax, dword ptr [eax*4 + 0x970af4] */ r_eax = R32((u32)(r_eax*4+0x970af4u));
    /* 0072a751: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0072a85b:; BB(0x0072a85b);
    /* 0072a85b: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 0072a862: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0072a864: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72a869u); f_008581c5();
    /* 0072a869: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072a86a: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0072a86d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a86f: je 0x72ac0e */ if (fZ) goto L_0072ac0e;
L_0072a875:; BB(0x0072a875);
    /* 0072a875: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 0072a87c: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0072a883: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0072a887: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a88a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0072a88d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072a88e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072a88f: call 0x72e8f8 */ r_esp -= 4; W32(r_esp, 0x72a894u); f_0072e8f8();
    /* 0072a894: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0072a897: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0072a89e:; BB(0x0072a89e);
    /* 0072a89e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0072a8a1: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0072a8a3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072a8aa: add dword ptr [ebp - 0x1c], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072a8ae: jmp 0x72abf0 */ goto L_0072abf0;
L_0072abf0:; BB(0x0072abf0);
    /* 0072abf0: add dword ptr [ebp - 0x18], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072abf4: jmp 0x72a72d */ goto L_0072a72d;
L_0072ac0e:; BB(0x0072ac0e);
    /* 0072ac0e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072ac10: jmp 0x72a89e */ goto L_0072a89e;
L_0072ac51:; BB(0x0072ac51);
    /* 0072ac51: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072ac54: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0072ac57: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0072ac5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072ac5d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072ac64: mov esp, ebp */ r_esp = r_ebp;
    /* 0072ac66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ac67: ret  */ FN_RET(0x0072a85b); r_esp += 4; return;
}

void f_0072a8b3(void)
{
    FN_ENTER(0x0072a8b3);
    goto L_0072a8b3;
L_0072a70c:; BB(0x0072a70c);
    /* 0072a70c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0072a70f: mov edx, eax */ r_edx = r_eax;
    /* 0072a711: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a714: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0072a717: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072a719: je 0x72ac51 */ if (fZ) goto L_0072ac51;
L_0072a71f:; BB(0x0072a71f);
    /* 0072a71f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072a722: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0072a725: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0072a727: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0072a72a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0072a72d:; BB(0x0072a72d);
    /* 0072a72d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072a730: mov edx, eax */ r_edx = r_eax;
    /* 0072a732: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a735: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0072a738: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a73a: je 0x72a70c */ if (fZ) goto L_0072a70c;
L_0072a73c:; BB(0x0072a73c);
    /* 0072a73c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a73f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0072a741: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0072a744: ja 0x72abf0 */ if ((!fC&&!fZ)) goto L_0072abf0;
L_0072a74a:; BB(0x0072a74a);
    /* 0072a74a: mov eax, dword ptr [eax*4 + 0x970af4] */ r_eax = R32((u32)(r_eax*4+0x970af4u));
    /* 0072a751: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0072a8b3:; BB(0x0072a8b3);
    /* 0072a8b3: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0072a8ba: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0072a8bc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72a8c1u); f_008581c5();
    /* 0072a8c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072a8c2: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0072a8c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a8c7: je 0x72ac15 */ if (fZ) goto L_0072ac15;
L_0072a8cd:; BB(0x0072a8cd);
    /* 0072a8cd: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 0072a8d4: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0072a8db: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0072a8df: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a8e2: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0072a8e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072a8e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072a8e7: call 0x72ae28 */ r_esp -= 4; W32(r_esp, 0x72a8ecu); f_0072ae28();
    /* 0072a8ec: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0072a8ef: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0072a8f6:; BB(0x0072a8f6);
    /* 0072a8f6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0072a8f9: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0072a8fb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072a902: add dword ptr [ebp - 0x1c], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072a906: jmp 0x72abf0 */ goto L_0072abf0;
L_0072abf0:; BB(0x0072abf0);
    /* 0072abf0: add dword ptr [ebp - 0x18], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072abf4: jmp 0x72a72d */ goto L_0072a72d;
L_0072ac15:; BB(0x0072ac15);
    /* 0072ac15: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072ac17: jmp 0x72a8f6 */ goto L_0072a8f6;
L_0072ac51:; BB(0x0072ac51);
    /* 0072ac51: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072ac54: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0072ac57: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0072ac5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072ac5d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072ac64: mov esp, ebp */ r_esp = r_ebp;
    /* 0072ac66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ac67: ret  */ FN_RET(0x0072a8b3); r_esp += 4; return;
}

void f_0072a90b(void)
{
    FN_ENTER(0x0072a90b);
    goto L_0072a90b;
L_0072a70c:; BB(0x0072a70c);
    /* 0072a70c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0072a70f: mov edx, eax */ r_edx = r_eax;
    /* 0072a711: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a714: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0072a717: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072a719: je 0x72ac51 */ if (fZ) goto L_0072ac51;
L_0072a71f:; BB(0x0072a71f);
    /* 0072a71f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072a722: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0072a725: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0072a727: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0072a72a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0072a72d:; BB(0x0072a72d);
    /* 0072a72d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072a730: mov edx, eax */ r_edx = r_eax;
    /* 0072a732: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a735: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0072a738: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a73a: je 0x72a70c */ if (fZ) goto L_0072a70c;
L_0072a73c:; BB(0x0072a73c);
    /* 0072a73c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a73f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0072a741: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0072a744: ja 0x72abf0 */ if ((!fC&&!fZ)) goto L_0072abf0;
L_0072a74a:; BB(0x0072a74a);
    /* 0072a74a: mov eax, dword ptr [eax*4 + 0x970af4] */ r_eax = R32((u32)(r_eax*4+0x970af4u));
    /* 0072a751: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0072a90b:; BB(0x0072a90b);
    /* 0072a90b: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0072a912: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0072a914: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72a919u); f_008581c5();
    /* 0072a919: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072a91a: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0072a91d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a91f: je 0x72ac1c */ if (fZ) goto L_0072ac1c;
L_0072a925:; BB(0x0072a925);
    /* 0072a925: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 0072a92c: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0072a933: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0072a937: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a93a: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0072a93d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072a93e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072a93f: call 0x72e5b4 */ r_esp -= 4; W32(r_esp, 0x72a944u); f_0072e5b4();
    /* 0072a944: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0072a947: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_0072a94e:; BB(0x0072a94e);
    /* 0072a94e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0072a951: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0072a953: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072a95a: add dword ptr [ebp - 0x1c], 0x38 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072a95e: jmp 0x72abf0 */ goto L_0072abf0;
L_0072abf0:; BB(0x0072abf0);
    /* 0072abf0: add dword ptr [ebp - 0x18], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072abf4: jmp 0x72a72d */ goto L_0072a72d;
L_0072ac1c:; BB(0x0072ac1c);
    /* 0072ac1c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072ac1e: jmp 0x72a94e */ goto L_0072a94e;
L_0072ac51:; BB(0x0072ac51);
    /* 0072ac51: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072ac54: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0072ac57: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0072ac5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072ac5d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072ac64: mov esp, ebp */ r_esp = r_ebp;
    /* 0072ac66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ac67: ret  */ FN_RET(0x0072a90b); r_esp += 4; return;
}

void f_0072a963(void)
{
    FN_ENTER(0x0072a963);
    goto L_0072a963;
L_0072a70c:; BB(0x0072a70c);
    /* 0072a70c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0072a70f: mov edx, eax */ r_edx = r_eax;
    /* 0072a711: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a714: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0072a717: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072a719: je 0x72ac51 */ if (fZ) goto L_0072ac51;
L_0072a71f:; BB(0x0072a71f);
    /* 0072a71f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072a722: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0072a725: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0072a727: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0072a72a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0072a72d:; BB(0x0072a72d);
    /* 0072a72d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072a730: mov edx, eax */ r_edx = r_eax;
    /* 0072a732: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a735: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0072a738: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a73a: je 0x72a70c */ if (fZ) goto L_0072a70c;
L_0072a73c:; BB(0x0072a73c);
    /* 0072a73c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a73f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0072a741: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0072a744: ja 0x72abf0 */ if ((!fC&&!fZ)) goto L_0072abf0;
L_0072a74a:; BB(0x0072a74a);
    /* 0072a74a: mov eax, dword ptr [eax*4 + 0x970af4] */ r_eax = R32((u32)(r_eax*4+0x970af4u));
    /* 0072a751: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0072a963:; BB(0x0072a963);
    /* 0072a963: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0072a96a: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0072a96c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72a971u); f_008581c5();
    /* 0072a971: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072a972: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0072a975: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a977: je 0x72ac23 */ if (fZ) goto L_0072ac23;
L_0072a97d:; BB(0x0072a97d);
    /* 0072a97d: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 0072a984: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0072a98b: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0072a98f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a992: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0072a995: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072a996: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072a997: call 0x72e52c */ r_esp -= 4; W32(r_esp, 0x72a99cu); f_0072e52c();
    /* 0072a99c: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0072a99f: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0072a9a6:; BB(0x0072a9a6);
    /* 0072a9a6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0072a9a9: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0072a9ab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072a9b2: add dword ptr [ebp - 0x1c], 0x30 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072a9b6: jmp 0x72abf0 */ goto L_0072abf0;
L_0072abf0:; BB(0x0072abf0);
    /* 0072abf0: add dword ptr [ebp - 0x18], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072abf4: jmp 0x72a72d */ goto L_0072a72d;
L_0072ac23:; BB(0x0072ac23);
    /* 0072ac23: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072ac25: jmp 0x72a9a6 */ goto L_0072a9a6;
L_0072ac51:; BB(0x0072ac51);
    /* 0072ac51: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072ac54: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0072ac57: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0072ac5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072ac5d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072ac64: mov esp, ebp */ r_esp = r_ebp;
    /* 0072ac66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ac67: ret  */ FN_RET(0x0072a963); r_esp += 4; return;
}

void f_0072a9bb(void)
{
    FN_ENTER(0x0072a9bb);
    goto L_0072a9bb;
L_0072a70c:; BB(0x0072a70c);
    /* 0072a70c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0072a70f: mov edx, eax */ r_edx = r_eax;
    /* 0072a711: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a714: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0072a717: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072a719: je 0x72ac51 */ if (fZ) goto L_0072ac51;
L_0072a71f:; BB(0x0072a71f);
    /* 0072a71f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072a722: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0072a725: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0072a727: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0072a72a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0072a72d:; BB(0x0072a72d);
    /* 0072a72d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072a730: mov edx, eax */ r_edx = r_eax;
    /* 0072a732: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a735: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0072a738: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a73a: je 0x72a70c */ if (fZ) goto L_0072a70c;
L_0072a73c:; BB(0x0072a73c);
    /* 0072a73c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a73f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0072a741: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0072a744: ja 0x72abf0 */ if ((!fC&&!fZ)) goto L_0072abf0;
L_0072a74a:; BB(0x0072a74a);
    /* 0072a74a: mov eax, dword ptr [eax*4 + 0x970af4] */ r_eax = R32((u32)(r_eax*4+0x970af4u));
    /* 0072a751: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0072a9bb:; BB(0x0072a9bb);
    /* 0072a9bb: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 0072a9c2: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0072a9c4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72a9c9u); f_008581c5();
    /* 0072a9c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072a9ca: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0072a9cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a9cf: je 0x72ac2a */ if (fZ) goto L_0072ac2a;
L_0072a9d5:; BB(0x0072a9d5);
    /* 0072a9d5: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 0072a9dc: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0072a9e3: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0072a9e7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a9ea: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0072a9ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072a9ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072a9ef: call 0x72cf54 */ r_esp -= 4; W32(r_esp, 0x72a9f4u); f_0072cf54();
    /* 0072a9f4: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0072a9f7: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_0072a9fe:; BB(0x0072a9fe);
    /* 0072a9fe: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0072aa01: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0072aa03: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072aa0a: add dword ptr [ebp - 0x1c], 0x1c */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072aa0e: jmp 0x72abf0 */ goto L_0072abf0;
L_0072abf0:; BB(0x0072abf0);
    /* 0072abf0: add dword ptr [ebp - 0x18], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072abf4: jmp 0x72a72d */ goto L_0072a72d;
L_0072ac2a:; BB(0x0072ac2a);
    /* 0072ac2a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072ac2c: jmp 0x72a9fe */ goto L_0072a9fe;
L_0072ac51:; BB(0x0072ac51);
    /* 0072ac51: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072ac54: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0072ac57: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0072ac5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072ac5d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072ac64: mov esp, ebp */ r_esp = r_ebp;
    /* 0072ac66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ac67: ret  */ FN_RET(0x0072a9bb); r_esp += 4; return;
}

void f_0072aa13(void)
{
    FN_ENTER(0x0072aa13);
    goto L_0072aa13;
L_0072a70c:; BB(0x0072a70c);
    /* 0072a70c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0072a70f: mov edx, eax */ r_edx = r_eax;
    /* 0072a711: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a714: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0072a717: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072a719: je 0x72ac51 */ if (fZ) goto L_0072ac51;
L_0072a71f:; BB(0x0072a71f);
    /* 0072a71f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072a722: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0072a725: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0072a727: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0072a72a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0072a72d:; BB(0x0072a72d);
    /* 0072a72d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072a730: mov edx, eax */ r_edx = r_eax;
    /* 0072a732: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a735: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0072a738: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a73a: je 0x72a70c */ if (fZ) goto L_0072a70c;
L_0072a73c:; BB(0x0072a73c);
    /* 0072a73c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a73f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0072a741: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0072a744: ja 0x72abf0 */ if ((!fC&&!fZ)) goto L_0072abf0;
L_0072a74a:; BB(0x0072a74a);
    /* 0072a74a: mov eax, dword ptr [eax*4 + 0x970af4] */ r_eax = R32((u32)(r_eax*4+0x970af4u));
    /* 0072a751: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0072aa13:; BB(0x0072aa13);
    /* 0072aa13: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 0072aa1a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0072aa1c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72aa21u); f_008581c5();
    /* 0072aa21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072aa22: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0072aa25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072aa27: je 0x72ac31 */ if (fZ) goto L_0072ac31;
L_0072aa2d:; BB(0x0072aa2d);
    /* 0072aa2d: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 0072aa34: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0072aa3b: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0072aa3f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072aa42: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0072aa45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072aa46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072aa47: call 0x72cb9c */ r_esp -= 4; W32(r_esp, 0x72aa4cu); f_0072cb9c();
    /* 0072aa4c: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0072aa4f: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_0072aa56:; BB(0x0072aa56);
    /* 0072aa56: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0072aa59: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0072aa5b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072aa62: add dword ptr [ebp - 0x1c], 0x1c */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072aa66: jmp 0x72abf0 */ goto L_0072abf0;
L_0072abf0:; BB(0x0072abf0);
    /* 0072abf0: add dword ptr [ebp - 0x18], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072abf4: jmp 0x72a72d */ goto L_0072a72d;
L_0072ac31:; BB(0x0072ac31);
    /* 0072ac31: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072ac33: jmp 0x72aa56 */ goto L_0072aa56;
L_0072ac51:; BB(0x0072ac51);
    /* 0072ac51: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072ac54: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0072ac57: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0072ac5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072ac5d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072ac64: mov esp, ebp */ r_esp = r_ebp;
    /* 0072ac66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ac67: ret  */ FN_RET(0x0072aa13); r_esp += 4; return;
}

void f_0072aa6b(void)
{
    FN_ENTER(0x0072aa6b);
    goto L_0072aa6b;
L_0072a70c:; BB(0x0072a70c);
    /* 0072a70c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0072a70f: mov edx, eax */ r_edx = r_eax;
    /* 0072a711: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a714: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0072a717: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072a719: je 0x72ac51 */ if (fZ) goto L_0072ac51;
L_0072a71f:; BB(0x0072a71f);
    /* 0072a71f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072a722: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0072a725: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0072a727: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0072a72a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0072a72d:; BB(0x0072a72d);
    /* 0072a72d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072a730: mov edx, eax */ r_edx = r_eax;
    /* 0072a732: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a735: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0072a738: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a73a: je 0x72a70c */ if (fZ) goto L_0072a70c;
L_0072a73c:; BB(0x0072a73c);
    /* 0072a73c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a73f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0072a741: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0072a744: ja 0x72abf0 */ if ((!fC&&!fZ)) goto L_0072abf0;
L_0072a74a:; BB(0x0072a74a);
    /* 0072a74a: mov eax, dword ptr [eax*4 + 0x970af4] */ r_eax = R32((u32)(r_eax*4+0x970af4u));
    /* 0072a751: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0072aa6b:; BB(0x0072aa6b);
    /* 0072aa6b: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 0072aa72: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0072aa74: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72aa79u); f_008581c5();
    /* 0072aa79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072aa7a: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0072aa7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072aa7f: je 0x72ac38 */ if (fZ) goto L_0072ac38;
L_0072aa85:; BB(0x0072aa85);
    /* 0072aa85: mov dword ptr [ebp - 0x7c], 1 */ W32((u32)(r_ebp+0xffffff84u), 0x1u);
    /* 0072aa8c: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0072aa93: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0072aa97: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072aa9a: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0072aa9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072aa9e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072aa9f: call 0x72d8c0 */ r_esp -= 4; W32(r_esp, 0x72aaa4u); f_0072d8c0();
    /* 0072aaa4: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0072aaa7: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_0072aaae:; BB(0x0072aaae);
    /* 0072aaae: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0072aab1: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0072aab3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072aaba: add dword ptr [ebp - 0x1c], 0x1c */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072aabe: jmp 0x72abf0 */ goto L_0072abf0;
L_0072abf0:; BB(0x0072abf0);
    /* 0072abf0: add dword ptr [ebp - 0x18], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072abf4: jmp 0x72a72d */ goto L_0072a72d;
L_0072ac38:; BB(0x0072ac38);
    /* 0072ac38: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072ac3a: jmp 0x72aaae */ goto L_0072aaae;
L_0072ac51:; BB(0x0072ac51);
    /* 0072ac51: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072ac54: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0072ac57: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0072ac5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072ac5d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072ac64: mov esp, ebp */ r_esp = r_ebp;
    /* 0072ac66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ac67: ret  */ FN_RET(0x0072aa6b); r_esp += 4; return;
}

void f_0072aac3(void)
{
    FN_ENTER(0x0072aac3);
    goto L_0072aac3;
L_0072a70c:; BB(0x0072a70c);
    /* 0072a70c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0072a70f: mov edx, eax */ r_edx = r_eax;
    /* 0072a711: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a714: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0072a717: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072a719: je 0x72ac51 */ if (fZ) goto L_0072ac51;
L_0072a71f:; BB(0x0072a71f);
    /* 0072a71f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072a722: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0072a725: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0072a727: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0072a72a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0072a72d:; BB(0x0072a72d);
    /* 0072a72d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072a730: mov edx, eax */ r_edx = r_eax;
    /* 0072a732: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a735: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0072a738: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a73a: je 0x72a70c */ if (fZ) goto L_0072a70c;
L_0072a73c:; BB(0x0072a73c);
    /* 0072a73c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a73f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0072a741: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0072a744: ja 0x72abf0 */ if ((!fC&&!fZ)) goto L_0072abf0;
L_0072a74a:; BB(0x0072a74a);
    /* 0072a74a: mov eax, dword ptr [eax*4 + 0x970af4] */ r_eax = R32((u32)(r_eax*4+0x970af4u));
    /* 0072a751: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0072aac3:; BB(0x0072aac3);
    /* 0072aac3: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 0072aacd: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0072aacf: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72aad4u); f_008581c5();
    /* 0072aad4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072aad5: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0072aad8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072aada: je 0x72ac3f */ if (fZ) goto L_0072ac3f;
L_0072aae0:; BB(0x0072aae0);
    /* 0072aae0: mov dword ptr [ebp - 0x84], 1 */ W32((u32)(r_ebp+0xffffff7cu), 0x1u);
    /* 0072aaea: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0072aaf1: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0072aaf5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072aaf8: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0072aafb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072aafc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072aafd: call 0x729f3c */ r_esp -= 4; W32(r_esp, 0x72ab02u); f_00729f3c();
    /* 0072ab02: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0072ab05: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_0072ab0f:; BB(0x0072ab0f);
    /* 0072ab0f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0072ab12: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0072ab14: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072ab1b: add dword ptr [ebp - 0x1c], 0x2c */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072ab1f: jmp 0x72abf0 */ goto L_0072abf0;
L_0072abf0:; BB(0x0072abf0);
    /* 0072abf0: add dword ptr [ebp - 0x18], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072abf4: jmp 0x72a72d */ goto L_0072a72d;
L_0072ac3f:; BB(0x0072ac3f);
    /* 0072ac3f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072ac41: jmp 0x72ab0f */ goto L_0072ab0f;
L_0072ac51:; BB(0x0072ac51);
    /* 0072ac51: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072ac54: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0072ac57: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0072ac5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072ac5d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072ac64: mov esp, ebp */ r_esp = r_ebp;
    /* 0072ac66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ac67: ret  */ FN_RET(0x0072aac3); r_esp += 4; return;
}

void f_0072ab24(void)
{
    FN_ENTER(0x0072ab24);
    goto L_0072ab24;
L_0072a70c:; BB(0x0072a70c);
    /* 0072a70c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0072a70f: mov edx, eax */ r_edx = r_eax;
    /* 0072a711: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a714: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0072a717: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072a719: je 0x72ac51 */ if (fZ) goto L_0072ac51;
L_0072a71f:; BB(0x0072a71f);
    /* 0072a71f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072a722: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0072a725: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0072a727: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0072a72a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0072a72d:; BB(0x0072a72d);
    /* 0072a72d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072a730: mov edx, eax */ r_edx = r_eax;
    /* 0072a732: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a735: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0072a738: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a73a: je 0x72a70c */ if (fZ) goto L_0072a70c;
L_0072a73c:; BB(0x0072a73c);
    /* 0072a73c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a73f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0072a741: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0072a744: ja 0x72abf0 */ if ((!fC&&!fZ)) goto L_0072abf0;
L_0072a74a:; BB(0x0072a74a);
    /* 0072a74a: mov eax, dword ptr [eax*4 + 0x970af4] */ r_eax = R32((u32)(r_eax*4+0x970af4u));
    /* 0072a751: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0072ab24:; BB(0x0072ab24);
    /* 0072ab24: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 0072ab2e: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0072ab30: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72ab35u); f_008581c5();
    /* 0072ab35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072ab36: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0072ab3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072ab3e: je 0x72ac46 */ if (fZ) goto L_0072ac46;
L_0072ab44:; BB(0x0072ab44);
    /* 0072ab44: mov dword ptr [ebp - 0x8c], 1 */ W32((u32)(r_ebp+0xffffff74u), 0x1u);
    /* 0072ab4e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0072ab55: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0072ab59: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072ab5c: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0072ab62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072ab63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ab64: call 0x7298c8 */ r_esp -= 4; W32(r_esp, 0x72ab69u); f_007298c8();
    /* 0072ab69: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0072ab6f: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0072ab79:; BB(0x0072ab79);
    /* 0072ab79: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0072ab7c: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0072ab7e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072ab85: add dword ptr [ebp - 0x1c], 0x24 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072ab89: jmp 0x72abf0 */ goto L_0072abf0;
L_0072abf0:; BB(0x0072abf0);
    /* 0072abf0: add dword ptr [ebp - 0x18], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072abf4: jmp 0x72a72d */ goto L_0072a72d;
L_0072ac46:; BB(0x0072ac46);
    /* 0072ac46: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072ac48: jmp 0x72ab79 */ goto L_0072ab79;
L_0072ac51:; BB(0x0072ac51);
    /* 0072ac51: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072ac54: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0072ac57: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0072ac5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072ac5d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072ac64: mov esp, ebp */ r_esp = r_ebp;
    /* 0072ac66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ac67: ret  */ FN_RET(0x0072ab24); r_esp += 4; return;
}

void f_0072ab8b(void)
{
    FN_ENTER(0x0072ab8b);
    goto L_0072ab8b;
L_0072a70c:; BB(0x0072a70c);
    /* 0072a70c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0072a70f: mov edx, eax */ r_edx = r_eax;
    /* 0072a711: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a714: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0072a717: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072a719: je 0x72ac51 */ if (fZ) goto L_0072ac51;
L_0072a71f:; BB(0x0072a71f);
    /* 0072a71f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072a722: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0072a725: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0072a727: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0072a72a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0072a72d:; BB(0x0072a72d);
    /* 0072a72d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072a730: mov edx, eax */ r_edx = r_eax;
    /* 0072a732: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072a735: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0072a738: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072a73a: je 0x72a70c */ if (fZ) goto L_0072a70c;
L_0072a73c:; BB(0x0072a73c);
    /* 0072a73c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072a73f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0072a741: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0072a744: ja 0x72abf0 */ if ((!fC&&!fZ)) goto L_0072abf0;
L_0072a74a:; BB(0x0072a74a);
    /* 0072a74a: mov eax, dword ptr [eax*4 + 0x970af4] */ r_eax = R32((u32)(r_eax*4+0x970af4u));
    /* 0072a751: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0072ab8b:; BB(0x0072ab8b);
    /* 0072ab8b: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
    /* 0072ab95: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0072ab97: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72ab9cu); f_008581c5();
    /* 0072ab9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072ab9d: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0072aba3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072aba5: je 0x72ac4d */ if (fZ) goto L_0072ac4d;
L_0072abab:; BB(0x0072abab);
    /* 0072abab: mov dword ptr [ebp - 0x94], 1 */ W32((u32)(r_ebp+0xffffff6cu), 0x1u);
    /* 0072abb5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0072abbc: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0072abc0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072abc3: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0072abc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072abca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072abcb: call 0x72acf4 */ r_esp -= 4; W32(r_esp, 0x72abd0u); f_0072acf4();
    /* 0072abd0: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 0072abd6: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_0072abe0:; BB(0x0072abe0);
    /* 0072abe0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0072abe3: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0072abe5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072abec: add dword ptr [ebp - 0x1c], 0x14 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0072abf0:; BB(0x0072abf0);
    /* 0072abf0: add dword ptr [ebp - 0x18], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0072abf4: jmp 0x72a72d */ goto L_0072a72d;
L_0072ac4d:; BB(0x0072ac4d);
    /* 0072ac4d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072ac4f: jmp 0x72abe0 */ goto L_0072abe0;
L_0072ac51:; BB(0x0072ac51);
    /* 0072ac51: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072ac54: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0072ac57: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0072ac5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072ac5d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072ac64: mov esp, ebp */ r_esp = r_ebp;
    /* 0072ac66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ac67: ret  */ FN_RET(0x0072ab8b); r_esp += 4; return;
}

void f_0072ac80(void) /* sub_72AC80 */
{
    FN_ENTER(0x0072ac80);
    /* 0072ac80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ac81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072ac83: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072ac85: call 0x72aca4 */ r_esp -= 4; W32(r_esp, 0x72ac8au); f_0072aca4();
    /* 0072ac8a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0072ac8e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072ac90: jne 0x72ac96 */ if (!fZ) goto L_0072ac96;
L_0072ac92:; BB(0x0072ac92);
    /* 0072ac92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072ac93: ret 4 */ FN_RET(0x0072ac80); r_esp += 8; return;
L_0072ac96:; BB(0x0072ac96);
    /* 0072ac96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ac97: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72ac9cu); f_00857e98();
    /* 0072ac9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072ac9d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072ac9e: ret 4 */ FN_RET(0x0072ac80); r_esp += 8; return;
}

void f_0072aca4(void) /* sub_72ACA4 */
{
    FN_ENTER(0x0072aca4);
    /* 0072aca4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072aca5: mov ebp, esp */ r_ebp = r_esp;
    /* 0072aca7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072aca9: push 0x8f1288 */ { u32 v = 0x8f1288u; r_esp -= 4; W32(r_esp, v); }
    /* 0072acae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0072acb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072acb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0072acbc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072acbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0072acc2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0072acc5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0072acc8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0072accb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0072acce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072acd1: mov dword ptr [ecx], 0xb402c8 */ W32((u32)(r_ecx), 0xb402c8u);
    /* 0072acd7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072acde: call 0x729830 */ r_esp -= 4; W32(r_esp, 0x72ace3u); f_00729830();
    /* 0072ace3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072ace6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072aced: mov esp, ebp */ r_esp = r_ebp;
    /* 0072acef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072acf0: ret  */ FN_RET(0x0072aca4); r_esp += 4; return;
}

void f_0072acf4(void) /* sub_72ACF4 */
{
    FN_ENTER(0x0072acf4);
    /* 0072acf4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072acf5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072acf6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0072acf8: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0072acfc: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0072ad01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072ad02: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072ad04: call 0x729838 */ r_esp -= 4; W32(r_esp, 0x72ad09u); f_00729838();
    /* 0072ad09: mov dword ptr [ebp], 0xb402c8 */ W32((u32)(r_ebp), 0xb402c8u);
    /* 0072ad10: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0072ad13: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0072ad16: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0072ad19: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0072ad1c: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0072ad1f: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0072ad22: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 0072ad25: mov dword ptr [ebp + 0x14], esi */ W32((u32)(r_ebp+0x14u), r_esi);
    /* 0072ad28: mov eax, ebp */ r_eax = r_ebp;
    /* 0072ad2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ad2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072ad2c: ret 8 */ FN_RET(0x0072acf4); r_esp += 12; return;
}

void f_0072ad30(void) /* sub_72AD30 */
{
    FN_ENTER(0x0072ad30);
    /* 0072ad30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ad31: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072ad33: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072ad35: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 0072ad3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072ad3b: call 0x729838 */ r_esp -= 4; W32(r_esp, 0x72ad40u); f_00729838();
    /* 0072ad40: mov dword ptr [ebx], 0xb402c8 */ W32((u32)(r_ebx), 0xb402c8u);
    /* 0072ad46: mov eax, ebx */ r_eax = r_ebx;
    /* 0072ad48: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
    /* 0072ad4f: mov dword ptr [ebx + 0xc], 0 */ W32((u32)(r_ebx+0xcu), 0x0u);
    /* 0072ad56: mov dword ptr [ebx + 0x10], 0 */ W32((u32)(r_ebx+0x10u), 0x0u);
    /* 0072ad5d: mov dword ptr [ebx + 0x14], 0 */ W32((u32)(r_ebx+0x14u), 0x0u);
    /* 0072ad64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072ad65: ret 4 */ FN_RET(0x0072ad30); r_esp += 8; return;
}

void f_0072ad68(void) /* sub_72AD68 */
{
    FN_ENTER(0x0072ad68);
    /* 0072ad68: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ad69: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072ad6b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072ad6d: call 0x72ad8c */ r_esp -= 4; W32(r_esp, 0x72ad72u); f_0072ad8c();
    /* 0072ad72: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0072ad76: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072ad78: jne 0x72ad7e */ if (!fZ) goto L_0072ad7e;
L_0072ad7a:; BB(0x0072ad7a);
    /* 0072ad7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072ad7b: ret 4 */ FN_RET(0x0072ad68); r_esp += 8; return;
L_0072ad7e:; BB(0x0072ad7e);
    /* 0072ad7e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ad7f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72ad84u); f_00857e98();
    /* 0072ad84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072ad85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072ad86: ret 4 */ FN_RET(0x0072ad68); r_esp += 8; return;
}

void f_0072ad8c(void) /* sub_72AD8C */
{
    FN_ENTER(0x0072ad8c);
    /* 0072ad8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072ad8d: mov ebp, esp */ r_ebp = r_esp;
    /* 0072ad8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072ad91: push 0x8f12a4 */ { u32 v = 0x8f12a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0072ad96: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0072ad9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072ad9d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0072ada4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072ada7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0072adaa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0072adad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0072adb0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0072adb3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0072adb6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0072adbd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072adc0: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0072adc3: mov dword ptr [ecx], 0xb40300 */ W32((u32)(r_ecx), 0xb40300u);
    /* 0072adc9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072adcb: je 0x72add5 */ if (fZ) goto L_0072add5;
L_0072adcd:; BB(0x0072adcd);
    /* 0072adcd: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 0072add1: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072add3: jne 0x72ae13 */ if (!fZ) goto L_0072ae13;
L_0072add5:; BB(0x0072add5);
    /* 0072add5: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0072add8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072adda: je 0x72ade4 */ if (fZ) goto L_0072ade4;
L_0072addc:; BB(0x0072addc);
    /* 0072addc: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 0072ade0: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072ade2: jne 0x72adfe */ if (!fZ) goto L_0072adfe;
L_0072ade4:; BB(0x0072ade4);
    /* 0072ade4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072adeb: call 0x72aca4 */ r_esp -= 4; W32(r_esp, 0x72adf0u); f_0072aca4();
    /* 0072adf0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072adf3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072adfa: mov esp, ebp */ r_esp = r_ebp;
    /* 0072adfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072adfd: ret  */ FN_RET(0x0072ad8c); r_esp += 4; return;
L_0072adfe:; BB(0x0072adfe);
    /* 0072adfe: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072ae03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ae04: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 0072ae08: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72ae0du); f_00857e98();
    /* 0072ae0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072ae0e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072ae11: jmp 0x72ade4 */ goto L_0072ade4;
L_0072ae13:; BB(0x0072ae13);
    /* 0072ae13: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072ae18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ae19: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 0072ae1d: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72ae22u); f_00857e98();
    /* 0072ae22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072ae23: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072ae26: jmp 0x72add5 */ goto L_0072add5;
}

void f_0072ae28(void) /* sub_72AE28 */
{
    FN_ENTER(0x0072ae28);
    /* 0072ae28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072ae29: mov esi, ecx */ r_esi = r_ecx;
    /* 0072ae2b: mov ecx, esi */ r_ecx = r_esi;
    /* 0072ae2d: movsx eax, word ptr [esp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 0072ae32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072ae33: call 0x72ad30 */ r_esp -= 4; W32(r_esp, 0x72ae38u); f_0072ad30();
    /* 0072ae38: mov dword ptr [esi], 0xb40300 */ W32((u32)(r_esi), 0xb40300u);
    /* 0072ae3e: mov edx, 0x36 */ r_edx = 0x36u;
    /* 0072ae43: mov byte ptr [esi + 0x1c], dl */ W8((u32)(r_esi+0x1cu), (u8)r_edx);
    /* 0072ae46: mov byte ptr [esi + 0x1d], dl */ W8((u32)(r_esi+0x1du), (u8)r_edx);
    /* 0072ae49: mov dword ptr [esi + 0x14], 0x41600000 */ W32((u32)(r_esi+0x14u), 0x41600000u);
    /* 0072ae50: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072ae52: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 0072ae55: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 0072ae58: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0072ae5d: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 0072ae60: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 0072ae63: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0072ae66: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0072ae69: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 0072ae6c: mov eax, esi */ r_eax = r_esi;
    /* 0072ae6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072ae6f: ret 8 */ FN_RET(0x0072ae28); r_esp += 12; return;
}

void f_0072ae74(void) /* sub_72AE74 */
{
    FN_ENTER(0x0072ae74);
    /* 0072ae74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072ae75: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072ae76: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ae77: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072ae7d: mov esi, ecx */ r_esi = r_ecx;
    /* 0072ae7f: mov ebx, dword ptr [esp + 0xa4] */ r_ebx = R32((u32)(r_esp+0xa4u));
    /* 0072ae86: movzx edi, word ptr [esi + 4] */ r_edi = (u32)R16((u32)(r_esi+0x4u));
    /* 0072ae8a: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072ae90: je 0x72b303 */ if (fZ) goto L_0072b303;
L_0072ae96:; BB(0x0072ae96);
    /* 0072ae96: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 0072ae99: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0072ae9c: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 0072ae9f: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0072aea1: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0072aea3: fcomp dword ptr [ebx + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x40u))); FPOP();
    /* 0072aea6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072aea8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072aea9: jb 0x72b36d */ if (fC) goto L_0072b36d;
L_0072aeaf:; BB(0x0072aeaf);
    /* 0072aeaf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0072aeb1: fcom dword ptr [ebx + 0x48] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x48u))); 
    /* 0072aeb4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072aeb6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072aeb7: ja 0x72b37d */ if ((!fC&&!fZ)) goto L_0072b37d;
L_0072aebd:; BB(0x0072aebd);
    /* 0072aebd: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0072aec0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0072aec2: jl 0x72b38b */ if ((fS!=fO)) goto L_0072b38b;
L_0072aec8:; BB(0x0072aec8);
    /* 0072aec8: fld dword ptr [0x970d9c] */ FPUSH(R_F32((u32)(0x970d9cu)));
    /* 0072aece: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0072aed1: fdivr dword ptr [0x970da0] */ ST(0) = R_F32((u32)(0x970da0u)) / ST(0);
    /* 0072aed7: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 0072aeda: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
    /* 0072aedd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072aedf: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0072aee3: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0072aee7: test edi, 0x200 */ {  u32 a = r_edi; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072aeed: je 0x72b16d */ if (fZ) goto L_0072b16d;
L_0072aef3:; BB(0x0072aef3);
    /* 0072aef3: movzx edi, byte ptr [esi + 0x1c] */ r_edi = (u32)R8((u32)(r_esi+0x1cu));
    /* 0072aef7: cmp edi, 0x36 */ {  u32 a = r_edi; u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072aefa: je 0x72afb5 */ if (fZ) goto L_0072afb5;
L_0072af00:; BB(0x0072af00);
    /* 0072af00: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0072af04: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0072af09: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x72af0eu); f_0082bb30();
    /* 0072af0e: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 0072af14: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x72af19u); f_00829cc8();
    /* 0072af19: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0072af1e: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0072af23: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x72af28u); f_0082bb60();
    /* 0072af28: mov eax, edi */ r_eax = r_edi;
    /* 0072af2a: call 0x72b3a1 */ r_esp -= 4; W32(r_esp, 0x72af2fu); f_0072b3a1();
    /* 0072af2f: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0072af33: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0072af37: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0072af3b: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0072af3f: fld dword ptr [0x970d98] */ FPUSH(R_F32((u32)(0x970d98u)));
    /* 0072af45: fld dword ptr [0x970d94] */ FPUSH(R_F32((u32)(0x970d94u)));
    /* 0072af4b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072af4d: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0072af4f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0072af51: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0072af55: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072af57: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0072af59: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0072af5d: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0072af61: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 0072af65: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 0072af69: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0072af6b: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0072af6d: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0072af71: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0072af74: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0072af76: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072af78: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0072af7c: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0072af7e: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0072af80: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0072af82: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0072af86: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0072af89: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0072af8b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0072af8d: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0072af91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072af92: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x72af97u); f_0071ba34();
    /* 0072af97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072af99: je 0x72afac */ if (fZ) goto L_0072afac;
L_0072af9b:; BB(0x0072af9b);
    /* 0072af9b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072af9c: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0072afa0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072afa3: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 0072afa7: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x72afacu); f_0082b440();
L_0072afac:; BB(0x0072afac);
    /* 0072afac: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x72afb1u); f_004ac444();
    /* 0072afb1: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
L_0072afb5:; BB(0x0072afb5);
    /* 0072afb5: fld dword ptr [0x970d98] */ FPUSH(R_F32((u32)(0x970d98u)));
    /* 0072afbb: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0072afbd: movzx edi, byte ptr [esi + 0x1d] */ r_edi = (u32)R8((u32)(r_esi+0x1du));
    /* 0072afc1: cmp edi, 0x36 */ {  u32 a = r_edi; u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072afc4: je 0x72b087 */ if (fZ) goto L_0072b087;
L_0072afca:; BB(0x0072afca);
    /* 0072afca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072afcc: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0072afd0: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0072afd5: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x72afdau); f_0082bb30();
    /* 0072afda: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 0072afe0: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x72afe5u); f_00829cc8();
    /* 0072afe5: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0072afea: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0072afef: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x72aff4u); f_0082bb60();
    /* 0072aff4: mov eax, edi */ r_eax = r_edi;
    /* 0072aff6: call 0x72b3a1 */ r_esp -= 4; W32(r_esp, 0x72affbu); f_0072b3a1();
    /* 0072affb: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0072afff: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0072b003: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0072b007: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0072b00b: fld dword ptr [0x970d98] */ FPUSH(R_F32((u32)(0x970d98u)));
    /* 0072b011: fld dword ptr [0x970d94] */ FPUSH(R_F32((u32)(0x970d94u)));
    /* 0072b017: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072b019: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0072b01b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0072b01d: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0072b021: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072b023: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0072b025: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0072b029: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0072b02d: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 0072b031: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 0072b035: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0072b037: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0072b039: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 0072b03d: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0072b040: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0072b042: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072b044: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 0072b048: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0072b04a: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0072b04c: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0072b04e: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0072b052: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0072b055: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0072b057: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0072b059: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0072b05d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b05e: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x72b063u); f_0071ba34();
    /* 0072b063: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b065: je 0x72b078 */ if (fZ) goto L_0072b078;
L_0072b067:; BB(0x0072b067);
    /* 0072b067: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b068: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0072b06c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072b06f: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 0072b073: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x72b078u); f_0082b440();
L_0072b078:; BB(0x0072b078);
    /* 0072b078: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x72b07du); f_004ac444();
    /* 0072b07d: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0072b081: fld dword ptr [0x970d98] */ FPUSH(R_F32((u32)(0x970d98u)));
L_0072b087:; BB(0x0072b087);
    /* 0072b087: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0072b089: movzx edi, byte ptr [esi + 0x28] */ r_edi = (u32)R8((u32)(r_esi+0x28u));
    /* 0072b08d: cmp edi, 0x36 */ {  u32 a = r_edi; u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b090: je 0x72b162 */ if (fZ) goto L_0072b162;
L_0072b096:; BB(0x0072b096);
    /* 0072b096: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072b098: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0072b09c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0072b0a1: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x72b0a6u); f_0082bb30();
    /* 0072b0a6: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 0072b0ac: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x72b0b1u); f_00829cc8();
    /* 0072b0b1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0072b0b6: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0072b0bb: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x72b0c0u); f_0082bb60();
    /* 0072b0c0: mov eax, edi */ r_eax = r_edi;
    /* 0072b0c2: call 0x72b3a1 */ r_esp -= 4; W32(r_esp, 0x72b0c7u); f_0072b3a1();
    /* 0072b0c7: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0072b0cb: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0072b0cf: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0072b0d3: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0072b0d7: fld dword ptr [0x970d98] */ FPUSH(R_F32((u32)(0x970d98u)));
    /* 0072b0dd: fld dword ptr [0x970d94] */ FPUSH(R_F32((u32)(0x970d94u)));
    /* 0072b0e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072b0e5: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0072b0e7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0072b0e9: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 0072b0ed: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072b0ef: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0072b0f1: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 0072b0f8: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 0072b0fc: mov dword ptr [esp + 0x78], edi */ W32((u32)(r_esp+0x78u), r_edi);
    /* 0072b100: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 0072b104: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0072b106: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0072b108: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 0072b10f: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0072b112: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0072b114: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072b116: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 0072b11d: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0072b11f: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0072b121: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0072b123: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0072b12a: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0072b12d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0072b12f: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0072b131: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 0072b138: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b139: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x72b13eu); f_0071ba34();
    /* 0072b13e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b140: je 0x72b153 */ if (fZ) goto L_0072b153;
L_0072b142:; BB(0x0072b142);
    /* 0072b142: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b143: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0072b147: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072b14a: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0072b14e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x72b153u); f_0082b440();
L_0072b153:; BB(0x0072b153);
    /* 0072b153: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x72b158u); f_004ac444();
    /* 0072b158: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0072b15c: fld dword ptr [0x970d98] */ FPUSH(R_F32((u32)(0x970d98u)));
L_0072b162:; BB(0x0072b162);
    /* 0072b162: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0072b164: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0072b168: jmp 0x72b203 */ goto L_0072b203;
L_0072b16d:; BB(0x0072b16d);
    /* 0072b16d: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0072b171: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x72b176u); f_007a902c();
    /* 0072b176: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 0072b17a: test edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b180: je 0x72b1ae */ if (fZ) goto L_0072b1ae;
L_0072b182:; BB(0x0072b182);
    /* 0072b182: fld dword ptr [0x970d98] */ FPUSH(R_F32((u32)(0x970d98u)));
    /* 0072b188: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 0072b18c: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0072b190: movzx ecx, byte ptr [esi + 0x1c] */ r_ecx = (u32)R8((u32)(r_esi+0x1cu));
    /* 0072b194: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 0072b197: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072b199: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0072b19d: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0072b1a1: mov eax, ebx */ r_eax = r_ebx;
    /* 0072b1a3: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 0072b1a7: call 0x72b3d9 */ r_esp -= 4; W32(r_esp, 0x72b1acu); f_0072b3d9();
    /* 0072b1ac: jmp 0x72b1d6 */ goto L_0072b1d6;
L_0072b1ae:; BB(0x0072b1ae);
    /* 0072b1ae: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0072b1b2: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 0072b1b6: movzx ecx, byte ptr [esi + 0x1c] */ r_ecx = (u32)R8((u32)(r_esi+0x1cu));
    /* 0072b1ba: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 0072b1bd: mov eax, ebx */ r_eax = r_ebx;
    /* 0072b1bf: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0072b1c3: call 0x72b3d9 */ r_esp -= 4; W32(r_esp, 0x72b1c8u); f_0072b3d9();
    /* 0072b1c8: fld dword ptr [0x970d98] */ FPUSH(R_F32((u32)(0x970d98u)));
    /* 0072b1ce: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 0072b1d2: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_0072b1d6:; BB(0x0072b1d6);
    /* 0072b1d6: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x72b1dbu); f_007a9044();
    /* 0072b1db: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0072b1df: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 0072b1e3: movzx ecx, byte ptr [esi + 0x1d] */ r_ecx = (u32)R8((u32)(r_esi+0x1du));
    /* 0072b1e7: mov edi, dword ptr [esi + 0x2c] */ r_edi = R32((u32)(r_esi+0x2cu));
    /* 0072b1ea: mov eax, ebx */ r_eax = r_ebx;
    /* 0072b1ec: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0072b1f0: call 0x72b3d9 */ r_esp -= 4; W32(r_esp, 0x72b1f5u); f_0072b3d9();
    /* 0072b1f5: fld dword ptr [0x970d98] */ FPUSH(R_F32((u32)(0x970d98u)));
    /* 0072b1fb: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 0072b1ff: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_0072b203:; BB(0x0072b203);
    /* 0072b203: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 0072b207: test edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b20d: je 0x72b23a */ if (fZ) goto L_0072b23a;
L_0072b20f:; BB(0x0072b20f);
    /* 0072b20f: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0072b213: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 0072b216: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0072b21a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0072b21c: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0072b21f: mov dword ptr [esp + 0xc], 1 */ W32((u32)(r_esp+0xcu), 0x1u);
    /* 0072b227: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0072b22b: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0072b22f: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0072b233: call 0x71d484 */ r_esp -= 4; W32(r_esp, 0x72b238u); f_0071d484();
    /* 0072b238: jmp 0x72b267 */ goto L_0072b267;
L_0072b23a:; BB(0x0072b23a);
    /* 0072b23a: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0072b23e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0072b242: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0072b245: mov edx, 1 */ r_edx = 0x1u;
    /* 0072b24a: mov dword ptr [esp + 8], 0x47c35000 */ W32((u32)(r_esp+0x8u), 0x47c35000u);
    /* 0072b252: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0072b256: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0072b25a: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0072b262: call 0x71d484 */ r_esp -= 4; W32(r_esp, 0x72b267u); f_0071d484();
L_0072b267:; BB(0x0072b267);
    /* 0072b267: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 0072b26b: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b270: jne 0x72b32b */ if (!fZ) goto L_0072b32b;
L_0072b276:; BB(0x0072b276);
    /* 0072b276: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b27b: jne 0x72b30f */ if (!fZ) goto L_0072b30f;
L_0072b281:; BB(0x0072b281);
    /* 0072b281: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
L_0072b284:; BB(0x0072b284);
    /* 0072b284: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b289: je 0x72b2a5 */ if (fZ) goto L_0072b2a5;
L_0072b28b:; BB(0x0072b28b);
    /* 0072b28b: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 0072b28f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072b291: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072b296: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b297: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072b29a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b29b: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x72b2a0u); f_0071d58c();
    /* 0072b2a0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072b2a3: jmp 0x72b2bd */ goto L_0072b2bd;
L_0072b2a5:; BB(0x0072b2a5);
    /* 0072b2a5: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 0072b2a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0072b2ab: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072b2b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072b2b1: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072b2b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072b2b5: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x72b2bau); f_0071d58c();
    /* 0072b2ba: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0072b2bd:; BB(0x0072b2bd);
    /* 0072b2bd: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072b2c0: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x72b2c5u); f_007ac344();
    /* 0072b2c5: fld dword ptr [0x970d84] */ FPUSH(R_F32((u32)(0x970d84u)));
    /* 0072b2cb: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
    /* 0072b2ce: fadd dword ptr [ebx + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x18u));
    /* 0072b2d1: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0072b2d5: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 0072b2d9: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0072b2dc: fadd dword ptr [eax*4 + 0x970d00] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x970d00u));
    /* 0072b2e3: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0072b2e5: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0072b2e9: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0072b2ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0072b2ef: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072b2f4: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072b2f7: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072b2fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072b2fb: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x72b300u); f_0071d58c();
    /* 0072b300: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0072b303:; BB(0x0072b303);
    /* 0072b303: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072b309: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072b30a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072b30b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072b30c: ret 4 */ FN_RET(0x0072ae74); r_esp += 8; return;
L_0072b30f:; BB(0x0072b30f);
    /* 0072b30f: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 0072b315: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072b317: je 0x72b321 */ if (fZ) goto L_0072b321;
L_0072b319:; BB(0x0072b319);
    /* 0072b319: mov edi, dword ptr [edx + 0x24] */ r_edi = R32((u32)(r_edx+0x24u));
    /* 0072b31c: jmp 0x72b284 */ goto L_0072b284;
L_0072b321:; BB(0x0072b321);
    /* 0072b321: mov edi, 0xffffea00 */ r_edi = 0xffffea00u;
    /* 0072b326: jmp 0x72b284 */ goto L_0072b284;
L_0072b32b:; BB(0x0072b32b);
    /* 0072b32b: fld dword ptr [ebx + 0x18] */ FPUSH(R_F32((u32)(r_ebx+0x18u)));
    /* 0072b32e: fmul dword ptr [0x970d8c] */ ST(0) = ST(0) * R_F32((u32)(0x970d8cu));
    /* 0072b334: fadd dword ptr [ebx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10u));
    /* 0072b337: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0072b33b: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072b33e: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x72b343u); f_007ac344();
    /* 0072b343: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072b344: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0072b348: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0072b34c: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0072b34f: fadd dword ptr [eax*4 + 0x970d00] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x970d00u));
    /* 0072b356: fmul dword ptr [0x970d88] */ ST(0) = ST(0) * R_F32((u32)(0x970d88u));
    /* 0072b35c: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 0072b360: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 0072b364: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0072b368: jmp 0x72b276 */ goto L_0072b276;
L_0072b36d:; BB(0x0072b36d);
    /* 0072b36d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072b36f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072b371: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072b377: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072b378: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072b379: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072b37a: ret 4 */ FN_RET(0x0072ae74); r_esp += 8; return;
L_0072b37d:; BB(0x0072b37d);
    /* 0072b37d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072b37f: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072b385: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072b386: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072b387: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072b388: ret 4 */ FN_RET(0x0072ae74); r_esp += 8; return;
L_0072b38b:; BB(0x0072b38b);
    /* 0072b38b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072b38d: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072b393: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072b394: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072b395: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072b396: ret 4 */ FN_RET(0x0072ae74); r_esp += 8; return;
}

