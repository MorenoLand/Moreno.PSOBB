#include "protos.h"

void f_0084a15c(void) /* sub_84A15C */
{
    FN_ENTER(0x0084a15c);
    /* 0084a15c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084a15d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084a15e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084a15f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084a160: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084a163: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0084a167: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 0084a16b: mov edx, ecx */ r_edx = r_ecx;
    /* 0084a16d: mov eax, dword ptr [0xacd534] */ r_eax = R32((u32)(0xacd534u));
    /* 0084a172: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084a178: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0084a17c: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0084a17f: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084a182: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 0084a185: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 0084a189: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0084a18d: mov ebx, eax */ r_ebx = r_eax;
L_0084a18f:; BB(0x0084a18f);
    /* 0084a18f: fld dword ptr [0x98c5c8] */ FPUSH(R_F32((u32)(0x98c5c8u)));
    /* 0084a195: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0084a199: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 0084a19d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0084a19e: lea edi, [ebp + 2] */ r_edi = (u32)(r_ebp+0x2u);
    /* 0084a1a1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084a1a3: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084a1a5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084a1a7: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 0084a1ad: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0084a1b1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084a1b3: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 0084a1b6: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0084a1b8: mov ecx, dword ptr [ebx + esi*8 + 4] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 0084a1bc: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0084a1bf: mov ecx, dword ptr [ebx + esi*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x8u));
    /* 0084a1c3: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0084a1c6: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 0084a1ca: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0084a1cd: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0084a1d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084a1d2: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 0084a1d5: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 0084a1d9: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0084a1dd: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084a1e1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084a1e3: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 0084a1e6: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0084a1ea: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084a1ec: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084a1ee: mov esi, dword ptr [ebx + ecx*8] */ r_esi = R32((u32)(r_ebx+r_ecx*8));
    /* 0084a1f1: mov dword ptr [edx + 0x14], esi */ W32((u32)(r_edx+0x14u), r_esi);
    /* 0084a1f4: mov esi, dword ptr [ebx + ecx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 0084a1f8: mov dword ptr [edx + 0x18], esi */ W32((u32)(r_edx+0x18u), r_esi);
    /* 0084a1fb: mov ecx, dword ptr [ebx + ecx*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 0084a1ff: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0084a203: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 0084a206: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 0084a20a: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0084a20e: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084a212: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0084a215: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084a217: fstp dword ptr [edx + 0x20] */ W_F32((u32)(r_edx+0x20u), ST(0)); FPOP();
    /* 0084a21a: movsx ecx, word ptr [edi + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0xau));
    /* 0084a21e: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0084a222: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084a226: lea edi, [eax - 2] */ r_edi = (u32)(r_eax+0xfffffffeu);
    /* 0084a229: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084a22b: fstp dword ptr [edx + 0x24] */ W_F32((u32)(r_edx+0x24u), ST(0)); FPOP();
    /* 0084a22e: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084a231: jmp 0x84a236 */ goto L_0084a236;
L_0084a233:; BB(0x0084a233);
    /* 0084a233: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
L_0084a236:; BB(0x0084a236);
    /* 0084a236: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0084a23a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084a23c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084a23e: mov eax, dword ptr [ebx + ecx*8] */ r_eax = R32((u32)(r_ebx+r_ecx*8));
    /* 0084a241: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0084a243: mov eax, dword ptr [ebx + ecx*8 + 4] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 0084a247: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0084a24a: mov ecx, dword ptr [ebx + ecx*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 0084a24e: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0084a251: movsx ecx, word ptr [ebp + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 0084a255: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0084a259: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084a25d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084a25f: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 0084a262: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 0084a266: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0084a26a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084a26e: lea ebp, [esi + ebp + 4] */ r_ebp = (u32)(r_esi+r_ebp+0x4u);
    /* 0084a272: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084a274: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084a277: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0084a27a: jne 0x84a233 */ if (!fZ) goto L_0084a233;
L_0084a27c:; BB(0x0084a27c);
    /* 0084a27c: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0084a27f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084a281: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0084a285: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0084a28b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0084a28d: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0084a28f: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084a292: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0084a298: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084a299: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0084a29b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084a29c: call dword ptr [ecx + 0x120] */ { u32 t = R32((u32)(r_ecx+0x120u)); r_esp -= 4; W32(r_esp, 0x84a2a2u); call_ind(t); }
    /* 0084a2a2: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0084a2a6: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0084a2a9: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0084a2ad: jne 0x84a18f */ if (!fZ) goto L_0084a18f;
L_0084a2b3:; BB(0x0084a2b3);
    /* 0084a2b3: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084a2b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084a2b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084a2b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084a2b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084a2ba: ret  */ FN_RET(0x0084a15c); r_esp += 4; return;
}

void f_0084a2bc(void) /* sub_84A2BC */
{
    FN_ENTER(0x0084a2bc);
    /* 0084a2bc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0084a2c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0084a2c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0084a2c4: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0084a2c9: call 0x84a338 */ r_esp -= 4; W32(r_esp, 0x84a2ceu); f_0084a338();
    /* 0084a2ce: ret  */ FN_RET(0x0084a2bc); r_esp += 4; return;
}

void f_0084a2d0(void) /* sub_84A2D0 */
{
    FN_ENTER(0x0084a2d0);
    /* 0084a2d0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0084a2d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0084a2d6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0084a2d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0084a2db: call 0x84a338 */ r_esp -= 4; W32(r_esp, 0x84a2e0u); f_0084a338();
    /* 0084a2e0: ret  */ FN_RET(0x0084a2d0); r_esp += 4; return;
}

void f_0084a2e4(void) /* sub_84A2E4 */
{
    FN_ENTER(0x0084a2e4);
    /* 0084a2e4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0084a2e8: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0084a2ea: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0084a2ef: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0084a2f4: call 0x84a338 */ r_esp -= 4; W32(r_esp, 0x84a2f9u); f_0084a338();
    /* 0084a2f9: ret  */ FN_RET(0x0084a2e4); r_esp += 4; return;
}

void f_0084a2fc(void) /* sub_84A2FC */
{
    FN_ENTER(0x0084a2fc);
    /* 0084a2fc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0084a300: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0084a303: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0084a305: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0084a30a: call 0x84a338 */ r_esp -= 4; W32(r_esp, 0x84a30fu); f_0084a338();
    /* 0084a30f: ret  */ FN_RET(0x0084a2fc); r_esp += 4; return;
}

void f_0084a310(void) /* sub_84A310 */
{
    FN_ENTER(0x0084a310);
    /* 0084a310: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0084a314: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0084a317: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0084a319: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0084a31e: call 0x84a338 */ r_esp -= 4; W32(r_esp, 0x84a323u); f_0084a338();
    /* 0084a323: ret  */ FN_RET(0x0084a310); r_esp += 4; return;
}

void f_0084a324(void) /* sub_84A324 */
{
    FN_ENTER(0x0084a324);
    /* 0084a324: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0084a328: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0084a32b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0084a32e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0084a330: call 0x84a338 */ r_esp -= 4; W32(r_esp, 0x84a335u); f_0084a338();
    /* 0084a335: ret  */ FN_RET(0x0084a324); r_esp += 4; return;
}

