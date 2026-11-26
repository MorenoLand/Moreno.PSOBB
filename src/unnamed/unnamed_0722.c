#include "protos.h"

void f_0072202c(void) /* sub_72202C */
{
    FN_ENTER(0x0072202c);
    /* 0072202c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072202d: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00722030: mov esi, ecx */ r_esi = r_ecx;
    /* 00722032: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00722036: fld dword ptr [0x970624] */ FPUSH(R_F32((u32)(0x970624u)));
    /* 0072203c: fdiv dword ptr [eax + 0x38] */ ST(0) = ST(0) / R_F32((u32)(r_eax+0x38u));
    /* 0072203f: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00722043: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x722048u); f_007a902c();
    /* 00722048: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0072204d: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x722052u); f_0082bb30();
    /* 00722052: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 00722058: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x72205du); f_00829cc8();
    /* 0072205d: mov edx, dword ptr [esi + 0xbc] */ r_edx = R32((u32)(r_esi+0xbcu));
    /* 00722063: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00722066: or edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072206c: mov ecx, 4 */ r_ecx = 0x4u;
    /* 00722071: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x722076u); f_0082bb60();
    /* 00722076: fild dword ptr [esi + 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_esi+0xa8u)));
    /* 0072207c: fmul dword ptr [0x970618] */ ST(0) = ST(0) * R_F32((u32)(0x970618u));
    /* 00722082: fadd dword ptr [0x97061c] */ ST(0) = ST(0) + R_F32((u32)(0x97061cu));
    /* 00722088: fld dword ptr [0x970610] */ FPUSH(R_F32((u32)(0x970610u)));
    /* 0072208e: fld dword ptr [0x97060c] */ FPUSH(R_F32((u32)(0x97060cu)));
    /* 00722094: fld dword ptr [0x970614] */ FPUSH(R_F32((u32)(0x970614u)));
    /* 0072209a: movzx eax, byte ptr [esi + 0xb4] */ r_eax = (u32)R8((u32)(r_esi+0xb4u));
    /* 007220a1: fld dword ptr [eax*8 + 0x9705fc] */ FPUSH(R_F32((u32)(r_eax*8+0x9705fcu)));
    /* 007220a8: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007220aa: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 007220ae: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007220b0: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007220b4: fld dword ptr [eax*8 + 0x9705fc] */ FPUSH(R_F32((u32)(r_eax*8+0x9705fcu)));
    /* 007220bb: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 007220bd: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 007220c1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007220c3: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 007220c5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007220c7: fdiv st(3), st(0) */ ST(3) = ST(3) / ST(0);
    /* 007220c9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007220cb: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007220cf: mov dword ptr [esp], 0x40e00000 */ W32((u32)(r_esp), 0x40e00000u);
    /* 007220d6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007220d9: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007220db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007220dd: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007220e1: fld dword ptr [eax*8 + 0x970600] */ FPUSH(R_F32((u32)(r_eax*8+0x970600u)));
    /* 007220e8: fld dword ptr [eax*8 + 0x970600] */ FPUSH(R_F32((u32)(r_eax*8+0x970600u)));
    /* 007220ef: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 007220f1: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 007220f5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007220f7: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 007220f9: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007220fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007220fe: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00722102: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00722105: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00722109: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x72210eu); f_0082b440();
    /* 0072210e: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x722113u); f_004ac444();
    /* 00722113: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x722118u); f_007a9044();
    /* 00722118: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0072211d: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x722122u); f_0082bb30();
    /* 00722122: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 00722128: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x72212du); f_00829cc8();
    /* 0072212d: mov edx, dword ptr [esi + 0xb8] */ r_edx = R32((u32)(r_esi+0xb8u));
    /* 00722133: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00722136: or edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072213c: mov ecx, 4 */ r_ecx = 0x4u;
    /* 00722141: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x722146u); f_0082bb60();
    /* 00722146: fild dword ptr [esi + 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_esi+0xa8u)));
    /* 0072214c: fmul dword ptr [0x970618] */ ST(0) = ST(0) * R_F32((u32)(0x970618u));
    /* 00722152: fadd dword ptr [0x97061c] */ ST(0) = ST(0) + R_F32((u32)(0x97061cu));
    /* 00722158: fld dword ptr [0x970610] */ FPUSH(R_F32((u32)(0x970610u)));
    /* 0072215e: fld dword ptr [0x97060c] */ FPUSH(R_F32((u32)(0x97060cu)));
    /* 00722164: fld dword ptr [0x970614] */ FPUSH(R_F32((u32)(0x970614u)));
    /* 0072216a: movzx eax, byte ptr [esi + 0xb4] */ r_eax = (u32)R8((u32)(r_esi+0xb4u));
    /* 00722171: fld dword ptr [eax*8 + 0x9705ec] */ FPUSH(R_F32((u32)(r_eax*8+0x9705ecu)));
    /* 00722178: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0072217a: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 0072217e: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00722180: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00722184: fld dword ptr [eax*8 + 0x9705ec] */ FPUSH(R_F32((u32)(r_eax*8+0x9705ecu)));
    /* 0072218b: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0072218d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00722191: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00722193: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00722195: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00722197: fdiv st(3), st(0) */ ST(3) = ST(3) / ST(0);
    /* 00722199: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0072219b: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0072219f: mov dword ptr [esp + 0x20], 0x40e00000 */ W32((u32)(r_esp+0x20u), 0x40e00000u);
    /* 007221a7: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007221ab: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007221ad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007221af: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007221b3: fld dword ptr [eax*8 + 0x9705f0] */ FPUSH(R_F32((u32)(r_eax*8+0x9705f0u)));
    /* 007221ba: fld dword ptr [eax*8 + 0x9705f0] */ FPUSH(R_F32((u32)(r_eax*8+0x9705f0u)));
    /* 007221c1: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 007221c3: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007221c7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007221c9: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 007221cb: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007221cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007221d0: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007221d4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007221d7: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007221db: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x7221e0u); f_0082b440();
    /* 007221e0: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x7221e5u); f_004ac444();
    /* 007221e5: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007221e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007221e9: ret 4 */ FN_RET(0x0072202c); r_esp += 8; return;
}

void f_007221ec(void) /* sub_7221EC */
{
    FN_ENTER(0x007221ec);
    /* 007221ec: mov dword ptr [0xa9a7c0], 0x3f800000 */ W32((u32)(0xa9a7c0u), 0x3f800000u);
    /* 007221f6: mov dword ptr [0xa9a7c4], 0x41000000 */ W32((u32)(0xa9a7c4u), 0x41000000u);
    /* 00722200: mov dword ptr [0xa9a7c8], 0x3fc00000 */ W32((u32)(0xa9a7c8u), 0x3fc00000u);
    /* 0072220a: ret  */ FN_RET(0x007221ec); r_esp += 4; return;
}

void f_0072220c(void) /* sub_72220C */
{
    FN_ENTER(0x0072220c);
    /* 0072220c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072220d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072220f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00722211: call 0x722230 */ r_esp -= 4; W32(r_esp, 0x722216u); f_00722230();
    /* 00722216: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0072221a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072221c: jne 0x722222 */ if (!fZ) goto L_00722222;
L_0072221e:; BB(0x0072221e);
    /* 0072221e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072221f: ret 4 */ FN_RET(0x0072220c); r_esp += 8; return;
L_00722222:; BB(0x00722222);
    /* 00722222: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00722223: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x722228u); f_005c2f74();
    /* 00722228: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00722229: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072222a: ret 4 */ FN_RET(0x0072220c); r_esp += 8; return;
}

void f_00722230(void) /* sub_722230 */
{
    FN_ENTER(0x00722230);
    /* 00722230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00722231: mov ebp, esp */ r_ebp = r_esp;
    /* 00722233: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00722235: push 0x8f0e08 */ { u32 v = 0x8f0e08u; r_esp -= 4; W32(r_esp, v); }
    /* 0072223a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00722240: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722241: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00722248: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072224b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0072224e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00722251: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00722254: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00722257: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0072225a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00722261: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00722264: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00722267: mov dword ptr [eax], 0xb3fe18 */ W32((u32)(r_eax), 0xb3fe18u);
    /* 0072226d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072226f: je 0x722280 */ if (fZ) goto L_00722280;
L_00722271:; BB(0x00722271);
    /* 00722271: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x722276u); f_007127b0();
    /* 00722276: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00722279: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
L_00722280:; BB(0x00722280);
    /* 00722280: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00722283: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722285: je 0x722296 */ if (fZ) goto L_00722296;
L_00722287:; BB(0x00722287);
    /* 00722287: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x72228cu); f_007127b0();
    /* 0072228c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072228f: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
L_00722296:; BB(0x00722296);
    /* 00722296: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072229c: call 0x7180a8 */ r_esp -= 4; W32(r_esp, 0x7222a1u); f_007180a8();
    /* 007222a1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007222a7: call 0x718108 */ r_esp -= 4; W32(r_esp, 0x7222acu); f_00718108();
    /* 007222ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007222af: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x7222b4u); f_007917b8();
    /* 007222b4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007222b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007222b9: jne 0x7222f0 */ if (!fZ) goto L_007222f0;
L_007222bb:; BB(0x007222bb);
    /* 007222bb: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 007222c2: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007222c4: jne 0x7222f0 */ if (!fZ) goto L_007222f0;
L_007222c6:; BB(0x007222c6);
    /* 007222c6: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007222cc: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7222d1u); f_0068d5a8();
    /* 007222d1: mov ebx, eax */ r_ebx = r_eax;
    /* 007222d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007222d6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007222d8: je 0x7222e8 */ if (fZ) goto L_007222e8;
L_007222da:; BB(0x007222da);
    /* 007222da: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007222dc: call 0x693728 */ r_esp -= 4; W32(r_esp, 0x7222e1u); f_00693728();
    /* 007222e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007222e3: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x7222e8u); f_00685514();
L_007222e8:; BB(0x007222e8);
    /* 007222e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007222ea: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x7222efu); f_00791748();
    /* 007222ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007222f0:; BB(0x007222f0);
    /* 007222f0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007222f7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007222fa: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7222ffu); f_008171e8();
    /* 007222ff: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00722302: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00722305: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072230c: mov esp, ebp */ r_esp = r_ebp;
    /* 0072230e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072230f: ret  */ FN_RET(0x00722230); r_esp += 4; return;
}

void f_00722310(void) /* sub_722310 */
{
    FN_ENTER(0x00722310);
    /* 00722310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00722311: mov ebp, esp */ r_ebp = r_esp;
    /* 00722313: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00722315: push 0x8f0e24 */ { u32 v = 0x8f0e24u; r_esp -= 4; W32(r_esp, v); }
    /* 0072231a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00722320: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722321: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00722328: sub esp, 0x114 */ {  u32 a = r_esp; u32 b = 0x114u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072232e: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00722331: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00722334: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00722337: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0072233a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072233d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00722340: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x722345u); f_008193cc();
    /* 00722345: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0072234c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072234f: mov dword ptr [edx], 0xb3fe18 */ W32((u32)(r_edx), 0xb3fe18u);
    /* 00722355: mov eax, dword ptr [0x9f24ec] */ r_eax = R32((u32)(0x9f24ecu));
    /* 0072235a: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 00722361: push 0xed */ { u32 v = 0xedu; r_esp -= 4; W32(r_esp, v); }
    /* 00722366: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00722369: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x72236eu); f_0073ec50();
    /* 0072236e: mov ebx, eax */ r_ebx = r_eax;
    /* 00722370: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 00722375: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x72237au); f_0073ec50();
    /* 0072237a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0072237c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072237d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072237e: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x722383u); f_0073a8dc();
    /* 00722383: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00722386: push 0x14a */ { u32 v = 0x14au; r_esp -= 4; W32(r_esp, v); }
    /* 0072238b: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0072238e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x722393u); f_0079317c();
    /* 00722393: mov esi, eax */ r_esi = r_eax;
    /* 00722395: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722398: call 0x78bf68 */ r_esp -= 4; W32(r_esp, 0x72239du); f_0078bf68();
    /* 0072239d: mov ebx, eax */ r_ebx = r_eax;
    /* 0072239f: call 0x78bf60 */ r_esp -= 4; W32(r_esp, 0x7223a4u); f_0078bf60();
    /* 007223a4: lea edx, [ebp - 0x120] */ r_edx = (u32)(r_ebp+0xfffffee0u);
    /* 007223aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007223ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007223ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007223ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007223ae: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7223b3u); f_00857e29();
    /* 007223b3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007223b6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007223b9: lea eax, [ebp - 0x120] */ r_eax = (u32)(r_ebp+0xfffffee0u);
    /* 007223bf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007223c1: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 007223c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007223c5: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7223cau); f_0073ae38();
    /* 007223ca: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007223d0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7223d5u); f_0068d5a8();
    /* 007223d5: mov ebx, eax */ r_ebx = r_eax;
    /* 007223d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007223da: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007223dc: je 0x7223ee */ if (fZ) goto L_007223ee;
L_007223de:; BB(0x007223de);
    /* 007223de: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007223e0: call 0x6936ec */ r_esp -= 4; W32(r_esp, 0x7223e5u); f_006936ec();
    /* 007223e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007223e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007223e9: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x7223eeu); f_006854a8();
L_007223ee:; BB(0x007223ee);
    /* 007223ee: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007223f4: call 0x7181b8 */ r_esp -= 4; W32(r_esp, 0x7223f9u); f_007181b8();
    /* 007223f9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007223ff: call 0x7180d8 */ r_esp -= 4; W32(r_esp, 0x722404u); f_007180d8();
    /* 00722404: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722407: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072240a: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0072240d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00722410: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00722412: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00722415: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 00722418: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072241b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00722422: mov esp, ebp */ r_esp = r_ebp;
    /* 00722424: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00722425: ret 4 */ FN_RET(0x00722310); r_esp += 8; return;
}

void f_00722428(void) /* sub_722428 */
{
    FN_ENTER(0x00722428);
    /* 00722428: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00722429: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072242a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072242b: sub esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00722431: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00722433: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00722439: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x72243eu); f_0068d5a8();
    /* 0072243e: mov ebx, eax */ r_ebx = r_eax;
    /* 00722440: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722443: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 00722446: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722449: je 0x722611 */ if (fZ) goto L_00722611;
L_0072244f:; BB(0x0072244f);
    /* 0072244f: call 0x78bf70 */ r_esp -= 4; W32(r_esp, 0x722454u); f_0078bf70();
    /* 00722454: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722457: jne 0x7224c8 */ if (!fZ) goto L_007224c8;
L_00722459:; BB(0x00722459);
    /* 00722459: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0072245c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072245e: je 0x72246c */ if (fZ) goto L_0072246c;
L_00722460:; BB(0x00722460);
    /* 00722460: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x722465u); f_007127b0();
    /* 00722465: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_0072246c:; BB(0x0072246c);
    /* 0072246c: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0072246f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722471: je 0x72247f */ if (fZ) goto L_0072247f;
L_00722473:; BB(0x00722473);
    /* 00722473: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x722478u); f_007127b0();
    /* 00722478: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_0072247f:; BB(0x0072247f);
    /* 0072247f: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00722484: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x722489u); f_0073ec50();
    /* 00722489: mov ebx, eax */ r_ebx = r_eax;
    /* 0072248b: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00722490: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x722495u); f_0073ec50();
    /* 00722495: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722496: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00722497: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x72249cu); f_0073a888();
    /* 0072249c: push 0x155 */ { u32 v = 0x155u; r_esp -= 4; W32(r_esp, v); }
    /* 007224a1: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 007224a4: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7224a9u); f_0079317c();
    /* 007224a9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007224ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007224ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007224af: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 007224b2: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7224b7u); f_0073ae38();
    /* 007224b7: mov dword ptr [ebp + 0x24], 8 */ W32((u32)(r_ebp+0x24u), 0x8u);
    /* 007224be: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007224c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007224c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007224c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007224c7: ret  */ FN_RET(0x00722428); r_esp += 4; return;
L_007224c8:; BB(0x007224c8);
    /* 007224c8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007224ca: je 0x723433 */ if (fZ) goto L_00723433;
L_007224d0:; BB(0x007224d0);
    /* 007224d0: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007224d2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007224d4: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x7224dau); call_ind(t); }
    /* 007224da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007224dc: je 0x722611 */ if (fZ) goto L_00722611;
L_007224e2:; BB(0x007224e2);
    /* 007224e2: mov byte ptr [esp], 0xc2 */ W8((u32)(r_esp), 0xc2u);
    /* 007224e6: mov byte ptr [esp + 1], 0x17 */ W8((u32)(r_esp+0x1u), 0x17u);
    /* 007224eb: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007224f1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7224f6u); f_0068d5a8();
    /* 007224f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007224f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007224f9: je 0x7225da */ if (fZ) goto L_007225da;
L_007224ff:; BB(0x007224ff);
    /* 007224ff: mov edx, 0xa9c8c0 */ r_edx = 0xa9c8c0u;
    /* 00722504: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 00722506: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00722509: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0072250d: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00722510: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00722514: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 00722518: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 0072251b: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0072251f: mov ebx, dword ptr [edx + 0x10] */ r_ebx = R32((u32)(r_edx+0x10u));
    /* 00722522: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00722526: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 00722529: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0072252d: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 00722530: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00722534: mov ebx, dword ptr [edx + 0x1c] */ r_ebx = R32((u32)(r_edx+0x1cu));
    /* 00722537: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0072253b: mov ebx, dword ptr [edx + 0x20] */ r_ebx = R32((u32)(r_edx+0x20u));
    /* 0072253e: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 00722542: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 00722545: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 00722549: mov ebx, dword ptr [edx + 0x28] */ r_ebx = R32((u32)(r_edx+0x28u));
    /* 0072254c: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 00722550: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 00722553: mov dword ptr [esp + 0x30], ebx */ W32((u32)(r_esp+0x30u), r_ebx);
    /* 00722557: mov ebx, dword ptr [edx + 0x30] */ r_ebx = R32((u32)(r_edx+0x30u));
    /* 0072255a: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 0072255e: mov ebx, dword ptr [edx + 0x34] */ r_ebx = R32((u32)(r_edx+0x34u));
    /* 00722561: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 00722565: mov ebx, dword ptr [edx + 0x38] */ r_ebx = R32((u32)(r_edx+0x38u));
    /* 00722568: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 0072256c: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 0072256f: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 00722573: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 00722576: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 0072257a: mov ebx, dword ptr [edx + 0x44] */ r_ebx = R32((u32)(r_edx+0x44u));
    /* 0072257d: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 00722581: mov ebx, dword ptr [edx + 0x48] */ r_ebx = R32((u32)(r_edx+0x48u));
    /* 00722584: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00722588: mov ebx, dword ptr [edx + 0x4c] */ r_ebx = R32((u32)(r_edx+0x4cu));
    /* 0072258b: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
    /* 0072258f: mov ebx, dword ptr [edx + 0x50] */ r_ebx = R32((u32)(r_edx+0x50u));
    /* 00722592: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 00722595: mov dword ptr [esp + 0x54], ebx */ W32((u32)(r_esp+0x54u), r_ebx);
    /* 00722599: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 0072259d: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 007225a3: mov dword ptr [esp + 8], 4 */ W32((u32)(r_esp+0x8u), 0x4u);
    /* 007225ab: mov ecx, eax */ r_ecx = r_eax;
    /* 007225ad: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007225b1: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x7225b6u); f_006936b4();
    /* 007225b6: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007225ba: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007225bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007225bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007225be: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7225c3u); f_00857dec();
    /* 007225c3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007225c6: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x7225cbu); f_0078bf78();
    /* 007225cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007225cc: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 007225d0: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x7225d5u); f_00800464();
    /* 007225d5: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x7225dau); f_0078bf78();
L_007225da:; BB(0x007225da);
    /* 007225da: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 007225dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007225df: je 0x7225ed */ if (fZ) goto L_007225ed;
L_007225e1:; BB(0x007225e1);
    /* 007225e1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7225e6u); f_007127b0();
    /* 007225e6: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_007225ed:; BB(0x007225ed);
    /* 007225ed: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 007225f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007225f2: je 0x722600 */ if (fZ) goto L_00722600;
L_007225f4:; BB(0x007225f4);
    /* 007225f4: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7225f9u); f_007127b0();
    /* 007225f9: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_00722600:; BB(0x00722600);
    /* 00722600: mov dword ptr [ebp + 0x24], 8 */ W32((u32)(r_ebp+0x24u), 0x8u);
    /* 00722607: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072260d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072260e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072260f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00722610: ret  */ FN_RET(0x00722428); r_esp += 4; return;
L_00722611:; BB(0x00722611);
    /* 00722611: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00722617: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x72261cu); f_00719140();
    /* 0072261c: mov esi, eax */ r_esi = r_eax;
    /* 0072261e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722621: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 00722624: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00722627: ja 0x723429 */ if ((!fC&&!fZ)) goto L_00723429;
L_0072262d:; BB(0x0072262d);
    /* 0072262d: mov edx, dword ptr [edx*4 + 0x9706d4] */ r_edx = R32((u32)(r_edx*4+0x9706d4u));
    /* 00722634: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00723429:; BB(0x00723429);
    /* 00723429: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072342f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00723430: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00723431: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00723432: ret  */ FN_RET(0x00722428); r_esp += 4; return;
L_00723433:; BB(0x00723433);
    /* 00723433: mov byte ptr [esp + 0x5c], 0xc2 */ W8((u32)(r_esp+0x5cu), 0xc2u);
    /* 00723438: mov byte ptr [esp + 0x5d], 0x17 */ W8((u32)(r_esp+0x5du), 0x17u);
    /* 0072343d: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00723443: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x723448u); f_0068d5a8();
    /* 00723448: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00723449: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072344b: je 0x723556 */ if (fZ) goto L_00723556;
L_00723451:; BB(0x00723451);
    /* 00723451: mov edx, 0xa9c8c0 */ r_edx = 0xa9c8c0u;
    /* 00723456: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 00723458: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0072345b: mov dword ptr [esp + 0x60], ebx */ W32((u32)(r_esp+0x60u), r_ebx);
    /* 0072345f: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00723462: mov dword ptr [esp + 0x64], esi */ W32((u32)(r_esp+0x64u), r_esi);
    /* 00723466: mov dword ptr [esp + 0x68], ebx */ W32((u32)(r_esp+0x68u), r_ebx);
    /* 0072346a: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 0072346d: mov dword ptr [esp + 0x6c], ebx */ W32((u32)(r_esp+0x6cu), r_ebx);
    /* 00723471: mov ebx, dword ptr [edx + 0x10] */ r_ebx = R32((u32)(r_edx+0x10u));
    /* 00723474: mov dword ptr [esp + 0x70], ebx */ W32((u32)(r_esp+0x70u), r_ebx);
    /* 00723478: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 0072347b: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 0072347f: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 00723482: mov dword ptr [esp + 0x78], ebx */ W32((u32)(r_esp+0x78u), r_ebx);
    /* 00723486: mov ebx, dword ptr [edx + 0x1c] */ r_ebx = R32((u32)(r_edx+0x1cu));
    /* 00723489: mov dword ptr [esp + 0x7c], ebx */ W32((u32)(r_esp+0x7cu), r_ebx);
    /* 0072348d: mov ebx, dword ptr [edx + 0x20] */ r_ebx = R32((u32)(r_edx+0x20u));
    /* 00723490: mov dword ptr [esp + 0x80], ebx */ W32((u32)(r_esp+0x80u), r_ebx);
    /* 00723497: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 0072349a: mov dword ptr [esp + 0x84], ebx */ W32((u32)(r_esp+0x84u), r_ebx);
    /* 007234a1: mov ebx, dword ptr [edx + 0x28] */ r_ebx = R32((u32)(r_edx+0x28u));
    /* 007234a4: mov dword ptr [esp + 0x88], ebx */ W32((u32)(r_esp+0x88u), r_ebx);
    /* 007234ab: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 007234ae: mov dword ptr [esp + 0x8c], ebx */ W32((u32)(r_esp+0x8cu), r_ebx);
    /* 007234b5: mov ebx, dword ptr [edx + 0x30] */ r_ebx = R32((u32)(r_edx+0x30u));
    /* 007234b8: mov dword ptr [esp + 0x90], ebx */ W32((u32)(r_esp+0x90u), r_ebx);
    /* 007234bf: mov ebx, dword ptr [edx + 0x34] */ r_ebx = R32((u32)(r_edx+0x34u));
    /* 007234c2: mov dword ptr [esp + 0x94], ebx */ W32((u32)(r_esp+0x94u), r_ebx);
    /* 007234c9: mov ebx, dword ptr [edx + 0x38] */ r_ebx = R32((u32)(r_edx+0x38u));
    /* 007234cc: mov dword ptr [esp + 0x98], ebx */ W32((u32)(r_esp+0x98u), r_ebx);
    /* 007234d3: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 007234d6: mov dword ptr [esp + 0x9c], ebx */ W32((u32)(r_esp+0x9cu), r_ebx);
    /* 007234dd: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 007234e0: mov dword ptr [esp + 0xa0], ebx */ W32((u32)(r_esp+0xa0u), r_ebx);
    /* 007234e7: mov ebx, dword ptr [edx + 0x44] */ r_ebx = R32((u32)(r_edx+0x44u));
    /* 007234ea: mov dword ptr [esp + 0xa4], ebx */ W32((u32)(r_esp+0xa4u), r_ebx);
    /* 007234f1: mov ebx, dword ptr [edx + 0x48] */ r_ebx = R32((u32)(r_edx+0x48u));
    /* 007234f4: mov dword ptr [esp + 0xa8], ebx */ W32((u32)(r_esp+0xa8u), r_ebx);
    /* 007234fb: mov ebx, dword ptr [edx + 0x4c] */ r_ebx = R32((u32)(r_edx+0x4cu));
    /* 007234fe: mov dword ptr [esp + 0xac], ebx */ W32((u32)(r_esp+0xacu), r_ebx);
    /* 00723505: mov ebx, dword ptr [edx + 0x50] */ r_ebx = R32((u32)(r_edx+0x50u));
    /* 00723508: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 0072350b: mov dword ptr [esp + 0xb0], ebx */ W32((u32)(r_esp+0xb0u), r_ebx);
    /* 00723512: mov dword ptr [esp + 0xb4], edx */ W32((u32)(r_esp+0xb4u), r_edx);
    /* 00723519: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 0072351f: mov dword ptr [esp + 0x64], 4 */ W32((u32)(r_esp+0x64u), 0x4u);
    /* 00723527: mov ecx, eax */ r_ecx = r_eax;
    /* 00723529: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 0072352d: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x723532u); f_006936b4();
    /* 00723532: lea edx, [esp + 0x68] */ r_edx = (u32)(r_esp+0x68u);
    /* 00723536: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00723538: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723539: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072353a: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72353fu); f_00857dec();
    /* 0072353f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723542: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x723547u); f_0078bf78();
    /* 00723547: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723548: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 0072354c: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x723551u); f_00800464();
    /* 00723551: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x723556u); f_0078bf78();
L_00723556:; BB(0x00723556);
    /* 00723556: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00723559: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072355b: je 0x723569 */ if (fZ) goto L_00723569;
L_0072355d:; BB(0x0072355d);
    /* 0072355d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x723562u); f_007127b0();
    /* 00723562: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_00723569:; BB(0x00723569);
    /* 00723569: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0072356c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072356e: je 0x72357c */ if (fZ) goto L_0072357c;
L_00723570:; BB(0x00723570);
    /* 00723570: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x723575u); f_007127b0();
    /* 00723575: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_0072357c:; BB(0x0072357c);
    /* 0072357c: mov dword ptr [ebp + 0x24], 8 */ W32((u32)(r_ebp+0x24u), 0x8u);
    /* 00723583: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00723589: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072358a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072358b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072358c: ret  */ FN_RET(0x00722428); r_esp += 4; return;
}

