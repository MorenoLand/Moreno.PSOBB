#include "protos.h"

void f_00848168(void) /* sub_848168 */
{
    FN_ENTER(0x00848168);
    /* 00848168: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00848169: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084816a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084816b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084816c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084816f: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00848173: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00848177: mov edx, ecx */ r_edx = r_ecx;
    /* 00848179: mov edi, dword ptr [0xacd534] */ r_edi = R32((u32)(0xacd534u));
    /* 0084817f: mov eax, dword ptr [0xae7788] */ r_eax = R32((u32)(0xae7788u));
    /* 00848184: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00848188: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084818e: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00848191: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00848194: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00848197: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 0084819a: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 0084819e: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
L_008481a2:; BB(0x008481a2);
    /* 008481a2: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 008481a6: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 008481aa: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008481ab: lea ecx, [ebp + 2] */ r_ecx = (u32)(r_ebp+0x2u);
    /* 008481ae: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008481b0: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008481b2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008481b4: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 008481ba: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 008481be: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008481c0: mov ebx, dword ptr [edi + esi*8] */ r_ebx = R32((u32)(r_edi+r_esi*8));
    /* 008481c3: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 008481c5: mov ebx, dword ptr [edi + esi*8 + 4] */ r_ebx = R32((u32)(r_edi+r_esi*8+0x4u));
    /* 008481c9: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 008481cc: mov ebx, dword ptr [edi + esi*8 + 8] */ r_ebx = R32((u32)(r_edi+r_esi*8+0x8u));
    /* 008481d0: mov dword ptr [edx + 8], ebx */ W32((u32)(r_edx+0x8u), r_ebx);
    /* 008481d3: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 008481d7: mov dword ptr [edx + 0xc], ebx */ W32((u32)(r_edx+0xcu), r_ebx);
    /* 008481da: movsx ecx, word ptr [ecx + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2u));
    /* 008481de: add ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008481e1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008481e3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008481e5: mov esi, dword ptr [edi + ecx*8] */ r_esi = R32((u32)(r_edi+r_ecx*8));
    /* 008481e8: mov dword ptr [edx + 0x10], esi */ W32((u32)(r_edx+0x10u), r_esi);
    /* 008481eb: mov esi, dword ptr [edi + ecx*8 + 4] */ r_esi = R32((u32)(r_edi+r_ecx*8+0x4u));
    /* 008481ef: mov dword ptr [edx + 0x14], esi */ W32((u32)(r_edx+0x14u), r_esi);
    /* 008481f2: mov ecx, dword ptr [edi + ecx*8 + 8] */ r_ecx = R32((u32)(r_edi+r_ecx*8+0x8u));
    /* 008481f6: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 008481f9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008481fb: mov dword ptr [edx + 0x1c], ebx */ W32((u32)(r_edx+0x1cu), r_ebx);
    /* 008481fe: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00848201: lea ebx, [eax - 2] */ r_ebx = (u32)(r_eax+0xfffffffeu);
L_00848204:; BB(0x00848204);
    /* 00848204: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00848208: add ebp, dword ptr [esp + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0084820c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084820e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00848210: mov esi, dword ptr [edi + eax*8] */ r_esi = R32((u32)(r_edi+r_eax*8));
    /* 00848213: mov dword ptr [edx], esi */ W32((u32)(r_edx), r_esi);
    /* 00848215: mov esi, dword ptr [edi + eax*8 + 4] */ r_esi = R32((u32)(r_edi+r_eax*8+0x4u));
    /* 00848219: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 0084821c: mov eax, dword ptr [edi + eax*8 + 8] */ r_eax = R32((u32)(r_edi+r_eax*8+0x8u));
    /* 00848220: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00848223: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00848226: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00848229: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0084822c: jne 0x848204 */ if (!fZ) goto L_00848204;
L_0084822e:; BB(0x0084822e);
    /* 0084822e: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00848232: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00848238: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0084823a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0084823c: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084823f: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00848245: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00848246: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00848248: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00848249: call dword ptr [ecx + 0x120] */ { u32 t = R32((u32)(r_ecx+0x120u)); r_esp -= 4; W32(r_esp, 0x84824fu); call_ind(t); }
    /* 0084824f: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00848252: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00848255: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00848258: jne 0x8481a2 */ if (!fZ) goto L_008481a2;
L_0084825e:; BB(0x0084825e);
    /* 0084825e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00848261: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00848262: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00848263: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00848264: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00848265: ret  */ FN_RET(0x00848168); r_esp += 4; return;
}

void f_00848268(void) /* sub_848268 */
{
    FN_ENTER(0x00848268);
    /* 00848268: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00848269: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084826a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084826b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084826c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084826f: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00848273: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00848277: mov edx, ecx */ r_edx = r_ecx;
    /* 00848279: mov eax, dword ptr [0xae7788] */ r_eax = R32((u32)(0xae7788u));
    /* 0084827e: mov edi, dword ptr [0xacd534] */ r_edi = R32((u32)(0xacd534u));
    /* 00848284: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084828a: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0084828e: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00848291: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00848294: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 00848297: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 0084829b: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0084829f: mov ebx, eax */ r_ebx = r_eax;
L_008482a1:; BB(0x008482a1);
    /* 008482a1: fld dword ptr [0x98c604] */ FPUSH(R_F32((u32)(0x98c604u)));
    /* 008482a7: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 008482ab: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 008482af: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008482b0: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008482b2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008482b4: mov ecx, dword ptr [edi + esi*8] */ r_ecx = R32((u32)(r_edi+r_esi*8));
    /* 008482b7: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008482b9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008482bb: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 008482bf: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 008482c4: lea edx, [ebp + 2] */ r_edx = (u32)(r_ebp+0x2u);
    /* 008482c7: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008482c9: mov ecx, dword ptr [edi + esi*8 + 4] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x4u));
    /* 008482cd: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008482d0: mov ecx, dword ptr [edi + esi*8 + 8] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x8u));
    /* 008482d4: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008482d7: mov dword ptr [eax + 0xc], ebx */ W32((u32)(r_eax+0xcu), r_ebx);
    /* 008482da: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 008482de: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 008482e1: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 008482e4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008482e6: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 008482e9: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 008482ed: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008482f1: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008482f5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008482f7: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 008482fa: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 008482fe: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848300: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848302: mov esi, dword ptr [edi + ecx*8] */ r_esi = R32((u32)(r_edi+r_ecx*8));
    /* 00848305: mov dword ptr [eax + 0x18], esi */ W32((u32)(r_eax+0x18u), r_esi);
    /* 00848308: mov esi, dword ptr [edi + ecx*8 + 4] */ r_esi = R32((u32)(r_edi+r_ecx*8+0x4u));
    /* 0084830c: mov dword ptr [eax + 0x1c], esi */ W32((u32)(r_eax+0x1cu), r_esi);
    /* 0084830f: mov ecx, dword ptr [edi + ecx*8 + 8] */ r_ecx = R32((u32)(r_edi+r_ecx*8+0x8u));
    /* 00848313: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 00848316: mov dword ptr [eax + 0x24], ebx */ W32((u32)(r_eax+0x24u), r_ebx);
    /* 00848319: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 0084831d: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848321: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00848325: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00848328: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084832a: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 0084832d: movsx edx, word ptr [edx + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xau));
    /* 00848331: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00848335: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00848339: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0084833d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084833f: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 00848342: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00848345: lea ecx, [edx - 2] */ r_ecx = (u32)(r_edx+0xfffffffeu);
    /* 00848348: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0084834c: jmp 0x848351 */ goto L_00848351;
L_0084834e:; BB(0x0084834e);
    /* 0084834e: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
L_00848351:; BB(0x00848351);
    /* 00848351: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00848355: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00848357: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00848359: mov esi, dword ptr [edi + edx*8] */ r_esi = R32((u32)(r_edi+r_edx*8));
    /* 0084835c: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 0084835e: mov esi, dword ptr [edi + edx*8 + 4] */ r_esi = R32((u32)(r_edi+r_edx*8+0x4u));
    /* 00848362: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00848365: mov edx, dword ptr [edi + edx*8 + 8] */ r_edx = R32((u32)(r_edi+r_edx*8+0x8u));
    /* 00848369: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0084836c: mov dword ptr [eax + 0xc], ebx */ W32((u32)(r_eax+0xcu), r_ebx);
    /* 0084836f: movsx edx, word ptr [ebp + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00848373: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00848377: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084837b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084837d: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00848380: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00848384: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00848388: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084838c: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00848390: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00848392: lea ebp, [edx + ebp + 4] */ r_ebp = (u32)(r_edx+r_ebp+0x4u);
    /* 00848396: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00848399: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0084839c: jne 0x84834e */ if (!fZ) goto L_0084834e;
L_0084839e:; BB(0x0084839e);
    /* 0084839e: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 008483a1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008483a3: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008483a7: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 008483ad: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 008483af: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 008483b1: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008483b4: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008483ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008483bb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008483bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008483be: call dword ptr [esi + 0x120] */ { u32 t = R32((u32)(r_esi+0x120u)); r_esp -= 4; W32(r_esp, 0x8483c4u); call_ind(t); }
    /* 008483c4: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008483c8: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008483cb: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008483cf: jne 0x8482a1 */ if (!fZ) goto L_008482a1;
L_008483d5:; BB(0x008483d5);
    /* 008483d5: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008483d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008483d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008483da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008483db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008483dc: ret  */ FN_RET(0x00848268); r_esp += 4; return;
}

