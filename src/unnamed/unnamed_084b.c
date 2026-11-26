#include "protos.h"

void f_0084b2dc(void)
{
    FN_ENTER(0x0084b2dc);
    goto L_0084b2dc;
L_0084b045:; BB(0x0084b045);
    /* 0084b045: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0084b047: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0084b049: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0084b04b: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 0084b04d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b04f: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0084b051: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b053: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0084b055: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0084b058: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0084b05a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b05b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b05d: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0084b05f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b061: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0084b066: ja 0x84b06a */ if ((!fC&&!fZ)) goto L_0084b06a;
L_0084b068:; BB(0x0084b068);
    /* 0084b068: mov ebp, esi */ r_ebp = r_esi;
L_0084b06a:; BB(0x0084b06a);
    /* 0084b06a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084b06c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b06d: mov eax, 1 */ r_eax = 0x1u;
    /* 0084b072: jb 0x84b076 */ if (fC) goto L_0084b076;
L_0084b074:; BB(0x0084b074);
    /* 0084b074: mov eax, edi */ r_eax = r_edi;
L_0084b076:; BB(0x0084b076);
    /* 0084b076: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0084b078: je 0x84b0a0 */ if (fZ) goto L_0084b0a0;
L_0084b07a:; BB(0x0084b07a);
    /* 0084b07a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084b07c: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0084b07e: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0084b080: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b082: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 0084b084: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b086: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 0084b088: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0084b08a: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 0084b08e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b090: fchs  */ ST(0) = -ST(0);
    /* 0084b092: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084b094: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0084b096: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0084b09a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084b09c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b09e: jmp 0x84b0ab */ goto L_0084b0ab;
L_0084b0a0:; BB(0x0084b0a0);
    /* 0084b0a0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b0a2: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 0084b0a6: mov edi, 1 */ r_edi = 0x1u;
L_0084b0ab:; BB(0x0084b0ab);
    /* 0084b0ab: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 0084b0ae: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 0084b0b1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b0b3: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0084b0b7: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0084b0bb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b0bd: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 0084b0c1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b0c3: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 0084b0c7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084b0c9: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 0084b0cd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b0cf: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 0084b0d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b0d5: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0084b0d7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b0d9: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0084b0dd: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0084b0df: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0084b0e3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084b0e5: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0084b0e8: mov esi, ebx */ r_esi = r_ebx;
    /* 0084b0ea: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0084b0ee: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 0084b0f2: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 0084b0f6: mov eax, 0 */ r_eax = 0x0u;
    /* 0084b0fb: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0084b0fe: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0084b102: lea ebp, [ebx + 0x30] */ r_ebp = (u32)(r_ebx+0x30u);
L_0084b105:; BB(0x0084b105);
    /* 0084b105: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084b107: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0084b109: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084b10d: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0084b10f: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0084b112: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b114: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0084b118: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b11a: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0084b11e: fsubr st(3), st(0) */ ST(3) = ST(0) - ST(3);
    /* 0084b120: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084b122: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0084b124: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b126: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b128: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b12a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0084b12c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b12d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0084b12f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b131: mov edi, 1 */ r_edi = 0x1u;
    /* 0084b136: ja 0x84b13a */ if ((!fC&&!fZ)) goto L_0084b13a;
L_0084b138:; BB(0x0084b138);
    /* 0084b138: mov edi, edx */ r_edi = r_edx;
L_0084b13a:; BB(0x0084b13a);
    /* 0084b13a: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0084b13f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b140: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0084b145: jb 0x84b149 */ if (fC) goto L_0084b149;
L_0084b147:; BB(0x0084b147);
    /* 0084b147: mov ebx, ecx */ r_ebx = r_ecx;
L_0084b149:; BB(0x0084b149);
    /* 0084b149: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0084b14b: je 0x84bca3 */ if (fZ) goto L_0084bca3;
L_0084b151:; BB(0x0084b151);
    /* 0084b151: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0084b155: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084b159: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0084b15b: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0084b15f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084b163: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0084b165: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b167: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 0084b169: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0084b16d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0084b16f: fchs  */ ST(0) = -ST(0);
    /* 0084b171: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0084b173: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b175: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0084b179: je 0x84bbab */ if (fZ) goto L_0084bbab;
L_0084b17f:; BB(0x0084b17f);
    /* 0084b17f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084b181: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0084b183: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b185: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0084b187: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b189: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0084b18b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0084b18d: mov edi, 1 */ r_edi = 0x1u;
    /* 0084b192: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0084b196: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0084b198: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b19a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b19c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b19e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0084b1a0: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0084b1a5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b1a6: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0084b1a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b1aa: jb 0x84b1ae */ if (fC) goto L_0084b1ae;
L_0084b1ac:; BB(0x0084b1ac);
    /* 0084b1ac: mov edi, edx */ r_edi = r_edx;
L_0084b1ae:; BB(0x0084b1ae);
    /* 0084b1ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b1af: jb 0x84b1b3 */ if (fC) goto L_0084b1b3;
L_0084b1b1:; BB(0x0084b1b1);
    /* 0084b1b1: mov ebx, ecx */ r_ebx = r_ecx;
L_0084b1b3:; BB(0x0084b1b3);
    /* 0084b1b3: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0084b1b5: je 0x84b2f3 */ if (fZ) goto L_0084b2f3;
L_0084b1bb:; BB(0x0084b1bb);
    /* 0084b1bb: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0084b1bd: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0084b1c1: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0084b1c5: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0084b1c7: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0084b1cb: fsubr st(3), st(0) */ ST(3) = ST(0) - ST(3);
    /* 0084b1cd: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084b1cf: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0084b1d1: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 0084b1d5: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084b1d7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b1d9: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
L_0084b1dd:; BB(0x0084b1dd);
    /* 0084b1dd: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0084b1e1: fsub dword ptr [esp + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x24u));
    /* 0084b1e5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b1e7: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0084b1eb: fsub dword ptr [esp + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x30u));
    /* 0084b1ef: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b1f1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b1f3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0084b1f5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084b1f7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b1f8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b1fb: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b200u); f_0082dc9c();
    /* 0084b200: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0084b204: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0084b208: fsub dword ptr [esp + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x24u));
    /* 0084b20c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b20e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0084b212: fsub dword ptr [esp + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x30u));
    /* 0084b216: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b218: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b21a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b21b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b21e: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b223u); f_0082dc9c();
    /* 0084b223: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0084b227: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b228: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0084b22c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b22e: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0084b232: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b234: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b236: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b239: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b23eu); f_0082dc9c();
    /* 0084b23e: fadd dword ptr [0x98c66c] */ ST(0) = ST(0) + R_F32((u32)(0x98c66cu));
    /* 0084b244: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0084b248: fadd dword ptr [0x98c668] */ ST(0) = ST(0) + R_F32((u32)(0x98c668u));
    /* 0084b24e: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 0084b252: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0084b254: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b256: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b257: ja 0x84b25e */ if ((!fC&&!fZ)) goto L_0084b25e;
L_0084b259:; BB(0x0084b259);
    /* 0084b259: mov ebx, 1 */ r_ebx = 0x1u;
L_0084b25e:; BB(0x0084b25e);
    /* 0084b25e: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084b262: fsub dword ptr [esp + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x24u));
    /* 0084b266: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b268: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084b26c: fsub dword ptr [esp + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x30u));
    /* 0084b270: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b272: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b274: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b275: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b278: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b27du); f_0082dc9c();
    /* 0084b27d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0084b281: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0084b285: fsubr dword ptr [esp + 0x1c] */ ST(0) = R_F32((u32)(r_esp+0x1cu)) - ST(0);
    /* 0084b289: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b28b: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0084b28f: fsubr dword ptr [esp + 0x18] */ ST(0) = R_F32((u32)(r_esp+0x18u)) - ST(0);
    /* 0084b293: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b295: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b297: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b298: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b29b: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b2a0u); f_0082dc9c();
    /* 0084b2a0: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0084b2a4: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084b2a8: fsub dword ptr [esp + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x1cu));
    /* 0084b2ac: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b2ae: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084b2b2: fsub dword ptr [esp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x18u));
    /* 0084b2b6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b2b8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b2ba: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b2bb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b2be: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b2c3u); f_0082dc9c();
    /* 0084b2c3: fld dword ptr [0x98c66c] */ FPUSH(R_F32((u32)(0x98c66cu)));
    /* 0084b2c9: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0084b2cb: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0084b2cf: fadd dword ptr [0x98c668] */ ST(0) = ST(0) + R_F32((u32)(0x98c668u));
    /* 0084b2d5: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 0084b2d9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0084b2db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0084b2dc:; BB(0x0084b2dc);
    /* 0084b2dc: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0084b2dd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b2df: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b2e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b2e2: ja 0x84b2e9 */ if ((!fC&&!fZ)) goto L_0084b2e9;
L_0084b2e4:; BB(0x0084b2e4);
    /* 0084b2e4: mov edi, 1 */ r_edi = 0x1u;
L_0084b2e9:; BB(0x0084b2e9);
    /* 0084b2e9: test edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084b2eb: jne 0x84bbc8 */ if (!fZ) goto L_0084bbc8;
L_0084b2f1:; BB(0x0084b2f1);
    /* 0084b2f1: jmp 0x84b2f5 */ goto L_0084b2f5;
L_0084b2f3:; BB(0x0084b2f3);
    /* 0084b2f3: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0084b2f5:; BB(0x0084b2f5);
    /* 0084b2f5: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0084b2f9: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0084b2fd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b2ff: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0084b303: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0084b307: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084b30a: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084b30c: ja 0x84b105 */ if ((!fC&&!fZ)) goto L_0084b105;
L_0084b312:; BB(0x0084b312);
    /* 0084b312: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0084b316: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 0084b31a: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0084b31e: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0084b322: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084b325: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0084b329: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084b32b: ja 0x84b045 */ if ((!fC&&!fZ)) goto L_0084b045;
L_0084b331:; BB(0x0084b331);
    /* 0084b331: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0084b333: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b335: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0084b339: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0084b33d: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
L_0084b341:; BB(0x0084b341);
    /* 0084b341: fld dword ptr [edi + 0x24] */ FPUSH(R_F32((u32)(r_edi+0x24u)));
    /* 0084b344: fld dword ptr [edi + 0x2c] */ FPUSH(R_F32((u32)(r_edi+0x2cu)));
    /* 0084b347: fldz  */ FPUSH(0.0);
    /* 0084b349: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b34b: fldz  */ FPUSH(0.0);
    /* 0084b34d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b34f: fldz  */ FPUSH(0.0);
    /* 0084b351: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0084b355: fldz  */ FPUSH(0.0);
    /* 0084b357: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0084b35b: fldz  */ FPUSH(0.0);
    /* 0084b35d: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 0084b361: mov ecx, edi */ r_ecx = r_edi;
    /* 0084b363: lea edx, [edi + 0x30] */ r_edx = (u32)(r_edi+0x30u);
    /* 0084b366: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0084b36a: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0084b36e: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0084b372: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0084b374:; BB(0x0084b374);
    /* 0084b374: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0084b376: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0084b378: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0084b37a: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 0084b37c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b37e: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0084b380: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b382: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0084b384: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0084b387: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0084b389: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b38a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b38c: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0084b38e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b390: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0084b395: ja 0x84b399 */ if ((!fC&&!fZ)) goto L_0084b399;
L_0084b397:; BB(0x0084b397);
    /* 0084b397: mov ebp, esi */ r_ebp = r_esi;
L_0084b399:; BB(0x0084b399);
    /* 0084b399: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084b39b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b39c: mov eax, 1 */ r_eax = 0x1u;
    /* 0084b3a1: jb 0x84b3a5 */ if (fC) goto L_0084b3a5;
L_0084b3a3:; BB(0x0084b3a3);
    /* 0084b3a3: mov eax, edi */ r_eax = r_edi;
L_0084b3a5:; BB(0x0084b3a5);
    /* 0084b3a5: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0084b3a7: je 0x84b3cf */ if (fZ) goto L_0084b3cf;
L_0084b3a9:; BB(0x0084b3a9);
    /* 0084b3a9: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084b3ab: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0084b3ad: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0084b3af: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b3b1: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 0084b3b3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b3b5: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 0084b3b7: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0084b3b9: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 0084b3bd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b3bf: fchs  */ ST(0) = -ST(0);
    /* 0084b3c1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084b3c3: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0084b3c5: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0084b3c9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084b3cb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b3cd: jmp 0x84b3da */ goto L_0084b3da;
L_0084b3cf:; BB(0x0084b3cf);
    /* 0084b3cf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b3d1: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 0084b3d5: mov edi, 1 */ r_edi = 0x1u;
L_0084b3da:; BB(0x0084b3da);
    /* 0084b3da: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 0084b3dd: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 0084b3e0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b3e2: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0084b3e6: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0084b3ea: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b3ec: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 0084b3f0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b3f2: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 0084b3f6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084b3f8: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 0084b3fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b3fe: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 0084b402: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b404: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0084b406: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b408: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0084b40c: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0084b40e: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0084b412: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084b414: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0084b417: mov esi, ebx */ r_esi = r_ebx;
    /* 0084b419: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0084b41d: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 0084b421: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 0084b425: mov eax, 0 */ r_eax = 0x0u;
    /* 0084b42a: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0084b42d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0084b431: lea ebp, [ebx + 0x30] */ r_ebp = (u32)(r_ebx+0x30u);
L_0084b434:; BB(0x0084b434);
    /* 0084b434: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084b436: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0084b438: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084b43c: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0084b43e: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 0084b441: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b443: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0084b447: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b449: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0084b44d: fsubr st(3), st(0) */ ST(3) = ST(0) - ST(3);
    /* 0084b44f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084b451: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0084b453: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b455: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b457: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b459: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0084b45b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b45c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0084b45e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b460: mov edi, 1 */ r_edi = 0x1u;
    /* 0084b465: ja 0x84b469 */ if ((!fC&&!fZ)) goto L_0084b469;
L_0084b467:; BB(0x0084b467);
    /* 0084b467: mov edi, edx */ r_edi = r_edx;
L_0084b469:; BB(0x0084b469);
    /* 0084b469: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0084b46e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b46f: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0084b474: jb 0x84b478 */ if (fC) goto L_0084b478;
L_0084b476:; BB(0x0084b476);
    /* 0084b476: mov ebx, ecx */ r_ebx = r_ecx;
L_0084b478:; BB(0x0084b478);
    /* 0084b478: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0084b47a: je 0x84bc79 */ if (fZ) goto L_0084bc79;
L_0084b480:; BB(0x0084b480);
    /* 0084b480: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0084b484: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084b488: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0084b48a: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0084b48e: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084b492: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0084b494: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b496: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 0084b498: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0084b49c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0084b49e: fchs  */ ST(0) = -ST(0);
    /* 0084b4a0: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0084b4a2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b4a4: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0084b4a8: je 0x84bbde */ if (fZ) goto L_0084bbde;
L_0084b4ae:; BB(0x0084b4ae);
    /* 0084b4ae: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084b4b0: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0084b4b2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b4b4: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0084b4b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b4b8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0084b4ba: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0084b4bc: mov edi, 1 */ r_edi = 0x1u;
    /* 0084b4c1: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0084b4c5: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0084b4c7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b4c9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b4cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b4cd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0084b4cf: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0084b4d4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b4d5: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0084b4d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b4d9: jb 0x84b4dd */ if (fC) goto L_0084b4dd;
L_0084b4db:; BB(0x0084b4db);
    /* 0084b4db: mov edi, edx */ r_edi = r_edx;
L_0084b4dd:; BB(0x0084b4dd);
    /* 0084b4dd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b4de: jb 0x84b4e2 */ if (fC) goto L_0084b4e2;
L_0084b4e0:; BB(0x0084b4e0);
    /* 0084b4e0: mov ebx, ecx */ r_ebx = r_ecx;
L_0084b4e2:; BB(0x0084b4e2);
    /* 0084b4e2: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0084b4e4: je 0x84b622 */ if (fZ) goto L_0084b622;
L_0084b4ea:; BB(0x0084b4ea);
    /* 0084b4ea: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0084b4ec: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0084b4f0: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0084b4f4: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0084b4f6: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0084b4fa: fsubr st(3), st(0) */ ST(3) = ST(0) - ST(3);
    /* 0084b4fc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084b4fe: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0084b500: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 0084b504: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084b506: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b508: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
L_0084b50c:; BB(0x0084b50c);
    /* 0084b50c: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0084b510: fsub dword ptr [esp + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x24u));
    /* 0084b514: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b516: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0084b51a: fsub dword ptr [esp + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x30u));
    /* 0084b51e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b520: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b522: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0084b524: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084b526: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b527: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b52a: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b52fu); f_0082dc9c();
    /* 0084b52f: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0084b533: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0084b537: fsub dword ptr [esp + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x24u));
    /* 0084b53b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b53d: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0084b541: fsub dword ptr [esp + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x30u));
    /* 0084b545: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b547: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b549: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b54a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b54d: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b552u); f_0082dc9c();
    /* 0084b552: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0084b556: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b557: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0084b55b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b55d: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0084b561: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b563: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b565: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b568: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b56du); f_0082dc9c();
    /* 0084b56d: fadd dword ptr [0x98c66c] */ ST(0) = ST(0) + R_F32((u32)(0x98c66cu));
    /* 0084b573: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0084b577: fadd dword ptr [0x98c668] */ ST(0) = ST(0) + R_F32((u32)(0x98c668u));
    /* 0084b57d: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 0084b581: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0084b583: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b585: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b586: ja 0x84b58d */ if ((!fC&&!fZ)) goto L_0084b58d;
L_0084b588:; BB(0x0084b588);
    /* 0084b588: mov ebx, 1 */ r_ebx = 0x1u;
L_0084b58d:; BB(0x0084b58d);
    /* 0084b58d: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084b591: fsub dword ptr [esp + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x24u));
    /* 0084b595: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b597: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084b59b: fsub dword ptr [esp + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x30u));
    /* 0084b59f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b5a1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b5a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b5a4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b5a7: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b5acu); f_0082dc9c();
    /* 0084b5ac: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0084b5b0: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0084b5b4: fsubr dword ptr [esp + 0x1c] */ ST(0) = R_F32((u32)(r_esp+0x1cu)) - ST(0);
    /* 0084b5b8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b5ba: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0084b5be: fsubr dword ptr [esp + 0x18] */ ST(0) = R_F32((u32)(r_esp+0x18u)) - ST(0);
    /* 0084b5c2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b5c4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b5c6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b5c7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b5ca: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b5cfu); f_0082dc9c();
    /* 0084b5cf: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0084b5d3: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084b5d7: fsub dword ptr [esp + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x1cu));
    /* 0084b5db: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b5dd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084b5e1: fsub dword ptr [esp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x18u));
    /* 0084b5e5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b5e7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b5e9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b5ea: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b5ed: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b5f2u); f_0082dc9c();
    /* 0084b5f2: fld dword ptr [0x98c66c] */ FPUSH(R_F32((u32)(0x98c66cu)));
    /* 0084b5f8: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0084b5fa: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0084b5fe: fadd dword ptr [0x98c668] */ ST(0) = ST(0) + R_F32((u32)(0x98c668u));
    /* 0084b604: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 0084b608: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0084b60a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b60c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b60e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b610: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b611: ja 0x84b618 */ if ((!fC&&!fZ)) goto L_0084b618;
L_0084b613:; BB(0x0084b613);
    /* 0084b613: mov edi, 1 */ r_edi = 0x1u;
L_0084b618:; BB(0x0084b618);
    /* 0084b618: test edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084b61a: jne 0x84bbfb */ if (!fZ) goto L_0084bbfb;
L_0084b620:; BB(0x0084b620);
    /* 0084b620: jmp 0x84b624 */ goto L_0084b624;
L_0084b622:; BB(0x0084b622);
    /* 0084b622: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0084b624:; BB(0x0084b624);
    /* 0084b624: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0084b628: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0084b62c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b62e: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0084b632: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0084b636: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084b639: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084b63b: ja 0x84b434 */ if ((!fC&&!fZ)) goto L_0084b434;
L_0084b641:; BB(0x0084b641);
    /* 0084b641: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0084b645: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 0084b649: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0084b64d: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0084b651: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084b654: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0084b658: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084b65a: ja 0x84b374 */ if ((!fC&&!fZ)) goto L_0084b374;
L_0084b660:; BB(0x0084b660);
    /* 0084b660: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0084b662: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b664: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0084b668: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0084b66c: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
L_0084b670:; BB(0x0084b670);
    /* 0084b670: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 0084b673: fld dword ptr [edi + 0x2c] */ FPUSH(R_F32((u32)(r_edi+0x2cu)));
    /* 0084b676: fldz  */ FPUSH(0.0);
    /* 0084b678: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b67a: fldz  */ FPUSH(0.0);
    /* 0084b67c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b67e: fldz  */ FPUSH(0.0);
    /* 0084b680: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0084b684: fldz  */ FPUSH(0.0);
    /* 0084b686: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0084b68a: fldz  */ FPUSH(0.0);
    /* 0084b68c: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0084b690: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0084b694: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0084b698: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0084b69c: lea ecx, [edi + 4] */ r_ecx = (u32)(r_edi+0x4u);
    /* 0084b69f: lea edx, [edi + 0x34] */ r_edx = (u32)(r_edi+0x34u);
    /* 0084b6a2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0084b6a4:; BB(0x0084b6a4);
    /* 0084b6a4: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0084b6a6: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0084b6a8: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0084b6aa: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 0084b6ac: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b6ae: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0084b6b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b6b2: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0084b6b4: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0084b6b7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0084b6b9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b6ba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b6bc: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0084b6be: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b6c0: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0084b6c5: ja 0x84b6c9 */ if ((!fC&&!fZ)) goto L_0084b6c9;
L_0084b6c7:; BB(0x0084b6c7);
    /* 0084b6c7: mov ebp, esi */ r_ebp = r_esi;
L_0084b6c9:; BB(0x0084b6c9);
    /* 0084b6c9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084b6cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b6cc: mov eax, 1 */ r_eax = 0x1u;
    /* 0084b6d1: jb 0x84b6d5 */ if (fC) goto L_0084b6d5;
L_0084b6d3:; BB(0x0084b6d3);
    /* 0084b6d3: mov eax, edi */ r_eax = r_edi;
L_0084b6d5:; BB(0x0084b6d5);
    /* 0084b6d5: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0084b6d7: je 0x84b6ff */ if (fZ) goto L_0084b6ff;
L_0084b6d9:; BB(0x0084b6d9);
    /* 0084b6d9: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084b6db: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0084b6dd: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0084b6df: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b6e1: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 0084b6e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b6e5: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 0084b6e7: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0084b6e9: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 0084b6ed: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b6ef: fchs  */ ST(0) = -ST(0);
    /* 0084b6f1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084b6f3: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0084b6f5: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0084b6f9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084b6fb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b6fd: jmp 0x84b70a */ goto L_0084b70a;
L_0084b6ff:; BB(0x0084b6ff);
    /* 0084b6ff: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b701: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0084b705: mov edi, 1 */ r_edi = 0x1u;
L_0084b70a:; BB(0x0084b70a);
    /* 0084b70a: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 0084b70d: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 0084b710: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0084b714: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 0084b718: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b71a: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 0084b71e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b720: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 0084b724: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084b726: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0084b72a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b72c: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0084b730: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 0084b732: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b734: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0084b738: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0084b73a: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0084b73e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084b740: mov eax, 0 */ r_eax = 0x0u;
    /* 0084b745: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0084b748: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0084b74c: lea esi, [ebx + 4] */ r_esi = (u32)(r_ebx+0x4u);
    /* 0084b74f: lea ebp, [ebx + 0x34] */ r_ebp = (u32)(r_ebx+0x34u);
    /* 0084b752: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0084b756: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0084b759: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0084b75d: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
L_0084b761:; BB(0x0084b761);
    /* 0084b761: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084b763: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0084b765: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0084b769: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0084b76b: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0084b76e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b770: fst dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0));
    /* 0084b774: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b776: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0084b77a: fsubr st(3), st(0) */ ST(3) = ST(0) - ST(3);
    /* 0084b77c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084b77e: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0084b780: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b782: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b784: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b786: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0084b788: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b789: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0084b78b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b78d: mov edi, 1 */ r_edi = 0x1u;
    /* 0084b792: ja 0x84b796 */ if ((!fC&&!fZ)) goto L_0084b796;
L_0084b794:; BB(0x0084b794);
    /* 0084b794: mov edi, edx */ r_edi = r_edx;
L_0084b796:; BB(0x0084b796);
    /* 0084b796: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0084b79b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b79c: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0084b7a1: jb 0x84b7a5 */ if (fC) goto L_0084b7a5;
L_0084b7a3:; BB(0x0084b7a3);
    /* 0084b7a3: mov ebx, ecx */ r_ebx = r_ecx;
L_0084b7a5:; BB(0x0084b7a5);
    /* 0084b7a5: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0084b7a7: je 0x84bc4e */ if (fZ) goto L_0084bc4e;
L_0084b7ad:; BB(0x0084b7ad);
    /* 0084b7ad: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0084b7b1: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0084b7b5: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0084b7b7: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0084b7bb: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0084b7bf: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0084b7c1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b7c3: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 0084b7c5: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0084b7c9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0084b7cb: fchs  */ ST(0) = -ST(0);
    /* 0084b7cd: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0084b7cf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b7d1: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0084b7d5: je 0x84bc11 */ if (fZ) goto L_0084bc11;
L_0084b7db:; BB(0x0084b7db);
    /* 0084b7db: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084b7dd: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0084b7df: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b7e1: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0084b7e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b7e5: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0084b7e7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0084b7e9: mov edi, 1 */ r_edi = 0x1u;
    /* 0084b7ee: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084b7f2: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0084b7f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b7f6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b7f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b7fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0084b7fc: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0084b801: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b802: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0084b804: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b806: jb 0x84b80a */ if (fC) goto L_0084b80a;
L_0084b808:; BB(0x0084b808);
    /* 0084b808: mov edi, edx */ r_edi = r_edx;
L_0084b80a:; BB(0x0084b80a);
    /* 0084b80a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b80b: jb 0x84b80f */ if (fC) goto L_0084b80f;
L_0084b80d:; BB(0x0084b80d);
    /* 0084b80d: mov ebx, ecx */ r_ebx = r_ecx;
L_0084b80f:; BB(0x0084b80f);
    /* 0084b80f: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0084b811: je 0x84b94f */ if (fZ) goto L_0084b94f;
L_0084b817:; BB(0x0084b817);
    /* 0084b817: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0084b819: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0084b81d: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084b821: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0084b823: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084b827: fsubr st(3), st(0) */ ST(3) = ST(0) - ST(3);
    /* 0084b829: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084b82b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0084b82d: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 0084b831: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084b833: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b835: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
L_0084b839:; BB(0x0084b839);
    /* 0084b839: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0084b83d: fsub dword ptr [esp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x58u));
    /* 0084b841: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b843: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0084b847: fsub dword ptr [esp + 0x54] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x54u));
    /* 0084b84b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b84d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b84f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0084b851: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084b853: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b854: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b857: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b85cu); f_0082dc9c();
    /* 0084b85c: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0084b860: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0084b864: fsub dword ptr [esp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x58u));
    /* 0084b868: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b86a: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0084b86e: fsub dword ptr [esp + 0x54] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x54u));
    /* 0084b872: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b874: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b876: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b877: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b87a: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b87fu); f_0082dc9c();
    /* 0084b87f: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0084b883: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b884: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0084b888: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b88a: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0084b88e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b890: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b892: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b895: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b89au); f_0082dc9c();
    /* 0084b89a: fadd dword ptr [0x98c66c] */ ST(0) = ST(0) + R_F32((u32)(0x98c66cu));
    /* 0084b8a0: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0084b8a4: fadd dword ptr [0x98c668] */ ST(0) = ST(0) + R_F32((u32)(0x98c668u));
    /* 0084b8aa: fadd dword ptr [esp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x48u));
    /* 0084b8ae: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0084b8b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b8b2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b8b3: ja 0x84b8ba */ if ((!fC&&!fZ)) goto L_0084b8ba;
L_0084b8b5:; BB(0x0084b8b5);
    /* 0084b8b5: mov ebx, 1 */ r_ebx = 0x1u;
L_0084b8ba:; BB(0x0084b8ba);
    /* 0084b8ba: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0084b8be: fsub dword ptr [esp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x58u));
    /* 0084b8c2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b8c4: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0084b8c8: fsub dword ptr [esp + 0x54] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x54u));
    /* 0084b8cc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b8ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b8d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b8d1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b8d4: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b8d9u); f_0082dc9c();
    /* 0084b8d9: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0084b8dd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084b8e1: fsubr dword ptr [esp + 0x5c] */ ST(0) = R_F32((u32)(r_esp+0x5cu)) - ST(0);
    /* 0084b8e5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b8e7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0084b8eb: fsubr dword ptr [esp + 0x60] */ ST(0) = R_F32((u32)(r_esp+0x60u)) - ST(0);
    /* 0084b8ef: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b8f1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b8f3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b8f4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b8f7: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b8fcu); f_0082dc9c();
    /* 0084b8fc: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0084b900: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0084b904: fsub dword ptr [esp + 0x60] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x60u));
    /* 0084b908: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b90a: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0084b90e: fsub dword ptr [esp + 0x5c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x5cu));
    /* 0084b912: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b914: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b916: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b917: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b91a: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b91fu); f_0082dc9c();
    /* 0084b91f: fld dword ptr [0x98c66c] */ FPUSH(R_F32((u32)(0x98c66cu)));
    /* 0084b925: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0084b927: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0084b92b: fadd dword ptr [0x98c668] */ ST(0) = ST(0) + R_F32((u32)(0x98c668u));
    /* 0084b931: fadd dword ptr [esp + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4cu));
    /* 0084b935: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0084b937: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b939: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b93b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b93d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b93e: ja 0x84b945 */ if ((!fC&&!fZ)) goto L_0084b945;
L_0084b940:; BB(0x0084b940);
    /* 0084b940: mov edi, 1 */ r_edi = 0x1u;
L_0084b945:; BB(0x0084b945);
    /* 0084b945: test edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084b947: jne 0x84bc2e */ if (!fZ) goto L_0084bc2e;
L_0084b94d:; BB(0x0084b94d);
    /* 0084b94d: jmp 0x84b951 */ goto L_0084b951;
L_0084b94f:; BB(0x0084b94f);
    /* 0084b94f: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0084b951:; BB(0x0084b951);
    /* 0084b951: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0084b955: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0084b959: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b95b: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 0084b95f: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0084b963: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084b966: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084b968: ja 0x84b761 */ if ((!fC&&!fZ)) goto L_0084b761;
L_0084b96e:; BB(0x0084b96e);
    /* 0084b96e: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0084b971: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0084b975: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0084b979: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0084b97d: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084b980: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0084b984: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084b986: ja 0x84b6a4 */ if ((!fC&&!fZ)) goto L_0084b6a4;
L_0084b98c:; BB(0x0084b98c);
    /* 0084b98c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0084b98e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b990: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b992: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0084b996: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0084b99a: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
L_0084b99e:; BB(0x0084b99e);
    /* 0084b99e: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 0084b9a2: lea edx, [esp + 0x88] */ r_edx = (u32)(r_esp+0x88u);
    /* 0084b9a9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0084b9ab: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0084b9af: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0084b9b2: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0084b9b6: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0084b9b8: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 0084b9bf: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0084b9c2: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 0084b9c9: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0084b9cc: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0084b9d0: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0084b9d3: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 0084b9d7: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0084b9da: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 0084b9e1: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0084b9e4: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0084b9eb: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0084b9ee: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 0084b9f2: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0084b9f5: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 0084b9f9: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 0084b9fc: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 0084ba03: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0084ba06: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 0084ba0d: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 0084ba10: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 0084ba17: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 0084ba1a: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 0084ba21: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 0084ba24: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 0084ba2b: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0084ba2e: mov dword ptr [esp + 0xa4], eax */ W32((u32)(r_esp+0xa4u), r_eax);
    /* 0084ba35: call 0x84bcd0 */ r_esp -= 4; W32(r_esp, 0x84ba3au); f_0084bcd0();
    /* 0084ba3a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0084ba3d: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 0084ba41: lea edx, [esp + 0x88] */ r_edx = (u32)(r_esp+0x88u);
    /* 0084ba48: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0084ba4a: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0084ba4e: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0084ba51: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0084ba55: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0084ba57: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 0084ba5e: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0084ba61: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 0084ba68: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0084ba6b: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0084ba6f: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 0084ba72: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 0084ba76: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0084ba79: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 0084ba80: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0084ba83: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0084ba8a: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0084ba8d: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 0084ba91: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0084ba94: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 0084ba98: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 0084ba9b: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 0084baa2: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0084baa5: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 0084baac: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 0084baaf: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 0084bab6: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0084bab9: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 0084bac0: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 0084bac3: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 0084baca: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 0084bacd: mov dword ptr [esp + 0xa4], eax */ W32((u32)(r_esp+0xa4u), r_eax);
    /* 0084bad4: call 0x84bcd0 */ r_esp -= 4; W32(r_esp, 0x84bad9u); f_0084bcd0();
    /* 0084bad9: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0084badd: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 0084bae1: lea edx, [esp + 0x88] */ r_edx = (u32)(r_esp+0x88u);
    /* 0084bae8: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0084baeb: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0084baef: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0084baf2: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0084baf6: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0084baf9: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 0084bb00: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0084bb03: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 0084bb0a: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0084bb0d: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0084bb11: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 0084bb14: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 0084bb18: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0084bb1b: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 0084bb22: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0084bb25: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0084bb2c: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0084bb2f: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 0084bb33: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0084bb36: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 0084bb3a: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0084bb3d: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 0084bb44: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0084bb47: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 0084bb4e: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 0084bb51: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 0084bb58: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 0084bb5b: mov dword ptr [esp + 0x84], edi */ W32((u32)(r_esp+0x84u), r_edi);
    /* 0084bb62: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0084bb65: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 0084bb6c: mov ebx, dword ptr [ebx + 0x2c] */ r_ebx = R32((u32)(r_ebx+0x2cu));
    /* 0084bb6f: mov dword ptr [esp + 0xa4], ebx */ W32((u32)(r_esp+0xa4u), r_ebx);
    /* 0084bb76: call 0x84bcd0 */ r_esp -= 4; W32(r_esp, 0x84bb7bu); f_0084bcd0();
    /* 0084bb7b: or esi, dword ptr [esp] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp)); u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0084bb7e: or ebp, dword ptr [esp + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0084bb82: test ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084bb84: je 0x84bb9e */ if (fZ) goto L_0084bb9e;
L_0084bb86:; BB(0x0084bb86);
    /* 0084bb86: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0084bb8a: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0084bb8c: je 0x84bb9e */ if (fZ) goto L_0084bb9e;
L_0084bb8e:; BB(0x0084bb8e);
    /* 0084bb8e: mov eax, 1 */ r_eax = 0x1u;
    /* 0084bb93: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084bb99: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084bb9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084bb9b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084bb9c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084bb9d: ret  */ FN_RET(0x0084b2dc); r_esp += 4; return;
L_0084bb9e:; BB(0x0084bb9e);
    /* 0084bb9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084bba0: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084bba6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084bba7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084bba8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084bba9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084bbaa: ret  */ FN_RET(0x0084b2dc); r_esp += 4; return;
L_0084bbab:; BB(0x0084bbab);
    /* 0084bbab: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0084bbad: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0084bbb1: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0084bbb5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bbb7: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0084bbb9: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0084bbbd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084bbbf: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0084bbc3: jmp 0x84b1dd */ goto L_0084b1dd;
L_0084bbc8:; BB(0x0084bbc8);
    /* 0084bbc8: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0084bbcc: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0084bbd0: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0084bbd4: mov esi, 1 */ r_esi = 0x1u;
    /* 0084bbd9: jmp 0x84b341 */ goto L_0084b341;
L_0084bbde:; BB(0x0084bbde);
    /* 0084bbde: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0084bbe0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0084bbe4: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0084bbe8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bbea: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0084bbec: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0084bbf0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084bbf2: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0084bbf6: jmp 0x84b50c */ goto L_0084b50c;
L_0084bbfb:; BB(0x0084bbfb);
    /* 0084bbfb: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0084bbff: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0084bc03: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0084bc07: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0084bc0c: jmp 0x84b670 */ goto L_0084b670;
L_0084bc11:; BB(0x0084bc11);
    /* 0084bc11: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0084bc13: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0084bc17: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084bc1b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bc1d: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0084bc1f: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0084bc23: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084bc25: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0084bc29: jmp 0x84b839 */ goto L_0084b839;
L_0084bc2e:; BB(0x0084bc2e);
    /* 0084bc2e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084bc30: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0084bc34: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0084bc38: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0084bc3c: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0084bc40: mov eax, 1 */ r_eax = 0x1u;
    /* 0084bc45: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084bc49: jmp 0x84b99e */ goto L_0084b99e;
L_0084bc4e:; BB(0x0084bc4e);
    /* 0084bc4e: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0084bc52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084bc54: jne 0x84b951 */ if (!fZ) goto L_0084b951;
L_0084bc5a:; BB(0x0084bc5a);
    /* 0084bc5a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084bc5c: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0084bc60: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084bc64: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084bc66: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0084bc6a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bc6c: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0084bc70: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0084bc74: jmp 0x84b839 */ goto L_0084b839;
L_0084bc79:; BB(0x0084bc79);
    /* 0084bc79: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0084bc7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084bc7e: jne 0x84b624 */ if (!fZ) goto L_0084b624;
L_0084bc84:; BB(0x0084bc84);
    /* 0084bc84: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084bc86: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084bc8a: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0084bc8e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084bc90: fadd dword ptr [esp + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x60u));
    /* 0084bc94: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bc96: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0084bc9a: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0084bc9e: jmp 0x84b50c */ goto L_0084b50c;
L_0084bca3:; BB(0x0084bca3);
    /* 0084bca3: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0084bca6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084bca8: jne 0x84b2f5 */ if (!fZ) goto L_0084b2f5;
L_0084bcae:; BB(0x0084bcae);
    /* 0084bcae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084bcb0: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084bcb4: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0084bcb8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084bcba: fadd dword ptr [esp + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x60u));
    /* 0084bcbe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bcc0: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0084bcc4: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0084bcc8: jmp 0x84b1dd */ goto L_0084b1dd;
}

