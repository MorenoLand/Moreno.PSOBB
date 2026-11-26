#include "protos.h"

void f_00587038(void) /* sub_587038 */
{
    FN_ENTER(0x00587038);
    /* 00587038: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0058703c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00587040: mov dword ptr [ecx + 0x3a4], eax */ W32((u32)(r_ecx+0x3a4u), r_eax);
    /* 00587046: mov dword ptr [ecx + 0x3a8], edx */ W32((u32)(r_ecx+0x3a8u), r_edx);
    /* 0058704c: ret 8 */ FN_RET(0x00587038); r_esp += 12; return;
}

void f_00587050(void) /* sub_587050 */
{
    FN_ENTER(0x00587050);
    /* 00587050: mov eax, dword ptr [ecx + 0x3a4] */ r_eax = R32((u32)(r_ecx+0x3a4u));
    /* 00587056: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00587059: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0058705c: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0058705f: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 00587062: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00587065: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 00587068: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 0058706b: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 0058706e: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 00587074: cmp eax, dword ptr [ecx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058707a: je 0x587082 */ if (fZ) goto L_00587082;
L_0058707c:; BB(0x0058707c);
    /* 0058707c: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
L_00587082:; BB(0x00587082);
    /* 00587082: mov eax, dword ptr [0x9bf588] */ r_eax = R32((u32)(0x9bf588u));
    /* 00587087: mov dword ptr [ecx + 0x380], 1 */ W32((u32)(r_ecx+0x380u), 0x1u);
    /* 00587091: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00587093: je 0x587097 */ if (fZ) goto L_00587097;
L_00587095:; BB(0x00587095);
    /* 00587095: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587097u); call_ind(t); }
L_00587097:; BB(0x00587097);
    /* 00587097: ret  */ FN_RET(0x00587050); r_esp += 4; return;
}

void f_00587098(void) /* sub_587098 */
{
    FN_ENTER(0x00587098);
    /* 00587098: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00587099: mov edi, ecx */ r_edi = r_ecx;
    /* 0058709b: mov ecx, edi */ r_ecx = r_edi;
    /* 0058709d: call 0x5870d0 */ r_esp -= 4; W32(r_esp, 0x5870a2u); f_005870d0();
    /* 005870a2: mov eax, dword ptr [edi + 0x380] */ r_eax = R32((u32)(r_edi+0x380u));
    /* 005870a8: cmp eax, dword ptr [edi + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005870ae: je 0x5870b6 */ if (fZ) goto L_005870b6;
L_005870b0:; BB(0x005870b0);
    /* 005870b0: mov dword ptr [edi + 0x37c], eax */ W32((u32)(r_edi+0x37cu), r_eax);
L_005870b6:; BB(0x005870b6);
    /* 005870b6: mov eax, dword ptr [0x9bf598] */ r_eax = R32((u32)(0x9bf598u));
    /* 005870bb: mov dword ptr [edi + 0x380], 3 */ W32((u32)(r_edi+0x380u), 0x3u);
    /* 005870c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005870c7: je 0x5870cd */ if (fZ) goto L_005870cd;
L_005870c9:; BB(0x005870c9);
    /* 005870c9: mov ecx, edi */ r_ecx = r_edi;
    /* 005870cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5870cdu); call_ind(t); }
L_005870cd:; BB(0x005870cd);
    /* 005870cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005870ce: ret  */ FN_RET(0x00587098); r_esp += 4; return;
}

void f_005870d0(void) /* sub_5870D0 */
{
    FN_ENTER(0x005870d0);
    /* 005870d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005870d1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005870d4: mov esi, ecx */ r_esi = r_ecx;
    /* 005870d6: mov edx, dword ptr [esi + 0x388] */ r_edx = R32((u32)(r_esi+0x388u));
    /* 005870dc: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005870df: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005870e1: fld dword ptr [eax + edx*8 + 0x9282cc] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x9282ccu)));
    /* 005870e8: fld dword ptr [eax + edx*8 + 0x9282d4] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x9282d4u)));
    /* 005870ef: mov eax, dword ptr [esi + 0x3a4] */ r_eax = R32((u32)(r_esi+0x3a4u));
    /* 005870f5: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005870f8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005870fa: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005870fe: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00587102: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x587107u); f_0082dcbc();
    /* 00587107: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0058710a: mov eax, dword ptr [esi + 0x3a4] */ r_eax = R32((u32)(r_esi+0x3a4u));
    /* 00587110: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00587113: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x587118u); f_0082ddd8();
    /* 00587118: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0058711c: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00587120: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00587122: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00587124: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00587127: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00587129: mov ecx, dword ptr [esi + 0x3a4] */ r_ecx = R32((u32)(r_esi+0x3a4u));
    /* 0058712f: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00587133: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00587137: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00587139: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 0058713c: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0058713e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00587140: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00587142: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00587145: mov dword ptr [esi + 0x394], eax */ W32((u32)(r_esi+0x394u), r_eax);
    /* 0058714b: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0058714e: mov eax, dword ptr [esi + 0x388] */ r_eax = R32((u32)(r_esi+0x388u));
    /* 00587154: mov dword ptr [esi + 0x398], edx */ W32((u32)(r_esi+0x398u), r_edx);
    /* 0058715a: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 0058715d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0058715f: fstp dword ptr [esi + 0x394] */ W_F32((u32)(r_esi+0x394u), ST(0)); FPOP();
    /* 00587165: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00587167: fchs  */ ST(0) = -ST(0);
    /* 00587169: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0058716b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058716d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0058716f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00587171: fstp dword ptr [esi + 0x39c] */ W_F32((u32)(r_esi+0x39cu), ST(0)); FPOP();
    /* 00587177: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0058717a: add edx, dword ptr [eax*4 + 0x9282c4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0x9282c4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00587181: mov dword ptr [esi + 0x3a0], edx */ W32((u32)(r_esi+0x3a0u), r_edx);
    /* 00587187: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058718a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058718b: ret  */ FN_RET(0x005870d0); r_esp += 4; return;
}

void f_0058718c(void) /* sub_58718C */
{
    FN_ENTER(0x0058718c);
    /* 0058718c: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 00587192: cmp eax, dword ptr [ecx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587198: je 0x5871a0 */ if (fZ) goto L_005871a0;
L_0058719a:; BB(0x0058719a);
    /* 0058719a: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
L_005871a0:; BB(0x005871a0);
    /* 005871a0: mov eax, dword ptr [0x9bf590] */ r_eax = R32((u32)(0x9bf590u));
    /* 005871a5: mov dword ptr [ecx + 0x380], 2 */ W32((u32)(r_ecx+0x380u), 0x2u);
    /* 005871af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005871b1: je 0x5871b5 */ if (fZ) goto L_005871b5;
L_005871b3:; BB(0x005871b3);
    /* 005871b3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5871b5u); call_ind(t); }
L_005871b5:; BB(0x005871b5);
    /* 005871b5: ret  */ FN_RET(0x0058718c); r_esp += 4; return;
}

void f_005871b8(void) /* sub_5871B8 */
{
    FN_ENTER(0x005871b8);
    /* 005871b8: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 005871be: cmp eax, dword ptr [ecx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005871c4: je 0x5871cc */ if (fZ) goto L_005871cc;
L_005871c6:; BB(0x005871c6);
    /* 005871c6: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
L_005871cc:; BB(0x005871cc);
    /* 005871cc: mov eax, dword ptr [0x9bf5a8] */ r_eax = R32((u32)(0x9bf5a8u));
    /* 005871d1: mov dword ptr [ecx + 0x380], 5 */ W32((u32)(r_ecx+0x380u), 0x5u);
    /* 005871db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005871dd: je 0x5871e1 */ if (fZ) goto L_005871e1;
L_005871df:; BB(0x005871df);
    /* 005871df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5871e1u); call_ind(t); }
L_005871e1:; BB(0x005871e1);
    /* 005871e1: ret  */ FN_RET(0x005871b8); r_esp += 4; return;
}

void f_005871e4(void) /* sub_5871E4 */
{
    FN_ENTER(0x005871e4);
    /* 005871e4: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 005871ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005871ec: je 0x587211 */ if (fZ) goto L_00587211;
L_005871ee:; BB(0x005871ee);
    /* 005871ee: cmp eax, dword ptr [ecx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005871f4: je 0x5871fc */ if (fZ) goto L_005871fc;
L_005871f6:; BB(0x005871f6);
    /* 005871f6: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
L_005871fc:; BB(0x005871fc);
    /* 005871fc: mov eax, dword ptr [0x9bf580] */ r_eax = R32((u32)(0x9bf580u));
    /* 00587201: mov dword ptr [ecx + 0x380], 0 */ W32((u32)(r_ecx+0x380u), 0x0u);
    /* 0058720b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058720d: je 0x587211 */ if (fZ) goto L_00587211;
L_0058720f:; BB(0x0058720f);
    /* 0058720f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587211u); call_ind(t); }
L_00587211:; BB(0x00587211);
    /* 00587211: ret  */ FN_RET(0x005871e4); r_esp += 4; return;
}

void f_00587214(void) /* sub_587214 */
{
    FN_ENTER(0x00587214);
    /* 00587214: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00587216: call dword ptr [eax + 0x104] */ { u32 t = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, 0x58721cu); call_ind(t); }
    /* 0058721c: ret  */ FN_RET(0x00587214); r_esp += 4; return;
}