void f_0084a338(void) /* sub_84A338 */
{
    FN_ENTER(0x0084a338);
    /* 0084a338: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084a33b: mov ecx, edx */ r_ecx = r_edx;
    /* 0084a33d: mov eax, dword ptr [0xae7784] */ r_eax = R32((u32)(0xae7784u));
    /* 0084a342: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0084a344: jne 0x84a50a */ if (!fZ) goto L_0084a50a;
L_0084a34a:; BB(0x0084a34a);
    /* 0084a34a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0084a34c: je 0x84a504 */ if (fZ) goto L_0084a504;
L_0084a352:; BB(0x0084a352);
    /* 0084a352: fld dword ptr [0x98c62c] */ FPUSH(R_F32((u32)(0x98c62cu)));
    /* 0084a358: fld dword ptr [0x98c628] */ FPUSH(R_F32((u32)(0x98c628u)));
    /* 0084a35e: fld dword ptr [0x98c624] */ FPUSH(R_F32((u32)(0x98c624u)));
    /* 0084a364: mov eax, ecx */ r_eax = r_ecx;
    /* 0084a366: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0084a369: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0084a36c: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0084a36f: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0084a372: fadd dword ptr [eax*4 + 0x98c618] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98c618u));
    /* 0084a379: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0084a37b: fadd dword ptr [0xaf0370] */ ST(0) = ST(0) + R_F32((u32)(0xaf0370u));
    /* 0084a381: mov eax, ecx */ r_eax = r_ecx;
    /* 0084a383: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0084a386: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0084a389: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084a38d: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084a391: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0084a394: fadd dword ptr [eax*4 + 0x98c618] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98c618u));
    /* 0084a39b: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 0084a39d: fadd dword ptr [0xaf0374] */ ST(0) = ST(0) + R_F32((u32)(0xaf0374u));
    /* 0084a3a3: mov eax, ecx */ r_eax = r_ecx;
    /* 0084a3a5: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0084a3a8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0084a3ab: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084a3af: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084a3b3: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0084a3b6: fadd dword ptr [eax*4 + 0x98c618] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98c618u));
    /* 0084a3bd: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 0084a3bf: fadd dword ptr [0xaf0378] */ ST(0) = ST(0) + R_F32((u32)(0xaf0378u));
    /* 0084a3c5: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 0084a3c8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084a3cc: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084a3d0: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0084a3d3: fadd dword ptr [eax*4 + 0x98c618] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98c618u));
    /* 0084a3da: fdiv st(6) */ ST(0) = ST(0) / ST(6);
    /* 0084a3dc: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084a3de: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0084a3e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084a3e2: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084a3e4: fadd dword ptr [0xaf037c] */ ST(0) = ST(0) + R_F32((u32)(0xaf037cu));
    /* 0084a3ea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084a3eb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084a3ed: jbe 0x84a3f1 */ if ((fC||fZ)) goto L_0084a3f1;
L_0084a3ef:; BB(0x0084a3ef);
    /* 0084a3ef: fst st(3) */ ST(3) = ST(0);
L_0084a3f1:; BB(0x0084a3f1);
    /* 0084a3f1: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084a3f3: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0084a3f5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084a3f7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084a3f8: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084a3fa: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0084a3fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084a3fe: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084a400: jae 0x84a404 */ if (!fC) goto L_0084a404;
L_0084a402:; BB(0x0084a402);
    /* 0084a402: fst st(3) */ ST(3) = ST(0);
L_0084a404:; BB(0x0084a404);
    /* 0084a404: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084a406: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0084a408: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084a409: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084a40b: jbe 0x84a40f */ if ((fC||fZ)) goto L_0084a40f;
L_0084a40d:; BB(0x0084a40d);
    /* 0084a40d: fst st(2) */ ST(2) = ST(0);
L_0084a40f:; BB(0x0084a40f);
    /* 0084a40f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084a411: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0084a413: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084a415: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084a416: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084a418: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0084a41a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084a41c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084a41e: jae 0x84a422 */ if (!fC) goto L_0084a422;
L_0084a420:; BB(0x0084a420);
    /* 0084a420: fst st(2) */ ST(2) = ST(0);
L_0084a422:; BB(0x0084a422);
    /* 0084a422: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084a424: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0084a426: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084a427: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084a429: jbe 0x84a42d */ if ((fC||fZ)) goto L_0084a42d;
L_0084a42b:; BB(0x0084a42b);
    /* 0084a42b: fst st(1) */ ST(1) = ST(0);
L_0084a42d:; BB(0x0084a42d);
    /* 0084a42d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084a42f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0084a431: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084a433: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084a434: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084a436: fcom st(5) */ fx_compare(ST(0), ST(5)); 
    /* 0084a438: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084a43a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084a43c: jae 0x84a440 */ if (!fC) goto L_0084a440;
L_0084a43e:; BB(0x0084a43e);
    /* 0084a43e: fst st(1) */ ST(1) = ST(0);
L_0084a440:; BB(0x0084a440);
    /* 0084a440: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a442: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0084a444: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084a445: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084a447: jbe 0x84a44b */ if ((fC||fZ)) goto L_0084a44b;
L_0084a449:; BB(0x0084a449);
    /* 0084a449: fst st(5) */ ST(5) = ST(0);
L_0084a44b:; BB(0x0084a44b);
    /* 0084a44b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084a44d: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 0084a44f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084a451: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084a452: jae 0x84a456 */ if (!fC) goto L_0084a456;
L_0084a454:; BB(0x0084a454);
    /* 0084a454: fst st(4) */ ST(4) = ST(0);
L_0084a456:; BB(0x0084a456);
    /* 0084a456: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084a458: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084a45a: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0084a45e: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0084a463: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084a468: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0084a46c: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0084a470: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 0084a474: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0084a478: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084a47a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084a47c: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0084a480: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084a482: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0084a486: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0084a48b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084a490: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0084a494: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0084a498: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 0084a49c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0084a4a0: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 0084a4a5: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0084a4a8: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0084a4ab: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0084a4ad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a4af: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0084a4b3: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0084a4b8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084a4bd: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0084a4c1: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0084a4c5: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 0084a4c9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0084a4cd: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 0084a4d2: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0084a4d5: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0084a4d7: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0084a4db: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0084a4e0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084a4e5: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0084a4e9: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0084a4ed: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 0084a4f1: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0084a4f5: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 0084a4fa: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0084a4fc: mov dword ptr [0xae7788], edx */ W32((u32)(0xae7788u), r_edx);
    /* 0084a502: jmp 0x84a50a */ goto L_0084a50a;
L_0084a504:; BB(0x0084a504);
    /* 0084a504: mov dword ptr [0xae7788], ecx */ W32((u32)(0xae7788u), r_ecx);
L_0084a50a:; BB(0x0084a50a);
    /* 0084a50a: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084a510: cmp ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084a516: je 0x84a52d */ if (fZ) goto L_0084a52d;
L_0084a518:; BB(0x0084a518);
    /* 0084a518: mov eax, dword ptr [0xacd538] */ r_eax = R32((u32)(0xacd538u));
    /* 0084a51d: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084a522: mov dword ptr [0xacd538], eax */ W32((u32)(0xacd538u), r_eax);
    /* 0084a527: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084a52a: ret 4 */ FN_RET(0x0084a338); r_esp += 8; return;
L_0084a52d:; BB(0x0084a52d);
    /* 0084a52d: mov eax, dword ptr [0xacd538] */ r_eax = R32((u32)(0xacd538u));
    /* 0084a532: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084a537: mov dword ptr [0xacd538], eax */ W32((u32)(0xacd538u), r_eax);
    /* 0084a53c: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084a53f: ret 4 */ FN_RET(0x0084a338); r_esp += 8; return;
}

void f_0084a544(void) /* sub_84A544 */
{
    FN_ENTER(0x0084a544);
    /* 0084a544: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084a547: mov ecx, dword ptr [0xae7784] */ r_ecx = R32((u32)(0xae7784u));
    /* 0084a54d: fld dword ptr [0x98c620] */ FPUSH(R_F32((u32)(0x98c620u)));
    /* 0084a553: fld dword ptr [0xaf0370] */ FPUSH(R_F32((u32)(0xaf0370u)));
    /* 0084a559: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084a55b: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0084a55e: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0084a562: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084a567: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084a56b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0084a56f: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0084a573: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0084a576: fld dword ptr [0xaf0374] */ FPUSH(R_F32((u32)(0xaf0374u)));
    /* 0084a57c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084a57e: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0084a582: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0084a585: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0084a589: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084a58e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084a592: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0084a596: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0084a59a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0084a59d: fld dword ptr [0xaf0378] */ FPUSH(R_F32((u32)(0xaf0378u)));
    /* 0084a5a3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084a5a5: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 0084a5aa: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0084a5ad: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0084a5b0: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0084a5b3: mov dword ptr [0xae7784], ecx */ W32((u32)(0xae7784u), r_ecx);
    /* 0084a5b9: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0084a5bb: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0084a5be: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0084a5c2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084a5c7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084a5cb: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0084a5cf: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0084a5d3: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0084a5d6: fld dword ptr [0xaf037c] */ FPUSH(R_F32((u32)(0xaf037cu)));
    /* 0084a5dc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084a5de: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 0084a5e3: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0084a5e6: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0084a5e8: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0084a5eb: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0084a5ef: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084a5f4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084a5f8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0084a5fc: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0084a600: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0084a603: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 0084a608: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0084a60a: mov dword ptr [0xae7788], edx */ W32((u32)(0xae7788u), r_edx);
    /* 0084a610: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084a613: ret  */ FN_RET(0x0084a544); r_esp += 4; return;
}