void f_008483e0(void) /* sub_8483E0 */
{
    FN_ENTER(0x008483e0);
    /* 008483e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008483e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008483e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008483e3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008483e4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008483e7: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 008483eb: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 008483ef: mov edx, ecx */ r_edx = r_ecx;
    /* 008483f1: mov eax, dword ptr [0xae7788] */ r_eax = R32((u32)(0xae7788u));
    /* 008483f6: mov edi, dword ptr [0xacd534] */ r_edi = R32((u32)(0xacd534u));
    /* 008483fc: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00848402: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00848406: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00848409: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084840c: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 0084840f: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 00848413: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00848417: mov ebx, eax */ r_ebx = r_eax;
L_00848419:; BB(0x00848419);
    /* 00848419: fld dword ptr [0x98c600] */ FPUSH(R_F32((u32)(0x98c600u)));
    /* 0084841f: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00848423: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00848427: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00848428: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084842a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084842c: mov ecx, dword ptr [edi + esi*8] */ r_ecx = R32((u32)(r_edi+r_esi*8));
    /* 0084842f: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00848431: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00848433: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00848437: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 0084843c: lea edx, [ebp + 2] */ r_edx = (u32)(r_ebp+0x2u);
    /* 0084843f: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00848441: mov ecx, dword ptr [edi + esi*8 + 4] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x4u));
    /* 00848445: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00848448: mov ecx, dword ptr [edi + esi*8 + 8] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x8u));
    /* 0084844c: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0084844f: mov dword ptr [eax + 0xc], ebx */ W32((u32)(r_eax+0xcu), r_ebx);
    /* 00848452: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00848456: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00848459: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0084845c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084845e: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00848461: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 00848465: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848469: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084846d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084846f: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00848472: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00848476: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848478: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084847a: mov esi, dword ptr [edi + ecx*8] */ r_esi = R32((u32)(r_edi+r_ecx*8));
    /* 0084847d: mov dword ptr [eax + 0x18], esi */ W32((u32)(r_eax+0x18u), r_esi);
    /* 00848480: mov esi, dword ptr [edi + ecx*8 + 4] */ r_esi = R32((u32)(r_edi+r_ecx*8+0x4u));
    /* 00848484: mov dword ptr [eax + 0x1c], esi */ W32((u32)(r_eax+0x1cu), r_esi);
    /* 00848487: mov ecx, dword ptr [edi + ecx*8 + 8] */ r_ecx = R32((u32)(r_edi+r_ecx*8+0x8u));
    /* 0084848b: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 0084848e: mov dword ptr [eax + 0x24], ebx */ W32((u32)(r_eax+0x24u), r_ebx);
    /* 00848491: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 00848495: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848499: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084849d: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008484a0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008484a2: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 008484a5: movsx edx, word ptr [edx + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xau));
    /* 008484a9: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008484ad: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008484b1: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008484b5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008484b7: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 008484ba: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008484bd: lea ecx, [edx - 2] */ r_ecx = (u32)(r_edx+0xfffffffeu);
    /* 008484c0: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008484c4: jmp 0x8484c9 */ goto L_008484c9;
L_008484c6:; BB(0x008484c6);
    /* 008484c6: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
L_008484c9:; BB(0x008484c9);
    /* 008484c9: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 008484cd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008484cf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008484d1: mov esi, dword ptr [edi + edx*8] */ r_esi = R32((u32)(r_edi+r_edx*8));
    /* 008484d4: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 008484d6: mov esi, dword ptr [edi + edx*8 + 4] */ r_esi = R32((u32)(r_edi+r_edx*8+0x4u));
    /* 008484da: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 008484dd: mov edx, dword ptr [edi + edx*8 + 8] */ r_edx = R32((u32)(r_edi+r_edx*8+0x8u));
    /* 008484e1: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 008484e4: mov dword ptr [eax + 0xc], ebx */ W32((u32)(r_eax+0xcu), r_ebx);
    /* 008484e7: movsx edx, word ptr [ebp + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 008484eb: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008484ef: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008484f3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008484f5: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 008484f8: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 008484fc: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00848500: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00848504: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00848508: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084850a: lea ebp, [edx + ebp + 4] */ r_ebp = (u32)(r_edx+r_ebp+0x4u);
    /* 0084850e: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00848511: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00848514: jne 0x8484c6 */ if (!fZ) goto L_008484c6;
L_00848516:; BB(0x00848516);
    /* 00848516: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 00848519: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084851b: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0084851f: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00848525: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00848527: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00848529: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084852c: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00848532: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00848533: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00848535: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00848536: call dword ptr [esi + 0x120] */ { u32 t = R32((u32)(r_esi+0x120u)); r_esp -= 4; W32(r_esp, 0x84853cu); call_ind(t); }
    /* 0084853c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00848540: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00848543: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00848547: jne 0x848419 */ if (!fZ) goto L_00848419;
L_0084854d:; BB(0x0084854d);
    /* 0084854d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00848550: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00848551: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00848552: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00848553: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00848554: ret  */ FN_RET(0x008483e0); r_esp += 4; return;
}