void f_0084b49c(void)
{
    FN_ENTER(0x0084b49c);
    goto L_0084b49c;
L_0084b374:; BB(0x0084b374);
    /* 0084b374: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0084b376: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0084b378: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0084b37a: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 0084b37c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b37e: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0084b380: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b382: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0084b384: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0084b387: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0084b389: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b38a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b38c: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0084b38e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b390: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0084b395: ja 0x84b399 */ if ((!fC&&!fZ)) goto L_0084b399;
L_0084b397:; BB(0x0084b397);
    /* 0084b397: mov ebp, esi */ r_ebp = r_esi;
L_0084b399:; BB(0x0084b399);
    /* 0084b399: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084b39b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b39c: mov eax, 1 */ r_eax = 0x1u;
    /* 0084b3a1: jb 0x84b3a5 */ if (fC) goto L_0084b3a5;
L_0084b3a3:; BB(0x0084b3a3);
    /* 0084b3a3: mov eax, edi */ r_eax = r_edi;
L_0084b3a5:; BB(0x0084b3a5);
    /* 0084b3a5: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0084b3a7: je 0x84b3cf */ if (fZ) goto L_0084b3cf;
L_0084b3a9:; BB(0x0084b3a9);
    /* 0084b3a9: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084b3ab: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0084b3ad: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0084b3af: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b3b1: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 0084b3b3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b3b5: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 0084b3b7: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0084b3b9: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 0084b3bd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b3bf: fchs  */ ST(0) = -ST(0);
    /* 0084b3c1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084b3c3: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0084b3c5: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0084b3c9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084b3cb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b3cd: jmp 0x84b3da */ goto L_0084b3da;
L_0084b3cf:; BB(0x0084b3cf);
    /* 0084b3cf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b3d1: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 0084b3d5: mov edi, 1 */ r_edi = 0x1u;
L_0084b3da:; BB(0x0084b3da);
    /* 0084b3da: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 0084b3dd: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 0084b3e0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b3e2: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0084b3e6: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0084b3ea: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b3ec: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 0084b3f0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b3f2: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 0084b3f6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084b3f8: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 0084b3fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b3fe: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 0084b402: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b404: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0084b406: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b408: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0084b40c: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0084b40e: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0084b412: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084b414: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0084b417: mov esi, ebx */ r_esi = r_ebx;
    /* 0084b419: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0084b41d: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 0084b421: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 0084b425: mov eax, 0 */ r_eax = 0x0u;
    /* 0084b42a: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0084b42d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0084b431: lea ebp, [ebx + 0x30] */ r_ebp = (u32)(r_ebx+0x30u);
L_0084b434:; BB(0x0084b434);
    /* 0084b434: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084b436: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0084b438: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084b43c: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0084b43e: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 0084b441: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b443: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0084b447: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b449: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0084b44d: fsubr st(3), st(0) */ ST(3) = ST(0) - ST(3);
    /* 0084b44f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084b451: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0084b453: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b455: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b457: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b459: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0084b45b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b45c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0084b45e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b460: mov edi, 1 */ r_edi = 0x1u;
    /* 0084b465: ja 0x84b469 */ if ((!fC&&!fZ)) goto L_0084b469;
L_0084b467:; BB(0x0084b467);
    /* 0084b467: mov edi, edx */ r_edi = r_edx;
L_0084b469:; BB(0x0084b469);
    /* 0084b469: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0084b46e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b46f: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0084b474: jb 0x84b478 */ if (fC) goto L_0084b478;
L_0084b476:; BB(0x0084b476);
    /* 0084b476: mov ebx, ecx */ r_ebx = r_ecx;
L_0084b478:; BB(0x0084b478);
    /* 0084b478: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0084b47a: je 0x84bc79 */ if (fZ) goto L_0084bc79;
L_0084b480:; BB(0x0084b480);
    /* 0084b480: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0084b484: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084b488: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0084b48a: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0084b48e: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084b492: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0084b494: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b496: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 0084b498: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
L_0084b49c:; BB(0x0084b49c);
    /* 0084b49c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0084b49e: fchs  */ ST(0) = -ST(0);
    /* 0084b4a0: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0084b4a2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b4a4: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0084b4a8: je 0x84bbde */ if (fZ) goto L_0084bbde;
L_0084b4ae:; BB(0x0084b4ae);
    /* 0084b4ae: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084b4b0: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0084b4b2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b4b4: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0084b4b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b4b8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0084b4ba: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0084b4bc: mov edi, 1 */ r_edi = 0x1u;
    /* 0084b4c1: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0084b4c5: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0084b4c7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b4c9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b4cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b4cd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0084b4cf: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0084b4d4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b4d5: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0084b4d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b4d9: jb 0x84b4dd */ if (fC) goto L_0084b4dd;
L_0084b4db:; BB(0x0084b4db);
    /* 0084b4db: mov edi, edx */ r_edi = r_edx;
L_0084b4dd:; BB(0x0084b4dd);
    /* 0084b4dd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b4de: jb 0x84b4e2 */ if (fC) goto L_0084b4e2;
L_0084b4e0:; BB(0x0084b4e0);
    /* 0084b4e0: mov ebx, ecx */ r_ebx = r_ecx;
L_0084b4e2:; BB(0x0084b4e2);
    /* 0084b4e2: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0084b4e4: je 0x84b622 */ if (fZ) goto L_0084b622;
L_0084b4ea:; BB(0x0084b4ea);
    /* 0084b4ea: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0084b4ec: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0084b4f0: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0084b4f4: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0084b4f6: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0084b4fa: fsubr st(3), st(0) */ ST(3) = ST(0) - ST(3);
    /* 0084b4fc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084b4fe: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0084b500: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 0084b504: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084b506: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b508: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
L_0084b50c:; BB(0x0084b50c);
    /* 0084b50c: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0084b510: fsub dword ptr [esp + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x24u));
    /* 0084b514: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b516: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0084b51a: fsub dword ptr [esp + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x30u));
    /* 0084b51e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b520: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b522: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0084b524: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084b526: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b527: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b52a: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b52fu); f_0082dc9c();
    /* 0084b52f: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0084b533: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0084b537: fsub dword ptr [esp + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x24u));
    /* 0084b53b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b53d: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0084b541: fsub dword ptr [esp + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x30u));
    /* 0084b545: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b547: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b549: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b54a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b54d: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b552u); f_0082dc9c();
    /* 0084b552: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0084b556: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b557: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0084b55b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b55d: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0084b561: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b563: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b565: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b568: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b56du); f_0082dc9c();
    /* 0084b56d: fadd dword ptr [0x98c66c] */ ST(0) = ST(0) + R_F32((u32)(0x98c66cu));
    /* 0084b573: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0084b577: fadd dword ptr [0x98c668] */ ST(0) = ST(0) + R_F32((u32)(0x98c668u));
    /* 0084b57d: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 0084b581: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0084b583: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b585: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b586: ja 0x84b58d */ if ((!fC&&!fZ)) goto L_0084b58d;
L_0084b588:; BB(0x0084b588);
    /* 0084b588: mov ebx, 1 */ r_ebx = 0x1u;
L_0084b58d:; BB(0x0084b58d);
    /* 0084b58d: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084b591: fsub dword ptr [esp + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x24u));
    /* 0084b595: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b597: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084b59b: fsub dword ptr [esp + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x30u));
    /* 0084b59f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b5a1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b5a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b5a4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b5a7: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b5acu); f_0082dc9c();
    /* 0084b5ac: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0084b5b0: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0084b5b4: fsubr dword ptr [esp + 0x1c] */ ST(0) = R_F32((u32)(r_esp+0x1cu)) - ST(0);
    /* 0084b5b8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b5ba: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0084b5be: fsubr dword ptr [esp + 0x18] */ ST(0) = R_F32((u32)(r_esp+0x18u)) - ST(0);
    /* 0084b5c2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b5c4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b5c6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b5c7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b5ca: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b5cfu); f_0082dc9c();
    /* 0084b5cf: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0084b5d3: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084b5d7: fsub dword ptr [esp + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x1cu));
    /* 0084b5db: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b5dd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084b5e1: fsub dword ptr [esp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x18u));
    /* 0084b5e5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b5e7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b5e9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b5ea: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b5ed: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b5f2u); f_0082dc9c();
    /* 0084b5f2: fld dword ptr [0x98c66c] */ FPUSH(R_F32((u32)(0x98c66cu)));
    /* 0084b5f8: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0084b5fa: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0084b5fe: fadd dword ptr [0x98c668] */ ST(0) = ST(0) + R_F32((u32)(0x98c668u));
    /* 0084b604: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 0084b608: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0084b60a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b60c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b60e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b610: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b611: ja 0x84b618 */ if ((!fC&&!fZ)) goto L_0084b618;
L_0084b613:; BB(0x0084b613);
    /* 0084b613: mov edi, 1 */ r_edi = 0x1u;
L_0084b618:; BB(0x0084b618);
    /* 0084b618: test edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084b61a: jne 0x84bbfb */ if (!fZ) goto L_0084bbfb;
L_0084b620:; BB(0x0084b620);
    /* 0084b620: jmp 0x84b624 */ goto L_0084b624;
L_0084b622:; BB(0x0084b622);
    /* 0084b622: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0084b624:; BB(0x0084b624);
    /* 0084b624: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0084b628: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0084b62c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b62e: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0084b632: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0084b636: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084b639: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084b63b: ja 0x84b434 */ if ((!fC&&!fZ)) goto L_0084b434;
L_0084b641:; BB(0x0084b641);
    /* 0084b641: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0084b645: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 0084b649: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0084b64d: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0084b651: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084b654: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0084b658: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084b65a: ja 0x84b374 */ if ((!fC&&!fZ)) goto L_0084b374;
L_0084b660:; BB(0x0084b660);
    /* 0084b660: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0084b662: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b664: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0084b668: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0084b66c: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
L_0084b670:; BB(0x0084b670);
    /* 0084b670: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 0084b673: fld dword ptr [edi + 0x2c] */ FPUSH(R_F32((u32)(r_edi+0x2cu)));
    /* 0084b676: fldz  */ FPUSH(0.0);
    /* 0084b678: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b67a: fldz  */ FPUSH(0.0);
    /* 0084b67c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b67e: fldz  */ FPUSH(0.0);
    /* 0084b680: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0084b684: fldz  */ FPUSH(0.0);
    /* 0084b686: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0084b68a: fldz  */ FPUSH(0.0);
    /* 0084b68c: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0084b690: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0084b694: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0084b698: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0084b69c: lea ecx, [edi + 4] */ r_ecx = (u32)(r_edi+0x4u);
    /* 0084b69f: lea edx, [edi + 0x34] */ r_edx = (u32)(r_edi+0x34u);
    /* 0084b6a2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0084b6a4:; BB(0x0084b6a4);
    /* 0084b6a4: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0084b6a6: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0084b6a8: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0084b6aa: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 0084b6ac: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b6ae: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0084b6b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b6b2: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0084b6b4: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0084b6b7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0084b6b9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b6ba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b6bc: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0084b6be: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b6c0: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0084b6c5: ja 0x84b6c9 */ if ((!fC&&!fZ)) goto L_0084b6c9;
L_0084b6c7:; BB(0x0084b6c7);
    /* 0084b6c7: mov ebp, esi */ r_ebp = r_esi;
L_0084b6c9:; BB(0x0084b6c9);
    /* 0084b6c9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084b6cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b6cc: mov eax, 1 */ r_eax = 0x1u;
    /* 0084b6d1: jb 0x84b6d5 */ if (fC) goto L_0084b6d5;
L_0084b6d3:; BB(0x0084b6d3);
    /* 0084b6d3: mov eax, edi */ r_eax = r_edi;
L_0084b6d5:; BB(0x0084b6d5);
    /* 0084b6d5: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0084b6d7: je 0x84b6ff */ if (fZ) goto L_0084b6ff;
L_0084b6d9:; BB(0x0084b6d9);
    /* 0084b6d9: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084b6db: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0084b6dd: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0084b6df: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b6e1: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 0084b6e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b6e5: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 0084b6e7: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0084b6e9: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 0084b6ed: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b6ef: fchs  */ ST(0) = -ST(0);
    /* 0084b6f1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084b6f3: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0084b6f5: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0084b6f9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084b6fb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b6fd: jmp 0x84b70a */ goto L_0084b70a;
L_0084b6ff:; BB(0x0084b6ff);
    /* 0084b6ff: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b701: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0084b705: mov edi, 1 */ r_edi = 0x1u;
L_0084b70a:; BB(0x0084b70a);
    /* 0084b70a: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 0084b70d: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 0084b710: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0084b714: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 0084b718: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b71a: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 0084b71e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b720: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 0084b724: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084b726: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0084b72a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b72c: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0084b730: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 0084b732: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b734: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0084b738: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0084b73a: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0084b73e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084b740: mov eax, 0 */ r_eax = 0x0u;
    /* 0084b745: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0084b748: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0084b74c: lea esi, [ebx + 4] */ r_esi = (u32)(r_ebx+0x4u);
    /* 0084b74f: lea ebp, [ebx + 0x34] */ r_ebp = (u32)(r_ebx+0x34u);
    /* 0084b752: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0084b756: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0084b759: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0084b75d: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
L_0084b761:; BB(0x0084b761);
    /* 0084b761: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084b763: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0084b765: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0084b769: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0084b76b: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0084b76e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b770: fst dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0));
    /* 0084b774: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b776: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0084b77a: fsubr st(3), st(0) */ ST(3) = ST(0) - ST(3);
    /* 0084b77c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084b77e: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0084b780: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b782: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b784: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b786: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0084b788: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b789: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0084b78b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b78d: mov edi, 1 */ r_edi = 0x1u;
    /* 0084b792: ja 0x84b796 */ if ((!fC&&!fZ)) goto L_0084b796;
L_0084b794:; BB(0x0084b794);
    /* 0084b794: mov edi, edx */ r_edi = r_edx;
L_0084b796:; BB(0x0084b796);
    /* 0084b796: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0084b79b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b79c: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0084b7a1: jb 0x84b7a5 */ if (fC) goto L_0084b7a5;
L_0084b7a3:; BB(0x0084b7a3);
    /* 0084b7a3: mov ebx, ecx */ r_ebx = r_ecx;
L_0084b7a5:; BB(0x0084b7a5);
    /* 0084b7a5: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0084b7a7: je 0x84bc4e */ if (fZ) goto L_0084bc4e;
L_0084b7ad:; BB(0x0084b7ad);
    /* 0084b7ad: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0084b7b1: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0084b7b5: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0084b7b7: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0084b7bb: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0084b7bf: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0084b7c1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b7c3: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 0084b7c5: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0084b7c9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0084b7cb: fchs  */ ST(0) = -ST(0);
    /* 0084b7cd: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0084b7cf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b7d1: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0084b7d5: je 0x84bc11 */ if (fZ) goto L_0084bc11;
L_0084b7db:; BB(0x0084b7db);
    /* 0084b7db: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084b7dd: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0084b7df: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b7e1: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0084b7e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b7e5: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0084b7e7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0084b7e9: mov edi, 1 */ r_edi = 0x1u;
    /* 0084b7ee: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084b7f2: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0084b7f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084b7f6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b7f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b7fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0084b7fc: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0084b801: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b802: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0084b804: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b806: jb 0x84b80a */ if (fC) goto L_0084b80a;
L_0084b808:; BB(0x0084b808);
    /* 0084b808: mov edi, edx */ r_edi = r_edx;
L_0084b80a:; BB(0x0084b80a);
    /* 0084b80a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b80b: jb 0x84b80f */ if (fC) goto L_0084b80f;
L_0084b80d:; BB(0x0084b80d);
    /* 0084b80d: mov ebx, ecx */ r_ebx = r_ecx;
L_0084b80f:; BB(0x0084b80f);
    /* 0084b80f: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0084b811: je 0x84b94f */ if (fZ) goto L_0084b94f;
L_0084b817:; BB(0x0084b817);
    /* 0084b817: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0084b819: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0084b81d: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084b821: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0084b823: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084b827: fsubr st(3), st(0) */ ST(3) = ST(0) - ST(3);
    /* 0084b829: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084b82b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0084b82d: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 0084b831: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084b833: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b835: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
L_0084b839:; BB(0x0084b839);
    /* 0084b839: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0084b83d: fsub dword ptr [esp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x58u));
    /* 0084b841: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b843: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0084b847: fsub dword ptr [esp + 0x54] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x54u));
    /* 0084b84b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b84d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b84f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0084b851: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084b853: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b854: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b857: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b85cu); f_0082dc9c();
    /* 0084b85c: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0084b860: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0084b864: fsub dword ptr [esp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x58u));
    /* 0084b868: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b86a: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0084b86e: fsub dword ptr [esp + 0x54] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x54u));
    /* 0084b872: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b874: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b876: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b877: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b87a: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b87fu); f_0082dc9c();
    /* 0084b87f: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0084b883: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b884: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0084b888: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b88a: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0084b88e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b890: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b892: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b895: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b89au); f_0082dc9c();
    /* 0084b89a: fadd dword ptr [0x98c66c] */ ST(0) = ST(0) + R_F32((u32)(0x98c66cu));
    /* 0084b8a0: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0084b8a4: fadd dword ptr [0x98c668] */ ST(0) = ST(0) + R_F32((u32)(0x98c668u));
    /* 0084b8aa: fadd dword ptr [esp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x48u));
    /* 0084b8ae: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0084b8b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b8b2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b8b3: ja 0x84b8ba */ if ((!fC&&!fZ)) goto L_0084b8ba;
L_0084b8b5:; BB(0x0084b8b5);
    /* 0084b8b5: mov ebx, 1 */ r_ebx = 0x1u;
L_0084b8ba:; BB(0x0084b8ba);
    /* 0084b8ba: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0084b8be: fsub dword ptr [esp + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x58u));
    /* 0084b8c2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b8c4: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0084b8c8: fsub dword ptr [esp + 0x54] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x54u));
    /* 0084b8cc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b8ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b8d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b8d1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b8d4: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b8d9u); f_0082dc9c();
    /* 0084b8d9: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0084b8dd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084b8e1: fsubr dword ptr [esp + 0x5c] */ ST(0) = R_F32((u32)(r_esp+0x5cu)) - ST(0);
    /* 0084b8e5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b8e7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0084b8eb: fsubr dword ptr [esp + 0x60] */ ST(0) = R_F32((u32)(r_esp+0x60u)) - ST(0);
    /* 0084b8ef: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b8f1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b8f3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b8f4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b8f7: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b8fcu); f_0082dc9c();
    /* 0084b8fc: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0084b900: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0084b904: fsub dword ptr [esp + 0x60] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x60u));
    /* 0084b908: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b90a: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0084b90e: fsub dword ptr [esp + 0x5c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x5cu));
    /* 0084b912: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084b914: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084b916: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084b917: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084b91a: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84b91fu); f_0082dc9c();
    /* 0084b91f: fld dword ptr [0x98c66c] */ FPUSH(R_F32((u32)(0x98c66cu)));
    /* 0084b925: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0084b927: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0084b92b: fadd dword ptr [0x98c668] */ ST(0) = ST(0) + R_F32((u32)(0x98c668u));
    /* 0084b931: fadd dword ptr [esp + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4cu));
    /* 0084b935: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0084b937: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b939: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b93b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084b93d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084b93e: ja 0x84b945 */ if ((!fC&&!fZ)) goto L_0084b945;
L_0084b940:; BB(0x0084b940);
    /* 0084b940: mov edi, 1 */ r_edi = 0x1u;
L_0084b945:; BB(0x0084b945);
    /* 0084b945: test edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084b947: jne 0x84bc2e */ if (!fZ) goto L_0084bc2e;
L_0084b94d:; BB(0x0084b94d);
    /* 0084b94d: jmp 0x84b951 */ goto L_0084b951;
L_0084b94f:; BB(0x0084b94f);
    /* 0084b94f: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0084b951:; BB(0x0084b951);
    /* 0084b951: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0084b955: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0084b959: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084b95b: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 0084b95f: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0084b963: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084b966: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084b968: ja 0x84b761 */ if ((!fC&&!fZ)) goto L_0084b761;
L_0084b96e:; BB(0x0084b96e);
    /* 0084b96e: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0084b971: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0084b975: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0084b979: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0084b97d: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084b980: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0084b984: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084b986: ja 0x84b6a4 */ if ((!fC&&!fZ)) goto L_0084b6a4;
L_0084b98c:; BB(0x0084b98c);
    /* 0084b98c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0084b98e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b990: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b992: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0084b996: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0084b99a: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
L_0084b99e:; BB(0x0084b99e);
    /* 0084b99e: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 0084b9a2: lea edx, [esp + 0x88] */ r_edx = (u32)(r_esp+0x88u);
    /* 0084b9a9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0084b9ab: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0084b9af: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0084b9b2: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0084b9b6: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0084b9b8: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 0084b9bf: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0084b9c2: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 0084b9c9: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0084b9cc: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0084b9d0: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0084b9d3: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 0084b9d7: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0084b9da: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 0084b9e1: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0084b9e4: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0084b9eb: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0084b9ee: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 0084b9f2: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0084b9f5: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 0084b9f9: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 0084b9fc: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 0084ba03: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0084ba06: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 0084ba0d: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 0084ba10: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 0084ba17: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 0084ba1a: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 0084ba21: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 0084ba24: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 0084ba2b: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0084ba2e: mov dword ptr [esp + 0xa4], eax */ W32((u32)(r_esp+0xa4u), r_eax);
    /* 0084ba35: call 0x84bcd0 */ r_esp -= 4; W32(r_esp, 0x84ba3au); f_0084bcd0();
    /* 0084ba3a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0084ba3d: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 0084ba41: lea edx, [esp + 0x88] */ r_edx = (u32)(r_esp+0x88u);
    /* 0084ba48: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0084ba4a: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0084ba4e: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0084ba51: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0084ba55: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0084ba57: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 0084ba5e: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0084ba61: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 0084ba68: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0084ba6b: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0084ba6f: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 0084ba72: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 0084ba76: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0084ba79: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 0084ba80: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0084ba83: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0084ba8a: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0084ba8d: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 0084ba91: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0084ba94: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 0084ba98: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 0084ba9b: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 0084baa2: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0084baa5: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 0084baac: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 0084baaf: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 0084bab6: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0084bab9: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 0084bac0: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 0084bac3: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 0084baca: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 0084bacd: mov dword ptr [esp + 0xa4], eax */ W32((u32)(r_esp+0xa4u), r_eax);
    /* 0084bad4: call 0x84bcd0 */ r_esp -= 4; W32(r_esp, 0x84bad9u); f_0084bcd0();
    /* 0084bad9: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0084badd: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 0084bae1: lea edx, [esp + 0x88] */ r_edx = (u32)(r_esp+0x88u);
    /* 0084bae8: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0084baeb: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0084baef: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0084baf2: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0084baf6: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0084baf9: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 0084bb00: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0084bb03: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 0084bb0a: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0084bb0d: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0084bb11: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 0084bb14: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 0084bb18: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0084bb1b: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 0084bb22: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0084bb25: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0084bb2c: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0084bb2f: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 0084bb33: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0084bb36: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 0084bb3a: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0084bb3d: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 0084bb44: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0084bb47: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 0084bb4e: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 0084bb51: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 0084bb58: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 0084bb5b: mov dword ptr [esp + 0x84], edi */ W32((u32)(r_esp+0x84u), r_edi);
    /* 0084bb62: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0084bb65: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 0084bb6c: mov ebx, dword ptr [ebx + 0x2c] */ r_ebx = R32((u32)(r_ebx+0x2cu));
    /* 0084bb6f: mov dword ptr [esp + 0xa4], ebx */ W32((u32)(r_esp+0xa4u), r_ebx);
    /* 0084bb76: call 0x84bcd0 */ r_esp -= 4; W32(r_esp, 0x84bb7bu); f_0084bcd0();
    /* 0084bb7b: or esi, dword ptr [esp] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp)); u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0084bb7e: or ebp, dword ptr [esp + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0084bb82: test ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084bb84: je 0x84bb9e */ if (fZ) goto L_0084bb9e;
L_0084bb86:; BB(0x0084bb86);
    /* 0084bb86: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0084bb8a: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0084bb8c: je 0x84bb9e */ if (fZ) goto L_0084bb9e;
L_0084bb8e:; BB(0x0084bb8e);
    /* 0084bb8e: mov eax, 1 */ r_eax = 0x1u;
    /* 0084bb93: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084bb99: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084bb9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084bb9b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084bb9c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084bb9d: ret  */ FN_RET(0x0084b49c); r_esp += 4; return;
L_0084bb9e:; BB(0x0084bb9e);
    /* 0084bb9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084bba0: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084bba6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084bba7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084bba8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084bba9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084bbaa: ret  */ FN_RET(0x0084b49c); r_esp += 4; return;
L_0084bbde:; BB(0x0084bbde);
    /* 0084bbde: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0084bbe0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0084bbe4: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0084bbe8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bbea: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0084bbec: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0084bbf0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084bbf2: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0084bbf6: jmp 0x84b50c */ goto L_0084b50c;
L_0084bbfb:; BB(0x0084bbfb);
    /* 0084bbfb: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0084bbff: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0084bc03: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0084bc07: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0084bc0c: jmp 0x84b670 */ goto L_0084b670;
L_0084bc11:; BB(0x0084bc11);
    /* 0084bc11: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0084bc13: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0084bc17: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084bc1b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bc1d: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0084bc1f: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0084bc23: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084bc25: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0084bc29: jmp 0x84b839 */ goto L_0084b839;
L_0084bc2e:; BB(0x0084bc2e);
    /* 0084bc2e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084bc30: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0084bc34: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0084bc38: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0084bc3c: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0084bc40: mov eax, 1 */ r_eax = 0x1u;
    /* 0084bc45: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084bc49: jmp 0x84b99e */ goto L_0084b99e;
L_0084bc4e:; BB(0x0084bc4e);
    /* 0084bc4e: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0084bc52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084bc54: jne 0x84b951 */ if (!fZ) goto L_0084b951;
L_0084bc5a:; BB(0x0084bc5a);
    /* 0084bc5a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084bc5c: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0084bc60: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084bc64: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084bc66: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0084bc6a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bc6c: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0084bc70: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0084bc74: jmp 0x84b839 */ goto L_0084b839;
L_0084bc79:; BB(0x0084bc79);
    /* 0084bc79: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0084bc7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084bc7e: jne 0x84b624 */ if (!fZ) goto L_0084b624;
L_0084bc84:; BB(0x0084bc84);
    /* 0084bc84: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084bc86: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0084bc8a: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0084bc8e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084bc90: fadd dword ptr [esp + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x60u));
    /* 0084bc94: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bc96: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0084bc9a: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0084bc9e: jmp 0x84b50c */ goto L_0084b50c;
}