void f_00722636(void)
{
    FN_ENTER(0x00722636);
    /* 00722636: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00722639: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072263b: je 0x72358d */ if (fZ) goto L_0072358d;
L_00722641:; BB(0x00722641);
    /* 00722641: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 00722647: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0072264c: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x722651u); f_007c1160();
    /* 00722651: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722653: je 0x723429 */ if (fZ) goto L_00723429;
L_00722659:; BB(0x00722659);
    /* 00722659: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0072265c: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x722661u); f_0073b170();
    /* 00722661: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722663: je 0x72267b */ if (fZ) goto L_0072267b;
L_00722665:; BB(0x00722665);
    /* 00722665: call 0x7162e4 */ r_esp -= 4; W32(r_esp, 0x72266au); f_007162e4();
    /* 0072266a: mov dword ptr [ebp + 0x24], 9 */ W32((u32)(r_ebp+0x24u), 0x9u);
    /* 00722671: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00722677: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00722678: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00722679: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072267a: ret  */ FN_RET(0x00722636); r_esp += 4; return;
L_0072267b:; BB(0x0072267b);
    /* 0072267b: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0072267e: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x722683u); f_0073b0f0();
    /* 00722683: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00722689: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072268a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072268b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072268c: ret  */ FN_RET(0x00722636); r_esp += 4; return;
L_00723429:; BB(0x00723429);
    /* 00723429: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072342f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00723430: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00723431: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00723432: ret  */ FN_RET(0x00722636); r_esp += 4; return;
L_0072358d:; BB(0x0072358d);
    /* 0072358d: call 0x7162e4 */ r_esp -= 4; W32(r_esp, 0x723592u); f_007162e4();
    /* 00723592: mov dword ptr [ebp + 0x24], 9 */ W32((u32)(r_ebp+0x24u), 0x9u);
    /* 00723599: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072359f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007235a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007235a1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007235a2: ret  */ FN_RET(0x00722636); r_esp += 4; return;
}

void f_0072268d(void)
{
    FN_ENTER(0x0072268d);
    /* 0072268d: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00722690: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722692: je 0x7226a0 */ if (fZ) goto L_007226a0;
L_00722694:; BB(0x00722694);
    /* 00722694: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x722699u); f_007127b0();
    /* 00722699: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_007226a0:; BB(0x007226a0);
    /* 007226a0: call 0x78bf80 */ r_esp -= 4; W32(r_esp, 0x7226a5u); f_0078bf80();
    /* 007226a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007226a7: je 0x723429 */ if (fZ) goto L_00723429;
L_007226ad:; BB(0x007226ad);
    /* 007226ad: call 0x78bf88 */ r_esp -= 4; W32(r_esp, 0x7226b2u); f_0078bf88();
    /* 007226b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007226b4: jne 0x7227b9 */ if (!fZ) goto L_007227b9;
L_007226ba:; BB(0x007226ba);
    /* 007226ba: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7226bfu); f_006dc358();
    /* 007226bf: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007226c2: jne 0x7226f9 */ if (!fZ) goto L_007226f9;
L_007226c4:; BB(0x007226c4);
    /* 007226c4: push 0x183 */ { u32 v = 0x183u; r_esp -= 4; W32(r_esp, v); }
    /* 007226c9: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7226ceu); f_0079317c();
    /* 007226ce: mov esi, eax */ r_esi = r_eax;
    /* 007226d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007226d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007226d5: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x7226dau); f_006936b4();
    /* 007226da: mov ebx, eax */ r_ebx = r_eax;
    /* 007226dc: call 0x78bf60 */ r_esp -= 4; W32(r_esp, 0x7226e1u); f_0078bf60();
    /* 007226e1: lea edx, [esp + 0xb8] */ r_edx = (u32)(r_esp+0xb8u);
    /* 007226e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007226e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007226ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007226eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007226ec: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7226f1u); f_00857e29();
    /* 007226f1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007226f4: jmp 0x722779 */ goto L_00722779;
L_007226f9:; BB(0x007226f9);
    /* 007226f9: push 0x14d */ { u32 v = 0x14du; r_esp -= 4; W32(r_esp, v); }
    /* 007226fe: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x722703u); f_0079317c();
    /* 00722703: mov esi, eax */ r_esi = r_eax;
    /* 00722705: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722708: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072270a: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x72270fu); f_006936b4();
    /* 0072270f: lea edx, [esp + 0x1b8] */ r_edx = (u32)(r_esp+0x1b8u);
    /* 00722716: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722717: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00722718: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00722719: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x72271eu); f_00857e29();
    /* 0072271e: push 0x14e */ { u32 v = 0x14eu; r_esp -= 4; W32(r_esp, v); }
    /* 00722723: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x722728u); f_0079317c();
    /* 00722728: lea edx, [esp + 0x1c8] */ r_edx = (u32)(r_esp+0x1c8u);
    /* 0072272f: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00722734: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722735: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00722736: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x72273bu); f_00858b0f();
    /* 0072273b: push 0x151 */ { u32 v = 0x151u; r_esp -= 4; W32(r_esp, v); }
    /* 00722740: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x722745u); f_0079317c();
    /* 00722745: lea edx, [esp + 0x1d8] */ r_edx = (u32)(r_esp+0x1d8u);
    /* 0072274c: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00722751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722752: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00722753: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x722758u); f_00858b0f();
    /* 00722758: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072275b: call 0x78bf60 */ r_esp -= 4; W32(r_esp, 0x722760u); f_0078bf60();
    /* 00722760: lea ebx, [esp + 0xb8] */ r_ebx = (u32)(r_esp+0xb8u);
    /* 00722767: lea edx, [esp + 0x1b8] */ r_edx = (u32)(r_esp+0x1b8u);
    /* 0072276e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072276f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00722770: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00722771: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x722776u); f_00857e29();
    /* 00722776: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00722779:; BB(0x00722779);
    /* 00722779: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0072277e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x722783u); f_0073ec50();
    /* 00722783: mov ebx, eax */ r_ebx = r_eax;
    /* 00722785: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0072278a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x72278fu); f_0073ec50();
    /* 0072278f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722790: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00722791: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x722796u); f_0073a888();
    /* 00722796: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722799: lea edx, [esp + 0xb8] */ r_edx = (u32)(r_esp+0xb8u);
    /* 007227a0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007227a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007227a3: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 007227a6: mov ecx, eax */ r_ecx = r_eax;
    /* 007227a8: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7227adu); f_0073ae38();
    /* 007227ad: mov dword ptr [ebp + 0x24], 8 */ W32((u32)(r_ebp+0x24u), 0x8u);
    /* 007227b4: jmp 0x7228f2 */ goto L_007228f2;
L_007227b9:; BB(0x007227b9);
    /* 007227b9: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007227bc: jne 0x722842 */ if (!fZ) goto L_00722842;
L_007227c2:; BB(0x007227c2);
    /* 007227c2: push 0x152 */ { u32 v = 0x152u; r_esp -= 4; W32(r_esp, v); }
    /* 007227c7: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7227ccu); f_0079317c();
    /* 007227cc: mov ebx, eax */ r_ebx = r_eax;
    /* 007227ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007227d1: call 0x78bf60 */ r_esp -= 4; W32(r_esp, 0x7227d6u); f_0078bf60();
    /* 007227d6: lea edx, [esp + 0xb8] */ r_edx = (u32)(r_esp+0xb8u);
    /* 007227dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007227de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007227df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007227e0: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7227e5u); f_00857e29();
    /* 007227e5: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 007227ea: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7227efu); f_0079317c();
    /* 007227ef: lea edx, [esp + 0xc8] */ r_edx = (u32)(r_esp+0xc8u);
    /* 007227f6: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 007227fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007227fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007227fd: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x722802u); f_00858b0f();
    /* 00722802: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00722807: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x72280cu); f_0073ec50();
    /* 0072280c: mov ebx, eax */ r_ebx = r_eax;
    /* 0072280e: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00722813: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x722818u); f_0073ec50();
    /* 00722818: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722819: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072281a: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x72281fu); f_0073a888();
    /* 0072281f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722822: lea edx, [esp + 0xb8] */ r_edx = (u32)(r_esp+0xb8u);
    /* 00722829: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0072282b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072282c: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 0072282f: mov ecx, eax */ r_ecx = r_eax;
    /* 00722831: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x722836u); f_0073ae38();
    /* 00722836: mov dword ptr [ebp + 0x24], 8 */ W32((u32)(r_ebp+0x24u), 0x8u);
    /* 0072283d: jmp 0x7228f2 */ goto L_007228f2;
L_00722842:; BB(0x00722842);
    /* 00722842: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x722847u); f_006dc358();
    /* 00722847: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072284a: jne 0x722874 */ if (!fZ) goto L_00722874;
L_0072284c:; BB(0x0072284c);
    /* 0072284c: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00722851: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x722856u); f_0079317c();
    /* 00722856: mov ebx, eax */ r_ebx = r_eax;
    /* 00722858: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072285b: call 0x78bf60 */ r_esp -= 4; W32(r_esp, 0x722860u); f_0078bf60();
    /* 00722860: lea edx, [esp + 0xb8] */ r_edx = (u32)(r_esp+0xb8u);
    /* 00722867: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722868: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00722869: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072286a: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x72286fu); f_00857e29();
    /* 0072286f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722872: jmp 0x7228b7 */ goto L_007228b7;
L_00722874:; BB(0x00722874);
    /* 00722874: push 0x14e */ { u32 v = 0x14eu; r_esp -= 4; W32(r_esp, v); }
    /* 00722879: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x72287eu); f_0079317c();
    /* 0072287e: mov ebx, eax */ r_ebx = r_eax;
    /* 00722880: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722883: call 0x78bf60 */ r_esp -= 4; W32(r_esp, 0x722888u); f_0078bf60();
    /* 00722888: lea edx, [esp + 0xb8] */ r_edx = (u32)(r_esp+0xb8u);
    /* 0072288f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722890: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00722891: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00722892: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x722897u); f_00857e29();
    /* 00722897: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 0072289c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7228a1u); f_0079317c();
    /* 007228a1: lea edx, [esp + 0xc8] */ r_edx = (u32)(r_esp+0xc8u);
    /* 007228a8: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 007228ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007228ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007228af: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x7228b4u); f_00858b0f();
    /* 007228b4: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007228b7:; BB(0x007228b7);
    /* 007228b7: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 007228bc: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7228c1u); f_0073ec50();
    /* 007228c1: mov ebx, eax */ r_ebx = r_eax;
    /* 007228c3: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 007228c8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7228cdu); f_0073ec50();
    /* 007228cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007228ce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007228cf: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x7228d4u); f_0073a888();
    /* 007228d4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007228d7: lea edx, [esp + 0xb8] */ r_edx = (u32)(r_esp+0xb8u);
    /* 007228de: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007228e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007228e1: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 007228e4: mov ecx, eax */ r_ecx = r_eax;
    /* 007228e6: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7228ebu); f_0073ae38();
    /* 007228eb: mov dword ptr [ebp + 0x24], 8 */ W32((u32)(r_ebp+0x24u), 0x8u);
L_007228f2:; BB(0x007228f2);
    /* 007228f2: call 0x78bf90 */ r_esp -= 4; W32(r_esp, 0x7228f7u); f_0078bf90();
    /* 007228f7: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007228fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007228fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007228ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00722900: ret  */ FN_RET(0x0072268d); r_esp += 4; return;
L_00723429:; BB(0x00723429);
    /* 00723429: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072342f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00723430: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00723431: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00723432: ret  */ FN_RET(0x0072268d); r_esp += 4; return;
}