void f_00587220(void) /* sub_587220 */
{
    FN_ENTER(0x00587220);
    /* 00587220: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00587223: mov ecx, dword ptr [0x9282f8] */ r_ecx = R32((u32)(0x9282f8u));
    /* 00587229: movzx eax, word ptr [0x9282fc] */ r_eax = (u32)R16((u32)(0x9282fcu));
    /* 00587230: mov edx, dword ptr [0xa742a4] */ r_edx = R32((u32)(0xa742a4u));
    /* 00587236: fld dword ptr [0x9283d4] */ FPUSH(R_F32((u32)(0x9283d4u)));
    /* 0058723c: fmul dword ptr [0xa74344] */ ST(0) = ST(0) * R_F32((u32)(0xa74344u));
    /* 00587242: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00587246: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0058724a: mov ecx, dword ptr [0x9282e8] */ r_ecx = R32((u32)(0x9282e8u));
    /* 00587250: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00587258: mov word ptr [esp + 0x20], ax */ W16((u32)(r_esp+0x20u), (u16)r_eax);
    /* 0058725d: movzx eax, word ptr [0x9282fe] */ r_eax = (u32)R16((u32)(0x9282feu));
    /* 00587264: mov word ptr [esp + 0x22], ax */ W16((u32)(r_esp+0x22u), (u16)r_eax);
    /* 00587269: movzx eax, word ptr [0x928300] */ r_eax = (u32)R16((u32)(0x928300u));
    /* 00587270: mov word ptr [esp + 0x24], ax */ W16((u32)(r_esp+0x24u), (u16)r_eax);
    /* 00587275: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 0058727b: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00587281: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00587285: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 00587289: movzx ecx, word ptr [0x9282ec] */ r_ecx = (u32)R16((u32)(0x9282ecu));
    /* 00587290: mov word ptr [esp + 0x30], cx */ W16((u32)(r_esp+0x30u), (u16)r_ecx);
    /* 00587295: movzx ecx, word ptr [0x9282ee] */ r_ecx = (u32)R16((u32)(0x9282eeu));
    /* 0058729c: mov word ptr [esp + 0x32], cx */ W16((u32)(r_esp+0x32u), (u16)r_ecx);
    /* 005872a1: movzx ecx, word ptr [0x9282f0] */ r_ecx = (u32)R16((u32)(0x9282f0u));
    /* 005872a8: mov word ptr [esp + 0x34], cx */ W16((u32)(r_esp+0x34u), (u16)r_ecx);
    /* 005872ad: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005872b1: mov eax, 0x24 */ r_eax = 0x24u;
    /* 005872b6: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 005872ba: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005872bd: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005872c1: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005872c4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005872c8: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 005872cc: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005872d0: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5872d5u); f_00608470();
    /* 005872d5: mov eax, dword ptr [0xa742a4] */ r_eax = R32((u32)(0xa742a4u));
    /* 005872da: fld dword ptr [0x9283d4] */ FPUSH(R_F32((u32)(0x9283d4u)));
    /* 005872e0: fmul dword ptr [0xa74344] */ ST(0) = ST(0) * R_F32((u32)(0xa74344u));
    /* 005872e6: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 005872ec: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 005872ef: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005872f2: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005872f6: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 005872fa: mov edx, 0x25 */ r_edx = 0x25u;
    /* 005872ff: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00587307: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 0058730b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0058730f: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 00587313: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00587317: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x58731cu); f_00608470();
    /* 0058731c: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058731f: ret  */ FN_RET(0x00587220); r_esp += 4; return;
}