void f_00848558(void) /* sub_848558 */
{
    FN_ENTER(0x00848558);
    /* 00848558: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00848559: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084855a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084855b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084855c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084855f: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00848563: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00848567: mov edx, ecx */ r_edx = r_ecx;
    /* 00848569: mov eax, dword ptr [0xacd534] */ r_eax = R32((u32)(0xacd534u));
    /* 0084856e: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00848574: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00848577: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0084857a: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084857d: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 00848580: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 00848584: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848588: mov ebx, eax */ r_ebx = r_eax;
L_0084858a:; BB(0x0084858a);
    /* 0084858a: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0084858e: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00848592: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00848593: lea edi, [ebp + 2] */ r_edi = (u32)(r_ebp+0x2u);
    /* 00848596: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00848598: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084859a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084859c: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 008485a2: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 008485a6: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008485a8: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 008485ab: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 008485ad: mov ecx, dword ptr [ebx + esi*8 + 4] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 008485b1: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 008485b4: mov ecx, dword ptr [ebx + esi*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x8u));
    /* 008485b8: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 008485bb: mov ecx, dword ptr [ebx + esi*8 + 0xc] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0xcu));
    /* 008485bf: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 008485c2: mov ecx, dword ptr [ebx + esi*8 + 0x10] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x10u));
    /* 008485c6: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 008485c9: mov ecx, dword ptr [ebx + esi*8 + 0x14] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x14u));
    /* 008485cd: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 008485d0: mov ecx, dword ptr [ebx + esi*8 + 0x18] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x18u));
    /* 008485d4: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 008485d7: movsx ecx, word ptr [edi + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 008485db: add ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008485de: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008485e0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008485e2: mov esi, dword ptr [ebx + ecx*8] */ r_esi = R32((u32)(r_ebx+r_ecx*8));
    /* 008485e5: mov dword ptr [edx + 0x1c], esi */ W32((u32)(r_edx+0x1cu), r_esi);
    /* 008485e8: mov esi, dword ptr [ebx + ecx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 008485ec: mov dword ptr [edx + 0x20], esi */ W32((u32)(r_edx+0x20u), r_esi);
    /* 008485ef: mov esi, dword ptr [ebx + ecx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 008485f3: mov dword ptr [edx + 0x24], esi */ W32((u32)(r_edx+0x24u), r_esi);
    /* 008485f6: mov esi, dword ptr [ebx + ecx*8 + 0xc] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0xcu));
    /* 008485fa: mov dword ptr [edx + 0x28], esi */ W32((u32)(r_edx+0x28u), r_esi);
    /* 008485fd: mov esi, dword ptr [ebx + ecx*8 + 0x10] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x10u));
    /* 00848601: mov dword ptr [edx + 0x2c], esi */ W32((u32)(r_edx+0x2cu), r_esi);
    /* 00848604: mov esi, dword ptr [ebx + ecx*8 + 0x14] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x14u));
    /* 00848608: mov dword ptr [edx + 0x30], esi */ W32((u32)(r_edx+0x30u), r_esi);
    /* 0084860b: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0084860f: mov ecx, dword ptr [ebx + ecx*8 + 0x18] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x18u));
    /* 00848613: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 00848616: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00848619: lea edi, [eax - 2] */ r_edi = (u32)(r_eax+0xfffffffeu);
L_0084861c:; BB(0x0084861c);
    /* 0084861c: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00848620: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848622: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848624: mov eax, dword ptr [ebx + ecx*8] */ r_eax = R32((u32)(r_ebx+r_ecx*8));
    /* 00848627: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00848629: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0084862b: mov eax, dword ptr [ebx + ecx*8 + 4] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 0084862f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00848632: mov eax, dword ptr [ebx + ecx*8 + 8] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 00848636: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00848639: mov eax, dword ptr [ebx + ecx*8 + 0xc] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0xcu));
    /* 0084863d: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00848640: mov eax, dword ptr [ebx + ecx*8 + 0x10] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x10u));
    /* 00848644: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00848647: mov eax, dword ptr [ebx + ecx*8 + 0x14] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x14u));
    /* 0084864b: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0084864e: mov ecx, dword ptr [ebx + ecx*8 + 0x18] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x18u));
    /* 00848652: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 00848655: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00848658: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0084865b: jne 0x84861c */ if (!fZ) goto L_0084861c;
L_0084865d:; BB(0x0084865d);
    /* 0084865d: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00848661: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00848667: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00848669: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0084866b: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084866e: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00848674: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00848675: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00848677: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00848678: call dword ptr [ecx + 0x120] */ { u32 t = R32((u32)(r_ecx+0x120u)); r_esp -= 4; W32(r_esp, 0x84867eu); call_ind(t); }
    /* 0084867e: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00848681: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00848684: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00848687: jne 0x84858a */ if (!fZ) goto L_0084858a;
L_0084868d:; BB(0x0084868d);
    /* 0084868d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00848690: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00848691: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00848692: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00848693: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00848694: ret  */ FN_RET(0x00848558); r_esp += 4; return;
}

