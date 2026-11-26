#include "protos.h"

void f_005af034(void) /* sub_5AF034 */
{
    FN_ENTER(0x005af034);
    /* 005af034: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005af035: mov edi, ecx */ r_edi = r_ecx;
    /* 005af037: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005af03b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005af03e: je 0x5af07c */ if (fZ) goto L_005af07c;
L_005af040:; BB(0x005af040);
    /* 005af040: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af043: je 0x5af054 */ if (fZ) goto L_005af054;
L_005af045:; BB(0x005af045);
    /* 005af045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005af047: jne 0x5af078 */ if (!fZ) goto L_005af078;
L_005af049:; BB(0x005af049);
    /* 005af049: mov ecx, edi */ r_ecx = r_edi;
    /* 005af04b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5af050u); f_007aa094();
    /* 005af050: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005af051: ret 4 */ FN_RET(0x005af034); r_esp += 8; return;
L_005af054:; BB(0x005af054);
    /* 005af054: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005af059: mov ecx, edi */ r_ecx = r_edi;
    /* 005af05b: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5af060u); f_007aaa30();
    /* 005af060: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af062: je 0x5af071 */ if (fZ) goto L_005af071;
L_005af064:; BB(0x005af064);
    /* 005af064: push dword ptr [edi + 0x380] */ { u32 v = R32((u32)(r_edi+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 005af06a: mov ecx, edi */ r_ecx = r_edi;
    /* 005af06c: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5af071u); f_0051f62c();
L_005af071:; BB(0x005af071);
    /* 005af071: mov ecx, edi */ r_ecx = r_edi;
    /* 005af073: call 0x5af08c */ r_esp -= 4; W32(r_esp, 0x5af078u); f_005af08c();
L_005af078:; BB(0x005af078);
    /* 005af078: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005af079: ret 4 */ FN_RET(0x005af034); r_esp += 8; return;
L_005af07c:; BB(0x005af07c);
    /* 005af07c: mov eax, 0x13 */ r_eax = 0x13u;
    /* 005af081: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005af088: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005af089: ret 4 */ FN_RET(0x005af034); r_esp += 8; return;
}

void f_005af08c(void) /* sub_5AF08C */
{
    FN_ENTER(0x005af08c);
    /* 005af08c: mov eax, dword ptr [ecx + 0x480] */ r_eax = R32((u32)(r_ecx+0x480u));
    /* 005af092: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005af095: je 0x5af0a1 */ if (fZ) goto L_005af0a1;
L_005af097:; BB(0x005af097);
    /* 005af097: mov dword ptr [ecx + 0x480], 2 */ W32((u32)(r_ecx+0x480u), 0x2u);
L_005af0a1:; BB(0x005af0a1);
    /* 005af0a1: ret  */ FN_RET(0x005af08c); r_esp += 4; return;
}

void f_005af0a4(void) /* sub_5AF0A4 */
{
    FN_ENTER(0x005af0a4);
    /* 005af0a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005af0a5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005af0a6: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005af0a9: mov esi, ecx */ r_esi = r_ecx;
    /* 005af0ab: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 005af0af: lea ebx, [esi + 0x440] */ r_ebx = (u32)(r_esi+0x440u);
    /* 005af0b5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af0b8: je 0x5af2b0 */ if (fZ) goto L_005af2b0;
L_005af0be:; BB(0x005af0be);
    /* 005af0be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af0c1: je 0x5af294 */ if (fZ) goto L_005af294;
L_005af0c7:; BB(0x005af0c7);
    /* 005af0c7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af0ca: je 0x5af280 */ if (fZ) goto L_005af280;
L_005af0d0:; BB(0x005af0d0);
    /* 005af0d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af0d2: jne 0x5af272 */ if (!fZ) goto L_005af272;
L_005af0d8:; BB(0x005af0d8);
    /* 005af0d8: mov eax, dword ptr [esi + 0x430] */ r_eax = R32((u32)(r_esi+0x430u));
    /* 005af0de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af0e0: jne 0x5af238 */ if (!fZ) goto L_005af238;
L_005af0e6:; BB(0x005af0e6);
    /* 005af0e6: mov ecx, esi */ r_ecx = r_esi;
    /* 005af0e8: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5af0edu); f_007aa094();
    /* 005af0ed: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 005af0f3: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005af0f5: je 0x5af161 */ if (fZ) goto L_005af161;
L_005af0f7:; BB(0x005af0f7);
    /* 005af0f7: movsx eax, word ptr [esi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 005af0fe: mov dword ptr [esi + 0x430], 1 */ W32((u32)(r_esi+0x430u), 0x1u);
    /* 005af108: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af10b: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005af113: je 0x5af29c */ if (fZ) goto L_005af29c;
L_005af119:; BB(0x005af119);
    /* 005af119: mov dword ptr [esp], 0xc1400000 */ W32((u32)(r_esp), 0xc1400000u);
    /* 005af120: mov dword ptr [esp + 8], 0xc1200000 */ W32((u32)(r_esp+0x8u), 0xc1200000u);
L_005af128:; BB(0x005af128);
    /* 005af128: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005af12b: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005af12f: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005af132: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af133: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005af134: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x5af139u); f_00782b64();
    /* 005af139: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005af13c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005af13f: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 005af142: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5af147u); f_0082ebac();
    /* 005af147: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005af14a: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005af14c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af14d: call 0x5782f8 */ r_esp -= 4; W32(r_esp, 0x5af152u); f_005782f8();
    /* 005af152: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005af156: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 005af158: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af159: call 0x578778 */ r_esp -= 4; W32(r_esp, 0x5af15eu); f_00578778();
    /* 005af15e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005af161:; BB(0x005af161);
    /* 005af161: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 005af166: push dword ptr [esi + 0x440] */ { u32 v = R32((u32)(r_esi+0x440u)); r_esp -= 4; W32(r_esp, v); }
    /* 005af16c: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005af16f: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5af174u); f_007a8c74();
    /* 005af174: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005af177: fld dword ptr [esi + 0x384] */ FPUSH(R_F32((u32)(r_esi+0x384u)));
    /* 005af17d: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005af180: fcom dword ptr [0x92ab38] */ fx_compare(ST(0), R_F32((u32)(0x92ab38u))); 
    /* 005af186: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005af188: mov dword ptr [esi + 0x60], edx */ W32((u32)(r_esi+0x60u), r_edx);
    /* 005af18b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005af18c: jae 0x5af19c */ if (!fC) goto L_005af19c;
L_005af18e:; BB(0x005af18e);
    /* 005af18e: fld dword ptr [esi + 0x448] */ FPUSH(R_F32((u32)(r_esi+0x448u)));
    /* 005af194: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005af196: fstp dword ptr [esi + 0x384] */ W_F32((u32)(r_esi+0x384u), ST(0)); FPOP();
L_005af19c:; BB(0x005af19c);
    /* 005af19c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005af19e: mov eax, dword ptr [esi + 0x30c] */ r_eax = R32((u32)(r_esi+0x30cu));
    /* 005af1a4: mov edx, dword ptr [esi + 0x310] */ r_edx = R32((u32)(r_esi+0x310u));
    /* 005af1aa: mov ebx, dword ptr [esi + 0x314] */ r_ebx = R32((u32)(r_esi+0x314u));
    /* 005af1b0: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005af1b4: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005af1b8: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 005af1bc: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005af1c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af1c1: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x5af1c6u); f_007828e4();
    /* 005af1c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005af1c7: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005af1ca: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 005af1ce: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 005af1d2: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005af1d6: mov ecx, esi */ r_ecx = r_esi;
    /* 005af1d8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005af1db: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005af1df: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x5af1e4u); f_005209d4();
    /* 005af1e4: push 0x41b00000 */ { u32 v = 0x41b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005af1e9: mov ecx, esi */ r_ecx = r_esi;
    /* 005af1eb: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5af1f0u); f_007aaa30();
    /* 005af1f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af1f2: je 0x5af200 */ if (fZ) goto L_005af200;
L_005af1f4:; BB(0x005af1f4);
    /* 005af1f4: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005af1f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af1f9: mov ecx, esi */ r_ecx = r_esi;
    /* 005af1fb: call 0x5af3f8 */ r_esp -= 4; W32(r_esp, 0x5af200u); f_005af3f8();
L_005af200:; BB(0x005af200);
    /* 005af200: fld dword ptr [0x92ab50] */ FPUSH(R_F32((u32)(0x92ab50u)));
    /* 005af206: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005af209: fld dword ptr [esi + 0x30c] */ FPUSH(R_F32((u32)(r_esi+0x30cu)));
    /* 005af20f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005af211: fld dword ptr [esi + 0x314] */ FPUSH(R_F32((u32)(r_esi+0x314u)));
    /* 005af217: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005af219: fstp dword ptr [esi + 0x30c] */ W_F32((u32)(r_esi+0x30cu), ST(0)); FPOP();
    /* 005af21f: fstp dword ptr [esi + 0x314] */ W_F32((u32)(r_esi+0x314u), ST(0)); FPOP();
    /* 005af225: mov ecx, esi */ r_ecx = r_esi;
    /* 005af227: call 0x5ae70c */ r_esp -= 4; W32(r_esp, 0x5af22cu); f_005ae70c();
    /* 005af22c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005af22e: mov ecx, esi */ r_ecx = r_esi;
    /* 005af230: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x5af236u); call_ind(t); }
    /* 005af236: jmp 0x5af294 */ goto L_005af294;
L_005af238:; BB(0x005af238);
    /* 005af238: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af23b: jne 0x5af294 */ if (!fZ) goto L_005af294;
L_005af23d:; BB(0x005af23d);
    /* 005af23d: fld dword ptr [0x92ab48] */ FPUSH(R_F32((u32)(0x92ab48u)));
    /* 005af243: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 005af246: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 005af248: fld dword ptr [esi + 0x450] */ FPUSH(R_F32((u32)(r_esi+0x450u)));
    /* 005af24e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005af250: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 005af253: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005af255: fcom dword ptr [0x92ab44] */ fx_compare(ST(0), R_F32((u32)(0x92ab44u))); 
    /* 005af25b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005af25d: fstp dword ptr [esi + 0x450] */ W_F32((u32)(r_esi+0x450u), ST(0)); FPOP();
    /* 005af263: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005af264: jbe 0x5af294 */ if ((fC||fZ)) goto L_005af294;
L_005af266:; BB(0x005af266);
    /* 005af266: mov dword ptr [esi + 0x430], 2 */ W32((u32)(r_esi+0x430u), 0x2u);
    /* 005af270: jmp 0x5af294 */ goto L_005af294;
L_005af272:; BB(0x005af272);
    /* 005af272: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af275: jne 0x5af294 */ if (!fZ) goto L_005af294;
L_005af277:; BB(0x005af277);
    /* 005af277: mov ecx, esi */ r_ecx = r_esi;
    /* 005af279: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x5af27eu); f_00520be8();
    /* 005af27e: jmp 0x5af294 */ goto L_005af294;
L_005af280:; BB(0x005af280);
    /* 005af280: mov eax, dword ptr [esi + 0x430] */ r_eax = R32((u32)(r_esi+0x430u));
    /* 005af286: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af289: jne 0x5af294 */ if (!fZ) goto L_005af294;
L_005af28b:; BB(0x005af28b);
    /* 005af28b: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005af28d: mov ecx, esi */ r_ecx = r_esi;
    /* 005af28f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5af294u); f_0051f62c();
L_005af294:; BB(0x005af294);
    /* 005af294: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005af297: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005af298: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005af299: ret 4 */ FN_RET(0x005af0a4); r_esp += 8; return;
L_005af29c:; BB(0x005af29c);
    /* 005af29c: mov dword ptr [esp], 0x41400000 */ W32((u32)(r_esp), 0x41400000u);
    /* 005af2a3: mov dword ptr [esp + 8], 0xc1200000 */ W32((u32)(r_esp+0x8u), 0xc1200000u);
    /* 005af2ab: jmp 0x5af128 */ goto L_005af128;
L_005af2b0:; BB(0x005af2b0);
    /* 005af2b0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005af2b2: mov ecx, esi */ r_ecx = r_esi;
    /* 005af2b4: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5af2bau); call_ind(t); }
    /* 005af2ba: mov ecx, esi */ r_ecx = r_esi;
    /* 005af2bc: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x5af2c1u); f_0051f894();
    /* 005af2c1: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5af2c6u); f_00807ac0();
    /* 005af2c6: push dword ptr [eax*4 + 0x9c14a4] */ { u32 v = R32((u32)(r_eax*4+0x9c14a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005af2cd: mov ecx, esi */ r_ecx = r_esi;
    /* 005af2cf: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5af2d4u); f_007879b8();
    /* 005af2d4: mov ecx, eax */ r_ecx = r_eax;
    /* 005af2d6: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 005af2d9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005af2db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005af2dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005af2dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af2de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005af2df: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5af2e4u); f_00814298();
    /* 005af2e4: push 0xfffffd00 */ { u32 v = 0xfffffd00u; r_esp -= 4; W32(r_esp, v); }
    /* 005af2e9: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5af2eeu); f_00814680();
    /* 005af2ee: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005af2f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005af2f2: mov ecx, esi */ r_ecx = r_esi;
    /* 005af2f4: call 0x5af444 */ r_esp -= 4; W32(r_esp, 0x5af2f9u); f_005af444();
    /* 005af2f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af2fb: jne 0x5af30b */ if (!fZ) goto L_005af30b;
L_005af2fd:; BB(0x005af2fd);
    /* 005af2fd: mov eax, 0xf */ r_eax = 0xfu;
    /* 005af302: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005af309: jmp 0x5af317 */ goto L_005af317;
L_005af30b:; BB(0x005af30b);
    /* 005af30b: mov eax, 0xe */ r_eax = 0xeu;
    /* 005af310: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
L_005af317:; BB(0x005af317);
    /* 005af317: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 005af31c: mov ecx, esi */ r_ecx = r_esi;
    /* 005af31e: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x5af323u); f_00779df0();
    /* 005af323: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 005af329: mov dword ptr [esi + 0x430], 0 */ W32((u32)(r_esi+0x430u), 0x0u);
    /* 005af333: mov ecx, esi */ r_ecx = r_esi;
    /* 005af335: push dword ptr [eax + 0x98] */ { u32 v = R32((u32)(r_eax+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 005af33b: call 0x5af50c */ r_esp -= 4; W32(r_esp, 0x5af340u); f_005af50c();
    /* 005af340: mov eax, dword ptr [esi + 0x3ec] */ r_eax = R32((u32)(r_esi+0x3ecu));
    /* 005af346: fstp dword ptr [esi + 0x448] */ W_F32((u32)(r_esi+0x448u), ST(0)); FPOP();
    /* 005af34c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af34e: mov dword ptr [esi + 0x450], 0 */ W32((u32)(r_esi+0x450u), 0x0u);
    /* 005af358: mov dword ptr [esi + 0x384], 0 */ W32((u32)(r_esi+0x384u), 0x0u);
    /* 005af362: je 0x5af3ea */ if (fZ) goto L_005af3ea;
L_005af368:; BB(0x005af368);
    /* 005af368: mov ebx, dword ptr [0xa74980] */ r_ebx = R32((u32)(0xa74980u));
    /* 005af36e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af370: je 0x5af3ea */ if (fZ) goto L_005af3ea;
L_005af372:; BB(0x005af372);
    /* 005af372: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
L_005af376:; BB(0x005af376);
    /* 005af376: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005af37a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af37b: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5af380u); f_007b4d18();
    /* 005af380: mov edi, eax */ r_edi = r_eax;
    /* 005af382: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005af385: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af387: je 0x5af3df */ if (fZ) goto L_005af3df;
L_005af389:; BB(0x005af389);
    /* 005af389: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 005af38f: cmp edx, dword ptr [esi + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af395: jne 0x5af3df */ if (!fZ) goto L_005af3df;
L_005af397:; BB(0x005af397);
    /* 005af397: mov ecx, esi */ r_ecx = r_esi;
    /* 005af399: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5af39eu); f_007751b0();
    /* 005af39e: fld dword ptr [0x92ab4c] */ FPUSH(R_F32((u32)(0x92ab4cu)));
    /* 005af3a4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005af3a6: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 005af3aa: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 005af3af: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005af3b4: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005af3b8: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005af3bc: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 005af3c0: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005af3c4: movzx eax, word ptr [esi + 0x2d8] */ r_eax = (u32)R16((u32)(r_esi+0x2d8u));
    /* 005af3cb: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 005af3cf: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005af3d2: mov dword ptr [edi + 0x428], edx */ W32((u32)(r_edi+0x428u), r_edx);
    /* 005af3d8: mov word ptr [edi + 0x42c], ax */ W16((u32)(r_edi+0x42cu), (u16)r_eax);
L_005af3df:; BB(0x005af3df);
    /* 005af3df: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 005af3e2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af3e4: jne 0x5af376 */ if (!fZ) goto L_005af376;
L_005af3e6:; BB(0x005af3e6);
    /* 005af3e6: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_005af3ea:; BB(0x005af3ea);
    /* 005af3ea: mov ecx, esi */ r_ecx = r_esi;
    /* 005af3ec: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x5af3f1u); f_00520bdc();
    /* 005af3f1: jmp 0x5af294 */ goto L_005af294;
}

void f_005af3f8(void) /* sub_5AF3F8 */
{
    FN_ENTER(0x005af3f8);
    /* 005af3f8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005af3fb: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005af3ff: fld dword ptr [0x92ab34] */ FPUSH(R_F32((u32)(0x92ab34u)));
    /* 005af405: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 005af408: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005af40b: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005af40e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005af412: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005af415: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005af419: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 005af41b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005af41d: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 005af420: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005af423: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 005af426: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005af428: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005af42b: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 005af42f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005af433: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 005af438: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af439: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5af43eu); f_0050b510();
    /* 005af43e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005af441: ret 4 */ FN_RET(0x005af3f8); r_esp += 8; return;
}

void f_005af444(void) /* sub_5AF444 */
{
    FN_ENTER(0x005af444);
    /* 005af444: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005af445: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005af446: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005af449: mov edi, ecx */ r_edi = r_ecx;
    /* 005af44b: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 005af44f: mov eax, dword ptr [edi + 0x30c] */ r_eax = R32((u32)(r_edi+0x30cu));
    /* 005af455: mov edx, dword ptr [edi + 0x314] */ r_edx = R32((u32)(r_edi+0x314u));
    /* 005af45b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005af45e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005af462: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005af46a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005af46d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af46e: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x5af473u); f_007828e4();
    /* 005af473: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005af474: fcomp dword ptr [0x92ab30] */ fx_compare(ST(0), R_F32((u32)(0x92ab30u))); FPOP();
    /* 005af47a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005af47c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005af47d: je 0x5af4f6 */ if (fZ) goto L_005af4f6;
L_005af47f:; BB(0x005af47f);
    /* 005af47f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005af482: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005af486: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005af488: fmul qword ptr [0x92a930] */ ST(0) = ST(0) * R_F64((u32)(0x92a930u));
    /* 005af48e: fdiv qword ptr [0x92a928] */ ST(0) = ST(0) / R_F64((u32)(0x92a928u));
    /* 005af494: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 005af498: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 005af49d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005af4a2: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005af4a6: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005af4aa: fistp dword ptr [ebx] */ W32((u32)(r_ebx), (u32)fx_int32(ST(0))); FPOP();
    /* 005af4ac: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005af4b0: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 005af4b3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5af4b8u); f_0082dcbc();
    /* 005af4b8: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 005af4bb: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005af4bf: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5af4c4u); f_0082ddd8();
    /* 005af4c4: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 005af4c8: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005af4cc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005af4cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af4d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005af4d1: call 0x7829cc */ r_esp -= 4; W32(r_esp, 0x5af4d6u); f_007829cc();
    /* 005af4d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005af4d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af4db: je 0x5af4e8 */ if (fZ) goto L_005af4e8;
L_005af4dd:; BB(0x005af4dd);
    /* 005af4dd: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005af4df: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005af4e1: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005af4e6: jmp 0x5af4fb */ goto L_005af4fb;
L_005af4e8:; BB(0x005af4e8);
    /* 005af4e8: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005af4ea: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005af4ef: add eax, 0xffffc000 */ {  u32 a = r_eax; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005af4f4: jmp 0x5af4fb */ goto L_005af4fb;
L_005af4f6:; BB(0x005af4f6);
    /* 005af4f6: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 005af4f9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_005af4fb:; BB(0x005af4fb);
    /* 005af4fb: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005af4fe: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 005af500: mov eax, ecx */ r_eax = r_ecx;
    /* 005af502: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005af505: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005af506: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005af507: ret 4 */ FN_RET(0x005af444); r_esp += 8; return;
}

void f_005af50c(void) /* sub_5AF50C */
{
    FN_ENTER(0x005af50c);
    /* 005af50c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005af50f: mov edx, dword ptr [ecx + 0xd8] */ r_edx = R32((u32)(r_ecx+0xd8u));
    /* 005af515: mov edx, dword ptr [edx + 0x94] */ r_edx = R32((u32)(r_edx+0x94u));
    /* 005af51b: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 005af521: mov eax, dword ptr [eax + edx*8 + 4] */ r_eax = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 005af525: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005af528: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005af52b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005af52e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005af531: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005af534: fadd dword ptr [eax*4 + 0x92a920] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x92a920u));
    /* 005af53b: fdiv dword ptr [esp + 0xc] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0xcu));
    /* 005af53f: fdivr dword ptr [0x92ab38] */ ST(0) = R_F32((u32)(0x92ab38u)) / ST(0);
    /* 005af545: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005af548: ret 4 */ FN_RET(0x005af50c); r_esp += 8; return;
}

void f_005af54c(void) /* sub_5AF54C */
{
    FN_ENTER(0x005af54c);
    /* 005af54c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005af54d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005af550: mov edi, ecx */ r_edi = r_ecx;
    /* 005af552: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005af556: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af559: je 0x5af6b6 */ if (fZ) goto L_005af6b6;
L_005af55f:; BB(0x005af55f);
    /* 005af55f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af562: je 0x5af66d */ if (fZ) goto L_005af66d;
L_005af568:; BB(0x005af568);
    /* 005af568: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af56a: jne 0x5af653 */ if (!fZ) goto L_005af653;
L_005af570:; BB(0x005af570);
    /* 005af570: mov ecx, edi */ r_ecx = r_edi;
    /* 005af572: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5af577u); f_007aa094();
    /* 005af577: mov eax, dword ptr [edi + 0x30c] */ r_eax = R32((u32)(r_edi+0x30cu));
    /* 005af57d: mov edx, dword ptr [edi + 0x310] */ r_edx = R32((u32)(r_edi+0x310u));
    /* 005af583: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005af586: mov eax, dword ptr [edi + 0x314] */ r_eax = R32((u32)(r_edi+0x314u));
    /* 005af58c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005af590: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005af594: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005af597: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af598: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x5af59du); f_007828e4();
    /* 005af59d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005af59e: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005af5a1: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005af5a5: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005af5a9: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005af5ad: mov ecx, edi */ r_ecx = r_edi;
    /* 005af5af: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005af5b2: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005af5b6: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x5af5bbu); f_005207c4();
    /* 005af5bb: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 005af5c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af5c3: jne 0x5af5e9 */ if (!fZ) goto L_005af5e9;
L_005af5c5:; BB(0x005af5c5);
    /* 005af5c5: fld dword ptr [0x92ab24] */ FPUSH(R_F32((u32)(0x92ab24u)));
    /* 005af5cb: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 005af5d1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005af5d3: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 005af5d9: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005af5db: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 005af5e1: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
    /* 005af5e7: jmp 0x5af642 */ goto L_005af642;
L_005af5e9:; BB(0x005af5e9);
    /* 005af5e9: fld dword ptr [0x92ab2c] */ FPUSH(R_F32((u32)(0x92ab2cu)));
    /* 005af5ef: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 005af5f4: push dword ptr [edi + 0x440] */ { u32 v = R32((u32)(r_edi+0x440u)); r_esp -= 4; W32(r_esp, v); }
    /* 005af5fa: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 005af600: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005af602: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005af605: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 005af60b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005af60d: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 005af613: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
    /* 005af619: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5af61eu); f_007a8c74();
    /* 005af61e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005af621: push 0x41b00000 */ { u32 v = 0x41b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005af626: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005af629: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 005af62c: mov ecx, edi */ r_ecx = r_edi;
    /* 005af62e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5af633u); f_007aaa30();
    /* 005af633: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af635: je 0x5af642 */ if (fZ) goto L_005af642;
L_005af637:; BB(0x005af637);
    /* 005af637: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005af63a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af63b: mov ecx, edi */ r_ecx = r_edi;
    /* 005af63d: call 0x5af3f8 */ r_esp -= 4; W32(r_esp, 0x5af642u); f_005af3f8();
L_005af642:; BB(0x005af642);
    /* 005af642: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005af644: mov ecx, edi */ r_ecx = r_edi;
    /* 005af646: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5af64cu); call_ind(t); }
    /* 005af64c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005af64f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005af650: ret 4 */ FN_RET(0x005af54c); r_esp += 8; return;
L_005af653:; BB(0x005af653);
    /* 005af653: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af656: jne 0x5af6af */ if (!fZ) goto L_005af6af;
L_005af658:; BB(0x005af658);
    /* 005af658: mov ecx, edi */ r_ecx = r_edi;
    /* 005af65a: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x5af65fu); f_0051f81c();
    /* 005af65f: mov ecx, edi */ r_ecx = r_edi;
    /* 005af661: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x5af666u); f_00520be8();
    /* 005af666: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005af669: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005af66a: ret 4 */ FN_RET(0x005af54c); r_esp += 8; return;
L_005af66d:; BB(0x005af66d);
    /* 005af66d: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005af673: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005af675: je 0x5af6af */ if (fZ) goto L_005af6af;
L_005af677:; BB(0x005af677);
    /* 005af677: mov eax, dword ptr [edi + 0x380] */ r_eax = R32((u32)(r_edi+0x380u));
    /* 005af67d: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af680: jne 0x5af692 */ if (!fZ) goto L_005af692;
L_005af682:; BB(0x005af682);
    /* 005af682: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005af684: mov ecx, edi */ r_ecx = r_edi;
    /* 005af686: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5af68bu); f_0051f62c();
    /* 005af68b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005af68e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005af68f: ret 4 */ FN_RET(0x005af54c); r_esp += 8; return;
L_005af692:; BB(0x005af692);
    /* 005af692: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af695: jne 0x5af6a7 */ if (!fZ) goto L_005af6a7;
L_005af697:; BB(0x005af697);
    /* 005af697: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005af699: mov ecx, edi */ r_ecx = r_edi;
    /* 005af69b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5af6a0u); f_0051f62c();
    /* 005af6a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005af6a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005af6a4: ret 4 */ FN_RET(0x005af54c); r_esp += 8; return;
L_005af6a7:; BB(0x005af6a7);
    /* 005af6a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af6a8: mov ecx, edi */ r_ecx = r_edi;
    /* 005af6aa: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5af6afu); f_0051f62c();
L_005af6af:; BB(0x005af6af);
    /* 005af6af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005af6b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005af6b3: ret 4 */ FN_RET(0x005af54c); r_esp += 8; return;
L_005af6b6:; BB(0x005af6b6);
    /* 005af6b6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005af6b8: mov ecx, edi */ r_ecx = r_edi;
    /* 005af6ba: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5af6c0u); call_ind(t); }
    /* 005af6c0: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 005af6c5: mov ecx, edi */ r_ecx = r_edi;
    /* 005af6c7: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x5af6ccu); f_00779df0();
    /* 005af6cc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005af6ce: mov dword ptr [edi + 0x434], edx */ W32((u32)(r_edi+0x434u), r_edx);
    /* 005af6d4: mov dword ptr [edi + 0x440], edx */ W32((u32)(r_edi+0x440u), r_edx);
    /* 005af6da: mov eax, 6 */ r_eax = 0x6u;
    /* 005af6df: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005af6e6: movsx eax, word ptr [edi + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 005af6ed: mov dword ptr [edi + 0x430], edx */ W32((u32)(r_edi+0x430u), r_edx);
    /* 005af6f3: movsx edx, word ptr [edi + 0x346] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x346u));
    /* 005af6fa: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005af6fc: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005af6ff: jge 0x5af731 */ if ((fS==fO)) goto L_005af731;
L_005af701:; BB(0x005af701);
    /* 005af701: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5af706u); f_00807ac0();
    /* 005af706: push dword ptr [eax*4 + 0x9c1480] */ { u32 v = R32((u32)(r_eax*4+0x9c1480u)); r_esp -= 4; W32(r_esp, v); }
    /* 005af70d: mov ecx, edi */ r_ecx = r_edi;
    /* 005af70f: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5af714u); f_007879b8();
    /* 005af714: mov ecx, eax */ r_ecx = r_eax;
    /* 005af716: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005af719: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005af71b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005af71c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005af71d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af71e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005af71f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5af724u); f_00814298();
    /* 005af724: push 0xfffffb00 */ { u32 v = 0xfffffb00u; r_esp -= 4; W32(r_esp, v); }
    /* 005af729: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5af72eu); f_00814680();
    /* 005af72e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005af731:; BB(0x005af731);
    /* 005af731: mov ecx, edi */ r_ecx = r_edi;
    /* 005af733: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x5af738u); f_00520bdc();
    /* 005af738: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005af73b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005af73c: ret 4 */ FN_RET(0x005af54c); r_esp += 8; return;
}

void f_005af740(void) /* sub_5AF740 */
{
    FN_ENTER(0x005af740);
    /* 005af740: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005af741: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005af742: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005af744: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005af748: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af74b: je 0x5af802 */ if (fZ) goto L_005af802;
L_005af751:; BB(0x005af751);
    /* 005af751: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af754: je 0x5af7d8 */ if (fZ) goto L_005af7d8;
L_005af75a:; BB(0x005af75a);
    /* 005af75a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005af75c: jne 0x5af7eb */ if (!fZ) goto L_005af7eb;
L_005af762:; BB(0x005af762);
    /* 005af762: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005af764: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5af769u); f_007aa094();
    /* 005af769: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005af76c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005af76e: call 0x5ae70c */ r_esp -= 4; W32(r_esp, 0x5af773u); f_005ae70c();
    /* 005af773: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 005af778: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005af77a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5af77fu); f_007aaa30();
    /* 005af77f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af781: je 0x5af7b3 */ if (fZ) goto L_005af7b3;
L_005af783:; BB(0x005af783);
    /* 005af783: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5af788u); f_00807ac0();
    /* 005af788: push dword ptr [eax*4 + 0x9c145c] */ { u32 v = R32((u32)(r_eax*4+0x9c145cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005af78f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005af791: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5af796u); f_007879b8();
    /* 005af796: mov ecx, eax */ r_ecx = r_eax;
    /* 005af798: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 005af79b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005af79d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005af79e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005af79f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af7a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005af7a1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5af7a6u); f_00814298();
    /* 005af7a6: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 005af7ab: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5af7b0u); f_00814680();
    /* 005af7b0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005af7b3:; BB(0x005af7b3);
    /* 005af7b3: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 005af7b9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005af7bc: mov dword ptr [ebx + 0x430], eax */ W32((u32)(r_ebx+0x430u), r_eax);
    /* 005af7c2: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af7c5: je 0x5af7f9 */ if (fZ) goto L_005af7f9;
L_005af7c7:; BB(0x005af7c7);
    /* 005af7c7: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af7ca: je 0x5af7f0 */ if (fZ) goto L_005af7f0;
L_005af7cc:; BB(0x005af7cc);
    /* 005af7cc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005af7ce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005af7d0: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5af7d6u); call_ind(t); }
    /* 005af7d6: jmp 0x5af7eb */ goto L_005af7eb;
L_005af7d8:; BB(0x005af7d8);
    /* 005af7d8: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 005af7de: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005af7e0: je 0x5af7eb */ if (fZ) goto L_005af7eb;
L_005af7e2:; BB(0x005af7e2);
    /* 005af7e2: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005af7e4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005af7e6: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5af7ebu); f_0051f62c();
L_005af7eb:; BB(0x005af7eb);
    /* 005af7eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005af7ec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005af7ed: ret 4 */ FN_RET(0x005af740); r_esp += 8; return;
L_005af7f0:; BB(0x005af7f0);
    /* 005af7f0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005af7f2: call 0x5af86c */ r_esp -= 4; W32(r_esp, 0x5af7f7u); f_005af86c();
    /* 005af7f7: jmp 0x5af7cc */ goto L_005af7cc;
L_005af7f9:; BB(0x005af7f9);
    /* 005af7f9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005af7fb: call 0x5af8b8 */ r_esp -= 4; W32(r_esp, 0x5af800u); f_005af8b8();
    /* 005af800: jmp 0x5af7cc */ goto L_005af7cc;
L_005af802:; BB(0x005af802);
    /* 005af802: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005af804: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005af806: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5af80cu); call_ind(t); }
    /* 005af80c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005af80e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005af810: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5af815u); f_0051f664();
    /* 005af815: mov dword ptr [ebx + 0x430], 0 */ W32((u32)(r_ebx+0x430u), 0x0u);
    /* 005af81f: mov eax, 0xb */ r_eax = 0xbu;
    /* 005af824: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 005af82b: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 005af831: mov ebx, dword ptr [0xa74978] */ r_ebx = R32((u32)(0xa74978u));
    /* 005af837: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005af839: je 0x5af7eb */ if (fZ) goto L_005af7eb;
L_005af83b:; BB(0x005af83b);
    /* 005af83b: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005af83e: mov esi, eax */ r_esi = r_eax;
L_005af840:; BB(0x005af840);
    /* 005af840: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 005af844: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005af845: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5af84au); f_007b4d18();
    /* 005af84a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005af84b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af84d: je 0x5af857 */ if (fZ) goto L_005af857;
L_005af84f:; BB(0x005af84f);
    /* 005af84f: cmp esi, dword ptr [eax + 0x3f0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005af855: je 0x5af860 */ if (fZ) goto L_005af860;
L_005af857:; BB(0x005af857);
    /* 005af857: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 005af85a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005af85c: jne 0x5af840 */ if (!fZ) goto L_005af840;
L_005af85e:; BB(0x005af85e);
    /* 005af85e: jmp 0x5af865 */ goto L_005af865;
L_005af860:; BB(0x005af860);
    /* 005af860: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 005af863: jmp 0x5af7eb */ goto L_005af7eb;
L_005af865:; BB(0x005af865);
    /* 005af865: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 005af868: jmp 0x5af7eb */ goto L_005af7eb;
}

void f_005af86c(void) /* sub_5AF86C */
{
    FN_ENTER(0x005af86c);
    /* 005af86c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005af86d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005af870: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005af872: movzx eax, word ptr [ebx + 0x3f4] */ r_eax = (u32)R16((u32)(r_ebx+0x3f4u));
    /* 005af879: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af87a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5af87fu); f_007b4d18();
    /* 005af87f: mov ecx, eax */ r_ecx = r_eax;
    /* 005af881: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005af884: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af886: je 0x5af8b1 */ if (fZ) goto L_005af8b1;
L_005af888:; BB(0x005af888);
    /* 005af888: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005af88a: mov dword ptr [esp], 0xb */ W32((u32)(r_esp), 0xbu);
    /* 005af891: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005af896: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 005af89e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af89f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af8a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af8a2: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005af8a7: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005af8a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005af8aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005af8ac: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x5af8afu); call_ind(t); }
    /* 005af8af: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005af8b1:; BB(0x005af8b1);
    /* 005af8b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005af8b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005af8b5: ret  */ FN_RET(0x005af86c); r_esp += 4; return;
}

void f_005af8b8(void) /* sub_5AF8B8 */
{
    FN_ENTER(0x005af8b8);
    /* 005af8b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005af8b9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005af8bc: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005af8be: movzx eax, word ptr [ebx + 0x3f4] */ r_eax = (u32)R16((u32)(r_ebx+0x3f4u));
    /* 005af8c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af8c6: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5af8cbu); f_007b4d18();
    /* 005af8cb: mov ecx, eax */ r_ecx = r_eax;
    /* 005af8cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005af8d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af8d2: je 0x5af8fd */ if (fZ) goto L_005af8fd;
L_005af8d4:; BB(0x005af8d4);
    /* 005af8d4: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005af8d6: mov dword ptr [esp], 0xc */ W32((u32)(r_esp), 0xcu);
    /* 005af8dd: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005af8e2: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 005af8ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af8eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af8ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af8ee: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005af8f3: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005af8f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005af8f6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005af8f8: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x5af8fbu); call_ind(t); }
    /* 005af8fb: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005af8fd:; BB(0x005af8fd);
    /* 005af8fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005af900: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005af901: ret  */ FN_RET(0x005af8b8); r_esp += 4; return;
}

void f_005af904(void) /* sub_5AF904 */
{
    FN_ENTER(0x005af904);
    /* 005af904: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005af905: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005af908: mov edi, ecx */ r_edi = r_ecx;
    /* 005af90a: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005af90e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af911: je 0x5afbb6 */ if (fZ) goto L_005afbb6;
L_005af917:; BB(0x005af917);
    /* 005af917: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af91a: je 0x5afade */ if (fZ) goto L_005afade;
L_005af920:; BB(0x005af920);
    /* 005af920: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af922: jne 0x5afaed */ if (!fZ) goto L_005afaed;
L_005af928:; BB(0x005af928);
    /* 005af928: mov ecx, edi */ r_ecx = r_edi;
    /* 005af92a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5af92fu); f_007aa094();
    /* 005af92f: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 005af935: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af937: jne 0x5afa64 */ if (!fZ) goto L_005afa64;
L_005af93d:; BB(0x005af93d);
    /* 005af93d: mov edx, dword ptr [edi + 0x434] */ r_edx = R32((u32)(r_edi+0x434u));
    /* 005af943: mov eax, dword ptr [edi + 0x434] */ r_eax = R32((u32)(r_edi+0x434u));
    /* 005af949: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005af94b: shl edx, 0xc */ { u32 c = (12u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005af94e: add edx, 0x1800 */ {  u32 a = r_edx; u32 b = 0x1800u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005af954: mov dword ptr [edi + 0x440], edx */ W32((u32)(r_edi+0x440u), r_edx);
    /* 005af95a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005af95c: je 0x5af966 */ if (fZ) goto L_005af966;
L_005af95e:; BB(0x005af95e);
    /* 005af95e: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005af960: mov dword ptr [edi + 0x440], edx */ W32((u32)(r_edi+0x440u), r_edx);
L_005af966:; BB(0x005af966);
    /* 005af966: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 005af96a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005af96c: jne 0x5af976 */ if (!fZ) goto L_005af976;
L_005af96e:; BB(0x005af96e);
    /* 005af96e: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005af970: mov dword ptr [edi + 0x440], edx */ W32((u32)(r_edi+0x440u), r_edx);
L_005af976:; BB(0x005af976);
    /* 005af976: add edx, dword ptr [edi + 0x60] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x60u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005af979: mov eax, dword ptr [edi + 0x434] */ r_eax = R32((u32)(r_edi+0x434u));
    /* 005af97f: mov dword ptr [edi + 0x440], edx */ W32((u32)(r_edi+0x440u), r_edx);
    /* 005af985: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005af988: mov dword ptr [edi + 0x434], eax */ W32((u32)(r_edi+0x434u), r_eax);
    /* 005af98e: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005af991: jle 0x5af99d */ if ((fZ||fS!=fO)) goto L_005af99d;
L_005af993:; BB(0x005af993);
    /* 005af993: mov dword ptr [edi + 0x430], 2 */ W32((u32)(r_edi+0x430u), 0x2u);
L_005af99d:; BB(0x005af99d);
    /* 005af99d: mov ecx, dword ptr [edi + 0x440] */ r_ecx = R32((u32)(r_edi+0x440u));
    /* 005af9a3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5af9a8u); f_0082dcbc();
    /* 005af9a8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005af9ab: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005af9ae: fmul dword ptr [0xa74910] */ ST(0) = ST(0) * R_F32((u32)(0xa74910u));
    /* 005af9b4: mov ecx, dword ptr [edi + 0x440] */ r_ecx = R32((u32)(r_edi+0x440u));
    /* 005af9ba: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005af9bd: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5af9c2u); f_0082ddd8();
    /* 005af9c2: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005af9c6: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005af9ca: fmul dword ptr [0xa74910] */ ST(0) = ST(0) * R_F32((u32)(0xa74910u));
    /* 005af9d0: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 005af9d3: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 005af9d6: mov eax, dword ptr [edi + 0x424] */ r_eax = R32((u32)(r_edi+0x424u));
    /* 005af9dc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005af9de: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 005af9e2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005af9e4: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 005af9e7: mov eax, dword ptr [edi + 0x424] */ r_eax = R32((u32)(r_edi+0x424u));
    /* 005af9ed: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 005af9f0: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 005af9f3: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 005af9f6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005af9f8: mov eax, dword ptr [edi + 0x424] */ r_eax = R32((u32)(r_edi+0x424u));
    /* 005af9fe: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 005afa01: mov ecx, dword ptr [edi + 0x424] */ r_ecx = R32((u32)(r_edi+0x424u));
    /* 005afa07: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5afa0cu); f_007b6880();
    /* 005afa0c: mov eax, dword ptr [edi + 0x424] */ r_eax = R32((u32)(r_edi+0x424u));
    /* 005afa12: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 005afa18: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005afa1b: test eax, 0x380000 */ {  u32 a = r_eax; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afa20: jne 0x5afaed */ if (!fZ) goto L_005afaed;
L_005afa26:; BB(0x005afa26);
    /* 005afa26: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005afa29: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 005afa2b: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005afa2f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005afa31: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 005afa34: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005afa36: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 005afa38: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 005afa3c: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005afa3f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005afa41: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005afa44: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005afa48: mov ecx, edi */ r_ecx = r_edi;
    /* 005afa4a: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 005afa52: call 0x520940 */ r_esp -= 4; W32(r_esp, 0x5afa57u); f_00520940();
    /* 005afa57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afa59: jne 0x5afaed */ if (!fZ) goto L_005afaed;
L_005afa5f:; BB(0x005afa5f);
    /* 005afa5f: jmp 0x5afaf4 */ goto L_005afaf4;
L_005afa64:; BB(0x005afa64);
    /* 005afa64: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afa67: jne 0x5afaed */ if (!fZ) goto L_005afaed;
L_005afa6d:; BB(0x005afa6d);
    /* 005afa6d: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005afa73: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005afa75: je 0x5afa88 */ if (fZ) goto L_005afa88;
L_005afa77:; BB(0x005afa77);
    /* 005afa77: mov ecx, edi */ r_ecx = r_edi;
    /* 005afa79: call 0x5afbf0 */ r_esp -= 4; W32(r_esp, 0x5afa7eu); f_005afbf0();
    /* 005afa7e: mov dword ptr [edi + 0x430], 2 */ W32((u32)(r_edi+0x430u), 0x2u);
L_005afa88:; BB(0x005afa88);
    /* 005afa88: mov ecx, edi */ r_ecx = r_edi;
    /* 005afa8a: call 0x5afc3c */ r_esp -= 4; W32(r_esp, 0x5afa8fu); f_005afc3c();
    /* 005afa8f: push 0x3fe66666 */ { u32 v = 0x3fe66666u; r_esp -= 4; W32(r_esp, v); }
    /* 005afa94: push dword ptr [edi + 0x3b0] */ { u32 v = R32((u32)(r_edi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005afa9a: mov ecx, edi */ r_ecx = r_edi;
    /* 005afa9c: push dword ptr [edi + 0x3a8] */ { u32 v = R32((u32)(r_edi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005afaa2: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x5afaa7u); f_005207c4();
    /* 005afaa7: push 0xf00 */ { u32 v = 0xf00u; r_esp -= 4; W32(r_esp, v); }
    /* 005afaac: push dword ptr [edi + 0x440] */ { u32 v = R32((u32)(r_edi+0x440u)); r_esp -= 4; W32(r_esp, v); }
    /* 005afab2: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005afab5: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5afabau); f_007a8c74();
    /* 005afaba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005afabd: push dword ptr [edi + 0x440] */ { u32 v = R32((u32)(r_edi+0x440u)); r_esp -= 4; W32(r_esp, v); }
    /* 005afac3: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 005afac6: mov ecx, edi */ r_ecx = r_edi;
    /* 005afac8: call 0x5ae70c */ r_esp -= 4; W32(r_esp, 0x5afacdu); f_005ae70c();
    /* 005afacd: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005afacf: mov ecx, edi */ r_ecx = r_edi;
    /* 005afad1: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5afad7u); call_ind(t); }
    /* 005afad7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005afada: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005afadb: ret 4 */ FN_RET(0x005af904); r_esp += 8; return;
L_005afade:; BB(0x005afade);
    /* 005afade: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 005afae4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afae7: je 0x5afb8c */ if (fZ) goto L_005afb8c;
L_005afaed:; BB(0x005afaed);
    /* 005afaed: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005afaf0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005afaf1: ret 4 */ FN_RET(0x005af904); r_esp += 8; return;
L_005afaf4:; BB(0x005afaf4);
    /* 005afaf4: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 005afafa: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 005afb00: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005afb04: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005afb08: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 005afb0b: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 005afb11: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005afb15: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005afb19: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005afb1d: lea eax, [edi + 0x128] */ r_eax = (u32)(r_edi+0x128u);
    /* 005afb23: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 005afb27: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 005afb2b: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 005afb2f: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 005afb33: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 005afb35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005afb36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005afb37: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x5afb3cu); f_007806dc();
    /* 005afb3c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005afb3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afb41: je 0x5afaed */ if (fZ) goto L_005afaed;
L_005afb43:; BB(0x005afb43);
    /* 005afb43: mov ecx, dword ptr [edi + 0x440] */ r_ecx = R32((u32)(r_edi+0x440u));
    /* 005afb49: mov dword ptr [edi + 0x430], 1 */ W32((u32)(r_edi+0x430u), 0x1u);
    /* 005afb53: mov eax, 0x12 */ r_eax = 0x12u;
    /* 005afb58: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005afb5f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5afb64u); f_0082dcbc();
    /* 005afb64: mov ecx, dword ptr [edi + 0x440] */ r_ecx = R32((u32)(r_edi+0x440u));
    /* 005afb6a: fstp dword ptr [edi + 0x3a8] */ W_F32((u32)(r_edi+0x3a8u), ST(0)); FPOP();
    /* 005afb70: mov dword ptr [edi + 0x3ac], 0 */ W32((u32)(r_edi+0x3acu), 0x0u);
    /* 005afb7a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5afb7fu); f_0082ddd8();
    /* 005afb7f: fstp dword ptr [edi + 0x3b0] */ W_F32((u32)(r_edi+0x3b0u), ST(0)); FPOP();
    /* 005afb85: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005afb88: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005afb89: ret 4 */ FN_RET(0x005af904); r_esp += 8; return;
L_005afb8c:; BB(0x005afb8c);
    /* 005afb8c: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 005afb92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afb94: je 0x5afba6 */ if (fZ) goto L_005afba6;
L_005afb96:; BB(0x005afb96);
    /* 005afb96: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005afb98: mov ecx, edi */ r_ecx = r_edi;
    /* 005afb9a: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5afb9fu); f_0051f62c();
    /* 005afb9f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005afba2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005afba3: ret 4 */ FN_RET(0x005af904); r_esp += 8; return;
L_005afba6:; BB(0x005afba6);
    /* 005afba6: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005afba8: mov ecx, edi */ r_ecx = r_edi;
    /* 005afbaa: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5afbafu); f_0051f62c();
    /* 005afbaf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005afbb2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005afbb3: ret 4 */ FN_RET(0x005af904); r_esp += 8; return;
L_005afbb6:; BB(0x005afbb6);
    /* 005afbb6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005afbb8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005afbba: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005afbc1: mov ecx, edi */ r_ecx = r_edi;
    /* 005afbc3: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5afbc8u); f_0051f664();
    /* 005afbc8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005afbca: mov ecx, edi */ r_ecx = r_edi;
    /* 005afbcc: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5afbd2u); call_ind(t); }
    /* 005afbd2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005afbd4: mov dword ptr [edi + 0x430], eax */ W32((u32)(r_edi+0x430u), r_eax);
    /* 005afbda: mov dword ptr [edi + 0x440], eax */ W32((u32)(r_edi+0x440u), r_eax);
    /* 005afbe0: mov dword ptr [edi + 0x434], eax */ W32((u32)(r_edi+0x434u), r_eax);
    /* 005afbe6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005afbe9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005afbea: ret 4 */ FN_RET(0x005af904); r_esp += 8; return;
}

void f_005afbf0(void) /* sub_5AFBF0 */
{
    FN_ENTER(0x005afbf0);
    /* 005afbf0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005afbf1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005afbf2: mov esi, ecx */ r_esi = r_ecx;
    /* 005afbf4: mov eax, dword ptr [esi + 0x3ec] */ r_eax = R32((u32)(r_esi+0x3ecu));
    /* 005afbfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afbfc: je 0x5afc0e */ if (fZ) goto L_005afc0e;
L_005afbfe:; BB(0x005afbfe);
    /* 005afbfe: push 0x44098000 */ { u32 v = 0x44098000u; r_esp -= 4; W32(r_esp, v); }
    /* 005afc03: mov ecx, esi */ r_ecx = r_esi;
    /* 005afc05: call 0x521010 */ r_esp -= 4; W32(r_esp, 0x5afc0au); f_00521010();
    /* 005afc0a: mov ebp, eax */ r_ebp = r_eax;
    /* 005afc0c: jmp 0x5afc1c */ goto L_005afc1c;
L_005afc0e:; BB(0x005afc0e);
    /* 005afc0e: push 0x43e10000 */ { u32 v = 0x43e10000u; r_esp -= 4; W32(r_esp, v); }
    /* 005afc13: mov ecx, esi */ r_ecx = r_esi;
    /* 005afc15: call 0x521010 */ r_esp -= 4; W32(r_esp, 0x5afc1au); f_00521010();
    /* 005afc1a: mov ebp, eax */ r_ebp = r_eax;
L_005afc1c:; BB(0x005afc1c);
    /* 005afc1c: push dword ptr [esi + 0x398] */ { u32 v = R32((u32)(r_esi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 005afc22: mov ecx, esi */ r_ecx = r_esi;
    /* 005afc24: call 0x786598 */ r_esp -= 4; W32(r_esp, 0x5afc29u); f_00786598();
    /* 005afc29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005afc2b: jne 0x5afc36 */ if (!fZ) goto L_005afc36;
L_005afc2d:; BB(0x005afc2d);
    /* 005afc2d: mov ecx, esi */ r_ecx = r_esi;
    /* 005afc2f: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x5afc34u); f_00520f68();
    /* 005afc34: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_005afc36:; BB(0x005afc36);
    /* 005afc36: mov eax, ebp */ r_eax = r_ebp;
    /* 005afc38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005afc39: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005afc3a: ret  */ FN_RET(0x005afbf0); r_esp += 4; return;
}

void f_005afc3c(void) /* sub_5AFC3C */
{
    FN_ENTER(0x005afc3c);
    /* 005afc3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005afc3d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005afc3f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005afc41: push 0x41900000 */ { u32 v = 0x41900000u; r_esp -= 4; W32(r_esp, v); }
    /* 005afc46: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5afc4bu); f_007aaa30();
    /* 005afc4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005afc4d: je 0x5afc7d */ if (fZ) goto L_005afc7d;
L_005afc4f:; BB(0x005afc4f);
    /* 005afc4f: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5afc54u); f_00807ac0();
    /* 005afc54: push dword ptr [eax*4 + 0x9c13f0] */ { u32 v = R32((u32)(r_eax*4+0x9c13f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005afc5b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005afc5d: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5afc62u); f_007879b8();
    /* 005afc62: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005afc65: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005afc67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005afc68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005afc69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005afc6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005afc6b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5afc70u); f_00814298();
    /* 005afc70: push 0xfffff000 */ { u32 v = 0xfffff000u; r_esp -= 4; W32(r_esp, v); }
    /* 005afc75: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5afc7au); f_00814680();
    /* 005afc7a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005afc7d:; BB(0x005afc7d);
    /* 005afc7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005afc7e: ret  */ FN_RET(0x005afc3c); r_esp += 4; return;
}

void f_005afc80(void) /* sub_5AFC80 */
{
    FN_ENTER(0x005afc80);
    /* 005afc80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005afc81: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005afc84: mov edi, ecx */ r_edi = r_ecx;
    /* 005afc86: fld dword ptr [edi + 0x448] */ FPUSH(R_F32((u32)(r_edi+0x448u)));
    /* 005afc8c: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005afc90: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afc93: je 0x5afdbc */ if (fZ) goto L_005afdbc;
L_005afc99:; BB(0x005afc99);
    /* 005afc99: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afc9c: je 0x5afd78 */ if (fZ) goto L_005afd78;
L_005afca2:; BB(0x005afca2);
    /* 005afca2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005afca4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afca6: jne 0x5afdb5 */ if (!fZ) goto L_005afdb5;
L_005afcac:; BB(0x005afcac);
    /* 005afcac: add dword ptr [edi + 0x430], 1 */ { u32 ad = (u32)(r_edi+0x430u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005afcb3: mov ecx, edi */ r_ecx = r_edi;
    /* 005afcb5: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5afcbau); f_007aa094();
    /* 005afcba: mov ecx, edi */ r_ecx = r_edi;
    /* 005afcbc: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x5afcc1u); f_00521238();
    /* 005afcc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afcc3: je 0x5afdb5 */ if (fZ) goto L_005afdb5;
L_005afcc9:; BB(0x005afcc9);
    /* 005afcc9: mov ecx, edi */ r_ecx = r_edi;
    /* 005afccb: call 0x5afee4 */ r_esp -= 4; W32(r_esp, 0x5afcd0u); f_005afee4();
    /* 005afcd0: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 005afcd5: push dword ptr [edi + 0x444] */ { u32 v = R32((u32)(r_edi+0x444u)); r_esp -= 4; W32(r_esp, v); }
    /* 005afcdb: push dword ptr [edi + 0x440] */ { u32 v = R32((u32)(r_edi+0x440u)); r_esp -= 4; W32(r_esp, v); }
    /* 005afce1: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5afce6u); f_007a8c74();
    /* 005afce6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005afce9: mov dword ptr [edi + 0x440], eax */ W32((u32)(r_edi+0x440u), r_eax);
    /* 005afcef: mov ecx, eax */ r_ecx = r_eax;
    /* 005afcf1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5afcf6u); f_0082dcbc();
    /* 005afcf6: fld dword ptr [0x92aaf0] */ FPUSH(R_F32((u32)(0x92aaf0u)));
    /* 005afcfc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005afcfe: fadd dword ptr [edi + 0x464] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x464u));
    /* 005afd04: mov ecx, dword ptr [edi + 0x440] */ r_ecx = R32((u32)(r_edi+0x440u));
    /* 005afd0a: fstp dword ptr [edi + 0x39c] */ W_F32((u32)(r_edi+0x39cu), ST(0)); FPOP();
    /* 005afd10: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5afd15u); f_0082ddd8();
    /* 005afd15: fld dword ptr [0x92aaf0] */ FPUSH(R_F32((u32)(0x92aaf0u)));
    /* 005afd1b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005afd1d: fadd dword ptr [edi + 0x46c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x46cu));
    /* 005afd23: fstp dword ptr [edi + 0x3a4] */ W_F32((u32)(r_edi+0x3a4u), ST(0)); FPOP();
    /* 005afd29: mov ecx, edi */ r_ecx = r_edi;
    /* 005afd2b: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5afd30u); f_00521410();
    /* 005afd30: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005afd35: mov ecx, edi */ r_ecx = r_edi;
    /* 005afd37: call 0x5b07d8 */ r_esp -= 4; W32(r_esp, 0x5afd3cu); f_005b07d8();
    /* 005afd3c: push dword ptr [edi + 0x418] */ { u32 v = R32((u32)(r_edi+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 005afd42: push 0x500 */ { u32 v = 0x500u; r_esp -= 4; W32(r_esp, v); }
    /* 005afd47: fld dword ptr [edi + 0x418] */ FPUSH(R_F32((u32)(r_edi+0x418u)));
    /* 005afd4d: fmul dword ptr [0x92aaec] */ ST(0) = ST(0) * R_F32((u32)(0x92aaecu));
    /* 005afd53: fstp dword ptr [edi + 0xc8] */ W_F32((u32)(r_edi+0xc8u), ST(0)); FPOP();
    /* 005afd59: mov ecx, edi */ r_ecx = r_edi;
    /* 005afd5b: call 0x521528 */ r_esp -= 4; W32(r_esp, 0x5afd60u); f_00521528();
    /* 005afd60: mov ecx, edi */ r_ecx = r_edi;
    /* 005afd62: call 0x5ae68c */ r_esp -= 4; W32(r_esp, 0x5afd67u); f_005ae68c();
    /* 005afd67: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005afd69: mov ecx, edi */ r_ecx = r_edi;
    /* 005afd6b: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5afd71u); call_ind(t); }
    /* 005afd71: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005afd74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005afd75: ret 4 */ FN_RET(0x005afc80); r_esp += 8; return;
L_005afd78:; BB(0x005afd78);
    /* 005afd78: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 005afd7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afd80: je 0x5afdaa */ if (fZ) goto L_005afdaa;
L_005afd82:; BB(0x005afd82);
    /* 005afd82: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 005afd88: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005afd8d: jg 0x5afdaa */ if ((!fZ&&fS==fO)) goto L_005afdaa;
L_005afd8f:; BB(0x005afd8f);
    /* 005afd8f: fcomp dword ptr [edi + 0x3b4] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3b4u))); FPOP();
    /* 005afd95: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005afd97: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005afd98: jbe 0x5afdb5 */ if ((fC||fZ)) goto L_005afdb5;
L_005afd9a:; BB(0x005afd9a);
    /* 005afd9a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005afd9c: mov ecx, edi */ r_ecx = r_edi;
    /* 005afd9e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5afda3u); f_0051f62c();
    /* 005afda3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005afda6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005afda7: ret 4 */ FN_RET(0x005afc80); r_esp += 8; return;
L_005afdaa:; BB(0x005afdaa);
    /* 005afdaa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005afdac: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005afdae: mov ecx, edi */ r_ecx = r_edi;
    /* 005afdb0: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5afdb5u); f_0051f62c();
L_005afdb5:; BB(0x005afdb5);
    /* 005afdb5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005afdb8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005afdb9: ret 4 */ FN_RET(0x005afc80); r_esp += 8; return;
L_005afdbc:; BB(0x005afdbc);
    /* 005afdbc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005afdbe: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005afdc0: mov eax, 1 */ r_eax = 0x1u;
    /* 005afdc5: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005afdcc: mov ecx, edi */ r_ecx = r_edi;
    /* 005afdce: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5afdd3u); f_0051f664();
    /* 005afdd3: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005afdd5: mov ecx, edi */ r_ecx = r_edi;
    /* 005afdd7: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5afdddu); call_ind(t); }
    /* 005afddd: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 005afde0: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 005afde3: mov dword ptr [edi + 0x414], 0x3fcccccd */ W32((u32)(r_edi+0x414u), 0x3fcccccdu);
    /* 005afded: mov dword ptr [edi + 0x464], edx */ W32((u32)(r_edi+0x464u), r_edx);
    /* 005afdf3: mov dword ptr [edi + 0x430], 0 */ W32((u32)(r_edi+0x430u), 0x0u);
    /* 005afdfd: mov dword ptr [edi + 0x468], eax */ W32((u32)(r_edi+0x468u), r_eax);
    /* 005afe03: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 005afe06: mov dword ptr [edi + 0x46c], eax */ W32((u32)(r_edi+0x46cu), r_eax);
    /* 005afe0c: push 0x3fcccccd */ { u32 v = 0x3fcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005afe11: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 005afe16: call 0x782a34 */ r_esp -= 4; W32(r_esp, 0x5afe1bu); f_00782a34();
    /* 005afe1b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005afe1d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005afe20: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 005afe23: mov dword ptr [edi + 0x444], eax */ W32((u32)(r_edi+0x444u), r_eax);
    /* 005afe29: mov ecx, edi */ r_ecx = r_edi;
    /* 005afe2b: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x5afe30u); f_00520f04();
    /* 005afe30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afe32: je 0x5afe9e */ if (fZ) goto L_005afe9e;
L_005afe34:; BB(0x005afe34);
    /* 005afe34: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 005afe37: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5afe3cu); f_0082dcbc();
    /* 005afe3c: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 005afe3f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005afe42: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5afe47u); f_0082ddd8();
    /* 005afe47: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 005afe4d: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 005afe50: fsub dword ptr [edi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x38u));
    /* 005afe53: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 005afe56: fsub dword ptr [edi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x40u));
    /* 005afe59: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005afe5b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005afe5f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005afe63: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 005afe67: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005afe6a: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005afe6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005afe6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005afe70: call 0x7829cc */ r_esp -= 4; W32(r_esp, 0x5afe75u); f_007829cc();
    /* 005afe75: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005afe78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afe7a: je 0x5afe8d */ if (fZ) goto L_005afe8d;
L_005afe7c:; BB(0x005afe7c);
    /* 005afe7c: mov dword ptr [edi + 0x440], 0x5000 */ W32((u32)(r_edi+0x440u), 0x5000u);
    /* 005afe86: mov eax, 0x5000 */ r_eax = 0x5000u;
    /* 005afe8b: jmp 0x5afed0 */ goto L_005afed0;
L_005afe8d:; BB(0x005afe8d);
    /* 005afe8d: mov dword ptr [edi + 0x440], 0xffffb000 */ W32((u32)(r_edi+0x440u), 0xffffb000u);
    /* 005afe97: mov eax, 0xffffb000 */ r_eax = 0xffffb000u;
    /* 005afe9c: jmp 0x5afed0 */ goto L_005afed0;
L_005afe9e:; BB(0x005afe9e);
    /* 005afe9e: mov ecx, edi */ r_ecx = r_edi;
    /* 005afea0: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5afea5u); f_007751b0();
    /* 005afea5: fcomp dword ptr [0x92aaf4] */ fx_compare(ST(0), R_F32((u32)(0x92aaf4u))); FPOP();
    /* 005afeab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005afead: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005afeae: jae 0x5afec1 */ if (!fC) goto L_005afec1;
L_005afeb0:; BB(0x005afeb0);
    /* 005afeb0: mov dword ptr [edi + 0x440], 0x5000 */ W32((u32)(r_edi+0x440u), 0x5000u);
    /* 005afeba: mov eax, 0x5000 */ r_eax = 0x5000u;
    /* 005afebf: jmp 0x5afed0 */ goto L_005afed0;
L_005afec1:; BB(0x005afec1);
    /* 005afec1: mov dword ptr [edi + 0x440], 0xffffb000 */ W32((u32)(r_edi+0x440u), 0xffffb000u);
    /* 005afecb: mov eax, 0xffffb000 */ r_eax = 0xffffb000u;
L_005afed0:; BB(0x005afed0);
    /* 005afed0: add eax, dword ptr [edi + 0x444] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x444u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005afed6: mov dword ptr [edi + 0x440], eax */ W32((u32)(r_edi+0x440u), r_eax);
    /* 005afedc: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005afedf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005afee0: ret 4 */ FN_RET(0x005afc80); r_esp += 8; return;
}

void f_005afee4(void) /* sub_5AFEE4 */
{
    FN_ENTER(0x005afee4);
    /* 005afee4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005afee5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005afee7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005afee9: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005afeee: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5afef3u); f_007aaa30();
    /* 005afef3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afef5: jne 0x5aff07 */ if (!fZ) goto L_005aff07;
L_005afef7:; BB(0x005afef7);
    /* 005afef7: push 0x41c00000 */ { u32 v = 0x41c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005afefc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005afefe: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5aff03u); f_007aaa30();
    /* 005aff03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005aff05: je 0x5aff35 */ if (fZ) goto L_005aff35;
L_005aff07:; BB(0x005aff07);
    /* 005aff07: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5aff0cu); f_00807ac0();
    /* 005aff0c: push dword ptr [eax*4 + 0x9c13f0] */ { u32 v = R32((u32)(r_eax*4+0x9c13f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005aff13: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005aff15: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5aff1au); f_007879b8();
    /* 005aff1a: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005aff1d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005aff1f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aff20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aff21: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005aff22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aff23: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5aff28u); f_00814298();
    /* 005aff28: push 0xfffff000 */ { u32 v = 0xfffff000u; r_esp -= 4; W32(r_esp, v); }
    /* 005aff2d: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5aff32u); f_00814680();
    /* 005aff32: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005aff35:; BB(0x005aff35);
    /* 005aff35: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005aff36: ret  */ FN_RET(0x005afee4); r_esp += 4; return;
}

void f_005aff38(void) /* sub_5AFF38 */
{
    FN_ENTER(0x005aff38);
    /* 005aff38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aff39: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005aff3a: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005aff3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005aff3f: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005aff43: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aff46: je 0x5b00e8 */ if (fZ) goto L_005b00e8;
L_005aff4c:; BB(0x005aff4c);
    /* 005aff4c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aff4f: je 0x5b00b0 */ if (fZ) goto L_005b00b0;
L_005aff55:; BB(0x005aff55);
    /* 005aff55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aff57: jne 0x5b0099 */ if (!fZ) goto L_005b0099;
L_005aff5d:; BB(0x005aff5d);
    /* 005aff5d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005aff5f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5aff64u); f_007aa094();
    /* 005aff64: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 005aff69: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005aff6b: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5aff70u); f_007aaa30();
    /* 005aff70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aff72: je 0x5aff98 */ if (fZ) goto L_005aff98;
L_005aff74:; BB(0x005aff74);
    /* 005aff74: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5aff79u); f_00807ac0();
    /* 005aff79: push dword ptr [eax*4 + 0x9c1510] */ { u32 v = R32((u32)(r_eax*4+0x9c1510u)); r_esp -= 4; W32(r_esp, v); }
    /* 005aff80: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005aff82: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5aff87u); f_007879b8();
    /* 005aff87: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 005aff8a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005aff8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aff8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aff8e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aff8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aff90: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5aff95u); f_00814298();
    /* 005aff95: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005aff98:; BB(0x005aff98);
    /* 005aff98: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 005aff9e: fcom dword ptr [0x92aad4] */ fx_compare(ST(0), R_F32((u32)(0x92aad4u))); 
    /* 005affa4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005affa6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005affa7: ja 0x5affad */ if ((!fC&&!fZ)) goto L_005affad;
L_005affa9:; BB(0x005affa9);
    /* 005affa9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005affab: jmp 0x5afffb */ goto L_005afffb;
L_005affad:; BB(0x005affad);
    /* 005affad: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005affb1: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005affb6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005affbb: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005affbf: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005affc3: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005affc7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005affcb: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 005affcf: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 005affd4: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005affd6: mov eax, ebp */ r_eax = r_ebp;
    /* 005affd8: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005affdb: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005affdd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005affe0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005affe2: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 005affe4: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 005affe8: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005affec: fcomp dword ptr [0x92aadc] */ fx_compare(ST(0), R_F32((u32)(0x92aadcu))); FPOP();
    /* 005afff2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005afff4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005afff5: je 0x5b00dc */ if (fZ) goto L_005b00dc;
L_005afffb:; BB(0x005afffb);
    /* 005afffb: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 005b0001: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0003: je 0x5b0010 */ if (fZ) goto L_005b0010;
L_005b0005:; BB(0x005b0005);
    /* 005b0005: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b0008: mov dword ptr [ebx + 0x3cc], eax */ W32((u32)(r_ebx+0x3ccu), r_eax);
    /* 005b000e: jmp 0x5b0087 */ goto L_005b0087;
L_005b0010:; BB(0x005b0010);
    /* 005b0010: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 005b0016: fcom dword ptr [0x92aad0] */ fx_compare(ST(0), R_F32((u32)(0x92aad0u))); 
    /* 005b001c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b001e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b001f: ja 0x5b0025 */ if ((!fC&&!fZ)) goto L_005b0025;
L_005b0021:; BB(0x005b0021);
    /* 005b0021: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b0023: jmp 0x5b0087 */ goto L_005b0087;
L_005b0025:; BB(0x005b0025);
    /* 005b0025: fcomp dword ptr [0xa74914] */ fx_compare(ST(0), R_F32((u32)(0xa74914u))); FPOP();
    /* 005b002b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b002d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b002e: jae 0x5b0087 */ if (!fC) goto L_005b0087;
L_005b0030:; BB(0x005b0030);
    /* 005b0030: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0031: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 005b0037: call 0x772c08 */ r_esp -= 4; W32(r_esp, 0x5b003cu); f_00772c08();
    /* 005b003c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005b003e: jl 0x5b0087 */ if ((fS!=fO)) goto L_005b0087;
L_005b0040:; BB(0x005b0040);
    /* 005b0040: movsx eax, word ptr [ebx + 0x2c4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2c4u));
    /* 005b0047: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 005b004d: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 005b004f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005b0053: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005b0057: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005b005b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b005d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005b0060: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005b0065: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0066: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0067: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0068: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b006c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b006e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b006f: call dword ptr [ebp + 0x60] */ { u32 t = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, 0x5b0072u); call_ind(t); }
    /* 005b0072: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b0074: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0076: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b0078: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b007du); f_0051f62c();
    /* 005b007d: mov dword ptr [ebx + 0x3cc], 0x3c */ W32((u32)(r_ebx+0x3ccu), 0x3cu);
L_005b0087:; BB(0x005b0087);
    /* 005b0087: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b0089: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b008b: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5b0091u); call_ind(t); }
    /* 005b0091: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0094: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b0095: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0096: ret 4 */ FN_RET(0x005aff38); r_esp += 8; return;
L_005b0099:; BB(0x005b0099);
    /* 005b0099: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b009c: jne 0x5b00d4 */ if (!fZ) goto L_005b00d4;
L_005b009e:; BB(0x005b009e);
    /* 005b009e: mov dword ptr [ebx + 0x420], 0 */ W32((u32)(r_ebx+0x420u), 0x0u);
    /* 005b00a8: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b00ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b00ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b00ad: ret 4 */ FN_RET(0x005aff38); r_esp += 8; return;
L_005b00b0:; BB(0x005b00b0);
    /* 005b00b0: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 005b00b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b00b8: je 0x5b00cb */ if (fZ) goto L_005b00cb;
L_005b00ba:; BB(0x005b00ba);
    /* 005b00ba: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 005b00c0: fcomp dword ptr [0xa74914] */ fx_compare(ST(0), R_F32((u32)(0xa74914u))); FPOP();
    /* 005b00c6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b00c8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b00c9: jb 0x5b00d4 */ if (fC) goto L_005b00d4;
L_005b00cb:; BB(0x005b00cb);
    /* 005b00cb: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005b00cd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b00cf: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b00d4u); f_0051f62c();
L_005b00d4:; BB(0x005b00d4);
    /* 005b00d4: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b00d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b00d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b00d9: ret 4 */ FN_RET(0x005aff38); r_esp += 8; return;
L_005b00dc:; BB(0x005b00dc);
    /* 005b00dc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b00de: call 0x5b0130 */ r_esp -= 4; W32(r_esp, 0x5b00e3u); f_005b0130();
    /* 005b00e3: jmp 0x5afffb */ goto L_005afffb;
L_005b00e8:; BB(0x005b00e8);
    /* 005b00e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b00ea: call 0x5b10fc */ r_esp -= 4; W32(r_esp, 0x5b00efu); f_005b10fc();
    /* 005b00ef: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005b00f1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b00f3: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5b00f8u); f_0051f664();
    /* 005b00f8: mov eax, 0xb */ r_eax = 0xbu;
    /* 005b00fd: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 005b0104: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b0109u); f_00807ac0();
    /* 005b0109: push dword ptr [eax*4 + 0x9c145c] */ { u32 v = R32((u32)(r_eax*4+0x9c145cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b0110: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b0112: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5b0117u); f_007879b8();
    /* 005b0117: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b011a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b011c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b011d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b011e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b011f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0120: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b0125u); f_00814298();
    /* 005b0125: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b0128: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b012b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b012c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b012d: ret 4 */ FN_RET(0x005aff38); r_esp += 8; return;
}

