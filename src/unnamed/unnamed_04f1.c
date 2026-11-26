#include "protos.h"

void f_004f12dc(void) /* sub_4F12DC */
{
    FN_ENTER(0x004f12dc);
    /* 004f12dc: mov eax, dword ptr [0xa72568] */ r_eax = R32((u32)(0xa72568u));
    /* 004f12e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f12e3: je 0x4f1397 */ if (fZ) goto L_004f1397;
L_004f12e9:; BB(0x004f12e9);
    /* 004f12e9: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004f12ec: mov eax, 0xa723e0 */ r_eax = 0xa723e0u;
    /* 004f12f1: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004f12f3: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 004f12f5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004f12f8: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 004f12fb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004f12fe: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 004f1301: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004f1304: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 004f1307: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 004f130a: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 004f130d: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004f1310: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 004f1313: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 004f1316: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 004f1319: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004f131c: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 004f131f: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004f1322: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 004f1325: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004f1328: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 004f132b: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 004f132e: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 004f1331: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 004f1334: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 004f1337: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004f133a: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 004f133d: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 004f1340: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 004f1343: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 004f1346: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 004f1349: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004f134c: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 004f134f: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004f1352: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 004f1355: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 004f1358: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 004f135b: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 004f135e: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 004f1361: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 004f1364: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 004f1367: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 004f136a: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 004f136d: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 004f1370: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 004f1373: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 004f1376: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 004f1379: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 004f137c: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 004f137f: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 004f1382: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 004f1385: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 004f1388: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 004f138b: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004f138e: mov eax, dword ptr [eax + 0x6c] */ r_eax = R32((u32)(r_eax+0x6cu));
    /* 004f1391: mov dword ptr [edx + 0x68], ecx */ W32((u32)(r_edx+0x68u), r_ecx);
    /* 004f1394: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
L_004f1397:; BB(0x004f1397);
    /* 004f1397: ret  */ FN_RET(0x004f12dc); r_esp += 4; return;
}

