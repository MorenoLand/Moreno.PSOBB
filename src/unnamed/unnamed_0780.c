#include "protos.h"

void f_00780000(void)
{
    FN_ENTER(0x00780000);
    /* 00780000: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00780003: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 00780007: mov edi, 0xa9bc84 */ r_edi = 0xa9bc84u;
    /* 0078000c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0078000e: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 00780012: mov ebx, dword ptr [0xaab3f0] */ r_ebx = R32((u32)(0xaab3f0u));
    /* 00780018: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0078001c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078001d: mov ebp, 0xa9b500 */ r_ebp = 0xa9b500u;
    /* 00780022: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00780023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00780024: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780029u); f_007a8c4c();
    /* 00780029: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078002c: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00780030: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x780035u); f_0083173c();
    /* 00780035: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00780039: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0078003d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078003f: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00780043: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780045: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780047: fcom dword ptr [0x97992c] */ fx_compare(ST(0), R_F32((u32)(0x97992cu))); 
    /* 0078004d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078004f: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00780053: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780054: jne 0x780060 */ if (!fZ) goto L_00780060;
L_00780056:; BB(0x00780056);
    /* 00780056: fld dword ptr [0x979928] */ FPUSH(R_F32((u32)(0x979928u)));
    /* 0078005c: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_00780060:; BB(0x00780060);
    /* 00780060: fld dword ptr [0x979924] */ FPUSH(R_F32((u32)(0x979924u)));
    /* 00780066: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0078006a: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 0078006c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078006e: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00780072: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00780073: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00780076: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x78007bu); f_0082dc9c();
    /* 0078007b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078007d: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00780080: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00780083: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780085: je 0x7801a8 */ if (fZ) goto L_007801a8;
L_0078008b:; BB(0x0078008b);
    /* 0078008b: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078008f: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00780093: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
L_00780097:; BB(0x00780097);
    /* 00780097: test dword ptr [edx + 0x14], ecx */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078009a: je 0x780197 */ if (fZ) goto L_00780197;
L_007800a0:; BB(0x007800a0);
    /* 007800a0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007800a4: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800a7: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 007800a9: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 007800ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800ae: fst dword ptr [0xaab4f0] */ W_F32((u32)(0xaab4f0u), ST(0));
    /* 007800b4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800b8: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 007800bb: fst dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0));
    /* 007800c1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800c3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007800c5: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 007800c8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007800ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800cc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800ce: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007800d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007800d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007800d3: jae 0x7800dc */ if (!fC) goto L_007800dc;
L_007800d5:; BB(0x007800d5);
    /* 007800d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007800d7: jmp 0x780197 */ goto L_00780197;
L_007800dc:; BB(0x007800dc);
    /* 007800dc: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e0: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e4: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800e8: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800ec: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800ef: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007800f1: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007800f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800f6: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007800fa: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007800fc: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 007800fe: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00780101: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 00780103: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780105: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00780107: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00780109: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0078010b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078010d: fcom dword ptr [0x97992c] */ fx_compare(ST(0), R_F32((u32)(0x97992cu))); 
    /* 00780113: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780115: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780116: jbe 0x780166 */ if ((fC||fZ)) goto L_00780166;
L_00780118:; BB(0x00780118);
    /* 00780118: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 0078011c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078011e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078011f: jb 0x780144 */ if (fC) goto L_00780144;
L_00780121:; BB(0x00780121);
    /* 00780121: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780123: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780125: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780127: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780129: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078012b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0078012f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00780131: fsub dword ptr [esp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x38u));
    /* 00780135: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780137: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0078013a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0078013c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078013e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780140: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780142: jmp 0x780176 */ goto L_00780176;
L_00780144:; BB(0x00780144);
    /* 00780144: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780146: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0078014a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078014c: fchs  */ ST(0) = -ST(0);
    /* 0078014e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00780150: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00780152: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780154: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780156: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780158: fchs  */ ST(0) = -ST(0);
    /* 0078015a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0078015c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078015e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780160: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780162: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780164: jmp 0x780176 */ goto L_00780176;
L_00780166:; BB(0x00780166);
    /* 00780166: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780168: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0078016a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078016c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0078016e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780170: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780172: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780174: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00780176:; BB(0x00780176);
    /* 00780176: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780178: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078017a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0078017c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078017e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078017f: jb 0x780197 */ if (fC) goto L_00780197;
L_00780181:; BB(0x00780181);
    /* 00780181: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780184: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078018a: jge 0x78027a */ if ((fS==fO)) goto L_0078027a;
L_00780190:; BB(0x00780190);
    /* 00780190: mov eax, ebp */ r_eax = r_ebp;
    /* 00780192: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00780195: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00780197:; BB(0x00780197);
    /* 00780197: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780199: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078019c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078019e: jne 0x780097 */ if (!fZ) goto L_00780097;
L_007801a4:; BB(0x007801a4);
    /* 007801a4: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_007801a8:; BB(0x007801a8);
    /* 007801a8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 007801af: mov eax, dword ptr [0xa9b500] */ r_eax = R32((u32)(0xa9b500u));
    /* 007801b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007801b6: jne 0x7801bf */ if (!fZ) goto L_007801bf;
L_007801b8:; BB(0x007801b8);
    /* 007801b8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007801ba: jmp 0x780270 */ goto L_00780270;
L_007801bf:; BB(0x007801bf);
    /* 007801bf: mov edx, dword ptr [0xa9bc88] */ r_edx = R32((u32)(0xa9bc88u));
    /* 007801c5: mov dword ptr [0xa9bc8c], 0xa9bc84 */ W32((u32)(0xa9bc8cu), 0xa9bc84u);
    /* 007801cf: mov ebx, 0xa9b500 */ r_ebx = 0xa9b500u;
    /* 007801d4: mov dword ptr [0xa9bc84], 0 */ W32((u32)(0xa9bc84u), 0x0u);
    /* 007801de: mov dword ptr [0xa9bc90], edx */ W32((u32)(0xa9bc90u), r_edx);
    /* 007801e4: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007801e8: mov dword ptr [0xa9bc94], 0x40000000 */ W32((u32)(0xa9bc94u), 0x40000000u);
    /* 007801f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007801f3: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 007801f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007801f8: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007801fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007801fd: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780202u); f_007a8c4c();
    /* 00780202: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00780205: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780207: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780209: je 0x780263 */ if (fZ) goto L_00780263;
L_0078020b:; BB(0x0078020b);
    /* 0078020b: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0078020f: mov eax, ebx */ r_eax = r_ebx;
    /* 00780211: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
L_00780215:; BB(0x00780215);
    /* 00780215: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00780217: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0078021a: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0078021d: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 00780220: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780222: je 0x780255 */ if (fZ) goto L_00780255;
L_00780224:; BB(0x00780224);
    /* 00780224: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_00780228:; BB(0x00780228);
    /* 00780228: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078022c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00780234: mov edx, esi */ r_edx = r_esi;
    /* 00780236: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780239: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0078023d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00780241: mov eax, ebx */ r_eax = r_ebx;
    /* 00780243: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00780247: call 0x780284 */ r_esp -= 4; W32(r_esp, 0x78024cu); f_00780284();
    /* 0078024c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0078024f: jne 0x780228 */ if (!fZ) goto L_00780228;
L_00780251:; BB(0x00780251);
    /* 00780251: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
L_00780255:; BB(0x00780255);
    /* 00780255: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00780258: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078025b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078025d: jne 0x780215 */ if (!fZ) goto L_00780215;
L_0078025f:; BB(0x0078025f);
    /* 0078025f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_00780263:; BB(0x00780263);
    /* 00780263: mov eax, dword ptr [0xa9bc8c] */ r_eax = R32((u32)(0xa9bc8cu));
    /* 00780268: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078026a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078026c: jne 0x780270 */ if (!fZ) goto L_00780270;
L_0078026e:; BB(0x0078026e);
    /* 0078026e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00780270:; BB(0x00780270);
    /* 00780270: mov eax, edi */ r_eax = r_edi;
    /* 00780272: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00780275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00780276: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00780277: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00780278: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00780279: ret  */ FN_RET(0x00780000); r_esp += 4; return;
L_0078027a:; BB(0x0078027a);
    /* 0078027a: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0078027e: jmp 0x7801a8 */ goto L_007801a8;
}

void f_00780025(void)
{
    FN_ENTER(0x00780025);
    /* 00780025: and ecx, dword ptr [edx + eax + 0xcc48300] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_eax+0xcc48300u)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0078002c: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00780030: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x780035u); f_0083173c();
    /* 00780035: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00780039: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0078003d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078003f: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00780043: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780045: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780047: fcom dword ptr [0x97992c] */ fx_compare(ST(0), R_F32((u32)(0x97992cu))); 
    /* 0078004d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078004f: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00780053: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780054: jne 0x780060 */ if (!fZ) goto L_00780060;
L_00780056:; BB(0x00780056);
    /* 00780056: fld dword ptr [0x979928] */ FPUSH(R_F32((u32)(0x979928u)));
    /* 0078005c: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_00780060:; BB(0x00780060);
    /* 00780060: fld dword ptr [0x979924] */ FPUSH(R_F32((u32)(0x979924u)));
    /* 00780066: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0078006a: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 0078006c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078006e: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00780072: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00780073: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00780076: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x78007bu); f_0082dc9c();
    /* 0078007b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078007d: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00780080: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00780083: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780085: je 0x7801a8 */ if (fZ) goto L_007801a8;
L_0078008b:; BB(0x0078008b);
    /* 0078008b: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078008f: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00780093: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
L_00780097:; BB(0x00780097);
    /* 00780097: test dword ptr [edx + 0x14], ecx */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078009a: je 0x780197 */ if (fZ) goto L_00780197;
L_007800a0:; BB(0x007800a0);
    /* 007800a0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007800a4: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800a7: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 007800a9: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 007800ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800ae: fst dword ptr [0xaab4f0] */ W_F32((u32)(0xaab4f0u), ST(0));
    /* 007800b4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800b8: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 007800bb: fst dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0));
    /* 007800c1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800c3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007800c5: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 007800c8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007800ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800cc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800ce: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007800d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007800d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007800d3: jae 0x7800dc */ if (!fC) goto L_007800dc;
L_007800d5:; BB(0x007800d5);
    /* 007800d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007800d7: jmp 0x780197 */ goto L_00780197;
L_007800dc:; BB(0x007800dc);
    /* 007800dc: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e0: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e4: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800e8: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800ec: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800ef: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007800f1: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007800f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800f6: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007800fa: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007800fc: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 007800fe: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00780101: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 00780103: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780105: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00780107: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00780109: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0078010b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078010d: fcom dword ptr [0x97992c] */ fx_compare(ST(0), R_F32((u32)(0x97992cu))); 
    /* 00780113: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780115: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780116: jbe 0x780166 */ if ((fC||fZ)) goto L_00780166;
L_00780118:; BB(0x00780118);
    /* 00780118: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 0078011c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078011e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078011f: jb 0x780144 */ if (fC) goto L_00780144;
L_00780121:; BB(0x00780121);
    /* 00780121: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780123: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780125: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780127: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780129: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078012b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0078012f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00780131: fsub dword ptr [esp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x38u));
    /* 00780135: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780137: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0078013a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0078013c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078013e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780140: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780142: jmp 0x780176 */ goto L_00780176;
L_00780144:; BB(0x00780144);
    /* 00780144: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780146: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0078014a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078014c: fchs  */ ST(0) = -ST(0);
    /* 0078014e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00780150: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00780152: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780154: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780156: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780158: fchs  */ ST(0) = -ST(0);
    /* 0078015a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0078015c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078015e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780160: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780162: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780164: jmp 0x780176 */ goto L_00780176;
L_00780166:; BB(0x00780166);
    /* 00780166: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780168: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0078016a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078016c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0078016e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780170: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780172: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780174: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00780176:; BB(0x00780176);
    /* 00780176: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780178: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078017a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0078017c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078017e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078017f: jb 0x780197 */ if (fC) goto L_00780197;
L_00780181:; BB(0x00780181);
    /* 00780181: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780184: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078018a: jge 0x78027a */ if ((fS==fO)) goto L_0078027a;
L_00780190:; BB(0x00780190);
    /* 00780190: mov eax, ebp */ r_eax = r_ebp;
    /* 00780192: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00780195: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00780197:; BB(0x00780197);
    /* 00780197: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780199: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078019c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078019e: jne 0x780097 */ if (!fZ) goto L_00780097;
L_007801a4:; BB(0x007801a4);
    /* 007801a4: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_007801a8:; BB(0x007801a8);
    /* 007801a8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 007801af: mov eax, dword ptr [0xa9b500] */ r_eax = R32((u32)(0xa9b500u));
    /* 007801b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007801b6: jne 0x7801bf */ if (!fZ) goto L_007801bf;
L_007801b8:; BB(0x007801b8);
    /* 007801b8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007801ba: jmp 0x780270 */ goto L_00780270;
L_007801bf:; BB(0x007801bf);
    /* 007801bf: mov edx, dword ptr [0xa9bc88] */ r_edx = R32((u32)(0xa9bc88u));
    /* 007801c5: mov dword ptr [0xa9bc8c], 0xa9bc84 */ W32((u32)(0xa9bc8cu), 0xa9bc84u);
    /* 007801cf: mov ebx, 0xa9b500 */ r_ebx = 0xa9b500u;
    /* 007801d4: mov dword ptr [0xa9bc84], 0 */ W32((u32)(0xa9bc84u), 0x0u);
    /* 007801de: mov dword ptr [0xa9bc90], edx */ W32((u32)(0xa9bc90u), r_edx);
    /* 007801e4: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007801e8: mov dword ptr [0xa9bc94], 0x40000000 */ W32((u32)(0xa9bc94u), 0x40000000u);
    /* 007801f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007801f3: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 007801f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007801f8: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007801fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007801fd: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780202u); f_007a8c4c();
    /* 00780202: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00780205: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780207: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780209: je 0x780263 */ if (fZ) goto L_00780263;
L_0078020b:; BB(0x0078020b);
    /* 0078020b: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0078020f: mov eax, ebx */ r_eax = r_ebx;
    /* 00780211: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
L_00780215:; BB(0x00780215);
    /* 00780215: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00780217: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0078021a: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0078021d: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 00780220: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780222: je 0x780255 */ if (fZ) goto L_00780255;
L_00780224:; BB(0x00780224);
    /* 00780224: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_00780228:; BB(0x00780228);
    /* 00780228: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078022c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00780234: mov edx, esi */ r_edx = r_esi;
    /* 00780236: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780239: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0078023d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00780241: mov eax, ebx */ r_eax = r_ebx;
    /* 00780243: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00780247: call 0x780284 */ r_esp -= 4; W32(r_esp, 0x78024cu); f_00780284();
    /* 0078024c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0078024f: jne 0x780228 */ if (!fZ) goto L_00780228;
L_00780251:; BB(0x00780251);
    /* 00780251: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
L_00780255:; BB(0x00780255);
    /* 00780255: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00780258: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078025b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078025d: jne 0x780215 */ if (!fZ) goto L_00780215;
L_0078025f:; BB(0x0078025f);
    /* 0078025f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_00780263:; BB(0x00780263);
    /* 00780263: mov eax, dword ptr [0xa9bc8c] */ r_eax = R32((u32)(0xa9bc8cu));
    /* 00780268: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078026a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078026c: jne 0x780270 */ if (!fZ) goto L_00780270;
L_0078026e:; BB(0x0078026e);
    /* 0078026e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00780270:; BB(0x00780270);
    /* 00780270: mov eax, edi */ r_eax = r_edi;
    /* 00780272: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00780275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00780276: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00780277: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00780278: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00780279: ret  */ FN_RET(0x00780025); r_esp += 4; return;
L_0078027a:; BB(0x0078027a);
    /* 0078027a: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0078027e: jmp 0x7801a8 */ goto L_007801a8;
}