void f_0084a614(void) /* sub_84A614 */
{
    FN_ENTER(0x0084a614);
    /* 0084a614: mov eax, dword ptr [0xae7784] */ r_eax = R32((u32)(0xae7784u));
    /* 0084a619: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084a61c: mov dword ptr [0xae7784], eax */ W32((u32)(0xae7784u), r_eax);
    /* 0084a621: ret  */ FN_RET(0x0084a614); r_esp += 4; return;
}

void f_0084a624(void) /* sub_84A624 */
{
    FN_ENTER(0x0084a624);
    /* 0084a624: mov eax, dword ptr [0xae7784] */ r_eax = R32((u32)(0xae7784u));
    /* 0084a629: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084a62c: mov dword ptr [0xae7784], eax */ W32((u32)(0xae7784u), r_eax);
    /* 0084a631: ret  */ FN_RET(0x0084a624); r_esp += 4; return;
}

void f_0084a634(void) /* sub_84A634 */
{
    FN_ENTER(0x0084a634);
    /* 0084a634: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084a635: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084a637: mov ebx, eax */ r_ebx = r_eax;
L_0084a639:; BB(0x0084a639);
    /* 0084a639: mov edx, dword ptr [ebx + 0xae77a0] */ r_edx = R32((u32)(r_ebx+0xae77a0u));
    /* 0084a63f: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0084a642: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084a644: je 0x84a648 */ if (fZ) goto L_0084a648;
L_0084a646:; BB(0x0084a646);
    /* 0084a646: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x84a648u); call_ind(t); }
L_0084a648:; BB(0x0084a648);
    /* 0084a648: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084a64b: jl 0x84a639 */ if ((fS!=fO)) goto L_0084a639;
L_0084a64d:; BB(0x0084a64d);
    /* 0084a64d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084a64e: ret  */ FN_RET(0x0084a634); r_esp += 4; return;
}

void f_0084a650(void) /* sub_84A650 */
{
    FN_ENTER(0x0084a650);
    /* 0084a650: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0084a654: cmp eax, dword ptr [0xae77a0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae77a0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084a65a: jne 0x84a666 */ if (!fZ) goto L_0084a666;
L_0084a65c:; BB(0x0084a65c);
    /* 0084a65c: mov dword ptr [0xae77a0], 0 */ W32((u32)(0xae77a0u), 0x0u);
L_0084a666:; BB(0x0084a666);
    /* 0084a666: cmp eax, dword ptr [0xae77a4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae77a4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084a66c: jne 0x84a678 */ if (!fZ) goto L_0084a678;
L_0084a66e:; BB(0x0084a66e);
    /* 0084a66e: mov dword ptr [0xae77a4], 0 */ W32((u32)(0xae77a4u), 0x0u);
L_0084a678:; BB(0x0084a678);
    /* 0084a678: cmp eax, dword ptr [0xae77a8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae77a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084a67e: jne 0x84a68a */ if (!fZ) goto L_0084a68a;
L_0084a680:; BB(0x0084a680);
    /* 0084a680: mov dword ptr [0xae77a8], 0 */ W32((u32)(0xae77a8u), 0x0u);
L_0084a68a:; BB(0x0084a68a);
    /* 0084a68a: cmp eax, dword ptr [0xae77ac] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae77acu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084a690: jne 0x84a69c */ if (!fZ) goto L_0084a69c;
L_0084a692:; BB(0x0084a692);
    /* 0084a692: mov dword ptr [0xae77ac], 0 */ W32((u32)(0xae77acu), 0x0u);
L_0084a69c:; BB(0x0084a69c);
    /* 0084a69c: cmp eax, dword ptr [0xae77b0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae77b0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084a6a2: jne 0x84a6ae */ if (!fZ) goto L_0084a6ae;
L_0084a6a4:; BB(0x0084a6a4);
    /* 0084a6a4: mov dword ptr [0xae77b0], 0 */ W32((u32)(0xae77b0u), 0x0u);
L_0084a6ae:; BB(0x0084a6ae);
    /* 0084a6ae: cmp eax, dword ptr [0xae77b4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae77b4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084a6b4: jne 0x84a6c0 */ if (!fZ) goto L_0084a6c0;
L_0084a6b6:; BB(0x0084a6b6);
    /* 0084a6b6: mov dword ptr [0xae77b4], 0 */ W32((u32)(0xae77b4u), 0x0u);
L_0084a6c0:; BB(0x0084a6c0);
    /* 0084a6c0: cmp eax, dword ptr [0xae77b8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae77b8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084a6c6: jne 0x84a6d2 */ if (!fZ) goto L_0084a6d2;
L_0084a6c8:; BB(0x0084a6c8);
    /* 0084a6c8: mov dword ptr [0xae77b8], 0 */ W32((u32)(0xae77b8u), 0x0u);
L_0084a6d2:; BB(0x0084a6d2);
    /* 0084a6d2: cmp eax, dword ptr [0xae77bc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae77bcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084a6d8: jne 0x84a6e4 */ if (!fZ) goto L_0084a6e4;
L_0084a6da:; BB(0x0084a6da);
    /* 0084a6da: mov dword ptr [0xae77bc], 0 */ W32((u32)(0xae77bcu), 0x0u);
L_0084a6e4:; BB(0x0084a6e4);
    /* 0084a6e4: cmp eax, dword ptr [0xae77c0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae77c0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084a6ea: jne 0x84a6f6 */ if (!fZ) goto L_0084a6f6;
L_0084a6ec:; BB(0x0084a6ec);
    /* 0084a6ec: mov dword ptr [0xae77c0], 0 */ W32((u32)(0xae77c0u), 0x0u);
L_0084a6f6:; BB(0x0084a6f6);
    /* 0084a6f6: cmp eax, dword ptr [0xae77c4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae77c4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084a6fc: jne 0x84a708 */ if (!fZ) goto L_0084a708;
L_0084a6fe:; BB(0x0084a6fe);
    /* 0084a6fe: mov dword ptr [0xae77c4], 0 */ W32((u32)(0xae77c4u), 0x0u);
L_0084a708:; BB(0x0084a708);
    /* 0084a708: cmp eax, dword ptr [0xae77c8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae77c8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084a70e: jne 0x84a71a */ if (!fZ) goto L_0084a71a;
L_0084a710:; BB(0x0084a710);
    /* 0084a710: mov dword ptr [0xae77c8], 0 */ W32((u32)(0xae77c8u), 0x0u);
L_0084a71a:; BB(0x0084a71a);
    /* 0084a71a: cmp eax, dword ptr [0xae77cc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae77ccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084a720: jne 0x84a72c */ if (!fZ) goto L_0084a72c;
L_0084a722:; BB(0x0084a722);
    /* 0084a722: mov dword ptr [0xae77cc], 0 */ W32((u32)(0xae77ccu), 0x0u);
L_0084a72c:; BB(0x0084a72c);
    /* 0084a72c: cmp eax, dword ptr [0xae77d0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae77d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084a732: jne 0x84a73e */ if (!fZ) goto L_0084a73e;
L_0084a734:; BB(0x0084a734);
    /* 0084a734: mov dword ptr [0xae77d0], 0 */ W32((u32)(0xae77d0u), 0x0u);
L_0084a73e:; BB(0x0084a73e);
    /* 0084a73e: cmp eax, dword ptr [0xae77d4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae77d4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084a744: jne 0x84a750 */ if (!fZ) goto L_0084a750;
L_0084a746:; BB(0x0084a746);
    /* 0084a746: mov dword ptr [0xae77d4], 0 */ W32((u32)(0xae77d4u), 0x0u);
L_0084a750:; BB(0x0084a750);
    /* 0084a750: cmp eax, dword ptr [0xae77d8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae77d8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084a756: jne 0x84a762 */ if (!fZ) goto L_0084a762;
L_0084a758:; BB(0x0084a758);
    /* 0084a758: mov dword ptr [0xae77d8], 0 */ W32((u32)(0xae77d8u), 0x0u);
L_0084a762:; BB(0x0084a762);
    /* 0084a762: cmp eax, dword ptr [0xae77dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae77dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084a768: jne 0x84a774 */ if (!fZ) goto L_0084a774;
L_0084a76a:; BB(0x0084a76a);
    /* 0084a76a: mov dword ptr [0xae77dc], 0 */ W32((u32)(0xae77dcu), 0x0u);
L_0084a774:; BB(0x0084a774);
    /* 0084a774: ret  */ FN_RET(0x0084a650); r_esp += 4; return;
}

