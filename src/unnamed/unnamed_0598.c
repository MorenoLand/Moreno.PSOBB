#include "protos.h"

void f_0059802c(void) /* sub_59802C */
{
    FN_ENTER(0x0059802c);
    /* 0059802c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059802d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0059802f: mov ecx, dword ptr [ebx + 0x390] */ r_ecx = R32((u32)(r_ebx+0x390u));
    /* 00598035: mov dword ptr [ebx + 0x398], 0x5a */ W32((u32)(r_ebx+0x398u), 0x5au);
    /* 0059803f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00598041: mov dword ptr [ebx + 0x39c], 0x13 */ W32((u32)(r_ebx+0x39cu), 0x13u);
    /* 0059804b: call 0x599c7c */ r_esp -= 4; W32(r_esp, 0x598050u); f_00599c7c();
    /* 00598050: mov edx, dword ptr [ebx + 0x394] */ r_edx = R32((u32)(r_ebx+0x394u));
    /* 00598056: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00598059: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059805e: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00598061: mov dword ptr [ebx + 0x3f4], 1 */ W32((u32)(r_ebx+0x3f4u), 0x1u);
    /* 0059806b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059806c: ret  */ FN_RET(0x0059802c); r_esp += 4; return;
}

void f_00598070(void) /* sub_598070 */
{
    FN_ENTER(0x00598070);
    /* 00598070: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00598071: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00598072: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00598073: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00598076: mov edi, ecx */ r_edi = r_ecx;
    /* 00598078: push dword ptr [edi + 0x3d4] */ { u32 v = R32((u32)(r_edi+0x3d4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059807e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x598083u); f_0068d5a8();
    /* 00598083: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00598084: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598086: je 0x5982d7 */ if (fZ) goto L_005982d7;
L_0059808c:; BB(0x0059808c);
    /* 0059808c: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0059808f: test edx, 0x2000800 */ {  u32 a = r_edx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598095: jne 0x5982d7 */ if (!fZ) goto L_005982d7;
L_0059809b:; BB(0x0059809b);
    /* 0059809b: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0059809e: mov dword ptr [edi + 0x3d8], edx */ W32((u32)(r_edi+0x3d8u), r_edx);
    /* 005980a4: mov ebx, dword ptr [eax + 0x3c] */ r_ebx = R32((u32)(r_eax+0x3cu));
    /* 005980a7: mov dword ptr [edi + 0x3dc], ebx */ W32((u32)(r_edi+0x3dcu), r_ebx);
    /* 005980ad: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 005980b0: mov dword ptr [edi + 0x3e0], eax */ W32((u32)(r_edi+0x3e0u), r_eax);
    /* 005980b6: movzx eax, byte ptr [0xa74570] */ r_eax = (u32)R8((u32)(0xa74570u));
    /* 005980bd: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005980bf: jne 0x5980d3 */ if (!fZ) goto L_005980d3;
L_005980c1:; BB(0x005980c1);
    /* 005980c1: mov dword ptr [0xa74574], 0x40200000 */ W32((u32)(0xa74574u), 0x40200000u);
    /* 005980cb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005980ce: mov byte ptr [0xa74570], al */ W8((u32)(0xa74570u), (u8)r_eax);
L_005980d3:; BB(0x005980d3);
    /* 005980d3: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005980d5: jne 0x5980eb */ if (!fZ) goto L_005980eb;
L_005980d7:; BB(0x005980d7);
    /* 005980d7: mov dword ptr [0xa74578], 0x40a00000 */ W32((u32)(0xa74578u), 0x40a00000u);
    /* 005980e1: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005980e6: mov byte ptr [0xa74570], al */ W8((u32)(0xa74570u), (u8)r_eax);
L_005980eb:; BB(0x005980eb);
    /* 005980eb: mov ecx, edi */ r_ecx = r_edi;
    /* 005980ed: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5980f2u); f_007751b0();
    /* 005980f2: fld dword ptr [0xa74578] */ FPUSH(R_F32((u32)(0xa74578u)));
    /* 005980f8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005980fa: fadd dword ptr [0xa74574] */ ST(0) = ST(0) + R_F32((u32)(0xa74574u));
    /* 00598100: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00598104: mov ecx, edi */ r_ecx = r_edi;
    /* 00598106: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x59810bu); f_007751b0();
    /* 0059810b: fld dword ptr [0x9294a4] */ FPUSH(R_F32((u32)(0x9294a4u)));
    /* 00598111: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00598113: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 00598117: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0059811c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00598121: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00598125: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00598129: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0059812d: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00598131: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 00598135: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00598137: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x59813cu); f_0082dcbc();
    /* 0059813c: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 00598140: fadd dword ptr [edi + 0x3d8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3d8u));
    /* 00598146: fstp dword ptr [edi + 0x3d8] */ W_F32((u32)(r_edi+0x3d8u), ST(0)); FPOP();
    /* 0059814c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059814e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x598153u); f_0082ddd8();
    /* 00598153: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00598157: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00598159: fadd dword ptr [edi + 0x3e0] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3e0u));
    /* 0059815f: mov eax, dword ptr [edi + 0x3d8] */ r_eax = R32((u32)(r_edi+0x3d8u));
    /* 00598165: mov ebx, dword ptr [edi + 0x3dc] */ r_ebx = R32((u32)(r_edi+0x3dcu));
    /* 0059816b: fst dword ptr [edi + 0x3e0] */ W_F32((u32)(r_edi+0x3e0u), ST(0));
    /* 00598171: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00598175: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 00598178: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0059817b: mov edx, esi */ r_edx = r_esi;
    /* 0059817d: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00598181: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00598184: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x598189u); f_0082f9c4();
    /* 00598189: movzx eax, byte ptr [0xa74570] */ r_eax = (u32)R8((u32)(0xa74570u));
    /* 00598190: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00598192: jne 0x5981a8 */ if (!fZ) goto L_005981a8;
L_00598194:; BB(0x00598194);
    /* 00598194: mov dword ptr [0xa7457c], 0x41200000 */ W32((u32)(0xa7457cu), 0x41200000u);
    /* 0059819e: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005981a3: mov byte ptr [0xa74570], al */ W8((u32)(0xa74570u), (u8)r_eax);
L_005981a8:; BB(0x005981a8);
    /* 005981a8: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005981ab: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x5981b0u); f_0083173c();
    /* 005981b0: fcom dword ptr [0x9294a0] */ fx_compare(ST(0), R_F32((u32)(0x9294a0u))); 
    /* 005981b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005981b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005981b9: je 0x598349 */ if (fZ) goto L_00598349;
L_005981bf:; BB(0x005981bf);
    /* 005981bf: fld dword ptr [0xa7457c] */ FPUSH(R_F32((u32)(0xa7457cu)));
    /* 005981c5: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 005981c7: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 005981cb: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 005981d0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005981d5: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 005981d9: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 005981dd: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 005981e1: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 005981e5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005981e8: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 005981ec: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x5981f1u); f_0083173c();
    /* 005981f1: fcomp dword ptr [0x92949c] */ fx_compare(ST(0), R_F32((u32)(0x92949cu))); FPOP();
    /* 005981f7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005981f9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005981fa: ja 0x598215 */ if ((!fC&&!fZ)) goto L_00598215;
L_005981fc:; BB(0x005981fc);
    /* 005981fc: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 00598203: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0059820b: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00598213: jmp 0x59821f */ goto L_0059821f;
L_00598215:; BB(0x00598215);
    /* 00598215: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00598218: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x59821du); f_0082df08();
    /* 0059821d: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0059821f:; BB(0x0059821f);
    /* 0059821f: fld dword ptr [0xa7457c] */ FPUSH(R_F32((u32)(0xa7457cu)));
    /* 00598225: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00598228: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0059822a: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0059822e: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 00598231: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00598234: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00598238: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059823a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0059823c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0059823e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00598240: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00598242: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00598245: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00598248: fadd dword ptr [0x9294a8] */ ST(0) = ST(0) + R_F32((u32)(0x9294a8u));
    /* 0059824e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00598250: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00598254: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00598258: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 0059825c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0059825e: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00598262: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00598266: jg 0x598279 */ if ((!fZ&&fS==fO)) goto L_00598279;
L_00598268:; BB(0x00598268);
    /* 00598268: jmp 0x598364 */ goto L_00598364;
L_0059826d:; BB(0x0059826d);
    /* 0059826d: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00598271: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00598275: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
L_00598279:; BB(0x00598279);
    /* 00598279: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0059827d: mov ecx, edi */ r_ecx = r_edi;
    /* 0059827f: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00598283: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00598287: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0059828b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059828d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059828e: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x598293u); f_007b4c58();
    /* 00598293: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598295: je 0x5982be */ if (fZ) goto L_005982be;
L_00598297:; BB(0x00598297);
    /* 00598297: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0059829b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059829c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059829d: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x5982a2u); f_00780d3c();
    /* 005982a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005982a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005982a7: jne 0x5982be */ if (!fZ) goto L_005982be;
L_005982a9:; BB(0x005982a9);
    /* 005982a9: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005982ad: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005982b0: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005982b3: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5982b8u); f_0082ebac();
    /* 005982b8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005982ba: jg 0x59826d */ if ((!fZ&&fS==fO)) goto L_0059826d;
L_005982bc:; BB(0x005982bc);
    /* 005982bc: jmp 0x5982f0 */ goto L_005982f0;
L_005982be:; BB(0x005982be);
    /* 005982be: mov dword ptr [edi + 0x38c], 9 */ W32((u32)(r_edi+0x38cu), 0x9u);
    /* 005982c8: mov ecx, edi */ r_ecx = r_edi;
    /* 005982ca: call dword ptr [0x9bfc48] */ { u32 t = R32((u32)(0x9bfc48u)); r_esp -= 4; W32(r_esp, 0x5982d0u); call_ind(t); }
    /* 005982d0: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005982d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005982d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005982d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005982d6: ret  */ FN_RET(0x00598070); r_esp += 4; return;
L_005982d7:; BB(0x005982d7);
    /* 005982d7: mov dword ptr [edi + 0x38c], 5 */ W32((u32)(r_edi+0x38cu), 0x5u);
    /* 005982e1: mov ecx, edi */ r_ecx = r_edi;
    /* 005982e3: call dword ptr [0x9bfc28] */ { u32 t = R32((u32)(0x9bfc28u)); r_esp -= 4; W32(r_esp, 0x5982e9u); call_ind(t); }
    /* 005982e9: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005982ec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005982ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005982ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005982ef: ret  */ FN_RET(0x00598070); r_esp += 4; return;
L_005982f0:; BB(0x005982f0);
    /* 005982f0: mov ecx, dword ptr [edi + 0x390] */ r_ecx = R32((u32)(r_edi+0x390u));
    /* 005982f6: mov dword ptr [edi + 0x398], 0x5a */ W32((u32)(r_edi+0x398u), 0x5au);
    /* 00598300: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598302: call 0x599c7c */ r_esp -= 4; W32(r_esp, 0x598307u); f_00599c7c();
    /* 00598307: lea ebx, [edi + 0x3d8] */ r_ebx = (u32)(r_edi+0x3d8u);
    /* 0059830d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059830f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598310: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598311: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00598312: push 0x105 */ { u32 v = 0x105u; r_esp -= 4; W32(r_esp, v); }
    /* 00598317: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x59831cu); f_00814298();
    /* 0059831c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059831d: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00598320: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00598321: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00598322: call 0x598368 */ r_esp -= 4; W32(r_esp, 0x598327u); f_00598368();
    /* 00598327: mov edx, dword ptr [edi + 0x394] */ r_edx = R32((u32)(r_edi+0x394u));
    /* 0059832d: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00598330: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00598335: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00598338: mov dword ptr [edi + 0x3f4], 1 */ W32((u32)(r_edi+0x3f4u), 0x1u);
    /* 00598342: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00598345: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00598346: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00598347: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00598348: ret  */ FN_RET(0x00598070); r_esp += 4; return;
L_00598349:; BB(0x00598349);
    /* 00598349: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059834b: mov dword ptr [edi + 0x38c], 5 */ W32((u32)(r_edi+0x38cu), 0x5u);
    /* 00598355: mov ecx, edi */ r_ecx = r_edi;
    /* 00598357: call dword ptr [0x9bfc28] */ { u32 t = R32((u32)(0x9bfc28u)); r_esp -= 4; W32(r_esp, 0x59835du); call_ind(t); }
    /* 0059835d: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00598360: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00598361: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00598362: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00598363: ret  */ FN_RET(0x00598070); r_esp += 4; return;
L_00598364:; BB(0x00598364);
    /* 00598364: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00598366: jmp 0x5982f0 */ goto L_005982f0;
}

void f_00598368(void) /* sub_598368 */
{
    FN_ENTER(0x00598368);
    /* 00598368: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00598369: mov ebp, esp */ r_ebp = r_esp;
    /* 0059836b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059836d: push 0x8d84ae */ { u32 v = 0x8d84aeu; r_esp -= 4; W32(r_esp, v); }
    /* 00598372: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00598378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598379: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00598380: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00598383: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00598386: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00598389: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0059838c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0059838f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00598391: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00598394: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00598397: push 0x3d4 */ { u32 v = 0x3d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059839c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5983a1u); f_005caba4();
    /* 005983a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005983a2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005983a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005983a7: je 0x59841a */ if (fZ) goto L_0059841a;
L_005983a9:; BB(0x005983a9);
    /* 005983a9: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005983b0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005983b7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005983b9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5983beu); f_005caba4();
    /* 005983be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005983bf: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005983c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005983c4: je 0x598416 */ if (fZ) goto L_00598416;
L_005983c6:; BB(0x005983c6);
    /* 005983c6: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005983cd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005983d4: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 005983da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005983dd: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x5983e2u); f_00787a4c();
    /* 005983e2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005983e5: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005983ec:; BB(0x005983ec);
    /* 005983ec: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005983ef: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005983f2: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005983f5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005983f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005983f9: call 0x598420 */ r_esp -= 4; W32(r_esp, 0x5983feu); f_00598420();
    /* 005983fe: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00598401: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00598408:; BB(0x00598408);
    /* 00598408: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059840b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00598412: mov esp, ebp */ r_esp = r_ebp;
    /* 00598414: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00598415: ret  */ FN_RET(0x00598368); r_esp += 4; return;
L_00598416:; BB(0x00598416);
    /* 00598416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00598418: jmp 0x5983ec */ goto L_005983ec;
L_0059841a:; BB(0x0059841a);
    /* 0059841a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059841c: jmp 0x598408 */ goto L_00598408;
}

void f_00598420(void) /* sub_598420 */
{
    FN_ENTER(0x00598420);
    /* 00598420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00598421: mov ebp, esp */ r_ebp = r_esp;
    /* 00598423: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00598425: push 0x8d84c8 */ { u32 v = 0x8d84c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0059842a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00598430: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598431: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00598438: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059843b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059843e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00598441: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00598444: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00598447: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059844a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059844d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00598450: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00598453: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00598456: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00598459: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0059845c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0059845f: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x598464u); f_007865e8();
    /* 00598464: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059846b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0059846e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00598471: mov dword ptr [eax], 0xb097a0 */ W32((u32)(r_eax), 0xb097a0u);
    /* 00598477: mov esi, dword ptr [0x9bfd64] */ r_esi = R32((u32)(0x9bfd64u));
    /* 0059847d: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00598480: mov esi, dword ptr [0xa74654] */ r_esi = R32((u32)(0xa74654u));
    /* 00598486: mov dword ptr [eax + 0x37c], edx */ W32((u32)(r_eax+0x37cu), r_edx);
    /* 0059848c: mov ebx, dword ptr [edx + 0x3fc] */ r_ebx = R32((u32)(r_edx+0x3fcu));
    /* 00598492: mov ecx, esi */ r_ecx = r_esi;
    /* 00598494: mov ebx, dword ptr [ebx*4 + 0x9bfbe0] */ r_ebx = R32((u32)(r_ebx*4+0x9bfbe0u));
    /* 0059849b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059849c: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x5984a1u); f_005b8624();
    /* 005984a1: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005984a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005984a5: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 005984a8: mov ecx, esi */ r_ecx = r_esi;
    /* 005984aa: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x5984afu); f_005b8610();
    /* 005984af: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005984b2: mov dword ptr [ecx + 0xd8], 0x9bfc80 */ W32((u32)(r_ecx+0xd8u), 0x9bfc80u);
    /* 005984bc: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 005984bf: mov eax, dword ptr [esi + 0x430] */ r_eax = R32((u32)(r_esi+0x430u));
    /* 005984c5: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 005984cb: mov esi, dword ptr [esi + 0x430] */ r_esi = R32((u32)(r_esi+0x430u));
    /* 005984d1: mov dword ptr [ecx + 0xdc], esi */ W32((u32)(r_ecx+0xdcu), r_esi);
    /* 005984d7: mov edx, 6 */ r_edx = 0x6u;
    /* 005984dc: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 005984e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005984e4: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x5984e9u); f_007aa4c8();
    /* 005984e9: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005984ec: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005984ef: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005984f2: movzx edx, word ptr [eax + 0xb8] */ r_edx = (u32)R16((u32)(r_eax+0xb8u));
    /* 005984f9: mov word ptr [eax + 0xb8], dx */ W16((u32)(r_eax+0xb8u), (u16)r_edx);
    /* 00598500: mov dword ptr [eax + 0x60], ecx */ W32((u32)(r_eax+0x60u), r_ecx);
    /* 00598503: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 00598505: mov dword ptr [eax + 0x38], edi */ W32((u32)(r_eax+0x38u), r_edi);
    /* 00598508: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0059850b: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0059850e: mov dword ptr [eax + 0x3c], esi */ W32((u32)(r_eax+0x3cu), r_esi);
    /* 00598511: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00598514: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00598517: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059851a: mov dword ptr [eax + 0x380], 1 */ W32((u32)(r_eax+0x380u), 0x1u);
    /* 00598524: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 00598527: mov dword ptr [eax + 0x384], 0xffff */ W32((u32)(r_eax+0x384u), 0xffffu);
    /* 00598531: mov dword ptr [eax + 0x390], 0x3f800000 */ W32((u32)(r_eax+0x390u), 0x3f800000u);
    /* 0059853b: mov dword ptr [eax + 0x38c], 0x3f800000 */ W32((u32)(r_eax+0x38cu), 0x3f800000u);
    /* 00598545: mov dword ptr [eax + 0x388], 0x3f800000 */ W32((u32)(r_eax+0x388u), 0x3f800000u);
    /* 0059854f: mov dword ptr [eax + 0x394], 0x3f800000 */ W32((u32)(r_eax+0x394u), 0x3f800000u);
    /* 00598559: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059855c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00598563: mov esp, ebp */ r_esp = r_ebp;
    /* 00598565: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00598566: ret 0x10 */ FN_RET(0x00598420); r_esp += 20; return;
}

void f_0059856c(void) /* sub_59856C */
{
    FN_ENTER(0x0059856c);
    /* 0059856c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059856d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0059856f: mov ecx, dword ptr [ebx + 0x390] */ r_ecx = R32((u32)(r_ebx+0x390u));
    /* 00598575: mov dword ptr [ebx + 0x3b8], 0x3f800000 */ W32((u32)(r_ebx+0x3b8u), 0x3f800000u);
    /* 0059857f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00598581: mov dword ptr [ebx + 0x3b4], 0x3f800000 */ W32((u32)(r_ebx+0x3b4u), 0x3f800000u);
    /* 0059858b: mov dword ptr [ebx + 0x3b0], 0x3f800000 */ W32((u32)(r_ebx+0x3b0u), 0x3f800000u);
    /* 00598595: mov dword ptr [ebx + 0x39c], 0 */ W32((u32)(r_ebx+0x39cu), 0x0u);
    /* 0059859f: call 0x599c7c */ r_esp -= 4; W32(r_esp, 0x5985a4u); f_00599c7c();
    /* 005985a4: mov edx, dword ptr [ebx + 0x394] */ r_edx = R32((u32)(r_ebx+0x394u));
    /* 005985aa: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005985ad: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005985b2: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005985b5: mov dword ptr [ebx + 0x3f4], 1 */ W32((u32)(r_ebx+0x3f4u), 0x1u);
    /* 005985bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005985c0: ret  */ FN_RET(0x0059856c); r_esp += 4; return;
}

void f_005985c4(void) /* sub_5985C4 */
{
    FN_ENTER(0x005985c4);
    /* 005985c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005985c5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005985c7: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 005985cd: mov dword ptr [ebx + 0x3b8], 0x3f800000 */ W32((u32)(r_ebx+0x3b8u), 0x3f800000u);
    /* 005985d7: push 0xce */ { u32 v = 0xceu; r_esp -= 4; W32(r_esp, v); }
    /* 005985dc: mov dword ptr [ebx + 0x3b4], 0x3f800000 */ W32((u32)(r_ebx+0x3b4u), 0x3f800000u);
    /* 005985e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005985e7: mov dword ptr [ebx + 0x3b0], 0x3f800000 */ W32((u32)(r_ebx+0x3b0u), 0x3f800000u);
    /* 005985f1: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5985f6u); f_0050b510();
    /* 005985f6: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 005985f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005985fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005985fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005985fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005985fe: push 0x107 */ { u32 v = 0x107u; r_esp -= 4; W32(r_esp, v); }
    /* 00598603: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x598608u); f_00814298();
    /* 00598608: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059860b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059860d: mov ecx, dword ptr [ebx + 0x390] */ r_ecx = R32((u32)(r_ebx+0x390u));
    /* 00598613: call 0x599c7c */ r_esp -= 4; W32(r_esp, 0x598618u); f_00599c7c();
    /* 00598618: mov edx, dword ptr [ebx + 0x394] */ r_edx = R32((u32)(r_ebx+0x394u));
    /* 0059861e: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00598621: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00598626: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00598629: mov edx, dword ptr [ebx + 0x394] */ r_edx = R32((u32)(r_ebx+0x394u));
    /* 0059862f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00598632: or eax, 0xa000528 */ {  u32 a = r_eax; u32 b = 0xa000528u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00598637: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0059863a: mov dword ptr [ebx + 0x3f4], 0 */ W32((u32)(r_ebx+0x3f4u), 0x0u);
    /* 00598644: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00598645: ret  */ FN_RET(0x005985c4); r_esp += 4; return;
}

void f_00598648(void) /* sub_598648 */
{
    FN_ENTER(0x00598648);
    /* 00598648: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00598649: mov esi, ecx */ r_esi = r_ecx;
    /* 0059864b: mov ecx, dword ptr [esi + 0x3f8] */ r_ecx = R32((u32)(r_esi+0x3f8u));
    /* 00598651: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598653: je 0x59866e */ if (fZ) goto L_0059866e;
L_00598655:; BB(0x00598655);
    /* 00598655: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x59865au); f_008173b4();
    /* 0059865a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059865c: je 0x59866e */ if (fZ) goto L_0059866e;
L_0059865e:; BB(0x0059865e);
    /* 0059865e: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00598662: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598663: mov ecx, dword ptr [esi + 0x3f8] */ r_ecx = R32((u32)(r_esi+0x3f8u));
    /* 00598669: call 0x598700 */ r_esp -= 4; W32(r_esp, 0x59866eu); f_00598700();
L_0059866e:; BB(0x0059866e);
    /* 0059866e: mov dword ptr [esi + 0x3b8], 0x3f800000 */ W32((u32)(r_esi+0x3b8u), 0x3f800000u);
    /* 00598678: mov ecx, esi */ r_ecx = r_esi;
    /* 0059867a: mov dword ptr [esi + 0x3b4], 0x3f800000 */ W32((u32)(r_esi+0x3b4u), 0x3f800000u);
    /* 00598684: mov dword ptr [esi + 0x3b0], 0x3f800000 */ W32((u32)(r_esi+0x3b0u), 0x3f800000u);
    /* 0059868e: mov dword ptr [esi + 0x398], 5 */ W32((u32)(r_esi+0x398u), 0x5u);
    /* 00598698: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x59869du); f_00787534();
    /* 0059869d: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 005986a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005986a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005986a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005986a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005986a5: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 005986aa: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5986afu); f_00814298();
    /* 005986af: push 0xfe */ { u32 v = 0xfeu; r_esp -= 4; W32(r_esp, v); }
    /* 005986b4: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 005986ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005986bb: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5986c0u); f_0050b510();
    /* 005986c0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005986c3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005986c5: mov ecx, dword ptr [esi + 0x390] */ r_ecx = R32((u32)(r_esi+0x390u));
    /* 005986cb: call 0x599c7c */ r_esp -= 4; W32(r_esp, 0x5986d0u); f_00599c7c();
    /* 005986d0: mov edx, dword ptr [esi + 0x394] */ r_edx = R32((u32)(r_esi+0x394u));
    /* 005986d6: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005986d9: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005986de: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005986e1: mov edx, dword ptr [esi + 0x394] */ r_edx = R32((u32)(r_esi+0x394u));
    /* 005986e7: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005986ea: or eax, 0xa000528 */ {  u32 a = r_eax; u32 b = 0xa000528u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005986ef: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005986f2: mov dword ptr [esi + 0x3f4], 0 */ W32((u32)(r_esi+0x3f4u), 0x0u);
    /* 005986fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005986fd: ret  */ FN_RET(0x00598648); r_esp += 4; return;
}

void f_00598700(void) /* sub_598700 */
{
    FN_ENTER(0x00598700);
    /* 00598700: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00598704: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00598708: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0059870a: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 0059870d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059870f: jl 0x598722 */ if ((fS!=fO)) goto L_00598722;
L_00598711:; BB(0x00598711);
    /* 00598711: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00598714: jge 0x598722 */ if ((fS==fO)) goto L_00598722;
L_00598716:; BB(0x00598716);
    /* 00598716: mov edx, dword ptr [ecx + eax*8 + 0x3b8] */ r_edx = R32((u32)(r_ecx+r_eax*8+0x3b8u));
    /* 0059871d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00598720: je 0x598725 */ if (fZ) goto L_00598725;
L_00598722:; BB(0x00598722);
    /* 00598722: ret 4 */ FN_RET(0x00598700); r_esp += 8; return;
L_00598725:; BB(0x00598725);
    /* 00598725: mov dword ptr [ecx + eax*8 + 0x3bc], 0 */ W32((u32)(r_ecx+r_eax*8+0x3bcu), 0x0u);
    /* 00598730: mov dword ptr [ecx + eax*8 + 0x3b8], 2 */ W32((u32)(r_ecx+r_eax*8+0x3b8u), 0x2u);
    /* 0059873b: ret 4 */ FN_RET(0x00598700); r_esp += 8; return;
}

void f_00598740(void) /* sub_598740 */
{
    FN_ENTER(0x00598740);
    /* 00598740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00598741: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00598743: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00598746: push 0xe1 */ { u32 v = 0xe1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059874b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059874c: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x598751u); f_00509590();
    /* 00598751: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598754: mov ecx, dword ptr [ebp + 0x390] */ r_ecx = R32((u32)(r_ebp+0x390u));
    /* 0059875a: mov dword ptr [ebp + 0x3ac], 0xc0200000 */ W32((u32)(r_ebp+0x3acu), 0xc0200000u);
    /* 00598764: mov dword ptr [ebp + 0x3f0], eax */ W32((u32)(r_ebp+0x3f0u), r_eax);
    /* 0059876a: mov dword ptr [ebp + 0x3b8], 0 */ W32((u32)(r_ebp+0x3b8u), 0x0u);
    /* 00598774: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00598776: mov dword ptr [ebp + 0x3b4], 0 */ W32((u32)(r_ebp+0x3b4u), 0x0u);
    /* 00598780: mov dword ptr [ebp + 0x3b0], 0 */ W32((u32)(r_ebp+0x3b0u), 0x0u);
    /* 0059878a: mov dword ptr [ebp + 0x3a8], 0 */ W32((u32)(r_ebp+0x3a8u), 0x0u);
    /* 00598794: call 0x599c7c */ r_esp -= 4; W32(r_esp, 0x598799u); f_00599c7c();
    /* 00598799: mov edx, dword ptr [ebp + 0x394] */ r_edx = R32((u32)(r_ebp+0x394u));
    /* 0059879f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005987a2: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005987a7: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005987aa: mov edx, dword ptr [ebp + 0x394] */ r_edx = R32((u32)(r_ebp+0x394u));
    /* 005987b0: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005987b3: or eax, 0xa000528 */ {  u32 a = r_eax; u32 b = 0xa000528u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005987b8: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005987bb: mov dword ptr [ebp + 0x3f4], 0 */ W32((u32)(r_ebp+0x3f4u), 0x0u);
    /* 005987c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005987c6: ret  */ FN_RET(0x00598740); r_esp += 4; return;
}

void f_005987c8(void) /* sub_5987C8 */
{
    FN_ENTER(0x005987c8);
    /* 005987c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005987c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005987ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005987cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005987cc: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005987cf: mov esi, ecx */ r_esi = r_ecx;
    /* 005987d1: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005987d5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005987d8: je 0x59880a */ if (fZ) goto L_0059880a;
L_005987da:; BB(0x005987da);
    /* 005987da: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005987df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005987e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005987e1: mov ecx, esi */ r_ecx = r_esi;
    /* 005987e3: push dword ptr [esp + 0x58] */ { u32 v = R32((u32)(r_esp+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 005987e7: push dword ptr [esp + 0x58] */ { u32 v = R32((u32)(r_esp+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 005987eb: push dword ptr [esp + 0x58] */ { u32 v = R32((u32)(r_esp+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 005987ef: push dword ptr [esp + 0x58] */ { u32 v = R32((u32)(r_esp+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 005987f3: call 0x773afc */ r_esp -= 4; W32(r_esp, 0x5987f8u); f_00773afc();
    /* 005987f8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005987fa: fld dword ptr [0x929314] */ FPUSH(R_F32((u32)(0x929314u)));
    /* 00598800: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00598803: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00598804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00598805: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00598806: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00598807: ret 0x18 */ FN_RET(0x005987c8); r_esp += 28; return;
L_0059880a:; BB(0x0059880a);
    /* 0059880a: mov ecx, dword ptr [esi + 0x3f8] */ r_ecx = R32((u32)(r_esi+0x3f8u));
    /* 00598810: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598812: je 0x5987da */ if (fZ) goto L_005987da;
L_00598814:; BB(0x00598814);
    /* 00598814: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x598819u); f_008173b4();
    /* 00598819: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059881b: je 0x5987da */ if (fZ) goto L_005987da;
L_0059881d:; BB(0x0059881d);
    /* 0059881d: mov ebp, dword ptr [esi + 0x3f8] */ r_ebp = R32((u32)(r_esi+0x3f8u));
    /* 00598823: mov eax, dword ptr [ebp + 0x3bc] */ r_eax = R32((u32)(r_ebp+0x3bcu));
    /* 00598829: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0059882b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0059882d: jle 0x598893 */ if ((fZ||fS!=fO)) goto L_00598893;
L_0059882f:; BB(0x0059882f);
    /* 0059882f: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00598832: jl 0x598881 */ if ((fS!=fO)) goto L_00598881;
L_00598834:; BB(0x00598834);
    /* 00598834: mov edx, dword ptr [ebp + ebx*8 + 0x3c0] */ r_edx = R32((u32)(r_ebp+r_ebx*8+0x3c0u));
    /* 0059883b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059883d: je 0x598893 */ if (fZ) goto L_00598893;
L_0059883f:; BB(0x0059883f);
    /* 0059883f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00598842: mov edx, dword ptr [ebp + ebx*8 + 0x3c0] */ r_edx = R32((u32)(r_ebp+r_ebx*8+0x3c0u));
    /* 00598849: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059884b: je 0x598893 */ if (fZ) goto L_00598893;
L_0059884d:; BB(0x0059884d);
    /* 0059884d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00598850: mov edx, dword ptr [ebp + ebx*8 + 0x3c0] */ r_edx = R32((u32)(r_ebp+r_ebx*8+0x3c0u));
    /* 00598857: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598859: je 0x598893 */ if (fZ) goto L_00598893;
L_0059885b:; BB(0x0059885b);
    /* 0059885b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0059885e: mov edx, dword ptr [ebp + ebx*8 + 0x3c0] */ r_edx = R32((u32)(r_ebp+r_ebx*8+0x3c0u));
    /* 00598865: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598867: je 0x598893 */ if (fZ) goto L_00598893;
L_00598869:; BB(0x00598869);
    /* 00598869: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0059886c: mov edx, dword ptr [ebp + ebx*8 + 0x3c0] */ r_edx = R32((u32)(r_ebp+r_ebx*8+0x3c0u));
    /* 00598873: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598875: je 0x598893 */ if (fZ) goto L_00598893;
L_00598877:; BB(0x00598877);
    /* 00598877: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0059887a: lea edx, [eax - 6] */ r_edx = (u32)(r_eax+0xfffffffau);
    /* 0059887d: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059887f: jle 0x598834 */ if ((fZ||fS!=fO)) goto L_00598834;
L_00598881:; BB(0x00598881);
    /* 00598881: mov edx, dword ptr [ebp + ebx*8 + 0x3c0] */ r_edx = R32((u32)(r_ebp+r_ebx*8+0x3c0u));
    /* 00598888: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059888a: je 0x598893 */ if (fZ) goto L_00598893;
L_0059888c:; BB(0x0059888c);
    /* 0059888c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0059888f: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00598891: jl 0x598881 */ if ((fS!=fO)) goto L_00598881;
L_00598893:; BB(0x00598893);
    /* 00598893: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598895: je 0x5987da */ if (fZ) goto L_005987da;
L_0059889b:; BB(0x0059889b);
    /* 0059889b: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0059889e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005988a1: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 005988a4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005988a6: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005988aa: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005988ae: fadd dword ptr [0x929318] */ ST(0) = ST(0) + R_F32((u32)(0x929318u));
    /* 005988b4: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 005988b7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005988bb: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 005988bf: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5988c4u); f_007751b0();
    /* 005988c4: fld dword ptr [0x92947c] */ FPUSH(R_F32((u32)(0x92947cu)));
    /* 005988ca: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005988cc: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 005988d0: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 005988d5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005988da: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005988de: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005988e2: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 005988e6: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005988ea: movsx edi, word ptr [esp + 0x28] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0x28u));
    /* 005988ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005988f1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5988f6u); f_0082dcbc();
    /* 005988f6: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005988fa: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00598902: mov ecx, edi */ r_ecx = r_edi;
    /* 00598904: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x598909u); f_0082ddd8();
    /* 00598909: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0059890d: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00598911: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x598916u); f_0083173c();
    /* 00598916: fcomp dword ptr [0x929474] */ fx_compare(ST(0), R_F32((u32)(0x929474u))); FPOP();
    /* 0059891c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059891e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059891f: ja 0x59893b */ if ((!fC&&!fZ)) goto L_0059893b;
L_00598921:; BB(0x00598921);
    /* 00598921: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 00598929: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00598931: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00598939: jmp 0x598946 */ goto L_00598946;
L_0059893b:; BB(0x0059893b);
    /* 0059893b: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0059893f: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x598944u); f_0082df08();
    /* 00598944: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00598946:; BB(0x00598946);
    /* 00598946: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00598949: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059894b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059894c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059894d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059894e: push 0x106 */ { u32 v = 0x106u; r_esp -= 4; W32(r_esp, v); }
    /* 00598953: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x598958u); f_00814298();
    /* 00598958: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059895b: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0059895e: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00598962: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00598965: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598966: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00598967: call 0x595bc8 */ r_esp -= 4; W32(r_esp, 0x59896cu); f_00595bc8();
    /* 0059896c: jmp 0x5987da */ goto L_005987da;
}

void f_00598974(void) /* sub_598974 */
{
    FN_ENTER(0x00598974);
    /* 00598974: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00598975: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00598976: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00598977: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00598978: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059897b: mov esi, ecx */ r_esi = r_ecx;
    /* 0059897d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0059897f: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00598982: fld dword ptr [0x92932c] */ FPUSH(R_F32((u32)(0x92932cu)));
    /* 00598988: fadd dword ptr [esi + 0x380] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x380u));
    /* 0059898e: fstp dword ptr [esi + 0x380] */ W_F32((u32)(r_esi+0x380u), ST(0)); FPOP();
    /* 00598994: lea edx, [esi + 0x37c] */ r_edx = (u32)(r_esi+0x37cu);
    /* 0059899a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059899c: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5989a1u); f_0082ebac();
    /* 005989a1: mov eax, dword ptr [esi + 0x39c] */ r_eax = R32((u32)(r_esi+0x39cu));
    /* 005989a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005989aa: cmp eax, dword ptr [0xa745e8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa745e8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005989b0: mov dword ptr [esi + 0x39c], eax */ W32((u32)(r_esi+0x39cu), r_eax);
    /* 005989b6: jle 0x5989bd */ if ((fZ||fS!=fO)) goto L_005989bd;
L_005989b8:; BB(0x005989b8);
    /* 005989b8: mov ebx, 1 */ r_ebx = 0x1u;
L_005989bd:; BB(0x005989bd);
    /* 005989bd: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 005989c0: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 005989c3: fadd dword ptr [0x929328] */ ST(0) = ST(0) + R_F32((u32)(0x929328u));
    /* 005989c9: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 005989cc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005989d0: mov ecx, esi */ r_ecx = r_esi;
    /* 005989d2: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005989d6: lea edi, [esi + 0x250] */ r_edi = (u32)(r_esi+0x250u);
    /* 005989dc: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005989e0: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 005989e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005989e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005989e6: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5989ebu); f_007b4c58();
    /* 005989eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005989ed: je 0x598a2a */ if (fZ) goto L_00598a2a;
L_005989ef:; BB(0x005989ef);
    /* 005989ef: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005989f3: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 005989f6: fcomp dword ptr [esp + 8] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x8u))); FPOP();
    /* 005989fa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005989fc: mov dword ptr [esi + 0x388], edx */ W32((u32)(r_esi+0x388u), r_edx);
    /* 00598a02: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00598a03: ja 0x598a2f */ if ((!fC&&!fZ)) goto L_00598a2f;
L_00598a05:; BB(0x00598a05);
    /* 00598a05: fld dword ptr [esi + 0x380] */ FPUSH(R_F32((u32)(r_esi+0x380u)));
    /* 00598a0b: fmul dword ptr [0x929324] */ ST(0) = ST(0) * R_F32((u32)(0x929324u));
    /* 00598a11: fstp dword ptr [esi + 0x380] */ W_F32((u32)(r_esi+0x380u), ST(0)); FPOP();
    /* 00598a17: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 00598a1a: push 0xe2 */ { u32 v = 0xe2u; r_esp -= 4; W32(r_esp, v); }
    /* 00598a1f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00598a20: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x598a25u); f_0050b510();
    /* 00598a25: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598a28: jmp 0x598a2f */ goto L_00598a2f;
L_00598a2a:; BB(0x00598a2a);
    /* 00598a2a: mov ebx, 1 */ r_ebx = 0x1u;
L_00598a2f:; BB(0x00598a2f);
    /* 00598a2f: mov ecx, dword ptr [esi + 0x390] */ r_ecx = R32((u32)(r_esi+0x390u));
    /* 00598a35: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598a37: je 0x598a3f */ if (fZ) goto L_00598a3f;
L_00598a39:; BB(0x00598a39);
    /* 00598a39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00598a3a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x598a3fu); f_00508db8();
L_00598a3f:; BB(0x00598a3f);
    /* 00598a3f: mov eax, dword ptr [esi + 0x394] */ r_eax = R32((u32)(r_esi+0x394u));
    /* 00598a45: mov eax, dword ptr [eax + 0x38c] */ r_eax = R32((u32)(r_eax+0x38cu));
    /* 00598a4b: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598a4e: je 0x598c7c */ if (fZ) goto L_00598c7c;
L_00598a54:; BB(0x00598a54);
    /* 00598a54: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598a57: je 0x598c7c */ if (fZ) goto L_00598c7c;
L_00598a5d:; BB(0x00598a5d);
    /* 00598a5d: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598a60: je 0x598c7c */ if (fZ) goto L_00598c7c;
L_00598a66:; BB(0x00598a66);
    /* 00598a66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00598a68:; BB(0x00598a68);
    /* 00598a68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598a6a: jne 0x598c2e */ if (!fZ) goto L_00598c2e;
L_00598a70:; BB(0x00598a70);
    /* 00598a70: movzx eax, byte ptr [0xa745ec] */ r_eax = (u32)R8((u32)(0xa745ecu));
    /* 00598a77: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00598a79: jne 0x598a94 */ if (!fZ) goto L_00598a94;
L_00598a7b:; BB(0x00598a7b);
    /* 00598a7b: mov dword ptr [0xa745f0], 0x41c80000 */ W32((u32)(0xa745f0u), 0x41c80000u);
    /* 00598a85: mov edx, 0x41c80000 */ r_edx = 0x41c80000u;
    /* 00598a8a: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00598a8d: mov byte ptr [0xa745ec], al */ W8((u32)(0xa745ecu), (u8)r_eax);
    /* 00598a92: jmp 0x598a9a */ goto L_00598a9a;
L_00598a94:; BB(0x00598a94);
    /* 00598a94: mov edx, dword ptr [0xa745f0] */ r_edx = R32((u32)(0xa745f0u));
L_00598a9a:; BB(0x00598a9a);
    /* 00598a9a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00598a9c: jne 0x598ab0 */ if (!fZ) goto L_00598ab0;
L_00598a9e:; BB(0x00598a9e);
    /* 00598a9e: mov dword ptr [0xa745f4], 0x40a00000 */ W32((u32)(0xa745f4u), 0x40a00000u);
    /* 00598aa8: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00598aab: mov byte ptr [0xa745ec], al */ W8((u32)(0xa745ecu), (u8)r_eax);
L_00598ab0:; BB(0x00598ab0);
    /* 00598ab0: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00598ab2: jne 0x598acc */ if (!fZ) goto L_00598acc;
L_00598ab4:; BB(0x00598ab4);
    /* 00598ab4: fld dword ptr [0xa745f4] */ FPUSH(R_F32((u32)(0xa745f4u)));
    /* 00598aba: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00598abc: fstp dword ptr [0xa745f8] */ W_F32((u32)(0xa745f8u), ST(0)); FPOP();
    /* 00598ac2: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00598ac7: mov byte ptr [0xa745ec], al */ W8((u32)(0xa745ecu), (u8)r_eax);
L_00598acc:; BB(0x00598acc);
    /* 00598acc: mov eax, dword ptr [0x92931c] */ r_eax = R32((u32)(0x92931cu));
    /* 00598ad1: mov edi, dword ptr [esi + 0x398] */ r_edi = R32((u32)(r_esi+0x398u));
    /* 00598ad7: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00598adb: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00598ade: mov dword ptr [esi + 0x300], eax */ W32((u32)(r_esi+0x300u), r_eax);
    /* 00598ae4: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00598ae7: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00598aeb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598aed: mov dword ptr [esi + 0x304], eax */ W32((u32)(r_esi+0x304u), r_eax);
    /* 00598af3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598af4: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00598af7: mov dword ptr [esi + 0x308], eax */ W32((u32)(r_esi+0x308u), r_eax);
    /* 00598afd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00598aff: mov ecx, esi */ r_ecx = r_esi;
    /* 00598b01: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x598b06u); f_007714cc();
    /* 00598b06: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00598b09: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598b0e: je 0x598b87 */ if (fZ) goto L_00598b87;
L_00598b10:; BB(0x00598b10);
    /* 00598b10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598b11: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x598b16u); f_0068d5a8();
    /* 00598b16: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00598b1a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598b1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598b1f: je 0x598b87 */ if (fZ) goto L_00598b87;
L_00598b21:; BB(0x00598b21);
    /* 00598b21: lea ecx, [esi + 0x300] */ r_ecx = (u32)(r_esi+0x300u);
    /* 00598b27: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 00598b2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598b2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598b2f: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x598b34u); f_007a9180();
    /* 00598b34: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598b37: fcomp dword ptr [0xa745f8] */ fx_compare(ST(0), R_F32((u32)(0xa745f8u))); FPOP();
    /* 00598b3d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00598b3f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00598b40: ja 0x598b87 */ if ((!fC&&!fZ)) goto L_00598b87;
L_00598b42:; BB(0x00598b42);
    /* 00598b42: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00598b45: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00598b47: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00598b4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598b4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598b4e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598b50: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00598b54: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00598b58: push dword ptr [esi + 0x394] */ { u32 v = R32((u32)(r_esi+0x394u)); r_esp -= 4; W32(r_esp, v); }
    /* 00598b5e: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x598b61u); call_ind(t); }
    /* 00598b61: fcom dword ptr [0x929464] */ fx_compare(ST(0), R_F32((u32)(0x929464u))); 
    /* 00598b67: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00598b69: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00598b6a: je 0x598c86 */ if (fZ) goto L_00598c86;
L_00598b70:; BB(0x00598b70);
    /* 00598b70: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00598b73: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00598b75: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598b78: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00598b7c: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00598b7f: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x598b82u); call_ind(t); }
L_00598b82:; BB(0x00598b82);
    /* 00598b82: mov edi, 1 */ r_edi = 0x1u;
L_00598b87:; BB(0x00598b87);
    /* 00598b87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598b89: push dword ptr [0xa745f0] */ { u32 v = R32((u32)(0xa745f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00598b8f: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00598b92: or eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00598b97: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00598b9a: mov ecx, esi */ r_ecx = r_esi;
    /* 00598b9c: call 0x77170c */ r_esp -= 4; W32(r_esp, 0x598ba1u); f_0077170c();
    /* 00598ba1: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00598ba4: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00598ba7: and eax, 0xfdffffff */ {  u32 a = r_eax; u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00598bac: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598bb2: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00598bb5: je 0x598c2a */ if (fZ) goto L_00598c2a;
L_00598bb7:; BB(0x00598bb7);
    /* 00598bb7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598bb8: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x598bbdu); f_00786b3c();
    /* 00598bbd: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00598bc1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598bc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598bc6: je 0x598c2a */ if (fZ) goto L_00598c2a;
L_00598bc8:; BB(0x00598bc8);
    /* 00598bc8: lea ecx, [esi + 0x300] */ r_ecx = (u32)(r_esi+0x300u);
    /* 00598bce: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 00598bd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598bd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598bd6: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x598bdbu); f_007a9180();
    /* 00598bdb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598bde: fcomp dword ptr [0xa745f8] */ fx_compare(ST(0), R_F32((u32)(0xa745f8u))); FPOP();
    /* 00598be4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00598be6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00598be7: ja 0x598c2a */ if ((!fC&&!fZ)) goto L_00598c2a;
L_00598be9:; BB(0x00598be9);
    /* 00598be9: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00598bec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00598bee: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00598bf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598bf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598bf5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598bf7: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00598bfb: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00598bff: push dword ptr [esi + 0x394] */ { u32 v = R32((u32)(r_esi+0x394u)); r_esp -= 4; W32(r_esp, v); }
    /* 00598c05: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x598c08u); call_ind(t); }
    /* 00598c08: fcom dword ptr [0x929464] */ fx_compare(ST(0), R_F32((u32)(0x929464u))); 
    /* 00598c0e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00598c10: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00598c11: je 0x598c8d */ if (fZ) goto L_00598c8d;
L_00598c13:; BB(0x00598c13);
    /* 00598c13: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00598c16: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00598c18: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598c1b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00598c1f: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00598c22: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x598c25u); call_ind(t); }
L_00598c25:; BB(0x00598c25);
    /* 00598c25: mov edi, 1 */ r_edi = 0x1u;
L_00598c2a:; BB(0x00598c2a);
    /* 00598c2a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598c2c: je 0x598c33 */ if (fZ) goto L_00598c33;
L_00598c2e:; BB(0x00598c2e);
    /* 00598c2e: mov ebx, 1 */ r_ebx = 0x1u;
L_00598c33:; BB(0x00598c33);
    /* 00598c33: fld dword ptr [0x929510] */ FPUSH(R_F32((u32)(0x929510u)));
    /* 00598c39: fadd dword ptr [esi + 0x38c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38cu));
    /* 00598c3f: fcom dword ptr [0xa745fc] */ fx_compare(ST(0), R_F32((u32)(0xa745fcu))); 
    /* 00598c45: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00598c47: fstp dword ptr [esi + 0x38c] */ W_F32((u32)(r_esi+0x38cu), ST(0)); FPOP();
    /* 00598c4d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00598c4e: jae 0x598c5c */ if (!fC) goto L_00598c5c;
L_00598c50:; BB(0x00598c50);
    /* 00598c50: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598c52: jne 0x598c5c */ if (!fZ) goto L_00598c5c;
L_00598c54:; BB(0x00598c54);
    /* 00598c54: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00598c57: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00598c58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00598c59: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00598c5a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00598c5b: ret  */ FN_RET(0x00598974); r_esp += 4; return;
L_00598c5c:; BB(0x00598c5c);
    /* 00598c5c: push 0xe2 */ { u32 v = 0xe2u; r_esp -= 4; W32(r_esp, v); }
    /* 00598c61: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00598c62: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x598c67u); f_0050b510();
    /* 00598c67: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00598c6b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00598c70: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 00598c74: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00598c77: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00598c78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00598c79: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00598c7a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00598c7b: ret  */ FN_RET(0x00598974); r_esp += 4; return;
L_00598c7c:; BB(0x00598c7c);
    /* 00598c7c: mov eax, 1 */ r_eax = 0x1u;
    /* 00598c81: jmp 0x598a68 */ goto L_00598a68;
L_00598c86:; BB(0x00598c86);
    /* 00598c86: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00598c88: jmp 0x598b82 */ goto L_00598b82;
L_00598c8d:; BB(0x00598c8d);
    /* 00598c8d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00598c8f: jmp 0x598c25 */ goto L_00598c25;
}

void f_00598c94(void) /* sub_598C94 */
{
    FN_ENTER(0x00598c94);
    /* 00598c94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00598c95: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00598c98: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00598c9a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x598c9fu); f_0082d7b0();
    /* 00598c9f: fld dword ptr [0x929334] */ FPUSH(R_F32((u32)(0x929334u)));
    /* 00598ca5: fadd dword ptr [ebp + 0x388] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x388u));
    /* 00598cab: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00598cae: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 00598cb1: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598cb4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00598cb8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00598cbb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00598cbd: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00598cc1: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x598cc6u); f_00830b74();
    /* 00598cc6: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00598cca: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00598ccd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598cce: lea ecx, [ebp + 0x250] */ r_ecx = (u32)(r_ebp+0x250u);
    /* 00598cd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598cd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598cd6: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x598cdbu); f_007a8d98();
    /* 00598cdb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598cde: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00598ce1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00598ce3: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x598ce8u); f_00830c04();
    /* 00598ce8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00598cec: add edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00598cf2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00598cf4: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x598cf9u); f_0082e9e4();
    /* 00598cf9: movzx edx, byte ptr [0xa74580] */ r_edx = (u32)R8((u32)(0xa74580u));
    /* 00598d00: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00598d03: jne 0x598d20 */ if (!fZ) goto L_00598d20;
L_00598d05:; BB(0x00598d05);
    /* 00598d05: fld dword ptr [0x929460] */ FPUSH(R_F32((u32)(0x929460u)));
    /* 00598d0b: mov dword ptr [0xa74584], 0x42200000 */ W32((u32)(0xa74584u), 0x42200000u);
    /* 00598d15: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00598d18: mov byte ptr [0xa74580], dl */ W8((u32)(0xa74580u), (u8)r_edx);
    /* 00598d1e: jmp 0x598d26 */ goto L_00598d26;
L_00598d20:; BB(0x00598d20);
    /* 00598d20: fld dword ptr [0xa74584] */ FPUSH(R_F32((u32)(0xa74584u)));
L_00598d26:; BB(0x00598d26);
    /* 00598d26: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00598d29: fsub dword ptr [ebp + 0x388] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x388u));
    /* 00598d2f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00598d31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00598d33: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00598d34: jbe 0x598d3c */ if ((fC||fZ)) goto L_00598d3c;
L_00598d36:; BB(0x00598d36);
    /* 00598d36: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00598d38: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00598d3a: jmp 0x598d4d */ goto L_00598d4d;
L_00598d3c:; BB(0x00598d3c);
    /* 00598d3c: fld dword ptr [0x92945c] */ FPUSH(R_F32((u32)(0x92945cu)));
    /* 00598d42: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00598d44: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00598d46: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00598d47: jbe 0x598d4b */ if ((fC||fZ)) goto L_00598d4b;
L_00598d49:; BB(0x00598d49);
    /* 00598d49: fst st(1) */ ST(1) = ST(0);
L_00598d4b:; BB(0x00598d4b);
    /* 00598d4b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00598d4d:; BB(0x00598d4d);
    /* 00598d4d: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00598d52: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00598d54: fchs  */ ST(0) = -ST(0);
    /* 00598d56: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00598d58: fadd dword ptr [0x929458] */ ST(0) = ST(0) + R_F32((u32)(0x929458u));
    /* 00598d5e: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00598d61: jne 0x598d79 */ if (!fZ) goto L_00598d79;
L_00598d63:; BB(0x00598d63);
    /* 00598d63: mov dword ptr [0xa74588], 0x3f266666 */ W32((u32)(0xa74588u), 0x3f266666u);
    /* 00598d6d: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00598d73: mov byte ptr [0xa74580], dl */ W8((u32)(0xa74580u), (u8)r_edx);
L_00598d79:; BB(0x00598d79);
    /* 00598d79: fld dword ptr [0xa74588] */ FPUSH(R_F32((u32)(0xa74588u)));
    /* 00598d7f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00598d81: fadd dword ptr [0x929330] */ ST(0) = ST(0) + R_F32((u32)(0x929330u));
    /* 00598d87: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 00598d8b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00598d8f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00598d93: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00598d97: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x598d9cu); f_00831290();
    /* 00598d9c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00598d9e: call 0x52d46c */ r_esp -= 4; W32(r_esp, 0x598da3u); f_0052d46c();
    /* 00598da3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00598da4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x598da9u); f_0082da80();
    /* 00598da9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00598dac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00598dad: ret  */ FN_RET(0x00598c94); r_esp += 4; return;
}

void f_00598d40(void)
{
    FN_ENTER(0x00598d40);
    goto L_00598d40;
L_00598ce5:; BB(0x00598ce5);
    /* 00598ce5: jg 0x598d10 */ if ((!fZ&&fS==fO)) goto L_00598d10;
L_00598ce7:; BB(0x00598ce7);
    /* 00598ce7: add byte ptr [ebx - 0x7efbdbac], cl */ { u32 ad = (u32)(r_ebx+0x81042454u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00598ced: ret 0x4000 */ FN_RET(0x00598d40); r_esp += 16388; return;
L_00598d10:; BB(0x00598d10);
    /* 00598d10: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00598d12: add byte ptr [eax], ah */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00598d14: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00598d15: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00598d18: mov byte ptr [0xa74580], dl */ W8((u32)(0xa74580u), (u8)r_edx);
    /* 00598d1e: jmp 0x598d26 */ goto L_00598d26;
L_00598d26:; BB(0x00598d26);
    /* 00598d26: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00598d29: fsub dword ptr [ebp + 0x388] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x388u));
    /* 00598d2f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00598d31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00598d33: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00598d34: jbe 0x598d3c */ if ((fC||fZ)) goto L_00598d3c;
L_00598d36:; BB(0x00598d36);
    /* 00598d36: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00598d38: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00598d3a: jmp 0x598d4d */ goto L_00598d4d;
L_00598d3c:; BB(0x00598d3c);
    /* 00598d3c: fld dword ptr [0x92945c] */ FPUSH(R_F32((u32)(0x92945cu)));
L_00598d40:; BB(0x00598d40);
    /* 00598d40: xchg edx, eax */ { u32 x = r_edx; u32 y = r_eax; r_edx = y; r_eax = x; }
    /* 00598d41: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00598d42: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00598d43: rcr edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_edi = a; }
    /* 00598d44: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00598d45: loopne 0x598ce5 */ r_ecx--; if (r_ecx && !fZ) goto L_00598ce5;
    /* 00598d46: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00598d47: jbe 0x598d4b */ if ((fC||fZ)) goto L_00598d4b;
L_00598d49:; BB(0x00598d49);
    /* 00598d49: fst st(1) */ ST(1) = ST(0);
L_00598d4b:; BB(0x00598d4b);
    /* 00598d4b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00598d4d:; BB(0x00598d4d);
    /* 00598d4d: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00598d52: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00598d54: fchs  */ ST(0) = -ST(0);
    /* 00598d56: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00598d58: fadd dword ptr [0x929458] */ ST(0) = ST(0) + R_F32((u32)(0x929458u));
    /* 00598d5e: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00598d61: jne 0x598d79 */ if (!fZ) goto L_00598d79;
L_00598d63:; BB(0x00598d63);
    /* 00598d63: mov dword ptr [0xa74588], 0x3f266666 */ W32((u32)(0xa74588u), 0x3f266666u);
    /* 00598d6d: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00598d73: mov byte ptr [0xa74580], dl */ W8((u32)(0xa74580u), (u8)r_edx);
L_00598d79:; BB(0x00598d79);
    /* 00598d79: fld dword ptr [0xa74588] */ FPUSH(R_F32((u32)(0xa74588u)));
    /* 00598d7f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00598d81: fadd dword ptr [0x929330] */ ST(0) = ST(0) + R_F32((u32)(0x929330u));
    /* 00598d87: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 00598d8b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00598d8f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00598d93: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00598d97: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x598d9cu); f_00831290();
    /* 00598d9c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00598d9e: call 0x52d46c */ r_esp -= 4; W32(r_esp, 0x598da3u); f_0052d46c();
    /* 00598da3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00598da4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x598da9u); f_0082da80();
    /* 00598da9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00598dac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00598dad: ret  */ FN_RET(0x00598d40); r_esp += 4; return;
}

void f_00598db0(void) /* sub_598DB0 */
{
    FN_ENTER(0x00598db0);
    /* 00598db0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00598db1: mov esi, ecx */ r_esi = r_ecx;
    /* 00598db3: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 00598db9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598dbb: jne 0x598ebf */ if (!fZ) goto L_00598ebf;
L_00598dc1:; BB(0x00598dc1);
    /* 00598dc1: fld dword ptr [0x929344] */ FPUSH(R_F32((u32)(0x929344u)));
    /* 00598dc7: movzx eax, byte ptr [0xa7458c] */ r_eax = (u32)R8((u32)(0xa7458cu));
    /* 00598dce: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 00598dd4: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00598dd6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00598dd8: fmul dword ptr [0x929348] */ ST(0) = ST(0) * R_F32((u32)(0x929348u));
    /* 00598dde: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00598de0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00598de2: fstp dword ptr [esi + 0xc0] */ W_F32((u32)(r_esi+0xc0u), ST(0)); FPOP();
    /* 00598de8: jne 0x598dfc */ if (!fZ) goto L_00598dfc;
L_00598dea:; BB(0x00598dea);
    /* 00598dea: mov dword ptr [0xa74590], 0xbd088889 */ W32((u32)(0xa74590u), 0xbd088889u);
    /* 00598df4: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00598df7: mov byte ptr [0xa7458c], al */ W8((u32)(0xa7458cu), (u8)r_eax);
L_00598dfc:; BB(0x00598dfc);
    /* 00598dfc: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00598dfe: jne 0x598e12 */ if (!fZ) goto L_00598e12;
L_00598e00:; BB(0x00598e00);
    /* 00598e00: mov dword ptr [0xa74594], 0xbc888889 */ W32((u32)(0xa74594u), 0xbc888889u);
    /* 00598e0a: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00598e0d: mov byte ptr [0xa7458c], al */ W8((u32)(0xa7458cu), (u8)r_eax);
L_00598e12:; BB(0x00598e12);
    /* 00598e12: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00598e14: jne 0x598e33 */ if (!fZ) goto L_00598e33;
L_00598e16:; BB(0x00598e16);
    /* 00598e16: fld dword ptr [0x92943c] */ FPUSH(R_F32((u32)(0x92943cu)));
    /* 00598e1c: mov dword ptr [0xa74598], 0x3d888889 */ W32((u32)(0xa74598u), 0x3d888889u);
    /* 00598e26: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00598e29: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00598e2c: mov byte ptr [0xa7458c], al */ W8((u32)(0xa7458cu), (u8)r_eax);
    /* 00598e31: jmp 0x598e39 */ goto L_00598e39;
L_00598e33:; BB(0x00598e33);
    /* 00598e33: fld dword ptr [0xa74598] */ FPUSH(R_F32((u32)(0xa74598u)));
L_00598e39:; BB(0x00598e39);
    /* 00598e39: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 00598e3b: jne 0x598e51 */ if (!fZ) goto L_00598e51;
L_00598e3d:; BB(0x00598e3d);
    /* 00598e3d: mov dword ptr [0xa7459c], 0xbd01b4e8 */ W32((u32)(0xa7459cu), 0xbd01b4e8u);
    /* 00598e47: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 00598e4c: mov byte ptr [0xa7458c], al */ W8((u32)(0xa7458cu), (u8)r_eax);
L_00598e51:; BB(0x00598e51);
    /* 00598e51: fld dword ptr [0xa74590] */ FPUSH(R_F32((u32)(0xa74590u)));
    /* 00598e57: fadd dword ptr [esi + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x394u));
    /* 00598e5d: fld dword ptr [0xa74594] */ FPUSH(R_F32((u32)(0xa74594u)));
    /* 00598e63: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 00598e66: fld dword ptr [esi + 0x388] */ FPUSH(R_F32((u32)(r_esi+0x388u)));
    /* 00598e6c: fld dword ptr [esi + 0x390] */ FPUSH(R_F32((u32)(r_esi+0x390u)));
    /* 00598e72: fld dword ptr [0xa7459c] */ FPUSH(R_F32((u32)(0xa7459cu)));
    /* 00598e78: fadd dword ptr [esi + 0x38c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38cu));
    /* 00598e7e: fcom dword ptr [0x929340] */ fx_compare(ST(0), R_F32((u32)(0x929340u))); 
    /* 00598e84: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00598e86: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00598e88: fstp dword ptr [esi + 0x394] */ W_F32((u32)(r_esi+0x394u), ST(0)); FPOP();
    /* 00598e8e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00598e90: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 00598e93: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00598e95: fstp dword ptr [esi + 0x38c] */ W_F32((u32)(r_esi+0x38cu), ST(0)); FPOP();
    /* 00598e9b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00598e9d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00598e9f: fstp dword ptr [esi + 0x388] */ W_F32((u32)(r_esi+0x388u), ST(0)); FPOP();
    /* 00598ea5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00598ea7: fstp dword ptr [esi + 0x390] */ W_F32((u32)(r_esi+0x390u), ST(0)); FPOP();
    /* 00598ead: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00598eae: ja 0x598f11 */ if ((!fC&&!fZ)) goto L_00598f11;
L_00598eb0:; BB(0x00598eb0);
    /* 00598eb0: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00598eb4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00598eb9: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 00598ebd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00598ebe: ret  */ FN_RET(0x00598db0); r_esp += 4; return;
L_00598ebf:; BB(0x00598ebf);
    /* 00598ebf: mov ecx, esi */ r_ecx = r_esi;
    /* 00598ec1: call 0x598f1c */ r_esp -= 4; W32(r_esp, 0x598ec6u); f_00598f1c();
    /* 00598ec6: mov ecx, esi */ r_ecx = r_esi;
    /* 00598ec8: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x598ecdu); f_007aa094();
    /* 00598ecd: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 00598ed3: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00598ed5: je 0x598ee6 */ if (fZ) goto L_00598ee6;
L_00598ed7:; BB(0x00598ed7);
    /* 00598ed7: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00598edb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00598ee0: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 00598ee4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00598ee5: ret  */ FN_RET(0x00598db0); r_esp += 4; return;
L_00598ee6:; BB(0x00598ee6);
    /* 00598ee6: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00598eec: mov eax, dword ptr [eax + 0x38c] */ r_eax = R32((u32)(r_eax+0x38cu));
    /* 00598ef2: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598ef5: je 0x598f13 */ if (fZ) goto L_00598f13;
L_00598ef7:; BB(0x00598ef7);
    /* 00598ef7: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598efa: je 0x598f13 */ if (fZ) goto L_00598f13;
L_00598efc:; BB(0x00598efc);
    /* 00598efc: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598eff: je 0x598f13 */ if (fZ) goto L_00598f13;
L_00598f01:; BB(0x00598f01);
    /* 00598f01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00598f03:; BB(0x00598f03);
    /* 00598f03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00598f05: je 0x598f11 */ if (fZ) goto L_00598f11;
L_00598f07:; BB(0x00598f07);
    /* 00598f07: mov dword ptr [esi + 0x380], 0 */ W32((u32)(r_esi+0x380u), 0x0u);
L_00598f11:; BB(0x00598f11);
    /* 00598f11: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00598f12: ret  */ FN_RET(0x00598db0); r_esp += 4; return;
L_00598f13:; BB(0x00598f13);
    /* 00598f13: mov eax, 1 */ r_eax = 0x1u;
    /* 00598f18: jmp 0x598f03 */ goto L_00598f03;
}

void f_00598f1c(void) /* sub_598F1C */
{
    FN_ENTER(0x00598f1c);
    /* 00598f1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00598f1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00598f1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00598f1f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00598f20: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00598f23: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00598f25: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 00598f2b: fcom dword ptr [0x929350] */ fx_compare(ST(0), R_F32((u32)(0x929350u))); 
    /* 00598f31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00598f33: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00598f34: jb 0x599182 */ if (fC) goto L_00599182;
L_00598f3a:; BB(0x00598f3a);
    /* 00598f3a: fcom dword ptr [0x92934c] */ fx_compare(ST(0), R_F32((u32)(0x92934cu))); 
    /* 00598f40: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00598f42: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00598f43: ja 0x599182 */ if ((!fC&&!fZ)) goto L_00599182;
L_00598f49:; BB(0x00598f49);
    /* 00598f49: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00598f4b: movzx eax, byte ptr [0xa745a0] */ r_eax = (u32)R8((u32)(0xa745a0u));
    /* 00598f52: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00598f54: jne 0x598f68 */ if (!fZ) goto L_00598f68;
L_00598f56:; BB(0x00598f56);
    /* 00598f56: mov dword ptr [0xa745a4], 0x41c80000 */ W32((u32)(0xa745a4u), 0x41c80000u);
    /* 00598f60: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00598f63: mov byte ptr [0xa745a0], al */ W8((u32)(0xa745a0u), (u8)r_eax);
L_00598f68:; BB(0x00598f68);
    /* 00598f68: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00598f6a: jne 0x598f7e */ if (!fZ) goto L_00598f7e;
L_00598f6c:; BB(0x00598f6c);
    /* 00598f6c: mov dword ptr [0xa745a8], 0x40a00000 */ W32((u32)(0xa745a8u), 0x40a00000u);
    /* 00598f76: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00598f79: mov byte ptr [0xa745a0], al */ W8((u32)(0xa745a0u), (u8)r_eax);
L_00598f7e:; BB(0x00598f7e);
    /* 00598f7e: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00598f80: jne 0x598f97 */ if (!fZ) goto L_00598f97;
L_00598f82:; BB(0x00598f82);
    /* 00598f82: mov dword ptr [0xa745ac], 0x40f00000 */ W32((u32)(0xa745acu), 0x40f00000u);
    /* 00598f8c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00598f8f: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00598f92: mov byte ptr [0xa745a0], al */ W8((u32)(0xa745a0u), (u8)r_eax);
L_00598f97:; BB(0x00598f97);
    /* 00598f97: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00598f99: jne 0x598fb3 */ if (!fZ) goto L_00598fb3;
L_00598f9b:; BB(0x00598f9b);
    /* 00598f9b: fld dword ptr [0xa745ac] */ FPUSH(R_F32((u32)(0xa745acu)));
    /* 00598fa1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00598fa3: fstp dword ptr [0xa745b0] */ W_F32((u32)(0xa745b0u), ST(0)); FPOP();
    /* 00598fa9: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00598fae: mov byte ptr [0xa745a0], al */ W8((u32)(0xa745a0u), (u8)r_eax);
L_00598fb3:; BB(0x00598fb3);
    /* 00598fb3: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00598fb9: mov edx, dword ptr [eax + 0x3fc] */ r_edx = R32((u32)(r_eax+0x3fcu));
    /* 00598fbf: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00598fc6: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00598fc8: push dword ptr [edx*4 + 0x9bfbe8] */ { u32 v = R32((u32)(r_edx*4+0x9bfbe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00598fcf: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x598fd4u); f_0077a684();
    /* 00598fd4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00598fd5: movsx eax, word ptr [eax] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00598fd8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00598fdc: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00598fe0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00598fe4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598fe6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00598fe8: push dword ptr [0xa745a4] */ { u32 v = R32((u32)(0xa745a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00598fee: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x598ff3u); f_007714cc();
    /* 00598ff3: movzx edi, ax */ r_edi = (u32)(u16)r_eax;
    /* 00598ff6: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598ffc: je 0x5990c3 */ if (fZ) goto L_005990c3;
L_00599002:; BB(0x00599002);
    /* 00599002: cmp edi, dword ptr [ebx + 0x384] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x384u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599008: mov ebp, 0 */ r_ebp = 0x0u;
    /* 0059900d: je 0x5990c3 */ if (fZ) goto L_005990c3;
L_00599013:; BB(0x00599013);
    /* 00599013: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00599014: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x599019u); f_0068d5a8();
    /* 00599019: mov esi, eax */ r_esi = r_eax;
    /* 0059901b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059901e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599020: je 0x5990c3 */ if (fZ) goto L_005990c3;
L_00599026:; BB(0x00599026);
    /* 00599026: fld dword ptr [0xa745a8] */ FPUSH(R_F32((u32)(0xa745a8u)));
    /* 0059902c: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0059902f: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00599032: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00599034: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00599036: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00599038: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059903a: fadd dword ptr [esi + 0xe3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xe3cu));
    /* 00599040: fld dword ptr [ebx + 0x304] */ FPUSH(R_F32((u32)(r_ebx+0x304u)));
    /* 00599046: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00599048: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0059904a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059904c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059904e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059904f: jb 0x59918e */ if (fC) goto L_0059918e;
L_00599055:; BB(0x00599055);
    /* 00599055: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00599057: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00599059: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059905a: jb 0x5990c3 */ if (fC) goto L_005990c3;
L_0059905c:; BB(0x0059905c);
    /* 0059905c: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00599062: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00599065: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599066: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599067: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x59906cu); f_007a9180();
    /* 0059906c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059906f: fcomp dword ptr [0xa745b0] */ fx_compare(ST(0), R_F32((u32)(0xa745b0u))); FPOP();
    /* 00599075: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00599077: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00599078: ja 0x5990c3 */ if ((!fC&&!fZ)) goto L_005990c3;
L_0059907a:; BB(0x0059907a);
    /* 0059907a: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 0059907c: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00599081: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599082: mov ecx, esi */ r_ecx = r_esi;
    /* 00599084: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599085: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599087: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059908b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059908f: push dword ptr [ebx + 0x37c] */ { u32 v = R32((u32)(r_ebx+0x37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00599095: call dword ptr [ebp + 0x60] */ { u32 t = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, 0x599098u); call_ind(t); }
    /* 00599098: fcom dword ptr [0x929428] */ fx_compare(ST(0), R_F32((u32)(0x929428u))); 
    /* 0059909e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005990a0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005990a1: je 0x599197 */ if (fZ) goto L_00599197;
L_005990a7:; BB(0x005990a7);
    /* 005990a7: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005990a9: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005990ac: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005990b0: mov ecx, esi */ r_ecx = r_esi;
    /* 005990b2: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005990b5: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x5990b8u); call_ind(t); }
L_005990b8:; BB(0x005990b8);
    /* 005990b8: mov dword ptr [ebx + 0x384], edi */ W32((u32)(r_ebx+0x384u), r_edi);
    /* 005990be: mov ebp, 1 */ r_ebp = 0x1u;
L_005990c3:; BB(0x005990c3);
    /* 005990c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005990c5: push dword ptr [0xa745a4] */ { u32 v = R32((u32)(0xa745a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005990cb: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005990ce: or eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005990d3: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 005990d6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005990d8: call 0x77170c */ r_esp -= 4; W32(r_esp, 0x5990ddu); f_0077170c();
    /* 005990dd: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 005990e0: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005990e3: and eax, 0xfdffffff */ {  u32 a = r_eax; u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005990e8: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005990ee: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 005990f1: je 0x599178 */ if (fZ) goto L_00599178;
L_005990f7:; BB(0x005990f7);
    /* 005990f7: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 005990fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005990ff: je 0x599109 */ if (fZ) goto L_00599109;
L_00599101:; BB(0x00599101);
    /* 00599101: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 00599105: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599107: je 0x599178 */ if (fZ) goto L_00599178;
L_00599109:; BB(0x00599109);
    /* 00599109: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059910a: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x59910fu); f_00786b3c();
    /* 0059910f: mov esi, eax */ r_esi = r_eax;
    /* 00599111: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599114: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599116: je 0x599178 */ if (fZ) goto L_00599178;
L_00599118:; BB(0x00599118);
    /* 00599118: lea edi, [ebx + 0x300] */ r_edi = (u32)(r_ebx+0x300u);
    /* 0059911e: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00599124: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599125: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00599126: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x59912bu); f_007a9180();
    /* 0059912b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059912e: fcomp dword ptr [0xa745b0] */ fx_compare(ST(0), R_F32((u32)(0xa745b0u))); FPOP();
    /* 00599134: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00599136: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00599137: ja 0x599178 */ if ((!fC&&!fZ)) goto L_00599178;
L_00599139:; BB(0x00599139);
    /* 00599139: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 0059913b: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00599140: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599141: mov ecx, esi */ r_ecx = r_esi;
    /* 00599143: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599144: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599146: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059914a: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059914e: push dword ptr [ebx + 0x37c] */ { u32 v = R32((u32)(r_ebx+0x37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00599154: call dword ptr [ebp + 0x60] */ { u32 t = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, 0x599157u); call_ind(t); }
    /* 00599157: fcom dword ptr [0x929428] */ fx_compare(ST(0), R_F32((u32)(0x929428u))); 
    /* 0059915d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059915f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00599160: je 0x59919e */ if (fZ) goto L_0059919e;
L_00599162:; BB(0x00599162);
    /* 00599162: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00599164: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599167: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0059916b: mov ecx, esi */ r_ecx = r_esi;
    /* 0059916d: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00599170: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x599173u); call_ind(t); }
L_00599173:; BB(0x00599173);
    /* 00599173: mov ebp, 1 */ r_ebp = 0x1u;
L_00599178:; BB(0x00599178);
    /* 00599178: mov eax, ebp */ r_eax = r_ebp;
    /* 0059917a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059917d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059917e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059917f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00599180: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00599181: ret  */ FN_RET(0x00598f1c); r_esp += 4; return;
L_00599182:; BB(0x00599182);
    /* 00599182: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00599184: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00599186: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00599189: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059918a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059918b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059918c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059918d: ret  */ FN_RET(0x00598f1c); r_esp += 4; return;
L_0059918e:; BB(0x0059918e);
    /* 0059918e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00599190: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00599192: jmp 0x5990c3 */ goto L_005990c3;
L_00599197:; BB(0x00599197);
    /* 00599197: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00599199: jmp 0x5990b8 */ goto L_005990b8;
L_0059919e:; BB(0x0059919e);
    /* 0059919e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005991a0: jmp 0x599173 */ goto L_00599173;
}