void f_00848698(void) /* sub_848698 */
{
    FN_ENTER(0x00848698);
    /* 00848698: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00848699: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084869a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084869b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084869c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084869f: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 008486a3: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 008486a7: mov edx, ecx */ r_edx = r_ecx;
    /* 008486a9: mov eax, dword ptr [0xacd534] */ r_eax = R32((u32)(0xacd534u));
    /* 008486ae: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008486b4: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008486b8: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008486bb: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008486be: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 008486c1: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 008486c5: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 008486c9: mov ebx, eax */ r_ebx = r_eax;
L_008486cb:; BB(0x008486cb);
    /* 008486cb: fld dword ptr [0x98c5fc] */ FPUSH(R_F32((u32)(0x98c5fcu)));
    /* 008486d1: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 008486d5: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 008486d9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008486da: lea edi, [ebp + 2] */ r_edi = (u32)(r_ebp+0x2u);
    /* 008486dd: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008486df: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008486e1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008486e3: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 008486e9: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 008486ed: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008486ef: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 008486f2: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 008486f4: mov ecx, dword ptr [ebx + esi*8 + 4] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 008486f8: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 008486fb: mov ecx, dword ptr [ebx + esi*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x8u));
    /* 008486ff: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00848702: mov ecx, dword ptr [ebx + esi*8 + 0xc] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0xcu));
    /* 00848706: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00848709: mov ecx, dword ptr [ebx + esi*8 + 0x10] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x10u));
    /* 0084870d: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 00848710: mov ecx, dword ptr [ebx + esi*8 + 0x14] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x14u));
    /* 00848714: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 00848717: mov ecx, dword ptr [ebx + esi*8 + 0x18] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x18u));
    /* 0084871b: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0084871e: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00848722: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00848725: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00848728: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084872a: fstp dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0)); FPOP();
    /* 0084872d: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 00848731: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848735: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00848739: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084873b: fstp dword ptr [edx + 0x20] */ W_F32((u32)(r_edx+0x20u), ST(0)); FPOP();
    /* 0084873e: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00848742: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848744: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848746: mov esi, dword ptr [ebx + ecx*8] */ r_esi = R32((u32)(r_ebx+r_ecx*8));
    /* 00848749: mov dword ptr [edx + 0x24], esi */ W32((u32)(r_edx+0x24u), r_esi);
    /* 0084874c: mov esi, dword ptr [ebx + ecx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 00848750: mov dword ptr [edx + 0x28], esi */ W32((u32)(r_edx+0x28u), r_esi);
    /* 00848753: mov esi, dword ptr [ebx + ecx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 00848757: mov dword ptr [edx + 0x2c], esi */ W32((u32)(r_edx+0x2cu), r_esi);
    /* 0084875a: mov esi, dword ptr [ebx + ecx*8 + 0xc] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0xcu));
    /* 0084875e: mov dword ptr [edx + 0x30], esi */ W32((u32)(r_edx+0x30u), r_esi);
    /* 00848761: mov esi, dword ptr [ebx + ecx*8 + 0x10] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x10u));
    /* 00848765: mov dword ptr [edx + 0x34], esi */ W32((u32)(r_edx+0x34u), r_esi);
    /* 00848768: mov esi, dword ptr [ebx + ecx*8 + 0x14] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x14u));
    /* 0084876c: mov dword ptr [edx + 0x38], esi */ W32((u32)(r_edx+0x38u), r_esi);
    /* 0084876f: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00848773: mov ecx, dword ptr [ebx + ecx*8 + 0x18] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x18u));
    /* 00848777: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 0084877a: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 0084877e: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848782: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00848786: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00848789: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084878b: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
    /* 0084878e: movsx ecx, word ptr [edi + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0xau));
    /* 00848792: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848796: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084879a: lea edi, [eax - 2] */ r_edi = (u32)(r_eax+0xfffffffeu);
    /* 0084879d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084879f: fstp dword ptr [edx + 0x44] */ W_F32((u32)(r_edx+0x44u), ST(0)); FPOP();
    /* 008487a2: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008487a5: jmp 0x8487aa */ goto L_008487aa;
L_008487a7:; BB(0x008487a7);
    /* 008487a7: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
L_008487aa:; BB(0x008487aa);
    /* 008487aa: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 008487ae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008487b0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008487b2: mov eax, dword ptr [ebx + ecx*8] */ r_eax = R32((u32)(r_ebx+r_ecx*8));
    /* 008487b5: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008487b7: mov eax, dword ptr [ebx + ecx*8 + 4] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 008487bb: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 008487be: mov eax, dword ptr [ebx + ecx*8 + 8] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 008487c2: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 008487c5: mov eax, dword ptr [ebx + ecx*8 + 0xc] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0xcu));
    /* 008487c9: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 008487cc: mov eax, dword ptr [ebx + ecx*8 + 0x10] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x10u));
    /* 008487d0: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 008487d3: mov eax, dword ptr [ebx + ecx*8 + 0x14] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x14u));
    /* 008487d7: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 008487da: mov ecx, dword ptr [ebx + ecx*8 + 0x18] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x18u));
    /* 008487de: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 008487e1: movsx ecx, word ptr [ebp + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 008487e5: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008487e9: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008487ed: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008487ef: fstp dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0)); FPOP();
    /* 008487f2: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 008487f6: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008487fa: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008487fe: lea ebp, [esi + ebp + 4] */ r_ebp = (u32)(r_esi+r_ebp+0x4u);
    /* 00848802: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00848804: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00848807: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0084880a: jne 0x8487a7 */ if (!fZ) goto L_008487a7;
L_0084880c:; BB(0x0084880c);
    /* 0084880c: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0084880f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00848811: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00848815: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0084881b: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0084881d: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0084881f: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00848822: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00848828: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00848829: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0084882b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084882c: call dword ptr [ecx + 0x120] */ { u32 t = R32((u32)(r_ecx+0x120u)); r_esp -= 4; W32(r_esp, 0x848832u); call_ind(t); }
    /* 00848832: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00848836: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00848839: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0084883d: jne 0x8486cb */ if (!fZ) goto L_008486cb;
L_00848843:; BB(0x00848843);
    /* 00848843: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00848846: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00848847: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00848848: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00848849: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084884a: ret  */ FN_RET(0x00848698); r_esp += 4; return;
}