void f_004f1398(void) /* sub_4F1398 */
{
    FN_ENTER(0x004f1398);
    /* 004f1398: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f1399: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f139a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f139b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f139c: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f139f: mov edi, ecx */ r_edi = r_ecx;
    /* 004f13a1: mov ecx, dword ptr [edi + 0x4c] */ r_ecx = R32((u32)(r_edi+0x4cu));
    /* 004f13a4: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f13a7: je 0x4f14d6 */ if (fZ) goto L_004f14d6;
L_004f13ad:; BB(0x004f13ad);
    /* 004f13ad: fld dword ptr [0x91dddc] */ FPUSH(R_F32((u32)(0x91dddcu)));
    /* 004f13b3: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004f13b6: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004f13b8: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004f13ba: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004f13bc: fcom dword ptr [0x91e128] */ fx_compare(ST(0), R_F32((u32)(0x91e128u))); 
    /* 004f13c2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f13c4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f13c5: jbe 0x4f1c45 */ if ((fC||fZ)) goto L_004f1c45;
L_004f13cb:; BB(0x004f13cb);
    /* 004f13cb: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004f13cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f13cf: jle 0x4f1c4c */ if ((fZ||fS!=fO)) goto L_004f1c4c;
L_004f13d5:; BB(0x004f13d5);
    /* 004f13d5: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 004f13d9: lea ebx, [ebp + 0x16] */ r_ebx = (u32)(r_ebp+0x16u);
L_004f13dc:; BB(0x004f13dc);
    /* 004f13dc: mov edx, dword ptr [edi + 0x44] */ r_edx = R32((u32)(r_edi+0x44u));
    /* 004f13df: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 004f13e3: fild dword ptr [esp + 0x54] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x54u)));
    /* 004f13e7: fsub dword ptr [edi + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x58u));
    /* 004f13ea: lea eax, [ecx - 1] */ r_eax = (u32)(r_ecx+0xffffffffu);
    /* 004f13ed: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f13ef: jne 0x4f13f9 */ if (!fZ) goto L_004f13f9;
L_004f13f1:; BB(0x004f13f1);
    /* 004f13f1: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f13f3: imul edx, ebp */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ebp; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f13f6: add edx, dword ptr [edi + 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x30u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_004f13f9:; BB(0x004f13f9);
    /* 004f13f9: fld dword ptr [0x91e124] */ FPUSH(R_F32((u32)(0x91e124u)));
    /* 004f13ff: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f1401: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f1403: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f1404: je 0x4f1c53 */ if (fZ) goto L_004f1c53;
L_004f140a:; BB(0x004f140a);
    /* 004f140a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f140c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f140e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f140f: jbe 0x4f1445 */ if ((fC||fZ)) goto L_004f1445;
L_004f1411:; BB(0x004f1411);
    /* 004f1411: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1413: fld dword ptr [0x91e120] */ FPUSH(R_F32((u32)(0x91e120u)));
    /* 004f1419: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004f141b: fld dword ptr [0x91ddc4] */ FPUSH(R_F32((u32)(0x91ddc4u)));
    /* 004f1421: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004f1423: fadd dword ptr [0x91ddc8] */ ST(0) = ST(0) + R_F32((u32)(0x91ddc8u));
    /* 004f1429: fld dword ptr [0x91ddbc] */ FPUSH(R_F32((u32)(0x91ddbcu)));
    /* 004f142f: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004f1431: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f1433: fadd dword ptr [0x91ddc0] */ ST(0) = ST(0) + R_F32((u32)(0x91ddc0u));
    /* 004f1439: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f143b: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f143f: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 004f1443: jmp 0x4f147c */ goto L_004f147c;
L_004f1445:; BB(0x004f1445);
    /* 004f1445: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004f1447: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f1449: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f144a: jae 0x4f147c */ if (!fC) goto L_004f147c;
L_004f144c:; BB(0x004f144c);
    /* 004f144c: fld dword ptr [0x91e120] */ FPUSH(R_F32((u32)(0x91e120u)));
    /* 004f1452: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f1454: fld dword ptr [0x91ddd4] */ FPUSH(R_F32((u32)(0x91ddd4u)));
    /* 004f145a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004f145c: fadd dword ptr [0x91ddd8] */ ST(0) = ST(0) + R_F32((u32)(0x91ddd8u));
    /* 004f1462: fld dword ptr [0x91ddcc] */ FPUSH(R_F32((u32)(0x91ddccu)));
    /* 004f1468: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004f146a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f146c: fadd dword ptr [0x91ddd0] */ ST(0) = ST(0) + R_F32((u32)(0x91ddd0u));
    /* 004f1472: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f1474: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f1478: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
L_004f147c:; BB(0x004f147c);
    /* 004f147c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f147e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004f1480: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f1482: jle 0x4f18aa */ if ((fZ||fS!=fO)) goto L_004f18aa;
L_004f1488:; BB(0x004f1488);
    /* 004f1488: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 004f148c: mov edi, edx */ r_edi = r_edx;
    /* 004f148e: jmp 0x4f1494 */ goto L_004f1494;
L_004f1490:; BB(0x004f1490);
    /* 004f1490: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
L_004f1494:; BB(0x004f1494);
    /* 004f1494: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004f1498: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f149c: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 004f14a0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f14a4: mov dword ptr [esp], 0x21 */ W32((u32)(r_esp), 0x21u);
    /* 004f14ab: mov dword ptr [esp + 4], 0xc0440000 */ W32((u32)(r_esp+0x4u), 0xc0440000u);
    /* 004f14b3: mov dword ptr [esp + 0xc], 0x91ddb4 */ W32((u32)(r_esp+0xcu), 0x91ddb4u);
    /* 004f14bb: call 0x4e9d1c */ r_esp -= 4; W32(r_esp, 0x4f14c0u); f_004e9d1c();
    /* 004f14c0: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004f14c4: fadd dword ptr [0x91ddb0] */ ST(0) = ST(0) + R_F32((u32)(0x91ddb0u));
    /* 004f14ca: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f14cd: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f14cf: jl 0x4f1490 */ if ((fS!=fO)) goto L_004f1490;
L_004f14d1:; BB(0x004f14d1);
    /* 004f14d1: jmp 0x4f184e */ goto L_004f184e;
L_004f14d6:; BB(0x004f14d6);
    /* 004f14d6: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 004f14d9: shl ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004f14dc: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4f14e1u); f_0082dcbc();
    /* 004f14e1: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 004f14e5: fld dword ptr [0x91e120] */ FPUSH(R_F32((u32)(0x91e120u)));
    /* 004f14eb: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 004f14ef: fmul dword ptr [0x91e104] */ ST(0) = ST(0) * R_F32((u32)(0x91e104u));
    /* 004f14f5: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004f14f7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f14f9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f14fb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f14fc: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 004f14ff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f1501: jbe 0x4f1505 */ if ((fC||fZ)) goto L_004f1505;
L_004f1503:; BB(0x004f1503);
    /* 004f1503: fst st(1) */ ST(1) = ST(0);
L_004f1505:; BB(0x004f1505);
    /* 004f1505: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1507: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 004f150b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f150e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f1510: jl 0x4f151e */ if ((fS!=fO)) goto L_004f151e;
L_004f1512:; BB(0x004f1512);
    /* 004f1512: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1515: jl 0x4f1520 */ if ((fS!=fO)) goto L_004f1520;
L_004f1517:; BB(0x004f1517);
    /* 004f1517: mov eax, 9 */ r_eax = 0x9u;
    /* 004f151c: jmp 0x4f1520 */ goto L_004f1520;
L_004f151e:; BB(0x004f151e);
    /* 004f151e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f1520:; BB(0x004f1520);
    /* 004f1520: fld dword ptr [eax*4 + 0x91e0dc] */ FPUSH(R_F32((u32)(r_eax*4+0x91e0dcu)));
    /* 004f1527: movzx edx, byte ptr [0xa7238c] */ r_edx = (u32)R8((u32)(0xa7238cu));
    /* 004f152e: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 004f1532: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f1535: jne 0x4f1552 */ if (!fZ) goto L_004f1552;
L_004f1537:; BB(0x004f1537);
    /* 004f1537: fld dword ptr [0x91e0d8] */ FPUSH(R_F32((u32)(0x91e0d8u)));
    /* 004f153d: mov dword ptr [0xa72454], 0x3ea8f5c3 */ W32((u32)(0xa72454u), 0x3ea8f5c3u);
    /* 004f1547: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f154a: mov byte ptr [0xa7238c], dl */ W8((u32)(0xa7238cu), (u8)r_edx);
    /* 004f1550: jmp 0x4f1558 */ goto L_004f1558;
L_004f1552:; BB(0x004f1552);
    /* 004f1552: fld dword ptr [0xa72454] */ FPUSH(R_F32((u32)(0xa72454u)));
L_004f1558:; BB(0x004f1558);
    /* 004f1558: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f155b: jne 0x4f1570 */ if (!fZ) goto L_004f1570;
L_004f155d:; BB(0x004f155d);
    /* 004f155d: mov dword ptr [0xa72458], 0x3f28f5c3 */ W32((u32)(0xa72458u), 0x3f28f5c3u);
    /* 004f1567: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f156a: mov byte ptr [0xa7238c], dl */ W8((u32)(0xa7238cu), (u8)r_edx);
L_004f1570:; BB(0x004f1570);
    /* 004f1570: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f1573: jne 0x4f158b */ if (!fZ) goto L_004f158b;
L_004f1575:; BB(0x004f1575);
    /* 004f1575: mov dword ptr [0xa7245c], 0x42960000 */ W32((u32)(0xa7245cu), 0x42960000u);
    /* 004f157f: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004f1582: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f1585: mov byte ptr [0xa7238c], dl */ W8((u32)(0xa7238cu), (u8)r_edx);
L_004f158b:; BB(0x004f158b);
    /* 004f158b: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004f158e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f1590: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f1592: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004f1596: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f1597: jbe 0x4f1c5c */ if ((fC||fZ)) goto L_004f1c5c;
L_004f159d:; BB(0x004f159d);
    /* 004f159d: fld dword ptr [0xa72458] */ FPUSH(R_F32((u32)(0xa72458u)));
    /* 004f15a3: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 004f15a7: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004f15a9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f15ab: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f15ac: jb 0x4f15be */ if (fC) goto L_004f15be;
L_004f15ae:; BB(0x004f15ae);
    /* 004f15ae: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004f15b0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f15b2: fld dword ptr [0x91e120] */ FPUSH(R_F32((u32)(0x91e120u)));
    /* 004f15b8: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004f15bc: jmp 0x4f15cc */ goto L_004f15cc;
L_004f15be:; BB(0x004f15be);
    /* 004f15be: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f15c0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 004f15c4: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 004f15c6: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004f15c8: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_004f15cc:; BB(0x004f15cc);
    /* 004f15cc: fld dword ptr [0xa7245c] */ FPUSH(R_F32((u32)(0xa7245cu)));
    /* 004f15d2: mov ebx, dword ptr [0xa7245c] */ r_ebx = R32((u32)(0xa7245cu));
    /* 004f15d8: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004f15dc: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 004f15e0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f15e2: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 004f15e4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004f15e6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f15e8: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 004f15ec: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004f15f1: mov dword ptr [esp + 0x28], 0x43120000 */ W32((u32)(r_esp+0x28u), 0x43120000u);
    /* 004f15f9: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f15fc: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004f1600: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 004f1604: jne 0x4f161c */ if (!fZ) goto L_004f161c;
L_004f1606:; BB(0x004f1606);
    /* 004f1606: mov dword ptr [0xa72460], 9 */ W32((u32)(0xa72460u), 0x9u);
    /* 004f1610: or edx, 0xffffff08 */ {  u32 a = r_edx; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f1616: mov byte ptr [0xa7238c], dl */ W8((u32)(0xa7238cu), (u8)r_edx);
L_004f161c:; BB(0x004f161c);
    /* 004f161c: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 004f161f: shl ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004f1622: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4f1627u); f_0082dcbc();
    /* 004f1627: fild dword ptr [0xa72460] */ FPUSH((long double)(i32)R32((u32)(0xa72460u)));
    /* 004f162d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004f162f: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 004f1633: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 004f1637: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 004f163b: fsubr dword ptr [esp + 0x68] */ ST(0) = R_F32((u32)(r_esp+0x68u)) - ST(0);
    /* 004f163f: fdiv dword ptr [0x91e0cc] */ ST(0) = ST(0) / R_F32((u32)(0x91e0ccu));
    /* 004f1645: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 004f1649: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 004f164d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f164e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f164f: push 0xc0300000 */ { u32 v = 0xc0300000u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1654: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f1656: call 0x4e9eb8 */ r_esp -= 4; W32(r_esp, 0x4f165bu); f_004e9eb8();
    /* 004f165b: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 004f165f: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004f1663: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 004f1667: mov dword ptr [esp + 0x2c], 0x3f800000 */ W32((u32)(r_esp+0x2cu), 0x3f800000u);
    /* 004f166f: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 004f1673: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1674: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f1675: push 0xc0300000 */ { u32 v = 0xc0300000u; r_esp -= 4; W32(r_esp, v); }
    /* 004f167a: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004f167c: call 0x4e9eb8 */ r_esp -= 4; W32(r_esp, 0x4f1681u); f_004e9eb8();
    /* 004f1681: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1684: movzx edx, byte ptr [0xa7238c] */ r_edx = (u32)R8((u32)(0xa7238cu));
    /* 004f168b: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004f168e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_004f1692:; BB(0x004f1692);
    /* 004f1692: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f1695: jne 0x4f16ad */ if (!fZ) goto L_004f16ad;
L_004f1697:; BB(0x004f1697);
    /* 004f1697: mov dword ptr [0xa72464], 0x3ea8f5c3 */ W32((u32)(0xa72464u), 0x3ea8f5c3u);
    /* 004f16a1: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004f16a4: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f16a7: mov byte ptr [0xa7238c], dl */ W8((u32)(0xa7238cu), (u8)r_edx);
L_004f16ad:; BB(0x004f16ad);
    /* 004f16ad: fld dword ptr [0x91e0c8] */ FPUSH(R_F32((u32)(0x91e0c8u)));
    /* 004f16b3: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 004f16b7: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004f16b9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f16bb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f16bc: jbe 0x4f1c63 */ if ((fC||fZ)) goto L_004f1c63;
L_004f16c2:; BB(0x004f16c2);
    /* 004f16c2: fld dword ptr [0xa72464] */ FPUSH(R_F32((u32)(0xa72464u)));
    /* 004f16c8: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 004f16cc: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004f16ce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f16d0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f16d1: jb 0x4f16e3 */ if (fC) goto L_004f16e3;
L_004f16d3:; BB(0x004f16d3);
    /* 004f16d3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004f16d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f16d7: fld dword ptr [0x91e120] */ FPUSH(R_F32((u32)(0x91e120u)));
    /* 004f16dd: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004f16e1: jmp 0x4f16f1 */ goto L_004f16f1;
L_004f16e3:; BB(0x004f16e3);
    /* 004f16e3: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f16e5: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 004f16e9: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 004f16eb: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004f16ed: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_004f16f1:; BB(0x004f16f1);
    /* 004f16f1: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f16f4: jne 0x4f1716 */ if (!fZ) goto L_004f1716;
L_004f16f6:; BB(0x004f16f6);
    /* 004f16f6: mov dword ptr [0xa72468], 0x42600000 */ W32((u32)(0xa72468u), 0x42600000u);
    /* 004f1700: or edx, 0xffffff20 */ {  u32 a = r_edx; u32 b = 0xffffff20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f1706: mov byte ptr [0xa7238c], dl */ W8((u32)(0xa7238cu), (u8)r_edx);
    /* 004f170c: mov dword ptr [0xa7246c], 0x43120000 */ W32((u32)(0xa7246cu), 0x43120000u);
L_004f1716:; BB(0x004f1716);
    /* 004f1716: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 004f171a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f171e: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 004f1725: mov dword ptr [esp + 4], 0xc01c0000 */ W32((u32)(r_esp+0x4u), 0xc01c0000u);
    /* 004f172d: mov dword ptr [esp + 8], 0xa72468 */ W32((u32)(r_esp+0x8u), 0xa72468u);
    /* 004f1735: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f173au); f_004e9ef8();
    /* 004f173a: movzx edx, byte ptr [0xa7238c] */ r_edx = (u32)R8((u32)(0xa7238cu));
    /* 004f1741: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004f1744: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_004f1748:; BB(0x004f1748);
    /* 004f1748: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f174b: jne 0x4f176b */ if (!fZ) goto L_004f176b;
L_004f174d:; BB(0x004f174d);
    /* 004f174d: fld dword ptr [0x91e0d4] */ FPUSH(R_F32((u32)(0x91e0d4u)));
    /* 004f1753: mov dword ptr [0xa72470], 0x3f28f5c3 */ W32((u32)(0xa72470u), 0x3f28f5c3u);
    /* 004f175d: or edx, 0xffffff40 */ {  u32 a = r_edx; u32 b = 0xffffff40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f1763: mov byte ptr [0xa7238c], dl */ W8((u32)(0xa7238cu), (u8)r_edx);
    /* 004f1769: jmp 0x4f1771 */ goto L_004f1771;
L_004f176b:; BB(0x004f176b);
    /* 004f176b: fld dword ptr [0xa72470] */ FPUSH(R_F32((u32)(0xa72470u)));
L_004f1771:; BB(0x004f1771);
    /* 004f1771: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 004f1775: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004f1777: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f1779: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f177a: jbe 0x4f1c6a */ if ((fC||fZ)) goto L_004f1c6a;
L_004f1780:; BB(0x004f1780);
    /* 004f1780: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 004f1784: fld dword ptr [0x91e0b8] */ FPUSH(R_F32((u32)(0x91e0b8u)));
    /* 004f178a: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 004f178d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f178f: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 004f1791: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f1793: fsubr dword ptr [0x91e0bc] */ ST(0) = R_F32((u32)(0x91e0bcu)) - ST(0);
    /* 004f1799: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 004f179b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f179d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f179f: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004f17a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f17a5: mov ebp, 0 */ r_ebp = 0x0u;
    /* 004f17aa: mov dword ptr [esp + 0x30], 0x43160000 */ W32((u32)(r_esp+0x30u), 0x43160000u);
    /* 004f17b2: mov edx, 0x42ce0000 */ r_edx = 0x42ce0000u;
    /* 004f17b7: jle 0x4f1c34 */ if ((fZ||fS!=fO)) goto L_004f1c34;
L_004f17bd:; BB(0x004f17bd);
    /* 004f17bd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f17bf: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 004f17c3: fmul dword ptr [esp + 0x64] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x64u));
    /* 004f17c7: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 004f17cb: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004f17cf: jmp 0x4f17d5 */ goto L_004f17d5;
L_004f17d1:; BB(0x004f17d1);
    /* 004f17d1: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_004f17d5:; BB(0x004f17d5);
    /* 004f17d5: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 004f17d9: cmp ebp, dword ptr [edi + 0x54] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x54u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f17dc: mov ebx, 0x21 */ r_ebx = 0x21u;
    /* 004f17e1: jne 0x4f181e */ if (!fZ) goto L_004f181e;
L_004f17e3:; BB(0x004f17e3);
    /* 004f17e3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f17e5: mov eax, dword ptr [0xa720ac] */ r_eax = R32((u32)(0xa720acu));
    /* 004f17ea: mov ebx, 0x22 */ r_ebx = 0x22u;
    /* 004f17ef: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f17f2: je 0x4f181a */ if (fZ) goto L_004f181a;
L_004f17f4:; BB(0x004f17f4);
    /* 004f17f4: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 004f17f7: shl ecx, 0xc */ { u32 c = (12u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004f17fa: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4f17ffu); f_0082dcbc();
    /* 004f17ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f1800: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004f1803: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4f1808u); f_0082e900();
    /* 004f1808: fmul dword ptr [0x91e10c] */ ST(0) = ST(0) * R_F32((u32)(0x91e10cu));
    /* 004f180e: fadd dword ptr [0x91e0b0] */ ST(0) = ST(0) + R_F32((u32)(0x91e0b0u));
    /* 004f1814: fmul dword ptr [esp + 0x64] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x64u));
    /* 004f1818: jmp 0x4f181e */ goto L_004f181e;
L_004f181a:; BB(0x004f181a);
    /* 004f181a: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
L_004f181e:; BB(0x004f181e);
    /* 004f181e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f1822: mov dword ptr [esp + 4], 0xc01c0000 */ W32((u32)(r_esp+0x4u), 0xc01c0000u);
    /* 004f182a: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004f182d: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 004f1831: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f1835: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f183au); f_004e9ef8();
    /* 004f183a: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004f183e: fadd dword ptr [0x91e0ac] */ ST(0) = ST(0) + R_F32((u32)(0x91e0acu));
    /* 004f1844: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004f1847: cmp ebp, dword ptr [edi + 0x50] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x50u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f184a: jl 0x4f17d1 */ if ((fS!=fO)) goto L_004f17d1;
L_004f184c:; BB(0x004f184c);
    /* 004f184c: jmp 0x4f18b0 */ goto L_004f18b0;
L_004f184e:; BB(0x004f184e);
    /* 004f184e: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
L_004f1852:; BB(0x004f1852);
    /* 004f1852: fadd dword ptr [0x91ddac] */ ST(0) = ST(0) + R_F32((u32)(0x91ddacu));
    /* 004f1858: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004f185c: fadd dword ptr [0x91dda8] */ ST(0) = ST(0) + R_F32((u32)(0x91dda8u));
    /* 004f1862: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f1864: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f1868: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004f186c: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f1870: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 004f1874: mov dword ptr [esp + 4], 0xc0440000 */ W32((u32)(r_esp+0x4u), 0xc0440000u);
    /* 004f187c: mov dword ptr [esp + 0xc], 0x91dda0 */ W32((u32)(r_esp+0xcu), 0x91dda0u);
    /* 004f1884: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004f1887: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 004f188b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f188f: call 0x4e9d1c */ r_esp -= 4; W32(r_esp, 0x4f1894u); f_004e9d1c();
    /* 004f1894: mov ecx, dword ptr [edi + 0x4c] */ r_ecx = R32((u32)(r_edi+0x4cu));
L_004f1897:; BB(0x004f1897);
    /* 004f1897: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f189a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004f189d: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f189f: jl 0x4f13dc */ if ((fS!=fO)) goto L_004f13dc;
L_004f18a5:; BB(0x004f18a5);
    /* 004f18a5: jmp 0x4f14d6 */ goto L_004f14d6;
L_004f18aa:; BB(0x004f18aa);
    /* 004f18aa: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004f18ae: jmp 0x4f1852 */ goto L_004f1852;
L_004f18b0:; BB(0x004f18b0);
    /* 004f18b0: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 004f18b3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f18b6: jg 0x4f18be */ if ((!fZ&&fS==fO)) goto L_004f18be;
L_004f18b8:; BB(0x004f18b8);
    /* 004f18b8: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004f18bc: jmp 0x4f1906 */ goto L_004f1906;
L_004f18be:; BB(0x004f18be);
    /* 004f18be: fadd dword ptr [0x91e0a8] */ ST(0) = ST(0) + R_F32((u32)(0x91e0a8u));
    /* 004f18c4: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004f18c8: fadd dword ptr [0x91e0a4] */ ST(0) = ST(0) + R_F32((u32)(0x91e0a4u));
    /* 004f18ce: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 004f18d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f18d3: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004f18d7: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 004f18db: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f18df: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004f18e3: mov dword ptr [esp + 4], 0xc01c0000 */ W32((u32)(r_esp+0x4u), 0xc01c0000u);
    /* 004f18eb: mov dword ptr [esp + 0xc], 0x91e09c */ W32((u32)(r_esp+0xcu), 0x91e09cu);
    /* 004f18f3: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 004f18f7: add eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f18fa: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004f18fd: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004f1901: call 0x4e9d1c */ r_esp -= 4; W32(r_esp, 0x4f1906u); f_004e9d1c();
L_004f1906:; BB(0x004f1906);
    /* 004f1906: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004f190a: fsub dword ptr [0x91e098] */ ST(0) = ST(0) - R_F32((u32)(0x91e098u));
    /* 004f1910: fld dword ptr [0x91e094] */ FPUSH(R_F32((u32)(0x91e094u)));
    /* 004f1916: mov eax, dword ptr [edi + 0x54] */ r_eax = R32((u32)(r_edi+0x54u));
    /* 004f1919: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 004f191d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f191f: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 004f1923: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f1925: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f1929: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f192b: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004f192f: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 004f1933: mov dword ptr [esp + 0x38], 0x43150000 */ W32((u32)(r_esp+0x38u), 0x43150000u);
    /* 004f193b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004f193f: add eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f1942: mov dword ptr [esp + 4], 0xc01c0000 */ W32((u32)(r_esp+0x4u), 0xc01c0000u);
    /* 004f194a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004f194d: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f1952u); f_004e9ef8();
    /* 004f1952: fld dword ptr [0x91e08c] */ FPUSH(R_F32((u32)(0x91e08cu)));
    /* 004f1958: fadd dword ptr [esp + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x5cu));
    /* 004f195c: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 004f1960: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f1964: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004f1968: mov dword ptr [esp + 0x38], 0x43160000 */ W32((u32)(r_esp+0x38u), 0x43160000u);
    /* 004f1970: mov dword ptr [esp], 0x20 */ W32((u32)(r_esp), 0x20u);
    /* 004f1977: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 004f197b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f197f: mov dword ptr [esp + 4], 0xc01c0000 */ W32((u32)(r_esp+0x4u), 0xc01c0000u);
    /* 004f1987: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f198cu); f_004e9ef8();
    /* 004f198c: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004f1990: fadd dword ptr [0x91e084] */ ST(0) = ST(0) + R_F32((u32)(0x91e084u));
    /* 004f1996: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 004f199a: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 004f199d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f199f: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004f19a3: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f19a7: add eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f19aa: mov dword ptr [esp + 0x38], 0x43270000 */ W32((u32)(r_esp+0x38u), 0x43270000u);
    /* 004f19b2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004f19b5: mov dword ptr [esp + 4], 0xc01c0000 */ W32((u32)(r_esp+0x4u), 0xc01c0000u);
    /* 004f19bd: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 004f19c1: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004f19c5: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f19cau); f_004e9ef8();
L_004f19ca:; BB(0x004f19ca);
    /* 004f19ca: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 004f19cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f19cf: jne 0x4f1a31 */ if (!fZ) goto L_004f1a31;
L_004f19d1:; BB(0x004f19d1);
    /* 004f19d1: fld dword ptr [0x91dd50] */ FPUSH(R_F32((u32)(0x91dd50u)));
    /* 004f19d7: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004f19da: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f19dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f19de: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f19df: jbe 0x4f1c71 */ if ((fC||fZ)) goto L_004f1c71;
L_004f19e5:; BB(0x004f19e5);
    /* 004f19e5: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004f19e7: fdiv dword ptr [0x91e108] */ ST(0) = ST(0) / R_F32((u32)(0x91e108u));
    /* 004f19ed: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f19ef: fld dword ptr [0x91dd4c] */ FPUSH(R_F32((u32)(0x91dd4cu)));
    /* 004f19f5: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 004f19f8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004f19fa: mov ebp, 1 */ r_ebp = 0x1u;
    /* 004f19ff: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f1a01: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f1a03: jle 0x4f1c7d */ if ((fZ||fS!=fO)) goto L_004f1c7d;
L_004f1a09:; BB(0x004f1a09);
    /* 004f1a09: mov eax, 0x43180000 */ r_eax = 0x43180000u;
    /* 004f1a0e: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004f1a12: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 004f1a15: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f1a17: jne 0x4f1be8 */ if (!fZ) goto L_004f1be8;
L_004f1a1d:; BB(0x004f1a1d);
    /* 004f1a1d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f1a1f: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
L_004f1a23:; BB(0x004f1a23);
    /* 004f1a23: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004f1a25: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f1a28: test eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1a2a: je 0x4f1a23 */ if (fZ) goto L_004f1a23;
L_004f1a2c:; BB(0x004f1a2c);
    /* 004f1a2c: jmp 0x4f1b4e */ goto L_004f1b4e;
L_004f1a31:; BB(0x004f1a31);
    /* 004f1a31: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1a34: jne 0x4f1b46 */ if (!fZ) goto L_004f1b46;
L_004f1a3a:; BB(0x004f1a3a);
    /* 004f1a3a: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004f1a3d: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 004f1a40: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f1a43: je 0x4f1aa5 */ if (fZ) goto L_004f1aa5;
L_004f1a45:; BB(0x004f1a45);
    /* 004f1a45: fld dword ptr [0x91dd7c] */ FPUSH(R_F32((u32)(0x91dd7cu)));
    /* 004f1a4b: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004f1a4e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f1a50: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f1a52: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f1a53: jbe 0x4f1c89 */ if ((fC||fZ)) goto L_004f1c89;
L_004f1a59:; BB(0x004f1a59);
    /* 004f1a59: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004f1a5b: fdiv dword ptr [0x91e108] */ ST(0) = ST(0) / R_F32((u32)(0x91e108u));
    /* 004f1a61: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f1a63: fld dword ptr [0x91dd78] */ FPUSH(R_F32((u32)(0x91dd78u)));
    /* 004f1a69: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 004f1a6c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004f1a6e: mov ebp, 1 */ r_ebp = 0x1u;
    /* 004f1a73: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f1a75: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f1a77: jle 0x4f1c95 */ if ((fZ||fS!=fO)) goto L_004f1c95;
L_004f1a7d:; BB(0x004f1a7d);
    /* 004f1a7d: mov eax, 0x43180000 */ r_eax = 0x43180000u;
    /* 004f1a82: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004f1a86: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 004f1a89: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f1a8b: jne 0x4f1be0 */ if (!fZ) goto L_004f1be0;
L_004f1a91:; BB(0x004f1a91);
    /* 004f1a91: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f1a93: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
L_004f1a97:; BB(0x004f1a97);
    /* 004f1a97: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004f1a99: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f1a9c: test ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1a9e: je 0x4f1a97 */ if (fZ) goto L_004f1a97;
L_004f1aa0:; BB(0x004f1aa0);
    /* 004f1aa0: jmp 0x4f1b7f */ goto L_004f1b7f;
L_004f1aa5:; BB(0x004f1aa5);
    /* 004f1aa5: fld dword ptr [0x91dd9c] */ FPUSH(R_F32((u32)(0x91dd9cu)));
    /* 004f1aab: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004f1aae: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f1ab0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f1ab2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f1ab3: jbe 0x4f1ca1 */ if ((fC||fZ)) goto L_004f1ca1;
L_004f1ab9:; BB(0x004f1ab9);
    /* 004f1ab9: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004f1abb: fdiv dword ptr [0x91e108] */ ST(0) = ST(0) / R_F32((u32)(0x91e108u));
    /* 004f1ac1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f1ac3: mov ecx, 0x42e20000 */ r_ecx = 0x42e20000u;
    /* 004f1ac8: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004f1acb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004f1acd: mov edx, 0x43180000 */ r_edx = 0x43180000u;
    /* 004f1ad2: mov ebp, 1 */ r_ebp = 0x1u;
    /* 004f1ad7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f1ad9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f1adb: jle 0x4f1cad */ if ((fZ||fS!=fO)) goto L_004f1cad;
L_004f1ae1:; BB(0x004f1ae1);
    /* 004f1ae1: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 004f1ae5: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 004f1ae9: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 004f1aed: jmp 0x4f1af3 */ goto L_004f1af3;
L_004f1aef:; BB(0x004f1aef);
    /* 004f1aef: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_004f1af3:; BB(0x004f1af3);
    /* 004f1af3: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 004f1af6: test ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1af8: jne 0x4f1b03 */ if (!fZ) goto L_004f1b03;
L_004f1afa:; BB(0x004f1afa);
    /* 004f1afa: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004f1afc: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f1aff: test ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1b01: je 0x4f1afa */ if (fZ) goto L_004f1afa;
L_004f1b03:; BB(0x004f1b03);
    /* 004f1b03: mov eax, dword ptr [esi*4 + 0x91dd84] */ r_eax = R32((u32)(r_esi*4+0x91dd84u));
    /* 004f1b0a: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 004f1b0e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f1b12: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004f1b15: mov dword ptr [esp + 4], 0xc01c0000 */ W32((u32)(r_esp+0x4u), 0xc01c0000u);
    /* 004f1b1d: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 004f1b21: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004f1b25: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f1b2au); f_004e9ef8();
    /* 004f1b2a: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004f1b2e: fadd dword ptr [0x91dd80] */ ST(0) = ST(0) + R_F32((u32)(0x91dd80u));
    /* 004f1b34: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f1b37: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004f1b39: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f1b3c: cmp ebx, dword ptr [edi + 0x30] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x30u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1b3f: jl 0x4f1aef */ if ((fS!=fO)) goto L_004f1aef;
L_004f1b41:; BB(0x004f1b41);
    /* 004f1b41: jmp 0x4f1bf3 */ goto L_004f1bf3;
L_004f1b46:; BB(0x004f1b46);
    /* 004f1b46: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f1b49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f1b4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1b4b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f1b4c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f1b4d: ret  */ FN_RET(0x004f1398); r_esp += 4; return;
L_004f1b4e:; BB(0x004f1b4e);
    /* 004f1b4e: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1b51: jl 0x4f1bfd */ if ((fS!=fO)) goto L_004f1bfd;
L_004f1b57:; BB(0x004f1b57);
    /* 004f1b57: fadd dword ptr [0x91dd28] */ ST(0) = ST(0) + R_F32((u32)(0x91dd28u));
    /* 004f1b5d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f1b60: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004f1b62: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f1b65: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1b67: jge 0x4f1b75 */ if ((fS==fO)) goto L_004f1b75;
L_004f1b69:; BB(0x004f1b69);
    /* 004f1b69: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 004f1b6c: test eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1b6e: jne 0x4f1b4e */ if (!fZ) goto L_004f1b4e;
L_004f1b70:; BB(0x004f1b70);
    /* 004f1b70: jmp 0x4f1a23 */ goto L_004f1a23;
L_004f1b75:; BB(0x004f1b75);
    /* 004f1b75: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1b77: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f1b7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f1b7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1b7c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f1b7d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f1b7e: ret  */ FN_RET(0x004f1398); r_esp += 4; return;
L_004f1b7f:; BB(0x004f1b7f);
    /* 004f1b7f: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1b82: jl 0x4f1bac */ if ((fS!=fO)) goto L_004f1bac;
L_004f1b84:; BB(0x004f1b84);
    /* 004f1b84: fadd dword ptr [0x91dd54] */ ST(0) = ST(0) + R_F32((u32)(0x91dd54u));
    /* 004f1b8a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f1b8d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004f1b8f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f1b92: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1b94: jge 0x4f1ba2 */ if ((fS==fO)) goto L_004f1ba2;
L_004f1b96:; BB(0x004f1b96);
    /* 004f1b96: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 004f1b99: test ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1b9b: jne 0x4f1b7f */ if (!fZ) goto L_004f1b7f;
L_004f1b9d:; BB(0x004f1b9d);
    /* 004f1b9d: jmp 0x4f1a97 */ goto L_004f1a97;
L_004f1ba2:; BB(0x004f1ba2);
    /* 004f1ba2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1ba4: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f1ba7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f1ba8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1ba9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f1baa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f1bab: ret  */ FN_RET(0x004f1398); r_esp += 4; return;
L_004f1bac:; BB(0x004f1bac);
    /* 004f1bac: mov eax, dword ptr [esi*4 + 0x91dd58] */ r_eax = R32((u32)(r_esi*4+0x91dd58u));
    /* 004f1bb3: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004f1bb7: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004f1bbb: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f1bbf: mov dword ptr [esp + 4], 0xc01c0000 */ W32((u32)(r_esp+0x4u), 0xc01c0000u);
    /* 004f1bc7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004f1bca: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 004f1bce: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004f1bd2: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f1bd7u); f_004e9ef8();
    /* 004f1bd7: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004f1bdb: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 004f1bde: jmp 0x4f1b84 */ goto L_004f1b84;
L_004f1be0:; BB(0x004f1be0);
    /* 004f1be0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f1be2: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 004f1be6: jmp 0x4f1b7f */ goto L_004f1b7f;
L_004f1be8:; BB(0x004f1be8);
    /* 004f1be8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f1bea: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 004f1bee: jmp 0x4f1b4e */ goto L_004f1b4e;
L_004f1bf3:; BB(0x004f1bf3);
    /* 004f1bf3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1bf5: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f1bf8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f1bf9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1bfa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f1bfb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f1bfc: ret  */ FN_RET(0x004f1398); r_esp += 4; return;
L_004f1bfd:; BB(0x004f1bfd);
    /* 004f1bfd: mov eax, dword ptr [esi*4 + 0x91dd2c] */ r_eax = R32((u32)(r_esi*4+0x91dd2cu));
    /* 004f1c04: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 004f1c08: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004f1c0c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f1c10: mov dword ptr [esp + 4], 0xc01c0000 */ W32((u32)(r_esp+0x4u), 0xc01c0000u);
    /* 004f1c18: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004f1c1b: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 004f1c1f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004f1c23: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f1c28u); f_004e9ef8();
    /* 004f1c28: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f1c2c: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 004f1c2f: jmp 0x4f1b57 */ goto L_004f1b57;
L_004f1c34:; BB(0x004f1c34);
    /* 004f1c34: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 004f1c38: fmul dword ptr [esp + 0x64] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x64u));
    /* 004f1c3c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 004f1c40: jmp 0x4f18b0 */ goto L_004f18b0;
L_004f1c45:; BB(0x004f1c45);
    /* 004f1c45: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1c47: jmp 0x4f14d6 */ goto L_004f14d6;
L_004f1c4c:; BB(0x004f1c4c);
    /* 004f1c4c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1c4e: jmp 0x4f14d6 */ goto L_004f14d6;
L_004f1c53:; BB(0x004f1c53);
    /* 004f1c53: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1c55: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1c57: jmp 0x4f1897 */ goto L_004f1897;
L_004f1c5c:; BB(0x004f1c5c);
    /* 004f1c5c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1c5e: jmp 0x4f1692 */ goto L_004f1692;
L_004f1c63:; BB(0x004f1c63);
    /* 004f1c63: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1c65: jmp 0x4f1748 */ goto L_004f1748;
L_004f1c6a:; BB(0x004f1c6a);
    /* 004f1c6a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1c6c: jmp 0x4f19ca */ goto L_004f19ca;
L_004f1c71:; BB(0x004f1c71);
    /* 004f1c71: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004f1c73: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1c75: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f1c78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f1c79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1c7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f1c7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f1c7c: ret  */ FN_RET(0x004f1398); r_esp += 4; return;
L_004f1c7d:; BB(0x004f1c7d);
    /* 004f1c7d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1c7f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1c81: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f1c84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f1c85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1c86: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f1c87: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f1c88: ret  */ FN_RET(0x004f1398); r_esp += 4; return;
L_004f1c89:; BB(0x004f1c89);
    /* 004f1c89: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004f1c8b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1c8d: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f1c90: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f1c91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1c92: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f1c93: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f1c94: ret  */ FN_RET(0x004f1398); r_esp += 4; return;
L_004f1c95:; BB(0x004f1c95);
    /* 004f1c95: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1c97: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1c99: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f1c9c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f1c9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1c9e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f1c9f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f1ca0: ret  */ FN_RET(0x004f1398); r_esp += 4; return;
L_004f1ca1:; BB(0x004f1ca1);
    /* 004f1ca1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004f1ca3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1ca5: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f1ca8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f1ca9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1caa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f1cab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f1cac: ret  */ FN_RET(0x004f1398); r_esp += 4; return;
L_004f1cad:; BB(0x004f1cad);
    /* 004f1cad: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1caf: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f1cb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f1cb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1cb4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f1cb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f1cb6: ret  */ FN_RET(0x004f1398); r_esp += 4; return;
}

void f_004f1cb8(void) /* sub_4F1CB8 */
{
    FN_ENTER(0x004f1cb8);
    /* 004f1cb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f1cb9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f1cba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f1cbb: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f1cbd: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 004f1cc0: add dword ptr [ebx + 0x2c], 1 */ { u32 ad = (u32)(r_ebx+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004f1cc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f1cc6: je 0x4f1f3d */ if (fZ) goto L_004f1f3d;
L_004f1ccc:; BB(0x004f1ccc);
    /* 004f1ccc: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004f1ccf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 004f1cd1: jne 0x4f1d07 */ if (!fZ) goto L_004f1d07;
L_004f1cd3:; BB(0x004f1cd3);
    /* 004f1cd3: fld dword ptr [0x91e12c] */ FPUSH(R_F32((u32)(0x91e12cu)));
    /* 004f1cd9: fadd dword ptr [ebx + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x34u));
    /* 004f1cdc: fcom dword ptr [0x91e054] */ fx_compare(ST(0), R_F32((u32)(0x91e054u))); 
    /* 004f1ce2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f1ce4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f1ce5: jbe 0x4f1cee */ if ((fC||fZ)) goto L_004f1cee;
L_004f1ce7:; BB(0x004f1ce7);
    /* 004f1ce7: fstp dword ptr [ebx + 0x34] */ W_F32((u32)(r_ebx+0x34u), ST(0)); FPOP();
    /* 004f1cea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f1ceb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1cec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f1ced: ret  */ FN_RET(0x004f1cb8); r_esp += 4; return;
L_004f1cee:; BB(0x004f1cee);
    /* 004f1cee: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1cf0: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 004f1cf4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f1cf6: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 004f1cf9: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f1cff: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
L_004f1d03:; BB(0x004f1d03);
    /* 004f1d03: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f1d04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1d05: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f1d06: ret  */ FN_RET(0x004f1cb8); r_esp += 4; return;
L_004f1d07:; BB(0x004f1d07);
    /* 004f1d07: fld dword ptr [0x91e130] */ FPUSH(R_F32((u32)(0x91e130u)));
    /* 004f1d0d: fadd dword ptr [ebx + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x34u));
    /* 004f1d10: fcom dword ptr [0x91e058] */ fx_compare(ST(0), R_F32((u32)(0x91e058u))); 
    /* 004f1d16: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f1d18: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f1d19: jbe 0x4f1d27 */ if ((fC||fZ)) goto L_004f1d27;
L_004f1d1b:; BB(0x004f1d1b);
    /* 004f1d1b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1d1d: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004f1d22: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 004f1d25: jmp 0x4f1d2a */ goto L_004f1d2a;
L_004f1d27:; BB(0x004f1d27);
    /* 004f1d27: fstp dword ptr [ebx + 0x34] */ W_F32((u32)(r_ebx+0x34u), ST(0)); FPOP();
L_004f1d2a:; BB(0x004f1d2a);
    /* 004f1d2a: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f1d30: call 0x4f4010 */ r_esp -= 4; W32(r_esp, 0x4f1d35u); f_004f4010();
    /* 004f1d35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f1d36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1d38: je 0x4f1d65 */ if (fZ) goto L_004f1d65;
L_004f1d3a:; BB(0x004f1d3a);
    /* 004f1d3a: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 004f1d3d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f1d40: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1d43: jl 0x4f1d4e */ if ((fS!=fO)) goto L_004f1d4e;
L_004f1d45:; BB(0x004f1d45);
    /* 004f1d45: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
    /* 004f1d4c: jmp 0x4f1d51 */ goto L_004f1d51;
L_004f1d4e:; BB(0x004f1d4e);
    /* 004f1d4e: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
L_004f1d51:; BB(0x004f1d51);
    /* 004f1d51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f1d53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1d54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1d55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1d56: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 004f1d5b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f1d60u); f_00814298();
    /* 004f1d60: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1d63: jmp 0x4f1d98 */ goto L_004f1d98;
L_004f1d65:; BB(0x004f1d65);
    /* 004f1d65: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f1d6b: call 0x4f4010 */ r_esp -= 4; W32(r_esp, 0x4f1d70u); f_004f4010();
    /* 004f1d70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f1d71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1d73: je 0x4f1d98 */ if (fZ) goto L_004f1d98;
L_004f1d75:; BB(0x004f1d75);
    /* 004f1d75: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 004f1d78: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f1d7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f1d7d: jl 0x4f1f48 */ if ((fS!=fO)) goto L_004f1f48;
L_004f1d83:; BB(0x004f1d83);
    /* 004f1d83: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
L_004f1d86:; BB(0x004f1d86);
    /* 004f1d86: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f1d88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1d89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1d8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1d8b: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 004f1d90: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f1d95u); f_00814298();
    /* 004f1d95: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f1d98:; BB(0x004f1d98);
    /* 004f1d98: mov edi, dword ptr [ebx + 0x24] */ r_edi = R32((u32)(r_ebx+0x24u));
    /* 004f1d9b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1d9d: jne 0x4f1e2d */ if (!fZ) goto L_004f1e2d;
L_004f1da3:; BB(0x004f1da3);
    /* 004f1da3: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f1da9: mov ebp, dword ptr [ebx + 0x1c] */ r_ebp = R32((u32)(r_ebx+0x1cu));
    /* 004f1dac: call 0x4f4010 */ r_esp -= 4; W32(r_esp, 0x4f1db1u); f_004f4010();
    /* 004f1db1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f1db2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1db4: je 0x4f1de6 */ if (fZ) goto L_004f1de6;
L_004f1db6:; BB(0x004f1db6);
    /* 004f1db6: movsx eax, word ptr [ebp + 0x40] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x40u));
    /* 004f1dba: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f1dbd: mov word ptr [ebp + 0x40], ax */ W16((u32)(r_ebp+0x40u), (u16)r_eax);
    /* 004f1dc1: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004f1dc4: cmp edx, dword ptr [ebx + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1dc7: jl 0x4f1dcf */ if ((fS!=fO)) goto L_004f1dcf;
L_004f1dc9:; BB(0x004f1dc9);
    /* 004f1dc9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f1dcb: mov word ptr [ebp + 0x40], ax */ W16((u32)(r_ebp+0x40u), (u16)r_eax);
L_004f1dcf:; BB(0x004f1dcf);
    /* 004f1dcf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f1dd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1dd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1dd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1dd4: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 004f1dd9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f1ddeu); f_00814298();
    /* 004f1dde: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1de1: jmp 0x4f1ec2 */ goto L_004f1ec2;
L_004f1de6:; BB(0x004f1de6);
    /* 004f1de6: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f1dec: call 0x4f4010 */ r_esp -= 4; W32(r_esp, 0x4f1df1u); f_004f4010();
    /* 004f1df1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f1df2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1df4: je 0x4f1ec2 */ if (fZ) goto L_004f1ec2;
L_004f1dfa:; BB(0x004f1dfa);
    /* 004f1dfa: movsx eax, word ptr [ebp + 0x40] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x40u));
    /* 004f1dfe: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f1e01: mov word ptr [ebp + 0x40], ax */ W16((u32)(r_ebp+0x40u), (u16)r_eax);
    /* 004f1e05: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004f1e08: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f1e0a: jge 0x4f1e16 */ if ((fS==fO)) goto L_004f1e16;
L_004f1e0c:; BB(0x004f1e0c);
    /* 004f1e0c: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 004f1e0f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f1e12: mov word ptr [ebp + 0x40], ax */ W16((u32)(r_ebp+0x40u), (u16)r_eax);
L_004f1e16:; BB(0x004f1e16);
    /* 004f1e16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f1e18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1e19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1e1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1e1b: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 004f1e20: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f1e25u); f_00814298();
    /* 004f1e25: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1e28: jmp 0x4f1ec2 */ goto L_004f1ec2;
L_004f1e2d:; BB(0x004f1e2d);
    /* 004f1e2d: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f1e33: mov ebp, dword ptr [ebx + 0x1c] */ r_ebp = R32((u32)(r_ebx+0x1cu));
    /* 004f1e36: call 0x4f3eb8 */ r_esp -= 4; W32(r_esp, 0x4f1e3bu); f_004f3eb8();
    /* 004f1e3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f1e3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1e3e: je 0x4f1e4a */ if (fZ) goto L_004f1e4a;
L_004f1e40:; BB(0x004f1e40);
    /* 004f1e40: movsx eax, word ptr [ebp + edi*2 + 0x40] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_edi*2+0x40u));
    /* 004f1e45: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f1e48: jmp 0x4f1ea3 */ goto L_004f1ea3;
L_004f1e4a:; BB(0x004f1e4a);
    /* 004f1e4a: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f1e50: call 0x4f3eb8 */ r_esp -= 4; W32(r_esp, 0x4f1e55u); f_004f3eb8();
    /* 004f1e55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f1e56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1e58: je 0x4f1e64 */ if (fZ) goto L_004f1e64;
L_004f1e5a:; BB(0x004f1e5a);
    /* 004f1e5a: movsx eax, word ptr [ebp + edi*2 + 0x40] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_edi*2+0x40u));
    /* 004f1e5f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f1e62: jmp 0x4f1ea3 */ goto L_004f1ea3;
L_004f1e64:; BB(0x004f1e64);
    /* 004f1e64: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f1e6a: call 0x4f3ecc */ r_esp -= 4; W32(r_esp, 0x4f1e6fu); f_004f3ecc();
    /* 004f1e6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f1e70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1e72: je 0x4f1e81 */ if (fZ) goto L_004f1e81;
L_004f1e74:; BB(0x004f1e74);
    /* 004f1e74: movzx eax, word ptr [ebp + edi*2 + 0x40] */ r_eax = (u32)R16((u32)(r_ebp+r_edi*2+0x40u));
    /* 004f1e79: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f1e7c: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004f1e7f: jmp 0x4f1ea3 */ goto L_004f1ea3;
L_004f1e81:; BB(0x004f1e81);
    /* 004f1e81: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f1e87: call 0x4f3ecc */ r_esp -= 4; W32(r_esp, 0x4f1e8cu); f_004f3ecc();
    /* 004f1e8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f1e8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1e8f: je 0x4f1e9e */ if (fZ) goto L_004f1e9e;
L_004f1e91:; BB(0x004f1e91);
    /* 004f1e91: movzx eax, word ptr [ebp + edi*2 + 0x40] */ r_eax = (u32)R16((u32)(r_ebp+r_edi*2+0x40u));
    /* 004f1e96: add eax, -5 */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f1e99: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004f1e9c: jmp 0x4f1ea3 */ goto L_004f1ea3;
L_004f1e9e:; BB(0x004f1e9e);
    /* 004f1e9e: movsx eax, word ptr [ebp + edi*2 + 0x40] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_edi*2+0x40u));
L_004f1ea3:; BB(0x004f1ea3);
    /* 004f1ea3: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004f1ea6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f1ea8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f1eaa: mov edx, 0xff */ r_edx = 0xffu;
    /* 004f1eaf: jg 0x4f1eb3 */ if ((!fZ&&fS==fO)) goto L_004f1eb3;
L_004f1eb1:; BB(0x004f1eb1);
    /* 004f1eb1: mov ecx, eax */ r_ecx = r_eax;
L_004f1eb3:; BB(0x004f1eb3);
    /* 004f1eb3: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1eb9: jl 0x4f1ebd */ if ((fS!=fO)) goto L_004f1ebd;
L_004f1ebb:; BB(0x004f1ebb);
    /* 004f1ebb: mov ecx, edx */ r_ecx = r_edx;
L_004f1ebd:; BB(0x004f1ebd);
    /* 004f1ebd: mov word ptr [ebp + edi*2 + 0x40], cx */ W16((u32)(r_ebp+r_edi*2+0x40u), (u16)r_ecx);
L_004f1ec2:; BB(0x004f1ec2);
    /* 004f1ec2: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 004f1ec7: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f1ec9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1eca: call 0x4f3eb8 */ r_esp -= 4; W32(r_esp, 0x4f1ecfu); f_004f3eb8();
    /* 004f1ecf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f1ed0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1ed2: je 0x4f1ef9 */ if (fZ) goto L_004f1ef9;
L_004f1ed4:; BB(0x004f1ed4);
    /* 004f1ed4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f1ed6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1ed7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1ed8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1ed9: push 0x573 */ { u32 v = 0x573u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1ede: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f1ee3u); f_00814298();
    /* 004f1ee3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1ee6: call 0x4f12dc */ r_esp -= 4; W32(r_esp, 0x4f1eebu); f_004f12dc();
    /* 004f1eeb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f1eed: mov dword ptr [0xa72574], eax */ W32((u32)(0xa72574u), r_eax);
    /* 004f1ef2: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 004f1ef5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f1ef6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1ef7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f1ef8: ret  */ FN_RET(0x004f1cb8); r_esp += 4; return;
L_004f1ef9:; BB(0x004f1ef9);
    /* 004f1ef9: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 004f1efe: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f1f04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1f05: call 0x4f3eb8 */ r_esp -= 4; W32(r_esp, 0x4f1f0au); f_004f3eb8();
    /* 004f1f0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f1f0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f1f0d: je 0x4f1d03 */ if (fZ) goto L_004f1d03;
L_004f1f13:; BB(0x004f1f13);
    /* 004f1f13: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f1f15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1f16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1f17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f1f18: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1f1d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f1f22u); f_00814298();
    /* 004f1f22: mov dword ptr [0xa72570], 1 */ W32((u32)(0xa72570u), 0x1u);
    /* 004f1f2c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f1f2e: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 004f1f31: mov dword ptr [0xa72574], eax */ W32((u32)(0xa72574u), r_eax);
    /* 004f1f36: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f1f39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f1f3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1f3b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f1f3c: ret  */ FN_RET(0x004f1cb8); r_esp += 4; return;
L_004f1f3d:; BB(0x004f1f3d);
    /* 004f1f3d: mov dword ptr [ebx + 0x20], 1 */ W32((u32)(r_ebx+0x20u), 0x1u);
    /* 004f1f44: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f1f45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1f46: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f1f47: ret  */ FN_RET(0x004f1cb8); r_esp += 4; return;
L_004f1f48:; BB(0x004f1f48);
    /* 004f1f48: mov dword ptr [ebx + 0x24], 3 */ W32((u32)(r_ebx+0x24u), 0x3u);
    /* 004f1f4f: jmp 0x4f1d86 */ goto L_004f1d86;
}

void f_004f1f54(void) /* sub_4F1F54 */
{
    FN_ENTER(0x004f1f54);
    /* 004f1f54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f1f55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f1f56: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f1f57: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f1f58: sub esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f1f5e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004f1f60: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004f1f63: movsx ebx, word ptr [eax + 0x40] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x40u));
    /* 004f1f67: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 004f1f6a: shl ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004f1f6d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4f1f72u); f_0082dcbc();
    /* 004f1f72: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004f1f76: fld dword ptr [0x91e050] */ FPUSH(R_F32((u32)(0x91e050u)));
    /* 004f1f7c: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004f1f80: fmul dword ptr [0x91e02c] */ ST(0) = ST(0) * R_F32((u32)(0x91e02cu));
    /* 004f1f86: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004f1f88: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f1f8a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f1f8c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f1f8d: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 004f1f90: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f1f92: jbe 0x4f1f96 */ if ((fC||fZ)) goto L_004f1f96;
L_004f1f94:; BB(0x004f1f94);
    /* 004f1f94: fst st(1) */ ST(1) = ST(0);
L_004f1f96:; BB(0x004f1f96);
    /* 004f1f96: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f1f98: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004f1f9c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f1f9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f1fa1: jl 0x4f1faf */ if ((fS!=fO)) goto L_004f1faf;
L_004f1fa3:; BB(0x004f1fa3);
    /* 004f1fa3: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1fa6: jl 0x4f1fb1 */ if ((fS!=fO)) goto L_004f1fb1;
L_004f1fa8:; BB(0x004f1fa8);
    /* 004f1fa8: mov eax, 9 */ r_eax = 0x9u;
    /* 004f1fad: jmp 0x4f1fb1 */ goto L_004f1fb1;
L_004f1faf:; BB(0x004f1faf);
    /* 004f1faf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f1fb1:; BB(0x004f1fb1);
    /* 004f1fb1: fld dword ptr [eax*4 + 0x91e004] */ FPUSH(R_F32((u32)(r_eax*4+0x91e004u)));
    /* 004f1fb8: movzx edx, byte ptr [0xa72390] */ r_edx = (u32)R8((u32)(0xa72390u));
    /* 004f1fbf: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004f1fc3: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f1fc6: jne 0x4f1fe3 */ if (!fZ) goto L_004f1fe3;
L_004f1fc8:; BB(0x004f1fc8);
    /* 004f1fc8: fld dword ptr [0x91e000] */ FPUSH(R_F32((u32)(0x91e000u)));
    /* 004f1fce: mov dword ptr [0xa72474], 0x3ea8f5c3 */ W32((u32)(0xa72474u), 0x3ea8f5c3u);
    /* 004f1fd8: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f1fdb: mov byte ptr [0xa72390], dl */ W8((u32)(0xa72390u), (u8)r_edx);
    /* 004f1fe1: jmp 0x4f1fe9 */ goto L_004f1fe9;
L_004f1fe3:; BB(0x004f1fe3);
    /* 004f1fe3: fld dword ptr [0xa72474] */ FPUSH(R_F32((u32)(0xa72474u)));
L_004f1fe9:; BB(0x004f1fe9);
    /* 004f1fe9: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f1fec: jne 0x4f2001 */ if (!fZ) goto L_004f2001;
L_004f1fee:; BB(0x004f1fee);
    /* 004f1fee: mov dword ptr [0xa72478], 0x3f28f5c3 */ W32((u32)(0xa72478u), 0x3f28f5c3u);
    /* 004f1ff8: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f1ffb: mov byte ptr [0xa72390], dl */ W8((u32)(0xa72390u), (u8)r_edx);
L_004f2001:; BB(0x004f2001);
    /* 004f2001: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f2004: jne 0x4f201c */ if (!fZ) goto L_004f201c;
L_004f2006:; BB(0x004f2006);
    /* 004f2006: mov dword ptr [0xa7247c], 0x42960000 */ W32((u32)(0xa7247cu), 0x42960000u);
    /* 004f2010: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004f2013: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f2016: mov byte ptr [0xa72390], dl */ W8((u32)(0xa72390u), (u8)r_edx);
L_004f201c:; BB(0x004f201c);
    /* 004f201c: fld dword ptr [ebp + 0x34] */ FPUSH(R_F32((u32)(r_ebp+0x34u)));
    /* 004f201f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f2021: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f2023: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 004f2027: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f2028: jbe 0x4f2974 */ if ((fC||fZ)) goto L_004f2974;
L_004f202e:; BB(0x004f202e);
    /* 004f202e: fld dword ptr [0xa72478] */ FPUSH(R_F32((u32)(0xa72478u)));
    /* 004f2034: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 004f2038: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004f203a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f203c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f203d: jb 0x4f204f */ if (fC) goto L_004f204f;
L_004f203f:; BB(0x004f203f);
    /* 004f203f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004f2041: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f2043: fld dword ptr [0x91e050] */ FPUSH(R_F32((u32)(0x91e050u)));
    /* 004f2049: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 004f204d: jmp 0x4f205d */ goto L_004f205d;
L_004f204f:; BB(0x004f204f);
    /* 004f204f: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f2051: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 004f2055: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 004f2057: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004f2059: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
L_004f205d:; BB(0x004f205d);
    /* 004f205d: mov dword ptr [esp + 0x54], 0x43120000 */ W32((u32)(r_esp+0x54u), 0x43120000u);
    /* 004f2065: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004f206a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004f206c: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 004f2070: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
L_004f2074:; BB(0x004f2074);
    /* 004f2074: fld dword ptr [0xa7247c] */ FPUSH(R_F32((u32)(0xa7247cu)));
    /* 004f207a: mov eax, dword ptr [0xa7247c] */ r_eax = R32((u32)(0xa7247cu));
    /* 004f207f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f2081: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f2083: jne 0x4f2097 */ if (!fZ) goto L_004f2097;
L_004f2085:; BB(0x004f2085);
    /* 004f2085: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004f2089: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f208b: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 004f208f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004f2091: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 004f2095: jmp 0x4f20aa */ goto L_004f20aa;
L_004f2097:; BB(0x004f2097);
    /* 004f2097: fld dword ptr [edi*4 + 0x91dfe8] */ FPUSH(R_F32((u32)(r_edi*4+0x91dfe8u)));
    /* 004f209e: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f20a0: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 004f20a4: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004f20a6: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_004f20aa:; BB(0x004f20aa);
    /* 004f20aa: cmp edi, dword ptr [ebp + 0x24] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f20ad: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004f20b1: jne 0x4f20f4 */ if (!fZ) goto L_004f20f4;
L_004f20b3:; BB(0x004f20b3);
    /* 004f20b3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f20b5: movzx eax, byte ptr [0xa72390] */ r_eax = (u32)R8((u32)(0xa72390u));
    /* 004f20bc: mov ebx, 2 */ r_ebx = 0x2u;
    /* 004f20c1: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f20c3: jne 0x4f20d9 */ if (!fZ) goto L_004f20d9;
L_004f20c5:; BB(0x004f20c5);
    /* 004f20c5: mov dword ptr [0xa72480], 9 */ W32((u32)(0xa72480u), 0x9u);
    /* 004f20cf: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f20d4: mov byte ptr [0xa72390], al */ W8((u32)(0xa72390u), (u8)r_eax);
L_004f20d9:; BB(0x004f20d9);
    /* 004f20d9: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 004f20dc: shl ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004f20df: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4f20e4u); f_0082dcbc();
    /* 004f20e4: fild dword ptr [0xa72480] */ FPUSH((long double)(i32)R32((u32)(0xa72480u)));
    /* 004f20ea: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004f20ec: fadd dword ptr [esp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x50u));
    /* 004f20f0: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
L_004f20f4:; BB(0x004f20f4);
    /* 004f20f4: fsubr dword ptr [esp + 0x3c] */ ST(0) = R_F32((u32)(r_esp+0x3cu)) - ST(0);
    /* 004f20f8: fdiv dword ptr [0x91dfe4] */ ST(0) = ST(0) / R_F32((u32)(0x91dfe4u));
    /* 004f20fe: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 004f2102: lea edx, [esp + 0x50] */ r_edx = (u32)(r_esp+0x50u);
    /* 004f2106: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 004f2109: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 004f210d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f210e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f210f: push 0xc0300000 */ { u32 v = 0xc0300000u; r_esp -= 4; W32(r_esp, v); }
    /* 004f2114: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f2115: call 0x4e9eb8 */ r_esp -= 4; W32(r_esp, 0x4f211au); f_004e9eb8();
    /* 004f211a: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f211e: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004f2122: lea edx, [esp + 0x60] */ r_edx = (u32)(r_esp+0x60u);
    /* 004f2126: mov dword ptr [esp + 0x58], 0x3f800000 */ W32((u32)(r_esp+0x58u), 0x3f800000u);
    /* 004f212e: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004f2132: add ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f2135: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f2136: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f2137: push 0xc0300000 */ { u32 v = 0xc0300000u; r_esp -= 4; W32(r_esp, v); }
    /* 004f213c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f213d: call 0x4e9eb8 */ r_esp -= 4; W32(r_esp, 0x4f2142u); f_004e9eb8();
    /* 004f2142: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f2145: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004f2149: fadd dword ptr [0x91dfe0] */ ST(0) = ST(0) + R_F32((u32)(0x91dfe0u));
    /* 004f214f: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004f2153: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f2156: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f2159: jl 0x4f2074 */ if ((fS!=fO)) goto L_004f2074;
L_004f215f:; BB(0x004f215f);
    /* 004f215f: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 004f2163: movzx edx, byte ptr [0xa72390] */ r_edx = (u32)R8((u32)(0xa72390u));
    /* 004f216a: fld dword ptr [ebp + 0x34] */ FPUSH(R_F32((u32)(r_ebp+0x34u)));
    /* 004f216d: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
L_004f2171:; BB(0x004f2171);
    /* 004f2171: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f2174: jne 0x4f218c */ if (!fZ) goto L_004f218c;
L_004f2176:; BB(0x004f2176);
    /* 004f2176: mov dword ptr [0xa72484], 0x3ea8f5c3 */ W32((u32)(0xa72484u), 0x3ea8f5c3u);
    /* 004f2180: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004f2183: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f2186: mov byte ptr [0xa72390], dl */ W8((u32)(0xa72390u), (u8)r_edx);
L_004f218c:; BB(0x004f218c);
    /* 004f218c: fld dword ptr [0x91dfdc] */ FPUSH(R_F32((u32)(0x91dfdcu)));
    /* 004f2192: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 004f2196: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004f2198: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f219a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f219b: jbe 0x4f297b */ if ((fC||fZ)) goto L_004f297b;
L_004f21a1:; BB(0x004f21a1);
    /* 004f21a1: fld dword ptr [0xa72484] */ FPUSH(R_F32((u32)(0xa72484u)));
    /* 004f21a7: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 004f21ab: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004f21ad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f21af: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f21b0: jb 0x4f21c2 */ if (fC) goto L_004f21c2;
L_004f21b2:; BB(0x004f21b2);
    /* 004f21b2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004f21b4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f21b6: fld dword ptr [0x91e050] */ FPUSH(R_F32((u32)(0x91e050u)));
    /* 004f21bc: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 004f21c0: jmp 0x4f21d0 */ goto L_004f21d0;
L_004f21c2:; BB(0x004f21c2);
    /* 004f21c2: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f21c4: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 004f21c8: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 004f21ca: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004f21cc: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
L_004f21d0:; BB(0x004f21d0);
    /* 004f21d0: mov dword ptr [esp + 0x58], 0x42600000 */ W32((u32)(r_esp+0x58u), 0x42600000u);
    /* 004f21d8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004f21da: mov dword ptr [esp + 0x5c], 0x43120000 */ W32((u32)(r_esp+0x5cu), 0x43120000u);
L_004f21e2:; BB(0x004f21e2);
    /* 004f21e2: cmp edi, dword ptr [ebp + 0x24] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f21e5: mov eax, 0 */ r_eax = 0x0u;
    /* 004f21ea: jne 0x4f21f1 */ if (!fZ) goto L_004f21f1;
L_004f21ec:; BB(0x004f21ec);
    /* 004f21ec: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
L_004f21f1:; BB(0x004f21f1);
    /* 004f21f1: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 004f21f5: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f21f9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f21fc: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004f21ff: mov dword ptr [esp + 4], 0xc01c0000 */ W32((u32)(r_esp+0x4u), 0xc01c0000u);
    /* 004f2207: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004f220b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f220f: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f2214u); f_004e9ef8();
    /* 004f2214: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004f2218: fadd dword ptr [0x91dfd0] */ ST(0) = ST(0) + R_F32((u32)(0x91dfd0u));
    /* 004f221e: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 004f2222: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f2225: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f2228: jl 0x4f21e2 */ if ((fS!=fO)) goto L_004f21e2;
L_004f222a:; BB(0x004f222a);
    /* 004f222a: movzx edx, byte ptr [0xa72390] */ r_edx = (u32)R8((u32)(0xa72390u));
    /* 004f2231: fld dword ptr [ebp + 0x34] */ FPUSH(R_F32((u32)(r_ebp+0x34u)));
    /* 004f2234: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
L_004f2238:; BB(0x004f2238);
    /* 004f2238: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f223b: jne 0x4f225b */ if (!fZ) goto L_004f225b;
L_004f223d:; BB(0x004f223d);
    /* 004f223d: fld dword ptr [0x91dffc] */ FPUSH(R_F32((u32)(0x91dffcu)));
    /* 004f2243: mov dword ptr [0xa72488], 0x3f28f5c3 */ W32((u32)(0xa72488u), 0x3f28f5c3u);
    /* 004f224d: or edx, 0xffffff20 */ {  u32 a = r_edx; u32 b = 0xffffff20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f2253: mov byte ptr [0xa72390], dl */ W8((u32)(0xa72390u), (u8)r_edx);
    /* 004f2259: jmp 0x4f2261 */ goto L_004f2261;
L_004f225b:; BB(0x004f225b);
    /* 004f225b: fld dword ptr [0xa72488] */ FPUSH(R_F32((u32)(0xa72488u)));
L_004f2261:; BB(0x004f2261);
    /* 004f2261: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 004f2265: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004f2267: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f2269: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f226a: jbe 0x4f2967 */ if ((fC||fZ)) goto L_004f2967;
L_004f2270:; BB(0x004f2270);
    /* 004f2270: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 004f2274: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 004f2277: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f2279: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f227b: fsubr dword ptr [0x91dfcc] */ ST(0) = R_F32((u32)(0x91dfccu)) - ST(0);
    /* 004f2281: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004f2283: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 004f2287: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f2289: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 004f228d: mov dword ptr [esp + 0x60], 0x42ce0000 */ W32((u32)(r_esp+0x60u), 0x42ce0000u);
    /* 004f2295: mov dword ptr [esp + 0x64], 0x43160000 */ W32((u32)(r_esp+0x64u), 0x43160000u);
    /* 004f229d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004f229f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f22a1: jle 0x4f2352 */ if ((fZ||fS!=fO)) goto L_004f2352;
L_004f22a7:; BB(0x004f22a7);
    /* 004f22a7: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004f22ab: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 004f22ae: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004f22b2: mov esi, 0x21 */ r_esi = 0x21u;
    /* 004f22b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f22b9: je 0x4f22c9 */ if (fZ) goto L_004f22c9;
L_004f22bb:; BB(0x004f22bb);
    /* 004f22bb: fld dword ptr [0x91e180] */ FPUSH(R_F32((u32)(0x91e180u)));
    /* 004f22c1: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 004f22c5: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_004f22c9:; BB(0x004f22c9);
    /* 004f22c9: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f22cb: jne 0x4f2318 */ if (!fZ) goto L_004f2318;
L_004f22cd:; BB(0x004f22cd);
    /* 004f22cd: mov eax, dword ptr [0xa720ac] */ r_eax = R32((u32)(0xa720acu));
    /* 004f22d2: mov esi, 0x22 */ r_esi = 0x22u;
    /* 004f22d7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f22da: je 0x4f2308 */ if (fZ) goto L_004f2308;
L_004f22dc:; BB(0x004f22dc);
    /* 004f22dc: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 004f22df: shl ecx, 0xc */ { u32 c = (12u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004f22e2: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4f22e7u); f_0082dcbc();
    /* 004f22e7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f22e8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004f22eb: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4f22f0u); f_0082e900();
    /* 004f22f0: fmul dword ptr [0x91e040] */ ST(0) = ST(0) * R_F32((u32)(0x91e040u));
    /* 004f22f6: fadd dword ptr [0x91dfc0] */ ST(0) = ST(0) + R_F32((u32)(0x91dfc0u));
    /* 004f22fc: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004f2300: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004f2302: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004f2306: jmp 0x4f2318 */ goto L_004f2318;
L_004f2308:; BB(0x004f2308);
    /* 004f2308: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f230a: jne 0x4f2318 */ if (!fZ) goto L_004f2318;
L_004f230c:; BB(0x004f230c);
    /* 004f230c: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004f2310: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 004f2314: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_004f2318:; BB(0x004f2318);
    /* 004f2318: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004f231c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f2320: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004f2323: mov dword ptr [esp + 4], 0xc01c0000 */ W32((u32)(r_esp+0x4u), 0xc01c0000u);
    /* 004f232b: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 004f232f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f2333: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f2338u); f_004e9ef8();
    /* 004f2338: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004f233c: fadd dword ptr [0x91dfbc] */ ST(0) = ST(0) + R_F32((u32)(0x91dfbcu));
    /* 004f2342: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004f2346: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f2349: cmp edi, dword ptr [ebp + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f234c: jl 0x4f22a7 */ if ((fS!=fO)) goto L_004f22a7;
L_004f2352:; BB(0x004f2352);
    /* 004f2352: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004f2356: fsub dword ptr [0x91dfb8] */ ST(0) = ST(0) - R_F32((u32)(0x91dfb8u));
    /* 004f235c: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004f2360: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 004f2363: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f2365: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004f2369: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004f236d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f236f: jne 0x4f237b */ if (!fZ) goto L_004f237b;
L_004f2371:; BB(0x004f2371);
    /* 004f2371: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004f2375: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 004f2379: jmp 0x4f2389 */ goto L_004f2389;
L_004f237b:; BB(0x004f237b);
    /* 004f237b: fld dword ptr [0x91e180] */ FPUSH(R_F32((u32)(0x91e180u)));
    /* 004f2381: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 004f2385: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
L_004f2389:; BB(0x004f2389);
    /* 004f2389: fld dword ptr [0x91dfb4] */ FPUSH(R_F32((u32)(0x91dfb4u)));
    /* 004f238f: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 004f2393: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 004f2397: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f239b: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 004f239f: add ebx, 0x16 */ {  u32 a = r_ebx; u32 b = 0x16u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f23a2: mov dword ptr [esp + 0x6c], 0x43150000 */ W32((u32)(r_esp+0x6cu), 0x43150000u);
    /* 004f23aa: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004f23ad: mov dword ptr [esp + 4], 0xc01c0000 */ W32((u32)(r_esp+0x4u), 0xc01c0000u);
    /* 004f23b5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f23b9: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f23beu); f_004e9ef8();
    /* 004f23be: fld dword ptr [0x91dfac] */ FPUSH(R_F32((u32)(0x91dfacu)));
    /* 004f23c4: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 004f23c8: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004f23cc: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f23d0: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 004f23d4: mov dword ptr [esp + 0x6c], 0x43160000 */ W32((u32)(r_esp+0x6cu), 0x43160000u);
    /* 004f23dc: mov dword ptr [esp], 0x20 */ W32((u32)(r_esp), 0x20u);
    /* 004f23e3: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 004f23e7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f23eb: mov dword ptr [esp + 4], 0xc01c0000 */ W32((u32)(r_esp+0x4u), 0xc01c0000u);
    /* 004f23f3: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f23f8u); f_004e9ef8();
    /* 004f23f8: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004f23fc: fadd dword ptr [0x91dfa4] */ ST(0) = ST(0) + R_F32((u32)(0x91dfa4u));
    /* 004f2402: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004f2406: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 004f2409: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f240b: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 004f240f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f2413: add eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f2416: mov dword ptr [esp + 0x6c], 0x43270000 */ W32((u32)(r_esp+0x6cu), 0x43270000u);
    /* 004f241e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004f2421: mov dword ptr [esp + 4], 0xc01c0000 */ W32((u32)(r_esp+0x4u), 0xc01c0000u);
    /* 004f2429: lea edx, [esp + 0x68] */ r_edx = (u32)(r_esp+0x68u);
    /* 004f242d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004f2431: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f2436u); f_004e9ef8();
    /* 004f2436: movzx eax, byte ptr [0xa72390] */ r_eax = (u32)R8((u32)(0xa72390u));
    /* 004f243d: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f243f: jne 0x4f2487 */ if (!fZ) goto L_004f2487;
L_004f2441:; BB(0x004f2441);
    /* 004f2441: mov dword ptr [0xa7248c], 0x42d20000 */ W32((u32)(0xa7248cu), 0x42d20000u);
    /* 004f244b: or eax, 0xffffff40 */ {  u32 a = r_eax; u32 b = 0xffffff40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f2450: mov byte ptr [0xa72390], al */ W8((u32)(0xa72390u), (u8)r_eax);
    /* 004f2455: mov dword ptr [0xa72490], 0x43420000 */ W32((u32)(0xa72490u), 0x43420000u);
    /* 004f245f: mov dword ptr [0xa72494], 0x42d20000 */ W32((u32)(0xa72494u), 0x42d20000u);
    /* 004f2469: mov dword ptr [0xa72498], 0x436e0000 */ W32((u32)(0xa72498u), 0x436e0000u);
    /* 004f2473: mov dword ptr [0xa7249c], 0x42d20000 */ W32((u32)(0xa7249cu), 0x42d20000u);
    /* 004f247d: mov dword ptr [0xa724a0], 0x438d0000 */ W32((u32)(0xa724a0u), 0x438d0000u);
L_004f2487:; BB(0x004f2487);
    /* 004f2487: mov eax, 1 */ r_eax = 0x1u;
    /* 004f248c: mov edi, 0x12 */ r_edi = 0x12u;
    /* 004f2491: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f2493: mov esi, eax */ r_esi = r_eax;
L_004f2495:; BB(0x004f2495);
    /* 004f2495: cmp esi, dword ptr [ebp + 0x24] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f2498: jne 0x4f24a4 */ if (!fZ) goto L_004f24a4;
L_004f249a:; BB(0x004f249a);
    /* 004f249a: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004f249e: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 004f24a2: jmp 0x4f24ae */ goto L_004f24ae;
L_004f24a4:; BB(0x004f24a4);
    /* 004f24a4: fld dword ptr [0x91e180] */ FPUSH(R_F32((u32)(0x91e180u)));
    /* 004f24aa: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
L_004f24ae:; BB(0x004f24ae);
    /* 004f24ae: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f24b2: mov dword ptr [esp + 4], 0xc01c0000 */ W32((u32)(r_esp+0x4u), 0xc01c0000u);
    /* 004f24ba: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 004f24bd: lea edx, [ebx + 0xa7248c] */ r_edx = (u32)(r_ebx+0xa7248cu);
    /* 004f24c3: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004f24c7: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f24ccu); f_004e9ef8();
    /* 004f24cc: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f24cf: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f24d2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f24d5: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f24d8: jl 0x4f2495 */ if ((fS!=fO)) goto L_004f2495;
L_004f24da:; BB(0x004f24da);
    /* 004f24da: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x4f24dfu); f_004d28a4();
    /* 004f24df: movzx eax, byte ptr [0xa72390] */ r_eax = (u32)R8((u32)(0xa72390u));
    /* 004f24e6: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f24eb: jne 0x4f24ff */ if (!fZ) goto L_004f24ff;
L_004f24ed:; BB(0x004f24ed);
    /* 004f24ed: mov dword ptr [0xa724a4], 0x42d60000 */ W32((u32)(0xa724a4u), 0x42d60000u);
    /* 004f24f7: or eax, 0xffffff80 */ {  u32 a = r_eax; u32 b = 0xffffff80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f24fa: mov byte ptr [0xa72390], al */ W8((u32)(0xa72390u), (u8)r_eax);
L_004f24ff:; BB(0x004f24ff);
    /* 004f24ff: movzx eax, byte ptr [0xa72394] */ r_eax = (u32)R8((u32)(0xa72394u));
    /* 004f2506: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f2508: jne 0x4f251c */ if (!fZ) goto L_004f251c;
L_004f250a:; BB(0x004f250a);
    /* 004f250a: mov dword ptr [0xa724a8], 0x43520000 */ W32((u32)(0xa724a8u), 0x43520000u);
    /* 004f2514: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f2517: mov byte ptr [0xa72394], al */ W8((u32)(0xa72394u), (u8)r_eax);
L_004f251c:; BB(0x004f251c);
    /* 004f251c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f251e: jne 0x4f2532 */ if (!fZ) goto L_004f2532;
L_004f2520:; BB(0x004f2520);
    /* 004f2520: mov dword ptr [0xa724ac], 0x42c60000 */ W32((u32)(0xa724acu), 0x42c60000u);
    /* 004f252a: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f252d: mov byte ptr [0xa72394], al */ W8((u32)(0xa72394u), (u8)r_eax);
L_004f2532:; BB(0x004f2532);
    /* 004f2532: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f2534: jne 0x4f254b */ if (!fZ) goto L_004f254b;
L_004f2536:; BB(0x004f2536);
    /* 004f2536: mov dword ptr [0xa724b0], 0x43600000 */ W32((u32)(0xa724b0u), 0x43600000u);
    /* 004f2540: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f2543: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f2546: mov byte ptr [0xa72394], al */ W8((u32)(0xa72394u), (u8)r_eax);
L_004f254b:; BB(0x004f254b);
    /* 004f254b: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f254d: jne 0x4f256c */ if (!fZ) goto L_004f256c;
L_004f254f:; BB(0x004f254f);
    /* 004f254f: fld dword ptr [0xa724ac] */ FPUSH(R_F32((u32)(0xa724acu)));
    /* 004f2555: fadd dword ptr [0x91df84] */ ST(0) = ST(0) + R_F32((u32)(0x91df84u));
    /* 004f255b: fstp dword ptr [0xa724b4] */ W_F32((u32)(0xa724b4u), ST(0)); FPOP();
    /* 004f2561: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f2564: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f2567: mov byte ptr [0xa72394], al */ W8((u32)(0xa72394u), (u8)r_eax);
L_004f256c:; BB(0x004f256c);
    /* 004f256c: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f256e: jne 0x4f2587 */ if (!fZ) goto L_004f2587;
L_004f2570:; BB(0x004f2570);
    /* 004f2570: mov edx, dword ptr [0xa724b0] */ r_edx = R32((u32)(0xa724b0u));
    /* 004f2576: mov dword ptr [0xa724b8], edx */ W32((u32)(0xa724b8u), r_edx);
    /* 004f257c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f257f: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f2582: mov byte ptr [0xa72394], al */ W8((u32)(0xa72394u), (u8)r_eax);
L_004f2587:; BB(0x004f2587);
    /* 004f2587: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f2589: jne 0x4f25a8 */ if (!fZ) goto L_004f25a8;
L_004f258b:; BB(0x004f258b);
    /* 004f258b: fld dword ptr [0xa724a4] */ FPUSH(R_F32((u32)(0xa724a4u)));
    /* 004f2591: fadd dword ptr [0x91df84] */ ST(0) = ST(0) + R_F32((u32)(0x91df84u));
    /* 004f2597: fstp dword ptr [0xa724bc] */ W_F32((u32)(0xa724bcu), ST(0)); FPOP();
    /* 004f259d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f25a0: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f25a3: mov byte ptr [0xa72394], al */ W8((u32)(0xa72394u), (u8)r_eax);
L_004f25a8:; BB(0x004f25a8);
    /* 004f25a8: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f25aa: jne 0x4f25c3 */ if (!fZ) goto L_004f25c3;
L_004f25ac:; BB(0x004f25ac);
    /* 004f25ac: mov edx, dword ptr [0xa724a8] */ r_edx = R32((u32)(0xa724a8u));
    /* 004f25b2: mov dword ptr [0xa724c0], edx */ W32((u32)(0xa724c0u), r_edx);
    /* 004f25b8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f25bb: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f25be: mov byte ptr [0xa72394], al */ W8((u32)(0xa72394u), (u8)r_eax);
L_004f25c3:; BB(0x004f25c3);
    /* 004f25c3: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f25c8: jne 0x4f2632 */ if (!fZ) goto L_004f2632;
L_004f25ca:; BB(0x004f25ca);
    /* 004f25ca: mov edx, dword ptr [0xa724a4] */ r_edx = R32((u32)(0xa724a4u));
    /* 004f25d0: mov ebx, dword ptr [0xa724a8] */ r_ebx = R32((u32)(0xa724a8u));
    /* 004f25d6: mov edi, dword ptr [0xa724ac] */ r_edi = R32((u32)(0xa724acu));
    /* 004f25dc: mov dword ptr [0xa724c4], edx */ W32((u32)(0xa724c4u), r_edx);
    /* 004f25e2: mov edx, dword ptr [0xa724b0] */ r_edx = R32((u32)(0xa724b0u));
    /* 004f25e8: mov dword ptr [0xa724c8], ebx */ W32((u32)(0xa724c8u), r_ebx);
    /* 004f25ee: mov dword ptr [0xa724cc], edi */ W32((u32)(0xa724ccu), r_edi);
    /* 004f25f4: or eax, 0xffffff80 */ {  u32 a = r_eax; u32 b = 0xffffff80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f25f7: mov dword ptr [0xa724d0], edx */ W32((u32)(0xa724d0u), r_edx);
    /* 004f25fd: mov edx, dword ptr [0xa724b4] */ r_edx = R32((u32)(0xa724b4u));
    /* 004f2603: mov dword ptr [0xa724d4], edx */ W32((u32)(0xa724d4u), r_edx);
    /* 004f2609: mov edx, dword ptr [0xa724b8] */ r_edx = R32((u32)(0xa724b8u));
    /* 004f260f: mov dword ptr [0xa724d8], edx */ W32((u32)(0xa724d8u), r_edx);
    /* 004f2615: mov edx, dword ptr [0xa724bc] */ r_edx = R32((u32)(0xa724bcu));
    /* 004f261b: mov dword ptr [0xa724dc], edx */ W32((u32)(0xa724dcu), r_edx);
    /* 004f2621: mov edx, dword ptr [0xa724c0] */ r_edx = R32((u32)(0xa724c0u));
    /* 004f2627: mov dword ptr [0xa724e0], edx */ W32((u32)(0xa724e0u), r_edx);
    /* 004f262d: mov byte ptr [0xa72394], al */ W8((u32)(0xa72394u), (u8)r_eax);
L_004f2632:; BB(0x004f2632);
    /* 004f2632: fld dword ptr [0xa7221c] */ FPUSH(R_F32((u32)(0xa7221cu)));
    /* 004f2638: fld dword ptr [0x91df80] */ FPUSH(R_F32((u32)(0x91df80u)));
    /* 004f263e: fld dword ptr [0x91df7c] */ FPUSH(R_F32((u32)(0x91df7cu)));
    /* 004f2644: fld dword ptr [0xa724cc] */ FPUSH(R_F32((u32)(0xa724ccu)));
    /* 004f264a: fld dword ptr [0xa724c4] */ FPUSH(R_F32((u32)(0xa724c4u)));
    /* 004f2650: fld dword ptr [0x91df78] */ FPUSH(R_F32((u32)(0x91df78u)));
    /* 004f2656: fld dword ptr [0xa724d4] */ FPUSH(R_F32((u32)(0xa724d4u)));
    /* 004f265c: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 004f265e: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 004f2660: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 004f2662: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 004f2666: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 004f2668: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004f266c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f266e: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 004f2670: fld dword ptr [0x91df7c] */ FPUSH(R_F32((u32)(0x91df7cu)));
    /* 004f2676: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004f2678: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f267a: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 004f267c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f267e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004f2680: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f2682: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 004f2689: fld dword ptr [0xa724dc] */ FPUSH(R_F32((u32)(0xa724dcu)));
    /* 004f268f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f2691: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 004f2693: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f2695: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 004f269c: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 004f269e: fld dword ptr [0x91df78] */ FPUSH(R_F32((u32)(0x91df78u)));
    /* 004f26a4: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004f26a6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f26a8: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 004f26aa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f26ac: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 004f26ae: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f26b0: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 004f26b7: fld dword ptr [0xa724c8] */ FPUSH(R_F32((u32)(0xa724c8u)));
    /* 004f26bd: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f26bf: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 004f26c1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f26c3: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004f26ca: fld dword ptr [0xa724d0] */ FPUSH(R_F32((u32)(0xa724d0u)));
    /* 004f26d0: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 004f26d2: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 004f26d4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004f26d6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f26d8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004f26da: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f26dc: fld dword ptr [0xa7221c] */ FPUSH(R_F32((u32)(0xa7221cu)));
    /* 004f26e2: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004f26e4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f26e6: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004f26e8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f26ea: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 004f26f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f26f3: fstp dword ptr [esp + 0x9c] */ W_F32((u32)(r_esp+0x9cu), ST(0)); FPOP();
    /* 004f26fa: fld dword ptr [0xa7221c] */ FPUSH(R_F32((u32)(0xa7221cu)));
    /* 004f2700: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004f2702: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f2704: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004f2706: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f2708: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 004f270f: fld dword ptr [0x91e034] */ FPUSH(R_F32((u32)(0x91e034u)));
    /* 004f2715: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 004f2719: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f271b: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 004f2722: lea edx, [esp + 0x80] */ r_edx = (u32)(r_esp+0x80u);
    /* 004f2729: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 004f272d: mov dword ptr [esp + 0x78], 0 */ W32((u32)(r_esp+0x78u), 0x0u);
    /* 004f2735: lea eax, [esp + 0xa0] */ r_eax = (u32)(r_esp+0xa0u);
    /* 004f273c: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 004f2740: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004f2744: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004f2749: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f274e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004f2752: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004f2756: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 004f275a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004f275e: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 004f2762: shl ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 004f2765: or ebx, 0x808080 */ {  u32 a = r_ebx; u32 b = 0x808080u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 004f276b: mov dword ptr [esp + 0xac], ebx */ W32((u32)(r_esp+0xacu), r_ebx);
    /* 004f2772: mov dword ptr [esp + 0xa8], ebx */ W32((u32)(r_esp+0xa8u), r_ebx);
    /* 004f2779: mov dword ptr [esp + 0xa4], ebx */ W32((u32)(r_esp+0xa4u), r_ebx);
    /* 004f2780: mov dword ptr [esp + 0xa0], ebx */ W32((u32)(r_esp+0xa0u), r_ebx);
    /* 004f2787: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004f2789:; BB(0x004f2789);
    /* 004f2789: lea eax, [esp + 0x70] */ r_eax = (u32)(r_esp+0x70u);
    /* 004f278d: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 004f278f: push 0xc0300000 */ { u32 v = 0xc0300000u; r_esp -= 4; W32(r_esp, v); }
    /* 004f2794: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f2796: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f2797: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x4f279cu); f_0082b5d8();
    /* 004f279c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f279f: fld dword ptr [esp + 0x84] */ FPUSH(R_F32((u32)(r_esp+0x84u)));
    /* 004f27a6: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004f27aa: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 004f27ac: fld dword ptr [esp + 0x8c] */ FPUSH(R_F32((u32)(r_esp+0x8cu)));
    /* 004f27b3: fld dword ptr [esp + 0x94] */ FPUSH(R_F32((u32)(r_esp+0x94u)));
    /* 004f27ba: fld dword ptr [esp + 0x9c] */ FPUSH(R_F32((u32)(r_esp+0x9cu)));
    /* 004f27c1: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004f27c3: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 004f27ca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f27cc: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 004f27ce: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 004f27d5: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004f27d7: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 004f27de: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f27e0: fstp dword ptr [esp + 0x9c] */ W_F32((u32)(r_esp+0x9cu), ST(0)); FPOP();
    /* 004f27e7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f27ea: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f27ed: jl 0x4f2789 */ if ((fS!=fO)) goto L_004f2789;
L_004f27ef:; BB(0x004f27ef);
    /* 004f27ef: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004f27f3: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004f27f7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f27f9: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004f27fd: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 004f2801: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004f2803:; BB(0x004f2803);
    /* 004f2803: fld dword ptr [0x91e034] */ FPUSH(R_F32((u32)(0x91e034u)));
    /* 004f2809: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004f280c: movsx ecx, word ptr [edx + ebx*2 + 0x42] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*2+0x42u));
    /* 004f2811: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 004f2815: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 004f2819: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004f281b: fcom dword ptr [0x91e030] */ fx_compare(ST(0), R_F32((u32)(0x91e030u))); 
    /* 004f2821: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f2823: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f2824: je 0x4f2982 */ if (fZ) goto L_004f2982;
L_004f282a:; BB(0x004f282a);
    /* 004f282a: fld dword ptr [0xa724c4] */ FPUSH(R_F32((u32)(0xa724c4u)));
    /* 004f2830: mov eax, dword ptr [0xa724c4] */ r_eax = R32((u32)(0xa724c4u));
    /* 004f2835: fld dword ptr [0xa724cc] */ FPUSH(R_F32((u32)(0xa724ccu)));
    /* 004f283b: mov edx, dword ptr [0xa724cc] */ r_edx = R32((u32)(0xa724ccu));
    /* 004f2841: fld dword ptr [0xa724d4] */ FPUSH(R_F32((u32)(0xa724d4u)));
    /* 004f2847: fld dword ptr [0xa724dc] */ FPUSH(R_F32((u32)(0xa724dcu)));
    /* 004f284d: fld dword ptr [0xa724d0] */ FPUSH(R_F32((u32)(0xa724d0u)));
    /* 004f2853: fld dword ptr [0xa724d8] */ FPUSH(R_F32((u32)(0xa724d8u)));
    /* 004f2859: mov edi, dword ptr [ebx*4 + 0x91df68] */ r_edi = R32((u32)(r_ebx*4+0x91df68u));
    /* 004f2860: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f2862: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 004f2864: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 004f2866: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f2868: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 004f286a: fmulp st(6) */ ST(6) = ST(6) * ST(0); FPOP();
    /* 004f286c: fld dword ptr [0xa724c8] */ FPUSH(R_F32((u32)(0xa724c8u)));
    /* 004f2872: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f2874: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 004f2876: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004f287a: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004f287c: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004f287e: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 004f2880: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004f2882: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 004f2889: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 004f288b: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 004f288d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f288f: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004f2896: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004f2898: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 004f289c: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 004f28a3: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004f28a7: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004f28ac: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f28b1: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004f28b5: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004f28b9: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 004f28bd: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004f28c1: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004f28c5: mov dword ptr [esp + 0x88], edx */ W32((u32)(r_esp+0x88u), r_edx);
    /* 004f28cc: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 004f28d0: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 004f28d4: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 004f28d8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004f28da: shl ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004f28dd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f28df: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 004f28e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f28e8: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004f28ea: fld dword ptr [0xa724e0] */ FPUSH(R_F32((u32)(0xa724e0u)));
    /* 004f28f0: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004f28f2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f28f4: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 004f28fb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f28fd: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004f28ff: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f2901: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 004f2908: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f290a: fstp dword ptr [esp + 0x9c] */ W_F32((u32)(r_esp+0x9cu), ST(0)); FPOP();
    /* 004f2911: and edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 004f2917: lea eax, [esp + 0x70] */ r_eax = (u32)(r_esp+0x70u);
    /* 004f291b: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 004f291d: mov dword ptr [esp + 0xac], edi */ W32((u32)(r_esp+0xacu), r_edi);
    /* 004f2924: mov dword ptr [esp + 0xa8], edi */ W32((u32)(r_esp+0xa8u), r_edi);
    /* 004f292b: mov dword ptr [esp + 0xa4], edi */ W32((u32)(r_esp+0xa4u), r_edi);
    /* 004f2932: mov dword ptr [esp + 0xa0], edi */ W32((u32)(r_esp+0xa0u), r_edi);
    /* 004f2939: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 004f293b: push 0xc01c0000 */ { u32 v = 0xc01c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004f2940: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f2942: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f2943: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x4f2948u); f_0082b5d8();
    /* 004f2948: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f294b:; BB(0x004f294b);
    /* 004f294b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f294e: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f2951: jl 0x4f2803 */ if ((fS!=fO)) goto L_004f2803;
L_004f2957:; BB(0x004f2957);
    /* 004f2957: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x4f295cu); f_004d2968();
    /* 004f295c: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f2962: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f2963: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f2964: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f2965: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f2966: ret  */ FN_RET(0x004f1f54); r_esp += 4; return;
L_004f2967:; BB(0x004f2967);
    /* 004f2967: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f2969: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f296f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f2970: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f2971: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f2972: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f2973: ret  */ FN_RET(0x004f1f54); r_esp += 4; return;
L_004f2974:; BB(0x004f2974);
    /* 004f2974: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f2976: jmp 0x4f2171 */ goto L_004f2171;
L_004f297b:; BB(0x004f297b);
    /* 004f297b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f297d: jmp 0x4f2238 */ goto L_004f2238;
L_004f2982:; BB(0x004f2982);
    /* 004f2982: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004f2984: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f2986: jmp 0x4f294b */ goto L_004f294b;
}

