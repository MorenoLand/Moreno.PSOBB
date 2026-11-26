#include "protos.h"

void f_00720000(void)
{
    FN_ENTER(0x00720000);
    /* 00720000: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 00720001: and al, 0x18 */ {  u32 a = (u8)r_eax; u32 b = 0x18u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
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
    /* 00720305: ret 0x10 */ FN_RET(0x00720000); r_esp += 20; return;
}

void f_00720020(void)
{
    FN_ENTER(0x00720020);
    /* 00720020: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
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
    /* 00720305: ret 0x10 */ FN_RET(0x00720020); r_esp += 20; return;
}

void f_00720033(void)
{
    FN_ENTER(0x00720033);
    /* 00720033: int 0xde */ UNSUP(0x00720033, "int 0xde");
    /* 00720035: ljmp 0x5cd9:0xfcd8cbd9 */ UNSUP(0x00720035, "ljmp 0x5cd9:0xfcd8cbd9");
    /* 0072003c: and al, 0x28 */ {  u32 a = (u8)r_eax; u32 b = 0x28u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
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
    /* 00720305: ret 0x10 */ FN_RET(0x00720033); r_esp += 20; return;
}

void f_00720041(void)
{
    FN_ENTER(0x00720041);
    /* 00720041: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 00720042: and al, 0x44 */ {  u32 a = (u8)r_eax; u32 b = 0x44u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
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
    /* 00720305: ret 0x10 */ FN_RET(0x00720041); r_esp += 20; return;
}

void f_00720043(void)
{
    FN_ENTER(0x00720043);
    /* 00720043: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
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
    /* 00720305: ret 0x10 */ FN_RET(0x00720043); r_esp += 20; return;
}

void f_00720045(void)
{
    FN_ENTER(0x00720045);
    /* 00720045: adc al, 0x24 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
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
    /* 00720305: ret 0x10 */ FN_RET(0x00720045); r_esp += 20; return;
}

void f_00720046(void)
{
    FN_ENTER(0x00720046);
    /* 00720046: and al, 0xc7 */ {  u32 a = (u8)r_eax; u32 b = 0xc7u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00720048: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00720049: and al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0072004b: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0072004d: les edi, ptr [esi] */ UNSUP(0x0072004d, "les edi, ptr [esi]");
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
    /* 00720305: ret 0x10 */ FN_RET(0x00720046); r_esp += 20; return;
}

void f_00720047(void)
{
    FN_ENTER(0x00720047);
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
    /* 00720305: ret 0x10 */ FN_RET(0x00720047); r_esp += 20; return;
}

void f_00720050(void)
{
    FN_ENTER(0x00720050);
    /* 00720050: or al, 0x24 */ {  u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
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
    /* 00720305: ret 0x10 */ FN_RET(0x00720050); r_esp += 20; return;
}

void f_00720054(void)
{
    FN_ENTER(0x00720054);
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
    /* 00720305: ret 0x10 */ FN_RET(0x00720054); r_esp += 20; return;
}

void f_00720061(void)
{
    FN_ENTER(0x00720061);
    goto L_00720061;
L_00720042:; BB(0x00720042);
    /* 00720042: and al, 0x44 */ {  u32 a = (u8)r_eax; u32 b = 0x44u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00720044: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00720047: mov dword ptr [esp + 0x20], 0x3ec40000 */ W32((u32)(r_esp+0x20u), 0x3ec40000u);
    /* 0072004f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00720052: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720054: fchs  */ ST(0) = -ST(0);
    /* 00720056: fmul dword ptr [0x97044c] */ ST(0) = ST(0) * R_F32((u32)(0x97044cu));
    /* 0072005c: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 00720060: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
L_00720061:; BB(0x00720061);
    /* 00720061: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00720062: and cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00720063: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00720064: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00720065: and dh, bl */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00720066: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 00720067: jmp 0x720042 */ goto L_00720042;
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
    /* 00720305: ret 0x10 */ FN_RET(0x00720061); r_esp += 20; return;
}

void f_00720062(void)
{
    FN_ENTER(0x00720062);
    goto L_00720062;
L_00720042:; BB(0x00720042);
    /* 00720042: and al, 0x44 */ {  u32 a = (u8)r_eax; u32 b = 0x44u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00720044: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00720047: mov dword ptr [esp + 0x20], 0x3ec40000 */ W32((u32)(r_esp+0x20u), 0x3ec40000u);
    /* 0072004f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00720052: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720054: fchs  */ ST(0) = -ST(0);
    /* 00720056: fmul dword ptr [0x97044c] */ ST(0) = ST(0) * R_F32((u32)(0x97044cu));
    /* 0072005c: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 00720060: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
L_00720062:; BB(0x00720062);
    /* 00720062: and cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00720063: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00720064: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00720065: and dh, bl */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00720066: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 00720067: jmp 0x720042 */ goto L_00720042;
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
    /* 00720305: ret 0x10 */ FN_RET(0x00720062); r_esp += 20; return;
}

void f_00720063(void)
{
    FN_ENTER(0x00720063);
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
    /* 00720305: ret 0x10 */ FN_RET(0x00720063); r_esp += 20; return;
}

void f_00720065(void)
{
    FN_ENTER(0x00720065);
    goto L_00720065;
L_00720042:; BB(0x00720042);
    /* 00720042: and al, 0x44 */ {  u32 a = (u8)r_eax; u32 b = 0x44u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00720044: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00720047: mov dword ptr [esp + 0x20], 0x3ec40000 */ W32((u32)(r_esp+0x20u), 0x3ec40000u);
    /* 0072004f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00720052: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720054: fchs  */ ST(0) = -ST(0);
    /* 00720056: fmul dword ptr [0x97044c] */ ST(0) = ST(0) * R_F32((u32)(0x97044cu));
    /* 0072005c: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 00720060: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00720063: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
L_00720065:; BB(0x00720065);
    /* 00720065: and dh, bl */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00720066: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 00720067: jmp 0x720042 */ goto L_00720042;
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
    /* 00720305: ret 0x10 */ FN_RET(0x00720065); r_esp += 20; return;
}

void f_00720066(void)
{
    FN_ENTER(0x00720066);
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
    /* 00720305: ret 0x10 */ FN_RET(0x00720066); r_esp += 20; return;
}

void f_0072006f(void)
{
    FN_ENTER(0x0072006f);
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
    /* 00720305: ret 0x10 */ FN_RET(0x0072006f); r_esp += 20; return;
}

void f_00720070(void)
{
    FN_ENTER(0x00720070);
    /* 00720070: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
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
    /* 00720305: ret 0x10 */ FN_RET(0x00720070); r_esp += 20; return;
}

void f_00720072(void)
{
    FN_ENTER(0x00720072);
    /* 00720072: sbb al, 0x24 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
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
    /* 00720305: ret 0x10 */ FN_RET(0x00720072); r_esp += 20; return;
}

void f_00720074(void)
{
    FN_ENTER(0x00720074);
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
    /* 00720305: ret 0x10 */ FN_RET(0x00720074); r_esp += 20; return;
}

void f_00720308(void) /* sub_720308 */
{
    FN_ENTER(0x00720308);
    /* 00720308: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00720309: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072030a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072030d: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00720311: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00720315: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00720319: fcomp dword ptr [0x970414] */ fx_compare(ST(0), R_F32((u32)(0x970414u))); FPOP();
    /* 0072031f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00720321: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00720322: jae 0x720334 */ if (!fC) goto L_00720334;
L_00720324:; BB(0x00720324);
    /* 00720324: fld dword ptr [0x97040c] */ FPUSH(R_F32((u32)(0x97040cu)));
    /* 0072032a: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 0072032e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00720332: jmp 0x72033e */ goto L_0072033e;
L_00720334:; BB(0x00720334);
    /* 00720334: fld dword ptr [0x970410] */ FPUSH(R_F32((u32)(0x970410u)));
    /* 0072033a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
L_0072033e:; BB(0x0072033e);
    /* 0072033e: fld dword ptr [0x970408] */ FPUSH(R_F32((u32)(0x970408u)));
    /* 00720344: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 00720348: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0072034c: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 0072034f: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 00720353: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00720357: fld dword ptr [0x9703fc] */ FPUSH(R_F32((u32)(0x9703fcu)));
    /* 0072035d: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 0072035f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00720361: fst dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0));
    /* 00720364: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00720366: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 00720369: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0072036b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0072036d: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00720370: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 00720373: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00720375: fchs  */ ST(0) = -ST(0);
    /* 00720377: fmul dword ptr [0x970404] */ ST(0) = ST(0) * R_F32((u32)(0x970404u));
    /* 0072037d: fst dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0));
    /* 00720380: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00720382: mov dword ptr [ebp + 0x20], 0x3ec40000 */ W32((u32)(r_ebp+0x20u), 0x3ec40000u);
    /* 00720389: fld dword ptr [edi + 0x20] */ FPUSH(R_F32((u32)(r_edi+0x20u)));
    /* 0072038c: fld dword ptr [edi + 0x20] */ FPUSH(R_F32((u32)(r_edi+0x20u)));
    /* 0072038f: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 00720391: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00720393: fmul dword ptr [edi + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x28u));
    /* 00720396: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00720398: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072039a: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0072039d: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 007203a0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007203a2: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 007203a5: fmul dword ptr [edi + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x28u));
    /* 007203a8: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 007203ab: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x7203b0u); f_0082bb74();
    /* 007203b0: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 007203b4: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007203b8: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 007203ba: fsubr dword ptr [0x9703f8] */ ST(0) = R_F32((u32)(0x9703f8u)) - ST(0);
    /* 007203c0: fdiv dword ptr [0x9703fc] */ ST(0) = ST(0) / R_F32((u32)(0x9703fcu));
    /* 007203c6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007203c8: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 007203cb: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 007203ce: fld dword ptr [edi + 0x20] */ FPUSH(R_F32((u32)(r_edi+0x20u)));
    /* 007203d1: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 007203d3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007203d5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007203d7: fmul dword ptr [edi + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x28u));
    /* 007203da: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007203dc: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 007203df: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007203e1: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 007203e4: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x7203e9u); f_0082bb74();
    /* 007203e9: fld dword ptr [0x9703f4] */ FPUSH(R_F32((u32)(0x9703f4u)));
    /* 007203ef: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 007203f3: fmul dword ptr [edi + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x28u));
    /* 007203f6: fcom dword ptr [0x9703f0] */ fx_compare(ST(0), R_F32((u32)(0x9703f0u))); 
    /* 007203fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007203fe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007203ff: jae 0x72040b */ if (!fC) goto L_0072040b;
L_00720401:; BB(0x00720401);
    /* 00720401: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00720403: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00720406: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00720407: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00720408: ret 0x18 */ FN_RET(0x00720308); r_esp += 28; return;
L_0072040b:; BB(0x0072040b);
    /* 0072040b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0072040e: fadd dword ptr [0x970410] */ ST(0) = ST(0) + R_F32((u32)(0x970410u));
    /* 00720414: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 00720417: fld dword ptr [edi + 0x20] */ FPUSH(R_F32((u32)(r_edi+0x20u)));
    /* 0072041a: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0072041c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072041e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720420: fmul dword ptr [edi + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x28u));
    /* 00720423: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00720425: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 00720428: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0072042a: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0072042d: mov dword ptr [ebp + 0x20], 0x3f020000 */ W32((u32)(r_ebp+0x20u), 0x3f020000u);
    /* 00720434: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x720439u); f_0082bb74();
    /* 00720439: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072043c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072043d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072043e: ret 0x18 */ FN_RET(0x00720308); r_esp += 28; return;
}

void f_00720444(void) /* sub_720444 */
{
    FN_ENTER(0x00720444);
    /* 00720444: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00720445: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00720446: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00720447: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00720448: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072044e: mov edi, ecx */ r_edi = r_ecx;
    /* 00720450: movzx eax, byte ptr [edi + 0x85] */ r_eax = (u32)R8((u32)(r_edi+0x85u));
    /* 00720457: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00720459: mov esi, dword ptr [esp + 0x98] */ r_esi = R32((u32)(r_esp+0x98u));
    /* 00720460: mov ebp, dword ptr [esp + 0x9c] */ r_ebp = R32((u32)(r_esp+0x9cu));
    /* 00720467: je 0x72061c */ if (fZ) goto L_0072061c;
L_0072046d:; BB(0x0072046d);
    /* 0072046d: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00720471: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00720475: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00720476: mov ecx, edi */ r_ecx = r_edi;
    /* 00720478: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00720479: call 0x71db74 */ r_esp -= 4; W32(r_esp, 0x72047eu); f_0071db74();
    /* 0072047e: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00720482: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00720486: fld dword ptr [edi + 0x9c] */ FPUSH(R_F32((u32)(r_edi+0x9cu)));
    /* 0072048c: fld dword ptr [edi + 0xa0] */ FPUSH(R_F32((u32)(r_edi+0xa0u)));
    /* 00720492: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720494: fst dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0));
    /* 00720498: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072049a: fst dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0));
    /* 0072049e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007204a0: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 007204a2: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007204a4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007204a6: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007204a8: fmul qword ptr [0x970300] */ ST(0) = ST(0) * R_F64((u32)(0x970300u));
    /* 007204ae: fdiv qword ptr [0x9702f8] */ ST(0) = ST(0) / R_F64((u32)(0x9702f8u));
    /* 007204b4: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 007204ba: fnstcw word ptr [esp + 0x58] */ W16((u32)(r_esp+0x58u), fcw);
    /* 007204be: movzx eax, word ptr [esp + 0x58] */ r_eax = (u32)R16((u32)(r_esp+0x58u));
    /* 007204c3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007204c8: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 007204cc: fldcw word ptr [esp + 0x60] */ fcw = R16((u32)(r_esp+0x60u));
    /* 007204d0: fistp dword ptr [esp + 0x68] */ W32((u32)(r_esp+0x68u), (u32)fx_int32(ST(0))); FPOP();
    /* 007204d4: fldcw word ptr [esp + 0x58] */ fcw = R16((u32)(r_esp+0x58u));
    /* 007204d8: mov ebx, dword ptr [esp + 0x68] */ r_ebx = R32((u32)(r_esp+0x68u));
    /* 007204dc: add edx, 0x178 */ {  u32 a = r_edx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007204e2: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 007204e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007204e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007204e8: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x7204edu); f_00836208();
    /* 007204ed: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 007204f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007204f7: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 007204fb: fdivr dword ptr [0x9703e8] */ ST(0) = R_F32((u32)(0x9703e8u)) / ST(0);
    /* 00720501: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00720505: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00720507: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x72050cu); f_0082ddd8();
    /* 0072050c: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00720510: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00720514: fmul dword ptr [esp + 0x78] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x78u));
    /* 00720518: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 0072051c: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00720520: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00720522: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x720527u); f_0082dcbc();
    /* 00720527: fmul dword ptr [esp + 0x78] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x78u));
    /* 0072052b: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 0072052f: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00720533: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00720537: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0072053b: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 00720543: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 00720547: mov dword ptr [esp + 0x30], 3 */ W32((u32)(r_esp+0x30u), 0x3u);
    /* 0072054f: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00720553: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 00720557: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0072055b: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 0072055f: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 00720563: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 00720567: lea esi, [ebx + 0x4000] */ r_esi = (u32)(r_ebx+0x4000u);
    /* 0072056d: mov ecx, esi */ r_ecx = r_esi;
    /* 0072056f: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x720574u); f_0082ddd8();
    /* 00720574: fmul dword ptr [0x9703e4] */ ST(0) = ST(0) * R_F32((u32)(0x9703e4u));
    /* 0072057a: fmul dword ptr [edi + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x94u));
    /* 00720580: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00720583: fadd dword ptr [esp + 0x70] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x70u));
    /* 00720587: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00720589: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0072058d: mov ecx, esi */ r_ecx = r_esi;
    /* 0072058f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x720594u); f_0082dcbc();
    /* 00720594: fmul dword ptr [0x9703e4] */ ST(0) = ST(0) * R_F32((u32)(0x9703e4u));
    /* 0072059a: fmul dword ptr [edi + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x94u));
    /* 007205a0: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 007205a3: fadd dword ptr [esp + 0x74] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x74u));
    /* 007205a7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007205a9: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007205ad: add ebx, 0xffffc000 */ {  u32 a = r_ebx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007205b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007205b5: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7205bau); f_0082ddd8();
    /* 007205ba: fmul dword ptr [0x9703e4] */ ST(0) = ST(0) * R_F32((u32)(0x9703e4u));
    /* 007205c0: fmul dword ptr [edi + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x94u));
    /* 007205c6: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 007205c9: fadd dword ptr [esp + 0x70] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x70u));
    /* 007205cd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007205cf: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007205d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007205d5: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7205dau); f_0082dcbc();
    /* 007205da: fmul dword ptr [0x9703e4] */ ST(0) = ST(0) * R_F32((u32)(0x9703e4u));
    /* 007205e0: fmul dword ptr [edi + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x94u));
    /* 007205e6: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 007205e9: fadd dword ptr [esp + 0x74] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x74u));
    /* 007205ed: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007205ef: fld dword ptr [0x9703e0] */ FPUSH(R_F32((u32)(0x9703e0u)));
    /* 007205f5: fadd dword ptr [edi + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x54u));
    /* 007205f8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007205fc: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00720600: mov dword ptr [esp + 4], 3 */ W32((u32)(r_esp+0x4u), 0x3u);
    /* 00720608: mov dword ptr [esp + 0xc], 0x20 */ W32((u32)(r_esp+0xcu), 0x20u);
    /* 00720610: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00720614: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00720617: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x72061cu); f_0082b5d8();
L_0072061c:; BB(0x0072061c);
    /* 0072061c: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00720622: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00720623: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00720624: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00720625: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00720626: ret 0x10 */ FN_RET(0x00720444); r_esp += 20; return;
}

void f_0072062c(void) /* sub_72062C */
{
    FN_ENTER(0x0072062c);
    /* 0072062c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072062d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072062e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072062f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00720630: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00720633: mov esi, ecx */ r_esi = r_ecx;
    /* 00720635: mov edx, dword ptr [esi + 0x8c] */ r_edx = R32((u32)(r_esi+0x8cu));
    /* 0072063b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072063d: mov ebp, dword ptr [esp + 0x84] */ r_ebp = R32((u32)(r_esp+0x84u));
    /* 00720644: je 0x720935 */ if (fZ) goto L_00720935;
L_0072064a:; BB(0x0072064a);
    /* 0072064a: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0072064d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0072064f: jl 0x720935 */ if ((fS!=fO)) goto L_00720935;
L_00720655:; BB(0x00720655);
    /* 00720655: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00720656: call 0x7ac264 */ r_esp -= 4; W32(r_esp, 0x72065bu); f_007ac264();
    /* 0072065b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072065c: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00720660: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00720664: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00720667: fadd dword ptr [eax*4 + 0x9702f0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9702f0u));
    /* 0072066e: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00720671: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00720675: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00720678: jge 0x7206b4 */ if ((fS==fO)) goto L_007206b4;
L_0072067a:; BB(0x0072067a);
    /* 0072067a: mov edx, eax */ r_edx = r_eax;
    /* 0072067c: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0072067f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00720681: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00720685: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 00720689: fmul dword ptr [0x9703dc] */ ST(0) = ST(0) * R_F32((u32)(0x9703dcu));
    /* 0072068f: fnstcw word ptr [esp + 0x50] */ W16((u32)(r_esp+0x50u), fcw);
    /* 00720693: movzx eax, word ptr [esp + 0x50] */ r_eax = (u32)R16((u32)(r_esp+0x50u));
    /* 00720698: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072069d: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 007206a1: fldcw word ptr [esp + 0x58] */ fcw = R16((u32)(r_esp+0x58u));
    /* 007206a5: fistp qword ptr [esp + 0x60] */ W64((u32)(r_esp+0x60u), (u64)fx_int64(ST(0))); FPOP();
    /* 007206a9: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 007206ad: movzx ebx, byte ptr [esp + 0x60] */ r_ebx = (u32)R8((u32)(r_esp+0x60u));
    /* 007206b2: jmp 0x7206b9 */ goto L_007206b9;
L_007206b4:; BB(0x007206b4);
    /* 007206b4: mov ebx, 0xff */ r_ebx = 0xffu;
L_007206b9:; BB(0x007206b9);
    /* 007206b9: fld dword ptr [0x9703d8] */ FPUSH(R_F32((u32)(0x9703d8u)));
    /* 007206bf: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 007206c2: fld dword ptr [0x9703d4] */ FPUSH(R_F32((u32)(0x9703d4u)));
    /* 007206c8: fld dword ptr [0x9703cc] */ FPUSH(R_F32((u32)(0x9703ccu)));
    /* 007206ce: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 007206d1: fdivr dword ptr [0x9703d0] */ ST(0) = R_F32((u32)(0x9703d0u)) / ST(0);
    /* 007206d7: mov edi, dword ptr [esp + 0x88] */ r_edi = R32((u32)(r_esp+0x88u));
    /* 007206de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007206e0: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007206e4: fadd dword ptr [ebp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4u));
    /* 007206e7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007206e9: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 007206ed: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007206f1: and edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007206f7: shl ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 007206fa: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 007206fc: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00720701: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x720706u); f_0082bb30();
    /* 00720706: mov ecx, dword ptr [0xa9cd48] */ r_ecx = R32((u32)(0xa9cd48u));
    /* 0072070c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x720711u); f_00829cc8();
    /* 00720711: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00720713: mov edx, edi */ r_edx = r_edi;
    /* 00720715: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x72071au); f_0082bb60();
    /* 0072071a: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0072071e: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00720722: fld dword ptr [0x9703c8] */ FPUSH(R_F32((u32)(0x9703c8u)));
    /* 00720728: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0072072c: fld dword ptr [0x9703c4] */ FPUSH(R_F32((u32)(0x9703c4u)));
    /* 00720732: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 00720736: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720738: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0072073c: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00720740: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00720742: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00720746: mov dword ptr [esp + 0x30], 0x3f110000 */ W32((u32)(r_esp+0x30u), 0x3f110000u);
    /* 0072074e: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00720752: mov dword ptr [esp + 0x34], 0x3f6d0000 */ W32((u32)(r_esp+0x34u), 0x3f6d0000u);
    /* 0072075a: lea edi, [esp + 0x20] */ r_edi = (u32)(r_esp+0x20u);
    /* 0072075e: mov dword ptr [esp + 0x38], 0x3f210000 */ W32((u32)(r_esp+0x38u), 0x3f210000u);
    /* 00720766: mov dword ptr [esp + 0x3c], 0x3f800000 */ W32((u32)(r_esp+0x3cu), 0x3f800000u);
    /* 0072076e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072076f: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x720774u); f_0071bbb4();
    /* 00720774: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00720775: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00720779: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072077c: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00720780: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x720785u); f_0082b440();
    /* 00720785: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00720789: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 0072078d: fcomp dword ptr [0x9703b0] */ fx_compare(ST(0), R_F32((u32)(0x9703b0u))); FPOP();
    /* 00720793: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00720795: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00720796: jae 0x7207a8 */ if (!fC) goto L_007207a8;
L_00720798:; BB(0x00720798);
    /* 00720798: fld dword ptr [0x9703c8] */ FPUSH(R_F32((u32)(0x9703c8u)));
    /* 0072079e: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 007207a0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007207a2: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 007207a6: jmp 0x7207be */ goto L_007207be;
L_007207a8:; BB(0x007207a8);
    /* 007207a8: fadd dword ptr [0x9703ac] */ ST(0) = ST(0) + R_F32((u32)(0x9703acu));
    /* 007207ae: fadd dword ptr [esp + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x6cu));
    /* 007207b2: fld dword ptr [0x9703c8] */ FPUSH(R_F32((u32)(0x9703c8u)));
    /* 007207b8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007207ba: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
L_007207be:; BB(0x007207be);
    /* 007207be: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 007207c2: fld dword ptr [0x9703c4] */ FPUSH(R_F32((u32)(0x9703c4u)));
    /* 007207c8: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 007207cc: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 007207d0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007207d2: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007207d6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007207d8: mov dword ptr [esp + 0x30], 0x3f310000 */ W32((u32)(r_esp+0x30u), 0x3f310000u);
    /* 007207e0: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 007207e4: mov dword ptr [esp + 0x34], 0x3f6d0000 */ W32((u32)(r_esp+0x34u), 0x3f6d0000u);
    /* 007207ec: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 007207f0: mov dword ptr [esp + 0x38], 0x3f410000 */ W32((u32)(r_esp+0x38u), 0x3f410000u);
    /* 007207f8: mov dword ptr [esp + 0x3c], 0x3f800000 */ W32((u32)(r_esp+0x3cu), 0x3f800000u);
    /* 00720800: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00720801: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x720806u); f_0071bbb4();
    /* 00720806: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00720807: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 0072080b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072080e: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00720812: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x720817u); f_0082b440();
    /* 00720817: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 0072081b: fcomp dword ptr [0x9703b0] */ fx_compare(ST(0), R_F32((u32)(0x9703b0u))); FPOP();
    /* 00720821: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00720823: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00720824: jbe 0x72089b */ if ((fC||fZ)) goto L_0072089b;
L_00720826:; BB(0x00720826);
    /* 00720826: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0072082a: fld dword ptr [0x9703c8] */ FPUSH(R_F32((u32)(0x9703c8u)));
    /* 00720830: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00720834: fld dword ptr [0x9703c4] */ FPUSH(R_F32((u32)(0x9703c4u)));
    /* 0072083a: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0072083e: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00720842: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00720844: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720846: fadd dword ptr [0x9703ac] */ ST(0) = ST(0) + R_F32((u32)(0x9703acu));
    /* 0072084c: fadd dword ptr [esp + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x6cu));
    /* 00720850: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720852: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00720856: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0072085a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072085c: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00720860: mov dword ptr [esp + 0x30], 0x3f210000 */ W32((u32)(r_esp+0x30u), 0x3f210000u);
    /* 00720868: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0072086c: mov dword ptr [esp + 0x34], 0x3f6d0000 */ W32((u32)(r_esp+0x34u), 0x3f6d0000u);
    /* 00720874: mov dword ptr [esp + 0x38], 0x3f310000 */ W32((u32)(r_esp+0x38u), 0x3f310000u);
    /* 0072087c: mov dword ptr [esp + 0x3c], 0x3f800000 */ W32((u32)(r_esp+0x3cu), 0x3f800000u);
    /* 00720884: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00720885: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x72088au); f_0071bbb4();
    /* 0072088a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072088b: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 0072088f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00720892: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00720896: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x72089bu); f_0082b440();
L_0072089b:; BB(0x0072089b);
    /* 0072089b: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x7208a0u); f_004ac444();
    /* 007208a0: fld dword ptr [0x9703a0] */ FPUSH(R_F32((u32)(0x9703a0u)));
    /* 007208a6: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 007208aa: fld dword ptr [0x9703b0] */ FPUSH(R_F32((u32)(0x9703b0u)));
    /* 007208b0: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 007208b4: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007208b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007208b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007208b9: jae 0x7208cf */ if (!fC) goto L_007208cf;
L_007208bb:; BB(0x007208bb);
    /* 007208bb: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 007208bf: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007208c1: fmul dword ptr [0x97039c] */ ST(0) = ST(0) * R_F32((u32)(0x97039cu));
    /* 007208c7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007208c9: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007208cd: jmp 0x7208d5 */ goto L_007208d5;
L_007208cf:; BB(0x007208cf);
    /* 007208cf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007208d1: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
L_007208d5:; BB(0x007208d5);
    /* 007208d5: fld dword ptr [0x970398] */ FPUSH(R_F32((u32)(0x970398u)));
    /* 007208db: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 007208df: fld dword ptr [0x970394] */ FPUSH(R_F32((u32)(0x970394u)));
    /* 007208e5: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 007208e8: fdivr dword ptr [0x9703d0] */ ST(0) = R_F32((u32)(0x9703d0u)) / ST(0);
    /* 007208ee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007208f0: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007208f4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007208f8: mov dword ptr [esp + 8], 0x47c35000 */ W32((u32)(r_esp+0x8u), 0x47c35000u);
    /* 00720900: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00720902: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
    /* 0072090a: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0072090d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00720911: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00720915: call 0x71d484 */ r_esp -= 4; W32(r_esp, 0x72091au); f_0071d484();
    /* 0072091a: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0072091e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00720920: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 00720925: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00720926: push dword ptr [esi + 0x8c] */ { u32 v = R32((u32)(r_esi+0x8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0072092c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072092d: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x720932u); f_0071d58c();
    /* 00720932: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00720935:; BB(0x00720935);
    /* 00720935: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00720938: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00720939: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072093a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072093b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072093c: ret 8 */ FN_RET(0x0072062c); r_esp += 12; return;
}

void f_00720675(void)
{
    FN_ENTER(0x00720675);
    /* 00720675: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00720678: jge 0x7206b4 */ if ((fS==fO)) goto L_007206b4;
L_0072067a:; BB(0x0072067a);
    /* 0072067a: mov edx, eax */ r_edx = r_eax;
    /* 0072067c: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0072067f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00720681: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00720685: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 00720689: fmul dword ptr [0x9703dc] */ ST(0) = ST(0) * R_F32((u32)(0x9703dcu));
    /* 0072068f: fnstcw word ptr [esp + 0x50] */ W16((u32)(r_esp+0x50u), fcw);
    /* 00720693: movzx eax, word ptr [esp + 0x50] */ r_eax = (u32)R16((u32)(r_esp+0x50u));
    /* 00720698: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072069d: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 007206a1: fldcw word ptr [esp + 0x58] */ fcw = R16((u32)(r_esp+0x58u));
    /* 007206a5: fistp qword ptr [esp + 0x60] */ W64((u32)(r_esp+0x60u), (u64)fx_int64(ST(0))); FPOP();
    /* 007206a9: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 007206ad: movzx ebx, byte ptr [esp + 0x60] */ r_ebx = (u32)R8((u32)(r_esp+0x60u));
    /* 007206b2: jmp 0x7206b9 */ goto L_007206b9;
L_007206b4:; BB(0x007206b4);
    /* 007206b4: mov ebx, 0xff */ r_ebx = 0xffu;
L_007206b9:; BB(0x007206b9);
    /* 007206b9: fld dword ptr [0x9703d8] */ FPUSH(R_F32((u32)(0x9703d8u)));
    /* 007206bf: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 007206c2: fld dword ptr [0x9703d4] */ FPUSH(R_F32((u32)(0x9703d4u)));
    /* 007206c8: fld dword ptr [0x9703cc] */ FPUSH(R_F32((u32)(0x9703ccu)));
    /* 007206ce: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 007206d1: fdivr dword ptr [0x9703d0] */ ST(0) = R_F32((u32)(0x9703d0u)) / ST(0);
    /* 007206d7: mov edi, dword ptr [esp + 0x88] */ r_edi = R32((u32)(r_esp+0x88u));
    /* 007206de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007206e0: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007206e4: fadd dword ptr [ebp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4u));
    /* 007206e7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007206e9: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 007206ed: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007206f1: and edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007206f7: shl ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 007206fa: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 007206fc: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00720701: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x720706u); f_0082bb30();
    /* 00720706: mov ecx, dword ptr [0xa9cd48] */ r_ecx = R32((u32)(0xa9cd48u));
    /* 0072070c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x720711u); f_00829cc8();
    /* 00720711: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00720713: mov edx, edi */ r_edx = r_edi;
    /* 00720715: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x72071au); f_0082bb60();
    /* 0072071a: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0072071e: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00720722: fld dword ptr [0x9703c8] */ FPUSH(R_F32((u32)(0x9703c8u)));
    /* 00720728: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0072072c: fld dword ptr [0x9703c4] */ FPUSH(R_F32((u32)(0x9703c4u)));
    /* 00720732: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 00720736: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720738: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0072073c: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00720740: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00720742: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00720746: mov dword ptr [esp + 0x30], 0x3f110000 */ W32((u32)(r_esp+0x30u), 0x3f110000u);
    /* 0072074e: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00720752: mov dword ptr [esp + 0x34], 0x3f6d0000 */ W32((u32)(r_esp+0x34u), 0x3f6d0000u);
    /* 0072075a: lea edi, [esp + 0x20] */ r_edi = (u32)(r_esp+0x20u);
    /* 0072075e: mov dword ptr [esp + 0x38], 0x3f210000 */ W32((u32)(r_esp+0x38u), 0x3f210000u);
    /* 00720766: mov dword ptr [esp + 0x3c], 0x3f800000 */ W32((u32)(r_esp+0x3cu), 0x3f800000u);
    /* 0072076e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072076f: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x720774u); f_0071bbb4();
    /* 00720774: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00720775: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00720779: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072077c: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00720780: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x720785u); f_0082b440();
    /* 00720785: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00720789: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 0072078d: fcomp dword ptr [0x9703b0] */ fx_compare(ST(0), R_F32((u32)(0x9703b0u))); FPOP();
    /* 00720793: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00720795: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00720796: jae 0x7207a8 */ if (!fC) goto L_007207a8;
L_00720798:; BB(0x00720798);
    /* 00720798: fld dword ptr [0x9703c8] */ FPUSH(R_F32((u32)(0x9703c8u)));
    /* 0072079e: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 007207a0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007207a2: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 007207a6: jmp 0x7207be */ goto L_007207be;
L_007207a8:; BB(0x007207a8);
    /* 007207a8: fadd dword ptr [0x9703ac] */ ST(0) = ST(0) + R_F32((u32)(0x9703acu));
    /* 007207ae: fadd dword ptr [esp + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x6cu));
    /* 007207b2: fld dword ptr [0x9703c8] */ FPUSH(R_F32((u32)(0x9703c8u)));
    /* 007207b8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007207ba: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
L_007207be:; BB(0x007207be);
    /* 007207be: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 007207c2: fld dword ptr [0x9703c4] */ FPUSH(R_F32((u32)(0x9703c4u)));
    /* 007207c8: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 007207cc: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 007207d0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007207d2: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007207d6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007207d8: mov dword ptr [esp + 0x30], 0x3f310000 */ W32((u32)(r_esp+0x30u), 0x3f310000u);
    /* 007207e0: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 007207e4: mov dword ptr [esp + 0x34], 0x3f6d0000 */ W32((u32)(r_esp+0x34u), 0x3f6d0000u);
    /* 007207ec: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 007207f0: mov dword ptr [esp + 0x38], 0x3f410000 */ W32((u32)(r_esp+0x38u), 0x3f410000u);
    /* 007207f8: mov dword ptr [esp + 0x3c], 0x3f800000 */ W32((u32)(r_esp+0x3cu), 0x3f800000u);
    /* 00720800: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00720801: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x720806u); f_0071bbb4();
    /* 00720806: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00720807: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 0072080b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072080e: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00720812: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x720817u); f_0082b440();
    /* 00720817: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 0072081b: fcomp dword ptr [0x9703b0] */ fx_compare(ST(0), R_F32((u32)(0x9703b0u))); FPOP();
    /* 00720821: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00720823: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00720824: jbe 0x72089b */ if ((fC||fZ)) goto L_0072089b;
L_00720826:; BB(0x00720826);
    /* 00720826: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0072082a: fld dword ptr [0x9703c8] */ FPUSH(R_F32((u32)(0x9703c8u)));
    /* 00720830: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00720834: fld dword ptr [0x9703c4] */ FPUSH(R_F32((u32)(0x9703c4u)));
    /* 0072083a: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0072083e: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00720842: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00720844: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720846: fadd dword ptr [0x9703ac] */ ST(0) = ST(0) + R_F32((u32)(0x9703acu));
    /* 0072084c: fadd dword ptr [esp + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x6cu));
    /* 00720850: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00720852: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00720856: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0072085a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072085c: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00720860: mov dword ptr [esp + 0x30], 0x3f210000 */ W32((u32)(r_esp+0x30u), 0x3f210000u);
    /* 00720868: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0072086c: mov dword ptr [esp + 0x34], 0x3f6d0000 */ W32((u32)(r_esp+0x34u), 0x3f6d0000u);
    /* 00720874: mov dword ptr [esp + 0x38], 0x3f310000 */ W32((u32)(r_esp+0x38u), 0x3f310000u);
    /* 0072087c: mov dword ptr [esp + 0x3c], 0x3f800000 */ W32((u32)(r_esp+0x3cu), 0x3f800000u);
    /* 00720884: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00720885: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x72088au); f_0071bbb4();
    /* 0072088a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072088b: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 0072088f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00720892: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00720896: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x72089bu); f_0082b440();
L_0072089b:; BB(0x0072089b);
    /* 0072089b: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x7208a0u); f_004ac444();
    /* 007208a0: fld dword ptr [0x9703a0] */ FPUSH(R_F32((u32)(0x9703a0u)));
    /* 007208a6: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 007208aa: fld dword ptr [0x9703b0] */ FPUSH(R_F32((u32)(0x9703b0u)));
    /* 007208b0: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 007208b4: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007208b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007208b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007208b9: jae 0x7208cf */ if (!fC) goto L_007208cf;
L_007208bb:; BB(0x007208bb);
    /* 007208bb: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 007208bf: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007208c1: fmul dword ptr [0x97039c] */ ST(0) = ST(0) * R_F32((u32)(0x97039cu));
    /* 007208c7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007208c9: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007208cd: jmp 0x7208d5 */ goto L_007208d5;
L_007208cf:; BB(0x007208cf);
    /* 007208cf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007208d1: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
L_007208d5:; BB(0x007208d5);
    /* 007208d5: fld dword ptr [0x970398] */ FPUSH(R_F32((u32)(0x970398u)));
    /* 007208db: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 007208df: fld dword ptr [0x970394] */ FPUSH(R_F32((u32)(0x970394u)));
    /* 007208e5: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 007208e8: fdivr dword ptr [0x9703d0] */ ST(0) = R_F32((u32)(0x9703d0u)) / ST(0);
    /* 007208ee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007208f0: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007208f4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007208f8: mov dword ptr [esp + 8], 0x47c35000 */ W32((u32)(r_esp+0x8u), 0x47c35000u);
    /* 00720900: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00720902: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
    /* 0072090a: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0072090d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00720911: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00720915: call 0x71d484 */ r_esp -= 4; W32(r_esp, 0x72091au); f_0071d484();
    /* 0072091a: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0072091e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00720920: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 00720925: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00720926: push dword ptr [esi + 0x8c] */ { u32 v = R32((u32)(r_esi+0x8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0072092c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072092d: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x720932u); f_0071d58c();
    /* 00720932: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00720935: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00720938: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00720939: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072093a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072093b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072093c: ret 8 */ FN_RET(0x00720675); r_esp += 12; return;
}

void f_00720940(void) /* sub_720940 */
{
    FN_ENTER(0x00720940);
    /* 00720940: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00720941: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00720942: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00720943: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00720944: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00720947: mov esi, ecx */ r_esi = r_ecx;
    /* 00720949: mov ecx, esi */ r_ecx = r_esi;
    /* 0072094b: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 0072094f: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00720953: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00720954: call 0x720ab8 */ r_esp -= 4; W32(r_esp, 0x720959u); f_00720ab8();
    /* 00720959: movzx eax, byte ptr [esi + 0x85] */ r_eax = (u32)R8((u32)(r_esi+0x85u));
    /* 00720960: movzx edx, byte ptr [esi + 0x86] */ r_edx = (u32)R8((u32)(r_esi+0x86u));
    /* 00720967: and eax, 0xfb */ {  u32 a = r_eax; u32 b = 0xfbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072096c: mov byte ptr [esi + 0x85], al */ W8((u32)(r_esi+0x85u), (u8)r_eax);
    /* 00720972: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00720974: je 0x720999 */ if (fZ) goto L_00720999;
L_00720976:; BB(0x00720976);
    /* 00720976: mov byte ptr [esi + 0x86], 0 */ W8((u32)(r_esi+0x86u), 0x0u);
    /* 0072097d: lea edi, [esi + 0x24] */ r_edi = (u32)(r_esi+0x24u);
    /* 00720980: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00720981: call 0x72a590 */ r_esp -= 4; W32(r_esp, 0x720986u); f_0072a590();
    /* 00720986: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0072098a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072098b: push 0x9f248c */ { u32 v = 0x9f248cu; r_esp -= 4; W32(r_esp, v); }
    /* 00720990: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00720991: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x720996u); f_0072a68c();
    /* 00720996: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00720999:; BB(0x00720999);
    /* 00720999: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0072099c: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0072099e: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007209a1: je 0x7209b2 */ if (fZ) goto L_007209b2;
L_007209a3:; BB(0x007209a3);
    /* 007209a3: push 0x420 */ { u32 v = 0x420u; r_esp -= 4; W32(r_esp, v); }
    /* 007209a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007209a9: mov ecx, edi */ r_ecx = r_edi;
    /* 007209ab: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7209b0u); f_0072db60();
    /* 007209b0: jmp 0x7209bf */ goto L_007209bf;
L_007209b2:; BB(0x007209b2);
    /* 007209b2: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 007209b7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007209b8: mov ecx, edi */ r_ecx = r_edi;
    /* 007209ba: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7209bfu); f_0072db60();
L_007209bf:; BB(0x007209bf);
    /* 007209bf: test ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007209c5: je 0x7209d4 */ if (fZ) goto L_007209d4;
L_007209c7:; BB(0x007209c7);
    /* 007209c7: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 007209cb: or eax, 0xffff0800 */ {  u32 a = r_eax; u32 b = 0xffff0800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007209d0: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
L_007209d4:; BB(0x007209d4);
    /* 007209d4: test ebx, 0x80 */ {  u32 a = r_ebx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007209da: je 0x7209e9 */ if (fZ) goto L_007209e9;
L_007209dc:; BB(0x007209dc);
    /* 007209dc: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 007209e0: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007209e5: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
L_007209e9:; BB(0x007209e9);
    /* 007209e9: test bl, 4 */ {  u32 a = (u8)r_ebx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007209ec: je 0x720a09 */ if (fZ) goto L_00720a09;
L_007209ee:; BB(0x007209ee);
    /* 007209ee: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 007209f3: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 007209f7: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007209fc: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 00720a00: mov ecx, edi */ r_ecx = r_edi;
    /* 00720a02: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x720a07u); f_0072ddf4();
    /* 00720a07: jmp 0x720a15 */ goto L_00720a15;
L_00720a09:; BB(0x00720a09);
    /* 00720a09: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00720a0e: mov ecx, edi */ r_ecx = r_edi;
    /* 00720a10: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x720a15u); f_0072ddf4();
L_00720a15:; BB(0x00720a15);
    /* 00720a15: mov dword ptr [edi + 0x24], 0xff000000 */ W32((u32)(r_edi+0x24u), 0xff000000u);
    /* 00720a1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00720a1d: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x720a22u); f_00858009();
    /* 00720a22: movsx edx, word ptr [esi + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 00720a26: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00720a2a: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00720a2e: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00720a31: fadd dword ptr [eax*4 + 0x9702e8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9702e8u));
    /* 00720a38: fmul dword ptr [0x97037c] */ ST(0) = ST(0) * R_F32((u32)(0x97037cu));
    /* 00720a3e: fadd dword ptr [0x970380] */ ST(0) = ST(0) + R_F32((u32)(0x970380u));
    /* 00720a44: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00720a48: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00720a4d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00720a52: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00720a56: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00720a5a: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00720a5e: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00720a62: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00720a66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00720a67: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
    /* 00720a6e: call 0x7be1bc */ r_esp -= 4; W32(r_esp, 0x720a73u); f_007be1bc();
    /* 00720a73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00720a76: fcomp dword ptr [0x970378] */ fx_compare(ST(0), R_F32((u32)(0x970378u))); FPOP();
    /* 00720a7c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00720a7e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00720a7f: jbe 0x720a88 */ if ((fC||fZ)) goto L_00720a88;
L_00720a81:; BB(0x00720a81);
    /* 00720a81: mov dword ptr [esi + 0x5c], 0 */ W32((u32)(r_esi+0x5cu), 0x0u);
L_00720a88:; BB(0x00720a88);
    /* 00720a88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00720a8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00720a8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00720a8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00720a8d: push 0x574 */ { u32 v = 0x574u; r_esp -= 4; W32(r_esp, v); }
    /* 00720a92: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x720a97u); f_00814298();
    /* 00720a97: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00720a9a: movzx eax, byte ptr [esi + 0x84] */ r_eax = (u32)R8((u32)(r_esi+0x84u));
    /* 00720aa1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00720aa3: je 0x720aac */ if (fZ) goto L_00720aac;
L_00720aa5:; BB(0x00720aa5);
    /* 00720aa5: mov byte ptr [esi + 0x84], 5 */ W8((u32)(r_esi+0x84u), 0x5u);
L_00720aac:; BB(0x00720aac);
    /* 00720aac: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00720aaf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00720ab0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00720ab1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00720ab2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00720ab3: ret 8 */ FN_RET(0x00720940); r_esp += 12; return;
}

void f_00720ab8(void) /* sub_720AB8 */
{
    FN_ENTER(0x00720ab8);
    /* 00720ab8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00720ab9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00720aba: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00720abc: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00720ac0: mov dword ptr [ebp + 0x58], 0 */ W32((u32)(r_ebp+0x58u), 0x0u);
    /* 00720ac7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00720ac9: push 0x476a6000 */ { u32 v = 0x476a6000u; r_esp -= 4; W32(r_esp, v); }
    /* 00720ace: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x720ad3u); f_00712624();
    /* 00720ad3: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 00720ad6: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00720ad9: jne 0x720ae1 */ if (!fZ) goto L_00720ae1;
L_00720adb:; BB(0x00720adb);
    /* 00720adb: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00720ade: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
L_00720ae1:; BB(0x00720ae1);
    /* 00720ae1: movzx eax, byte ptr [ebp + 0x85] */ r_eax = (u32)R8((u32)(r_ebp+0x85u));
    /* 00720ae8: and eax, 0xaf */ {  u32 a = r_eax; u32 b = 0xafu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00720aed: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00720af0: je 0x720af7 */ if (fZ) goto L_00720af7;
L_00720af2:; BB(0x00720af2);
    /* 00720af2: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00720af5: jmp 0x720afc */ goto L_00720afc;
L_00720af7:; BB(0x00720af7);
    /* 00720af7: and eax, 0xf7 */ {  u32 a = r_eax; u32 b = 0xf7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_00720afc:; BB(0x00720afc);
    /* 00720afc: test bl, 0x20 */ {  u32 a = (u8)r_ebx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00720aff: jne 0x720b11 */ if (!fZ) goto L_00720b11;
L_00720b01:; BB(0x00720b01);
    /* 00720b01: and eax, 0xfd */ {  u32 a = r_eax; u32 b = 0xfdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00720b06: mov byte ptr [ebp + 0x85], al */ W8((u32)(r_ebp+0x85u), (u8)r_eax);
    /* 00720b0c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00720b0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00720b0e: ret 4 */ FN_RET(0x00720ab8); r_esp += 8; return;
L_00720b11:; BB(0x00720b11);
    /* 00720b11: mov byte ptr [ebp + 0x87], 4 */ W8((u32)(r_ebp+0x87u), 0x4u);
    /* 00720b18: or eax, 0xffffff03 */ {  u32 a = r_eax; u32 b = 0xffffff03u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00720b1d: mov byte ptr [ebp + 0x85], al */ W8((u32)(r_ebp+0x85u), (u8)r_eax);
    /* 00720b23: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00720b29: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
    /* 00720b2c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00720b2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00720b2e: ret 4 */ FN_RET(0x00720ab8); r_esp += 8; return;
}

void f_00720b34(void) /* sub_720B34 */
{
    FN_ENTER(0x00720b34);
    /* 00720b34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00720b35: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00720b36: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00720b37: mov edi, ecx */ r_edi = r_ecx;
    /* 00720b39: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00720b3d: mov ecx, edi */ r_ecx = r_edi;
    /* 00720b3f: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00720b43: call 0x720ab8 */ r_esp -= 4; W32(r_esp, 0x720b48u); f_00720ab8();
    /* 00720b48: movzx eax, byte ptr [edi + 0x86] */ r_eax = (u32)R8((u32)(r_edi+0x86u));
    /* 00720b4f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00720b52: je 0x720b7f */ if (fZ) goto L_00720b7f;
L_00720b54:; BB(0x00720b54);
    /* 00720b54: mov byte ptr [edi + 0x86], 1 */ W8((u32)(r_edi+0x86u), 0x1u);
    /* 00720b5b: lea ebx, [edi + 0x24] */ r_ebx = (u32)(r_edi+0x24u);
    /* 00720b5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00720b5f: call 0x72a590 */ r_esp -= 4; W32(r_esp, 0x720b64u); f_0072a590();
    /* 00720b64: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 00720b68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00720b69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00720b6a: call 0x714800 */ r_esp -= 4; W32(r_esp, 0x720b6fu); f_00714800();
    /* 00720b6f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00720b72: movzx eax, byte ptr [edi + 0x84] */ r_eax = (u32)R8((u32)(r_edi+0x84u));
    /* 00720b79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00720b7b: jne 0x720b92 */ if (!fZ) goto L_00720b92;
L_00720b7d:; BB(0x00720b7d);
    /* 00720b7d: jmp 0x720bcd */ goto L_00720bcd;
L_00720b7f:; BB(0x00720b7f);
    /* 00720b7f: movzx eax, byte ptr [edi + 0x84] */ r_eax = (u32)R8((u32)(r_edi+0x84u));
    /* 00720b86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00720b88: je 0x720bca */ if (fZ) goto L_00720bca;
L_00720b8a:; BB(0x00720b8a);
    /* 00720b8a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00720b8d: je 0x720bf8 */ if (fZ) goto L_00720bf8;
L_00720b8f:; BB(0x00720b8f);
    /* 00720b8f: lea ebx, [edi + 0x24] */ r_ebx = (u32)(r_edi+0x24u);
L_00720b92:; BB(0x00720b92);
    /* 00720b92: movzx eax, byte ptr [edi + 0x85] */ r_eax = (u32)R8((u32)(r_edi+0x85u));
    /* 00720b99: movsx edx, word ptr [edi + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 00720b9d: mov byte ptr [edi + 0x84], 5 */ W8((u32)(r_edi+0x84u), 0x5u);
    /* 00720ba4: and eax, 0xfb */ {  u32 a = r_eax; u32 b = 0xfbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00720ba9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00720baa: mov byte ptr [edi + 0x85], al */ W8((u32)(r_edi+0x85u), (u8)r_eax);
    /* 00720bb0: call 0x7be1bc */ r_esp -= 4; W32(r_esp, 0x720bb5u); f_007be1bc();
    /* 00720bb5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00720bb6: fcomp dword ptr [0x97036c] */ fx_compare(ST(0), R_F32((u32)(0x97036cu))); FPOP();
    /* 00720bbc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00720bbe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00720bbf: jbe 0x720bcd */ if ((fC||fZ)) goto L_00720bcd;
L_00720bc1:; BB(0x00720bc1);
    /* 00720bc1: mov dword ptr [edi + 0x5c], 0 */ W32((u32)(r_edi+0x5cu), 0x0u);
    /* 00720bc8: jmp 0x720bcd */ goto L_00720bcd;
L_00720bca:; BB(0x00720bca);
    /* 00720bca: lea ebx, [edi + 0x24] */ r_ebx = (u32)(r_edi+0x24u);
L_00720bcd:; BB(0x00720bcd);
    /* 00720bcd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00720bce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00720bcf: call 0x71470c */ r_esp -= 4; W32(r_esp, 0x720bd4u); f_0071470c();
    /* 00720bd4: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00720bd7: shr eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00720bda: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00720bdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00720bde: call 0x77d89c */ r_esp -= 4; W32(r_esp, 0x720be3u); f_0077d89c();
    /* 00720be3: mov eax, 0x5a */ r_eax = 0x5au;
    /* 00720be8: mov word ptr [edi + 0x88], ax */ W16((u32)(r_edi+0x88u), (u16)r_eax);
    /* 00720bef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00720bf2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00720bf3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00720bf4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00720bf5: ret 8 */ FN_RET(0x00720b34); r_esp += 12; return;
L_00720bf8:; BB(0x00720bf8);
    /* 00720bf8: lea ebx, [edi + 0x24] */ r_ebx = (u32)(r_edi+0x24u);
    /* 00720bfb: jmp 0x720bcd */ goto L_00720bcd;
}

void f_00720c00(void) /* sub_720C00 */
{
    FN_ENTER(0x00720c00);
    /* 00720c00: movzx eax, byte ptr [ecx + 0x86] */ r_eax = (u32)R8((u32)(r_ecx+0x86u));
    /* 00720c07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00720c09: je 0x720c10 */ if (fZ) goto L_00720c10;
L_00720c0b:; BB(0x00720c0b);
    /* 00720c0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00720c0d: ret 4 */ FN_RET(0x00720c00); r_esp += 8; return;
L_00720c10:; BB(0x00720c10);
    /* 00720c10: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00720c14: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00720c17: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00720c19: push dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00720c1c: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x720c21u); f_00858c4d();
    /* 00720c21: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00720c24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00720c26: je 0x720c2d */ if (fZ) goto L_00720c2d;
L_00720c28:; BB(0x00720c28);
    /* 00720c28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00720c2a: ret 4 */ FN_RET(0x00720c00); r_esp += 8; return;
L_00720c2d:; BB(0x00720c2d);
    /* 00720c2d: mov eax, 1 */ r_eax = 0x1u;
    /* 00720c32: ret 4 */ FN_RET(0x00720c00); r_esp += 8; return;
}

void f_00720c20(void)
{
    FN_ENTER(0x00720c20);
    /* 00720c20: add byte ptr [ebx - 0x3f7af73c], al */ { u32 ad = (u32)(r_ebx+0xc08508c4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00720c26: je 0x720c2d */ if (fZ) goto L_00720c2d;
L_00720c28:; BB(0x00720c28);
    /* 00720c28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00720c2a: ret 4 */ FN_RET(0x00720c20); r_esp += 8; return;
L_00720c2d:; BB(0x00720c2d);
    /* 00720c2d: mov eax, 1 */ r_eax = 0x1u;
    /* 00720c32: ret 4 */ FN_RET(0x00720c20); r_esp += 8; return;
}

void f_00720c38(void) /* sub_720C38 */
{
    FN_ENTER(0x00720c38);
    /* 00720c38: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00720c39: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00720c3c: mov esi, ecx */ r_esi = r_ecx;
    /* 00720c3e: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 00720c41: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00720c43: jne 0x720c4c */ if (!fZ) goto L_00720c4c;
L_00720c45:; BB(0x00720c45);
    /* 00720c45: mov byte ptr [esi + 0x84], 5 */ W8((u32)(r_esi+0x84u), 0x5u);
L_00720c4c:; BB(0x00720c4c);
    /* 00720c4c: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00720c50: mov ecx, esi */ r_ecx = r_esi;
    /* 00720c52: call 0x720ab8 */ r_esp -= 4; W32(r_esp, 0x720c57u); f_00720ab8();
    /* 00720c57: movzx eax, byte ptr [esi + 0x86] */ r_eax = (u32)R8((u32)(r_esi+0x86u));
    /* 00720c5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00720c60: jne 0x720cbc */ if (!fZ) goto L_00720cbc;
L_00720c62:; BB(0x00720c62);
    /* 00720c62: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00720c65: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00720c67: push dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00720c6a: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x720c6fu); f_00858009();
    /* 00720c6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00720c70: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00720c73: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00720c76: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00720c79: fadd dword ptr [eax*4 + 0x9702e0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9702e0u));
    /* 00720c80: fmul dword ptr [0x970364] */ ST(0) = ST(0) * R_F32((u32)(0x970364u));
    /* 00720c86: fadd dword ptr [0x970368] */ ST(0) = ST(0) + R_F32((u32)(0x970368u));
    /* 00720c8c: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00720c90: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00720c95: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00720c9a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00720c9e: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00720ca2: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00720ca6: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00720caa: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00720cae: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
    /* 00720cb5: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00720cb8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00720cb9: ret 4 */ FN_RET(0x00720c38); r_esp += 8; return;
L_00720cbc:; BB(0x00720cbc);
    /* 00720cbc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00720cbf: jne 0x720ccd */ if (!fZ) goto L_00720ccd;
L_00720cc1:; BB(0x00720cc1);
    /* 00720cc1: mov eax, 0x5a */ r_eax = 0x5au;
    /* 00720cc6: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
L_00720ccd:; BB(0x00720ccd);
    /* 00720ccd: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00720cd0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00720cd1: ret 4 */ FN_RET(0x00720c38); r_esp += 8; return;
}

void f_00720cd4(void) /* sub_720CD4 */
{
    FN_ENTER(0x00720cd4);
    /* 00720cd4: movzx eax, byte ptr [ecx + 0x86] */ r_eax = (u32)R8((u32)(r_ecx+0x86u));
    /* 00720cdb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00720cdd: jne 0x720cec */ if (!fZ) goto L_00720cec;
L_00720cdf:; BB(0x00720cdf);
    /* 00720cdf: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00720ce2: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00720ce4: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 00720ce8: and eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00720ceb: ret  */ FN_RET(0x00720cd4); r_esp += 4; return;
L_00720cec:; BB(0x00720cec);
    /* 00720cec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00720cee: ret  */ FN_RET(0x00720cd4); r_esp += 4; return;
}

void f_00720cf0(void) /* sub_720CF0 */
{
    FN_ENTER(0x00720cf0);
    /* 00720cf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00720cf1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00720cf3: movzx eax, byte ptr [ebp + 0x85] */ r_eax = (u32)R8((u32)(r_ebp+0x85u));
    /* 00720cfa: or eax, 0xffffff40 */ {  u32 a = r_eax; u32 b = 0xffffff40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00720cff: mov byte ptr [ebp + 0x84], 4 */ W8((u32)(r_ebp+0x84u), 0x4u);
    /* 00720d06: mov byte ptr [ebp + 0x85], al */ W8((u32)(r_ebp+0x85u), (u8)r_eax);
    /* 00720d0c: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00720d0f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00720d11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00720d12: call 0x71dfcc */ r_esp -= 4; W32(r_esp, 0x720d17u); f_0071dfcc();
    /* 00720d17: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00720d19: call 0x71e4f4 */ r_esp -= 4; W32(r_esp, 0x720d1eu); f_0071e4f4();
    /* 00720d1e: movzx eax, byte ptr [ebp + 0x85] */ r_eax = (u32)R8((u32)(r_ebp+0x85u));
    /* 00720d25: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 00720d28: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00720d2d: mov byte ptr [ebp + 0x85], al */ W8((u32)(r_ebp+0x85u), (u8)r_eax);
    /* 00720d33: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00720d39: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
    /* 00720d3c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00720d3e: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x720d43u); f_00710f64();
    /* 00720d43: mov dword ptr [ebp + 0x94], 0x3f800000 */ W32((u32)(r_ebp+0x94u), 0x3f800000u);
    /* 00720d4d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00720d4f: call 0x71e010 */ r_esp -= 4; W32(r_esp, 0x720d54u); f_0071e010();
    /* 00720d54: movzx eax, byte ptr [ebp + 0x86] */ r_eax = (u32)R8((u32)(r_ebp+0x86u));
    /* 00720d5b: mov dword ptr [ebp + 0x5c], 0x186a0 */ W32((u32)(r_ebp+0x5cu), 0x186a0u);
    /* 00720d62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00720d64: jne 0x720d70 */ if (!fZ) goto L_00720d70;
L_00720d66:; BB(0x00720d66);
    /* 00720d66: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00720d69: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00720d6b: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x720d70u); f_0072e0e4();
L_00720d70:; BB(0x00720d70);
    /* 00720d70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00720d71: ret  */ FN_RET(0x00720cf0); r_esp += 4; return;
}

void f_00720d74(void) /* sub_720D74 */
{
    FN_ENTER(0x00720d74);
    /* 00720d74: mov dword ptr [0xa985c4], 0x3f800000 */ W32((u32)(0xa985c4u), 0x3f800000u);
    /* 00720d7e: mov dword ptr [0xa985c8], 0x41000000 */ W32((u32)(0xa985c8u), 0x41000000u);
    /* 00720d88: mov dword ptr [0xa985cc], 0x3fc00000 */ W32((u32)(0xa985ccu), 0x3fc00000u);
    /* 00720d92: ret  */ FN_RET(0x00720d74); r_esp += 4; return;
}

void f_00720d94(void) /* sub_720D94 */
{
    FN_ENTER(0x00720d94);
    /* 00720d94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00720d95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00720d96: mov edi, ecx */ r_edi = r_ecx;
    /* 00720d98: movzx esi, word ptr [esp + 0xc] */ r_esi = (u32)R16((u32)(r_esp+0xcu));
    /* 00720d9d: mov dword ptr [edi + 0x98], 0xfff8f8f8 */ W32((u32)(r_edi+0x98u), 0xfff8f8f8u);
    /* 00720da7: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00720daa: jl 0x720db1 */ if ((fS!=fO)) goto L_00720db1;
L_00720dac:; BB(0x00720dac);
    /* 00720dac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00720dad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00720dae: ret 4 */ FN_RET(0x00720d94); r_esp += 8; return;
L_00720db1:; BB(0x00720db1);
    /* 00720db1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00720db2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x720db7u); f_0068d5a8();
    /* 00720db7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00720db8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00720dba: je 0x720dc8 */ if (fZ) goto L_00720dc8;
L_00720dbc:; BB(0x00720dbc);
    /* 00720dbc: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00720dc3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00720dc6: jne 0x720dcd */ if (!fZ) goto L_00720dcd;
L_00720dc8:; BB(0x00720dc8);
    /* 00720dc8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00720dc9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00720dca: ret 4 */ FN_RET(0x00720d94); r_esp += 8; return;
L_00720dcd:; BB(0x00720dcd);
    /* 00720dcd: mov eax, dword ptr [esi*4 + 0x9702a0] */ r_eax = R32((u32)(r_esi*4+0x9702a0u));
    /* 00720dd4: mov dword ptr [edi + 0x98], eax */ W32((u32)(r_edi+0x98u), r_eax);
    /* 00720dda: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00720ddb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00720ddc: ret 4 */ FN_RET(0x00720d94); r_esp += 8; return;
}

void f_00720de0(void) /* sub_720DE0 */
{
    FN_ENTER(0x00720de0);
    /* 00720de0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00720de1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00720de2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00720de3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00720de4: mov esi, ecx */ r_esi = r_ecx;
    /* 00720de6: movzx ebp, word ptr [esp + 0x14] */ r_ebp = (u32)R16((u32)(r_esp+0x14u));
    /* 00720deb: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00720def: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00720df3: mov edx, dword ptr [0x9f2488] */ r_edx = R32((u32)(0x9f2488u));
    /* 00720df9: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00720dfc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00720dfe: mov byte ptr [esi + 0x84], al */ W8((u32)(r_esi+0x84u), (u8)r_eax);
    /* 00720e04: mov byte ptr [esi + 0x86], 2 */ W8((u32)(r_esi+0x86u), 0x2u);
    /* 00720e0b: mov byte ptr [esi + 0x85], al */ W8((u32)(r_esi+0x85u), (u8)r_eax);
    /* 00720e11: mov word ptr [esi + 0x8a], bp */ W16((u32)(r_esi+0x8au), (u16)r_ebp);
    /* 00720e18: mov word ptr [esi + 0x20], di */ W16((u32)(r_esi+0x20u), (u16)r_edi);
    /* 00720e1c: mov byte ptr [esi + 0x87], 0xff */ W8((u32)(r_esi+0x87u), 0xffu);
    /* 00720e23: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00720e25: je 0x720e4d */ if (fZ) goto L_00720e4d;
L_00720e27:; BB(0x00720e27);
    /* 00720e27: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00720e28: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x720e2du); f_00858009();
    /* 00720e2d: lea edi, [eax + 1] */ r_edi = (u32)(r_eax+0x1u);
    /* 00720e30: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 00720e34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00720e35: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x720e3au); f_008581c5();
    /* 00720e3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00720e3b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00720e3c: mov dword ptr [esi + 0x8c], eax */ W32((u32)(r_esi+0x8cu), r_eax);
    /* 00720e42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00720e43: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x720e48u); f_00857dec();
    /* 00720e48: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00720e4b: jmp 0x720e57 */ goto L_00720e57;
L_00720e4d:; BB(0x00720e4d);
    /* 00720e4d: mov dword ptr [esi + 0x8c], 0 */ W32((u32)(r_esi+0x8cu), 0x0u);
L_00720e57:; BB(0x00720e57);
    /* 00720e57: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00720e58: mov ecx, esi */ r_ecx = r_esi;
    /* 00720e5a: call 0x720d94 */ r_esp -= 4; W32(r_esp, 0x720e5fu); f_00720d94();
    /* 00720e5f: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00720e63: movzx edx, byte ptr [esi + 0x85] */ r_edx = (u32)R8((u32)(r_esi+0x85u));
    /* 00720e6a: mov ebx, dword ptr [esi + 0x2c] */ r_ebx = R32((u32)(r_esi+0x2cu));
    /* 00720e6d: mov dword ptr [esi + 0x90], eax */ W32((u32)(r_esi+0x90u), r_eax);
    /* 00720e73: and edx, 0xfb */ {  u32 a = r_edx; u32 b = 0xfbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00720e79: mov byte ptr [esi + 0x85], dl */ W8((u32)(r_esi+0x85u), (u8)r_edx);
    /* 00720e7f: mov dword ptr [esi + 0x94], 0 */ W32((u32)(r_esi+0x94u), 0x0u);
    /* 00720e89: and ebx, 0xfffffeff */ {  u32 a = r_ebx; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00720e8f: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 00720e92: mov dword ptr [esi + 0x48], 0 */ W32((u32)(r_esi+0x48u), 0x0u);
    /* 00720e99: mov dword ptr [esi + 0x4c], 0 */ W32((u32)(r_esi+0x4cu), 0x0u);
    /* 00720ea0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00720ea1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00720ea2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00720ea3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00720ea4: ret 0x10 */ FN_RET(0x00720de0); r_esp += 20; return;
}

void f_00720ea8(void) /* sub_720EA8 */
{
    FN_ENTER(0x00720ea8);
    /* 00720ea8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00720ea9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00720eab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00720ead: call 0x720ecc */ r_esp -= 4; W32(r_esp, 0x720eb2u); f_00720ecc();
    /* 00720eb2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00720eb6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00720eb8: jne 0x720ebe */ if (!fZ) goto L_00720ebe;
L_00720eba:; BB(0x00720eba);
    /* 00720eba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00720ebb: ret 4 */ FN_RET(0x00720ea8); r_esp += 8; return;
L_00720ebe:; BB(0x00720ebe);
    /* 00720ebe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00720ebf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x720ec4u); f_005c2f74();
    /* 00720ec4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00720ec5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00720ec6: ret 4 */ FN_RET(0x00720ea8); r_esp += 8; return;
}

void f_00720ecc(void) /* sub_720ECC */
{
    FN_ENTER(0x00720ecc);
    /* 00720ecc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00720ecd: mov ebp, esp */ r_ebp = r_esp;
    /* 00720ecf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00720ed1: push 0x8f0d50 */ { u32 v = 0x8f0d50u; r_esp -= 4; W32(r_esp, v); }
    /* 00720ed6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00720edc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00720edd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00720ee4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00720ee7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00720eea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00720eed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00720ef0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00720ef3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00720ef6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00720efd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00720f00: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00720f03: mov dword ptr [eax], 0xb3fd28 */ W32((u32)(r_eax), 0xb3fd28u);
    /* 00720f09: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00720f0b: je 0x720f1c */ if (fZ) goto L_00720f1c;
L_00720f0d:; BB(0x00720f0d);
    /* 00720f0d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x720f12u); f_007127b0();
    /* 00720f12: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00720f15: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
L_00720f1c:; BB(0x00720f1c);
    /* 00720f1c: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00720f1f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00720f21: je 0x720f32 */ if (fZ) goto L_00720f32;
L_00720f23:; BB(0x00720f23);
    /* 00720f23: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x720f28u); f_007127b0();
    /* 00720f28: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00720f2b: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
L_00720f32:; BB(0x00720f32);
    /* 00720f32: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00720f38: call 0x7180a8 */ r_esp -= 4; W32(r_esp, 0x720f3du); f_007180a8();
    /* 00720f3d: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00720f43: call 0x718108 */ r_esp -= 4; W32(r_esp, 0x720f48u); f_00718108();
    /* 00720f48: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00720f4b: call 0x7183fc */ r_esp -= 4; W32(r_esp, 0x720f50u); f_007183fc();
    /* 00720f50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00720f52: jne 0x720f6b */ if (!fZ) goto L_00720f6b;
L_00720f54:; BB(0x00720f54);
    /* 00720f54: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00720f5a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x720f5fu); f_0068d5a8();
    /* 00720f5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00720f60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00720f62: je 0x720f6b */ if (fZ) goto L_00720f6b;
L_00720f64:; BB(0x00720f64);
    /* 00720f64: mov ecx, eax */ r_ecx = r_eax;
    /* 00720f66: call 0x693728 */ r_esp -= 4; W32(r_esp, 0x720f6bu); f_00693728();
L_00720f6b:; BB(0x00720f6b);
    /* 00720f6b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00720f6d: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x720f72u); f_00791748();
    /* 00720f72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00720f73: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00720f7a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00720f7d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x720f82u); f_008171e8();
    /* 00720f82: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00720f85: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00720f8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00720f8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00720f8f: ret  */ FN_RET(0x00720ecc); r_esp += 4; return;
}

void f_00720f90(void) /* sub_720F90 */
{
    FN_ENTER(0x00720f90);
    /* 00720f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00720f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00720f93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00720f95: push 0x8f0d6c */ { u32 v = 0x8f0d6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00720f9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00720fa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00720fa1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00720fa8: sub esp, 0x114 */ {  u32 a = r_esp; u32 b = 0x114u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00720fae: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00720fb1: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00720fb4: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00720fb7: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00720fba: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00720fbd: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00720fc0: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x720fc5u); f_008193cc();
    /* 00720fc5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00720fcc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00720fcf: mov dword ptr [eax], 0xb3fd28 */ W32((u32)(r_eax), 0xb3fd28u);
    /* 00720fd5: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00720fdb: call 0x718e88 */ r_esp -= 4; W32(r_esp, 0x720fe0u); f_00718e88();
    /* 00720fe0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00720fe1: mov edx, dword ptr [0x9f24d0] */ r_edx = R32((u32)(0x9f24d0u));
    /* 00720fe7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00720fe9: je 0x721005 */ if (fZ) goto L_00721005;
L_00720feb:; BB(0x00720feb);
    /* 00720feb: fld dword ptr [0x9f24d4] */ FPUSH(R_F32((u32)(0x9f24d4u)));
    /* 00720ff1: fsub dword ptr [0x9705d8] */ ST(0) = ST(0) - R_F32((u32)(0x9705d8u));
    /* 00720ff7: fstp dword ptr [0xa985d8] */ W_F32((u32)(0xa985d8u), ST(0)); FPOP();
    /* 00720ffd: mov dword ptr [0xa985d4], edx */ W32((u32)(0xa985d4u), r_edx);
    /* 00721003: jmp 0x721015 */ goto L_00721015;
L_00721005:; BB(0x00721005);
    /* 00721005: mov eax, dword ptr [0x9f24d4] */ r_eax = R32((u32)(0x9f24d4u));
    /* 0072100a: mov dword ptr [0xa985d4], edx */ W32((u32)(0xa985d4u), r_edx);
    /* 00721010: mov dword ptr [0xa985d8], eax */ W32((u32)(0xa985d8u), r_eax);
L_00721015:; BB(0x00721015);
    /* 00721015: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00721018: mov eax, dword ptr [0x9f24c4] */ r_eax = R32((u32)(0x9f24c4u));
    /* 0072101d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0072101f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00721022: push 0x9705c0 */ { u32 v = 0x9705c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00721027: push 0xa985d4 */ { u32 v = 0xa985d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0072102c: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x721031u); f_0073a8dc();
    /* 00721031: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00721034: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00721037: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 0072103e: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00721041: call 0x781cf4 */ r_esp -= 4; W32(r_esp, 0x721046u); f_00781cf4();
    /* 00721046: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00721048: je 0x72109f */ if (fZ) goto L_0072109f;
L_0072104a:; BB(0x0072104a);
    /* 0072104a: call 0x78164c */ r_esp -= 4; W32(r_esp, 0x72104fu); f_0078164c();
    /* 0072104f: mov ebx, eax */ r_ebx = r_eax;
    /* 00721051: lea edx, [ebp - 0x120] */ r_edx = (u32)(r_ebp+0xfffffee0u);
    /* 00721057: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0072105c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072105e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072105f: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x721064u); f_0086b688();
    /* 00721064: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00721066: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x72106bu); f_0079317c();
    /* 0072106b: lea edx, [ebp - 0x120] */ r_edx = (u32)(r_ebp+0xfffffee0u);
    /* 00721071: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00721074: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00721075: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00721076: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00721077: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x72107cu); f_00857e29();
    /* 0072107c: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072107f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00721082: lea eax, [ebp - 0x120] */ r_eax = (u32)(r_ebp+0xfffffee0u);
    /* 00721088: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0072108a: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0072108d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072108e: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x721093u); f_0073ae38();
    /* 00721093: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00721096: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 0072109d: jmp 0x7210bf */ goto L_007210bf;
L_0072109f:; BB(0x0072109f);
    /* 0072109f: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 007210a1: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7210a6u); f_0079317c();
    /* 007210a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007210a7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007210aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007210ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007210ad: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 007210b0: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7210b5u); f_0073ae38();
    /* 007210b5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007210b8: mov dword ptr [eax + 0x28], 0x384 */ W32((u32)(r_eax+0x28u), 0x384u);
L_007210bf:; BB(0x007210bf);
    /* 007210bf: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007210c5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7210cau); f_0068d5a8();
    /* 007210ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007210cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007210cd: je 0x7210d6 */ if (fZ) goto L_007210d6;
L_007210cf:; BB(0x007210cf);
    /* 007210cf: mov ecx, eax */ r_ecx = r_eax;
    /* 007210d1: call 0x6936ec */ r_esp -= 4; W32(r_esp, 0x7210d6u); f_006936ec();
L_007210d6:; BB(0x007210d6);
    /* 007210d6: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007210dc: call 0x7181b8 */ r_esp -= 4; W32(r_esp, 0x7210e1u); f_007181b8();
    /* 007210e1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007210e7: call 0x7180d8 */ r_esp -= 4; W32(r_esp, 0x7210ecu); f_007180d8();
    /* 007210ec: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007210f2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007210f5: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 007210fc: call 0x718e88 */ r_esp -= 4; W32(r_esp, 0x721101u); f_00718e88();
    /* 00721101: mov dword ptr [0xa985e4], eax */ W32((u32)(0xa985e4u), r_eax);
    /* 00721106: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00721108: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x72110du); f_00791748();
    /* 0072110d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00721110: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00721113: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00721116: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00721119: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0072111c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072111f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00721126: mov esp, ebp */ r_esp = r_ebp;
    /* 00721128: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00721129: ret 4 */ FN_RET(0x00720f90); r_esp += 8; return;
}

