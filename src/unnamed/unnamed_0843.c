#include "protos.h"

void f_0084303c(void) /* sub_84303C */
{
    FN_ENTER(0x0084303c);
    /* 0084303c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084303d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084303e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084303f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00843040: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00843043: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00843047: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0084304b: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 00843052: mov edx, 0x10 */ r_edx = 0x10u;
    /* 00843057: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0084305f: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00843063: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00843064: call 0x84ad10 */ r_esp -= 4; W32(r_esp, 0x843069u); f_0084ad10();
    /* 00843069: mov ecx, eax */ r_ecx = r_eax;
    /* 0084306b: fld dword ptr [0x98b380] */ FPUSH(R_F32((u32)(0x98b380u)));
    /* 00843071: fld dword ptr [0x98b37c] */ FPUSH(R_F32((u32)(0x98b37cu)));
    /* 00843077: fld dword ptr [0x98b378] */ FPUSH(R_F32((u32)(0x98b378u)));
    /* 0084307d: lea eax, [ebx + ecx - 1] */ r_eax = (u32)(r_ebx+r_ecx+0xffffffffu);
    /* 00843081: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00843083: div ebx */ { u32 d = r_ebx; if (!d) UNSUP(0x00843083, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00843083, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00843085: lea ebp, [ecx + ecx] */ r_ebp = (u32)(r_ecx+r_ecx);
    /* 00843088: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 0084308b: mov edi, edx */ r_edi = r_edx;
    /* 0084308d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0084308f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00843091: div ebx */ { u32 d = r_ebx; if (!d) UNSUP(0x00843091, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00843091, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00843093: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00843096: mov eax, ecx */ r_eax = r_ecx;
    /* 00843098: mov esi, edx */ r_esi = r_edx;
    /* 0084309a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084309c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0084309e: div ebx */ { u32 d = r_ebx; if (!d) UNSUP(0x0084309e, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0084309e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008430a0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008430a2: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 008430a6: mov ecx, dword ptr [eax + esi*8] */ r_ecx = R32((u32)(r_eax+r_esi*8));
    /* 008430a9: sub ecx, dword ptr [eax + ebp*8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_ebp*8)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008430ac: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008430b0: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008430b4: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008430b7: fadd dword ptr [ecx*4 + 0x98b360] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x98b360u));
    /* 008430be: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 008430c2: fild dword ptr [eax + ebp*8] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ebp*8)));
    /* 008430c5: fld dword ptr [0x98b384] */ FPUSH(R_F32((u32)(0x98b384u)));
    /* 008430cb: mov ebx, dword ptr [eax + ebp*8] */ r_ebx = R32((u32)(r_eax+r_ebp*8));
    /* 008430ce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008430d0: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008430d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008430d5: fadd dword ptr [ecx*4 + 0x98b360] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x98b360u));
    /* 008430dc: mov ecx, dword ptr [eax + esi*8] */ r_ecx = R32((u32)(r_eax+r_esi*8));
    /* 008430df: fsubr dword ptr [esp + 0x2c] */ ST(0) = R_F32((u32)(r_esp+0x2cu)) - ST(0);
    /* 008430e3: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008430e5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008430e7: mov ecx, 0 */ r_ecx = 0x0u;
    /* 008430ec: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 008430ef: fdiv dword ptr [esp + ecx*4] */ ST(0) = ST(0) / R_F32((u32)(r_esp+r_ecx*4));
    /* 008430f2: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008430f4: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 008430f8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 008430fa: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 008430fc: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 008430fe: fadd dword ptr [0x98b388] */ ST(0) = ST(0) + R_F32((u32)(0x98b388u));
    /* 00843104: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 00843106: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00843108: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0084310a: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0084310c: fld st(6) */ { long double v = ST(6); FPUSH(v); }
    /* 0084310e: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00843110: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00843112: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00843114: fsub st(5), st(0) */ ST(5) = ST(5) - ST(0);
    /* 00843116: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00843118: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084311a: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0084311c: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084311e: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 00843120: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00843122: fsub st(5), st(0) */ ST(5) = ST(5) - ST(0);
    /* 00843124: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00843126: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 00843128: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084312a: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0084312c: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0084312e: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 00843130: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00843132: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00843134: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00843136: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00843138: fld dword ptr [eax + edi*8 + 4] */ FPUSH(R_F32((u32)(r_eax+r_edi*8+0x4u)));
    /* 0084313c: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0084313e: fld dword ptr [eax + ebp*8 + 4] */ FPUSH(R_F32((u32)(r_eax+r_ebp*8+0x4u)));
    /* 00843142: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00843144: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843146: fld dword ptr [eax + esi*8 + 4] */ FPUSH(R_F32((u32)(r_eax+r_esi*8+0x4u)));
    /* 0084314a: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084314c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084314e: fld dword ptr [eax + edx*8 + 4] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x4u)));
    /* 00843152: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00843154: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843156: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00843158: fld dword ptr [eax + edi*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edi*8+0x8u)));
    /* 0084315c: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0084315e: fld dword ptr [eax + ebp*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_ebp*8+0x8u)));
    /* 00843162: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00843164: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843166: fld dword ptr [eax + esi*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_esi*8+0x8u)));
    /* 0084316a: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084316c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084316e: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 00843172: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00843174: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843176: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 00843179: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084317b: fmul dword ptr [eax + edi*8 + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+r_edi*8+0xcu));
    /* 0084317f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00843181: fmul dword ptr [eax + ebp*8 + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+r_ebp*8+0xcu));
    /* 00843185: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00843187: fmul dword ptr [eax + esi*8 + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+r_esi*8+0xcu));
    /* 0084318b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084318d: fmul dword ptr [eax + edx*8 + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+r_edx*8+0xcu));
    /* 00843191: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00843193: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843195: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843197: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843199: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 0084319c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084319f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008431a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008431a1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008431a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008431a3: ret  */ FN_RET(0x0084303c); r_esp += 4; return;
}

void f_008431a4(void) /* sub_8431A4 */
{
    FN_ENTER(0x008431a4);
    /* 008431a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008431a5: mov ebx, esp */ r_ebx = r_esp;
    /* 008431a7: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008431aa: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008431ad: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008431b0: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008431b2: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008431b4: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008431b6: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008431b8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008431ba: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 008431bc: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008431be: fadd dword ptr [0x98b39c] */ ST(0) = ST(0) + R_F32((u32)(0x98b39cu));
    /* 008431c4: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 008431c7: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 008431c9: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 008431cc: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 008431ce: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008431d0: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 008431d2: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 008431d5: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 008431d7: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 008431da: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 008431dc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008431de: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 008431e1: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008431e3: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008431e5: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 008431e7: fmul dword ptr [0x98b398] */ ST(0) = ST(0) * R_F32((u32)(0x98b398u));
    /* 008431ed: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 008431f5: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 008431f9: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008431fb: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008431fd: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 008431ff: fmul dword ptr [0x98b398] */ ST(0) = ST(0) * R_F32((u32)(0x98b398u));
    /* 00843205: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0084320d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00843211: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00843213: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00843215: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00843217: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00843219: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0084321b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084321d: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 0084321f: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00843221: fmul dword ptr [0x98b398] */ ST(0) = ST(0) * R_F32((u32)(0x98b398u));
    /* 00843227: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0084322b: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 0084322d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084322f: fmul dword ptr [0x98b398] */ ST(0) = ST(0) * R_F32((u32)(0x98b398u));
    /* 00843235: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00843239: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0084323b: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0084323d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0084323f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00843241: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 00843249: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0084324d: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0084324f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00843251: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00843253: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00843255: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00843257: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00843259: fmul dword ptr [0x98b398] */ ST(0) = ST(0) * R_F32((u32)(0x98b398u));
    /* 0084325f: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00843263: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00843265: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00843267: fmul dword ptr [0x98b398] */ ST(0) = ST(0) * R_F32((u32)(0x98b398u));
    /* 0084326d: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00843271: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00843273: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00843275: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00843277: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843279: mov dword ptr [esp + 0x30], 0 */ W32((u32)(r_esp+0x30u), 0x0u);
    /* 00843281: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00843285: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 0084328d: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 00843295: mov dword ptr [esp + 0x3c], 0x3f800000 */ W32((u32)(r_esp+0x3cu), 0x3f800000u);
    /* 0084329d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084329e: call 0x83ba24 */ r_esp -= 4; W32(r_esp, 0x8432a3u); f_0083ba24();
    /* 008432a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008432a4: mov esp, ebx */ r_esp = r_ebx;
    /* 008432a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008432a7: ret  */ FN_RET(0x008431a4); r_esp += 4; return;
}

void f_008432a8(void) /* sub_8432A8 */
{
    FN_ENTER(0x008432a8);
    /* 008432a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008432a9: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 008432ad: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 008432b1: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008432b5: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 008432b9: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x8432beu); f_0086b6b8();
    /* 008432be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008432c1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008432c3: je 0x8432cc */ if (fZ) goto L_008432cc;
L_008432c5:; BB(0x008432c5);
    /* 008432c5: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008432c9: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8432cbu); call_ind(t); }
    /* 008432cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008432cc:; BB(0x008432cc);
    /* 008432cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008432cd: ret  */ FN_RET(0x008432a8); r_esp += 4; return;
}

void f_008432d0(void) /* sub_8432D0 */
{
    FN_ENTER(0x008432d0);
    /* 008432d0: mov eax, dword ptr [0xaebdc0] */ r_eax = R32((u32)(0xaebdc0u));
    /* 008432d5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008432d8: je 0x8434f6 */ if (fZ) goto L_008434f6;
L_008432de:; BB(0x008432de);
    /* 008432de: mov eax, dword ptr [0xaebdc4] */ r_eax = R32((u32)(0xaebdc4u));
    /* 008432e3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008432e6: je 0x8434dd */ if (fZ) goto L_008434dd;
L_008432ec:; BB(0x008432ec);
    /* 008432ec: mov eax, dword ptr [0xaebdc8] */ r_eax = R32((u32)(0xaebdc8u));
    /* 008432f1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008432f4: je 0x8434c4 */ if (fZ) goto L_008434c4;
L_008432fa:; BB(0x008432fa);
    /* 008432fa: mov eax, dword ptr [0xaebdcc] */ r_eax = R32((u32)(0xaebdccu));
    /* 008432ff: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843302: je 0x8434ab */ if (fZ) goto L_008434ab;
L_00843308:; BB(0x00843308);
    /* 00843308: mov eax, dword ptr [0xaebdd0] */ r_eax = R32((u32)(0xaebdd0u));
    /* 0084330d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843310: je 0x843492 */ if (fZ) goto L_00843492;
L_00843316:; BB(0x00843316);
    /* 00843316: mov eax, dword ptr [0xaebdd4] */ r_eax = R32((u32)(0xaebdd4u));
    /* 0084331b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084331e: je 0x843479 */ if (fZ) goto L_00843479;
L_00843324:; BB(0x00843324);
    /* 00843324: mov eax, dword ptr [0xaebdd8] */ r_eax = R32((u32)(0xaebdd8u));
    /* 00843329: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084332c: je 0x843460 */ if (fZ) goto L_00843460;
L_00843332:; BB(0x00843332);
    /* 00843332: mov eax, dword ptr [0xaebddc] */ r_eax = R32((u32)(0xaebddcu));
    /* 00843337: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084333a: je 0x843447 */ if (fZ) goto L_00843447;
L_00843340:; BB(0x00843340);
    /* 00843340: mov eax, dword ptr [0xaebde0] */ r_eax = R32((u32)(0xaebde0u));
    /* 00843345: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843348: je 0x84342e */ if (fZ) goto L_0084342e;
L_0084334e:; BB(0x0084334e);
    /* 0084334e: mov eax, dword ptr [0xaebde4] */ r_eax = R32((u32)(0xaebde4u));
    /* 00843353: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843356: je 0x843415 */ if (fZ) goto L_00843415;
L_0084335c:; BB(0x0084335c);
    /* 0084335c: mov eax, dword ptr [0xaebde8] */ r_eax = R32((u32)(0xaebde8u));
    /* 00843361: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843364: je 0x8433fc */ if (fZ) goto L_008433fc;
L_0084336a:; BB(0x0084336a);
    /* 0084336a: mov eax, dword ptr [0xaebdec] */ r_eax = R32((u32)(0xaebdecu));
    /* 0084336f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843372: je 0x8433e7 */ if (fZ) goto L_008433e7;
L_00843374:; BB(0x00843374);
    /* 00843374: mov eax, dword ptr [0xaebdf0] */ r_eax = R32((u32)(0xaebdf0u));
    /* 00843379: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084337c: je 0x8433d5 */ if (fZ) goto L_008433d5;
L_0084337e:; BB(0x0084337e);
    /* 0084337e: mov eax, dword ptr [0xaebdf4] */ r_eax = R32((u32)(0xaebdf4u));
    /* 00843383: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843386: je 0x8433c3 */ if (fZ) goto L_008433c3;
L_00843388:; BB(0x00843388);
    /* 00843388: mov eax, dword ptr [0xaebdf8] */ r_eax = R32((u32)(0xaebdf8u));
    /* 0084338d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843390: je 0x8433b1 */ if (fZ) goto L_008433b1;
L_00843392:; BB(0x00843392);
    /* 00843392: mov eax, dword ptr [0xaebdfc] */ r_eax = R32((u32)(0xaebdfcu));
    /* 00843397: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084339a: je 0x84339f */ if (fZ) goto L_0084339f;
L_0084339c:; BB(0x0084339c);
    /* 0084339c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084339e: ret  */ FN_RET(0x008432d0); r_esp += 4; return;
L_0084339f:; BB(0x0084339f);
    /* 0084339f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008433a1: je 0x84339c */ if (fZ) goto L_0084339c;
L_008433a3:; BB(0x008433a3);
    /* 008433a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008433a5: mov dword ptr [0xaebdfc], eax */ W32((u32)(0xaebdfcu), r_eax);
    /* 008433aa: mov byte ptr [0xaebd40], al */ W8((u32)(0xaebd40u), (u8)r_eax);
    /* 008433af: jmp 0x84339c */ goto L_0084339c;
L_008433b1:; BB(0x008433b1);
    /* 008433b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008433b3: je 0x843392 */ if (fZ) goto L_00843392;
L_008433b5:; BB(0x008433b5);
    /* 008433b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008433b7: mov dword ptr [0xaebdf8], eax */ W32((u32)(0xaebdf8u), r_eax);
    /* 008433bc: mov byte ptr [0xaebcc0], al */ W8((u32)(0xaebcc0u), (u8)r_eax);
    /* 008433c1: jmp 0x843392 */ goto L_00843392;
L_008433c3:; BB(0x008433c3);
    /* 008433c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008433c5: je 0x843388 */ if (fZ) goto L_00843388;
L_008433c7:; BB(0x008433c7);
    /* 008433c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008433c9: mov dword ptr [0xaebdf4], eax */ W32((u32)(0xaebdf4u), r_eax);
    /* 008433ce: mov byte ptr [0xaebc40], al */ W8((u32)(0xaebc40u), (u8)r_eax);
    /* 008433d3: jmp 0x843388 */ goto L_00843388;
L_008433d5:; BB(0x008433d5);
    /* 008433d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008433d7: je 0x84337e */ if (fZ) goto L_0084337e;
L_008433d9:; BB(0x008433d9);
    /* 008433d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008433db: mov dword ptr [0xaebdf0], eax */ W32((u32)(0xaebdf0u), r_eax);
    /* 008433e0: mov byte ptr [0xaebbc0], al */ W8((u32)(0xaebbc0u), (u8)r_eax);
    /* 008433e5: jmp 0x84337e */ goto L_0084337e;
L_008433e7:; BB(0x008433e7);
    /* 008433e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008433e9: je 0x843374 */ if (fZ) goto L_00843374;
L_008433eb:; BB(0x008433eb);
    /* 008433eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008433ed: mov dword ptr [0xaebdec], eax */ W32((u32)(0xaebdecu), r_eax);
    /* 008433f2: mov byte ptr [0xaebb40], al */ W8((u32)(0xaebb40u), (u8)r_eax);
    /* 008433f7: jmp 0x843374 */ goto L_00843374;
L_008433fc:; BB(0x008433fc);
    /* 008433fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008433fe: je 0x84336a */ if (fZ) goto L_0084336a;
L_00843404:; BB(0x00843404);
    /* 00843404: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00843406: mov dword ptr [0xaebde8], eax */ W32((u32)(0xaebde8u), r_eax);
    /* 0084340b: mov byte ptr [0xaebac0], al */ W8((u32)(0xaebac0u), (u8)r_eax);
    /* 00843410: jmp 0x84336a */ goto L_0084336a;
L_00843415:; BB(0x00843415);
    /* 00843415: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843417: je 0x84335c */ if (fZ) goto L_0084335c;
L_0084341d:; BB(0x0084341d);
    /* 0084341d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084341f: mov dword ptr [0xaebde4], eax */ W32((u32)(0xaebde4u), r_eax);
    /* 00843424: mov byte ptr [0xaeba40], al */ W8((u32)(0xaeba40u), (u8)r_eax);
    /* 00843429: jmp 0x84335c */ goto L_0084335c;
L_0084342e:; BB(0x0084342e);
    /* 0084342e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843430: je 0x84334e */ if (fZ) goto L_0084334e;
L_00843436:; BB(0x00843436);
    /* 00843436: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00843438: mov dword ptr [0xaebde0], eax */ W32((u32)(0xaebde0u), r_eax);
    /* 0084343d: mov byte ptr [0xaeb9c0], al */ W8((u32)(0xaeb9c0u), (u8)r_eax);
    /* 00843442: jmp 0x84334e */ goto L_0084334e;
L_00843447:; BB(0x00843447);
    /* 00843447: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843449: je 0x843340 */ if (fZ) goto L_00843340;
L_0084344f:; BB(0x0084344f);
    /* 0084344f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00843451: mov dword ptr [0xaebddc], eax */ W32((u32)(0xaebddcu), r_eax);
    /* 00843456: mov byte ptr [0xaeb940], al */ W8((u32)(0xaeb940u), (u8)r_eax);
    /* 0084345b: jmp 0x843340 */ goto L_00843340;
L_00843460:; BB(0x00843460);
    /* 00843460: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843462: je 0x843332 */ if (fZ) goto L_00843332;
L_00843468:; BB(0x00843468);
    /* 00843468: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084346a: mov dword ptr [0xaebdd8], eax */ W32((u32)(0xaebdd8u), r_eax);
    /* 0084346f: mov byte ptr [0xaeb8c0], al */ W8((u32)(0xaeb8c0u), (u8)r_eax);
    /* 00843474: jmp 0x843332 */ goto L_00843332;
L_00843479:; BB(0x00843479);
    /* 00843479: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084347b: je 0x843324 */ if (fZ) goto L_00843324;
L_00843481:; BB(0x00843481);
    /* 00843481: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00843483: mov dword ptr [0xaebdd4], eax */ W32((u32)(0xaebdd4u), r_eax);
    /* 00843488: mov byte ptr [0xaeb840], al */ W8((u32)(0xaeb840u), (u8)r_eax);
    /* 0084348d: jmp 0x843324 */ goto L_00843324;
L_00843492:; BB(0x00843492);
    /* 00843492: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843494: je 0x843316 */ if (fZ) goto L_00843316;
L_0084349a:; BB(0x0084349a);
    /* 0084349a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084349c: mov dword ptr [0xaebdd0], eax */ W32((u32)(0xaebdd0u), r_eax);
    /* 008434a1: mov byte ptr [0xaeb7c0], al */ W8((u32)(0xaeb7c0u), (u8)r_eax);
    /* 008434a6: jmp 0x843316 */ goto L_00843316;
L_008434ab:; BB(0x008434ab);
    /* 008434ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008434ad: je 0x843308 */ if (fZ) goto L_00843308;
L_008434b3:; BB(0x008434b3);
    /* 008434b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008434b5: mov dword ptr [0xaebdcc], eax */ W32((u32)(0xaebdccu), r_eax);
    /* 008434ba: mov byte ptr [0xaeb740], al */ W8((u32)(0xaeb740u), (u8)r_eax);
    /* 008434bf: jmp 0x843308 */ goto L_00843308;
L_008434c4:; BB(0x008434c4);
    /* 008434c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008434c6: je 0x8432fa */ if (fZ) goto L_008432fa;
L_008434cc:; BB(0x008434cc);
    /* 008434cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008434ce: mov dword ptr [0xaebdc8], eax */ W32((u32)(0xaebdc8u), r_eax);
    /* 008434d3: mov byte ptr [0xaeb6c0], al */ W8((u32)(0xaeb6c0u), (u8)r_eax);
    /* 008434d8: jmp 0x8432fa */ goto L_008432fa;
L_008434dd:; BB(0x008434dd);
    /* 008434dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008434df: je 0x8432ec */ if (fZ) goto L_008432ec;
L_008434e5:; BB(0x008434e5);
    /* 008434e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008434e7: mov dword ptr [0xaebdc4], eax */ W32((u32)(0xaebdc4u), r_eax);
    /* 008434ec: mov byte ptr [0xaeb640], al */ W8((u32)(0xaeb640u), (u8)r_eax);
    /* 008434f1: jmp 0x8432ec */ goto L_008432ec;
L_008434f6:; BB(0x008434f6);
    /* 008434f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008434f8: je 0x8432de */ if (fZ) goto L_008432de;
L_008434fe:; BB(0x008434fe);
    /* 008434fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00843500: mov dword ptr [0xaebdc0], eax */ W32((u32)(0xaebdc0u), r_eax);
    /* 00843505: mov byte ptr [0xaeb5c0], al */ W8((u32)(0xaeb5c0u), (u8)r_eax);
    /* 0084350a: jmp 0x8432de */ goto L_008432de;
}

void f_00843510(void) /* sub_843510 */
{
    FN_ENTER(0x00843510);
    /* 00843510: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00843511: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00843513: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00843515:; BB(0x00843515);
    /* 00843515: mov edx, dword ptr [eax*4 + 0xaebdc0] */ r_edx = R32((u32)(r_eax*4+0xaebdc0u));
    /* 0084351c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084351e: je 0x843531 */ if (fZ) goto L_00843531;
L_00843520:; BB(0x00843520);
    /* 00843520: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00843523: mov eax, ebx */ r_eax = r_ebx;
    /* 00843525: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00843528: jl 0x843515 */ if ((fS!=fO)) goto L_00843515;
L_0084352a:; BB(0x0084352a);
    /* 0084352a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0084352f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00843530: ret  */ FN_RET(0x00843510); r_esp += 4; return;
L_00843531:; BB(0x00843531);
    /* 00843531: mov dword ptr [eax*4 + 0xaebdc0], 1 */ W32((u32)(r_eax*4+0xaebdc0u), 0x1u);
    /* 0084353c: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 0084353e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00843540: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00843544: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00843546: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00843548: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084354a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084354c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084354e: lea eax, [eax + eax + 0xaeb5c0] */ r_eax = (u32)(r_eax+r_eax+0xaeb5c0u);
    /* 00843555: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843556: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x84355bu); f_00858900();
    /* 0084355b: mov eax, ebx */ r_eax = r_ebx;
    /* 0084355d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00843560: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00843561: ret  */ FN_RET(0x00843510); r_esp += 4; return;
}

void f_00843564(void) /* sub_843564 */
{
    FN_ENTER(0x00843564);
    /* 00843564: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00843565: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00843566: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00843567: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084356a: movsx ebx, word ptr [esp + 0x18] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esp+0x18u));
    /* 0084356f: mov edx, dword ptr [ebx*4 + 0xaebdc0] */ r_edx = R32((u32)(r_ebx*4+0xaebdc0u));
    /* 00843576: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843578: je 0x8435f4 */ if (fZ) goto L_008435f4;
L_0084357a:; BB(0x0084357a);
    /* 0084357a: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0084357d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084357f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00843581: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00843583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00843585: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00843587: lea esi, [edx + edx + 0xaeb5c0] */ r_esi = (u32)(r_edx+r_edx+0xaeb5c0u);
    /* 0084358e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084358f: call dword ptr [0x8f8400] */ { u32 t = R32((u32)(0x8f8400u)); r_esp -= 4; W32(r_esp, 0x843595u); call_ind(t); }
    /* 00843595: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00843599: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084359c: jne 0x8435a7 */ if (!fZ) goto L_008435a7;
L_0084359e:; BB(0x0084359e);
    /* 0084359e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084359f: call dword ptr [0x8f83f4] */ { u32 t = R32((u32)(0x8f83f4u)); r_esp -= 4; W32(r_esp, 0x8435a5u); call_ind(t); }
    /* 008435a5: jmp 0x8435b6 */ goto L_008435b6;
L_008435a7:; BB(0x008435a7);
    /* 008435a7: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 008435ab: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008435ad: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008435af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008435b0: call dword ptr [0x8f83fc] */ { u32 t = R32((u32)(0x8f83fcu)); r_esp -= 4; W32(r_esp, 0x8435b6u); call_ind(t); }
L_008435b6:; BB(0x008435b6);
    /* 008435b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008435b8: je 0x843607 */ if (fZ) goto L_00843607;
L_008435ba:; BB(0x008435ba);
    /* 008435ba: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 008435bd: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 008435bf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008435c1: je 0x843600 */ if (fZ) goto L_00843600;
L_008435c3:; BB(0x008435c3);
    /* 008435c3: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 008435c7: movzx edx, byte ptr [edi] */ r_edx = (u32)R8((u32)(r_edi));
    /* 008435ca: mov byte ptr [esi + 4], dl */ W8((u32)(r_esi+0x4u), (u8)r_edx);
    /* 008435cd: movzx ecx, byte ptr [edi + 1] */ r_ecx = (u32)R8((u32)(r_edi+0x1u));
    /* 008435d1: mov byte ptr [esi + 5], cl */ W8((u32)(r_esi+0x5u), (u8)r_ecx);
    /* 008435d4: movzx edx, byte ptr [edi + 2] */ r_edx = (u32)R8((u32)(r_edi+0x2u));
    /* 008435d8: mov byte ptr [esi + 6], dl */ W8((u32)(r_esi+0x6u), (u8)r_edx);
    /* 008435db: movzx edx, byte ptr [edi + 3] */ r_edx = (u32)R8((u32)(r_edi+0x3u));
    /* 008435df: mov byte ptr [esi + 7], dl */ W8((u32)(r_esi+0x7u), (u8)r_edx);
    /* 008435e2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_008435e4:; BB(0x008435e4);
    /* 008435e4: mov eax, ebx */ r_eax = r_ebx;
    /* 008435e6: call 0x843615 */ r_esp -= 4; W32(r_esp, 0x8435ebu); f_00843615();
    /* 008435eb: mov eax, esi */ r_eax = r_esi;
    /* 008435ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008435f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008435f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008435f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008435f3: ret  */ FN_RET(0x00843564); r_esp += 4; return;
L_008435f4:; BB(0x008435f4);
    /* 008435f4: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 008435f9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008435fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008435fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008435fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008435ff: ret  */ FN_RET(0x00843564); r_esp += 4; return;
L_00843600:; BB(0x00843600);
    /* 00843600: mov esi, 0xffffffb9 */ r_esi = 0xffffffb9u;
    /* 00843605: jmp 0x8435e4 */ goto L_008435e4;
L_00843607:; BB(0x00843607);
    /* 00843607: mov esi, 0xffffffb9 */ r_esi = 0xffffffb9u;
    /* 0084360c: jmp 0x8435e4 */ goto L_008435e4;
}

void f_00843610(void) /* sub_843610 */
{
    FN_ENTER(0x00843610);
    /* 00843610: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00843615: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00843618: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084361b: jge 0x843640 */ if ((fS==fO)) goto L_00843640;
L_0084361d:; BB(0x0084361d);
    /* 0084361d: mov eax, dword ptr [edx*4 + 0xaebdc0] */ r_eax = R32((u32)(r_edx*4+0xaebdc0u));
    /* 00843624: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843626: je 0x843640 */ if (fZ) goto L_00843640;
L_00843628:; BB(0x00843628);
    /* 00843628: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084362a: mov dword ptr [edx*4 + 0xaebdc0], eax */ W32((u32)(r_edx*4+0xaebdc0u), r_eax);
    /* 00843631: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00843633: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00843635: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00843637: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00843639: mov byte ptr [edx*8 + 0xaeb5c0], al */ W8((u32)(r_edx*8+0xaeb5c0u), (u8)r_eax);
L_00843640:; BB(0x00843640);
    /* 00843640: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00843642: ret  */ FN_RET(0x00843610); r_esp += 4; return;
}

void f_00843615(void) /* sub_843615 */
{
    FN_ENTER(0x00843615);
    /* 00843615: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00843618: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084361b: jge 0x843640 */ if ((fS==fO)) goto L_00843640;
L_0084361d:; BB(0x0084361d);
    /* 0084361d: mov eax, dword ptr [edx*4 + 0xaebdc0] */ r_eax = R32((u32)(r_edx*4+0xaebdc0u));
    /* 00843624: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843626: je 0x843640 */ if (fZ) goto L_00843640;
L_00843628:; BB(0x00843628);
    /* 00843628: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084362a: mov dword ptr [edx*4 + 0xaebdc0], eax */ W32((u32)(r_edx*4+0xaebdc0u), r_eax);
    /* 00843631: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00843633: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00843635: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00843637: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00843639: mov byte ptr [edx*8 + 0xaeb5c0], al */ W8((u32)(r_edx*8+0xaeb5c0u), (u8)r_eax);
L_00843640:; BB(0x00843640);
    /* 00843640: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00843642: ret  */ FN_RET(0x00843615); r_esp += 4; return;
}

void f_00843644(void) /* sub_843644 */
{
    FN_ENTER(0x00843644);
    /* 00843644: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00843646: mov dword ptr [0xaebdc0], edx */ W32((u32)(0xaebdc0u), r_edx);
    /* 0084364c: mov byte ptr [0xaeb5c0], dl */ W8((u32)(0xaeb5c0u), (u8)r_edx);
    /* 00843652: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00843654: mov byte ptr [0xaeb63f], dl */ W8((u32)(0xaeb63fu), (u8)r_edx);
    /* 0084365a: mov dword ptr [0xaebdc4], edx */ W32((u32)(0xaebdc4u), r_edx);
    /* 00843660: mov byte ptr [0xaeb640], dl */ W8((u32)(0xaeb640u), (u8)r_edx);
    /* 00843666: mov byte ptr [0xaeb6bf], dl */ W8((u32)(0xaeb6bfu), (u8)r_edx);
    /* 0084366c: mov dword ptr [0xaebdc8], edx */ W32((u32)(0xaebdc8u), r_edx);
    /* 00843672: mov byte ptr [0xaeb6c0], dl */ W8((u32)(0xaeb6c0u), (u8)r_edx);
    /* 00843678: mov byte ptr [0xaeb73f], dl */ W8((u32)(0xaeb73fu), (u8)r_edx);
    /* 0084367e: mov dword ptr [0xaebdcc], edx */ W32((u32)(0xaebdccu), r_edx);
    /* 00843684: mov byte ptr [0xaeb740], dl */ W8((u32)(0xaeb740u), (u8)r_edx);
    /* 0084368a: mov byte ptr [0xaeb7bf], dl */ W8((u32)(0xaeb7bfu), (u8)r_edx);
    /* 00843690: mov dword ptr [0xaebdd0], edx */ W32((u32)(0xaebdd0u), r_edx);
    /* 00843696: mov byte ptr [0xaeb7c0], dl */ W8((u32)(0xaeb7c0u), (u8)r_edx);
    /* 0084369c: mov byte ptr [0xaeb83f], dl */ W8((u32)(0xaeb83fu), (u8)r_edx);
    /* 008436a2: mov dword ptr [0xaebdd4], edx */ W32((u32)(0xaebdd4u), r_edx);
    /* 008436a8: mov byte ptr [0xaeb840], dl */ W8((u32)(0xaeb840u), (u8)r_edx);
    /* 008436ae: mov byte ptr [0xaeb8bf], dl */ W8((u32)(0xaeb8bfu), (u8)r_edx);
    /* 008436b4: mov dword ptr [0xaebdd8], edx */ W32((u32)(0xaebdd8u), r_edx);
    /* 008436ba: mov byte ptr [0xaeb8c0], dl */ W8((u32)(0xaeb8c0u), (u8)r_edx);
    /* 008436c0: mov byte ptr [0xaeb93f], dl */ W8((u32)(0xaeb93fu), (u8)r_edx);
    /* 008436c6: mov dword ptr [0xaebddc], edx */ W32((u32)(0xaebddcu), r_edx);
    /* 008436cc: mov byte ptr [0xaeb940], dl */ W8((u32)(0xaeb940u), (u8)r_edx);
    /* 008436d2: mov byte ptr [0xaeb9bf], dl */ W8((u32)(0xaeb9bfu), (u8)r_edx);
    /* 008436d8: mov dword ptr [0xaebde0], edx */ W32((u32)(0xaebde0u), r_edx);
    /* 008436de: mov byte ptr [0xaeb9c0], dl */ W8((u32)(0xaeb9c0u), (u8)r_edx);
    /* 008436e4: mov byte ptr [0xaeba3f], dl */ W8((u32)(0xaeba3fu), (u8)r_edx);
    /* 008436ea: mov dword ptr [0xaebde4], edx */ W32((u32)(0xaebde4u), r_edx);
    /* 008436f0: mov byte ptr [0xaeba40], dl */ W8((u32)(0xaeba40u), (u8)r_edx);
    /* 008436f6: mov byte ptr [0xaebabf], dl */ W8((u32)(0xaebabfu), (u8)r_edx);
    /* 008436fc: mov dword ptr [0xaebde8], edx */ W32((u32)(0xaebde8u), r_edx);
    /* 00843702: mov byte ptr [0xaebac0], dl */ W8((u32)(0xaebac0u), (u8)r_edx);
    /* 00843708: mov byte ptr [0xaebb3f], dl */ W8((u32)(0xaebb3fu), (u8)r_edx);
    /* 0084370e: mov dword ptr [0xaebdec], edx */ W32((u32)(0xaebdecu), r_edx);
    /* 00843714: mov byte ptr [0xaebb40], dl */ W8((u32)(0xaebb40u), (u8)r_edx);
    /* 0084371a: mov byte ptr [0xaebbbf], dl */ W8((u32)(0xaebbbfu), (u8)r_edx);
    /* 00843720: mov dword ptr [0xaebdf0], edx */ W32((u32)(0xaebdf0u), r_edx);
    /* 00843726: mov byte ptr [0xaebbc0], dl */ W8((u32)(0xaebbc0u), (u8)r_edx);
    /* 0084372c: mov byte ptr [0xaebc3f], dl */ W8((u32)(0xaebc3fu), (u8)r_edx);
    /* 00843732: mov dword ptr [0xaebdf4], edx */ W32((u32)(0xaebdf4u), r_edx);
    /* 00843738: mov byte ptr [0xaebc40], dl */ W8((u32)(0xaebc40u), (u8)r_edx);
    /* 0084373e: mov byte ptr [0xaebcbf], dl */ W8((u32)(0xaebcbfu), (u8)r_edx);
    /* 00843744: mov dword ptr [0xaebdf8], edx */ W32((u32)(0xaebdf8u), r_edx);
    /* 0084374a: mov byte ptr [0xaebcc0], dl */ W8((u32)(0xaebcc0u), (u8)r_edx);
    /* 00843750: mov byte ptr [0xaebd3f], dl */ W8((u32)(0xaebd3fu), (u8)r_edx);
    /* 00843756: mov dword ptr [0xaebdfc], edx */ W32((u32)(0xaebdfcu), r_edx);
    /* 0084375c: mov byte ptr [0xaebd40], dl */ W8((u32)(0xaebd40u), (u8)r_edx);
    /* 00843762: mov byte ptr [0xaebdbf], dl */ W8((u32)(0xaebdbfu), (u8)r_edx);
    /* 00843768: ret  */ FN_RET(0x00843644); r_esp += 4; return;
}

void f_0084376c(void) /* sub_84376C */
{
    FN_ENTER(0x0084376c);
    /* 0084376c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084376d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084376e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084376f: sub esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00843775: mov edx, dword ptr [0xadcdc0] */ r_edx = R32((u32)(0xadcdc0u));
    /* 0084377b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084377d: je 0x843806 */ if (fZ) goto L_00843806;
L_00843783:; BB(0x00843783);
    /* 00843783: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00843786: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843787: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0084378c: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0084378e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084378f: call dword ptr [ecx + 0x24] */ { u32 t = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, 0x843792u); call_ind(t); }
    /* 00843792: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00843794: mov byte ptr [0xadcdd4], dl */ W8((u32)(0xadcdd4u), (u8)r_edx);
    /* 0084379a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084379c: mov byte ptr [0xadcdd5], dl */ W8((u32)(0xadcdd5u), (u8)r_edx);
    /* 008437a2: mov byte ptr [0xadcdd6], dl */ W8((u32)(0xadcdd6u), (u8)r_edx);
    /* 008437a8: mov byte ptr [0xadcdd7], dl */ W8((u32)(0xadcdd7u), (u8)r_edx);
    /* 008437ae: mov dword ptr [0xadcdd0], edx */ W32((u32)(0xadcdd0u), r_edx);
    /* 008437b4: jne 0x843815 */ if (!fZ) goto L_00843815;
L_008437b6:; BB(0x008437b6);
    /* 008437b6: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 008437b9: mov ecx, 0xa22760 */ r_ecx = 0xa22760u;
    /* 008437be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008437c0:; BB(0x008437c0);
    /* 008437c0: cmp eax, 0xed */ {  u32 a = r_eax; u32 b = 0xedu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008437c5: je 0x843806 */ if (fZ) goto L_00843806;
L_008437c7:; BB(0x008437c7);
    /* 008437c7: movzx ebx, byte ptr [edx] */ r_ebx = (u32)R8((u32)(r_edx));
    /* 008437ca: test ebx, 0x80 */ {  u32 a = r_ebx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008437d0: je 0x8437fb */ if (fZ) goto L_008437fb;
L_008437d2:; BB(0x008437d2);
    /* 008437d2: movzx ebx, word ptr [ecx] */ r_ebx = (u32)R16((u32)(r_ecx));
    /* 008437d5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008437d7: jne 0x8437fb */ if (!fZ) goto L_008437fb;
L_008437d9:; BB(0x008437d9);
    /* 008437d9: movzx ebx, byte ptr [ecx + 2] */ r_ebx = (u32)R8((u32)(r_ecx+0x2u));
    /* 008437dd: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008437df: je 0x8437fb */ if (fZ) goto L_008437fb;
L_008437e1:; BB(0x008437e1);
    /* 008437e1: mov edi, dword ptr [0xadcdd0] */ r_edi = R32((u32)(0xadcdd0u));
    /* 008437e7: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008437ea: jae 0x8437fb */ if (!fC) goto L_008437fb;
L_008437ec:; BB(0x008437ec);
    /* 008437ec: lea esi, [edi + 1] */ r_esi = (u32)(r_edi+0x1u);
    /* 008437ef: mov dword ptr [0xadcdd0], esi */ W32((u32)(0xadcdd0u), r_esi);
    /* 008437f5: mov byte ptr [edi + 0xadcdd4], bl */ W8((u32)(r_edi+0xadcdd4u), (u8)r_ebx);
L_008437fb:; BB(0x008437fb);
    /* 008437fb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008437fe: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00843801: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00843804: jmp 0x8437c0 */ goto L_008437c0;
L_00843806:; BB(0x00843806);
    /* 00843806: call 0x8438c0 */ r_esp -= 4; W32(r_esp, 0x84380bu); f_008438c0();
    /* 0084380b: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00843811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00843812: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00843813: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00843814: ret  */ FN_RET(0x0084376c); r_esp += 4; return;
L_00843815:; BB(0x00843815);
    /* 00843815: mov eax, dword ptr [0xadcdc0] */ r_eax = R32((u32)(0xadcdc0u));
    /* 0084381a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084381b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0084381d: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x843820u); call_ind(t); }
    /* 00843820: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843825: je 0x843815 */ if (fZ) goto L_00843815;
L_00843827:; BB(0x00843827);
    /* 00843827: jmp 0x843806 */ goto L_00843806;
}

void f_0084382c(void) /* sub_84382C */
{
    FN_ENTER(0x0084382c);
    /* 0084382c: mov eax, dword ptr [0xadcdc0] */ r_eax = R32((u32)(0xadcdc0u));
    /* 00843831: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00843833: je 0x843840 */ if (fZ) goto L_00843840;
L_00843835:; BB(0x00843835);
    /* 00843835: mov eax, dword ptr [0xadcdc4] */ r_eax = R32((u32)(0xadcdc4u));
    /* 0084383a: cmp eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084383e: je 0x843846 */ if (fZ) goto L_00843846;
L_00843840:; BB(0x00843840);
    /* 00843840: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00843845: ret  */ FN_RET(0x0084382c); r_esp += 4; return;
L_00843846:; BB(0x00843846);
    /* 00843846: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0084384a: mov eax, 0xadcdd4 */ r_eax = 0xadcdd4u;
    /* 0084384f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00843851: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00843853: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00843855: ret  */ FN_RET(0x0084382c); r_esp += 4; return;
}

void f_00843858(void) /* sub_843858 */
{
    FN_ENTER(0x00843858);
    /* 00843858: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0084385c: mov eax, dword ptr [0xadcdcc] */ r_eax = R32((u32)(0xadcdccu));
    /* 00843861: mov dword ptr [0xadcdcc], edx */ W32((u32)(0xadcdccu), r_edx);
    /* 00843867: ret  */ FN_RET(0x00843858); r_esp += 4; return;
}

void f_00843868(void) /* sub_843868 */
{
    FN_ENTER(0x00843868);
    /* 00843868: push dword ptr [0xadcdc4] */ { u32 v = R32((u32)(0xadcdc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0084386e: push 0x98b3a0 */ { u32 v = 0x98b3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00843873: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x843878u); f_0061cdb0();
    /* 00843878: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0084387b: mov eax, dword ptr [0xadcdc0] */ r_eax = R32((u32)(0xadcdc0u));
    /* 00843880: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00843882: je 0x8438bf */ if (fZ) goto L_008438bf;
L_00843884:; BB(0x00843884);
    /* 00843884: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843885: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00843887: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x84388au); call_ind(t); }
    /* 0084388a: mov eax, dword ptr [0xadcdc0] */ r_eax = R32((u32)(0xadcdc0u));
    /* 0084388f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843890: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00843892: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x843895u); call_ind(t); }
    /* 00843895: mov dword ptr [0xadcdc4], 0xffffffff */ W32((u32)(0xadcdc4u), 0xffffffffu);
    /* 0084389f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008438a1: mov dword ptr [0xadcdc0], eax */ W32((u32)(0xadcdc0u), r_eax);
    /* 008438a6: mov byte ptr [0xadcdd4], al */ W8((u32)(0xadcdd4u), (u8)r_eax);
    /* 008438ab: mov byte ptr [0xadcdd5], al */ W8((u32)(0xadcdd5u), (u8)r_eax);
    /* 008438b0: mov byte ptr [0xadcdd6], al */ W8((u32)(0xadcdd6u), (u8)r_eax);
    /* 008438b5: mov byte ptr [0xadcdd7], al */ W8((u32)(0xadcdd7u), (u8)r_eax);
    /* 008438ba: mov dword ptr [0xadcdd0], eax */ W32((u32)(0xadcdd0u), r_eax);
L_008438bf:; BB(0x008438bf);
    /* 008438bf: ret  */ FN_RET(0x00843868); r_esp += 4; return;
}

void f_008438c0(void) /* sub_8438C0 */
{
    FN_ENTER(0x008438c0);
    /* 008438c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008438c1: mov edx, dword ptr [0xadcdcc] */ r_edx = R32((u32)(0xadcdccu));
    /* 008438c7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008438c9: je 0x8438e7 */ if (fZ) goto L_008438e7;
L_008438cb:; BB(0x008438cb);
    /* 008438cb: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 008438ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008438d0: mov ebx, eax */ r_ebx = r_eax;
    /* 008438d2: jmp 0x8438da */ goto L_008438da;
L_008438d4:; BB(0x008438d4);
    /* 008438d4: mov edx, dword ptr [0xadcdcc] */ r_edx = R32((u32)(0xadcdccu));
L_008438da:; BB(0x008438da);
    /* 008438da: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x8438dcu); call_ind(t); }
    /* 008438dc: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008438df: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008438e2: jb 0x8438d4 */ if (fC) goto L_008438d4;
L_008438e4:; BB(0x008438e4);
    /* 008438e4: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_008438e7:; BB(0x008438e7);
    /* 008438e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008438e8: ret  */ FN_RET(0x008438c0); r_esp += 4; return;
}

void f_008438ec(void) /* sub_8438EC */
{
    FN_ENTER(0x008438ec);
    /* 008438ec: call 0x843868 */ r_esp -= 4; W32(r_esp, 0x8438f1u); f_00843868();
    /* 008438f1: ret  */ FN_RET(0x008438ec); r_esp += 4; return;
}

void f_008438f4(void) /* sub_8438F4 */
{
    FN_ENTER(0x008438f4);
    /* 008438f4: mov dword ptr [0xadcdc4], 0xffffffff */ W32((u32)(0xadcdc4u), 0xffffffffu);
    /* 008438fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00843900: mov dword ptr [0xadcdc0], eax */ W32((u32)(0xadcdc0u), r_eax);
    /* 00843905: mov dword ptr [0xadcdcc], eax */ W32((u32)(0xadcdccu), r_eax);
    /* 0084390a: mov byte ptr [0xadcdd4], al */ W8((u32)(0xadcdd4u), (u8)r_eax);
    /* 0084390f: mov byte ptr [0xadcdd5], al */ W8((u32)(0xadcdd5u), (u8)r_eax);
    /* 00843914: mov byte ptr [0xadcdd6], al */ W8((u32)(0xadcdd6u), (u8)r_eax);
    /* 00843919: mov byte ptr [0xadcdd7], al */ W8((u32)(0xadcdd7u), (u8)r_eax);
    /* 0084391e: mov edx, dword ptr [0xadcdc0] */ r_edx = R32((u32)(0xadcdc0u));
    /* 00843924: mov dword ptr [0xadcdd0], eax */ W32((u32)(0xadcdd0u), r_eax);
    /* 00843929: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084392b: je 0x843932 */ if (fZ) goto L_00843932;
L_0084392d:; BB(0x0084392d);
    /* 0084392d: call 0x843868 */ r_esp -= 4; W32(r_esp, 0x843932u); f_00843868();
L_00843932:; BB(0x00843932);
    /* 00843932: mov eax, dword ptr [0xadcda0] */ r_eax = R32((u32)(0xadcda0u));
    /* 00843937: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00843939: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0084393b: push 0xadcdc0 */ { u32 v = 0xadcdc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00843940: push 0x99f87c */ { u32 v = 0x99f87cu; r_esp -= 4; W32(r_esp, v); }
    /* 00843945: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843946: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x843949u); call_ind(t); }
    /* 00843949: mov eax, dword ptr [0xadcdc0] */ r_eax = R32((u32)(0xadcdc0u));
    /* 0084394e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00843950: je 0x84397c */ if (fZ) goto L_0084397c;
L_00843952:; BB(0x00843952);
    /* 00843952: push 0x99f61c */ { u32 v = 0x99f61cu; r_esp -= 4; W32(r_esp, v); }
    /* 00843957: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843958: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0084395a: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x84395du); call_ind(t); }
    /* 0084395d: mov eax, dword ptr [0xadcdc0] */ r_eax = R32((u32)(0xadcdc0u));
    /* 00843962: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00843964: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00843966: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0084396c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084396d: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x843970u); call_ind(t); }
    /* 00843970: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00843972: mov dword ptr [0xadcdc4], eax */ W32((u32)(0xadcdc4u), r_eax);
    /* 00843977: mov dword ptr [0xadcdc8], eax */ W32((u32)(0xadcdc8u), r_eax);
L_0084397c:; BB(0x0084397c);
    /* 0084397c: ret  */ FN_RET(0x008438f4); r_esp += 4; return;
}

void f_00843980(void) /* sub_843980 */
{
    FN_ENTER(0x00843980);
    /* 00843980: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00843983: fld dword ptr [0x98b3e0] */ FPUSH(R_F32((u32)(0x98b3e0u)));
    /* 00843989: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0084398d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084398f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00843992: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00843996: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084399b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084399f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 008439a3: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 008439a7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 008439aa: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 008439ae: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008439b0: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008439b4: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 008439b7: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 008439bb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008439c0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008439c4: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 008439c8: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 008439cc: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 008439cf: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 008439d3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008439d5: movzx ecx, byte ptr [esp + 0x10] */ r_ecx = (u32)R8((u32)(r_esp+0x10u));
    /* 008439da: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 008439dd: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 008439e1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008439e6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008439ea: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 008439ee: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 008439f2: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 008439f5: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 008439fa: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008439fd: or edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00843a03: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00843a06: or edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00843a08: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00843a0a: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00843a0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00843a10: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00843a12: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 00843a17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843a18: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x843a1eu); call_ind(t); }
    /* 00843a1e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00843a21: ret 0xc */ FN_RET(0x00843980); r_esp += 16; return;
}

void f_00843a24(void) /* sub_843A24 */
{
    FN_ENTER(0x00843a24);
    /* 00843a24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00843a25: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00843a2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00843a2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00843a2c: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00843a2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843a2f: call dword ptr [esi + 0xb8] */ { u32 t = R32((u32)(r_esi+0xb8u)); r_esp -= 4; W32(r_esp, 0x843a35u); call_ind(t); }
    /* 00843a35: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00843a36: ret  */ FN_RET(0x00843a24); r_esp += 4; return;
}

void f_00843a38(void) /* sub_843A38 */
{
    FN_ENTER(0x00843a38);
    /* 00843a38: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00843a3c: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00843a3f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00843a41: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00843a43: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 00843a46: mov dword ptr [eax*8 + 0xadcde4], edx */ W32((u32)(r_eax*8+0xadcde4u), r_edx);
    /* 00843a4d: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00843a51: mov dword ptr [eax*8 + 0xadcde8], edx */ W32((u32)(r_eax*8+0xadcde8u), r_edx);
    /* 00843a58: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00843a5c: mov dword ptr [eax*8 + 0xadcdec], edx */ W32((u32)(r_eax*8+0xadcdecu), r_edx);
    /* 00843a63: ret 0xc */ FN_RET(0x00843a38); r_esp += 16; return;
}

void f_00843a68(void) /* sub_843A68 */
{
    FN_ENTER(0x00843a68);
    /* 00843a68: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00843a69: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00843a6c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00843a6e: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00843a72: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843a74: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00843a78: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843a7a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843a7c: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00843a80: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843a82: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843a84: fcomp dword ptr [0x98b3dc] */ fx_compare(ST(0), R_F32((u32)(0x98b3dcu))); FPOP();
    /* 00843a8a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00843a8c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00843a8d: jbe 0x843af1 */ if ((fC||fZ)) goto L_00843af1;
L_00843a8f:; BB(0x00843a8f);
    /* 00843a8f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x843a94u); f_0082d7b0();
    /* 00843a94: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00843a96: call 0x83c670 */ r_esp -= 4; W32(r_esp, 0x843a9bu); f_0083c670();
    /* 00843a9b: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00843a9f: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00843aa3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00843aa6: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00843aaa: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00843aae: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00843ab2: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00843ab5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00843ab8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843ab9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00843aba: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x843abfu); f_0083a610();
    /* 00843abf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00843ac2: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00843ac5: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00843ac9: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00843acc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00843ace: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00843ad0: lea eax, [ebx + eax*4] */ r_eax = (u32)(r_ebx+r_eax*4);
    /* 00843ad3: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00843ad7: mov dword ptr [eax*8 + 0xadce20], edx */ W32((u32)(r_eax*8+0xadce20u), r_edx);
    /* 00843ade: mov dword ptr [eax*8 + 0xadce24], ecx */ W32((u32)(r_eax*8+0xadce24u), r_ecx);
    /* 00843ae5: mov dword ptr [eax*8 + 0xadce28], ebx */ W32((u32)(r_eax*8+0xadce28u), r_ebx);
    /* 00843aec: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x843af1u); f_0082da80();
L_00843af1:; BB(0x00843af1);
    /* 00843af1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00843af4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00843af5: ret 0xc */ FN_RET(0x00843a68); r_esp += 16; return;
}

void f_00843af8(void) /* sub_843AF8 */
{
    FN_ENTER(0x00843af8);
    /* 00843af8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00843af9: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00843afc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00843afe: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00843b00: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 00843b03: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00843b06: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00843b08: lea edx, [edx + edx + 0xadcde0] */ r_edx = (u32)(r_edx+r_edx+0xadcde0u);
    /* 00843b0f: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00843b11: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00843b14: je 0x843b28 */ if (fZ) goto L_00843b28;
L_00843b16:; BB(0x00843b16);
    /* 00843b16: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00843b1b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00843b1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00843b1d: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00843b1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843b20: call dword ptr [edi + 0xb0] */ { u32 t = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, 0x843b26u); call_ind(t); }
    /* 00843b26: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00843b27: ret  */ FN_RET(0x00843af8); r_esp += 4; return;
L_00843b28:; BB(0x00843b28);
    /* 00843b28: fld dword ptr [eax*8 + 0xadce20] */ FPUSH(R_F32((u32)(r_eax*8+0xadce20u)));
    /* 00843b2f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843b31: fld dword ptr [eax*8 + 0xadce24] */ FPUSH(R_F32((u32)(r_eax*8+0xadce24u)));
    /* 00843b38: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843b3a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843b3c: fld dword ptr [eax*8 + 0xadce28] */ FPUSH(R_F32((u32)(r_eax*8+0xadce28u)));
    /* 00843b43: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843b45: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843b47: fcomp dword ptr [0x98b3d8] */ fx_compare(ST(0), R_F32((u32)(0x98b3d8u))); FPOP();
    /* 00843b4d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00843b4f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00843b50: jae 0x843b16 */ if (!fC) goto L_00843b16;
L_00843b52:; BB(0x00843b52);
    /* 00843b52: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00843b53: ret  */ FN_RET(0x00843af8); r_esp += 4; return;
}

void f_00843b54(void) /* sub_843B54 */
{
    FN_ENTER(0x00843b54);
    /* 00843b54: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00843b58: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00843b5b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00843b5d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00843b5f: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 00843b62: mov dword ptr [ecx*8 + 0xadcde0], 1 */ W32((u32)(r_ecx*8+0xadcde0u), 0x1u);
    /* 00843b6d: mov dword ptr [ecx*8 + 0xadcdf0], 0x3f800000 */ W32((u32)(r_ecx*8+0xadcdf0u), 0x3f800000u);
    /* 00843b78: mov dword ptr [ecx*8 + 0xadcde4], 0x3f800000 */ W32((u32)(r_ecx*8+0xadcde4u), 0x3f800000u);
    /* 00843b83: mov dword ptr [ecx*8 + 0xadcde8], 0x3f800000 */ W32((u32)(r_ecx*8+0xadcde8u), 0x3f800000u);
    /* 00843b8e: mov dword ptr [ecx*8 + 0xadcdec], 0x3f800000 */ W32((u32)(r_ecx*8+0xadcdecu), 0x3f800000u);
    /* 00843b99: mov dword ptr [ecx*8 + 0xadce00], 0 */ W32((u32)(r_ecx*8+0xadce00u), 0x0u);
    /* 00843ba4: mov dword ptr [ecx*8 + 0xadcdf4], 0 */ W32((u32)(r_ecx*8+0xadcdf4u), 0x0u);
    /* 00843baf: mov dword ptr [ecx*8 + 0xadcdf8], 0 */ W32((u32)(r_ecx*8+0xadcdf8u), 0x0u);
    /* 00843bba: mov dword ptr [ecx*8 + 0xadcdfc], 0 */ W32((u32)(r_ecx*8+0xadcdfcu), 0x0u);
    /* 00843bc5: mov dword ptr [ecx*8 + 0xadce10], 0 */ W32((u32)(r_ecx*8+0xadce10u), 0x0u);
    /* 00843bd0: mov dword ptr [ecx*8 + 0xadce04], 0 */ W32((u32)(r_ecx*8+0xadce04u), 0x0u);
    /* 00843bdb: mov dword ptr [ecx*8 + 0xadce08], 0 */ W32((u32)(r_ecx*8+0xadce08u), 0x0u);
    /* 00843be6: mov dword ptr [ecx*8 + 0xadce0c], 0 */ W32((u32)(r_ecx*8+0xadce0cu), 0x0u);
    /* 00843bf1: mov dword ptr [ecx*8 + 0xadce14], 0x3f800000 */ W32((u32)(r_ecx*8+0xadce14u), 0x3f800000u);
    /* 00843bfc: mov dword ptr [ecx*8 + 0xadce18], 0 */ W32((u32)(r_ecx*8+0xadce18u), 0x0u);
    /* 00843c07: mov dword ptr [ecx*8 + 0xadce1c], 0 */ W32((u32)(r_ecx*8+0xadce1cu), 0x0u);
    /* 00843c12: mov dword ptr [ecx*8 + 0xadce2c], 0 */ W32((u32)(r_ecx*8+0xadce2cu), 0x0u);
    /* 00843c1d: mov dword ptr [ecx*8 + 0xadce30], 0x3f800000 */ W32((u32)(r_ecx*8+0xadce30u), 0x3f800000u);
    /* 00843c28: mov dword ptr [ecx*8 + 0xadce34], 0 */ W32((u32)(r_ecx*8+0xadce34u), 0x0u);
    /* 00843c33: mov dword ptr [ecx*8 + 0xadce38], 0x3d4ccccd */ W32((u32)(r_ecx*8+0xadce38u), 0x3d4ccccdu);
    /* 00843c3e: mov dword ptr [ecx*8 + 0xadce3c], 0 */ W32((u32)(r_ecx*8+0xadce3cu), 0x0u);
    /* 00843c49: ret  */ FN_RET(0x00843b54); r_esp += 4; return;
}

void f_00843d18(void) /* sub_843D18 */
{
    FN_ENTER(0x00843d18);
    /* 00843d18: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00843d1d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00843d1f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00843d21: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 00843d26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843d27: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x843d2du); call_ind(t); }
    /* 00843d2d: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00843d32: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00843d34: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 00843d39: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00843d3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843d3c: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x843d42u); call_ind(t); }
    /* 00843d42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00843d44: call 0x843c4c */ r_esp -= 4; W32(r_esp, 0x843d49u); f_00843c4c();
    /* 00843d49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00843d4a: mov eax, dword ptr [0xadcde0] */ r_eax = R32((u32)(0xadcde0u));
    /* 00843d4f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843d52: je 0x843f31 */ if (fZ) goto L_00843f31;
L_00843d58:; BB(0x00843d58);
    /* 00843d58: push 0xadcde0 */ { u32 v = 0xadcde0u; r_esp -= 4; W32(r_esp, v); }
    /* 00843d5d: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00843d62: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00843d64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00843d66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843d67: call dword ptr [edx + 0xb0] */ { u32 t = R32((u32)(r_edx+0xb0u)); r_esp -= 4; W32(r_esp, 0x843d6du); call_ind(t); }
L_00843d6d:; BB(0x00843d6d);
    /* 00843d6d: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00843d72: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00843d74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00843d76: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00843d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843d79: call dword ptr [edx + 0xb8] */ { u32 t = R32((u32)(r_edx+0xb8u)); r_esp -= 4; W32(r_esp, 0x843d7fu); call_ind(t); }
    /* 00843d7f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00843d81: call 0x843b54 */ r_esp -= 4; W32(r_esp, 0x843d86u); f_00843b54();
    /* 00843d86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00843d87: mov eax, dword ptr [0xadce48] */ r_eax = R32((u32)(0xadce48u));
    /* 00843d8c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843d8f: je 0x843f01 */ if (fZ) goto L_00843f01;
L_00843d95:; BB(0x00843d95);
    /* 00843d95: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00843d9b: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00843d9d: mov eax, 0xadce48 */ r_eax = 0xadce48u;
    /* 00843da2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843da3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00843da5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00843da6: call dword ptr [ecx + 0xb0] */ { u32 t = R32((u32)(r_ecx+0xb0u)); r_esp -= 4; W32(r_esp, 0x843dacu); call_ind(t); }
L_00843dac:; BB(0x00843dac);
    /* 00843dac: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00843db1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00843db3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00843db5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00843db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843db8: call dword ptr [edx + 0xb8] */ { u32 t = R32((u32)(r_edx+0xb8u)); r_esp -= 4; W32(r_esp, 0x843dbeu); call_ind(t); }
    /* 00843dbe: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00843dc0: call 0x843b54 */ r_esp -= 4; W32(r_esp, 0x843dc5u); f_00843b54();
    /* 00843dc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00843dc6: mov eax, dword ptr [0xadceb0] */ r_eax = R32((u32)(0xadceb0u));
    /* 00843dcb: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843dce: je 0x843ed1 */ if (fZ) goto L_00843ed1;
L_00843dd4:; BB(0x00843dd4);
    /* 00843dd4: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00843dda: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00843ddc: mov eax, 0xadceb0 */ r_eax = 0xadceb0u;
    /* 00843de1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843de2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00843de4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00843de5: call dword ptr [ecx + 0xb0] */ { u32 t = R32((u32)(r_ecx+0xb0u)); r_esp -= 4; W32(r_esp, 0x843debu); call_ind(t); }
L_00843deb:; BB(0x00843deb);
    /* 00843deb: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00843df0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00843df2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00843df4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00843df6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843df7: call dword ptr [edx + 0xb8] */ { u32 t = R32((u32)(r_edx+0xb8u)); r_esp -= 4; W32(r_esp, 0x843dfdu); call_ind(t); }
    /* 00843dfd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00843dff: call 0x843b54 */ r_esp -= 4; W32(r_esp, 0x843e04u); f_00843b54();
    /* 00843e04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00843e05: mov eax, dword ptr [0xadcf18] */ r_eax = R32((u32)(0xadcf18u));
    /* 00843e0a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843e0d: je 0x843ea1 */ if (fZ) goto L_00843ea1;
L_00843e13:; BB(0x00843e13);
    /* 00843e13: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00843e19: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00843e1b: mov eax, 0xadcf18 */ r_eax = 0xadcf18u;
    /* 00843e20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843e21: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00843e23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00843e24: call dword ptr [ecx + 0xb0] */ { u32 t = R32((u32)(r_ecx+0xb0u)); r_esp -= 4; W32(r_esp, 0x843e2au); call_ind(t); }
L_00843e2a:; BB(0x00843e2a);
    /* 00843e2a: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00843e2f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00843e31: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00843e33: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00843e35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843e36: call dword ptr [edx + 0xb8] */ { u32 t = R32((u32)(r_edx+0xb8u)); r_esp -= 4; W32(r_esp, 0x843e3cu); call_ind(t); }
    /* 00843e3c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00843e3e: call 0x843b54 */ r_esp -= 4; W32(r_esp, 0x843e43u); f_00843b54();
    /* 00843e43: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00843e44: mov eax, dword ptr [0xadcf80] */ r_eax = R32((u32)(0xadcf80u));
    /* 00843e49: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843e4c: je 0x843e78 */ if (fZ) goto L_00843e78;
L_00843e4e:; BB(0x00843e4e);
    /* 00843e4e: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00843e54: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00843e56: mov eax, 0xadcf80 */ r_eax = 0xadcf80u;
    /* 00843e5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843e5c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00843e5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00843e5f: call dword ptr [ecx + 0xb0] */ { u32 t = R32((u32)(r_ecx+0xb0u)); r_esp -= 4; W32(r_esp, 0x843e65u); call_ind(t); }
L_00843e65:; BB(0x00843e65);
    /* 00843e65: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00843e6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00843e6c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00843e6e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00843e70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843e71: call dword ptr [edx + 0xb8] */ { u32 t = R32((u32)(r_edx+0xb8u)); r_esp -= 4; W32(r_esp, 0x843e77u); call_ind(t); }
    /* 00843e77: ret  */ FN_RET(0x00843d18); r_esp += 4; return;
L_00843e78:; BB(0x00843e78);
    /* 00843e78: fld dword ptr [0xadcfc8] */ FPUSH(R_F32((u32)(0xadcfc8u)));
    /* 00843e7e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843e80: fld dword ptr [0xadcfc4] */ FPUSH(R_F32((u32)(0xadcfc4u)));
    /* 00843e86: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843e88: fld dword ptr [0xadcfc0] */ FPUSH(R_F32((u32)(0xadcfc0u)));
    /* 00843e8e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843e90: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843e92: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843e94: fcomp dword ptr [0x98b3c0] */ fx_compare(ST(0), R_F32((u32)(0x98b3c0u))); FPOP();
    /* 00843e9a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00843e9c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00843e9d: jb 0x843e65 */ if (fC) goto L_00843e65;
L_00843e9f:; BB(0x00843e9f);
    /* 00843e9f: jmp 0x843e4e */ goto L_00843e4e;
L_00843ea1:; BB(0x00843ea1);
    /* 00843ea1: fld dword ptr [0xadcf60] */ FPUSH(R_F32((u32)(0xadcf60u)));
    /* 00843ea7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843ea9: fld dword ptr [0xadcf5c] */ FPUSH(R_F32((u32)(0xadcf5cu)));
    /* 00843eaf: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843eb1: fld dword ptr [0xadcf58] */ FPUSH(R_F32((u32)(0xadcf58u)));
    /* 00843eb7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843eb9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843ebb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843ebd: fcomp dword ptr [0x98b3c0] */ fx_compare(ST(0), R_F32((u32)(0x98b3c0u))); FPOP();
    /* 00843ec3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00843ec5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00843ec6: jb 0x843e2a */ if (fC) goto L_00843e2a;
L_00843ecc:; BB(0x00843ecc);
    /* 00843ecc: jmp 0x843e13 */ goto L_00843e13;
L_00843ed1:; BB(0x00843ed1);
    /* 00843ed1: fld dword ptr [0xadcef8] */ FPUSH(R_F32((u32)(0xadcef8u)));
    /* 00843ed7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843ed9: fld dword ptr [0xadcef4] */ FPUSH(R_F32((u32)(0xadcef4u)));
    /* 00843edf: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843ee1: fld dword ptr [0xadcef0] */ FPUSH(R_F32((u32)(0xadcef0u)));
    /* 00843ee7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843ee9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843eeb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843eed: fcomp dword ptr [0x98b3c0] */ fx_compare(ST(0), R_F32((u32)(0x98b3c0u))); FPOP();
    /* 00843ef3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00843ef5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00843ef6: jb 0x843deb */ if (fC) goto L_00843deb;
L_00843efc:; BB(0x00843efc);
    /* 00843efc: jmp 0x843dd4 */ goto L_00843dd4;
L_00843f01:; BB(0x00843f01);
    /* 00843f01: fld dword ptr [0xadce90] */ FPUSH(R_F32((u32)(0xadce90u)));
    /* 00843f07: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843f09: fld dword ptr [0xadce8c] */ FPUSH(R_F32((u32)(0xadce8cu)));
    /* 00843f0f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843f11: fld dword ptr [0xadce88] */ FPUSH(R_F32((u32)(0xadce88u)));
    /* 00843f17: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843f19: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843f1b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843f1d: fcomp dword ptr [0x98b3c0] */ fx_compare(ST(0), R_F32((u32)(0x98b3c0u))); FPOP();
    /* 00843f23: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00843f25: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00843f26: jb 0x843dac */ if (fC) goto L_00843dac;
L_00843f2c:; BB(0x00843f2c);
    /* 00843f2c: jmp 0x843d95 */ goto L_00843d95;
L_00843f31:; BB(0x00843f31);
    /* 00843f31: fld dword ptr [0xadce20] */ FPUSH(R_F32((u32)(0xadce20u)));
    /* 00843f37: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843f39: fld dword ptr [0xadce24] */ FPUSH(R_F32((u32)(0xadce24u)));
    /* 00843f3f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843f41: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843f43: fld dword ptr [0xadce28] */ FPUSH(R_F32((u32)(0xadce28u)));
    /* 00843f49: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843f4b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843f4d: fcomp dword ptr [0x98b3c0] */ fx_compare(ST(0), R_F32((u32)(0x98b3c0u))); FPOP();
    /* 00843f53: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00843f55: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00843f56: jb 0x843d6d */ if (fC) goto L_00843d6d;
L_00843f5c:; BB(0x00843f5c);
    /* 00843f5c: jmp 0x843d58 */ goto L_00843d58;
}

void f_00843f10(void)
{
    FN_ENTER(0x00843f10);
    goto L_00843f10;
L_00843d95:; BB(0x00843d95);
    /* 00843d95: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00843d9b: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00843d9d: mov eax, 0xadce48 */ r_eax = 0xadce48u;
    /* 00843da2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843da3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00843da5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00843da6: call dword ptr [ecx + 0xb0] */ { u32 t = R32((u32)(r_ecx+0xb0u)); r_esp -= 4; W32(r_esp, 0x843dacu); call_ind(t); }
L_00843dac:; BB(0x00843dac);
    /* 00843dac: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00843db1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00843db3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00843db5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00843db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843db8: call dword ptr [edx + 0xb8] */ { u32 t = R32((u32)(r_edx+0xb8u)); r_esp -= 4; W32(r_esp, 0x843dbeu); call_ind(t); }
    /* 00843dbe: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00843dc0: call 0x843b54 */ r_esp -= 4; W32(r_esp, 0x843dc5u); f_00843b54();
    /* 00843dc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00843dc6: mov eax, dword ptr [0xadceb0] */ r_eax = R32((u32)(0xadceb0u));
    /* 00843dcb: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843dce: je 0x843ed1 */ if (fZ) goto L_00843ed1;
L_00843dd4:; BB(0x00843dd4);
    /* 00843dd4: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00843dda: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00843ddc: mov eax, 0xadceb0 */ r_eax = 0xadceb0u;
    /* 00843de1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843de2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00843de4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00843de5: call dword ptr [ecx + 0xb0] */ { u32 t = R32((u32)(r_ecx+0xb0u)); r_esp -= 4; W32(r_esp, 0x843debu); call_ind(t); }
L_00843deb:; BB(0x00843deb);
    /* 00843deb: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00843df0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00843df2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00843df4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00843df6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843df7: call dword ptr [edx + 0xb8] */ { u32 t = R32((u32)(r_edx+0xb8u)); r_esp -= 4; W32(r_esp, 0x843dfdu); call_ind(t); }
    /* 00843dfd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00843dff: call 0x843b54 */ r_esp -= 4; W32(r_esp, 0x843e04u); f_00843b54();
    /* 00843e04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00843e05: mov eax, dword ptr [0xadcf18] */ r_eax = R32((u32)(0xadcf18u));
    /* 00843e0a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843e0d: je 0x843ea1 */ if (fZ) goto L_00843ea1;
L_00843e13:; BB(0x00843e13);
    /* 00843e13: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00843e19: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00843e1b: mov eax, 0xadcf18 */ r_eax = 0xadcf18u;
    /* 00843e20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843e21: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00843e23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00843e24: call dword ptr [ecx + 0xb0] */ { u32 t = R32((u32)(r_ecx+0xb0u)); r_esp -= 4; W32(r_esp, 0x843e2au); call_ind(t); }
L_00843e2a:; BB(0x00843e2a);
    /* 00843e2a: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00843e2f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00843e31: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00843e33: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00843e35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843e36: call dword ptr [edx + 0xb8] */ { u32 t = R32((u32)(r_edx+0xb8u)); r_esp -= 4; W32(r_esp, 0x843e3cu); call_ind(t); }
    /* 00843e3c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00843e3e: call 0x843b54 */ r_esp -= 4; W32(r_esp, 0x843e43u); f_00843b54();
    /* 00843e43: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00843e44: mov eax, dword ptr [0xadcf80] */ r_eax = R32((u32)(0xadcf80u));
    /* 00843e49: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00843e4c: je 0x843e78 */ if (fZ) goto L_00843e78;
L_00843e4e:; BB(0x00843e4e);
    /* 00843e4e: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00843e54: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00843e56: mov eax, 0xadcf80 */ r_eax = 0xadcf80u;
    /* 00843e5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843e5c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00843e5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00843e5f: call dword ptr [ecx + 0xb0] */ { u32 t = R32((u32)(r_ecx+0xb0u)); r_esp -= 4; W32(r_esp, 0x843e65u); call_ind(t); }
L_00843e65:; BB(0x00843e65);
    /* 00843e65: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00843e6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00843e6c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00843e6e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00843e70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843e71: call dword ptr [edx + 0xb8] */ { u32 t = R32((u32)(r_edx+0xb8u)); r_esp -= 4; W32(r_esp, 0x843e77u); call_ind(t); }
    /* 00843e77: ret  */ FN_RET(0x00843f10); r_esp += 4; return;
L_00843e78:; BB(0x00843e78);
    /* 00843e78: fld dword ptr [0xadcfc8] */ FPUSH(R_F32((u32)(0xadcfc8u)));
    /* 00843e7e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843e80: fld dword ptr [0xadcfc4] */ FPUSH(R_F32((u32)(0xadcfc4u)));
    /* 00843e86: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843e88: fld dword ptr [0xadcfc0] */ FPUSH(R_F32((u32)(0xadcfc0u)));
    /* 00843e8e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843e90: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843e92: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843e94: fcomp dword ptr [0x98b3c0] */ fx_compare(ST(0), R_F32((u32)(0x98b3c0u))); FPOP();
    /* 00843e9a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00843e9c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00843e9d: jb 0x843e65 */ if (fC) goto L_00843e65;
L_00843e9f:; BB(0x00843e9f);
    /* 00843e9f: jmp 0x843e4e */ goto L_00843e4e;
L_00843ea1:; BB(0x00843ea1);
    /* 00843ea1: fld dword ptr [0xadcf60] */ FPUSH(R_F32((u32)(0xadcf60u)));
    /* 00843ea7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843ea9: fld dword ptr [0xadcf5c] */ FPUSH(R_F32((u32)(0xadcf5cu)));
    /* 00843eaf: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843eb1: fld dword ptr [0xadcf58] */ FPUSH(R_F32((u32)(0xadcf58u)));
    /* 00843eb7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843eb9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843ebb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843ebd: fcomp dword ptr [0x98b3c0] */ fx_compare(ST(0), R_F32((u32)(0x98b3c0u))); FPOP();
    /* 00843ec3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00843ec5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00843ec6: jb 0x843e2a */ if (fC) goto L_00843e2a;
L_00843ecc:; BB(0x00843ecc);
    /* 00843ecc: jmp 0x843e13 */ goto L_00843e13;
L_00843ed1:; BB(0x00843ed1);
    /* 00843ed1: fld dword ptr [0xadcef8] */ FPUSH(R_F32((u32)(0xadcef8u)));
    /* 00843ed7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843ed9: fld dword ptr [0xadcef4] */ FPUSH(R_F32((u32)(0xadcef4u)));
    /* 00843edf: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843ee1: fld dword ptr [0xadcef0] */ FPUSH(R_F32((u32)(0xadcef0u)));
    /* 00843ee7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00843ee9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843eeb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00843eed: fcomp dword ptr [0x98b3c0] */ fx_compare(ST(0), R_F32((u32)(0x98b3c0u))); FPOP();
    /* 00843ef3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00843ef5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00843ef6: jb 0x843deb */ if (fC) goto L_00843deb;
L_00843efc:; BB(0x00843efc);
    /* 00843efc: jmp 0x843dd4 */ goto L_00843dd4;
L_00843f10:; BB(0x00843f10);
    /* 00843f10: enter 0x5d9, -0x78 */ { u32 f = 0x5d9u; u32 lv = 8u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 00843f14: into  */ UNSUP(0x00843f14, "into ");
    /* 00843f15: lodsd eax, dword ptr [esi] */ r_eax = R32(r_esi); r_esi += rt_df ? -4 : 4;
    /* 00843f16: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00843f18: enter -0x3e22, -0x22 */ { u32 f = 0xc1deu; u32 lv = 30u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 00843f1c: rcr eax, 0x1d */ { u32 c = (29u) & 31; u32 a = r_eax; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_eax = a; }
    /* 00843f1f: sal byte ptr [ebx - 0x1f20ff68], 0x9e */ { u32 ad = (u32)(r_ebx+0xe0df0098u); u32 c = (30u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r); fC = (c <= 8) ? ((a >> (8 - c)) & 1) : 0; } }
    /* 00843f26: jb 0x843dac */ if (fC) goto L_00843dac;
L_00843f2c:; BB(0x00843f2c);
    /* 00843f2c: jmp 0x843d95 */ goto L_00843d95;
}

void f_00843f64(void) /* sub_843F64 */
{
    FN_ENTER(0x00843f64);
    /* 00843f64: mov dword ptr [0xae6d54], ecx */ W32((u32)(0xae6d54u), r_ecx);
    /* 00843f6a: ret  */ FN_RET(0x00843f64); r_esp += 4; return;
}

void f_00843f6c(void) /* sub_843F6C */
{
    FN_ENTER(0x00843f6c);
    /* 00843f6c: mov eax, dword ptr [0xae6d54] */ r_eax = R32((u32)(0xae6d54u));
    /* 00843f71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00843f73: je 0x843f77 */ if (fZ) goto L_00843f77;
L_00843f75:; BB(0x00843f75);
    /* 00843f75: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x843f77u); call_ind(t); }
L_00843f77:; BB(0x00843f77);
    /* 00843f77: ret  */ FN_RET(0x00843f6c); r_esp += 4; return;
}

void f_00843f78(void) /* sub_843F78 */
{
    FN_ENTER(0x00843f78);
    /* 00843f78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00843f79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00843f7a: call 0x84af0c */ r_esp -= 4; W32(r_esp, 0x843f7fu); f_0084af0c();
    /* 00843f7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00843f82: ret  */ FN_RET(0x00843f78); r_esp += 4; return;
}

void f_00843f84(void) /* sub_843F84 */
{
    FN_ENTER(0x00843f84);
    /* 00843f84: mov ecx, 0xa22b20 */ r_ecx = 0xa22b20u;
    /* 00843f89: mov edx, 8 */ r_edx = 0x8u;
    /* 00843f8e: call 0x84518c */ r_esp -= 4; W32(r_esp, 0x843f93u); f_0084518c();
    /* 00843f93: call 0x83c2dc */ r_esp -= 4; W32(r_esp, 0x843f98u); f_0083c2dc();
    /* 00843f98: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x843f9du); f_0061cdb0();
    /* 00843f9d: call 0x83dd38 */ r_esp -= 4; W32(r_esp, 0x843fa2u); f_0083dd38();
    /* 00843fa2: call 0x83acdc */ r_esp -= 4; W32(r_esp, 0x843fa7u); f_0083acdc();
    /* 00843fa7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x843facu); f_0061cdb0();
    /* 00843fac: call 0x82e91c */ r_esp -= 4; W32(r_esp, 0x843fb1u); f_0082e91c();
    /* 00843fb1: call 0x8438ec */ r_esp -= 4; W32(r_esp, 0x843fb6u); f_008438ec();
    /* 00843fb6: call 0x84afe0 */ r_esp -= 4; W32(r_esp, 0x843fbbu); f_0084afe0();
    /* 00843fbb: ret  */ FN_RET(0x00843f84); r_esp += 4; return;
}

void f_00843fbc(void) /* sub_843FBC */
{
    FN_ENTER(0x00843fbc);
    /* 00843fbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00843fbd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00843fbf: call 0x84afec */ r_esp -= 4; W32(r_esp, 0x843fc4u); f_0084afec();
    /* 00843fc4: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00843fc7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00843fc9: call 0x82e9d0 */ r_esp -= 4; W32(r_esp, 0x843fceu); f_0082e9d0();
    /* 00843fce: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00843fd1: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00843fd4: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00843fd7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00843fda: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00843fdd: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 00843fe0: call 0x82ae2c */ r_esp -= 4; W32(r_esp, 0x843fe5u); f_0082ae2c();
    /* 00843fe5: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00843fe8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x843fedu); f_0061cdb0();
    /* 00843fed: call 0x83adac */ r_esp -= 4; W32(r_esp, 0x843ff2u); f_0083adac();
    /* 00843ff2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00843ff4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843ff5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00843ff6: call 0x83dd54 */ r_esp -= 4; W32(r_esp, 0x843ffbu); f_0083dd54();
    /* 00843ffb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00843ffe: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x844003u); f_0061cdb0();
    /* 00844003: mov edx, 0xae59c0 */ r_edx = 0xae59c0u;
    /* 00844008: and edx, 0xffffffe0 */ {  u32 a = r_edx; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084400b: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084400e: mov eax, 0xadd000 */ r_eax = 0xadd000u;
    /* 00844013: and eax, 0xffffffe0 */ {  u32 a = r_eax; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00844016: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00844019: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084401a: push 0x320 */ { u32 v = 0x320u; r_esp -= 4; W32(r_esp, v); }
    /* 0084401f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00844020: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00844022: call 0x83c5b0 */ r_esp -= 4; W32(r_esp, 0x844027u); f_0083c5b0();
    /* 00844027: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0084402a: mov dword ptr [0xae6d54], 0 */ W32((u32)(0xae6d54u), 0x0u);
    /* 00844034: mov eax, 0xa231cc */ r_eax = 0xa231ccu;
    /* 00844039: mov dword ptr [0xae6d94], eax */ W32((u32)(0xae6d94u), r_eax);
    /* 0084403e: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 00844040: mov dword ptr [0xae6d58], ebp */ W32((u32)(0xae6d58u), r_ebp);
    /* 00844046: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00844049: mov dword ptr [0xae6d5c], ecx */ W32((u32)(0xae6d5cu), r_ecx);
    /* 0084404f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00844052: mov dword ptr [0xae6d60], edx */ W32((u32)(0xae6d60u), r_edx);
    /* 00844058: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0084405b: mov dword ptr [0xae6d64], edx */ W32((u32)(0xae6d64u), r_edx);
    /* 00844061: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00844064: mov dword ptr [0xae6d68], edx */ W32((u32)(0xae6d68u), r_edx);
    /* 0084406a: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0084406d: mov dword ptr [0xae6d6c], edx */ W32((u32)(0xae6d6cu), r_edx);
    /* 00844073: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00844076: mov dword ptr [0xae6d70], edx */ W32((u32)(0xae6d70u), r_edx);
    /* 0084407c: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0084407f: mov dword ptr [0xae6d74], edx */ W32((u32)(0xae6d74u), r_edx);
    /* 00844085: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00844088: mov dword ptr [0xae6d78], edx */ W32((u32)(0xae6d78u), r_edx);
    /* 0084408e: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00844091: mov dword ptr [0xae6d7c], edx */ W32((u32)(0xae6d7cu), r_edx);
    /* 00844097: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0084409a: mov dword ptr [0xae6d80], edx */ W32((u32)(0xae6d80u), r_edx);
    /* 008440a0: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 008440a3: mov dword ptr [0xae6d84], edx */ W32((u32)(0xae6d84u), r_edx);
    /* 008440a9: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 008440ac: mov dword ptr [0xae6d88], edx */ W32((u32)(0xae6d88u), r_edx);
    /* 008440b2: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 008440b5: mov dword ptr [0xae6d8c], edx */ W32((u32)(0xae6d8cu), r_edx);
    /* 008440bb: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 008440be: mov dword ptr [0xae6d90], eax */ W32((u32)(0xae6d90u), r_eax);
    /* 008440c3: mov ecx, 0xa22b20 */ r_ecx = 0xa22b20u;
    /* 008440c8: mov edx, 8 */ r_edx = 0x8u;
    /* 008440cd: call 0x8451c8 */ r_esp -= 4; W32(r_esp, 0x8440d2u); f_008451c8();
    /* 008440d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008440d3: ret  */ FN_RET(0x00843fbc); r_esp += 4; return;
}