void f_00722901(void)
{
    FN_ENTER(0x00722901);
    /* 00722901: mov esi, dword ptr [ebp + 0x20] */ r_esi = R32((u32)(r_ebp+0x20u));
    /* 00722904: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722906: je 0x7237c2 */ if (fZ) goto L_007237c2;
L_0072290c:; BB(0x0072290c);
    /* 0072290c: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 00722913: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00722919: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0072291c: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 00722923: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722925: je 0x72292e */ if (fZ) goto L_0072292e;
L_00722927:; BB(0x00722927);
    /* 00722927: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00722929: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x72292eu); f_00760acc();
L_0072292e:; BB(0x0072292e);
    /* 0072292e: mov dword ptr [ebp + 0x28], 0x384 */ W32((u32)(r_ebp+0x28u), 0x384u);
    /* 00722935: mov dword ptr [ebp + 0x24], 6 */ W32((u32)(r_ebp+0x24u), 0x6u);
    /* 0072293c: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0072293f: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00722946: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00722949: je 0x722b6e */ if (fZ) goto L_00722b6e;
L_0072294f:; BB(0x0072294f);
    /* 0072294f: mov byte ptr [esp + 0x2b8], 0xc2 */ W8((u32)(r_esp+0x2b8u), 0xc2u);
    /* 00722957: mov byte ptr [esp + 0x2b9], 0x17 */ W8((u32)(r_esp+0x2b9u), 0x17u);
    /* 0072295f: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00722965: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x72296au); f_0068d5a8();
    /* 0072296a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072296b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072296d: je 0x722a9c */ if (fZ) goto L_00722a9c;
L_00722973:; BB(0x00722973);
    /* 00722973: mov edx, 0xa9c8c0 */ r_edx = 0xa9c8c0u;
    /* 00722978: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0072297a: mov dword ptr [esp + 0x2bc], esi */ W32((u32)(r_esp+0x2bcu), r_esi);
    /* 00722981: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00722984: mov dword ptr [esp + 0x2c0], esi */ W32((u32)(r_esp+0x2c0u), r_esi);
    /* 0072298b: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 0072298e: mov dword ptr [esp + 0x2c4], esi */ W32((u32)(r_esp+0x2c4u), r_esi);
    /* 00722995: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 00722998: mov dword ptr [esp + 0x2c8], esi */ W32((u32)(r_esp+0x2c8u), r_esi);
    /* 0072299f: mov esi, dword ptr [edx + 0x10] */ r_esi = R32((u32)(r_edx+0x10u));
    /* 007229a2: mov dword ptr [esp + 0x2cc], esi */ W32((u32)(r_esp+0x2ccu), r_esi);
    /* 007229a9: mov esi, dword ptr [edx + 0x14] */ r_esi = R32((u32)(r_edx+0x14u));
    /* 007229ac: mov dword ptr [esp + 0x2d0], esi */ W32((u32)(r_esp+0x2d0u), r_esi);
    /* 007229b3: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 007229b6: mov dword ptr [esp + 0x2d4], esi */ W32((u32)(r_esp+0x2d4u), r_esi);
    /* 007229bd: mov esi, dword ptr [edx + 0x1c] */ r_esi = R32((u32)(r_edx+0x1cu));
    /* 007229c0: mov dword ptr [esp + 0x2d8], esi */ W32((u32)(r_esp+0x2d8u), r_esi);
    /* 007229c7: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 007229ca: mov dword ptr [esp + 0x2dc], esi */ W32((u32)(r_esp+0x2dcu), r_esi);
    /* 007229d1: mov esi, dword ptr [edx + 0x24] */ r_esi = R32((u32)(r_edx+0x24u));
    /* 007229d4: mov dword ptr [esp + 0x2e0], esi */ W32((u32)(r_esp+0x2e0u), r_esi);
    /* 007229db: mov esi, dword ptr [edx + 0x28] */ r_esi = R32((u32)(r_edx+0x28u));
    /* 007229de: mov dword ptr [esp + 0x2e4], esi */ W32((u32)(r_esp+0x2e4u), r_esi);
    /* 007229e5: mov esi, dword ptr [edx + 0x2c] */ r_esi = R32((u32)(r_edx+0x2cu));
    /* 007229e8: mov dword ptr [esp + 0x2e8], esi */ W32((u32)(r_esp+0x2e8u), r_esi);
    /* 007229ef: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 007229f2: mov dword ptr [esp + 0x2ec], esi */ W32((u32)(r_esp+0x2ecu), r_esi);
    /* 007229f9: mov esi, dword ptr [edx + 0x34] */ r_esi = R32((u32)(r_edx+0x34u));
    /* 007229fc: mov dword ptr [esp + 0x2f0], esi */ W32((u32)(r_esp+0x2f0u), r_esi);
    /* 00722a03: mov esi, dword ptr [edx + 0x38] */ r_esi = R32((u32)(r_edx+0x38u));
    /* 00722a06: mov dword ptr [esp + 0x2f4], esi */ W32((u32)(r_esp+0x2f4u), r_esi);
    /* 00722a0d: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 00722a10: mov dword ptr [esp + 0x2f8], esi */ W32((u32)(r_esp+0x2f8u), r_esi);
    /* 00722a17: mov esi, dword ptr [edx + 0x40] */ r_esi = R32((u32)(r_edx+0x40u));
    /* 00722a1a: mov dword ptr [esp + 0x2fc], esi */ W32((u32)(r_esp+0x2fcu), r_esi);
    /* 00722a21: mov esi, dword ptr [edx + 0x44] */ r_esi = R32((u32)(r_edx+0x44u));
    /* 00722a24: mov dword ptr [esp + 0x300], esi */ W32((u32)(r_esp+0x300u), r_esi);
    /* 00722a2b: mov esi, dword ptr [edx + 0x48] */ r_esi = R32((u32)(r_edx+0x48u));
    /* 00722a2e: mov dword ptr [esp + 0x304], esi */ W32((u32)(r_esp+0x304u), r_esi);
    /* 00722a35: mov esi, dword ptr [edx + 0x4c] */ r_esi = R32((u32)(r_edx+0x4cu));
    /* 00722a38: mov dword ptr [esp + 0x308], esi */ W32((u32)(r_esp+0x308u), r_esi);
    /* 00722a3f: mov esi, dword ptr [edx + 0x50] */ r_esi = R32((u32)(r_edx+0x50u));
    /* 00722a42: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 00722a45: mov dword ptr [esp + 0x30c], esi */ W32((u32)(r_esp+0x30cu), r_esi);
    /* 00722a4c: mov dword ptr [esp + 0x310], edx */ W32((u32)(r_esp+0x310u), r_edx);
    /* 00722a53: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 00722a59: mov dword ptr [esp + 0x2c0], 3 */ W32((u32)(r_esp+0x2c0u), 0x3u);
    /* 00722a64: mov ecx, eax */ r_ecx = r_eax;
    /* 00722a66: mov dword ptr [esp + 0x2bc], edx */ W32((u32)(r_esp+0x2bcu), r_edx);
    /* 00722a6d: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x722a72u); f_006936b4();
    /* 00722a72: lea edx, [esp + 0x2c4] */ r_edx = (u32)(r_esp+0x2c4u);
    /* 00722a79: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00722a7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722a7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00722a7d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x722a82u); f_00857dec();
    /* 00722a82: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722a85: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x722a8au); f_0078bf78();
    /* 00722a8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722a8b: lea ecx, [esp + 0x2bc] */ r_ecx = (u32)(r_esp+0x2bcu);
    /* 00722a92: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x722a97u); f_00800464();
    /* 00722a97: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x722a9cu); f_0078bf78();
L_00722a9c:; BB(0x00722a9c);
    /* 00722a9c: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00722a9f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722aa1: je 0x722aaf */ if (fZ) goto L_00722aaf;
L_00722aa3:; BB(0x00722aa3);
    /* 00722aa3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x722aa8u); f_007127b0();
    /* 00722aa8: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_00722aaf:; BB(0x00722aaf);
    /* 00722aaf: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00722ab2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722ab4: je 0x722ac2 */ if (fZ) goto L_00722ac2;
L_00722ab6:; BB(0x00722ab6);
    /* 00722ab6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x722abbu); f_007127b0();
    /* 00722abb: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_00722ac2:; BB(0x00722ac2);
    /* 00722ac2: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00722ac7: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x722accu); f_0073ec50();
    /* 00722acc: mov esi, eax */ r_esi = r_eax;
    /* 00722ace: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00722ad3: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x722ad8u); f_0073ec50();
    /* 00722ad8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722ad9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00722ada: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x722adfu); f_0073a888();
    /* 00722adf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722ae2: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00722ae5: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x722aeau); f_006dc358();
    /* 00722aea: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722aed: jne 0x722b47 */ if (!fZ) goto L_00722b47;
L_00722aef:; BB(0x00722aef);
    /* 00722aef: lea edx, [esp + 0x370] */ r_edx = (u32)(r_esp+0x370u);
    /* 00722af6: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00722afb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00722afd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00722afe: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x722b03u); f_0086b688();
    /* 00722b03: push 0x185 */ { u32 v = 0x185u; r_esp -= 4; W32(r_esp, v); }
    /* 00722b08: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x722b0du); f_0079317c();
    /* 00722b0d: mov esi, eax */ r_esi = r_eax;
    /* 00722b0f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722b12: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00722b14: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x722b19u); f_006936b4();
    /* 00722b19: mov ebx, eax */ r_ebx = r_eax;
    /* 00722b1b: call 0x78bf60 */ r_esp -= 4; W32(r_esp, 0x722b20u); f_0078bf60();
    /* 00722b20: lea edx, [esp + 0x370] */ r_edx = (u32)(r_esp+0x370u);
    /* 00722b27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722b28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00722b29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00722b2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00722b2b: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x722b30u); f_00857e29();
    /* 00722b30: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722b33: lea eax, [esp + 0x370] */ r_eax = (u32)(r_esp+0x370u);
    /* 00722b3a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00722b3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722b3d: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00722b40: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x722b45u); f_0073ae38();
    /* 00722b45: jmp 0x722b5d */ goto L_00722b5d;
L_00722b47:; BB(0x00722b47);
    /* 00722b47: push 0x14f */ { u32 v = 0x14fu; r_esp -= 4; W32(r_esp, v); }
    /* 00722b4c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x722b51u); f_0079317c();
    /* 00722b51: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00722b52: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00722b54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722b55: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00722b58: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x722b5du); f_0073ae38();
L_00722b5d:; BB(0x00722b5d);
    /* 00722b5d: mov dword ptr [ebp + 0x24], 8 */ W32((u32)(r_ebp+0x24u), 0x8u);
    /* 00722b64: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00722b6a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00722b6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00722b6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00722b6d: ret  */ FN_RET(0x00722901); r_esp += 4; return;
L_00722b6e:; BB(0x00722b6e);
    /* 00722b6e: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00722b71: je 0x722d17 */ if (fZ) goto L_00722d17;
L_00722b77:; BB(0x00722b77);
    /* 00722b77: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x722b7cu); f_007365f4();
    /* 00722b7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722b7e: je 0x722b8e */ if (fZ) goto L_00722b8e;
L_00722b80:; BB(0x00722b80);
    /* 00722b80: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722b83: je 0x7235a3 */ if (fZ) goto L_007235a3;
L_00722b89:; BB(0x00722b89);
    /* 00722b89: jmp 0x722d17 */ goto L_00722d17;
L_00722b8e:; BB(0x00722b8e);
    /* 00722b8e: mov byte ptr [esp + 0x470], 0xc2 */ W8((u32)(r_esp+0x470u), 0xc2u);
    /* 00722b96: mov byte ptr [esp + 0x471], 0x17 */ W8((u32)(r_esp+0x471u), 0x17u);
    /* 00722b9e: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00722ba4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x722ba9u); f_0068d5a8();
    /* 00722ba9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00722baa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722bac: je 0x722cdb */ if (fZ) goto L_00722cdb;
L_00722bb2:; BB(0x00722bb2);
    /* 00722bb2: mov edx, 0xa9c8c0 */ r_edx = 0xa9c8c0u;
    /* 00722bb7: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 00722bb9: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00722bbc: mov dword ptr [esp + 0x474], ebx */ W32((u32)(r_esp+0x474u), r_ebx);
    /* 00722bc3: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00722bc6: mov dword ptr [esp + 0x478], esi */ W32((u32)(r_esp+0x478u), r_esi);
    /* 00722bcd: mov dword ptr [esp + 0x47c], ebx */ W32((u32)(r_esp+0x47cu), r_ebx);
    /* 00722bd4: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 00722bd7: mov dword ptr [esp + 0x480], ebx */ W32((u32)(r_esp+0x480u), r_ebx);
    /* 00722bde: mov ebx, dword ptr [edx + 0x10] */ r_ebx = R32((u32)(r_edx+0x10u));
    /* 00722be1: mov dword ptr [esp + 0x484], ebx */ W32((u32)(r_esp+0x484u), r_ebx);
    /* 00722be8: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 00722beb: mov dword ptr [esp + 0x488], ebx */ W32((u32)(r_esp+0x488u), r_ebx);
    /* 00722bf2: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 00722bf5: mov dword ptr [esp + 0x48c], ebx */ W32((u32)(r_esp+0x48cu), r_ebx);
    /* 00722bfc: mov ebx, dword ptr [edx + 0x1c] */ r_ebx = R32((u32)(r_edx+0x1cu));
    /* 00722bff: mov dword ptr [esp + 0x490], ebx */ W32((u32)(r_esp+0x490u), r_ebx);
    /* 00722c06: mov ebx, dword ptr [edx + 0x20] */ r_ebx = R32((u32)(r_edx+0x20u));
    /* 00722c09: mov dword ptr [esp + 0x494], ebx */ W32((u32)(r_esp+0x494u), r_ebx);
    /* 00722c10: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 00722c13: mov dword ptr [esp + 0x498], ebx */ W32((u32)(r_esp+0x498u), r_ebx);
    /* 00722c1a: mov ebx, dword ptr [edx + 0x28] */ r_ebx = R32((u32)(r_edx+0x28u));
    /* 00722c1d: mov dword ptr [esp + 0x49c], ebx */ W32((u32)(r_esp+0x49cu), r_ebx);
    /* 00722c24: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 00722c27: mov dword ptr [esp + 0x4a0], ebx */ W32((u32)(r_esp+0x4a0u), r_ebx);
    /* 00722c2e: mov ebx, dword ptr [edx + 0x30] */ r_ebx = R32((u32)(r_edx+0x30u));
    /* 00722c31: mov dword ptr [esp + 0x4a4], ebx */ W32((u32)(r_esp+0x4a4u), r_ebx);
    /* 00722c38: mov ebx, dword ptr [edx + 0x34] */ r_ebx = R32((u32)(r_edx+0x34u));
    /* 00722c3b: mov dword ptr [esp + 0x4a8], ebx */ W32((u32)(r_esp+0x4a8u), r_ebx);
    /* 00722c42: mov ebx, dword ptr [edx + 0x38] */ r_ebx = R32((u32)(r_edx+0x38u));
    /* 00722c45: mov dword ptr [esp + 0x4ac], ebx */ W32((u32)(r_esp+0x4acu), r_ebx);
    /* 00722c4c: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 00722c4f: mov dword ptr [esp + 0x4b0], ebx */ W32((u32)(r_esp+0x4b0u), r_ebx);
    /* 00722c56: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 00722c59: mov dword ptr [esp + 0x4b4], ebx */ W32((u32)(r_esp+0x4b4u), r_ebx);
    /* 00722c60: mov ebx, dword ptr [edx + 0x44] */ r_ebx = R32((u32)(r_edx+0x44u));
    /* 00722c63: mov dword ptr [esp + 0x4b8], ebx */ W32((u32)(r_esp+0x4b8u), r_ebx);
    /* 00722c6a: mov ebx, dword ptr [edx + 0x48] */ r_ebx = R32((u32)(r_edx+0x48u));
    /* 00722c6d: mov dword ptr [esp + 0x4bc], ebx */ W32((u32)(r_esp+0x4bcu), r_ebx);
    /* 00722c74: mov ebx, dword ptr [edx + 0x4c] */ r_ebx = R32((u32)(r_edx+0x4cu));
    /* 00722c77: mov dword ptr [esp + 0x4c0], ebx */ W32((u32)(r_esp+0x4c0u), r_ebx);
    /* 00722c7e: mov ebx, dword ptr [edx + 0x50] */ r_ebx = R32((u32)(r_edx+0x50u));
    /* 00722c81: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 00722c84: mov dword ptr [esp + 0x4c4], ebx */ W32((u32)(r_esp+0x4c4u), r_ebx);
    /* 00722c8b: mov dword ptr [esp + 0x4c8], edx */ W32((u32)(r_esp+0x4c8u), r_edx);
    /* 00722c92: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 00722c98: mov dword ptr [esp + 0x478], 2 */ W32((u32)(r_esp+0x478u), 0x2u);
    /* 00722ca3: mov ecx, eax */ r_ecx = r_eax;
    /* 00722ca5: mov dword ptr [esp + 0x474], edx */ W32((u32)(r_esp+0x474u), r_edx);
    /* 00722cac: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x722cb1u); f_006936b4();
    /* 00722cb1: lea edx, [esp + 0x47c] */ r_edx = (u32)(r_esp+0x47cu);
    /* 00722cb8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00722cba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722cbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00722cbc: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x722cc1u); f_00857dec();
    /* 00722cc1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722cc4: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x722cc9u); f_0078bf78();
    /* 00722cc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722cca: lea ecx, [esp + 0x474] */ r_ecx = (u32)(r_esp+0x474u);
    /* 00722cd1: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x722cd6u); f_00800464();
    /* 00722cd6: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x722cdbu); f_0078bf78();
L_00722cdb:; BB(0x00722cdb);
    /* 00722cdb: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00722cde: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722ce0: je 0x722cee */ if (fZ) goto L_00722cee;
L_00722ce2:; BB(0x00722ce2);
    /* 00722ce2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x722ce7u); f_007127b0();
    /* 00722ce7: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_00722cee:; BB(0x00722cee);
    /* 00722cee: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00722cf1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722cf3: je 0x722d01 */ if (fZ) goto L_00722d01;
L_00722cf5:; BB(0x00722cf5);
    /* 00722cf5: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x722cfau); f_007127b0();
    /* 00722cfa: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_00722d01:; BB(0x00722d01);
    /* 00722d01: call 0x78bf90 */ r_esp -= 4; W32(r_esp, 0x722d06u); f_0078bf90();
    /* 00722d06: mov dword ptr [ebp + 0x24], 7 */ W32((u32)(r_ebp+0x24u), 0x7u);
    /* 00722d0d: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00722d13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00722d14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00722d15: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00722d16: ret  */ FN_RET(0x00722901); r_esp += 4; return;
L_00722d17:; BB(0x00722d17);
    /* 00722d17: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00722d1a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00722d1d: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 00722d20: jne 0x723429 */ if (!fZ) goto L_00723429;
L_00722d26:; BB(0x00722d26);
    /* 00722d26: mov byte ptr [esp + 0x4cc], 0xc2 */ W8((u32)(r_esp+0x4ccu), 0xc2u);
    /* 00722d2e: mov byte ptr [esp + 0x4cd], 0x17 */ W8((u32)(r_esp+0x4cdu), 0x17u);
    /* 00722d36: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00722d3c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x722d41u); f_0068d5a8();
    /* 00722d41: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00722d42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722d44: je 0x722e73 */ if (fZ) goto L_00722e73;
L_00722d4a:; BB(0x00722d4a);
    /* 00722d4a: mov edx, 0xa9c8c0 */ r_edx = 0xa9c8c0u;
    /* 00722d4f: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 00722d51: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00722d54: mov dword ptr [esp + 0x4d0], ebx */ W32((u32)(r_esp+0x4d0u), r_ebx);
    /* 00722d5b: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00722d5e: mov dword ptr [esp + 0x4d4], esi */ W32((u32)(r_esp+0x4d4u), r_esi);
    /* 00722d65: mov dword ptr [esp + 0x4d8], ebx */ W32((u32)(r_esp+0x4d8u), r_ebx);
    /* 00722d6c: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 00722d6f: mov dword ptr [esp + 0x4dc], ebx */ W32((u32)(r_esp+0x4dcu), r_ebx);
    /* 00722d76: mov ebx, dword ptr [edx + 0x10] */ r_ebx = R32((u32)(r_edx+0x10u));
    /* 00722d79: mov dword ptr [esp + 0x4e0], ebx */ W32((u32)(r_esp+0x4e0u), r_ebx);
    /* 00722d80: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 00722d83: mov dword ptr [esp + 0x4e4], ebx */ W32((u32)(r_esp+0x4e4u), r_ebx);
    /* 00722d8a: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 00722d8d: mov dword ptr [esp + 0x4e8], ebx */ W32((u32)(r_esp+0x4e8u), r_ebx);
    /* 00722d94: mov ebx, dword ptr [edx + 0x1c] */ r_ebx = R32((u32)(r_edx+0x1cu));
    /* 00722d97: mov dword ptr [esp + 0x4ec], ebx */ W32((u32)(r_esp+0x4ecu), r_ebx);
    /* 00722d9e: mov ebx, dword ptr [edx + 0x20] */ r_ebx = R32((u32)(r_edx+0x20u));
    /* 00722da1: mov dword ptr [esp + 0x4f0], ebx */ W32((u32)(r_esp+0x4f0u), r_ebx);
    /* 00722da8: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 00722dab: mov dword ptr [esp + 0x4f4], ebx */ W32((u32)(r_esp+0x4f4u), r_ebx);
    /* 00722db2: mov ebx, dword ptr [edx + 0x28] */ r_ebx = R32((u32)(r_edx+0x28u));
    /* 00722db5: mov dword ptr [esp + 0x4f8], ebx */ W32((u32)(r_esp+0x4f8u), r_ebx);
    /* 00722dbc: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 00722dbf: mov dword ptr [esp + 0x4fc], ebx */ W32((u32)(r_esp+0x4fcu), r_ebx);
    /* 00722dc6: mov ebx, dword ptr [edx + 0x30] */ r_ebx = R32((u32)(r_edx+0x30u));
    /* 00722dc9: mov dword ptr [esp + 0x500], ebx */ W32((u32)(r_esp+0x500u), r_ebx);
    /* 00722dd0: mov ebx, dword ptr [edx + 0x34] */ r_ebx = R32((u32)(r_edx+0x34u));
    /* 00722dd3: mov dword ptr [esp + 0x504], ebx */ W32((u32)(r_esp+0x504u), r_ebx);
    /* 00722dda: mov ebx, dword ptr [edx + 0x38] */ r_ebx = R32((u32)(r_edx+0x38u));
    /* 00722ddd: mov dword ptr [esp + 0x508], ebx */ W32((u32)(r_esp+0x508u), r_ebx);
    /* 00722de4: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 00722de7: mov dword ptr [esp + 0x50c], ebx */ W32((u32)(r_esp+0x50cu), r_ebx);
    /* 00722dee: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 00722df1: mov dword ptr [esp + 0x510], ebx */ W32((u32)(r_esp+0x510u), r_ebx);
    /* 00722df8: mov ebx, dword ptr [edx + 0x44] */ r_ebx = R32((u32)(r_edx+0x44u));
    /* 00722dfb: mov dword ptr [esp + 0x514], ebx */ W32((u32)(r_esp+0x514u), r_ebx);
    /* 00722e02: mov ebx, dword ptr [edx + 0x48] */ r_ebx = R32((u32)(r_edx+0x48u));
    /* 00722e05: mov dword ptr [esp + 0x518], ebx */ W32((u32)(r_esp+0x518u), r_ebx);
    /* 00722e0c: mov ebx, dword ptr [edx + 0x4c] */ r_ebx = R32((u32)(r_edx+0x4cu));
    /* 00722e0f: mov dword ptr [esp + 0x51c], ebx */ W32((u32)(r_esp+0x51cu), r_ebx);
    /* 00722e16: mov ebx, dword ptr [edx + 0x50] */ r_ebx = R32((u32)(r_edx+0x50u));
    /* 00722e19: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 00722e1c: mov dword ptr [esp + 0x520], ebx */ W32((u32)(r_esp+0x520u), r_ebx);
    /* 00722e23: mov dword ptr [esp + 0x524], edx */ W32((u32)(r_esp+0x524u), r_edx);
    /* 00722e2a: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 00722e30: mov dword ptr [esp + 0x4d4], 4 */ W32((u32)(r_esp+0x4d4u), 0x4u);
    /* 00722e3b: mov ecx, eax */ r_ecx = r_eax;
    /* 00722e3d: mov dword ptr [esp + 0x4d0], edx */ W32((u32)(r_esp+0x4d0u), r_edx);
    /* 00722e44: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x722e49u); f_006936b4();
    /* 00722e49: lea edx, [esp + 0x4d8] */ r_edx = (u32)(r_esp+0x4d8u);
    /* 00722e50: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00722e52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722e53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00722e54: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x722e59u); f_00857dec();
    /* 00722e59: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722e5c: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x722e61u); f_0078bf78();
    /* 00722e61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722e62: lea ecx, [esp + 0x4d0] */ r_ecx = (u32)(r_esp+0x4d0u);
    /* 00722e69: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x722e6eu); f_00800464();
    /* 00722e6e: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x722e73u); f_0078bf78();
L_00722e73:; BB(0x00722e73);
    /* 00722e73: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00722e76: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722e78: je 0x722e86 */ if (fZ) goto L_00722e86;
L_00722e7a:; BB(0x00722e7a);
    /* 00722e7a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x722e7fu); f_007127b0();
    /* 00722e7f: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_00722e86:; BB(0x00722e86);
    /* 00722e86: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00722e89: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722e8b: je 0x722e99 */ if (fZ) goto L_00722e99;
L_00722e8d:; BB(0x00722e8d);
    /* 00722e8d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x722e92u); f_007127b0();
    /* 00722e92: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_00722e99:; BB(0x00722e99);
    /* 00722e99: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00722e9e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x722ea3u); f_0073ec50();
    /* 00722ea3: mov ebx, eax */ r_ebx = r_eax;
    /* 00722ea5: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00722eaa: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x722eafu); f_0073ec50();
    /* 00722eaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722eb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00722eb1: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x722eb6u); f_0073a888();
    /* 00722eb6: push 0x155 */ { u32 v = 0x155u; r_esp -= 4; W32(r_esp, v); }
    /* 00722ebb: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00722ebe: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x722ec3u); f_0079317c();
    /* 00722ec3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722ec6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00722ec8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722ec9: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00722ecc: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x722ed1u); f_0073ae38();
    /* 00722ed1: mov dword ptr [ebp + 0x24], 8 */ W32((u32)(r_ebp+0x24u), 0x8u);
    /* 00722ed8: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00722ede: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00722edf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00722ee0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00722ee1: ret  */ FN_RET(0x00722901); r_esp += 4; return;
L_00723429:; BB(0x00723429);
    /* 00723429: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072342f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00723430: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00723431: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00723432: ret  */ FN_RET(0x00722901); r_esp += 4; return;
L_007235a3:; BB(0x007235a3);
    /* 007235a3: mov byte ptr [esp + 0x314], 0xc2 */ W8((u32)(r_esp+0x314u), 0xc2u);
    /* 007235ab: mov byte ptr [esp + 0x315], 0x17 */ W8((u32)(r_esp+0x315u), 0x17u);
    /* 007235b3: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007235b9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7235beu); f_0068d5a8();
    /* 007235be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007235bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007235c1: je 0x7236f0 */ if (fZ) goto L_007236f0;
L_007235c7:; BB(0x007235c7);
    /* 007235c7: mov edx, 0xa9c8c0 */ r_edx = 0xa9c8c0u;
    /* 007235cc: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 007235ce: mov dword ptr [esp + 0x318], esi */ W32((u32)(r_esp+0x318u), r_esi);
    /* 007235d5: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 007235d8: mov dword ptr [esp + 0x31c], esi */ W32((u32)(r_esp+0x31cu), r_esi);
    /* 007235df: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 007235e2: mov dword ptr [esp + 0x320], esi */ W32((u32)(r_esp+0x320u), r_esi);
    /* 007235e9: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 007235ec: mov dword ptr [esp + 0x324], esi */ W32((u32)(r_esp+0x324u), r_esi);
    /* 007235f3: mov esi, dword ptr [edx + 0x10] */ r_esi = R32((u32)(r_edx+0x10u));
    /* 007235f6: mov dword ptr [esp + 0x328], esi */ W32((u32)(r_esp+0x328u), r_esi);
    /* 007235fd: mov esi, dword ptr [edx + 0x14] */ r_esi = R32((u32)(r_edx+0x14u));
    /* 00723600: mov dword ptr [esp + 0x32c], esi */ W32((u32)(r_esp+0x32cu), r_esi);
    /* 00723607: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 0072360a: mov dword ptr [esp + 0x330], esi */ W32((u32)(r_esp+0x330u), r_esi);
    /* 00723611: mov esi, dword ptr [edx + 0x1c] */ r_esi = R32((u32)(r_edx+0x1cu));
    /* 00723614: mov dword ptr [esp + 0x334], esi */ W32((u32)(r_esp+0x334u), r_esi);
    /* 0072361b: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 0072361e: mov dword ptr [esp + 0x338], esi */ W32((u32)(r_esp+0x338u), r_esi);
    /* 00723625: mov esi, dword ptr [edx + 0x24] */ r_esi = R32((u32)(r_edx+0x24u));
    /* 00723628: mov dword ptr [esp + 0x33c], esi */ W32((u32)(r_esp+0x33cu), r_esi);
    /* 0072362f: mov esi, dword ptr [edx + 0x28] */ r_esi = R32((u32)(r_edx+0x28u));
    /* 00723632: mov dword ptr [esp + 0x340], esi */ W32((u32)(r_esp+0x340u), r_esi);
    /* 00723639: mov esi, dword ptr [edx + 0x2c] */ r_esi = R32((u32)(r_edx+0x2cu));
    /* 0072363c: mov dword ptr [esp + 0x344], esi */ W32((u32)(r_esp+0x344u), r_esi);
    /* 00723643: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 00723646: mov dword ptr [esp + 0x348], esi */ W32((u32)(r_esp+0x348u), r_esi);
    /* 0072364d: mov esi, dword ptr [edx + 0x34] */ r_esi = R32((u32)(r_edx+0x34u));
    /* 00723650: mov dword ptr [esp + 0x34c], esi */ W32((u32)(r_esp+0x34cu), r_esi);
    /* 00723657: mov esi, dword ptr [edx + 0x38] */ r_esi = R32((u32)(r_edx+0x38u));
    /* 0072365a: mov dword ptr [esp + 0x350], esi */ W32((u32)(r_esp+0x350u), r_esi);
    /* 00723661: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 00723664: mov dword ptr [esp + 0x354], esi */ W32((u32)(r_esp+0x354u), r_esi);
    /* 0072366b: mov esi, dword ptr [edx + 0x40] */ r_esi = R32((u32)(r_edx+0x40u));
    /* 0072366e: mov dword ptr [esp + 0x358], esi */ W32((u32)(r_esp+0x358u), r_esi);
    /* 00723675: mov esi, dword ptr [edx + 0x44] */ r_esi = R32((u32)(r_edx+0x44u));
    /* 00723678: mov dword ptr [esp + 0x35c], esi */ W32((u32)(r_esp+0x35cu), r_esi);
    /* 0072367f: mov esi, dword ptr [edx + 0x48] */ r_esi = R32((u32)(r_edx+0x48u));
    /* 00723682: mov dword ptr [esp + 0x360], esi */ W32((u32)(r_esp+0x360u), r_esi);
    /* 00723689: mov esi, dword ptr [edx + 0x4c] */ r_esi = R32((u32)(r_edx+0x4cu));
    /* 0072368c: mov dword ptr [esp + 0x364], esi */ W32((u32)(r_esp+0x364u), r_esi);
    /* 00723693: mov esi, dword ptr [edx + 0x50] */ r_esi = R32((u32)(r_edx+0x50u));
    /* 00723696: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 00723699: mov dword ptr [esp + 0x368], esi */ W32((u32)(r_esp+0x368u), r_esi);
    /* 007236a0: mov dword ptr [esp + 0x36c], edx */ W32((u32)(r_esp+0x36cu), r_edx);
    /* 007236a7: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 007236ad: mov dword ptr [esp + 0x31c], 3 */ W32((u32)(r_esp+0x31cu), 0x3u);
    /* 007236b8: mov ecx, eax */ r_ecx = r_eax;
    /* 007236ba: mov dword ptr [esp + 0x318], edx */ W32((u32)(r_esp+0x318u), r_edx);
    /* 007236c1: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x7236c6u); f_006936b4();
    /* 007236c6: lea edx, [esp + 0x320] */ r_edx = (u32)(r_esp+0x320u);
    /* 007236cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007236cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007236d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007236d1: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7236d6u); f_00857dec();
    /* 007236d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007236d9: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x7236deu); f_0078bf78();
    /* 007236de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007236df: lea ecx, [esp + 0x318] */ r_ecx = (u32)(r_esp+0x318u);
    /* 007236e6: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x7236ebu); f_00800464();
    /* 007236eb: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x7236f0u); f_0078bf78();
L_007236f0:; BB(0x007236f0);
    /* 007236f0: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 007236f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007236f5: je 0x723703 */ if (fZ) goto L_00723703;
L_007236f7:; BB(0x007236f7);
    /* 007236f7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7236fcu); f_007127b0();
    /* 007236fc: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_00723703:; BB(0x00723703);
    /* 00723703: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00723706: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723708: je 0x723716 */ if (fZ) goto L_00723716;
L_0072370a:; BB(0x0072370a);
    /* 0072370a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x72370fu); f_007127b0();
    /* 0072370f: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_00723716:; BB(0x00723716);
    /* 00723716: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0072371b: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x723720u); f_0073ec50();
    /* 00723720: mov esi, eax */ r_esi = r_eax;
    /* 00723722: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00723727: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x72372cu); f_0073ec50();
    /* 0072372c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072372d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072372e: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x723733u); f_0073a888();
    /* 00723733: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723736: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00723739: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x72373eu); f_006dc358();
    /* 0072373e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723741: jne 0x72379b */ if (!fZ) goto L_0072379b;
L_00723743:; BB(0x00723743);
    /* 00723743: lea edx, [esp + 0x370] */ r_edx = (u32)(r_esp+0x370u);
    /* 0072374a: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0072374f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00723751: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00723752: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x723757u); f_0086b688();
    /* 00723757: push 0x185 */ { u32 v = 0x185u; r_esp -= 4; W32(r_esp, v); }
    /* 0072375c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x723761u); f_0079317c();
    /* 00723761: mov esi, eax */ r_esi = r_eax;
    /* 00723763: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723766: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00723768: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x72376du); f_006936b4();
    /* 0072376d: mov ebx, eax */ r_ebx = r_eax;
    /* 0072376f: call 0x78bf60 */ r_esp -= 4; W32(r_esp, 0x723774u); f_0078bf60();
    /* 00723774: lea edx, [esp + 0x370] */ r_edx = (u32)(r_esp+0x370u);
    /* 0072377b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072377c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072377d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072377e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072377f: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x723784u); f_00857e29();
    /* 00723784: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723787: lea eax, [esp + 0x370] */ r_eax = (u32)(r_esp+0x370u);
    /* 0072378e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00723790: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723791: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00723794: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x723799u); f_0073ae38();
    /* 00723799: jmp 0x7237b1 */ goto L_007237b1;
L_0072379b:; BB(0x0072379b);
    /* 0072379b: push 0x14f */ { u32 v = 0x14fu; r_esp -= 4; W32(r_esp, v); }
    /* 007237a0: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7237a5u); f_0079317c();
    /* 007237a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007237a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007237a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007237a9: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 007237ac: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7237b1u); f_0073ae38();
L_007237b1:; BB(0x007237b1);
    /* 007237b1: mov dword ptr [ebp + 0x24], 8 */ W32((u32)(r_ebp+0x24u), 0x8u);
    /* 007237b8: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007237be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007237bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007237c0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007237c1: ret  */ FN_RET(0x00722901); r_esp += 4; return;
L_007237c2:; BB(0x007237c2);
    /* 007237c2: push 0x9f24e4 */ { u32 v = 0x9f24e4u; r_esp -= 4; W32(r_esp, v); }
    /* 007237c7: call 0x735874 */ r_esp -= 4; W32(r_esp, 0x7237ccu); f_00735874();
    /* 007237cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007237cd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007237cf: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007237d2: mov ecx, eax */ r_ecx = r_eax;
    /* 007237d4: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x7237d9u); f_00736510();
    /* 007237d9: mov esi, dword ptr [ebp + 0x20] */ r_esi = R32((u32)(r_ebp+0x20u));
    /* 007237dc: jmp 0x72290c */ goto L_0072290c;
}

