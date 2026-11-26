#include "protos.h"

void f_0078d130(void) /* sub_78D130 */
{
    FN_ENTER(0x0078d130);
    /* 0078d130: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078d131: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078d132: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078d135: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0078d138: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0078d13b: mov ebp, dword ptr [ecx + 0x2c] */ r_ebp = R32((u32)(r_ecx+0x2cu));
    /* 0078d13e: movsx edi, byte ptr [edx] */ r_edi = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0078d141: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078d144: jl 0x78d34f */ if ((fS!=fO)) goto L_0078d34f;
L_0078d14a:; BB(0x0078d14a);
    /* 0078d14a: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0078d14e: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 0078d152: mov ebx, eax */ r_ebx = r_eax;
    /* 0078d154: lea edi, [edx + 4] */ r_edi = (u32)(r_edx+0x4u);
    /* 0078d157: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 0078d15b: mov esi, edx */ r_esi = r_edx;
L_0078d15d:; BB(0x0078d15d);
    /* 0078d15d: mov ecx, edi */ r_ecx = r_edi;
    /* 0078d15f: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x78d164u); f_0083173c();
    /* 0078d164: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0078d167: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 0078d16a: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0078d16d: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 0078d170: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0078d173: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0078d176: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0078d179: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078d17c: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0078d17f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0078d181: jle 0x78d47c */ if ((fZ||fS!=fO)) goto L_0078d47c;
L_0078d187:; BB(0x0078d187);
    /* 0078d187: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0078d18b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0078d18f: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0078d192: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0078d196: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 0078d19a: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0078d19e: mov ebx, edx */ r_ebx = r_edx;
    /* 0078d1a0: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0078d1a4: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
L_0078d1a8:; BB(0x0078d1a8);
    /* 0078d1a8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078d1aa: mov edx, edi */ r_edx = r_edi;
    /* 0078d1ac: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x78d1b1u); f_0082ebac();
    /* 0078d1b1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078d1b3: mov edx, ebx */ r_edx = r_ebx;
    /* 0078d1b5: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x78d1bau); f_0082f9c4();
    /* 0078d1ba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078d1bc: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x78d1c1u); f_0083173c();
    /* 0078d1c1: fld dword ptr [0x97aa98] */ FPUSH(R_F32((u32)(0x97aa98u)));
    /* 0078d1c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078d1c9: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0078d1cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078d1cd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078d1ce: jne 0x78d1de */ if (!fZ) goto L_0078d1de;
L_0078d1d0:; BB(0x0078d1d0);
    /* 0078d1d0: fld dword ptr [0x97aa94] */ FPUSH(R_F32((u32)(0x97aa94u)));
    /* 0078d1d6: fld dword ptr [0x97aa98] */ FPUSH(R_F32((u32)(0x97aa98u)));
    /* 0078d1dc: jmp 0x78d1f2 */ goto L_0078d1f2;
L_0078d1de:; BB(0x0078d1de);
    /* 0078d1de: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078d1e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078d1e2: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x78d1e7u); f_0082df08();
    /* 0078d1e7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078d1e9: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0078d1ec: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0078d1ef: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
L_0078d1f2:; BB(0x0078d1f2);
    /* 0078d1f2: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0078d1f6: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0078d1f8: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0078d1fa: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0078d1fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078d1fe: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0078d201: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0078d204: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 0078d207: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078d209: mov edx, ebx */ r_edx = r_ebx;
    /* 0078d20b: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x78d210u); f_0082ebac();
    /* 0078d210: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 0078d213: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078d215: je 0x78d309 */ if (fZ) goto L_0078d309;
L_0078d21b:; BB(0x0078d21b);
    /* 0078d21b: fldz  */ FPUSH(0.0);
    /* 0078d21d: fld dword ptr [0x97aa98] */ FPUSH(R_F32((u32)(0x97aa98u)));
    /* 0078d223: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0078d226: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0078d229: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0078d22c: mov ecx, 0x10 */ r_ecx = 0x10u;
    /* 0078d231: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0078d235: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0078d238: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0078d23c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0078d23e:; BB(0x0078d23e);
    /* 0078d23e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078d240: fcom dword ptr [edx] */ fx_compare(ST(0), R_F32((u32)(r_edx))); 
    /* 0078d242: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078d244: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078d245: ja 0x78d473 */ if ((!fC&&!fZ)) goto L_0078d473;
L_0078d24b:; BB(0x0078d24b);
    /* 0078d24b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078d24d: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0078d251: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0078d253: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078d255: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0078d259: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 0078d25d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078d25f: lea edi, [edx + 4] */ r_edi = (u32)(r_edx+0x4u);
    /* 0078d262: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 0078d266: mov esi, edx */ r_esi = r_edx;
L_0078d268:; BB(0x0078d268);
    /* 0078d268: fld dword ptr [0x97aa90] */ FPUSH(R_F32((u32)(0x97aa90u)));
    /* 0078d26e: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 0078d272: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078d274: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0078d278: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0078d27b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078d27c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078d27d: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x78d282u); f_00836208();
    /* 0078d282: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078d285: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 0078d289: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078d28b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078d28c: jae 0x78d2c0 */ if (!fC) goto L_0078d2c0;
L_0078d28e:; BB(0x0078d28e);
    /* 0078d28e: fsubr dword ptr [esp + 0x44] */ ST(0) = R_F32((u32)(r_esp+0x44u)) - ST(0);
    /* 0078d292: fcom dword ptr [esp + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x40u))); 
    /* 0078d296: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078d298: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078d299: jbe 0x78d2c0 */ if ((fC||fZ)) goto L_0078d2c0;
L_0078d29b:; BB(0x0078d29b);
    /* 0078d29b: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0078d29f: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0078d2a2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078d2a4: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 0078d2a8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078d2aa: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0078d2ae: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0078d2b2: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0078d2b5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0078d2b9: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0078d2bc: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_0078d2c0:; BB(0x0078d2c0);
    /* 0078d2c0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078d2c2: fld dword ptr [0x97aa98] */ FPUSH(R_F32((u32)(0x97aa98u)));
    /* 0078d2c8: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078d2cb: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078d2ce: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0078d2d0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0078d2d2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078d2d4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078d2d5: jb 0x78d2db */ if (fC) goto L_0078d2db;
L_0078d2d7:; BB(0x0078d2d7);
    /* 0078d2d7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078d2d9: jmp 0x78d268 */ goto L_0078d268;
L_0078d2db:; BB(0x0078d2db);
    /* 0078d2db: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078d2dd: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 0078d2e1: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0078d2e5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0078d2e7: jg 0x78d357 */ if ((!fZ&&fS==fO)) goto L_0078d357;
L_0078d2e9:; BB(0x0078d2e9);
    /* 0078d2e9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078d2eb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078d2ed: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 0078d2f1: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
L_0078d2f5:; BB(0x0078d2f5);
    /* 0078d2f5: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0078d2f8: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 0078d2fb: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0078d2ff: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 0078d302: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078d306: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_0078d309:; BB(0x0078d309);
    /* 0078d309: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0078d30d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078d310: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0078d314: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078d317: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0078d31a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0078d31c: jg 0x78d1a8 */ if ((!fZ&&fS==fO)) goto L_0078d1a8;
L_0078d322:; BB(0x0078d322);
    /* 0078d322: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0078d326: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0078d32a: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 0078d32e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
L_0078d332:; BB(0x0078d332);
    /* 0078d332: add edi, 0x18 */ {  u32 a = r_edi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078d335: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078d338: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0078d33b: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078d33e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078d341: jge 0x78d15d */ if ((fS==fO)) goto L_0078d15d;
L_0078d347:; BB(0x0078d347);
    /* 0078d347: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0078d34b: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_0078d34f:; BB(0x0078d34f);
    /* 0078d34f: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078d352: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078d353: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078d354: ret 4 */ FN_RET(0x0078d130); r_esp += 8; return;
L_0078d357:; BB(0x0078d357);
    /* 0078d357: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0078d359: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078d35b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078d35d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078d35f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078d361: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 0078d365: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 0078d369: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0078d36d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078d36e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078d370: je 0x78d473 */ if (fZ) goto L_0078d473;
L_0078d376:; BB(0x0078d376);
    /* 0078d376: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078d378: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0078d37c: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 0078d380: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078d382: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0078d385: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0078d389: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x78d38eu); f_0082f9c4();
    /* 0078d38e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0078d391: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x78d396u); f_0083173c();
    /* 0078d396: fld dword ptr [0x97aa98] */ FPUSH(R_F32((u32)(0x97aa98u)));
    /* 0078d39c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078d39e: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0078d3a0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078d3a2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078d3a3: jne 0x78d3b3 */ if (!fZ) goto L_0078d3b3;
L_0078d3a5:; BB(0x0078d3a5);
    /* 0078d3a5: fld dword ptr [0x97aa94] */ FPUSH(R_F32((u32)(0x97aa94u)));
    /* 0078d3ab: fld dword ptr [0x97aa98] */ FPUSH(R_F32((u32)(0x97aa98u)));
    /* 0078d3b1: jmp 0x78d3ca */ goto L_0078d3ca;
L_0078d3b3:; BB(0x0078d3b3);
    /* 0078d3b3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078d3b5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0078d3b8: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x78d3bdu); f_0082df08();
    /* 0078d3bd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078d3bf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0078d3c2: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0078d3c6: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
L_0078d3ca:; BB(0x0078d3ca);
    /* 0078d3ca: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0078d3ce: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0078d3d0: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0078d3d2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0078d3d4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078d3d6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0078d3d9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0078d3dd: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0078d3e1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0078d3e4: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0078d3e8: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x78d3edu); f_0082ebac();
    /* 0078d3ed: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0078d3f0: mov edx, ebx */ r_edx = r_ebx;
    /* 0078d3f2: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x78d3f7u); f_0082f9c4();
    /* 0078d3f7: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0078d3fa: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x78d3ffu); f_0083173c();
    /* 0078d3ff: fld dword ptr [0x97aa98] */ FPUSH(R_F32((u32)(0x97aa98u)));
    /* 0078d405: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078d407: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0078d409: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078d40b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078d40c: jne 0x78d41c */ if (!fZ) goto L_0078d41c;
L_0078d40e:; BB(0x0078d40e);
    /* 0078d40e: fld dword ptr [0x97aa94] */ FPUSH(R_F32((u32)(0x97aa94u)));
    /* 0078d414: fld dword ptr [0x97aa98] */ FPUSH(R_F32((u32)(0x97aa98u)));
    /* 0078d41a: jmp 0x78d433 */ goto L_0078d433;
L_0078d41c:; BB(0x0078d41c);
    /* 0078d41c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078d41e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0078d421: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x78d426u); f_0082df08();
    /* 0078d426: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078d428: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0078d42b: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0078d42f: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
L_0078d433:; BB(0x0078d433);
    /* 0078d433: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0078d437: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0078d439: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0078d43b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0078d43d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078d43f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0078d442: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0078d446: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0078d44a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0078d44d: mov edx, ebx */ r_edx = r_ebx;
    /* 0078d44f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x78d454u); f_0082ebac();
    /* 0078d454: fld dword ptr [0x97aa98] */ FPUSH(R_F32((u32)(0x97aa98u)));
    /* 0078d45a: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 0078d45e: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0078d462: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 0078d465: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0078d468: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078d46a: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 0078d46e: jmp 0x78d23e */ goto L_0078d23e;
L_0078d473:; BB(0x0078d473);
    /* 0078d473: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078d475: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078d477: jmp 0x78d2f5 */ goto L_0078d2f5;
L_0078d47c:; BB(0x0078d47c);
    /* 0078d47c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078d47e: jmp 0x78d332 */ goto L_0078d332;
}

void f_0078d484(void) /* sub_78D484 */
{
    FN_ENTER(0x0078d484);
    /* 0078d484: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078d485: mov ebx, esp */ r_ebx = r_esp;
    /* 0078d487: and esp, 0xffffffc0 */ {  u32 a = r_esp; u32 b = 0xffffffc0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0078d48a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078d48b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078d48c: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078d48f: mov edi, ecx */ r_edi = r_ecx;
    /* 0078d491: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0078d494: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078d496: je 0x78d737 */ if (fZ) goto L_0078d737;
L_0078d49c:; BB(0x0078d49c);
    /* 0078d49c: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 0078d49f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078d4a1: je 0x78d737 */ if (fZ) goto L_0078d737;
L_0078d4a7:; BB(0x0078d4a7);
    /* 0078d4a7: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 0078d4aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078d4ac: je 0x78d737 */ if (fZ) goto L_0078d737;
L_0078d4b2:; BB(0x0078d4b2);
    /* 0078d4b2: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 0078d4b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078d4b7: je 0x78d737 */ if (fZ) goto L_0078d737;
L_0078d4bd:; BB(0x0078d4bd);
    /* 0078d4bd: movsx ebp, byte ptr [ecx] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0078d4c0: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078d4c3: jl 0x78d66f */ if ((fS!=fO)) goto L_0078d66f;
L_0078d4c9:; BB(0x0078d4c9);
    /* 0078d4c9: movsx ebp, byte ptr [ecx] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0078d4cc: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0078d4d0: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 0078d4d4: mov esi, edx */ r_esi = r_edx;
L_0078d4d6:; BB(0x0078d4d6);
    /* 0078d4d6: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0078d4d9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0078d4db: jle 0x78d652 */ if ((fZ||fS!=fO)) goto L_0078d652;
L_0078d4e1:; BB(0x0078d4e1);
    /* 0078d4e1: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0078d4e5: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
L_0078d4e9:; BB(0x0078d4e9);
    /* 0078d4e9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x78d4eeu); f_0082d7b0();
    /* 0078d4ee: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078d4f0: mov edx, esi */ r_edx = r_esi;
    /* 0078d4f2: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x78d4f7u); f_008316b4();
    /* 0078d4f7: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0078d4fb: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0078d4fe: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0078d502: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0078d505: lea edi, [esi + 0xc] */ r_edi = (u32)(r_esi+0xcu);
    /* 0078d508: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0078d50c: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0078d50f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0078d513: mov edx, esi */ r_edx = r_esi;
    /* 0078d515: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x78d51au); f_0082f9c4();
    /* 0078d51a: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0078d51e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x78d523u); f_0083173c();
    /* 0078d523: fld dword ptr [0x97aa8c] */ FPUSH(R_F32((u32)(0x97aa8cu)));
    /* 0078d529: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078d52b: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0078d52d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078d52f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078d530: jne 0x78d548 */ if (!fZ) goto L_0078d548;
L_0078d532:; BB(0x0078d532);
    /* 0078d532: mov dword ptr [esp + 0xc], 0xbf800000 */ W32((u32)(r_esp+0xcu), 0xbf800000u);
    /* 0078d53a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078d53c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078d53e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0078d542: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0078d546: jmp 0x78d559 */ goto L_0078d559;
L_0078d548:; BB(0x0078d548);
    /* 0078d548: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078d54a: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0078d54e: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x78d553u); f_0082df08();
    /* 0078d553: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078d555: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
L_0078d559:; BB(0x0078d559);
    /* 0078d559: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0078d55b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078d55c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0078d55f: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x78d564u); f_0082e900();
    /* 0078d564: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0078d568: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078d56c: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x78d571u); f_0082e900();
    /* 0078d571: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0078d575: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078d577: fcomp dword ptr [0x97aa8c] */ fx_compare(ST(0), R_F32((u32)(0x97aa8cu))); FPOP();
    /* 0078d57d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078d57f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078d580: je 0x78d5cb */ if (fZ) goto L_0078d5cb;
L_0078d582:; BB(0x0078d582);
    /* 0078d582: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0078d586: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0078d58a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078d58c: fchs  */ ST(0) = -ST(0);
    /* 0078d58e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078d590: fchs  */ ST(0) = -ST(0);
    /* 0078d592: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0078d594: fmul qword ptr [0x97aa60] */ ST(0) = ST(0) * R_F64((u32)(0x97aa60u));
    /* 0078d59a: fdiv qword ptr [0x97aa58] */ ST(0) = ST(0) / R_F64((u32)(0x97aa58u));
    /* 0078d5a0: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0078d5a4: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0078d5a9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078d5ae: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0078d5b2: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0078d5b6: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0078d5ba: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0078d5be: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078d5c0: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0078d5c4: mov edx, esi */ r_edx = r_esi;
    /* 0078d5c6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x78d5cbu); f_0082d8bc();
L_0078d5cb:; BB(0x0078d5cb);
    /* 0078d5cb: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0078d5cf: fchs  */ ST(0) = -ST(0);
    /* 0078d5d1: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0078d5d4: call 0x84d15c */ r_esp -= 4; W32(r_esp, 0x78d5d9u); f_0084d15c();
    /* 0078d5d9: fmul qword ptr [0x97aa60] */ ST(0) = ST(0) * R_F64((u32)(0x97aa60u));
    /* 0078d5df: fdiv qword ptr [0x97aa58] */ ST(0) = ST(0) / R_F64((u32)(0x97aa58u));
    /* 0078d5e5: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0078d5e9: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0078d5ee: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078d5f3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0078d5f7: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0078d5fb: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0078d5ff: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0078d603: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078d605: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0078d609: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x78d60eu); f_0082e9e4();
    /* 0078d60e: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0078d612: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078d614: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0078d616: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078d618: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x78d61du); f_0082d8bc();
    /* 0078d61d: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078d620: je 0x78d740 */ if (fZ) goto L_0078d740;
L_0078d626:; BB(0x0078d626);
    /* 0078d626: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0078d62a: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0078d62d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078d62f: je 0x78d638 */ if (fZ) goto L_0078d638;
L_0078d631:; BB(0x0078d631);
    /* 0078d631: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078d632: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x78d637u); f_0082e1e8();
    /* 0078d637: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0078d638:; BB(0x0078d638);
    /* 0078d638: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x78d63du); f_0082da80();
    /* 0078d63d: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0078d640: mov esi, edi */ r_esi = r_edi;
    /* 0078d642: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0078d644: jg 0x78d4e9 */ if ((!fZ&&fS==fO)) goto L_0078d4e9;
L_0078d64a:; BB(0x0078d64a);
    /* 0078d64a: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0078d64e: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
L_0078d652:; BB(0x0078d652);
    /* 0078d652: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078d655: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078d658: movsx ebp, byte ptr [ecx] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0078d65b: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078d65e: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078d661: jge 0x78d4d6 */ if ((fS==fO)) goto L_0078d4d6;
L_0078d667:; BB(0x0078d667);
    /* 0078d667: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0078d66b: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
L_0078d66f:; BB(0x0078d66f);
    /* 0078d66f: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 0078d672: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078d674: je 0x78d737 */ if (fZ) goto L_0078d737;
L_0078d67a:; BB(0x0078d67a);
    /* 0078d67a: mov ebp, dword ptr [0xaf034c] */ r_ebp = R32((u32)(0xaf034cu));
    /* 0078d680: mov eax, dword ptr [0xaf0360] */ r_eax = R32((u32)(0xaf0360u));
    /* 0078d685: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 0078d68b: mov dword ptr [0xaab518], ebp */ W32((u32)(0xaab518u), r_ebp);
    /* 0078d691: or ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0078d694: mov dword ptr [0xaab504], eax */ W32((u32)(0xaab504u), r_eax);
    /* 0078d699: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 0078d69f: mov dword ptr [0xaf034c], ebp */ W32((u32)(0xaf034cu), r_ebp);
    /* 0078d6a5: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0078d6aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078d6ac: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x78d6b1u); f_0082d6fc();
    /* 0078d6b1: push 0x9fe430 */ { u32 v = 0x9fe430u; r_esp -= 4; W32(r_esp, v); }
    /* 0078d6b6: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x78d6bbu); f_0082d710();
    /* 0078d6bb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078d6be: mov edi, dword ptr [edi + 0x28] */ r_edi = R32((u32)(r_edi+0x28u));
    /* 0078d6c1: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0078d6c3: fcomp dword ptr [0x97aa8c] */ fx_compare(ST(0), R_F32((u32)(0x97aa8cu))); FPOP();
    /* 0078d6c9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078d6cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078d6cc: jb 0x78d715 */ if (fC) goto L_0078d715;
L_0078d6ce:; BB(0x0078d6ce);
    /* 0078d6ce: lea ebp, [edi + 4] */ r_ebp = (u32)(r_edi+0x4u);
L_0078d6d1:; BB(0x0078d6d1);
    /* 0078d6d1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x78d6d6u); f_0082d7b0();
    /* 0078d6d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078d6d8: mov edx, ebp */ r_edx = r_ebp;
    /* 0078d6da: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x78d6dfu); f_008316b4();
    /* 0078d6df: fld dword ptr [0x97aa84] */ FPUSH(R_F32((u32)(0x97aa84u)));
    /* 0078d6e5: fmul dword ptr [edi] */ ST(0) = ST(0) * R_F32((u32)(r_edi));
    /* 0078d6e7: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078d6ea: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0078d6ed: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0078d6f1: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0078d6f5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078d6f7: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x78d6fcu); f_0082fa0c();
    /* 0078d6fc: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x78d701u); f_0082da80();
    /* 0078d701: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 0078d704: fcomp dword ptr [0x97aa8c] */ fx_compare(ST(0), R_F32((u32)(0x97aa8cu))); FPOP();
    /* 0078d70a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078d70c: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0078d70f: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078d712: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078d713: jae 0x78d6d1 */ if (!fC) goto L_0078d6d1;
L_0078d715:; BB(0x0078d715);
    /* 0078d715: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 0078d71a: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 0078d720: mov ecx, dword ptr [0xaab518] */ r_ecx = R32((u32)(0xaab518u));
    /* 0078d726: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 0078d72b: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 0078d731: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
L_0078d737:; BB(0x0078d737);
    /* 0078d737: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078d73a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078d73b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078d73c: mov esp, ebx */ r_esp = r_ebx;
    /* 0078d73e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078d73f: ret  */ FN_RET(0x0078d484); r_esp += 4; return;
L_0078d740:; BB(0x0078d740);
    /* 0078d740: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0078d744: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 0078d747: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078d749: je 0x78d638 */ if (fZ) goto L_0078d638;
L_0078d74f:; BB(0x0078d74f);
    /* 0078d74f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078d750: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x78d755u); f_0082e1e8();
    /* 0078d755: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078d756: jmp 0x78d638 */ goto L_0078d638;
}

void f_0078d75c(void) /* sub_78D75C */
{
    FN_ENTER(0x0078d75c);
    /* 0078d75c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078d75d: mov ebp, esp */ r_ebp = r_esp;
    /* 0078d75f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078d761: push 0x8f4e44 */ { u32 v = 0x8f4e44u; r_esp -= 4; W32(r_esp, v); }
    /* 0078d766: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078d76c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078d76d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078d774: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078d777: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078d77a: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0078d77d: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0078d780: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0078d783: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0078d786: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0078d789: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0078d790: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0078d793: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0078d796: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0078d798: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x78d79du); f_005caba4();
    /* 0078d79d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0078d7a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078d7a3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0078d7a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078d7a8: je 0x78d9a8 */ if (fZ) goto L_0078d9a8;
L_0078d7ae:; BB(0x0078d7ae);
    /* 0078d7ae: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0078d7b5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078d7bc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0078d7bf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078d7c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078d7c3: call 0x78cfb0 */ r_esp -= 4; W32(r_esp, 0x78d7c8u); f_0078cfb0();
    /* 0078d7c8: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078d7cb: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0078d7ce: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078d7d1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0078d7d4: mov dword ptr [edx + 0x30], esi */ W32((u32)(r_edx+0x30u), r_esi);
    /* 0078d7d7: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0078d7da: mov dword ptr [edx], 0xb45408 */ W32((u32)(r_edx), 0xb45408u);
    /* 0078d7e0: mov ebx, dword ptr [0x9fe42c] */ r_ebx = R32((u32)(0x9fe42cu));
    /* 0078d7e6: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 0078d7e9: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0078d7ec: movsx edi, byte ptr [ecx] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0078d7ef: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0078d7f1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0078d7f3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078d7f5: jl 0x78d80a */ if ((fS!=fO)) goto L_0078d80a;
L_0078d7f7:; BB(0x0078d7f7);
    /* 0078d7f7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078d7fa: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078d7fd: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0078d800: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0078d803: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078d806: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078d808: jge 0x78d7f7 */ if ((fS==fO)) goto L_0078d7f7;
L_0078d80a:; BB(0x0078d80a);
    /* 0078d80a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0078d80d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078d80f: je 0x78d82b */ if (fZ) goto L_0078d82b;
L_0078d811:; BB(0x0078d811);
    /* 0078d811: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0078d814: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078d816: jl 0x78d82b */ if ((fS!=fO)) goto L_0078d82b;
L_0078d818:; BB(0x0078d818);
    /* 0078d818: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0078d81b: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078d81e: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0078d821: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0078d824: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078d827: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078d829: jge 0x78d818 */ if ((fS==fO)) goto L_0078d818;
L_0078d82b:; BB(0x0078d82b);
    /* 0078d82b: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0078d82e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078d830: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0078d832: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078d834: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078d836: lea edx, [eax + eax + 0x18] */ r_edx = (u32)(r_eax+r_eax+0x18u);
    /* 0078d83a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078d83b: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x78d840u); f_0082e940();
    /* 0078d840: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078d843: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0078d846: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078d848: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078d84a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078d84c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078d84e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078d84f: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x78d854u); f_0082e940();
    /* 0078d854: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078d857: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078d85a: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0078d85d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078d85f: jne 0x78d86a */ if (!fZ) goto L_0078d86a;
L_0078d861:; BB(0x0078d861);
    /* 0078d861: mov dword ptr [edx + 0x44], 0 */ W32((u32)(r_edx+0x44u), 0x0u);
    /* 0078d868: jmp 0x78d884 */ goto L_0078d884;
L_0078d86a:; BB(0x0078d86a);
    /* 0078d86a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078d86c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078d86e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078d870: lea eax, [esi + esi + 0x10] */ r_eax = (u32)(r_esi+r_esi+0x10u);
    /* 0078d874: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078d875: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x78d87au); f_0082e940();
    /* 0078d87a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078d87b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078d87e: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0078d881: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
L_0078d884:; BB(0x0078d884);
    /* 0078d884: mov ebx, edx */ r_ebx = r_edx;
    /* 0078d886: mov esi, dword ptr [ebx + 0x34] */ r_esi = R32((u32)(r_ebx+0x34u));
    /* 0078d889: mov ebx, dword ptr [ebx + 0x3c] */ r_ebx = R32((u32)(r_ebx+0x3cu));
    /* 0078d88c: movsx edx, byte ptr [esi] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0078d88f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078d891: jl 0x78d8fd */ if ((fS!=fO)) goto L_0078d8fd;
L_0078d893:; BB(0x0078d893);
    /* 0078d893: mov edx, dword ptr [0xa9c9ec] */ r_edx = R32((u32)(0xa9c9ecu));
    /* 0078d899: mov ecx, dword ptr [0xa9c9f0] */ r_ecx = R32((u32)(0xa9c9f0u));
    /* 0078d89f: mov edi, dword ptr [0xa9c9f4] */ r_edi = R32((u32)(0xa9c9f4u));
    /* 0078d8a5: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0078d8a8: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0078d8ab: mov ecx, dword ptr [0xa9c9f8] */ r_ecx = R32((u32)(0xa9c9f8u));
    /* 0078d8b1: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
L_0078d8b4:; BB(0x0078d8b4);
    /* 0078d8b4: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 0078d8b7: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0078d8b9: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 0078d8bb: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 0078d8be: mov dword ptr [ebx + 4], edi */ W32((u32)(r_ebx+0x4u), r_edi);
    /* 0078d8c1: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0078d8c4: mov dword ptr [ebx + 8], edi */ W32((u32)(r_ebx+0x8u), r_edi);
    /* 0078d8c7: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 0078d8ca: mov dword ptr [ebx + 0xc], edi */ W32((u32)(r_ebx+0xcu), r_edi);
    /* 0078d8cd: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
    /* 0078d8d0: mov dword ptr [ebx + 0x10], edi */ W32((u32)(r_ebx+0x10u), r_edi);
    /* 0078d8d3: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 0078d8d6: mov dword ptr [ebx + 0x14], edx */ W32((u32)(r_ebx+0x14u), r_edx);
    /* 0078d8d9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078d8dc: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0078d8de: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078d8e1: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0078d8e4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078d8e7: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0078d8ea: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0078d8ed: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078d8f0: movsx edx, byte ptr [esi] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0078d8f3: add ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078d8f6: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078d8f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078d8fb: jge 0x78d8b4 */ if ((fS==fO)) goto L_0078d8b4;
L_0078d8fd:; BB(0x0078d8fd);
    /* 0078d8fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078d900: mov byte ptr [ebx], 0xff */ W8((u32)(r_ebx), 0xffu);
    /* 0078d903: mov esi, dword ptr [eax + 0x44] */ r_esi = R32((u32)(r_eax+0x44u));
    /* 0078d906: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078d908: je 0x78d95e */ if (fZ) goto L_0078d95e;
L_0078d90a:; BB(0x0078d90a);
    /* 0078d90a: mov ebx, eax */ r_ebx = r_eax;
    /* 0078d90c: mov ebx, dword ptr [ebx + 0x38] */ r_ebx = R32((u32)(r_ebx+0x38u));
    /* 0078d90f: movsx eax, byte ptr [ebx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx));
    /* 0078d912: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078d914: jl 0x78d98d */ if ((fS!=fO)) goto L_0078d98d;
L_0078d916:; BB(0x0078d916);
    /* 0078d916: mov edx, dword ptr [0xa9c9fc] */ r_edx = R32((u32)(0xa9c9fcu));
    /* 0078d91c: mov ecx, dword ptr [0xa9ca00] */ r_ecx = R32((u32)(0xa9ca00u));
    /* 0078d922: mov eax, dword ptr [0xa9ca04] */ r_eax = R32((u32)(0xa9ca04u));
    /* 0078d927: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0078d92a: mov eax, dword ptr [0xa9ca08] */ r_eax = R32((u32)(0xa9ca08u));
L_0078d92f:; BB(0x0078d92f);
    /* 0078d92f: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0078d932: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 0078d934: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 0078d937: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 0078d93a: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0078d93d: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078d940: movsx edi, byte ptr [ebx] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ebx));
    /* 0078d943: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078d946: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078d948: jge 0x78d92f */ if ((fS==fO)) goto L_0078d92f;
L_0078d94a:; BB(0x0078d94a);
    /* 0078d94a: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 0078d94c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078d94f: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 0078d952: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 0078d955: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0078d958: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078d95b: mov esi, dword ptr [eax + 0x44] */ r_esi = R32((u32)(r_eax+0x44u));
L_0078d95e:; BB(0x0078d95e);
    /* 0078d95e: mov ecx, eax */ r_ecx = r_eax;
    /* 0078d960: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078d961: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078d964: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0078d967: call 0x78d9d0 */ r_esp -= 4; W32(r_esp, 0x78d96cu); f_0078d9d0();
    /* 0078d96c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0078d973:; BB(0x0078d973);
    /* 0078d973: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078d976: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0078d979: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0078d97c: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0078d97f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078d982: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078d989: mov esp, ebp */ r_esp = r_ebp;
    /* 0078d98b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078d98c: ret  */ FN_RET(0x0078d75c); r_esp += 4; return;
L_0078d98d:; BB(0x0078d98d);
    /* 0078d98d: mov edx, dword ptr [0xa9c9fc] */ r_edx = R32((u32)(0xa9c9fcu));
    /* 0078d993: mov ecx, dword ptr [0xa9ca00] */ r_ecx = R32((u32)(0xa9ca00u));
    /* 0078d999: mov eax, dword ptr [0xa9ca04] */ r_eax = R32((u32)(0xa9ca04u));
    /* 0078d99e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0078d9a1: mov eax, dword ptr [0xa9ca08] */ r_eax = R32((u32)(0xa9ca08u));
    /* 0078d9a6: jmp 0x78d94a */ goto L_0078d94a;
L_0078d9a8:; BB(0x0078d9a8);
    /* 0078d9a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078d9aa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0078d9ad: jmp 0x78d973 */ goto L_0078d973;
}

void f_0078d9b0(void) /* sub_78D9B0 */
{
    FN_ENTER(0x0078d9b0);
    /* 0078d9b0: mov dword ptr [0xa9ca18], 0x3f800000 */ W32((u32)(0xa9ca18u), 0x3f800000u);
    /* 0078d9ba: mov dword ptr [0xa9ca1c], 0x41000000 */ W32((u32)(0xa9ca1cu), 0x41000000u);
    /* 0078d9c4: mov dword ptr [0xa9ca20], 0x3fc00000 */ W32((u32)(0xa9ca20u), 0x3fc00000u);
    /* 0078d9ce: ret  */ FN_RET(0x0078d9b0); r_esp += 4; return;
}

void f_0078d9d0(void) /* sub_78D9D0 */
{
    FN_ENTER(0x0078d9d0);
    /* 0078d9d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078d9d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078d9d2: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078d9d5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078d9d7: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0078d9db: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0078d9df: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0078d9e3: mov dword ptr [ebp + 0x20], ecx */ W32((u32)(r_ebp+0x20u), r_ecx);
    /* 0078d9e6: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 0078d9e9: mov dword ptr [ebp + 0x28], edx */ W32((u32)(r_ebp+0x28u), r_edx);
    /* 0078d9ec: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 0078d9f3: movsx edi, byte ptr [ecx] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0078d9f6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078d9f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078d9fa: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078d9fd: jl 0x78da15 */ if ((fS!=fO)) goto L_0078da15;
L_0078d9ff:; BB(0x0078d9ff);
    /* 0078d9ff: movsx edi, byte ptr [ecx] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ecx));
L_0078da02:; BB(0x0078da02);
    /* 0078da02: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078da04: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078da07: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078da0a: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 0078da0d: movsx edi, byte ptr [ecx] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0078da10: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078da13: jge 0x78da02 */ if ((fS==fO)) goto L_0078da02;
L_0078da15:; BB(0x0078da15);
    /* 0078da15: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078da17: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078da19: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0078da1c: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078da1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078da1f: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x78da24u); f_0082e940();
    /* 0078da24: mov edi, eax */ r_edi = r_eax;
    /* 0078da26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078da29: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0078da2c: mov dword ptr [ebp + 0x2c], edi */ W32((u32)(r_ebp+0x2cu), r_edi);
    /* 0078da2f: mov ebp, dword ptr [ebp + 0x24] */ r_ebp = R32((u32)(r_ebp+0x24u));
    /* 0078da32: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0078da35: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078da38: jl 0x78daa7 */ if ((fS!=fO)) goto L_0078daa7;
L_0078da3a:; BB(0x0078da3a);
    /* 0078da3a: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0078da3e: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
L_0078da42:; BB(0x0078da42);
    /* 0078da42: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0078da45: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0078da48: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0078da4b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0078da4e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0078da52: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0078da56: movsx esi, byte ptr [ecx] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0078da59: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0078da5b: jle 0x78da91 */ if ((fZ||fS!=fO)) goto L_0078da91;
L_0078da5d:; BB(0x0078da5d);
    /* 0078da5d: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0078da61: lea ebx, [ecx + 4] */ r_ebx = (u32)(r_ecx+0x4u);
    /* 0078da64: jmp 0x78da69 */ goto L_0078da69;
L_0078da66:; BB(0x0078da66);
    /* 0078da66: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_0078da69:; BB(0x0078da69);
    /* 0078da69: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0078da6b: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0078da6f: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 0078da72: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0078da76: mov dword ptr [edi + 8], ecx */ W32((u32)(r_edi+0x8u), r_ecx);
    /* 0078da79: mov edx, ebx */ r_edx = r_ebx;
    /* 0078da7b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0078da7e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x78da83u); f_0082ebac();
    /* 0078da83: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078da86: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078da89: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0078da8b: jg 0x78da66 */ if ((!fZ&&fS==fO)) goto L_0078da66;
L_0078da8d:; BB(0x0078da8d);
    /* 0078da8d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
L_0078da91:; BB(0x0078da91);
    /* 0078da91: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078da94: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0078da97: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0078da9a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078da9d: jge 0x78da42 */ if ((fS==fO)) goto L_0078da42;
L_0078da9f:; BB(0x0078da9f);
    /* 0078da9f: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0078daa3: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_0078daa7:; BB(0x0078daa7);
    /* 0078daa7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078daaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078daab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078daac: ret 0xc */ FN_RET(0x0078d9d0); r_esp += 16; return;
}

void f_0078dab0(void) /* sub_78DAB0 */
{
    FN_ENTER(0x0078dab0);
    /* 0078dab0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078dab1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078dab3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078dab5: call 0x78dad4 */ r_esp -= 4; W32(r_esp, 0x78dabau); f_0078dad4();
    /* 0078daba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078dabe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078dac0: jne 0x78dac6 */ if (!fZ) goto L_0078dac6;
L_0078dac2:; BB(0x0078dac2);
    /* 0078dac2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078dac3: ret 4 */ FN_RET(0x0078dab0); r_esp += 8; return;
L_0078dac6:; BB(0x0078dac6);
    /* 0078dac6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078dac7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x78daccu); f_005c2f74();
    /* 0078dacc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078dacd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078dace: ret 4 */ FN_RET(0x0078dab0); r_esp += 8; return;
}

void f_0078dad4(void) /* sub_78DAD4 */
{
    FN_ENTER(0x0078dad4);
    /* 0078dad4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078dad5: mov ebp, esp */ r_ebp = r_esp;
    /* 0078dad7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078dad9: push 0x8f4e60 */ { u32 v = 0x8f4e60u; r_esp -= 4; W32(r_esp, v); }
    /* 0078dade: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078dae4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078dae5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078daec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078daef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078daf2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0078daf5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0078daf8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078dafb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0078dafe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078db01: mov dword ptr [ecx], 0xb45468 */ W32((u32)(r_ecx), 0xb45468u);
    /* 0078db07: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078db0e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78db13u); f_008171e8();
    /* 0078db13: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078db16: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078db1d: mov esp, ebp */ r_esp = r_ebp;
    /* 0078db1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078db20: ret  */ FN_RET(0x0078dad4); r_esp += 4; return;
}

void f_0078db24(void) /* sub_78DB24 */
{
    FN_ENTER(0x0078db24);
    /* 0078db24: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0078db27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078db29: jne 0x78db31 */ if (!fZ) goto L_0078db31;
L_0078db2b:; BB(0x0078db2b);
    /* 0078db2b: call 0x78dca0 */ r_esp -= 4; W32(r_esp, 0x78db30u); f_0078dca0();
    /* 0078db30: ret  */ FN_RET(0x0078db24); r_esp += 4; return;
L_0078db31:; BB(0x0078db31);
    /* 0078db31: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078db34: jne 0x78db3b */ if (!fZ) goto L_0078db3b;
L_0078db36:; BB(0x0078db36);
    /* 0078db36: call 0x78db3c */ r_esp -= 4; W32(r_esp, 0x78db3bu); f_0078db3c();
L_0078db3b:; BB(0x0078db3b);
    /* 0078db3b: ret  */ FN_RET(0x0078db24); r_esp += 4; return;
}

void f_0078db3c(void) /* sub_78DB3C */
{
    FN_ENTER(0x0078db3c);
    /* 0078db3c: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078db3f: mov eax, ecx */ r_eax = r_ecx;
    /* 0078db41: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0078db44: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0078db48: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 0078db4c: mov ebx, eax */ r_ebx = r_eax;
    /* 0078db4e: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0078db52: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 0078db56: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078db58: mov ebp, edx */ r_ebp = r_edx;
L_0078db5a:; BB(0x0078db5a);
    /* 0078db5a: movzx esi, byte ptr [ebp] */ r_esi = (u32)R8((u32)(r_ebp));
    /* 0078db5e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078db61: cmp esi, 0x29 */ {  u32 a = r_esi; u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078db64: jne 0x78db6d */ if (!fZ) goto L_0078db6d;
L_0078db66:; BB(0x0078db66);
    /* 0078db66: mov esi, 3 */ r_esi = 0x3u;
    /* 0078db6b: jmp 0x78db7b */ goto L_0078db7b;
L_0078db6d:; BB(0x0078db6d);
    /* 0078db6d: cmp esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078db70: jne 0x78dc7d */ if (!fZ) goto L_0078dc7d;
L_0078db76:; BB(0x0078db76);
    /* 0078db76: mov esi, 4 */ r_esi = 0x4u;
L_0078db7b:; BB(0x0078db7b);
    /* 0078db7b: movzx edi, word ptr [ebp + 6] */ r_edi = (u32)R16((u32)(r_ebp+0x6u));
    /* 0078db7f: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0078db82: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0078db84: jle 0x78dc71 */ if ((fZ||fS!=fO)) goto L_0078dc71;
L_0078db8a:; BB(0x0078db8a);
    /* 0078db8a: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0078db8e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078db90: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0078db92:; BB(0x0078db92);
    /* 0078db92: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0078db95: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x78db9au); f_007a908c();
    /* 0078db9a: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0078db9e: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078dba1: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x78dba6u); f_007a908c();
    /* 0078dba6: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0078dbaa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078dbad: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x78dbb2u); f_007a908c();
    /* 0078dbb2: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0078dbb6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078dbb9: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0078dbbd: fcomp dword ptr [0x97aac0] */ fx_compare(ST(0), R_F32((u32)(0x97aac0u))); FPOP();
    /* 0078dbc3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078dbc5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078dbc6: jb 0x78dc5e */ if (fC) goto L_0078dc5e;
L_0078dbcc:; BB(0x0078dbcc);
    /* 0078dbcc: fld dword ptr [0x97aabc] */ FPUSH(R_F32((u32)(0x97aabcu)));
    /* 0078dbd2: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0078dbd6: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0078dbd8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078dbda: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078dbdb: jbe 0x78dbe1 */ if ((fC||fZ)) goto L_0078dbe1;
L_0078dbdd:; BB(0x0078dbdd);
    /* 0078dbdd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078dbdf: jmp 0x78dc5e */ goto L_0078dc5e;
L_0078dbe1:; BB(0x0078dbe1);
    /* 0078dbe1: fsubr dword ptr [esp + 0x3c] */ ST(0) = R_F32((u32)(r_esp+0x3cu)) - ST(0);
    /* 0078dbe5: fdiv dword ptr [0x97aafc] */ ST(0) = ST(0) / R_F32((u32)(0x97aafcu));
    /* 0078dbeb: fld dword ptr [0x97aaf8] */ FPUSH(R_F32((u32)(0x97aaf8u)));
    /* 0078dbf1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0078dbf3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078dbf5: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0078dbf9: fnstcw word ptr [esp + 4] */ W16((u32)(r_esp+0x4u), fcw);
    /* 0078dbfd: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 0078dc02: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078dc07: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0078dc0b: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0078dc0f: fistp dword ptr [esp + 0x14] */ W32((u32)(r_esp+0x14u), (u32)fx_int32(ST(0))); FPOP();
    /* 0078dc13: fldcw word ptr [esp + 4] */ fcw = R16((u32)(r_esp+0x4u));
    /* 0078dc17: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0078dc1b: add ecx, dword ptr [ebx + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x28u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078dc1e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x78dc23u); f_0082dcbc();
    /* 0078dc23: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0078dc27: fmul dword ptr [0x97aab8] */ ST(0) = ST(0) * R_F32((u32)(0x97aab8u));
    /* 0078dc2d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0078dc2f: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0078dc33: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078dc35: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0078dc38: call 0x7a909c */ r_esp -= 4; W32(r_esp, 0x78dc3du); f_007a909c();
    /* 0078dc3d: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0078dc41: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0078dc44: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 0078dc47: call 0x7a909c */ r_esp -= 4; W32(r_esp, 0x78dc4cu); f_007a909c();
    /* 0078dc4c: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0078dc50: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0078dc53: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 0078dc56: call 0x7a909c */ r_esp -= 4; W32(r_esp, 0x78dc5bu); f_007a909c();
    /* 0078dc5b: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_0078dc5e:; BB(0x0078dc5e);
    /* 0078dc5e: lea ebp, [ebp + esi + 0xc] */ r_ebp = (u32)(r_ebp+r_esi+0xcu);
    /* 0078dc62: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078dc65: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0078dc67: jg 0x78db92 */ if ((!fZ&&fS==fO)) goto L_0078db92;
L_0078dc6d:; BB(0x0078dc6d);
    /* 0078dc6d: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
L_0078dc71:; BB(0x0078dc71);
    /* 0078dc71: cmp ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078dc77: jl 0x78db5a */ if ((fS!=fO)) goto L_0078db5a;
L_0078dc7d:; BB(0x0078dc7d);
    /* 0078dc7d: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0078dc81: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0078dc85: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 0078dc89: mov eax, ebx */ r_eax = r_ebx;
    /* 0078dc8b: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0078dc8f: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0078dc92: add edx, 0x444 */ {  u32 a = r_edx; u32 b = 0x444u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078dc98: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 0078dc9b: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078dc9e: ret  */ FN_RET(0x0078db3c); r_esp += 4; return;
}

void f_0078dca0(void) /* sub_78DCA0 */
{
    FN_ENTER(0x0078dca0);
    /* 0078dca0: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0078dca3: mov eax, dword ptr [edx + 0xdf0] */ r_eax = R32((u32)(r_edx+0xdf0u));
    /* 0078dca9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078dcab: jne 0x78dcda */ if (!fZ) goto L_0078dcda;
L_0078dcad:; BB(0x0078dcad);
    /* 0078dcad: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0078dcb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078dcb2: je 0x78dcda */ if (fZ) goto L_0078dcda;
L_0078dcb4:; BB(0x0078dcb4);
    /* 0078dcb4: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0078dcb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078dcb9: je 0x78dcda */ if (fZ) goto L_0078dcda;
L_0078dcbb:; BB(0x0078dcbb);
    /* 0078dcbb: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0078dcbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078dcc0: je 0x78dcda */ if (fZ) goto L_0078dcda;
L_0078dcc2:; BB(0x0078dcc2);
    /* 0078dcc2: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0078dcc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078dcc7: je 0x78dcda */ if (fZ) goto L_0078dcda;
L_0078dcc9:; BB(0x0078dcc9);
    /* 0078dcc9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0078dccb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078dccd: je 0x78dcda */ if (fZ) goto L_0078dcda;
L_0078dccf:; BB(0x0078dccf);
    /* 0078dccf: mov dword ptr [ecx + 0x24], 1 */ W32((u32)(r_ecx+0x24u), 0x1u);
    /* 0078dcd6: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0078dcd9: ret  */ FN_RET(0x0078dca0); r_esp += 4; return;
L_0078dcda:; BB(0x0078dcda);
    /* 0078dcda: ret  */ FN_RET(0x0078dca0); r_esp += 4; return;
}

void f_0078dcdc(void) /* sub_78DCDC */
{
    FN_ENTER(0x0078dcdc);
    /* 0078dcdc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078dcdd: mov ebp, esp */ r_ebp = r_esp;
    /* 0078dcdf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078dce1: push 0x8f4e88 */ { u32 v = 0x8f4e88u; r_esp -= 4; W32(r_esp, v); }
    /* 0078dce6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078dcec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078dced: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078dcf4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078dcf7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078dcfa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0078dcfd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0078dd00: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078dd03: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0078dd05: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0078dd0c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x78dd11u); f_005caba4();
    /* 0078dd11: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078dd12: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0078dd15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078dd17: je 0x78dd4a */ if (fZ) goto L_0078dd4a;
L_0078dd19:; BB(0x0078dd19);
    /* 0078dd19: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0078dd20: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078dd27: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078dd2a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078dd2d: call 0x78dd50 */ r_esp -= 4; W32(r_esp, 0x78dd32u); f_0078dd50();
    /* 0078dd32: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078dd35: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0078dd3c:; BB(0x0078dd3c);
    /* 0078dd3c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078dd3f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078dd46: mov esp, ebp */ r_esp = r_ebp;
    /* 0078dd48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078dd49: ret  */ FN_RET(0x0078dcdc); r_esp += 4; return;
L_0078dd4a:; BB(0x0078dd4a);
    /* 0078dd4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078dd4c: jmp 0x78dd3c */ goto L_0078dd3c;
}

void f_0078dd50(void) /* sub_78DD50 */
{
    FN_ENTER(0x0078dd50);
    /* 0078dd50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078dd51: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078dd52: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078dd54: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0078dd58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078dd59: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078dd5b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x78dd60u); f_008193cc();
    /* 0078dd60: mov dword ptr [ebp], 0xb45468 */ W32((u32)(r_ebp), 0xb45468u);
    /* 0078dd67: mov edx, dword ptr [0x9fe440] */ r_edx = R32((u32)(0x9fe440u));
    /* 0078dd6d: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 0078dd70: mov dword ptr [ebp + 0x1c], ebx */ W32((u32)(r_ebp+0x1cu), r_ebx);
    /* 0078dd73: mov dword ptr [ebp + 0x24], 0 */ W32((u32)(r_ebp+0x24u), 0x0u);
    /* 0078dd7a: mov eax, ebp */ r_eax = r_ebp;
    /* 0078dd7c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078dd7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078dd7e: ret 4 */ FN_RET(0x0078dd50); r_esp += 8; return;
}

void f_0078dd84(void) /* sub_78DD84 */
{
    FN_ENTER(0x0078dd84);
    /* 0078dd84: mov dword ptr [0xa9ca2c], 0x3f800000 */ W32((u32)(0xa9ca2cu), 0x3f800000u);
    /* 0078dd8e: mov dword ptr [0xa9ca30], 0x41000000 */ W32((u32)(0xa9ca30u), 0x41000000u);
    /* 0078dd98: mov dword ptr [0xa9ca34], 0x3fc00000 */ W32((u32)(0xa9ca34u), 0x3fc00000u);
    /* 0078dda2: ret  */ FN_RET(0x0078dd84); r_esp += 4; return;
}

void f_0078dda4(void) /* sub_78DDA4 */
{
    FN_ENTER(0x0078dda4);
    /* 0078dda4: mov eax, dword ptr [0xa9ca40] */ r_eax = R32((u32)(0xa9ca40u));
    /* 0078dda9: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ddab: je 0x78ddb5 */ if (fZ) goto L_0078ddb5;
L_0078ddad:; BB(0x0078ddad);
    /* 0078ddad: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ddb0: mov dword ptr [0xa9ca40], eax */ W32((u32)(0xa9ca40u), r_eax);
L_0078ddb5:; BB(0x0078ddb5);
    /* 0078ddb5: ret  */ FN_RET(0x0078dda4); r_esp += 4; return;
}

void f_0078ddb8(void) /* sub_78DDB8 */
{
    FN_ENTER(0x0078ddb8);
    /* 0078ddb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078ddb9: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078ddbc: mov eax, dword ptr [0xa9ca40] */ r_eax = R32((u32)(0xa9ca40u));
    /* 0078ddc1: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0078ddc3: je 0x78ded0 */ if (fZ) goto L_0078ded0;
L_0078ddc9:; BB(0x0078ddc9);
    /* 0078ddc9: mov ecx, dword ptr [0x9ff1bc] */ r_ecx = R32((u32)(0x9ff1bcu));
    /* 0078ddcf: add ecx, 0x16c */ {  u32 a = r_ecx; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078ddd5: mov dword ptr [0x9ff1bc], ecx */ W32((u32)(0x9ff1bcu), r_ecx);
    /* 0078dddb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x78dde0u); f_0082ddd8();
    /* 0078dde0: fld dword ptr [0x97ab18] */ FPUSH(R_F32((u32)(0x97ab18u)));
    /* 0078dde6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078dde8: fdiv dword ptr [0x97ab14] */ ST(0) = ST(0) / R_F32((u32)(0x97ab14u));
    /* 0078ddee: fadd dword ptr [0x97ab1c] */ ST(0) = ST(0) + R_F32((u32)(0x97ab1cu));
    /* 0078ddf4: mov ecx, 0x3555 */ r_ecx = 0x3555u;
    /* 0078ddf9: fmul dword ptr [0x97ab08] */ ST(0) = ST(0) * R_F32((u32)(0x97ab08u));
    /* 0078ddff: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0078de02: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0078de06: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078de0b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0078de0f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0078de13: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0078de17: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0078de1a: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0078de1e: push 0x46a41000 */ { u32 v = 0x46a41000u; r_esp -= 4; W32(r_esp, v); }
    /* 0078de23: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0078de26: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0078de2c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0078de31: push 0x3f911112 */ { u32 v = 0x3f911112u; r_esp -= 4; W32(r_esp, v); }
    /* 0078de36: call 0x82ebc8 */ r_esp -= 4; W32(r_esp, 0x78de3bu); f_0082ebc8();
    /* 0078de3b: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x78de40u); f_007a93d8();
    /* 0078de40: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x78de45u); f_0082dbac();
    /* 0078de45: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x78de4au); f_004d28a4();
    /* 0078de4a: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x78de4fu); f_007a9044();
    /* 0078de4f: mov ecx, 0x9ff164 */ r_ecx = 0x9ff164u;
    /* 0078de54: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x78de59u); f_00829cc8();
    /* 0078de59: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078de5b: call 0x829d68 */ r_esp -= 4; W32(r_esp, 0x78de60u); f_00829d68();
    /* 0078de60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078de62: call 0x82b13c */ r_esp -= 4; W32(r_esp, 0x78de67u); f_0082b13c();
    /* 0078de67: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0078de69: push 0x9ff0e0 */ { u32 v = 0x9ff0e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078de6e: call 0x82b148 */ r_esp -= 4; W32(r_esp, 0x78de73u); f_0082b148();
    /* 0078de73: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078de76: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x78de7bu); f_0061cdb0();
    /* 0078de7b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0078de80: call 0x829d68 */ r_esp -= 4; W32(r_esp, 0x78de85u); f_00829d68();
    /* 0078de85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078de87: call 0x82b13c */ r_esp -= 4; W32(r_esp, 0x78de8cu); f_0082b13c();
    /* 0078de8c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0078de8e: push 0x9ff080 */ { u32 v = 0x9ff080u; r_esp -= 4; W32(r_esp, v); }
    /* 0078de93: call 0x82b148 */ r_esp -= 4; W32(r_esp, 0x78de98u); f_0082b148();
    /* 0078de98: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078de9b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x78dea0u); f_0061cdb0();
    /* 0078dea0: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x78dea5u); f_007a902c();
    /* 0078dea5: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0078dea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078dea8: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0078dead: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0078deaf: push 0x9ff1a8 */ { u32 v = 0x9ff1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0078deb4: call 0x819f7c */ r_esp -= 4; W32(r_esp, 0x78deb9u); f_00819f7c();
    /* 0078deb9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078debc: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x78dec1u); f_007a9044();
    /* 0078dec1: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x78dec6u); f_004d2968();
    /* 0078dec6: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x78decbu); f_0082dab0();
    /* 0078decb: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x78ded0u); f_007a9318();
L_0078ded0:; BB(0x0078ded0);
    /* 0078ded0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078ded3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078ded4: ret  */ FN_RET(0x0078ddb8); r_esp += 4; return;
}

void f_0078ded8(void) /* sub_78DED8 */
{
    FN_ENTER(0x0078ded8);
    /* 0078ded8: mov ecx, 0x9ff164 */ r_ecx = 0x9ff164u;
    /* 0078dedd: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x78dee2u); f_00829de0();
    /* 0078dee2: ret  */ FN_RET(0x0078ded8); r_esp += 4; return;
}

void f_0078df88(void) /* sub_78DF88 */
{
    FN_ENTER(0x0078df88);
    /* 0078df88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078df89: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078df8a: push 0x11000 */ { u32 v = 0x11000u; r_esp -= 4; W32(r_esp, v); }
    /* 0078df8f: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x78df94u); f_0082e940();
    /* 0078df94: mov esi, eax */ r_esi = r_eax;
    /* 0078df96: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0078df9b: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x78dfa0u); f_0082e940();
    /* 0078dfa0: mov ebp, eax */ r_ebp = r_eax;
    /* 0078dfa2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078dfa3: push 0x97ab54 */ { u32 v = 0x97ab54u; r_esp -= 4; W32(r_esp, v); }
    /* 0078dfa8: call 0x5b9368 */ r_esp -= 4; W32(r_esp, 0x78dfadu); f_005b9368();
    /* 0078dfad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078dfae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078dfaf: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x78dfb4u); f_00788154();
    /* 0078dfb4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078dfb7: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0078dfbc: call 0x82aab8 */ r_esp -= 4; W32(r_esp, 0x78dfc1u); f_0082aab8();
    /* 0078dfc1: mov ecx, esi */ r_ecx = r_esi;
    /* 0078dfc3: mov edx, 0x9ff164 */ r_edx = 0x9ff164u;
    /* 0078dfc8: call 0x82a7d8 */ r_esp -= 4; W32(r_esp, 0x78dfcdu); f_0082a7d8();
    /* 0078dfcd: call 0x82aac0 */ r_esp -= 4; W32(r_esp, 0x78dfd2u); f_0082aac0();
    /* 0078dfd2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078dfd3: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x78dfd8u); f_0082e960();
    /* 0078dfd8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078dfd9: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x78dfdeu); f_0082e960();
    /* 0078dfde: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078dfe1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078dfe2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078dfe3: ret  */ FN_RET(0x0078df88); r_esp += 4; return;
}

void f_0078dfe4(void) /* sub_78DFE4 */
{
    FN_ENTER(0x0078dfe4);
    /* 0078dfe4: mov eax, dword ptr [0xa9ca40] */ r_eax = R32((u32)(0xa9ca40u));
    /* 0078dfe9: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078dfeb: jne 0x78dff5 */ if (!fZ) goto L_0078dff5;
L_0078dfed:; BB(0x0078dfed);
    /* 0078dfed: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078dff0: mov dword ptr [0xa9ca40], eax */ W32((u32)(0xa9ca40u), r_eax);
L_0078dff5:; BB(0x0078dff5);
    /* 0078dff5: ret  */ FN_RET(0x0078dfe4); r_esp += 4; return;
}

void f_0078dff8(void) /* sub_78DFF8 */
{
    FN_ENTER(0x0078dff8);
    /* 0078dff8: call 0x78e15c */ r_esp -= 4; W32(r_esp, 0x78dffdu); f_0078e15c();
    /* 0078dffd: ret  */ FN_RET(0x0078dff8); r_esp += 4; return;
}