void f_0084884c(void) /* sub_84884C */
{
    FN_ENTER(0x0084884c);
    /* 0084884c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084884d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084884e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084884f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00848850: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00848853: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00848857: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 0084885b: mov edx, ecx */ r_edx = r_ecx;
    /* 0084885d: mov eax, dword ptr [0xacd534] */ r_eax = R32((u32)(0xacd534u));
    /* 00848862: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00848868: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0084886c: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0084886f: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00848872: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 00848875: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 00848879: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0084887d: mov ebx, eax */ r_ebx = r_eax;
L_0084887f:; BB(0x0084887f);
    /* 0084887f: fld dword ptr [0x98c5f8] */ FPUSH(R_F32((u32)(0x98c5f8u)));
    /* 00848885: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00848889: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 0084888d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0084888e: lea edi, [ebp + 2] */ r_edi = (u32)(r_ebp+0x2u);
    /* 00848891: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00848893: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00848895: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00848897: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 0084889d: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 008488a1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008488a3: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 008488a6: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 008488a8: mov ecx, dword ptr [ebx + esi*8 + 4] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 008488ac: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 008488af: mov ecx, dword ptr [ebx + esi*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x8u));
    /* 008488b3: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 008488b6: mov ecx, dword ptr [ebx + esi*8 + 0xc] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0xcu));
    /* 008488ba: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 008488bd: mov ecx, dword ptr [ebx + esi*8 + 0x10] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x10u));
    /* 008488c1: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 008488c4: mov ecx, dword ptr [ebx + esi*8 + 0x14] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x14u));
    /* 008488c8: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 008488cb: mov ecx, dword ptr [ebx + esi*8 + 0x18] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x18u));
    /* 008488cf: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 008488d2: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 008488d6: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 008488d9: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 008488dc: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008488de: fstp dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0)); FPOP();
    /* 008488e1: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 008488e5: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008488e9: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008488ed: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008488ef: fstp dword ptr [edx + 0x20] */ W_F32((u32)(r_edx+0x20u), ST(0)); FPOP();
    /* 008488f2: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 008488f6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008488f8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008488fa: mov esi, dword ptr [ebx + ecx*8] */ r_esi = R32((u32)(r_ebx+r_ecx*8));
    /* 008488fd: mov dword ptr [edx + 0x24], esi */ W32((u32)(r_edx+0x24u), r_esi);
    /* 00848900: mov esi, dword ptr [ebx + ecx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 00848904: mov dword ptr [edx + 0x28], esi */ W32((u32)(r_edx+0x28u), r_esi);
    /* 00848907: mov esi, dword ptr [ebx + ecx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 0084890b: mov dword ptr [edx + 0x2c], esi */ W32((u32)(r_edx+0x2cu), r_esi);
    /* 0084890e: mov esi, dword ptr [ebx + ecx*8 + 0xc] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0xcu));
    /* 00848912: mov dword ptr [edx + 0x30], esi */ W32((u32)(r_edx+0x30u), r_esi);
    /* 00848915: mov esi, dword ptr [ebx + ecx*8 + 0x10] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x10u));
    /* 00848919: mov dword ptr [edx + 0x34], esi */ W32((u32)(r_edx+0x34u), r_esi);
    /* 0084891c: mov esi, dword ptr [ebx + ecx*8 + 0x14] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x14u));
    /* 00848920: mov dword ptr [edx + 0x38], esi */ W32((u32)(r_edx+0x38u), r_esi);
    /* 00848923: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00848927: mov ecx, dword ptr [ebx + ecx*8 + 0x18] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x18u));
    /* 0084892b: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 0084892e: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 00848932: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848936: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084893a: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0084893d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084893f: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
    /* 00848942: movsx ecx, word ptr [edi + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0xau));
    /* 00848946: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0084894a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084894e: lea edi, [eax - 2] */ r_edi = (u32)(r_eax+0xfffffffeu);
    /* 00848951: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00848953: fstp dword ptr [edx + 0x44] */ W_F32((u32)(r_edx+0x44u), ST(0)); FPOP();
    /* 00848956: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00848959: jmp 0x84895e */ goto L_0084895e;
L_0084895b:; BB(0x0084895b);
    /* 0084895b: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
L_0084895e:; BB(0x0084895e);
    /* 0084895e: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00848962: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848964: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848966: mov eax, dword ptr [ebx + ecx*8] */ r_eax = R32((u32)(r_ebx+r_ecx*8));
    /* 00848969: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0084896b: mov eax, dword ptr [ebx + ecx*8 + 4] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 0084896f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00848972: mov eax, dword ptr [ebx + ecx*8 + 8] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 00848976: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00848979: mov eax, dword ptr [ebx + ecx*8 + 0xc] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0xcu));
    /* 0084897d: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00848980: mov eax, dword ptr [ebx + ecx*8 + 0x10] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x10u));
    /* 00848984: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00848987: mov eax, dword ptr [ebx + ecx*8 + 0x14] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x14u));
    /* 0084898b: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0084898e: mov ecx, dword ptr [ebx + ecx*8 + 0x18] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x18u));
    /* 00848992: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 00848995: movsx ecx, word ptr [ebp + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00848999: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0084899d: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008489a1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008489a3: fstp dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0)); FPOP();
    /* 008489a6: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 008489aa: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008489ae: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008489b2: lea ebp, [esi + ebp + 4] */ r_ebp = (u32)(r_esi+r_ebp+0x4u);
    /* 008489b6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008489b8: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008489bb: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 008489be: jne 0x84895b */ if (!fZ) goto L_0084895b;
L_008489c0:; BB(0x008489c0);
    /* 008489c0: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 008489c3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008489c5: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 008489c9: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008489cf: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 008489d1: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008489d3: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008489d6: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008489dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008489dd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008489df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008489e0: call dword ptr [ecx + 0x120] */ { u32 t = R32((u32)(r_ecx+0x120u)); r_esp -= 4; W32(r_esp, 0x8489e6u); call_ind(t); }
    /* 008489e6: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008489ea: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008489ed: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008489f1: jne 0x84887f */ if (!fZ) goto L_0084887f;
L_008489f7:; BB(0x008489f7);
    /* 008489f7: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008489fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008489fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008489fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008489fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008489fe: ret  */ FN_RET(0x0084884c); r_esp += 4; return;
}

void f_00848a00(void) /* sub_848A00 */
{
    FN_ENTER(0x00848a00);
    /* 00848a00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00848a01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00848a02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00848a03: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00848a04: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00848a07: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00848a0b: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00848a0f: mov edx, ecx */ r_edx = r_ecx;
    /* 00848a11: mov eax, dword ptr [0xacd534] */ r_eax = R32((u32)(0xacd534u));
    /* 00848a16: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00848a1c: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00848a1f: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00848a22: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00848a25: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 00848a28: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 00848a2c: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848a30: mov ebx, eax */ r_ebx = r_eax;
L_00848a32:; BB(0x00848a32);
    /* 00848a32: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00848a36: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00848a3a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00848a3b: lea edi, [ebp + 2] */ r_edi = (u32)(r_ebp+0x2u);
    /* 00848a3e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00848a40: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00848a42: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00848a44: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 00848a4a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00848a4e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00848a50: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 00848a53: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00848a55: mov ecx, dword ptr [ebx + esi*8 + 4] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 00848a59: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00848a5c: mov ecx, dword ptr [ebx + esi*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x8u));
    /* 00848a60: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00848a63: mov ecx, dword ptr [ebx + esi*8 + 0x18] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x18u));
    /* 00848a67: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00848a6a: movsx ecx, word ptr [edi + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 00848a6e: add ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00848a71: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848a73: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848a75: mov esi, dword ptr [ebx + ecx*8] */ r_esi = R32((u32)(r_ebx+r_ecx*8));
    /* 00848a78: mov dword ptr [edx + 0x10], esi */ W32((u32)(r_edx+0x10u), r_esi);
    /* 00848a7b: mov esi, dword ptr [ebx + ecx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 00848a7f: mov dword ptr [edx + 0x14], esi */ W32((u32)(r_edx+0x14u), r_esi);
    /* 00848a82: mov esi, dword ptr [ebx + ecx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 00848a86: mov dword ptr [edx + 0x18], esi */ W32((u32)(r_edx+0x18u), r_esi);
    /* 00848a89: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00848a8d: mov ecx, dword ptr [ebx + ecx*8 + 0x18] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x18u));
    /* 00848a91: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 00848a94: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00848a97: lea edi, [eax - 2] */ r_edi = (u32)(r_eax+0xfffffffeu);
L_00848a9a:; BB(0x00848a9a);
    /* 00848a9a: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00848a9e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848aa0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848aa2: mov eax, dword ptr [ebx + ecx*8] */ r_eax = R32((u32)(r_ebx+r_ecx*8));
    /* 00848aa5: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00848aa7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00848aa9: mov eax, dword ptr [ebx + ecx*8 + 4] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 00848aad: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00848ab0: mov eax, dword ptr [ebx + ecx*8 + 8] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 00848ab4: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00848ab7: mov ecx, dword ptr [ebx + ecx*8 + 0x18] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x18u));
    /* 00848abb: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00848abe: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00848ac1: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00848ac4: jne 0x848a9a */ if (!fZ) goto L_00848a9a;
L_00848ac6:; BB(0x00848ac6);
    /* 00848ac6: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00848aca: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00848ad0: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00848ad2: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00848ad4: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00848ad7: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00848add: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00848ade: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00848ae0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00848ae1: call dword ptr [ecx + 0x120] */ { u32 t = R32((u32)(r_ecx+0x120u)); r_esp -= 4; W32(r_esp, 0x848ae7u); call_ind(t); }
    /* 00848ae7: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00848aea: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00848aed: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00848af0: jne 0x848a32 */ if (!fZ) goto L_00848a32;
L_00848af6:; BB(0x00848af6);
    /* 00848af6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00848af9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00848afa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00848afb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00848afc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00848afd: ret  */ FN_RET(0x00848a00); r_esp += 4; return;
}