void f_0084bcd0(void) /* sub_84BCD0 */
{
    FN_ENTER(0x0084bcd0);
    /* 0084bcd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084bcd1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084bcd2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084bcd3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084bcd4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084bcd7: mov ebx, edx */ r_ebx = r_edx;
    /* 0084bcd9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0084bcdb: lea esi, [ebp + 0x10] */ r_esi = (u32)(r_ebp+0x10u);
    /* 0084bcde: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084bcdf: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
    /* 0084bce2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0084bce4: call 0x84c118 */ r_esp -= 4; W32(r_esp, 0x84bce9u); f_0084c118();
    /* 0084bce9: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0084bced: lea eax, [ebp + 0x18] */ r_eax = (u32)(r_ebp+0x18u);
    /* 0084bcf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084bcf1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0084bcf3: mov edx, esi */ r_edx = r_esi;
    /* 0084bcf5: call 0x84c118 */ r_esp -= 4; W32(r_esp, 0x84bcfau); f_0084c118();
    /* 0084bcfa: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084bcfe: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084bd00: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0084bd04: lea esi, [ebx + 0x10] */ r_esi = (u32)(r_ebx+0x10u);
    /* 0084bd07: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084bd08: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 0084bd0b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0084bd0d: call 0x84c118 */ r_esp -= 4; W32(r_esp, 0x84bd12u); f_0084c118();
    /* 0084bd12: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0084bd16: lea eax, [ebx + 0x18] */ r_eax = (u32)(r_ebx+0x18u);
    /* 0084bd19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084bd1a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0084bd1c: mov edx, esi */ r_edx = r_esi;
    /* 0084bd1e: call 0x84c118 */ r_esp -= 4; W32(r_esp, 0x84bd23u); f_0084c118();
    /* 0084bd23: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0084bd27: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084bd29: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084bd2d: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0084bd2f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084bd31: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0084bd35: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084bd36: jae 0x84bd3c */ if (!fC) goto L_0084bd3c;
L_0084bd38:; BB(0x0084bd38);
    /* 0084bd38: mov eax, ebp */ r_eax = r_ebp;
    /* 0084bd3a: jmp 0x84bd48 */ goto L_0084bd48;
L_0084bd3c:; BB(0x0084bd3c);
    /* 0084bd3c: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084bd40: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0084bd44: mov eax, ebx */ r_eax = r_ebx;
    /* 0084bd46: mov ebx, ebp */ r_ebx = r_ebp;
L_0084bd48:; BB(0x0084bd48);
    /* 0084bd48: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0084bd4b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084bd4d: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0084bd50: lea esi, [ebx + 0x10] */ r_esi = (u32)(r_ebx+0x10u);
    /* 0084bd53: lea edx, [ebx + 0x18] */ r_edx = (u32)(r_ebx+0x18u);
    /* 0084bd56: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0084bd5a: mov ebp, eax */ r_ebp = r_eax;
    /* 0084bd5c: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
L_0084bd60:; BB(0x0084bd60);
    /* 0084bd60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084bd61: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0084bd65: fld dword ptr [eax + edi*8] */ FPUSH(R_F32((u32)(r_eax+r_edi*8)));
    /* 0084bd68: fsub dword ptr [ebx] */ ST(0) = ST(0) - R_F32((u32)(r_ebx));
    /* 0084bd6a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084bd6d: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x84bd72u); f_0082e900();
    /* 0084bd72: fcomp dword ptr [0x98c664] */ fx_compare(ST(0), R_F32((u32)(0x98c664u))); FPOP();
    /* 0084bd78: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084bd7a: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0084bd7d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084bd7e: jae 0x84bd9a */ if (!fC) goto L_0084bd9a;
L_0084bd80:; BB(0x0084bd80);
    /* 0084bd80: fld dword ptr [0x98c660] */ FPUSH(R_F32((u32)(0x98c660u)));
    /* 0084bd86: fld dword ptr [0x98c65c] */ FPUSH(R_F32((u32)(0x98c65cu)));
    /* 0084bd8c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bd8e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0084bd92: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0084bd96: fchs  */ ST(0) = -ST(0);
    /* 0084bd98: jmp 0x84bdc4 */ goto L_0084bdc4;
L_0084bd9a:; BB(0x0084bd9a);
    /* 0084bd9a: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0084bd9d: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 0084bda0: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0084bda2: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 0084bda4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bda6: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0084bdaa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bdac: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0084bdae: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084bdb0: fchs  */ ST(0) = -ST(0);
    /* 0084bdb2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084bdb4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084bdb6: fchs  */ ST(0) = -ST(0);
    /* 0084bdb8: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0084bdbc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bdbe: fchs  */ ST(0) = -ST(0);
    /* 0084bdc0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084bdc2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_0084bdc4:; BB(0x0084bdc4);
    /* 0084bdc4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084bdc5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0084bdc9: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0084bdcd: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 0084bdcf: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0084bdd3: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 0084bdd6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084bdd8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084bdda: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084bddd: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x84bde2u); f_0082e900();
    /* 0084bde2: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0084bde6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084bde7: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0084bdeb: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084bded: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0084bdf1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084bdf3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084bdf5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084bdf8: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84bdfdu); f_0082dc9c();
    /* 0084bdfd: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084be01: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0084be03: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0084be06: fsub dword ptr [ebx] */ ST(0) = ST(0) - R_F32((u32)(r_ebx));
    /* 0084be08: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0084be0b: fsub dword ptr [ebx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x4u));
    /* 0084be0e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084be10: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084be12: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084be14: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084be16: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084be18: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0084be1c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084be1e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084be1f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084be22: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84be27u); f_0082dc9c();
    /* 0084be27: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0084be2b: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0084be2f: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 0084be33: fmul dword ptr [0x98c658] */ ST(0) = ST(0) * R_F32((u32)(0x98c658u));
    /* 0084be39: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0084be3c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084be3e: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0084be42: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084be43: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0084be47: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 0084be49: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084be4c: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x84be51u); f_0082e900();
    /* 0084be51: fcomp dword ptr [0x98c664] */ fx_compare(ST(0), R_F32((u32)(0x98c664u))); FPOP();
    /* 0084be57: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084be59: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0084be5c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084be5d: jae 0x84be79 */ if (!fC) goto L_0084be79;
L_0084be5f:; BB(0x0084be5f);
    /* 0084be5f: fld dword ptr [0x98c660] */ FPUSH(R_F32((u32)(0x98c660u)));
    /* 0084be65: fld dword ptr [0x98c65c] */ FPUSH(R_F32((u32)(0x98c65cu)));
    /* 0084be6b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084be6d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0084be71: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0084be75: fchs  */ ST(0) = -ST(0);
    /* 0084be77: jmp 0x84bea7 */ goto L_0084bea7;
L_0084be79:; BB(0x0084be79);
    /* 0084be79: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0084be7d: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0084be80: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0084be83: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0084be85: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0084be87: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084be89: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0084be8d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084be8f: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0084be91: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084be93: fchs  */ ST(0) = -ST(0);
    /* 0084be95: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084be97: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084be99: fchs  */ ST(0) = -ST(0);
    /* 0084be9b: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0084be9f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bea1: fchs  */ ST(0) = -ST(0);
    /* 0084bea3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084bea5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_0084bea7:; BB(0x0084bea7);
    /* 0084bea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084bea8: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0084beac: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 0084beae: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0084beb2: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 0084beb5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084beb7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084beb9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084bebc: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x84bec1u); f_0082e900();
    /* 0084bec1: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0084bec5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084bec6: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0084beca: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084becc: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0084bed0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084bed2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084bed4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084bed7: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84bedcu); f_0082dc9c();
    /* 0084bedc: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084bee0: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0084bee2: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0084bee6: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0084bee9: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 0084beeb: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0084beee: fsub dword ptr [eax + 4] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x4u));
    /* 0084bef1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bef3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084bef5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bef7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084bef9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084befb: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0084beff: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084bf01: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084bf02: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084bf05: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84bf0au); f_0082dc9c();
    /* 0084bf0a: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0084bf0e: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0084bf12: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 0084bf16: fmul dword ptr [0x98c658] */ ST(0) = ST(0) * R_F32((u32)(0x98c658u));
    /* 0084bf1c: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0084bf1f: fsub dword ptr [esi] */ ST(0) = ST(0) - R_F32((u32)(r_esi));
    /* 0084bf21: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bf23: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0084bf27: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084bf28: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084bf2b: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x84bf30u); f_0082e900();
    /* 0084bf30: fcomp dword ptr [0x98c664] */ fx_compare(ST(0), R_F32((u32)(0x98c664u))); FPOP();
    /* 0084bf36: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084bf38: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0084bf3b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084bf3c: jae 0x84bf58 */ if (!fC) goto L_0084bf58;
L_0084bf3e:; BB(0x0084bf3e);
    /* 0084bf3e: fld dword ptr [0x98c660] */ FPUSH(R_F32((u32)(0x98c660u)));
    /* 0084bf44: fld dword ptr [0x98c65c] */ FPUSH(R_F32((u32)(0x98c65cu)));
    /* 0084bf4a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bf4c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0084bf50: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0084bf54: fchs  */ ST(0) = -ST(0);
    /* 0084bf56: jmp 0x84bf82 */ goto L_0084bf82;
L_0084bf58:; BB(0x0084bf58);
    /* 0084bf58: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0084bf5b: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0084bf5e: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0084bf60: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0084bf62: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bf64: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0084bf68: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bf6a: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0084bf6c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084bf6e: fchs  */ ST(0) = -ST(0);
    /* 0084bf70: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084bf72: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084bf74: fchs  */ ST(0) = -ST(0);
    /* 0084bf76: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0084bf7a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bf7c: fchs  */ ST(0) = -ST(0);
    /* 0084bf7e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084bf80: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_0084bf82:; BB(0x0084bf82);
    /* 0084bf82: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084bf83: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0084bf87: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0084bf8b: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 0084bf8d: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0084bf91: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 0084bf94: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084bf96: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084bf98: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084bf9b: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x84bfa0u); f_0082e900();
    /* 0084bfa0: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0084bfa4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084bfa5: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0084bfa9: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084bfab: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0084bfaf: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084bfb1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084bfb3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084bfb6: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84bfbbu); f_0082dc9c();
    /* 0084bfbb: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084bfbf: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0084bfc1: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0084bfc4: fsub dword ptr [esi] */ ST(0) = ST(0) - R_F32((u32)(r_esi));
    /* 0084bfc6: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0084bfc9: fsub dword ptr [esi + 4] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x4u));
    /* 0084bfcc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bfce: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084bfd0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bfd2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084bfd4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084bfd6: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0084bfda: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084bfdc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084bfdd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084bfe0: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84bfe5u); f_0082dc9c();
    /* 0084bfe5: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0084bfe9: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0084bfed: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 0084bff1: fmul dword ptr [0x98c658] */ ST(0) = ST(0) * R_F32((u32)(0x98c658u));
    /* 0084bff7: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0084bffa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084bffc: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0084c000: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084c001: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0084c005: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 0084c007: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084c00a: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x84c00fu); f_0082e900();
    /* 0084c00f: fcomp dword ptr [0x98c664] */ fx_compare(ST(0), R_F32((u32)(0x98c664u))); FPOP();
    /* 0084c015: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084c017: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0084c01a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084c01b: jae 0x84c037 */ if (!fC) goto L_0084c037;
L_0084c01d:; BB(0x0084c01d);
    /* 0084c01d: fld dword ptr [0x98c660] */ FPUSH(R_F32((u32)(0x98c660u)));
    /* 0084c023: fld dword ptr [0x98c65c] */ FPUSH(R_F32((u32)(0x98c65cu)));
    /* 0084c029: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084c02b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0084c02f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0084c033: fchs  */ ST(0) = -ST(0);
    /* 0084c035: jmp 0x84c065 */ goto L_0084c065;
L_0084c037:; BB(0x0084c037);
    /* 0084c037: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0084c03b: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0084c03e: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0084c041: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0084c043: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0084c045: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084c047: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0084c04b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084c04d: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0084c04f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084c051: fchs  */ ST(0) = -ST(0);
    /* 0084c053: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084c055: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084c057: fchs  */ ST(0) = -ST(0);
    /* 0084c059: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0084c05d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084c05f: fchs  */ ST(0) = -ST(0);
    /* 0084c061: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084c063: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_0084c065:; BB(0x0084c065);
    /* 0084c065: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084c066: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0084c06a: fmul dword ptr [ebx] */ ST(0) = ST(0) * R_F32((u32)(r_ebx));
    /* 0084c06c: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0084c070: fmul dword ptr [ebx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x4u));
    /* 0084c073: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084c075: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084c077: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084c07a: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x84c07fu); f_0082e900();
    /* 0084c07f: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0084c083: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084c084: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0084c088: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084c08a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0084c08e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084c090: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084c092: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084c095: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84c09au); f_0082dc9c();
    /* 0084c09a: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084c09e: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0084c0a0: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0084c0a4: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0084c0a7: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 0084c0a9: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0084c0ac: fsub dword ptr [eax + 4] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x4u));
    /* 0084c0af: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084c0b1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084c0b3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084c0b5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084c0b7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084c0b9: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0084c0bd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084c0bf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084c0c0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0084c0c3: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x84c0c8u); f_0082dc9c();
    /* 0084c0c8: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 0084c0cc: fmul dword ptr [0x98c658] */ ST(0) = ST(0) * R_F32((u32)(0x98c658u));
    /* 0084c0d2: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0084c0d6: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 0084c0da: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0084c0de: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084c0e0: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0084c0e4: fmul dword ptr [0x98c654] */ ST(0) = ST(0) * R_F32((u32)(0x98c654u));
    /* 0084c0ea: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0084c0ec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084c0ee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084c0ef: ja 0x84c10a */ if ((!fC&&!fZ)) goto L_0084c10a;
L_0084c0f1:; BB(0x0084c0f1);
    /* 0084c0f1: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0084c0f4: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0084c0f7: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084c0fa: jl 0x84bd60 */ if ((fS!=fO)) goto L_0084bd60;
L_0084c100:; BB(0x0084c100);
    /* 0084c100: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084c102: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084c105: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084c106: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084c107: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084c108: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084c109: ret  */ FN_RET(0x0084bcd0); r_esp += 4; return;
L_0084c10a:; BB(0x0084c10a);
    /* 0084c10a: mov eax, 1 */ r_eax = 0x1u;
    /* 0084c10f: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084c112: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084c113: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084c114: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084c115: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084c116: ret  */ FN_RET(0x0084bcd0); r_esp += 4; return;
}