void f_00587277(void)
{
    FN_ENTER(0x00587277);
    /* 00587277: xor byte ptr [eax + eax], al */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 0058727a: add byte ptr [ebx + 0x42c92], cl */ { u32 ad = (u32)(r_ebx+0x42c92u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00587280: add byte ptr [ecx - 0x76e7dbbc], cl */ { u32 ad = (u32)(r_ecx+0x89182444u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00587286: dec esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00587287: and al, 0x2c */ {  u32 a = (u8)r_eax; u32 b = 0x2cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00587289: movzx ecx, word ptr [0x9282ec] */ r_ecx = (u32)R16((u32)(0x9282ecu));
    /* 00587290: mov word ptr [esp + 0x30], cx */ W16((u32)(r_esp+0x30u), (u16)r_ecx);
    /* 00587295: movzx ecx, word ptr [0x9282ee] */ r_ecx = (u32)R16((u32)(0x9282eeu));
    /* 0058729c: mov word ptr [esp + 0x32], cx */ W16((u32)(r_esp+0x32u), (u16)r_ecx);
    /* 005872a1: movzx ecx, word ptr [0x9282f0] */ r_ecx = (u32)R16((u32)(0x9282f0u));
    /* 005872a8: mov word ptr [esp + 0x34], cx */ W16((u32)(r_esp+0x34u), (u16)r_ecx);
    /* 005872ad: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005872b1: mov eax, 0x24 */ r_eax = 0x24u;
    /* 005872b6: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 005872ba: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005872bd: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005872c1: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005872c4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005872c8: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 005872cc: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005872d0: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5872d5u); f_00608470();
    /* 005872d5: mov eax, dword ptr [0xa742a4] */ r_eax = R32((u32)(0xa742a4u));
    /* 005872da: fld dword ptr [0x9283d4] */ FPUSH(R_F32((u32)(0x9283d4u)));
    /* 005872e0: fmul dword ptr [0xa74344] */ ST(0) = ST(0) * R_F32((u32)(0xa74344u));
    /* 005872e6: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 005872ec: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 005872ef: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005872f2: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005872f6: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 005872fa: mov edx, 0x25 */ r_edx = 0x25u;
    /* 005872ff: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00587307: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 0058730b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0058730f: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 00587313: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00587317: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x58731cu); f_00608470();
    /* 0058731c: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058731f: ret  */ FN_RET(0x00587277); r_esp += 4; return;
}

void f_00587320(void)
{
    FN_ENTER(0x00587320);
    /* 00587320: fld dword ptr [0x9283b8] */ FPUSH(R_F32((u32)(0x9283b8u)));
    /* 00587326: fld dword ptr [0x9283b4] */ FPUSH(R_F32((u32)(0x9283b4u)));
    /* 0058732c: mov dword ptr [0xa74348], 0x3f800000 */ W32((u32)(0xa74348u), 0x3f800000u);
    /* 00587336: mov dword ptr [0xa7434c], 0x41000000 */ W32((u32)(0xa7434cu), 0x41000000u);
    /* 00587340: mov dword ptr [0xa74350], 0x3fc00000 */ W32((u32)(0xa74350u), 0x3fc00000u);
    /* 0058734a: mov dword ptr [0xa74324], 0x43fa0000 */ W32((u32)(0xa74324u), 0x43fa0000u);
    /* 00587354: mov dword ptr [0xa74344], 0x41700000 */ W32((u32)(0xa74344u), 0x41700000u);
    /* 0058735e: fld dword ptr [0xa74344] */ FPUSH(R_F32((u32)(0xa74344u)));
    /* 00587364: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00587366: fstp dword ptr [0x9bf618] */ W_F32((u32)(0x9bf618u), ST(0)); FPOP();
    /* 0058736c: mov dword ptr [0xa74354], 0x41c80000 */ W32((u32)(0xa74354u), 0x41c80000u);
    /* 00587376: fmul dword ptr [0xa74354] */ ST(0) = ST(0) * R_F32((u32)(0xa74354u));
    /* 0058737c: fchs  */ ST(0) = -ST(0);
    /* 0058737e: fdiv dword ptr [0x9283b0] */ ST(0) = ST(0) / R_F32((u32)(0x9283b0u));
    /* 00587384: mov dword ptr [0xa74358], 0x42040000 */ W32((u32)(0xa74358u), 0x42040000u);
    /* 0058738e: fld dword ptr [0xa74358] */ FPUSH(R_F32((u32)(0xa74358u)));
    /* 00587394: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00587396: fstp dword ptr [0xa74340] */ W_F32((u32)(0xa74340u), ST(0)); FPOP();
    /* 0058739c: fstp dword ptr [0x9bf610] */ W_F32((u32)(0x9bf610u), ST(0)); FPOP();
    /* 005873a2: ret  */ FN_RET(0x00587320); r_esp += 4; return;
}

void f_005873a4(void) /* sub_5873A4 */
{
    FN_ENTER(0x005873a4);
    /* 005873a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005873a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005873a7: mov edx, dword ptr [ebx + 0x384] */ r_edx = R32((u32)(r_ebx+0x384u));
    /* 005873ad: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005873b0: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005873b3: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005873b6: push dword ptr [ebx + 0x3dc] */ { u32 v = R32((u32)(r_ebx+0x3dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005873bc: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005873bf: mov dword ptr [ebx + 0x3b8], 0 */ W32((u32)(r_ebx+0x3b8u), 0x0u);
    /* 005873c9: mov eax, 1 */ r_eax = 0x1u;
    /* 005873ce: mov dword ptr [ebx + 0x38c], eax */ W32((u32)(r_ebx+0x38cu), r_eax);
    /* 005873d4: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 005873da: mov dword ptr [ebx + 0x3bc], 0x3c */ W32((u32)(r_ebx+0x3bcu), 0x3cu);
    /* 005873e4: mov dword ptr [ebx + 0x3cc], eax */ W32((u32)(r_ebx+0x3ccu), r_eax);
    /* 005873ea: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5873efu); f_007a9018();
    /* 005873ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005873f2: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005873f7: jge 0x58741c */ if ((fS==fO)) goto L_0058741c;
L_005873f9:; BB(0x005873f9);
    /* 005873f9: push dword ptr [ebx + 0x3dc] */ { u32 v = R32((u32)(r_ebx+0x3dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005873ff: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00587402: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x587407u); f_007a900c();
    /* 00587407: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058740a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0058740c: jl 0x587439 */ if ((fS!=fO)) goto L_00587439;
L_0058740e:; BB(0x0058740e);
    /* 0058740e: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 00587414: add eax, 0xffffe000 */ {  u32 a = r_eax; u32 b = 0xffffe000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00587419: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
L_0058741c:; BB(0x0058741c);
    /* 0058741c: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 00587422: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00587425: mov dword ptr [ebx + 0xb0], eax */ W32((u32)(r_ebx+0xb0u), r_eax);
    /* 0058742b: mov edx, 2 */ r_edx = 0x2u;
    /* 00587430: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 00587437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00587438: ret  */ FN_RET(0x005873a4); r_esp += 4; return;
L_00587439:; BB(0x00587439);
    /* 00587439: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 0058743f: add eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00587444: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00587447: jmp 0x58741c */ goto L_0058741c;
}

void f_0058744c(void) /* sub_58744C */
{
    FN_ENTER(0x0058744c);
    /* 0058744c: mov eax, dword ptr [ecx + 0x388] */ r_eax = R32((u32)(r_ecx+0x388u));
    /* 00587452: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00587455: je 0x5874a4 */ if (fZ) goto L_005874a4;
L_00587457:; BB(0x00587457);
    /* 00587457: mov edx, dword ptr [ecx + 0x384] */ r_edx = R32((u32)(r_ecx+0x384u));
    /* 0058745d: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00587460: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00587463: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00587466: mov eax, 1 */ r_eax = 0x1u;
    /* 0058746b: mov dword ptr [ecx + 0x38c], eax */ W32((u32)(r_ecx+0x38cu), r_eax);
    /* 00587471: mov dword ptr [ecx + 0x3b8], 0 */ W32((u32)(r_ecx+0x3b8u), 0x0u);
    /* 0058747b: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 00587481: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 00587487: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058748a: mov dword ptr [ecx + 0x3bc], 6 */ W32((u32)(r_ecx+0x3bcu), 0x6u);
    /* 00587494: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 0058749a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058749c: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005874a3: ret  */ FN_RET(0x0058744c); r_esp += 4; return;
L_005874a4:; BB(0x005874a4);
    /* 005874a4: ret  */ FN_RET(0x0058744c); r_esp += 4; return;
}

void f_005874a8(void) /* sub_5874A8 */
{
    FN_ENTER(0x005874a8);
    /* 005874a8: mov eax, dword ptr [ecx + 0x388] */ r_eax = R32((u32)(r_ecx+0x388u));
    /* 005874ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005874b0: jne 0x5874b3 */ if (!fZ) goto L_005874b3;
L_005874b2:; BB(0x005874b2);
    /* 005874b2: ret  */ FN_RET(0x005874a8); r_esp += 4; return;
L_005874b3:; BB(0x005874b3);
    /* 005874b3: mov edx, dword ptr [ecx + 0x384] */ r_edx = R32((u32)(r_ecx+0x384u));
    /* 005874b9: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005874bc: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005874bf: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005874c2: mov eax, 1 */ r_eax = 0x1u;
    /* 005874c7: mov dword ptr [ecx + 0x38c], eax */ W32((u32)(r_ecx+0x38cu), r_eax);
    /* 005874cd: mov dword ptr [ecx + 0x3b8], 0 */ W32((u32)(r_ecx+0x3b8u), 0x0u);
    /* 005874d7: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 005874dd: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 005874e3: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005874e6: mov dword ptr [ecx + 0x3bc], 0xc */ W32((u32)(r_ecx+0x3bcu), 0xcu);
    /* 005874f0: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 005874f6: mov eax, 3 */ r_eax = 0x3u;
    /* 005874fb: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00587502: ret  */ FN_RET(0x005874a8); r_esp += 4; return;
}

void f_00587504(void) /* sub_587504 */
{
    FN_ENTER(0x00587504);
    /* 00587504: mov eax, dword ptr [ecx + 0x388] */ r_eax = R32((u32)(r_ecx+0x388u));
    /* 0058750a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058750c: jne 0x58750f */ if (!fZ) goto L_0058750f;
L_0058750e:; BB(0x0058750e);
    /* 0058750e: ret  */ FN_RET(0x00587504); r_esp += 4; return;
L_0058750f:; BB(0x0058750f);
    /* 0058750f: mov edx, dword ptr [ecx + 0x384] */ r_edx = R32((u32)(r_ecx+0x384u));
    /* 00587515: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00587518: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058751b: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0058751e: mov eax, 1 */ r_eax = 0x1u;
    /* 00587523: mov dword ptr [ecx + 0x38c], eax */ W32((u32)(r_ecx+0x38cu), r_eax);
    /* 00587529: mov dword ptr [ecx + 0x3b8], 0 */ W32((u32)(r_ecx+0x3b8u), 0x0u);
    /* 00587533: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 00587539: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 0058753f: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00587542: mov dword ptr [ecx + 0x3bc], 0x96 */ W32((u32)(r_ecx+0x3bcu), 0x96u);
    /* 0058754c: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 00587552: mov eax, 2 */ r_eax = 0x2u;
    /* 00587557: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0058755e: ret  */ FN_RET(0x00587504); r_esp += 4; return;
}

void f_00587560(void) /* sub_587560 */
{
    FN_ENTER(0x00587560);
    /* 00587560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00587561: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00587563: mov eax, dword ptr [ebp + 0x388] */ r_eax = R32((u32)(r_ebp+0x388u));
    /* 00587569: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0058756c: je 0x5875e4 */ if (fZ) goto L_005875e4;
L_0058756e:; BB(0x0058756e);
    /* 0058756e: push 0x11a */ { u32 v = 0x11au; r_esp -= 4; W32(r_esp, v); }
    /* 00587573: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 00587579: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0058757c: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058757f: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00587582: mov dword ptr [ebp + 0x3b8], 0 */ W32((u32)(r_ebp+0x3b8u), 0x0u);
    /* 0058758c: mov eax, 1 */ r_eax = 0x1u;
    /* 00587591: mov dword ptr [ebp + 0x38c], eax */ W32((u32)(r_ebp+0x38cu), r_eax);
    /* 00587597: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
    /* 0058759d: mov dword ptr [ebp + 0x3bc], 0x96 */ W32((u32)(r_ebp+0x3bcu), 0x96u);
    /* 005875a7: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 005875ad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005875af: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5875b4u); f_007879b8();
    /* 005875b4: mov ecx, eax */ r_ecx = r_eax;
    /* 005875b6: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 005875b9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005875bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005875bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005875bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005875be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005875bf: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5875c4u); f_00814298();
    /* 005875c4: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 005875ca: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005875cd: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 005875d3: mov edx, 2 */ r_edx = 0x2u;
    /* 005875d8: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 005875df: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005875e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005875e3: ret  */ FN_RET(0x00587560); r_esp += 4; return;
L_005875e4:; BB(0x005875e4);
    /* 005875e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005875e5: ret  */ FN_RET(0x00587560); r_esp += 4; return;
}

void f_005875e8(void) /* sub_5875E8 */
{
    FN_ENTER(0x005875e8);
    /* 005875e8: mov edx, dword ptr [ecx + 0x384] */ r_edx = R32((u32)(r_ecx+0x384u));
    /* 005875ee: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005875f1: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005875f4: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005875f7: mov dword ptr [ecx + 0x3b8], 0 */ W32((u32)(r_ecx+0x3b8u), 0x0u);
    /* 00587601: mov eax, 1 */ r_eax = 0x1u;
    /* 00587606: mov dword ptr [ecx + 0x38c], eax */ W32((u32)(r_ecx+0x38cu), r_eax);
    /* 0058760c: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 00587612: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 00587618: mov dword ptr [ecx + 0x3bc], 0xc */ W32((u32)(r_ecx+0x3bcu), 0xcu);
    /* 00587622: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00587625: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 0058762b: mov eax, 3 */ r_eax = 0x3u;
    /* 00587630: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00587637: ret  */ FN_RET(0x005875e8); r_esp += 4; return;
}

void f_00587638(void) /* sub_587638 */
{
    FN_ENTER(0x00587638);
    /* 00587638: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00587639: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058763c: mov esi, ecx */ r_esi = r_ecx;
    /* 0058763e: mov edx, dword ptr [esi + 0x384] */ r_edx = R32((u32)(r_esi+0x384u));
    /* 00587644: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00587647: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058764a: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0058764d: mov ecx, esi */ r_ecx = r_esi;
    /* 0058764f: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x587654u); f_007751b0();
    /* 00587654: fmul dword ptr [0x92838c] */ ST(0) = ST(0) * R_F32((u32)(0x92838cu));
    /* 0058765a: fadd dword ptr [0x928390] */ ST(0) = ST(0) + R_F32((u32)(0x928390u));
    /* 00587660: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 00587666: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00587669: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0058766d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00587672: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00587676: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0058767a: fistp dword ptr [esi + 0x3bc] */ W32((u32)(r_esi+0x3bcu), (u32)fx_int32(ST(0))); FPOP();
    /* 00587680: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00587683: mov dword ptr [esi + 0x3b8], 0 */ W32((u32)(r_esi+0x3b8u), 0x0u);
    /* 0058768d: mov eax, 1 */ r_eax = 0x1u;
    /* 00587692: mov dword ptr [esi + 0x38c], eax */ W32((u32)(r_esi+0x38cu), r_eax);
    /* 00587698: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 0058769e: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005876a1: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 005876a7: mov eax, 2 */ r_eax = 0x2u;
    /* 005876ac: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005876b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005876b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005876b7: ret  */ FN_RET(0x00587638); r_esp += 4; return;
}

void f_005876b8(void) /* sub_5876B8 */
{
    FN_ENTER(0x005876b8);
    /* 005876b8: mov edx, dword ptr [ecx + 0x384] */ r_edx = R32((u32)(r_ecx+0x384u));
    /* 005876be: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005876c1: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005876c4: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005876c7: mov dword ptr [ecx + 0x3bc], 0x5a */ W32((u32)(r_ecx+0x3bcu), 0x5au);
    /* 005876d1: mov eax, 1 */ r_eax = 0x1u;
    /* 005876d6: mov dword ptr [ecx + 0x38c], eax */ W32((u32)(r_ecx+0x38cu), r_eax);
    /* 005876dc: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 005876e2: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 005876e8: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005876eb: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 005876f1: mov eax, 2 */ r_eax = 0x2u;
    /* 005876f6: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005876fd: ret  */ FN_RET(0x005876b8); r_esp += 4; return;
}

void f_00587700(void) /* sub_587700 */
{
    FN_ENTER(0x00587700);
    /* 00587700: mov edx, dword ptr [ecx + 0x384] */ r_edx = R32((u32)(r_ecx+0x384u));
    /* 00587706: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00587709: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058770c: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0058770f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00587711: mov dword ptr [ecx + 0x38c], eax */ W32((u32)(r_ecx+0x38cu), r_eax);
    /* 00587717: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 0058771d: ret  */ FN_RET(0x00587700); r_esp += 4; return;
}

void f_00587720(void) /* sub_587720 */
{
    FN_ENTER(0x00587720);
    /* 00587720: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00587721: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00587722: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00587725: mov edi, ecx */ r_edi = r_ecx;
    /* 00587727: mov dword ptr [edi + 0x38c], 1 */ W32((u32)(r_edi+0x38cu), 0x1u);
    /* 00587731: mov ecx, edi */ r_ecx = r_edi;
    /* 00587733: mov dword ptr [edi + 0x390], 0 */ W32((u32)(r_edi+0x390u), 0x0u);
    /* 0058773d: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x587742u); f_00787534();
    /* 00587742: movzx edx, byte ptr [0xa7431c] */ r_edx = (u32)R8((u32)(0xa7431cu));
    /* 00587749: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0058774f: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00587752: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 00587758: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058775b: jne 0x587773 */ if (!fZ) goto L_00587773;
L_0058775d:; BB(0x0058775d);
    /* 0058775d: mov eax, dword ptr [0xa74324] */ r_eax = R32((u32)(0xa74324u));
    /* 00587762: mov dword ptr [0xa7435c], eax */ W32((u32)(0xa7435cu), r_eax);
    /* 00587767: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0058776d: mov byte ptr [0xa7431c], dl */ W8((u32)(0xa7431cu), (u8)r_edx);
L_00587773:; BB(0x00587773);
    /* 00587773: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00587776: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587777: mov esi, 7 */ r_esi = 0x7u;
    /* 0058777c: mov ecx, edi */ r_ecx = r_edi;
    /* 0058777e: push dword ptr [0xa7435c] */ { u32 v = R32((u32)(0xa7435cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00587784: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x587789u); f_007714cc();
    /* 00587789: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0058778c: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587791: je 0x5877c6 */ if (fZ) goto L_005877c6;
L_00587793:; BB(0x00587793);
    /* 00587793: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00587796: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x58779bu); f_0082dcbc();
    /* 0058779b: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0058779f: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 005877a2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5877a7u); f_0082ddd8();
    /* 005877a7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005877aa: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 005877ae: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005877b2: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005877b4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005877b6: fcomp dword ptr [0x928384] */ fx_compare(ST(0), R_F32((u32)(0x928384u))); FPOP();
    /* 005877bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005877be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005877bf: jae 0x5877c6 */ if (!fC) goto L_005877c6;
L_005877c1:; BB(0x005877c1);
    /* 005877c1: mov esi, 6 */ r_esi = 0x6u;
L_005877c6:; BB(0x005877c6);
    /* 005877c6: movzx eax, byte ptr [0xa7431c] */ r_eax = (u32)R8((u32)(0xa7431cu));
    /* 005877cd: mov word ptr [edi + 0xb8], si */ W16((u32)(r_edi+0xb8u), (u16)r_esi);
    /* 005877d4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005877d6: jne 0x58780b */ if (!fZ) goto L_0058780b;
L_005877d8:; BB(0x005877d8);
    /* 005877d8: push 0x123 */ { u32 v = 0x123u; r_esp -= 4; W32(r_esp, v); }
    /* 005877dd: mov ecx, edi */ r_ecx = r_edi;
    /* 005877df: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5877e4u); f_007879b8();
    /* 005877e4: mov dword ptr [0xa74360], eax */ W32((u32)(0xa74360u), r_eax);
    /* 005877e9: push 0x122 */ { u32 v = 0x122u; r_esp -= 4; W32(r_esp, v); }
    /* 005877ee: mov ecx, edi */ r_ecx = r_edi;
    /* 005877f0: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5877f5u); f_007879b8();
    /* 005877f5: mov dword ptr [0xa74364], eax */ W32((u32)(0xa74364u), r_eax);
    /* 005877fa: movzx eax, byte ptr [0xa7431c] */ r_eax = (u32)R8((u32)(0xa7431cu));
    /* 00587801: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00587806: mov byte ptr [0xa7431c], al */ W8((u32)(0xa7431cu), (u8)r_eax);
L_0058780b:; BB(0x0058780b);
    /* 0058780b: mov esi, dword ptr [edi + 0x388] */ r_esi = R32((u32)(r_edi+0x388u));
    /* 00587811: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00587814: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00587816: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587817: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587818: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00587819: push dword ptr [esi*4 + 0xa74360] */ { u32 v = R32((u32)(r_esi*4+0xa74360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00587820: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x587825u); f_00814298();
    /* 00587825: mov dword ptr [edi + 0x3bc], 0xa4 */ W32((u32)(r_edi+0x3bcu), 0xa4u);
    /* 0058782f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00587832: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00587833: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00587834: ret  */ FN_RET(0x00587720); r_esp += 4; return;
}

void f_00587838(void) /* sub_587838 */
{
    FN_ENTER(0x00587838);
    /* 00587838: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00587839: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0058783b: mov eax, 1 */ r_eax = 0x1u;
    /* 00587840: movzx edx, byte ptr [0xa74320] */ r_edx = (u32)R8((u32)(0xa74320u));
    /* 00587847: mov dword ptr [ebp + 0x38c], eax */ W32((u32)(r_ebp+0x38cu), r_eax);
    /* 0058784d: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
    /* 00587853: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00587856: jne 0x58788b */ if (!fZ) goto L_0058788b;
L_00587858:; BB(0x00587858);
    /* 00587858: push 0x121 */ { u32 v = 0x121u; r_esp -= 4; W32(r_esp, v); }
    /* 0058785d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058785f: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x587864u); f_007879b8();
    /* 00587864: mov dword ptr [0xa74368], eax */ W32((u32)(0xa74368u), r_eax);
    /* 00587869: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 0058786e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00587870: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x587875u); f_007879b8();
    /* 00587875: mov dword ptr [0xa7436c], eax */ W32((u32)(0xa7436cu), r_eax);
    /* 0058787a: movzx eax, byte ptr [0xa74320] */ r_eax = (u32)R8((u32)(0xa74320u));
    /* 00587881: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00587886: mov byte ptr [0xa74320], al */ W8((u32)(0xa74320u), (u8)r_eax);
L_0058788b:; BB(0x0058788b);
    /* 0058788b: mov ecx, dword ptr [ebp + 0x388] */ r_ecx = R32((u32)(r_ebp+0x388u));
    /* 00587891: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00587894: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00587896: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587897: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587898: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00587899: push dword ptr [ecx*4 + 0xa74368] */ { u32 v = R32((u32)(r_ecx*4+0xa74368u)); r_esp -= 4; W32(r_esp, v); }
    /* 005878a0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5878a5u); f_00814298();
    /* 005878a5: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 005878ab: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005878ae: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 005878b4: mov edx, 5 */ r_edx = 0x5u;
    /* 005878b9: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 005878c0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005878c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005878c4: ret  */ FN_RET(0x00587838); r_esp += 4; return;
}

void f_005878c8(void) /* sub_5878C8 */
{
    FN_ENTER(0x005878c8);
    /* 005878c8: mov eax, dword ptr [ecx + 0x384] */ r_eax = R32((u32)(r_ecx+0x384u));
    /* 005878ce: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005878d1: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005878d4: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 005878d7: mov eax, dword ptr [ecx + 0x3a4] */ r_eax = R32((u32)(r_ecx+0x3a4u));
    /* 005878dd: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 005878e0: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 005878e3: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005878e6: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 005878e9: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 005878ec: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 005878ef: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 005878f2: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 005878f5: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 005878fb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005878fe: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 00587904: mov eax, 8 */ r_eax = 0x8u;
    /* 00587909: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00587910: ret  */ FN_RET(0x005878c8); r_esp += 4; return;
}

void f_00587914(void) /* sub_587914 */
{
    FN_ENTER(0x00587914);
    /* 00587914: mov edx, dword ptr [ecx + 0x384] */ r_edx = R32((u32)(r_ecx+0x384u));
    /* 0058791a: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0058791d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00587920: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00587923: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 00587929: mov dword ptr [ecx + 0x3bc], 0x16 */ W32((u32)(r_ecx+0x3bcu), 0x16u);
    /* 00587933: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00587936: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 0058793c: mov eax, 1 */ r_eax = 0x1u;
    /* 00587941: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00587948: ret  */ FN_RET(0x00587914); r_esp += 4; return;
}

void f_0058794c(void) /* sub_58794C */
{
    FN_ENTER(0x0058794c);
    /* 0058794c: mov edx, dword ptr [ecx + 0x384] */ r_edx = R32((u32)(r_ecx+0x384u));
    /* 00587952: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00587955: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00587958: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0058795b: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 00587961: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00587964: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 0058796a: mov eax, 1 */ r_eax = 0x1u;
    /* 0058796f: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00587976: ret  */ FN_RET(0x0058794c); r_esp += 4; return;
}

void f_00587978(void) /* sub_587978 */
{
    FN_ENTER(0x00587978);
    /* 00587978: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00587979: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058797c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0058797e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00587980: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x587985u); f_007751b0();
    /* 00587985: fld dword ptr [0x92837c] */ FPUSH(R_F32((u32)(0x92837cu)));
    /* 0058798b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058798d: fadd dword ptr [0x928380] */ ST(0) = ST(0) + R_F32((u32)(0x928380u));
    /* 00587993: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 00587999: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0058799c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005879a0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005879a5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005879a9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005879ad: fistp dword ptr [ebp + 0x3bc] */ W32((u32)(r_ebp+0x3bcu), (u32)fx_int32(ST(0))); FPOP();
    /* 005879b3: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005879b6: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005879b9: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005879bc: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005879bf: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 005879c5: mov dword ptr [ebp + 0x390], 1 */ W32((u32)(r_ebp+0x390u), 0x1u);
    /* 005879cf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005879d2: je 0x5879f1 */ if (fZ) goto L_005879f1;
L_005879d4:; BB(0x005879d4);
    /* 005879d4: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 005879da: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005879dd: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
L_005879e3:; BB(0x005879e3);
    /* 005879e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005879e5: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005879ec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005879ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005879f0: ret  */ FN_RET(0x00587978); r_esp += 4; return;
L_005879f1:; BB(0x005879f1);
    /* 005879f1: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 005879f7: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005879fa: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 00587a00: jmp 0x5879e3 */ goto L_005879e3;
}

void f_00587a04(void) /* sub_587A04 */
{
    FN_ENTER(0x00587a04);
    /* 00587a04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00587a05: mov eax, dword ptr [ecx + 0x384] */ r_eax = R32((u32)(r_ecx+0x384u));
    /* 00587a0b: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00587a0e: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00587a11: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00587a14: mov edx, dword ptr [ecx + 0x3a4] */ r_edx = R32((u32)(r_ecx+0x3a4u));
    /* 00587a1a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00587a1c: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 00587a22: mov dword ptr [ecx + 0x38c], 1 */ W32((u32)(r_ecx+0x38cu), 0x1u);
    /* 00587a2c: movsx edx, word ptr [edx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 00587a33: lea edi, [edx + 1] */ r_edi = (u32)(r_edx+0x1u);
    /* 00587a36: add edi, 0 */ {  u32 a = r_edi; u32 b = 0x0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00587a39: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00587a3c: lea edx, [edx + edi + 1] */ r_edx = (u32)(r_edx+r_edi+0x1u);
    /* 00587a40: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00587a42: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00587a45: mov word ptr [ecx + 0x334], dx */ W16((u32)(r_ecx+0x334u), (u16)r_edx);
    /* 00587a4c: mov dword ptr [ecx + 0x3c4], edx */ W32((u32)(r_ecx+0x3c4u), r_edx);
    /* 00587a52: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 00587a58: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 00587a5e: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00587a61: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00587a64: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 00587a6a: mov eax, 9 */ r_eax = 0x9u;
    /* 00587a6f: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00587a76: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00587a77: ret  */ FN_RET(0x00587a04); r_esp += 4; return;
}

void f_00587a78(void) /* sub_587A78 */
{
    FN_ENTER(0x00587a78);
    /* 00587a78: mov edx, dword ptr [ecx + 0x384] */ r_edx = R32((u32)(r_ecx+0x384u));
    /* 00587a7e: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00587a81: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00587a84: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00587a87: mov dword ptr [ecx + 0x3b8], 0 */ W32((u32)(r_ecx+0x3b8u), 0x0u);
    /* 00587a91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00587a93: mov dword ptr [ecx + 0x38c], eax */ W32((u32)(r_ecx+0x38cu), r_eax);
    /* 00587a99: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 00587a9f: ret  */ FN_RET(0x00587a78); r_esp += 4; return;
}

void f_00587aa0(void) /* sub_587AA0 */
{
    FN_ENTER(0x00587aa0);
    /* 00587aa0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00587aa4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00587aa6: jne 0x587aab */ if (!fZ) goto L_00587aab;
L_00587aa8:; BB(0x00587aa8);
    /* 00587aa8: ret 4 */ FN_RET(0x00587aa0); r_esp += 8; return;
L_00587aab:; BB(0x00587aab);
    /* 00587aab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00587aac: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x587ab1u); f_00857e98();
    /* 00587ab1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00587ab2: ret 4 */ FN_RET(0x00587aa0); r_esp += 8; return;
}

void f_00587ab8(void) /* sub_587AB8 */
{
    FN_ENTER(0x00587ab8);
    /* 00587ab8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00587ab9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00587abb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00587abd: call 0x587adc */ r_esp -= 4; W32(r_esp, 0x587ac2u); f_00587adc();
    /* 00587ac2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00587ac6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00587ac8: jne 0x587ace */ if (!fZ) goto L_00587ace;
L_00587aca:; BB(0x00587aca);
    /* 00587aca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00587acb: ret 4 */ FN_RET(0x00587ab8); r_esp += 8; return;
L_00587ace:; BB(0x00587ace);
    /* 00587ace: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00587acf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x587ad4u); f_005c2f74();
    /* 00587ad4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00587ad5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00587ad6: ret 4 */ FN_RET(0x00587ab8); r_esp += 8; return;
}

void f_00587adc(void) /* sub_587ADC */
{
    FN_ENTER(0x00587adc);
    /* 00587adc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00587add: mov ebp, esp */ r_ebp = r_esp;
    /* 00587adf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00587ae1: push 0x8d7da0 */ { u32 v = 0x8d7da0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587ae6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00587aec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587aed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00587af4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00587af7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00587afa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00587afd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00587b00: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00587b03: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00587b06: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00587b09: mov dword ptr [ecx], 0xb07c40 */ W32((u32)(r_ecx), 0xb07c40u);
    /* 00587b0f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00587b16: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x587b1bu); f_0078638c();
    /* 00587b1b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00587b1e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00587b25: mov esp, ebp */ r_esp = r_ebp;
    /* 00587b27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00587b28: ret  */ FN_RET(0x00587adc); r_esp += 4; return;
}

void f_00587b2c(void) /* sub_587B2C */
{
    FN_ENTER(0x00587b2c);
    /* 00587b2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00587b2d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00587b2e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00587b2f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00587b30: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00587b33: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00587b35: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
    /* 00587b3b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00587b3e: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 00587b44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00587b46: jl 0x588072 */ if ((fS!=fO)) goto L_00588072;
L_00587b4c:; BB(0x00587b4c);
    /* 00587b4c: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 00587b4f: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00587b52: mov ebp, dword ptr [ebx + 0x40] */ r_ebp = R32((u32)(r_ebx+0x40u));
    /* 00587b55: mov dword ptr [ebx + 0x44], esi */ W32((u32)(r_ebx+0x44u), r_esi);
    /* 00587b58: mov dword ptr [ebx + 0x48], eax */ W32((u32)(r_ebx+0x48u), r_eax);
    /* 00587b5b: mov dword ptr [ebx + 0x4c], ebp */ W32((u32)(r_ebx+0x4cu), r_ebp);
    /* 00587b5e: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00587b61: lea edx, [ebx + 0x30c] */ r_edx = (u32)(r_ebx+0x30cu);
    /* 00587b67: mov ecx, esi */ r_ecx = r_esi;
    /* 00587b69: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x587b6eu); f_0082ebac();
    /* 00587b6e: fld dword ptr [ebx + 0x380] */ FPUSH(R_F32((u32)(r_ebx+0x380u)));
    /* 00587b74: fadd dword ptr [ebx + 0x384] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x384u));
    /* 00587b7a: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00587b80: fst dword ptr [ebx + 0x380] */ W_F32((u32)(r_ebx+0x380u), ST(0));
    /* 00587b86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587b88: jne 0x587d26 */ if (!fZ) goto L_00587d26;
L_00587b8e:; BB(0x00587b8e);
    /* 00587b8e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00587b90: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00587b92: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00587b97: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00587b99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00587b9b: jle 0x588087 */ if ((fZ||fS!=fO)) goto L_00588087;
L_00587ba1:; BB(0x00587ba1);
    /* 00587ba1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00587ba3: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_00587ba7:; BB(0x00587ba7);
    /* 00587ba7: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00587bae: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587bb0: je 0x587c49 */ if (fZ) goto L_00587c49;
L_00587bb6:; BB(0x00587bb6);
    /* 00587bb6: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00587bb9: test edx, 0x2000a00 */ {  u32 a = r_edx; u32 b = 0x2000a00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587bbf: jne 0x587c49 */ if (!fZ) goto L_00587c49;
L_00587bc5:; BB(0x00587bc5);
    /* 00587bc5: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 00587bcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587bcc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00587bcd: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x587bd2u); f_007a9180();
    /* 00587bd2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587bd5: fcomp dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); FPOP();
    /* 00587bd9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00587bdb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00587bdc: jbe 0x587be5 */ if ((fC||fZ)) goto L_00587be5;
L_00587bde:; BB(0x00587bde);
    /* 00587bde: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00587be3: jmp 0x587c49 */ goto L_00587c49;
L_00587be5:; BB(0x00587be5);
    /* 00587be5: mov eax, dword ptr [ebx + 0x394] */ r_eax = R32((u32)(r_ebx+0x394u));
    /* 00587beb: cmp edi, dword ptr [ebx + 0x38c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x38cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587bf1: je 0x587fc9 */ if (fZ) goto L_00587fc9;
L_00587bf7:; BB(0x00587bf7);
    /* 00587bf7: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00587bf9: mov dword ptr [esp + 0x5c], ebp */ W32((u32)(r_esp+0x5cu), r_ebp);
    /* 00587bfd: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00587c01: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00587c03: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00587c07: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 00587c0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00587c0d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00587c0e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00587c0f: mov ecx, edi */ r_ecx = r_edi;
    /* 00587c11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587c12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587c14: push dword ptr [ebx + 0x14] */ { u32 v = R32((u32)(r_ebx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00587c17: mov ebp, dword ptr [esp + 0x74] */ r_ebp = R32((u32)(r_esp+0x74u));
    /* 00587c1b: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x587c1eu); call_ind(t); }
    /* 00587c1e: fcom dword ptr [0x9284bc] */ fx_compare(ST(0), R_F32((u32)(0x9284bcu))); 
    /* 00587c24: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00587c26: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00587c27: je 0x58808e */ if (fZ) goto L_0058808e;
L_00587c2d:; BB(0x00587c2d);
    /* 00587c2d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00587c2f: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587c32: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00587c36: mov ecx, edi */ r_ecx = r_edi;
    /* 00587c38: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00587c3b: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x587c3eu); call_ind(t); }
L_00587c3e:; BB(0x00587c3e);
    /* 00587c3e: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00587c43: mov dword ptr [ebx + 0x38c], edi */ W32((u32)(r_ebx+0x38cu), r_edi);
L_00587c49:; BB(0x00587c49);
    /* 00587c49: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00587c4c: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00587c4e: jl 0x587ba7 */ if ((fS!=fO)) goto L_00587ba7;
L_00587c54:; BB(0x00587c54);
    /* 00587c54: fld dword ptr [ebx + 0x380] */ FPUSH(R_F32((u32)(r_ebx+0x380u)));
L_00587c5a:; BB(0x00587c5a);
    /* 00587c5a: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 00587c5d: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00587c60: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 00587c63: mov ebp, dword ptr [ebx + 0x3c] */ r_ebp = R32((u32)(r_ebx+0x3cu));
    /* 00587c66: mov edi, dword ptr [ebx + 0x40] */ r_edi = R32((u32)(r_ebx+0x40u));
    /* 00587c69: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 00587c6c: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 00587c70: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 00587c73: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00587c77: mov dword ptr [ebx + 0x3c], ebp */ W32((u32)(r_ebx+0x3cu), r_ebp);
    /* 00587c7a: mov dword ptr [ebx + 0x40], edi */ W32((u32)(r_ebx+0x40u), r_edi);
    /* 00587c7d: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587c80: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00587c83: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00587c85: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00587c8d: call 0x77170c */ r_esp -= 4; W32(r_esp, 0x587c92u); f_0077170c();
    /* 00587c92: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00587c95: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587c9a: je 0x587d0d */ if (fZ) goto L_00587d0d;
L_00587c9c:; BB(0x00587c9c);
    /* 00587c9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587c9d: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x587ca2u); f_00786b3c();
    /* 00587ca2: mov ebp, eax */ r_ebp = r_eax;
    /* 00587ca4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587ca7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587ca9: je 0x587d0d */ if (fZ) goto L_00587d0d;
L_00587cab:; BB(0x00587cab);
    /* 00587cab: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 00587cae: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587cb0: je 0x587d0d */ if (fZ) goto L_00587d0d;
L_00587cb2:; BB(0x00587cb2);
    /* 00587cb2: mov edx, dword ptr [ebx + 0x394] */ r_edx = R32((u32)(r_ebx+0x394u));
    /* 00587cb8: cmp ebp, dword ptr [ebx + 0x390] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx+0x390u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587cbe: je 0x587d0d */ if (fZ) goto L_00587d0d;
L_00587cc0:; BB(0x00587cc0);
    /* 00587cc0: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00587cc3: mov dword ptr [esp + 0x64], esi */ W32((u32)(r_esp+0x64u), r_esi);
    /* 00587cc7: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00587ccb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00587ccd: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00587cd1: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 00587cd6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00587cd7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00587cd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00587cd9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00587cdb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00587cdc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587cde: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00587cdf: mov esi, dword ptr [esp + 0x7c] */ r_esi = R32((u32)(r_esp+0x7cu));
    /* 00587ce3: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x587ce6u); call_ind(t); }
    /* 00587ce6: fcom dword ptr [0x9284bc] */ fx_compare(ST(0), R_F32((u32)(0x9284bcu))); 
    /* 00587cec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00587cee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00587cef: je 0x588095 */ if (fZ) goto L_00588095;
L_00587cf5:; BB(0x00587cf5);
    /* 00587cf5: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00587cf8: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587cfb: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00587cff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00587d01: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00587d04: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x587d07u); call_ind(t); }
L_00587d07:; BB(0x00587d07);
    /* 00587d07: mov dword ptr [ebx + 0x390], ebp */ W32((u32)(r_ebx+0x390u), r_ebp);
L_00587d0d:; BB(0x00587d0d);
    /* 00587d0d: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00587d11: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 00587d15: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 00587d18: mov dword ptr [ebx + 0x3c], esi */ W32((u32)(r_ebx+0x3cu), r_esi);
    /* 00587d1b: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 00587d1e: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00587d21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00587d22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00587d23: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00587d24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00587d25: ret  */ FN_RET(0x00587b2c); r_esp += 4; return;
L_00587d26:; BB(0x00587d26);
    /* 00587d26: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00587d28: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587d2b: je 0x587d35 */ if (fZ) goto L_00587d35;
L_00587d2d:; BB(0x00587d2d);
    /* 00587d2d: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00587d30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00587d31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00587d32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00587d33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00587d34: ret  */ FN_RET(0x00587b2c); r_esp += 4; return;
L_00587d35:; BB(0x00587d35);
    /* 00587d35: push 0x117 */ { u32 v = 0x117u; r_esp -= 4; W32(r_esp, v); }
    /* 00587d3a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00587d3c: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x587d41u); f_007879b8();
    /* 00587d41: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00587d43: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00587d44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00587d45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00587d46: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00587d47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587d48: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x587d4du); f_008144b0();
    /* 00587d4d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587d50: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00587d53: fld dword ptr [ebx + 0x380] */ FPUSH(R_F32((u32)(r_ebx+0x380u)));
    /* 00587d59: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00587d5b: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 00587d5e: mov ebp, dword ptr [ebx + 0x48] */ r_ebp = R32((u32)(r_ebx+0x48u));
    /* 00587d61: mov edi, dword ptr [ebx + 0x4c] */ r_edi = R32((u32)(r_ebx+0x4cu));
    /* 00587d64: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00587d68: mov edx, esi */ r_edx = r_esi;
    /* 00587d6a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00587d6d: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00587d71: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00587d75: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x587d7au); f_0082f9c4();
    /* 00587d7a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00587d7d: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x587d82u); f_0083173c();
    /* 00587d82: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00587d86: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00587d8a: fcomp dword ptr [0x9284bc] */ fx_compare(ST(0), R_F32((u32)(0x9284bcu))); FPOP();
    /* 00587d90: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00587d92: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00587d93: jne 0x587d9c */ if (!fZ) goto L_00587d9c;
L_00587d95:; BB(0x00587d95);
    /* 00587d95: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
L_00587d9c:; BB(0x00587d9c);
    /* 00587d9c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00587d9f: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x587da4u); f_0082df08();
    /* 00587da4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00587da6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00587da9: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00587dad: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00587db3: fld dword ptr [ebx + 0x380] */ FPUSH(R_F32((u32)(r_ebx+0x380u)));
    /* 00587db9: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00587dbb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00587dbd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00587dbf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00587dc2: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00587dc6: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00587dc8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00587dca: jle 0x58805e */ if ((fZ||fS!=fO)) goto L_0058805e;
L_00587dd0:; BB(0x00587dd0);
    /* 00587dd0: fld dword ptr [0x9284bc] */ FPUSH(R_F32((u32)(0x9284bcu)));
    /* 00587dd6: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 00587dd9: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00587ddc: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
L_00587ddf:; BB(0x00587ddf);
    /* 00587ddf: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00587de6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587de8: je 0x587e88 */ if (fZ) goto L_00587e88;
L_00587dee:; BB(0x00587dee);
    /* 00587dee: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00587df1: test eax, 0x2000a00 */ {  u32 a = r_eax; u32 b = 0x2000a00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587df6: jne 0x587e88 */ if (!fZ) goto L_00587e88;
L_00587dfc:; BB(0x00587dfc);
    /* 00587dfc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00587dfe: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 00587e02: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00587e04: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00587e06: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 00587e0a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00587e0c: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 00587e10: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00587e12: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00587e16: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00587e17: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00587e19: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00587e1b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00587e1d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00587e1f: jae 0x587e88 */ if (!fC) goto L_00587e88;
L_00587e21:; BB(0x00587e21);
    /* 00587e21: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00587e23: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00587e25: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00587e27: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00587e2b: lea edi, [esi + 0x300] */ r_edi = (u32)(r_esi+0x300u);
L_00587e31:; BB(0x00587e31);
    /* 00587e31: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00587e35: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00587e36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587e37: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x587e3cu); f_007a9180();
    /* 00587e3c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587e3f: fcomp dword ptr [esp + 0x60] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x60u))); FPOP();
    /* 00587e43: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00587e45: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00587e46: jbe 0x587fd3 */ if ((fC||fZ)) goto L_00587fd3;
L_00587e4c:; BB(0x00587e4c);
    /* 00587e4c: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00587e50: fadd dword ptr [ebx + 0x380] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x380u));
    /* 00587e56: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00587e5a: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00587e5e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00587e61: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x587e66u); f_0082ebac();
    /* 00587e66: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00587e6a: fcomp dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); FPOP();
    /* 00587e6e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00587e70: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00587e71: jb 0x587e31 */ if (fC) goto L_00587e31;
L_00587e73:; BB(0x00587e73);
    /* 00587e73: fld dword ptr [0x9284bc] */ FPUSH(R_F32((u32)(0x9284bcu)));
    /* 00587e79: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00587e7f: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 00587e82: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00587e85: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
L_00587e88:; BB(0x00587e88);
    /* 00587e88: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00587e8b: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00587e8d: jl 0x587ddf */ if ((fS!=fO)) goto L_00587ddf;
L_00587e93:; BB(0x00587e93);
    /* 00587e93: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00587e95: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 00587e99: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00587e9b: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00587e9d: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00587e9f: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 00587ea1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00587ea2: jae 0x58809c */ if (!fC) goto L_0058809c;
L_00587ea8:; BB(0x00587ea8);
    /* 00587ea8: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00587eaa: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 00587eae: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00587eb0: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 00587eb4: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00587eb6: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 00587eba: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00587ebe: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00587ec0: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00587ec4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00587ec6: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00587eca: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00587ece: jmp 0x587ef5 */ goto L_00587ef5;
L_00587ed0:; BB(0x00587ed0);
    /* 00587ed0: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00587ed4: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00587ed8: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00587edc: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 00587edf: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00587ee2: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 00587ee5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00587ee7: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00587eeb: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00587eef: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00587ef3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_00587ef5:; BB(0x00587ef5);
    /* 00587ef5: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 00587ef8: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 00587efb: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 00587efe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587f00: push dword ptr [ebx + 0x380] */ { u32 v = R32((u32)(r_ebx+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 00587f06: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00587f08: call 0x77170c */ r_esp -= 4; W32(r_esp, 0x587f0du); f_0077170c();
    /* 00587f0d: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00587f10: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587f15: je 0x587f80 */ if (fZ) goto L_00587f80;
L_00587f17:; BB(0x00587f17);
    /* 00587f17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587f18: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x587f1du); f_00786b3c();
    /* 00587f1d: mov ebp, eax */ r_ebp = r_eax;
    /* 00587f1f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587f22: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587f24: je 0x587f80 */ if (fZ) goto L_00587f80;
L_00587f26:; BB(0x00587f26);
    /* 00587f26: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 00587f29: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587f2b: je 0x587f80 */ if (fZ) goto L_00587f80;
L_00587f2d:; BB(0x00587f2d);
    /* 00587f2d: mov eax, dword ptr [ebx + 0x394] */ r_eax = R32((u32)(r_ebx+0x394u));
    /* 00587f33: cmp ebp, dword ptr [ebx + 0x390] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx+0x390u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587f39: je 0x587f80 */ if (fZ) goto L_00587f80;
L_00587f3b:; BB(0x00587f3b);
    /* 00587f3b: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00587f3e: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00587f42: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00587f44: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 00587f49: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00587f4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00587f4e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00587f4f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00587f50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587f51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00587f54: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00587f56: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x587f59u); call_ind(t); }
    /* 00587f59: fcom dword ptr [0x9284bc] */ fx_compare(ST(0), R_F32((u32)(0x9284bcu))); 
    /* 00587f5f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00587f61: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00587f62: je 0x5880b2 */ if (fZ) goto L_005880b2;
L_00587f68:; BB(0x00587f68);
    /* 00587f68: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00587f6b: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587f6e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00587f72: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00587f74: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00587f77: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x587f7au); call_ind(t); }
L_00587f7a:; BB(0x00587f7a);
    /* 00587f7a: mov dword ptr [ebx + 0x390], ebp */ W32((u32)(r_ebx+0x390u), r_ebp);
L_00587f80:; BB(0x00587f80);
    /* 00587f80: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00587f84: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00587f88: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00587f8c: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00587f90: fadd dword ptr [ebx + 0x380] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x380u));
    /* 00587f96: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00587f98: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 00587f9b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00587f9d: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00587fa1: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 00587fa4: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 00587fa7: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00587fab: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00587fae: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x587fb3u); f_0082ebac();
    /* 00587fb3: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00587fb7: fcomp dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); FPOP();
    /* 00587fbb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00587fbd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00587fbe: jb 0x587ed0 */ if (fC) goto L_00587ed0;
L_00587fc4:; BB(0x00587fc4);
    /* 00587fc4: jmp 0x587d2d */ goto L_00587d2d;
L_00587fc9:; BB(0x00587fc9);
    /* 00587fc9: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00587fce: jmp 0x587c49 */ goto L_00587c49;
L_00587fd3:; BB(0x00587fd3);
    /* 00587fd3: mov ecx, dword ptr [ebx + 0x394] */ r_ecx = R32((u32)(r_ebx+0x394u));
    /* 00587fd9: cmp esi, dword ptr [ebx + 0x38c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x38cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587fdf: je 0x588044 */ if (fZ) goto L_00588044;
L_00587fe1:; BB(0x00587fe1);
    /* 00587fe1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00587fe3: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00587fe7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00587fe9: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00587fee: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 00587ff2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00587ff3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00587ff4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00587ff5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00587ff6: mov ecx, esi */ r_ecx = r_esi;
    /* 00587ff8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587ffa: push dword ptr [ebx + 0x14] */ { u32 v = R32((u32)(r_ebx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00587ffd: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x588000u); call_ind(t); }
    /* 00588000: fld dword ptr [0x9284bc] */ FPUSH(R_F32((u32)(0x9284bcu)));
    /* 00588006: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00588008: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058800a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058800b: je 0x5880b9 */ if (fZ) goto L_005880b9;
L_00588011:; BB(0x00588011);
    /* 00588011: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00588013: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00588015: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00588018: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058801c: mov ecx, esi */ r_ecx = r_esi;
    /* 0058801e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00588021: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x588024u); call_ind(t); }
    /* 00588024: fld dword ptr [0x9284bc] */ FPUSH(R_F32((u32)(0x9284bcu)));
L_0058802a:; BB(0x0058802a);
    /* 0058802a: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00588030: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 00588033: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00588036: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 00588039: mov dword ptr [ebx + 0x38c], esi */ W32((u32)(r_ebx+0x38cu), r_esi);
    /* 0058803f: jmp 0x587e88 */ goto L_00587e88;
L_00588044:; BB(0x00588044);
    /* 00588044: fld dword ptr [0x9284bc] */ FPUSH(R_F32((u32)(0x9284bcu)));
    /* 0058804a: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00588050: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 00588053: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00588056: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 00588059: jmp 0x587e88 */ goto L_00587e88;
L_0058805e:; BB(0x0058805e);
    /* 0058805e: fld dword ptr [0x9284bc] */ FPUSH(R_F32((u32)(0x9284bcu)));
    /* 00588064: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 00588067: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 0058806a: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 0058806d: jmp 0x587e93 */ goto L_00587e93;
L_00588072:; BB(0x00588072);
    /* 00588072: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00588076: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058807b: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0058807f: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00588082: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00588083: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00588084: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00588085: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00588086: ret  */ FN_RET(0x00587b2c); r_esp += 4; return;
L_00588087:; BB(0x00588087);
    /* 00588087: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00588089: jmp 0x587c5a */ goto L_00587c5a;
L_0058808e:; BB(0x0058808e);
    /* 0058808e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00588090: jmp 0x587c3e */ goto L_00587c3e;
L_00588095:; BB(0x00588095);
    /* 00588095: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00588097: jmp 0x587d07 */ goto L_00587d07;
L_0058809c:; BB(0x0058809c);
    /* 0058809c: fstp st(5) */ ST(5) = ST(0); FPOP();
    /* 0058809e: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 005880a0: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 005880a2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005880a4: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005880a6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005880a8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005880aa: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005880ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005880ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005880af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005880b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005880b1: ret  */ FN_RET(0x00587b2c); r_esp += 4; return;
L_005880b2:; BB(0x005880b2);
    /* 005880b2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005880b4: jmp 0x587f7a */ goto L_00587f7a;
L_005880b9:; BB(0x005880b9);
    /* 005880b9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005880bb: jmp 0x58802a */ goto L_0058802a;
}

void f_00587d9e(void)
{
    FN_ENTER(0x00587d9e);
    goto L_00587d9e;
L_00587d2d:; BB(0x00587d2d);
    /* 00587d2d: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00587d30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00587d31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00587d32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00587d33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00587d34: ret  */ FN_RET(0x00587d9e); r_esp += 4; return;
L_00587d9e:; BB(0x00587d9e);
    /* 00587d9e: and al, 0xe8 */ {  u32 a = (u8)r_eax; u32 b = 0xe8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00587da0: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 00587da2: sub al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00587da4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00587da6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00587da9: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00587dad: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00587db3: fld dword ptr [ebx + 0x380] */ FPUSH(R_F32((u32)(r_ebx+0x380u)));
    /* 00587db9: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00587dbb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00587dbd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00587dbf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00587dc2: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00587dc6: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00587dc8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00587dca: jle 0x58805e */ if ((fZ||fS!=fO)) goto L_0058805e;
L_00587dd0:; BB(0x00587dd0);
    /* 00587dd0: fld dword ptr [0x9284bc] */ FPUSH(R_F32((u32)(0x9284bcu)));
    /* 00587dd6: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 00587dd9: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00587ddc: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
L_00587ddf:; BB(0x00587ddf);
    /* 00587ddf: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00587de6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587de8: je 0x587e88 */ if (fZ) goto L_00587e88;
L_00587dee:; BB(0x00587dee);
    /* 00587dee: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00587df1: test eax, 0x2000a00 */ {  u32 a = r_eax; u32 b = 0x2000a00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587df6: jne 0x587e88 */ if (!fZ) goto L_00587e88;
L_00587dfc:; BB(0x00587dfc);
    /* 00587dfc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00587dfe: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 00587e02: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00587e04: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00587e06: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 00587e0a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00587e0c: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 00587e10: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00587e12: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00587e16: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00587e17: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00587e19: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00587e1b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00587e1d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00587e1f: jae 0x587e88 */ if (!fC) goto L_00587e88;
L_00587e21:; BB(0x00587e21);
    /* 00587e21: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00587e23: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00587e25: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00587e27: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00587e2b: lea edi, [esi + 0x300] */ r_edi = (u32)(r_esi+0x300u);
L_00587e31:; BB(0x00587e31);
    /* 00587e31: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00587e35: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00587e36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587e37: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x587e3cu); f_007a9180();
    /* 00587e3c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587e3f: fcomp dword ptr [esp + 0x60] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x60u))); FPOP();
    /* 00587e43: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00587e45: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00587e46: jbe 0x587fd3 */ if ((fC||fZ)) goto L_00587fd3;
L_00587e4c:; BB(0x00587e4c);
    /* 00587e4c: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00587e50: fadd dword ptr [ebx + 0x380] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x380u));
    /* 00587e56: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00587e5a: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00587e5e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00587e61: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x587e66u); f_0082ebac();
    /* 00587e66: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00587e6a: fcomp dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); FPOP();
    /* 00587e6e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00587e70: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00587e71: jb 0x587e31 */ if (fC) goto L_00587e31;
L_00587e73:; BB(0x00587e73);
    /* 00587e73: fld dword ptr [0x9284bc] */ FPUSH(R_F32((u32)(0x9284bcu)));
    /* 00587e79: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00587e7f: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 00587e82: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00587e85: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
L_00587e88:; BB(0x00587e88);
    /* 00587e88: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00587e8b: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00587e8d: jl 0x587ddf */ if ((fS!=fO)) goto L_00587ddf;
L_00587e93:; BB(0x00587e93);
    /* 00587e93: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00587e95: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 00587e99: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00587e9b: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00587e9d: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00587e9f: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 00587ea1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00587ea2: jae 0x58809c */ if (!fC) goto L_0058809c;
L_00587ea8:; BB(0x00587ea8);
    /* 00587ea8: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00587eaa: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 00587eae: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00587eb0: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 00587eb4: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00587eb6: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 00587eba: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00587ebe: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00587ec0: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00587ec4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00587ec6: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00587eca: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00587ece: jmp 0x587ef5 */ goto L_00587ef5;
L_00587ed0:; BB(0x00587ed0);
    /* 00587ed0: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00587ed4: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00587ed8: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00587edc: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 00587edf: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00587ee2: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 00587ee5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00587ee7: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00587eeb: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00587eef: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00587ef3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_00587ef5:; BB(0x00587ef5);
    /* 00587ef5: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 00587ef8: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 00587efb: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 00587efe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587f00: push dword ptr [ebx + 0x380] */ { u32 v = R32((u32)(r_ebx+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 00587f06: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00587f08: call 0x77170c */ r_esp -= 4; W32(r_esp, 0x587f0du); f_0077170c();
    /* 00587f0d: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00587f10: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587f15: je 0x587f80 */ if (fZ) goto L_00587f80;
L_00587f17:; BB(0x00587f17);
    /* 00587f17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587f18: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x587f1du); f_00786b3c();
    /* 00587f1d: mov ebp, eax */ r_ebp = r_eax;
    /* 00587f1f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587f22: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587f24: je 0x587f80 */ if (fZ) goto L_00587f80;
L_00587f26:; BB(0x00587f26);
    /* 00587f26: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 00587f29: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587f2b: je 0x587f80 */ if (fZ) goto L_00587f80;
L_00587f2d:; BB(0x00587f2d);
    /* 00587f2d: mov eax, dword ptr [ebx + 0x394] */ r_eax = R32((u32)(r_ebx+0x394u));
    /* 00587f33: cmp ebp, dword ptr [ebx + 0x390] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx+0x390u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587f39: je 0x587f80 */ if (fZ) goto L_00587f80;
L_00587f3b:; BB(0x00587f3b);
    /* 00587f3b: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00587f3e: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00587f42: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00587f44: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 00587f49: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00587f4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00587f4e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00587f4f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00587f50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587f51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00587f54: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00587f56: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x587f59u); call_ind(t); }
    /* 00587f59: fcom dword ptr [0x9284bc] */ fx_compare(ST(0), R_F32((u32)(0x9284bcu))); 
    /* 00587f5f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00587f61: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00587f62: je 0x5880b2 */ if (fZ) goto L_005880b2;
L_00587f68:; BB(0x00587f68);
    /* 00587f68: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00587f6b: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587f6e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00587f72: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00587f74: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00587f77: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x587f7au); call_ind(t); }
L_00587f7a:; BB(0x00587f7a);
    /* 00587f7a: mov dword ptr [ebx + 0x390], ebp */ W32((u32)(r_ebx+0x390u), r_ebp);
L_00587f80:; BB(0x00587f80);
    /* 00587f80: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00587f84: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00587f88: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00587f8c: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00587f90: fadd dword ptr [ebx + 0x380] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x380u));
    /* 00587f96: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00587f98: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 00587f9b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00587f9d: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00587fa1: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 00587fa4: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 00587fa7: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00587fab: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00587fae: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x587fb3u); f_0082ebac();
    /* 00587fb3: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00587fb7: fcomp dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); FPOP();
    /* 00587fbb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00587fbd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00587fbe: jb 0x587ed0 */ if (fC) goto L_00587ed0;
L_00587fc4:; BB(0x00587fc4);
    /* 00587fc4: jmp 0x587d2d */ goto L_00587d2d;
L_00587fd3:; BB(0x00587fd3);
    /* 00587fd3: mov ecx, dword ptr [ebx + 0x394] */ r_ecx = R32((u32)(r_ebx+0x394u));
    /* 00587fd9: cmp esi, dword ptr [ebx + 0x38c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x38cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587fdf: je 0x588044 */ if (fZ) goto L_00588044;
L_00587fe1:; BB(0x00587fe1);
    /* 00587fe1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00587fe3: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00587fe7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00587fe9: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00587fee: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 00587ff2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00587ff3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00587ff4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00587ff5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00587ff6: mov ecx, esi */ r_ecx = r_esi;
    /* 00587ff8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587ffa: push dword ptr [ebx + 0x14] */ { u32 v = R32((u32)(r_ebx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00587ffd: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x588000u); call_ind(t); }
    /* 00588000: fld dword ptr [0x9284bc] */ FPUSH(R_F32((u32)(0x9284bcu)));
    /* 00588006: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00588008: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058800a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058800b: je 0x5880b9 */ if (fZ) goto L_005880b9;
L_00588011:; BB(0x00588011);
    /* 00588011: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00588013: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00588015: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00588018: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058801c: mov ecx, esi */ r_ecx = r_esi;
    /* 0058801e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00588021: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x588024u); call_ind(t); }
    /* 00588024: fld dword ptr [0x9284bc] */ FPUSH(R_F32((u32)(0x9284bcu)));
L_0058802a:; BB(0x0058802a);
    /* 0058802a: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00588030: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 00588033: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00588036: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 00588039: mov dword ptr [ebx + 0x38c], esi */ W32((u32)(r_ebx+0x38cu), r_esi);
    /* 0058803f: jmp 0x587e88 */ goto L_00587e88;
L_00588044:; BB(0x00588044);
    /* 00588044: fld dword ptr [0x9284bc] */ FPUSH(R_F32((u32)(0x9284bcu)));
    /* 0058804a: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00588050: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 00588053: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00588056: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 00588059: jmp 0x587e88 */ goto L_00587e88;
L_0058805e:; BB(0x0058805e);
    /* 0058805e: fld dword ptr [0x9284bc] */ FPUSH(R_F32((u32)(0x9284bcu)));
    /* 00588064: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 00588067: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 0058806a: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 0058806d: jmp 0x587e93 */ goto L_00587e93;
L_0058809c:; BB(0x0058809c);
    /* 0058809c: fstp st(5) */ ST(5) = ST(0); FPOP();
    /* 0058809e: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 005880a0: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 005880a2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005880a4: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005880a6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005880a8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005880aa: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005880ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005880ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005880af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005880b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005880b1: ret  */ FN_RET(0x00587d9e); r_esp += 4; return;
L_005880b2:; BB(0x005880b2);
    /* 005880b2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005880b4: jmp 0x587f7a */ goto L_00587f7a;
L_005880b9:; BB(0x005880b9);
    /* 005880b9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005880bb: jmp 0x58802a */ goto L_0058802a;
}