void f_0084a778(void) /* sub_84A778 */
{
    FN_ENTER(0x0084a778);
    /* 0084a778: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084a77b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084a77d: je 0x84a900 */ if (fZ) goto L_0084a900;
L_0084a783:; BB(0x0084a783);
    /* 0084a783: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 0084a786: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 0084a789: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 0084a78c: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0084a78e: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0084a791: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 0084a794: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0084a797: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a799: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0084a79b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084a79d: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0084a7a0: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084a7a2: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0084a7a6: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0084a7a9: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0084a7ab: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 0084a7ae: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084a7b0: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0084a7b4: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 0084a7b7: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0084a7b9: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 0084a7bc: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0084a7be: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0084a7c0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084a7c2: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0084a7c6: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084a7c8: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 0084a7cc: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0084a7cf: fmulp st(6) */ ST(6) = ST(6) * ST(0); FPOP();
    /* 0084a7d1: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 0084a7d4: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 0084a7d7: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0084a7d9: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0084a7db: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084a7dd: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 0084a7df: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 0084a7e2: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 0084a7e5: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084a7e7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a7e9: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 0084a7eb: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0084a7ee: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0084a7f0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084a7f2: fsubp st(5) */ ST(5) = ST(5) - ST(0); FPOP();
    /* 0084a7f4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084a7f6: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 0084a7f8: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 0084a7fb: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 0084a7ff: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 0084a801: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084a803: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 0084a805: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 0084a808: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 0084a80b: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 0084a80e: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0084a811: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084a813: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0084a815: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084a817: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084a819: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 0084a81c: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0084a81e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084a820: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0084a824: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 0084a827: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084a829: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0084a82d: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 0084a830: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0084a832: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0084a834: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 0084a838: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a83a: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 0084a83e: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0084a841: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084a843: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0084a847: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0084a849: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0084a84b: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 0084a84e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0084a850: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0084a852: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0084a855: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084a857: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084a859: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0084a85b: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 0084a85e: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0084a861: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084a863: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0084a865: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0084a869: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0084a86b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a86d: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0084a86f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a871: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 0084a874: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 0084a877: fmul dword ptr [ecx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x24u));
    /* 0084a87a: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0084a87c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a87e: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0084a882: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 0084a885: fmul dword ptr [ecx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x20u));
    /* 0084a888: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 0084a88a: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0084a88c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a88e: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0084a892: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0084a896: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0084a898: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0084a89a: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 0084a89d: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0084a89f: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0084a8a1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084a8a3: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0084a8a5: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0084a8a9: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0084a8ab: fsubp st(5) */ ST(5) = ST(5) - ST(0); FPOP();
    /* 0084a8ad: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084a8af: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 0084a8b1: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0084a8b4: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0084a8b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a8b8: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 0084a8ba: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084a8bc: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 0084a8bf: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0084a8c3: fmulp st(6) */ ST(6) = ST(6) * ST(0); FPOP();
    /* 0084a8c5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084a8c7: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0084a8c9: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0084a8cd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084a8cf: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0084a8d1: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0084a8d5: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084a8d7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a8d9: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 0084a8db: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084a8dd: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0084a8df: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0084a8e3: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084a8e5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a8e7: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0084a8e9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a8eb: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 0084a8ee: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0084a8f2: fsub dword ptr [esp + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x24u));
    /* 0084a8f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a8f8: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0084a8fa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084a8fc: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084a8ff: ret  */ FN_RET(0x0084a778); r_esp += 4; return;
L_0084a900:; BB(0x0084a900);
    /* 0084a900: mov ecx, dword ptr [0xaf0328] */ r_ecx = R32((u32)(0xaf0328u));
    /* 0084a906: jmp 0x84a783 */ goto L_0084a783;
}

void f_0084a90c(void) /* sub_84A90C */
{
    FN_ENTER(0x0084a90c);
    /* 0084a90c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084a90d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084a90e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084a90f: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0084a913: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0084a916: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0084a918: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0084a91a: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0084a91d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0084a920: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0084a923: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0084a926: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0084a92a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0084a92c: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0084a92e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0084a931: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0084a934: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0084a937: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0084a93a: lea edx, [ecx + 0xc] */ r_edx = (u32)(r_ecx+0xcu);
    /* 0084a93d: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084a940: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0084a943: mov ebx, eax */ r_ebx = r_eax;
L_0084a945:; BB(0x0084a945);
    /* 0084a945: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0084a947: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 0084a949: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0084a94b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084a94d: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 0084a950: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 0084a953: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084a954: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084a956: ja 0x84a95a */ if ((!fC&&!fZ)) goto L_0084a95a;
L_0084a958:; BB(0x0084a958);
    /* 0084a958: fst st(3) */ ST(3) = ST(0);
L_0084a95a:; BB(0x0084a95a);
    /* 0084a95a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084a95c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084a95e: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 0084a960: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0084a963: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0084a965: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084a967: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084a968: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084a96a: jb 0x84a96e */ if (fC) goto L_0084a96e;
L_0084a96c:; BB(0x0084a96c);
    /* 0084a96c: fst st(2) */ ST(2) = ST(0);
L_0084a96e:; BB(0x0084a96e);
    /* 0084a96e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084a970: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a972: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 0084a975: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0084a978: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0084a97a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084a97c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084a97d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a97f: jb 0x84a983 */ if (fC) goto L_0084a983;
L_0084a981:; BB(0x0084a981);
    /* 0084a981: fst st(1) */ ST(1) = ST(0);
L_0084a983:; BB(0x0084a983);
    /* 0084a983: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084a985: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 0084a988: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0084a98a: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0084a98c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0084a98e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084a990: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0084a993: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084a994: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a996: jb 0x84a99a */ if (fC) goto L_0084a99a;
L_0084a998:; BB(0x0084a998);
    /* 0084a998: fst st(2) */ ST(2) = ST(0);
L_0084a99a:; BB(0x0084a99a);
    /* 0084a99a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084a99c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a99e: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 0084a9a0: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0084a9a3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0084a9a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084a9a7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084a9a8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a9aa: ja 0x84a9ae */ if ((!fC&&!fZ)) goto L_0084a9ae;
L_0084a9ac:; BB(0x0084a9ac);
    /* 0084a9ac: fst st(1) */ ST(1) = ST(0);
L_0084a9ae:; BB(0x0084a9ae);
    /* 0084a9ae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084a9b0: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 0084a9b3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a9b5: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 0084a9b8: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0084a9bb: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0084a9bd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084a9bf: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084a9c2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084a9c3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084a9c5: ja 0x84a9c9 */ if ((!fC&&!fZ)) goto L_0084a9c9;
L_0084a9c7:; BB(0x0084a9c7);
    /* 0084a9c7: fst st(1) */ ST(1) = ST(0);
L_0084a9c9:; BB(0x0084a9c9);
    /* 0084a9c9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084a9cb: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 0084a9ce: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084a9d0: ja 0x84a945 */ if ((!fC&&!fZ)) goto L_0084a945;
L_0084a9d6:; BB(0x0084a9d6);
    /* 0084a9d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0084a9d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084a9d8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084a9d9: ret 4 */ FN_RET(0x0084a90c); r_esp += 8; return;
}

void f_0084a9dc(void) /* sub_84A9DC */
{
    FN_ENTER(0x0084a9dc);
    /* 0084a9dc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0084a9e0: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0084a9e2: fsub dword ptr [ecx + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0xcu));
    /* 0084a9e5: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0084a9e7: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0084a9ea: fsub dword ptr [ecx + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0xcu));
    /* 0084a9ed: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0084a9f0: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0084a9f3: fsub dword ptr [ecx + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0xcu));
    /* 0084a9f6: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 0084a9f9: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0084a9fb: fadd dword ptr [ecx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xcu));
    /* 0084a9fe: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0084aa00: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0084aa03: fadd dword ptr [ecx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xcu));
    /* 0084aa06: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0084aa09: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0084aa0c: fadd dword ptr [ecx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xcu));
    /* 0084aa0f: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 0084aa12: ret 4 */ FN_RET(0x0084a9dc); r_esp += 8; return;
}