void f_00848b00(void) /* sub_848B00 */
{
    FN_ENTER(0x00848b00);
    /* 00848b00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00848b01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00848b02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00848b03: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00848b04: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00848b07: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00848b0b: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00848b0f: mov edx, ecx */ r_edx = r_ecx;
    /* 00848b11: mov eax, dword ptr [0xacd534] */ r_eax = R32((u32)(0xacd534u));
    /* 00848b16: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00848b1c: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00848b20: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00848b23: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00848b26: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 00848b29: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 00848b2d: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00848b31: mov ebx, eax */ r_ebx = r_eax;
L_00848b33:; BB(0x00848b33);
    /* 00848b33: fld dword ptr [0x98c5f4] */ FPUSH(R_F32((u32)(0x98c5f4u)));
    /* 00848b39: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00848b3d: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00848b41: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00848b42: lea edi, [ebp + 2] */ r_edi = (u32)(r_ebp+0x2u);
    /* 00848b45: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00848b47: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00848b49: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00848b4b: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 00848b51: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00848b55: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00848b57: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 00848b5a: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00848b5c: mov ecx, dword ptr [ebx + esi*8 + 4] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 00848b60: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00848b63: mov ecx, dword ptr [ebx + esi*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x8u));
    /* 00848b67: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00848b6a: mov ecx, dword ptr [ebx + esi*8 + 0x18] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x18u));
    /* 00848b6e: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00848b71: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00848b75: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00848b78: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00848b7b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00848b7d: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 00848b80: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 00848b84: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848b88: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00848b8c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00848b8e: fstp dword ptr [edx + 0x14] */ W_F32((u32)(r_edx+0x14u), ST(0)); FPOP();
    /* 00848b91: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00848b95: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848b97: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848b99: mov esi, dword ptr [ebx + ecx*8] */ r_esi = R32((u32)(r_ebx+r_ecx*8));
    /* 00848b9c: mov dword ptr [edx + 0x18], esi */ W32((u32)(r_edx+0x18u), r_esi);
    /* 00848b9f: mov esi, dword ptr [ebx + ecx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 00848ba3: mov dword ptr [edx + 0x1c], esi */ W32((u32)(r_edx+0x1cu), r_esi);
    /* 00848ba6: mov esi, dword ptr [ebx + ecx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 00848baa: mov dword ptr [edx + 0x20], esi */ W32((u32)(r_edx+0x20u), r_esi);
    /* 00848bad: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00848bb1: mov ecx, dword ptr [ebx + ecx*8 + 0x18] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x18u));
    /* 00848bb5: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 00848bb8: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 00848bbc: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848bc0: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00848bc4: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00848bc7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00848bc9: fstp dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0)); FPOP();
    /* 00848bcc: movsx ecx, word ptr [edi + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0xau));
    /* 00848bd0: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848bd4: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00848bd8: lea edi, [eax - 2] */ r_edi = (u32)(r_eax+0xfffffffeu);
    /* 00848bdb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00848bdd: fstp dword ptr [edx + 0x2c] */ W_F32((u32)(r_edx+0x2cu), ST(0)); FPOP();
    /* 00848be0: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00848be3: jmp 0x848be8 */ goto L_00848be8;
L_00848be5:; BB(0x00848be5);
    /* 00848be5: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
L_00848be8:; BB(0x00848be8);
    /* 00848be8: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00848bec: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848bee: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848bf0: mov eax, dword ptr [ebx + ecx*8] */ r_eax = R32((u32)(r_ebx+r_ecx*8));
    /* 00848bf3: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00848bf5: mov eax, dword ptr [ebx + ecx*8 + 4] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 00848bf9: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00848bfc: mov eax, dword ptr [ebx + ecx*8 + 8] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 00848c00: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00848c03: mov ecx, dword ptr [ebx + ecx*8 + 0x18] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x18u));
    /* 00848c07: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00848c0a: movsx ecx, word ptr [ebp + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00848c0e: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848c12: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00848c16: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00848c18: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 00848c1b: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00848c1f: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848c23: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00848c27: lea ebp, [esi + ebp + 4] */ r_ebp = (u32)(r_esi+r_ebp+0x4u);
    /* 00848c2b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00848c2d: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00848c30: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00848c33: jne 0x848be5 */ if (!fZ) goto L_00848be5;
L_00848c35:; BB(0x00848c35);
    /* 00848c35: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 00848c38: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00848c3a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00848c3e: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00848c44: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00848c46: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00848c48: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00848c4b: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00848c51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00848c52: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00848c54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00848c55: call dword ptr [ecx + 0x120] */ { u32 t = R32((u32)(r_ecx+0x120u)); r_esp -= 4; W32(r_esp, 0x848c5bu); call_ind(t); }
    /* 00848c5b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00848c5f: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00848c62: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00848c66: jne 0x848b33 */ if (!fZ) goto L_00848b33;
L_00848c6c:; BB(0x00848c6c);
    /* 00848c6c: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00848c6f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00848c70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00848c71: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00848c72: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00848c73: ret  */ FN_RET(0x00848b00); r_esp += 4; return;
}