void f_0078003c(void)
{
    FN_ENTER(0x0078003c);
    /* 0078003c: sbb al, bl */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0078003e: enter 0x44d9, 0x24 */ { u32 f = 0x44d9u; u32 lv = 4u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 00780042: and al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 00780044: enter -0x3e22, -0x28 */ { u32 f = 0xc1deu; u32 lv = 24u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 00780048: adc eax, 0x97992c */ { u32 c = fC; u32 a = r_eax; u32 b = 0x97992cu; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 0078004d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078004f: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00780053: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780054: jne 0x780060 */ if (!fZ) goto L_00780060;
L_00780056:; BB(0x00780056);
    /* 00780056: fld dword ptr [0x979928] */ FPUSH(R_F32((u32)(0x979928u)));
    /* 0078005c: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_00780060:; BB(0x00780060);
    /* 00780060: fld dword ptr [0x979924] */ FPUSH(R_F32((u32)(0x979924u)));
    /* 00780066: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0078006a: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 0078006c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078006e: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00780072: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00780073: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00780076: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x78007bu); f_0082dc9c();
    /* 0078007b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078007d: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00780080: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00780083: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780085: je 0x7801a8 */ if (fZ) goto L_007801a8;
L_0078008b:; BB(0x0078008b);
    /* 0078008b: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078008f: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00780093: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
L_00780097:; BB(0x00780097);
    /* 00780097: test dword ptr [edx + 0x14], ecx */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078009a: je 0x780197 */ if (fZ) goto L_00780197;
L_007800a0:; BB(0x007800a0);
    /* 007800a0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007800a4: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800a7: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 007800a9: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 007800ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800ae: fst dword ptr [0xaab4f0] */ W_F32((u32)(0xaab4f0u), ST(0));
    /* 007800b4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800b8: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 007800bb: fst dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0));
    /* 007800c1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800c3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007800c5: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 007800c8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007800ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800cc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800ce: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007800d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007800d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007800d3: jae 0x7800dc */ if (!fC) goto L_007800dc;
L_007800d5:; BB(0x007800d5);
    /* 007800d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007800d7: jmp 0x780197 */ goto L_00780197;
L_007800dc:; BB(0x007800dc);
    /* 007800dc: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e0: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e4: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800e8: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800ec: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800ef: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007800f1: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007800f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800f6: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007800fa: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007800fc: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 007800fe: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00780101: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 00780103: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780105: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00780107: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00780109: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0078010b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078010d: fcom dword ptr [0x97992c] */ fx_compare(ST(0), R_F32((u32)(0x97992cu))); 
    /* 00780113: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780115: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780116: jbe 0x780166 */ if ((fC||fZ)) goto L_00780166;
L_00780118:; BB(0x00780118);
    /* 00780118: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 0078011c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078011e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078011f: jb 0x780144 */ if (fC) goto L_00780144;
L_00780121:; BB(0x00780121);
    /* 00780121: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780123: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780125: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780127: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780129: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078012b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0078012f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00780131: fsub dword ptr [esp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x38u));
    /* 00780135: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780137: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0078013a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0078013c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078013e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780140: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780142: jmp 0x780176 */ goto L_00780176;
L_00780144:; BB(0x00780144);
    /* 00780144: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780146: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0078014a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078014c: fchs  */ ST(0) = -ST(0);
    /* 0078014e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00780150: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00780152: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780154: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780156: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780158: fchs  */ ST(0) = -ST(0);
    /* 0078015a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0078015c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078015e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780160: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780162: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780164: jmp 0x780176 */ goto L_00780176;
L_00780166:; BB(0x00780166);
    /* 00780166: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780168: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0078016a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078016c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0078016e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780170: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780172: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780174: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00780176:; BB(0x00780176);
    /* 00780176: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780178: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078017a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0078017c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078017e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078017f: jb 0x780197 */ if (fC) goto L_00780197;
L_00780181:; BB(0x00780181);
    /* 00780181: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780184: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078018a: jge 0x78027a */ if ((fS==fO)) goto L_0078027a;
L_00780190:; BB(0x00780190);
    /* 00780190: mov eax, ebp */ r_eax = r_ebp;
    /* 00780192: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00780195: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00780197:; BB(0x00780197);
    /* 00780197: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780199: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078019c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078019e: jne 0x780097 */ if (!fZ) goto L_00780097;
L_007801a4:; BB(0x007801a4);
    /* 007801a4: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_007801a8:; BB(0x007801a8);
    /* 007801a8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 007801af: mov eax, dword ptr [0xa9b500] */ r_eax = R32((u32)(0xa9b500u));
    /* 007801b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007801b6: jne 0x7801bf */ if (!fZ) goto L_007801bf;
L_007801b8:; BB(0x007801b8);
    /* 007801b8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007801ba: jmp 0x780270 */ goto L_00780270;
L_007801bf:; BB(0x007801bf);
    /* 007801bf: mov edx, dword ptr [0xa9bc88] */ r_edx = R32((u32)(0xa9bc88u));
    /* 007801c5: mov dword ptr [0xa9bc8c], 0xa9bc84 */ W32((u32)(0xa9bc8cu), 0xa9bc84u);
    /* 007801cf: mov ebx, 0xa9b500 */ r_ebx = 0xa9b500u;
    /* 007801d4: mov dword ptr [0xa9bc84], 0 */ W32((u32)(0xa9bc84u), 0x0u);
    /* 007801de: mov dword ptr [0xa9bc90], edx */ W32((u32)(0xa9bc90u), r_edx);
    /* 007801e4: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007801e8: mov dword ptr [0xa9bc94], 0x40000000 */ W32((u32)(0xa9bc94u), 0x40000000u);
    /* 007801f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007801f3: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 007801f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007801f8: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007801fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007801fd: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780202u); f_007a8c4c();
    /* 00780202: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00780205: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780207: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780209: je 0x780263 */ if (fZ) goto L_00780263;
L_0078020b:; BB(0x0078020b);
    /* 0078020b: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0078020f: mov eax, ebx */ r_eax = r_ebx;
    /* 00780211: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
L_00780215:; BB(0x00780215);
    /* 00780215: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00780217: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0078021a: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0078021d: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 00780220: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780222: je 0x780255 */ if (fZ) goto L_00780255;
L_00780224:; BB(0x00780224);
    /* 00780224: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_00780228:; BB(0x00780228);
    /* 00780228: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078022c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00780234: mov edx, esi */ r_edx = r_esi;
    /* 00780236: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780239: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0078023d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00780241: mov eax, ebx */ r_eax = r_ebx;
    /* 00780243: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00780247: call 0x780284 */ r_esp -= 4; W32(r_esp, 0x78024cu); f_00780284();
    /* 0078024c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0078024f: jne 0x780228 */ if (!fZ) goto L_00780228;
L_00780251:; BB(0x00780251);
    /* 00780251: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
L_00780255:; BB(0x00780255);
    /* 00780255: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00780258: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078025b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078025d: jne 0x780215 */ if (!fZ) goto L_00780215;
L_0078025f:; BB(0x0078025f);
    /* 0078025f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_00780263:; BB(0x00780263);
    /* 00780263: mov eax, dword ptr [0xa9bc8c] */ r_eax = R32((u32)(0xa9bc8cu));
    /* 00780268: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078026a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078026c: jne 0x780270 */ if (!fZ) goto L_00780270;
L_0078026e:; BB(0x0078026e);
    /* 0078026e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00780270:; BB(0x00780270);
    /* 00780270: mov eax, edi */ r_eax = r_edi;
    /* 00780272: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00780275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00780276: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00780277: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00780278: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00780279: ret  */ FN_RET(0x0078003c); r_esp += 4; return;
L_0078027a:; BB(0x0078027a);
    /* 0078027a: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0078027e: jmp 0x7801a8 */ goto L_007801a8;
}

void f_00780041(void)
{
    FN_ENTER(0x00780041);
    /* 00780041: and al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00780043: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780045: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780047: fcom dword ptr [0x97992c] */ fx_compare(ST(0), R_F32((u32)(0x97992cu))); 
    /* 0078004d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078004f: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00780053: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780054: jne 0x780060 */ if (!fZ) goto L_00780060;
L_00780056:; BB(0x00780056);
    /* 00780056: fld dword ptr [0x979928] */ FPUSH(R_F32((u32)(0x979928u)));
    /* 0078005c: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_00780060:; BB(0x00780060);
    /* 00780060: fld dword ptr [0x979924] */ FPUSH(R_F32((u32)(0x979924u)));
    /* 00780066: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0078006a: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 0078006c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078006e: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00780072: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00780073: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00780076: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x78007bu); f_0082dc9c();
    /* 0078007b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078007d: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00780080: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00780083: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780085: je 0x7801a8 */ if (fZ) goto L_007801a8;
L_0078008b:; BB(0x0078008b);
    /* 0078008b: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078008f: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00780093: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
L_00780097:; BB(0x00780097);
    /* 00780097: test dword ptr [edx + 0x14], ecx */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078009a: je 0x780197 */ if (fZ) goto L_00780197;
L_007800a0:; BB(0x007800a0);
    /* 007800a0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007800a4: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800a7: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 007800a9: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 007800ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800ae: fst dword ptr [0xaab4f0] */ W_F32((u32)(0xaab4f0u), ST(0));
    /* 007800b4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800b8: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 007800bb: fst dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0));
    /* 007800c1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800c3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007800c5: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 007800c8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007800ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800cc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800ce: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007800d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007800d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007800d3: jae 0x7800dc */ if (!fC) goto L_007800dc;
L_007800d5:; BB(0x007800d5);
    /* 007800d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007800d7: jmp 0x780197 */ goto L_00780197;
L_007800dc:; BB(0x007800dc);
    /* 007800dc: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e0: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e4: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800e8: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800ec: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800ef: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007800f1: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007800f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800f6: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007800fa: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007800fc: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 007800fe: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00780101: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 00780103: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780105: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00780107: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00780109: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0078010b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078010d: fcom dword ptr [0x97992c] */ fx_compare(ST(0), R_F32((u32)(0x97992cu))); 
    /* 00780113: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780115: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780116: jbe 0x780166 */ if ((fC||fZ)) goto L_00780166;
L_00780118:; BB(0x00780118);
    /* 00780118: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 0078011c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078011e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078011f: jb 0x780144 */ if (fC) goto L_00780144;
L_00780121:; BB(0x00780121);
    /* 00780121: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780123: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780125: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780127: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780129: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078012b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0078012f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00780131: fsub dword ptr [esp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x38u));
    /* 00780135: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780137: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0078013a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0078013c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078013e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780140: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780142: jmp 0x780176 */ goto L_00780176;
L_00780144:; BB(0x00780144);
    /* 00780144: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780146: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0078014a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078014c: fchs  */ ST(0) = -ST(0);
    /* 0078014e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00780150: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00780152: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780154: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780156: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780158: fchs  */ ST(0) = -ST(0);
    /* 0078015a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0078015c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078015e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780160: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780162: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780164: jmp 0x780176 */ goto L_00780176;
L_00780166:; BB(0x00780166);
    /* 00780166: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780168: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0078016a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078016c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0078016e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780170: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780172: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780174: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00780176:; BB(0x00780176);
    /* 00780176: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780178: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078017a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0078017c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078017e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078017f: jb 0x780197 */ if (fC) goto L_00780197;
L_00780181:; BB(0x00780181);
    /* 00780181: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780184: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078018a: jge 0x78027a */ if ((fS==fO)) goto L_0078027a;
L_00780190:; BB(0x00780190);
    /* 00780190: mov eax, ebp */ r_eax = r_ebp;
    /* 00780192: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00780195: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00780197:; BB(0x00780197);
    /* 00780197: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780199: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078019c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078019e: jne 0x780097 */ if (!fZ) goto L_00780097;
L_007801a4:; BB(0x007801a4);
    /* 007801a4: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_007801a8:; BB(0x007801a8);
    /* 007801a8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 007801af: mov eax, dword ptr [0xa9b500] */ r_eax = R32((u32)(0xa9b500u));
    /* 007801b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007801b6: jne 0x7801bf */ if (!fZ) goto L_007801bf;
L_007801b8:; BB(0x007801b8);
    /* 007801b8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007801ba: jmp 0x780270 */ goto L_00780270;
L_007801bf:; BB(0x007801bf);
    /* 007801bf: mov edx, dword ptr [0xa9bc88] */ r_edx = R32((u32)(0xa9bc88u));
    /* 007801c5: mov dword ptr [0xa9bc8c], 0xa9bc84 */ W32((u32)(0xa9bc8cu), 0xa9bc84u);
    /* 007801cf: mov ebx, 0xa9b500 */ r_ebx = 0xa9b500u;
    /* 007801d4: mov dword ptr [0xa9bc84], 0 */ W32((u32)(0xa9bc84u), 0x0u);
    /* 007801de: mov dword ptr [0xa9bc90], edx */ W32((u32)(0xa9bc90u), r_edx);
    /* 007801e4: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007801e8: mov dword ptr [0xa9bc94], 0x40000000 */ W32((u32)(0xa9bc94u), 0x40000000u);
    /* 007801f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007801f3: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 007801f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007801f8: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007801fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007801fd: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780202u); f_007a8c4c();
    /* 00780202: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00780205: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780207: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780209: je 0x780263 */ if (fZ) goto L_00780263;
L_0078020b:; BB(0x0078020b);
    /* 0078020b: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0078020f: mov eax, ebx */ r_eax = r_ebx;
    /* 00780211: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
L_00780215:; BB(0x00780215);
    /* 00780215: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00780217: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0078021a: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0078021d: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 00780220: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780222: je 0x780255 */ if (fZ) goto L_00780255;
L_00780224:; BB(0x00780224);
    /* 00780224: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_00780228:; BB(0x00780228);
    /* 00780228: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078022c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00780234: mov edx, esi */ r_edx = r_esi;
    /* 00780236: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780239: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0078023d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00780241: mov eax, ebx */ r_eax = r_ebx;
    /* 00780243: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00780247: call 0x780284 */ r_esp -= 4; W32(r_esp, 0x78024cu); f_00780284();
    /* 0078024c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0078024f: jne 0x780228 */ if (!fZ) goto L_00780228;
L_00780251:; BB(0x00780251);
    /* 00780251: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
L_00780255:; BB(0x00780255);
    /* 00780255: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00780258: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078025b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078025d: jne 0x780215 */ if (!fZ) goto L_00780215;
L_0078025f:; BB(0x0078025f);
    /* 0078025f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_00780263:; BB(0x00780263);
    /* 00780263: mov eax, dword ptr [0xa9bc8c] */ r_eax = R32((u32)(0xa9bc8cu));
    /* 00780268: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078026a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078026c: jne 0x780270 */ if (!fZ) goto L_00780270;
L_0078026e:; BB(0x0078026e);
    /* 0078026e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00780270:; BB(0x00780270);
    /* 00780270: mov eax, edi */ r_eax = r_edi;
    /* 00780272: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00780275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00780276: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00780277: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00780278: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00780279: ret  */ FN_RET(0x00780041); r_esp += 4; return;
L_0078027a:; BB(0x0078027a);
    /* 0078027a: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0078027e: jmp 0x7801a8 */ goto L_007801a8;
}

void f_00780048(void)
{
    FN_ENTER(0x00780048);
    /* 00780048: adc eax, 0x97992c */ { u32 c = fC; u32 a = r_eax; u32 b = 0x97992cu; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 0078004d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078004f: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00780053: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780054: jne 0x780060 */ if (!fZ) goto L_00780060;
L_00780056:; BB(0x00780056);
    /* 00780056: fld dword ptr [0x979928] */ FPUSH(R_F32((u32)(0x979928u)));
    /* 0078005c: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_00780060:; BB(0x00780060);
    /* 00780060: fld dword ptr [0x979924] */ FPUSH(R_F32((u32)(0x979924u)));
    /* 00780066: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0078006a: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 0078006c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078006e: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00780072: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00780073: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00780076: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x78007bu); f_0082dc9c();
    /* 0078007b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078007d: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00780080: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00780083: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780085: je 0x7801a8 */ if (fZ) goto L_007801a8;
L_0078008b:; BB(0x0078008b);
    /* 0078008b: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078008f: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00780093: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
L_00780097:; BB(0x00780097);
    /* 00780097: test dword ptr [edx + 0x14], ecx */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078009a: je 0x780197 */ if (fZ) goto L_00780197;
L_007800a0:; BB(0x007800a0);
    /* 007800a0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007800a4: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800a7: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 007800a9: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 007800ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800ae: fst dword ptr [0xaab4f0] */ W_F32((u32)(0xaab4f0u), ST(0));
    /* 007800b4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800b8: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 007800bb: fst dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0));
    /* 007800c1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800c3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007800c5: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 007800c8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007800ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800cc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800ce: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007800d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007800d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007800d3: jae 0x7800dc */ if (!fC) goto L_007800dc;
L_007800d5:; BB(0x007800d5);
    /* 007800d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007800d7: jmp 0x780197 */ goto L_00780197;
L_007800dc:; BB(0x007800dc);
    /* 007800dc: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e0: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e4: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800e8: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800ec: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800ef: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007800f1: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007800f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800f6: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007800fa: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007800fc: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 007800fe: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00780101: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 00780103: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780105: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00780107: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00780109: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0078010b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078010d: fcom dword ptr [0x97992c] */ fx_compare(ST(0), R_F32((u32)(0x97992cu))); 
    /* 00780113: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780115: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780116: jbe 0x780166 */ if ((fC||fZ)) goto L_00780166;
L_00780118:; BB(0x00780118);
    /* 00780118: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 0078011c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078011e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078011f: jb 0x780144 */ if (fC) goto L_00780144;
L_00780121:; BB(0x00780121);
    /* 00780121: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780123: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780125: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780127: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780129: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078012b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0078012f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00780131: fsub dword ptr [esp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x38u));
    /* 00780135: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780137: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0078013a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0078013c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078013e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780140: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780142: jmp 0x780176 */ goto L_00780176;
L_00780144:; BB(0x00780144);
    /* 00780144: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780146: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0078014a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078014c: fchs  */ ST(0) = -ST(0);
    /* 0078014e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00780150: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00780152: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780154: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780156: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780158: fchs  */ ST(0) = -ST(0);
    /* 0078015a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0078015c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078015e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780160: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780162: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780164: jmp 0x780176 */ goto L_00780176;
L_00780166:; BB(0x00780166);
    /* 00780166: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780168: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0078016a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078016c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0078016e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780170: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780172: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780174: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00780176:; BB(0x00780176);
    /* 00780176: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780178: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078017a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0078017c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078017e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078017f: jb 0x780197 */ if (fC) goto L_00780197;
L_00780181:; BB(0x00780181);
    /* 00780181: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780184: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078018a: jge 0x78027a */ if ((fS==fO)) goto L_0078027a;
L_00780190:; BB(0x00780190);
    /* 00780190: mov eax, ebp */ r_eax = r_ebp;
    /* 00780192: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00780195: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00780197:; BB(0x00780197);
    /* 00780197: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780199: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078019c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078019e: jne 0x780097 */ if (!fZ) goto L_00780097;
L_007801a4:; BB(0x007801a4);
    /* 007801a4: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_007801a8:; BB(0x007801a8);
    /* 007801a8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 007801af: mov eax, dword ptr [0xa9b500] */ r_eax = R32((u32)(0xa9b500u));
    /* 007801b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007801b6: jne 0x7801bf */ if (!fZ) goto L_007801bf;
L_007801b8:; BB(0x007801b8);
    /* 007801b8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007801ba: jmp 0x780270 */ goto L_00780270;
L_007801bf:; BB(0x007801bf);
    /* 007801bf: mov edx, dword ptr [0xa9bc88] */ r_edx = R32((u32)(0xa9bc88u));
    /* 007801c5: mov dword ptr [0xa9bc8c], 0xa9bc84 */ W32((u32)(0xa9bc8cu), 0xa9bc84u);
    /* 007801cf: mov ebx, 0xa9b500 */ r_ebx = 0xa9b500u;
    /* 007801d4: mov dword ptr [0xa9bc84], 0 */ W32((u32)(0xa9bc84u), 0x0u);
    /* 007801de: mov dword ptr [0xa9bc90], edx */ W32((u32)(0xa9bc90u), r_edx);
    /* 007801e4: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007801e8: mov dword ptr [0xa9bc94], 0x40000000 */ W32((u32)(0xa9bc94u), 0x40000000u);
    /* 007801f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007801f3: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 007801f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007801f8: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007801fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007801fd: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780202u); f_007a8c4c();
    /* 00780202: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00780205: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780207: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780209: je 0x780263 */ if (fZ) goto L_00780263;
L_0078020b:; BB(0x0078020b);
    /* 0078020b: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0078020f: mov eax, ebx */ r_eax = r_ebx;
    /* 00780211: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
L_00780215:; BB(0x00780215);
    /* 00780215: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00780217: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0078021a: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0078021d: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 00780220: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780222: je 0x780255 */ if (fZ) goto L_00780255;
L_00780224:; BB(0x00780224);
    /* 00780224: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_00780228:; BB(0x00780228);
    /* 00780228: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078022c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00780234: mov edx, esi */ r_edx = r_esi;
    /* 00780236: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780239: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0078023d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00780241: mov eax, ebx */ r_eax = r_ebx;
    /* 00780243: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00780247: call 0x780284 */ r_esp -= 4; W32(r_esp, 0x78024cu); f_00780284();
    /* 0078024c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0078024f: jne 0x780228 */ if (!fZ) goto L_00780228;
L_00780251:; BB(0x00780251);
    /* 00780251: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
L_00780255:; BB(0x00780255);
    /* 00780255: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00780258: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078025b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078025d: jne 0x780215 */ if (!fZ) goto L_00780215;
L_0078025f:; BB(0x0078025f);
    /* 0078025f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_00780263:; BB(0x00780263);
    /* 00780263: mov eax, dword ptr [0xa9bc8c] */ r_eax = R32((u32)(0xa9bc8cu));
    /* 00780268: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078026a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078026c: jne 0x780270 */ if (!fZ) goto L_00780270;
L_0078026e:; BB(0x0078026e);
    /* 0078026e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00780270:; BB(0x00780270);
    /* 00780270: mov eax, edi */ r_eax = r_edi;
    /* 00780272: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00780275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00780276: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00780277: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00780278: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00780279: ret  */ FN_RET(0x00780048); r_esp += 4; return;
L_0078027a:; BB(0x0078027a);
    /* 0078027a: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0078027e: jmp 0x7801a8 */ goto L_007801a8;
}

void f_00780055(void)
{
    FN_ENTER(0x00780055);
    /* 00780055: or bl, cl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00780057: add eax, 0x979928 */ {  u32 a = r_eax; u32 b = 0x979928u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078005c: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00780060: fld dword ptr [0x979924] */ FPUSH(R_F32((u32)(0x979924u)));
    /* 00780066: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0078006a: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 0078006c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078006e: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00780072: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00780073: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00780076: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x78007bu); f_0082dc9c();
    /* 0078007b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078007d: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00780080: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00780083: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780085: je 0x7801a8 */ if (fZ) goto L_007801a8;
L_0078008b:; BB(0x0078008b);
    /* 0078008b: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078008f: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00780093: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
L_00780097:; BB(0x00780097);
    /* 00780097: test dword ptr [edx + 0x14], ecx */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078009a: je 0x780197 */ if (fZ) goto L_00780197;
L_007800a0:; BB(0x007800a0);
    /* 007800a0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007800a4: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800a7: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 007800a9: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 007800ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800ae: fst dword ptr [0xaab4f0] */ W_F32((u32)(0xaab4f0u), ST(0));
    /* 007800b4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800b8: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 007800bb: fst dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0));
    /* 007800c1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800c3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007800c5: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 007800c8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007800ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800cc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800ce: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007800d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007800d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007800d3: jae 0x7800dc */ if (!fC) goto L_007800dc;
L_007800d5:; BB(0x007800d5);
    /* 007800d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007800d7: jmp 0x780197 */ goto L_00780197;
L_007800dc:; BB(0x007800dc);
    /* 007800dc: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e0: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e4: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800e8: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800ec: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800ef: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007800f1: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007800f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800f6: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007800fa: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007800fc: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 007800fe: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00780101: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 00780103: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780105: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00780107: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00780109: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0078010b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078010d: fcom dword ptr [0x97992c] */ fx_compare(ST(0), R_F32((u32)(0x97992cu))); 
    /* 00780113: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780115: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780116: jbe 0x780166 */ if ((fC||fZ)) goto L_00780166;
L_00780118:; BB(0x00780118);
    /* 00780118: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 0078011c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078011e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078011f: jb 0x780144 */ if (fC) goto L_00780144;
L_00780121:; BB(0x00780121);
    /* 00780121: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780123: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780125: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780127: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780129: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078012b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0078012f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00780131: fsub dword ptr [esp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x38u));
    /* 00780135: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780137: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0078013a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0078013c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078013e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780140: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780142: jmp 0x780176 */ goto L_00780176;
L_00780144:; BB(0x00780144);
    /* 00780144: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780146: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0078014a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078014c: fchs  */ ST(0) = -ST(0);
    /* 0078014e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00780150: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00780152: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780154: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780156: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780158: fchs  */ ST(0) = -ST(0);
    /* 0078015a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0078015c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078015e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780160: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780162: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780164: jmp 0x780176 */ goto L_00780176;
L_00780166:; BB(0x00780166);
    /* 00780166: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780168: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0078016a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078016c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0078016e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780170: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780172: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780174: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00780176:; BB(0x00780176);
    /* 00780176: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780178: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078017a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0078017c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078017e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078017f: jb 0x780197 */ if (fC) goto L_00780197;
L_00780181:; BB(0x00780181);
    /* 00780181: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780184: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078018a: jge 0x78027a */ if ((fS==fO)) goto L_0078027a;
L_00780190:; BB(0x00780190);
    /* 00780190: mov eax, ebp */ r_eax = r_ebp;
    /* 00780192: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00780195: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00780197:; BB(0x00780197);
    /* 00780197: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780199: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078019c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078019e: jne 0x780097 */ if (!fZ) goto L_00780097;
L_007801a4:; BB(0x007801a4);
    /* 007801a4: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_007801a8:; BB(0x007801a8);
    /* 007801a8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 007801af: mov eax, dword ptr [0xa9b500] */ r_eax = R32((u32)(0xa9b500u));
    /* 007801b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007801b6: jne 0x7801bf */ if (!fZ) goto L_007801bf;
L_007801b8:; BB(0x007801b8);
    /* 007801b8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007801ba: jmp 0x780270 */ goto L_00780270;
L_007801bf:; BB(0x007801bf);
    /* 007801bf: mov edx, dword ptr [0xa9bc88] */ r_edx = R32((u32)(0xa9bc88u));
    /* 007801c5: mov dword ptr [0xa9bc8c], 0xa9bc84 */ W32((u32)(0xa9bc8cu), 0xa9bc84u);
    /* 007801cf: mov ebx, 0xa9b500 */ r_ebx = 0xa9b500u;
    /* 007801d4: mov dword ptr [0xa9bc84], 0 */ W32((u32)(0xa9bc84u), 0x0u);
    /* 007801de: mov dword ptr [0xa9bc90], edx */ W32((u32)(0xa9bc90u), r_edx);
    /* 007801e4: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007801e8: mov dword ptr [0xa9bc94], 0x40000000 */ W32((u32)(0xa9bc94u), 0x40000000u);
    /* 007801f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007801f3: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 007801f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007801f8: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007801fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007801fd: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780202u); f_007a8c4c();
    /* 00780202: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00780205: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780207: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780209: je 0x780263 */ if (fZ) goto L_00780263;
L_0078020b:; BB(0x0078020b);
    /* 0078020b: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0078020f: mov eax, ebx */ r_eax = r_ebx;
    /* 00780211: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
L_00780215:; BB(0x00780215);
    /* 00780215: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00780217: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0078021a: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0078021d: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 00780220: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780222: je 0x780255 */ if (fZ) goto L_00780255;
L_00780224:; BB(0x00780224);
    /* 00780224: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_00780228:; BB(0x00780228);
    /* 00780228: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078022c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00780234: mov edx, esi */ r_edx = r_esi;
    /* 00780236: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780239: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0078023d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00780241: mov eax, ebx */ r_eax = r_ebx;
    /* 00780243: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00780247: call 0x780284 */ r_esp -= 4; W32(r_esp, 0x78024cu); f_00780284();
    /* 0078024c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0078024f: jne 0x780228 */ if (!fZ) goto L_00780228;
L_00780251:; BB(0x00780251);
    /* 00780251: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
L_00780255:; BB(0x00780255);
    /* 00780255: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00780258: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078025b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078025d: jne 0x780215 */ if (!fZ) goto L_00780215;
L_0078025f:; BB(0x0078025f);
    /* 0078025f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_00780263:; BB(0x00780263);
    /* 00780263: mov eax, dword ptr [0xa9bc8c] */ r_eax = R32((u32)(0xa9bc8cu));
    /* 00780268: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078026a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078026c: jne 0x780270 */ if (!fZ) goto L_00780270;
L_0078026e:; BB(0x0078026e);
    /* 0078026e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00780270:; BB(0x00780270);
    /* 00780270: mov eax, edi */ r_eax = r_edi;
    /* 00780272: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00780275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00780276: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00780277: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00780278: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00780279: ret  */ FN_RET(0x00780055); r_esp += 4; return;
L_0078027a:; BB(0x0078027a);
    /* 0078027a: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0078027e: jmp 0x7801a8 */ goto L_007801a8;
}

void f_0078005a(void)
{
    FN_ENTER(0x0078005a);
    /* 0078005a: xchg edi, eax */ { u32 x = r_edi; u32 y = r_eax; r_edi = y; r_eax = x; }
    /* 0078005b: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0078005d: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 0078005e: and al, 0x44 */ {  u32 a = (u8)r_eax; u32 b = 0x44u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00780060: fld dword ptr [0x979924] */ FPUSH(R_F32((u32)(0x979924u)));
    /* 00780066: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0078006a: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 0078006c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078006e: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00780072: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00780073: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00780076: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x78007bu); f_0082dc9c();
    /* 0078007b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078007d: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00780080: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00780083: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780085: je 0x7801a8 */ if (fZ) goto L_007801a8;
L_0078008b:; BB(0x0078008b);
    /* 0078008b: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078008f: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00780093: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
L_00780097:; BB(0x00780097);
    /* 00780097: test dword ptr [edx + 0x14], ecx */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078009a: je 0x780197 */ if (fZ) goto L_00780197;
L_007800a0:; BB(0x007800a0);
    /* 007800a0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007800a4: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800a7: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 007800a9: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 007800ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800ae: fst dword ptr [0xaab4f0] */ W_F32((u32)(0xaab4f0u), ST(0));
    /* 007800b4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800b8: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 007800bb: fst dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0));
    /* 007800c1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800c3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007800c5: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 007800c8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007800ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800cc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800ce: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007800d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007800d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007800d3: jae 0x7800dc */ if (!fC) goto L_007800dc;
L_007800d5:; BB(0x007800d5);
    /* 007800d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007800d7: jmp 0x780197 */ goto L_00780197;
L_007800dc:; BB(0x007800dc);
    /* 007800dc: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e0: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e4: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800e8: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800ec: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800ef: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007800f1: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007800f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800f6: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007800fa: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007800fc: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 007800fe: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00780101: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 00780103: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780105: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00780107: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00780109: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0078010b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078010d: fcom dword ptr [0x97992c] */ fx_compare(ST(0), R_F32((u32)(0x97992cu))); 
    /* 00780113: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780115: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780116: jbe 0x780166 */ if ((fC||fZ)) goto L_00780166;
L_00780118:; BB(0x00780118);
    /* 00780118: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 0078011c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078011e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078011f: jb 0x780144 */ if (fC) goto L_00780144;
L_00780121:; BB(0x00780121);
    /* 00780121: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780123: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780125: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780127: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780129: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078012b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0078012f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00780131: fsub dword ptr [esp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x38u));
    /* 00780135: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780137: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0078013a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0078013c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078013e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780140: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780142: jmp 0x780176 */ goto L_00780176;
L_00780144:; BB(0x00780144);
    /* 00780144: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780146: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0078014a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078014c: fchs  */ ST(0) = -ST(0);
    /* 0078014e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00780150: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00780152: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780154: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780156: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780158: fchs  */ ST(0) = -ST(0);
    /* 0078015a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0078015c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078015e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780160: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780162: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780164: jmp 0x780176 */ goto L_00780176;
L_00780166:; BB(0x00780166);
    /* 00780166: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780168: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0078016a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078016c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0078016e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780170: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780172: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780174: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00780176:; BB(0x00780176);
    /* 00780176: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780178: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078017a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0078017c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078017e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078017f: jb 0x780197 */ if (fC) goto L_00780197;
L_00780181:; BB(0x00780181);
    /* 00780181: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780184: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078018a: jge 0x78027a */ if ((fS==fO)) goto L_0078027a;
L_00780190:; BB(0x00780190);
    /* 00780190: mov eax, ebp */ r_eax = r_ebp;
    /* 00780192: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00780195: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00780197:; BB(0x00780197);
    /* 00780197: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780199: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078019c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078019e: jne 0x780097 */ if (!fZ) goto L_00780097;
L_007801a4:; BB(0x007801a4);
    /* 007801a4: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_007801a8:; BB(0x007801a8);
    /* 007801a8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 007801af: mov eax, dword ptr [0xa9b500] */ r_eax = R32((u32)(0xa9b500u));
    /* 007801b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007801b6: jne 0x7801bf */ if (!fZ) goto L_007801bf;
L_007801b8:; BB(0x007801b8);
    /* 007801b8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007801ba: jmp 0x780270 */ goto L_00780270;
L_007801bf:; BB(0x007801bf);
    /* 007801bf: mov edx, dword ptr [0xa9bc88] */ r_edx = R32((u32)(0xa9bc88u));
    /* 007801c5: mov dword ptr [0xa9bc8c], 0xa9bc84 */ W32((u32)(0xa9bc8cu), 0xa9bc84u);
    /* 007801cf: mov ebx, 0xa9b500 */ r_ebx = 0xa9b500u;
    /* 007801d4: mov dword ptr [0xa9bc84], 0 */ W32((u32)(0xa9bc84u), 0x0u);
    /* 007801de: mov dword ptr [0xa9bc90], edx */ W32((u32)(0xa9bc90u), r_edx);
    /* 007801e4: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007801e8: mov dword ptr [0xa9bc94], 0x40000000 */ W32((u32)(0xa9bc94u), 0x40000000u);
    /* 007801f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007801f3: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 007801f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007801f8: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007801fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007801fd: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780202u); f_007a8c4c();
    /* 00780202: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00780205: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780207: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780209: je 0x780263 */ if (fZ) goto L_00780263;
L_0078020b:; BB(0x0078020b);
    /* 0078020b: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0078020f: mov eax, ebx */ r_eax = r_ebx;
    /* 00780211: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
L_00780215:; BB(0x00780215);
    /* 00780215: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00780217: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0078021a: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0078021d: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 00780220: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780222: je 0x780255 */ if (fZ) goto L_00780255;
L_00780224:; BB(0x00780224);
    /* 00780224: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_00780228:; BB(0x00780228);
    /* 00780228: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078022c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00780234: mov edx, esi */ r_edx = r_esi;
    /* 00780236: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780239: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0078023d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00780241: mov eax, ebx */ r_eax = r_ebx;
    /* 00780243: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00780247: call 0x780284 */ r_esp -= 4; W32(r_esp, 0x78024cu); f_00780284();
    /* 0078024c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0078024f: jne 0x780228 */ if (!fZ) goto L_00780228;
L_00780251:; BB(0x00780251);
    /* 00780251: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
L_00780255:; BB(0x00780255);
    /* 00780255: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00780258: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078025b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078025d: jne 0x780215 */ if (!fZ) goto L_00780215;
L_0078025f:; BB(0x0078025f);
    /* 0078025f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_00780263:; BB(0x00780263);
    /* 00780263: mov eax, dword ptr [0xa9bc8c] */ r_eax = R32((u32)(0xa9bc8cu));
    /* 00780268: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078026a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078026c: jne 0x780270 */ if (!fZ) goto L_00780270;
L_0078026e:; BB(0x0078026e);
    /* 0078026e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00780270:; BB(0x00780270);
    /* 00780270: mov eax, edi */ r_eax = r_edi;
    /* 00780272: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00780275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00780276: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00780277: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00780278: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00780279: ret  */ FN_RET(0x0078005a); r_esp += 4; return;
L_0078027a:; BB(0x0078027a);
    /* 0078027a: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0078027e: jmp 0x7801a8 */ goto L_007801a8;
}

void f_0078005b(void)
{
    FN_ENTER(0x0078005b);
    /* 0078005b: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0078005d: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 0078005e: and al, 0x44 */ {  u32 a = (u8)r_eax; u32 b = 0x44u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00780060: fld dword ptr [0x979924] */ FPUSH(R_F32((u32)(0x979924u)));
    /* 00780066: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0078006a: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 0078006c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078006e: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00780072: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00780073: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00780076: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x78007bu); f_0082dc9c();
    /* 0078007b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078007d: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00780080: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00780083: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780085: je 0x7801a8 */ if (fZ) goto L_007801a8;
L_0078008b:; BB(0x0078008b);
    /* 0078008b: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078008f: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00780093: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
L_00780097:; BB(0x00780097);
    /* 00780097: test dword ptr [edx + 0x14], ecx */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078009a: je 0x780197 */ if (fZ) goto L_00780197;
L_007800a0:; BB(0x007800a0);
    /* 007800a0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007800a4: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800a7: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 007800a9: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 007800ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800ae: fst dword ptr [0xaab4f0] */ W_F32((u32)(0xaab4f0u), ST(0));
    /* 007800b4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800b8: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 007800bb: fst dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0));
    /* 007800c1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800c3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007800c5: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 007800c8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007800ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800cc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800ce: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007800d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007800d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007800d3: jae 0x7800dc */ if (!fC) goto L_007800dc;
L_007800d5:; BB(0x007800d5);
    /* 007800d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007800d7: jmp 0x780197 */ goto L_00780197;
L_007800dc:; BB(0x007800dc);
    /* 007800dc: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e0: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e4: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800e8: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800ec: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800ef: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007800f1: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007800f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800f6: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007800fa: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007800fc: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 007800fe: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00780101: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 00780103: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780105: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00780107: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00780109: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0078010b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078010d: fcom dword ptr [0x97992c] */ fx_compare(ST(0), R_F32((u32)(0x97992cu))); 
    /* 00780113: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780115: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780116: jbe 0x780166 */ if ((fC||fZ)) goto L_00780166;
L_00780118:; BB(0x00780118);
    /* 00780118: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 0078011c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078011e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078011f: jb 0x780144 */ if (fC) goto L_00780144;
L_00780121:; BB(0x00780121);
    /* 00780121: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780123: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780125: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780127: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780129: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078012b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0078012f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00780131: fsub dword ptr [esp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x38u));
    /* 00780135: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780137: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0078013a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0078013c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078013e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780140: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780142: jmp 0x780176 */ goto L_00780176;
L_00780144:; BB(0x00780144);
    /* 00780144: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780146: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0078014a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078014c: fchs  */ ST(0) = -ST(0);
    /* 0078014e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00780150: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00780152: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780154: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780156: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780158: fchs  */ ST(0) = -ST(0);
    /* 0078015a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0078015c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078015e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780160: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780162: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780164: jmp 0x780176 */ goto L_00780176;
L_00780166:; BB(0x00780166);
    /* 00780166: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780168: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0078016a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078016c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0078016e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780170: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780172: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780174: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00780176:; BB(0x00780176);
    /* 00780176: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780178: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078017a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0078017c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078017e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078017f: jb 0x780197 */ if (fC) goto L_00780197;
L_00780181:; BB(0x00780181);
    /* 00780181: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780184: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078018a: jge 0x78027a */ if ((fS==fO)) goto L_0078027a;
L_00780190:; BB(0x00780190);
    /* 00780190: mov eax, ebp */ r_eax = r_ebp;
    /* 00780192: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00780195: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00780197:; BB(0x00780197);
    /* 00780197: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780199: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078019c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078019e: jne 0x780097 */ if (!fZ) goto L_00780097;
L_007801a4:; BB(0x007801a4);
    /* 007801a4: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_007801a8:; BB(0x007801a8);
    /* 007801a8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 007801af: mov eax, dword ptr [0xa9b500] */ r_eax = R32((u32)(0xa9b500u));
    /* 007801b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007801b6: jne 0x7801bf */ if (!fZ) goto L_007801bf;
L_007801b8:; BB(0x007801b8);
    /* 007801b8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007801ba: jmp 0x780270 */ goto L_00780270;
L_007801bf:; BB(0x007801bf);
    /* 007801bf: mov edx, dword ptr [0xa9bc88] */ r_edx = R32((u32)(0xa9bc88u));
    /* 007801c5: mov dword ptr [0xa9bc8c], 0xa9bc84 */ W32((u32)(0xa9bc8cu), 0xa9bc84u);
    /* 007801cf: mov ebx, 0xa9b500 */ r_ebx = 0xa9b500u;
    /* 007801d4: mov dword ptr [0xa9bc84], 0 */ W32((u32)(0xa9bc84u), 0x0u);
    /* 007801de: mov dword ptr [0xa9bc90], edx */ W32((u32)(0xa9bc90u), r_edx);
    /* 007801e4: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007801e8: mov dword ptr [0xa9bc94], 0x40000000 */ W32((u32)(0xa9bc94u), 0x40000000u);
    /* 007801f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007801f3: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 007801f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007801f8: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007801fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007801fd: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780202u); f_007a8c4c();
    /* 00780202: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00780205: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780207: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780209: je 0x780263 */ if (fZ) goto L_00780263;
L_0078020b:; BB(0x0078020b);
    /* 0078020b: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0078020f: mov eax, ebx */ r_eax = r_ebx;
    /* 00780211: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
L_00780215:; BB(0x00780215);
    /* 00780215: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00780217: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0078021a: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0078021d: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 00780220: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780222: je 0x780255 */ if (fZ) goto L_00780255;
L_00780224:; BB(0x00780224);
    /* 00780224: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_00780228:; BB(0x00780228);
    /* 00780228: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078022c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00780234: mov edx, esi */ r_edx = r_esi;
    /* 00780236: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780239: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0078023d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00780241: mov eax, ebx */ r_eax = r_ebx;
    /* 00780243: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00780247: call 0x780284 */ r_esp -= 4; W32(r_esp, 0x78024cu); f_00780284();
    /* 0078024c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0078024f: jne 0x780228 */ if (!fZ) goto L_00780228;
L_00780251:; BB(0x00780251);
    /* 00780251: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
L_00780255:; BB(0x00780255);
    /* 00780255: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00780258: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078025b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078025d: jne 0x780215 */ if (!fZ) goto L_00780215;
L_0078025f:; BB(0x0078025f);
    /* 0078025f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_00780263:; BB(0x00780263);
    /* 00780263: mov eax, dword ptr [0xa9bc8c] */ r_eax = R32((u32)(0xa9bc8cu));
    /* 00780268: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078026a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078026c: jne 0x780270 */ if (!fZ) goto L_00780270;
L_0078026e:; BB(0x0078026e);
    /* 0078026e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00780270:; BB(0x00780270);
    /* 00780270: mov eax, edi */ r_eax = r_edi;
    /* 00780272: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00780275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00780276: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00780277: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00780278: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00780279: ret  */ FN_RET(0x0078005b); r_esp += 4; return;
L_0078027a:; BB(0x0078027a);
    /* 0078027a: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0078027e: jmp 0x7801a8 */ goto L_007801a8;
}

void f_00780068(void)
{
    FN_ENTER(0x00780068);
    /* 00780068: and al, 0x44 */ {  u32 a = (u8)r_eax; u32 b = 0x44u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0078006a: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 0078006c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078006e: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00780072: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00780073: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00780076: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x78007bu); f_0082dc9c();
    /* 0078007b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078007d: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00780080: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00780083: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780085: je 0x7801a8 */ if (fZ) goto L_007801a8;
L_0078008b:; BB(0x0078008b);
    /* 0078008b: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078008f: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00780093: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
L_00780097:; BB(0x00780097);
    /* 00780097: test dword ptr [edx + 0x14], ecx */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078009a: je 0x780197 */ if (fZ) goto L_00780197;
L_007800a0:; BB(0x007800a0);
    /* 007800a0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007800a4: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800a7: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 007800a9: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 007800ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800ae: fst dword ptr [0xaab4f0] */ W_F32((u32)(0xaab4f0u), ST(0));
    /* 007800b4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800b8: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 007800bb: fst dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0));
    /* 007800c1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800c3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007800c5: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 007800c8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007800ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800cc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800ce: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007800d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007800d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007800d3: jae 0x7800dc */ if (!fC) goto L_007800dc;
L_007800d5:; BB(0x007800d5);
    /* 007800d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007800d7: jmp 0x780197 */ goto L_00780197;
L_007800dc:; BB(0x007800dc);
    /* 007800dc: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e0: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e4: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800e8: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800ec: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800ef: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007800f1: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007800f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800f6: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007800fa: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007800fc: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 007800fe: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00780101: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 00780103: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780105: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00780107: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00780109: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0078010b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078010d: fcom dword ptr [0x97992c] */ fx_compare(ST(0), R_F32((u32)(0x97992cu))); 
    /* 00780113: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780115: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780116: jbe 0x780166 */ if ((fC||fZ)) goto L_00780166;
L_00780118:; BB(0x00780118);
    /* 00780118: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 0078011c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078011e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078011f: jb 0x780144 */ if (fC) goto L_00780144;
L_00780121:; BB(0x00780121);
    /* 00780121: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780123: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780125: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780127: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780129: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078012b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0078012f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00780131: fsub dword ptr [esp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x38u));
    /* 00780135: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780137: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0078013a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0078013c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078013e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780140: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780142: jmp 0x780176 */ goto L_00780176;
L_00780144:; BB(0x00780144);
    /* 00780144: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780146: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0078014a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078014c: fchs  */ ST(0) = -ST(0);
    /* 0078014e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00780150: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00780152: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780154: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780156: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780158: fchs  */ ST(0) = -ST(0);
    /* 0078015a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0078015c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078015e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780160: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780162: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780164: jmp 0x780176 */ goto L_00780176;
L_00780166:; BB(0x00780166);
    /* 00780166: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780168: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0078016a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078016c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0078016e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780170: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780172: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780174: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00780176:; BB(0x00780176);
    /* 00780176: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780178: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078017a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0078017c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078017e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078017f: jb 0x780197 */ if (fC) goto L_00780197;
L_00780181:; BB(0x00780181);
    /* 00780181: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780184: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078018a: jge 0x78027a */ if ((fS==fO)) goto L_0078027a;
L_00780190:; BB(0x00780190);
    /* 00780190: mov eax, ebp */ r_eax = r_ebp;
    /* 00780192: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00780195: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00780197:; BB(0x00780197);
    /* 00780197: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780199: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078019c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078019e: jne 0x780097 */ if (!fZ) goto L_00780097;
L_007801a4:; BB(0x007801a4);
    /* 007801a4: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_007801a8:; BB(0x007801a8);
    /* 007801a8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 007801af: mov eax, dword ptr [0xa9b500] */ r_eax = R32((u32)(0xa9b500u));
    /* 007801b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007801b6: jne 0x7801bf */ if (!fZ) goto L_007801bf;
L_007801b8:; BB(0x007801b8);
    /* 007801b8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007801ba: jmp 0x780270 */ goto L_00780270;
L_007801bf:; BB(0x007801bf);
    /* 007801bf: mov edx, dword ptr [0xa9bc88] */ r_edx = R32((u32)(0xa9bc88u));
    /* 007801c5: mov dword ptr [0xa9bc8c], 0xa9bc84 */ W32((u32)(0xa9bc8cu), 0xa9bc84u);
    /* 007801cf: mov ebx, 0xa9b500 */ r_ebx = 0xa9b500u;
    /* 007801d4: mov dword ptr [0xa9bc84], 0 */ W32((u32)(0xa9bc84u), 0x0u);
    /* 007801de: mov dword ptr [0xa9bc90], edx */ W32((u32)(0xa9bc90u), r_edx);
    /* 007801e4: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007801e8: mov dword ptr [0xa9bc94], 0x40000000 */ W32((u32)(0xa9bc94u), 0x40000000u);
    /* 007801f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007801f3: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 007801f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007801f8: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007801fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007801fd: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780202u); f_007a8c4c();
    /* 00780202: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00780205: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780207: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780209: je 0x780263 */ if (fZ) goto L_00780263;
L_0078020b:; BB(0x0078020b);
    /* 0078020b: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0078020f: mov eax, ebx */ r_eax = r_ebx;
    /* 00780211: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
L_00780215:; BB(0x00780215);
    /* 00780215: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00780217: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0078021a: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0078021d: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 00780220: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780222: je 0x780255 */ if (fZ) goto L_00780255;
L_00780224:; BB(0x00780224);
    /* 00780224: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_00780228:; BB(0x00780228);
    /* 00780228: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078022c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00780234: mov edx, esi */ r_edx = r_esi;
    /* 00780236: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780239: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0078023d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00780241: mov eax, ebx */ r_eax = r_ebx;
    /* 00780243: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00780247: call 0x780284 */ r_esp -= 4; W32(r_esp, 0x78024cu); f_00780284();
    /* 0078024c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0078024f: jne 0x780228 */ if (!fZ) goto L_00780228;
L_00780251:; BB(0x00780251);
    /* 00780251: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
L_00780255:; BB(0x00780255);
    /* 00780255: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00780258: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078025b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078025d: jne 0x780215 */ if (!fZ) goto L_00780215;
L_0078025f:; BB(0x0078025f);
    /* 0078025f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_00780263:; BB(0x00780263);
    /* 00780263: mov eax, dword ptr [0xa9bc8c] */ r_eax = R32((u32)(0xa9bc8cu));
    /* 00780268: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078026a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078026c: jne 0x780270 */ if (!fZ) goto L_00780270;
L_0078026e:; BB(0x0078026e);
    /* 0078026e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00780270:; BB(0x00780270);
    /* 00780270: mov eax, edi */ r_eax = r_edi;
    /* 00780272: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00780275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00780276: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00780277: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00780278: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00780279: ret  */ FN_RET(0x00780068); r_esp += 4; return;
L_0078027a:; BB(0x0078027a);
    /* 0078027a: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0078027e: jmp 0x7801a8 */ goto L_007801a8;
}

void f_0078007a(void)
{
    FN_ENTER(0x0078007a);
    /* 0078007a: add ch, bl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0078007c: fmul dword ptr [ebx - 0x3c7ce3ad] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0xc3831c53u));
    /* 00780082: and byte ptr [ebp + 0x1d840fd2], al */ { u32 ad = (u32)(r_ebp+0x1d840fd2u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 00780088: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0078008a: add byte ptr [ebx - 0x769bdbb4], cl */ { u32 ad = (u32)(r_ebx+0x8964244cu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fS = ((r >> 7) & 1); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; }
    /* 00780090: jl 0x7800b6 */ if ((fS!=fO)) goto L_007800b6;
L_00780092:; BB(0x00780092);
    /* 00780092: xor byte ptr [ebx - 0x7aa3db84], cl */ { u32 ad = (u32)(r_ebx+0x855c247cu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a ^ b) & 0xffu; W8(ad, r); fC = 0; }
L_00780097:; BB(0x00780097);
    /* 00780097: test dword ptr [edx + 0x14], ecx */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780098: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00780099: adc al, 0xf */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0078009a: je 0x780197 */ if (fZ) goto L_00780197;
    /* 0078009b: test bh, dh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;   }
    /* 0078009d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0078009f: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
L_007800a0:; BB(0x007800a0);
    /* 007800a0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007800a1: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007800a2: and al, 0x3c */ {  u32 a = (u8)r_eax; u32 b = 0x3cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 007800a4: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800a7: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 007800a9: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 007800ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800ae: fst dword ptr [0xaab4f0] */ W_F32((u32)(0xaab4f0u), ST(0));
    /* 007800b4: fmul st(0) */ ST(0) = ST(0) * ST(0);
L_007800b6:; BB(0x007800b6);
    /* 007800b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800b8: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 007800bb: fst dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0));
    /* 007800c1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800c3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007800c5: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 007800c8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007800ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800cc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800ce: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007800d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007800d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007800d3: jae 0x7800dc */ if (!fC) goto L_007800dc;
L_007800d5:; BB(0x007800d5);
    /* 007800d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007800d7: jmp 0x780197 */ goto L_00780197;
L_007800dc:; BB(0x007800dc);
    /* 007800dc: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e0: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e4: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800e8: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800ec: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800ef: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007800f1: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007800f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800f6: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007800fa: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007800fc: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 007800fe: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00780101: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 00780103: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780105: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00780107: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00780109: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0078010b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078010d: fcom dword ptr [0x97992c] */ fx_compare(ST(0), R_F32((u32)(0x97992cu))); 
    /* 00780113: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780115: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780116: jbe 0x780166 */ if ((fC||fZ)) goto L_00780166;
L_00780118:; BB(0x00780118);
    /* 00780118: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 0078011c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078011e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078011f: jb 0x780144 */ if (fC) goto L_00780144;
L_00780121:; BB(0x00780121);
    /* 00780121: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780123: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780125: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780127: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780129: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078012b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0078012f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00780131: fsub dword ptr [esp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x38u));
    /* 00780135: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780137: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0078013a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0078013c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078013e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780140: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780142: jmp 0x780176 */ goto L_00780176;
L_00780144:; BB(0x00780144);
    /* 00780144: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780146: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0078014a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078014c: fchs  */ ST(0) = -ST(0);
    /* 0078014e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00780150: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00780152: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780154: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780156: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780158: fchs  */ ST(0) = -ST(0);
    /* 0078015a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0078015c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078015e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780160: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780162: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780164: jmp 0x780176 */ goto L_00780176;
L_00780166:; BB(0x00780166);
    /* 00780166: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780168: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0078016a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078016c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0078016e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780170: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780172: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780174: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00780176:; BB(0x00780176);
    /* 00780176: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780178: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078017a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0078017c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078017e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078017f: jb 0x780197 */ if (fC) goto L_00780197;
L_00780181:; BB(0x00780181);
    /* 00780181: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780184: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078018a: jge 0x78027a */ if ((fS==fO)) goto L_0078027a;
L_00780190:; BB(0x00780190);
    /* 00780190: mov eax, ebp */ r_eax = r_ebp;
    /* 00780192: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00780195: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00780197:; BB(0x00780197);
    /* 00780197: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780199: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078019c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078019e: jne 0x780097 */ if (!fZ) goto L_00780097;
L_007801a4:; BB(0x007801a4);
    /* 007801a4: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_007801a8:; BB(0x007801a8);
    /* 007801a8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 007801af: mov eax, dword ptr [0xa9b500] */ r_eax = R32((u32)(0xa9b500u));
    /* 007801b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007801b6: jne 0x7801bf */ if (!fZ) goto L_007801bf;
L_007801b8:; BB(0x007801b8);
    /* 007801b8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007801ba: jmp 0x780270 */ goto L_00780270;
L_007801bf:; BB(0x007801bf);
    /* 007801bf: mov edx, dword ptr [0xa9bc88] */ r_edx = R32((u32)(0xa9bc88u));
    /* 007801c5: mov dword ptr [0xa9bc8c], 0xa9bc84 */ W32((u32)(0xa9bc8cu), 0xa9bc84u);
    /* 007801cf: mov ebx, 0xa9b500 */ r_ebx = 0xa9b500u;
    /* 007801d4: mov dword ptr [0xa9bc84], 0 */ W32((u32)(0xa9bc84u), 0x0u);
    /* 007801de: mov dword ptr [0xa9bc90], edx */ W32((u32)(0xa9bc90u), r_edx);
    /* 007801e4: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007801e8: mov dword ptr [0xa9bc94], 0x40000000 */ W32((u32)(0xa9bc94u), 0x40000000u);
    /* 007801f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007801f3: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 007801f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007801f8: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007801fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007801fd: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780202u); f_007a8c4c();
    /* 00780202: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00780205: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780207: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780209: je 0x780263 */ if (fZ) goto L_00780263;
L_0078020b:; BB(0x0078020b);
    /* 0078020b: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0078020f: mov eax, ebx */ r_eax = r_ebx;
    /* 00780211: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
L_00780215:; BB(0x00780215);
    /* 00780215: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00780217: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0078021a: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0078021d: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 00780220: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780222: je 0x780255 */ if (fZ) goto L_00780255;
L_00780224:; BB(0x00780224);
    /* 00780224: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_00780228:; BB(0x00780228);
    /* 00780228: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078022c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00780234: mov edx, esi */ r_edx = r_esi;
    /* 00780236: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780239: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0078023d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00780241: mov eax, ebx */ r_eax = r_ebx;
    /* 00780243: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00780247: call 0x780284 */ r_esp -= 4; W32(r_esp, 0x78024cu); f_00780284();
    /* 0078024c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0078024f: jne 0x780228 */ if (!fZ) goto L_00780228;
L_00780251:; BB(0x00780251);
    /* 00780251: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
L_00780255:; BB(0x00780255);
    /* 00780255: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00780258: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078025b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078025d: jne 0x780215 */ if (!fZ) goto L_00780215;
L_0078025f:; BB(0x0078025f);
    /* 0078025f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_00780263:; BB(0x00780263);
    /* 00780263: mov eax, dword ptr [0xa9bc8c] */ r_eax = R32((u32)(0xa9bc8cu));
    /* 00780268: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078026a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078026c: jne 0x780270 */ if (!fZ) goto L_00780270;
L_0078026e:; BB(0x0078026e);
    /* 0078026e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00780270:; BB(0x00780270);
    /* 00780270: mov eax, edi */ r_eax = r_edi;
    /* 00780272: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00780275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00780276: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00780277: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00780278: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00780279: ret  */ FN_RET(0x0078007a); r_esp += 4; return;
L_0078027a:; BB(0x0078027a);
    /* 0078027a: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0078027e: jmp 0x7801a8 */ goto L_007801a8;
}

void f_0078007b(void)
{
    FN_ENTER(0x0078007b);
    /* 0078007b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078007d: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00780080: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00780083: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780085: je 0x7801a8 */ if (fZ) goto L_007801a8;
L_0078008b:; BB(0x0078008b);
    /* 0078008b: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078008f: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00780093: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
L_00780097:; BB(0x00780097);
    /* 00780097: test dword ptr [edx + 0x14], ecx */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078009a: je 0x780197 */ if (fZ) goto L_00780197;
L_007800a0:; BB(0x007800a0);
    /* 007800a0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007800a4: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800a7: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 007800a9: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 007800ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800ae: fst dword ptr [0xaab4f0] */ W_F32((u32)(0xaab4f0u), ST(0));
    /* 007800b4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800b8: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 007800bb: fst dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0));
    /* 007800c1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800c3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007800c5: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 007800c8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007800ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800cc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800ce: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007800d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007800d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007800d3: jae 0x7800dc */ if (!fC) goto L_007800dc;
L_007800d5:; BB(0x007800d5);
    /* 007800d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007800d7: jmp 0x780197 */ goto L_00780197;
L_007800dc:; BB(0x007800dc);
    /* 007800dc: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e0: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e4: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800e8: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800ec: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800ef: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007800f1: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007800f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800f6: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007800fa: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007800fc: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 007800fe: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00780101: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 00780103: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780105: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00780107: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00780109: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0078010b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078010d: fcom dword ptr [0x97992c] */ fx_compare(ST(0), R_F32((u32)(0x97992cu))); 
    /* 00780113: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780115: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780116: jbe 0x780166 */ if ((fC||fZ)) goto L_00780166;
L_00780118:; BB(0x00780118);
    /* 00780118: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 0078011c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078011e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078011f: jb 0x780144 */ if (fC) goto L_00780144;
L_00780121:; BB(0x00780121);
    /* 00780121: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780123: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780125: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780127: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780129: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078012b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0078012f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00780131: fsub dword ptr [esp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x38u));
    /* 00780135: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780137: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0078013a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0078013c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078013e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780140: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780142: jmp 0x780176 */ goto L_00780176;
L_00780144:; BB(0x00780144);
    /* 00780144: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780146: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0078014a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078014c: fchs  */ ST(0) = -ST(0);
    /* 0078014e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00780150: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00780152: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780154: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780156: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780158: fchs  */ ST(0) = -ST(0);
    /* 0078015a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0078015c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078015e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780160: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780162: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780164: jmp 0x780176 */ goto L_00780176;
L_00780166:; BB(0x00780166);
    /* 00780166: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780168: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0078016a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078016c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0078016e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780170: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780172: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780174: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00780176:; BB(0x00780176);
    /* 00780176: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780178: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078017a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0078017c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078017e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078017f: jb 0x780197 */ if (fC) goto L_00780197;
L_00780181:; BB(0x00780181);
    /* 00780181: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780184: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078018a: jge 0x78027a */ if ((fS==fO)) goto L_0078027a;
L_00780190:; BB(0x00780190);
    /* 00780190: mov eax, ebp */ r_eax = r_ebp;
    /* 00780192: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00780195: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00780197:; BB(0x00780197);
    /* 00780197: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780199: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078019c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078019e: jne 0x780097 */ if (!fZ) goto L_00780097;
L_007801a4:; BB(0x007801a4);
    /* 007801a4: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_007801a8:; BB(0x007801a8);
    /* 007801a8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 007801af: mov eax, dword ptr [0xa9b500] */ r_eax = R32((u32)(0xa9b500u));
    /* 007801b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007801b6: jne 0x7801bf */ if (!fZ) goto L_007801bf;
L_007801b8:; BB(0x007801b8);
    /* 007801b8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007801ba: jmp 0x780270 */ goto L_00780270;
L_007801bf:; BB(0x007801bf);
    /* 007801bf: mov edx, dword ptr [0xa9bc88] */ r_edx = R32((u32)(0xa9bc88u));
    /* 007801c5: mov dword ptr [0xa9bc8c], 0xa9bc84 */ W32((u32)(0xa9bc8cu), 0xa9bc84u);
    /* 007801cf: mov ebx, 0xa9b500 */ r_ebx = 0xa9b500u;
    /* 007801d4: mov dword ptr [0xa9bc84], 0 */ W32((u32)(0xa9bc84u), 0x0u);
    /* 007801de: mov dword ptr [0xa9bc90], edx */ W32((u32)(0xa9bc90u), r_edx);
    /* 007801e4: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007801e8: mov dword ptr [0xa9bc94], 0x40000000 */ W32((u32)(0xa9bc94u), 0x40000000u);
    /* 007801f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007801f3: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 007801f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007801f8: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007801fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007801fd: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780202u); f_007a8c4c();
    /* 00780202: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00780205: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780207: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780209: je 0x780263 */ if (fZ) goto L_00780263;
L_0078020b:; BB(0x0078020b);
    /* 0078020b: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0078020f: mov eax, ebx */ r_eax = r_ebx;
    /* 00780211: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
L_00780215:; BB(0x00780215);
    /* 00780215: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00780217: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0078021a: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0078021d: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 00780220: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780222: je 0x780255 */ if (fZ) goto L_00780255;
L_00780224:; BB(0x00780224);
    /* 00780224: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_00780228:; BB(0x00780228);
    /* 00780228: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078022c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00780234: mov edx, esi */ r_edx = r_esi;
    /* 00780236: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780239: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0078023d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00780241: mov eax, ebx */ r_eax = r_ebx;
    /* 00780243: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00780247: call 0x780284 */ r_esp -= 4; W32(r_esp, 0x78024cu); f_00780284();
    /* 0078024c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0078024f: jne 0x780228 */ if (!fZ) goto L_00780228;
L_00780251:; BB(0x00780251);
    /* 00780251: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
L_00780255:; BB(0x00780255);
    /* 00780255: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00780258: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078025b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078025d: jne 0x780215 */ if (!fZ) goto L_00780215;
L_0078025f:; BB(0x0078025f);
    /* 0078025f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_00780263:; BB(0x00780263);
    /* 00780263: mov eax, dword ptr [0xa9bc8c] */ r_eax = R32((u32)(0xa9bc8cu));
    /* 00780268: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078026a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078026c: jne 0x780270 */ if (!fZ) goto L_00780270;
L_0078026e:; BB(0x0078026e);
    /* 0078026e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00780270:; BB(0x00780270);
    /* 00780270: mov eax, edi */ r_eax = r_edi;
    /* 00780272: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00780275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00780276: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00780277: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00780278: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00780279: ret  */ FN_RET(0x0078007b); r_esp += 4; return;
L_0078027a:; BB(0x0078027a);
    /* 0078027a: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0078027e: jmp 0x7801a8 */ goto L_007801a8;
}

void f_00780096(void)
{
    FN_ENTER(0x00780096);
    /* 00780096: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
L_00780097:; BB(0x00780097);
    /* 00780097: test dword ptr [edx + 0x14], ecx */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078009a: je 0x780197 */ if (fZ) goto L_00780197;
L_007800a0:; BB(0x007800a0);
    /* 007800a0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007800a4: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800a7: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 007800a9: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 007800ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800ae: fst dword ptr [0xaab4f0] */ W_F32((u32)(0xaab4f0u), ST(0));
    /* 007800b4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800b8: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 007800bb: fst dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0));
    /* 007800c1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800c3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007800c5: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 007800c8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007800ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800cc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800ce: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007800d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007800d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007800d3: jae 0x7800dc */ if (!fC) goto L_007800dc;
L_007800d5:; BB(0x007800d5);
    /* 007800d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007800d7: jmp 0x780197 */ goto L_00780197;
L_007800dc:; BB(0x007800dc);
    /* 007800dc: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e0: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e4: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800e8: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800ec: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800ef: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007800f1: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007800f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800f6: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007800fa: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007800fc: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 007800fe: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00780101: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 00780103: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780105: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00780107: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00780109: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0078010b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078010d: fcom dword ptr [0x97992c] */ fx_compare(ST(0), R_F32((u32)(0x97992cu))); 
    /* 00780113: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780115: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780116: jbe 0x780166 */ if ((fC||fZ)) goto L_00780166;
L_00780118:; BB(0x00780118);
    /* 00780118: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 0078011c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078011e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078011f: jb 0x780144 */ if (fC) goto L_00780144;
L_00780121:; BB(0x00780121);
    /* 00780121: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780123: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780125: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780127: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780129: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078012b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0078012f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00780131: fsub dword ptr [esp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x38u));
    /* 00780135: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780137: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0078013a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0078013c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078013e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780140: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780142: jmp 0x780176 */ goto L_00780176;
L_00780144:; BB(0x00780144);
    /* 00780144: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780146: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0078014a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078014c: fchs  */ ST(0) = -ST(0);
    /* 0078014e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00780150: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00780152: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780154: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780156: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780158: fchs  */ ST(0) = -ST(0);
    /* 0078015a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0078015c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078015e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780160: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780162: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780164: jmp 0x780176 */ goto L_00780176;
L_00780166:; BB(0x00780166);
    /* 00780166: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780168: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0078016a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078016c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0078016e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780170: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780172: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780174: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00780176:; BB(0x00780176);
    /* 00780176: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780178: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078017a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0078017c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078017e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078017f: jb 0x780197 */ if (fC) goto L_00780197;
L_00780181:; BB(0x00780181);
    /* 00780181: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780184: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078018a: jge 0x78027a */ if ((fS==fO)) goto L_0078027a;
L_00780190:; BB(0x00780190);
    /* 00780190: mov eax, ebp */ r_eax = r_ebp;
    /* 00780192: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00780195: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00780197:; BB(0x00780197);
    /* 00780197: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780199: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078019c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078019e: jne 0x780097 */ if (!fZ) goto L_00780097;
L_007801a4:; BB(0x007801a4);
    /* 007801a4: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_007801a8:; BB(0x007801a8);
    /* 007801a8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 007801af: mov eax, dword ptr [0xa9b500] */ r_eax = R32((u32)(0xa9b500u));
    /* 007801b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007801b6: jne 0x7801bf */ if (!fZ) goto L_007801bf;
L_007801b8:; BB(0x007801b8);
    /* 007801b8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007801ba: jmp 0x780270 */ goto L_00780270;
L_007801bf:; BB(0x007801bf);
    /* 007801bf: mov edx, dword ptr [0xa9bc88] */ r_edx = R32((u32)(0xa9bc88u));
    /* 007801c5: mov dword ptr [0xa9bc8c], 0xa9bc84 */ W32((u32)(0xa9bc8cu), 0xa9bc84u);
    /* 007801cf: mov ebx, 0xa9b500 */ r_ebx = 0xa9b500u;
    /* 007801d4: mov dword ptr [0xa9bc84], 0 */ W32((u32)(0xa9bc84u), 0x0u);
    /* 007801de: mov dword ptr [0xa9bc90], edx */ W32((u32)(0xa9bc90u), r_edx);
    /* 007801e4: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007801e8: mov dword ptr [0xa9bc94], 0x40000000 */ W32((u32)(0xa9bc94u), 0x40000000u);
    /* 007801f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007801f3: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 007801f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007801f8: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007801fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007801fd: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780202u); f_007a8c4c();
    /* 00780202: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00780205: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780207: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780209: je 0x780263 */ if (fZ) goto L_00780263;
L_0078020b:; BB(0x0078020b);
    /* 0078020b: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0078020f: mov eax, ebx */ r_eax = r_ebx;
    /* 00780211: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
L_00780215:; BB(0x00780215);
    /* 00780215: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00780217: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0078021a: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0078021d: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 00780220: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780222: je 0x780255 */ if (fZ) goto L_00780255;
L_00780224:; BB(0x00780224);
    /* 00780224: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_00780228:; BB(0x00780228);
    /* 00780228: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078022c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00780234: mov edx, esi */ r_edx = r_esi;
    /* 00780236: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780239: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0078023d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00780241: mov eax, ebx */ r_eax = r_ebx;
    /* 00780243: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00780247: call 0x780284 */ r_esp -= 4; W32(r_esp, 0x78024cu); f_00780284();
    /* 0078024c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0078024f: jne 0x780228 */ if (!fZ) goto L_00780228;
L_00780251:; BB(0x00780251);
    /* 00780251: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
L_00780255:; BB(0x00780255);
    /* 00780255: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00780258: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078025b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078025d: jne 0x780215 */ if (!fZ) goto L_00780215;
L_0078025f:; BB(0x0078025f);
    /* 0078025f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_00780263:; BB(0x00780263);
    /* 00780263: mov eax, dword ptr [0xa9bc8c] */ r_eax = R32((u32)(0xa9bc8cu));
    /* 00780268: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078026a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078026c: jne 0x780270 */ if (!fZ) goto L_00780270;
L_0078026e:; BB(0x0078026e);
    /* 0078026e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00780270:; BB(0x00780270);
    /* 00780270: mov eax, edi */ r_eax = r_edi;
    /* 00780272: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00780275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00780276: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00780277: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00780278: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00780279: ret  */ FN_RET(0x00780096); r_esp += 4; return;
L_0078027a:; BB(0x0078027a);
    /* 0078027a: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0078027e: jmp 0x7801a8 */ goto L_007801a8;
}

void f_0078009b(void)
{
    FN_ENTER(0x0078009b);
    goto L_0078009b;
L_00780097:; BB(0x00780097);
    /* 00780097: test dword ptr [edx + 0x14], ecx */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078009a: je 0x780197 */ if (fZ) goto L_00780197;
L_0078009b:; BB(0x0078009b);
    /* 0078009b: test bh, dh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;   }
    /* 0078009d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0078009f: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
L_007800a0:; BB(0x007800a0);
    /* 007800a0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007800a1: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007800a2: and al, 0x3c */ {  u32 a = (u8)r_eax; u32 b = 0x3cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 007800a4: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800a7: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 007800a9: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 007800ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800ae: fst dword ptr [0xaab4f0] */ W_F32((u32)(0xaab4f0u), ST(0));
    /* 007800b4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800b8: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 007800bb: fst dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0));
    /* 007800c1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800c3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007800c5: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 007800c8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007800ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800cc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800ce: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007800d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007800d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007800d3: jae 0x7800dc */ if (!fC) goto L_007800dc;
L_007800d5:; BB(0x007800d5);
    /* 007800d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007800d7: jmp 0x780197 */ goto L_00780197;
L_007800dc:; BB(0x007800dc);
    /* 007800dc: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e0: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e4: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800e8: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800ec: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800ef: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007800f1: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007800f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800f6: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007800fa: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007800fc: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 007800fe: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00780101: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 00780103: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780105: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00780107: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00780109: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0078010b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078010d: fcom dword ptr [0x97992c] */ fx_compare(ST(0), R_F32((u32)(0x97992cu))); 
    /* 00780113: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780115: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780116: jbe 0x780166 */ if ((fC||fZ)) goto L_00780166;
L_00780118:; BB(0x00780118);
    /* 00780118: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 0078011c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078011e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078011f: jb 0x780144 */ if (fC) goto L_00780144;
L_00780121:; BB(0x00780121);
    /* 00780121: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780123: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780125: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780127: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780129: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078012b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0078012f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00780131: fsub dword ptr [esp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x38u));
    /* 00780135: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780137: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0078013a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0078013c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078013e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780140: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780142: jmp 0x780176 */ goto L_00780176;
L_00780144:; BB(0x00780144);
    /* 00780144: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780146: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0078014a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078014c: fchs  */ ST(0) = -ST(0);
    /* 0078014e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00780150: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00780152: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780154: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780156: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780158: fchs  */ ST(0) = -ST(0);
    /* 0078015a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0078015c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078015e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780160: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780162: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780164: jmp 0x780176 */ goto L_00780176;
L_00780166:; BB(0x00780166);
    /* 00780166: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780168: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0078016a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078016c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0078016e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780170: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780172: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780174: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00780176:; BB(0x00780176);
    /* 00780176: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780178: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078017a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0078017c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078017e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078017f: jb 0x780197 */ if (fC) goto L_00780197;
L_00780181:; BB(0x00780181);
    /* 00780181: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780184: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078018a: jge 0x78027a */ if ((fS==fO)) goto L_0078027a;
L_00780190:; BB(0x00780190);
    /* 00780190: mov eax, ebp */ r_eax = r_ebp;
    /* 00780192: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00780195: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00780197:; BB(0x00780197);
    /* 00780197: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780199: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078019c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078019e: jne 0x780097 */ if (!fZ) goto L_00780097;
L_007801a4:; BB(0x007801a4);
    /* 007801a4: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_007801a8:; BB(0x007801a8);
    /* 007801a8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 007801af: mov eax, dword ptr [0xa9b500] */ r_eax = R32((u32)(0xa9b500u));
    /* 007801b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007801b6: jne 0x7801bf */ if (!fZ) goto L_007801bf;
L_007801b8:; BB(0x007801b8);
    /* 007801b8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007801ba: jmp 0x780270 */ goto L_00780270;
L_007801bf:; BB(0x007801bf);
    /* 007801bf: mov edx, dword ptr [0xa9bc88] */ r_edx = R32((u32)(0xa9bc88u));
    /* 007801c5: mov dword ptr [0xa9bc8c], 0xa9bc84 */ W32((u32)(0xa9bc8cu), 0xa9bc84u);
    /* 007801cf: mov ebx, 0xa9b500 */ r_ebx = 0xa9b500u;
    /* 007801d4: mov dword ptr [0xa9bc84], 0 */ W32((u32)(0xa9bc84u), 0x0u);
    /* 007801de: mov dword ptr [0xa9bc90], edx */ W32((u32)(0xa9bc90u), r_edx);
    /* 007801e4: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007801e8: mov dword ptr [0xa9bc94], 0x40000000 */ W32((u32)(0xa9bc94u), 0x40000000u);
    /* 007801f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007801f3: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 007801f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007801f8: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007801fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007801fd: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780202u); f_007a8c4c();
    /* 00780202: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00780205: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780207: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780209: je 0x780263 */ if (fZ) goto L_00780263;
L_0078020b:; BB(0x0078020b);
    /* 0078020b: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0078020f: mov eax, ebx */ r_eax = r_ebx;
    /* 00780211: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
L_00780215:; BB(0x00780215);
    /* 00780215: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00780217: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0078021a: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0078021d: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 00780220: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780222: je 0x780255 */ if (fZ) goto L_00780255;
L_00780224:; BB(0x00780224);
    /* 00780224: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_00780228:; BB(0x00780228);
    /* 00780228: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078022c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00780234: mov edx, esi */ r_edx = r_esi;
    /* 00780236: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780239: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0078023d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00780241: mov eax, ebx */ r_eax = r_ebx;
    /* 00780243: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00780247: call 0x780284 */ r_esp -= 4; W32(r_esp, 0x78024cu); f_00780284();
    /* 0078024c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0078024f: jne 0x780228 */ if (!fZ) goto L_00780228;
L_00780251:; BB(0x00780251);
    /* 00780251: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
L_00780255:; BB(0x00780255);
    /* 00780255: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00780258: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078025b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078025d: jne 0x780215 */ if (!fZ) goto L_00780215;
L_0078025f:; BB(0x0078025f);
    /* 0078025f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_00780263:; BB(0x00780263);
    /* 00780263: mov eax, dword ptr [0xa9bc8c] */ r_eax = R32((u32)(0xa9bc8cu));
    /* 00780268: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078026a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078026c: jne 0x780270 */ if (!fZ) goto L_00780270;
L_0078026e:; BB(0x0078026e);
    /* 0078026e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00780270:; BB(0x00780270);
    /* 00780270: mov eax, edi */ r_eax = r_edi;
    /* 00780272: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00780275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00780276: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00780277: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00780278: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00780279: ret  */ FN_RET(0x0078009b); r_esp += 4; return;
L_0078027a:; BB(0x0078027a);
    /* 0078027a: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0078027e: jmp 0x7801a8 */ goto L_007801a8;
}

void f_007800fb(void)
{
    FN_ENTER(0x007800fb);
    goto L_007800fb;
L_00780097:; BB(0x00780097);
    /* 00780097: test dword ptr [edx + 0x14], ecx */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078009a: je 0x780197 */ if (fZ) goto L_00780197;
L_007800a0:; BB(0x007800a0);
    /* 007800a0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007800a4: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800a7: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 007800a9: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 007800ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800ae: fst dword ptr [0xaab4f0] */ W_F32((u32)(0xaab4f0u), ST(0));
    /* 007800b4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800b8: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 007800bb: fst dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0));
    /* 007800c1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800c3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007800c5: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 007800c8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007800ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800cc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800ce: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007800d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007800d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007800d3: jae 0x7800dc */ if (!fC) goto L_007800dc;
L_007800d5:; BB(0x007800d5);
    /* 007800d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007800d7: jmp 0x780197 */ goto L_00780197;
L_007800d9:; BB(0x007800d9);
    /* 007800d9: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007800db: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
L_007800dc:; BB(0x007800dc);
    /* 007800dc: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800dd: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007800de: and al, 0x18 */ {  u32 a = (u8)r_eax; u32 b = 0x18u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 007800e0: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e4: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800e8: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800ec: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800ef: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007800f1: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007800f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800f6: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007800fa: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
L_007800fb:; BB(0x007800fb);
    /* 007800fb: loope 0x7800d9 */ r_ecx--; if (r_ecx && fZ) goto L_007800d9;
    /* 007800fc: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 007800fd: int3  */ UNSUP(0x007800fd, "int3");
    /* 007800fe: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00780101: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 00780103: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780105: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00780107: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00780109: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0078010b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078010d: fcom dword ptr [0x97992c] */ fx_compare(ST(0), R_F32((u32)(0x97992cu))); 
    /* 00780113: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780115: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780116: jbe 0x780166 */ if ((fC||fZ)) goto L_00780166;
L_00780118:; BB(0x00780118);
    /* 00780118: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 0078011c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078011e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078011f: jb 0x780144 */ if (fC) goto L_00780144;
L_00780121:; BB(0x00780121);
    /* 00780121: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780123: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780125: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780127: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780129: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078012b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0078012f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00780131: fsub dword ptr [esp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x38u));
    /* 00780135: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780137: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0078013a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0078013c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078013e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780140: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780142: jmp 0x780176 */ goto L_00780176;
L_00780144:; BB(0x00780144);
    /* 00780144: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780146: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0078014a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078014c: fchs  */ ST(0) = -ST(0);
    /* 0078014e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00780150: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00780152: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780154: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780156: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780158: fchs  */ ST(0) = -ST(0);
    /* 0078015a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0078015c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078015e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780160: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780162: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780164: jmp 0x780176 */ goto L_00780176;
L_00780166:; BB(0x00780166);
    /* 00780166: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780168: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0078016a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078016c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0078016e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780170: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780172: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780174: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00780176:; BB(0x00780176);
    /* 00780176: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780178: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078017a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0078017c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078017e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078017f: jb 0x780197 */ if (fC) goto L_00780197;
L_00780181:; BB(0x00780181);
    /* 00780181: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780184: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078018a: jge 0x78027a */ if ((fS==fO)) goto L_0078027a;
L_00780190:; BB(0x00780190);
    /* 00780190: mov eax, ebp */ r_eax = r_ebp;
    /* 00780192: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00780195: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00780197:; BB(0x00780197);
    /* 00780197: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780199: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078019c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078019e: jne 0x780097 */ if (!fZ) goto L_00780097;
L_007801a4:; BB(0x007801a4);
    /* 007801a4: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_007801a8:; BB(0x007801a8);
    /* 007801a8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 007801af: mov eax, dword ptr [0xa9b500] */ r_eax = R32((u32)(0xa9b500u));
    /* 007801b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007801b6: jne 0x7801bf */ if (!fZ) goto L_007801bf;
L_007801b8:; BB(0x007801b8);
    /* 007801b8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007801ba: jmp 0x780270 */ goto L_00780270;
L_007801bf:; BB(0x007801bf);
    /* 007801bf: mov edx, dword ptr [0xa9bc88] */ r_edx = R32((u32)(0xa9bc88u));
    /* 007801c5: mov dword ptr [0xa9bc8c], 0xa9bc84 */ W32((u32)(0xa9bc8cu), 0xa9bc84u);
    /* 007801cf: mov ebx, 0xa9b500 */ r_ebx = 0xa9b500u;
    /* 007801d4: mov dword ptr [0xa9bc84], 0 */ W32((u32)(0xa9bc84u), 0x0u);
    /* 007801de: mov dword ptr [0xa9bc90], edx */ W32((u32)(0xa9bc90u), r_edx);
    /* 007801e4: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007801e8: mov dword ptr [0xa9bc94], 0x40000000 */ W32((u32)(0xa9bc94u), 0x40000000u);
    /* 007801f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007801f3: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 007801f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007801f8: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007801fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007801fd: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780202u); f_007a8c4c();
    /* 00780202: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00780205: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780207: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780209: je 0x780263 */ if (fZ) goto L_00780263;
L_0078020b:; BB(0x0078020b);
    /* 0078020b: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0078020f: mov eax, ebx */ r_eax = r_ebx;
    /* 00780211: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
L_00780215:; BB(0x00780215);
    /* 00780215: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00780217: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0078021a: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0078021d: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 00780220: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780222: je 0x780255 */ if (fZ) goto L_00780255;
L_00780224:; BB(0x00780224);
    /* 00780224: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_00780228:; BB(0x00780228);
    /* 00780228: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078022c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00780234: mov edx, esi */ r_edx = r_esi;
    /* 00780236: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780239: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0078023d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00780241: mov eax, ebx */ r_eax = r_ebx;
    /* 00780243: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00780247: call 0x780284 */ r_esp -= 4; W32(r_esp, 0x78024cu); f_00780284();
    /* 0078024c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0078024f: jne 0x780228 */ if (!fZ) goto L_00780228;
L_00780251:; BB(0x00780251);
    /* 00780251: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
L_00780255:; BB(0x00780255);
    /* 00780255: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00780258: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078025b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078025d: jne 0x780215 */ if (!fZ) goto L_00780215;
L_0078025f:; BB(0x0078025f);
    /* 0078025f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_00780263:; BB(0x00780263);
    /* 00780263: mov eax, dword ptr [0xa9bc8c] */ r_eax = R32((u32)(0xa9bc8cu));
    /* 00780268: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078026a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078026c: jne 0x780270 */ if (!fZ) goto L_00780270;
L_0078026e:; BB(0x0078026e);
    /* 0078026e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00780270:; BB(0x00780270);
    /* 00780270: mov eax, edi */ r_eax = r_edi;
    /* 00780272: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00780275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00780276: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00780277: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00780278: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00780279: ret  */ FN_RET(0x007800fb); r_esp += 4; return;
L_0078027a:; BB(0x0078027a);
    /* 0078027a: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0078027e: jmp 0x7801a8 */ goto L_007801a8;
}

void f_0078012c(void)
{
    FN_ENTER(0x0078012c);
    goto L_0078012c;
L_00780097:; BB(0x00780097);
    /* 00780097: test dword ptr [edx + 0x14], ecx */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078009a: je 0x780197 */ if (fZ) goto L_00780197;
L_007800a0:; BB(0x007800a0);
    /* 007800a0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007800a4: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800a7: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 007800a9: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 007800ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800ae: fst dword ptr [0xaab4f0] */ W_F32((u32)(0xaab4f0u), ST(0));
    /* 007800b4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007800b8: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 007800bb: fst dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0));
    /* 007800c1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800c3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007800c5: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 007800c8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007800ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800cc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007800ce: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007800d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007800d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007800d3: jae 0x7800dc */ if (!fC) goto L_007800dc;
L_007800d5:; BB(0x007800d5);
    /* 007800d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007800d7: jmp 0x780197 */ goto L_00780197;
L_007800dc:; BB(0x007800dc);
    /* 007800dc: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e0: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007800e4: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800e8: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007800ec: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007800ef: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007800f1: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007800f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007800f6: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007800fa: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007800fc: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 007800fe: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00780101: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 00780103: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780105: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00780107: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00780109: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0078010b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078010d: fcom dword ptr [0x97992c] */ fx_compare(ST(0), R_F32((u32)(0x97992cu))); 
    /* 00780113: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780115: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780116: jbe 0x780166 */ if ((fC||fZ)) goto L_00780166;
L_00780118:; BB(0x00780118);
    /* 00780118: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 0078011c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078011e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078011f: jb 0x780144 */ if (fC) goto L_00780144;
L_00780121:; BB(0x00780121);
    /* 00780121: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780123: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780125: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780127: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780129: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078012b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
L_0078012c:; BB(0x0078012c);
    /* 0078012c: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078012d: and al, 0x60 */ {  u32 a = (u8)r_eax; u32 b = 0x60u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0078012f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00780131: fsub dword ptr [esp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x38u));
    /* 00780135: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780137: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0078013a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0078013c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078013e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780140: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780142: jmp 0x780176 */ goto L_00780176;
L_00780144:; BB(0x00780144);
    /* 00780144: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780146: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0078014a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078014c: fchs  */ ST(0) = -ST(0);
    /* 0078014e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00780150: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00780152: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780154: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780156: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780158: fchs  */ ST(0) = -ST(0);
    /* 0078015a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0078015c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078015e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780160: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780162: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780164: jmp 0x780176 */ goto L_00780176;
L_00780166:; BB(0x00780166);
    /* 00780166: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780168: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0078016a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078016c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0078016e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780170: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780172: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780174: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00780176:; BB(0x00780176);
    /* 00780176: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780178: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078017a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0078017c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078017e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078017f: jb 0x780197 */ if (fC) goto L_00780197;
L_00780181:; BB(0x00780181);
    /* 00780181: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780184: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078018a: jge 0x78027a */ if ((fS==fO)) goto L_0078027a;
L_00780190:; BB(0x00780190);
    /* 00780190: mov eax, ebp */ r_eax = r_ebp;
    /* 00780192: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00780195: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00780197:; BB(0x00780197);
    /* 00780197: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780199: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078019c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078019e: jne 0x780097 */ if (!fZ) goto L_00780097;
L_007801a4:; BB(0x007801a4);
    /* 007801a4: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_007801a8:; BB(0x007801a8);
    /* 007801a8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 007801af: mov eax, dword ptr [0xa9b500] */ r_eax = R32((u32)(0xa9b500u));
    /* 007801b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007801b6: jne 0x7801bf */ if (!fZ) goto L_007801bf;
L_007801b8:; BB(0x007801b8);
    /* 007801b8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007801ba: jmp 0x780270 */ goto L_00780270;
L_007801bf:; BB(0x007801bf);
    /* 007801bf: mov edx, dword ptr [0xa9bc88] */ r_edx = R32((u32)(0xa9bc88u));
    /* 007801c5: mov dword ptr [0xa9bc8c], 0xa9bc84 */ W32((u32)(0xa9bc8cu), 0xa9bc84u);
    /* 007801cf: mov ebx, 0xa9b500 */ r_ebx = 0xa9b500u;
    /* 007801d4: mov dword ptr [0xa9bc84], 0 */ W32((u32)(0xa9bc84u), 0x0u);
    /* 007801de: mov dword ptr [0xa9bc90], edx */ W32((u32)(0xa9bc90u), r_edx);
    /* 007801e4: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007801e8: mov dword ptr [0xa9bc94], 0x40000000 */ W32((u32)(0xa9bc94u), 0x40000000u);
    /* 007801f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007801f3: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 007801f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007801f8: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007801fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007801fd: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780202u); f_007a8c4c();
    /* 00780202: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00780205: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780207: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780209: je 0x780263 */ if (fZ) goto L_00780263;
L_0078020b:; BB(0x0078020b);
    /* 0078020b: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0078020f: mov eax, ebx */ r_eax = r_ebx;
    /* 00780211: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
L_00780215:; BB(0x00780215);
    /* 00780215: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00780217: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0078021a: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0078021d: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 00780220: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780222: je 0x780255 */ if (fZ) goto L_00780255;
L_00780224:; BB(0x00780224);
    /* 00780224: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_00780228:; BB(0x00780228);
    /* 00780228: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0078022c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00780234: mov edx, esi */ r_edx = r_esi;
    /* 00780236: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780239: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0078023d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00780241: mov eax, ebx */ r_eax = r_ebx;
    /* 00780243: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00780247: call 0x780284 */ r_esp -= 4; W32(r_esp, 0x78024cu); f_00780284();
    /* 0078024c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0078024f: jne 0x780228 */ if (!fZ) goto L_00780228;
L_00780251:; BB(0x00780251);
    /* 00780251: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
L_00780255:; BB(0x00780255);
    /* 00780255: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00780258: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078025b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078025d: jne 0x780215 */ if (!fZ) goto L_00780215;
L_0078025f:; BB(0x0078025f);
    /* 0078025f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_00780263:; BB(0x00780263);
    /* 00780263: mov eax, dword ptr [0xa9bc8c] */ r_eax = R32((u32)(0xa9bc8cu));
    /* 00780268: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078026a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078026c: jne 0x780270 */ if (!fZ) goto L_00780270;
L_0078026e:; BB(0x0078026e);
    /* 0078026e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00780270:; BB(0x00780270);
    /* 00780270: mov eax, edi */ r_eax = r_edi;
    /* 00780272: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00780275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00780276: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00780277: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00780278: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00780279: ret  */ FN_RET(0x0078012c); r_esp += 4; return;
L_0078027a:; BB(0x0078027a);
    /* 0078027a: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0078027e: jmp 0x7801a8 */ goto L_007801a8;
}

void f_00780284(void) /* sub_780284 */
{
    FN_ENTER(0x00780284);
    /* 00780284: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00780285: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00780286: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00780287: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078028a: mov esi, edx */ r_esi = r_edx;
    /* 0078028c: mov edx, eax */ r_edx = r_eax;
    /* 0078028e: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 00780292: movzx edi, word ptr [ebp + 6] */ r_edi = (u32)R16((u32)(r_ebp+0x6u));
    /* 00780296: test ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780298: je 0x780446 */ if (fZ) goto L_00780446;
L_0078029e:; BB(0x0078029e);
    /* 0078029e: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 007802a0: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 007802a3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007802a5: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 007802a8: fmul dword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xcu));
    /* 007802ab: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007802ad: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 007802b0: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 007802b3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007802b5: fcom dword ptr [0x97991c] */ fx_compare(ST(0), R_F32((u32)(0x97991cu))); 
    /* 007802bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007802bd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007802be: jae 0x78061d */ if (!fC) goto L_0078061d;
L_007802c4:; BB(0x007802c4);
    /* 007802c4: movzx edi, word ptr [ebp] */ r_edi = (u32)R16((u32)(r_ebp));
    /* 007802c8: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 007802ca: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007802cc: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007802ce: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 007802d1: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007802d3: add ecx, dword ptr [esp + 0x54] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007802d7: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 007802d9: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 007802dd: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007802e0: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 007802e3: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 007802e7: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 007802ea: fsub dword ptr [ecx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x8u));
    /* 007802ed: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 007802f1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007802f3: fmul dword ptr [ebp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8u));
    /* 007802f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007802f8: fmul dword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xcu));
    /* 007802fb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007802fd: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 00780300: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780302: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780304: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780306: fcom dword ptr [0x979918] */ fx_compare(ST(0), R_F32((u32)(0x979918u))); 
    /* 0078030c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078030e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00780311: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780312: jbe 0x780626 */ if ((fC||fZ)) goto L_00780626;
L_00780318:; BB(0x00780318);
    /* 00780318: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0078031b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078031d: fchs  */ ST(0) = -ST(0);
    /* 0078031f: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00780321: fcom dword ptr [0x979914] */ fx_compare(ST(0), R_F32((u32)(0x979914u))); 
    /* 00780327: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780329: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0078032c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078032d: ja 0x78033d */ if ((!fC&&!fZ)) goto L_0078033d;
L_0078032f:; BB(0x0078032f);
    /* 0078032f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00780332: fcomp dword ptr [0x979910] */ fx_compare(ST(0), R_F32((u32)(0x979910u))); FPOP();
    /* 00780338: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078033a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078033b: jae 0x780348 */ if (!fC) goto L_00780348;
L_0078033d:; BB(0x0078033d);
    /* 0078033d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078033f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00780341: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00780344: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00780345: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00780346: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00780347: ret  */ FN_RET(0x00780284); r_esp += 4; return;
L_00780348:; BB(0x00780348);
    /* 00780348: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0078034b: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0078034d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078034f: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 00780351: fstp dword ptr [0xaab4c0] */ W_F32((u32)(0xaab4c0u), ST(0)); FPOP();
    /* 00780357: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0078035a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0078035c: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 0078035f: fstp dword ptr [0xaab4c4] */ W_F32((u32)(0xaab4c4u), ST(0)); FPOP();
    /* 00780365: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00780368: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0078036a: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 0078036d: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00780371: fstp dword ptr [0xaab4c8] */ W_F32((u32)(0xaab4c8u), ST(0)); FPOP();
    /* 00780377: movzx eax, word ptr [ebp + 2] */ r_eax = (u32)R16((u32)(r_ebp+0x2u));
    /* 0078037b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078037d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078037f: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00780382: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780384: add esi, dword ptr [esp + 0x54] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780388: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00780389: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0078038a: push 0xaab4c0 */ { u32 v = 0xaab4c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078038f: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780394u); f_007a8c4c();
    /* 00780394: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 00780398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00780399: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078039a: push 0xaab4c0 */ { u32 v = 0xaab4c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078039f: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x7803a4u); f_007a8c4c();
    /* 007803a4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007803a7: lea esi, [esp + 0x1c] */ r_esi = (u32)(r_esp+0x1cu);
    /* 007803ab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007803ac: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 007803b0: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 007803b4: call 0x83a1f0 */ r_esp -= 4; W32(r_esp, 0x7803b9u); f_0083a1f0();
    /* 007803b9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007803bb: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 007803bf: fmul dword ptr [ebp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8u));
    /* 007803c2: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007803c6: fmul dword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xcu));
    /* 007803c9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007803cb: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 007803cf: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 007803d2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007803d4: fcomp dword ptr [0x979910] */ fx_compare(ST(0), R_F32((u32)(0x979910u))); FPOP();
    /* 007803da: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007803dc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007803dd: jae 0x7803e8 */ if (!fC) goto L_007803e8;
L_007803df:; BB(0x007803df);
    /* 007803df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007803e1: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007803e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007803e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007803e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007803e7: ret  */ FN_RET(0x00780284); r_esp += 4; return;
L_007803e8:; BB(0x007803e8);
    /* 007803e8: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007803ec: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 007803f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007803f1: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 007803f5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007803f7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007803f9: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 007803fc: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007803fe: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780400: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00780401: push 0xaab4c0 */ { u32 v = 0xaab4c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00780406: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x78040bu); f_007a8c4c();
    /* 0078040b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078040e: lea esi, [esp + 0x1c] */ r_esi = (u32)(r_esp+0x1cu);
    /* 00780412: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00780413: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 00780417: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 0078041b: call 0x83a1f0 */ r_esp -= 4; W32(r_esp, 0x780420u); f_0083a1f0();
    /* 00780420: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00780422: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00780426: fmul dword ptr [ebp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8u));
    /* 00780429: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0078042d: fmul dword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xcu));
    /* 00780430: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780432: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00780436: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 00780439: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078043b: fcomp dword ptr [0x979910] */ fx_compare(ST(0), R_F32((u32)(0x979910u))); FPOP();
    /* 00780441: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780443: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780444: jae 0x78044f */ if (!fC) goto L_0078044f;
L_00780446:; BB(0x00780446);
    /* 00780446: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00780448: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078044b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078044c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078044d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078044e: ret  */ FN_RET(0x00780284); r_esp += 4; return;
L_0078044f:; BB(0x0078044f);
    /* 0078044f: lea esi, [esp + 0x1c] */ r_esi = (u32)(r_esp+0x1cu);
    /* 00780453: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00780454: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 00780458: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0078045c: call 0x83a1f0 */ r_esp -= 4; W32(r_esp, 0x780461u); f_0083a1f0();
    /* 00780461: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00780463: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00780467: fmul dword ptr [ebp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8u));
    /* 0078046a: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0078046e: fmul dword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xcu));
    /* 00780471: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780473: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00780477: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 0078047a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078047c: fcomp dword ptr [0x979910] */ fx_compare(ST(0), R_F32((u32)(0x979910u))); FPOP();
    /* 00780482: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780484: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780485: jb 0x780446 */ if (fC) goto L_00780446;
L_00780487:; BB(0x00780487);
    /* 00780487: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 0078048b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078048d: je 0x7805c0 */ if (fZ) goto L_007805c0;
L_00780493:; BB(0x00780493);
    /* 00780493: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00780497: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078049a: je 0x780570 */ if (fZ) goto L_00780570;
L_007804a0:; BB(0x007804a0);
    /* 007804a0: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 007804a4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007804a7: jne 0x78050e */ if (!fZ) goto L_0078050e;
L_007804a9:; BB(0x007804a9);
    /* 007804a9: mov edx, dword ptr [0xa9bc98] */ r_edx = R32((u32)(0xa9bc98u));
    /* 007804af: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007804b2: jge 0x780446 */ if ((fS==fO)) goto L_00780446;
L_007804b4:; BB(0x007804b4);
    /* 007804b4: mov ecx, dword ptr [0xa9bc8c] */ r_ecx = R32((u32)(0xa9bc8cu));
    /* 007804ba: mov eax, dword ptr [0xa9bc90] */ r_eax = R32((u32)(0xa9bc90u));
    /* 007804bf: mov dword ptr [ecx], 1 */ W32((u32)(r_ecx), 0x1u);
    /* 007804c5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007804c8: mov esi, dword ptr [0xaab4c0] */ r_esi = R32((u32)(0xaab4c0u));
    /* 007804ce: mov dword ptr [0xa9bc98], edx */ W32((u32)(0xa9bc98u), r_edx);
    /* 007804d4: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 007804d6: mov edi, dword ptr [0xaab4c4] */ r_edi = R32((u32)(0xaab4c4u));
    /* 007804dc: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 007804df: mov ecx, dword ptr [0xaab4c8] */ r_ecx = R32((u32)(0xaab4c8u));
    /* 007804e5: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 007804e8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 007804eb: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 007804ee: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 007804f1: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 007804f4: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 007804f7: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 007804fa: movzx ebp, word ptr [ebp + 6] */ r_ebp = (u32)R16((u32)(r_ebp+0x6u));
    /* 007804fe: mov dword ptr [eax + 0x18], ebp */ W32((u32)(r_eax+0x18u), r_ebp);
    /* 00780501: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00780504: mov dword ptr [0xa9bc90], eax */ W32((u32)(0xa9bc90u), r_eax);
    /* 00780509: jmp 0x7805b4 */ goto L_007805b4;
L_0078050e:; BB(0x0078050e);
    /* 0078050e: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00780512: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780515: jne 0x7805b4 */ if (!fZ) goto L_007805b4;
L_0078051b:; BB(0x0078051b);
    /* 0078051b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0078051e: fcomp dword ptr [0xa9bc94] */ fx_compare(ST(0), R_F32((u32)(0xa9bc94u))); FPOP();
    /* 00780524: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780526: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780527: jae 0x7805b4 */ if (!fC) goto L_007805b4;
L_0078052d:; BB(0x0078052d);
    /* 0078052d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00780530: mov eax, dword ptr [0xa9bc90] */ r_eax = R32((u32)(0xa9bc90u));
    /* 00780535: mov edx, dword ptr [0xaab4c0] */ r_edx = R32((u32)(0xaab4c0u));
    /* 0078053b: fstp dword ptr [0xa9bc94] */ W_F32((u32)(0xa9bc94u), ST(0)); FPOP();
    /* 00780541: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00780543: mov ecx, dword ptr [0xaab4c4] */ r_ecx = R32((u32)(0xaab4c4u));
    /* 00780549: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0078054c: mov esi, dword ptr [0xaab4c8] */ r_esi = R32((u32)(0xaab4c8u));
    /* 00780552: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 00780555: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00780558: mov dword ptr [eax + 0xc], edi */ W32((u32)(r_eax+0xcu), r_edi);
    /* 0078055b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0078055e: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 00780561: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00780564: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00780567: movzx ebp, word ptr [ebp + 6] */ r_ebp = (u32)R16((u32)(r_ebp+0x6u));
    /* 0078056b: mov dword ptr [eax + 0x18], ebp */ W32((u32)(r_eax+0x18u), r_ebp);
    /* 0078056e: jmp 0x7805b4 */ goto L_007805b4;
L_00780570:; BB(0x00780570);
    /* 00780570: mov edx, dword ptr [0xa9bc8c] */ r_edx = R32((u32)(0xa9bc8cu));
    /* 00780576: mov eax, dword ptr [0xa9bc90] */ r_eax = R32((u32)(0xa9bc90u));
    /* 0078057b: mov dword ptr [edx], 1 */ W32((u32)(r_edx), 0x1u);
    /* 00780581: mov ecx, dword ptr [0xaab4c0] */ r_ecx = R32((u32)(0xaab4c0u));
    /* 00780587: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00780589: mov esi, dword ptr [0xaab4c4] */ r_esi = R32((u32)(0xaab4c4u));
    /* 0078058f: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00780592: mov edi, dword ptr [0xaab4c8] */ r_edi = R32((u32)(0xaab4c8u));
    /* 00780598: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 0078059b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0078059e: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 007805a1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 007805a4: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 007805a7: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 007805aa: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 007805ad: movzx ebp, word ptr [ebp + 6] */ r_ebp = (u32)R16((u32)(r_ebp+0x6u));
    /* 007805b1: mov dword ptr [eax + 0x18], ebp */ W32((u32)(r_eax+0x18u), r_ebp);
L_007805b4:; BB(0x007805b4);
    /* 007805b4: mov eax, 1 */ r_eax = 0x1u;
    /* 007805b9: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007805bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007805bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007805be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007805bf: ret  */ FN_RET(0x00780284); r_esp += 4; return;
L_007805c0:; BB(0x007805c0);
    /* 007805c0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007805c3: fcomp dword ptr [0xa9bc94] */ fx_compare(ST(0), R_F32((u32)(0xa9bc94u))); FPOP();
    /* 007805c9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007805cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007805cc: jae 0x7805b4 */ if (!fC) goto L_007805b4;
L_007805ce:; BB(0x007805ce);
    /* 007805ce: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007805d1: mov edx, dword ptr [0xa9bc8c] */ r_edx = R32((u32)(0xa9bc8cu));
    /* 007805d7: mov eax, dword ptr [0xa9bc90] */ r_eax = R32((u32)(0xa9bc90u));
    /* 007805dc: fstp dword ptr [0xa9bc94] */ W_F32((u32)(0xa9bc94u), ST(0)); FPOP();
    /* 007805e2: mov dword ptr [edx], 1 */ W32((u32)(r_edx), 0x1u);
    /* 007805e8: mov ecx, dword ptr [0xaab4c0] */ r_ecx = R32((u32)(0xaab4c0u));
    /* 007805ee: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 007805f0: mov esi, dword ptr [0xaab4c4] */ r_esi = R32((u32)(0xaab4c4u));
    /* 007805f6: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 007805f9: mov edi, dword ptr [0xaab4c8] */ r_edi = R32((u32)(0xaab4c8u));
    /* 007805ff: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 00780602: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00780605: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00780608: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0078060b: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 0078060e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00780611: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00780614: movzx ebp, word ptr [ebp + 6] */ r_ebp = (u32)R16((u32)(r_ebp+0x6u));
    /* 00780618: mov dword ptr [eax + 0x18], ebp */ W32((u32)(r_eax+0x18u), r_ebp);
    /* 0078061b: jmp 0x7805b4 */ goto L_007805b4;
L_0078061d:; BB(0x0078061d);
    /* 0078061d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078061f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00780621: jmp 0x780446 */ goto L_00780446;
L_00780626:; BB(0x00780626);
    /* 00780626: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780628: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078062a: jmp 0x780446 */ goto L_00780446;
}

void f_00780630(void) /* sub_780630 */
{
    FN_ENTER(0x00780630);
    /* 00780630: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00780631: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00780632: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00780633: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00780634: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00780637: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0078063b: mov ebx, 0xa9bc84 */ r_ebx = 0xa9bc84u;
    /* 00780640: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00780642: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00780646: mov ebp, dword ptr [0xaab3f0] */ r_ebp = R32((u32)(0xaab3f0u));
    /* 0078064c: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0078064f: mov edi, 0xa9b500 */ r_edi = 0xa9b500u;
    /* 00780654: add ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00780657: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780659: je 0x7806a5 */ if (fZ) goto L_007806a5;
L_0078065b:; BB(0x0078065b);
    /* 0078065b: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0078065f: mov ebx, eax */ r_ebx = r_eax;
L_00780661:; BB(0x00780661);
    /* 00780661: test dword ptr [ecx + 0x14], edx */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780664: je 0x780695 */ if (fZ) goto L_00780695;
L_00780666:; BB(0x00780666);
    /* 00780666: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00780669: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078066b: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0078066e: fsub dword ptr [ebx] */ ST(0) = ST(0) - R_F32((u32)(r_ebx));
    /* 00780670: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780672: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00780675: fsub dword ptr [ebx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x8u));
    /* 00780678: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078067a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078067c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0078067e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780680: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780681: ja 0x780695 */ if ((!fC&&!fZ)) goto L_00780695;
L_00780683:; BB(0x00780683);
    /* 00780683: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780686: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078068c: jge 0x7806d3 */ if ((fS==fO)) goto L_007806d3;
L_0078068e:; BB(0x0078068e);
    /* 0078068e: mov eax, edi */ r_eax = r_edi;
    /* 00780690: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00780693: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
L_00780695:; BB(0x00780695);
    /* 00780695: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 00780698: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0078069b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078069d: jne 0x780661 */ if (!fZ) goto L_00780661;
L_0078069f:; BB(0x0078069f);
    /* 0078069f: mov eax, ebx */ r_eax = r_ebx;
    /* 007806a1: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_007806a5:; BB(0x007806a5);
    /* 007806a5: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
    /* 007806ab: mov ecx, dword ptr [0xa9b500] */ r_ecx = R32((u32)(0xa9b500u));
    /* 007806b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007806b3: jne 0x7806b9 */ if (!fZ) goto L_007806b9;
L_007806b5:; BB(0x007806b5);
    /* 007806b5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007806b7: jmp 0x7806c9 */ goto L_007806c9;
L_007806b9:; BB(0x007806b9);
    /* 007806b9: mov ecx, 0xa9b500 */ r_ecx = 0xa9b500u;
    /* 007806be: call 0x780874 */ r_esp -= 4; W32(r_esp, 0x7806c3u); f_00780874();
    /* 007806c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007806c5: jne 0x7806c9 */ if (!fZ) goto L_007806c9;
L_007806c7:; BB(0x007806c7);
    /* 007806c7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007806c9:; BB(0x007806c9);
    /* 007806c9: mov eax, ebx */ r_eax = r_ebx;
    /* 007806cb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007806ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007806cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007806d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007806d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007806d2: ret  */ FN_RET(0x00780630); r_esp += 4; return;
L_007806d3:; BB(0x007806d3);
    /* 007806d3: mov eax, ebx */ r_eax = r_ebx;
    /* 007806d5: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 007806d9: jmp 0x7806a5 */ goto L_007806a5;
}

void f_007806dc(void) /* sub_7806DC */
{
    FN_ENTER(0x007806dc);
    /* 007806dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007806dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007806de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007806df: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007806e2: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 007806e6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 007806e8: mov ebp, 0xa9bc84 */ r_ebp = 0xa9bc84u;
    /* 007806ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007806ef: je 0x7807bd */ if (fZ) goto L_007807bd;
L_007806f5:; BB(0x007806f5);
    /* 007806f5: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 007806f9: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 007806fd: mov ecx, esi */ r_ecx = r_esi;
    /* 007806ff: call 0x780874 */ r_esp -= 4; W32(r_esp, 0x780704u); f_00780874();
    /* 00780704: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780706: jne 0x7807a6 */ if (!fZ) goto L_007807a6;
L_0078070c:; BB(0x0078070c);
    /* 0078070c: mov edi, dword ptr [0xaab3f0] */ r_edi = R32((u32)(0xaab3f0u));
    /* 00780712: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00780715: mov edx, esi */ r_edx = r_esi;
    /* 00780717: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00780719: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078071c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078071e: je 0x780781 */ if (fZ) goto L_00780781;
L_00780720:; BB(0x00780720);
    /* 00780720: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00780724: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 00780728: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 0078072c: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00780730: mov ebx, eax */ r_ebx = r_eax;
L_00780732:; BB(0x00780732);
    /* 00780732: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 00780735: test ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780737: je 0x78076c */ if (fZ) goto L_0078076c;
L_00780739:; BB(0x00780739);
    /* 00780739: test eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078073e: jne 0x78076c */ if (!fZ) goto L_0078076c;
L_00780740:; BB(0x00780740);
    /* 00780740: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00780743: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780745: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00780748: fsub dword ptr [esi] */ ST(0) = ST(0) - R_F32((u32)(r_esi));
    /* 0078074a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078074c: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0078074f: fsub dword ptr [esi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x8u));
    /* 00780752: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780754: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780756: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00780758: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078075a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078075b: ja 0x78076c */ if ((!fC&&!fZ)) goto L_0078076c;
L_0078075d:; BB(0x0078075d);
    /* 0078075d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00780760: cmp ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00780763: jge 0x7807af */ if ((fS==fO)) goto L_007807af;
L_00780765:; BB(0x00780765);
    /* 00780765: mov eax, edx */ r_eax = r_edx;
    /* 00780767: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078076a: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
L_0078076c:; BB(0x0078076c);
    /* 0078076c: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0078076e: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00780771: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780773: jne 0x780732 */ if (!fZ) goto L_00780732;
L_00780775:; BB(0x00780775);
    /* 00780775: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00780779: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0078077d: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
L_00780781:; BB(0x00780781);
    /* 00780781: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 00780787: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00780789: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078078b: jne 0x780791 */ if (!fZ) goto L_00780791;
L_0078078d:; BB(0x0078078d);
    /* 0078078d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0078078f: jmp 0x7807a6 */ goto L_007807a6;
L_00780791:; BB(0x00780791);
    /* 00780791: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00780795: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00780799: mov ecx, esi */ r_ecx = r_esi;
    /* 0078079b: call 0x780874 */ r_esp -= 4; W32(r_esp, 0x7807a0u); f_00780874();
    /* 007807a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007807a2: jne 0x7807a6 */ if (!fZ) goto L_007807a6;
L_007807a4:; BB(0x007807a4);
    /* 007807a4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_007807a6:; BB(0x007807a6);
    /* 007807a6: mov eax, ebp */ r_eax = r_ebp;
    /* 007807a8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007807ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007807ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007807ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007807ae: ret  */ FN_RET(0x007806dc); r_esp += 4; return;
L_007807af:; BB(0x007807af);
    /* 007807af: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 007807b3: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 007807b7: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 007807bb: jmp 0x780781 */ goto L_00780781;
L_007807bd:; BB(0x007807bd);
    /* 007807bd: mov edi, dword ptr [0xaab3f0] */ r_edi = R32((u32)(0xaab3f0u));
    /* 007807c3: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 007807c6: mov edx, esi */ r_edx = r_esi;
    /* 007807c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007807ca: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007807cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007807cf: je 0x780832 */ if (fZ) goto L_00780832;
L_007807d1:; BB(0x007807d1);
    /* 007807d1: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 007807d5: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 007807d9: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 007807dd: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 007807e1: mov ebx, eax */ r_ebx = r_eax;
L_007807e3:; BB(0x007807e3);
    /* 007807e3: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 007807e6: test eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007807e8: je 0x78081d */ if (fZ) goto L_0078081d;
L_007807ea:; BB(0x007807ea);
    /* 007807ea: test eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007807ef: jne 0x78081d */ if (!fZ) goto L_0078081d;
L_007807f1:; BB(0x007807f1);
    /* 007807f1: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 007807f4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007807f6: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 007807f9: fsub dword ptr [esi] */ ST(0) = ST(0) - R_F32((u32)(r_esi));
    /* 007807fb: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007807fd: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00780800: fsub dword ptr [esi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x8u));
    /* 00780803: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780805: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780807: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00780809: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078080b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078080c: ja 0x78081d */ if ((!fC&&!fZ)) goto L_0078081d;
L_0078080e:; BB(0x0078080e);
    /* 0078080e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00780811: cmp ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00780814: jge 0x780863 */ if ((fS==fO)) goto L_00780863;
L_00780816:; BB(0x00780816);
    /* 00780816: mov eax, edx */ r_eax = r_edx;
    /* 00780818: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078081b: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
L_0078081d:; BB(0x0078081d);
    /* 0078081d: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0078081f: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00780822: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780824: jne 0x7807e3 */ if (!fZ) goto L_007807e3;
L_00780826:; BB(0x00780826);
    /* 00780826: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0078082a: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0078082e: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
L_00780832:; BB(0x00780832);
    /* 00780832: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 00780838: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0078083a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078083c: jne 0x780845 */ if (!fZ) goto L_00780845;
L_0078083e:; BB(0x0078083e);
    /* 0078083e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00780840: jmp 0x7807a6 */ goto L_007807a6;
L_00780845:; BB(0x00780845);
    /* 00780845: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00780849: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0078084d: mov ecx, esi */ r_ecx = r_esi;
    /* 0078084f: call 0x780874 */ r_esp -= 4; W32(r_esp, 0x780854u); f_00780874();
    /* 00780854: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780856: jne 0x7807a6 */ if (!fZ) goto L_007807a6;
L_0078085c:; BB(0x0078085c);
    /* 0078085c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0078085e: jmp 0x7807a6 */ goto L_007807a6;
L_00780863:; BB(0x00780863);
    /* 00780863: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00780867: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0078086b: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0078086f: jmp 0x780832 */ goto L_00780832;
}

void f_00780874(void) /* sub_780874 */
{
    FN_ENTER(0x00780874);
    /* 00780874: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00780875: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00780876: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00780877: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00780878: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078087b: mov esi, ecx */ r_esi = r_ecx;
    /* 0078087d: mov ebp, edx */ r_ebp = r_edx;
    /* 0078087f: mov ebx, eax */ r_ebx = r_eax;
    /* 00780881: mov edi, dword ptr [0xa9bc88] */ r_edi = R32((u32)(0xa9bc88u));
    /* 00780887: fld dword ptr [0x979900] */ FPUSH(R_F32((u32)(0x979900u)));
    /* 0078088d: fld dword ptr [0x9798fc] */ FPUSH(R_F32((u32)(0x9798fcu)));
    /* 00780893: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780895: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00780899: mov dword ptr [0xa9bc84], 0 */ W32((u32)(0xa9bc84u), 0x0u);
    /* 007808a3: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 007808a7: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 007808a9: mov dword ptr [0xaab4c0], edi */ W32((u32)(0xaab4c0u), r_edi);
    /* 007808af: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 007808b2: fstp dword ptr [0xaab4c4] */ W_F32((u32)(0xaab4c4u), ST(0)); FPOP();
    /* 007808b8: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 007808bb: mov dword ptr [0xaab4c8], edi */ W32((u32)(0xaab4c8u), r_edi);
    /* 007808c1: lea edi, [esp + 0x50] */ r_edi = (u32)(r_esp+0x50u);
    /* 007808c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007808c6: push 0xaab4c0 */ { u32 v = 0xaab4c0u; r_esp -= 4; W32(r_esp, v); }
    /* 007808cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007808cc: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x7808d1u); f_007a8c4c();
    /* 007808d1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007808d4: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 007808d6: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 007808d8: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 007808db: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 007808de: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 007808e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007808e2: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 007808e6: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 007808e9: je 0x780d19 */ if (fZ) goto L_00780d19;
L_007808ef:; BB(0x007808ef);
    /* 007808ef: fld dword ptr [0x9798fc] */ FPUSH(R_F32((u32)(0x9798fcu)));
    /* 007808f5: fld dword ptr [0x9798f8] */ FPUSH(R_F32((u32)(0x9798f8u)));
    /* 007808fb: fld dword ptr [0x9798f4] */ FPUSH(R_F32((u32)(0x9798f4u)));
    /* 00780901: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00780903: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00780907: mov ebx, ebp */ r_ebx = r_ebp;
    /* 00780909: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0078090d: and ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00780910: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00780914: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00780916: and ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00780919: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0078091d: mov edx, ebp */ r_edx = r_ebp;
    /* 0078091f: and edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00780922: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00780926: mov edx, ebp */ r_edx = r_ebp;
    /* 00780928: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0078092b: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0078092f: mov edx, ebp */ r_edx = r_ebp;
    /* 00780931: and edx, 0xffffffe1 */ {  u32 a = r_edx; u32 b = 0xffffffe1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00780934: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00780938: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0078093a: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0078093c: fstp st(1) */ ST(1) = ST(0); FPOP();
L_0078093e:; BB(0x0078093e);
    /* 0078093e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00780940: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 00780943: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 00780946: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00780949: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078094b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0078094d: jle 0x780cf7 */ if ((fZ||fS!=fO)) goto L_00780cf7;
L_00780953:; BB(0x00780953);
    /* 00780953: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00780957: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 0078095b: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_0078095e:; BB(0x0078095e);
    /* 0078095e: movzx edi, word ptr [ebx + 6] */ r_edi = (u32)R16((u32)(r_ebx+0x6u));
    /* 00780962: test edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780964: je 0x780ce2 */ if (fZ) goto L_00780ce2;
L_0078096a:; BB(0x0078096a);
    /* 0078096a: fld dword ptr [ebx + 0x20] */ FPUSH(R_F32((u32)(r_ebx+0x20u)));
    /* 0078096d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078096f: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 00780972: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 00780974: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780976: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
    /* 00780979: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0078097b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078097d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078097f: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00780981: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780983: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780984: ja 0x780ce2 */ if ((!fC&&!fZ)) goto L_00780ce2;
L_0078098a:; BB(0x0078098a);
    /* 0078098a: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
    /* 0078098d: fcom dword ptr [0x9798f8] */ fx_compare(ST(0), R_F32((u32)(0x9798f8u))); 
    /* 00780993: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780995: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 00780998: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 0078099c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078099d: jae 0x7809a6 */ if (!fC) goto L_007809a6;
L_0078099f:; BB(0x0078099f);
    /* 0078099f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007809a1: jmp 0x780ce2 */ goto L_00780ce2;
L_007809a6:; BB(0x007809a6);
    /* 007809a6: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007809a9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007809ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007809ad: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 007809b0: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007809b2: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007809b6: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 007809ba: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007809bc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007809be: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007809c1: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007809c3: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 007809c7: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 007809cb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007809cd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007809cf: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007809d2: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007809d4: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 007809d8: fld dword ptr [esi + eax + 4] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x4u)));
    /* 007809dc: fcom dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); 
    /* 007809e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007809e2: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 007809e6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007809e7: jbe 0x780a18 */ if ((fC||fZ)) goto L_00780a18;
L_007809e9:; BB(0x007809e9);
    /* 007809e9: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 007809ed: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 007809f1: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 007809f5: fcomp dword ptr [esi + edx + 4] */ fx_compare(ST(0), R_F32((u32)(r_esi+r_edx+0x4u))); FPOP();
    /* 007809f9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007809fb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007809fc: jae 0x780a18 */ if (!fC) goto L_00780a18;
L_007809fe:; BB(0x007809fe);
    /* 007809fe: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00780a02: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00780a06: fcomp dword ptr [esi + edx + 4] */ fx_compare(ST(0), R_F32((u32)(r_esi+r_edx+0x4u))); FPOP();
    /* 00780a0a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780a0c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780a0d: jae 0x780a18 */ if (!fC) goto L_00780a18;
L_00780a0f:; BB(0x00780a0f);
    /* 00780a0f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00780a11: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00780a13: jmp 0x780ce2 */ goto L_00780ce2;
L_00780a18:; BB(0x00780a18);
    /* 00780a18: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00780a1c: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00780a20: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00780a24: fld dword ptr [esi + edx] */ FPUSH(R_F32((u32)(r_esi+r_edx)));
    /* 00780a27: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00780a29: fld dword ptr [esi + edx + 8] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x8u)));
    /* 00780a2d: fld dword ptr [eax + edx] */ FPUSH(R_F32((u32)(r_eax+r_edx)));
    /* 00780a30: fld dword ptr [eax + edx + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx+0x8u)));
    /* 00780a34: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00780a36: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 00780a3a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780a3c: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 00780a3e: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 00780a42: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780a44: fsub st(7) */ ST(0) = ST(0) - ST(7);
    /* 00780a46: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00780a48: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 00780a4a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780a4c: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00780a4e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780a50: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00780a52: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780a54: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00780a56: fcomp dword ptr [0x9798f4] */ fx_compare(ST(0), R_F32((u32)(0x9798f4u))); FPOP();
    /* 00780a5c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780a5e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780a5f: jb 0x780d21 */ if (fC) goto L_00780d21;
L_00780a65:; BB(0x00780a65);
    /* 00780a65: mov eax, edx */ r_eax = r_edx;
    /* 00780a67: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00780a6b: fld dword ptr [esi + eax] */ FPUSH(R_F32((u32)(r_esi+r_eax)));
    /* 00780a6e: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 00780a70: fld dword ptr [esi + eax + 8] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x8u)));
    /* 00780a74: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780a76: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00780a78: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00780a7c: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 00780a7e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780a80: fchs  */ ST(0) = -ST(0);
    /* 00780a82: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00780a84: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780a86: fcomp dword ptr [0x9798f4] */ fx_compare(ST(0), R_F32((u32)(0x9798f4u))); FPOP();
    /* 00780a8c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780a8e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780a8f: jb 0x780d2b */ if (fC) goto L_00780d2b;
L_00780a95:; BB(0x00780a95);
    /* 00780a95: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 00780a99: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00780a9d: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00780aa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780aa3: fchs  */ ST(0) = -ST(0);
    /* 00780aa5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00780aa7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780aa9: fcomp dword ptr [0x9798f4] */ fx_compare(ST(0), R_F32((u32)(0x9798f4u))); FPOP();
    /* 00780aaf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780ab1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780ab2: jae 0x780abd */ if (!fC) goto L_00780abd;
L_00780ab4:; BB(0x00780ab4);
    /* 00780ab4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00780ab6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00780ab8: jmp 0x780ce2 */ goto L_00780ce2;
L_00780abd:; BB(0x00780abd);
    /* 00780abd: fsub dword ptr [esp + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x1cu));
    /* 00780ac1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00780ac3: fld dword ptr [0x9798fc] */ FPUSH(R_F32((u32)(0x9798fcu)));
    /* 00780ac9: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00780acb: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00780ace: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
    /* 00780ad1: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00780ad5: fmul dword ptr [ebx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x8u));
    /* 00780ad8: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00780adc: fmul dword ptr [ebx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x10u));
    /* 00780adf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780ae1: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00780ae3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780ae5: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00780ae9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00780aed: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 00780af1: fchs  */ ST(0) = -ST(0);
    /* 00780af3: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00780af5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780af7: fchs  */ ST(0) = -ST(0);
    /* 00780af9: je 0x780b53 */ if (fZ) goto L_00780b53;
L_00780afb:; BB(0x00780afb);
    /* 00780afb: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780b01: je 0x780b53 */ if (fZ) goto L_00780b53;
L_00780b03:; BB(0x00780b03);
    /* 00780b03: mov esi, dword ptr [0xa9bc84] */ r_esi = R32((u32)(0xa9bc84u));
    /* 00780b09: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00780b0d: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00780b11: fld dword ptr [0x9798fc] */ FPUSH(R_F32((u32)(0x9798fcu)));
    /* 00780b17: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00780b19: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 00780b1d: or esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00780b20: mov dword ptr [0xa9bc84], esi */ W32((u32)(0xa9bc84u), r_esi);
    /* 00780b26: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00780b2a: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 00780b2d: mov dword ptr [eax + 0x1c], edi */ W32((u32)(r_eax+0x1cu), r_edi);
    /* 00780b30: mov dword ptr [eax + 0x24], esi */ W32((u32)(r_eax+0x24u), r_esi);
    /* 00780b33: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00780b37: mov dword ptr [eax + 0x28], esi */ W32((u32)(r_eax+0x28u), r_esi);
    /* 00780b3a: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00780b3e: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 00780b41: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00780b45: mov dword ptr [eax + 0x30], esi */ W32((u32)(r_eax+0x30u), r_esi);
    /* 00780b48: movzx esi, word ptr [ebx + 6] */ r_esi = (u32)R16((u32)(r_ebx+0x6u));
    /* 00780b4c: mov dword ptr [eax + 0x34], esi */ W32((u32)(r_eax+0x34u), r_esi);
    /* 00780b4f: movzx edi, word ptr [ebx + 6] */ r_edi = (u32)R16((u32)(r_ebx+0x6u));
L_00780b53:; BB(0x00780b53);
    /* 00780b53: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00780b57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780b59: je 0x780bb3 */ if (fZ) goto L_00780bb3;
L_00780b5b:; BB(0x00780b5b);
    /* 00780b5b: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780b61: je 0x780bb3 */ if (fZ) goto L_00780bb3;
L_00780b63:; BB(0x00780b63);
    /* 00780b63: mov esi, dword ptr [0xa9bc84] */ r_esi = R32((u32)(0xa9bc84u));
    /* 00780b69: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00780b6d: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00780b71: fld dword ptr [0x9798fc] */ FPUSH(R_F32((u32)(0x9798fcu)));
    /* 00780b77: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00780b79: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 00780b7d: or esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00780b80: mov dword ptr [0xa9bc84], esi */ W32((u32)(0xa9bc84u), r_esi);
    /* 00780b86: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00780b8a: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 00780b8d: mov dword ptr [eax + 0x38], edi */ W32((u32)(r_eax+0x38u), r_edi);
    /* 00780b90: mov dword ptr [eax + 0x40], esi */ W32((u32)(r_eax+0x40u), r_esi);
    /* 00780b93: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00780b97: mov dword ptr [eax + 0x44], esi */ W32((u32)(r_eax+0x44u), r_esi);
    /* 00780b9a: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00780b9e: mov dword ptr [eax + 0x48], esi */ W32((u32)(r_eax+0x48u), r_esi);
    /* 00780ba1: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00780ba5: mov dword ptr [eax + 0x4c], esi */ W32((u32)(r_eax+0x4cu), r_esi);
    /* 00780ba8: movzx esi, word ptr [ebx + 6] */ r_esi = (u32)R16((u32)(r_ebx+0x6u));
    /* 00780bac: mov dword ptr [eax + 0x50], esi */ W32((u32)(r_eax+0x50u), r_esi);
    /* 00780baf: movzx edi, word ptr [ebx + 6] */ r_edi = (u32)R16((u32)(r_ebx+0x6u));
L_00780bb3:; BB(0x00780bb3);
    /* 00780bb3: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00780bb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780bb9: je 0x780c13 */ if (fZ) goto L_00780c13;
L_00780bbb:; BB(0x00780bbb);
    /* 00780bbb: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780bc1: je 0x780c13 */ if (fZ) goto L_00780c13;
L_00780bc3:; BB(0x00780bc3);
    /* 00780bc3: mov esi, dword ptr [0xa9bc84] */ r_esi = R32((u32)(0xa9bc84u));
    /* 00780bc9: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00780bcd: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00780bd1: fld dword ptr [0x9798fc] */ FPUSH(R_F32((u32)(0x9798fcu)));
    /* 00780bd7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00780bd9: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 00780bdd: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00780be0: mov dword ptr [0xa9bc84], esi */ W32((u32)(0xa9bc84u), r_esi);
    /* 00780be6: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00780bea: fstp dword ptr [eax + 0x58] */ W_F32((u32)(r_eax+0x58u), ST(0)); FPOP();
    /* 00780bed: mov dword ptr [eax + 0x54], edi */ W32((u32)(r_eax+0x54u), r_edi);
    /* 00780bf0: mov dword ptr [eax + 0x5c], esi */ W32((u32)(r_eax+0x5cu), r_esi);
    /* 00780bf3: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00780bf7: mov dword ptr [eax + 0x60], esi */ W32((u32)(r_eax+0x60u), r_esi);
    /* 00780bfa: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00780bfe: mov dword ptr [eax + 0x64], esi */ W32((u32)(r_eax+0x64u), r_esi);
    /* 00780c01: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00780c05: mov dword ptr [eax + 0x68], esi */ W32((u32)(r_eax+0x68u), r_esi);
    /* 00780c08: movzx esi, word ptr [ebx + 6] */ r_esi = (u32)R16((u32)(r_ebx+0x6u));
    /* 00780c0c: mov dword ptr [eax + 0x6c], esi */ W32((u32)(r_eax+0x6cu), r_esi);
    /* 00780c0f: movzx edi, word ptr [ebx + 6] */ r_edi = (u32)R16((u32)(r_ebx+0x6u));
L_00780c13:; BB(0x00780c13);
    /* 00780c13: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00780c17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780c19: je 0x780c7c */ if (fZ) goto L_00780c7c;
L_00780c1b:; BB(0x00780c1b);
    /* 00780c1b: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780c21: je 0x780c7c */ if (fZ) goto L_00780c7c;
L_00780c23:; BB(0x00780c23);
    /* 00780c23: mov esi, dword ptr [0xa9bc84] */ r_esi = R32((u32)(0xa9bc84u));
    /* 00780c29: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00780c2d: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00780c31: fld dword ptr [0x9798fc] */ FPUSH(R_F32((u32)(0x9798fcu)));
    /* 00780c37: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00780c39: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 00780c3d: or esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00780c40: mov dword ptr [0xa9bc84], esi */ W32((u32)(0xa9bc84u), r_esi);
    /* 00780c46: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00780c4a: fstp dword ptr [eax + 0x74] */ W_F32((u32)(r_eax+0x74u), ST(0)); FPOP();
    /* 00780c4d: mov dword ptr [eax + 0x70], edi */ W32((u32)(r_eax+0x70u), r_edi);
    /* 00780c50: mov dword ptr [eax + 0x78], esi */ W32((u32)(r_eax+0x78u), r_esi);
    /* 00780c53: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00780c57: mov dword ptr [eax + 0x7c], esi */ W32((u32)(r_eax+0x7cu), r_esi);
    /* 00780c5a: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00780c5e: mov dword ptr [eax + 0x80], esi */ W32((u32)(r_eax+0x80u), r_esi);
    /* 00780c64: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00780c68: mov dword ptr [eax + 0x84], esi */ W32((u32)(r_eax+0x84u), r_esi);
    /* 00780c6e: movzx esi, word ptr [ebx + 6] */ r_esi = (u32)R16((u32)(r_ebx+0x6u));
    /* 00780c72: mov dword ptr [eax + 0x88], esi */ W32((u32)(r_eax+0x88u), r_esi);
    /* 00780c78: movzx edi, word ptr [ebx + 6] */ r_edi = (u32)R16((u32)(r_ebx+0x6u));
L_00780c7c:; BB(0x00780c7c);
    /* 00780c7c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00780c80: test eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780c82: je 0x780d33 */ if (fZ) goto L_00780d33;
L_00780c88:; BB(0x00780c88);
    /* 00780c88: fcom dword ptr [esp + 0x48] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x48u))); 
    /* 00780c8c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780c8e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780c8f: jae 0x780d37 */ if (!fC) goto L_00780d37;
L_00780c95:; BB(0x00780c95);
    /* 00780c95: mov esi, dword ptr [0xa9bc84] */ r_esi = R32((u32)(0xa9bc84u));
    /* 00780c9b: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00780c9f: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00780ca3: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 00780ca7: fmul dword ptr [0x9798fc] */ ST(0) = ST(0) * R_F32((u32)(0x9798fcu));
    /* 00780cad: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 00780cb1: or esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00780cb4: mov dword ptr [0xa9bc84], esi */ W32((u32)(0xa9bc84u), r_esi);
    /* 00780cba: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00780cbe: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00780cc1: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 00780cc3: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 00780cc6: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00780cca: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 00780ccd: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00780cd1: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 00780cd4: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00780cd8: mov dword ptr [eax + 0x14], esi */ W32((u32)(r_eax+0x14u), r_esi);
    /* 00780cdb: movzx esi, word ptr [ebx + 6] */ r_esi = (u32)R16((u32)(r_ebx+0x6u));
    /* 00780cdf: mov dword ptr [eax + 0x18], esi */ W32((u32)(r_eax+0x18u), r_esi);
L_00780ce2:; BB(0x00780ce2);
    /* 00780ce2: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00780ce6: add ebx, 0x24 */ {  u32 a = r_ebx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00780ce9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00780cec: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00780cee: jl 0x78095e */ if ((fS!=fO)) goto L_0078095e;
L_00780cf4:; BB(0x00780cf4);
    /* 00780cf4: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00780cf7:; BB(0x00780cf7);
    /* 00780cf7: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00780cfa: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00780cfd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780cff: jne 0x78093e */ if (!fZ) goto L_0078093e;
L_00780d05:; BB(0x00780d05);
    /* 00780d05: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00780d07: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00780d09:; BB(0x00780d09);
    /* 00780d09: mov eax, dword ptr [0xa9bc84] */ r_eax = R32((u32)(0xa9bc84u));
    /* 00780d0e: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00780d11: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00780d14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00780d15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00780d16: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00780d17: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00780d18: ret  */ FN_RET(0x00780874); r_esp += 4; return;
L_00780d19:; BB(0x00780d19);
    /* 00780d19: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00780d1b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780d1d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00780d1f: jmp 0x780d09 */ goto L_00780d09;
L_00780d21:; BB(0x00780d21);
    /* 00780d21: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00780d23: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00780d25: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780d27: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00780d29: jmp 0x780ce2 */ goto L_00780ce2;
L_00780d2b:; BB(0x00780d2b);
    /* 00780d2b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780d2d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780d2f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00780d31: jmp 0x780ce2 */ goto L_00780ce2;
L_00780d33:; BB(0x00780d33);
    /* 00780d33: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00780d35: jmp 0x780ce2 */ goto L_00780ce2;
L_00780d37:; BB(0x00780d37);
    /* 00780d37: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00780d39: jmp 0x780ce2 */ goto L_00780ce2;
}

void f_00780d3c(void) /* sub_780D3C */
{
    FN_ENTER(0x00780d3c);
    /* 00780d3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00780d3d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00780d3e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00780d3f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00780d40: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00780d43: mov ebp, dword ptr [esp + 0x60] */ r_ebp = R32((u32)(r_esp+0x60u));
    /* 00780d47: mov edx, 0xa9bc84 */ r_edx = 0xa9bc84u;
    /* 00780d4c: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00780d50: mov ebx, dword ptr [0xaab3f0] */ r_ebx = R32((u32)(0xaab3f0u));
    /* 00780d56: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00780d5a: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00780d5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00780d5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00780d60: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00780d62: mov edi, 0xa9b500 */ r_edi = 0xa9b500u;
    /* 00780d67: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00780d68: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780d6du); f_007a8c4c();
    /* 00780d6d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00780d70: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00780d74: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780d76: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00780d7a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780d7c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780d7e: fcom dword ptr [0x9798f0] */ fx_compare(ST(0), R_F32((u32)(0x9798f0u))); 
    /* 00780d84: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780d86: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00780d8a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780d8b: jne 0x780d97 */ if (!fZ) goto L_00780d97;
L_00780d8d:; BB(0x00780d8d);
    /* 00780d8d: fld dword ptr [0x9798ec] */ FPUSH(R_F32((u32)(0x9798ecu)));
    /* 00780d93: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
L_00780d97:; BB(0x00780d97);
    /* 00780d97: fld dword ptr [0x9798e8] */ FPUSH(R_F32((u32)(0x9798e8u)));
    /* 00780d9d: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00780da1: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 00780da3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780da5: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00780da9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00780daa: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00780dad: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x780db2u); f_0082dc9c();
    /* 00780db2: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00780db5: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00780db8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780dba: je 0x780fb9 */ if (fZ) goto L_00780fb9;
L_00780dc0:; BB(0x00780dc0);
    /* 00780dc0: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00780dc4: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 00780dc8: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 00780dcc: mov esi, eax */ r_esi = r_eax;
L_00780dce:; BB(0x00780dce);
    /* 00780dce: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 00780dd1: test edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780dd7: je 0x780ee3 */ if (fZ) goto L_00780ee3;
L_00780ddd:; BB(0x00780ddd);
    /* 00780ddd: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00780de2: lea edi, [esi + 4] */ r_edi = (u32)(r_esi+0x4u);
    /* 00780de5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00780de6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00780de7: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780decu); f_007a8c4c();
    /* 00780dec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00780def: mov ecx, 0xaab4f0 */ r_ecx = 0xaab4f0u;
    /* 00780df4: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x780df9u); f_0082def4();
    /* 00780df9: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00780dfd: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00780e00: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00780e02: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780e04: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780e06: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00780e08: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780e0a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00780e0c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780e0e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780e0f: jae 0x780e18 */ if (!fC) goto L_00780e18;
L_00780e11:; BB(0x00780e11);
    /* 00780e11: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00780e13: jmp 0x780ee3 */ goto L_00780ee3;
L_00780e18:; BB(0x00780e18);
    /* 00780e18: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00780e1c: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00780e20: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00780e24: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00780e28: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00780e2a: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00780e2d: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 00780e30: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780e32: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 00780e36: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00780e38: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00780e3a: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 00780e3d: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 00780e3f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780e41: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00780e43: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00780e45: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 00780e47: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00780e49: fcom dword ptr [0x9798f0] */ fx_compare(ST(0), R_F32((u32)(0x9798f0u))); 
    /* 00780e4f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780e51: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780e52: jbe 0x780ea2 */ if ((fC||fZ)) goto L_00780ea2;
L_00780e54:; BB(0x00780e54);
    /* 00780e54: fcom dword ptr [esp + 0x48] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x48u))); 
    /* 00780e58: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780e5a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780e5b: jb 0x780e80 */ if (fC) goto L_00780e80;
L_00780e5d:; BB(0x00780e5d);
    /* 00780e5d: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780e5f: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780e61: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780e63: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780e65: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00780e67: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00780e6b: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00780e6d: fsub dword ptr [esp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x40u));
    /* 00780e71: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780e73: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00780e76: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 00780e78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780e7a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780e7c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780e7e: jmp 0x780eb2 */ goto L_00780eb2;
L_00780e80:; BB(0x00780e80);
    /* 00780e80: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780e82: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 00780e86: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00780e88: fchs  */ ST(0) = -ST(0);
    /* 00780e8a: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00780e8c: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00780e8e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780e90: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780e92: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780e94: fchs  */ ST(0) = -ST(0);
    /* 00780e96: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00780e98: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00780e9a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780e9c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780e9e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00780ea0: jmp 0x780eb2 */ goto L_00780eb2;
L_00780ea2:; BB(0x00780ea2);
    /* 00780ea2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780ea4: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00780ea6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00780ea8: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00780eaa: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780eac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780eae: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780eb0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00780eb2:; BB(0x00780eb2);
    /* 00780eb2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00780eb4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00780eb6: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00780eb8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00780eba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00780ebb: jb 0x780ee3 */ if (fC) goto L_00780ee3;
L_00780ebd:; BB(0x00780ebd);
    /* 00780ebd: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00780ec1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00780ec4: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00780ec8: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00780ece: jge 0x780fb0 */ if ((fS==fO)) goto L_00780fb0;
L_00780ed4:; BB(0x00780ed4);
    /* 00780ed4: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00780ed8: mov ecx, edx */ r_ecx = r_edx;
    /* 00780eda: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00780edd: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00780ee1: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
L_00780ee3:; BB(0x00780ee3);
    /* 00780ee3: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 00780ee5: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00780ee8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780eea: jne 0x780dce */ if (!fZ) goto L_00780dce;
L_00780ef0:; BB(0x00780ef0);
    /* 00780ef0: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
L_00780ef4:; BB(0x00780ef4);
    /* 00780ef4: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
    /* 00780efa: mov edx, dword ptr [0xa9b500] */ r_edx = R32((u32)(0xa9b500u));
    /* 00780f00: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780f02: jne 0x780f0f */ if (!fZ) goto L_00780f0f;
L_00780f04:; BB(0x00780f04);
    /* 00780f04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00780f06: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00780f0a: jmp 0x780fa4 */ goto L_00780fa4;
L_00780f0f:; BB(0x00780f0f);
    /* 00780f0f: mov edx, dword ptr [0xa9bc88] */ r_edx = R32((u32)(0xa9bc88u));
    /* 00780f15: mov dword ptr [0xa9bc8c], 0xa9bc84 */ W32((u32)(0xa9bc8cu), 0xa9bc84u);
    /* 00780f1f: mov ebx, 0xa9b500 */ r_ebx = 0xa9b500u;
    /* 00780f24: mov dword ptr [0xa9bc84], 0 */ W32((u32)(0xa9bc84u), 0x0u);
    /* 00780f2e: mov dword ptr [0xa9bc90], edx */ W32((u32)(0xa9bc90u), r_edx);
    /* 00780f34: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00780f38: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00780f39: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 00780f3d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00780f3e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00780f3f: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x780f44u); f_007a8c4c();
    /* 00780f44: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00780f47: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00780f49: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780f4b: je 0x780f9e */ if (fZ) goto L_00780f9e;
L_00780f4d:; BB(0x00780f4d);
    /* 00780f4d: mov eax, ebx */ r_eax = r_ebx;
L_00780f4f:; BB(0x00780f4f);
    /* 00780f4f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00780f51: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00780f54: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 00780f57: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00780f5a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780f5c: je 0x780f94 */ if (fZ) goto L_00780f94;
L_00780f5e:; BB(0x00780f5e);
    /* 00780f5e: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
L_00780f62:; BB(0x00780f62);
    /* 00780f62: mov dword ptr [esp + 0x14], 1 */ W32((u32)(r_esp+0x14u), 0x1u);
    /* 00780f6a: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00780f6e: mov edx, edi */ r_edx = r_edi;
    /* 00780f70: mov ecx, 0x8000 */ r_ecx = 0x8000u;
    /* 00780f75: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00780f79: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00780f7d: add edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00780f80: mov eax, ebp */ r_eax = r_ebp;
    /* 00780f82: call 0x780284 */ r_esp -= 4; W32(r_esp, 0x780f87u); f_00780284();
    /* 00780f87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780f89: jne 0x780fa4 */ if (!fZ) goto L_00780fa4;
L_00780f8b:; BB(0x00780f8b);
    /* 00780f8b: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00780f8e: jne 0x780f62 */ if (!fZ) goto L_00780f62;
L_00780f90:; BB(0x00780f90);
    /* 00780f90: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
L_00780f94:; BB(0x00780f94);
    /* 00780f94: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00780f97: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00780f9a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780f9c: jne 0x780f4f */ if (!fZ) goto L_00780f4f;
L_00780f9e:; BB(0x00780f9e);
    /* 00780f9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00780fa0: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
L_00780fa4:; BB(0x00780fa4);
    /* 00780fa4: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00780fa8: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00780fab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00780fac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00780fad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00780fae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00780faf: ret  */ FN_RET(0x00780d3c); r_esp += 4; return;
L_00780fb0:; BB(0x00780fb0);
    /* 00780fb0: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00780fb4: jmp 0x780ef4 */ goto L_00780ef4;
L_00780fb9:; BB(0x00780fb9);
    /* 00780fb9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00780fbb: jmp 0x780ef4 */ goto L_00780ef4;
}

void f_00780fc0(void) /* sub_780FC0 */
{
    FN_ENTER(0x00780fc0);
    /* 00780fc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00780fc1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00780fc2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00780fc3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00780fc4: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00780fc7: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 00780fcb: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00780fce: mov esi, dword ptr [edi + 8] */ r_esi = R32((u32)(r_edi+0x8u));
    /* 00780fd1: mov eax, 0xa9bc9c */ r_eax = 0xa9bc9cu;
    /* 00780fd6: lea edx, [edi + 0xc] */ r_edx = (u32)(r_edi+0xcu);
    /* 00780fd9: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00780fdd: mov edx, dword ptr [0xaab3f0] */ r_edx = R32((u32)(0xaab3f0u));
    /* 00780fe3: mov ecx, edx */ r_ecx = r_edx;
    /* 00780fe5: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00780fe8: je 0x7812b1 */ if (fZ) goto L_007812b1;
L_00780fee:; BB(0x00780fee);
    /* 00780fee: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00780ff1: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00780ff3: mov ebx, 0xa9b500 */ r_ebx = 0xa9b500u;
    /* 00780ff8: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00780ffb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00780ffd: je 0x78104b */ if (fZ) goto L_0078104b;
L_00780fff:; BB(0x00780fff);
    /* 00780fff: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
L_00781003:; BB(0x00781003);
    /* 00781003: test dword ptr [ecx + 0x14], esi */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781006: je 0x78103e */ if (fZ) goto L_0078103e;
L_00781008:; BB(0x00781008);
    /* 00781008: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0078100b: fsub dword ptr [edi + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0xcu));
    /* 0078100e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00781010: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00781013: fsub dword ptr [edi + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x14u));
    /* 00781016: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00781018: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078101a: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 0078101d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0078101f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00781021: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00781023: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00781025: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00781026: jb 0x78103e */ if (fC) goto L_0078103e;
L_00781028:; BB(0x00781028);
    /* 00781028: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0078102b: cmp ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00781031: jge 0x78129f */ if ((fS==fO)) goto L_0078129f;
L_00781037:; BB(0x00781037);
    /* 00781037: mov eax, ebx */ r_eax = r_ebx;
    /* 00781039: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078103c: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
L_0078103e:; BB(0x0078103e);
    /* 0078103e: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00781040: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00781043: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781045: jne 0x781003 */ if (!fZ) goto L_00781003;
L_00781047:; BB(0x00781047);
    /* 00781047: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
L_0078104b:; BB(0x0078104b);
    /* 0078104b: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 00781051: mov ebx, dword ptr [0xa9bc80] */ r_ebx = R32((u32)(0xa9bc80u));
    /* 00781057: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00781059: mov edx, 0xa9b504 */ r_edx = 0xa9b504u;
    /* 0078105e: mov ebp, dword ptr [0xa9b500] */ r_ebp = R32((u32)(0xa9b500u));
    /* 00781064: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781066: je 0x7812ba */ if (fZ) goto L_007812ba;
L_0078106c:; BB(0x0078106c);
    /* 0078106c: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
L_00781070:; BB(0x00781070);
    /* 00781070: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00781073: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 00781076: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00781079: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0078107b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0078107d: jle 0x781125 */ if ((fZ||fS!=fO)) goto L_00781125;
L_00781083:; BB(0x00781083);
    /* 00781083: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00781087: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0078108b: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
L_0078108f:; BB(0x0078108f);
    /* 0078108f: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 00781092: fsub dword ptr [edx + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0xcu));
    /* 00781095: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00781097: fld dword ptr [esi + 0x1c] */ FPUSH(R_F32((u32)(r_esi+0x1cu)));
    /* 0078109a: fsub dword ptr [edx + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x14u));
    /* 0078109d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0078109f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007810a1: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 007810a4: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007810a6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007810a8: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007810aa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007810ac: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007810ad: jb 0x781113 */ if (fC) goto L_00781113;
L_007810af:; BB(0x007810af);
    /* 007810af: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007810b2: cmp ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007810b8: jge 0x7812a8 */ if ((fS==fO)) goto L_007812a8;
L_007810be:; BB(0x007810be);
    /* 007810be: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 007810c1: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 007810c4: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 007810c8: mov word ptr [ebx + 2], ax */ W16((u32)(r_ebx+0x2u), (u16)r_eax);
    /* 007810cc: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 007810d0: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
    /* 007810d4: movzx eax, word ptr [esi + 6] */ r_eax = (u32)R16((u32)(r_esi+0x6u));
    /* 007810d8: mov word ptr [ebx + 6], ax */ W16((u32)(r_ebx+0x6u), (u16)r_eax);
    /* 007810dc: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 007810df: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 007810e2: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 007810e5: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 007810e8: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 007810eb: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 007810ee: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 007810f1: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 007810f4: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 007810f7: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 007810fa: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 007810fd: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 00781100: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 00781103: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 00781106: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0078110a: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0078110d: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 00781110: add ebx, 0x28 */ {  u32 a = r_ebx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00781113:; BB(0x00781113);
    /* 00781113: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00781116: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00781119: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078111b: jl 0x78108f */ if ((fS!=fO)) goto L_0078108f;
L_00781121:; BB(0x00781121);
    /* 00781121: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
L_00781125:; BB(0x00781125);
    /* 00781125: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 00781127: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078112a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078112c: jne 0x781070 */ if (!fZ) goto L_00781070;
L_00781132:; BB(0x00781132);
    /* 00781132: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00781134: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00781138: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
L_0078113c:; BB(0x0078113c);
    /* 0078113c: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
L_00781143:; BB(0x00781143);
    /* 00781143: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781145: jne 0x781151 */ if (!fZ) goto L_00781151;
L_00781147:; BB(0x00781147);
    /* 00781147: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00781149: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078114c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078114d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078114e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078114f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00781150: ret  */ FN_RET(0x00780fc0); r_esp += 4; return;
L_00781151:; BB(0x00781151);
    /* 00781151: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 00781154: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0078115a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0078115c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078115e: mov dword ptr [eax + 8], 0xffffffff */ W32((u32)(r_eax+0x8u), 0xffffffffu);
    /* 00781165: mov dword ptr [eax + 0xc], 0xbf800000 */ W32((u32)(r_eax+0xcu), 0xbf800000u);
    /* 0078116c: mov ebp, dword ptr [edi + 0x18] */ r_ebp = R32((u32)(r_edi+0x18u));
    /* 0078116f: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00781171: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00781173: jle 0x781291 */ if ((fZ||fS!=fO)) goto L_00781291;
L_00781179:; BB(0x00781179);
    /* 00781179: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 0078117d: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00781181: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00781185: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
L_00781189:; BB(0x00781189);
    /* 00781189: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 0078118d: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00781191: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 00781194: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 00781197: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 0078119a: fld dword ptr [edi + 0x14] */ FPUSH(R_F32((u32)(r_edi+0x14u)));
    /* 0078119d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078119f: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007811a3: fadd dword ptr [ebp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4u));
    /* 007811a6: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007811aa: fadd dword ptr [ebp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x8u));
    /* 007811ad: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 007811b1: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 007811b4: mov edi, dword ptr [0xa9bc80] */ r_edi = R32((u32)(0xa9bc80u));
    /* 007811ba: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 007811be: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 007811c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007811c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007811c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007811c5: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x7811cau); f_007a8c4c();
    /* 007811ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007811cd: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 007811d0: mov dword ptr [0xa9bc90], ebx */ W32((u32)(0xa9bc90u), r_ebx);
    /* 007811d6: mov dword ptr [0xa9bc94], 0x40000000 */ W32((u32)(0xa9bc94u), 0x40000000u);
    /* 007811e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007811e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007811e4: je 0x78122e */ if (fZ) goto L_0078122e;
L_007811e6:; BB(0x007811e6);
    /* 007811e6: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 007811ea: mov ebx, eax */ r_ebx = r_eax;
    /* 007811ec: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 007811f0: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
L_007811f4:; BB(0x007811f4);
    /* 007811f4: mov dword ptr [esp + 0x14], 3 */ W32((u32)(r_esp+0x14u), 0x3u);
    /* 007811fc: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00781200: mov eax, esi */ r_eax = r_esi;
    /* 00781202: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00781206: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 0078120a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078120c: call 0x780284 */ r_esp -= 4; W32(r_esp, 0x781211u); f_00780284();
    /* 00781211: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781213: je 0x78121a */ if (fZ) goto L_0078121a;
L_00781215:; BB(0x00781215);
    /* 00781215: mov ebx, 1 */ r_ebx = 0x1u;
L_0078121a:; BB(0x0078121a);
    /* 0078121a: mov edx, dword ptr [edi + 0x4c] */ r_edx = R32((u32)(r_edi+0x4cu));
    /* 0078121d: add edi, 0x28 */ {  u32 a = r_edi; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00781220: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781222: jne 0x7811f4 */ if (!fZ) goto L_007811f4;
L_00781224:; BB(0x00781224);
    /* 00781224: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 00781228: mov eax, ebx */ r_eax = r_ebx;
    /* 0078122a: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
L_0078122e:; BB(0x0078122e);
    /* 0078122e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781230: je 0x78126e */ if (fZ) goto L_0078126e;
L_00781232:; BB(0x00781232);
    /* 00781232: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00781236: fsub dword ptr [ebx] */ ST(0) = ST(0) - R_F32((u32)(r_ebx));
    /* 00781238: fmul dword ptr [ebx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0xcu));
    /* 0078123b: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0078123f: fsub dword ptr [ebx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x8u));
    /* 00781242: fmul dword ptr [ebx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x14u));
    /* 00781245: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00781247: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00781248: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0078124b: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x781250u); f_0082e900();
    /* 00781250: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00781254: fcom dword ptr [edx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_edx+0xcu))); 
    /* 00781257: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00781259: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078125a: jbe 0x7812c1 */ if ((fC||fZ)) goto L_007812c1;
L_0078125c:; BB(0x0078125c);
    /* 0078125c: mov ecx, edx */ r_ecx = r_edx;
    /* 0078125e: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00781262: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 00781265: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00781268: mov dword ptr [ecx], 1 */ W32((u32)(r_ecx), 0x1u);
L_0078126e:; BB(0x0078126e);
    /* 0078126e: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00781272: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00781276: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00781279: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078127c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078127f: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00781281: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00781285: jl 0x781189 */ if ((fS!=fO)) goto L_00781189;
L_0078128b:; BB(0x0078128b);
    /* 0078128b: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0078128f: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
L_00781291:; BB(0x00781291);
    /* 00781291: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00781293: jne 0x781297 */ if (!fZ) goto L_00781297;
L_00781295:; BB(0x00781295);
    /* 00781295: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00781297:; BB(0x00781297);
    /* 00781297: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078129a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078129b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078129c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078129d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078129e: ret  */ FN_RET(0x00780fc0); r_esp += 4; return;
L_0078129f:; BB(0x0078129f);
    /* 0078129f: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007812a3: jmp 0x78104b */ goto L_0078104b;
L_007812a8:; BB(0x007812a8);
    /* 007812a8: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 007812ac: jmp 0x781125 */ goto L_00781125;
L_007812b1:; BB(0x007812b1);
    /* 007812b1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007812b3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007812b5: jmp 0x781143 */ goto L_00781143;
L_007812ba:; BB(0x007812ba);
    /* 007812ba: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007812bc: jmp 0x78113c */ goto L_0078113c;
L_007812c1:; BB(0x007812c1);
    /* 007812c1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007812c3: jmp 0x78126e */ goto L_0078126e;
}