void f_0072293c(void)
{
    FN_ENTER(0x0072293c);
    /* 0072293c: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0072293f: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00722946: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00722949: je 0x722b6e */ if (fZ) goto L_00722b6e;
L_0072294f:; BB(0x0072294f);
    /* 0072294f: mov byte ptr [esp + 0x2b8], 0xc2 */ W8((u32)(r_esp+0x2b8u), 0xc2u);
    /* 00722957: mov byte ptr [esp + 0x2b9], 0x17 */ W8((u32)(r_esp+0x2b9u), 0x17u);
    /* 0072295f: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00722965: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x72296au); f_0068d5a8();
    /* 0072296a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072296b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072296d: je 0x722a9c */ if (fZ) goto L_00722a9c;
L_00722973:; BB(0x00722973);
    /* 00722973: mov edx, 0xa9c8c0 */ r_edx = 0xa9c8c0u;
    /* 00722978: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0072297a: mov dword ptr [esp + 0x2bc], esi */ W32((u32)(r_esp+0x2bcu), r_esi);
    /* 00722981: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00722984: mov dword ptr [esp + 0x2c0], esi */ W32((u32)(r_esp+0x2c0u), r_esi);
    /* 0072298b: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 0072298e: mov dword ptr [esp + 0x2c4], esi */ W32((u32)(r_esp+0x2c4u), r_esi);
    /* 00722995: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 00722998: mov dword ptr [esp + 0x2c8], esi */ W32((u32)(r_esp+0x2c8u), r_esi);
    /* 0072299f: mov esi, dword ptr [edx + 0x10] */ r_esi = R32((u32)(r_edx+0x10u));
    /* 007229a2: mov dword ptr [esp + 0x2cc], esi */ W32((u32)(r_esp+0x2ccu), r_esi);
    /* 007229a9: mov esi, dword ptr [edx + 0x14] */ r_esi = R32((u32)(r_edx+0x14u));
    /* 007229ac: mov dword ptr [esp + 0x2d0], esi */ W32((u32)(r_esp+0x2d0u), r_esi);
    /* 007229b3: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 007229b6: mov dword ptr [esp + 0x2d4], esi */ W32((u32)(r_esp+0x2d4u), r_esi);
    /* 007229bd: mov esi, dword ptr [edx + 0x1c] */ r_esi = R32((u32)(r_edx+0x1cu));
    /* 007229c0: mov dword ptr [esp + 0x2d8], esi */ W32((u32)(r_esp+0x2d8u), r_esi);
    /* 007229c7: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 007229ca: mov dword ptr [esp + 0x2dc], esi */ W32((u32)(r_esp+0x2dcu), r_esi);
    /* 007229d1: mov esi, dword ptr [edx + 0x24] */ r_esi = R32((u32)(r_edx+0x24u));
    /* 007229d4: mov dword ptr [esp + 0x2e0], esi */ W32((u32)(r_esp+0x2e0u), r_esi);
    /* 007229db: mov esi, dword ptr [edx + 0x28] */ r_esi = R32((u32)(r_edx+0x28u));
    /* 007229de: mov dword ptr [esp + 0x2e4], esi */ W32((u32)(r_esp+0x2e4u), r_esi);
    /* 007229e5: mov esi, dword ptr [edx + 0x2c] */ r_esi = R32((u32)(r_edx+0x2cu));
    /* 007229e8: mov dword ptr [esp + 0x2e8], esi */ W32((u32)(r_esp+0x2e8u), r_esi);
    /* 007229ef: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 007229f2: mov dword ptr [esp + 0x2ec], esi */ W32((u32)(r_esp+0x2ecu), r_esi);
    /* 007229f9: mov esi, dword ptr [edx + 0x34] */ r_esi = R32((u32)(r_edx+0x34u));
    /* 007229fc: mov dword ptr [esp + 0x2f0], esi */ W32((u32)(r_esp+0x2f0u), r_esi);
    /* 00722a03: mov esi, dword ptr [edx + 0x38] */ r_esi = R32((u32)(r_edx+0x38u));
    /* 00722a06: mov dword ptr [esp + 0x2f4], esi */ W32((u32)(r_esp+0x2f4u), r_esi);
    /* 00722a0d: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 00722a10: mov dword ptr [esp + 0x2f8], esi */ W32((u32)(r_esp+0x2f8u), r_esi);
    /* 00722a17: mov esi, dword ptr [edx + 0x40] */ r_esi = R32((u32)(r_edx+0x40u));
    /* 00722a1a: mov dword ptr [esp + 0x2fc], esi */ W32((u32)(r_esp+0x2fcu), r_esi);
    /* 00722a21: mov esi, dword ptr [edx + 0x44] */ r_esi = R32((u32)(r_edx+0x44u));
    /* 00722a24: mov dword ptr [esp + 0x300], esi */ W32((u32)(r_esp+0x300u), r_esi);
    /* 00722a2b: mov esi, dword ptr [edx + 0x48] */ r_esi = R32((u32)(r_edx+0x48u));
    /* 00722a2e: mov dword ptr [esp + 0x304], esi */ W32((u32)(r_esp+0x304u), r_esi);
    /* 00722a35: mov esi, dword ptr [edx + 0x4c] */ r_esi = R32((u32)(r_edx+0x4cu));
    /* 00722a38: mov dword ptr [esp + 0x308], esi */ W32((u32)(r_esp+0x308u), r_esi);
    /* 00722a3f: mov esi, dword ptr [edx + 0x50] */ r_esi = R32((u32)(r_edx+0x50u));
    /* 00722a42: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 00722a45: mov dword ptr [esp + 0x30c], esi */ W32((u32)(r_esp+0x30cu), r_esi);
    /* 00722a4c: mov dword ptr [esp + 0x310], edx */ W32((u32)(r_esp+0x310u), r_edx);
    /* 00722a53: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 00722a59: mov dword ptr [esp + 0x2c0], 3 */ W32((u32)(r_esp+0x2c0u), 0x3u);
    /* 00722a64: mov ecx, eax */ r_ecx = r_eax;
    /* 00722a66: mov dword ptr [esp + 0x2bc], edx */ W32((u32)(r_esp+0x2bcu), r_edx);
    /* 00722a6d: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x722a72u); f_006936b4();
    /* 00722a72: lea edx, [esp + 0x2c4] */ r_edx = (u32)(r_esp+0x2c4u);
    /* 00722a79: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00722a7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722a7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00722a7d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x722a82u); f_00857dec();
    /* 00722a82: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722a85: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x722a8au); f_0078bf78();
    /* 00722a8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722a8b: lea ecx, [esp + 0x2bc] */ r_ecx = (u32)(r_esp+0x2bcu);
    /* 00722a92: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x722a97u); f_00800464();
    /* 00722a97: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x722a9cu); f_0078bf78();
L_00722a9c:; BB(0x00722a9c);
    /* 00722a9c: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00722a9f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722aa1: je 0x722aaf */ if (fZ) goto L_00722aaf;
L_00722aa3:; BB(0x00722aa3);
    /* 00722aa3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x722aa8u); f_007127b0();
    /* 00722aa8: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_00722aaf:; BB(0x00722aaf);
    /* 00722aaf: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00722ab2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722ab4: je 0x722ac2 */ if (fZ) goto L_00722ac2;
L_00722ab6:; BB(0x00722ab6);
    /* 00722ab6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x722abbu); f_007127b0();
    /* 00722abb: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_00722ac2:; BB(0x00722ac2);
    /* 00722ac2: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00722ac7: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x722accu); f_0073ec50();
    /* 00722acc: mov esi, eax */ r_esi = r_eax;
    /* 00722ace: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00722ad3: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x722ad8u); f_0073ec50();
    /* 00722ad8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722ad9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00722ada: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x722adfu); f_0073a888();
    /* 00722adf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722ae2: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00722ae5: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x722aeau); f_006dc358();
    /* 00722aea: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722aed: jne 0x722b47 */ if (!fZ) goto L_00722b47;
L_00722aef:; BB(0x00722aef);
    /* 00722aef: lea edx, [esp + 0x370] */ r_edx = (u32)(r_esp+0x370u);
    /* 00722af6: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00722afb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00722afd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00722afe: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x722b03u); f_0086b688();
    /* 00722b03: push 0x185 */ { u32 v = 0x185u; r_esp -= 4; W32(r_esp, v); }
    /* 00722b08: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x722b0du); f_0079317c();
    /* 00722b0d: mov esi, eax */ r_esi = r_eax;
    /* 00722b0f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722b12: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00722b14: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x722b19u); f_006936b4();
    /* 00722b19: mov ebx, eax */ r_ebx = r_eax;
    /* 00722b1b: call 0x78bf60 */ r_esp -= 4; W32(r_esp, 0x722b20u); f_0078bf60();
    /* 00722b20: lea edx, [esp + 0x370] */ r_edx = (u32)(r_esp+0x370u);
    /* 00722b27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722b28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00722b29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00722b2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00722b2b: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x722b30u); f_00857e29();
    /* 00722b30: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722b33: lea eax, [esp + 0x370] */ r_eax = (u32)(r_esp+0x370u);
    /* 00722b3a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00722b3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722b3d: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00722b40: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x722b45u); f_0073ae38();
    /* 00722b45: jmp 0x722b5d */ goto L_00722b5d;
L_00722b47:; BB(0x00722b47);
    /* 00722b47: push 0x14f */ { u32 v = 0x14fu; r_esp -= 4; W32(r_esp, v); }
    /* 00722b4c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x722b51u); f_0079317c();
    /* 00722b51: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00722b52: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00722b54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722b55: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00722b58: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x722b5du); f_0073ae38();
L_00722b5d:; BB(0x00722b5d);
    /* 00722b5d: mov dword ptr [ebp + 0x24], 8 */ W32((u32)(r_ebp+0x24u), 0x8u);
    /* 00722b64: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00722b6a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00722b6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00722b6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00722b6d: ret  */ FN_RET(0x0072293c); r_esp += 4; return;
L_00722b6e:; BB(0x00722b6e);
    /* 00722b6e: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00722b71: je 0x722d17 */ if (fZ) goto L_00722d17;
L_00722b77:; BB(0x00722b77);
    /* 00722b77: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x722b7cu); f_007365f4();
    /* 00722b7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722b7e: je 0x722b8e */ if (fZ) goto L_00722b8e;
L_00722b80:; BB(0x00722b80);
    /* 00722b80: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722b83: je 0x7235a3 */ if (fZ) goto L_007235a3;
L_00722b89:; BB(0x00722b89);
    /* 00722b89: jmp 0x722d17 */ goto L_00722d17;
L_00722b8e:; BB(0x00722b8e);
    /* 00722b8e: mov byte ptr [esp + 0x470], 0xc2 */ W8((u32)(r_esp+0x470u), 0xc2u);
    /* 00722b96: mov byte ptr [esp + 0x471], 0x17 */ W8((u32)(r_esp+0x471u), 0x17u);
    /* 00722b9e: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00722ba4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x722ba9u); f_0068d5a8();
    /* 00722ba9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00722baa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722bac: je 0x722cdb */ if (fZ) goto L_00722cdb;
L_00722bb2:; BB(0x00722bb2);
    /* 00722bb2: mov edx, 0xa9c8c0 */ r_edx = 0xa9c8c0u;
    /* 00722bb7: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 00722bb9: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00722bbc: mov dword ptr [esp + 0x474], ebx */ W32((u32)(r_esp+0x474u), r_ebx);
    /* 00722bc3: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00722bc6: mov dword ptr [esp + 0x478], esi */ W32((u32)(r_esp+0x478u), r_esi);
    /* 00722bcd: mov dword ptr [esp + 0x47c], ebx */ W32((u32)(r_esp+0x47cu), r_ebx);
    /* 00722bd4: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 00722bd7: mov dword ptr [esp + 0x480], ebx */ W32((u32)(r_esp+0x480u), r_ebx);
    /* 00722bde: mov ebx, dword ptr [edx + 0x10] */ r_ebx = R32((u32)(r_edx+0x10u));
    /* 00722be1: mov dword ptr [esp + 0x484], ebx */ W32((u32)(r_esp+0x484u), r_ebx);
    /* 00722be8: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 00722beb: mov dword ptr [esp + 0x488], ebx */ W32((u32)(r_esp+0x488u), r_ebx);
    /* 00722bf2: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 00722bf5: mov dword ptr [esp + 0x48c], ebx */ W32((u32)(r_esp+0x48cu), r_ebx);
    /* 00722bfc: mov ebx, dword ptr [edx + 0x1c] */ r_ebx = R32((u32)(r_edx+0x1cu));
    /* 00722bff: mov dword ptr [esp + 0x490], ebx */ W32((u32)(r_esp+0x490u), r_ebx);
    /* 00722c06: mov ebx, dword ptr [edx + 0x20] */ r_ebx = R32((u32)(r_edx+0x20u));
    /* 00722c09: mov dword ptr [esp + 0x494], ebx */ W32((u32)(r_esp+0x494u), r_ebx);
    /* 00722c10: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 00722c13: mov dword ptr [esp + 0x498], ebx */ W32((u32)(r_esp+0x498u), r_ebx);
    /* 00722c1a: mov ebx, dword ptr [edx + 0x28] */ r_ebx = R32((u32)(r_edx+0x28u));
    /* 00722c1d: mov dword ptr [esp + 0x49c], ebx */ W32((u32)(r_esp+0x49cu), r_ebx);
    /* 00722c24: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 00722c27: mov dword ptr [esp + 0x4a0], ebx */ W32((u32)(r_esp+0x4a0u), r_ebx);
    /* 00722c2e: mov ebx, dword ptr [edx + 0x30] */ r_ebx = R32((u32)(r_edx+0x30u));
    /* 00722c31: mov dword ptr [esp + 0x4a4], ebx */ W32((u32)(r_esp+0x4a4u), r_ebx);
    /* 00722c38: mov ebx, dword ptr [edx + 0x34] */ r_ebx = R32((u32)(r_edx+0x34u));
    /* 00722c3b: mov dword ptr [esp + 0x4a8], ebx */ W32((u32)(r_esp+0x4a8u), r_ebx);
    /* 00722c42: mov ebx, dword ptr [edx + 0x38] */ r_ebx = R32((u32)(r_edx+0x38u));
    /* 00722c45: mov dword ptr [esp + 0x4ac], ebx */ W32((u32)(r_esp+0x4acu), r_ebx);
    /* 00722c4c: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 00722c4f: mov dword ptr [esp + 0x4b0], ebx */ W32((u32)(r_esp+0x4b0u), r_ebx);
    /* 00722c56: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 00722c59: mov dword ptr [esp + 0x4b4], ebx */ W32((u32)(r_esp+0x4b4u), r_ebx);
    /* 00722c60: mov ebx, dword ptr [edx + 0x44] */ r_ebx = R32((u32)(r_edx+0x44u));
    /* 00722c63: mov dword ptr [esp + 0x4b8], ebx */ W32((u32)(r_esp+0x4b8u), r_ebx);
    /* 00722c6a: mov ebx, dword ptr [edx + 0x48] */ r_ebx = R32((u32)(r_edx+0x48u));
    /* 00722c6d: mov dword ptr [esp + 0x4bc], ebx */ W32((u32)(r_esp+0x4bcu), r_ebx);
    /* 00722c74: mov ebx, dword ptr [edx + 0x4c] */ r_ebx = R32((u32)(r_edx+0x4cu));
    /* 00722c77: mov dword ptr [esp + 0x4c0], ebx */ W32((u32)(r_esp+0x4c0u), r_ebx);
    /* 00722c7e: mov ebx, dword ptr [edx + 0x50] */ r_ebx = R32((u32)(r_edx+0x50u));
    /* 00722c81: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 00722c84: mov dword ptr [esp + 0x4c4], ebx */ W32((u32)(r_esp+0x4c4u), r_ebx);
    /* 00722c8b: mov dword ptr [esp + 0x4c8], edx */ W32((u32)(r_esp+0x4c8u), r_edx);
    /* 00722c92: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 00722c98: mov dword ptr [esp + 0x478], 2 */ W32((u32)(r_esp+0x478u), 0x2u);
    /* 00722ca3: mov ecx, eax */ r_ecx = r_eax;
    /* 00722ca5: mov dword ptr [esp + 0x474], edx */ W32((u32)(r_esp+0x474u), r_edx);
    /* 00722cac: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x722cb1u); f_006936b4();
    /* 00722cb1: lea edx, [esp + 0x47c] */ r_edx = (u32)(r_esp+0x47cu);
    /* 00722cb8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00722cba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722cbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00722cbc: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x722cc1u); f_00857dec();
    /* 00722cc1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722cc4: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x722cc9u); f_0078bf78();
    /* 00722cc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722cca: lea ecx, [esp + 0x474] */ r_ecx = (u32)(r_esp+0x474u);
    /* 00722cd1: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x722cd6u); f_00800464();
    /* 00722cd6: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x722cdbu); f_0078bf78();
L_00722cdb:; BB(0x00722cdb);
    /* 00722cdb: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00722cde: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722ce0: je 0x722cee */ if (fZ) goto L_00722cee;
L_00722ce2:; BB(0x00722ce2);
    /* 00722ce2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x722ce7u); f_007127b0();
    /* 00722ce7: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_00722cee:; BB(0x00722cee);
    /* 00722cee: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00722cf1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722cf3: je 0x722d01 */ if (fZ) goto L_00722d01;
L_00722cf5:; BB(0x00722cf5);
    /* 00722cf5: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x722cfau); f_007127b0();
    /* 00722cfa: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_00722d01:; BB(0x00722d01);
    /* 00722d01: call 0x78bf90 */ r_esp -= 4; W32(r_esp, 0x722d06u); f_0078bf90();
    /* 00722d06: mov dword ptr [ebp + 0x24], 7 */ W32((u32)(r_ebp+0x24u), 0x7u);
    /* 00722d0d: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00722d13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00722d14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00722d15: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00722d16: ret  */ FN_RET(0x0072293c); r_esp += 4; return;
L_00722d17:; BB(0x00722d17);
    /* 00722d17: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00722d1a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00722d1d: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 00722d20: jne 0x723429 */ if (!fZ) goto L_00723429;
L_00722d26:; BB(0x00722d26);
    /* 00722d26: mov byte ptr [esp + 0x4cc], 0xc2 */ W8((u32)(r_esp+0x4ccu), 0xc2u);
    /* 00722d2e: mov byte ptr [esp + 0x4cd], 0x17 */ W8((u32)(r_esp+0x4cdu), 0x17u);
    /* 00722d36: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00722d3c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x722d41u); f_0068d5a8();
    /* 00722d41: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00722d42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722d44: je 0x722e73 */ if (fZ) goto L_00722e73;
L_00722d4a:; BB(0x00722d4a);
    /* 00722d4a: mov edx, 0xa9c8c0 */ r_edx = 0xa9c8c0u;
    /* 00722d4f: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 00722d51: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00722d54: mov dword ptr [esp + 0x4d0], ebx */ W32((u32)(r_esp+0x4d0u), r_ebx);
    /* 00722d5b: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00722d5e: mov dword ptr [esp + 0x4d4], esi */ W32((u32)(r_esp+0x4d4u), r_esi);
    /* 00722d65: mov dword ptr [esp + 0x4d8], ebx */ W32((u32)(r_esp+0x4d8u), r_ebx);
    /* 00722d6c: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 00722d6f: mov dword ptr [esp + 0x4dc], ebx */ W32((u32)(r_esp+0x4dcu), r_ebx);
    /* 00722d76: mov ebx, dword ptr [edx + 0x10] */ r_ebx = R32((u32)(r_edx+0x10u));
    /* 00722d79: mov dword ptr [esp + 0x4e0], ebx */ W32((u32)(r_esp+0x4e0u), r_ebx);
    /* 00722d80: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 00722d83: mov dword ptr [esp + 0x4e4], ebx */ W32((u32)(r_esp+0x4e4u), r_ebx);
    /* 00722d8a: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 00722d8d: mov dword ptr [esp + 0x4e8], ebx */ W32((u32)(r_esp+0x4e8u), r_ebx);
    /* 00722d94: mov ebx, dword ptr [edx + 0x1c] */ r_ebx = R32((u32)(r_edx+0x1cu));
    /* 00722d97: mov dword ptr [esp + 0x4ec], ebx */ W32((u32)(r_esp+0x4ecu), r_ebx);
    /* 00722d9e: mov ebx, dword ptr [edx + 0x20] */ r_ebx = R32((u32)(r_edx+0x20u));
    /* 00722da1: mov dword ptr [esp + 0x4f0], ebx */ W32((u32)(r_esp+0x4f0u), r_ebx);
    /* 00722da8: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 00722dab: mov dword ptr [esp + 0x4f4], ebx */ W32((u32)(r_esp+0x4f4u), r_ebx);
    /* 00722db2: mov ebx, dword ptr [edx + 0x28] */ r_ebx = R32((u32)(r_edx+0x28u));
    /* 00722db5: mov dword ptr [esp + 0x4f8], ebx */ W32((u32)(r_esp+0x4f8u), r_ebx);
    /* 00722dbc: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 00722dbf: mov dword ptr [esp + 0x4fc], ebx */ W32((u32)(r_esp+0x4fcu), r_ebx);
    /* 00722dc6: mov ebx, dword ptr [edx + 0x30] */ r_ebx = R32((u32)(r_edx+0x30u));
    /* 00722dc9: mov dword ptr [esp + 0x500], ebx */ W32((u32)(r_esp+0x500u), r_ebx);
    /* 00722dd0: mov ebx, dword ptr [edx + 0x34] */ r_ebx = R32((u32)(r_edx+0x34u));
    /* 00722dd3: mov dword ptr [esp + 0x504], ebx */ W32((u32)(r_esp+0x504u), r_ebx);
    /* 00722dda: mov ebx, dword ptr [edx + 0x38] */ r_ebx = R32((u32)(r_edx+0x38u));
    /* 00722ddd: mov dword ptr [esp + 0x508], ebx */ W32((u32)(r_esp+0x508u), r_ebx);
    /* 00722de4: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 00722de7: mov dword ptr [esp + 0x50c], ebx */ W32((u32)(r_esp+0x50cu), r_ebx);
    /* 00722dee: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 00722df1: mov dword ptr [esp + 0x510], ebx */ W32((u32)(r_esp+0x510u), r_ebx);
    /* 00722df8: mov ebx, dword ptr [edx + 0x44] */ r_ebx = R32((u32)(r_edx+0x44u));
    /* 00722dfb: mov dword ptr [esp + 0x514], ebx */ W32((u32)(r_esp+0x514u), r_ebx);
    /* 00722e02: mov ebx, dword ptr [edx + 0x48] */ r_ebx = R32((u32)(r_edx+0x48u));
    /* 00722e05: mov dword ptr [esp + 0x518], ebx */ W32((u32)(r_esp+0x518u), r_ebx);
    /* 00722e0c: mov ebx, dword ptr [edx + 0x4c] */ r_ebx = R32((u32)(r_edx+0x4cu));
    /* 00722e0f: mov dword ptr [esp + 0x51c], ebx */ W32((u32)(r_esp+0x51cu), r_ebx);
    /* 00722e16: mov ebx, dword ptr [edx + 0x50] */ r_ebx = R32((u32)(r_edx+0x50u));
    /* 00722e19: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 00722e1c: mov dword ptr [esp + 0x520], ebx */ W32((u32)(r_esp+0x520u), r_ebx);
    /* 00722e23: mov dword ptr [esp + 0x524], edx */ W32((u32)(r_esp+0x524u), r_edx);
    /* 00722e2a: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 00722e30: mov dword ptr [esp + 0x4d4], 4 */ W32((u32)(r_esp+0x4d4u), 0x4u);
    /* 00722e3b: mov ecx, eax */ r_ecx = r_eax;
    /* 00722e3d: mov dword ptr [esp + 0x4d0], edx */ W32((u32)(r_esp+0x4d0u), r_edx);
    /* 00722e44: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x722e49u); f_006936b4();
    /* 00722e49: lea edx, [esp + 0x4d8] */ r_edx = (u32)(r_esp+0x4d8u);
    /* 00722e50: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00722e52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722e53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00722e54: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x722e59u); f_00857dec();
    /* 00722e59: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722e5c: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x722e61u); f_0078bf78();
    /* 00722e61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722e62: lea ecx, [esp + 0x4d0] */ r_ecx = (u32)(r_esp+0x4d0u);
    /* 00722e69: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x722e6eu); f_00800464();
    /* 00722e6e: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x722e73u); f_0078bf78();
L_00722e73:; BB(0x00722e73);
    /* 00722e73: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00722e76: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722e78: je 0x722e86 */ if (fZ) goto L_00722e86;
L_00722e7a:; BB(0x00722e7a);
    /* 00722e7a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x722e7fu); f_007127b0();
    /* 00722e7f: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_00722e86:; BB(0x00722e86);
    /* 00722e86: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00722e89: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722e8b: je 0x722e99 */ if (fZ) goto L_00722e99;
L_00722e8d:; BB(0x00722e8d);
    /* 00722e8d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x722e92u); f_007127b0();
    /* 00722e92: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_00722e99:; BB(0x00722e99);
    /* 00722e99: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00722e9e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x722ea3u); f_0073ec50();
    /* 00722ea3: mov ebx, eax */ r_ebx = r_eax;
    /* 00722ea5: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00722eaa: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x722eafu); f_0073ec50();
    /* 00722eaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722eb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00722eb1: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x722eb6u); f_0073a888();
    /* 00722eb6: push 0x155 */ { u32 v = 0x155u; r_esp -= 4; W32(r_esp, v); }
    /* 00722ebb: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00722ebe: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x722ec3u); f_0079317c();
    /* 00722ec3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00722ec6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00722ec8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00722ec9: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00722ecc: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x722ed1u); f_0073ae38();
    /* 00722ed1: mov dword ptr [ebp + 0x24], 8 */ W32((u32)(r_ebp+0x24u), 0x8u);
    /* 00722ed8: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00722ede: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00722edf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00722ee0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00722ee1: ret  */ FN_RET(0x0072293c); r_esp += 4; return;
L_00723429:; BB(0x00723429);
    /* 00723429: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072342f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00723430: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00723431: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00723432: ret  */ FN_RET(0x0072293c); r_esp += 4; return;
L_007235a3:; BB(0x007235a3);
    /* 007235a3: mov byte ptr [esp + 0x314], 0xc2 */ W8((u32)(r_esp+0x314u), 0xc2u);
    /* 007235ab: mov byte ptr [esp + 0x315], 0x17 */ W8((u32)(r_esp+0x315u), 0x17u);
    /* 007235b3: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007235b9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7235beu); f_0068d5a8();
    /* 007235be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007235bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007235c1: je 0x7236f0 */ if (fZ) goto L_007236f0;
L_007235c7:; BB(0x007235c7);
    /* 007235c7: mov edx, 0xa9c8c0 */ r_edx = 0xa9c8c0u;
    /* 007235cc: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 007235ce: mov dword ptr [esp + 0x318], esi */ W32((u32)(r_esp+0x318u), r_esi);
    /* 007235d5: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 007235d8: mov dword ptr [esp + 0x31c], esi */ W32((u32)(r_esp+0x31cu), r_esi);
    /* 007235df: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 007235e2: mov dword ptr [esp + 0x320], esi */ W32((u32)(r_esp+0x320u), r_esi);
    /* 007235e9: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 007235ec: mov dword ptr [esp + 0x324], esi */ W32((u32)(r_esp+0x324u), r_esi);
    /* 007235f3: mov esi, dword ptr [edx + 0x10] */ r_esi = R32((u32)(r_edx+0x10u));
    /* 007235f6: mov dword ptr [esp + 0x328], esi */ W32((u32)(r_esp+0x328u), r_esi);
    /* 007235fd: mov esi, dword ptr [edx + 0x14] */ r_esi = R32((u32)(r_edx+0x14u));
    /* 00723600: mov dword ptr [esp + 0x32c], esi */ W32((u32)(r_esp+0x32cu), r_esi);
    /* 00723607: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 0072360a: mov dword ptr [esp + 0x330], esi */ W32((u32)(r_esp+0x330u), r_esi);
    /* 00723611: mov esi, dword ptr [edx + 0x1c] */ r_esi = R32((u32)(r_edx+0x1cu));
    /* 00723614: mov dword ptr [esp + 0x334], esi */ W32((u32)(r_esp+0x334u), r_esi);
    /* 0072361b: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 0072361e: mov dword ptr [esp + 0x338], esi */ W32((u32)(r_esp+0x338u), r_esi);
    /* 00723625: mov esi, dword ptr [edx + 0x24] */ r_esi = R32((u32)(r_edx+0x24u));
    /* 00723628: mov dword ptr [esp + 0x33c], esi */ W32((u32)(r_esp+0x33cu), r_esi);
    /* 0072362f: mov esi, dword ptr [edx + 0x28] */ r_esi = R32((u32)(r_edx+0x28u));
    /* 00723632: mov dword ptr [esp + 0x340], esi */ W32((u32)(r_esp+0x340u), r_esi);
    /* 00723639: mov esi, dword ptr [edx + 0x2c] */ r_esi = R32((u32)(r_edx+0x2cu));
    /* 0072363c: mov dword ptr [esp + 0x344], esi */ W32((u32)(r_esp+0x344u), r_esi);
    /* 00723643: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 00723646: mov dword ptr [esp + 0x348], esi */ W32((u32)(r_esp+0x348u), r_esi);
    /* 0072364d: mov esi, dword ptr [edx + 0x34] */ r_esi = R32((u32)(r_edx+0x34u));
    /* 00723650: mov dword ptr [esp + 0x34c], esi */ W32((u32)(r_esp+0x34cu), r_esi);
    /* 00723657: mov esi, dword ptr [edx + 0x38] */ r_esi = R32((u32)(r_edx+0x38u));
    /* 0072365a: mov dword ptr [esp + 0x350], esi */ W32((u32)(r_esp+0x350u), r_esi);
    /* 00723661: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 00723664: mov dword ptr [esp + 0x354], esi */ W32((u32)(r_esp+0x354u), r_esi);
    /* 0072366b: mov esi, dword ptr [edx + 0x40] */ r_esi = R32((u32)(r_edx+0x40u));
    /* 0072366e: mov dword ptr [esp + 0x358], esi */ W32((u32)(r_esp+0x358u), r_esi);
    /* 00723675: mov esi, dword ptr [edx + 0x44] */ r_esi = R32((u32)(r_edx+0x44u));
    /* 00723678: mov dword ptr [esp + 0x35c], esi */ W32((u32)(r_esp+0x35cu), r_esi);
    /* 0072367f: mov esi, dword ptr [edx + 0x48] */ r_esi = R32((u32)(r_edx+0x48u));
    /* 00723682: mov dword ptr [esp + 0x360], esi */ W32((u32)(r_esp+0x360u), r_esi);
    /* 00723689: mov esi, dword ptr [edx + 0x4c] */ r_esi = R32((u32)(r_edx+0x4cu));
    /* 0072368c: mov dword ptr [esp + 0x364], esi */ W32((u32)(r_esp+0x364u), r_esi);
    /* 00723693: mov esi, dword ptr [edx + 0x50] */ r_esi = R32((u32)(r_edx+0x50u));
    /* 00723696: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 00723699: mov dword ptr [esp + 0x368], esi */ W32((u32)(r_esp+0x368u), r_esi);
    /* 007236a0: mov dword ptr [esp + 0x36c], edx */ W32((u32)(r_esp+0x36cu), r_edx);
    /* 007236a7: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 007236ad: mov dword ptr [esp + 0x31c], 3 */ W32((u32)(r_esp+0x31cu), 0x3u);
    /* 007236b8: mov ecx, eax */ r_ecx = r_eax;
    /* 007236ba: mov dword ptr [esp + 0x318], edx */ W32((u32)(r_esp+0x318u), r_edx);
    /* 007236c1: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x7236c6u); f_006936b4();
    /* 007236c6: lea edx, [esp + 0x320] */ r_edx = (u32)(r_esp+0x320u);
    /* 007236cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007236cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007236d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007236d1: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7236d6u); f_00857dec();
    /* 007236d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007236d9: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x7236deu); f_0078bf78();
    /* 007236de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007236df: lea ecx, [esp + 0x318] */ r_ecx = (u32)(r_esp+0x318u);
    /* 007236e6: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x7236ebu); f_00800464();
    /* 007236eb: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x7236f0u); f_0078bf78();
L_007236f0:; BB(0x007236f0);
    /* 007236f0: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 007236f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007236f5: je 0x723703 */ if (fZ) goto L_00723703;
L_007236f7:; BB(0x007236f7);
    /* 007236f7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7236fcu); f_007127b0();
    /* 007236fc: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_00723703:; BB(0x00723703);
    /* 00723703: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00723706: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723708: je 0x723716 */ if (fZ) goto L_00723716;
L_0072370a:; BB(0x0072370a);
    /* 0072370a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x72370fu); f_007127b0();
    /* 0072370f: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_00723716:; BB(0x00723716);
    /* 00723716: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0072371b: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x723720u); f_0073ec50();
    /* 00723720: mov esi, eax */ r_esi = r_eax;
    /* 00723722: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00723727: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x72372cu); f_0073ec50();
    /* 0072372c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072372d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072372e: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x723733u); f_0073a888();
    /* 00723733: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723736: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00723739: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x72373eu); f_006dc358();
    /* 0072373e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723741: jne 0x72379b */ if (!fZ) goto L_0072379b;
L_00723743:; BB(0x00723743);
    /* 00723743: lea edx, [esp + 0x370] */ r_edx = (u32)(r_esp+0x370u);
    /* 0072374a: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0072374f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00723751: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00723752: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x723757u); f_0086b688();
    /* 00723757: push 0x185 */ { u32 v = 0x185u; r_esp -= 4; W32(r_esp, v); }
    /* 0072375c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x723761u); f_0079317c();
    /* 00723761: mov esi, eax */ r_esi = r_eax;
    /* 00723763: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723766: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00723768: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x72376du); f_006936b4();
    /* 0072376d: mov ebx, eax */ r_ebx = r_eax;
    /* 0072376f: call 0x78bf60 */ r_esp -= 4; W32(r_esp, 0x723774u); f_0078bf60();
    /* 00723774: lea edx, [esp + 0x370] */ r_edx = (u32)(r_esp+0x370u);
    /* 0072377b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072377c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072377d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072377e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072377f: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x723784u); f_00857e29();
    /* 00723784: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723787: lea eax, [esp + 0x370] */ r_eax = (u32)(r_esp+0x370u);
    /* 0072378e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00723790: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723791: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00723794: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x723799u); f_0073ae38();
    /* 00723799: jmp 0x7237b1 */ goto L_007237b1;
L_0072379b:; BB(0x0072379b);
    /* 0072379b: push 0x14f */ { u32 v = 0x14fu; r_esp -= 4; W32(r_esp, v); }
    /* 007237a0: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7237a5u); f_0079317c();
    /* 007237a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007237a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007237a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007237a9: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 007237ac: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7237b1u); f_0073ae38();
L_007237b1:; BB(0x007237b1);
    /* 007237b1: mov dword ptr [ebp + 0x24], 8 */ W32((u32)(r_ebp+0x24u), 0x8u);
    /* 007237b8: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007237be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007237bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007237c0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007237c1: ret  */ FN_RET(0x0072293c); r_esp += 4; return;
}