void f_00848c74(void) /* sub_848C74 */
{
    FN_ENTER(0x00848c74);
    /* 00848c74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00848c75: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00848c76: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00848c77: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00848c78: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00848c7b: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00848c7f: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00848c83: mov edx, ecx */ r_edx = r_ecx;
    /* 00848c85: mov eax, dword ptr [0xacd534] */ r_eax = R32((u32)(0xacd534u));
    /* 00848c8a: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00848c90: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00848c94: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00848c97: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00848c9a: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 00848c9d: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 00848ca1: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00848ca5: mov ebx, eax */ r_ebx = r_eax;
L_00848ca7:; BB(0x00848ca7);
    /* 00848ca7: fld dword ptr [0x98c5f0] */ FPUSH(R_F32((u32)(0x98c5f0u)));
    /* 00848cad: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00848cb1: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00848cb5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00848cb6: lea edi, [ebp + 2] */ r_edi = (u32)(r_ebp+0x2u);
    /* 00848cb9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00848cbb: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00848cbd: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00848cbf: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 00848cc5: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00848cc9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00848ccb: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 00848cce: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00848cd0: mov ecx, dword ptr [ebx + esi*8 + 4] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 00848cd4: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00848cd7: mov ecx, dword ptr [ebx + esi*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x8u));
    /* 00848cdb: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00848cde: mov ecx, dword ptr [ebx + esi*8 + 0x18] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x18u));
    /* 00848ce2: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00848ce5: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00848ce9: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00848cec: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00848cef: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00848cf1: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 00848cf4: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 00848cf8: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848cfc: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00848d00: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00848d02: fstp dword ptr [edx + 0x14] */ W_F32((u32)(r_edx+0x14u), ST(0)); FPOP();
    /* 00848d05: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00848d09: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848d0b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848d0d: mov esi, dword ptr [ebx + ecx*8] */ r_esi = R32((u32)(r_ebx+r_ecx*8));
    /* 00848d10: mov dword ptr [edx + 0x18], esi */ W32((u32)(r_edx+0x18u), r_esi);
    /* 00848d13: mov esi, dword ptr [ebx + ecx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 00848d17: mov dword ptr [edx + 0x1c], esi */ W32((u32)(r_edx+0x1cu), r_esi);
    /* 00848d1a: mov esi, dword ptr [ebx + ecx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 00848d1e: mov dword ptr [edx + 0x20], esi */ W32((u32)(r_edx+0x20u), r_esi);
    /* 00848d21: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00848d25: mov ecx, dword ptr [ebx + ecx*8 + 0x18] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x18u));
    /* 00848d29: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 00848d2c: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 00848d30: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848d34: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00848d38: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00848d3b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00848d3d: fstp dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0)); FPOP();
    /* 00848d40: movsx ecx, word ptr [edi + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0xau));
    /* 00848d44: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848d48: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00848d4c: lea edi, [eax - 2] */ r_edi = (u32)(r_eax+0xfffffffeu);
    /* 00848d4f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00848d51: fstp dword ptr [edx + 0x2c] */ W_F32((u32)(r_edx+0x2cu), ST(0)); FPOP();
    /* 00848d54: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00848d57: jmp 0x848d5c */ goto L_00848d5c;
L_00848d59:; BB(0x00848d59);
    /* 00848d59: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
L_00848d5c:; BB(0x00848d5c);
    /* 00848d5c: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00848d60: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848d62: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848d64: mov eax, dword ptr [ebx + ecx*8] */ r_eax = R32((u32)(r_ebx+r_ecx*8));
    /* 00848d67: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00848d69: mov eax, dword ptr [ebx + ecx*8 + 4] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 00848d6d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00848d70: mov eax, dword ptr [ebx + ecx*8 + 8] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 00848d74: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00848d77: mov ecx, dword ptr [ebx + ecx*8 + 0x18] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x18u));
    /* 00848d7b: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00848d7e: movsx ecx, word ptr [ebp + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00848d82: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848d86: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00848d8a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00848d8c: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 00848d8f: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00848d93: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848d97: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00848d9b: lea ebp, [esi + ebp + 4] */ r_ebp = (u32)(r_esi+r_ebp+0x4u);
    /* 00848d9f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00848da1: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00848da4: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00848da7: jne 0x848d59 */ if (!fZ) goto L_00848d59;
L_00848da9:; BB(0x00848da9);
    /* 00848da9: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 00848dac: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00848dae: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00848db2: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00848db8: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00848dba: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00848dbc: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00848dbf: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00848dc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00848dc6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00848dc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00848dc9: call dword ptr [ecx + 0x120] */ { u32 t = R32((u32)(r_ecx+0x120u)); r_esp -= 4; W32(r_esp, 0x848dcfu); call_ind(t); }
    /* 00848dcf: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00848dd3: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00848dd6: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00848dda: jne 0x848ca7 */ if (!fZ) goto L_00848ca7;
L_00848de0:; BB(0x00848de0);
    /* 00848de0: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00848de3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00848de4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00848de5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00848de6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00848de7: ret  */ FN_RET(0x00848c74); r_esp += 4; return;
}

void f_00848de8(void) /* sub_848DE8 */
{
    FN_ENTER(0x00848de8);
    /* 00848de8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00848de9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00848dea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00848deb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00848dec: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00848def: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00848df3: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00848df7: mov edx, ecx */ r_edx = r_ecx;
    /* 00848df9: mov eax, dword ptr [0xacd534] */ r_eax = R32((u32)(0xacd534u));
    /* 00848dfe: mov edi, dword ptr [0xae7780] */ r_edi = R32((u32)(0xae7780u));
    /* 00848e04: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00848e0a: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00848e0d: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00848e10: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00848e13: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 00848e16: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 00848e1a: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848e1e: mov ebx, eax */ r_ebx = r_eax;
L_00848e20:; BB(0x00848e20);
    /* 00848e20: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00848e24: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00848e28: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00848e29: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00848e2b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00848e2d: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 00848e30: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00848e32: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00848e34: lea edx, [ebp + 2] */ r_edx = (u32)(r_ebp+0x2u);
    /* 00848e37: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00848e3b: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00848e40: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00848e42: mov ecx, dword ptr [ebx + esi*8 + 4] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 00848e46: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00848e49: mov ecx, dword ptr [ebx + esi*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x8u));
    /* 00848e4d: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00848e50: mov ecx, dword ptr [ebx + esi*8 + 0xc] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0xcu));
    /* 00848e54: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00848e57: mov ecx, dword ptr [ebx + esi*8 + 0x10] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x10u));
    /* 00848e5b: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 00848e5e: mov ecx, dword ptr [ebx + esi*8 + 0x14] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x14u));
    /* 00848e62: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00848e65: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 00848e68: movsx ecx, word ptr [edx + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 00848e6c: add ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00848e6f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848e71: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848e73: mov edx, dword ptr [ebx + ecx*8] */ r_edx = R32((u32)(r_ebx+r_ecx*8));
    /* 00848e76: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00848e79: mov edx, dword ptr [ebx + ecx*8 + 4] */ r_edx = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 00848e7d: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00848e80: mov edx, dword ptr [ebx + ecx*8 + 8] */ r_edx = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 00848e84: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00848e87: mov edx, dword ptr [ebx + ecx*8 + 0xc] */ r_edx = R32((u32)(r_ebx+r_ecx*8+0xcu));
    /* 00848e8b: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 00848e8e: mov edx, dword ptr [ebx + ecx*8 + 0x10] */ r_edx = R32((u32)(r_ebx+r_ecx*8+0x10u));
    /* 00848e92: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 00848e95: mov edx, dword ptr [ebx + ecx*8 + 0x14] */ r_edx = R32((u32)(r_ebx+r_ecx*8+0x14u));
    /* 00848e99: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00848e9c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00848ea0: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00848ea4: mov dword ptr [eax + 0x34], edi */ W32((u32)(r_eax+0x34u), r_edi);
    /* 00848ea7: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00848eaa: lea ecx, [edx - 2] */ r_ecx = (u32)(r_edx+0xfffffffeu);
L_00848ead:; BB(0x00848ead);
    /* 00848ead: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00848eb1: add ebp, dword ptr [esp + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00848eb5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00848eb7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00848eb9: mov esi, dword ptr [ebx + edx*8] */ r_esi = R32((u32)(r_ebx+r_edx*8));
    /* 00848ebc: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00848ebe: mov esi, dword ptr [ebx + edx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x4u));
    /* 00848ec2: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00848ec5: mov esi, dword ptr [ebx + edx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x8u));
    /* 00848ec9: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 00848ecc: mov esi, dword ptr [ebx + edx*8 + 0xc] */ r_esi = R32((u32)(r_ebx+r_edx*8+0xcu));
    /* 00848ed0: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 00848ed3: mov esi, dword ptr [ebx + edx*8 + 0x10] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x10u));
    /* 00848ed7: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 00848eda: mov edx, dword ptr [ebx + edx*8 + 0x14] */ r_edx = R32((u32)(r_ebx+r_edx*8+0x14u));
    /* 00848ede: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00848ee1: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 00848ee4: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00848ee7: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00848eea: jne 0x848ead */ if (!fZ) goto L_00848ead;
L_00848eec:; BB(0x00848eec);
    /* 00848eec: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00848ef0: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00848ef6: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00848ef8: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00848efa: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00848efd: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00848f03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00848f04: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00848f06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00848f07: call dword ptr [esi + 0x120] */ { u32 t = R32((u32)(r_esi+0x120u)); r_esp -= 4; W32(r_esp, 0x848f0du); call_ind(t); }
    /* 00848f0d: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00848f10: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00848f13: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00848f16: jne 0x848e20 */ if (!fZ) goto L_00848e20;
L_00848f1c:; BB(0x00848f1c);
    /* 00848f1c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00848f1f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00848f20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00848f21: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00848f22: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00848f23: ret  */ FN_RET(0x00848de8); r_esp += 4; return;
}

