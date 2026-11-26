#include "protos.h"

void f_008818d8(void) /* sub_8818D8 */
{
    FN_ENTER(0x008818d8);
L_008818d8:; BB(0x008818d8);
    /* 008818d8: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008818e2: jne 0x881900 */ if (!fZ) goto L_00881900;
L_008818e8:; BB(0x008818e8);
    /* 008818e8: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008818f2: jne 0x882c08 */ if (!fZ) goto L_00882c08;
L_008818f8:; BB(0x008818f8);
    /* 008818f8: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x8818fdu); f_0086b8a0();
    /* 008818fd: jmp 0x8818d8 */ goto L_008818d8;
L_00881900:; BB(0x00881900);
    /* 00881900: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00881901: mov ebx, esp */ r_ebx = r_esp;
    /* 00881903: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00881906: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00881907: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00881908: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00881909: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088190c: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00881910: mov esi, edx */ r_esi = r_edx;
    /* 00881912: mov ebp, eax */ r_ebp = r_eax;
    /* 00881914: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 00881918: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0088191b: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0088191e: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 00881922: lea edi, [esi + 1] */ r_edi = (u32)(r_esi+0x1u);
    /* 00881925: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00881927: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0088192a: imul esi, ebp */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_ebp; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088192d: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00881930: fdivr dword ptr [0xa2b300] */ ST(0) = R_F32((u32)(0xa2b300u)) / ST(0);
    /* 00881936: fsincos  */ { long double v = ST(0); ST(0) = cosl(v); FPUSH(sinl(v)); }
    /* 00881938: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0088193c: lea edi, [ebp - 1] */ r_edi = (u32)(r_ebp+0xffffffffu);
    /* 0088193f: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00881941: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00881945: mov edi, ebp */ r_edi = r_ebp;
    /* 00881947: imul edi, ecx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_ecx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088194a: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0088194e: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00881951: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 00881955: je 0x882bdb */ if (fZ) goto L_00882bdb;
L_0088195b:; BB(0x0088195b);
    /* 0088195b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088195d: jle 0x881a90 */ if ((fZ||fS!=fO)) goto L_00881a90;
L_00881963:; BB(0x00881963);
    /* 00881963: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00881965: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00881968: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 0088196c: jb 0x881a37 */ if (fC) goto L_00881a37;
L_00881972:; BB(0x00881972);
    /* 00881972: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00881975: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00881977: lea ebp, [eax + esi] */ r_ebp = (u32)(r_eax+r_esi);
    /* 0088197a: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 0088197d: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088197f: jb 0x882bcb */ if (fC) goto L_00882bcb;
L_00881985:; BB(0x00881985);
    /* 00881985: mov esi, edx */ r_esi = r_edx;
    /* 00881987: mov ecx, eax */ r_ecx = r_eax;
    /* 00881989: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0088198c: mov edi, dword ptr [ebx + 0x20] */ r_edi = R32((u32)(r_ebx+0x20u));
    /* 0088198f: je 0x8819ce */ if (fZ) goto L_008819ce;
L_00881991:; BB(0x00881991);
    /* 00881991: test cl, 3 */ {  u32 a = (u8)r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00881994: jne 0x881a37 */ if (!fZ) goto L_00881a37;
L_0088199a:; BB(0x0088199a);
    /* 0088199a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088199c: lea ebp, [ecx + 0x10] */ r_ebp = (u32)(r_ecx+0x10u);
    /* 0088199f: mov esi, dword ptr [ebx + 0x20] */ r_esi = R32((u32)(r_ebx+0x20u));
    /* 008819a2: lea edi, [esi + ecx + 0x10] */ r_edi = (u32)(r_esi+r_ecx+0x10u);
    /* 008819a6: shr ebp, 2 */ { u32 c = (2u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 008819a9: mov esi, edx */ r_esi = r_edx;
    /* 008819ab: sub esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008819ad: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 008819b0: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 008819b4: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_008819b8:; BB(0x008819b8);
    /* 008819b8: mov edx, dword ptr [ecx + edi*4] */ r_edx = R32((u32)(r_ecx+r_edi*4));
    /* 008819bb: mov dword ptr [eax + edi*4], edx */ W32((u32)(r_eax+r_edi*4), r_edx);
    /* 008819be: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008819bf: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008819c1: jb 0x8819b8 */ if (fC) goto L_008819b8;
L_008819c3:; BB(0x008819c3);
    /* 008819c3: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 008819c7: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 008819cb: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
L_008819ce:; BB(0x008819ce);
    /* 008819ce: and esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008819d1: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008819d3: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008819d5: test edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008819db: jne 0x881a08 */ if (!fZ) goto L_00881a08;
L_008819dd:; BB(0x008819dd);
    /* 008819dd: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 008819e1: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
L_008819e4:; BB(0x008819e4);
    /* 008819e4: prefetchnta byte ptr [ecx + ebp*4 + 0x40] */ ;
    /* 008819e9: movaps xmm0, xmmword ptr [ecx + ebp*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_ebp*4), 16); xmm[0] = s; }
    /* 008819ed: movaps xmmword ptr [eax + ebp*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_ebp*4), &xmm[0], 16);
    /* 008819f1: movaps xmm1, xmmword ptr [ecx + ebp*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_ebp*4+0x10u), 16); xmm[1] = s; }
    /* 008819f6: movaps xmmword ptr [eax + ebp*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_ebp*4+0x10u), &xmm[1], 16);
    /* 008819fb: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008819fe: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00881a00: jb 0x8819e4 */ if (fC) goto L_008819e4;
L_00881a02:; BB(0x00881a02);
    /* 00881a02: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 00881a06: jmp 0x881a31 */ goto L_00881a31;
L_00881a08:; BB(0x00881a08);
    /* 00881a08: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 00881a0c: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
L_00881a0f:; BB(0x00881a0f);
    /* 00881a0f: movups xmm0, xmmword ptr [ecx + ebp*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_ebp*4), 16); xmm[0] = s; }
    /* 00881a13: prefetchnta byte ptr [ecx + ebp*4 + 0x40] */ ;
    /* 00881a18: movaps xmmword ptr [eax + ebp*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_ebp*4), &xmm[0], 16);
    /* 00881a1c: movups xmm1, xmmword ptr [ecx + ebp*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_ebp*4+0x10u), 16); xmm[1] = s; }
    /* 00881a21: movaps xmmword ptr [eax + ebp*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_ebp*4+0x10u), &xmm[1], 16);
    /* 00881a26: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00881a29: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00881a2b: jb 0x881a0f */ if (fC) goto L_00881a0f;
L_00881a2d:; BB(0x00881a2d);
    /* 00881a2d: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
L_00881a31:; BB(0x00881a31);
    /* 00881a31: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00881a33: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00881a35: jae 0x881a90 */ if (!fC) goto L_00881a90;
L_00881a37:; BB(0x00881a37);
    /* 00881a37: mov ecx, edx */ r_ecx = r_edx;
    /* 00881a39: sub ecx, dword ptr [esp + 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x50u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00881a3d: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00881a40: jb 0x881a7d */ if (fC) goto L_00881a7d;
L_00881a42:; BB(0x00881a42);
    /* 00881a42: lea ecx, [edx - 6] */ r_ecx = (u32)(r_edx+0xfffffffau);
    /* 00881a45: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 00881a49: mov esi, dword ptr [ebx + 0x20] */ r_esi = R32((u32)(r_ebx+0x20u));
L_00881a4c:; BB(0x00881a4c);
    /* 00881a4c: mov edi, dword ptr [esi + ebp*4] */ r_edi = R32((u32)(r_esi+r_ebp*4));
    /* 00881a4f: mov dword ptr [eax + ebp*4], edi */ W32((u32)(r_eax+r_ebp*4), r_edi);
    /* 00881a52: mov edi, dword ptr [esi + ebp*4 + 4] */ r_edi = R32((u32)(r_esi+r_ebp*4+0x4u));
    /* 00881a56: mov dword ptr [eax + ebp*4 + 4], edi */ W32((u32)(r_eax+r_ebp*4+0x4u), r_edi);
    /* 00881a5a: mov edi, dword ptr [esi + ebp*4 + 8] */ r_edi = R32((u32)(r_esi+r_ebp*4+0x8u));
    /* 00881a5e: mov dword ptr [eax + ebp*4 + 8], edi */ W32((u32)(r_eax+r_ebp*4+0x8u), r_edi);
    /* 00881a62: mov edi, dword ptr [esi + ebp*4 + 0xc] */ r_edi = R32((u32)(r_esi+r_ebp*4+0xcu));
    /* 00881a66: mov dword ptr [eax + ebp*4 + 0xc], edi */ W32((u32)(r_eax+r_ebp*4+0xcu), r_edi);
    /* 00881a6a: mov edi, dword ptr [esi + ebp*4 + 0x10] */ r_edi = R32((u32)(r_esi+r_ebp*4+0x10u));
    /* 00881a6e: mov dword ptr [eax + ebp*4 + 0x10], edi */ W32((u32)(r_eax+r_ebp*4+0x10u), r_edi);
    /* 00881a72: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00881a75: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00881a77: jbe 0x881a4c */ if ((fC||fZ)) goto L_00881a4c;
L_00881a79:; BB(0x00881a79);
    /* 00881a79: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
L_00881a7d:; BB(0x00881a7d);
    /* 00881a7d: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 00881a81: mov ebp, dword ptr [ebx + 0x20] */ r_ebp = R32((u32)(r_ebx+0x20u));
L_00881a84:; BB(0x00881a84);
    /* 00881a84: mov ecx, dword ptr [ebp + esi*4] */ r_ecx = R32((u32)(r_ebp+r_esi*4));
    /* 00881a88: mov dword ptr [eax + esi*4], ecx */ W32((u32)(r_eax+r_esi*4), r_ecx);
    /* 00881a8b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00881a8c: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00881a8e: jb 0x881a84 */ if (fC) goto L_00881a84;
L_00881a90:; BB(0x00881a90);
    /* 00881a90: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00881a92: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00881a97: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00881a9b: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881a9e: jle 0x881b5f */ if ((fZ||fS!=fO)) goto L_00881b5f;
L_00881aa4:; BB(0x00881aa4);
    /* 00881aa4: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00881aa8: lea esi, [esi - 6] */ r_esi = (u32)(r_esi+0xfffffffau);
    /* 00881aab: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00881aaf: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 00881ab3: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
L_00881ab7:; BB(0x00881ab7);
    /* 00881ab7: add ebp, dword ptr [esp + 0x18] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00881abb: mov edx, ebp */ r_edx = r_ebp;
    /* 00881abd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00881abf: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00881ac1: jle 0x882bb7 */ if ((fZ||fS!=fO)) goto L_00882bb7;
L_00881ac7:; BB(0x00881ac7);
    /* 00881ac7: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881aca: jl 0x881b26 */ if ((fS!=fO)) goto L_00881b26;
L_00881acc:; BB(0x00881acc);
    /* 00881acc: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00881ad0: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00881ad3: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00881ad7: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 00881adb: mov ebp, dword ptr [ebx + 0x1c] */ r_ebp = R32((u32)(r_ebx+0x1cu));
L_00881ade:; BB(0x00881ade);
    /* 00881ade: mov edi, dword ptr [ebp + edx*4] */ r_edi = R32((u32)(r_ebp+r_edx*4));
    /* 00881ae2: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00881ae5: mov dword ptr [ecx + edx*4], edi */ W32((u32)(r_ecx+r_edx*4), r_edi);
    /* 00881ae8: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881aea: mov edi, dword ptr [ebp + edx*4] */ r_edi = R32((u32)(r_ebp+r_edx*4));
    /* 00881aee: mov dword ptr [ecx + edx*4], edi */ W32((u32)(r_ecx+r_edx*4), r_edi);
    /* 00881af1: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881af3: mov edi, dword ptr [ebp + edx*4] */ r_edi = R32((u32)(r_ebp+r_edx*4));
    /* 00881af7: mov dword ptr [ecx + edx*4], edi */ W32((u32)(r_ecx+r_edx*4), r_edi);
    /* 00881afa: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881afc: mov edi, dword ptr [ebp + edx*4] */ r_edi = R32((u32)(r_ebp+r_edx*4));
    /* 00881b00: mov dword ptr [ecx + edx*4], edi */ W32((u32)(r_ecx+r_edx*4), r_edi);
    /* 00881b03: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881b05: mov edi, dword ptr [ebp + edx*4] */ r_edi = R32((u32)(r_ebp+r_edx*4));
    /* 00881b09: mov dword ptr [ecx + edx*4], edi */ W32((u32)(r_ecx+r_edx*4), r_edi);
    /* 00881b0c: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881b0e: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00881b12: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881b14: jle 0x881ade */ if ((fZ||fS!=fO)) goto L_00881ade;
L_00881b16:; BB(0x00881b16);
    /* 00881b16: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00881b1a: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00881b1e: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 00881b22: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
L_00881b26:; BB(0x00881b26);
    /* 00881b26: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00881b2a: mov edi, dword ptr [ebx + 0x1c] */ r_edi = R32((u32)(r_ebx+0x1cu));
    /* 00881b2d: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 00881b31: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
L_00881b34:; BB(0x00881b34);
    /* 00881b34: mov ecx, dword ptr [edi + edx*4] */ r_ecx = R32((u32)(r_edi+r_edx*4));
    /* 00881b37: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00881b38: mov dword ptr [ebp + edx*4], ecx */ W32((u32)(r_ebp+r_edx*4), r_ecx);
    /* 00881b3c: add edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881b40: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881b42: jl 0x881b34 */ if ((fS!=fO)) goto L_00881b34;
L_00881b44:; BB(0x00881b44);
    /* 00881b44: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00881b48: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00881b4c: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 00881b50: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00881b51: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881b53: jl 0x881ab7 */ if ((fS!=fO)) goto L_00881ab7;
L_00881b59:; BB(0x00881b59);
    /* 00881b59: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00881b5c: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
L_00881b5f:; BB(0x00881b5f);
    /* 00881b5f: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00881b63: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00881b65: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00881b67: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00881b6b: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00881b6f: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00881b73: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00881b78: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881b7a: jle 0x881c5d */ if ((fZ||fS!=fO)) goto L_00881c5d;
L_00881b80:; BB(0x00881b80);
    /* 00881b80: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00881b84: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881b87: jle 0x881d5a */ if ((fZ||fS!=fO)) goto L_00881d5a;
L_00881b8d:; BB(0x00881b8d);
    /* 00881b8d: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00881b91: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
L_00881b95:; BB(0x00881b95);
    /* 00881b95: add esi, dword ptr [esp + 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00881b99: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00881b9b: mov eax, esi */ r_eax = r_esi;
    /* 00881b9d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00881b9f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00881ba1: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 00881ba5: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00881ba9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00881bab: jle 0x882b9f */ if ((fZ||fS!=fO)) goto L_00882b9f;
L_00881bb1:; BB(0x00881bb1);
    /* 00881bb1: lea edi, [ebp - 1] */ r_edi = (u32)(r_ebp+0xffffffffu);
    /* 00881bb4: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00881bb8: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00881bbc: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 00881bc0: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00881bc4: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
L_00881bc8:; BB(0x00881bc8);
    /* 00881bc8: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00881bcc: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00881bce: mov ebp, eax */ r_ebp = r_eax;
    /* 00881bd0: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00881bd5: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881bd8: jle 0x882b28 */ if ((fZ||fS!=fO)) goto L_00882b28;
L_00881bde:; BB(0x00881bde);
    /* 00881bde: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 00881be2: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00881be5: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00881be9: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
L_00881bec:; BB(0x00881bec);
    /* 00881bec: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00881bef: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00881bf2: movss xmm1, dword ptr [eax + esi*4 - 4] */ { u32 v = R32((u32)(r_eax+r_esi*4+0xfffffffcu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00881bf8: mulss xmm1, dword ptr [edx + ebp*4 - 4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_ebp*4+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 00881bfe: movss xmm0, dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00881c03: mulss xmm0, dword ptr [edx + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 00881c08: addss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; }
    /* 00881c0c: mov edi, dword ptr [ebx + 0x24] */ r_edi = R32((u32)(r_ebx+0x24u));
    /* 00881c0f: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00881c12: movss dword ptr [edi + ebp*4 - 4], xmm1 */ W32((u32)(r_edi+r_ebp*4+0xfffffffcu), xmm[1].d[0]);
    /* 00881c18: movss xmm3, dword ptr [eax + esi*4 - 4] */ { u32 v = R32((u32)(r_eax+r_esi*4+0xfffffffcu)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 00881c1e: mulss xmm3, dword ptr [edx + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 00881c23: movss xmm2, dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 00881c28: mulss xmm2, dword ptr [edx + ebp*4 - 4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_ebp*4+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 00881c2e: subss xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; }
    /* 00881c32: movss dword ptr [edi + ebp*4], xmm3 */ W32((u32)(r_edi+r_ebp*4), xmm[3].d[0]);
    /* 00881c37: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00881c3b: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881c3d: jl 0x881bec */ if ((fS!=fO)) goto L_00881bec;
L_00881c3f:; BB(0x00881c3f);
    /* 00881c3f: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 00881c43: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00881c47: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00881c4b: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00881c4c: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00881c50: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881c52: jl 0x881bc8 */ if ((fS!=fO)) goto L_00881bc8;
L_00881c58:; BB(0x00881c58);
    /* 00881c58: jmp 0x882b59 */ goto L_00882b59;
L_00881c5d:; BB(0x00881c5d);
    /* 00881c5d: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00881c61: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881c64: jle 0x881d5a */ if ((fZ||fS!=fO)) goto L_00881d5a;
L_00881c6a:; BB(0x00881c6a);
    /* 00881c6a: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
L_00881c6e:; BB(0x00881c6e);
    /* 00881c6e: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00881c72: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00881c74: lea edx, [ebp - 1] */ r_edx = (u32)(r_ebp+0xffffffffu);
    /* 00881c77: add esi, dword ptr [esp + 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00881c7b: mov eax, 2 */ r_eax = 0x2u;
    /* 00881c80: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881c83: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 00881c87: jle 0x882b87 */ if ((fZ||fS!=fO)) goto L_00882b87;
L_00881c8d:; BB(0x00881c8d);
    /* 00881c8d: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00881c91: mov ecx, esi */ r_ecx = r_esi;
    /* 00881c93: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00881c97: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
L_00881c9b:; BB(0x00881c9b);
    /* 00881c9b: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881c9e: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00881ca1: mov esi, ecx */ r_esi = r_ecx;
    /* 00881ca3: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00881ca5: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00881ca9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00881cab: jle 0x882b67 */ if ((fZ||fS!=fO)) goto L_00882b67;
L_00881cb1:; BB(0x00881cb1);
    /* 00881cb1: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00881cb4: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 00881cb8: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00881cbc: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00881cbf: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
L_00881cc3:; BB(0x00881cc3);
    /* 00881cc3: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 00881cc7: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00881ccb: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 00881cce: movss xmm1, dword ptr [ecx + ebp*2 - 4] */ { u32 v = R32((u32)(r_ecx+r_ebp*2+0xfffffffcu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00881cd4: mulss xmm1, dword ptr [eax + esi*4 - 4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_esi*4+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 00881cda: movss xmm0, dword ptr [ecx + edx*4] */ { u32 v = R32((u32)(r_ecx+r_edx*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00881cdf: mulss xmm0, dword ptr [eax + esi*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_esi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 00881ce4: addss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; }
    /* 00881ce8: mov edi, dword ptr [ebx + 0x24] */ r_edi = R32((u32)(r_ebx+0x24u));
    /* 00881ceb: movss dword ptr [edi + esi*4 - 4], xmm1 */ W32((u32)(r_edi+r_esi*4+0xfffffffcu), xmm[1].d[0]);
    /* 00881cf1: movss xmm4, dword ptr [ecx + ebp*2 - 4] */ { u32 v = R32((u32)(r_ecx+r_ebp*2+0xfffffffcu)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 00881cf7: mulss xmm4, dword ptr [eax + esi*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_esi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 00881cfc: xorps xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].q[0] = xmm[3].q[0] ^ s.q[0]; xmm[3].q[1] = xmm[3].q[1] ^ s.q[1]; }
    /* 00881cff: subss xmm3, dword ptr [ecx + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; }
    /* 00881d04: mulss xmm3, dword ptr [eax + esi*4 - 4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_esi*4+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 00881d0a: addss xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; }
    /* 00881d0e: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 00881d12: movss dword ptr [edi + esi*4], xmm4 */ W32((u32)(r_edi+r_esi*4), xmm[4].d[0]);
    /* 00881d17: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00881d18: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00881d1c: add esi, dword ptr [esp + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00881d20: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881d22: jl 0x881cc3 */ if ((fS!=fO)) goto L_00881cc3;
L_00881d24:; BB(0x00881d24);
    /* 00881d24: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00881d28: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00881d2c: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00881d2f: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00881d33: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881d35: jl 0x881c9b */ if ((fS!=fO)) goto L_00881c9b;
L_00881d3b:; BB(0x00881d3b);
    /* 00881d3b: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00881d3f: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00881d43: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
L_00881d47:; BB(0x00881d47);
    /* 00881d47: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00881d48: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00881d4c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881d4e: jl 0x881c6e */ if ((fS!=fO)) goto L_00881c6e;
L_00881d54:; BB(0x00881d54);
    /* 00881d54: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00881d57: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
L_00881d5a:; BB(0x00881d5a);
    /* 00881d5a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00881d5c: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00881d60: imul ecx, dword ptr [esp + 0x18] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_esp+0x18u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00881d65: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00881d69: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00881d6d: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00881d71: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881d73: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00881d77: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00881d7c: jge 0x881e70 */ if ((fS==fO)) goto L_00881e70;
L_00881d82:; BB(0x00881d82);
    /* 00881d82: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00881d86: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881d89: jle 0x881f5a */ if ((fZ||fS!=fO)) goto L_00881f5a;
L_00881d8f:; BB(0x00881d8f);
    /* 00881d8f: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
L_00881d93:; BB(0x00881d93);
    /* 00881d93: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00881d97: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00881d99: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00881d9b: mov eax, ebp */ r_eax = r_ebp;
    /* 00881d9d: mov esi, edx */ r_esi = r_edx;
    /* 00881d9f: mov edi, 2 */ r_edi = 0x2u;
    /* 00881da4: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00881da8: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00881dac: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881daf: jle 0x882b10 */ if ((fZ||fS!=fO)) goto L_00882b10;
L_00881db5:; BB(0x00881db5);
    /* 00881db5: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00881db9: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00881dbd: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00881dc1: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00881dc5: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
L_00881dc9:; BB(0x00881dc9);
    /* 00881dc9: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00881dcd: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00881dd0: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00881dd3: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00881dd7: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00881ddb: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00881ddd: mov edx, esi */ r_edx = r_esi;
    /* 00881ddf: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00881de1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00881de3: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00881de7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00881de9: jle 0x882ab7 */ if ((fZ||fS!=fO)) goto L_00882ab7;
L_00881def:; BB(0x00881def);
    /* 00881def: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00881df3: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
    /* 00881df6: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00881dfa: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
L_00881dfd:; BB(0x00881dfd);
    /* 00881dfd: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00881e01: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00881e03: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881e05: movss xmm0, dword ptr [ebp + ecx*4 - 4] */ { u32 v = R32((u32)(r_ebp+r_ecx*4+0xfffffffcu)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00881e0b: addss xmm0, dword ptr [ebp + edx*4 - 4] */ { XMM s; s.d[0] = R32((u32)(r_ebp+r_edx*4+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 00881e11: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00881e12: movss dword ptr [esi + ecx*4 - 4], xmm0 */ W32((u32)(r_esi+r_ecx*4+0xfffffffcu), xmm[0].d[0]);
    /* 00881e18: movss xmm1, dword ptr [ebp + ecx*4] */ { u32 v = R32((u32)(r_ebp+r_ecx*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00881e1e: subss xmm1, dword ptr [ebp + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_ebp+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 00881e24: movss dword ptr [esi + edx*4 - 4], xmm1 */ W32((u32)(r_esi+r_edx*4+0xfffffffcu), xmm[1].d[0]);
    /* 00881e2a: movss xmm2, dword ptr [ebp + ecx*4] */ { u32 v = R32((u32)(r_ebp+r_ecx*4)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 00881e30: addss xmm2, dword ptr [ebp + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_ebp+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; }
    /* 00881e36: movss dword ptr [esi + ecx*4], xmm2 */ W32((u32)(r_esi+r_ecx*4), xmm[2].d[0]);
    /* 00881e3b: movss xmm3, dword ptr [ebp + edx*4 - 4] */ { u32 v = R32((u32)(r_ebp+r_edx*4+0xfffffffcu)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 00881e41: subss xmm3, dword ptr [ebp + ecx*4 - 4] */ { XMM s; s.d[0] = R32((u32)(r_ebp+r_ecx*4+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; }
    /* 00881e47: movss dword ptr [esi + edx*4], xmm3 */ W32((u32)(r_esi+r_edx*4), xmm[3].d[0]);
    /* 00881e4c: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00881e50: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881e52: jl 0x881dfd */ if ((fS!=fO)) goto L_00881dfd;
L_00881e54:; BB(0x00881e54);
    /* 00881e54: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00881e58: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00881e5c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00881e5f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00881e63: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881e65: jl 0x881dc9 */ if ((fS!=fO)) goto L_00881dc9;
L_00881e6b:; BB(0x00881e6b);
    /* 00881e6b: jmp 0x882aea */ goto L_00882aea;
L_00881e70:; BB(0x00881e70);
    /* 00881e70: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00881e74: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881e77: jle 0x881f5a */ if ((fZ||fS!=fO)) goto L_00881f5a;
L_00881e7d:; BB(0x00881e7d);
    /* 00881e7d: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_00881e81:; BB(0x00881e81);
    /* 00881e81: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00881e85: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00881e87: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00881e89: mov edx, ebp */ r_edx = r_ebp;
    /* 00881e8b: mov eax, esi */ r_eax = r_esi;
    /* 00881e8d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00881e8f: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00881e93: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00881e97: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00881e99: jle 0x882af8 */ if ((fZ||fS!=fO)) goto L_00882af8;
L_00881e9f:; BB(0x00881e9f);
    /* 00881e9f: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00881ea3: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00881ea7: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00881eab: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
L_00881eaf:; BB(0x00881eaf);
    /* 00881eaf: mov esi, edx */ r_esi = r_edx;
    /* 00881eb1: mov ebp, eax */ r_ebp = r_eax;
    /* 00881eb3: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00881eb8: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881ebb: jle 0x881f22 */ if ((fZ||fS!=fO)) goto L_00881f22;
L_00881ebd:; BB(0x00881ebd);
    /* 00881ebd: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00881ec1: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 00881ec4: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00881ec8: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
L_00881ecb:; BB(0x00881ecb);
    /* 00881ecb: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00881ece: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00881ed1: movss xmm0, dword ptr [eax + esi*4 - 4] */ { u32 v = R32((u32)(r_eax+r_esi*4+0xfffffffcu)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00881ed7: addss xmm0, dword ptr [eax + ebp*4 - 4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_ebp*4+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 00881edd: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00881ee0: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881ee2: movss dword ptr [edx + esi*4 - 4], xmm0 */ W32((u32)(r_edx+r_esi*4+0xfffffffcu), xmm[0].d[0]);
    /* 00881ee8: movss xmm1, dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00881eed: subss xmm1, dword ptr [eax + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 00881ef2: movss dword ptr [edx + ebp*4 - 4], xmm1 */ W32((u32)(r_edx+r_ebp*4+0xfffffffcu), xmm[1].d[0]);
    /* 00881ef8: movss xmm2, dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 00881efd: addss xmm2, dword ptr [eax + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; }
    /* 00881f02: movss dword ptr [edx + esi*4], xmm2 */ W32((u32)(r_edx+r_esi*4), xmm[2].d[0]);
    /* 00881f07: movss xmm3, dword ptr [eax + ebp*4 - 4] */ { u32 v = R32((u32)(r_eax+r_ebp*4+0xfffffffcu)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 00881f0d: subss xmm3, dword ptr [eax + esi*4 - 4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_esi*4+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; }
    /* 00881f13: movss dword ptr [edx + ebp*4], xmm3 */ W32((u32)(r_edx+r_ebp*4), xmm[3].d[0]);
    /* 00881f18: jl 0x881ecb */ if ((fS!=fO)) goto L_00881ecb;
L_00881f1a:; BB(0x00881f1a);
    /* 00881f1a: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00881f1e: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
L_00881f22:; BB(0x00881f22);
    /* 00881f22: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881f24: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00881f26: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00881f2a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00881f2b: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00881f2f: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881f31: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00881f35: jl 0x881eaf */ if ((fS!=fO)) goto L_00881eaf;
L_00881f3b:; BB(0x00881f3b);
    /* 00881f3b: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00881f3f: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00881f43: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00881f47: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00881f48: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00881f4c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881f4e: jl 0x881e81 */ if ((fS!=fO)) goto L_00881e81;
L_00881f54:; BB(0x00881f54);
    /* 00881f54: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00881f57: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
L_00881f5a:; BB(0x00881f5a);
    /* 00881f5a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00881f5c: jle 0x88208f */ if ((fZ||fS!=fO)) goto L_0088208f;
L_00881f62:; BB(0x00881f62);
    /* 00881f62: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00881f64: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00881f67: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00881f6b: jb 0x882036 */ if (fC) goto L_00882036;
L_00881f71:; BB(0x00881f71);
    /* 00881f71: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00881f74: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00881f76: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 00881f79: lea ebp, [ecx + esi] */ r_ebp = (u32)(r_ecx+r_esi);
    /* 00881f7c: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00881f7e: jb 0x882aa5 */ if (fC) goto L_00882aa5;
L_00881f84:; BB(0x00881f84);
    /* 00881f84: mov ebp, edx */ r_ebp = r_edx;
    /* 00881f86: mov esi, dword ptr [ebx + 0x20] */ r_esi = R32((u32)(r_ebx+0x20u));
    /* 00881f89: and esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00881f8c: mov edi, eax */ r_edi = r_eax;
    /* 00881f8e: je 0x881fcd */ if (fZ) goto L_00881fcd;
L_00881f90:; BB(0x00881f90);
    /* 00881f90: test esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00881f96: jne 0x882036 */ if (!fZ) goto L_00882036;
L_00881f9c:; BB(0x00881f9c);
    /* 00881f9c: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00881f9e: lea ecx, [esi + 0x10] */ r_ecx = (u32)(r_esi+0x10u);
    /* 00881fa1: lea edi, [eax + esi + 0x10] */ r_edi = (u32)(r_eax+r_esi+0x10u);
    /* 00881fa5: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00881fa8: mov ebp, edx */ r_ebp = r_edx;
    /* 00881faa: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00881fac: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 00881fb0: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00881fb4: mov esi, dword ptr [ebx + 0x20] */ r_esi = R32((u32)(r_ebx+0x20u));
L_00881fb7:; BB(0x00881fb7);
    /* 00881fb7: mov edx, dword ptr [eax + edi*4] */ r_edx = R32((u32)(r_eax+r_edi*4));
    /* 00881fba: mov dword ptr [esi + edi*4], edx */ W32((u32)(r_esi+r_edi*4), r_edx);
    /* 00881fbd: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00881fbe: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00881fc0: jb 0x881fb7 */ if (fC) goto L_00881fb7;
L_00881fc2:; BB(0x00881fc2);
    /* 00881fc2: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 00881fc6: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00881fca: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
L_00881fcd:; BB(0x00881fcd);
    /* 00881fcd: and ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00881fd0: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00881fd2: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00881fd4: test edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00881fda: jne 0x882007 */ if (!fZ) goto L_00882007;
L_00881fdc:; BB(0x00881fdc);
    /* 00881fdc: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 00881fe0: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
L_00881fe3:; BB(0x00881fe3);
    /* 00881fe3: prefetchnta byte ptr [eax + esi*4 + 0x40] */ ;
    /* 00881fe8: movaps xmm0, xmmword ptr [eax + esi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_esi*4), 16); xmm[0] = s; }
    /* 00881fec: movaps xmmword ptr [ecx + esi*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_ecx+r_esi*4), &xmm[0], 16);
    /* 00881ff0: movaps xmm1, xmmword ptr [eax + esi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_esi*4+0x10u), 16); xmm[1] = s; }
    /* 00881ff5: movaps xmmword ptr [ecx + esi*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_ecx+r_esi*4+0x10u), &xmm[1], 16);
    /* 00881ffa: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00881ffd: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00881fff: jb 0x881fe3 */ if (fC) goto L_00881fe3;
L_00882001:; BB(0x00882001);
    /* 00882001: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 00882005: jmp 0x882030 */ goto L_00882030;
L_00882007:; BB(0x00882007);
    /* 00882007: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 0088200b: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
L_0088200e:; BB(0x0088200e);
    /* 0088200e: movups xmm0, xmmword ptr [eax + esi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_esi*4), 16); xmm[0] = s; }
    /* 00882012: prefetchnta byte ptr [eax + esi*4 + 0x40] */ ;
    /* 00882017: movaps xmmword ptr [ecx + esi*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_ecx+r_esi*4), &xmm[0], 16);
    /* 0088201b: movups xmm1, xmmword ptr [eax + esi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_esi*4+0x10u), 16); xmm[1] = s; }
    /* 00882020: movaps xmmword ptr [ecx + esi*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_ecx+r_esi*4+0x10u), &xmm[1], 16);
    /* 00882025: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00882028: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088202a: jb 0x88200e */ if (fC) goto L_0088200e;
L_0088202c:; BB(0x0088202c);
    /* 0088202c: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
L_00882030:; BB(0x00882030);
    /* 00882030: mov ecx, esi */ r_ecx = r_esi;
    /* 00882032: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00882034: jae 0x88208f */ if (!fC) goto L_0088208f;
L_00882036:; BB(0x00882036);
    /* 00882036: mov ecx, edx */ r_ecx = r_edx;
    /* 00882038: sub ecx, dword ptr [esp + 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x50u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088203c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088203f: jb 0x88207c */ if (fC) goto L_0088207c;
L_00882041:; BB(0x00882041);
    /* 00882041: lea ecx, [edx - 6] */ r_ecx = (u32)(r_edx+0xfffffffau);
    /* 00882044: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 00882048: mov esi, dword ptr [ebx + 0x20] */ r_esi = R32((u32)(r_ebx+0x20u));
L_0088204b:; BB(0x0088204b);
    /* 0088204b: mov edi, dword ptr [eax + ebp*4] */ r_edi = R32((u32)(r_eax+r_ebp*4));
    /* 0088204e: mov dword ptr [esi + ebp*4], edi */ W32((u32)(r_esi+r_ebp*4), r_edi);
    /* 00882051: mov edi, dword ptr [eax + ebp*4 + 4] */ r_edi = R32((u32)(r_eax+r_ebp*4+0x4u));
    /* 00882055: mov dword ptr [esi + ebp*4 + 4], edi */ W32((u32)(r_esi+r_ebp*4+0x4u), r_edi);
    /* 00882059: mov edi, dword ptr [eax + ebp*4 + 8] */ r_edi = R32((u32)(r_eax+r_ebp*4+0x8u));
    /* 0088205d: mov dword ptr [esi + ebp*4 + 8], edi */ W32((u32)(r_esi+r_ebp*4+0x8u), r_edi);
    /* 00882061: mov edi, dword ptr [eax + ebp*4 + 0xc] */ r_edi = R32((u32)(r_eax+r_ebp*4+0xcu));
    /* 00882065: mov dword ptr [esi + ebp*4 + 0xc], edi */ W32((u32)(r_esi+r_ebp*4+0xcu), r_edi);
    /* 00882069: mov edi, dword ptr [eax + ebp*4 + 0x10] */ r_edi = R32((u32)(r_eax+r_ebp*4+0x10u));
    /* 0088206d: mov dword ptr [esi + ebp*4 + 0x10], edi */ W32((u32)(r_esi+r_ebp*4+0x10u), r_edi);
    /* 00882071: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00882074: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00882076: jbe 0x88204b */ if ((fC||fZ)) goto L_0088204b;
L_00882078:; BB(0x00882078);
    /* 00882078: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
L_0088207c:; BB(0x0088207c);
    /* 0088207c: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 00882080: mov ebp, dword ptr [ebx + 0x20] */ r_ebp = R32((u32)(r_ebx+0x20u));
L_00882083:; BB(0x00882083);
    /* 00882083: mov ecx, dword ptr [eax + esi*4] */ r_ecx = R32((u32)(r_eax+r_esi*4));
    /* 00882086: mov dword ptr [ebp + esi*4], ecx */ W32((u32)(r_ebp+r_esi*4), r_ecx);
    /* 0088208a: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088208b: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088208d: jb 0x882083 */ if (fC) goto L_00882083;
L_0088208f:; BB(0x0088208f);
    /* 0088208f: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00882091: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00882095: imul esi, edx */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_edx; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00882098: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 0088209c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 008820a1: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 008820a5: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008820a8: jle 0x882130 */ if ((fZ||fS!=fO)) goto L_00882130;
L_008820ae:; BB(0x008820ae);
    /* 008820ae: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
L_008820b2:; BB(0x008820b2);
    /* 008820b2: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 008820b6: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008820b8: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 008820bc: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008820be: mov esi, ebp */ r_esi = r_ebp;
    /* 008820c0: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008820c4: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 008820c8: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008820ca: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008820cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008820ce: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 008820d2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008820d4: jle 0x882a8d */ if ((fZ||fS!=fO)) goto L_00882a8d;
L_008820da:; BB(0x008820da);
    /* 008820da: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 008820de: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 008820e1: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 008820e5: mov ebp, dword ptr [ebx + 0x1c] */ r_ebp = R32((u32)(r_ebx+0x1cu));
L_008820e8:; BB(0x008820e8);
    /* 008820e8: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 008820ec: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008820ee: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008820f0: movss xmm0, dword ptr [ecx + esi*4] */ { u32 v = R32((u32)(r_ecx+r_esi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008820f5: addss xmm0, dword ptr [ecx + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008820fa: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008820fb: movss dword ptr [ebp + esi*4], xmm0 */ W32((u32)(r_ebp+r_esi*4), xmm[0].d[0]);
    /* 00882101: movss xmm1, dword ptr [ecx + edx*4] */ { u32 v = R32((u32)(r_ecx+r_edx*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00882106: subss xmm1, dword ptr [ecx + esi*4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_esi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 0088210b: movss dword ptr [ebp + edx*4], xmm1 */ W32((u32)(r_ebp+r_edx*4), xmm[1].d[0]);
    /* 00882111: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00882115: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882117: jl 0x8820e8 */ if ((fS!=fO)) goto L_008820e8;
L_00882119:; BB(0x00882119);
    /* 00882119: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 0088211d: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 00882121: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00882122: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00882126: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882128: jl 0x8820b2 */ if ((fS!=fO)) goto L_008820b2;
L_0088212a:; BB(0x0088212a);
    /* 0088212a: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0088212d: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
L_00882130:; BB(0x00882130);
    /* 00882130: fld dword ptr [0x99ad48] */ FPUSH(R_F32((u32)(0x99ad48u)));
    /* 00882136: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00882138: mov ebp, edx */ r_ebp = r_edx;
    /* 0088213a: fld dword ptr [0x99ad44] */ FPUSH(R_F32((u32)(0x99ad44u)));
    /* 00882140: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00882142: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00882147: add ebp, dword ptr [esp + 0x34] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088214b: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0088214f: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882152: jle 0x882bed */ if ((fZ||fS!=fO)) goto L_00882bed;
L_00882158:; BB(0x00882158);
    /* 00882158: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0088215a: fchs  */ ST(0) = -ST(0);
    /* 0088215c: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 00882160: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 00882164: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00882166: fstp qword ptr [esp + 0x68] */ W_F64((u32)(r_esp+0x68u), ST(0)); FPOP();
L_0088216a:; BB(0x0088216a);
    /* 0088216a: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0088216d: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 00882171: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00882173: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00882177: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 0088217b: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088217d: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 00882181: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00882183: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00882185: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00882187: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00882189: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088218b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0088218d: fmul qword ptr [esp + 0x68] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x68u));
    /* 00882191: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00882193: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00882195: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00882197: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00882199: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 0088219d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088219e: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 008821a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008821a4: jle 0x882208 */ if ((fZ||fS!=fO)) goto L_00882208;
L_008821a6:; BB(0x008821a6);
    /* 008821a6: mov esi, dword ptr [ebx + 0x20] */ r_esi = R32((u32)(r_ebx+0x20u));
    /* 008821a9: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 008821ac: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 008821b0: lea esi, [esi + edi*4] */ r_esi = (u32)(r_esi+r_edi*4);
    /* 008821b3: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 008821b7: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 008821bb: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 008821bf: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 008821c3: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
L_008821c7:; BB(0x008821c7);
    /* 008821c7: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008821c8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008821c9: mov edi, dword ptr [ebx + 0x20] */ r_edi = R32((u32)(r_ebx+0x20u));
    /* 008821cc: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 008821d0: mov esi, ebp */ r_esi = r_ebp;
    /* 008821d2: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008821d3: fld dword ptr [edi + eax*4 - 4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4+0xfffffffcu)));
    /* 008821d7: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008821d9: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 008821dc: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 008821de: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008821e1: fstp dword ptr [eax + edx*4 - 4] */ W_F32((u32)(r_eax+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 008821e5: fld dword ptr [edi + esi*4] */ FPUSH(R_F32((u32)(r_edi+r_esi*4)));
    /* 008821e8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008821ea: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 008821ee: mov edi, esi */ r_edi = r_esi;
    /* 008821f0: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008821f1: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 008821f5: fstp dword ptr [eax + edi*4] */ W_F32((u32)(r_eax+r_edi*4), ST(0)); FPOP();
    /* 008821f8: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 008821fc: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008821fe: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00882202: jb 0x8821c7 */ if (fC) goto L_008821c7;
L_00882204:; BB(0x00882204);
    /* 00882204: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
L_00882208:; BB(0x00882208);
    /* 00882208: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0088220a: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0088220c: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0088220f: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00882213: mov ebp, 2 */ r_ebp = 0x2u;
    /* 00882218: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0088221c: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088221f: jle 0x882bfa */ if ((fZ||fS!=fO)) goto L_00882bfa;
L_00882225:; BB(0x00882225);
    /* 00882225: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00882227: fchs  */ ST(0) = -ST(0);
    /* 00882229: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 0088222d: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00882231: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 00882235: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00882237: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0088223b: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0088223d: fstp qword ptr [esp + 0x60] */ W_F64((u32)(r_esp+0x60u), ST(0)); FPOP();
L_00882241:; BB(0x00882241);
    /* 00882241: mov ebp, dword ptr [ebx + 0x14] */ r_ebp = R32((u32)(r_ebx+0x14u));
    /* 00882244: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 00882248: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088224a: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 0088224e: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00882250: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00882252: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00882254: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00882256: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00882258: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088225a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088225c: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0088225e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00882260: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 00882262: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00882264: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 00882266: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00882268: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 0088226c: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00882270: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00882272: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00882274: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00882278: mov ebp, eax */ r_ebp = r_eax;
    /* 0088227a: jle 0x882a5b */ if ((fZ||fS!=fO)) goto L_00882a5b;
L_00882280:; BB(0x00882280);
    /* 00882280: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00882284: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
L_00882288:; BB(0x00882288);
    /* 00882288: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00882289: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088228a: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0088228d: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 00882291: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 00882294: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00882295: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 00882299: fld dword ptr [eax + esi*4 - 4] */ FPUSH(R_F32((u32)(r_eax+r_esi*4+0xfffffffcu)));
    /* 0088229d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0088229f: fadd dword ptr [edx + edi*4 - 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_edi*4+0xfffffffcu));
    /* 008822a3: fstp dword ptr [edx + edi*4 - 4] */ W_F32((u32)(r_edx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 008822a7: mov edi, ebp */ r_edi = r_ebp;
    /* 008822a9: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008822aa: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 008822ae: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 008822b2: mov esi, ebp */ r_esi = r_ebp;
    /* 008822b4: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008822b5: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 008822b9: fld dword ptr [eax + edi*4] */ FPUSH(R_F32((u32)(r_eax+r_edi*4)));
    /* 008822bc: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 008822be: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 008822c1: fadd dword ptr [edx + esi*4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_esi*4));
    /* 008822c4: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008822c6: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 008822ca: fstp dword ptr [edx + esi*4] */ W_F32((u32)(r_edx+r_esi*4), ST(0)); FPOP();
    /* 008822cd: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 008822d1: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 008822d5: jl 0x882288 */ if ((fS!=fO)) goto L_00882288;
L_008822d7:; BB(0x008822d7);
    /* 008822d7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 008822d9: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 008822dd: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 008822e1: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008822e2: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 008822e6: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008822ea: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008822ec: jl 0x882241 */ if ((fS!=fO)) goto L_00882241;
L_008822f2:; BB(0x008822f2);
    /* 008822f2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 008822f4: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 008822f6: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 008822f8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008822fa: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 008822fe: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00882302: fld qword ptr [esp + 0x60] */ FPUSH(R_F64((u32)(r_esp+0x60u)));
    /* 00882306: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_00882308:; BB(0x00882308);
    /* 00882308: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0088230c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088230e: jl 0x88216a */ if ((fS!=fO)) goto L_0088216a;
L_00882314:; BB(0x00882314);
    /* 00882314: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00882316: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00882318: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088231a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088231c: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0088231f: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
L_00882322:; BB(0x00882322);
    /* 00882322: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00882324: mov esi, 1 */ r_esi = 0x1u;
    /* 00882329: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0088232d: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882330: jle 0x8823ec */ if ((fZ||fS!=fO)) goto L_008823ec;
L_00882336:; BB(0x00882336);
    /* 00882336: lea ebp, [edx - 5] */ r_ebp = (u32)(r_edx+0xfffffffbu);
    /* 00882339: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0088233d: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
L_00882341:; BB(0x00882341);
    /* 00882341: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00882343: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00882345: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00882347: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00882349: jle 0x882a4d */ if ((fZ||fS!=fO)) goto L_00882a4d;
L_0088234f:; BB(0x0088234f);
    /* 0088234f: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882352: jl 0x8823bc */ if ((fS!=fO)) goto L_008823bc;
L_00882354:; BB(0x00882354);
    /* 00882354: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 00882358: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 0088235c: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 0088235f: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
L_00882362:; BB(0x00882362);
    /* 00882362: movss xmm0, dword ptr [ecx + ebp*4] */ { u32 v = R32((u32)(r_ecx+r_ebp*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00882367: addss xmm0, dword ptr [edx + eax*4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_eax*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 0088236c: movss dword ptr [edx + eax*4], xmm0 */ W32((u32)(r_edx+r_eax*4), xmm[0].d[0]);
    /* 00882371: movss xmm1, dword ptr [ecx + ebp*4 + 4] */ { u32 v = R32((u32)(r_ecx+r_ebp*4+0x4u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00882377: addss xmm1, dword ptr [edx + eax*4 + 4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_eax*4+0x4u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; }
    /* 0088237d: movss dword ptr [edx + eax*4 + 4], xmm1 */ W32((u32)(r_edx+r_eax*4+0x4u), xmm[1].d[0]);
    /* 00882383: movss xmm2, dword ptr [ecx + ebp*4 + 8] */ { u32 v = R32((u32)(r_ecx+r_ebp*4+0x8u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 00882389: addss xmm2, dword ptr [edx + eax*4 + 8] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_eax*4+0x8u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; }
    /* 0088238f: movss dword ptr [edx + eax*4 + 8], xmm2 */ W32((u32)(r_edx+r_eax*4+0x8u), xmm[2].d[0]);
    /* 00882395: movss xmm3, dword ptr [ecx + ebp*4 + 0xc] */ { u32 v = R32((u32)(r_ecx+r_ebp*4+0xcu)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 0088239b: addss xmm3, dword ptr [edx + eax*4 + 0xc] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_eax*4+0xcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 008823a1: movss dword ptr [edx + eax*4 + 0xc], xmm3 */ W32((u32)(r_edx+r_eax*4+0xcu), xmm[3].d[0]);
    /* 008823a7: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008823aa: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008823ad: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008823af: jle 0x882362 */ if ((fZ||fS!=fO)) goto L_00882362;
L_008823b1:; BB(0x008823b1);
    /* 008823b1: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 008823b5: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 008823b9: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
L_008823bc:; BB(0x008823bc);
    /* 008823bc: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 008823c0: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 008823c3: mov edi, dword ptr [ebx + 0x20] */ r_edi = R32((u32)(r_ebx+0x20u));
L_008823c6:; BB(0x008823c6);
    /* 008823c6: movss xmm0, dword ptr [edi + ebp*4] */ { u32 v = R32((u32)(r_edi+r_ebp*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008823cb: addss xmm0, dword ptr [ecx + eax*4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_eax*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008823d0: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008823d1: movss dword ptr [ecx + eax*4], xmm0 */ W32((u32)(r_ecx+r_eax*4), xmm[0].d[0]);
    /* 008823d6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008823d7: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008823d9: jl 0x8823c6 */ if ((fS!=fO)) goto L_008823c6;
L_008823db:; BB(0x008823db);
    /* 008823db: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 008823df: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 008823e3: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008823e4: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008823e6: jl 0x882341 */ if ((fS!=fO)) goto L_00882341;
L_008823ec:; BB(0x008823ec);
    /* 008823ec: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008823f0: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008823f4: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008823f6: jge 0x8824e1 */ if ((fS==fO)) goto L_008824e1;
L_008823fc:; BB(0x008823fc);
    /* 008823fc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008823fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00882400: jle 0x88259d */ if ((fZ||fS!=fO)) goto L_0088259d;
L_00882406:; BB(0x00882406);
    /* 00882406: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0088240a: lea eax, [eax - 5] */ r_eax = (u32)(r_eax+0xfffffffbu);
    /* 0088240d: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00882411: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00882415: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
L_00882419:; BB(0x00882419);
    /* 00882419: mov eax, edx */ r_eax = r_edx;
    /* 0088241b: mov esi, edx */ r_esi = r_edx;
    /* 0088241d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0088241f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00882421: jle 0x882a21 */ if ((fZ||fS!=fO)) goto L_00882a21;
L_00882427:; BB(0x00882427);
    /* 00882427: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088242a: jl 0x8824a6 */ if ((fS!=fO)) goto L_008824a6;
L_0088242c:; BB(0x0088242c);
    /* 0088242c: mov dword ptr [esp + 0x48], ebp */ W32((u32)(r_esp+0x48u), r_ebp);
    /* 00882430: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
    /* 00882433: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 00882437: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
L_0088243b:; BB(0x0088243b);
    /* 0088243b: mov edx, dword ptr [ebp + eax*4] */ r_edx = R32((u32)(r_ebp+r_eax*4));
    /* 0088243f: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
    /* 00882442: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00882446: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0088244a: mov dword ptr [esi + edi*4], edx */ W32((u32)(r_esi+r_edi*4), r_edx);
    /* 0088244d: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00882451: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00882453: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00882455: mov ebp, dword ptr [ebp + eax*4] */ r_ebp = R32((u32)(r_ebp+r_eax*4));
    /* 00882459: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088245b: mov dword ptr [esi + edi*4], ebp */ W32((u32)(r_esi+r_edi*4), r_ebp);
    /* 0088245e: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00882460: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
    /* 00882463: mov ebp, dword ptr [ebp + eax*4] */ r_ebp = R32((u32)(r_ebp+r_eax*4));
    /* 00882467: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00882469: mov dword ptr [esi + edi*4], ebp */ W32((u32)(r_esi+r_edi*4), r_ebp);
    /* 0088246c: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088246e: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
    /* 00882471: mov ebp, dword ptr [ebp + eax*4] */ r_ebp = R32((u32)(r_ebp+r_eax*4));
    /* 00882475: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00882477: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 0088247b: mov dword ptr [esi + edi*4], ebp */ W32((u32)(r_esi+r_edi*4), r_ebp);
    /* 0088247e: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00882480: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00882483: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 00882487: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 0088248b: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088248d: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00882491: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
    /* 00882494: jle 0x88243b */ if ((fZ||fS!=fO)) goto L_0088243b;
L_00882496:; BB(0x00882496);
    /* 00882496: mov ebp, edx */ r_ebp = r_edx;
    /* 00882498: mov esi, edi */ r_esi = r_edi;
    /* 0088249a: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 0088249e: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 008824a2: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
L_008824a6:; BB(0x008824a6);
    /* 008824a6: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 008824aa: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 008824ad: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
L_008824b0:; BB(0x008824b0);
    /* 008824b0: mov edi, dword ptr [edx + eax*4] */ r_edi = R32((u32)(r_edx+r_eax*4));
    /* 008824b3: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008824b4: mov dword ptr [ecx + esi*4], edi */ W32((u32)(r_ecx+r_esi*4), r_edi);
    /* 008824b7: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 008824bb: add eax, dword ptr [esp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008824bf: add esi, dword ptr [esp + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008824c3: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008824c5: jl 0x8824b0 */ if ((fS!=fO)) goto L_008824b0;
L_008824c7:; BB(0x008824c7);
    /* 008824c7: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 008824cb: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 008824cf: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008824d3: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008824d4: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008824d6: jl 0x882419 */ if ((fS!=fO)) goto L_00882419;
L_008824dc:; BB(0x008824dc);
    /* 008824dc: jmp 0x88259d */ goto L_0088259d;
L_008824e1:; BB(0x008824e1);
    /* 008824e1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008824e3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008824e5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008824e7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008824eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008824ed: jle 0x88259d */ if ((fZ||fS!=fO)) goto L_0088259d;
L_008824f3:; BB(0x008824f3);
    /* 008824f3: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008824f7: lea eax, [eax - 5] */ r_eax = (u32)(r_eax+0xfffffffbu);
    /* 008824fa: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 008824fe: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00882502: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
L_00882506:; BB(0x00882506);
    /* 00882506: mov ecx, edi */ r_ecx = r_edi;
    /* 00882508: mov edx, esi */ r_edx = r_esi;
    /* 0088250a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088250c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088250e: jle 0x882582 */ if ((fZ||fS!=fO)) goto L_00882582;
L_00882510:; BB(0x00882510);
    /* 00882510: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882513: jl 0x88255f */ if ((fS!=fO)) goto L_0088255f;
L_00882515:; BB(0x00882515);
    /* 00882515: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 00882519: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
    /* 0088251c: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
    /* 0088251f: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
L_00882523:; BB(0x00882523);
    /* 00882523: mov edi, dword ptr [ebp + ecx*4] */ r_edi = R32((u32)(r_ebp+r_ecx*4));
    /* 00882527: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088252a: mov dword ptr [esi + edx*4], edi */ W32((u32)(r_esi+r_edx*4), r_edi);
    /* 0088252d: mov edi, dword ptr [ebp + ecx*4 + 4] */ r_edi = R32((u32)(r_ebp+r_ecx*4+0x4u));
    /* 00882531: mov dword ptr [esi + edx*4 + 4], edi */ W32((u32)(r_esi+r_edx*4+0x4u), r_edi);
    /* 00882535: mov edi, dword ptr [ebp + ecx*4 + 8] */ r_edi = R32((u32)(r_ebp+r_ecx*4+0x8u));
    /* 00882539: mov dword ptr [esi + edx*4 + 8], edi */ W32((u32)(r_esi+r_edx*4+0x8u), r_edi);
    /* 0088253d: mov edi, dword ptr [ebp + ecx*4 + 0xc] */ r_edi = R32((u32)(r_ebp+r_ecx*4+0xcu));
    /* 00882541: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00882544: mov dword ptr [esi + edx*4 + 0xc], edi */ W32((u32)(r_esi+r_edx*4+0xcu), r_edi);
    /* 00882548: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088254b: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0088254f: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882551: jle 0x882523 */ if ((fZ||fS!=fO)) goto L_00882523;
L_00882553:; BB(0x00882553);
    /* 00882553: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 00882557: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 0088255b: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_0088255f:; BB(0x0088255f);
    /* 0088255f: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 00882563: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
    /* 00882566: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
L_0088256a:; BB(0x0088256a);
    /* 0088256a: mov edi, dword ptr [ebx + 0x24] */ r_edi = R32((u32)(r_ebx+0x24u));
    /* 0088256d: mov edi, dword ptr [edi + ecx*4] */ r_edi = R32((u32)(r_edi+r_ecx*4));
    /* 00882570: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00882571: mov dword ptr [esi + edx*4], edi */ W32((u32)(r_esi+r_edx*4), r_edi);
    /* 00882574: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00882575: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00882576: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882578: jl 0x88256a */ if ((fS!=fO)) goto L_0088256a;
L_0088257a:; BB(0x0088257a);
    /* 0088257a: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 0088257e: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
L_00882582:; BB(0x00882582);
    /* 00882582: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00882584: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00882588: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00882589: add esi, dword ptr [esp + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088258d: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00882591: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882593: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 00882597: jl 0x882506 */ if ((fS!=fO)) goto L_00882506;
L_0088259d:; BB(0x0088259d);
    /* 0088259d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088259f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008825a3: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 008825a6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008825a8: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 008825ac: mov edx, 1 */ r_edx = 0x1u;
    /* 008825b1: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 008825b5: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008825b8: jle 0x8826ee */ if ((fZ||fS!=fO)) goto L_008826ee;
L_008825be:; BB(0x008825be);
    /* 008825be: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 008825c2: lea edi, [edi - 4] */ r_edi = (u32)(r_edi+0xfffffffcu);
    /* 008825c5: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 008825c9: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 008825cd: mov dword ptr [esp + 0x4c], ebp */ W32((u32)(r_esp+0x4cu), r_ebp);
    /* 008825d1: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 008825d5: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
L_008825d9:; BB(0x008825d9);
    /* 008825d9: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 008825dd: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 008825e1: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008825e3: add esi, dword ptr [esp + 0x3c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008825e7: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 008825eb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008825ed: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 008825f1: mov edx, ecx */ r_edx = r_ecx;
    /* 008825f3: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 008825f7: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 008825f9: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 008825fd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008825ff: jle 0x882a2f */ if ((fZ||fS!=fO)) goto L_00882a2f;
L_00882605:; BB(0x00882605);
    /* 00882605: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882608: jl 0x88269c */ if ((fS!=fO)) goto L_0088269c;
L_0088260e:; BB(0x0088260e);
    /* 0088260e: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 00882612: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
    /* 00882615: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 00882619: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
L_0088261d:; BB(0x0088261d);
    /* 0088261d: mov ecx, dword ptr [ebp + edx*4] */ r_ecx = R32((u32)(r_ebp+r_edx*4));
    /* 00882621: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
    /* 00882624: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00882628: mov dword ptr [esi + edi*4 - 4], ecx */ W32((u32)(r_esi+r_edi*4+0xfffffffcu), r_ecx);
    /* 0088262c: mov ecx, dword ptr [ebp + eax*4] */ r_ecx = R32((u32)(r_ebp+r_eax*4));
    /* 00882630: mov dword ptr [esi + edi*4], ecx */ W32((u32)(r_esi+r_edi*4), r_ecx);
    /* 00882633: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00882637: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00882639: add edi, dword ptr [esp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088263d: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088263f: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00882643: mov edx, dword ptr [ebp + edx*4] */ r_edx = R32((u32)(r_ebp+r_edx*4));
    /* 00882647: mov dword ptr [esi + edi*4 - 4], edx */ W32((u32)(r_esi+r_edi*4+0xfffffffcu), r_edx);
    /* 0088264b: mov edx, dword ptr [ebp + eax*4] */ r_edx = R32((u32)(r_ebp+r_eax*4));
    /* 0088264f: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00882651: mov dword ptr [esi + edi*4], edx */ W32((u32)(r_esi+r_edi*4), r_edx);
    /* 00882654: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00882658: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088265a: add edi, dword ptr [esp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088265e: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00882662: mov edx, dword ptr [ebp + edx*4] */ r_edx = R32((u32)(r_ebp+r_edx*4));
    /* 00882666: mov dword ptr [esi + edi*4 - 4], edx */ W32((u32)(r_esi+r_edi*4+0xfffffffcu), r_edx);
    /* 0088266a: mov edx, dword ptr [ebp + eax*4] */ r_edx = R32((u32)(r_ebp+r_eax*4));
    /* 0088266e: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00882670: mov dword ptr [esi + edi*4], edx */ W32((u32)(r_esi+r_edi*4), r_edx);
    /* 00882673: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00882677: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00882679: add edi, dword ptr [esp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088267d: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00882681: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00882684: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 00882688: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 0088268c: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088268e: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00882692: jle 0x88261d */ if ((fZ||fS!=fO)) goto L_0088261d;
L_00882694:; BB(0x00882694);
    /* 00882694: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00882696: mov esi, edi */ r_esi = r_edi;
    /* 00882698: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
L_0088269c:; BB(0x0088269c);
    /* 0088269c: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
L_008826a0:; BB(0x008826a0);
    /* 008826a0: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 008826a4: mov edi, dword ptr [ebx + 0x24] */ r_edi = R32((u32)(r_ebx+0x24u));
    /* 008826a7: mov ecx, dword ptr [edi + edx*4] */ r_ecx = R32((u32)(r_edi+r_edx*4));
    /* 008826aa: mov ebp, dword ptr [ebx + 0x18] */ r_ebp = R32((u32)(r_ebx+0x18u));
    /* 008826ad: mov dword ptr [ebp + esi*4 - 4], ecx */ W32((u32)(r_ebp+r_esi*4+0xfffffffcu), r_ecx);
    /* 008826b1: mov ecx, dword ptr [edi + eax*4] */ r_ecx = R32((u32)(r_edi+r_eax*4));
    /* 008826b4: mov dword ptr [ebp + esi*4], ecx */ W32((u32)(r_ebp+r_esi*4), r_ecx);
    /* 008826b8: add esi, dword ptr [esp + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008826bc: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008826c0: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008826c2: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008826c4: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 008826c8: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008826c9: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008826cd: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008826cf: jl 0x8826a0 */ if ((fS!=fO)) goto L_008826a0;
L_008826d1:; BB(0x008826d1);
    /* 008826d1: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 008826d5: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 008826d9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008826da: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 008826de: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008826e2: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008826e4: jl 0x8825d9 */ if ((fS!=fO)) goto L_008825d9;
L_008826ea:; BB(0x008826ea);
    /* 008826ea: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
L_008826ee:; BB(0x008826ee);
    /* 008826ee: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008826f2: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008826f5: je 0x8829a1 */ if (fZ) goto L_008829a1;
L_008826fb:; BB(0x008826fb);
    /* 008826fb: mov ebp, edx */ r_ebp = r_edx;
    /* 008826fd: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008826ff: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00882701: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00882703: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00882707: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 0088270b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00882710: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00882714: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882716: jge 0x882830 */ if ((fS==fO)) goto L_00882830;
L_0088271c:; BB(0x0088271c);
    /* 0088271c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00882720: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882723: jle 0x8829db */ if ((fZ||fS!=fO)) goto L_008829db;
L_00882729:; BB(0x00882729);
    /* 00882729: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0088272d: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00882731: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
L_00882735:; BB(0x00882735);
    /* 00882735: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00882739: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088273b: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088273d: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00882741: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00882743: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00882745: mov edi, 2 */ r_edi = 0x2u;
    /* 0088274a: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0088274e: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00882752: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882755: jle 0x8829e5 */ if ((fZ||fS!=fO)) goto L_008829e5;
L_0088275b:; BB(0x0088275b);
    /* 0088275b: lea edi, [edi + ebp] */ r_edi = (u32)(r_edi+r_ebp);
    /* 0088275e: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00882762: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00882766: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0088276a: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0088276e: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00882772: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00882776: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
L_0088277a:; BB(0x0088277a);
    /* 0088277a: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 0088277e: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00882780: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00882784: lea edx, [eax + ebp] */ r_edx = (u32)(r_eax+r_ebp);
    /* 00882787: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 0088278b: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0088278f: lea ebp, [ecx + eax] */ r_ebp = (u32)(r_ecx+r_eax);
    /* 00882792: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 00882796: lea ecx, [eax + edi] */ r_ecx = (u32)(r_eax+r_edi);
    /* 00882799: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088279b: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0088279f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008827a1: jle 0x8829ab */ if ((fZ||fS!=fO)) goto L_008829ab;
L_008827a7:; BB(0x008827a7);
    /* 008827a7: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 008827ab: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
L_008827af:; BB(0x008827af);
    /* 008827af: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 008827b3: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 008827b6: movss xmm0, dword ptr [edx + ebp*4 - 4] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0xfffffffcu)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008827bc: addss xmm0, dword ptr [edx + ecx*4 - 4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_ecx*4+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008827c2: mov edi, dword ptr [ebx + 0x18] */ r_edi = R32((u32)(r_ebx+0x18u));
    /* 008827c5: movss dword ptr [edi + eax*4 - 4], xmm0 */ W32((u32)(r_edi+r_eax*4+0xfffffffcu), xmm[0].d[0]);
    /* 008827cb: movss xmm2, dword ptr [edx + ebp*4 - 4] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0xfffffffcu)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008827d1: subss xmm2, dword ptr [edx + ecx*4 - 4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_ecx*4+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 008827d7: movss dword ptr [edi + esi*4 - 4], xmm2 */ W32((u32)(r_edi+r_esi*4+0xfffffffcu), xmm[2].d[0]);
    /* 008827dd: movss xmm3, dword ptr [edx + ebp*4] */ { u32 v = R32((u32)(r_edx+r_ebp*4)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008827e2: addss xmm3, dword ptr [edx + ecx*4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_ecx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 008827e7: movss dword ptr [edi + eax*4], xmm3 */ W32((u32)(r_edi+r_eax*4), xmm[3].d[0]);
    /* 008827ec: movss xmm4, dword ptr [edx + ecx*4] */ { u32 v = R32((u32)(r_edx+r_ecx*4)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 008827f1: subss xmm4, dword ptr [edx + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; }
    /* 008827f6: movss dword ptr [edi + esi*4], xmm4 */ W32((u32)(r_edi+r_esi*4), xmm[4].d[0]);
    /* 008827fb: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 008827ff: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00882801: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00882803: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00882807: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00882809: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088280b: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0088280f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00882810: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00882814: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882816: jl 0x8827af */ if ((fS!=fO)) goto L_008827af;
L_00882818:; BB(0x00882818);
    /* 00882818: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0088281c: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088281f: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00882823: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882825: jl 0x88277a */ if ((fS!=fO)) goto L_0088277a;
L_0088282b:; BB(0x0088282b);
    /* 0088282b: jmp 0x8829f4 */ goto L_008829f4;
L_00882830:; BB(0x00882830);
    /* 00882830: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00882834: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882837: jle 0x8829a1 */ if ((fZ||fS!=fO)) goto L_008829a1;
L_0088283d:; BB(0x0088283d);
    /* 0088283d: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00882841: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00882845: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
L_00882849:; BB(0x00882849);
    /* 00882849: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0088284d: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00882851: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00882853: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00882857: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00882859: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0088285d: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 00882861: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00882863: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00882867: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0088286b: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088286d: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00882871: mov ecx, esi */ r_ecx = r_esi;
    /* 00882873: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00882875: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 00882879: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0088287d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088287f: jle 0x882a0a */ if ((fZ||fS!=fO)) goto L_00882a0a;
L_00882885:; BB(0x00882885);
    /* 00882885: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
L_00882889:; BB(0x00882889);
    /* 00882889: mov edi, 2 */ r_edi = 0x2u;
    /* 0088288e: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00882892: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882895: jle 0x882963 */ if ((fZ||fS!=fO)) goto L_00882963;
L_0088289b:; BB(0x0088289b);
    /* 0088289b: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0088289f: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 008828a2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008828a4: mov dword ptr [esp + 0x70], edi */ W32((u32)(r_esp+0x70u), r_edi);
    /* 008828a8: mov edi, dword ptr [ebx + 0x18] */ r_edi = R32((u32)(r_ebx+0x18u));
    /* 008828ab: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008828ad: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 008828b1: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 008828b4: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008828b6: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 008828b9: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008828bb: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 008828bf: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 008828c2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008828c4: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008828c6: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008828ca: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 008828ce: lea esi, [ebp + ebp] */ r_esi = (u32)(r_ebp+r_ebp);
    /* 008828d2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008828d4: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008828d6: mov edi, dword ptr [esp + 0x70] */ r_edi = R32((u32)(r_esp+0x70u));
    /* 008828da: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 008828de: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 008828e2: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008828e6: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 008828ea: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
L_008828ee:; BB(0x008828ee);
    /* 008828ee: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008828f2: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008828f4: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
    /* 008828f8: movss xmm5, dword ptr [ebp + edi*4 - 4] */ { u32 v = R32((u32)(r_ebp+r_edi*4+0xfffffffcu)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008828fe: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 00882902: addss xmm5, dword ptr [ecx + edi*4 - 4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edi*4+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; }
    /* 00882908: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 0088290c: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00882910: movss dword ptr [edx + edi*4 - 4], xmm5 */ W32((u32)(r_edx+r_edi*4+0xfffffffcu), xmm[5].d[0]);
    /* 00882916: movss xmm6, dword ptr [ebp + edi*4 - 4] */ { u32 v = R32((u32)(r_ebp+r_edi*4+0xfffffffcu)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 0088291c: subss xmm6, dword ptr [ecx + edi*4 - 4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edi*4+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[6].fs[0] = xmm[6].fs[0] - s.fs[0]; }
    /* 00882922: movss dword ptr [esi + eax*4 - 4], xmm6 */ W32((u32)(r_esi+r_eax*4+0xfffffffcu), xmm[6].d[0]);
    /* 00882928: movss xmm7, dword ptr [ebp + edi*4] */ { u32 v = R32((u32)(r_ebp+r_edi*4)); xmm[7].d[0] = v; xmm[7].d[1] = 0; xmm[7].d[2] = 0; xmm[7].d[3] = 0; }
    /* 0088292e: addss xmm7, dword ptr [ecx + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[7].fs[0] = xmm[7].fs[0] + s.fs[0]; }
    /* 00882933: movss dword ptr [edx + edi*4], xmm7 */ W32((u32)(r_edx+r_edi*4), xmm[7].d[0]);
    /* 00882938: movss xmm1, dword ptr [ecx + edi*4] */ { u32 v = R32((u32)(r_ecx+r_edi*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0088293d: subss xmm1, dword ptr [ebp + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_ebp+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 00882943: movss dword ptr [esi + eax*4], xmm1 */ W32((u32)(r_esi+r_eax*4), xmm[1].d[0]);
    /* 00882948: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088294b: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0088294f: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882951: jl 0x8828ee */ if ((fS!=fO)) goto L_008828ee;
L_00882953:; BB(0x00882953);
    /* 00882953: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00882957: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0088295b: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0088295f: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
L_00882963:; BB(0x00882963);
    /* 00882963: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00882967: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00882969: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088296b: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0088296f: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00882971: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00882973: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00882977: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00882978: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0088297c: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 00882980: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882982: jl 0x882889 */ if ((fS!=fO)) goto L_00882889;
L_00882988:; BB(0x00882988);
    /* 00882988: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0088298c: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00882990: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00882991: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00882995: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00882999: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088299b: jl 0x882849 */ if ((fS!=fO)) goto L_00882849;
L_008829a1:; BB(0x008829a1);
    /* 008829a1: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008829a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008829a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008829a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008829a7: mov esp, ebx */ r_esp = r_ebx;
    /* 008829a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008829aa: ret  */ FN_RET(0x008818d8); r_esp += 4; return;
L_008829ab:; BB(0x008829ab);
    /* 008829ab: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008829ae: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008829b2: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008829b4: jl 0x88277a */ if ((fS!=fO)) goto L_0088277a;
L_008829ba:; BB(0x008829ba);
    /* 008829ba: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 008829be: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 008829c2: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 008829c6: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 008829ca: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
L_008829ce:; BB(0x008829ce);
    /* 008829ce: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008829cf: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 008829d3: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008829d5: jl 0x882735 */ if ((fS!=fO)) goto L_00882735;
L_008829db:; BB(0x008829db);
    /* 008829db: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008829de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008829df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008829e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008829e1: mov esp, ebx */ r_esp = r_ebx;
    /* 008829e3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008829e4: ret  */ FN_RET(0x008818d8); r_esp += 4; return;
L_008829e5:; BB(0x008829e5);
    /* 008829e5: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008829e6: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 008829ea: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008829ec: jl 0x882735 */ if ((fS!=fO)) goto L_00882735;
L_008829f2:; BB(0x008829f2);
    /* 008829f2: jmp 0x8829db */ goto L_008829db;
L_008829f4:; BB(0x008829f4);
    /* 008829f4: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 008829f8: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 008829fc: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00882a00: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00882a04: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00882a08: jmp 0x8829ce */ goto L_008829ce;
L_00882a0a:; BB(0x00882a0a);
    /* 00882a0a: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00882a0e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00882a0f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00882a13: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00882a17: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882a19: jl 0x882849 */ if ((fS!=fO)) goto L_00882849;
L_00882a1f:; BB(0x00882a1f);
    /* 00882a1f: jmp 0x8829a1 */ goto L_008829a1;
L_00882a21:; BB(0x00882a21);
    /* 00882a21: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00882a22: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882a24: jl 0x882419 */ if ((fS!=fO)) goto L_00882419;
L_00882a2a:; BB(0x00882a2a);
    /* 00882a2a: jmp 0x88259d */ goto L_0088259d;
L_00882a2f:; BB(0x00882a2f);
    /* 00882a2f: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00882a33: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00882a34: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00882a38: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00882a3c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882a3e: jl 0x8825d9 */ if ((fS!=fO)) goto L_008825d9;
L_00882a44:; BB(0x00882a44);
    /* 00882a44: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00882a48: jmp 0x8826ee */ goto L_008826ee;
L_00882a4d:; BB(0x00882a4d);
    /* 00882a4d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00882a4e: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882a50: jl 0x882341 */ if ((fS!=fO)) goto L_00882341;
L_00882a56:; BB(0x00882a56);
    /* 00882a56: jmp 0x8823ec */ goto L_008823ec;
L_00882a5b:; BB(0x00882a5b);
    /* 00882a5b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00882a5d: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00882a61: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00882a62: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00882a66: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00882a6a: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882a6c: jl 0x882241 */ if ((fS!=fO)) goto L_00882241;
L_00882a72:; BB(0x00882a72);
    /* 00882a72: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00882a74: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00882a76: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00882a78: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00882a7a: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00882a7e: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00882a82: fld qword ptr [esp + 0x60] */ FPUSH(R_F64((u32)(r_esp+0x60u)));
    /* 00882a86: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00882a88: jmp 0x882308 */ goto L_00882308;
L_00882a8d:; BB(0x00882a8d);
    /* 00882a8d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00882a8e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00882a92: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882a94: jl 0x8820b2 */ if ((fS!=fO)) goto L_008820b2;
L_00882a9a:; BB(0x00882a9a);
    /* 00882a9a: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00882a9d: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00882aa0: jmp 0x882130 */ goto L_00882130;
L_00882aa5:; BB(0x00882aa5);
    /* 00882aa5: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00882aa7: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 00882aaa: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00882aac: jb 0x882036 */ if (fC) goto L_00882036;
L_00882ab2:; BB(0x00882ab2);
    /* 00882ab2: jmp 0x881f84 */ goto L_00881f84;
L_00882ab7:; BB(0x00882ab7);
    /* 00882ab7: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00882aba: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00882abe: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882ac0: jl 0x881dc9 */ if ((fS!=fO)) goto L_00881dc9;
L_00882ac6:; BB(0x00882ac6);
    /* 00882ac6: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00882aca: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00882ace: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
L_00882ad2:; BB(0x00882ad2);
    /* 00882ad2: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00882ad3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00882ad7: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882ad9: jl 0x881d93 */ if ((fS!=fO)) goto L_00881d93;
L_00882adf:; BB(0x00882adf);
    /* 00882adf: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00882ae2: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00882ae5: jmp 0x881f5a */ goto L_00881f5a;
L_00882aea:; BB(0x00882aea);
    /* 00882aea: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00882aee: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00882af2: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00882af6: jmp 0x882ad2 */ goto L_00882ad2;
L_00882af8:; BB(0x00882af8);
    /* 00882af8: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00882af9: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00882afd: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882aff: jl 0x881e81 */ if ((fS!=fO)) goto L_00881e81;
L_00882b05:; BB(0x00882b05);
    /* 00882b05: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00882b08: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00882b0b: jmp 0x881f5a */ goto L_00881f5a;
L_00882b10:; BB(0x00882b10);
    /* 00882b10: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00882b11: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00882b15: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882b17: jl 0x881d93 */ if ((fS!=fO)) goto L_00881d93;
L_00882b1d:; BB(0x00882b1d);
    /* 00882b1d: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00882b20: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00882b23: jmp 0x881f5a */ goto L_00881f5a;
L_00882b28:; BB(0x00882b28);
    /* 00882b28: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00882b29: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00882b2d: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882b2f: jl 0x881bc8 */ if ((fS!=fO)) goto L_00881bc8;
L_00882b35:; BB(0x00882b35);
    /* 00882b35: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00882b39: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00882b3d: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
L_00882b41:; BB(0x00882b41);
    /* 00882b41: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00882b42: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00882b46: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882b48: jl 0x881b95 */ if ((fS!=fO)) goto L_00881b95;
L_00882b4e:; BB(0x00882b4e);
    /* 00882b4e: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00882b51: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00882b54: jmp 0x881d5a */ goto L_00881d5a;
L_00882b59:; BB(0x00882b59);
    /* 00882b59: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00882b5d: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00882b61: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00882b65: jmp 0x882b41 */ goto L_00882b41;
L_00882b67:; BB(0x00882b67);
    /* 00882b67: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00882b6a: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00882b6e: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882b70: jl 0x881c9b */ if ((fS!=fO)) goto L_00881c9b;
L_00882b76:; BB(0x00882b76);
    /* 00882b76: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00882b7a: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00882b7e: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00882b82: jmp 0x881d47 */ goto L_00881d47;
L_00882b87:; BB(0x00882b87);
    /* 00882b87: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00882b88: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00882b8c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882b8e: jl 0x881c6e */ if ((fS!=fO)) goto L_00881c6e;
L_00882b94:; BB(0x00882b94);
    /* 00882b94: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00882b97: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00882b9a: jmp 0x881d5a */ goto L_00881d5a;
L_00882b9f:; BB(0x00882b9f);
    /* 00882b9f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00882ba0: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00882ba4: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882ba6: jl 0x881b95 */ if ((fS!=fO)) goto L_00881b95;
L_00882bac:; BB(0x00882bac);
    /* 00882bac: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00882baf: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00882bb2: jmp 0x881d5a */ goto L_00881d5a;
L_00882bb7:; BB(0x00882bb7);
    /* 00882bb7: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00882bb8: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882bba: jl 0x881ab7 */ if ((fS!=fO)) goto L_00881ab7;
L_00882bc0:; BB(0x00882bc0);
    /* 00882bc0: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00882bc3: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00882bc6: jmp 0x881b5f */ goto L_00881b5f;
L_00882bcb:; BB(0x00882bcb);
    /* 00882bcb: add esi, dword ptr [ebx + 0x20] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x20u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00882bce: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00882bd0: jb 0x881a37 */ if (fC) goto L_00881a37;
L_00882bd6:; BB(0x00882bd6);
    /* 00882bd6: jmp 0x881985 */ goto L_00881985;
L_00882bdb:; BB(0x00882bdb);
    /* 00882bdb: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00882bdf: imul ecx, dword ptr [esp + 0x18] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_esp+0x18u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00882be4: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00882be8: jmp 0x881f5a */ goto L_00881f5a;
L_00882bed:; BB(0x00882bed);
    /* 00882bed: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00882bef: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00882bf1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00882bf3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00882bf5: jmp 0x882322 */ goto L_00882322;
L_00882bfa:; BB(0x00882bfa);
    /* 00882bfa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00882bfc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00882bfe: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00882c00: jmp 0x882308 */ goto L_00882308;
L_00882c08:; BB(0x00882c08);
    /* 00882c08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00882c09: mov ebx, esp */ r_ebx = r_esp;
    /* 00882c0b: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00882c0e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00882c0f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00882c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00882c11: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00882c14: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00882c18: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00882c1b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00882c1e: fdivr dword ptr [0xa2b2fc] */ ST(0) = R_F32((u32)(0xa2b2fcu)) / ST(0);
    /* 00882c24: fsincos  */ { long double v = ST(0); ST(0) = cosl(v); FPUSH(sinl(v)); }
    /* 00882c26: lea esi, [edx + 1] */ r_esi = (u32)(r_edx+0x1u);
    /* 00882c29: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00882c2b: lea ebp, [eax - 1] */ r_ebp = (u32)(r_eax+0xffffffffu);
    /* 00882c2e: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00882c30: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 00882c34: mov ebp, eax */ r_ebp = r_eax;
    /* 00882c36: imul ebp, ecx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ecx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00882c39: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00882c3d: mov ebp, edx */ r_ebp = r_edx;
    /* 00882c3f: imul ebp, eax */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_eax; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00882c42: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 00882c46: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00882c49: je 0x883b4f */ if (fZ) goto L_00883b4f;
L_00882c4f:; BB(0x00882c4f);
    /* 00882c4f: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00882c51: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 00882c54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00882c56: jle 0x882ccd */ if ((fZ||fS!=fO)) goto L_00882ccd;
L_00882c58:; BB(0x00882c58);
    /* 00882c58: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 00882c5b: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882c5e: jl 0x882ca9 */ if ((fS!=fO)) goto L_00882ca9;
L_00882c60:; BB(0x00882c60);
    /* 00882c60: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 00882c63: lea eax, [eax - 6] */ r_eax = (u32)(r_eax+0xfffffffau);
    /* 00882c66: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00882c6a: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00882c6e: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 00882c71: mov esi, dword ptr [ebx + 0x20] */ r_esi = R32((u32)(r_ebx+0x20u));
L_00882c74:; BB(0x00882c74);
    /* 00882c74: mov edi, dword ptr [esi + ebp*4] */ r_edi = R32((u32)(r_esi+r_ebp*4));
    /* 00882c77: mov dword ptr [ecx + ebp*4], edi */ W32((u32)(r_ecx+r_ebp*4), r_edi);
    /* 00882c7a: mov edi, dword ptr [esi + ebp*4 + 4] */ r_edi = R32((u32)(r_esi+r_ebp*4+0x4u));
    /* 00882c7e: mov dword ptr [ecx + ebp*4 + 4], edi */ W32((u32)(r_ecx+r_ebp*4+0x4u), r_edi);
    /* 00882c82: mov edi, dword ptr [esi + ebp*4 + 8] */ r_edi = R32((u32)(r_esi+r_ebp*4+0x8u));
    /* 00882c86: mov dword ptr [ecx + ebp*4 + 8], edi */ W32((u32)(r_ecx+r_ebp*4+0x8u), r_edi);
    /* 00882c8a: mov edi, dword ptr [esi + ebp*4 + 0xc] */ r_edi = R32((u32)(r_esi+r_ebp*4+0xcu));
    /* 00882c8e: mov dword ptr [ecx + ebp*4 + 0xc], edi */ W32((u32)(r_ecx+r_ebp*4+0xcu), r_edi);
    /* 00882c92: mov edi, dword ptr [esi + ebp*4 + 0x10] */ r_edi = R32((u32)(r_esi+r_ebp*4+0x10u));
    /* 00882c96: mov dword ptr [ecx + ebp*4 + 0x10], edi */ W32((u32)(r_ecx+r_ebp*4+0x10u), r_edi);
    /* 00882c9a: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00882c9d: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882c9f: jle 0x882c74 */ if ((fZ||fS!=fO)) goto L_00882c74;
L_00882ca1:; BB(0x00882ca1);
    /* 00882ca1: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00882ca5: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
L_00882ca9:; BB(0x00882ca9);
    /* 00882ca9: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00882cad: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00882cb1: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 00882cb4: mov esi, dword ptr [ebx + 0x20] */ r_esi = R32((u32)(r_ebx+0x20u));
    /* 00882cb7: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
L_00882cba:; BB(0x00882cba);
    /* 00882cba: mov eax, dword ptr [esi + ebp*4] */ r_eax = R32((u32)(r_esi+r_ebp*4));
    /* 00882cbd: mov dword ptr [ecx + ebp*4], eax */ W32((u32)(r_ecx+r_ebp*4), r_eax);
    /* 00882cc0: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00882cc1: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882cc3: jl 0x882cba */ if ((fS!=fO)) goto L_00882cba;
L_00882cc5:; BB(0x00882cc5);
    /* 00882cc5: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00882cc9: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
L_00882ccd:; BB(0x00882ccd);
    /* 00882ccd: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00882ccf: mov eax, 1 */ r_eax = 0x1u;
    /* 00882cd4: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882cd7: jle 0x882d95 */ if ((fZ||fS!=fO)) goto L_00882d95;
L_00882cdd:; BB(0x00882cdd);
    /* 00882cdd: lea edi, [ecx - 6] */ r_edi = (u32)(r_ecx+0xfffffffau);
    /* 00882ce0: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 00882ce4: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
L_00882ce8:; BB(0x00882ce8);
    /* 00882ce8: add ebp, dword ptr [esp + 0x18] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00882cec: mov edi, ebp */ r_edi = r_ebp;
    /* 00882cee: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00882cf0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00882cf1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00882cf3: jle 0x882d89 */ if ((fZ||fS!=fO)) goto L_00882d89;
L_00882cf9:; BB(0x00882cf9);
    /* 00882cf9: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882cfc: jl 0x882d5b */ if ((fS!=fO)) goto L_00882d5b;
L_00882cfe:; BB(0x00882cfe);
    /* 00882cfe: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00882d02: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00882d06: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 00882d0a: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00882d0e: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 00882d11: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00882d14: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
L_00882d18:; BB(0x00882d18);
    /* 00882d18: mov ebp, dword ptr [edx + edi*4] */ r_ebp = R32((u32)(r_edx+r_edi*4));
    /* 00882d1b: mov dword ptr [eax + edi*4], ebp */ W32((u32)(r_eax+r_edi*4), r_ebp);
    /* 00882d1e: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00882d20: mov ebp, dword ptr [edx + edi*4] */ r_ebp = R32((u32)(r_edx+r_edi*4));
    /* 00882d23: mov dword ptr [eax + edi*4], ebp */ W32((u32)(r_eax+r_edi*4), r_ebp);
    /* 00882d26: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00882d28: mov ebp, dword ptr [edx + edi*4] */ r_ebp = R32((u32)(r_edx+r_edi*4));
    /* 00882d2b: mov dword ptr [eax + edi*4], ebp */ W32((u32)(r_eax+r_edi*4), r_ebp);
    /* 00882d2e: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00882d30: mov ebp, dword ptr [edx + edi*4] */ r_ebp = R32((u32)(r_edx+r_edi*4));
    /* 00882d33: mov dword ptr [eax + edi*4], ebp */ W32((u32)(r_eax+r_edi*4), r_ebp);
    /* 00882d36: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00882d38: mov ebp, dword ptr [edx + edi*4] */ r_ebp = R32((u32)(r_edx+r_edi*4));
    /* 00882d3b: mov dword ptr [eax + edi*4], ebp */ W32((u32)(r_eax+r_edi*4), r_ebp);
    /* 00882d3e: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00882d40: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00882d43: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
    /* 00882d47: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882d49: jle 0x882d18 */ if ((fZ||fS!=fO)) goto L_00882d18;
L_00882d4b:; BB(0x00882d4b);
    /* 00882d4b: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00882d4f: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00882d53: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 00882d57: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
L_00882d5b:; BB(0x00882d5b);
    /* 00882d5b: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00882d5f: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00882d63: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 00882d67: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 00882d6a: mov ebp, dword ptr [ebx + 0x1c] */ r_ebp = R32((u32)(r_ebx+0x1cu));
L_00882d6d:; BB(0x00882d6d);
    /* 00882d6d: mov eax, dword ptr [ebp + edi*4] */ r_eax = R32((u32)(r_ebp+r_edi*4));
    /* 00882d71: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
    /* 00882d74: add edi, dword ptr [esp + 0xc] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00882d78: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00882d79: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882d7b: jl 0x882d6d */ if ((fS!=fO)) goto L_00882d6d;
L_00882d7d:; BB(0x00882d7d);
    /* 00882d7d: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00882d81: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00882d85: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
L_00882d89:; BB(0x00882d89);
    /* 00882d89: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882d8b: jl 0x882ce8 */ if ((fS!=fO)) goto L_00882ce8;
L_00882d91:; BB(0x00882d91);
    /* 00882d91: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
L_00882d95:; BB(0x00882d95);
    /* 00882d95: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00882d99: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00882d9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00882d9d: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00882da1: mov eax, 1 */ r_eax = 0x1u;
    /* 00882da6: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00882daa: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882dac: jle 0x882e98 */ if ((fZ||fS!=fO)) goto L_00882e98;
L_00882db2:; BB(0x00882db2);
    /* 00882db2: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882db5: jle 0x882f86 */ if ((fZ||fS!=fO)) goto L_00882f86;
L_00882dbb:; BB(0x00882dbb);
    /* 00882dbb: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00882dbf: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00882dc3: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00882dc7: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00882dcb: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
L_00882dcf:; BB(0x00882dcf);
    /* 00882dcf: add esi, dword ptr [esp + 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00882dd3: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00882dd5: mov edx, esi */ r_edx = r_esi;
    /* 00882dd7: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00882dd9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00882ddb: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00882ddf: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00882de0: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00882de4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00882de6: jle 0x882e7f */ if ((fZ||fS!=fO)) goto L_00882e7f;
L_00882dec:; BB(0x00882dec);
    /* 00882dec: lea edi, [ebp - 1] */ r_edi = (u32)(r_ebp+0xffffffffu);
    /* 00882def: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 00882df3: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00882df7: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00882dfb: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00882dff: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
L_00882e03:; BB(0x00882e03);
    /* 00882e03: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00882e07: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00882e09: mov ebp, edx */ r_ebp = r_edx;
    /* 00882e0b: mov eax, 2 */ r_eax = 0x2u;
    /* 00882e10: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00882e11: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882e14: jle 0x882e6b */ if ((fZ||fS!=fO)) goto L_00882e6b;
L_00882e16:; BB(0x00882e16);
    /* 00882e16: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00882e1a: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00882e1e: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 00882e21: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
L_00882e24:; BB(0x00882e24);
    /* 00882e24: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00882e27: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00882e2a: fld dword ptr [edx + esi*4 - 4] */ FPUSH(R_F32((u32)(r_edx+r_esi*4+0xfffffffcu)));
    /* 00882e2e: fmul dword ptr [ecx + ebp*4 - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+r_ebp*4+0xfffffffcu));
    /* 00882e32: fld dword ptr [edx + esi*4] */ FPUSH(R_F32((u32)(r_edx+r_esi*4)));
    /* 00882e35: fmul dword ptr [ecx + ebp*4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+r_ebp*4));
    /* 00882e38: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00882e3a: mov edi, dword ptr [ebx + 0x24] */ r_edi = R32((u32)(r_ebx+0x24u));
    /* 00882e3d: fstp dword ptr [edi + ebp*4 - 4] */ W_F32((u32)(r_edi+r_ebp*4+0xfffffffcu), ST(0)); FPOP();
    /* 00882e41: fld dword ptr [edx + esi*4 - 4] */ FPUSH(R_F32((u32)(r_edx+r_esi*4+0xfffffffcu)));
    /* 00882e45: fmul dword ptr [ecx + ebp*4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+r_ebp*4));
    /* 00882e48: fld dword ptr [edx + esi*4] */ FPUSH(R_F32((u32)(r_edx+r_esi*4)));
    /* 00882e4b: fmul dword ptr [ecx + ebp*4 - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+r_ebp*4+0xfffffffcu));
    /* 00882e4f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00882e51: fstp dword ptr [edi + ebp*4] */ W_F32((u32)(r_edi+r_ebp*4), ST(0)); FPOP();
    /* 00882e54: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00882e57: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00882e5b: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882e5d: jl 0x882e24 */ if ((fS!=fO)) goto L_00882e24;
L_00882e5f:; BB(0x00882e5f);
    /* 00882e5f: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00882e63: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00882e67: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
L_00882e6b:; BB(0x00882e6b);
    /* 00882e6b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00882e6f: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882e71: jl 0x882e03 */ if ((fS!=fO)) goto L_00882e03;
L_00882e73:; BB(0x00882e73);
    /* 00882e73: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00882e77: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00882e7b: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
L_00882e7f:; BB(0x00882e7f);
    /* 00882e7f: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00882e83: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882e85: jl 0x882dcf */ if ((fS!=fO)) goto L_00882dcf;
L_00882e8b:; BB(0x00882e8b);
    /* 00882e8b: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00882e8f: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00882e93: jmp 0x882f86 */ goto L_00882f86;
L_00882e98:; BB(0x00882e98);
    /* 00882e98: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882e9b: jle 0x882f86 */ if ((fZ||fS!=fO)) goto L_00882f86;
L_00882ea1:; BB(0x00882ea1);
    /* 00882ea1: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00882ea5: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00882ea9: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00882ead: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
L_00882eb1:; BB(0x00882eb1);
    /* 00882eb1: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00882eb5: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00882eb7: lea edx, [ebp - 1] */ r_edx = (u32)(r_ebp+0xffffffffu);
    /* 00882eba: add ecx, dword ptr [esp + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00882ebe: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00882ec2: mov esi, 2 */ r_esi = 0x2u;
    /* 00882ec7: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 00882ecb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00882ecc: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882ecf: jle 0x882f72 */ if ((fZ||fS!=fO)) goto L_00882f72;
L_00882ed5:; BB(0x00882ed5);
    /* 00882ed5: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00882ed9: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00882edd: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00882ee1: mov eax, esi */ r_eax = r_esi;
    /* 00882ee3: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
L_00882ee7:; BB(0x00882ee7);
    /* 00882ee7: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00882eea: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00882eed: mov esi, ecx */ r_esi = r_ecx;
    /* 00882eef: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00882ef1: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00882ef4: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00882ef8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00882efa: jle 0x882f5e */ if ((fZ||fS!=fO)) goto L_00882f5e;
L_00882efc:; BB(0x00882efc);
    /* 00882efc: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00882eff: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 00882f03: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00882f07: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00882f0b: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_00882f0e:; BB(0x00882f0e);
    /* 00882f0e: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 00882f12: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00882f16: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 00882f19: fld dword ptr [ecx + ebp*2 - 4] */ FPUSH(R_F32((u32)(r_ecx+r_ebp*2+0xfffffffcu)));
    /* 00882f1d: fmul dword ptr [eax + esi*4 - 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+r_esi*4+0xfffffffcu));
    /* 00882f21: fld dword ptr [ecx + edx*4] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4)));
    /* 00882f24: fmul dword ptr [eax + esi*4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+r_esi*4));
    /* 00882f27: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00882f29: mov edi, dword ptr [ebx + 0x24] */ r_edi = R32((u32)(r_ebx+0x24u));
    /* 00882f2c: fstp dword ptr [edi + esi*4 - 4] */ W_F32((u32)(r_edi+r_esi*4+0xfffffffcu), ST(0)); FPOP();
    /* 00882f30: fld dword ptr [ecx + ebp*2 - 4] */ FPUSH(R_F32((u32)(r_ecx+r_ebp*2+0xfffffffcu)));
    /* 00882f34: fmul dword ptr [eax + esi*4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+r_esi*4));
    /* 00882f37: fld dword ptr [ecx + edx*4] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4)));
    /* 00882f3a: fchs  */ ST(0) = -ST(0);
    /* 00882f3c: fmul dword ptr [eax + esi*4 - 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+r_esi*4+0xfffffffcu));
    /* 00882f40: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00882f42: fstp dword ptr [edi + esi*4] */ W_F32((u32)(r_edi+r_esi*4), ST(0)); FPOP();
    /* 00882f45: add esi, dword ptr [esp + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00882f49: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 00882f4d: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00882f4e: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00882f52: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882f54: jl 0x882f0e */ if ((fS!=fO)) goto L_00882f0e;
L_00882f56:; BB(0x00882f56);
    /* 00882f56: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00882f5a: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
L_00882f5e:; BB(0x00882f5e);
    /* 00882f5e: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00882f62: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882f64: jl 0x882ee7 */ if ((fS!=fO)) goto L_00882ee7;
L_00882f66:; BB(0x00882f66);
    /* 00882f66: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00882f6a: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00882f6e: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
L_00882f72:; BB(0x00882f72);
    /* 00882f72: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00882f76: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882f78: jl 0x882eb1 */ if ((fS!=fO)) goto L_00882eb1;
L_00882f7e:; BB(0x00882f7e);
    /* 00882f7e: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00882f82: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
L_00882f86:; BB(0x00882f86);
    /* 00882f86: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00882f88: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00882f8c: mov ebp, edx */ r_ebp = r_edx;
    /* 00882f8e: imul ebp, dword ptr [esp + 0x18] */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)R32((u32)(r_esp+0x18u)); r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00882f93: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 00882f97: mov eax, 1 */ r_eax = 0x1u;
    /* 00882f9c: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00882fa0: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882fa2: jge 0x8830a7 */ if ((fS==fO)) goto L_008830a7;
L_00882fa8:; BB(0x00882fa8);
    /* 00882fa8: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882fab: jle 0x883183 */ if ((fZ||fS!=fO)) goto L_00883183;
L_00882fb1:; BB(0x00882fb1);
    /* 00882fb1: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00882fb5: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00882fb9: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00882fbd: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
L_00882fc1:; BB(0x00882fc1);
    /* 00882fc1: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00882fc5: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00882fc7: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00882fc9: mov edx, ecx */ r_edx = r_ecx;
    /* 00882fcb: mov esi, ebp */ r_esi = r_ebp;
    /* 00882fcd: mov edi, 2 */ r_edi = 0x2u;
    /* 00882fd2: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 00882fd6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00882fd7: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00882fdb: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00882fde: jle 0x88308a */ if ((fZ||fS!=fO)) goto L_0088308a;
L_00882fe4:; BB(0x00882fe4);
    /* 00882fe4: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00882fe8: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00882fec: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00882ff0: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00882ff4: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
L_00882ff8:; BB(0x00882ff8);
    /* 00882ff8: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00882ffc: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00882fff: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 00883003: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00883006: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0088300a: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088300c: mov edx, esi */ r_edx = r_esi;
    /* 0088300e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00883010: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00883012: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00883015: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00883019: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088301b: jle 0x883072 */ if ((fZ||fS!=fO)) goto L_00883072;
L_0088301d:; BB(0x0088301d);
    /* 0088301d: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 00883021: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00883025: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
    /* 00883028: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
L_0088302b:; BB(0x0088302b);
    /* 0088302b: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0088302f: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00883031: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883033: fld dword ptr [ebp + ecx*4 - 4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu)));
    /* 00883037: fadd dword ptr [ebp + edx*4 - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx*4+0xfffffffcu));
    /* 0088303b: fstp dword ptr [esi + ecx*4 - 4] */ W_F32((u32)(r_esi+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 0088303f: fld dword ptr [ebp + ecx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4)));
    /* 00883043: fsub dword ptr [ebp + edx*4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+r_edx*4));
    /* 00883047: fstp dword ptr [esi + edx*4 - 4] */ W_F32((u32)(r_esi+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 0088304b: fld dword ptr [ebp + ecx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4)));
    /* 0088304f: fadd dword ptr [ebp + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx*4));
    /* 00883053: fstp dword ptr [esi + ecx*4] */ W_F32((u32)(r_esi+r_ecx*4), ST(0)); FPOP();
    /* 00883056: fld dword ptr [ebp + edx*4 - 4] */ FPUSH(R_F32((u32)(r_ebp+r_edx*4+0xfffffffcu)));
    /* 0088305a: fsub dword ptr [ebp + ecx*4 - 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu));
    /* 0088305e: fstp dword ptr [esi + edx*4] */ W_F32((u32)(r_esi+r_edx*4), ST(0)); FPOP();
    /* 00883061: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883062: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00883066: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883068: jl 0x88302b */ if ((fS!=fO)) goto L_0088302b;
L_0088306a:; BB(0x0088306a);
    /* 0088306a: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 0088306e: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_00883072:; BB(0x00883072);
    /* 00883072: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00883076: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883078: jl 0x882ff8 */ if ((fS!=fO)) goto L_00882ff8;
L_0088307e:; BB(0x0088307e);
    /* 0088307e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00883082: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00883086: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
L_0088308a:; BB(0x0088308a);
    /* 0088308a: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0088308e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883090: jl 0x882fc1 */ if ((fS!=fO)) goto L_00882fc1;
L_00883096:; BB(0x00883096);
    /* 00883096: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0088309a: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0088309e: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008830a2: jmp 0x883183 */ goto L_00883183;
L_008830a7:; BB(0x008830a7);
    /* 008830a7: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008830aa: jle 0x883183 */ if ((fZ||fS!=fO)) goto L_00883183;
L_008830b0:; BB(0x008830b0);
    /* 008830b0: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 008830b4: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 008830b8: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008830bc: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_008830c0:; BB(0x008830c0);
    /* 008830c0: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 008830c4: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008830c6: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008830c8: mov ecx, esi */ r_ecx = r_esi;
    /* 008830ca: mov edx, ebp */ r_edx = r_ebp;
    /* 008830cc: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008830ce: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 008830d2: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008830d3: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 008830d7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008830d9: jle 0x88316b */ if ((fZ||fS!=fO)) goto L_0088316b;
L_008830df:; BB(0x008830df);
    /* 008830df: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 008830e3: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 008830e7: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 008830eb: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
L_008830ef:; BB(0x008830ef);
    /* 008830ef: mov esi, ecx */ r_esi = r_ecx;
    /* 008830f1: mov ebp, edx */ r_ebp = r_edx;
    /* 008830f3: mov eax, 2 */ r_eax = 0x2u;
    /* 008830f8: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008830fb: jle 0x88314a */ if ((fZ||fS!=fO)) goto L_0088314a;
L_008830fd:; BB(0x008830fd);
    /* 008830fd: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00883101: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 00883105: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 00883108: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
L_0088310b:; BB(0x0088310b);
    /* 0088310b: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088310e: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00883111: fld dword ptr [edx + esi*4 - 4] */ FPUSH(R_F32((u32)(r_edx+r_esi*4+0xfffffffcu)));
    /* 00883115: fadd dword ptr [edx + ebp*4 - 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_ebp*4+0xfffffffcu));
    /* 00883119: fstp dword ptr [ecx + esi*4 - 4] */ W_F32((u32)(r_ecx+r_esi*4+0xfffffffcu), ST(0)); FPOP();
    /* 0088311d: fld dword ptr [edx + esi*4] */ FPUSH(R_F32((u32)(r_edx+r_esi*4)));
    /* 00883120: fsub dword ptr [edx + ebp*4] */ ST(0) = ST(0) - R_F32((u32)(r_edx+r_ebp*4));
    /* 00883123: fstp dword ptr [ecx + ebp*4 - 4] */ W_F32((u32)(r_ecx+r_ebp*4+0xfffffffcu), ST(0)); FPOP();
    /* 00883127: fld dword ptr [edx + esi*4] */ FPUSH(R_F32((u32)(r_edx+r_esi*4)));
    /* 0088312a: fadd dword ptr [edx + ebp*4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_ebp*4));
    /* 0088312d: fstp dword ptr [ecx + esi*4] */ W_F32((u32)(r_ecx+r_esi*4), ST(0)); FPOP();
    /* 00883130: fld dword ptr [edx + ebp*4 - 4] */ FPUSH(R_F32((u32)(r_edx+r_ebp*4+0xfffffffcu)));
    /* 00883134: fsub dword ptr [edx + esi*4 - 4] */ ST(0) = ST(0) - R_F32((u32)(r_edx+r_esi*4+0xfffffffcu));
    /* 00883138: fstp dword ptr [ecx + ebp*4] */ W_F32((u32)(r_ecx+r_ebp*4), ST(0)); FPOP();
    /* 0088313b: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088313e: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883140: jl 0x88310b */ if ((fS!=fO)) goto L_0088310b;
L_00883142:; BB(0x00883142);
    /* 00883142: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00883146: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
L_0088314a:; BB(0x0088314a);
    /* 0088314a: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088314c: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088314e: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00883152: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883153: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00883157: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0088315b: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088315d: jl 0x8830ef */ if ((fS!=fO)) goto L_008830ef;
L_0088315f:; BB(0x0088315f);
    /* 0088315f: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00883163: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00883167: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_0088316b:; BB(0x0088316b);
    /* 0088316b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0088316f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883171: jl 0x8830c0 */ if ((fS!=fO)) goto L_008830c0;
L_00883177:; BB(0x00883177);
    /* 00883177: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0088317b: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0088317f: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
L_00883183:; BB(0x00883183);
    /* 00883183: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00883185: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 00883188: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088318a: jle 0x883201 */ if ((fZ||fS!=fO)) goto L_00883201;
L_0088318c:; BB(0x0088318c);
    /* 0088318c: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0088318f: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883192: jl 0x8831dd */ if ((fS!=fO)) goto L_008831dd;
L_00883194:; BB(0x00883194);
    /* 00883194: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 00883197: lea eax, [eax - 6] */ r_eax = (u32)(r_eax+0xfffffffau);
    /* 0088319a: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0088319e: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008831a2: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 008831a5: mov esi, dword ptr [ebx + 0x20] */ r_esi = R32((u32)(r_ebx+0x20u));
L_008831a8:; BB(0x008831a8);
    /* 008831a8: mov edi, dword ptr [ecx + ebp*4] */ r_edi = R32((u32)(r_ecx+r_ebp*4));
    /* 008831ab: mov dword ptr [esi + ebp*4], edi */ W32((u32)(r_esi+r_ebp*4), r_edi);
    /* 008831ae: mov edi, dword ptr [ecx + ebp*4 + 4] */ r_edi = R32((u32)(r_ecx+r_ebp*4+0x4u));
    /* 008831b2: mov dword ptr [esi + ebp*4 + 4], edi */ W32((u32)(r_esi+r_ebp*4+0x4u), r_edi);
    /* 008831b6: mov edi, dword ptr [ecx + ebp*4 + 8] */ r_edi = R32((u32)(r_ecx+r_ebp*4+0x8u));
    /* 008831ba: mov dword ptr [esi + ebp*4 + 8], edi */ W32((u32)(r_esi+r_ebp*4+0x8u), r_edi);
    /* 008831be: mov edi, dword ptr [ecx + ebp*4 + 0xc] */ r_edi = R32((u32)(r_ecx+r_ebp*4+0xcu));
    /* 008831c2: mov dword ptr [esi + ebp*4 + 0xc], edi */ W32((u32)(r_esi+r_ebp*4+0xcu), r_edi);
    /* 008831c6: mov edi, dword ptr [ecx + ebp*4 + 0x10] */ r_edi = R32((u32)(r_ecx+r_ebp*4+0x10u));
    /* 008831ca: mov dword ptr [esi + ebp*4 + 0x10], edi */ W32((u32)(r_esi+r_ebp*4+0x10u), r_edi);
    /* 008831ce: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008831d1: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008831d3: jle 0x8831a8 */ if ((fZ||fS!=fO)) goto L_008831a8;
L_008831d5:; BB(0x008831d5);
    /* 008831d5: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 008831d9: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
L_008831dd:; BB(0x008831dd);
    /* 008831dd: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 008831e1: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008831e5: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 008831e8: mov esi, dword ptr [ebx + 0x20] */ r_esi = R32((u32)(r_ebx+0x20u));
    /* 008831eb: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
L_008831ee:; BB(0x008831ee);
    /* 008831ee: mov eax, dword ptr [ecx + ebp*4] */ r_eax = R32((u32)(r_ecx+r_ebp*4));
    /* 008831f1: mov dword ptr [esi + ebp*4], eax */ W32((u32)(r_esi+r_ebp*4), r_eax);
    /* 008831f4: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008831f5: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008831f7: jl 0x8831ee */ if ((fS!=fO)) goto L_008831ee;
L_008831f9:; BB(0x008831f9);
    /* 008831f9: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 008831fd: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
L_00883201:; BB(0x00883201);
    /* 00883201: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00883203: imul edx, dword ptr [ebx + 0x14] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebx+0x14u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00883207: mov edi, edx */ r_edi = r_edx;
    /* 00883209: mov eax, 1 */ r_eax = 0x1u;
    /* 0088320e: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883211: jle 0x883299 */ if ((fZ||fS!=fO)) goto L_00883299;
L_00883217:; BB(0x00883217);
    /* 00883217: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0088321b: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0088321f: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00883223: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
L_00883227:; BB(0x00883227);
    /* 00883227: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0088322b: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088322d: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00883231: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00883233: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00883237: mov esi, ebp */ r_esi = r_ebp;
    /* 00883239: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0088323d: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0088323f: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00883241: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00883243: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883244: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00883248: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088324a: jle 0x883287 */ if ((fZ||fS!=fO)) goto L_00883287;
L_0088324c:; BB(0x0088324c);
    /* 0088324c: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 00883250: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 00883254: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 00883257: mov ebp, dword ptr [ebx + 0x1c] */ r_ebp = R32((u32)(r_ebx+0x1cu));
L_0088325a:; BB(0x0088325a);
    /* 0088325a: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0088325e: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00883260: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00883262: fld dword ptr [eax + esi*4] */ FPUSH(R_F32((u32)(r_eax+r_esi*4)));
    /* 00883265: fadd dword ptr [eax + ecx*4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_ecx*4));
    /* 00883268: fstp dword ptr [ebp + esi*4] */ W_F32((u32)(r_ebp+r_esi*4), ST(0)); FPOP();
    /* 0088326c: fld dword ptr [eax + ecx*4] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4)));
    /* 0088326f: fsub dword ptr [eax + esi*4] */ ST(0) = ST(0) - R_F32((u32)(r_eax+r_esi*4));
    /* 00883272: fstp dword ptr [ebp + ecx*4] */ W_F32((u32)(r_ebp+r_ecx*4), ST(0)); FPOP();
    /* 00883276: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883277: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0088327b: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088327d: jl 0x88325a */ if ((fS!=fO)) goto L_0088325a;
L_0088327f:; BB(0x0088327f);
    /* 0088327f: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00883283: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
L_00883287:; BB(0x00883287);
    /* 00883287: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0088328b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088328d: jl 0x883227 */ if ((fS!=fO)) goto L_00883227;
L_0088328f:; BB(0x0088328f);
    /* 0088328f: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00883293: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00883297: mov ecx, edi */ r_ecx = r_edi;
L_00883299:; BB(0x00883299);
    /* 00883299: fld dword ptr [0x99ad40] */ FPUSH(R_F32((u32)(0x99ad40u)));
    /* 0088329f: fld dword ptr [0x99ad3c] */ FPUSH(R_F32((u32)(0x99ad3cu)));
    /* 008832a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008832a7: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 008832aa: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008832ac: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008832ae: mov ebp, 1 */ r_ebp = 0x1u;
    /* 008832b3: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008832b6: jle 0x883b5f */ if ((fZ||fS!=fO)) goto L_00883b5f;
L_008832bc:; BB(0x008832bc);
    /* 008832bc: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008832be: fchs  */ ST(0) = -ST(0);
    /* 008832c0: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 008832c4: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 008832c8: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 008832cc: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 008832d0: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008832d4: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008832d6: fstp qword ptr [esp + 0x68] */ W_F64((u32)(r_esp+0x68u), ST(0)); FPOP();
L_008832da:; BB(0x008832da);
    /* 008832da: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 008832dd: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 008832e1: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008832e3: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 008832e7: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 008832eb: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008832ed: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 008832f1: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 008832f3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008832f5: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 008832f7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008832f9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008832fb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008832fd: fmul qword ptr [esp + 0x68] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x68u));
    /* 00883301: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00883303: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00883305: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00883307: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00883309: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0088330d: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00883311: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00883312: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00883314: jle 0x883369 */ if ((fZ||fS!=fO)) goto L_00883369;
L_00883316:; BB(0x00883316);
    /* 00883316: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 00883319: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 0088331c: lea edi, [edx + edi*4] */ r_edi = (u32)(r_edx+r_edi*4);
    /* 0088331f: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00883323: mov dword ptr [esp + 0x4c], ebp */ W32((u32)(r_esp+0x4cu), r_ebp);
L_00883327:; BB(0x00883327);
    /* 00883327: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00883328: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883329: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0088332d: mov ebp, dword ptr [ebx + 0x20] */ r_ebp = R32((u32)(r_ebx+0x20u));
    /* 00883330: fld dword ptr [ebp + eax*4 - 4] */ FPUSH(R_F32((u32)(r_ebp+r_eax*4+0xfffffffcu)));
    /* 00883334: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00883336: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 00883338: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0088333b: fstp dword ptr [eax + esi*4 - 4] */ W_F32((u32)(r_eax+r_esi*4+0xfffffffcu), ST(0)); FPOP();
    /* 0088333f: mov edi, ecx */ r_edi = r_ecx;
    /* 00883341: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00883342: fld dword ptr [ebp + edi*4] */ FPUSH(R_F32((u32)(r_ebp+r_edi*4)));
    /* 00883346: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00883348: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0088334c: mov edi, ebp */ r_edi = r_ebp;
    /* 0088334e: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088334f: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 00883353: fstp dword ptr [eax + edi*4] */ W_F32((u32)(r_eax+r_edi*4), ST(0)); FPOP();
    /* 00883356: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883359: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0088335d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088335f: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00883363: jb 0x883327 */ if (fC) goto L_00883327;
L_00883365:; BB(0x00883365);
    /* 00883365: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
L_00883369:; BB(0x00883369);
    /* 00883369: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0088336b: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0088336d: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00883370: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00883374: mov eax, 2 */ r_eax = 0x2u;
    /* 00883379: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0088337d: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883380: jle 0x883b6c */ if ((fZ||fS!=fO)) goto L_00883b6c;
L_00883386:; BB(0x00883386);
    /* 00883386: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00883388: fchs  */ ST(0) = -ST(0);
    /* 0088338a: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 0088338e: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00883392: mov dword ptr [esp + 0x4c], ebp */ W32((u32)(r_esp+0x4cu), r_ebp);
    /* 00883396: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00883398: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0088339c: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0088339e: fstp qword ptr [esp + 0x60] */ W_F64((u32)(r_esp+0x60u), ST(0)); FPOP();
L_008833a2:; BB(0x008833a2);
    /* 008833a2: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 008833a5: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 008833a9: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008833ab: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 008833af: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 008833b3: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008833b5: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 008833b9: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008833bb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008833bd: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 008833bf: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 008833c1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008833c3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008833c5: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008833c7: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008833c9: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 008833cb: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008833cd: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 008833cf: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008833d1: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 008833d5: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 008833d9: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 008833dd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008833df: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008833e0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008833e2: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 008833e6: jle 0x883b77 */ if ((fZ||fS!=fO)) goto L_00883b77;
L_008833ec:; BB(0x008833ec);
    /* 008833ec: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 008833f0: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
L_008833f4:; BB(0x008833f4);
    /* 008833f4: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008833f5: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 008833f9: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008833fa: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 008833fe: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 00883401: fld dword ptr [eax + ecx*4 - 4] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0xfffffffcu)));
    /* 00883405: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00883407: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0088340a: fadd dword ptr [ecx + esi*4 - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_esi*4+0xfffffffcu));
    /* 0088340e: fstp dword ptr [ecx + esi*4 - 4] */ W_F32((u32)(r_ecx+r_esi*4+0xfffffffcu), ST(0)); FPOP();
    /* 00883412: mov esi, edi */ r_esi = r_edi;
    /* 00883414: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00883415: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00883419: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 0088341d: mov edi, ebp */ r_edi = r_ebp;
    /* 0088341f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00883420: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00883424: fld dword ptr [eax + esi*4] */ FPUSH(R_F32((u32)(r_eax+r_esi*4)));
    /* 00883427: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00883429: fadd dword ptr [ecx + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4));
    /* 0088342c: fstp dword ptr [ecx + edi*4] */ W_F32((u32)(r_ecx+r_edi*4), ST(0)); FPOP();
    /* 0088342f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883430: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 00883433: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883435: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00883439: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0088343d: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00883441: jl 0x8833f4 */ if ((fS!=fO)) goto L_008833f4;
L_00883443:; BB(0x00883443);
    /* 00883443: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00883445: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
L_00883449:; BB(0x00883449);
    /* 00883449: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0088344d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088344f: jl 0x8833a2 */ if ((fS!=fO)) goto L_008833a2;
L_00883455:; BB(0x00883455);
    /* 00883455: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00883457: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00883459: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0088345b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088345d: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
    /* 00883461: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00883465: fld qword ptr [esp + 0x60] */ FPUSH(R_F64((u32)(r_esp+0x60u)));
    /* 00883469: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_0088346b:; BB(0x0088346b);
    /* 0088346b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0088346f: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883471: jl 0x8832da */ if ((fS!=fO)) goto L_008832da;
L_00883477:; BB(0x00883477);
    /* 00883477: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00883479: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088347b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088347d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088347f: mov esi, eax */ r_esi = r_eax;
    /* 00883481: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
L_00883485:; BB(0x00883485);
    /* 00883485: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00883487: mov eax, 1 */ r_eax = 0x1u;
    /* 0088348c: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088348f: jle 0x88354c */ if ((fZ||fS!=fO)) goto L_0088354c;
L_00883495:; BB(0x00883495);
    /* 00883495: mov ebp, dword ptr [ebx + 0x14] */ r_ebp = R32((u32)(r_ebx+0x14u));
    /* 00883498: lea ebp, [ebp - 5] */ r_ebp = (u32)(r_ebp+0xfffffffbu);
    /* 0088349b: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 0088349f: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008834a3: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
L_008834a6:; BB(0x008834a6);
    /* 008834a6: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008834a8: mov edi, edx */ r_edi = r_edx;
    /* 008834aa: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 008834ac: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008834ad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008834af: jle 0x883540 */ if ((fZ||fS!=fO)) goto L_00883540;
L_008834b5:; BB(0x008834b5);
    /* 008834b5: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008834b8: jl 0x883514 */ if ((fS!=fO)) goto L_00883514;
L_008834ba:; BB(0x008834ba);
    /* 008834ba: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 008834be: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 008834c2: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 008834c6: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 008834c9: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 008834cc: jmp 0x8834d2 */ goto L_008834d2;
L_008834ce:; BB(0x008834ce);
    /* 008834ce: fstp dword ptr [edx + ebp*4 - 4] */ W_F32((u32)(r_edx+r_ebp*4+0xfffffffcu), ST(0)); FPOP();
L_008834d2:; BB(0x008834d2);
    /* 008834d2: fld dword ptr [ecx + edi*4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4)));
    /* 008834d5: fadd dword ptr [edx + ebp*4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_ebp*4));
    /* 008834d8: fstp dword ptr [edx + ebp*4] */ W_F32((u32)(r_edx+r_ebp*4), ST(0)); FPOP();
    /* 008834db: fld dword ptr [ecx + edi*4 + 4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4+0x4u)));
    /* 008834df: fadd dword ptr [edx + ebp*4 + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_ebp*4+0x4u));
    /* 008834e3: fstp dword ptr [edx + ebp*4 + 4] */ W_F32((u32)(r_edx+r_ebp*4+0x4u), ST(0)); FPOP();
    /* 008834e7: fld dword ptr [ecx + edi*4 + 8] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4+0x8u)));
    /* 008834eb: fadd dword ptr [edx + ebp*4 + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_ebp*4+0x8u));
    /* 008834ef: fstp dword ptr [edx + ebp*4 + 8] */ W_F32((u32)(r_edx+r_ebp*4+0x8u), ST(0)); FPOP();
    /* 008834f3: fld dword ptr [ecx + edi*4 + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4+0xcu)));
    /* 008834f7: fadd dword ptr [edx + ebp*4 + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_ebp*4+0xcu));
    /* 008834fb: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008834fe: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00883501: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883503: jle 0x8834ce */ if ((fZ||fS!=fO)) goto L_008834ce;
L_00883505:; BB(0x00883505);
    /* 00883505: fstp dword ptr [edx + ebp*4 - 4] */ W_F32((u32)(r_edx+r_ebp*4+0xfffffffcu), ST(0)); FPOP();
    /* 00883509: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 0088350d: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00883511: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
L_00883514:; BB(0x00883514);
    /* 00883514: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00883518: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0088351c: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 0088351f: mov esi, dword ptr [ebx + 0x20] */ r_esi = R32((u32)(r_ebx+0x20u));
    /* 00883522: jmp 0x883528 */ goto L_00883528;
L_00883524:; BB(0x00883524);
    /* 00883524: fstp dword ptr [edx + ebp*4 - 4] */ W_F32((u32)(r_edx+r_ebp*4+0xfffffffcu), ST(0)); FPOP();
L_00883528:; BB(0x00883528);
    /* 00883528: fld dword ptr [esi + edi*4] */ FPUSH(R_F32((u32)(r_esi+r_edi*4)));
    /* 0088352b: fadd dword ptr [edx + ebp*4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_ebp*4));
    /* 0088352e: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088352f: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00883530: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883532: jl 0x883524 */ if ((fS!=fO)) goto L_00883524;
L_00883534:; BB(0x00883534);
    /* 00883534: fstp dword ptr [edx + ebp*4 - 4] */ W_F32((u32)(r_edx+r_ebp*4+0xfffffffcu), ST(0)); FPOP();
    /* 00883538: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 0088353c: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
L_00883540:; BB(0x00883540);
    /* 00883540: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883542: jl 0x8834a6 */ if ((fS!=fO)) goto L_008834a6;
L_00883548:; BB(0x00883548);
    /* 00883548: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
L_0088354c:; BB(0x0088354c);
    /* 0088354c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00883550: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883552: jge 0x883643 */ if ((fS==fO)) goto L_00883643;
L_00883558:; BB(0x00883558);
    /* 00883558: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0088355a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088355c: jle 0x883710 */ if ((fZ||fS!=fO)) goto L_00883710;
L_00883562:; BB(0x00883562);
    /* 00883562: lea eax, [ecx - 5] */ r_eax = (u32)(r_ecx+0xfffffffbu);
    /* 00883565: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00883569: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0088356d: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_00883571:; BB(0x00883571);
    /* 00883571: mov eax, edi */ r_eax = r_edi;
    /* 00883573: mov ebp, edi */ r_ebp = r_edi;
    /* 00883575: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00883577: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00883579: jle 0x883631 */ if ((fZ||fS!=fO)) goto L_00883631;
L_0088357f:; BB(0x0088357f);
    /* 0088357f: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883582: jl 0x883600 */ if ((fS!=fO)) goto L_00883600;
L_00883584:; BB(0x00883584);
    /* 00883584: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00883588: mov dword ptr [esp + 0x4c], ebp */ W32((u32)(r_esp+0x4cu), r_ebp);
    /* 0088358c: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 00883590: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00883594: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
L_00883597:; BB(0x00883597);
    /* 00883597: mov edx, dword ptr [ebp + eax*4] */ r_edx = R32((u32)(r_ebp+r_eax*4));
    /* 0088359b: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
    /* 0088359e: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 008835a2: mov dword ptr [esi + edi*4], edx */ W32((u32)(r_esi+r_edi*4), r_edx);
    /* 008835a5: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008835a9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008835ab: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 008835af: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008835b1: mov ebp, dword ptr [ebp + eax*4] */ r_ebp = R32((u32)(r_ebp+r_eax*4));
    /* 008835b5: mov dword ptr [esi + edi*4], ebp */ W32((u32)(r_esi+r_edi*4), r_ebp);
    /* 008835b8: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008835ba: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008835bc: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
    /* 008835bf: mov ebp, dword ptr [ebp + eax*4] */ r_ebp = R32((u32)(r_ebp+r_eax*4));
    /* 008835c3: mov dword ptr [esi + edi*4], ebp */ W32((u32)(r_esi+r_edi*4), r_ebp);
    /* 008835c6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008835c8: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008835ca: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
    /* 008835cd: mov ebp, dword ptr [ebp + eax*4] */ r_ebp = R32((u32)(r_ebp+r_eax*4));
    /* 008835d1: mov dword ptr [esi + edi*4], ebp */ W32((u32)(r_esi+r_edi*4), r_ebp);
    /* 008835d4: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008835d6: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008835d8: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 008835dc: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 008835e0: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008835e3: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 008835e7: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 008835eb: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008835ed: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
    /* 008835f0: jle 0x883597 */ if ((fZ||fS!=fO)) goto L_00883597;
L_008835f2:; BB(0x008835f2);
    /* 008835f2: mov ebp, edi */ r_ebp = r_edi;
    /* 008835f4: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 008835f8: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008835fc: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
L_00883600:; BB(0x00883600);
    /* 00883600: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 00883604: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00883608: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0088360b: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
L_0088360e:; BB(0x0088360e);
    /* 0088360e: mov edi, dword ptr [ecx + eax*4] */ r_edi = R32((u32)(r_ecx+r_eax*4));
    /* 00883611: mov dword ptr [esi + ebp*4], edi */ W32((u32)(r_esi+r_ebp*4), r_edi);
    /* 00883614: add eax, dword ptr [esp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883618: add ebp, dword ptr [esp + 0x1c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088361c: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088361d: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00883621: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883623: jl 0x88360e */ if ((fS!=fO)) goto L_0088360e;
L_00883625:; BB(0x00883625);
    /* 00883625: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00883629: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0088362d: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
L_00883631:; BB(0x00883631);
    /* 00883631: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00883632: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883634: jl 0x883571 */ if ((fS!=fO)) goto L_00883571;
L_0088363a:; BB(0x0088363a);
    /* 0088363a: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0088363e: jmp 0x883710 */ goto L_00883710;
L_00883643:; BB(0x00883643);
    /* 00883643: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00883645: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00883647: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00883649: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088364b: jle 0x883710 */ if ((fZ||fS!=fO)) goto L_00883710;
L_00883651:; BB(0x00883651);
    /* 00883651: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00883655: lea edi, [edi - 6] */ r_edi = (u32)(r_edi+0xfffffffau);
    /* 00883658: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 0088365c: mov dword ptr [esp + 0x4c], ebp */ W32((u32)(r_esp+0x4cu), r_ebp);
    /* 00883660: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00883664: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00883668: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
L_0088366c:; BB(0x0088366c);
    /* 0088366c: mov esi, edx */ r_esi = r_edx;
    /* 0088366e: mov ebp, eax */ r_ebp = r_eax;
    /* 00883670: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00883672: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00883674: jle 0x8836ef */ if ((fZ||fS!=fO)) goto L_008836ef;
L_00883676:; BB(0x00883676);
    /* 00883676: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883679: jl 0x8836cc */ if ((fS!=fO)) goto L_008836cc;
L_0088367b:; BB(0x0088367b);
    /* 0088367b: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 0088367f: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00883683: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 00883686: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
L_00883689:; BB(0x00883689);
    /* 00883689: mov edi, dword ptr [eax + esi*4] */ r_edi = R32((u32)(r_eax+r_esi*4));
    /* 0088368c: mov dword ptr [edx + ebp*4], edi */ W32((u32)(r_edx+r_ebp*4), r_edi);
    /* 0088368f: mov edi, dword ptr [eax + esi*4 + 4] */ r_edi = R32((u32)(r_eax+r_esi*4+0x4u));
    /* 00883693: mov dword ptr [edx + ebp*4 + 4], edi */ W32((u32)(r_edx+r_ebp*4+0x4u), r_edi);
    /* 00883697: mov edi, dword ptr [eax + esi*4 + 8] */ r_edi = R32((u32)(r_eax+r_esi*4+0x8u));
    /* 0088369b: mov dword ptr [edx + ebp*4 + 8], edi */ W32((u32)(r_edx+r_ebp*4+0x8u), r_edi);
    /* 0088369f: mov edi, dword ptr [eax + esi*4 + 0xc] */ r_edi = R32((u32)(r_eax+r_esi*4+0xcu));
    /* 008836a3: mov dword ptr [edx + ebp*4 + 0xc], edi */ W32((u32)(r_edx+r_ebp*4+0xcu), r_edi);
    /* 008836a7: mov edi, dword ptr [eax + esi*4 + 0x10] */ r_edi = R32((u32)(r_eax+r_esi*4+0x10u));
    /* 008836ab: mov dword ptr [edx + ebp*4 + 0x10], edi */ W32((u32)(r_edx+r_ebp*4+0x10u), r_edi);
    /* 008836af: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008836b2: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008836b5: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008836b8: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 008836bc: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008836be: jle 0x883689 */ if ((fZ||fS!=fO)) goto L_00883689;
L_008836c0:; BB(0x008836c0);
    /* 008836c0: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 008836c4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 008836c8: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
L_008836cc:; BB(0x008836cc);
    /* 008836cc: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 008836d0: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 008836d4: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
L_008836d7:; BB(0x008836d7);
    /* 008836d7: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 008836da: mov edx, dword ptr [edx + esi*4] */ r_edx = R32((u32)(r_edx+r_esi*4));
    /* 008836dd: mov dword ptr [eax + ebp*4], edx */ W32((u32)(r_eax+r_ebp*4), r_edx);
    /* 008836e0: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008836e1: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008836e2: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008836e3: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008836e5: jl 0x8836d7 */ if ((fS!=fO)) goto L_008836d7;
L_008836e7:; BB(0x008836e7);
    /* 008836e7: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 008836eb: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
L_008836ef:; BB(0x008836ef);
    /* 008836ef: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008836f1: add eax, dword ptr [esp + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008836f5: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 008836f9: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008836fa: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 008836fe: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00883702: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883704: jl 0x88366c */ if ((fS!=fO)) goto L_0088366c;
L_0088370a:; BB(0x0088370a);
    /* 0088370a: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0088370e: mov ecx, ebp */ r_ecx = r_ebp;
L_00883710:; BB(0x00883710);
    /* 00883710: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00883712: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00883716: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0088371a: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 0088371d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088371f: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00883723: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00883728: mov dword ptr [esp + 0x4c], ebp */ W32((u32)(r_esp+0x4cu), r_ebp);
    /* 0088372c: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088372f: jle 0x88386d */ if ((fZ||fS!=fO)) goto L_0088386d;
L_00883735:; BB(0x00883735);
    /* 00883735: lea ebp, [ecx - 4] */ r_ebp = (u32)(r_ecx+0xfffffffcu);
    /* 00883738: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 0088373c: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00883740: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00883744: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 00883748: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0088374c: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00883750: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
L_00883754:; BB(0x00883754);
    /* 00883754: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00883758: add ecx, dword ptr [esp + 0x38] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088375c: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00883760: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00883764: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 00883768: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088376a: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0088376e: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00883772: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00883774: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00883778: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0088377a: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088377b: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0088377f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00883781: jle 0x883857 */ if ((fZ||fS!=fO)) goto L_00883857;
L_00883787:; BB(0x00883787);
    /* 00883787: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088378a: jl 0x88381e */ if ((fS!=fO)) goto L_0088381e;
L_00883790:; BB(0x00883790);
    /* 00883790: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 00883794: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 00883798: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 0088379c: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
L_0088379f:; BB(0x0088379f);
    /* 0088379f: mov ecx, dword ptr [ebp + edx*4] */ r_ecx = R32((u32)(r_ebp+r_edx*4));
    /* 008837a3: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
    /* 008837a6: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 008837aa: mov dword ptr [esi + edi*4 - 4], ecx */ W32((u32)(r_esi+r_edi*4+0xfffffffcu), r_ecx);
    /* 008837ae: mov ecx, dword ptr [ebp + eax*4] */ r_ecx = R32((u32)(r_ebp+r_eax*4));
    /* 008837b2: mov dword ptr [esi + edi*4], ecx */ W32((u32)(r_esi+r_edi*4), r_ecx);
    /* 008837b5: add edi, dword ptr [esp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008837b9: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008837bd: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008837bf: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 008837c3: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008837c5: mov edx, dword ptr [ebp + edx*4] */ r_edx = R32((u32)(r_ebp+r_edx*4));
    /* 008837c9: mov dword ptr [esi + edi*4 - 4], edx */ W32((u32)(r_esi+r_edi*4+0xfffffffcu), r_edx);
    /* 008837cd: mov edx, dword ptr [ebp + eax*4] */ r_edx = R32((u32)(r_ebp+r_eax*4));
    /* 008837d1: mov dword ptr [esi + edi*4], edx */ W32((u32)(r_esi+r_edi*4), r_edx);
    /* 008837d4: add edi, dword ptr [esp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008837d8: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 008837dc: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008837de: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 008837e2: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008837e4: mov edx, dword ptr [ebp + edx*4] */ r_edx = R32((u32)(r_ebp+r_edx*4));
    /* 008837e8: mov dword ptr [esi + edi*4 - 4], edx */ W32((u32)(r_esi+r_edi*4+0xfffffffcu), r_edx);
    /* 008837ec: mov edx, dword ptr [ebp + eax*4] */ r_edx = R32((u32)(r_ebp+r_eax*4));
    /* 008837f0: mov dword ptr [esi + edi*4], edx */ W32((u32)(r_esi+r_edi*4), r_edx);
    /* 008837f3: add edi, dword ptr [esp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008837f7: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 008837fb: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 008837ff: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883801: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883803: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 00883807: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088380a: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 0088380e: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 00883812: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883814: jle 0x88379f */ if ((fZ||fS!=fO)) goto L_0088379f;
L_00883816:; BB(0x00883816);
    /* 00883816: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00883818: mov ecx, edi */ r_ecx = r_edi;
    /* 0088381a: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
L_0088381e:; BB(0x0088381e);
    /* 0088381e: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
L_00883822:; BB(0x00883822);
    /* 00883822: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 00883826: mov edi, dword ptr [ebx + 0x24] */ r_edi = R32((u32)(r_ebx+0x24u));
    /* 00883829: mov esi, dword ptr [edi + edx*4] */ r_esi = R32((u32)(r_edi+r_edx*4));
    /* 0088382c: mov ebp, dword ptr [ebx + 0x18] */ r_ebp = R32((u32)(r_ebx+0x18u));
    /* 0088382f: mov dword ptr [ebp + ecx*4 - 4], esi */ W32((u32)(r_ebp+r_ecx*4+0xfffffffcu), r_esi);
    /* 00883833: mov esi, dword ptr [edi + eax*4] */ r_esi = R32((u32)(r_edi+r_eax*4));
    /* 00883836: mov dword ptr [ebp + ecx*4], esi */ W32((u32)(r_ebp+r_ecx*4), r_esi);
    /* 0088383a: add ecx, dword ptr [esp + 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088383e: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00883842: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883844: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883846: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0088384a: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088384b: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0088384f: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883851: jl 0x883822 */ if ((fS!=fO)) goto L_00883822;
L_00883853:; BB(0x00883853);
    /* 00883853: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
L_00883857:; BB(0x00883857);
    /* 00883857: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0088385b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088385d: jl 0x883754 */ if ((fS!=fO)) goto L_00883754;
L_00883863:; BB(0x00883863);
    /* 00883863: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 00883867: mov esi, eax */ r_esi = r_eax;
    /* 00883869: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
L_0088386d:; BB(0x0088386d);
    /* 0088386d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00883871: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00883874: je 0x883b45 */ if (fZ) goto L_00883b45;
L_0088387a:; BB(0x0088387a);
    /* 0088387a: mov ebp, eax */ r_ebp = r_eax;
    /* 0088387c: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088387e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00883880: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00883884: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883886: jge 0x8839b9 */ if ((fS==fO)) goto L_008839b9;
L_0088388c:; BB(0x0088388c);
    /* 0088388c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088388e: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00883892: mov eax, 1 */ r_eax = 0x1u;
    /* 00883897: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088389a: jle 0x8839af */ if ((fZ||fS!=fO)) goto L_008839af;
L_008838a0:; BB(0x008838a0);
    /* 008838a0: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 008838a4: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 008838a8: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008838ac: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 008838b0: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
L_008838b4:; BB(0x008838b4);
    /* 008838b4: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 008838b8: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008838ba: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008838bc: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 008838c0: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008838c2: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008838c4: mov edi, 2 */ r_edi = 0x2u;
    /* 008838c9: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 008838cd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008838ce: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 008838d2: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008838d5: jle 0x8839a3 */ if ((fZ||fS!=fO)) goto L_008839a3;
L_008838db:; BB(0x008838db);
    /* 008838db: lea edi, [edi + ebp] */ r_edi = (u32)(r_edi+r_ebp);
    /* 008838de: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 008838e2: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 008838e6: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 008838ea: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 008838ee: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 008838f2: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 008838f6: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
L_008838fa:; BB(0x008838fa);
    /* 008838fa: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 008838fe: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00883900: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00883904: lea edx, [eax + ebp] */ r_edx = (u32)(r_eax+r_ebp);
    /* 00883907: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0088390b: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0088390f: lea ebp, [ecx + eax] */ r_ebp = (u32)(r_ecx+r_eax);
    /* 00883912: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00883916: lea ecx, [eax + edi] */ r_ecx = (u32)(r_eax+r_edi);
    /* 00883919: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088391b: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0088391f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00883921: jle 0x883980 */ if ((fZ||fS!=fO)) goto L_00883980;
L_00883923:; BB(0x00883923);
    /* 00883923: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00883927: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
L_0088392b:; BB(0x0088392b);
    /* 0088392b: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0088392f: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 00883932: fld dword ptr [edx + ebp*4 - 4] */ FPUSH(R_F32((u32)(r_edx+r_ebp*4+0xfffffffcu)));
    /* 00883936: fadd dword ptr [edx + ecx*4 - 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_ecx*4+0xfffffffcu));
    /* 0088393a: mov edi, dword ptr [ebx + 0x18] */ r_edi = R32((u32)(r_ebx+0x18u));
    /* 0088393d: fstp dword ptr [edi + eax*4 - 4] */ W_F32((u32)(r_edi+r_eax*4+0xfffffffcu), ST(0)); FPOP();
    /* 00883941: fld dword ptr [edx + ebp*4 - 4] */ FPUSH(R_F32((u32)(r_edx+r_ebp*4+0xfffffffcu)));
    /* 00883945: fsub dword ptr [edx + ecx*4 - 4] */ ST(0) = ST(0) - R_F32((u32)(r_edx+r_ecx*4+0xfffffffcu));
    /* 00883949: fstp dword ptr [edi + esi*4 - 4] */ W_F32((u32)(r_edi+r_esi*4+0xfffffffcu), ST(0)); FPOP();
    /* 0088394d: fld dword ptr [edx + ebp*4] */ FPUSH(R_F32((u32)(r_edx+r_ebp*4)));
    /* 00883950: fadd dword ptr [edx + ecx*4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_ecx*4));
    /* 00883953: fstp dword ptr [edi + eax*4] */ W_F32((u32)(r_edi+r_eax*4), ST(0)); FPOP();
    /* 00883956: fld dword ptr [edx + ecx*4] */ FPUSH(R_F32((u32)(r_edx+r_ecx*4)));
    /* 00883959: fsub dword ptr [edx + ebp*4] */ ST(0) = ST(0) - R_F32((u32)(r_edx+r_ebp*4));
    /* 0088395c: fstp dword ptr [edi + esi*4] */ W_F32((u32)(r_edi+r_esi*4), ST(0)); FPOP();
    /* 0088395f: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00883963: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00883965: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883967: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0088396b: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088396d: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088396f: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 00883973: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883974: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00883978: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088397a: jl 0x88392b */ if ((fS!=fO)) goto L_0088392b;
L_0088397c:; BB(0x0088397c);
    /* 0088397c: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
L_00883980:; BB(0x00883980);
    /* 00883980: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883983: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00883987: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883989: jl 0x8838fa */ if ((fS!=fO)) goto L_008838fa;
L_0088398f:; BB(0x0088398f);
    /* 0088398f: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00883993: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00883997: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0088399b: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 0088399f: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
L_008839a3:; BB(0x008839a3);
    /* 008839a3: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 008839a7: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008839a9: jl 0x8838b4 */ if ((fS!=fO)) goto L_008838b4;
L_008839af:; BB(0x008839af);
    /* 008839af: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008839b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008839b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008839b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008839b5: mov esp, ebx */ r_esp = r_ebx;
    /* 008839b7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008839b8: ret  */ FN_RET(0x008818d8); r_esp += 4; return;
L_008839b9:; BB(0x008839b9);
    /* 008839b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008839bb: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 008839bf: mov eax, 1 */ r_eax = 0x1u;
    /* 008839c4: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 008839c8: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008839cb: jle 0x883b45 */ if ((fZ||fS!=fO)) goto L_00883b45;
L_008839d1:; BB(0x008839d1);
    /* 008839d1: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 008839d5: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 008839d9: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008839dd: mov ecx, eax */ r_ecx = r_eax;
    /* 008839df: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 008839e3: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
L_008839e7:; BB(0x008839e7);
    /* 008839e7: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 008839eb: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008839ed: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008839ef: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 008839f3: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008839f5: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008839f7: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 008839fb: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 008839ff: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00883a03: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00883a07: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00883a09: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 00883a0d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00883a0e: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00883a12: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00883a14: jle 0x883b39 */ if ((fZ||fS!=fO)) goto L_00883b39;
L_00883a1a:; BB(0x00883a1a);
    /* 00883a1a: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00883a1e: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 00883a22: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00883a26: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 00883a2a: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00883a2e: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 00883a32: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00883a36: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00883a3a: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
L_00883a3e:; BB(0x00883a3e);
    /* 00883a3e: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00883a43: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00883a47: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883a4a: jle 0x883b00 */ if ((fZ||fS!=fO)) goto L_00883b00;
L_00883a50:; BB(0x00883a50);
    /* 00883a50: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00883a54: mov dword ptr [esp + 0x70], ecx */ W32((u32)(r_esp+0x70u), r_ecx);
    /* 00883a58: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00883a5b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883a5d: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 00883a60: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883a62: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00883a66: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00883a69: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883a6b: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 00883a6e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883a70: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 00883a74: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 00883a78: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883a7a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883a7c: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00883a80: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 00883a83: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883a85: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883a87: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 00883a8b: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00883a8f: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00883a93: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 00883a97: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00883a9b: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 00883a9f: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
L_00883aa3:; BB(0x00883aa3);
    /* 00883aa3: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00883aa7: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00883aa9: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 00883aad: fld dword ptr [esi + ecx*4 - 4] */ FPUSH(R_F32((u32)(r_esi+r_ecx*4+0xfffffffcu)));
    /* 00883ab1: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 00883ab5: fadd dword ptr [ebp + ecx*4 - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu));
    /* 00883ab9: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00883abd: fstp dword ptr [edx + ecx*4 - 4] */ W_F32((u32)(r_edx+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 00883ac1: fld dword ptr [esi + ecx*4 - 4] */ FPUSH(R_F32((u32)(r_esi+r_ecx*4+0xfffffffcu)));
    /* 00883ac5: fsub dword ptr [ebp + ecx*4 - 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu));
    /* 00883ac9: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 00883acd: fstp dword ptr [edi + eax*4 - 4] */ W_F32((u32)(r_edi+r_eax*4+0xfffffffcu), ST(0)); FPOP();
    /* 00883ad1: fld dword ptr [esi + ecx*4] */ FPUSH(R_F32((u32)(r_esi+r_ecx*4)));
    /* 00883ad4: fadd dword ptr [ebp + ecx*4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_ecx*4));
    /* 00883ad8: fstp dword ptr [edx + ecx*4] */ W_F32((u32)(r_edx+r_ecx*4), ST(0)); FPOP();
    /* 00883adb: fld dword ptr [ebp + ecx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4)));
    /* 00883adf: fsub dword ptr [esi + ecx*4] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_ecx*4));
    /* 00883ae2: fstp dword ptr [edi + eax*4] */ W_F32((u32)(r_edi+r_eax*4), ST(0)); FPOP();
    /* 00883ae5: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00883ae8: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00883aec: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883aee: jl 0x883aa3 */ if ((fS!=fO)) goto L_00883aa3;
L_00883af0:; BB(0x00883af0);
    /* 00883af0: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 00883af4: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00883af8: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00883afc: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
L_00883b00:; BB(0x00883b00);
    /* 00883b00: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00883b04: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00883b06: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00883b08: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00883b0c: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00883b0e: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00883b10: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00883b14: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00883b15: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00883b19: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00883b1d: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883b1f: jl 0x883a3e */ if ((fS!=fO)) goto L_00883a3e;
L_00883b25:; BB(0x00883b25);
    /* 00883b25: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00883b29: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00883b2d: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00883b31: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 00883b35: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
L_00883b39:; BB(0x00883b39);
    /* 00883b39: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00883b3d: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00883b3f: jl 0x8839e7 */ if ((fS!=fO)) goto L_008839e7;
L_00883b45:; BB(0x00883b45);
    /* 00883b45: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00883b48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00883b49: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00883b4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00883b4b: mov esp, ebx */ r_esp = r_ebx;
    /* 00883b4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00883b4e: ret  */ FN_RET(0x008818d8); r_esp += 4; return;
L_00883b4f:; BB(0x00883b4f);
    /* 00883b4f: mov eax, edx */ r_eax = r_edx;
    /* 00883b51: imul eax, dword ptr [esp + 0x18] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x18u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00883b56: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00883b5a: jmp 0x883183 */ goto L_00883183;
L_00883b5f:; BB(0x00883b5f);
    /* 00883b5f: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00883b61: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00883b63: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00883b65: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00883b67: jmp 0x883485 */ goto L_00883485;
L_00883b6c:; BB(0x00883b6c);
    /* 00883b6c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00883b6e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00883b70: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00883b72: jmp 0x88346b */ goto L_0088346b;
L_00883b77:; BB(0x00883b77);
    /* 00883b77: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00883b79: jmp 0x883449 */ goto L_00883449;
}