void f_0084aa18(void) /* sub_84AA18 */
{
    FN_ENTER(0x0084aa18);
    /* 0084aa18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084aa19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084aa1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084aa1b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084aa1c: mov ebx, edx */ r_ebx = r_edx;
    /* 0084aa1e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0084aa20: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0084aa23: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0084aa26: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0084aa2a: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0084aa2e: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0084aa30: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0084aa32: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084aa34: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 0084aa36: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 0084aa38: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0084aa3a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084aa3b: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0084aa3d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084aa3f: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084aa41: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0084aa43: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084aa45: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0084aa47: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0084aa49: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084aa4b: ja 0x84aa4f */ if ((!fC&&!fZ)) goto L_0084aa4f;
L_0084aa4d:; BB(0x0084aa4d);
    /* 0084aa4d: fst st(3) */ ST(3) = ST(0);
L_0084aa4f:; BB(0x0084aa4f);
    /* 0084aa4f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084aa51: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084aa52: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084aa54: jb 0x84aa58 */ if (fC) goto L_0084aa58;
L_0084aa56:; BB(0x0084aa56);
    /* 0084aa56: fst st(3) */ ST(3) = ST(0);
L_0084aa58:; BB(0x0084aa58);
    /* 0084aa58: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084aa5a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084aa5c: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0084aa5e: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0084aa60: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084aa62: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084aa63: jbe 0x84aa6c */ if ((fC||fZ)) goto L_0084aa6c;
L_0084aa65:; BB(0x0084aa65);
    /* 0084aa65: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0084aa6a: jmp 0x84aa6e */ goto L_0084aa6e;
L_0084aa6c:; BB(0x0084aa6c);
    /* 0084aa6c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0084aa6e:; BB(0x0084aa6e);
    /* 0084aa6e: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0084aa71: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0084aa74: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0084aa77: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0084aa79: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084aa7b: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 0084aa7e: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 0084aa81: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 0084aa84: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084aa85: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0084aa87: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084aa89: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084aa8b: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0084aa8d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084aa8f: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0084aa91: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0084aa93: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084aa95: ja 0x84aa99 */ if ((!fC&&!fZ)) goto L_0084aa99;
L_0084aa97:; BB(0x0084aa97);
    /* 0084aa97: fst st(3) */ ST(3) = ST(0);
L_0084aa99:; BB(0x0084aa99);
    /* 0084aa99: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084aa9b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084aa9c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084aa9e: jb 0x84aaa2 */ if (fC) goto L_0084aaa2;
L_0084aaa0:; BB(0x0084aaa0);
    /* 0084aaa0: fst st(3) */ ST(3) = ST(0);
L_0084aaa2:; BB(0x0084aaa2);
    /* 0084aaa2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084aaa4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084aaa6: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0084aaa8: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0084aaaa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084aaac: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084aaad: jbe 0x84aab6 */ if ((fC||fZ)) goto L_0084aab6;
L_0084aaaf:; BB(0x0084aaaf);
    /* 0084aaaf: mov edx, 1 */ r_edx = 0x1u;
    /* 0084aab4: jmp 0x84aab8 */ goto L_0084aab8;
L_0084aab6:; BB(0x0084aab6);
    /* 0084aab6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0084aab8:; BB(0x0084aab8);
    /* 0084aab8: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0084aabb: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0084aabe: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 0084aac1: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0084aac3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084aac5: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 0084aac8: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 0084aacb: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 0084aace: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084aacf: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0084aad1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084aad3: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084aad5: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0084aad7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084aad9: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0084aadb: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0084aadd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084aadf: ja 0x84aae3 */ if ((!fC&&!fZ)) goto L_0084aae3;
L_0084aae1:; BB(0x0084aae1);
    /* 0084aae1: fst st(3) */ ST(3) = ST(0);
L_0084aae3:; BB(0x0084aae3);
    /* 0084aae3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084aae5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084aae6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084aae8: jb 0x84aaec */ if (fC) goto L_0084aaec;
L_0084aaea:; BB(0x0084aaea);
    /* 0084aaea: fst st(3) */ ST(3) = ST(0);
L_0084aaec:; BB(0x0084aaec);
    /* 0084aaec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084aaee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084aaf0: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0084aaf2: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0084aaf4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084aaf6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084aaf7: jbe 0x84ab00 */ if ((fC||fZ)) goto L_0084ab00;
L_0084aaf9:; BB(0x0084aaf9);
    /* 0084aaf9: mov eax, 1 */ r_eax = 0x1u;
    /* 0084aafe: jmp 0x84ab02 */ goto L_0084ab02;
L_0084ab00:; BB(0x0084ab00);
    /* 0084ab00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0084ab02:; BB(0x0084ab02);
    /* 0084ab02: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084ab04: and ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084ab06: mov eax, ecx */ r_eax = r_ecx;
    /* 0084ab08: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084ab09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084ab0a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084ab0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084ab0c: ret 8 */ FN_RET(0x0084aa18); r_esp += 12; return;
}

void f_0084ab10(void) /* sub_84AB10 */
{
    FN_ENTER(0x0084ab10);
    /* 0084ab10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084ab11: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084ab14: mov ebx, dword ptr [0xae77e0] */ r_ebx = R32((u32)(0xae77e0u));
    /* 0084ab1a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084ab1c: je 0x84ac54 */ if (fZ) goto L_0084ac54;
L_0084ab22:; BB(0x0084ab22);
    /* 0084ab22: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0084ab25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084ab26: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0084ab28: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0084ab2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084ab2b: call dword ptr [edx + 0x24] */ { u32 t = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, 0x84ab2eu); call_ind(t); }
    /* 0084ab2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084ab30: jne 0x84ac47 */ if (!fZ) goto L_0084ac47;
L_0084ab36:; BB(0x0084ab36);
    /* 0084ab36: mov ecx, dword ptr [0xae77e4] */ r_ecx = R32((u32)(0xae77e4u));
    /* 0084ab3c: mov edx, dword ptr [0xae77ec] */ r_edx = R32((u32)(0xae77ecu));
    /* 0084ab42: mov ebx, dword ptr [0xae77f0] */ r_ebx = R32((u32)(0xae77f0u));
    /* 0084ab48: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084ab4a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084ab4c: je 0x84ac54 */ if (fZ) goto L_0084ac54;