void f_00722ee2(void)
{
    FN_ENTER(0x00722ee2);
    /* 00722ee2: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00722ee5: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x722eeau); f_0073b170();
    /* 00722eea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722eec: je 0x722ef5 */ if (fZ) goto L_00722ef5;
L_00722eee:; BB(0x00722eee);
    /* 00722eee: mov dword ptr [ebp + 0x24], 5 */ W32((u32)(r_ebp+0x24u), 0x5u);
L_00722ef5:; BB(0x00722ef5);
    /* 00722ef5: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 00722efb: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00722f00: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x722f05u); f_007c1160();
    /* 00722f05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722f07: je 0x723429 */ if (fZ) goto L_00723429;
L_00722f0d:; BB(0x00722f0d);
    /* 00722f0d: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00722f10: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x722f15u); f_0073b0f0();
    /* 00722f15: mov dword ptr [ebp + 0x24], 5 */ W32((u32)(r_ebp+0x24u), 0x5u);
    /* 00722f1c: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00722f22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00722f23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00722f24: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00722f25: ret  */ FN_RET(0x00722ee2); r_esp += 4; return;
L_00723429:; BB(0x00723429);
    /* 00723429: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072342f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00723430: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00723431: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00723432: ret  */ FN_RET(0x00722ee2); r_esp += 4; return;
}