void f_00848f24(void) /* sub_848F24 */
{
    FN_ENTER(0x00848f24);
    /* 00848f24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00848f25: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00848f26: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00848f27: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00848f28: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00848f2b: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00848f2f: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00848f33: mov edx, ecx */ r_edx = r_ecx;
    /* 00848f35: mov eax, dword ptr [0xacd534] */ r_eax = R32((u32)(0xacd534u));
    /* 00848f3a: mov edi, dword ptr [0xae7780] */ r_edi = R32((u32)(0xae7780u));
    /* 00848f40: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00848f46: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00848f4a: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00848f4d: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00848f50: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 00848f53: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 00848f57: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00848f5b: mov ebx, eax */ r_ebx = r_eax;
L_00848f5d:; BB(0x00848f5d);
    /* 00848f5d: fld dword ptr [0x98c5ec] */ FPUSH(R_F32((u32)(0x98c5ecu)));
    /* 00848f63: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00848f67: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00848f6b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00848f6c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00848f6e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00848f70: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 00848f73: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00848f75: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00848f77: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00848f7b: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00848f80: lea edx, [ebp + 2] */ r_edx = (u32)(r_ebp+0x2u);
    /* 00848f83: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00848f85: mov ecx, dword ptr [ebx + esi*8 + 4] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 00848f89: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00848f8c: mov ecx, dword ptr [ebx + esi*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x8u));
    /* 00848f90: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00848f93: mov ecx, dword ptr [ebx + esi*8 + 0xc] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0xcu));
    /* 00848f97: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00848f9a: mov ecx, dword ptr [ebx + esi*8 + 0x10] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x10u));
    /* 00848f9e: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 00848fa1: mov ecx, dword ptr [ebx + esi*8 + 0x14] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x14u));
    /* 00848fa5: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00848fa8: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 00848fab: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00848faf: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00848fb2: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00848fb5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00848fb7: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00848fba: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 00848fbe: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00848fc2: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00848fc6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00848fc8: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 00848fcb: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00848fcf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848fd1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00848fd3: mov esi, dword ptr [ebx + ecx*8] */ r_esi = R32((u32)(r_ebx+r_ecx*8));
    /* 00848fd6: mov dword ptr [eax + 0x24], esi */ W32((u32)(r_eax+0x24u), r_esi);
    /* 00848fd9: mov esi, dword ptr [ebx + ecx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 00848fdd: mov dword ptr [eax + 0x28], esi */ W32((u32)(r_eax+0x28u), r_esi);
    /* 00848fe0: mov esi, dword ptr [ebx + ecx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 00848fe4: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 00848fe7: mov esi, dword ptr [ebx + ecx*8 + 0xc] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0xcu));
    /* 00848feb: mov dword ptr [eax + 0x30], esi */ W32((u32)(r_eax+0x30u), r_esi);
    /* 00848fee: mov esi, dword ptr [ebx + ecx*8 + 0x10] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x10u));
    /* 00848ff2: mov dword ptr [eax + 0x34], esi */ W32((u32)(r_eax+0x34u), r_esi);
    /* 00848ff5: mov ecx, dword ptr [ebx + ecx*8 + 0x14] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x14u));
    /* 00848ff9: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 00848ffc: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 00848fff: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 00849003: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00849007: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084900b: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0084900e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849010: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 00849013: movsx edx, word ptr [edx + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xau));
    /* 00849017: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0084901b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084901f: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00849023: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849025: fstp dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0)); FPOP();
    /* 00849028: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084902b: lea ecx, [edx - 2] */ r_ecx = (u32)(r_edx+0xfffffffeu);
    /* 0084902e: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00849032: jmp 0x849037 */ goto L_00849037;
L_00849034:; BB(0x00849034);
    /* 00849034: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
L_00849037:; BB(0x00849037);
    /* 00849037: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0084903b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084903d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084903f: mov esi, dword ptr [ebx + edx*8] */ r_esi = R32((u32)(r_ebx+r_edx*8));
    /* 00849042: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00849044: mov esi, dword ptr [ebx + edx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x4u));
    /* 00849048: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 0084904b: mov esi, dword ptr [ebx + edx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x8u));
    /* 0084904f: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 00849052: mov esi, dword ptr [ebx + edx*8 + 0xc] */ r_esi = R32((u32)(r_ebx+r_edx*8+0xcu));
    /* 00849056: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 00849059: mov esi, dword ptr [ebx + edx*8 + 0x10] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x10u));
    /* 0084905d: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 00849060: mov edx, dword ptr [ebx + edx*8 + 0x14] */ r_edx = R32((u32)(r_ebx+r_edx*8+0x14u));
    /* 00849064: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00849067: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 0084906a: movsx edx, word ptr [ebp + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 0084906e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00849072: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849076: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849078: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0084907b: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 0084907f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00849083: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849087: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0084908b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084908d: lea ebp, [edx + ebp + 4] */ r_ebp = (u32)(r_edx+r_ebp+0x4u);
    /* 00849091: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00849094: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00849097: jne 0x849034 */ if (!fZ) goto L_00849034;
L_00849099:; BB(0x00849099);
    /* 00849099: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 0084909c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084909e: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008490a2: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 008490a8: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 008490aa: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 008490ac: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008490af: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008490b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008490b6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008490b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008490b9: call dword ptr [esi + 0x120] */ { u32 t = R32((u32)(r_esi+0x120u)); r_esp -= 4; W32(r_esp, 0x8490bfu); call_ind(t); }
    /* 008490bf: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008490c3: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008490c6: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008490ca: jne 0x848f5d */ if (!fZ) goto L_00848f5d;
L_008490d0:; BB(0x008490d0);
    /* 008490d0: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008490d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008490d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008490d5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008490d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008490d7: ret  */ FN_RET(0x00848f24); r_esp += 4; return;
}