L_0084ab52:; BB(0x0084ab52);
    /* 0084ab52: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0084ab56: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
L_0084ab5a:; BB(0x0084ab5a);
    /* 0084ab5a: movsx ebx, word ptr [esp] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esp));
    /* 0084ab5e: mov word ptr [edx + 2], bx */ W16((u32)(r_edx+0x2u), (u16)r_ebx);
    /* 0084ab62: movsx esi, word ptr [esp + 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0084ab67: mov word ptr [edx + 4], si */ W16((u32)(r_edx+0x4u), (u16)r_esi);
    /* 0084ab6b: cmp ebx, 0xfffffe00 */ {  u32 a = r_ebx; u32 b = 0xfffffe00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084ab71: movsx edi, word ptr [esp + 8] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 0084ab76: mov word ptr [edx + 6], di */ W16((u32)(r_edx+0x6u), (u16)r_edi);
    /* 0084ab7a: jl 0x84ab84 */ if ((fS!=fO)) goto L_0084ab84;
L_0084ab7c:; BB(0x0084ab7c);
    /* 0084ab7c: cmp ebx, 0x1ff */ {  u32 a = r_ebx; u32 b = 0x1ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084ab82: jle 0x84ab87 */ if ((fZ||fS!=fO)) goto L_0084ab87;
L_0084ab84:; BB(0x0084ab84);
    /* 0084ab84: or byte ptr [edx], 1 */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_0084ab87:; BB(0x0084ab87);
    /* 0084ab87: cmp esi, 0xfffffe00 */ {  u32 a = r_esi; u32 b = 0xfffffe00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084ab8d: jl 0x84ab97 */ if ((fS!=fO)) goto L_0084ab97;
L_0084ab8f:; BB(0x0084ab8f);
    /* 0084ab8f: cmp esi, 0x1ff */ {  u32 a = r_esi; u32 b = 0x1ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084ab95: jle 0x84ab9a */ if ((fZ||fS!=fO)) goto L_0084ab9a;
L_0084ab97:; BB(0x0084ab97);
    /* 0084ab97: or byte ptr [edx], 2 */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_0084ab9a:; BB(0x0084ab9a);
    /* 0084ab9a: cmp edi, 0xfffffe00 */ {  u32 a = r_edi; u32 b = 0xfffffe00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084aba0: jl 0x84abaa */ if ((fS!=fO)) goto L_0084abaa;
L_0084aba2:; BB(0x0084aba2);
    /* 0084aba2: cmp edi, 0x1ff */ {  u32 a = r_edi; u32 b = 0x1ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084aba8: jle 0x84abad */ if ((fZ||fS!=fO)) goto L_0084abad;
L_0084abaa:; BB(0x0084abaa);
    /* 0084abaa: or byte ptr [edx], 4 */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_0084abad:; BB(0x0084abad);
    /* 0084abad: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0084abaf: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0084abb5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0084abb7: movzx edi, byte ptr [esp + 0xc] */ r_edi = (u32)R8((u32)(r_esp+0xcu));
    /* 0084abbc: test edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084abc2: je 0x84abcf */ if (fZ) goto L_0084abcf;
L_0084abc4:; BB(0x0084abc4);
    /* 0084abc4: mov dword ptr [ecx], 4 */ W32((u32)(r_ecx), 0x4u);
    /* 0084abca: mov ebx, 4 */ r_ebx = 0x4u;
L_0084abcf:; BB(0x0084abcf);
    /* 0084abcf: movzx edi, byte ptr [esp + 0xd] */ r_edi = (u32)R8((u32)(r_esp+0xdu));
    /* 0084abd4: test edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084abda: je 0x84abe1 */ if (fZ) goto L_0084abe1;
L_0084abdc:; BB(0x0084abdc);
    /* 0084abdc: or ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0084abdf: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
L_0084abe1:; BB(0x0084abe1);
    /* 0084abe1: movzx edi, byte ptr [esp + 0xe] */ r_edi = (u32)R8((u32)(r_esp+0xeu));
    /* 0084abe6: test edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084abec: je 0x84abf3 */ if (fZ) goto L_0084abf3;
L_0084abee:; BB(0x0084abee);
    /* 0084abee: or ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0084abf1: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
L_0084abf3:; BB(0x0084abf3);
    /* 0084abf3: movsx edi, word ptr [edx + 6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 0084abf7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0084abf9: jle 0x84ac05 */ if ((fZ||fS!=fO)) goto L_0084ac05;
L_0084abfb:; BB(0x0084abfb);
    /* 0084abfb: or ebx, 0x20000 */ {  u32 a = r_ebx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ac01: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
    /* 0084ac03: jmp 0x84ac0f */ goto L_0084ac0f;
L_0084ac05:; BB(0x0084ac05);
    /* 0084ac05: jge 0x84ac0f */ if ((fS==fO)) goto L_0084ac0f;
L_0084ac07:; BB(0x0084ac07);
    /* 0084ac07: or ebx, 0x10000 */ {  u32 a = r_ebx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ac0d: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
L_0084ac0f:; BB(0x0084ac0f);
    /* 0084ac0f: mov byte ptr [ecx + 0x14], 1 */ W8((u32)(r_ecx+0x14u), 0x1u);
    /* 0084ac13: mov edi, ebx */ r_edi = r_ebx;
    /* 0084ac15: not edi */ r_edi = ~r_edi;
    /* 0084ac17: mov dword ptr [ecx + 4], edi */ W32((u32)(r_ecx+0x4u), r_edi);
    /* 0084ac1a: mov edi, esi */ r_edi = r_esi;
    /* 0084ac1c: xor edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084ac1e: and ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0084ac20: mov dword ptr [ecx + 8], ebx */ W32((u32)(r_ecx+0x8u), r_ebx);
    /* 0084ac23: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0084ac25: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 0084ac28: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084ac2b: add edx, 0x12 */ {  u32 a = r_edx; u32 b = 0x12u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084ac2e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084ac31: cmp eax, dword ptr [0xae77f0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae77f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084ac37: jne 0x84ab5a */ if (!fZ) goto L_0084ab5a;
L_0084ac3d:; BB(0x0084ac3d);
    /* 0084ac3d: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0084ac41: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0084ac45: jmp 0x84ac54 */ goto L_0084ac54;
L_0084ac47:; BB(0x0084ac47);
    /* 0084ac47: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084ac48: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0084ac4a: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x84ac4du); call_ind(t); }
    /* 0084ac4d: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084ac52: je 0x84ac47 */ if (fZ) goto L_0084ac47;
L_0084ac54:; BB(0x0084ac54);
    /* 0084ac54: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084ac57: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084ac58: ret  */ FN_RET(0x0084ab10); r_esp += 4; return;
}

void f_0084ac5c(void) /* sub_84AC5C */
{
    FN_ENTER(0x0084ac5c);
    /* 0084ac5c: mov eax, dword ptr [0xae77e0] */ r_eax = R32((u32)(0xae77e0u));
    /* 0084ac61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084ac63: je 0x84ac80 */ if (fZ) goto L_0084ac80;
L_0084ac65:; BB(0x0084ac65);
    /* 0084ac65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084ac66: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0084ac68: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x84ac6bu); call_ind(t); }
    /* 0084ac6b: mov eax, dword ptr [0xae77e0] */ r_eax = R32((u32)(0xae77e0u));
    /* 0084ac70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084ac71: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0084ac73: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x84ac76u); call_ind(t); }
    /* 0084ac76: mov dword ptr [0xae77e0], 0 */ W32((u32)(0xae77e0u), 0x0u);
L_0084ac80:; BB(0x0084ac80);
    /* 0084ac80: ret  */ FN_RET(0x0084ac5c); r_esp += 4; return;
}

void f_0084ac84(void) /* sub_84AC84 */
{
    FN_ENTER(0x0084ac84);
    /* 0084ac84: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0084ac88: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0084ac8c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0084ac90: mov dword ptr [0xae77e4], edx */ W32((u32)(0xae77e4u), r_edx);
    /* 0084ac96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084ac98: mov dword ptr [0xae77e0], 0 */ W32((u32)(0xae77e0u), 0x0u);
    /* 0084aca2: mov edx, 0 */ r_edx = 0x0u;
    /* 0084aca7: mov dword ptr [0xae77ec], ecx */ W32((u32)(0xae77ecu), r_ecx);
    /* 0084acad: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0084acb1: mov dword ptr [0xae77f0], eax */ W32((u32)(0xae77f0u), r_eax);
    /* 0084acb6: mov dword ptr [0xae77e8], ecx */ W32((u32)(0xae77e8u), r_ecx);
    /* 0084acbc: je 0x84acd0 */ if (fZ) goto L_0084acd0;
L_0084acbe:; BB(0x0084acbe);
    /* 0084acbe: mov byte ptr [ecx + 1], 6 */ W8((u32)(r_ecx+0x1u), 0x6u);
    /* 0084acc2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084acc5: mov byte ptr [ecx + 2], 3 */ W8((u32)(r_ecx+0x2u), 0x3u);
    /* 0084acc9: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084accc: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084acce: jne 0x84acbe */ if (!fZ) goto L_0084acbe;
L_0084acd0:; BB(0x0084acd0);
    /* 0084acd0: mov eax, dword ptr [0xadcda0] */ r_eax = R32((u32)(0xadcda0u));
    /* 0084acd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0084acd7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0084acd9: push 0xae77e0 */ { u32 v = 0xae77e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0084acde: push 0x99f88c */ { u32 v = 0x99f88cu; r_esp -= 4; W32(r_esp, v); }
    /* 0084ace3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084ace4: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x84ace7u); call_ind(t); }
    /* 0084ace7: mov eax, dword ptr [0xae77e0] */ r_eax = R32((u32)(0xae77e0u));
    /* 0084acec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084acee: je 0x84ad0e */ if (fZ) goto L_0084ad0e;
L_0084acf0:; BB(0x0084acf0);
    /* 0084acf0: push 0x99f824 */ { u32 v = 0x99f824u; r_esp -= 4; W32(r_esp, v); }
    /* 0084acf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084acf6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0084acf8: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x84acfbu); call_ind(t); }
    /* 0084acfb: mov eax, dword ptr [0xae77e0] */ r_eax = R32((u32)(0xae77e0u));
    /* 0084ad00: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0084ad02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0084ad04: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0084ad0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084ad0b: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x84ad0eu); call_ind(t); }
L_0084ad0e:; BB(0x0084ad0e);
    /* 0084ad0e: ret  */ FN_RET(0x0084ac84); r_esp += 4; return;
}

void f_0084ad10(void) /* sub_84AD10 */
{
    FN_ENTER(0x0084ad10);
    /* 0084ad10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084ad11: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084ad12: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084ad15: mov esi, ecx */ r_esi = r_ecx;
    /* 0084ad17: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0084ad1b: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0084ad1f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0084ad22: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0084ad26: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084ad2b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084ad2f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0084ad33: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0084ad37: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0084ad3a: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0084ad3e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0084ad40: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084ad43: jbe 0x84ad74 */ if ((fC||fZ)) goto L_0084ad74;
L_0084ad45:; BB(0x0084ad45);
    /* 0084ad45: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 0084ad49: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
L_0084ad4d:; BB(0x0084ad4d);
    /* 0084ad4d: lea edi, [ebx + ecx] */ r_edi = (u32)(r_ebx+r_ecx);
    /* 0084ad50: shr edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0084ad52: mov ebp, edx */ r_ebp = r_edx;
    /* 0084ad54: imul ebp, edi */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_edi; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0084ad57: cmp eax, dword ptr [ebp + esi] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_esi)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084ad5b: jl 0x84ad61 */ if ((fS!=fO)) goto L_0084ad61;
L_0084ad5d:; BB(0x0084ad5d);
    /* 0084ad5d: mov ecx, edi */ r_ecx = r_edi;
    /* 0084ad5f: jmp 0x84ad63 */ goto L_0084ad63;
L_0084ad61:; BB(0x0084ad61);
    /* 0084ad61: mov ebx, edi */ r_ebx = r_edi;
L_0084ad63:; BB(0x0084ad63);
    /* 0084ad63: mov ebp, ebx */ r_ebp = r_ebx;
    /* 0084ad65: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0084ad67: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084ad6a: ja 0x84ad4d */ if ((!fC&&!fZ)) goto L_0084ad4d;
L_0084ad6c:; BB(0x0084ad6c);
    /* 0084ad6c: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0084ad70: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
L_0084ad74:; BB(0x0084ad74);
    /* 0084ad74: mov eax, ecx */ r_eax = r_ecx;
    /* 0084ad76: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084ad79: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084ad7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084ad7b: ret 8 */ FN_RET(0x0084ad10); r_esp += 12; return;
}

void f_0084ad80(void) /* sub_84AD80 */
{
    FN_ENTER(0x0084ad80);
    /* 0084ad80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084ad81: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084ad82: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084ad85: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0084ad89: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0084ad8c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0084ad90: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084ad95: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084ad99: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0084ad9d: fist dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0)));
    /* 0084ada1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0084ada4: movzx edi, word ptr [esp + 0x10] */ r_edi = (u32)R16((u32)(r_esp+0x10u));
    /* 0084ada9: movzx ebp, dx */ r_ebp = (u32)(u16)r_edx;
    /* 0084adac: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084adaf: jle 0x84ae49 */ if ((fZ||fS!=fO)) goto L_0084ae49;
L_0084adb5:; BB(0x0084adb5);
    /* 0084adb5: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0084adb9: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 0084adbd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0084adbf:; BB(0x0084adbf);
    /* 0084adbf: lea ebx, [ebp + eax] */ r_ebx = (u32)(r_ebp+r_eax);
    /* 0084adc3: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0084adc5: movzx ebx, bx */ r_ebx = (u32)(u16)r_ebx;
    /* 0084adc8: movzx esi, word ptr [ecx + ebx*8] */ r_esi = (u32)R16((u32)(r_ecx+r_ebx*8));
    /* 0084adcc: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084adce: jl 0x84add4 */ if ((fS!=fO)) goto L_0084add4;
L_0084add0:; BB(0x0084add0);
    /* 0084add0: mov eax, ebx */ r_eax = r_ebx;
    /* 0084add2: jmp 0x84add6 */ goto L_0084add6;
L_0084add4:; BB(0x0084add4);
    /* 0084add4: mov ebp, ebx */ r_ebp = r_ebx;
L_0084add6:; BB(0x0084add6);
    /* 0084add6: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0084add8: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084adda: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084addd: jg 0x84adbf */ if ((!fZ&&fS==fO)) goto L_0084adbf;
L_0084addf:; BB(0x0084addf);
    /* 0084addf: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0084ade3: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
L_0084ade7:; BB(0x0084ade7);
    /* 0084ade7: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 0084adea: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0084adec: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0084adee: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0084adf0: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084adf3: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084adf5: jae 0x84adfa */ if (!fC) goto L_0084adfa;
L_0084adf7:; BB(0x0084adf7);
    /* 0084adf7: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
L_0084adfa:; BB(0x0084adfa);
    /* 0084adfa: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0084adfe: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 0084ae02: mov dword ptr [eax], ebp */ W32((u32)(r_eax), r_ebp);
    /* 0084ae04: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0084ae06: movzx ebp, word ptr [ebp] */ r_ebp = (u32)R16((u32)(r_ebp));
    /* 0084ae0a: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0084ae0d: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 0084ae11: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0084ae15: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084ae17: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 0084ae1a: fadd dword ptr [ebp*4 + 0x98c638] */ ST(0) = ST(0) + R_F32((u32)(r_ebp*4+0x98c638u));
    /* 0084ae21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0084ae23: jle 0x84ae3f */ if ((fZ||fS!=fO)) goto L_0084ae3f;
L_0084ae25:; BB(0x0084ae25);
    /* 0084ae25: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0084ae27: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0084ae2b: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0084ae2f: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0084ae31: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0084ae35: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
L_0084ae37:; BB(0x0084ae37);
    /* 0084ae37: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084ae3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084ae3b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084ae3c: ret 0x10 */ FN_RET(0x0084ad80); r_esp += 20; return;
L_0084ae3f:; BB(0x0084ae3f);
    /* 0084ae3f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0084ae41: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0084ae45: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0084ae47: jmp 0x84ae37 */ goto L_0084ae37;
L_0084ae49:; BB(0x0084ae49);
    /* 0084ae49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084ae4b: jmp 0x84ade7 */ goto L_0084ade7;
}

void f_0084ae50(void) /* sub_84AE50 */
{
    FN_ENTER(0x0084ae50);
    /* 0084ae50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084ae51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084ae52: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084ae53: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084ae56: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0084ae5a: mov ebp, edi */ r_ebp = r_edi;
    /* 0084ae5c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0084ae5e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0084ae62: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0084ae65: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0084ae69: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084ae6e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084ae72: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0084ae76: fist dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0)));
    /* 0084ae7a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0084ae7d: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084ae80: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0084ae84: jbe 0x84aeb0 */ if ((fC||fZ)) goto L_0084aeb0;
L_0084ae86:; BB(0x0084ae86);
    /* 0084ae86: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
L_0084ae8a:; BB(0x0084ae8a);
    /* 0084ae8a: lea edi, [esi + ebp] */ r_edi = (u32)(r_esi+r_ebp);
    /* 0084ae8d: shr edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0084ae8f: mov ebx, edx */ r_ebx = r_edx;
    /* 0084ae91: imul ebx, edi */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_edi; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0084ae94: cmp eax, dword ptr [ebx + ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+r_ecx)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084ae97: jl 0x84ae9d */ if ((fS!=fO)) goto L_0084ae9d;
L_0084ae99:; BB(0x0084ae99);
    /* 0084ae99: mov esi, edi */ r_esi = r_edi;
    /* 0084ae9b: jmp 0x84ae9f */ goto L_0084ae9f;
L_0084ae9d:; BB(0x0084ae9d);
    /* 0084ae9d: mov ebp, edi */ r_ebp = r_edi;
L_0084ae9f:; BB(0x0084ae9f);
    /* 0084ae9f: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0084aea1: sub ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0084aea3: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084aea6: ja 0x84ae8a */ if ((!fC&&!fZ)) goto L_0084ae8a;
L_0084aea8:; BB(0x0084aea8);
    /* 0084aea8: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0084aeac: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
L_0084aeb0:; BB(0x0084aeb0);
    /* 0084aeb0: mov ebp, edx */ r_ebp = r_edx;
    /* 0084aeb2: imul ebp, esi */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_esi; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0084aeb5: lea edi, [edi - 1] */ r_edi = (u32)(r_edi+0xffffffffu);
    /* 0084aeb8: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084aeba: lea eax, [ecx + ebp] */ r_eax = (u32)(r_ecx+r_ebp);
    /* 0084aebd: jae 0x84aec3 */ if (!fC) goto L_0084aec3;
L_0084aebf:; BB(0x0084aebf);
    /* 0084aebf: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084aec1: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0084aec3:; BB(0x0084aec3);
    /* 0084aec3: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 0084aec7: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 0084aecb: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0084aecd: mov dword ptr [ebp], ecx */ W32((u32)(r_ebp), r_ecx);
    /* 0084aed0: fild dword ptr [eax] */ FPUSH((long double)(i32)R32((u32)(r_eax)));
    /* 0084aed2: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0084aed4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0084aed6: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084aed8: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0084aedb: fadd dword ptr [esi*4 + 0x98c630] */ ST(0) = ST(0) + R_F32((u32)(r_esi*4+0x98c630u));
    /* 0084aee2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0084aee4: jle 0x84af01 */ if ((fZ||fS!=fO)) goto L_0084af01;
L_0084aee6:; BB(0x0084aee6);
    /* 0084aee6: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0084aeea: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0084aeec: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0084aef0: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0084aef4: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0084aef6: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
L_0084aef8:; BB(0x0084aef8);
    /* 0084aef8: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084aefb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084aefc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084aefd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084aefe: ret 0x14 */ FN_RET(0x0084ae50); r_esp += 24; return;
L_0084af01:; BB(0x0084af01);
    /* 0084af01: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0084af03: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0084af07: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0084af09: jmp 0x84aef8 */ goto L_0084aef8;
}

void f_0084af0c(void) /* sub_84AF0C */
{
    FN_ENTER(0x0084af0c);
    /* 0084af0c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0084af10: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0084af14: mov ecx, dword ptr [0xa21740] */ r_ecx = R32((u32)(0xa21740u));
    /* 0084af1a: mov dword ptr [0xaf032c], eax */ W32((u32)(0xaf032cu), r_eax);
    /* 0084af1f: mov dword ptr [0xaeb494], 0 */ W32((u32)(0xaeb494u), 0x0u);
    /* 0084af29: mov dword ptr [0xaf0328], eax */ W32((u32)(0xaf0328u), r_eax);
    /* 0084af2e: mov dword ptr [0xaf0384], 1 */ W32((u32)(0xaf0384u), 0x1u);
    /* 0084af38: mov dword ptr [0xaf0380], edx */ W32((u32)(0xaf0380u), r_edx);
    /* 0084af3e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0084af40: mov edx, dword ptr [0xa21744] */ r_edx = R32((u32)(0xa21744u));
    /* 0084af46: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0084af49: mov edx, dword ptr [0xa21748] */ r_edx = R32((u32)(0xa21748u));
    /* 0084af4f: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0084af52: mov edx, dword ptr [0xa2174c] */ r_edx = R32((u32)(0xa2174cu));
    /* 0084af58: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0084af5b: mov edx, dword ptr [0xa21750] */ r_edx = R32((u32)(0xa21750u));
    /* 0084af61: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 0084af64: mov edx, dword ptr [0xa21754] */ r_edx = R32((u32)(0xa21754u));
    /* 0084af6a: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0084af6d: mov edx, dword ptr [0xa21758] */ r_edx = R32((u32)(0xa21758u));
    /* 0084af73: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0084af76: mov edx, dword ptr [0xa2175c] */ r_edx = R32((u32)(0xa2175cu));
    /* 0084af7c: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0084af7f: mov edx, dword ptr [0xa21760] */ r_edx = R32((u32)(0xa21760u));
    /* 0084af85: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0084af88: mov edx, dword ptr [0xa21764] */ r_edx = R32((u32)(0xa21764u));
    /* 0084af8e: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0084af91: mov edx, dword ptr [0xa21768] */ r_edx = R32((u32)(0xa21768u));
    /* 0084af97: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 0084af9a: mov edx, dword ptr [0xa2176c] */ r_edx = R32((u32)(0xa2176cu));
    /* 0084afa0: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 0084afa3: mov edx, dword ptr [0xa21770] */ r_edx = R32((u32)(0xa21770u));
    /* 0084afa9: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 0084afac: mov edx, dword ptr [0xa21774] */ r_edx = R32((u32)(0xa21774u));
    /* 0084afb2: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 0084afb5: mov edx, dword ptr [0xa21778] */ r_edx = R32((u32)(0xa21778u));
    /* 0084afbb: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 0084afbe: mov edx, dword ptr [0xa2177c] */ r_edx = R32((u32)(0xa2177cu));
    /* 0084afc4: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 0084afc7: mov eax, dword ptr [0xaf032c] */ r_eax = R32((u32)(0xaf032cu));
    /* 0084afcc: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0084afce: fchs  */ ST(0) = -ST(0);
    /* 0084afd0: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0084afd2: mov eax, dword ptr [0xaf032c] */ r_eax = R32((u32)(0xaf032cu));
    /* 0084afd7: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 0084afda: fchs  */ ST(0) = -ST(0);
    /* 0084afdc: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 0084afdf: ret  */ FN_RET(0x0084af0c); r_esp += 4; return;
}

void f_0084afe0(void) /* sub_84AFE0 */
{
    FN_ENTER(0x0084afe0);
    /* 0084afe0: call 0x836c18 */ r_esp -= 4; W32(r_esp, 0x84afe5u); f_00836c18();
    /* 0084afe5: call 0x836bcc */ r_esp -= 4; W32(r_esp, 0x84afeau); f_00836bcc();
    /* 0084afea: ret  */ FN_RET(0x0084afe0); r_esp += 4; return;
}

void f_0084afec(void) /* sub_84AFEC */
{
    FN_ENTER(0x0084afec);
    /* 0084afec: call 0x83de40 */ r_esp -= 4; W32(r_esp, 0x84aff1u); f_0083de40();
    /* 0084aff1: ret  */ FN_RET(0x0084afec); r_esp += 4; return;
}

void f_0084aff4(void) /* sub_84AFF4 */
{
    FN_ENTER(0x0084aff4);
    /* 0084aff4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084aff5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084aff6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084aff7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084aff8: sub esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084affe: mov ebx, edx */ r_ebx = r_edx;
    /* 0084b000: mov edi, ecx */ r_edi = r_ecx;
    /* 0084b002: fld dword ptr [edi + 0x24] */ FPUSH(R_F32((u32)(r_edi+0x24u)));
    /* 0084b005: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 0084b008: fldz  */ FPUSH(0.0);
    /* 0084b00a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b00c: fldz  */ FPUSH(0.0);
    /* 0084b00e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084b010: fld dword ptr [0x98c66c] */ FPUSH(R_F32((u32)(0x98c66cu)));
    /* 0084b016: fldz  */ FPUSH(0.0);
    /* 0084b018: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0084b01c: fldz  */ FPUSH(0.0);
    /* 0084b01e: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0084b022: fldz  */ FPUSH(0.0);
    /* 0084b024: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 0084b028: mov ecx, edi */ r_ecx = r_edi;
    /* 0084b02a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0084b02c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0084b02e: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0084b032: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0084b036: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0084b03a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084b03c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0084b040: lea edx, [edi + 0x30] */ r_edx = (u32)(r_edi+0x30u);
    /* 0084b043: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
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
    /* 0084bb9d: ret  */ FN_RET(0x0084aff4); r_esp += 4; return;
L_0084bb9e:; BB(0x0084bb9e);
    /* 0084bb9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084bba0: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084bba6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084bba7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084bba8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084bba9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084bbaa: ret  */ FN_RET(0x0084aff4); r_esp += 4; return;
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