void f_00722f26(void)
{
    FN_ENTER(0x00722f26);
    /* 00722f26: mov esi, dword ptr [ebp + 0x20] */ r_esi = R32((u32)(r_ebp+0x20u));
    /* 00722f29: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722f2b: je 0x723a00 */ if (fZ) goto L_00723a00;
L_00722f31:; BB(0x00722f31);
    /* 00722f31: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 00722f38: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00722f3e: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00722f41: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 00722f48: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722f4a: je 0x722f53 */ if (fZ) goto L_00722f53;
L_00722f4c:; BB(0x00722f4c);
    /* 00722f4c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00722f4e: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x722f53u); f_00760acc();
L_00722f53:; BB(0x00722f53);
    /* 00722f53: mov dword ptr [ebp + 0x28], 0x384 */ W32((u32)(r_ebp+0x28u), 0x384u);
    /* 00722f5a: mov dword ptr [ebp + 0x24], 3 */ W32((u32)(r_ebp+0x24u), 0x3u);
    /* 00722f61: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00722f64: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00722f6b: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00722f6e: je 0x723193 */ if (fZ) goto L_00723193;
L_00722f74:; BB(0x00722f74);
    /* 00722f74: mov byte ptr [esp + 0x528], 0xc2 */ W8((u32)(r_esp+0x528u), 0xc2u);
    /* 00722f7c: mov byte ptr [esp + 0x529], 0x17 */ W8((u32)(r_esp+0x529u), 0x17u);
    /* 00722f84: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00722f8a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x722f8fu); f_0068d5a8();
    /* 00722f8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00722f90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722f92: je 0x7230c1 */ if (fZ) goto L_007230c1;
L_00722f98:; BB(0x00722f98);
    /* 00722f98: mov edx, 0xa9c8c0 */ r_edx = 0xa9c8c0u;
    /* 00722f9d: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 00722f9f: mov dword ptr [esp + 0x52c], esi */ W32((u32)(r_esp+0x52cu), r_esi);
    /* 00722fa6: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00722fa9: mov dword ptr [esp + 0x530], esi */ W32((u32)(r_esp+0x530u), r_esi);
    /* 00722fb0: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 00722fb3: mov dword ptr [esp + 0x534], esi */ W32((u32)(r_esp+0x534u), r_esi);
    /* 00722fba: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 00722fbd: mov dword ptr [esp + 0x538], esi */ W32((u32)(r_esp+0x538u), r_esi);
    /* 00722fc4: mov esi, dword ptr [edx + 0x10] */ r_esi = R32((u32)(r_edx+0x10u));
    /* 00722fc7: mov dword ptr [esp + 0x53c], esi */ W32((u32)(r_esp+0x53cu), r_esi);
    /* 00722fce: mov esi, dword ptr [edx + 0x14] */ r_esi = R32((u32)(r_edx+0x14u));
    /* 00722fd1: mov dword ptr [esp + 0x540], esi */ W32((u32)(r_esp+0x540u), r_esi);
    /* 00722fd8: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 00722fdb: mov dword ptr [esp + 0x544], esi */ W32((u32)(r_esp+0x544u), r_esi);
    /* 00722fe2: mov esi, dword ptr [edx + 0x1c] */ r_esi = R32((u32)(r_edx+0x1cu));
    /* 00722fe5: mov dword ptr [esp + 0x548], esi */ W32((u32)(r_esp+0x548u), r_esi);
    /* 00722fec: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 00722fef: mov dword ptr [esp + 0x54c], esi */ W32((u32)(r_esp+0x54cu), r_esi);
    /* 00722ff6: mov esi, dword ptr [edx + 0x24] */ r_esi = R32((u32)(r_edx+0x24u));
    /* 00722ff9: mov dword ptr [esp + 0x550], esi */ W32((u32)(r_esp+0x550u), r_esi);
    /* 00723000: mov esi, dword ptr [edx + 0x28] */ r_esi = R32((u32)(r_edx+0x28u));
    /* 00723003: mov dword ptr [esp + 0x554], esi */ W32((u32)(r_esp+0x554u), r_esi);
    /* 0072300a: mov esi, dword ptr [edx + 0x2c] */ r_esi = R32((u32)(r_edx+0x2cu));
    /* 0072300d: mov dword ptr [esp + 0x558], esi */ W32((u32)(r_esp+0x558u), r_esi);
    /* 00723014: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 00723017: mov dword ptr [esp + 0x55c], esi */ W32((u32)(r_esp+0x55cu), r_esi);
    /* 0072301e: mov esi, dword ptr [edx + 0x34] */ r_esi = R32((u32)(r_edx+0x34u));
    /* 00723021: mov dword ptr [esp + 0x560], esi */ W32((u32)(r_esp+0x560u), r_esi);
    /* 00723028: mov esi, dword ptr [edx + 0x38] */ r_esi = R32((u32)(r_edx+0x38u));
    /* 0072302b: mov dword ptr [esp + 0x564], esi */ W32((u32)(r_esp+0x564u), r_esi);
    /* 00723032: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 00723035: mov dword ptr [esp + 0x568], esi */ W32((u32)(r_esp+0x568u), r_esi);
    /* 0072303c: mov esi, dword ptr [edx + 0x40] */ r_esi = R32((u32)(r_edx+0x40u));
    /* 0072303f: mov dword ptr [esp + 0x56c], esi */ W32((u32)(r_esp+0x56cu), r_esi);
    /* 00723046: mov esi, dword ptr [edx + 0x44] */ r_esi = R32((u32)(r_edx+0x44u));
    /* 00723049: mov dword ptr [esp + 0x570], esi */ W32((u32)(r_esp+0x570u), r_esi);
    /* 00723050: mov esi, dword ptr [edx + 0x48] */ r_esi = R32((u32)(r_edx+0x48u));
    /* 00723053: mov dword ptr [esp + 0x574], esi */ W32((u32)(r_esp+0x574u), r_esi);
    /* 0072305a: mov esi, dword ptr [edx + 0x4c] */ r_esi = R32((u32)(r_edx+0x4cu));
    /* 0072305d: mov dword ptr [esp + 0x578], esi */ W32((u32)(r_esp+0x578u), r_esi);
    /* 00723064: mov esi, dword ptr [edx + 0x50] */ r_esi = R32((u32)(r_edx+0x50u));
    /* 00723067: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 0072306a: mov dword ptr [esp + 0x57c], esi */ W32((u32)(r_esp+0x57cu), r_esi);
    /* 00723071: mov dword ptr [esp + 0x580], edx */ W32((u32)(r_esp+0x580u), r_edx);
    /* 00723078: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 0072307e: mov dword ptr [esp + 0x530], 3 */ W32((u32)(r_esp+0x530u), 0x3u);
    /* 00723089: mov ecx, eax */ r_ecx = r_eax;
    /* 0072308b: mov dword ptr [esp + 0x52c], edx */ W32((u32)(r_esp+0x52cu), r_edx);
    /* 00723092: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x723097u); f_006936b4();
    /* 00723097: lea edx, [esp + 0x534] */ r_edx = (u32)(r_esp+0x534u);
    /* 0072309e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007230a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007230a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007230a2: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7230a7u); f_00857dec();
    /* 007230a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007230aa: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x7230afu); f_0078bf78();
    /* 007230af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007230b0: lea ecx, [esp + 0x52c] */ r_ecx = (u32)(r_esp+0x52cu);
    /* 007230b7: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x7230bcu); f_00800464();
    /* 007230bc: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x7230c1u); f_0078bf78();
L_007230c1:; BB(0x007230c1);
    /* 007230c1: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 007230c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007230c6: je 0x7230d4 */ if (fZ) goto L_007230d4;
L_007230c8:; BB(0x007230c8);
    /* 007230c8: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7230cdu); f_007127b0();
    /* 007230cd: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_007230d4:; BB(0x007230d4);
    /* 007230d4: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 007230d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007230d9: je 0x7230e7 */ if (fZ) goto L_007230e7;
L_007230db:; BB(0x007230db);
    /* 007230db: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7230e0u); f_007127b0();
    /* 007230e0: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_007230e7:; BB(0x007230e7);
    /* 007230e7: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 007230ec: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7230f1u); f_0073ec50();
    /* 007230f1: mov esi, eax */ r_esi = r_eax;
    /* 007230f3: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 007230f8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7230fdu); f_0073ec50();
    /* 007230fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007230fe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007230ff: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x723104u); f_0073a888();
    /* 00723104: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723107: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 0072310a: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x72310fu); f_006dc358();
    /* 0072310f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723112: jne 0x72316c */ if (!fZ) goto L_0072316c;
L_00723114:; BB(0x00723114);
    /* 00723114: lea edx, [esp + 0x370] */ r_edx = (u32)(r_esp+0x370u);
    /* 0072311b: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00723120: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00723122: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00723123: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x723128u); f_0086b688();
    /* 00723128: push 0x185 */ { u32 v = 0x185u; r_esp -= 4; W32(r_esp, v); }
    /* 0072312d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x723132u); f_0079317c();
    /* 00723132: mov esi, eax */ r_esi = r_eax;
    /* 00723134: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723137: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00723139: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x72313eu); f_006936b4();
    /* 0072313e: mov ebx, eax */ r_ebx = r_eax;
    /* 00723140: call 0x78bf60 */ r_esp -= 4; W32(r_esp, 0x723145u); f_0078bf60();
    /* 00723145: lea edx, [esp + 0x370] */ r_edx = (u32)(r_esp+0x370u);
    /* 0072314c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072314d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072314e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072314f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00723150: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x723155u); f_00857e29();
    /* 00723155: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723158: lea eax, [esp + 0x370] */ r_eax = (u32)(r_esp+0x370u);
    /* 0072315f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00723161: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723162: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00723165: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x72316au); f_0073ae38();
    /* 0072316a: jmp 0x723182 */ goto L_00723182;
L_0072316c:; BB(0x0072316c);
    /* 0072316c: push 0x14f */ { u32 v = 0x14fu; r_esp -= 4; W32(r_esp, v); }
    /* 00723171: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x723176u); f_0079317c();
    /* 00723176: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00723177: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00723179: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072317a: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0072317d: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x723182u); f_0073ae38();
L_00723182:; BB(0x00723182);
    /* 00723182: mov dword ptr [ebp + 0x24], 8 */ W32((u32)(r_ebp+0x24u), 0x8u);
    /* 00723189: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072318f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00723190: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00723191: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00723192: ret  */ FN_RET(0x00722f26); r_esp += 4; return;
L_00723193:; BB(0x00723193);
    /* 00723193: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00723196: je 0x72321d */ if (fZ) goto L_0072321d;
L_0072319c:; BB(0x0072319c);
    /* 0072319c: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7231a1u); f_007365f4();
    /* 007231a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007231a3: jne 0x723214 */ if (!fZ) goto L_00723214;
L_007231a5:; BB(0x007231a5);
    /* 007231a5: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 007231a8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007231aa: je 0x7231b8 */ if (fZ) goto L_007231b8;
L_007231ac:; BB(0x007231ac);
    /* 007231ac: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7231b1u); f_007127b0();
    /* 007231b1: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_007231b8:; BB(0x007231b8);
    /* 007231b8: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 007231bb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007231bd: je 0x7231cb */ if (fZ) goto L_007231cb;
L_007231bf:; BB(0x007231bf);
    /* 007231bf: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7231c4u); f_007127b0();
    /* 007231c4: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_007231cb:; BB(0x007231cb);
    /* 007231cb: push 0xe9 */ { u32 v = 0xe9u; r_esp -= 4; W32(r_esp, v); }
    /* 007231d0: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7231d5u); f_0073ec50();
    /* 007231d5: mov ebx, eax */ r_ebx = r_eax;
    /* 007231d7: push 0xea */ { u32 v = 0xeau; r_esp -= 4; W32(r_esp, v); }
    /* 007231dc: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7231e1u); f_0073ec50();
    /* 007231e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007231e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007231e3: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x7231e8u); f_0073a888();
    /* 007231e8: push 0x14b */ { u32 v = 0x14bu; r_esp -= 4; W32(r_esp, v); }
    /* 007231ed: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 007231f0: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7231f5u); f_0079317c();
    /* 007231f5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007231f8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007231fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007231fb: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 007231fe: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x723203u); f_0073ae38();
    /* 00723203: mov dword ptr [ebp + 0x24], 4 */ W32((u32)(r_ebp+0x24u), 0x4u);
    /* 0072320a: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00723210: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00723211: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00723212: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00723213: ret  */ FN_RET(0x00722f26); r_esp += 4; return;
L_00723214:; BB(0x00723214);
    /* 00723214: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723217: je 0x7237e1 */ if (fZ) goto L_007237e1;
L_0072321d:; BB(0x0072321d);
    /* 0072321d: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00723220: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00723223: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 00723226: jne 0x723429 */ if (!fZ) goto L_00723429;
L_0072322c:; BB(0x0072322c);
    /* 0072322c: mov byte ptr [esp + 0x5e0], 0xc2 */ W8((u32)(r_esp+0x5e0u), 0xc2u);
    /* 00723234: mov byte ptr [esp + 0x5e1], 0x17 */ W8((u32)(r_esp+0x5e1u), 0x17u);
    /* 0072323c: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00723242: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x723247u); f_0068d5a8();
    /* 00723247: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00723248: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072324a: je 0x723379 */ if (fZ) goto L_00723379;
L_00723250:; BB(0x00723250);
    /* 00723250: mov edx, 0xa9c8c0 */ r_edx = 0xa9c8c0u;
    /* 00723255: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 00723257: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0072325a: mov dword ptr [esp + 0x5e4], ebx */ W32((u32)(r_esp+0x5e4u), r_ebx);
    /* 00723261: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00723264: mov dword ptr [esp + 0x5e8], esi */ W32((u32)(r_esp+0x5e8u), r_esi);
    /* 0072326b: mov dword ptr [esp + 0x5ec], ebx */ W32((u32)(r_esp+0x5ecu), r_ebx);
    /* 00723272: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 00723275: mov dword ptr [esp + 0x5f0], ebx */ W32((u32)(r_esp+0x5f0u), r_ebx);
    /* 0072327c: mov ebx, dword ptr [edx + 0x10] */ r_ebx = R32((u32)(r_edx+0x10u));
    /* 0072327f: mov dword ptr [esp + 0x5f4], ebx */ W32((u32)(r_esp+0x5f4u), r_ebx);
    /* 00723286: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 00723289: mov dword ptr [esp + 0x5f8], ebx */ W32((u32)(r_esp+0x5f8u), r_ebx);
    /* 00723290: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 00723293: mov dword ptr [esp + 0x5fc], ebx */ W32((u32)(r_esp+0x5fcu), r_ebx);
    /* 0072329a: mov ebx, dword ptr [edx + 0x1c] */ r_ebx = R32((u32)(r_edx+0x1cu));
    /* 0072329d: mov dword ptr [esp + 0x600], ebx */ W32((u32)(r_esp+0x600u), r_ebx);
    /* 007232a4: mov ebx, dword ptr [edx + 0x20] */ r_ebx = R32((u32)(r_edx+0x20u));
    /* 007232a7: mov dword ptr [esp + 0x604], ebx */ W32((u32)(r_esp+0x604u), r_ebx);
    /* 007232ae: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 007232b1: mov dword ptr [esp + 0x608], ebx */ W32((u32)(r_esp+0x608u), r_ebx);
    /* 007232b8: mov ebx, dword ptr [edx + 0x28] */ r_ebx = R32((u32)(r_edx+0x28u));
    /* 007232bb: mov dword ptr [esp + 0x60c], ebx */ W32((u32)(r_esp+0x60cu), r_ebx);
    /* 007232c2: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 007232c5: mov dword ptr [esp + 0x610], ebx */ W32((u32)(r_esp+0x610u), r_ebx);
    /* 007232cc: mov ebx, dword ptr [edx + 0x30] */ r_ebx = R32((u32)(r_edx+0x30u));
    /* 007232cf: mov dword ptr [esp + 0x614], ebx */ W32((u32)(r_esp+0x614u), r_ebx);
    /* 007232d6: mov ebx, dword ptr [edx + 0x34] */ r_ebx = R32((u32)(r_edx+0x34u));
    /* 007232d9: mov dword ptr [esp + 0x618], ebx */ W32((u32)(r_esp+0x618u), r_ebx);
    /* 007232e0: mov ebx, dword ptr [edx + 0x38] */ r_ebx = R32((u32)(r_edx+0x38u));
    /* 007232e3: mov dword ptr [esp + 0x61c], ebx */ W32((u32)(r_esp+0x61cu), r_ebx);
    /* 007232ea: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 007232ed: mov dword ptr [esp + 0x620], ebx */ W32((u32)(r_esp+0x620u), r_ebx);
    /* 007232f4: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 007232f7: mov dword ptr [esp + 0x624], ebx */ W32((u32)(r_esp+0x624u), r_ebx);
    /* 007232fe: mov ebx, dword ptr [edx + 0x44] */ r_ebx = R32((u32)(r_edx+0x44u));
    /* 00723301: mov dword ptr [esp + 0x628], ebx */ W32((u32)(r_esp+0x628u), r_ebx);
    /* 00723308: mov ebx, dword ptr [edx + 0x48] */ r_ebx = R32((u32)(r_edx+0x48u));
    /* 0072330b: mov dword ptr [esp + 0x62c], ebx */ W32((u32)(r_esp+0x62cu), r_ebx);
    /* 00723312: mov ebx, dword ptr [edx + 0x4c] */ r_ebx = R32((u32)(r_edx+0x4cu));
    /* 00723315: mov dword ptr [esp + 0x630], ebx */ W32((u32)(r_esp+0x630u), r_ebx);
    /* 0072331c: mov ebx, dword ptr [edx + 0x50] */ r_ebx = R32((u32)(r_edx+0x50u));
    /* 0072331f: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 00723322: mov dword ptr [esp + 0x634], ebx */ W32((u32)(r_esp+0x634u), r_ebx);
    /* 00723329: mov dword ptr [esp + 0x638], edx */ W32((u32)(r_esp+0x638u), r_edx);
    /* 00723330: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 00723336: mov dword ptr [esp + 0x5e8], 4 */ W32((u32)(r_esp+0x5e8u), 0x4u);
    /* 00723341: mov ecx, eax */ r_ecx = r_eax;
    /* 00723343: mov dword ptr [esp + 0x5e4], edx */ W32((u32)(r_esp+0x5e4u), r_edx);
    /* 0072334a: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x72334fu); f_006936b4();
    /* 0072334f: lea edx, [esp + 0x5ec] */ r_edx = (u32)(r_esp+0x5ecu);
    /* 00723356: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00723358: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723359: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072335a: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72335fu); f_00857dec();
    /* 0072335f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723362: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x723367u); f_0078bf78();
    /* 00723367: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723368: lea ecx, [esp + 0x5e4] */ r_ecx = (u32)(r_esp+0x5e4u);
    /* 0072336f: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x723374u); f_00800464();
    /* 00723374: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x723379u); f_0078bf78();
L_00723379:; BB(0x00723379);
    /* 00723379: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0072337c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072337e: je 0x72338c */ if (fZ) goto L_0072338c;
L_00723380:; BB(0x00723380);
    /* 00723380: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x723385u); f_007127b0();
    /* 00723385: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_0072338c:; BB(0x0072338c);
    /* 0072338c: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0072338f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723391: je 0x72339f */ if (fZ) goto L_0072339f;
L_00723393:; BB(0x00723393);
    /* 00723393: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x723398u); f_007127b0();
    /* 00723398: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_0072339f:; BB(0x0072339f);
    /* 0072339f: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 007233a4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7233a9u); f_0073ec50();
    /* 007233a9: mov ebx, eax */ r_ebx = r_eax;
    /* 007233ab: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 007233b0: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7233b5u); f_0073ec50();
    /* 007233b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007233b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007233b7: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x7233bcu); f_0073a888();
    /* 007233bc: push 0x155 */ { u32 v = 0x155u; r_esp -= 4; W32(r_esp, v); }
    /* 007233c1: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 007233c4: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7233c9u); f_0079317c();
    /* 007233c9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007233cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007233ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007233cf: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 007233d2: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7233d7u); f_0073ae38();
    /* 007233d7: mov dword ptr [ebp + 0x24], 8 */ W32((u32)(r_ebp+0x24u), 0x8u);
    /* 007233de: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007233e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007233e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007233e6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007233e7: ret  */ FN_RET(0x00722f26); r_esp += 4; return;
L_00723429:; BB(0x00723429);
    /* 00723429: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072342f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00723430: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00723431: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00723432: ret  */ FN_RET(0x00722f26); r_esp += 4; return;
L_007237e1:; BB(0x007237e1);
    /* 007237e1: mov byte ptr [esp + 0x584], 0xc2 */ W8((u32)(r_esp+0x584u), 0xc2u);
    /* 007237e9: mov byte ptr [esp + 0x585], 0x17 */ W8((u32)(r_esp+0x585u), 0x17u);
    /* 007237f1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007237f7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7237fcu); f_0068d5a8();
    /* 007237fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007237fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007237ff: je 0x72392e */ if (fZ) goto L_0072392e;
L_00723805:; BB(0x00723805);
    /* 00723805: mov edx, 0xa9c8c0 */ r_edx = 0xa9c8c0u;
    /* 0072380a: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0072380c: mov dword ptr [esp + 0x588], esi */ W32((u32)(r_esp+0x588u), r_esi);
    /* 00723813: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00723816: mov dword ptr [esp + 0x58c], esi */ W32((u32)(r_esp+0x58cu), r_esi);
    /* 0072381d: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 00723820: mov dword ptr [esp + 0x590], esi */ W32((u32)(r_esp+0x590u), r_esi);
    /* 00723827: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0072382a: mov dword ptr [esp + 0x594], esi */ W32((u32)(r_esp+0x594u), r_esi);
    /* 00723831: mov esi, dword ptr [edx + 0x10] */ r_esi = R32((u32)(r_edx+0x10u));
    /* 00723834: mov dword ptr [esp + 0x598], esi */ W32((u32)(r_esp+0x598u), r_esi);
    /* 0072383b: mov esi, dword ptr [edx + 0x14] */ r_esi = R32((u32)(r_edx+0x14u));
    /* 0072383e: mov dword ptr [esp + 0x59c], esi */ W32((u32)(r_esp+0x59cu), r_esi);
    /* 00723845: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 00723848: mov dword ptr [esp + 0x5a0], esi */ W32((u32)(r_esp+0x5a0u), r_esi);
    /* 0072384f: mov esi, dword ptr [edx + 0x1c] */ r_esi = R32((u32)(r_edx+0x1cu));
    /* 00723852: mov dword ptr [esp + 0x5a4], esi */ W32((u32)(r_esp+0x5a4u), r_esi);
    /* 00723859: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 0072385c: mov dword ptr [esp + 0x5a8], esi */ W32((u32)(r_esp+0x5a8u), r_esi);
    /* 00723863: mov esi, dword ptr [edx + 0x24] */ r_esi = R32((u32)(r_edx+0x24u));
    /* 00723866: mov dword ptr [esp + 0x5ac], esi */ W32((u32)(r_esp+0x5acu), r_esi);
    /* 0072386d: mov esi, dword ptr [edx + 0x28] */ r_esi = R32((u32)(r_edx+0x28u));
    /* 00723870: mov dword ptr [esp + 0x5b0], esi */ W32((u32)(r_esp+0x5b0u), r_esi);
    /* 00723877: mov esi, dword ptr [edx + 0x2c] */ r_esi = R32((u32)(r_edx+0x2cu));
    /* 0072387a: mov dword ptr [esp + 0x5b4], esi */ W32((u32)(r_esp+0x5b4u), r_esi);
    /* 00723881: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 00723884: mov dword ptr [esp + 0x5b8], esi */ W32((u32)(r_esp+0x5b8u), r_esi);
    /* 0072388b: mov esi, dword ptr [edx + 0x34] */ r_esi = R32((u32)(r_edx+0x34u));
    /* 0072388e: mov dword ptr [esp + 0x5bc], esi */ W32((u32)(r_esp+0x5bcu), r_esi);
    /* 00723895: mov esi, dword ptr [edx + 0x38] */ r_esi = R32((u32)(r_edx+0x38u));
    /* 00723898: mov dword ptr [esp + 0x5c0], esi */ W32((u32)(r_esp+0x5c0u), r_esi);
    /* 0072389f: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 007238a2: mov dword ptr [esp + 0x5c4], esi */ W32((u32)(r_esp+0x5c4u), r_esi);
    /* 007238a9: mov esi, dword ptr [edx + 0x40] */ r_esi = R32((u32)(r_edx+0x40u));
    /* 007238ac: mov dword ptr [esp + 0x5c8], esi */ W32((u32)(r_esp+0x5c8u), r_esi);
    /* 007238b3: mov esi, dword ptr [edx + 0x44] */ r_esi = R32((u32)(r_edx+0x44u));
    /* 007238b6: mov dword ptr [esp + 0x5cc], esi */ W32((u32)(r_esp+0x5ccu), r_esi);
    /* 007238bd: mov esi, dword ptr [edx + 0x48] */ r_esi = R32((u32)(r_edx+0x48u));
    /* 007238c0: mov dword ptr [esp + 0x5d0], esi */ W32((u32)(r_esp+0x5d0u), r_esi);
    /* 007238c7: mov esi, dword ptr [edx + 0x4c] */ r_esi = R32((u32)(r_edx+0x4cu));
    /* 007238ca: mov dword ptr [esp + 0x5d4], esi */ W32((u32)(r_esp+0x5d4u), r_esi);
    /* 007238d1: mov esi, dword ptr [edx + 0x50] */ r_esi = R32((u32)(r_edx+0x50u));
    /* 007238d4: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 007238d7: mov dword ptr [esp + 0x5d8], esi */ W32((u32)(r_esp+0x5d8u), r_esi);
    /* 007238de: mov dword ptr [esp + 0x5dc], edx */ W32((u32)(r_esp+0x5dcu), r_edx);
    /* 007238e5: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 007238eb: mov dword ptr [esp + 0x58c], 3 */ W32((u32)(r_esp+0x58cu), 0x3u);
    /* 007238f6: mov ecx, eax */ r_ecx = r_eax;
    /* 007238f8: mov dword ptr [esp + 0x588], edx */ W32((u32)(r_esp+0x588u), r_edx);
    /* 007238ff: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x723904u); f_006936b4();
    /* 00723904: lea edx, [esp + 0x590] */ r_edx = (u32)(r_esp+0x590u);
    /* 0072390b: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0072390d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072390e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072390f: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x723914u); f_00857dec();
    /* 00723914: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723917: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x72391cu); f_0078bf78();
    /* 0072391c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072391d: lea ecx, [esp + 0x588] */ r_ecx = (u32)(r_esp+0x588u);
    /* 00723924: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x723929u); f_00800464();
    /* 00723929: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x72392eu); f_0078bf78();
L_0072392e:; BB(0x0072392e);
    /* 0072392e: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00723931: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723933: je 0x723941 */ if (fZ) goto L_00723941;
L_00723935:; BB(0x00723935);
    /* 00723935: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x72393au); f_007127b0();
    /* 0072393a: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_00723941:; BB(0x00723941);
    /* 00723941: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00723944: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723946: je 0x723954 */ if (fZ) goto L_00723954;
L_00723948:; BB(0x00723948);
    /* 00723948: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x72394du); f_007127b0();
    /* 0072394d: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_00723954:; BB(0x00723954);
    /* 00723954: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00723959: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x72395eu); f_0073ec50();
    /* 0072395e: mov esi, eax */ r_esi = r_eax;
    /* 00723960: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00723965: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x72396au); f_0073ec50();
    /* 0072396a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072396b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072396c: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x723971u); f_0073a888();
    /* 00723971: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723974: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00723977: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x72397cu); f_006dc358();
    /* 0072397c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072397f: jne 0x7239d9 */ if (!fZ) goto L_007239d9;
L_00723981:; BB(0x00723981);
    /* 00723981: lea edx, [esp + 0x370] */ r_edx = (u32)(r_esp+0x370u);
    /* 00723988: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0072398d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072398f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00723990: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x723995u); f_0086b688();
    /* 00723995: push 0x185 */ { u32 v = 0x185u; r_esp -= 4; W32(r_esp, v); }
    /* 0072399a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x72399fu); f_0079317c();
    /* 0072399f: mov esi, eax */ r_esi = r_eax;
    /* 007239a1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007239a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007239a6: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x7239abu); f_006936b4();
    /* 007239ab: mov ebx, eax */ r_ebx = r_eax;
    /* 007239ad: call 0x78bf60 */ r_esp -= 4; W32(r_esp, 0x7239b2u); f_0078bf60();
    /* 007239b2: lea edx, [esp + 0x370] */ r_edx = (u32)(r_esp+0x370u);
    /* 007239b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007239ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007239bb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007239bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007239bd: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7239c2u); f_00857e29();
    /* 007239c2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007239c5: lea eax, [esp + 0x370] */ r_eax = (u32)(r_esp+0x370u);
    /* 007239cc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007239ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007239cf: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 007239d2: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7239d7u); f_0073ae38();
    /* 007239d7: jmp 0x7239ef */ goto L_007239ef;
L_007239d9:; BB(0x007239d9);
    /* 007239d9: push 0x14f */ { u32 v = 0x14fu; r_esp -= 4; W32(r_esp, v); }
    /* 007239de: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7239e3u); f_0079317c();
    /* 007239e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007239e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007239e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007239e7: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 007239ea: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7239efu); f_0073ae38();
L_007239ef:; BB(0x007239ef);
    /* 007239ef: mov dword ptr [ebp + 0x24], 8 */ W32((u32)(r_ebp+0x24u), 0x8u);
    /* 007239f6: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007239fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007239fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007239fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007239ff: ret  */ FN_RET(0x00722f26); r_esp += 4; return;
L_00723a00:; BB(0x00723a00);
    /* 00723a00: push 0x9f24dc */ { u32 v = 0x9f24dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00723a05: call 0x735874 */ r_esp -= 4; W32(r_esp, 0x723a0au); f_00735874();
    /* 00723a0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00723a0b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00723a0d: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 00723a10: mov ecx, eax */ r_ecx = r_eax;
    /* 00723a12: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x723a17u); f_00736510();
    /* 00723a17: mov esi, dword ptr [ebp + 0x20] */ r_esi = R32((u32)(r_ebp+0x20u));
    /* 00723a1a: jmp 0x722f31 */ goto L_00722f31;
}

void f_00722f61(void)
{
    FN_ENTER(0x00722f61);
    /* 00722f61: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00722f64: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00722f6b: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00722f6e: je 0x723193 */ if (fZ) goto L_00723193;
L_00722f74:; BB(0x00722f74);
    /* 00722f74: mov byte ptr [esp + 0x528], 0xc2 */ W8((u32)(r_esp+0x528u), 0xc2u);
    /* 00722f7c: mov byte ptr [esp + 0x529], 0x17 */ W8((u32)(r_esp+0x529u), 0x17u);
    /* 00722f84: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00722f8a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x722f8fu); f_0068d5a8();
    /* 00722f8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00722f90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00722f92: je 0x7230c1 */ if (fZ) goto L_007230c1;
L_00722f98:; BB(0x00722f98);
    /* 00722f98: mov edx, 0xa9c8c0 */ r_edx = 0xa9c8c0u;
    /* 00722f9d: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 00722f9f: mov dword ptr [esp + 0x52c], esi */ W32((u32)(r_esp+0x52cu), r_esi);
    /* 00722fa6: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00722fa9: mov dword ptr [esp + 0x530], esi */ W32((u32)(r_esp+0x530u), r_esi);
    /* 00722fb0: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 00722fb3: mov dword ptr [esp + 0x534], esi */ W32((u32)(r_esp+0x534u), r_esi);
    /* 00722fba: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 00722fbd: mov dword ptr [esp + 0x538], esi */ W32((u32)(r_esp+0x538u), r_esi);
    /* 00722fc4: mov esi, dword ptr [edx + 0x10] */ r_esi = R32((u32)(r_edx+0x10u));
    /* 00722fc7: mov dword ptr [esp + 0x53c], esi */ W32((u32)(r_esp+0x53cu), r_esi);
    /* 00722fce: mov esi, dword ptr [edx + 0x14] */ r_esi = R32((u32)(r_edx+0x14u));
    /* 00722fd1: mov dword ptr [esp + 0x540], esi */ W32((u32)(r_esp+0x540u), r_esi);
    /* 00722fd8: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 00722fdb: mov dword ptr [esp + 0x544], esi */ W32((u32)(r_esp+0x544u), r_esi);
    /* 00722fe2: mov esi, dword ptr [edx + 0x1c] */ r_esi = R32((u32)(r_edx+0x1cu));
    /* 00722fe5: mov dword ptr [esp + 0x548], esi */ W32((u32)(r_esp+0x548u), r_esi);
    /* 00722fec: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 00722fef: mov dword ptr [esp + 0x54c], esi */ W32((u32)(r_esp+0x54cu), r_esi);
    /* 00722ff6: mov esi, dword ptr [edx + 0x24] */ r_esi = R32((u32)(r_edx+0x24u));
    /* 00722ff9: mov dword ptr [esp + 0x550], esi */ W32((u32)(r_esp+0x550u), r_esi);
    /* 00723000: mov esi, dword ptr [edx + 0x28] */ r_esi = R32((u32)(r_edx+0x28u));
    /* 00723003: mov dword ptr [esp + 0x554], esi */ W32((u32)(r_esp+0x554u), r_esi);
    /* 0072300a: mov esi, dword ptr [edx + 0x2c] */ r_esi = R32((u32)(r_edx+0x2cu));
    /* 0072300d: mov dword ptr [esp + 0x558], esi */ W32((u32)(r_esp+0x558u), r_esi);
    /* 00723014: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 00723017: mov dword ptr [esp + 0x55c], esi */ W32((u32)(r_esp+0x55cu), r_esi);
    /* 0072301e: mov esi, dword ptr [edx + 0x34] */ r_esi = R32((u32)(r_edx+0x34u));
    /* 00723021: mov dword ptr [esp + 0x560], esi */ W32((u32)(r_esp+0x560u), r_esi);
    /* 00723028: mov esi, dword ptr [edx + 0x38] */ r_esi = R32((u32)(r_edx+0x38u));
    /* 0072302b: mov dword ptr [esp + 0x564], esi */ W32((u32)(r_esp+0x564u), r_esi);
    /* 00723032: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 00723035: mov dword ptr [esp + 0x568], esi */ W32((u32)(r_esp+0x568u), r_esi);
    /* 0072303c: mov esi, dword ptr [edx + 0x40] */ r_esi = R32((u32)(r_edx+0x40u));
    /* 0072303f: mov dword ptr [esp + 0x56c], esi */ W32((u32)(r_esp+0x56cu), r_esi);
    /* 00723046: mov esi, dword ptr [edx + 0x44] */ r_esi = R32((u32)(r_edx+0x44u));
    /* 00723049: mov dword ptr [esp + 0x570], esi */ W32((u32)(r_esp+0x570u), r_esi);
    /* 00723050: mov esi, dword ptr [edx + 0x48] */ r_esi = R32((u32)(r_edx+0x48u));
    /* 00723053: mov dword ptr [esp + 0x574], esi */ W32((u32)(r_esp+0x574u), r_esi);
    /* 0072305a: mov esi, dword ptr [edx + 0x4c] */ r_esi = R32((u32)(r_edx+0x4cu));
    /* 0072305d: mov dword ptr [esp + 0x578], esi */ W32((u32)(r_esp+0x578u), r_esi);
    /* 00723064: mov esi, dword ptr [edx + 0x50] */ r_esi = R32((u32)(r_edx+0x50u));
    /* 00723067: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 0072306a: mov dword ptr [esp + 0x57c], esi */ W32((u32)(r_esp+0x57cu), r_esi);
    /* 00723071: mov dword ptr [esp + 0x580], edx */ W32((u32)(r_esp+0x580u), r_edx);
    /* 00723078: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 0072307e: mov dword ptr [esp + 0x530], 3 */ W32((u32)(r_esp+0x530u), 0x3u);
    /* 00723089: mov ecx, eax */ r_ecx = r_eax;
    /* 0072308b: mov dword ptr [esp + 0x52c], edx */ W32((u32)(r_esp+0x52cu), r_edx);
    /* 00723092: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x723097u); f_006936b4();
    /* 00723097: lea edx, [esp + 0x534] */ r_edx = (u32)(r_esp+0x534u);
    /* 0072309e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007230a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007230a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007230a2: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7230a7u); f_00857dec();
    /* 007230a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007230aa: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x7230afu); f_0078bf78();
    /* 007230af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007230b0: lea ecx, [esp + 0x52c] */ r_ecx = (u32)(r_esp+0x52cu);
    /* 007230b7: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x7230bcu); f_00800464();
    /* 007230bc: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x7230c1u); f_0078bf78();
L_007230c1:; BB(0x007230c1);
    /* 007230c1: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 007230c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007230c6: je 0x7230d4 */ if (fZ) goto L_007230d4;
L_007230c8:; BB(0x007230c8);
    /* 007230c8: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7230cdu); f_007127b0();
    /* 007230cd: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_007230d4:; BB(0x007230d4);
    /* 007230d4: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 007230d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007230d9: je 0x7230e7 */ if (fZ) goto L_007230e7;
L_007230db:; BB(0x007230db);
    /* 007230db: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7230e0u); f_007127b0();
    /* 007230e0: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_007230e7:; BB(0x007230e7);
    /* 007230e7: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 007230ec: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7230f1u); f_0073ec50();
    /* 007230f1: mov esi, eax */ r_esi = r_eax;
    /* 007230f3: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 007230f8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7230fdu); f_0073ec50();
    /* 007230fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007230fe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007230ff: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x723104u); f_0073a888();
    /* 00723104: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723107: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 0072310a: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x72310fu); f_006dc358();
    /* 0072310f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723112: jne 0x72316c */ if (!fZ) goto L_0072316c;
L_00723114:; BB(0x00723114);
    /* 00723114: lea edx, [esp + 0x370] */ r_edx = (u32)(r_esp+0x370u);
    /* 0072311b: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00723120: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00723122: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00723123: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x723128u); f_0086b688();
    /* 00723128: push 0x185 */ { u32 v = 0x185u; r_esp -= 4; W32(r_esp, v); }
    /* 0072312d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x723132u); f_0079317c();
    /* 00723132: mov esi, eax */ r_esi = r_eax;
    /* 00723134: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723137: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00723139: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x72313eu); f_006936b4();
    /* 0072313e: mov ebx, eax */ r_ebx = r_eax;
    /* 00723140: call 0x78bf60 */ r_esp -= 4; W32(r_esp, 0x723145u); f_0078bf60();
    /* 00723145: lea edx, [esp + 0x370] */ r_edx = (u32)(r_esp+0x370u);
    /* 0072314c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072314d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072314e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072314f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00723150: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x723155u); f_00857e29();
    /* 00723155: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723158: lea eax, [esp + 0x370] */ r_eax = (u32)(r_esp+0x370u);
    /* 0072315f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00723161: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723162: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00723165: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x72316au); f_0073ae38();
    /* 0072316a: jmp 0x723182 */ goto L_00723182;
L_0072316c:; BB(0x0072316c);
    /* 0072316c: push 0x14f */ { u32 v = 0x14fu; r_esp -= 4; W32(r_esp, v); }
    /* 00723171: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x723176u); f_0079317c();
    /* 00723176: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00723177: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00723179: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072317a: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0072317d: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x723182u); f_0073ae38();
L_00723182:; BB(0x00723182);
    /* 00723182: mov dword ptr [ebp + 0x24], 8 */ W32((u32)(r_ebp+0x24u), 0x8u);
    /* 00723189: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072318f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00723190: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00723191: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00723192: ret  */ FN_RET(0x00722f61); r_esp += 4; return;
L_00723193:; BB(0x00723193);
    /* 00723193: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00723196: je 0x72321d */ if (fZ) goto L_0072321d;
L_0072319c:; BB(0x0072319c);
    /* 0072319c: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7231a1u); f_007365f4();
    /* 007231a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007231a3: jne 0x723214 */ if (!fZ) goto L_00723214;
L_007231a5:; BB(0x007231a5);
    /* 007231a5: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 007231a8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007231aa: je 0x7231b8 */ if (fZ) goto L_007231b8;
L_007231ac:; BB(0x007231ac);
    /* 007231ac: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7231b1u); f_007127b0();
    /* 007231b1: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_007231b8:; BB(0x007231b8);
    /* 007231b8: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 007231bb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007231bd: je 0x7231cb */ if (fZ) goto L_007231cb;
L_007231bf:; BB(0x007231bf);
    /* 007231bf: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7231c4u); f_007127b0();
    /* 007231c4: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_007231cb:; BB(0x007231cb);
    /* 007231cb: push 0xe9 */ { u32 v = 0xe9u; r_esp -= 4; W32(r_esp, v); }
    /* 007231d0: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7231d5u); f_0073ec50();
    /* 007231d5: mov ebx, eax */ r_ebx = r_eax;
    /* 007231d7: push 0xea */ { u32 v = 0xeau; r_esp -= 4; W32(r_esp, v); }
    /* 007231dc: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7231e1u); f_0073ec50();
    /* 007231e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007231e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007231e3: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x7231e8u); f_0073a888();
    /* 007231e8: push 0x14b */ { u32 v = 0x14bu; r_esp -= 4; W32(r_esp, v); }
    /* 007231ed: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 007231f0: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7231f5u); f_0079317c();
    /* 007231f5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007231f8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007231fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007231fb: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 007231fe: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x723203u); f_0073ae38();
    /* 00723203: mov dword ptr [ebp + 0x24], 4 */ W32((u32)(r_ebp+0x24u), 0x4u);
    /* 0072320a: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00723210: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00723211: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00723212: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00723213: ret  */ FN_RET(0x00722f61); r_esp += 4; return;
L_00723214:; BB(0x00723214);
    /* 00723214: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723217: je 0x7237e1 */ if (fZ) goto L_007237e1;
L_0072321d:; BB(0x0072321d);
    /* 0072321d: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00723220: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00723223: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 00723226: jne 0x723429 */ if (!fZ) goto L_00723429;
L_0072322c:; BB(0x0072322c);
    /* 0072322c: mov byte ptr [esp + 0x5e0], 0xc2 */ W8((u32)(r_esp+0x5e0u), 0xc2u);
    /* 00723234: mov byte ptr [esp + 0x5e1], 0x17 */ W8((u32)(r_esp+0x5e1u), 0x17u);
    /* 0072323c: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00723242: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x723247u); f_0068d5a8();
    /* 00723247: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00723248: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072324a: je 0x723379 */ if (fZ) goto L_00723379;
L_00723250:; BB(0x00723250);
    /* 00723250: mov edx, 0xa9c8c0 */ r_edx = 0xa9c8c0u;
    /* 00723255: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 00723257: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0072325a: mov dword ptr [esp + 0x5e4], ebx */ W32((u32)(r_esp+0x5e4u), r_ebx);
    /* 00723261: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00723264: mov dword ptr [esp + 0x5e8], esi */ W32((u32)(r_esp+0x5e8u), r_esi);
    /* 0072326b: mov dword ptr [esp + 0x5ec], ebx */ W32((u32)(r_esp+0x5ecu), r_ebx);
    /* 00723272: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 00723275: mov dword ptr [esp + 0x5f0], ebx */ W32((u32)(r_esp+0x5f0u), r_ebx);
    /* 0072327c: mov ebx, dword ptr [edx + 0x10] */ r_ebx = R32((u32)(r_edx+0x10u));
    /* 0072327f: mov dword ptr [esp + 0x5f4], ebx */ W32((u32)(r_esp+0x5f4u), r_ebx);
    /* 00723286: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 00723289: mov dword ptr [esp + 0x5f8], ebx */ W32((u32)(r_esp+0x5f8u), r_ebx);
    /* 00723290: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 00723293: mov dword ptr [esp + 0x5fc], ebx */ W32((u32)(r_esp+0x5fcu), r_ebx);
    /* 0072329a: mov ebx, dword ptr [edx + 0x1c] */ r_ebx = R32((u32)(r_edx+0x1cu));
    /* 0072329d: mov dword ptr [esp + 0x600], ebx */ W32((u32)(r_esp+0x600u), r_ebx);
    /* 007232a4: mov ebx, dword ptr [edx + 0x20] */ r_ebx = R32((u32)(r_edx+0x20u));
    /* 007232a7: mov dword ptr [esp + 0x604], ebx */ W32((u32)(r_esp+0x604u), r_ebx);
    /* 007232ae: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 007232b1: mov dword ptr [esp + 0x608], ebx */ W32((u32)(r_esp+0x608u), r_ebx);
    /* 007232b8: mov ebx, dword ptr [edx + 0x28] */ r_ebx = R32((u32)(r_edx+0x28u));
    /* 007232bb: mov dword ptr [esp + 0x60c], ebx */ W32((u32)(r_esp+0x60cu), r_ebx);
    /* 007232c2: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 007232c5: mov dword ptr [esp + 0x610], ebx */ W32((u32)(r_esp+0x610u), r_ebx);
    /* 007232cc: mov ebx, dword ptr [edx + 0x30] */ r_ebx = R32((u32)(r_edx+0x30u));
    /* 007232cf: mov dword ptr [esp + 0x614], ebx */ W32((u32)(r_esp+0x614u), r_ebx);
    /* 007232d6: mov ebx, dword ptr [edx + 0x34] */ r_ebx = R32((u32)(r_edx+0x34u));
    /* 007232d9: mov dword ptr [esp + 0x618], ebx */ W32((u32)(r_esp+0x618u), r_ebx);
    /* 007232e0: mov ebx, dword ptr [edx + 0x38] */ r_ebx = R32((u32)(r_edx+0x38u));
    /* 007232e3: mov dword ptr [esp + 0x61c], ebx */ W32((u32)(r_esp+0x61cu), r_ebx);
    /* 007232ea: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 007232ed: mov dword ptr [esp + 0x620], ebx */ W32((u32)(r_esp+0x620u), r_ebx);
    /* 007232f4: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 007232f7: mov dword ptr [esp + 0x624], ebx */ W32((u32)(r_esp+0x624u), r_ebx);
    /* 007232fe: mov ebx, dword ptr [edx + 0x44] */ r_ebx = R32((u32)(r_edx+0x44u));
    /* 00723301: mov dword ptr [esp + 0x628], ebx */ W32((u32)(r_esp+0x628u), r_ebx);
    /* 00723308: mov ebx, dword ptr [edx + 0x48] */ r_ebx = R32((u32)(r_edx+0x48u));
    /* 0072330b: mov dword ptr [esp + 0x62c], ebx */ W32((u32)(r_esp+0x62cu), r_ebx);
    /* 00723312: mov ebx, dword ptr [edx + 0x4c] */ r_ebx = R32((u32)(r_edx+0x4cu));
    /* 00723315: mov dword ptr [esp + 0x630], ebx */ W32((u32)(r_esp+0x630u), r_ebx);
    /* 0072331c: mov ebx, dword ptr [edx + 0x50] */ r_ebx = R32((u32)(r_edx+0x50u));
    /* 0072331f: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 00723322: mov dword ptr [esp + 0x634], ebx */ W32((u32)(r_esp+0x634u), r_ebx);
    /* 00723329: mov dword ptr [esp + 0x638], edx */ W32((u32)(r_esp+0x638u), r_edx);
    /* 00723330: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 00723336: mov dword ptr [esp + 0x5e8], 4 */ W32((u32)(r_esp+0x5e8u), 0x4u);
    /* 00723341: mov ecx, eax */ r_ecx = r_eax;
    /* 00723343: mov dword ptr [esp + 0x5e4], edx */ W32((u32)(r_esp+0x5e4u), r_edx);
    /* 0072334a: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x72334fu); f_006936b4();
    /* 0072334f: lea edx, [esp + 0x5ec] */ r_edx = (u32)(r_esp+0x5ecu);
    /* 00723356: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00723358: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723359: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072335a: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72335fu); f_00857dec();
    /* 0072335f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723362: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x723367u); f_0078bf78();
    /* 00723367: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00723368: lea ecx, [esp + 0x5e4] */ r_ecx = (u32)(r_esp+0x5e4u);
    /* 0072336f: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x723374u); f_00800464();
    /* 00723374: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x723379u); f_0078bf78();
L_00723379:; BB(0x00723379);
    /* 00723379: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0072337c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072337e: je 0x72338c */ if (fZ) goto L_0072338c;
L_00723380:; BB(0x00723380);
    /* 00723380: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x723385u); f_007127b0();
    /* 00723385: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_0072338c:; BB(0x0072338c);
    /* 0072338c: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0072338f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723391: je 0x72339f */ if (fZ) goto L_0072339f;
L_00723393:; BB(0x00723393);
    /* 00723393: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x723398u); f_007127b0();
    /* 00723398: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_0072339f:; BB(0x0072339f);
    /* 0072339f: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 007233a4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7233a9u); f_0073ec50();
    /* 007233a9: mov ebx, eax */ r_ebx = r_eax;
    /* 007233ab: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 007233b0: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7233b5u); f_0073ec50();
    /* 007233b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007233b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007233b7: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x7233bcu); f_0073a888();
    /* 007233bc: push 0x155 */ { u32 v = 0x155u; r_esp -= 4; W32(r_esp, v); }
    /* 007233c1: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 007233c4: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7233c9u); f_0079317c();
    /* 007233c9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007233cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007233ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007233cf: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 007233d2: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7233d7u); f_0073ae38();
    /* 007233d7: mov dword ptr [ebp + 0x24], 8 */ W32((u32)(r_ebp+0x24u), 0x8u);
    /* 007233de: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007233e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007233e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007233e6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007233e7: ret  */ FN_RET(0x00722f61); r_esp += 4; return;
L_00723429:; BB(0x00723429);
    /* 00723429: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072342f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00723430: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00723431: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00723432: ret  */ FN_RET(0x00722f61); r_esp += 4; return;
L_007237e1:; BB(0x007237e1);
    /* 007237e1: mov byte ptr [esp + 0x584], 0xc2 */ W8((u32)(r_esp+0x584u), 0xc2u);
    /* 007237e9: mov byte ptr [esp + 0x585], 0x17 */ W8((u32)(r_esp+0x585u), 0x17u);
    /* 007237f1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007237f7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7237fcu); f_0068d5a8();
    /* 007237fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007237fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007237ff: je 0x72392e */ if (fZ) goto L_0072392e;
L_00723805:; BB(0x00723805);
    /* 00723805: mov edx, 0xa9c8c0 */ r_edx = 0xa9c8c0u;
    /* 0072380a: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0072380c: mov dword ptr [esp + 0x588], esi */ W32((u32)(r_esp+0x588u), r_esi);
    /* 00723813: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00723816: mov dword ptr [esp + 0x58c], esi */ W32((u32)(r_esp+0x58cu), r_esi);
    /* 0072381d: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 00723820: mov dword ptr [esp + 0x590], esi */ W32((u32)(r_esp+0x590u), r_esi);
    /* 00723827: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0072382a: mov dword ptr [esp + 0x594], esi */ W32((u32)(r_esp+0x594u), r_esi);
    /* 00723831: mov esi, dword ptr [edx + 0x10] */ r_esi = R32((u32)(r_edx+0x10u));
    /* 00723834: mov dword ptr [esp + 0x598], esi */ W32((u32)(r_esp+0x598u), r_esi);
    /* 0072383b: mov esi, dword ptr [edx + 0x14] */ r_esi = R32((u32)(r_edx+0x14u));
    /* 0072383e: mov dword ptr [esp + 0x59c], esi */ W32((u32)(r_esp+0x59cu), r_esi);
    /* 00723845: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 00723848: mov dword ptr [esp + 0x5a0], esi */ W32((u32)(r_esp+0x5a0u), r_esi);
    /* 0072384f: mov esi, dword ptr [edx + 0x1c] */ r_esi = R32((u32)(r_edx+0x1cu));
    /* 00723852: mov dword ptr [esp + 0x5a4], esi */ W32((u32)(r_esp+0x5a4u), r_esi);
    /* 00723859: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 0072385c: mov dword ptr [esp + 0x5a8], esi */ W32((u32)(r_esp+0x5a8u), r_esi);
    /* 00723863: mov esi, dword ptr [edx + 0x24] */ r_esi = R32((u32)(r_edx+0x24u));
    /* 00723866: mov dword ptr [esp + 0x5ac], esi */ W32((u32)(r_esp+0x5acu), r_esi);
    /* 0072386d: mov esi, dword ptr [edx + 0x28] */ r_esi = R32((u32)(r_edx+0x28u));
    /* 00723870: mov dword ptr [esp + 0x5b0], esi */ W32((u32)(r_esp+0x5b0u), r_esi);
    /* 00723877: mov esi, dword ptr [edx + 0x2c] */ r_esi = R32((u32)(r_edx+0x2cu));
    /* 0072387a: mov dword ptr [esp + 0x5b4], esi */ W32((u32)(r_esp+0x5b4u), r_esi);
    /* 00723881: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 00723884: mov dword ptr [esp + 0x5b8], esi */ W32((u32)(r_esp+0x5b8u), r_esi);
    /* 0072388b: mov esi, dword ptr [edx + 0x34] */ r_esi = R32((u32)(r_edx+0x34u));
    /* 0072388e: mov dword ptr [esp + 0x5bc], esi */ W32((u32)(r_esp+0x5bcu), r_esi);
    /* 00723895: mov esi, dword ptr [edx + 0x38] */ r_esi = R32((u32)(r_edx+0x38u));
    /* 00723898: mov dword ptr [esp + 0x5c0], esi */ W32((u32)(r_esp+0x5c0u), r_esi);
    /* 0072389f: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 007238a2: mov dword ptr [esp + 0x5c4], esi */ W32((u32)(r_esp+0x5c4u), r_esi);
    /* 007238a9: mov esi, dword ptr [edx + 0x40] */ r_esi = R32((u32)(r_edx+0x40u));
    /* 007238ac: mov dword ptr [esp + 0x5c8], esi */ W32((u32)(r_esp+0x5c8u), r_esi);
    /* 007238b3: mov esi, dword ptr [edx + 0x44] */ r_esi = R32((u32)(r_edx+0x44u));
    /* 007238b6: mov dword ptr [esp + 0x5cc], esi */ W32((u32)(r_esp+0x5ccu), r_esi);
    /* 007238bd: mov esi, dword ptr [edx + 0x48] */ r_esi = R32((u32)(r_edx+0x48u));
    /* 007238c0: mov dword ptr [esp + 0x5d0], esi */ W32((u32)(r_esp+0x5d0u), r_esi);
    /* 007238c7: mov esi, dword ptr [edx + 0x4c] */ r_esi = R32((u32)(r_edx+0x4cu));
    /* 007238ca: mov dword ptr [esp + 0x5d4], esi */ W32((u32)(r_esp+0x5d4u), r_esi);
    /* 007238d1: mov esi, dword ptr [edx + 0x50] */ r_esi = R32((u32)(r_edx+0x50u));
    /* 007238d4: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 007238d7: mov dword ptr [esp + 0x5d8], esi */ W32((u32)(r_esp+0x5d8u), r_esi);
    /* 007238de: mov dword ptr [esp + 0x5dc], edx */ W32((u32)(r_esp+0x5dcu), r_edx);
    /* 007238e5: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 007238eb: mov dword ptr [esp + 0x58c], 3 */ W32((u32)(r_esp+0x58cu), 0x3u);
    /* 007238f6: mov ecx, eax */ r_ecx = r_eax;
    /* 007238f8: mov dword ptr [esp + 0x588], edx */ W32((u32)(r_esp+0x588u), r_edx);
    /* 007238ff: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x723904u); f_006936b4();
    /* 00723904: lea edx, [esp + 0x590] */ r_edx = (u32)(r_esp+0x590u);
    /* 0072390b: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0072390d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072390e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072390f: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x723914u); f_00857dec();
    /* 00723914: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723917: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x72391cu); f_0078bf78();
    /* 0072391c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072391d: lea ecx, [esp + 0x588] */ r_ecx = (u32)(r_esp+0x588u);
    /* 00723924: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x723929u); f_00800464();
    /* 00723929: call 0x78bf78 */ r_esp -= 4; W32(r_esp, 0x72392eu); f_0078bf78();
L_0072392e:; BB(0x0072392e);
    /* 0072392e: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00723931: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723933: je 0x723941 */ if (fZ) goto L_00723941;
L_00723935:; BB(0x00723935);
    /* 00723935: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x72393au); f_007127b0();
    /* 0072393a: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_00723941:; BB(0x00723941);
    /* 00723941: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00723944: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00723946: je 0x723954 */ if (fZ) goto L_00723954;
L_00723948:; BB(0x00723948);
    /* 00723948: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x72394du); f_007127b0();
    /* 0072394d: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_00723954:; BB(0x00723954);
    /* 00723954: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00723959: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x72395eu); f_0073ec50();
    /* 0072395e: mov esi, eax */ r_esi = r_eax;
    /* 00723960: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00723965: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x72396au); f_0073ec50();
    /* 0072396a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072396b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072396c: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x723971u); f_0073a888();
    /* 00723971: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00723974: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00723977: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x72397cu); f_006dc358();
    /* 0072397c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072397f: jne 0x7239d9 */ if (!fZ) goto L_007239d9;
L_00723981:; BB(0x00723981);
    /* 00723981: lea edx, [esp + 0x370] */ r_edx = (u32)(r_esp+0x370u);
    /* 00723988: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0072398d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072398f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00723990: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x723995u); f_0086b688();
    /* 00723995: push 0x185 */ { u32 v = 0x185u; r_esp -= 4; W32(r_esp, v); }
    /* 0072399a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x72399fu); f_0079317c();
    /* 0072399f: mov esi, eax */ r_esi = r_eax;
    /* 007239a1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007239a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007239a6: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x7239abu); f_006936b4();
    /* 007239ab: mov ebx, eax */ r_ebx = r_eax;
    /* 007239ad: call 0x78bf60 */ r_esp -= 4; W32(r_esp, 0x7239b2u); f_0078bf60();
    /* 007239b2: lea edx, [esp + 0x370] */ r_edx = (u32)(r_esp+0x370u);
    /* 007239b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007239ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007239bb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007239bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007239bd: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7239c2u); f_00857e29();
    /* 007239c2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007239c5: lea eax, [esp + 0x370] */ r_eax = (u32)(r_esp+0x370u);
    /* 007239cc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007239ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007239cf: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 007239d2: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7239d7u); f_0073ae38();
    /* 007239d7: jmp 0x7239ef */ goto L_007239ef;
L_007239d9:; BB(0x007239d9);
    /* 007239d9: push 0x14f */ { u32 v = 0x14fu; r_esp -= 4; W32(r_esp, v); }
    /* 007239de: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7239e3u); f_0079317c();
    /* 007239e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007239e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007239e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007239e7: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 007239ea: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7239efu); f_0073ae38();
L_007239ef:; BB(0x007239ef);
    /* 007239ef: mov dword ptr [ebp + 0x24], 8 */ W32((u32)(r_ebp+0x24u), 0x8u);
    /* 007239f6: add esp, 0x63c */ {  u32 a = r_esp; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007239fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007239fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007239fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007239ff: ret  */ FN_RET(0x00722f61); r_esp += 4; return;
}

