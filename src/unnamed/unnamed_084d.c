#include "protos.h"

void f_0084d15c(void) /* sub_84D15C */
{
    FN_ENTER(0x0084d15c);
L_0084d15c:; BB(0x0084d15c);
    /* 0084d15c: test dword ptr [0xae7f00], 0xfffffe00 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xfffffe00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084d166: jne 0x84d24c */ if (!fZ) goto L_0084d24c;
L_0084d16c:; BB(0x0084d16c);
    /* 0084d16c: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084d176: jne 0x84d790 */ if (!fZ) goto L_0084d790;
L_0084d17c:; BB(0x0084d17c);
    /* 0084d17c: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x84d181u); f_0086b8a0();
    /* 0084d181: jmp 0x84d15c */ goto L_0084d15c;
L_0084d24c:; BB(0x0084d24c);
    /* 0084d24c: movlpd xmm0, qword ptr [esp + 4] */ xmm[0].q[0] = R64((u32)(r_esp+0x4u));
    /* 0084d252: movlpd xmm4, qword ptr [0x98dde0] */ xmm[4].q[0] = R64((u32)(0x98dde0u));
    /* 0084d25a: movlpd xmm3, qword ptr [0x98de30] */ xmm[3].q[0] = R64((u32)(0x98de30u));
    /* 0084d262: xorpd xmm5, xmm5 */ { XMM s = xmm[5]; xmm[5].q[0] = xmm[5].q[0] ^ s.q[0]; xmm[5].q[1] = xmm[5].q[1] ^ s.q[1]; }
    /* 0084d266: movlpd xmm2, qword ptr [0x98de38] */ xmm[2].q[0] = R64((u32)(0x98de38u));
    /* 0084d26e: movsd xmm1, xmm0 */ xmm[1].q[0] = xmm[0].q[0];
    /* 0084d272: psrlq xmm0, 0x2c */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2cu; r.q = c > 63 ? 0 : (a.q >> c); xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2cu; r.q = c > 63 ? 0 : (a.q >> c); xmm[0].q[1] = r.q; }
    /* 0084d277: movd edx, xmm0 */ r_edx = xmm[0].d[0];
    /* 0084d27b: movsd xmm7, xmm1 */ xmm[7].q[0] = xmm[1].q[0];
    /* 0084d27f: mov ecx, 0x2000 */ r_ecx = 0x2000u;
    /* 0084d284: pinsrw xmm5, ecx, 2 */ xmm[5].w[2] = (u16)(r_ecx);
    /* 0084d289: movsd xmm0, xmm1 */ xmm[0].q[0] = xmm[1].q[0];
    /* 0084d28d: mov eax, 0x7ffff */ r_eax = 0x7ffffu;
    /* 0084d292: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084d294: sub eax, 0x3fb00 */ {  u32 a = r_eax; u32 b = 0x3fb00u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084d299: cmp eax, 0x3bb */ {  u32 a = r_eax; u32 b = 0x3bbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084d29e: jae 0x84d37a */ if (!fC) goto L_0084d37a;
L_0084d2a4:; BB(0x0084d2a4);
    /* 0084d2a4: mulsd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084d2a8: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084d2ae: subsd xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].f[0] = xmm[3].f[0] - s.f[0]; }
    /* 0084d2b2: sqrtsd xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].f[0] = sqrt(s.f[0]); }
    /* 0084d2b6: andpd xmm2, xmm7 */ { XMM s = xmm[7]; xmm[2].q[0] = xmm[2].q[0] & s.q[0]; xmm[2].q[1] = xmm[2].q[1] & s.q[1]; }
    /* 0084d2ba: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084d2bd: sub edx, 0xfb00 */ {  u32 a = r_edx; u32 b = 0xfb00u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084d2c3: movlpd xmm1, qword ptr [edx*2 + 0x98c680] */ xmm[1].q[0] = R64((u32)(r_edx*2+0x98c680u));
    /* 0084d2cc: orpd xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].q[0] = xmm[2].q[0] | s.q[0]; xmm[2].q[1] = xmm[2].q[1] | s.q[1]; }
    /* 0084d2d0: movapd xmm4, xmmword ptr [edx*4 + 0x98ce80] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx*4+0x98ce80u), 16); xmm[4] = s; }
    /* 0084d2d9: movsd xmm6, xmm7 */ xmm[6].q[0] = xmm[7].q[0];
    /* 0084d2dd: addsd xmm7, xmm2 */ { XMM s = xmm[2]; xmm[7].f[0] = xmm[7].f[0] + s.f[0]; }
    /* 0084d2e1: subsd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; }
    /* 0084d2e5: mulsd xmm7, xmm0 */ { XMM s = xmm[0]; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; }
    /* 0084d2e9: mulsd xmm6, xmm1 */ { XMM s = xmm[1]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; }
    /* 0084d2ed: mulsd xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].f[0] = xmm[3].f[0] * s.f[0]; }
    /* 0084d2f1: movsd xmm1, xmm6 */ xmm[1].q[0] = xmm[6].q[0];
    /* 0084d2f5: addsd xmm6, xmm3 */ { XMM s = xmm[3]; xmm[6].f[0] = xmm[6].f[0] + s.f[0]; }
    /* 0084d2f9: divsd xmm7, xmm6 */ { XMM s = xmm[6]; xmm[7].f[0] = xmm[7].f[0] / s.f[0]; }
    /* 0084d2fd: movlpd xmm0, qword ptr [0x98ddd8] */ xmm[0].q[0] = R64((u32)(0x98ddd8u));
    /* 0084d305: movlpd xmm5, qword ptr [0x98ddc8] */ xmm[5].q[0] = R64((u32)(0x98ddc8u));
    /* 0084d30d: subsd xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].f[0] = xmm[1].f[0] - s.f[0]; }
    /* 0084d311: psrlq xmm2, 0x3f */ { MM64 a; a.q = xmm[2].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x3fu; r.q = c > 63 ? 0 : (a.q >> c); xmm[2].q[0] = r.q; } { MM64 a; a.q = xmm[2].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x3fu; r.q = c > 63 ? 0 : (a.q >> c); xmm[2].q[1] = r.q; }
    /* 0084d316: movsd xmm3, xmm1 */ xmm[3].q[0] = xmm[1].q[0];
    /* 0084d31a: psllq xmm2, 0x3f */ { MM64 a; a.q = xmm[2].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x3fu; r.q = c > 63 ? 0 : (a.q << c); xmm[2].q[0] = r.q; } { MM64 a; a.q = xmm[2].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x3fu; r.q = c > 63 ? 0 : (a.q << c); xmm[2].q[1] = r.q; }
    /* 0084d31f: mulsd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084d323: pshufd xmm2, xmm2, 0x44 */ { XMM s = xmm[2]; XMM r; r.d[0] = s.d[0]; r.d[1] = s.d[1]; r.d[2] = s.d[0]; r.d[3] = s.d[1]; xmm[2] = r; }
    /* 0084d328: movlpd xmm6, qword ptr [0x98ddd0] */ xmm[6].q[0] = R64((u32)(0x98ddd0u));
    /* 0084d330: mulsd xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].f[0] = xmm[3].f[0] * s.f[0]; }
    /* 0084d334: mulsd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084d338: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084d33b: xorpd xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].q[0] = xmm[4].q[0] ^ s.q[0]; xmm[4].q[1] = xmm[4].q[1] ^ s.q[1]; }
    /* 0084d33f: mulsd xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].f[0] = xmm[5].f[0] * s.f[0]; }
    /* 0084d343: subpd xmm4, xmmword ptr [0x98de20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98de20u), 16); xmm[4].f[0] = xmm[4].f[0] - s.f[0]; xmm[4].f[1] = xmm[4].f[1] - s.f[1]; }
    /* 0084d34b: mulsd xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].f[0] = xmm[3].f[0] * s.f[0]; }
    /* 0084d34f: addsd xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084d353: mulsd xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084d357: subsd xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].f[0] = xmm[5].f[0] - s.f[0]; }
    /* 0084d35b: pshufd xmm4, xmm4, 0xee */ { XMM s = xmm[4]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[4] = r; }
    /* 0084d360: addsd xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084d364: subsd xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; }
    /* 0084d368: subsd xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; }
    /* 0084d36c: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084d372: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084d376: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084d379: ret  */ FN_RET(0x0084d15c); r_esp += 4; return;
L_0084d37a:; BB(0x0084d37a);
    /* 0084d37a: sub eax, 0x3bb */ {  u32 a = r_eax; u32 b = 0x3bbu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084d37f: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084d382: jae 0x84d4b5 */ if (!fC) goto L_0084d4b5;
L_0084d388:; BB(0x0084d388);
    /* 0084d388: psrlq xmm7, 0x26 */ { MM64 a; a.q = xmm[7].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x26u; r.q = c > 63 ? 0 : (a.q >> c); xmm[7].q[0] = r.q; } { MM64 a; a.q = xmm[7].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x26u; r.q = c > 63 ? 0 : (a.q >> c); xmm[7].q[1] = r.q; }
    /* 0084d38d: psllq xmm7, 0x26 */ { MM64 a; a.q = xmm[7].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x26u; r.q = c > 63 ? 0 : (a.q << c); xmm[7].q[0] = r.q; } { MM64 a; a.q = xmm[7].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x26u; r.q = c > 63 ? 0 : (a.q << c); xmm[7].q[1] = r.q; }
    /* 0084d392: pmovmskb eax, xmm0 */ r_eax = ((u32)(xmm[0].b[0] >> 7) << 0) | ((u32)(xmm[0].b[1] >> 7) << 1) | ((u32)(xmm[0].b[2] >> 7) << 2) | ((u32)(xmm[0].b[3] >> 7) << 3) | ((u32)(xmm[0].b[4] >> 7) << 4) | ((u32)(xmm[0].b[5] >> 7) << 5) | ((u32)(xmm[0].b[6] >> 7) << 6) | ((u32)(xmm[0].b[7] >> 7) << 7) | ((u32)(xmm[0].b[8] >> 7) << 8) | ((u32)(xmm[0].b[9] >> 7) << 9) | ((u32)(xmm[0].b[10] >> 7) << 10) | ((u32)(xmm[0].b[11] >> 7) << 11) | ((u32)(xmm[0].b[12] >> 7) << 12) | ((u32)(xmm[0].b[13] >> 7) << 13) | ((u32)(xmm[0].b[14] >> 7) << 14) | ((u32)(xmm[0].b[15] >> 7) << 15);
    /* 0084d396: andnpd xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].q[0] = ~xmm[4].q[0] & s.q[0]; xmm[4].q[1] = ~xmm[4].q[1] & s.q[1]; }
    /* 0084d39a: subsd xmm1, xmm7 */ { XMM s = xmm[7]; xmm[1].f[0] = xmm[1].f[0] - s.f[0]; }
    /* 0084d39e: movsd xmm6, xmm7 */ xmm[6].q[0] = xmm[7].q[0];
    /* 0084d3a2: mulsd xmm7, xmm7 */ { XMM s = xmm[7]; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; }
    /* 0084d3a6: addsd xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084d3aa: orpd xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].q[0] = xmm[5].q[0] | s.q[0]; xmm[5].q[1] = xmm[5].q[1] | s.q[1]; }
    /* 0084d3ae: subsd xmm3, xmm7 */ { XMM s = xmm[7]; xmm[3].f[0] = xmm[3].f[0] - s.f[0]; }
    /* 0084d3b2: mulsd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084d3b6: movsd xmm4, xmm3 */ xmm[4].q[0] = xmm[3].q[0];
    /* 0084d3ba: subsd xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].f[0] = xmm[3].f[0] - s.f[0]; }
    /* 0084d3be: sqrtsd xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].f[0] = sqrt(s.f[0]); }
    /* 0084d3c2: and eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084d3c7: shr eax, 7 */ { u32 c = (7u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0084d3ca: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084d3cc: movsd xmm7, xmm3 */ xmm[7].q[0] = xmm[3].q[0];
    /* 0084d3d0: andpd xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].q[0] = xmm[2].q[0] & s.q[0]; xmm[2].q[1] = xmm[2].q[1] & s.q[1]; }
    /* 0084d3d4: psllq xmm3, 2 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2u; r.q = c > 63 ? 0 : (a.q << c); xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2u; r.q = c > 63 ? 0 : (a.q << c); xmm[3].q[1] = r.q; }
    /* 0084d3d9: pextrw edx, xmm3, 3 */ r_edx = (u32)xmm[3].w[3];
    /* 0084d3de: orpd xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].q[0] = xmm[2].q[0] | s.q[0]; xmm[2].q[1] = xmm[2].q[1] | s.q[1]; }
    /* 0084d3e2: movd xmm3, eax */ { u32 v = r_eax; xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 0084d3e6: pshufd xmm3, xmm3, 0 */ { XMM s = xmm[3]; XMM r; r.d[0] = s.d[0]; r.d[1] = s.d[0]; r.d[2] = s.d[0]; r.d[3] = s.d[0]; xmm[3] = r; }
    /* 0084d3eb: sub edx, 0xfec0 */ {  u32 a = r_edx; u32 b = 0xfec0u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084d3f1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084d3f3: mulsd xmm7, qword ptr [edx*4 + 0x98c680] */ { XMM s; s.q[0] = R64((u32)(r_edx*4+0x98c680u)); s.q[1] = 0; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; }
    /* 0084d3fc: mulsd xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; }
    /* 0084d400: mulsd xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084d404: mulsd xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].f[0] = xmm[2].f[0] * s.f[0]; }
    /* 0084d408: subsd xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].f[0] = xmm[6].f[0] - s.f[0]; }
    /* 0084d40c: andpd xmm3, xmmword ptr [0x98de00] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98de00u), 16); xmm[3].q[0] = xmm[3].q[0] & s.q[0]; xmm[3].q[1] = xmm[3].q[1] & s.q[1]; }
    /* 0084d414: addsd xmm6, xmm1 */ { XMM s = xmm[1]; xmm[6].f[0] = xmm[6].f[0] + s.f[0]; }
    /* 0084d418: subsd xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].f[0] = xmm[4].f[0] - s.f[0]; }
    /* 0084d41c: addsd xmm7, xmm7 */ { XMM s = xmm[7]; xmm[7].f[0] = xmm[7].f[0] + s.f[0]; }
    /* 0084d420: movlpd xmm5, qword ptr [0x98ddc8] */ xmm[5].q[0] = R64((u32)(0x98ddc8u));
    /* 0084d428: subsd xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].f[0] = xmm[4].f[0] - s.f[0]; }
    /* 0084d42c: addsd xmm7, xmm6 */ { XMM s = xmm[6]; xmm[7].f[0] = xmm[7].f[0] + s.f[0]; }
    /* 0084d430: movlpd xmm0, qword ptr [0x98ddd8] */ xmm[0].q[0] = R64((u32)(0x98ddd8u));
    /* 0084d438: divsd xmm4, xmm7 */ { XMM s = xmm[7]; xmm[4].f[0] = xmm[4].f[0] / s.f[0]; }
    /* 0084d43c: movlpd xmm2, qword ptr [0x98ddd0] */ xmm[2].q[0] = R64((u32)(0x98ddd0u));
    /* 0084d444: addpd xmm3, xmmword ptr [edx*8 + 0x98ce80] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx*8+0x98ce80u), 16); xmm[3].f[0] = xmm[3].f[0] + s.f[0]; xmm[3].f[1] = xmm[3].f[1] + s.f[1]; }
    /* 0084d44d: movsd xmm1, xmm6 */ xmm[1].q[0] = xmm[6].q[0];
    /* 0084d451: mulsd xmm6, xmm6 */ { XMM s = xmm[6]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; }
    /* 0084d455: mulsd xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084d459: mulsd xmm1, xmm6 */ { XMM s = xmm[6]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084d45d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084d460: mulsd xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].f[0] = xmm[5].f[0] * s.f[0]; }
    /* 0084d464: mulsd xmm1, xmm6 */ { XMM s = xmm[6]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084d468: addsd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084d46c: pxor xmm6, xmm6 */ { MM64 a; a.q = xmm[6].q[0]; MM64 b; b.q = xmm[6].q[0]; MM64 r; r.q = a.q ^ b.q; xmm[6].q[0] = r.q; } { MM64 a; a.q = xmm[6].q[1]; MM64 b; b.q = xmm[6].q[1]; MM64 r; r.q = a.q ^ b.q; xmm[6].q[1] = r.q; }
    /* 0084d470: mulsd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084d474: addsd xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].f[0] = xmm[5].f[0] + s.f[0]; }
    /* 0084d478: addsd xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084d47c: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084d481: pinsrw xmm6, eax, 3 */ xmm[6].w[3] = (u16)(r_eax);
    /* 0084d486: movsd xmm5, xmm4 */ xmm[5].q[0] = xmm[4].q[0];
    /* 0084d48a: pshufd xmm3, xmm3, 0xee */ { XMM s = xmm[3]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[3] = r; }
    /* 0084d48f: addsd xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].f[0] = xmm[4].f[0] + s.f[0]; }
    /* 0084d493: subsd xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].f[0] = xmm[3].f[0] - s.f[0]; }
    /* 0084d497: addsd xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].f[0] = xmm[5].f[0] + s.f[0]; }
    /* 0084d49b: addsd xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084d49f: addsd xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084d4a3: xorpd xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 0084d4a7: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084d4ad: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084d4b1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084d4b4: ret  */ FN_RET(0x0084d15c); r_esp += 4; return;
L_0084d4b5:; BB(0x0084d4b5);
    /* 0084d4b5: add eax, 0x3bbb */ {  u32 a = r_eax; u32 b = 0x3bbbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084d4ba: cmp eax, 0x3800 */ {  u32 a = r_eax; u32 b = 0x3800u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084d4bf: jae 0x84d555 */ if (!fC) goto L_0084d555;
L_0084d4c5:; BB(0x0084d4c5);
    /* 0084d4c5: unpcklpd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[1] = s.f[0]; }
    /* 0084d4c9: movapd xmm6, xmmword ptr [0x98dd80] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98dd80u), 16); xmm[6] = s; }
    /* 0084d4d1: unpcklpd xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].f[1] = s.f[0]; }
    /* 0084d4d5: movapd xmm2, xmmword ptr [0x98dd90] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98dd90u), 16); xmm[2] = s; }
    /* 0084d4dd: movapd xmm4, xmmword ptr [0x98dda0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98dda0u), 16); xmm[4] = s; }
    /* 0084d4e5: mulpd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; xmm[0].f[1] = xmm[0].f[1] * s.f[1]; }
    /* 0084d4e9: movapd xmm5, xmmword ptr [0x98de20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98de20u), 16); xmm[5] = s; }
    /* 0084d4f1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084d4f4: mulpd xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; xmm[1].f[1] = xmm[1].f[1] * s.f[1]; }
    /* 0084d4f8: mulpd xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; xmm[6].f[1] = xmm[6].f[1] * s.f[1]; }
    /* 0084d4fc: mulpd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; xmm[0].f[1] = xmm[0].f[1] * s.f[1]; }
    /* 0084d500: movsd xmm3, xmm1 */ xmm[3].q[0] = xmm[1].q[0];
    /* 0084d504: mulsd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084d508: addpd xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6].f[0] = xmm[6].f[0] + s.f[0]; xmm[6].f[1] = xmm[6].f[1] + s.f[1]; }
    /* 0084d50c: mulpd xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].f[0] = xmm[4].f[0] * s.f[0]; xmm[4].f[1] = xmm[4].f[1] * s.f[1]; }
    /* 0084d510: mulsd xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084d514: addpd xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].f[0] = xmm[6].f[0] + s.f[0]; xmm[6].f[1] = xmm[6].f[1] + s.f[1]; }
    /* 0084d518: pshufd xmm0, xmm5, 0xee */ { XMM s = xmm[5]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[0] = r; }
    /* 0084d51d: mulpd xmm1, xmm6 */ { XMM s = xmm[6]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; xmm[1].f[1] = xmm[1].f[1] * s.f[1]; }
    /* 0084d521: pshufd xmm6, xmm5, 0xee */ { XMM s = xmm[5]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[6] = r; }
    /* 0084d526: subsd xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; }
    /* 0084d52a: pshufd xmm2, xmm1, 0xee */ { XMM s = xmm[1]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[2] = r; }
    /* 0084d52f: subsd xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].f[0] = xmm[5].f[0] - s.f[0]; }
    /* 0084d533: subsd xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].f[0] = xmm[6].f[0] - s.f[0]; }
    /* 0084d537: subsd xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].f[0] = xmm[5].f[0] - s.f[0]; }
    /* 0084d53b: subsd xmm7, xmm6 */ { XMM s = xmm[6]; xmm[7].f[0] = xmm[7].f[0] - s.f[0]; }
    /* 0084d53f: subsd xmm5, xmm7 */ { XMM s = xmm[7]; xmm[5].f[0] = xmm[5].f[0] - s.f[0]; }
    /* 0084d543: addsd xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084d547: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084d54d: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084d551: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084d554: ret  */ FN_RET(0x0084d15c); r_esp += 4; return;
L_0084d555:; BB(0x0084d555);
    /* 0084d555: sub eax, 0x3bfc */ {  u32 a = r_eax; u32 b = 0x3bfcu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084d55a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084d55d: jae 0x84d657 */ if (!fC) goto L_0084d657;
L_0084d563:; BB(0x0084d563);
    /* 0084d563: xorpd xmm6, xmm6 */ { XMM s = xmm[6]; xmm[6].q[0] = xmm[6].q[0] ^ s.q[0]; xmm[6].q[1] = xmm[6].q[1] ^ s.q[1]; }
    /* 0084d567: andpd xmm7, xmmword ptr [0x98dde0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98dde0u), 16); xmm[7].q[0] = xmm[7].q[0] & s.q[0]; xmm[7].q[1] = xmm[7].q[1] & s.q[1]; }
    /* 0084d56f: movlpd xmm4, qword ptr [0x98de40] */ xmm[4].q[0] = R64((u32)(0x98de40u));
    /* 0084d577: movapd xmm1, xmmword ptr [0x98dd80] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98dd80u), 16); xmm[1] = s; }
    /* 0084d57f: mulsd xmm7, xmm4 */ { XMM s = xmm[4]; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; }
    /* 0084d583: movapd xmm2, xmmword ptr [0x98dd90] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98dd90u), 16); xmm[2] = s; }
    /* 0084d58b: subsd xmm4, xmm7 */ { XMM s = xmm[7]; xmm[4].f[0] = xmm[4].f[0] - s.f[0]; }
    /* 0084d58f: movapd xmm3, xmmword ptr [0x98dda0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98dda0u), 16); xmm[3] = s; }
    /* 0084d597: pshufd xmm7, xmm4, 0x44 */ { XMM s = xmm[4]; XMM r; r.d[0] = s.d[0]; r.d[1] = s.d[1]; r.d[2] = s.d[0]; r.d[3] = s.d[1]; xmm[7] = r; }
    /* 0084d59c: sqrtsd xmm4, xmm4 */ { XMM s = xmm[4]; xmm[4].f[0] = sqrt(s.f[0]); }
    /* 0084d5a0: mulpd xmm1, xmm7 */ { XMM s = xmm[7]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; xmm[1].f[1] = xmm[1].f[1] * s.f[1]; }
    /* 0084d5a4: pshufd xmm5, xmm7, 0x44 */ { XMM s = xmm[7]; XMM r; r.d[0] = s.d[0]; r.d[1] = s.d[1]; r.d[2] = s.d[0]; r.d[3] = s.d[1]; xmm[5] = r; }
    /* 0084d5a9: pextrw eax, xmm0, 3 */ r_eax = (u32)xmm[0].w[3];
    /* 0084d5ae: mulpd xmm7, xmm7 */ { XMM s = xmm[7]; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; xmm[7].f[1] = xmm[7].f[1] * s.f[1]; }
    /* 0084d5b2: addpd xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].f[0] = xmm[2].f[0] + s.f[0]; xmm[2].f[1] = xmm[2].f[1] + s.f[1]; }
    /* 0084d5b6: movlpd xmm1, qword ptr [0x98ddf0] */ xmm[1].q[0] = R64((u32)(0x98ddf0u));
    /* 0084d5be: mulpd xmm3, xmm7 */ { XMM s = xmm[7]; xmm[3].f[0] = xmm[3].f[0] * s.f[0]; xmm[3].f[1] = xmm[3].f[1] * s.f[1]; }
    /* 0084d5c2: cmpltsd xmm0, xmm6 */ { XMM s = xmm[6]; double a = xmm[0].f[0]; double b = s.f[0]; xmm[0].q[0] = (a < b) ? ~0ull : 0ull; }
    /* 0084d5c7: mulsd xmm7, xmm5 */ { XMM s = xmm[5]; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; }
    /* 0084d5cb: addpd xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].f[0] = xmm[2].f[0] + s.f[0]; xmm[2].f[1] = xmm[2].f[1] + s.f[1]; }
    /* 0084d5cf: pshufd xmm0, xmm0, 0x44 */ { XMM s = xmm[0]; XMM r; r.d[0] = s.d[0]; r.d[1] = s.d[1]; r.d[2] = s.d[0]; r.d[3] = s.d[1]; xmm[0] = r; }
    /* 0084d5d4: mulsd xmm2, xmm7 */ { XMM s = xmm[7]; xmm[2].f[0] = xmm[2].f[0] * s.f[0]; }
    /* 0084d5d8: andpd xmm0, xmmword ptr [0x98de00] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98de00u), 16); xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 0084d5e0: mulpd xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].f[0] = xmm[2].f[0] * s.f[0]; xmm[2].f[1] = xmm[2].f[1] * s.f[1]; }
    /* 0084d5e4: andpd xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].q[0] = xmm[1].q[0] & s.q[0]; xmm[1].q[1] = xmm[1].q[1] & s.q[1]; }
    /* 0084d5e8: pshufd xmm3, xmm4, 0x44 */ { XMM s = xmm[4]; XMM r; r.d[0] = s.d[0]; r.d[1] = s.d[1]; r.d[2] = s.d[0]; r.d[3] = s.d[1]; xmm[3] = r; }
    /* 0084d5ed: subsd xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].f[0] = xmm[4].f[0] - s.f[0]; }
    /* 0084d5f1: addsd xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].f[0] = xmm[3].f[0] + s.f[0]; }
    /* 0084d5f5: mulsd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084d5f9: subsd xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].f[0] = xmm[3].f[0] - s.f[0]; }
    /* 0084d5fd: subsd xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].f[0] = xmm[5].f[0] - s.f[0]; }
    /* 0084d601: mulsd xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].f[0] = xmm[4].f[0] * s.f[0]; }
    /* 0084d605: pshufd xmm3, xmm3, 0xee */ { XMM s = xmm[3]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[3] = r; }
    /* 0084d60a: subsd xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].f[0] = xmm[5].f[0] - s.f[0]; }
    /* 0084d60e: divsd xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].f[0] = xmm[5].f[0] / s.f[0]; }
    /* 0084d612: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084d615: addpd xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].f[0] = xmm[3].f[0] + s.f[0]; xmm[3].f[1] = xmm[3].f[1] + s.f[1]; }
    /* 0084d619: mulpd xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].f[0] = xmm[2].f[0] * s.f[0]; xmm[2].f[1] = xmm[2].f[1] * s.f[1]; }
    /* 0084d61d: pshufd xmm4, xmm2, 0xee */ { XMM s = xmm[2]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[4] = r; }
    /* 0084d622: addsd xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].f[0] = xmm[2].f[0] + s.f[0]; }
    /* 0084d626: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084d62b: pinsrw xmm6, eax, 3 */ xmm[6].w[3] = (u16)(r_eax);
    /* 0084d630: pshufd xmm0, xmm0, 0xee */ { XMM s = xmm[0]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[0] = r; }
    /* 0084d635: addsd xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].f[0] = xmm[2].f[0] + s.f[0]; }
    /* 0084d639: addsd xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].f[0] = xmm[2].f[0] + s.f[0]; }
    /* 0084d63d: addsd xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].f[0] = xmm[2].f[0] + s.f[0]; }
    /* 0084d641: addsd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084d645: xorpd xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 0084d649: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084d64f: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084d653: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084d656: ret  */ FN_RET(0x0084d15c); r_esp += 4; return;
L_0084d657:; BB(0x0084d657);
    /* 0084d657: add eax, 0x3fefc */ {  u32 a = r_eax; u32 b = 0x3fefcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084d65c: cmp eax, 0x3ff00 */ {  u32 a = r_eax; u32 b = 0x3ff00u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084d661: jb 0x84d751 */ if (fC) goto L_0084d751;
L_0084d667:; BB(0x0084d667);
    /* 0084d667: movd ecx, xmm7 */ r_ecx = xmm[7].d[0];
    /* 0084d66b: psrlq xmm7, 0x20 */ { MM64 a; a.q = xmm[7].q[0]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[7].q[0] = r.q; } { MM64 a; a.q = xmm[7].q[1]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[7].q[1] = r.q; }
    /* 0084d670: movd edx, xmm7 */ r_edx = xmm[7].d[0];
    /* 0084d674: and edx, 0x7fffffff */ {  u32 a = r_edx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084d67a: mov eax, 0x3ff00000 */ r_eax = 0x3ff00000u;
    /* 0084d67f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084d681: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084d683: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084d686: je 0x84d711 */ if (fZ) goto L_0084d711;
L_0084d68c:; BB(0x0084d68c);
    /* 0084d68c: movlpd xmm2, qword ptr [esp + 4] */ xmm[2].q[0] = R64((u32)(r_esp+0x4u));
    /* 0084d692: movd edx, xmm2 */ r_edx = xmm[2].d[0];
    /* 0084d696: psrlq xmm2, 0x20 */ { MM64 a; a.q = xmm[2].q[0]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[2].q[0] = r.q; } { MM64 a; a.q = xmm[2].q[1]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[2].q[1] = r.q; }
    /* 0084d69b: movd ecx, xmm2 */ r_ecx = xmm[2].d[0];
    /* 0084d69f: and ecx, 0x7fffffff */ {  u32 a = r_ecx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084d6a5: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 0084d6a8: sbb ecx, 0x7ff00000 */ { u32 c = fC; u32 a = r_ecx; u32 b = 0x7ff00000u; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0084d6ae: cmp ecx, 0 */ {  u32 a = r_ecx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084d6b1: jge 0x84d776 */ if ((fS==fO)) goto L_0084d776;
L_0084d6b7:; BB(0x0084d6b7);
    /* 0084d6b7: xorpd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 0084d6bb: xorpd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 0084d6bf: mov edx, 0x7ff0 */ r_edx = 0x7ff0u;
    /* 0084d6c4: pinsrw xmm1, edx, 3 */ xmm[1].w[3] = (u16)(r_edx);
    /* 0084d6c9: mulsd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084d6cd: mov edx, 0x3d */ r_edx = 0x3du;
    /* 0084d6d2: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084d6d5: movlpd qword ptr [esp + 0x10], xmm0 */ W64((u32)(r_esp+0x10u), xmm[0].q[0]);
    /* 0084d6db: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0084d6df: mov edx, esp */ r_edx = r_esp;
    /* 0084d6e1: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084d6e4: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0084d6e8: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084d6eb: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0084d6ef: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0084d6f2: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x84d6f7u); f_00850eb4();
    /* 0084d6f7: movlpd xmm0, qword ptr [esp + 0x10] */ xmm[0].q[0] = R64((u32)(r_esp+0x10u));
    /* 0084d6fd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0084d700: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084d703: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084d709: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084d70d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084d710: ret  */ FN_RET(0x0084d15c); r_esp += 4; return;
L_0084d711:; BB(0x0084d711);
    /* 0084d711: pextrw edx, xmm7, 1 */ r_edx = (u32)xmm[7].w[1];
    /* 0084d716: shr edx, 0xf */ { u32 c = (15u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0084d719: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084d71b: movd xmm7, edx */ { u32 v = r_edx; xmm[7].d[0] = v; xmm[7].d[1] = 0; xmm[7].d[2] = 0; xmm[7].d[3] = 0; }
    /* 0084d71f: pshufd xmm7, xmm7, 0 */ { XMM s = xmm[7]; XMM r; r.d[0] = s.d[0]; r.d[1] = s.d[0]; r.d[2] = s.d[0]; r.d[3] = s.d[0]; xmm[7] = r; }
    /* 0084d724: movlpd xmm2, qword ptr [0x98de10] */ xmm[2].q[0] = R64((u32)(0x98de10u));
    /* 0084d72c: movlpd xmm0, qword ptr [0x98de18] */ xmm[0].q[0] = R64((u32)(0x98de18u));
    /* 0084d734: andpd xmm2, xmm7 */ { XMM s = xmm[7]; xmm[2].q[0] = xmm[2].q[0] & s.q[0]; xmm[2].q[1] = xmm[2].q[1] & s.q[1]; }
    /* 0084d738: andpd xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 0084d73c: addsd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084d740: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084d743: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084d749: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084d74d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084d750: ret  */ FN_RET(0x0084d15c); r_esp += 4; return;
L_0084d751:; BB(0x0084d751);
    /* 0084d751: movlpd xmm2, qword ptr [0x98de20] */ xmm[2].q[0] = R64((u32)(0x98de20u));
    /* 0084d759: movlpd xmm0, qword ptr [0x98de28] */ xmm[0].q[0] = R64((u32)(0x98de28u));
    /* 0084d761: addsd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084d765: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084d768: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084d76e: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084d772: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084d775: ret  */ FN_RET(0x0084d15c); r_esp += 4; return;
L_0084d776:; BB(0x0084d776);
    /* 0084d776: xorpd xmm6, xmm6 */ { XMM s = xmm[6]; xmm[6].q[0] = xmm[6].q[0] ^ s.q[0]; xmm[6].q[1] = xmm[6].q[1] ^ s.q[1]; }
    /* 0084d77a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084d77d: addsd xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084d781: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084d787: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084d78b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084d78e: ret  */ FN_RET(0x0084d15c); r_esp += 4; return;
L_0084d790:; BB(0x0084d790);
    /* 0084d790: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084d791: mov ebx, esp */ r_ebx = r_esp;
    /* 0084d793: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0084d796: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084d797: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084d798: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0084d79b: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0084d79f: mov ebp, esp */ r_ebp = r_esp;
    /* 0084d7a1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084d7a4: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0084d7a7: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 0084d7aa: mov edx, 0 */ r_edx = 0x0u;
    /* 0084d7af: fnstcw word ptr [ebp - 0x10] */ W16((u32)(r_ebp+0xfffffff0u), fcw);
    /* 0084d7b2: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0084d7b5: mov eax, ecx */ r_eax = r_ecx;
    /* 0084d7b7: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084d7bc: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0084d7bf: cmp eax, 0x3ff00000 */ {  u32 a = r_eax; u32 b = 0x3ff00000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084d7c4: jae 0x84db3a */ if (!fC) goto L_0084db3a;
L_0084d7ca:; BB(0x0084d7ca);
    /* 0084d7ca: cmp eax, 0x3fd87de3 */ {  u32 a = r_eax; u32 b = 0x3fd87de3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084d7cf: ja 0x84da23 */ if ((!fC&&!fZ)) goto L_0084da23;
L_0084d7d5:; BB(0x0084d7d5);
    /* 0084d7d5: cmp eax, 0x3fb00000 */ {  u32 a = r_eax; u32 b = 0x3fb00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084d7da: jae 0x84d91a */ if (!fC) goto L_0084d91a;
L_0084d7e0:; BB(0x0084d7e0);
    /* 0084d7e0: cmp eax, 0x3f900000 */ {  u32 a = r_eax; u32 b = 0x3f900000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084d7e5: jae 0x84d883 */ if (!fC) goto L_0084d883;
L_0084d7eb:; BB(0x0084d7eb);
    /* 0084d7eb: cmp eax, 0x3c600000 */ {  u32 a = r_eax; u32 b = 0x3c600000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084d7f0: jae 0x84d800 */ if (!fC) goto L_0084d800;
L_0084d7f2:; BB(0x0084d7f2);
    /* 0084d7f2: fld xword ptr [0x98dfd0] */ FPUSH(R_F80((u32)(0x98dfd0u)));
    /* 0084d7f8: fsub qword ptr [ebx + 8] */ ST(0) = ST(0) - R_F64((u32)(r_ebx+0x8u));
    /* 0084d7fb: jmp 0x84da16 */ goto L_0084da16;
L_0084d800:; BB(0x0084d800);
    /* 0084d800: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084d803: fmul qword ptr [0x98dfc8] */ ST(0) = ST(0) * R_F64((u32)(0x98dfc8u));
    /* 0084d809: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084d80c: fld qword ptr [0x98def0] */ FPUSH(R_F64((u32)(0x98def0u)));
    /* 0084d812: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084d814: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0084d817: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084d81a: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084d81d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084d81f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084d821: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084d823: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 0084d826: fld qword ptr [0x98dfc0] */ FPUSH(R_F64((u32)(0x98dfc0u)));
    /* 0084d82c: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084d82e: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0084d830: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 0084d832: fld qword ptr [0x98def8] */ FPUSH(R_F64((u32)(0x98def8u)));
    /* 0084d838: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0084d83a: fadd qword ptr [0x98df00] */ ST(0) = ST(0) + R_F64((u32)(0x98df00u));
    /* 0084d840: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0084d842: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0084d844: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084d846: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084d848: fadd qword ptr [0x98df18] */ ST(0) = ST(0) + R_F64((u32)(0x98df18u));
    /* 0084d84e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084d850: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084d852: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0084d854: fld qword ptr [0x98dfb8] */ FPUSH(R_F64((u32)(0x98dfb8u)));
    /* 0084d85a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084d85c: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0084d85e: fld qword ptr [0x98dfb8] */ FPUSH(R_F64((u32)(0x98dfb8u)));
    /* 0084d864: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084d866: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0084d868: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084d86a: fsubr qword ptr [0x98dfb0] */ ST(0) = R_F64((u32)(0x98dfb0u)) - ST(0);
    /* 0084d870: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084d872: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0084d874: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 0084d876: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084d878: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0084d87a: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0084d87c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084d87e: jmp 0x84da16 */ goto L_0084da16;
L_0084d883:; BB(0x0084d883);
    /* 0084d883: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084d886: fmul qword ptr [0x98dfc8] */ ST(0) = ST(0) * R_F64((u32)(0x98dfc8u));
    /* 0084d88c: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084d88f: fld qword ptr [0x98df08] */ FPUSH(R_F64((u32)(0x98df08u)));
    /* 0084d895: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084d897: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0084d89a: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084d89d: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084d8a0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084d8a2: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084d8a4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084d8a6: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 0084d8a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084d8ab: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0084d8ad: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084d8af: fadd qword ptr [0x98df10] */ ST(0) = ST(0) + R_F64((u32)(0x98df10u));
    /* 0084d8b5: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084d8b7: fadd qword ptr [0x98df18] */ ST(0) = ST(0) + R_F64((u32)(0x98df18u));
    /* 0084d8bd: fld qword ptr [0x98dfc0] */ FPUSH(R_F64((u32)(0x98dfc0u)));
    /* 0084d8c3: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084d8c5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084d8c7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084d8c9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084d8cb: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0084d8cd: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0084d8cf: fld qword ptr [0x98df20] */ FPUSH(R_F64((u32)(0x98df20u)));
    /* 0084d8d5: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084d8d7: fadd qword ptr [0x98df28] */ ST(0) = ST(0) + R_F64((u32)(0x98df28u));
    /* 0084d8dd: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084d8df: fld qword ptr [0x98dfb8] */ FPUSH(R_F64((u32)(0x98dfb8u)));
    /* 0084d8e5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084d8e7: fadd qword ptr [0x98df30] */ ST(0) = ST(0) + R_F64((u32)(0x98df30u));
    /* 0084d8ed: fmulp st(6) */ ST(6) = ST(6) * ST(0); FPOP();
    /* 0084d8ef: fld qword ptr [0x98dfb8] */ FPUSH(R_F64((u32)(0x98dfb8u)));
    /* 0084d8f5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084d8f7: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 0084d8f9: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084d8fb: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0084d8fd: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0084d8ff: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084d901: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0084d903: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084d905: fsubr qword ptr [0x98dfb0] */ ST(0) = R_F64((u32)(0x98dfb0u)) - ST(0);
    /* 0084d90b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084d90d: fsubr st(3) */ ST(0) = ST(3) - ST(0);
    /* 0084d90f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084d911: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0084d913: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084d915: jmp 0x84da16 */ goto L_0084da16;
L_0084d91a:; BB(0x0084d91a);
    /* 0084d91a: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084d91d: fmul qword ptr [0x98dfc8] */ ST(0) = ST(0) * R_F64((u32)(0x98dfc8u));
    /* 0084d923: fld qword ptr [0x98df70] */ FPUSH(R_F64((u32)(0x98df70u)));
    /* 0084d929: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084d92b: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0084d92e: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084d931: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084d934: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084d937: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084d939: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084d93b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084d93d: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 0084d940: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084d942: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0084d944: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084d946: fadd qword ptr [0x98df78] */ ST(0) = ST(0) + R_F64((u32)(0x98df78u));
    /* 0084d94c: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084d94e: fadd qword ptr [0x98df80] */ ST(0) = ST(0) + R_F64((u32)(0x98df80u));
    /* 0084d954: fld qword ptr [0x98dfc0] */ FPUSH(R_F64((u32)(0x98dfc0u)));
    /* 0084d95a: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084d95c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084d95e: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0084d960: fadd qword ptr [0x98df88] */ ST(0) = ST(0) + R_F64((u32)(0x98df88u));
    /* 0084d966: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0084d968: fadd qword ptr [0x98df90] */ ST(0) = ST(0) + R_F64((u32)(0x98df90u));
    /* 0084d96e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084d970: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0084d972: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084d974: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084d976: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 0084d978: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084d97a: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0084d97c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084d97e: fadd qword ptr [0x98df98] */ ST(0) = ST(0) + R_F64((u32)(0x98df98u));
    /* 0084d984: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084d986: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0084d988: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0084d98a: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0084d98c: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0084d98e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084d990: fld qword ptr [0x98df40] */ FPUSH(R_F64((u32)(0x98df40u)));
    /* 0084d996: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0084d998: fadd qword ptr [0x98df48] */ ST(0) = ST(0) + R_F64((u32)(0x98df48u));
    /* 0084d99e: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0084d9a0: fadd qword ptr [0x98df50] */ ST(0) = ST(0) + R_F64((u32)(0x98df50u));
    /* 0084d9a6: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0084d9a8: fadd qword ptr [0x98df58] */ ST(0) = ST(0) + R_F64((u32)(0x98df58u));
    /* 0084d9ae: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0084d9b0: fadd qword ptr [0x98df60] */ ST(0) = ST(0) + R_F64((u32)(0x98df60u));
    /* 0084d9b6: fmulp st(7) */ ST(7) = ST(7) * ST(0); FPOP();
    /* 0084d9b8: fld qword ptr [0x98df38] */ FPUSH(R_F64((u32)(0x98df38u)));
    /* 0084d9be: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 0084d9c0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084d9c2: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0084d9c4: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 0084d9c6: fadd qword ptr [0x98df68] */ ST(0) = ST(0) + R_F64((u32)(0x98df68u));
    /* 0084d9cc: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0084d9ce: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084d9d0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084d9d2: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0084d9d4: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0084d9d6: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0084d9d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084d9da: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0084d9dc: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0084d9de: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084d9e0: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0084d9e2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084d9e4: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0084d9e6: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084d9e8: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0084d9ea: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084d9ec: fsubr st(4) */ ST(0) = ST(4) - ST(0);
    /* 0084d9ee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084d9f0: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0084d9f2: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0084d9f4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084d9f6: fsubr qword ptr [0x98dfb0] */ ST(0) = R_F64((u32)(0x98dfb0u)) - ST(0);
    /* 0084d9fc: fld qword ptr [0x98dfb8] */ FPUSH(R_F64((u32)(0x98dfb8u)));
    /* 0084da02: fld qword ptr [0x98dfb8] */ FPUSH(R_F64((u32)(0x98dfb8u)));
    /* 0084da08: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0084da0a: fsubr st(1), st(0) */ ST(1) = ST(0) - ST(1);
    /* 0084da0c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084da0e: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0084da10: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084da12: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0084da14: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_0084da16:; BB(0x0084da16);
    /* 0084da16: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0084da19: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0084da1c: mov esp, ebp */ r_esp = r_ebp;
    /* 0084da1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084da1f: mov esp, ebx */ r_esp = r_ebx;
    /* 0084da21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084da22: ret  */ FN_RET(0x0084d15c); r_esp += 4; return;
L_0084da23:; BB(0x0084da23);
    /* 0084da23: movzx edi, word ptr [ebp - 0x10] */ r_edi = (u32)R16((u32)(r_ebp+0xfffffff0u));
    /* 0084da27: mov esi, edi */ r_esi = r_edi;
    /* 0084da29: and esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0084da2f: cmp esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084da35: je 0x84da49 */ if (fZ) goto L_0084da49;
L_0084da37:; BB(0x0084da37);
    /* 0084da37: or edi, 0xffff0300 */ {  u32 a = r_edi; u32 b = 0xffff0300u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0084da3d: mov word ptr [ebp - 0xc], di */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_edi);
    /* 0084da41: fldcw word ptr [ebp - 0xc] */ fcw = R16((u32)(r_ebp+0xfffffff4u));
    /* 0084da44: mov edx, 1 */ r_edx = 0x1u;
L_0084da49:; BB(0x0084da49);
    /* 0084da49: cmp eax, 0x3fed906b */ {  u32 a = r_eax; u32 b = 0x3fed906bu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084da4e: jae 0x84da81 */ if (!fC) goto L_0084da81;
L_0084da50:; BB(0x0084da50);
    /* 0084da50: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084da53: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084da56: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084da58: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084da5a: fsubr qword ptr [0x98dff0] */ ST(0) = R_F64((u32)(0x98dff0u)) - ST(0);
    /* 0084da60: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0084da62: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084da64: fabs  */ ST(0) = fabsl(ST(0));
    /* 0084da66: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084da68: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0084da6a: fmul qword ptr [ecx*8 + 0x98dff0] */ ST(0) = ST(0) * R_F64((u32)(r_ecx*8+0x98dff0u));
    /* 0084da71: fld xword ptr [0x98dfd0] */ FPUSH(R_F80((u32)(0x98dfd0u)));
    /* 0084da77: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0084da79: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0084da7c: jmp 0x84db23 */ goto L_0084db23;
L_0084da81:; BB(0x0084da81);
    /* 0084da81: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084da84: fld xword ptr [0x98ded0] */ FPUSH(R_F80((u32)(0x98ded0u)));
    /* 0084da8a: fld xword ptr [0x98deb0] */ FPUSH(R_F80((u32)(0x98deb0u)));
    /* 0084da90: fld xword ptr [0x98de90] */ FPUSH(R_F80((u32)(0x98de90u)));
    /* 0084da96: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084da98: fabs  */ ST(0) = fabsl(ST(0));
    /* 0084da9a: fsubr qword ptr [0x98dff0] */ ST(0) = R_F64((u32)(0x98dff0u)) - ST(0);
    /* 0084daa0: fmul qword ptr [0x98dfa8] */ ST(0) = ST(0) * R_F64((u32)(0x98dfa8u));
    /* 0084daa6: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0084daa8: fld xword ptr [0x98de70] */ FPUSH(R_F80((u32)(0x98de70u)));
    /* 0084daae: fld xword ptr [0x98dec0] */ FPUSH(R_F80((u32)(0x98dec0u)));
    /* 0084dab4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084dab6: fst qword ptr [ebx + 8] */ W_F64((u32)(r_ebx+0x8u), ST(0));
    /* 0084dab9: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084dabb: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084dabd: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084dabf: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084dac1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084dac3: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 0084dac5: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0084dac7: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0084dac9: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0084dacb: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084dacd: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084dacf: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 0084dad1: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084dad3: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0084dad5: fld xword ptr [0x98dea0] */ FPUSH(R_F80((u32)(0x98dea0u)));
    /* 0084dadb: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0084dadd: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0084dadf: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084dae1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084dae3: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0084dae5: fld xword ptr [0x98de80] */ FPUSH(R_F80((u32)(0x98de80u)));
    /* 0084daeb: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0084daed: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084daef: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084daf1: fld xword ptr [0x98de60] */ FPUSH(R_F80((u32)(0x98de60u)));
    /* 0084daf7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084daf9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084dafb: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0084dafd: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0084daff: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084db01: je 0x84db18 */ if (fZ) goto L_0084db18;
L_0084db03:; BB(0x0084db03);
    /* 0084db03: fld qword ptr [0x98dee8] */ FPUSH(R_F64((u32)(0x98dee8u)));
    /* 0084db09: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084db0b: fld xword ptr [0x98e010] */ FPUSH(R_F80((u32)(0x98e010u)));
    /* 0084db11: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084db13: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0084db16: jmp 0x84db23 */ goto L_0084db23;
L_0084db18:; BB(0x0084db18);
    /* 0084db18: fld qword ptr [0x98dfa0] */ FPUSH(R_F64((u32)(0x98dfa0u)));
    /* 0084db1e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084db20: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
L_0084db23:; BB(0x0084db23);
    /* 0084db23: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084db25: je 0x84db2a */ if (fZ) goto L_0084db2a;
L_0084db27:; BB(0x0084db27);
    /* 0084db27: fldcw word ptr [ebp - 0x10] */ fcw = R16((u32)(r_ebp+0xfffffff0u));
L_0084db2a:; BB(0x0084db2a);
    /* 0084db2a: fld qword ptr [ebp - 0x20] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe0u)));
    /* 0084db2d: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0084db30: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0084db33: mov esp, ebp */ r_esp = r_ebp;
    /* 0084db35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084db36: mov esp, ebx */ r_esp = r_ebx;
    /* 0084db38: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084db39: ret  */ FN_RET(0x0084d15c); r_esp += 4; return;
L_0084db3a:; BB(0x0084db3a);
    /* 0084db3a: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 0084db3d: lea edx, [eax - 0x3ff00000] */ r_edx = (u32)(r_eax+0xc0100000u);
    /* 0084db43: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0084db45: jne 0x84db6c */ if (!fZ) goto L_0084db6c;
L_0084db47:; BB(0x0084db47);
    /* 0084db47: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084db49: je 0x84db59 */ if (fZ) goto L_0084db59;
L_0084db4b:; BB(0x0084db4b);
    /* 0084db4b: fld xword ptr [0x98e010] */ FPUSH(R_F80((u32)(0x98e010u)));
    /* 0084db51: fsub qword ptr [0x98e000] */ ST(0) = ST(0) - R_F64((u32)(0x98e000u));
    /* 0084db57: jmp 0x84db5f */ goto L_0084db5f;
L_0084db59:; BB(0x0084db59);
    /* 0084db59: fld qword ptr [0x98e020] */ FPUSH(R_F64((u32)(0x98e020u)));
L_0084db5f:; BB(0x0084db5f);
    /* 0084db5f: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0084db62: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0084db65: mov esp, ebp */ r_esp = r_ebp;
    /* 0084db67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084db68: mov esp, ebx */ r_esp = r_ebx;
    /* 0084db6a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084db6b: ret  */ FN_RET(0x0084d15c); r_esp += 4; return;
L_0084db6c:; BB(0x0084db6c);
    /* 0084db6c: add eax, 0x80100000 */ {  u32 a = r_eax; u32 b = 0x80100000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084db71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0084db73: jl 0x84db89 */ if ((fS!=fO)) goto L_0084db89;
L_0084db75:; BB(0x0084db75);
    /* 0084db75: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084db77: je 0x84db89 */ if (fZ) goto L_0084db89;
L_0084db79:; BB(0x0084db79);
    /* 0084db79: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084db7c: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0084db7f: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0084db82: mov esp, ebp */ r_esp = r_ebp;
    /* 0084db84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084db85: mov esp, ebx */ r_esp = r_ebx;
    /* 0084db87: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084db88: ret  */ FN_RET(0x0084d15c); r_esp += 4; return;
L_0084db89:; BB(0x0084db89);
    /* 0084db89: fld qword ptr [0x98e030] */ FPUSH(R_F64((u32)(0x98e030u)));
    /* 0084db8f: fmul qword ptr [0x98e020] */ ST(0) = ST(0) * R_F64((u32)(0x98e020u));
    /* 0084db95: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0084db98: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0084db9b: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 0084db9e: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 0084dba1: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 0084dba3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084dba4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084dba5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0084dba6: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x84dbabu); f_00850eb4();
    /* 0084dbab: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084dbae: fld qword ptr [ebp - 0x20] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe0u)));
    /* 0084dbb1: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0084dbb4: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0084dbb7: mov esp, ebp */ r_esp = r_ebp;
    /* 0084dbb9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084dbba: mov esp, ebx */ r_esp = r_ebx;
    /* 0084dbbc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084dbbd: ret  */ FN_RET(0x0084d15c); r_esp += 4; return;
}

void f_0084d184(void) /* sub_84D184 */
{
    FN_ENTER(0x0084d184);
L_0084d184:; BB(0x0084d184);
    /* 0084d184: test dword ptr [0xae7f00], 0xfffffe00 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xfffffe00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084d18e: jne 0x84dbc0 */ if (!fZ) goto L_0084dbc0;
L_0084d194:; BB(0x0084d194);
    /* 0084d194: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084d19e: jne 0x84e128 */ if (!fZ) goto L_0084e128;
L_0084d1a4:; BB(0x0084d1a4);
    /* 0084d1a4: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x84d1a9u); f_0086b8a0();
    /* 0084d1a9: jmp 0x84d184 */ goto L_0084d184;
L_0084dbc0:; BB(0x0084dbc0);
    /* 0084dbc0: movlpd xmm0, qword ptr [esp + 4] */ xmm[0].q[0] = R64((u32)(r_esp+0x4u));
    /* 0084dbc6: movlpd xmm4, qword ptr [0x98f890] */ xmm[4].q[0] = R64((u32)(0x98f890u));
    /* 0084dbce: movlpd xmm3, qword ptr [0x98f8d0] */ xmm[3].q[0] = R64((u32)(0x98f8d0u));
    /* 0084dbd6: xorpd xmm5, xmm5 */ { XMM s = xmm[5]; xmm[5].q[0] = xmm[5].q[0] ^ s.q[0]; xmm[5].q[1] = xmm[5].q[1] ^ s.q[1]; }
    /* 0084dbda: movlpd xmm2, qword ptr [0x98f8b0] */ xmm[2].q[0] = R64((u32)(0x98f8b0u));
    /* 0084dbe2: mov ecx, 0x2000 */ r_ecx = 0x2000u;
    /* 0084dbe7: pinsrw xmm5, ecx, 2 */ xmm[5].w[2] = (u16)(r_ecx);
    /* 0084dbec: movsd xmm1, xmm0 */ xmm[1].q[0] = xmm[0].q[0];
    /* 0084dbf0: psrlq xmm0, 0x2c */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2cu; r.q = c > 63 ? 0 : (a.q >> c); xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2cu; r.q = c > 63 ? 0 : (a.q >> c); xmm[0].q[1] = r.q; }
    /* 0084dbf5: movd edx, xmm0 */ r_edx = xmm[0].d[0];
    /* 0084dbf9: movsd xmm7, xmm1 */ xmm[7].q[0] = xmm[1].q[0];
    /* 0084dbfd: mov ecx, 0x2000 */ r_ecx = 0x2000u;
    /* 0084dc02: pinsrw xmm5, ecx, 2 */ xmm[5].w[2] = (u16)(r_ecx);
    /* 0084dc07: movsd xmm0, xmm1 */ xmm[0].q[0] = xmm[1].q[0];
    /* 0084dc0b: mov eax, 0x7ffff */ r_eax = 0x7ffffu;
    /* 0084dc10: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084dc12: sub eax, 0x3fb00 */ {  u32 a = r_eax; u32 b = 0x3fb00u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084dc17: cmp eax, 0x3bb */ {  u32 a = r_eax; u32 b = 0x3bbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084dc1c: jae 0x84dced */ if (!fC) goto L_0084dced;
L_0084dc22:; BB(0x0084dc22);
    /* 0084dc22: mulsd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084dc26: and edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084dc2c: subsd xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].f[0] = xmm[3].f[0] - s.f[0]; }
    /* 0084dc30: sqrtsd xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].f[0] = sqrt(s.f[0]); }
    /* 0084dc34: andpd xmm2, xmm7 */ { XMM s = xmm[7]; xmm[2].q[0] = xmm[2].q[0] & s.q[0]; xmm[2].q[1] = xmm[2].q[1] & s.q[1]; }
    /* 0084dc38: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084dc3b: sub edx, 0xfb00 */ {  u32 a = r_edx; u32 b = 0xfb00u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084dc41: movlpd xmm1, qword ptr [edx*2 + 0x98e120] */ xmm[1].q[0] = R64((u32)(r_edx*2+0x98e120u));
    /* 0084dc4a: orpd xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].q[0] = xmm[2].q[0] | s.q[0]; xmm[2].q[1] = xmm[2].q[1] | s.q[1]; }
    /* 0084dc4e: movapd xmm4, xmmword ptr [edx*4 + 0x98e920] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx*4+0x98e920u), 16); xmm[4] = s; }
    /* 0084dc57: movsd xmm6, xmm7 */ xmm[6].q[0] = xmm[7].q[0];
    /* 0084dc5b: addsd xmm7, xmm2 */ { XMM s = xmm[2]; xmm[7].f[0] = xmm[7].f[0] + s.f[0]; }
    /* 0084dc5f: subsd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; }
    /* 0084dc63: mulsd xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084dc67: mulsd xmm6, xmm1 */ { XMM s = xmm[1]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; }
    /* 0084dc6b: mulsd xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].f[0] = xmm[3].f[0] * s.f[0]; }
    /* 0084dc6f: movsd xmm1, xmm6 */ xmm[1].q[0] = xmm[6].q[0];
    /* 0084dc73: addsd xmm6, xmm3 */ { XMM s = xmm[3]; xmm[6].f[0] = xmm[6].f[0] + s.f[0]; }
    /* 0084dc77: divsd xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].f[0] = xmm[0].f[0] / s.f[0]; }
    /* 0084dc7b: movlpd xmm7, qword ptr [0x98f8c8] */ xmm[7].q[0] = R64((u32)(0x98f8c8u));
    /* 0084dc83: movlpd xmm5, qword ptr [0x98f8b8] */ xmm[5].q[0] = R64((u32)(0x98f8b8u));
    /* 0084dc8b: subsd xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].f[0] = xmm[1].f[0] - s.f[0]; }
    /* 0084dc8f: andpd xmm2, xmmword ptr [0x98f860] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98f860u), 16); xmm[2].q[0] = xmm[2].q[0] & s.q[0]; xmm[2].q[1] = xmm[2].q[1] & s.q[1]; }
    /* 0084dc97: movsd xmm3, xmm1 */ xmm[3].q[0] = xmm[1].q[0];
    /* 0084dc9b: mulsd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084dc9f: movlpd xmm6, qword ptr [0x98f8c0] */ xmm[6].q[0] = R64((u32)(0x98f8c0u));
    /* 0084dca7: mulsd xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].f[0] = xmm[3].f[0] * s.f[0]; }
    /* 0084dcab: mulsd xmm7, xmm1 */ { XMM s = xmm[1]; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; }
    /* 0084dcaf: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084dcb2: mulsd xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].f[0] = xmm[5].f[0] * s.f[0]; }
    /* 0084dcb6: xorpd xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].q[0] = xmm[4].q[0] ^ s.q[0]; xmm[4].q[1] = xmm[4].q[1] ^ s.q[1]; }
    /* 0084dcba: mulsd xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].f[0] = xmm[3].f[0] * s.f[0]; }
    /* 0084dcbe: addsd xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].f[0] = xmm[6].f[0] + s.f[0]; }
    /* 0084dcc2: mulsd xmm6, xmm3 */ { XMM s = xmm[3]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; }
    /* 0084dcc6: addsd xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].f[0] = xmm[5].f[0] + s.f[0]; }
    /* 0084dcca: pshufd xmm4, xmm4, 0xee */ { XMM s = xmm[4]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[4] = r; }
    /* 0084dccf: addsd xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6].f[0] = xmm[6].f[0] + s.f[0]; }
    /* 0084dcd3: orpd xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].q[0] = xmm[4].q[0] | s.q[0]; xmm[4].q[1] = xmm[4].q[1] | s.q[1]; }
    /* 0084dcd7: addsd xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084dcdb: addsd xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084dcdf: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084dce5: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084dce9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084dcec: ret  */ FN_RET(0x0084d184); r_esp += 4; return;
L_0084dced:; BB(0x0084dced);
    /* 0084dced: sub eax, 0x3bb */ {  u32 a = r_eax; u32 b = 0x3bbu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084dcf2: cmp eax, 0x43 */ {  u32 a = r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084dcf5: jae 0x84de20 */ if (!fC) goto L_0084de20;
L_0084dcfb:; BB(0x0084dcfb);
    /* 0084dcfb: mulsd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084dcff: subsd xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].f[0] = xmm[3].f[0] - s.f[0]; }
    /* 0084dd03: sqrtsd xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].f[0] = sqrt(s.f[0]); }
    /* 0084dd07: mov eax, edx */ r_eax = r_edx;
    /* 0084dd09: andpd xmm0, xmmword ptr [0x98f890] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98f890u), 16); xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 0084dd11: andpd xmm7, xmmword ptr [0x98f870] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98f870u), 16); xmm[7].q[0] = xmm[7].q[0] & s.q[0]; xmm[7].q[1] = xmm[7].q[1] & s.q[1]; }
    /* 0084dd19: movsd xmm1, xmm0 */ xmm[1].q[0] = xmm[0].q[0];
    /* 0084dd1d: movlpd xmm4, qword ptr [0x98f8d0] */ xmm[4].q[0] = R64((u32)(0x98f8d0u));
    /* 0084dd25: movsd xmm6, xmm7 */ xmm[6].q[0] = xmm[7].q[0];
    /* 0084dd29: subsd xmm1, xmm7 */ { XMM s = xmm[7]; xmm[1].f[0] = xmm[1].f[0] - s.f[0]; }
    /* 0084dd2d: mulsd xmm7, xmm7 */ { XMM s = xmm[7]; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; }
    /* 0084dd31: addsd xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084dd35: subsd xmm4, xmm7 */ { XMM s = xmm[7]; xmm[4].f[0] = xmm[4].f[0] - s.f[0]; }
    /* 0084dd39: mulsd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084dd3d: movsd xmm7, xmm3 */ xmm[7].q[0] = xmm[3].q[0];
    /* 0084dd41: andpd xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].q[0] = xmm[2].q[0] & s.q[0]; xmm[2].q[1] = xmm[2].q[1] & s.q[1]; }
    /* 0084dd45: psllq xmm3, 2 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2u; r.q = c > 63 ? 0 : (a.q << c); xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2u; r.q = c > 63 ? 0 : (a.q << c); xmm[3].q[1] = r.q; }
    /* 0084dd4a: pextrw edx, xmm3, 3 */ r_edx = (u32)xmm[3].w[3];
    /* 0084dd4f: orpd xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].q[0] = xmm[2].q[0] | s.q[0]; xmm[2].q[1] = xmm[2].q[1] | s.q[1]; }
    /* 0084dd53: sub edx, 0xfec0 */ {  u32 a = r_edx; u32 b = 0xfec0u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084dd59: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084dd5b: mulsd xmm7, qword ptr [edx*4 + 0x98e120] */ { XMM s; s.q[0] = R64((u32)(r_edx*4+0x98e120u)); s.q[1] = 0; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; }
    /* 0084dd64: mulsd xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; }
    /* 0084dd68: movapd xmm3, xmmword ptr [0x98f8a0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98f8a0u), 16); xmm[3] = s; }
    /* 0084dd70: mulsd xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084dd74: mulsd xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].f[0] = xmm[2].f[0] * s.f[0]; }
    /* 0084dd78: subsd xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].f[0] = xmm[6].f[0] - s.f[0]; }
    /* 0084dd7c: addsd xmm6, xmm1 */ { XMM s = xmm[1]; xmm[6].f[0] = xmm[6].f[0] + s.f[0]; }
    /* 0084dd80: subsd xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].f[0] = xmm[4].f[0] - s.f[0]; }
    /* 0084dd84: addsd xmm7, xmm7 */ { XMM s = xmm[7]; xmm[7].f[0] = xmm[7].f[0] + s.f[0]; }
    /* 0084dd88: movlpd xmm5, qword ptr [0x98f8b8] */ xmm[5].q[0] = R64((u32)(0x98f8b8u));
    /* 0084dd90: subsd xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].f[0] = xmm[4].f[0] - s.f[0]; }
    /* 0084dd94: addsd xmm7, xmm6 */ { XMM s = xmm[6]; xmm[7].f[0] = xmm[7].f[0] + s.f[0]; }
    /* 0084dd98: movlpd xmm0, qword ptr [0x98f8c8] */ xmm[0].q[0] = R64((u32)(0x98f8c8u));
    /* 0084dda0: divsd xmm4, xmm7 */ { XMM s = xmm[7]; xmm[4].f[0] = xmm[4].f[0] / s.f[0]; }
    /* 0084dda4: movlpd xmm2, qword ptr [0x98f8c0] */ xmm[2].q[0] = R64((u32)(0x98f8c0u));
    /* 0084ddac: subpd xmm3, xmmword ptr [edx*8 + 0x98e920] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx*8+0x98e920u), 16); xmm[3].f[0] = xmm[3].f[0] - s.f[0]; xmm[3].f[1] = xmm[3].f[1] - s.f[1]; }
    /* 0084ddb5: movsd xmm1, xmm6 */ xmm[1].q[0] = xmm[6].q[0];
    /* 0084ddb9: mulsd xmm6, xmm6 */ { XMM s = xmm[6]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; }
    /* 0084ddbd: and eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084ddc2: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0084ddc5: mulsd xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084ddc9: mulsd xmm1, xmm6 */ { XMM s = xmm[6]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084ddcd: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084ddd0: mulsd xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].f[0] = xmm[5].f[0] * s.f[0]; }
    /* 0084ddd4: mulsd xmm1, xmm6 */ { XMM s = xmm[6]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084ddd8: addsd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084dddc: pxor xmm6, xmm6 */ { MM64 a; a.q = xmm[6].q[0]; MM64 b; b.q = xmm[6].q[0]; MM64 r; r.q = a.q ^ b.q; xmm[6].q[0] = r.q; } { MM64 a; a.q = xmm[6].q[1]; MM64 b; b.q = xmm[6].q[1]; MM64 r; r.q = a.q ^ b.q; xmm[6].q[1] = r.q; }
    /* 0084dde0: mulsd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084dde4: addsd xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].f[0] = xmm[5].f[0] + s.f[0]; }
    /* 0084dde8: pinsrw xmm6, eax, 3 */ xmm[6].w[3] = (u16)(r_eax);
    /* 0084dded: addsd xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084ddf1: movsd xmm5, xmm4 */ xmm[5].q[0] = xmm[4].q[0];
    /* 0084ddf5: pshufd xmm3, xmm3, 0xee */ { XMM s = xmm[3]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[3] = r; }
    /* 0084ddfa: subsd xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].f[0] = xmm[4].f[0] - s.f[0]; }
    /* 0084ddfe: addsd xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].f[0] = xmm[3].f[0] + s.f[0]; }
    /* 0084de02: subsd xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].f[0] = xmm[5].f[0] - s.f[0]; }
    /* 0084de06: subsd xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; }
    /* 0084de0a: subsd xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; }
    /* 0084de0e: orpd xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].q[0] = xmm[0].q[0] | s.q[0]; xmm[0].q[1] = xmm[0].q[1] | s.q[1]; }
    /* 0084de12: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084de18: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084de1c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084de1f: ret  */ FN_RET(0x0084d184); r_esp += 4; return;
L_0084de20:; BB(0x0084de20);
    /* 0084de20: add eax, 0x3bbb */ {  u32 a = r_eax; u32 b = 0x3bbbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084de25: cmp eax, 0x3800 */ {  u32 a = r_eax; u32 b = 0x3800u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084de2a: jae 0x84de9a */ if (!fC) goto L_0084de9a;
L_0084de30:; BB(0x0084de30);
    /* 0084de30: unpcklpd xmm7, xmm7 */ { XMM s = xmm[7]; xmm[7].f[1] = s.f[0]; }
    /* 0084de34: movapd xmm1, xmmword ptr [0x98f820] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98f820u), 16); xmm[1] = s; }
    /* 0084de3c: movapd xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6] = s; }
    /* 0084de40: movapd xmm2, xmmword ptr [0x98f830] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98f830u), 16); xmm[2] = s; }
    /* 0084de48: movapd xmm4, xmmword ptr [0x98f840] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98f840u), 16); xmm[4] = s; }
    /* 0084de50: mulpd xmm7, xmm7 */ { XMM s = xmm[7]; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; xmm[7].f[1] = xmm[7].f[1] * s.f[1]; }
    /* 0084de54: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084de57: mulpd xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; xmm[6].f[1] = xmm[6].f[1] * s.f[1]; }
    /* 0084de5b: mulpd xmm1, xmm7 */ { XMM s = xmm[7]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; xmm[1].f[1] = xmm[1].f[1] * s.f[1]; }
    /* 0084de5f: mulpd xmm7, xmm7 */ { XMM s = xmm[7]; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; xmm[7].f[1] = xmm[7].f[1] * s.f[1]; }
    /* 0084de63: movsd xmm3, xmm6 */ xmm[3].q[0] = xmm[6].q[0];
    /* 0084de67: mulsd xmm6, xmm6 */ { XMM s = xmm[6]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; }
    /* 0084de6b: addpd xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].f[0] = xmm[1].f[0] + s.f[0]; xmm[1].f[1] = xmm[1].f[1] + s.f[1]; }
    /* 0084de6f: mulpd xmm4, xmm7 */ { XMM s = xmm[7]; xmm[4].f[0] = xmm[4].f[0] * s.f[0]; xmm[4].f[1] = xmm[4].f[1] * s.f[1]; }
    /* 0084de73: mulsd xmm6, xmm3 */ { XMM s = xmm[3]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; }
    /* 0084de77: addpd xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].f[0] = xmm[1].f[0] + s.f[0]; xmm[1].f[1] = xmm[1].f[1] + s.f[1]; }
    /* 0084de7b: mulpd xmm1, xmm6 */ { XMM s = xmm[6]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; xmm[1].f[1] = xmm[1].f[1] * s.f[1]; }
    /* 0084de7f: pshufd xmm2, xmm1, 0xee */ { XMM s = xmm[1]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[2] = r; }
    /* 0084de84: addsd xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].f[0] = xmm[1].f[0] + s.f[0]; }
    /* 0084de88: addsd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084de8c: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084de92: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084de96: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084de99: ret  */ FN_RET(0x0084d184); r_esp += 4; return;
L_0084de9a:; BB(0x0084de9a);
    /* 0084de9a: sub eax, 0x3bfe */ {  u32 a = r_eax; u32 b = 0x3bfeu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084de9f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084dea2: jae 0x84dff7 */ if (!fC) goto L_0084dff7;
L_0084dea8:; BB(0x0084dea8);
    /* 0084dea8: mulsd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084deac: subsd xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].f[0] = xmm[3].f[0] - s.f[0]; }
    /* 0084deb0: sqrtsd xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].f[0] = sqrt(s.f[0]); }
    /* 0084deb4: mov eax, edx */ r_eax = r_edx;
    /* 0084deb6: andpd xmm7, xmmword ptr [0x98f880] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98f880u), 16); xmm[7].q[0] = xmm[7].q[0] & s.q[0]; xmm[7].q[1] = xmm[7].q[1] & s.q[1]; }
    /* 0084debe: pshufd xmm5, xmm3, 0x44 */ { XMM s = xmm[3]; XMM r; r.d[0] = s.d[0]; r.d[1] = s.d[1]; r.d[2] = s.d[0]; r.d[3] = s.d[1]; xmm[5] = r; }
    /* 0084dec3: andpd xmm3, xmmword ptr [0x98f880] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98f880u), 16); xmm[3].q[0] = xmm[3].q[0] & s.q[0]; xmm[3].q[1] = xmm[3].q[1] & s.q[1]; }
    /* 0084decb: movsd xmm1, xmm7 */ xmm[1].q[0] = xmm[7].q[0];
    /* 0084decf: movlpd xmm4, qword ptr [0x98f8d0] */ xmm[4].q[0] = R64((u32)(0x98f8d0u));
    /* 0084ded7: movsd xmm6, xmm7 */ xmm[6].q[0] = xmm[7].q[0];
    /* 0084dedb: subsd xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; }
    /* 0084dedf: mulsd xmm7, xmm7 */ { XMM s = xmm[7]; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; }
    /* 0084dee3: addsd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].f[0] = xmm[1].f[0] + s.f[0]; }
    /* 0084dee7: mulsd xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084deeb: subsd xmm4, xmm7 */ { XMM s = xmm[7]; xmm[4].f[0] = xmm[4].f[0] - s.f[0]; }
    /* 0084deef: movsd xmm6, xmm3 */ xmm[6].q[0] = xmm[3].q[0];
    /* 0084def3: mulsd xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].f[0] = xmm[3].f[0] * s.f[0]; }
    /* 0084def7: mulsd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084defb: subsd xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].f[0] = xmm[4].f[0] - s.f[0]; }
    /* 0084deff: subsd xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6].f[0] = xmm[6].f[0] - s.f[0]; }
    /* 0084df03: addsd xmm5, xmm5 */ { XMM s = xmm[5]; xmm[5].f[0] = xmm[5].f[0] + s.f[0]; }
    /* 0084df07: subsd xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].f[0] = xmm[4].f[0] - s.f[0]; }
    /* 0084df0b: movapd xmm2, xmmword ptr [0x98f820] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98f820u), 16); xmm[2] = s; }
    /* 0084df13: pshufd xmm3, xmm5, 0xee */ { XMM s = xmm[5]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[3] = r; }
    /* 0084df18: subsd xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].f[0] = xmm[4].f[0] - s.f[0]; }
    /* 0084df1c: addsd xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].f[0] = xmm[5].f[0] + s.f[0]; }
    /* 0084df20: pshufd xmm7, xmm3, 0xee */ { XMM s = xmm[3]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[7] = r; }
    /* 0084df25: addsd xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].f[0] = xmm[3].f[0] + s.f[0]; }
    /* 0084df29: mulsd xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].f[0] = xmm[5].f[0] * s.f[0]; }
    /* 0084df2d: addsd xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].f[0] = xmm[4].f[0] + s.f[0]; }
    /* 0084df31: pshufd xmm6, xmm7, 0xee */ { XMM s = xmm[7]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[6] = r; }
    /* 0084df36: divsd xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].f[0] = xmm[4].f[0] / s.f[0]; }
    /* 0084df3a: movapd xmm1, xmmword ptr [0x98f850] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98f850u), 16); xmm[1] = s; }
    /* 0084df42: movapd xmm5, xmmword ptr [0x98f830] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98f830u), 16); xmm[5] = s; }
    /* 0084df4a: movapd xmm0, xmmword ptr [0x98f840] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98f840u), 16); xmm[0] = s; }
    /* 0084df52: mulpd xmm7, xmm7 */ { XMM s = xmm[7]; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; xmm[7].f[1] = xmm[7].f[1] * s.f[1]; }
    /* 0084df56: movsd xmm3, xmm6 */ xmm[3].q[0] = xmm[6].q[0];
    /* 0084df5a: mulpd xmm2, xmm7 */ { XMM s = xmm[7]; xmm[2].f[0] = xmm[2].f[0] * s.f[0]; xmm[2].f[1] = xmm[2].f[1] * s.f[1]; }
    /* 0084df5e: mulpd xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; xmm[6].f[1] = xmm[6].f[1] * s.f[1]; }
    /* 0084df62: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0084df65: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084df6a: mulsd xmm1, xmm7 */ { XMM s = xmm[7]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084df6e: mulpd xmm7, xmm7 */ { XMM s = xmm[7]; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; xmm[7].f[1] = xmm[7].f[1] * s.f[1]; }
    /* 0084df72: addpd xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].f[0] = xmm[5].f[0] + s.f[0]; xmm[5].f[1] = xmm[5].f[1] + s.f[1]; }
    /* 0084df76: movapd xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2] = s; }
    /* 0084df7a: mulsd xmm6, xmm6 */ { XMM s = xmm[6]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; }
    /* 0084df7e: mulpd xmm7, xmm0 */ { XMM s = xmm[0]; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; xmm[7].f[1] = xmm[7].f[1] * s.f[1]; }
    /* 0084df82: movapd xmm0, xmmword ptr [0x98f8a0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x98f8a0u), 16); xmm[0] = s; }
    /* 0084df8a: mulsd xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2].f[0] = xmm[2].f[0] * s.f[0]; }
    /* 0084df8e: addpd xmm7, xmm5 */ { XMM s = xmm[5]; xmm[7].f[0] = xmm[7].f[0] + s.f[0]; xmm[7].f[1] = xmm[7].f[1] + s.f[1]; }
    /* 0084df92: pshufd xmm5, xmm1, 0xee */ { XMM s = xmm[1]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[5] = r; }
    /* 0084df97: mulsd xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; }
    /* 0084df9b: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084df9e: mulpd xmm7, xmm2 */ { XMM s = xmm[2]; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; xmm[7].f[1] = xmm[7].f[1] * s.f[1]; }
    /* 0084dfa2: addsd xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].f[0] = xmm[1].f[0] + s.f[0]; }
    /* 0084dfa6: xorpd xmm5, xmm5 */ { XMM s = xmm[5]; xmm[5].q[0] = xmm[5].q[0] ^ s.q[0]; xmm[5].q[1] = xmm[5].q[1] ^ s.q[1]; }
    /* 0084dfaa: pshufd xmm2, xmm7, 0xee */ { XMM s = xmm[7]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[2] = r; }
    /* 0084dfaf: mulsd xmm1, xmm6 */ { XMM s = xmm[6]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084dfb3: pshufd xmm6, xmm0, 0xee */ { XMM s = xmm[0]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[6] = r; }
    /* 0084dfb8: addsd xmm7, xmm2 */ { XMM s = xmm[2]; xmm[7].f[0] = xmm[7].f[0] + s.f[0]; }
    /* 0084dfbc: movsd xmm2, xmm3 */ xmm[2].q[0] = xmm[3].q[0];
    /* 0084dfc0: pinsrw xmm5, eax, 3 */ xmm[5].w[3] = (u16)(r_eax);
    /* 0084dfc5: subsd xmm3, xmm6 */ { XMM s = xmm[6]; xmm[3].f[0] = xmm[3].f[0] - s.f[0]; }
    /* 0084dfc9: addsd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084dfcd: addsd xmm6, xmm3 */ { XMM s = xmm[3]; xmm[6].f[0] = xmm[6].f[0] + s.f[0]; }
    /* 0084dfd1: addsd xmm7, xmm4 */ { XMM s = xmm[4]; xmm[7].f[0] = xmm[7].f[0] + s.f[0]; }
    /* 0084dfd5: subsd xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2].f[0] = xmm[2].f[0] - s.f[0]; }
    /* 0084dfd9: subsd xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; }
    /* 0084dfdd: subsd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; }
    /* 0084dfe1: subsd xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; }
    /* 0084dfe5: orpd xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].q[0] = xmm[0].q[0] | s.q[0]; xmm[0].q[1] = xmm[0].q[1] | s.q[1]; }
    /* 0084dfe9: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084dfef: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084dff3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084dff6: ret  */ FN_RET(0x0084d184); r_esp += 4; return;
L_0084dff7:; BB(0x0084dff7);
    /* 0084dff7: add eax, 0x3fefe */ {  u32 a = r_eax; u32 b = 0x3fefeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084dffc: cmp eax, 0x3ff00 */ {  u32 a = r_eax; u32 b = 0x3ff00u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084e001: jb 0x84e0e6 */ if (fC) goto L_0084e0e6;
L_0084e007:; BB(0x0084e007);
    /* 0084e007: movd ecx, xmm0 */ r_ecx = xmm[0].d[0];
    /* 0084e00b: psrlq xmm0, 0x20 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[0].q[1] = r.q; }
    /* 0084e010: movd edx, xmm0 */ r_edx = xmm[0].d[0];
    /* 0084e014: and edx, 0x7fffffff */ {  u32 a = r_edx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084e01a: mov eax, 0x3ff00000 */ r_eax = 0x3ff00000u;
    /* 0084e01f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084e021: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084e023: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084e026: je 0x84e0b1 */ if (fZ) goto L_0084e0b1;
L_0084e02c:; BB(0x0084e02c);
    /* 0084e02c: movlpd xmm2, qword ptr [esp + 4] */ xmm[2].q[0] = R64((u32)(r_esp+0x4u));
    /* 0084e032: movd edx, xmm2 */ r_edx = xmm[2].d[0];
    /* 0084e036: psrlq xmm2, 0x20 */ { MM64 a; a.q = xmm[2].q[0]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[2].q[0] = r.q; } { MM64 a; a.q = xmm[2].q[1]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[2].q[1] = r.q; }
    /* 0084e03b: movd ecx, xmm2 */ r_ecx = xmm[2].d[0];
    /* 0084e03f: and ecx, 0x7fffffff */ {  u32 a = r_ecx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084e045: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 0084e048: sbb ecx, 0x7ff00000 */ { u32 c = fC; u32 a = r_ecx; u32 b = 0x7ff00000u; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0084e04e: cmp ecx, 0 */ {  u32 a = r_ecx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084e051: jge 0x84e0e6 */ if ((fS==fO)) goto L_0084e0e6;
L_0084e057:; BB(0x0084e057);
    /* 0084e057: xorpd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 0084e05b: xorpd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 0084e05f: mov edx, 0x7ff0 */ r_edx = 0x7ff0u;
    /* 0084e064: pinsrw xmm1, edx, 3 */ xmm[1].w[3] = (u16)(r_edx);
    /* 0084e069: mulsd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084e06d: mov edx, 0x3d */ r_edx = 0x3du;
    /* 0084e072: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084e075: movlpd qword ptr [esp + 0x10], xmm0 */ W64((u32)(r_esp+0x10u), xmm[0].q[0]);
    /* 0084e07b: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0084e07f: mov edx, esp */ r_edx = r_esp;
    /* 0084e081: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084e084: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0084e088: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084e08b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0084e08f: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0084e092: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x84e097u); f_00850eb4();
    /* 0084e097: movlpd xmm0, qword ptr [esp + 0x10] */ xmm[0].q[0] = R64((u32)(r_esp+0x10u));
    /* 0084e09d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0084e0a0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084e0a3: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084e0a9: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084e0ad: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084e0b0: ret  */ FN_RET(0x0084d184); r_esp += 4; return;
L_0084e0b1:; BB(0x0084e0b1);
    /* 0084e0b1: movlpd xmm1, qword ptr [0x98f890] */ xmm[1].q[0] = R64((u32)(0x98f890u));
    /* 0084e0b9: movlpd xmm2, qword ptr [0x98f8a0] */ xmm[2].q[0] = R64((u32)(0x98f8a0u));
    /* 0084e0c1: movlpd xmm0, qword ptr [0x98f8a8] */ xmm[0].q[0] = R64((u32)(0x98f8a8u));
    /* 0084e0c9: addsd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084e0cd: andnpd xmm1, xmm7 */ { XMM s = xmm[7]; xmm[1].q[0] = ~xmm[1].q[0] & s.q[0]; xmm[1].q[1] = ~xmm[1].q[1] & s.q[1]; }
    /* 0084e0d1: orpd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].q[0] = xmm[0].q[0] | s.q[0]; xmm[0].q[1] = xmm[0].q[1] | s.q[1]; }
    /* 0084e0d5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084e0d8: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084e0de: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084e0e2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084e0e5: ret  */ FN_RET(0x0084d184); r_esp += 4; return;
L_0084e0e6:; BB(0x0084e0e6);
    /* 0084e0e6: movlpd xmm0, qword ptr [esp + 4] */ xmm[0].q[0] = R64((u32)(r_esp+0x4u));
    /* 0084e0ec: xorpd xmm6, xmm6 */ { XMM s = xmm[6]; xmm[6].q[0] = xmm[6].q[0] ^ s.q[0]; xmm[6].q[1] = xmm[6].q[1] ^ s.q[1]; }
    /* 0084e0f0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084e0f3: movsd xmm7, xmm0 */ xmm[7].q[0] = xmm[0].q[0];
    /* 0084e0f7: pextrw edx, xmm0, 3 */ r_edx = (u32)xmm[0].w[3];
    /* 0084e0fc: and edx, 0x7ff0 */ {  u32 a = r_edx; u32 b = 0x7ff0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084e102: sub edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084e105: cmp edx, 0x7fe0 */ {  u32 a = r_edx; u32 b = 0x7fe0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084e10b: jb 0x84e119 */ if (fC) goto L_0084e119;
L_0084e10d:; BB(0x0084e10d);
    /* 0084e10d: addsd xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].f[0] = xmm[6].f[0] + s.f[0]; }
    /* 0084e111: orpd xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].q[0] = xmm[0].q[0] | s.q[0]; xmm[0].q[1] = xmm[0].q[1] | s.q[1]; }
    /* 0084e115: mulsd xmm7, xmm0 */ { XMM s = xmm[0]; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; }
L_0084e119:; BB(0x0084e119);
    /* 0084e119: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084e11f: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084e123: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084e126: ret  */ FN_RET(0x0084d184); r_esp += 4; return;
L_0084e128:; BB(0x0084e128);
    /* 0084e128: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084e129: mov ebx, esp */ r_ebx = r_esp;
    /* 0084e12b: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0084e12e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084e12f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084e130: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0084e133: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0084e137: mov ebp, esp */ r_ebp = r_esp;
    /* 0084e139: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084e13c: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0084e13f: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 0084e142: mov edx, 0 */ r_edx = 0x0u;
    /* 0084e147: fnstcw word ptr [ebp - 0x10] */ W16((u32)(r_ebp+0xfffffff0u), fcw);
    /* 0084e14a: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0084e14d: mov eax, ecx */ r_eax = r_ecx;
    /* 0084e14f: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084e154: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0084e157: cmp eax, 0x3ff00000 */ {  u32 a = r_eax; u32 b = 0x3ff00000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084e15c: jae 0x84e44b */ if (!fC) goto L_0084e44b;
L_0084e162:; BB(0x0084e162);
    /* 0084e162: cmp eax, 0x3fd87de3 */ {  u32 a = r_eax; u32 b = 0x3fd87de3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084e167: ja 0x84e348 */ if ((!fC&&!fZ)) goto L_0084e348;
L_0084e16d:; BB(0x0084e16d);
    /* 0084e16d: cmp eax, 0x3fb00000 */ {  u32 a = r_eax; u32 b = 0x3fb00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084e172: jae 0x84e261 */ if (!fC) goto L_0084e261;
L_0084e178:; BB(0x0084e178);
    /* 0084e178: cmp eax, 0x3f900000 */ {  u32 a = r_eax; u32 b = 0x3f900000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084e17d: jae 0x84e210 */ if (!fC) goto L_0084e210;
L_0084e183:; BB(0x0084e183);
    /* 0084e183: cmp eax, 0x3c600000 */ {  u32 a = r_eax; u32 b = 0x3c600000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084e188: jae 0x84e1d3 */ if (!fC) goto L_0084e1d3;
L_0084e18a:; BB(0x0084e18a);
    /* 0084e18a: cmp eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084e18f: jb 0x84e1a3 */ if (fC) goto L_0084e1a3;
L_0084e191:; BB(0x0084e191);
    /* 0084e191: fld qword ptr [ecx*8 + 0x98fa48] */ FPUSH(R_F64((u32)(r_ecx*8+0x98fa48u)));
    /* 0084e198: fmul qword ptr [0x98fa48] */ ST(0) = ST(0) * R_F64((u32)(0x98fa48u));
    /* 0084e19e: fadd qword ptr [ebx + 8] */ ST(0) = ST(0) + R_F64((u32)(r_ebx+0x8u));
    /* 0084e1a1: jmp 0x84e1c6 */ goto L_0084e1c6;
L_0084e1a3:; BB(0x0084e1a3);
    /* 0084e1a3: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0084e1a6: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084e1a8: je 0x84e1c3 */ if (fZ) goto L_0084e1c3;
L_0084e1aa:; BB(0x0084e1aa);
    /* 0084e1aa: fld qword ptr [ecx*8 + 0x98fa48] */ FPUSH(R_F64((u32)(r_ecx*8+0x98fa48u)));
    /* 0084e1b1: fmul qword ptr [0x98fa48] */ ST(0) = ST(0) * R_F64((u32)(0x98fa48u));
    /* 0084e1b7: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e1ba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e1bc: fst qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 0084e1bf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084e1c1: jmp 0x84e1c6 */ goto L_0084e1c6;
L_0084e1c3:; BB(0x0084e1c3);
    /* 0084e1c3: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
L_0084e1c6:; BB(0x0084e1c6);
    /* 0084e1c6: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0084e1c9: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0084e1cc: mov esp, ebp */ r_esp = r_ebp;
    /* 0084e1ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084e1cf: mov esp, ebx */ r_esp = r_ebx;
    /* 0084e1d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084e1d2: ret  */ FN_RET(0x0084d184); r_esp += 4; return;
L_0084e1d3:; BB(0x0084e1d3);
    /* 0084e1d3: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e1d6: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e1d9: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084e1db: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084e1dd: fld qword ptr [0x98f978] */ FPUSH(R_F64((u32)(0x98f978u)));
    /* 0084e1e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e1e5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084e1e7: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0084e1e9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e1eb: fadd qword ptr [0x98f980] */ ST(0) = ST(0) + R_F64((u32)(0x98f980u));
    /* 0084e1f1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084e1f3: fld qword ptr [0x98f970] */ FPUSH(R_F64((u32)(0x98f970u)));
    /* 0084e1f9: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084e1fb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e1fd: fadd qword ptr [0x98f998] */ ST(0) = ST(0) + R_F64((u32)(0x98f998u));
    /* 0084e203: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084e205: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084e207: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084e209: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084e20b: jmp 0x84e33b */ goto L_0084e33b;
L_0084e210:; BB(0x0084e210);
    /* 0084e210: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e213: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e216: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084e218: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084e21a: fld qword ptr [0x98f9a0] */ FPUSH(R_F64((u32)(0x98f9a0u)));
    /* 0084e220: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e222: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084e224: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0084e226: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e228: fadd qword ptr [0x98f9a8] */ ST(0) = ST(0) + R_F64((u32)(0x98f9a8u));
    /* 0084e22e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084e230: fld qword ptr [0x98f988] */ FPUSH(R_F64((u32)(0x98f988u)));
    /* 0084e236: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0084e238: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e23a: fadd qword ptr [0x98f9b0] */ ST(0) = ST(0) + R_F64((u32)(0x98f9b0u));
    /* 0084e240: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0084e242: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e244: fadd qword ptr [0x98f990] */ ST(0) = ST(0) + R_F64((u32)(0x98f990u));
    /* 0084e24a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084e24c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e24e: fadd qword ptr [0x98f998] */ ST(0) = ST(0) + R_F64((u32)(0x98f998u));
    /* 0084e254: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084e256: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084e258: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084e25a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084e25c: jmp 0x84e33b */ goto L_0084e33b;
L_0084e261:; BB(0x0084e261);
    /* 0084e261: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e264: fmul qword ptr [0x98fa30] */ ST(0) = ST(0) * R_F64((u32)(0x98fa30u));
    /* 0084e26a: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e26d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e26f: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0084e272: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e275: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e278: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084e27a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084e27c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084e27e: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 0084e281: fld qword ptr [0x98fa28] */ FPUSH(R_F64((u32)(0x98fa28u)));
    /* 0084e287: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084e289: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0084e28b: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 0084e28d: fld qword ptr [0x98f9c0] */ FPUSH(R_F64((u32)(0x98f9c0u)));
    /* 0084e293: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0084e295: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084e297: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0084e299: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084e29b: fadd qword ptr [0x98f9c8] */ ST(0) = ST(0) + R_F64((u32)(0x98f9c8u));
    /* 0084e2a1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0084e2a3: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0084e2a5: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084e2a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e2a9: fadd qword ptr [0x98f9d0] */ ST(0) = ST(0) + R_F64((u32)(0x98f9d0u));
    /* 0084e2af: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0084e2b1: fadd qword ptr [0x98f9d8] */ ST(0) = ST(0) + R_F64((u32)(0x98f9d8u));
    /* 0084e2b7: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0084e2b9: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0084e2bb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084e2bd: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084e2bf: fadd qword ptr [0x98f9e0] */ ST(0) = ST(0) + R_F64((u32)(0x98f9e0u));
    /* 0084e2c5: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0084e2c7: fadd qword ptr [0x98f9e8] */ ST(0) = ST(0) + R_F64((u32)(0x98f9e8u));
    /* 0084e2cd: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0084e2cf: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084e2d1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084e2d3: fld qword ptr [0x98f9f0] */ FPUSH(R_F64((u32)(0x98f9f0u)));
    /* 0084e2d9: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0084e2db: fadd qword ptr [0x98f9f8] */ ST(0) = ST(0) + R_F64((u32)(0x98f9f8u));
    /* 0084e2e1: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0084e2e3: fadd qword ptr [0x98fa00] */ ST(0) = ST(0) + R_F64((u32)(0x98fa00u));
    /* 0084e2e9: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0084e2eb: fadd qword ptr [0x98fa08] */ ST(0) = ST(0) + R_F64((u32)(0x98fa08u));
    /* 0084e2f1: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0084e2f3: fadd qword ptr [0x98fa10] */ ST(0) = ST(0) + R_F64((u32)(0x98fa10u));
    /* 0084e2f9: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0084e2fb: fadd qword ptr [0x98fa18] */ ST(0) = ST(0) + R_F64((u32)(0x98fa18u));
    /* 0084e301: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0084e303: fld qword ptr [0x98f9b8] */ FPUSH(R_F64((u32)(0x98f9b8u)));
    /* 0084e309: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 0084e30b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084e30d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084e30f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0084e311: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084e313: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084e315: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0084e317: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084e319: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084e31b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084e31d: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0084e31f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084e321: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084e323: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0084e325: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084e327: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0084e329: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084e32b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0084e32d: fsubr st(4) */ ST(0) = ST(4) - ST(0);
    /* 0084e32f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084e331: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084e333: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e335: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0084e337: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084e339: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_0084e33b:; BB(0x0084e33b);
    /* 0084e33b: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0084e33e: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0084e341: mov esp, ebp */ r_esp = r_ebp;
    /* 0084e343: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084e344: mov esp, ebx */ r_esp = r_ebx;
    /* 0084e346: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084e347: ret  */ FN_RET(0x0084d184); r_esp += 4; return;
L_0084e348:; BB(0x0084e348);
    /* 0084e348: movzx edi, word ptr [ebp - 0x10] */ r_edi = (u32)R16((u32)(r_ebp+0xfffffff0u));
    /* 0084e34c: mov esi, edi */ r_esi = r_edi;
    /* 0084e34e: and esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0084e354: cmp esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084e35a: je 0x84e36e */ if (fZ) goto L_0084e36e;
L_0084e35c:; BB(0x0084e35c);
    /* 0084e35c: or edi, 0xffff0300 */ {  u32 a = r_edi; u32 b = 0xffff0300u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0084e362: mov word ptr [ebp - 0xc], di */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_edi);
    /* 0084e366: fldcw word ptr [ebp - 0xc] */ fcw = R16((u32)(r_ebp+0xfffffff4u));
    /* 0084e369: mov edx, 1 */ r_edx = 0x1u;
L_0084e36e:; BB(0x0084e36e);
    /* 0084e36e: fld qword ptr [0x98fa38] */ FPUSH(R_F64((u32)(0x98fa38u)));
    /* 0084e374: cmp eax, 0x3fed906b */ {  u32 a = r_eax; u32 b = 0x3fed906bu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084e379: jae 0x84e39b */ if (!fC) goto L_0084e39b;
L_0084e37b:; BB(0x0084e37b);
    /* 0084e37b: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e37e: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e381: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e383: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084e385: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0084e387: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e389: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0084e38b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e38d: fabs  */ ST(0) = fabsl(ST(0));
    /* 0084e38f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e391: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0084e393: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0084e396: jmp 0x84e42e */ goto L_0084e42e;
L_0084e39b:; BB(0x0084e39b);
    /* 0084e39b: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e39e: fld xword ptr [0x98f950] */ FPUSH(R_F80((u32)(0x98f950u)));
    /* 0084e3a4: fld xword ptr [0x98f930] */ FPUSH(R_F80((u32)(0x98f930u)));
    /* 0084e3aa: fld xword ptr [0x98f910] */ FPUSH(R_F80((u32)(0x98f910u)));
    /* 0084e3b0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084e3b2: fabs  */ ST(0) = fabsl(ST(0));
    /* 0084e3b4: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 0084e3b6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084e3b8: fmul qword ptr [0x98fa20] */ ST(0) = ST(0) * R_F64((u32)(0x98fa20u));
    /* 0084e3be: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0084e3c0: fld xword ptr [0x98f8f0] */ FPUSH(R_F80((u32)(0x98f8f0u)));
    /* 0084e3c6: fld xword ptr [0x98f940] */ FPUSH(R_F80((u32)(0x98f940u)));
    /* 0084e3cc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084e3ce: fst qword ptr [ebx + 8] */ W_F64((u32)(r_ebx+0x8u), ST(0));
    /* 0084e3d1: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084e3d3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084e3d5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084e3d7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084e3d9: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0084e3db: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0084e3dd: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084e3df: faddp st(7) */ ST(7) = ST(7) + ST(0); FPOP();
    /* 0084e3e1: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084e3e3: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 0084e3e5: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0084e3e7: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0084e3e9: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084e3eb: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084e3ed: fld xword ptr [0x98f920] */ FPUSH(R_F80((u32)(0x98f920u)));
    /* 0084e3f3: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0084e3f5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084e3f7: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084e3f9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084e3fb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084e3fd: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0084e3ff: fld xword ptr [0x98f900] */ FPUSH(R_F80((u32)(0x98f900u)));
    /* 0084e405: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0084e407: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084e409: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084e40b: fld xword ptr [0x98f8e0] */ FPUSH(R_F80((u32)(0x98f8e0u)));
    /* 0084e411: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084e413: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084e415: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0084e417: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0084e419: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084e41b: fld xword ptr [0x98fa58] */ FPUSH(R_F80((u32)(0x98fa58u)));
    /* 0084e421: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e423: fmul qword ptr [0x98f968] */ ST(0) = ST(0) * R_F64((u32)(0x98f968u));
    /* 0084e429: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084e42b: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
L_0084e42e:; BB(0x0084e42e);
    /* 0084e42e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084e430: je 0x84e435 */ if (fZ) goto L_0084e435;
L_0084e432:; BB(0x0084e432);
    /* 0084e432: fldcw word ptr [ebp - 0x10] */ fcw = R16((u32)(r_ebp+0xfffffff0u));
L_0084e435:; BB(0x0084e435);
    /* 0084e435: fld qword ptr [ebp - 0x20] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe0u)));
    /* 0084e438: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084e43a: je 0x84e43e */ if (fZ) goto L_0084e43e;
L_0084e43c:; BB(0x0084e43c);
    /* 0084e43c: fchs  */ ST(0) = -ST(0);
L_0084e43e:; BB(0x0084e43e);
    /* 0084e43e: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0084e441: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0084e444: mov esp, ebp */ r_esp = r_ebp;
    /* 0084e446: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084e447: mov esp, ebx */ r_esp = r_ebx;
    /* 0084e449: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084e44a: ret  */ FN_RET(0x0084d184); r_esp += 4; return;
L_0084e44b:; BB(0x0084e44b);
    /* 0084e44b: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 0084e44e: lea edx, [eax - 0x3ff00000] */ r_edx = (u32)(r_eax+0xc0100000u);
    /* 0084e454: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084e456: je 0x84e475 */ if (fZ) goto L_0084e475;
L_0084e458:; BB(0x0084e458);
    /* 0084e458: add eax, 0x80100000 */ {  u32 a = r_eax; u32 b = 0x80100000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084e45d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0084e45f: jl 0x84e493 */ if ((fS!=fO)) goto L_0084e493;
L_0084e461:; BB(0x0084e461);
    /* 0084e461: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084e463: je 0x84e493 */ if (fZ) goto L_0084e493;
L_0084e465:; BB(0x0084e465);
    /* 0084e465: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e468: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0084e46b: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0084e46e: mov esp, ebp */ r_esp = r_ebp;
    /* 0084e470: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084e471: mov esp, ebx */ r_esp = r_ebx;
    /* 0084e473: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084e474: ret  */ FN_RET(0x0084d184); r_esp += 4; return;
L_0084e475:; BB(0x0084e475);
    /* 0084e475: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0084e478: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0084e47b: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0084e47e: fld xword ptr [edx*8 + 0x98fa58] */ FPUSH(R_F80((u32)(r_edx*8+0x98fa58u)));
    /* 0084e485: fsub qword ptr [ecx*8 + 0x98fa48] */ ST(0) = ST(0) - R_F64((u32)(r_ecx*8+0x98fa48u));
    /* 0084e48c: mov esp, ebp */ r_esp = r_ebp;
    /* 0084e48e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084e48f: mov esp, ebx */ r_esp = r_ebx;
    /* 0084e491: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084e492: ret  */ FN_RET(0x0084d184); r_esp += 4; return;
L_0084e493:; BB(0x0084e493);
    /* 0084e493: fld qword ptr [0x98fa88] */ FPUSH(R_F64((u32)(0x98fa88u)));
    /* 0084e499: fmul qword ptr [0x98fa78] */ ST(0) = ST(0) * R_F64((u32)(0x98fa78u));
    /* 0084e49f: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0084e4a2: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0084e4a5: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 0084e4a8: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 0084e4ab: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 0084e4ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084e4ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084e4af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0084e4b0: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x84e4b5u); f_00850eb4();
    /* 0084e4b5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084e4b8: fld qword ptr [ebp - 0x20] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe0u)));
    /* 0084e4bb: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0084e4be: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0084e4c1: mov esp, ebp */ r_esp = r_ebp;
    /* 0084e4c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084e4c4: mov esp, ebx */ r_esp = r_ebx;
    /* 0084e4c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084e4c7: ret  */ FN_RET(0x0084d184); r_esp += 4; return;
}

void f_0084d1ac(void) /* sub_84D1AC */
{
    FN_ENTER(0x0084d1ac);
L_0084d1ac:; BB(0x0084d1ac);
    /* 0084d1ac: test dword ptr [0xae7f00], 0xfffffe00 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xfffffe00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084d1b6: jne 0x84e4c8 */ if (!fZ) goto L_0084e4c8;
L_0084d1bc:; BB(0x0084d1bc);
    /* 0084d1bc: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084d1c6: jne 0x84e754 */ if (!fZ) goto L_0084e754;
L_0084d1cc:; BB(0x0084d1cc);
    /* 0084d1cc: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x84d1d1u); f_0086b8a0();
    /* 0084d1d1: jmp 0x84d1ac */ goto L_0084d1ac;
L_0084e4c8:; BB(0x0084e4c8);
    /* 0084e4c8: movlpd xmm0, qword ptr [esp + 4] */ xmm[0].q[0] = R64((u32)(r_esp+0x4u));
    /* 0084e4ce: mov edx, 0 */ r_edx = 0x0u;
L_0084e4d3:; BB(0x0084e4d3);
    /* 0084e4d3: movapd xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 0084e4d7: unpcklpd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[1] = s.f[0]; }
    /* 0084e4db: psrlq xmm5, 0x34 */ { MM64 a; a.q = xmm[5].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x34u; r.q = c > 63 ? 0 : (a.q >> c); xmm[5].q[0] = r.q; } { MM64 a; a.q = xmm[5].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x34u; r.q = c > 63 ? 0 : (a.q >> c); xmm[5].q[1] = r.q; }
    /* 0084e4e0: pextrw ecx, xmm5, 0 */ r_ecx = (u32)xmm[5].w[0];
    /* 0084e4e5: movapd xmm1, xmmword ptr [0x990440] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x990440u), 16); xmm[1] = s; }
    /* 0084e4ed: movapd xmm3, xmmword ptr [0x990450] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x990450u), 16); xmm[3] = s; }
    /* 0084e4f5: movapd xmm4, xmmword ptr [0x9903b0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x9903b0u), 16); xmm[4] = s; }
    /* 0084e4fd: movapd xmm6, xmmword ptr [0x9903c0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x9903c0u), 16); xmm[6] = s; }
    /* 0084e505: andpd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 0084e509: orpd xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].q[0] = xmm[0].q[0] | s.q[0]; xmm[0].q[1] = xmm[0].q[1] | s.q[1]; }
    /* 0084e50d: addpd xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].f[0] = xmm[4].f[0] + s.f[0]; xmm[4].f[1] = xmm[4].f[1] + s.f[1]; }
    /* 0084e511: pextrw eax, xmm4, 0 */ r_eax = (u32)xmm[4].w[0];
    /* 0084e516: and eax, 0x7f0 */ {  u32 a = r_eax; u32 b = 0x7f0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084e51b: movapd xmm4, xmmword ptr [eax + 0x98fb80] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x98fb80u), 16); xmm[4] = s; }
    /* 0084e523: movapd xmm7, xmmword ptr [eax + 0x98ffa0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x98ffa0u), 16); xmm[7] = s; }
    /* 0084e52b: andpd xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].q[0] = xmm[6].q[0] & s.q[0]; xmm[6].q[1] = xmm[6].q[1] & s.q[1]; }
    /* 0084e52f: subpd xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; xmm[0].f[1] = xmm[0].f[1] - s.f[1]; }
    /* 0084e533: mulpd xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; xmm[6].f[1] = xmm[6].f[1] * s.f[1]; }
    /* 0084e537: subpd xmm6, xmm3 */ { XMM s = xmm[3]; xmm[6].f[0] = xmm[6].f[0] - s.f[0]; xmm[6].f[1] = xmm[6].f[1] - s.f[1]; }
    /* 0084e53b: addsd xmm7, xmm6 */ { XMM s = xmm[6]; xmm[7].f[0] = xmm[7].f[0] + s.f[0]; }
    /* 0084e53f: mulpd xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; xmm[0].f[1] = xmm[0].f[1] * s.f[1]; }
    /* 0084e543: movapd xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4] = s; }
    /* 0084e547: addpd xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; xmm[0].f[1] = xmm[0].f[1] + s.f[1]; }
    /* 0084e54b: and ecx, 0xfff */ {  u32 a = r_ecx; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084e551: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084e554: cmp ecx, 0x7fd */ {  u32 a = r_ecx; u32 b = 0x7fdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084e55a: ja 0x84e60e */ if ((!fC&&!fZ)) goto L_0084e60e;
L_0084e560:; BB(0x0084e560);
    /* 0084e560: sub ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084e566: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084e568: cvtsi2sd xmm6, ecx */ xmm[6].f[0] = (double)(i32)(r_ecx);
    /* 0084e56c: unpcklpd xmm6, xmm6 */ { XMM s = xmm[6]; xmm[6].f[1] = s.f[0]; }
    /* 0084e570: shl ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0084e573: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084e575: mov ecx, 0x10 */ r_ecx = 0x10u;
    /* 0084e57a: mov edx, 0 */ r_edx = 0x0u;
    /* 0084e57f: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084e582: cmove edx, ecx */ if (fZ) { r_edx = r_ecx; }
    /* 0084e585: movapd xmm1, xmmword ptr [0x9903d0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x9903d0u), 16); xmm[1] = s; }
    /* 0084e58d: movapd xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 0084e591: movapd xmm2, xmmword ptr [0x9903e0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x9903e0u), 16); xmm[2] = s; }
    /* 0084e599: mulpd xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; xmm[1].f[1] = xmm[1].f[1] * s.f[1]; }
    /* 0084e59d: mulpd xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].f[0] = xmm[3].f[0] * s.f[0]; xmm[3].f[1] = xmm[3].f[1] * s.f[1]; }
    /* 0084e5a1: addpd xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].f[0] = xmm[1].f[0] + s.f[0]; xmm[1].f[1] = xmm[1].f[1] + s.f[1]; }
    /* 0084e5a5: movapd xmm2, xmmword ptr [0x9903f0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x9903f0u), 16); xmm[2] = s; }
    /* 0084e5ad: mulsd xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].f[0] = xmm[3].f[0] * s.f[0]; }
    /* 0084e5b1: movapd xmm5, xmmword ptr [0x990400] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x990400u), 16); xmm[5] = s; }
    /* 0084e5b9: mulpd xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; xmm[6].f[1] = xmm[6].f[1] * s.f[1]; }
    /* 0084e5bd: movapd xmm5, xmmword ptr [edx + 0x990410] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+0x990410u), 16); xmm[5] = s; }
    /* 0084e5c5: andpd xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].q[0] = xmm[4].q[0] & s.q[0]; xmm[4].q[1] = xmm[4].q[1] & s.q[1]; }
    /* 0084e5c9: addpd xmm7, xmm6 */ { XMM s = xmm[6]; xmm[7].f[0] = xmm[7].f[0] + s.f[0]; xmm[7].f[1] = xmm[7].f[1] + s.f[1]; }
    /* 0084e5cd: addpd xmm7, xmm4 */ { XMM s = xmm[4]; xmm[7].f[0] = xmm[7].f[0] + s.f[0]; xmm[7].f[1] = xmm[7].f[1] + s.f[1]; }
    /* 0084e5d1: mulpd xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; xmm[1].f[1] = xmm[1].f[1] * s.f[1]; }
    /* 0084e5d5: mulsd xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].f[0] = xmm[3].f[0] * s.f[0]; }
    /* 0084e5d9: addpd xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].f[0] = xmm[1].f[0] + s.f[0]; xmm[1].f[1] = xmm[1].f[1] + s.f[1]; }
    /* 0084e5dd: movapd xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6] = s; }
    /* 0084e5e1: unpckhpd xmm6, xmm6 */ { XMM s = xmm[6]; xmm[6].f[0] = xmm[6].f[1]; xmm[6].f[1] = s.f[1]; }
    /* 0084e5e5: mulpd xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; xmm[1].f[1] = xmm[1].f[1] * s.f[1]; }
    /* 0084e5e9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084e5ec: movapd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 0084e5f0: unpckhpd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].f[0] = xmm[1].f[1]; xmm[1].f[1] = s.f[1]; }
    /* 0084e5f4: addsd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084e5f8: addsd xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084e5fc: addsd xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084e600: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084e606: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084e60a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084e60d: ret  */ FN_RET(0x0084d1ac); r_esp += 4; return;
L_0084e60e:; BB(0x0084e60e);
    /* 0084e60e: movlpd xmm0, qword ptr [esp + 4] */ xmm[0].q[0] = R64((u32)(r_esp+0x4u));
    /* 0084e614: movapd xmm1, xmmword ptr [0x990430] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x990430u), 16); xmm[1] = s; }
    /* 0084e61c: cmpeqsd xmm1, xmm0 */ { XMM s = xmm[0]; double a = xmm[1].f[0]; double b = s.f[0]; xmm[1].q[0] = (a == b) ? ~0ull : 0ull; }
    /* 0084e621: pextrw eax, xmm1, 0 */ r_eax = (u32)xmm[1].w[0];
    /* 0084e626: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084e629: ja 0x84e697 */ if ((!fC&&!fZ)) goto L_0084e697;
L_0084e62f:; BB(0x0084e62f);
    /* 0084e62f: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084e632: je 0x84e6b5 */ if (fZ) goto L_0084e6b5;
L_0084e638:; BB(0x0084e638);
    /* 0084e638: cmp ecx, 0x7fe */ {  u32 a = r_ecx; u32 b = 0x7feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084e63e: ja 0x84e6cb */ if ((!fC&&!fZ)) goto L_0084e6cb;
L_0084e644:; BB(0x0084e644);
    /* 0084e644: movlpd xmm0, qword ptr [esp + 4] */ xmm[0].q[0] = R64((u32)(r_esp+0x4u));
    /* 0084e64a: movapd xmm1, xmmword ptr [0x990440] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x990440u), 16); xmm[1] = s; }
    /* 0084e652: movapd xmm2, xmmword ptr [0x990450] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x990450u), 16); xmm[2] = s; }
    /* 0084e65a: andpd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 0084e65e: orpd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].q[0] = xmm[0].q[0] | s.q[0]; xmm[0].q[1] = xmm[0].q[1] | s.q[1]; }
    /* 0084e662: cmpeqsd xmm2, xmm0 */ { XMM s = xmm[0]; double a = xmm[2].f[0]; double b = s.f[0]; xmm[2].q[0] = (a == b) ? ~0ull : 0ull; }
    /* 0084e667: pextrw eax, xmm2, 0 */ r_eax = (u32)xmm[2].w[0];
    /* 0084e66c: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084e66f: je 0x84e67c */ if (fZ) goto L_0084e67c;
L_0084e675:; BB(0x0084e675);
    /* 0084e675: fld qword ptr [0x990468] */ FPUSH(R_F64((u32)(0x990468u)));
    /* 0084e67b: ret  */ FN_RET(0x0084d1ac); r_esp += 4; return;
L_0084e67c:; BB(0x0084e67c);
    /* 0084e67c: movlpd xmm0, qword ptr [esp + 4] */ xmm[0].q[0] = R64((u32)(r_esp+0x4u));
    /* 0084e682: addsd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084e686: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084e689: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084e68f: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084e693: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084e696: ret  */ FN_RET(0x0084d1ac); r_esp += 4; return;
L_0084e697:; BB(0x0084e697);
    /* 0084e697: movlpd xmm2, qword ptr [0x990450] */ xmm[2].q[0] = R64((u32)(0x990450u));
    /* 0084e69f: divsd xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].f[0] = xmm[2].f[0] / s.f[0]; }
    /* 0084e6a3: movlpd xmm1, qword ptr [0x990460] */ xmm[1].q[0] = R64((u32)(0x990460u));
    /* 0084e6ab: mov edx, 2 */ r_edx = 0x2u;
    /* 0084e6b0: jmp 0x84e6e9 */ goto L_0084e6e9;
L_0084e6b5:; BB(0x0084e6b5);
    /* 0084e6b5: movlpd xmm1, qword ptr [0x990470] */ xmm[1].q[0] = R64((u32)(0x990470u));
    /* 0084e6bd: mulsd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084e6c1: mov edx, 0xffffffcc */ r_edx = 0xffffffccu;
    /* 0084e6c6: jmp 0x84e4d3 */ goto L_0084e4d3;
L_0084e6cb:; BB(0x0084e6cb);
    /* 0084e6cb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084e6ce: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084e6d4: cmp ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084e6da: jae 0x84e716 */ if (!fC) goto L_0084e716;
L_0084e6dc:; BB(0x0084e6dc);
    /* 0084e6dc: xorpd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 0084e6e0: divsd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].f[0] = xmm[1].f[0] / s.f[0]; }
    /* 0084e6e4: mov edx, 3 */ r_edx = 0x3u;
L_0084e6e9:; BB(0x0084e6e9);
    /* 0084e6e9: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084e6ec: movlpd qword ptr [esp + 0x10], xmm1 */ W64((u32)(r_esp+0x10u), xmm[1].q[0]);
    /* 0084e6f2: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0084e6f6: mov edx, esp */ r_edx = r_esp;
    /* 0084e6f8: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084e6fb: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0084e6ff: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084e702: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0084e706: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0084e709: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x84e70eu); f_00850eb4();
    /* 0084e70e: fld qword ptr [esp + 0x10] */ FPUSH(R_F64((u32)(r_esp+0x10u)));
    /* 0084e712: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084e715: ret  */ FN_RET(0x0084d1ac); r_esp += 4; return;
L_0084e716:; BB(0x0084e716);
    /* 0084e716: movlpd xmm2, qword ptr [esp + 4] */ xmm[2].q[0] = R64((u32)(r_esp+0x4u));
    /* 0084e71c: movlpd xmm0, qword ptr [esp + 4] */ xmm[0].q[0] = R64((u32)(r_esp+0x4u));
    /* 0084e722: movd eax, xmm2 */ r_eax = xmm[2].d[0];
    /* 0084e726: psrlq xmm2, 0x20 */ { MM64 a; a.q = xmm[2].q[0]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[2].q[0] = r.q; } { MM64 a; a.q = xmm[2].q[1]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[2].q[1] = r.q; }
    /* 0084e72b: movd ecx, xmm2 */ r_ecx = xmm[2].d[0];
    /* 0084e72f: and ecx, 0xfffff */ {  u32 a = r_ecx; u32 b = 0xfffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084e735: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084e737: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084e73a: je 0x84e6dc */ if (fZ) goto L_0084e6dc;
L_0084e73c:; BB(0x0084e73c);
    /* 0084e73c: addsd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084e740: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084e743: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084e749: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084e74d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084e750: ret  */ FN_RET(0x0084d1ac); r_esp += 4; return;
L_0084e754:; BB(0x0084e754);
    /* 0084e754: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084e755: mov ebx, esp */ r_ebx = r_esp;
    /* 0084e757: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0084e75a: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084e75d: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0084e760: cmp eax, 0x7ff00000 */ {  u32 a = r_eax; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084e765: jae 0x84e97e */ if (!fC) goto L_0084e97e;
L_0084e76b:; BB(0x0084e76b);
    /* 0084e76b: lea edx, [eax - 0x3fef8000] */ r_edx = (u32)(r_eax+0xc0108000u);
    /* 0084e771: cmp edx, 0xc000 */ {  u32 a = r_edx; u32 b = 0xc000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084e777: jae 0x84e87e */ if (!fC) goto L_0084e87e;
L_0084e77d:; BB(0x0084e77d);
    /* 0084e77d: lea edx, [eax - 0x3fefff00] */ r_edx = (u32)(r_eax+0xc0100100u);
    /* 0084e783: cmp edx, 0x180 */ {  u32 a = r_edx; u32 b = 0x180u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084e789: jae 0x84e7d8 */ if (!fC) goto L_0084e7d8;
L_0084e78b:; BB(0x0084e78b);
    /* 0084e78b: add eax, 0xc0100000 */ {  u32 a = r_eax; u32 b = 0xc0100000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084e790: or eax, dword ptr [ebx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084e793: jne 0x84e79f */ if (!fZ) goto L_0084e79f;
L_0084e795:; BB(0x0084e795);
    /* 0084e795: fld qword ptr [0x990538] */ FPUSH(R_F64((u32)(0x990538u)));
    /* 0084e79b: mov esp, ebx */ r_esp = r_ebx;
    /* 0084e79d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084e79e: ret  */ FN_RET(0x0084d1ac); r_esp += 4; return;
L_0084e79f:; BB(0x0084e79f);
    /* 0084e79f: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e7a2: fadd qword ptr [0x990530] */ ST(0) = ST(0) + R_F64((u32)(0x990530u));
    /* 0084e7a8: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084e7aa: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084e7ac: fld qword ptr [0x9904e0] */ FPUSH(R_F64((u32)(0x9904e0u)));
    /* 0084e7b2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084e7b4: fadd qword ptr [0x9904d0] */ ST(0) = ST(0) + R_F64((u32)(0x9904d0u));
    /* 0084e7ba: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084e7bc: fld qword ptr [0x9904d8] */ FPUSH(R_F64((u32)(0x9904d8u)));
    /* 0084e7c2: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084e7c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e7c6: fadd qword ptr [0x9904c8] */ ST(0) = ST(0) + R_F64((u32)(0x9904c8u));
    /* 0084e7cc: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0084e7ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084e7d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084e7d2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084e7d4: mov esp, ebx */ r_esp = r_ebx;
    /* 0084e7d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084e7d7: ret  */ FN_RET(0x0084d1ac); r_esp += 4; return;
L_0084e7d8:; BB(0x0084e7d8);
    /* 0084e7d8: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e7db: fadd qword ptr [0x990530] */ ST(0) = ST(0) + R_F64((u32)(0x990530u));
    /* 0084e7e1: fst qword ptr [ebx + 8] */ W_F64((u32)(r_ebx+0x8u), ST(0));
    /* 0084e7e4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084e7e6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084e7e8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084e7ea: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 0084e7ed: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e7f0: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e7f3: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e7f6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084e7f8: fst qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0));
    /* 0084e7fc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e7fe: fsubr st(4) */ ST(0) = ST(4) - ST(0);
    /* 0084e800: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e803: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084e805: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e808: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0084e80a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0084e80c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084e80e: fld qword ptr [0x9904c0] */ FPUSH(R_F64((u32)(0x9904c0u)));
    /* 0084e814: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084e816: fadd qword ptr [0x9904b0] */ ST(0) = ST(0) + R_F64((u32)(0x9904b0u));
    /* 0084e81c: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084e81e: fadd qword ptr [0x9904a0] */ ST(0) = ST(0) + R_F64((u32)(0x9904a0u));
    /* 0084e824: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0084e828: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084e82a: fadd qword ptr [0x990490] */ ST(0) = ST(0) + R_F64((u32)(0x990490u));
    /* 0084e830: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084e832: fld qword ptr [esp + 8] */ FPUSH(R_F64((u32)(r_esp+0x8u)));
    /* 0084e836: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 0084e838: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084e83a: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0084e83c: fld qword ptr [0x9904b8] */ FPUSH(R_F64((u32)(0x9904b8u)));
    /* 0084e842: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0084e844: fadd qword ptr [0x9904a8] */ ST(0) = ST(0) + R_F64((u32)(0x9904a8u));
    /* 0084e84a: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0084e84c: fadd qword ptr [0x990498] */ ST(0) = ST(0) + R_F64((u32)(0x990498u));
    /* 0084e852: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0084e854: fadd qword ptr [0x990488] */ ST(0) = ST(0) + R_F64((u32)(0x990488u));
    /* 0084e85a: fmulp st(7) */ ST(7) = ST(7) * ST(0); FPOP();
    /* 0084e85c: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 0084e85e: fld qword ptr [0x990480] */ FPUSH(R_F64((u32)(0x990480u)));
    /* 0084e864: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0084e866: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084e868: fmulp st(6) */ ST(6) = ST(6) * ST(0); FPOP();
    /* 0084e86a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084e86c: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0084e86e: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0084e870: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084e872: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084e874: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e876: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0084e878: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084e87a: mov esp, ebx */ r_esp = r_ebx;
    /* 0084e87c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084e87d: ret  */ FN_RET(0x0084d1ac); r_esp += 4; return;
L_0084e87e:; BB(0x0084e87e);
    /* 0084e87e: mov ecx, eax */ r_ecx = r_eax;
    /* 0084e880: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0084e883: add ecx, 0xfffffc01 */ {  u32 a = r_ecx; u32 b = 0xfffffc01u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084e889: mov edx, eax */ r_edx = r_eax;
    /* 0084e88b: and edx, 0xfffff */ {  u32 a = r_edx; u32 b = 0xfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084e891: cmp eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084e896: jae 0x84e8c2 */ if (!fC) goto L_0084e8c2;
L_0084e898:; BB(0x0084e898);
    /* 0084e898: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 0084e89b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0084e89e: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0084e8a0: je 0x84e9e5 */ if (fZ) goto L_0084e9e5;
L_0084e8a6:; BB(0x0084e8a6);
    /* 0084e8a6: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e8a9: fmul qword ptr [0x990520] */ ST(0) = ST(0) * R_F64((u32)(0x990520u));
    /* 0084e8af: fstp qword ptr [ebx + 8] */ W_F64((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 0084e8b2: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0084e8b5: mov eax, edx */ r_eax = r_edx;
    /* 0084e8b7: mov ecx, edx */ r_ecx = r_edx;
    /* 0084e8b9: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0084e8bc: add ecx, 0xfffffbca */ {  u32 a = r_ecx; u32 b = 0xfffffbcau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0084e8c2:; BB(0x0084e8c2);
    /* 0084e8c2: fld qword ptr [0x990518] */ FPUSH(R_F64((u32)(0x990518u)));
    /* 0084e8c8: fld qword ptr [0x990510] */ FPUSH(R_F64((u32)(0x990510u)));
    /* 0084e8ce: fld qword ptr [0x9904e8] */ FPUSH(R_F64((u32)(0x9904e8u)));
    /* 0084e8d4: or edx, 0x3ff00000 */ {  u32 a = r_edx; u32 b = 0x3ff00000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0084e8da: shr eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0084e8dd: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 0084e8e0: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e8e3: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0084e8e7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0084e8ea: fld dword ptr [eax*4 + 0x996ba0] */ FPUSH(R_F32((u32)(r_eax*4+0x996ba0u)));
    /* 0084e8f1: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
    /* 0084e8f8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084e8fa: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e8fd: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0084e8ff: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084e901: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e903: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084e905: fadd qword ptr [0x990530] */ ST(0) = ST(0) + R_F64((u32)(0x990530u));
    /* 0084e90b: fld qword ptr [0x9904f0] */ FPUSH(R_F64((u32)(0x9904f0u)));
    /* 0084e911: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e913: fst qword ptr [ebx + 8] */ W_F64((u32)(r_ebx+0x8u), ST(0));
    /* 0084e916: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084e918: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0084e91a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084e91c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084e91e: fmul st(7), st(0) */ ST(7) = ST(7) * ST(0);
    /* 0084e920: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 0084e922: fadd qword ptr [0x990508] */ ST(0) = ST(0) + R_F64((u32)(0x990508u));
    /* 0084e928: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0084e92a: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0084e92c: fadd qword ptr [0x990500] */ ST(0) = ST(0) + R_F64((u32)(0x990500u));
    /* 0084e932: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0084e934: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0084e936: fadd qword ptr [0x9904f8] */ ST(0) = ST(0) + R_F64((u32)(0x9904f8u));
    /* 0084e93c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e93e: fmulp st(6) */ ST(6) = ST(6) * ST(0); FPOP();
    /* 0084e940: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0084e944: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e946: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0084e948: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0084e94a: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0084e94c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084e94e: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0084e950: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0084e952: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0084e954: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0084e958: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084e95a: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0084e95c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084e95e: fadd qword ptr [eax*8 + 0x995ba0] */ ST(0) = ST(0) + R_F64((u32)(r_eax*8+0x995ba0u));
    /* 0084e965: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084e967: fadd qword ptr [eax*8 + 0x995ba8] */ ST(0) = ST(0) + R_F64((u32)(r_eax*8+0x995ba8u));
    /* 0084e96e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084e970: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084e972: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084e974: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0084e976: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084e978: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084e97a: mov esp, ebx */ r_esp = r_ebx;
    /* 0084e97c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084e97d: ret  */ FN_RET(0x0084d1ac); r_esp += 4; return;
L_0084e97e:; BB(0x0084e97e);
    /* 0084e97e: mov edx, eax */ r_edx = r_eax;
    /* 0084e980: and edx, 0x7fffffff */ {  u32 a = r_edx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084e986: cmp edx, 0x7ff00000 */ {  u32 a = r_edx; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084e98c: ja 0x84e997 */ if ((!fC&&!fZ)) goto L_0084e997;
L_0084e98e:; BB(0x0084e98e);
    /* 0084e98e: jne 0x84e9a4 */ if (!fZ) goto L_0084e9a4;
L_0084e990:; BB(0x0084e990);
    /* 0084e990: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0084e993: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084e995: je 0x84e9a4 */ if (fZ) goto L_0084e9a4;
L_0084e997:; BB(0x0084e997);
    /* 0084e997: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e99a: fmul qword ptr [0x990528] */ ST(0) = ST(0) * R_F64((u32)(0x990528u));
    /* 0084e9a0: mov esp, ebx */ r_esp = r_ebx;
    /* 0084e9a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084e9a3: ret  */ FN_RET(0x0084d1ac); r_esp += 4; return;
L_0084e9a4:; BB(0x0084e9a4);
    /* 0084e9a4: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084e9a9: je 0x84e9de */ if (fZ) goto L_0084e9de;
L_0084e9ab:; BB(0x0084e9ab);
    /* 0084e9ab: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0084e9ae: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0084e9b0: je 0x84ea11 */ if (fZ) goto L_0084ea11;
L_0084e9b2:; BB(0x0084e9b2);
    /* 0084e9b2: fld qword ptr [0x990548] */ FPUSH(R_F64((u32)(0x990548u)));
    /* 0084e9b8: fmul qword ptr [0x990538] */ ST(0) = ST(0) * R_F64((u32)(0x990538u));
    /* 0084e9be: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0084e9c1: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0084e9c4: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 0084e9c7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0084e9ca: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0084e9cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084e9cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084e9ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0084e9cf: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x84e9d4u); f_00850eb4();
    /* 0084e9d4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084e9d7: fld qword ptr [esp] */ FPUSH(R_F64((u32)(r_esp)));
    /* 0084e9da: mov esp, ebx */ r_esp = r_ebx;
    /* 0084e9dc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084e9dd: ret  */ FN_RET(0x0084d1ac); r_esp += 4; return;
L_0084e9de:; BB(0x0084e9de);
    /* 0084e9de: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084e9e1: mov esp, ebx */ r_esp = r_ebx;
    /* 0084e9e3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084e9e4: ret  */ FN_RET(0x0084d1ac); r_esp += 4; return;
L_0084e9e5:; BB(0x0084e9e5);
    /* 0084e9e5: fld qword ptr [0x990530] */ FPUSH(R_F64((u32)(0x990530u)));
    /* 0084e9eb: fdiv qword ptr [0x990538] */ ST(0) = ST(0) / R_F64((u32)(0x990538u));
    /* 0084e9f1: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0084e9f4: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0084e9f7: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 0084e9fa: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0084e9fd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0084e9ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084ea00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084ea01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0084ea02: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x84ea07u); f_00850eb4();
    /* 0084ea07: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084ea0a: fld qword ptr [esp] */ FPUSH(R_F64((u32)(r_esp)));
    /* 0084ea0d: mov esp, ebx */ r_esp = r_ebx;
    /* 0084ea0f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084ea10: ret  */ FN_RET(0x0084d1ac); r_esp += 4; return;
L_0084ea11:; BB(0x0084ea11);
    /* 0084ea11: fld qword ptr [0x990530] */ FPUSH(R_F64((u32)(0x990530u)));
    /* 0084ea17: fdiv qword ptr [0x990538] */ ST(0) = ST(0) / R_F64((u32)(0x990538u));
    /* 0084ea1d: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0084ea20: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0084ea23: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 0084ea26: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0084ea29: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0084ea2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084ea2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084ea2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0084ea2e: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x84ea33u); f_00850eb4();
    /* 0084ea33: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084ea36: fld qword ptr [esp] */ FPUSH(R_F64((u32)(r_esp)));
    /* 0084ea39: mov esp, ebx */ r_esp = r_ebx;
    /* 0084ea3b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084ea3c: ret  */ FN_RET(0x0084d1ac); r_esp += 4; return;
}

void f_0084d1d4(void) /* sub_84D1D4 */
{
    FN_ENTER(0x0084d1d4);
L_0084d1d4:; BB(0x0084d1d4);
    /* 0084d1d4: test dword ptr [0xae7f00], 0xfffffe00 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xfffffe00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084d1de: jne 0x84ea40 */ if (!fZ) goto L_0084ea40;
L_0084d1e4:; BB(0x0084d1e4);
    /* 0084d1e4: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084d1ee: jne 0x84f5f8 */ if (!fZ) goto L_0084f5f8;
L_0084d1f4:; BB(0x0084d1f4);
    /* 0084d1f4: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x84d1f9u); f_0086b8a0();
    /* 0084d1f9: jmp 0x84d1d4 */ goto L_0084d1d4;
L_0084ea40:; BB(0x0084ea40);
    /* 0084ea40: movlpd xmm0, qword ptr [esp + 4] */ xmm[0].q[0] = R64((u32)(r_esp+0x4u));
    /* 0084ea46: movlpd xmm7, qword ptr [0x993f30] */ xmm[7].q[0] = R64((u32)(0x993f30u));
    /* 0084ea4e: movlpd xmm2, qword ptr [0x993f40] */ xmm[2].q[0] = R64((u32)(0x993f40u));
    /* 0084ea56: andpd xmm7, xmm0 */ { XMM s = xmm[0]; xmm[7].q[0] = xmm[7].q[0] & s.q[0]; xmm[7].q[1] = xmm[7].q[1] & s.q[1]; }
    /* 0084ea5a: movsd xmm4, xmm0 */ xmm[4].q[0] = xmm[0].q[0];
    /* 0084ea5e: psrlq xmm0, 0x2c */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2cu; r.q = c > 63 ? 0 : (a.q >> c); xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2cu; r.q = c > 63 ? 0 : (a.q >> c); xmm[0].q[1] = r.q; }
    /* 0084ea63: pextrw eax, xmm0, 0 */ r_eax = (u32)xmm[0].w[0];
    /* 0084ea68: orpd xmm7, xmm2 */ { XMM s = xmm[2]; xmm[7].q[0] = xmm[7].q[0] | s.q[0]; xmm[7].q[1] = xmm[7].q[1] | s.q[1]; }
    /* 0084ea6c: pextrw ecx, xmm4, 3 */ r_ecx = (u32)xmm[4].w[3];
    /* 0084ea71: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084ea76: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084ea79: and eax, 0x1fe */ {  u32 a = r_eax; u32 b = 0x1feu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084ea7e: mulsd xmm7, qword ptr [eax*4 + 0x992ac0] */ { XMM s; s.q[0] = R64((u32)(r_eax*4+0x992ac0u)); s.q[1] = 0; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; }
    /* 0084ea87: movlpd xmm5, qword ptr [eax*4 + 0x992ac0] */ xmm[5].q[0] = R64((u32)(r_eax*4+0x992ac0u));
    /* 0084ea90: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084ea92: movapd xmm6, xmmword ptr [eax*4 + 0x992ee0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax*4+0x992ee0u), 16); xmm[6] = s; }
    /* 0084ea9b: mov edx, 0x7fef */ r_edx = 0x7fefu;
    /* 0084eaa0: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084eaa2: sub ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084eaa5: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0084eaa7: cmp ecx, 0x80000000 */ {  u32 a = r_ecx; u32 b = 0x80000000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084eaad: jae 0x84ed8e */ if (!fC) goto L_0084ed8e;
L_0084eab3:; BB(0x0084eab3);
    /* 0084eab3: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0084eab8: mov edx, 0x3fe7f */ r_edx = 0x3fe7fu;
L_0084eabd:; BB(0x0084eabd);
    /* 0084eabd: movd xmm1, edx */ { u32 v = r_edx; xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0084eac1: psubq xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].q[0] -= s.q[0]; xmm[0].q[1] -= s.q[1]; }
    /* 0084eac5: psrlq xmm0, 8 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.q = c > 63 ? 0 : (a.q >> c); xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x8u; r.q = c > 63 ? 0 : (a.q >> c); xmm[0].q[1] = r.q; }
    /* 0084eaca: cvtdq2pd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[0] = (double)(i32)s.d[0]; xmm[0].f[1] = (double)(i32)s.d[1]; }
    /* 0084eace: movlpd xmm1, qword ptr [0x993f80] */ xmm[1].q[0] = R64((u32)(0x993f80u));
    /* 0084ead6: movsd xmm3, xmm7 */ xmm[3].q[0] = xmm[7].q[0];
    /* 0084eada: psrlq xmm7, 0x26 */ { MM64 a; a.q = xmm[7].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x26u; r.q = c > 63 ? 0 : (a.q >> c); xmm[7].q[0] = r.q; } { MM64 a; a.q = xmm[7].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x26u; r.q = c > 63 ? 0 : (a.q >> c); xmm[7].q[1] = r.q; }
    /* 0084eadf: pextrw eax, xmm7, 0 */ r_eax = (u32)xmm[7].w[0];
    /* 0084eae4: andpd xmm4, xmmword ptr [0x993f30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x993f30u), 16); xmm[4].q[0] = xmm[4].q[0] & s.q[0]; xmm[4].q[1] = xmm[4].q[1] & s.q[1]; }
    /* 0084eaec: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084eaf1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084eaf4: and eax, 0x1fe */ {  u32 a = r_eax; u32 b = 0x1feu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084eaf9: mulsd xmm3, qword ptr [eax*4 + 0x990560] */ { XMM s; s.q[0] = R64((u32)(r_eax*4+0x990560u)); s.q[1] = 0; xmm[3].f[0] = xmm[3].f[0] * s.f[0]; }
    /* 0084eb02: mulsd xmm5, qword ptr [eax*4 + 0x990560] */ { XMM s; s.q[0] = R64((u32)(r_eax*4+0x990560u)); s.q[1] = 0; xmm[5].f[0] = xmm[5].f[0] * s.f[0]; }
    /* 0084eb0b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084eb0d: addpd xmm6, xmmword ptr [eax*4 + 0x990980] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax*4+0x990980u), 16); xmm[6].f[0] = xmm[6].f[0] + s.f[0]; xmm[6].f[1] = xmm[6].f[1] + s.f[1]; }
    /* 0084eb16: orpd xmm4, xmmword ptr [0x993f40] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x993f40u), 16); xmm[4].q[0] = xmm[4].q[0] | s.q[0]; xmm[4].q[1] = xmm[4].q[1] | s.q[1]; }
    /* 0084eb1e: addsd xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].f[0] = xmm[6].f[0] + s.f[0]; }
    /* 0084eb22: andpd xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].q[0] = xmm[1].q[0] & s.q[0]; xmm[1].q[1] = xmm[1].q[1] & s.q[1]; }
    /* 0084eb26: movsd xmm2, xmm3 */ xmm[2].q[0] = xmm[3].q[0];
    /* 0084eb2a: psrlq xmm3, 0x1f */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x1fu; r.q = c > 63 ? 0 : (a.q >> c); xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x1fu; r.q = c > 63 ? 0 : (a.q >> c); xmm[3].q[1] = r.q; }
    /* 0084eb2f: pextrw eax, xmm3, 0 */ r_eax = (u32)xmm[3].w[0];
    /* 0084eb34: movlpd xmm0, qword ptr [0x993f80] */ xmm[0].q[0] = R64((u32)(0x993f80u));
    /* 0084eb3c: subsd xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].f[0] = xmm[4].f[0] - s.f[0]; }
    /* 0084eb40: movlpd xmm7, qword ptr [0x993f78] */ xmm[7].q[0] = R64((u32)(0x993f78u));
    /* 0084eb48: and eax, 0x1ff */ {  u32 a = r_eax; u32 b = 0x1ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084eb4d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084eb50: and eax, 0x3fe */ {  u32 a = r_eax; u32 b = 0x3feu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084eb55: mulsd xmm5, qword ptr [eax*4 + 0x9911a0] */ { XMM s; s.q[0] = R64((u32)(r_eax*4+0x9911a0u)); s.q[1] = 0; xmm[5].f[0] = xmm[5].f[0] * s.f[0]; }
    /* 0084eb5e: mulsd xmm2, qword ptr [eax*4 + 0x9911a0] */ { XMM s; s.q[0] = R64((u32)(r_eax*4+0x9911a0u)); s.q[1] = 0; xmm[2].f[0] = xmm[2].f[0] * s.f[0]; }
    /* 0084eb67: addpd xmm6, xmmword ptr [eax*8 + 0x9919c0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax*8+0x9919c0u), 16); xmm[6].f[0] = xmm[6].f[0] + s.f[0]; xmm[6].f[1] = xmm[6].f[1] + s.f[1]; }
    /* 0084eb70: andpd xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 0084eb74: subsd xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].f[0] = xmm[5].f[0] - s.f[0]; }
    /* 0084eb78: addsd xmm7, xmm2 */ { XMM s = xmm[2]; xmm[7].f[0] = xmm[7].f[0] + s.f[0]; }
    /* 0084eb7c: movsd xmm3, xmm0 */ xmm[3].q[0] = xmm[0].q[0];
    /* 0084eb80: mulsd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084eb84: mulsd xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084eb88: mulsd xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].f[0] = xmm[3].f[0] * s.f[0]; }
    /* 0084eb8c: subsd xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].f[0] = xmm[2].f[0] - s.f[0]; }
    /* 0084eb90: mulsd xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].f[0] = xmm[4].f[0] * s.f[0]; }
    /* 0084eb94: movsd xmm0, xmm6 */ xmm[0].q[0] = xmm[6].q[0];
    /* 0084eb98: subsd xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].f[0] = xmm[2].f[0] - s.f[0]; }
    /* 0084eb9c: addsd xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].f[0] = xmm[6].f[0] + s.f[0]; }
    /* 0084eba0: movlpd xmm1, qword ptr [esp + 0xc] */ xmm[1].q[0] = R64((u32)(r_esp+0xcu));
    /* 0084eba6: pextrw eax, xmm1, 3 */ r_eax = (u32)xmm[1].w[3];
    /* 0084ebab: subsd xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].f[0] = xmm[2].f[0] - s.f[0]; }
    /* 0084ebaf: subsd xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; }
    /* 0084ebb3: movlpd xmm3, qword ptr [0x993f80] */ xmm[3].q[0] = R64((u32)(0x993f80u));
    /* 0084ebbb: pextrw edx, xmm6, 3 */ r_edx = (u32)xmm[6].w[3];
    /* 0084ebc0: subsd xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].f[0] = xmm[2].f[0] - s.f[0]; }
    /* 0084ebc4: movsd xmm4, xmm6 */ xmm[4].q[0] = xmm[6].q[0];
    /* 0084ebc8: addsd xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084ebcc: subsd xmm7, xmm2 */ { XMM s = xmm[2]; xmm[7].f[0] = xmm[7].f[0] - s.f[0]; }
    /* 0084ebd0: subsd xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6].f[0] = xmm[6].f[0] - s.f[0]; }
    /* 0084ebd4: unpcklpd xmm7, xmm7 */ { XMM s = xmm[7]; xmm[7].f[1] = s.f[0]; }
    /* 0084ebd8: and eax, 0x7ff0 */ {  u32 a = r_eax; u32 b = 0x7ff0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084ebdd: cmp eax, 0x7ff0 */ {  u32 a = r_eax; u32 b = 0x7ff0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084ebe2: jae 0x84f112 */ if (!fC) goto L_0084f112;
L_0084ebe8:; BB(0x0084ebe8);
    /* 0084ebe8: and edx, 0x7ff0 */ {  u32 a = r_edx; u32 b = 0x7ff0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084ebee: sub eax, 0x3ff0 */ {  u32 a = r_eax; u32 b = 0x3ff0u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084ebf3: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084ebf5: mov edx, 0x40a0 */ r_edx = 0x40a0u;
    /* 0084ebfa: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ebfc: sub eax, 0x3c70 */ {  u32 a = r_eax; u32 b = 0x3c70u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084ec01: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0084ec03: cmp edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084ec09: jae 0x84f573 */ if (!fC) goto L_0084f573;
L_0084ec0f:; BB(0x0084ec0f);
    /* 0084ec0f: subsd xmm4, xmm6 */ { XMM s = xmm[6]; xmm[4].f[0] = xmm[4].f[0] - s.f[0]; }
    /* 0084ec13: subsd xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].f[0] = xmm[2].f[0] - s.f[0]; }
    /* 0084ec17: movlpd xmm4, qword ptr [0x993f80] */ xmm[4].q[0] = R64((u32)(0x993f80u));
    /* 0084ec1f: andpd xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].q[0] = xmm[3].q[0] & s.q[0]; xmm[3].q[1] = xmm[3].q[1] & s.q[1]; }
    /* 0084ec23: andpd xmm4, xmm6 */ { XMM s = xmm[6]; xmm[4].q[0] = xmm[4].q[0] & s.q[0]; xmm[4].q[1] = xmm[4].q[1] & s.q[1]; }
    /* 0084ec27: subsd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; }
    /* 0084ec2b: xorpd xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].q[0] = xmm[2].q[0] ^ s.q[0]; xmm[2].q[1] = xmm[2].q[1] ^ s.q[1]; }
    /* 0084ec2f: mov edx, 0x4060 */ r_edx = 0x4060u;
    /* 0084ec34: pinsrw xmm2, edx, 3 */ xmm[2].w[3] = (u16)(r_edx);
    /* 0084ec39: movsd xmm5, xmm3 */ xmm[5].q[0] = xmm[3].q[0];
    /* 0084ec3d: mulsd xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].f[0] = xmm[3].f[0] * s.f[0]; }
    /* 0084ec41: subsd xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].f[0] = xmm[6].f[0] - s.f[0]; }
    /* 0084ec45: subsd xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].f[0] = xmm[1].f[0] - s.f[0]; }
    /* 0084ec49: mulsd xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].f[0] = xmm[3].f[0] * s.f[0]; }
    /* 0084ec4d: mulsd xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].f[0] = xmm[5].f[0] * s.f[0]; }
    /* 0084ec51: movapd xmm2, xmmword ptr [0x993f00] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x993f00u), 16); xmm[2] = s; }
    /* 0084ec59: mulsd xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].f[0] = xmm[4].f[0] * s.f[0]; }
    /* 0084ec5d: cvtsd2si eax, xmm3 */ { XMM s = xmm[3]; double v = s.f[0]; double r = fx_rint_mx(v); r_eax = (r >= -2147483648.0 && r < 2147483648.0) ? (u32)(i32)r : 0x80000000u; }
    /* 0084ec61: mulsd xmm6, xmm1 */ { XMM s = xmm[1]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; }
    /* 0084ec65: movapd xmm1, xmmword ptr [0x993f10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x993f10u), 16); xmm[1] = s; }
    /* 0084ec6d: addsd xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].f[0] = xmm[5].f[0] + s.f[0]; }
    /* 0084ec71: pshufd xmm4, xmm6, 0xee */ { XMM s = xmm[6]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[4] = r; }
    /* 0084ec76: addsd xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].f[0] = xmm[5].f[0] + s.f[0]; }
    /* 0084ec7a: mov edx, 0x1ff7f */ r_edx = 0x1ff7fu;
    /* 0084ec7f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084ec81: add eax, 0x1e1ff */ {  u32 a = r_eax; u32 b = 0x1e1ffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084ec86: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0084ec88: sub eax, 0x1e1ff */ {  u32 a = r_eax; u32 b = 0x1e1ffu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084ec8d: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084ec90: jle 0x84f2e2 */ if ((fZ||fS!=fO)) goto L_0084f2e2;
L_0084ec96:; BB(0x0084ec96);
    /* 0084ec96: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084ec98: and eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084ec9b: and ecx, 0xffffff80 */ {  u32 a = r_ecx; u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084ec9e: add ecx, 0x1ff80 */ {  u32 a = r_ecx; u32 b = 0x1ff80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084eca4: addsd xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].f[0] = xmm[4].f[0] + s.f[0]; }
    /* 0084eca8: movsd xmm0, xmm3 */ xmm[0].q[0] = xmm[3].q[0];
    /* 0084ecac: addsd xmm3, qword ptr [0x993f98] */ { XMM s; s.q[0] = R64((u32)(0x993f98u)); s.q[1] = 0; xmm[3].f[0] = xmm[3].f[0] + s.f[0]; }
    /* 0084ecb4: mulpd xmm2, xmm7 */ { XMM s = xmm[7]; xmm[2].f[0] = xmm[2].f[0] * s.f[0]; xmm[2].f[1] = xmm[2].f[1] * s.f[1]; }
    /* 0084ecb8: subsd xmm3, qword ptr [0x993f98] */ { XMM s; s.q[0] = R64((u32)(0x993f98u)); s.q[1] = 0; xmm[3].f[0] = xmm[3].f[0] - s.f[0]; }
    /* 0084ecc0: mulpd xmm7, xmm7 */ { XMM s = xmm[7]; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; xmm[7].f[1] = xmm[7].f[1] * s.f[1]; }
    /* 0084ecc4: subsd xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; }
    /* 0084ecc8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084ecca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084eccc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084ecce: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084ecd0: movapd xmm3, xmmword ptr [eax + 0x993700] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x993700u), 16); xmm[3] = s; }
    /* 0084ecd8: movapd xmm6, xmmword ptr [0x993f50] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x993f50u), 16); xmm[6] = s; }
    /* 0084ece0: mulpd xmm1, xmm7 */ { XMM s = xmm[7]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; xmm[1].f[1] = xmm[1].f[1] * s.f[1]; }
    /* 0084ece4: addpd xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].f[0] = xmm[2].f[0] + s.f[0]; xmm[2].f[1] = xmm[2].f[1] + s.f[1]; }
    /* 0084ece8: pshufd xmm1, xmm2, 0xee */ { XMM s = xmm[2]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[1] = r; }
    /* 0084eced: mulsd xmm2, xmm7 */ { XMM s = xmm[7]; xmm[2].f[0] = xmm[2].f[0] * s.f[0]; }
    /* 0084ecf1: xorpd xmm7, xmm7 */ { XMM s = xmm[7]; xmm[7].q[0] = xmm[7].q[0] ^ s.q[0]; xmm[7].q[1] = xmm[7].q[1] ^ s.q[1]; }
    /* 0084ecf5: mov edx, 0x3f80 */ r_edx = 0x3f80u;
    /* 0084ecfa: addsd xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].f[0] = xmm[2].f[0] + s.f[0]; }
    /* 0084ecfe: pinsrw xmm7, edx, 3 */ xmm[7].w[3] = (u16)(r_edx);
    /* 0084ed03: addsd xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].f[0] = xmm[2].f[0] + s.f[0]; }
    /* 0084ed07: movlpd xmm4, qword ptr [0x993f70] */ xmm[4].q[0] = R64((u32)(0x993f70u));
    /* 0084ed0f: movd xmm1, ecx */ { u32 v = r_ecx; xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0084ed13: mulsd xmm2, qword ptr [esp + 0xc] */ { XMM s; s.q[0] = R64((u32)(r_esp+0xcu)); s.q[1] = 0; xmm[2].f[0] = xmm[2].f[0] * s.f[0]; }
    /* 0084ed19: mulsd xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084ed1d: psllq xmm1, 0x2d */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2du; r.q = c > 63 ? 0 : (a.q << c); xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2du; r.q = c > 63 ? 0 : (a.q << c); xmm[1].q[1] = r.q; }
    /* 0084ed22: pshufd xmm1, xmm1, 0x44 */ { XMM s = xmm[1]; XMM r; r.d[0] = s.d[0]; r.d[1] = s.d[1]; r.d[2] = s.d[0]; r.d[3] = s.d[1]; xmm[1] = r; }
    /* 0084ed27: movapd xmm7, xmmword ptr [0x993f60] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x993f60u), 16); xmm[7] = s; }
    /* 0084ed2f: addsd xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].f[0] = xmm[5].f[0] + s.f[0]; }
    /* 0084ed33: mulpd xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].f[0] = xmm[3].f[0] * s.f[0]; xmm[3].f[1] = xmm[3].f[1] * s.f[1]; }
    /* 0084ed37: addsd xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084ed3b: unpcklpd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[1] = s.f[0]; }
    /* 0084ed3f: mulpd xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; xmm[6].f[1] = xmm[6].f[1] * s.f[1]; }
    /* 0084ed43: mulsd xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].f[0] = xmm[4].f[0] * s.f[0]; }
    /* 0084ed47: mulpd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; xmm[0].f[1] = xmm[0].f[1] * s.f[1]; }
    /* 0084ed4b: addpd xmm7, xmm6 */ { XMM s = xmm[6]; xmm[7].f[0] = xmm[7].f[0] + s.f[0]; xmm[7].f[1] = xmm[7].f[1] + s.f[1]; }
    /* 0084ed4f: mulpd xmm7, xmm0 */ { XMM s = xmm[0]; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; xmm[7].f[1] = xmm[7].f[1] * s.f[1]; }
    /* 0084ed53: mulsd xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084ed57: pshufd xmm6, xmm7, 0xee */ { XMM s = xmm[7]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[6] = r; }
    /* 0084ed5c: mulsd xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084ed60: pshufd xmm5, xmm3, 0xee */ { XMM s = xmm[3]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[5] = r; }
    /* 0084ed65: mulsd xmm6, xmm3 */ { XMM s = xmm[3]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; }
    /* 0084ed69: mulsd xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].f[0] = xmm[4].f[0] * s.f[0]; }
    /* 0084ed6d: addsd xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084ed71: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084ed74: addsd xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084ed78: addsd xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084ed7c: addsd xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084ed80: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084ed86: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084ed8a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084ed8d: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084ed8e:; BB(0x0084ed8e);
    /* 0084ed8e: movlpd xmm1, qword ptr [esp + 0xc] */ xmm[1].q[0] = R64((u32)(r_esp+0xcu));
    /* 0084ed94: movlpd xmm3, qword ptr [0x993f20] */ xmm[3].q[0] = R64((u32)(0x993f20u));
    /* 0084ed9c: movd eax, xmm1 */ r_eax = xmm[1].d[0];
    /* 0084eda0: movsd xmm2, xmm1 */ xmm[2].q[0] = xmm[1].q[0];
    /* 0084eda4: andpd xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].q[0] = xmm[1].q[0] & s.q[0]; xmm[1].q[1] = xmm[1].q[1] & s.q[1]; }
    /* 0084eda8: psrlq xmm1, 0x20 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[1].q[1] = r.q; }
    /* 0084edad: movd ecx, xmm1 */ r_ecx = xmm[1].d[0];
    /* 0084edb1: cmp ecx, 0x7ff00000 */ {  u32 a = r_ecx; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084edb7: jae 0x84ee9b */ if (!fC) goto L_0084ee9b;
L_0084edbd:; BB(0x0084edbd);
    /* 0084edbd: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084edbf: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084edc2: je 0x84f249 */ if (fZ) goto L_0084f249;
L_0084edc8:; BB(0x0084edc8);
    /* 0084edc8: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084edcb: jge 0x84eeda */ if ((fS==fO)) goto L_0084eeda;
L_0084edd1:; BB(0x0084edd1);
    /* 0084edd1: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084edd3: add edx, 0x7fef */ {  u32 a = r_edx; u32 b = 0x7fefu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084edd9: psllq xmm3, 0x34 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x34u; r.q = c > 63 ? 0 : (a.q << c); xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x34u; r.q = c > 63 ? 0 : (a.q << c); xmm[3].q[1] = r.q; }
    /* 0084edde: orpd xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].q[0] = xmm[2].q[0] | s.q[0]; xmm[2].q[1] = xmm[2].q[1] | s.q[1]; }
    /* 0084ede2: mov ecx, 0x3f3 */ r_ecx = 0x3f3u;
    /* 0084ede7: movd xmm3, ecx */ { u32 v = r_ecx; xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 0084edeb: psrlq xmm1, 0x14 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x14u; r.q = c > 63 ? 0 : (a.q >> c); xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x14u; r.q = c > 63 ? 0 : (a.q >> c); xmm[1].q[1] = r.q; }
    /* 0084edf0: psubd xmm1, xmm3 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = xmm[3].q[0]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = xmm[3].q[1]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; xmm[1].q[1] = r.q; }
    /* 0084edf4: pxor xmm3, xmm3 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[3].q[0]; MM64 r; r.q = a.q ^ b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[3].q[1]; MM64 r; r.q = a.q ^ b.q; xmm[3].q[1] = r.q; }
    /* 0084edf8: pmaxsw xmm1, xmm3 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = xmm[3].q[0]; MM64 r; r.w[0] = ((i16)a.w[0] > (i16)b.w[0]) ? a.w[0] : b.w[0]; r.w[1] = ((i16)a.w[1] > (i16)b.w[1]) ? a.w[1] : b.w[1]; r.w[2] = ((i16)a.w[2] > (i16)b.w[2]) ? a.w[2] : b.w[2]; r.w[3] = ((i16)a.w[3] > (i16)b.w[3]) ? a.w[3] : b.w[3]; xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = xmm[3].q[1]; MM64 r; r.w[0] = ((i16)a.w[0] > (i16)b.w[0]) ? a.w[0] : b.w[0]; r.w[1] = ((i16)a.w[1] > (i16)b.w[1]) ? a.w[1] : b.w[1]; r.w[2] = ((i16)a.w[2] > (i16)b.w[2]) ? a.w[2] : b.w[2]; r.w[3] = ((i16)a.w[3] > (i16)b.w[3]) ? a.w[3] : b.w[3]; xmm[1].q[1] = r.q; }
    /* 0084edfc: psllq xmm2, xmm1 */ { MM64 a; a.q = xmm[2].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; u32 c = (u32)(0xffu & xmm[1].q[0]); r.q = c > 63 ? 0 : (a.q << c); xmm[2].q[0] = r.q; } { MM64 a; a.q = xmm[2].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; u32 c = (u32)(0xffu & xmm[1].q[0]); r.q = c > 63 ? 0 : (a.q << c); xmm[2].q[1] = r.q; }
    /* 0084ee00: pcmpeqd xmm2, xmm3 */ { MM64 a; a.q = xmm[2].q[0]; MM64 b; b.q = xmm[3].q[0]; MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; xmm[2].q[0] = r.q; } { MM64 a; a.q = xmm[2].q[1]; MM64 b; b.q = xmm[3].q[1]; MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; xmm[2].q[1] = r.q; }
    /* 0084ee04: pmovmskb eax, xmm2 */ r_eax = ((u32)(xmm[2].b[0] >> 7) << 0) | ((u32)(xmm[2].b[1] >> 7) << 1) | ((u32)(xmm[2].b[2] >> 7) << 2) | ((u32)(xmm[2].b[3] >> 7) << 3) | ((u32)(xmm[2].b[4] >> 7) << 4) | ((u32)(xmm[2].b[5] >> 7) << 5) | ((u32)(xmm[2].b[6] >> 7) << 6) | ((u32)(xmm[2].b[7] >> 7) << 7) | ((u32)(xmm[2].b[8] >> 7) << 8) | ((u32)(xmm[2].b[9] >> 7) << 9) | ((u32)(xmm[2].b[10] >> 7) << 10) | ((u32)(xmm[2].b[11] >> 7) << 11) | ((u32)(xmm[2].b[12] >> 7) << 12) | ((u32)(xmm[2].b[13] >> 7) << 13) | ((u32)(xmm[2].b[14] >> 7) << 14) | ((u32)(xmm[2].b[15] >> 7) << 15);
    /* 0084ee08: mov ecx, edx */ r_ecx = r_edx;
    /* 0084ee0a: and edx, 0x7fff */ {  u32 a = r_edx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084ee10: cmp edx, 0x7ff0 */ {  u32 a = r_edx; u32 b = 0x7ff0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084ee16: jae 0x84efcb */ if (!fC) goto L_0084efcb;
L_0084ee1c:; BB(0x0084ee1c);
    /* 0084ee1c: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084ee21: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084ee26: jne 0x84f0d3 */ if (!fZ) goto L_0084f0d3;
L_0084ee2c:; BB(0x0084ee2c);
    /* 0084ee2c: movlpd xmm1, qword ptr [esp + 0xc] */ xmm[1].q[0] = R64((u32)(r_esp+0xcu));
    /* 0084ee32: movlpd xmm2, qword ptr [esp + 0xc] */ xmm[2].q[0] = R64((u32)(r_esp+0xcu));
    /* 0084ee38: mov ecx, 0x3f4 */ r_ecx = 0x3f4u;
    /* 0084ee3d: movd xmm3, ecx */ { u32 v = r_ecx; xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 0084ee41: andpd xmm1, xmmword ptr [0x993f20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x993f20u), 16); xmm[1].q[0] = xmm[1].q[0] & s.q[0]; xmm[1].q[1] = xmm[1].q[1] & s.q[1]; }
    /* 0084ee49: psrlq xmm1, 0x34 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x34u; r.q = c > 63 ? 0 : (a.q >> c); xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x34u; r.q = c > 63 ? 0 : (a.q >> c); xmm[1].q[1] = r.q; }
    /* 0084ee4e: psubd xmm1, xmm3 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = xmm[3].q[0]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = xmm[3].q[1]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; xmm[1].q[1] = r.q; }
    /* 0084ee52: movlpd xmm3, qword ptr [0x993f88] */ xmm[3].q[0] = R64((u32)(0x993f88u));
    /* 0084ee5a: psllq xmm2, xmm1 */ { MM64 a; a.q = xmm[2].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; u32 c = (u32)(0xffu & xmm[1].q[0]); r.q = c > 63 ? 0 : (a.q << c); xmm[2].q[0] = r.q; } { MM64 a; a.q = xmm[2].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; u32 c = (u32)(0xffu & xmm[1].q[0]); r.q = c > 63 ? 0 : (a.q << c); xmm[2].q[1] = r.q; }
    /* 0084ee5e: pcmpeqd xmm2, xmm3 */ { MM64 a; a.q = xmm[2].q[0]; MM64 b; b.q = xmm[3].q[0]; MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; xmm[2].q[0] = r.q; } { MM64 a; a.q = xmm[2].q[1]; MM64 b; b.q = xmm[3].q[1]; MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; xmm[2].q[1] = r.q; }
    /* 0084ee62: pmovmskb eax, xmm2 */ r_eax = ((u32)(xmm[2].b[0] >> 7) << 0) | ((u32)(xmm[2].b[1] >> 7) << 1) | ((u32)(xmm[2].b[2] >> 7) << 2) | ((u32)(xmm[2].b[3] >> 7) << 3) | ((u32)(xmm[2].b[4] >> 7) << 4) | ((u32)(xmm[2].b[5] >> 7) << 5) | ((u32)(xmm[2].b[6] >> 7) << 6) | ((u32)(xmm[2].b[7] >> 7) << 7) | ((u32)(xmm[2].b[8] >> 7) << 8) | ((u32)(xmm[2].b[9] >> 7) << 9) | ((u32)(xmm[2].b[10] >> 7) << 10) | ((u32)(xmm[2].b[11] >> 7) << 11) | ((u32)(xmm[2].b[12] >> 7) << 12) | ((u32)(xmm[2].b[13] >> 7) << 13) | ((u32)(xmm[2].b[14] >> 7) << 14) | ((u32)(xmm[2].b[15] >> 7) << 15);
    /* 0084ee66: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084ee6b: mov ecx, 0x3ff01 */ r_ecx = 0x3ff01u;
    /* 0084ee70: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084ee72: and ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084ee78: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084ee7b: jb 0x84eedf */ if (fC) goto L_0084eedf;
L_0084ee81:; BB(0x0084ee81);
    /* 0084ee81: mov edx, 0xbfe7f */ r_edx = 0xbfe7fu;
    /* 0084ee86: movlpd xmm3, qword ptr [0x993f30] */ xmm[3].q[0] = R64((u32)(0x993f30u));
    /* 0084ee8e: movlpd xmm2, qword ptr [0x993f40] */ xmm[2].q[0] = R64((u32)(0x993f40u));
    /* 0084ee96: jmp 0x84eabd */ goto L_0084eabd;
L_0084ee9b:; BB(0x0084ee9b);
    /* 0084ee9b: movlpd xmm7, qword ptr [esp + 4] */ xmm[7].q[0] = R64((u32)(r_esp+0x4u));
    /* 0084eea1: movlpd xmm4, qword ptr [esp + 4] */ xmm[4].q[0] = R64((u32)(r_esp+0x4u));
    /* 0084eea7: movd edx, xmm7 */ r_edx = xmm[7].d[0];
    /* 0084eeab: psrlq xmm7, 0x20 */ { MM64 a; a.q = xmm[7].q[0]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[7].q[0] = r.q; } { MM64 a; a.q = xmm[7].q[1]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[7].q[1] = r.q; }
    /* 0084eeb0: movd eax, xmm7 */ r_eax = xmm[7].d[0];
    /* 0084eeb4: mov ecx, eax */ r_ecx = r_eax;
    /* 0084eeb6: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084eebb: cmp eax, 0x7ff00000 */ {  u32 a = r_eax; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084eec0: jb 0x84f172 */ if (fC) goto L_0084f172;
L_0084eec6:; BB(0x0084eec6);
    /* 0084eec6: ja 0x84f0be */ if ((!fC&&!fZ)) goto L_0084f0be;
L_0084eecc:; BB(0x0084eecc);
    /* 0084eecc: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084eecf: ja 0x84f0be */ if ((!fC&&!fZ)) goto L_0084f0be;
L_0084eed5:; BB(0x0084eed5);
    /* 0084eed5: jmp 0x84f172 */ goto L_0084f172;
L_0084eeda:; BB(0x0084eeda);
    /* 0084eeda: mov ecx, 0 */ r_ecx = 0x0u;
L_0084eedf:; BB(0x0084eedf);
    /* 0084eedf: xorpd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 0084eee3: mov eax, 0x43f0 */ r_eax = 0x43f0u;
    /* 0084eee8: pinsrw xmm0, eax, 3 */ xmm[0].w[3] = (u16)(r_eax);
    /* 0084eeed: movlpd xmm7, qword ptr [0x993f30] */ xmm[7].q[0] = R64((u32)(0x993f30u));
    /* 0084eef5: movlpd xmm2, qword ptr [0x993f40] */ xmm[2].q[0] = R64((u32)(0x993f40u));
    /* 0084eefd: mulsd xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084ef01: movd edx, xmm4 */ r_edx = xmm[4].d[0];
    /* 0084ef05: psrlq xmm4, 0x20 */ { MM64 a; a.q = xmm[4].q[0]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[4].q[0] = r.q; } { MM64 a; a.q = xmm[4].q[1]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[4].q[1] = r.q; }
    /* 0084ef0a: movd eax, xmm4 */ r_eax = xmm[4].d[0];
    /* 0084ef0e: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084ef11: je 0x84ef69 */ if (fZ) goto L_0084ef69;
L_0084ef17:; BB(0x0084ef17);
    /* 0084ef17: andpd xmm7, xmm0 */ { XMM s = xmm[0]; xmm[7].q[0] = xmm[7].q[0] & s.q[0]; xmm[7].q[1] = xmm[7].q[1] & s.q[1]; }
    /* 0084ef1b: movsd xmm4, xmm0 */ xmm[4].q[0] = xmm[0].q[0];
    /* 0084ef1f: andpd xmm0, xmmword ptr [0x993f20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x993f20u), 16); xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 0084ef27: psrlq xmm0, 0x2c */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2cu; r.q = c > 63 ? 0 : (a.q >> c); xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2cu; r.q = c > 63 ? 0 : (a.q >> c); xmm[0].q[1] = r.q; }
    /* 0084ef2c: pextrw eax, xmm0, 0 */ r_eax = (u32)xmm[0].w[0];
    /* 0084ef31: orpd xmm7, xmm2 */ { XMM s = xmm[2]; xmm[7].q[0] = xmm[7].q[0] | s.q[0]; xmm[7].q[1] = xmm[7].q[1] | s.q[1]; }
    /* 0084ef35: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084ef3a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084ef3d: and eax, 0x1fe */ {  u32 a = r_eax; u32 b = 0x1feu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084ef42: mulsd xmm7, qword ptr [eax*4 + 0x992ac0] */ { XMM s; s.q[0] = R64((u32)(r_eax*4+0x992ac0u)); s.q[1] = 0; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; }
    /* 0084ef4b: movlpd xmm5, qword ptr [eax*4 + 0x992ac0] */ xmm[5].q[0] = R64((u32)(r_eax*4+0x992ac0u));
    /* 0084ef54: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084ef56: movapd xmm6, xmmword ptr [eax*4 + 0x992ee0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax*4+0x992ee0u), 16); xmm[6] = s; }
    /* 0084ef5f: mov edx, 0x43e7f */ r_edx = 0x43e7fu;
    /* 0084ef64: jmp 0x84eabd */ goto L_0084eabd;
L_0084ef69:; BB(0x0084ef69);
    /* 0084ef69: mov edx, eax */ r_edx = r_eax;
    /* 0084ef6b: and edx, 0x7fffffff */ {  u32 a = r_edx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084ef71: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084ef74: jne 0x84ef17 */ if (!fZ) goto L_0084ef17;
L_0084ef76:; BB(0x0084ef76);
    /* 0084ef76: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0084ef7a: and edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084ef80: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084ef83: je 0x84efba */ if (fZ) goto L_0084efba;
L_0084ef89:; BB(0x0084ef89);
    /* 0084ef89: shl ecx, 0xd */ { u32 c = (13u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0084ef8c: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084ef8e: mov edx, 0x7ff00000 */ r_edx = 0x7ff00000u;
    /* 0084ef93: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0084ef95: movd xmm0, edx */ { u32 v = r_edx; xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0084ef99: psllq xmm0, 0x20 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q << c); xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q << c); xmm[0].q[1] = r.q; }
    /* 0084ef9e: movlpd xmm1, qword ptr [0x993f40] */ xmm[1].q[0] = R64((u32)(0x993f40u));
    /* 0084efa6: movlpd xmm2, qword ptr [esp + 4] */ xmm[2].q[0] = R64((u32)(r_esp+0x4u));
    /* 0084efac: divsd xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].f[0] = xmm[1].f[0] / s.f[0]; }
    /* 0084efb0: mov edx, 0x1b */ r_edx = 0x1bu;
    /* 0084efb5: jmp 0x84f2b2 */ goto L_0084f2b2;
L_0084efba:; BB(0x0084efba);
    /* 0084efba: shl ecx, 0xd */ { u32 c = (13u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0084efbd: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084efbf: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084efc2: jne 0x84f078 */ if (!fZ) goto L_0084f078;
L_0084efc8:; BB(0x0084efc8);
    /* 0084efc8: fldz  */ FPUSH(0.0);
    /* 0084efca: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084efcb:; BB(0x0084efcb);
    /* 0084efcb: movlpd xmm3, qword ptr [0x993f30] */ xmm[3].q[0] = R64((u32)(0x993f30u));
    /* 0084efd3: xorpd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 0084efd7: andpd xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].q[0] = xmm[3].q[0] & s.q[0]; xmm[3].q[1] = xmm[3].q[1] & s.q[1]; }
    /* 0084efdb: pcmpeqd xmm1, xmm3 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = xmm[3].q[0]; MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = xmm[3].q[1]; MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; xmm[1].q[1] = r.q; }
    /* 0084efdf: pmovmskb ecx, xmm1 */ r_ecx = ((u32)(xmm[1].b[0] >> 7) << 0) | ((u32)(xmm[1].b[1] >> 7) << 1) | ((u32)(xmm[1].b[2] >> 7) << 2) | ((u32)(xmm[1].b[3] >> 7) << 3) | ((u32)(xmm[1].b[4] >> 7) << 4) | ((u32)(xmm[1].b[5] >> 7) << 5) | ((u32)(xmm[1].b[6] >> 7) << 6) | ((u32)(xmm[1].b[7] >> 7) << 7) | ((u32)(xmm[1].b[8] >> 7) << 8) | ((u32)(xmm[1].b[9] >> 7) << 9) | ((u32)(xmm[1].b[10] >> 7) << 10) | ((u32)(xmm[1].b[11] >> 7) << 11) | ((u32)(xmm[1].b[12] >> 7) << 12) | ((u32)(xmm[1].b[13] >> 7) << 13) | ((u32)(xmm[1].b[14] >> 7) << 14) | ((u32)(xmm[1].b[15] >> 7) << 15);
    /* 0084efe3: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084efe9: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084efef: jne 0x84f0be */ if (!fZ) goto L_0084f0be;
L_0084eff5:; BB(0x0084eff5);
    /* 0084eff5: pextrw ecx, xmm4, 3 */ r_ecx = (u32)xmm[4].w[3];
    /* 0084effa: and ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084f000: cmp ecx, 0 */ {  u32 a = r_ecx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f003: je 0x84f0a2 */ if (fZ) goto L_0084f0a2;
L_0084f009:; BB(0x0084f009);
    /* 0084f009: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084f00e: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f013: jne 0x84f086 */ if (!fZ) goto L_0084f086;
L_0084f019:; BB(0x0084f019);
    /* 0084f019: movlpd xmm1, qword ptr [esp + 0xc] */ xmm[1].q[0] = R64((u32)(r_esp+0xcu));
    /* 0084f01f: movlpd xmm2, qword ptr [esp + 0xc] */ xmm[2].q[0] = R64((u32)(r_esp+0xcu));
    /* 0084f025: mov ecx, 0x3f4 */ r_ecx = 0x3f4u;
    /* 0084f02a: movd xmm3, ecx */ { u32 v = r_ecx; xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 0084f02e: andpd xmm1, xmmword ptr [0x993f20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x993f20u), 16); xmm[1].q[0] = xmm[1].q[0] & s.q[0]; xmm[1].q[1] = xmm[1].q[1] & s.q[1]; }
    /* 0084f036: psrlq xmm1, 0x34 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x34u; r.q = c > 63 ? 0 : (a.q >> c); xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x34u; r.q = c > 63 ? 0 : (a.q >> c); xmm[1].q[1] = r.q; }
    /* 0084f03b: psubd xmm1, xmm3 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = xmm[3].q[0]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = xmm[3].q[1]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; xmm[1].q[1] = r.q; }
    /* 0084f03f: pxor xmm3, xmm3 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[3].q[0]; MM64 r; r.q = a.q ^ b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[3].q[1]; MM64 r; r.q = a.q ^ b.q; xmm[3].q[1] = r.q; }
    /* 0084f043: psllq xmm2, xmm1 */ { MM64 a; a.q = xmm[2].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; u32 c = (u32)(0xffu & xmm[1].q[0]); r.q = c > 63 ? 0 : (a.q << c); xmm[2].q[0] = r.q; } { MM64 a; a.q = xmm[2].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; u32 c = (u32)(0xffu & xmm[1].q[0]); r.q = c > 63 ? 0 : (a.q << c); xmm[2].q[1] = r.q; }
    /* 0084f047: pcmpeqd xmm2, xmm3 */ { MM64 a; a.q = xmm[2].q[0]; MM64 b; b.q = xmm[3].q[0]; MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; xmm[2].q[0] = r.q; } { MM64 a; a.q = xmm[2].q[1]; MM64 b; b.q = xmm[3].q[1]; MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; xmm[2].q[1] = r.q; }
    /* 0084f04b: pmovmskb eax, xmm2 */ r_eax = ((u32)(xmm[2].b[0] >> 7) << 0) | ((u32)(xmm[2].b[1] >> 7) << 1) | ((u32)(xmm[2].b[2] >> 7) << 2) | ((u32)(xmm[2].b[3] >> 7) << 3) | ((u32)(xmm[2].b[4] >> 7) << 4) | ((u32)(xmm[2].b[5] >> 7) << 5) | ((u32)(xmm[2].b[6] >> 7) << 6) | ((u32)(xmm[2].b[7] >> 7) << 7) | ((u32)(xmm[2].b[8] >> 7) << 8) | ((u32)(xmm[2].b[9] >> 7) << 9) | ((u32)(xmm[2].b[10] >> 7) << 10) | ((u32)(xmm[2].b[11] >> 7) << 11) | ((u32)(xmm[2].b[12] >> 7) << 12) | ((u32)(xmm[2].b[13] >> 7) << 13) | ((u32)(xmm[2].b[14] >> 7) << 14) | ((u32)(xmm[2].b[15] >> 7) << 15);
    /* 0084f04f: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084f054: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f059: je 0x84f086 */ if (fZ) goto L_0084f086;
L_0084f05f:; BB(0x0084f05f);
    /* 0084f05f: movlpd xmm1, qword ptr [esp + 0xc] */ xmm[1].q[0] = R64((u32)(r_esp+0xcu));
    /* 0084f065: pextrw eax, xmm1, 3 */ r_eax = (u32)xmm[1].w[3];
    /* 0084f06a: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084f06f: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084f072: je 0x84f07f */ if (fZ) goto L_0084f07f;
L_0084f078:; BB(0x0084f078);
    /* 0084f078: fld qword ptr [0x993f88] */ FPUSH(R_F64((u32)(0x993f88u)));
    /* 0084f07e: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f07f:; BB(0x0084f07f);
    /* 0084f07f: fld qword ptr [0x993fb0] */ FPUSH(R_F64((u32)(0x993fb0u)));
    /* 0084f085: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f086:; BB(0x0084f086);
    /* 0084f086: movlpd xmm1, qword ptr [esp + 0xc] */ xmm[1].q[0] = R64((u32)(r_esp+0xcu));
    /* 0084f08c: pextrw eax, xmm1, 3 */ r_eax = (u32)xmm[1].w[3];
    /* 0084f091: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084f096: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084f099: je 0x84f22d */ if (fZ) goto L_0084f22d;
L_0084f09f:; BB(0x0084f09f);
    /* 0084f09f: fldz  */ FPUSH(0.0);
    /* 0084f0a1: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f0a2:; BB(0x0084f0a2);
    /* 0084f0a2: movlpd xmm1, qword ptr [esp + 0xc] */ xmm[1].q[0] = R64((u32)(r_esp+0xcu));
    /* 0084f0a8: pextrw eax, xmm1, 3 */ r_eax = (u32)xmm[1].w[3];
    /* 0084f0ad: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084f0b2: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084f0b5: je 0x84f22d */ if (fZ) goto L_0084f22d;
L_0084f0bb:; BB(0x0084f0bb);
    /* 0084f0bb: fldz  */ FPUSH(0.0);
    /* 0084f0bd: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f0be:; BB(0x0084f0be);
    /* 0084f0be: addsd xmm4, xmm4 */ { XMM s = xmm[4]; xmm[4].f[0] = xmm[4].f[0] + s.f[0]; }
    /* 0084f0c2: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084f0c5: movlpd qword ptr [esp + 4], xmm4 */ W64((u32)(r_esp+0x4u), xmm[4].q[0]);
    /* 0084f0cb: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084f0cf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084f0d2: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f0d3:; BB(0x0084f0d3);
    /* 0084f0d3: movlpd xmm2, qword ptr [esp + 4] */ xmm[2].q[0] = R64((u32)(r_esp+0x4u));
    /* 0084f0d9: movd eax, xmm2 */ r_eax = xmm[2].d[0];
    /* 0084f0dd: psrlq xmm2, 0x20 */ { MM64 a; a.q = xmm[2].q[0]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[2].q[0] = r.q; } { MM64 a; a.q = xmm[2].q[1]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[2].q[1] = r.q; }
    /* 0084f0e2: movd edx, xmm2 */ r_edx = xmm[2].d[0];
    /* 0084f0e6: and edx, 0x7fffffff */ {  u32 a = r_edx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084f0ec: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084f0ee: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0084f0f3: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f0f6: je 0x84ef69 */ if (fZ) goto L_0084ef69;
L_0084f0fc:; BB(0x0084f0fc);
    /* 0084f0fc: movlpd xmm0, qword ptr [0x993f90] */ xmm[0].q[0] = R64((u32)(0x993f90u));
    /* 0084f104: mulsd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084f108: mov edx, 0x1c */ r_edx = 0x1cu;
    /* 0084f10d: jmp 0x84f2b2 */ goto L_0084f2b2;
L_0084f112:; BB(0x0084f112);
    /* 0084f112: movlpd xmm4, qword ptr [esp + 4] */ xmm[4].q[0] = R64((u32)(r_esp+0x4u));
    /* 0084f118: movlpd xmm2, qword ptr [esp + 0xc] */ xmm[2].q[0] = R64((u32)(r_esp+0xcu));
    /* 0084f11e: movd eax, xmm4 */ r_eax = xmm[4].d[0];
    /* 0084f122: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f125: jne 0x84f172 */ if (!fZ) goto L_0084f172;
L_0084f12b:; BB(0x0084f12b);
    /* 0084f12b: psrlq xmm4, 0x20 */ { MM64 a; a.q = xmm[4].q[0]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[4].q[0] = r.q; } { MM64 a; a.q = xmm[4].q[1]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[4].q[1] = r.q; }
    /* 0084f130: movd edx, xmm4 */ r_edx = xmm[4].d[0];
    /* 0084f134: cmp edx, 0x3ff00000 */ {  u32 a = r_edx; u32 b = 0x3ff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084f13a: je 0x84f2af */ if (fZ) goto L_0084f2af;
L_0084f140:; BB(0x0084f140);
    /* 0084f140: cmp edx, 0xbff00000 */ {  u32 a = r_edx; u32 b = 0xbff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f146: jne 0x84f172 */ if (!fZ) goto L_0084f172;
L_0084f14c:; BB(0x0084f14c);
    /* 0084f14c: movlpd xmm3, qword ptr [0x993f30] */ xmm[3].q[0] = R64((u32)(0x993f30u));
    /* 0084f154: xorpd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 0084f158: andpd xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].q[0] = xmm[3].q[0] & s.q[0]; xmm[3].q[1] = xmm[3].q[1] & s.q[1]; }
    /* 0084f15c: pcmpeqd xmm1, xmm3 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = xmm[3].q[0]; MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = xmm[3].q[1]; MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; xmm[1].q[1] = r.q; }
    /* 0084f160: pmovmskb eax, xmm1 */ r_eax = ((u32)(xmm[1].b[0] >> 7) << 0) | ((u32)(xmm[1].b[1] >> 7) << 1) | ((u32)(xmm[1].b[2] >> 7) << 2) | ((u32)(xmm[1].b[3] >> 7) << 3) | ((u32)(xmm[1].b[4] >> 7) << 4) | ((u32)(xmm[1].b[5] >> 7) << 5) | ((u32)(xmm[1].b[6] >> 7) << 6) | ((u32)(xmm[1].b[7] >> 7) << 7) | ((u32)(xmm[1].b[8] >> 7) << 8) | ((u32)(xmm[1].b[9] >> 7) << 9) | ((u32)(xmm[1].b[10] >> 7) << 10) | ((u32)(xmm[1].b[11] >> 7) << 11) | ((u32)(xmm[1].b[12] >> 7) << 12) | ((u32)(xmm[1].b[13] >> 7) << 13) | ((u32)(xmm[1].b[14] >> 7) << 14) | ((u32)(xmm[1].b[15] >> 7) << 15);
    /* 0084f164: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084f169: jne 0x84f234 */ if (!fZ) goto L_0084f234;
L_0084f16f:; BB(0x0084f16f);
    /* 0084f16f: fld1  */ FPUSH(1.0);
    /* 0084f171: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f172:; BB(0x0084f172);
    /* 0084f172: movlpd xmm3, qword ptr [0x993f30] */ xmm[3].q[0] = R64((u32)(0x993f30u));
    /* 0084f17a: xorpd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 0084f17e: andpd xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].q[0] = xmm[3].q[0] & s.q[0]; xmm[3].q[1] = xmm[3].q[1] & s.q[1]; }
    /* 0084f182: pcmpeqd xmm1, xmm3 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = xmm[3].q[0]; MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = xmm[3].q[1]; MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; xmm[1].q[1] = r.q; }
    /* 0084f186: pmovmskb eax, xmm1 */ r_eax = ((u32)(xmm[1].b[0] >> 7) << 0) | ((u32)(xmm[1].b[1] >> 7) << 1) | ((u32)(xmm[1].b[2] >> 7) << 2) | ((u32)(xmm[1].b[3] >> 7) << 3) | ((u32)(xmm[1].b[4] >> 7) << 4) | ((u32)(xmm[1].b[5] >> 7) << 5) | ((u32)(xmm[1].b[6] >> 7) << 6) | ((u32)(xmm[1].b[7] >> 7) << 7) | ((u32)(xmm[1].b[8] >> 7) << 8) | ((u32)(xmm[1].b[9] >> 7) << 9) | ((u32)(xmm[1].b[10] >> 7) << 10) | ((u32)(xmm[1].b[11] >> 7) << 11) | ((u32)(xmm[1].b[12] >> 7) << 12) | ((u32)(xmm[1].b[13] >> 7) << 13) | ((u32)(xmm[1].b[14] >> 7) << 14) | ((u32)(xmm[1].b[15] >> 7) << 15);
    /* 0084f18a: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084f18f: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f194: jne 0x84f234 */ if (!fZ) goto L_0084f234;
L_0084f19a:; BB(0x0084f19a);
    /* 0084f19a: pextrw eax, xmm2, 3 */ r_eax = (u32)xmm[2].w[3];
    /* 0084f19f: movlpd xmm4, qword ptr [esp + 4] */ xmm[4].q[0] = R64((u32)(r_esp+0x4u));
    /* 0084f1a5: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084f1aa: xor ecx, 0xbff00000 */ {  u32 a = r_ecx; u32 b = 0xbff00000u; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0084f1b0: or edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0084f1b2: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084f1b5: je 0x84f2af */ if (fZ) goto L_0084f2af;
L_0084f1bb:; BB(0x0084f1bb);
    /* 0084f1bb: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f1be: je 0x84f215 */ if (fZ) goto L_0084f215;
L_0084f1c4:; BB(0x0084f1c4);
    /* 0084f1c4: pextrw eax, xmm4, 3 */ r_eax = (u32)xmm[4].w[3];
    /* 0084f1c9: and eax, 0x7ff0 */ {  u32 a = r_eax; u32 b = 0x7ff0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084f1ce: cmp eax, 0x3ff0 */ {  u32 a = r_eax; u32 b = 0x3ff0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084f1d3: jae 0x84f212 */ if (!fC) goto L_0084f212;
L_0084f1d9:; BB(0x0084f1d9);
    /* 0084f1d9: movd eax, xmm4 */ r_eax = xmm[4].d[0];
    /* 0084f1dd: psrlq xmm4, 0x20 */ { MM64 a; a.q = xmm[4].q[0]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[4].q[0] = r.q; } { MM64 a; a.q = xmm[4].q[1]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[4].q[1] = r.q; }
    /* 0084f1e2: movd edx, xmm4 */ r_edx = xmm[4].d[0];
    /* 0084f1e6: and edx, 0x7fffffff */ {  u32 a = r_edx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084f1ec: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0084f1ee: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084f1f1: jne 0x84f22d */ if (!fZ) goto L_0084f22d;
L_0084f1f7:; BB(0x0084f1f7);
    /* 0084f1f7: xorpd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 0084f1fb: xorpd xmm4, xmm4 */ { XMM s = xmm[4]; xmm[4].q[0] = xmm[4].q[0] ^ s.q[0]; xmm[4].q[1] = xmm[4].q[1] ^ s.q[1]; }
    /* 0084f1ff: mov eax, 0x3ff0 */ r_eax = 0x3ff0u;
    /* 0084f204: pinsrw xmm1, eax, 3 */ xmm[1].w[3] = (u16)(r_eax);
    /* 0084f209: divsd xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].f[0] = xmm[1].f[0] / s.f[0]; }
    /* 0084f20d: jmp 0x84f22d */ goto L_0084f22d;
L_0084f212:; BB(0x0084f212);
    /* 0084f212: fldz  */ FPUSH(0.0);
    /* 0084f214: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f215:; BB(0x0084f215);
    /* 0084f215: pextrw eax, xmm4, 3 */ r_eax = (u32)xmm[4].w[3];
    /* 0084f21a: and eax, 0x7ff0 */ {  u32 a = r_eax; u32 b = 0x7ff0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084f21f: cmp eax, 0x3ff0 */ {  u32 a = r_eax; u32 b = 0x3ff0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084f224: jae 0x84f22d */ if (!fC) goto L_0084f22d;
L_0084f22a:; BB(0x0084f22a);
    /* 0084f22a: fldz  */ FPUSH(0.0);
    /* 0084f22c: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f22d:; BB(0x0084f22d);
    /* 0084f22d: fld qword ptr [0x993fb8] */ FPUSH(R_F64((u32)(0x993fb8u)));
    /* 0084f233: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f234:; BB(0x0084f234);
    /* 0084f234: addsd xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].f[0] = xmm[2].f[0] + s.f[0]; }
    /* 0084f238: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084f23b: movlpd qword ptr [esp + 4], xmm2 */ W64((u32)(r_esp+0x4u), xmm[2].q[0]);
    /* 0084f241: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084f245: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084f248: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f249:; BB(0x0084f249);
    /* 0084f249: movd eax, xmm4 */ r_eax = xmm[4].d[0];
    /* 0084f24d: psrlq xmm4, 0x20 */ { MM64 a; a.q = xmm[4].q[0]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[4].q[0] = r.q; } { MM64 a; a.q = xmm[4].q[1]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[4].q[1] = r.q; }
    /* 0084f252: movd edx, xmm4 */ r_edx = xmm[4].d[0];
    /* 0084f256: and edx, 0x7fffffff */ {  u32 a = r_edx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084f25c: mov ecx, eax */ r_ecx = r_eax;
    /* 0084f25e: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084f260: movlpd xmm0, qword ptr [0x993f40] */ xmm[0].q[0] = R64((u32)(0x993f40u));
    /* 0084f268: mov edx, 0x1a */ r_edx = 0x1au;
    /* 0084f26d: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f270: je 0x84f2b2 */ if (fZ) goto L_0084f2b2;
L_0084f276:; BB(0x0084f276);
    /* 0084f276: movd eax, xmm4 */ r_eax = xmm[4].d[0];
    /* 0084f27a: mov edx, 0x1d */ r_edx = 0x1du;
    /* 0084f27f: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084f284: cmp eax, 0x7ff00000 */ {  u32 a = r_eax; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084f289: ja 0x84f2b2 */ if ((!fC&&!fZ)) goto L_0084f2b2;
L_0084f28f:; BB(0x0084f28f);
    /* 0084f28f: jb 0x84f29e */ if (fC) goto L_0084f29e;
L_0084f295:; BB(0x0084f295);
    /* 0084f295: cmp ecx, 0 */ {  u32 a = r_ecx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084f298: ja 0x84f2b2 */ if ((!fC&&!fZ)) goto L_0084f2b2;
L_0084f29e:; BB(0x0084f29e);
    /* 0084f29e: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084f2a1: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084f2a7: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084f2ab: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084f2ae: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f2af:; BB(0x0084f2af);
    /* 0084f2af: fld1  */ FPUSH(1.0);
    /* 0084f2b1: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f2b2:; BB(0x0084f2b2);
    /* 0084f2b2: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084f2b5: movlpd qword ptr [esp + 0x10], xmm0 */ W64((u32)(r_esp+0x10u), xmm[0].q[0]);
    /* 0084f2bb: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0084f2bf: mov edx, esp */ r_edx = r_esp;
    /* 0084f2c1: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084f2c4: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0084f2c8: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084f2cb: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0084f2cf: sub edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084f2d2: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0084f2d5: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x84f2dau); f_00850eb4();
    /* 0084f2da: fld qword ptr [esp + 0x10] */ FPUSH(R_F64((u32)(r_esp+0x10u)));
    /* 0084f2de: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084f2e1: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f2e2:; BB(0x0084f2e2);
    /* 0084f2e2: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084f2e5: jle 0x84f316 */ if ((fZ||fS!=fO)) goto L_0084f316;
L_0084f2eb:; BB(0x0084f2eb);
    /* 0084f2eb: cmp eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084f2f0: jae 0x84f539 */ if (!fC) goto L_0084f539;
L_0084f2f6:; BB(0x0084f2f6);
    /* 0084f2f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084f2f7: mov edx, eax */ r_edx = r_eax;
    /* 0084f2f9: and eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084f2fc: add ecx, 0x3ff00 */ {  u32 a = r_ecx; u32 b = 0x3ff00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084f302: sub edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084f308: and edx, 0xffffff80 */ {  u32 a = r_edx; u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084f30b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084f30c: mov edi, 0x3ff0 */ r_edi = 0x3ff0u;
    /* 0084f311: jmp 0x84f33c */ goto L_0084f33c;
L_0084f316:; BB(0x0084f316);
    /* 0084f316: cmp eax, 0xfffc0200 */ {  u32 a = r_eax; u32 b = 0xfffc0200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084f31b: jle 0x84f516 */ if ((fZ||fS!=fO)) goto L_0084f516;
L_0084f321:; BB(0x0084f321);
    /* 0084f321: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084f322: mov edx, eax */ r_edx = r_eax;
    /* 0084f324: and eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084f327: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084f32d: and edx, 0xffffff80 */ {  u32 a = r_edx; u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084f330: add edx, 0x3fe80 */ {  u32 a = r_edx; u32 b = 0x3fe80u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084f336: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084f337: mov edi, 0 */ r_edi = 0x0u;
L_0084f33c:; BB(0x0084f33c);
    /* 0084f33c: addsd xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].f[0] = xmm[4].f[0] + s.f[0]; }
    /* 0084f340: movsd xmm0, xmm3 */ xmm[0].q[0] = xmm[3].q[0];
    /* 0084f344: addsd xmm3, qword ptr [0x993f98] */ { XMM s; s.q[0] = R64((u32)(0x993f98u)); s.q[1] = 0; xmm[3].f[0] = xmm[3].f[0] + s.f[0]; }
    /* 0084f34c: mov esi, edx */ r_esi = r_edx;
    /* 0084f34e: sub esi, 0x1ff80 */ {  u32 a = r_esi; u32 b = 0x1ff80u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0084f354: mulpd xmm2, xmm7 */ { XMM s = xmm[7]; xmm[2].f[0] = xmm[2].f[0] * s.f[0]; xmm[2].f[1] = xmm[2].f[1] * s.f[1]; }
    /* 0084f358: subsd xmm3, qword ptr [0x993f98] */ { XMM s; s.q[0] = R64((u32)(0x993f98u)); s.q[1] = 0; xmm[3].f[0] = xmm[3].f[0] - s.f[0]; }
    /* 0084f360: mulpd xmm7, xmm7 */ { XMM s = xmm[7]; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; xmm[7].f[1] = xmm[7].f[1] * s.f[1]; }
    /* 0084f364: subsd xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; }
    /* 0084f368: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084f36a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084f36c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084f36e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084f370: movapd xmm3, xmmword ptr [eax + 0x993700] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x993700u), 16); xmm[3] = s; }
    /* 0084f378: movapd xmm6, xmmword ptr [0x993f50] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x993f50u), 16); xmm[6] = s; }
    /* 0084f380: mulpd xmm1, xmm7 */ { XMM s = xmm[7]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; xmm[1].f[1] = xmm[1].f[1] * s.f[1]; }
    /* 0084f384: addpd xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].f[0] = xmm[2].f[0] + s.f[0]; xmm[2].f[1] = xmm[2].f[1] + s.f[1]; }
    /* 0084f388: pshufd xmm1, xmm2, 0xee */ { XMM s = xmm[2]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[1] = r; }
    /* 0084f38d: mulsd xmm2, xmm7 */ { XMM s = xmm[7]; xmm[2].f[0] = xmm[2].f[0] * s.f[0]; }
    /* 0084f391: addsd xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].f[0] = xmm[2].f[0] + s.f[0]; }
    /* 0084f395: addsd xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].f[0] = xmm[2].f[0] + s.f[0]; }
    /* 0084f399: movlpd xmm4, qword ptr [0x993f70] */ xmm[4].q[0] = R64((u32)(0x993f70u));
    /* 0084f3a1: movd xmm1, edx */ { u32 v = r_edx; xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0084f3a5: sub edx, 0x1ff80 */ {  u32 a = r_edx; u32 b = 0x1ff80u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084f3ab: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084f3ad: sar edx, 7 */ { u32 c = (7u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0084f3b0: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084f3b3: mov eax, edx */ r_eax = r_edx;
    /* 0084f3b5: and eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084f3b8: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084f3ba: xorpd xmm7, xmm7 */ { XMM s = xmm[7]; xmm[7].q[0] = xmm[7].q[0] ^ s.q[0]; xmm[7].q[1] = xmm[7].q[1] ^ s.q[1]; }
    /* 0084f3be: mov eax, 0x3f80 */ r_eax = 0x3f80u;
    /* 0084f3c3: pinsrw xmm7, eax, 3 */ xmm[7].w[3] = (u16)(r_eax);
    /* 0084f3c8: mulsd xmm2, qword ptr [esp + 0x14] */ { XMM s; s.q[0] = R64((u32)(r_esp+0x14u)); s.q[1] = 0; xmm[2].f[0] = xmm[2].f[0] * s.f[0]; }
    /* 0084f3ce: mulsd xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084f3d2: psllq xmm1, 0x2d */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2du; r.q = c > 63 ? 0 : (a.q << c); xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2du; r.q = c > 63 ? 0 : (a.q << c); xmm[1].q[1] = r.q; }
    /* 0084f3d7: pshufd xmm1, xmm1, 0x44 */ { XMM s = xmm[1]; XMM r; r.d[0] = s.d[0]; r.d[1] = s.d[1]; r.d[2] = s.d[0]; r.d[3] = s.d[1]; xmm[1] = r; }
    /* 0084f3dc: movapd xmm7, xmmword ptr [0x993f60] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x993f60u), 16); xmm[7] = s; }
    /* 0084f3e4: addsd xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].f[0] = xmm[5].f[0] + s.f[0]; }
    /* 0084f3e8: mulpd xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].f[0] = xmm[3].f[0] * s.f[0]; xmm[3].f[1] = xmm[3].f[1] * s.f[1]; }
    /* 0084f3ec: addsd xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084f3f0: unpcklpd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[1] = s.f[0]; }
    /* 0084f3f4: mulpd xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; xmm[6].f[1] = xmm[6].f[1] * s.f[1]; }
    /* 0084f3f8: mulsd xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].f[0] = xmm[4].f[0] * s.f[0]; }
    /* 0084f3fc: mulpd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; xmm[0].f[1] = xmm[0].f[1] * s.f[1]; }
    /* 0084f400: addpd xmm7, xmm6 */ { XMM s = xmm[6]; xmm[7].f[0] = xmm[7].f[0] + s.f[0]; xmm[7].f[1] = xmm[7].f[1] + s.f[1]; }
    /* 0084f404: mulpd xmm7, xmm0 */ { XMM s = xmm[0]; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; xmm[7].f[1] = xmm[7].f[1] * s.f[1]; }
    /* 0084f408: mulsd xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084f40c: pshufd xmm6, xmm7, 0xee */ { XMM s = xmm[7]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[6] = r; }
    /* 0084f411: mulsd xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084f415: pshufd xmm5, xmm3, 0xee */ { XMM s = xmm[3]; XMM r; r.d[0] = s.d[2]; r.d[1] = s.d[3]; r.d[2] = s.d[2]; r.d[3] = s.d[3]; xmm[5] = r; }
    /* 0084f41a: mulsd xmm6, xmm3 */ { XMM s = xmm[3]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; }
    /* 0084f41e: mulsd xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].f[0] = xmm[4].f[0] * s.f[0]; }
    /* 0084f422: movd xmm7, ecx */ { u32 v = r_ecx; xmm[7].d[0] = v; xmm[7].d[1] = 0; xmm[7].d[2] = 0; xmm[7].d[3] = 0; }
    /* 0084f426: psllq xmm7, 0x2d */ { MM64 a; a.q = xmm[7].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2du; r.q = c > 63 ? 0 : (a.q << c); xmm[7].q[0] = r.q; } { MM64 a; a.q = xmm[7].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2du; r.q = c > 63 ? 0 : (a.q << c); xmm[7].q[1] = r.q; }
    /* 0084f42b: movd xmm2, edx */ { u32 v = r_edx; xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 0084f42f: pcmpeqd xmm1, xmm1 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; xmm[1].q[1] = r.q; }
    /* 0084f433: psllq xmm1, xmm2 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; u32 c = (u32)(0xffu & xmm[2].q[0]); r.q = c > 63 ? 0 : (a.q << c); xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; u32 c = (u32)(0xffu & xmm[2].q[0]); r.q = c > 63 ? 0 : (a.q << c); xmm[1].q[1] = r.q; }
    /* 0084f437: addsd xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084f43b: addsd xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084f43f: andpd xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].q[0] = xmm[1].q[0] & s.q[0]; xmm[1].q[1] = xmm[1].q[1] & s.q[1]; }
    /* 0084f443: addsd xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084f447: xorpd xmm6, xmm6 */ { XMM s = xmm[6]; xmm[6].q[0] = xmm[6].q[0] ^ s.q[0]; xmm[6].q[1] = xmm[6].q[1] ^ s.q[1]; }
    /* 0084f44b: pcmpeqd xmm4, xmm4 */ { MM64 a; a.q = xmm[4].q[0]; MM64 b; b.q = xmm[4].q[0]; MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; xmm[4].q[0] = r.q; } { MM64 a; a.q = xmm[4].q[1]; MM64 b; b.q = xmm[4].q[1]; MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; xmm[4].q[1] = r.q; }
    /* 0084f44f: psllq xmm4, xmm2 */ { MM64 a; a.q = xmm[4].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; u32 c = (u32)(0xffu & xmm[2].q[0]); r.q = c > 63 ? 0 : (a.q << c); xmm[4].q[0] = r.q; } { MM64 a; a.q = xmm[4].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; u32 c = (u32)(0xffu & xmm[2].q[0]); r.q = c > 63 ? 0 : (a.q << c); xmm[4].q[1] = r.q; }
    /* 0084f453: subsd xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].f[0] = xmm[3].f[0] - s.f[0]; }
    /* 0084f457: movsd xmm2, xmm1 */ xmm[2].q[0] = xmm[1].q[0];
    /* 0084f45b: addsd xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].f[0] = xmm[1].f[0] + s.f[0]; }
    /* 0084f45f: andpd xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].q[0] = xmm[1].q[0] & s.q[0]; xmm[1].q[1] = xmm[1].q[1] & s.q[1]; }
    /* 0084f463: pinsrw xmm6, edi, 3 */ xmm[6].w[3] = (u16)(r_edi);
    /* 0084f468: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084f469: subsd xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].f[0] = xmm[2].f[0] - s.f[0]; }
    /* 0084f46d: addsd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084f471: addsd xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084f475: cmp esi, 0 */ {  u32 a = r_esi; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0084f478: jg 0x84f4cc */ if ((!fZ&&fS==fO)) goto L_0084f4cc;
L_0084f47e:; BB(0x0084f47e);
    /* 0084f47e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084f47f: mulsd xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084f483: mulsd xmm1, xmm7 */ { XMM s = xmm[7]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084f487: addsd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084f48b: mulsd xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; }
    /* 0084f48f: addsd xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084f493: pextrw eax, xmm0, 3 */ r_eax = (u32)xmm[0].w[3];
    /* 0084f498: and eax, 0x7ff0 */ {  u32 a = r_eax; u32 b = 0x7ff0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084f49d: mov edx, 0x18 */ r_edx = 0x18u;
    /* 0084f4a2: cmp eax, 0x7ff0 */ {  u32 a = r_eax; u32 b = 0x7ff0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f4a7: je 0x84f2b2 */ if (fZ) goto L_0084f2b2;
L_0084f4ad:; BB(0x0084f4ad);
    /* 0084f4ad: mov edx, 0x19 */ r_edx = 0x19u;
    /* 0084f4b2: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f4b5: je 0x84f2b2 */ if (fZ) goto L_0084f2b2;
L_0084f4bb:; BB(0x0084f4bb);
    /* 0084f4bb: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084f4be: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084f4c4: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084f4c8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084f4cb: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f4cc:; BB(0x0084f4cc);
    /* 0084f4cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084f4cd: addsd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084f4d1: mulsd xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084f4d5: mulsd xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].f[0] = xmm[6].f[0] * s.f[0]; }
    /* 0084f4d9: addsd xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 0084f4dd: pextrw eax, xmm0, 3 */ r_eax = (u32)xmm[0].w[3];
    /* 0084f4e2: and eax, 0x7ff0 */ {  u32 a = r_eax; u32 b = 0x7ff0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084f4e7: mov edx, 0x18 */ r_edx = 0x18u;
    /* 0084f4ec: cmp eax, 0x7ff0 */ {  u32 a = r_eax; u32 b = 0x7ff0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f4f1: je 0x84f2b2 */ if (fZ) goto L_0084f2b2;
L_0084f4f7:; BB(0x0084f4f7);
    /* 0084f4f7: mov edx, 0x19 */ r_edx = 0x19u;
    /* 0084f4fc: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f4ff: je 0x84f2b2 */ if (fZ) goto L_0084f2b2;
L_0084f505:; BB(0x0084f505);
    /* 0084f505: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084f508: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084f50e: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084f512: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084f515: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f516:; BB(0x0084f516);
    /* 0084f516: movlpd xmm0, qword ptr [0x993fa8] */ xmm[0].q[0] = R64((u32)(0x993fa8u));
    /* 0084f51e: movd xmm1, ecx */ { u32 v = r_ecx; xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0084f522: mulsd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 0084f526: psllq xmm1, 0x2d */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2du; r.q = c > 63 ? 0 : (a.q << c); xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2du; r.q = c > 63 ? 0 : (a.q << c); xmm[1].q[1] = r.q; }
    /* 0084f52b: orpd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].q[0] = xmm[0].q[0] | s.q[0]; xmm[0].q[1] = xmm[0].q[1] | s.q[1]; }
    /* 0084f52f: mov edx, 0x19 */ r_edx = 0x19u;
    /* 0084f534: jmp 0x84f2b2 */ goto L_0084f2b2;
L_0084f539:; BB(0x0084f539);
    /* 0084f539: xorpd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 0084f53d: mov eax, 0x7fef */ r_eax = 0x7fefu;
    /* 0084f542: pinsrw xmm1, eax, 3 */ xmm[1].w[3] = (u16)(r_eax);
    /* 0084f547: mulsd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0084f54b: mov edx, 0x18 */ r_edx = 0x18u;
    /* 0084f550: cmp ecx, 0 */ {  u32 a = r_ecx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f553: je 0x84f566 */ if (fZ) goto L_0084f566;
L_0084f559:; BB(0x0084f559);
    /* 0084f559: movlpd xmm0, qword ptr [0x993fb0] */ xmm[0].q[0] = R64((u32)(0x993fb0u));
    /* 0084f561: jmp 0x84f2b2 */ goto L_0084f2b2;
L_0084f566:; BB(0x0084f566);
    /* 0084f566: movlpd xmm0, qword ptr [0x993fb8] */ xmm[0].q[0] = R64((u32)(0x993fb8u));
    /* 0084f56e: jmp 0x84f2b2 */ goto L_0084f2b2;
L_0084f573:; BB(0x0084f573);
    /* 0084f573: pshufd xmm4, xmm1, 0x44 */ { XMM s = xmm[1]; XMM r; r.d[0] = s.d[0]; r.d[1] = s.d[1]; r.d[2] = s.d[0]; r.d[3] = s.d[1]; xmm[4] = r; }
    /* 0084f578: mulpd xmm4, xmm6 */ { XMM s = xmm[6]; xmm[4].f[0] = xmm[4].f[0] * s.f[0]; xmm[4].f[1] = xmm[4].f[1] * s.f[1]; }
    /* 0084f57c: pextrw eax, xmm4, 3 */ r_eax = (u32)xmm[4].w[3];
    /* 0084f581: and eax, 0x7ff0 */ {  u32 a = r_eax; u32 b = 0x7ff0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084f586: mov edx, 0x40a0 */ r_edx = 0x40a0u;
    /* 0084f58b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084f58d: sub eax, 0x3c70 */ {  u32 a = r_eax; u32 b = 0x3c70u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084f592: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0084f594: cmp edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084f59a: jb 0x84ec0f */ if (fC) goto L_0084ec0f;
L_0084f5a0:; BB(0x0084f5a0);
    /* 0084f5a0: cmp eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084f5a5: jb 0x84f5c7 */ if (fC) goto L_0084f5c7;
L_0084f5a7:; BB(0x0084f5a7);
    /* 0084f5a7: or ecx, 0x1ff80 */ {  u32 a = r_ecx; u32 b = 0x1ff80u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0084f5ad: movd xmm0, ecx */ { u32 v = r_ecx; xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0084f5b1: psllq xmm0, 0x2d */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2du; r.q = c > 63 ? 0 : (a.q << c); xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2du; r.q = c > 63 ? 0 : (a.q << c); xmm[0].q[1] = r.q; }
    /* 0084f5b6: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084f5b9: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0084f5bf: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 0084f5c3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084f5c6: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f5c7:; BB(0x0084f5c7);
    /* 0084f5c7: movlpd xmm4, qword ptr [esp + 4] */ xmm[4].q[0] = R64((u32)(r_esp+0x4u));
    /* 0084f5cd: pextrw edx, xmm4, 3 */ r_edx = (u32)xmm[4].w[3];
    /* 0084f5d2: and edx, 0x7ff0 */ {  u32 a = r_edx; u32 b = 0x7ff0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084f5d8: sub edx, 0x3ff0 */ {  u32 a = r_edx; u32 b = 0x3ff0u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084f5de: pextrw eax, xmm1, 3 */ r_eax = (u32)xmm[1].w[3];
    /* 0084f5e3: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084f5e5: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084f5ea: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f5ed: jne 0x84f516 */ if (!fZ) goto L_0084f516;
L_0084f5f3:; BB(0x0084f5f3);
    /* 0084f5f3: jmp 0x84f539 */ goto L_0084f539;
L_0084f5f8:; BB(0x0084f5f8);
    /* 0084f5f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084f5f9: mov ebx, esp */ r_ebx = r_esp;
    /* 0084f5fb: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0084f5fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084f5ff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084f600: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0084f603: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0084f607: mov ebp, esp */ r_ebp = r_esp;
    /* 0084f609: sub esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084f60f: mov dword ptr [ebp - 0xb0], edi */ W32((u32)(r_ebp+0xffffff50u), r_edi);
    /* 0084f615: mov dword ptr [ebp - 0xac], esi */ W32((u32)(r_ebp+0xffffff54u), r_esi);
    /* 0084f61b: mov eax, 0 */ r_eax = 0x0u;
    /* 0084f620: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0084f623: fnstcw word ptr [ebp - 8] */ W16((u32)(r_ebp+0xfffffff8u), fcw);
    /* 0084f626: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 0084f629: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0084f62c: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 0084f62f: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0084f632: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0084f635: mov edx, esi */ r_edx = r_esi;
    /* 0084f637: and edx, 0x7fffffff */ {  u32 a = r_edx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084f63d: mov dword ptr [ebp - 0x74], edi */ W32((u32)(r_ebp+0xffffff8cu), r_edi);
    /* 0084f640: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0084f643: mov eax, esi */ r_eax = r_esi;
    /* 0084f645: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0084f648: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0084f64b: mov eax, edi */ r_eax = r_edi;
    /* 0084f64d: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084f652: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0084f655: mov dword ptr [ebp - 0x7c], edi */ W32((u32)(r_ebp+0xffffff84u), r_edi);
    /* 0084f658: mov edi, eax */ r_edi = r_eax;
    /* 0084f65a: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084f65c: mov dword ptr [ebp - 0x70], edi */ W32((u32)(r_ebp+0xffffff90u), r_edi);
    /* 0084f65f: je 0x850450 */ if (fZ) goto L_00850450;
L_0084f665:; BB(0x0084f665);
    /* 0084f665: add esi, 0xc0100000 */ {  u32 a = r_esi; u32 b = 0xc0100000u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084f66b: or esi, dword ptr [ebp - 0x64] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a | b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084f66e: je 0x850450 */ if (fZ) goto L_00850450;
L_0084f674:; BB(0x0084f674);
    /* 0084f674: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0084f676: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 0084f67c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0084f67e: lea edi, [eax - 0x3ff00000] */ r_edi = (u32)(r_eax+0xc0100000u);
    /* 0084f684: mov dword ptr [ebp - 0x80], esi */ W32((u32)(r_ebp+0xffffff80u), r_esi);
    /* 0084f687: mov dword ptr [ebp - 0xa8], edi */ W32((u32)(r_ebp+0xffffff58u), r_edi);
    /* 0084f68d: cmp edi, 0x3500000 */ {  u32 a = r_edi; u32 b = 0x3500000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084f693: jae 0x84f740 */ if (!fC) goto L_0084f740;
L_0084f699:; BB(0x0084f699);
    /* 0084f699: mov ecx, eax */ r_ecx = r_eax;
    /* 0084f69b: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0084f69e: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084f6a4: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 0084f6aa: cmp eax, 0x41400000 */ {  u32 a = r_eax; u32 b = 0x41400000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084f6af: jae 0x84f6ec */ if (!fC) goto L_0084f6ec;
L_0084f6b1:; BB(0x0084f6b1);
    /* 0084f6b1: mov esi, ecx */ r_esi = r_ecx;
    /* 0084f6b3: lea ecx, [esi - 0x3f4] */ r_ecx = (u32)(r_esi+0xfffffc0cu);
    /* 0084f6b9: mov edi, eax */ r_edi = r_eax;
    /* 0084f6bb: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0084f6bd: cmp eax, 0x41300000 */ {  u32 a = r_eax; u32 b = 0x41300000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084f6c2: mov dword ptr [ebp - 0x98], edi */ W32((u32)(r_ebp+0xffffff68u), r_edi);
    /* 0084f6c8: jae 0x84f6e1 */ if (!fC) goto L_0084f6e1;
L_0084f6ca:; BB(0x0084f6ca);
    /* 0084f6ca: mov ecx, esi */ r_ecx = r_esi;
    /* 0084f6cc: add ecx, 0xfffffc0d */ {  u32 a = r_ecx; u32 b = 0xfffffc0du; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084f6d2: mov esi, eax */ r_esi = r_eax;
    /* 0084f6d4: shl esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0084f6d6: or esi, dword ptr [ebp - 0x68] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffff98u)); u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0084f6d9: mov dword ptr [ebp - 0x88], esi */ W32((u32)(r_ebp+0xffffff78u), r_esi);
    /* 0084f6df: jmp 0x84f723 */ goto L_0084f723;
L_0084f6e1:; BB(0x0084f6e1);
    /* 0084f6e1: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0084f6e4: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 0084f6ea: jmp 0x84f723 */ goto L_0084f723;
L_0084f6ec:; BB(0x0084f6ec);
    /* 0084f6ec: mov esi, ecx */ r_esi = r_ecx;
    /* 0084f6ee: mov edi, dword ptr [ebp - 0x68] */ r_edi = R32((u32)(r_ebp+0xffffff98u));
    /* 0084f6f1: lea ecx, [esi - 0x414] */ r_ecx = (u32)(r_esi+0xfffffbecu);
    /* 0084f6f7: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0084f6f9: cmp eax, 0x43300000 */ {  u32 a = r_eax; u32 b = 0x43300000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084f6fe: mov dword ptr [ebp - 0x98], edi */ W32((u32)(r_ebp+0xffffff68u), r_edi);
    /* 0084f704: jae 0x84f71b */ if (!fC) goto L_0084f71b;
L_0084f706:; BB(0x0084f706);
    /* 0084f706: mov ecx, esi */ r_ecx = r_esi;
    /* 0084f708: mov esi, dword ptr [ebp - 0x68] */ r_esi = R32((u32)(r_ebp+0xffffff98u));
    /* 0084f70b: add ecx, 0xfffffbed */ {  u32 a = r_ecx; u32 b = 0xfffffbedu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084f711: shl esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0084f713: mov dword ptr [ebp - 0x88], esi */ W32((u32)(r_ebp+0xffffff78u), r_esi);
    /* 0084f719: jmp 0x84f723 */ goto L_0084f723;
L_0084f71b:; BB(0x0084f71b);
    /* 0084f71b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0084f71d: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
L_0084f723:; BB(0x0084f723);
    /* 0084f723: mov ecx, edi */ r_ecx = r_edi;
    /* 0084f725: test ecx, 0x80000000 */ {  u32 a = r_ecx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f72b: je 0x84f75a */ if (fZ) goto L_0084f75a;
L_0084f72d:; BB(0x0084f72d);
    /* 0084f72d: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0084f730: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 0084f733: mov esi, 1 */ r_esi = 0x1u;
    /* 0084f738: mov dword ptr [ebp - 0x84], esi */ W32((u32)(r_ebp+0xffffff7cu), r_esi);
    /* 0084f73e: jmp 0x84f75a */ goto L_0084f75a;
L_0084f740:; BB(0x0084f740);
    /* 0084f740: cmp eax, 0x3ff00000 */ {  u32 a = r_eax; u32 b = 0x3ff00000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084f745: jae 0x84f752 */ if (!fC) goto L_0084f752;
L_0084f747:; BB(0x0084f747);
    /* 0084f747: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0084f74a: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 0084f750: jmp 0x84f75a */ goto L_0084f75a;
L_0084f752:; BB(0x0084f752);
    /* 0084f752: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0084f754: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
L_0084f75a:; BB(0x0084f75a);
    /* 0084f75a: mov esi, edx */ r_esi = r_edx;
    /* 0084f75c: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0084f75e: add esi, 0x7fefffff */ {  u32 a = r_esi; u32 b = 0x7fefffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084f764: mov ecx, eax */ r_ecx = r_eax;
    /* 0084f766: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084f768: add ecx, 0x7fefffff */ {  u32 a = r_ecx; u32 b = 0x7fefffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084f76e: or esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0084f770: test esi, 0x80000000 */ {  u32 a = r_esi; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f776: je 0x84f911 */ if (fZ) goto L_0084f911;
L_0084f77c:; BB(0x0084f77c);
    /* 0084f77c: mov edi, dword ptr [ebp - 0x64] */ r_edi = R32((u32)(r_ebp+0xffffff9cu));
    /* 0084f77f: lea esi, [edx - 0x7ff00000] */ r_esi = (u32)(r_edx+0x80100000u);
    /* 0084f785: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0084f787: lea ecx, [eax - 0x7ff00000] */ r_ecx = (u32)(r_eax+0x80100000u);
    /* 0084f78d: mov dword ptr [ebp - 0x60], edi */ W32((u32)(r_ebp+0xffffffa0u), r_edi);
    /* 0084f790: mov edi, dword ptr [ebp - 0x68] */ r_edi = R32((u32)(r_ebp+0xffffff98u));
    /* 0084f793: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0084f799: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0084f79b: mov dword ptr [ebp - 0x94], edi */ W32((u32)(r_ebp+0xffffff6cu), r_edi);
    /* 0084f7a1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0084f7a3: mov esi, dword ptr [ebp - 0x60] */ r_esi = R32((u32)(r_ebp+0xffffffa0u));
    /* 0084f7a6: jl 0x84f7ac */ if ((fS!=fO)) goto L_0084f7ac;
L_0084f7a8:; BB(0x0084f7a8);
    /* 0084f7a8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f7aa: jne 0x84f7b6 */ if (!fZ) goto L_0084f7b6;
L_0084f7ac:; BB(0x0084f7ac);
    /* 0084f7ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0084f7ae: jl 0x84f7e1 */ if ((fS!=fO)) goto L_0084f7e1;
L_0084f7b0:; BB(0x0084f7b0);
    /* 0084f7b0: mov ecx, edi */ r_ecx = r_edi;
    /* 0084f7b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f7b4: je 0x84f7e1 */ if (fZ) goto L_0084f7e1;
L_0084f7b6:; BB(0x0084f7b6);
    /* 0084f7b6: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084f7b9: fmul qword ptr [ebx + 0x10] */ ST(0) = ST(0) * R_F64((u32)(r_ebx+0x10u));
    /* 0084f7bc: fst qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0));
    /* 0084f7bf: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084f7c1: je 0x84f7ce */ if (fZ) goto L_0084f7ce;
L_0084f7c3:; BB(0x0084f7c3);
    /* 0084f7c3: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0084f7c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084f7c8: je 0x850469 */ if (fZ) goto L_00850469;
L_0084f7ce:; BB(0x0084f7ce);
    /* 0084f7ce: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 0084f7d4: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0084f7da: mov esp, ebp */ r_esp = r_ebp;
    /* 0084f7dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084f7dd: mov esp, ebx */ r_esp = r_ebx;
    /* 0084f7df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084f7e0: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f7e1:; BB(0x0084f7e1);
    /* 0084f7e1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f7e3: jne 0x84f835 */ if (!fZ) goto L_0084f835;
L_0084f7e5:; BB(0x0084f7e5);
    /* 0084f7e5: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0084f7eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f7ed: je 0x84f7f4 */ if (fZ) goto L_0084f7f4;
L_0084f7ef:; BB(0x0084f7ef);
    /* 0084f7ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084f7f1: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
L_0084f7f4:; BB(0x0084f7f4);
    /* 0084f7f4: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0084f7f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084f7f9: je 0x84f818 */ if (fZ) goto L_0084f818;
L_0084f7fb:; BB(0x0084f7fb);
    /* 0084f7fb: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0084f7fe: fld qword ptr [edx*8 + 0x994230] */ FPUSH(R_F64((u32)(r_edx*8+0x994230u)));
    /* 0084f805: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 0084f80b: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0084f811: mov esp, ebp */ r_esp = r_ebp;
    /* 0084f813: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084f814: mov esp, ebx */ r_esp = r_ebx;
    /* 0084f816: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084f817: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f818:; BB(0x0084f818);
    /* 0084f818: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0084f81b: fld qword ptr [edx*8 + 0x994240] */ FPUSH(R_F64((u32)(r_edx*8+0x994240u)));
    /* 0084f822: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 0084f828: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0084f82e: mov esp, ebp */ r_esp = r_ebp;
    /* 0084f830: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084f831: mov esp, ebx */ r_esp = r_ebx;
    /* 0084f833: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084f834: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f835:; BB(0x0084f835);
    /* 0084f835: mov ecx, edi */ r_ecx = r_edi;
    /* 0084f837: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f839: jne 0x84f911 */ if (!fZ) goto L_0084f911;
L_0084f83f:; BB(0x0084f83f);
    /* 0084f83f: cmp edx, 0x3ff00000 */ {  u32 a = r_edx; u32 b = 0x3ff00000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084f845: jae 0x84f8ad */ if (!fC) goto L_0084f8ad;
L_0084f847:; BB(0x0084f847);
    /* 0084f847: or edx, dword ptr [ebp - 0x64] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0084f84a: jne 0x84f874 */ if (!fZ) goto L_0084f874;
L_0084f84c:; BB(0x0084f84c);
    /* 0084f84c: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0084f84f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084f851: jne 0x85048a */ if (!fZ) goto L_0085048a;
L_0084f857:; BB(0x0084f857);
    /* 0084f857: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0084f85a: fld qword ptr [edx*8 + 0x994230] */ FPUSH(R_F64((u32)(r_edx*8+0x994230u)));
    /* 0084f861: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 0084f867: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0084f86d: mov esp, ebp */ r_esp = r_ebp;
    /* 0084f86f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084f870: mov esp, ebx */ r_esp = r_ebx;
    /* 0084f872: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084f873: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f874:; BB(0x0084f874);
    /* 0084f874: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0084f877: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084f879: je 0x84f894 */ if (fZ) goto L_0084f894;
L_0084f87b:; BB(0x0084f87b);
    /* 0084f87b: fld qword ptr [0x994240] */ FPUSH(R_F64((u32)(0x994240u)));
    /* 0084f881: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 0084f887: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0084f88d: mov esp, ebp */ r_esp = r_ebp;
    /* 0084f88f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084f890: mov esp, ebx */ r_esp = r_ebx;
    /* 0084f892: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084f893: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f894:; BB(0x0084f894);
    /* 0084f894: fld qword ptr [0x994230] */ FPUSH(R_F64((u32)(0x994230u)));
    /* 0084f89a: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 0084f8a0: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0084f8a6: mov esp, ebp */ r_esp = r_ebp;
    /* 0084f8a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084f8a9: mov esp, ebx */ r_esp = r_ebx;
    /* 0084f8ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084f8ac: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f8ad:; BB(0x0084f8ad);
    /* 0084f8ad: add edx, 0xc0100000 */ {  u32 a = r_edx; u32 b = 0xc0100000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084f8b3: or edx, dword ptr [ebp - 0x64] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084f8b6: je 0x84f8f1 */ if (fZ) goto L_0084f8f1;
L_0084f8b8:; BB(0x0084f8b8);
    /* 0084f8b8: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0084f8bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084f8bd: je 0x84f8d8 */ if (fZ) goto L_0084f8d8;
L_0084f8bf:; BB(0x0084f8bf);
    /* 0084f8bf: fld qword ptr [0x994230] */ FPUSH(R_F64((u32)(0x994230u)));
    /* 0084f8c5: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 0084f8cb: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0084f8d1: mov esp, ebp */ r_esp = r_ebp;
    /* 0084f8d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084f8d4: mov esp, ebx */ r_esp = r_ebx;
    /* 0084f8d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084f8d7: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f8d8:; BB(0x0084f8d8);
    /* 0084f8d8: fld qword ptr [0x994240] */ FPUSH(R_F64((u32)(0x994240u)));
    /* 0084f8de: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 0084f8e4: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0084f8ea: mov esp, ebp */ r_esp = r_ebp;
    /* 0084f8ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084f8ed: mov esp, ebx */ r_esp = r_ebx;
    /* 0084f8ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084f8f0: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f8f1:; BB(0x0084f8f1);
    /* 0084f8f1: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0084f8f7: fld qword ptr [edx*8 + 0x994250] */ FPUSH(R_F64((u32)(r_edx*8+0x994250u)));
    /* 0084f8fe: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 0084f904: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0084f90a: mov esp, ebp */ r_esp = r_ebp;
    /* 0084f90c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084f90d: mov esp, ebx */ r_esp = r_ebx;
    /* 0084f90f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084f910: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f911:; BB(0x0084f911);
    /* 0084f911: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0084f914: mov esi, edx */ r_esi = r_edx;
    /* 0084f916: and esi, 0x800fffff */ {  u32 a = r_esi; u32 b = 0x800fffffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0084f91c: mov dword ptr [ebp - 0x98], esi */ W32((u32)(r_ebp+0xffffff68u), r_esi);
    /* 0084f922: or ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0084f924: jne 0x84f970 */ if (!fZ) goto L_0084f970;
L_0084f926:; BB(0x0084f926);
    /* 0084f926: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f928: jne 0x84f970 */ if (!fZ) goto L_0084f970;
L_0084f92a:; BB(0x0084f92a);
    /* 0084f92a: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0084f92d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f92f: je 0x850504 */ if (fZ) goto L_00850504;
L_0084f935:; BB(0x0084f935);
    /* 0084f935: mov esi, dword ptr [ebp - 0x88] */ r_esi = R32((u32)(r_ebp+0xffffff78u));
    /* 0084f93b: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0084f93e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f940: mov eax, 0 */ r_eax = 0x0u;
    /* 0084f945: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0084f948: and dword ptr [ebp - 0x80], eax */ { u32 ad = (u32)(r_ebp+0xffffff80u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0084f94b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084f94d: jne 0x8504c5 */ if (!fZ) goto L_008504c5;
L_0084f953:; BB(0x0084f953);
    /* 0084f953: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0084f956: fld qword ptr [edx*8 + 0x994230] */ FPUSH(R_F64((u32)(r_edx*8+0x994230u)));
    /* 0084f95d: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 0084f963: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0084f969: mov esp, ebp */ r_esp = r_ebp;
    /* 0084f96b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084f96c: mov esp, ebx */ r_esp = r_ebx;
    /* 0084f96e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084f96f: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f970:; BB(0x0084f970);
    /* 0084f970: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0084f973: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f975: je 0x84f9b7 */ if (fZ) goto L_0084f9b7;
L_0084f977:; BB(0x0084f977);
    /* 0084f977: cmp eax, 0x43300000 */ {  u32 a = r_eax; u32 b = 0x43300000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084f97c: jae 0x84f98c */ if (!fC) goto L_0084f98c;
L_0084f97e:; BB(0x0084f97e);
    /* 0084f97e: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0084f984: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f986: jne 0x85053d */ if (!fZ) goto L_0085053d;
L_0084f98c:; BB(0x0084f98c);
    /* 0084f98c: lea ecx, [edx - 0x3ff00000] */ r_ecx = (u32)(r_edx+0xc0100000u);
    /* 0084f992: or ecx, dword ptr [ebp - 0x64] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084f995: jne 0x84f9b7 */ if (!fZ) goto L_0084f9b7;
L_0084f997:; BB(0x0084f997);
    /* 0084f997: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0084f99d: fld qword ptr [edx*8 + 0x994250] */ FPUSH(R_F64((u32)(r_edx*8+0x994250u)));
    /* 0084f9a4: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 0084f9aa: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0084f9b0: mov esp, ebp */ r_esp = r_ebp;
    /* 0084f9b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084f9b3: mov esp, ebx */ r_esp = r_ebx;
    /* 0084f9b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084f9b6: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084f9b7:; BB(0x0084f9b7);
    /* 0084f9b7: mov ecx, eax */ r_ecx = r_eax;
    /* 0084f9b9: and ecx, 0x800fffff */ {  u32 a = r_ecx; u32 b = 0x800fffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084f9bf: or ecx, dword ptr [ebp - 0x68] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff98u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0084f9c2: jne 0x84fafb */ if (!fZ) goto L_0084fafb;
L_0084f9c8:; BB(0x0084f9c8);
    /* 0084f9c8: cmp eax, 0x3ff00000 */ {  u32 a = r_eax; u32 b = 0x3ff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084f9cd: jne 0x84fa80 */ if (!fZ) goto L_0084fa80;
L_0084f9d3:; BB(0x0084f9d3);
    /* 0084f9d3: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0084f9d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084f9d8: je 0x84fa6a */ if (fZ) goto L_0084fa6a;
L_0084f9de:; BB(0x0084f9de);
    /* 0084f9de: lea eax, [edx - 0x3fefffff] */ r_eax = (u32)(r_edx+0xc0100001u);
    /* 0084f9e4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084f9e7: ja 0x84f9f4 */ if ((!fC&&!fZ)) goto L_0084f9f4;
L_0084f9e9:; BB(0x0084f9e9);
    /* 0084f9e9: fld qword ptr [0x994250] */ FPUSH(R_F64((u32)(0x994250u)));
    /* 0084f9ef: fdiv qword ptr [ebx + 8] */ ST(0) = ST(0) / R_F64((u32)(r_ebx+0x8u));
    /* 0084f9f2: jmp 0x84fa57 */ goto L_0084fa57;
L_0084f9f4:; BB(0x0084f9f4);
    /* 0084f9f4: movzx ecx, word ptr [ebp - 8] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0084f9f8: mov eax, ecx */ r_eax = r_ecx;
    /* 0084f9fa: and eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084f9ff: cmp eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084fa04: je 0x84fa1b */ if (fZ) goto L_0084fa1b;
L_0084fa06:; BB(0x0084fa06);
    /* 0084fa06: or ecx, 0xffff0300 */ {  u32 a = r_ecx; u32 b = 0xffff0300u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0084fa0c: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 0084fa10: fldcw word ptr [ebp - 4] */ fcw = R16((u32)(r_ebp+0xfffffffcu));
    /* 0084fa13: mov eax, 1 */ r_eax = 0x1u;
    /* 0084fa18: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
L_0084fa1b:; BB(0x0084fa1b);
    /* 0084fa1b: fld qword ptr [0x994250] */ FPUSH(R_F64((u32)(0x994250u)));
    /* 0084fa21: fdiv qword ptr [ebx + 8] */ ST(0) = ST(0) / R_F64((u32)(r_ebx+0x8u));
    /* 0084fa24: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0084fa27: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0084fa2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084fa2c: je 0x84fa31 */ if (fZ) goto L_0084fa31;
L_0084fa2e:; BB(0x0084fa2e);
    /* 0084fa2e: fldcw word ptr [ebp - 8] */ fcw = R16((u32)(r_ebp+0xfffffff8u));
L_0084fa31:; BB(0x0084fa31);
    /* 0084fa31: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0084fa34: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084fa39: cmp eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084fa3e: jae 0x84fa54 */ if (!fC) goto L_0084fa54;
L_0084fa40:; BB(0x0084fa40);
    /* 0084fa40: and edx, 0xfffff */ {  u32 a = r_edx; u32 b = 0xfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084fa46: or edx, dword ptr [ebp - 0x64] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084fa49: jne 0x850578 */ if (!fZ) goto L_00850578;
L_0084fa4f:; BB(0x0084fa4f);
    /* 0084fa4f: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 0084fa52: jmp 0x84fa57 */ goto L_0084fa57;
L_0084fa54:; BB(0x0084fa54);
    /* 0084fa54: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
L_0084fa57:; BB(0x0084fa57);
    /* 0084fa57: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 0084fa5d: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0084fa63: mov esp, ebp */ r_esp = r_ebp;
    /* 0084fa65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084fa66: mov esp, ebx */ r_esp = r_ebx;
    /* 0084fa68: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084fa69: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084fa6a:; BB(0x0084fa6a);
    /* 0084fa6a: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084fa6d: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 0084fa73: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0084fa79: mov esp, ebp */ r_esp = r_ebp;
    /* 0084fa7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084fa7c: mov esp, ebx */ r_esp = r_ebx;
    /* 0084fa7e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084fa7f: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084fa80:; BB(0x0084fa80);
    /* 0084fa80: cmp eax, 0x3fe00000 */ {  u32 a = r_eax; u32 b = 0x3fe00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084fa85: jne 0x84fafb */ if (!fZ) goto L_0084fafb;
L_0084fa87:; BB(0x0084fa87);
    /* 0084fa87: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0084fa8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084fa8c: je 0x84fae3 */ if (fZ) goto L_0084fae3;
L_0084fa8e:; BB(0x0084fa8e);
    /* 0084fa8e: movzx edx, word ptr [ebp - 8] */ r_edx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0084fa92: mov eax, edx */ r_eax = r_edx;
    /* 0084fa94: and eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084fa99: cmp eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084fa9e: je 0x84fab5 */ if (fZ) goto L_0084fab5;
L_0084faa0:; BB(0x0084faa0);
    /* 0084faa0: or edx, 0xffff0300 */ {  u32 a = r_edx; u32 b = 0xffff0300u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0084faa6: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
    /* 0084faaa: fldcw word ptr [ebp - 4] */ fcw = R16((u32)(r_ebp+0xfffffffcu));
    /* 0084faad: mov eax, 1 */ r_eax = 0x1u;
    /* 0084fab2: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
L_0084fab5:; BB(0x0084fab5);
    /* 0084fab5: fld qword ptr [0x994250] */ FPUSH(R_F64((u32)(0x994250u)));
    /* 0084fabb: fdiv qword ptr [ebx + 8] */ ST(0) = ST(0) / R_F64((u32)(r_ebx+0x8u));
    /* 0084fabe: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0084fac0: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0084fac3: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0084fac6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084fac8: je 0x84facd */ if (fZ) goto L_0084facd;
L_0084faca:; BB(0x0084faca);
    /* 0084faca: fldcw word ptr [ebp - 8] */ fcw = R16((u32)(r_ebp+0xfffffff8u));
L_0084facd:; BB(0x0084facd);
    /* 0084facd: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 0084fad0: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 0084fad6: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0084fadc: mov esp, ebp */ r_esp = r_ebp;
    /* 0084fade: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084fadf: mov esp, ebx */ r_esp = r_ebx;
    /* 0084fae1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084fae2: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084fae3:; BB(0x0084fae3);
    /* 0084fae3: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084fae6: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 0084fae8: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 0084faee: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0084faf4: mov esp, ebp */ r_esp = r_ebp;
    /* 0084faf6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084faf7: mov esp, ebx */ r_esp = r_ebx;
    /* 0084faf9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084fafa: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084fafb:; BB(0x0084fafb);
    /* 0084fafb: movzx esi, word ptr [ebp - 8] */ r_esi = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0084faff: mov ecx, esi */ r_ecx = r_esi;
    /* 0084fb01: and ecx, 0x300 */ {  u32 a = r_ecx; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084fb07: cmp ecx, 0x300 */ {  u32 a = r_ecx; u32 b = 0x300u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084fb0d: je 0x84fb24 */ if (fZ) goto L_0084fb24;
L_0084fb0f:; BB(0x0084fb0f);
    /* 0084fb0f: or esi, 0xffff0300 */ {  u32 a = r_esi; u32 b = 0xffff0300u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0084fb15: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 0084fb19: fldcw word ptr [ebp - 4] */ fcw = R16((u32)(r_ebp+0xfffffffcu));
    /* 0084fb1c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0084fb21: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
L_0084fb24:; BB(0x0084fb24);
    /* 0084fb24: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0084fb2a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084fb2c: jne 0x84fdd8 */ if (!fZ) goto L_0084fdd8;
L_0084fb32:; BB(0x0084fb32);
    /* 0084fb32: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0084fb38: cmp ecx, 0x2000000 */ {  u32 a = r_ecx; u32 b = 0x2000000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084fb3e: jae 0x84fdd8 */ if (!fC) goto L_0084fdd8;
L_0084fb44:; BB(0x0084fb44);
    /* 0084fb44: mov esi, dword ptr [ebp - 0x74] */ r_esi = R32((u32)(r_ebp+0xffffff8cu));
    /* 0084fb47: and esi, 0xfffff */ {  u32 a = r_esi; u32 b = 0xfffffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0084fb4d: mov ecx, eax */ r_ecx = r_eax;
    /* 0084fb4f: or esi, 0x100000 */ {  u32 a = r_esi; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0084fb55: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0084fb58: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084fb5e: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 0084fb64: mov dword ptr [ebp - 0x74], esi */ W32((u32)(r_ebp+0xffffff8cu), r_esi);
    /* 0084fb67: cmp eax, 0x41400000 */ {  u32 a = r_eax; u32 b = 0x41400000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084fb6c: jae 0x84fb7f */ if (!fC) goto L_0084fb7f;
L_0084fb6e:; BB(0x0084fb6e);
    /* 0084fb6e: mov eax, esi */ r_eax = r_esi;
    /* 0084fb70: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0084fb72: add ecx, 0x413 */ {  u32 a = r_ecx; u32 b = 0x413u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084fb78: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0084fb7a: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0084fb7d: jmp 0x84fb9e */ goto L_0084fb9e;
L_0084fb7f:; BB(0x0084fb7f);
    /* 0084fb7f: mov eax, ecx */ r_eax = r_ecx;
    /* 0084fb81: mov edi, esi */ r_edi = r_esi;
    /* 0084fb83: mov esi, dword ptr [ebp - 0x68] */ r_esi = R32((u32)(r_ebp+0xffffff98u));
    /* 0084fb86: lea ecx, [eax - 0x413] */ r_ecx = (u32)(r_eax+0xfffffbedu);
    /* 0084fb8c: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0084fb8e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084fb90: add eax, 0x433 */ {  u32 a = r_eax; u32 b = 0x433u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084fb95: mov ecx, eax */ r_ecx = r_eax;
    /* 0084fb97: shr esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0084fb99: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0084fb9b: mov dword ptr [ebp - 0x74], edi */ W32((u32)(r_ebp+0xffffff8cu), r_edi);
L_0084fb9e:; BB(0x0084fb9e);
    /* 0084fb9e: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0084fba1: cmp eax, 0x27 */ {  u32 a = r_eax; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084fba4: jae 0x84fbab */ if (!fC) goto L_0084fbab;
L_0084fba6:; BB(0x0084fba6);
    /* 0084fba6: lea eax, [eax - 2] */ r_eax = (u32)(r_eax+0xfffffffeu);
    /* 0084fba9: jmp 0x84fbb0 */ goto L_0084fbb0;
L_0084fbab:; BB(0x0084fbab);
    /* 0084fbab: mov eax, 0x27 */ r_eax = 0x27u;
L_0084fbb0:; BB(0x0084fbb0);
    /* 0084fbb0: mov ecx, dword ptr [eax*8 + 0x993fc4] */ r_ecx = R32((u32)(r_eax*8+0x993fc4u));
    /* 0084fbb7: mov eax, dword ptr [eax*8 + 0x993fc0] */ r_eax = R32((u32)(r_eax*8+0x993fc0u));
    /* 0084fbbe: and eax, dword ptr [ebp - 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084fbc1: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084fbc3: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0084fbc5: jne 0x84fdd8 */ if (!fZ) goto L_0084fdd8;
L_0084fbcb:; BB(0x0084fbcb);
    /* 0084fbcb: cmp edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084fbd1: jae 0x84fc0e */ if (!fC) goto L_0084fc0e;
L_0084fbd3:; BB(0x0084fbd3);
    /* 0084fbd3: fld qword ptr [0x994250] */ FPUSH(R_F64((u32)(0x994250u)));
    /* 0084fbd9: or edx, 0x3ff00000 */ {  u32 a = r_edx; u32 b = 0x3ff00000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0084fbdf: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0084fbe2: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0084fbe5: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0084fbe8: fld qword ptr [ebp - 0x38] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc8u)));
    /* 0084fbeb: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0084fbed: fstp qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 0084fbf0: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0084fbf3: mov edx, eax */ r_edx = r_eax;
    /* 0084fbf5: shr edx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0084fbf8: or eax, 0x3ff00000 */ {  u32 a = r_eax; u32 b = 0x3ff00000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084fbfd: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0084fc03: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0084fc06: add edx, 0xfffff803 */ {  u32 a = r_edx; u32 b = 0xfffff803u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084fc0c: jmp 0x84fc37 */ goto L_0084fc37;
L_0084fc0e:; BB(0x0084fc0e);
    /* 0084fc0e: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 0084fc14: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0084fc17: fld qword ptr [0x994250] */ FPUSH(R_F64((u32)(0x994250u)));
    /* 0084fc1d: or eax, 0x3ff00000 */ {  u32 a = r_eax; u32 b = 0x3ff00000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084fc22: shr edx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0084fc25: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0084fc2b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0084fc2e: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0084fc31: add edx, 0xfffffc01 */ {  u32 a = r_edx; u32 b = 0xfffffc01u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0084fc37:; BB(0x0084fc37);
    /* 0084fc37: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0084fc3a: mov esi, dword ptr [ebp - 0x7c] */ r_esi = R32((u32)(r_ebp+0xffffff84u));
    /* 0084fc3d: fstp xword ptr [ebp - 0x58] */ W_F80((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 0084fc40: fld xword ptr [ebp - 0x58] */ FPUSH(R_F80((u32)(r_ebp+0xffffffa8u)));
    /* 0084fc43: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084fc45: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 0084fc4a: cmp ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084fc50: jbe 0x84fc54 */ if ((fC||fZ)) goto L_0084fc54;
L_0084fc52:; BB(0x0084fc52);
    /* 0084fc52: mov ecx, eax */ r_ecx = r_eax;
L_0084fc54:; BB(0x0084fc54);
    /* 0084fc54: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0084fc57: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0084fc5a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084fc5c: je 0x84fc68 */ if (fZ) goto L_0084fc68;
L_0084fc5e:; BB(0x0084fc5e);
    /* 0084fc5e: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0084fc60: add edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084fc66: jmp 0x84fc6e */ goto L_0084fc6e;
L_0084fc68:; BB(0x0084fc68);
    /* 0084fc68: add edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0084fc6e:; BB(0x0084fc6e);
    /* 0084fc6e: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 0084fc71: cmp eax, 0x7ffd */ {  u32 a = r_eax; u32 b = 0x7ffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084fc76: jbe 0x84fcd2 */ if ((fC||fZ)) goto L_0084fcd2;
L_0084fc78:; BB(0x0084fc78);
    /* 0084fc78: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084fc7a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084fc7c: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0084fc7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084fc81: je 0x84fc86 */ if (fZ) goto L_0084fc86;
L_0084fc83:; BB(0x0084fc83);
    /* 0084fc83: fldcw word ptr [ebp - 8] */ fcw = R16((u32)(r_ebp+0xfffffff8u));
L_0084fc86:; BB(0x0084fc86);
    /* 0084fc86: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0084fc89: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084fc8b: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0084fc8e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0084fc90: jle 0x8505b7 */ if ((fZ||fS!=fO)) goto L_008505b7;
L_0084fc96:; BB(0x0084fc96);
    /* 0084fc96: fld qword ptr [eax*4 + 0x994210] */ FPUSH(R_F64((u32)(r_eax*4+0x994210u)));
    /* 0084fc9d: fmul qword ptr [0x994210] */ ST(0) = ST(0) * R_F64((u32)(0x994210u));
    /* 0084fca3: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0084fca6: lea esi, [ebx + 8] */ r_esi = (u32)(r_ebx+0x8u);
    /* 0084fca9: lea ecx, [ebx + 0x10] */ r_ecx = (u32)(r_ebx+0x10u);
    /* 0084fcac: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 0084fcaf: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0084fcb1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084fcb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0084fcb3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084fcb4: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x84fcb9u); f_00850eb4();
    /* 0084fcb9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0084fcbc:; BB(0x0084fcbc);
    /* 0084fcbc: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 0084fcbf: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 0084fcc5: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0084fccb: mov esp, ebp */ r_esp = r_ebp;
    /* 0084fccd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084fcce: mov esp, ebx */ r_esp = r_ebx;
    /* 0084fcd0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084fcd1: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084fcd2:; BB(0x0084fcd2);
    /* 0084fcd2: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0084fcd5: and eax, 0xffff8000 */ {  u32 a = r_eax; u32 b = 0xffff8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084fcda: and edx, 0x7fff */ {  u32 a = r_edx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084fce0: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0084fce2: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0084fce8: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0084fceb: add edx, 0xc0100000 */ {  u32 a = r_edx; u32 b = 0xc0100000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084fcf1: or edx, dword ptr [ebp - 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0084fcf4: jne 0x84fdbf */ if (!fZ) goto L_0084fdbf;
L_0084fcfa:; BB(0x0084fcfa);
    /* 0084fcfa: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0084fcfc: fld xword ptr [ebp - 0x58] */ FPUSH(R_F80((u32)(r_ebp+0xffffffa8u)));
    /* 0084fcff: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084fd01: fst qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0));
    /* 0084fd04: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0084fd07: fst qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0));
    /* 0084fd0a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0084fd0d: lea eax, [ecx - 0x100001] */ r_eax = (u32)(r_ecx+0xffefffffu);
    /* 0084fd13: cmp eax, 0x7fdfffff */ {  u32 a = r_eax; u32 b = 0x7fdfffffu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084fd18: jb 0x84fd8d */ if (fC) goto L_0084fd8d;
L_0084fd1a:; BB(0x0084fd1a);
    /* 0084fd1a: cmp ecx, 0x7fefffff */ {  u32 a = r_ecx; u32 b = 0x7fefffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084fd20: ja 0x8505e2 */ if ((!fC&&!fZ)) goto L_008505e2;
L_0084fd26:; BB(0x0084fd26);
    /* 0084fd26: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0084fd28: je 0x84fd32 */ if (fZ) goto L_0084fd32;
L_0084fd2a:; BB(0x0084fd2a);
    /* 0084fd2a: fcom qword ptr [ebp - 0x48] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffb8u))); 
    /* 0084fd2d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0084fd2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0084fd30: je 0x84fd8d */ if (fZ) goto L_0084fd8d;
L_0084fd32:; BB(0x0084fd32);
    /* 0084fd32: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084fd34: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 0084fd37: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0084fd3a: fmul qword ptr [eax*8 + 0x994250] */ ST(0) = ST(0) * R_F64((u32)(r_eax*8+0x994250u));
    /* 0084fd41: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0084fd44: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0084fd47: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084fd49: je 0x84fd4e */ if (fZ) goto L_0084fd4e;
L_0084fd4b:; BB(0x0084fd4b);
    /* 0084fd4b: fldcw word ptr [ebp - 8] */ fcw = R16((u32)(r_ebp+0xfffffff8u));
L_0084fd4e:; BB(0x0084fd4e);
    /* 0084fd4e: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0084fd51: fld qword ptr [eax*8 + 0x994220] */ FPUSH(R_F64((u32)(r_eax*8+0x994220u)));
    /* 0084fd58: fmul qword ptr [0x994220] */ ST(0) = ST(0) * R_F64((u32)(0x994220u));
    /* 0084fd5e: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 0084fd61: lea esi, [ebx + 8] */ r_esi = (u32)(r_ebx+0x8u);
    /* 0084fd64: lea ecx, [ebx + 0x10] */ r_ecx = (u32)(r_ebx+0x10u);
    /* 0084fd67: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 0084fd6a: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0084fd6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084fd6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0084fd6e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084fd6f: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x84fd74u); f_00850eb4();
    /* 0084fd74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084fd77: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 0084fd7a: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 0084fd80: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0084fd86: mov esp, ebp */ r_esp = r_ebp;
    /* 0084fd88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084fd89: mov esp, ebx */ r_esp = r_ebx;
    /* 0084fd8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084fd8c: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084fd8d:; BB(0x0084fd8d);
    /* 0084fd8d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084fd8f: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 0084fd92: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0084fd95: fmul qword ptr [eax*8 + 0x994250] */ ST(0) = ST(0) * R_F64((u32)(r_eax*8+0x994250u));
    /* 0084fd9c: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0084fd9f: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0084fda2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084fda4: je 0x84fda9 */ if (fZ) goto L_0084fda9;
L_0084fda6:; BB(0x0084fda6);
    /* 0084fda6: fldcw word ptr [ebp - 8] */ fcw = R16((u32)(r_ebp+0xfffffff8u));
L_0084fda9:; BB(0x0084fda9);
    /* 0084fda9: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 0084fdac: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 0084fdb2: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0084fdb8: mov esp, ebp */ r_esp = r_ebp;
    /* 0084fdba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084fdbb: mov esp, ebx */ r_esp = r_ebx;
    /* 0084fdbd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084fdbe: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0084fdbf:; BB(0x0084fdbf);
    /* 0084fdbf: fld qword ptr [ebp - 0x38] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc8u)));
    /* 0084fdc2: mov eax, ecx */ r_eax = r_ecx;
    /* 0084fdc4: jmp 0x84fdc8 */ goto L_0084fdc8;
L_0084fdc6:; BB(0x0084fdc6);
    /* 0084fdc6: fmul st(0) */ ST(0) = ST(0) * ST(0);
L_0084fdc8:; BB(0x0084fdc8);
    /* 0084fdc8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0084fdca: je 0x84fdce */ if (fZ) goto L_0084fdce;
L_0084fdcc:; BB(0x0084fdcc);
    /* 0084fdcc: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
L_0084fdce:; BB(0x0084fdce);
    /* 0084fdce: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fZ = (r == 0); } }
    /* 0084fdd0: je 0x850623 */ if (fZ) goto L_00850623;
L_0084fdd6:; BB(0x0084fdd6);
    /* 0084fdd6: jmp 0x84fdc6 */ goto L_0084fdc6;
L_0084fdd8:; BB(0x0084fdd8);
    /* 0084fdd8: lea eax, [edx - 0x3fef8000] */ r_eax = (u32)(r_edx+0xc0108000u);
    /* 0084fdde: cmp eax, 0xc000 */ {  u32 a = r_eax; u32 b = 0xc000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084fde3: ja 0x84fee3 */ if ((!fC&&!fZ)) goto L_0084fee3;
L_0084fde9:; BB(0x0084fde9);
    /* 0084fde9: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 0084fdec: fabs  */ ST(0) = fabsl(ST(0));
    /* 0084fdee: fsub qword ptr [0x994250] */ ST(0) = ST(0) - R_F64((u32)(0x994250u));
    /* 0084fdf4: fst qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0));
    /* 0084fdf7: add edx, 0xc0100100 */ {  u32 a = r_edx; u32 b = 0xc0100100u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084fdfd: cmp edx, 0x180 */ {  u32 a = r_edx; u32 b = 0x180u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084fe03: ja 0x84fe3e */ if ((!fC&&!fZ)) goto L_0084fe3e;
L_0084fe05:; BB(0x0084fe05);
    /* 0084fe05: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084fe07: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084fe09: fld qword ptr [0x994148] */ FPUSH(R_F64((u32)(0x994148u)));
    /* 0084fe0f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084fe11: fadd qword ptr [0x9941a0] */ ST(0) = ST(0) + R_F64((u32)(0x9941a0u));
    /* 0084fe17: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084fe19: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084fe1b: fst qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0));
    /* 0084fe1e: fmul qword ptr [0x994140] */ ST(0) = ST(0) * R_F64((u32)(0x994140u));
    /* 0084fe24: fadd qword ptr [0x994188] */ ST(0) = ST(0) + R_F64((u32)(0x994188u));
    /* 0084fe2a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0084fe2c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084fe2e: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0084fe31: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084fe33: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0084fe39: jmp 0x850022 */ goto L_00850022;
L_0084fe3e:; BB(0x0084fe3e);
    /* 0084fe3e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084fe40: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0084fe42: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084fe44: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 0084fe47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084fe49: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0084fe4c: fld qword ptr [ebp - 0x30] */ FPUSH(R_F64((u32)(r_ebp+0xffffffd0u)));
    /* 0084fe4f: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0084fe51: fld qword ptr [ebp - 0x30] */ FPUSH(R_F64((u32)(r_ebp+0xffffffd0u)));
    /* 0084fe54: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084fe56: fst qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0));
    /* 0084fe59: fld qword ptr [ebp - 0x30] */ FPUSH(R_F64((u32)(r_ebp+0xffffffd0u)));
    /* 0084fe5c: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0084fe5e: fld qword ptr [ebp - 0x30] */ FPUSH(R_F64((u32)(r_ebp+0xffffffd0u)));
    /* 0084fe61: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0084fe63: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084fe65: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084fe67: fld qword ptr [0x994160] */ FPUSH(R_F64((u32)(0x994160u)));
    /* 0084fe6d: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0084fe6f: fadd qword ptr [0x994158] */ ST(0) = ST(0) + R_F64((u32)(0x994158u));
    /* 0084fe75: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0084fe77: fadd qword ptr [0x994150] */ ST(0) = ST(0) + R_F64((u32)(0x994150u));
    /* 0084fe7d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0084fe80: fld qword ptr [ebp - 0x28] */ FPUSH(R_F64((u32)(r_ebp+0xffffffd8u)));
    /* 0084fe83: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084fe85: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084fe87: fadd qword ptr [0x9941a0] */ ST(0) = ST(0) + R_F64((u32)(0x9941a0u));
    /* 0084fe8d: fmulp st(7) */ ST(7) = ST(7) * ST(0); FPOP();
    /* 0084fe8f: fld qword ptr [0x994188] */ FPUSH(R_F64((u32)(0x994188u)));
    /* 0084fe95: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084fe97: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 0084fe99: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084fe9b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084fe9d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0084fe9f: fld qword ptr [0x994180] */ FPUSH(R_F64((u32)(0x994180u)));
    /* 0084fea5: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084fea7: fadd qword ptr [0x994178] */ ST(0) = ST(0) + R_F64((u32)(0x994178u));
    /* 0084fead: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084feaf: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084feb1: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0084feb3: fadd qword ptr [0x994170] */ ST(0) = ST(0) + R_F64((u32)(0x994170u));
    /* 0084feb9: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0084febb: fadd qword ptr [0x994168] */ ST(0) = ST(0) + R_F64((u32)(0x994168u));
    /* 0084fec1: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0084fec3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084fec5: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0084fec7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084fec9: fst qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0));
    /* 0084fecc: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084fece: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084fed0: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0084fed2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084fed4: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0084fed6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0084fed8: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0084fede: jmp 0x850022 */ goto L_00850022;
L_0084fee3:; BB(0x0084fee3);
    /* 0084fee3: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0084fee6: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0084fee9: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0084feef: mov eax, edx */ r_eax = r_edx;
    /* 0084fef1: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0084fef4: shr eax, 0x14 */ { u32 c = (20u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0084fef7: and eax, 0x7ff */ {  u32 a = r_eax; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084fefc: add eax, 0xfffffc01 */ {  u32 a = r_eax; u32 b = 0xfffffc01u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084ff01: mov esi, edx */ r_esi = r_edx;
    /* 0084ff03: shr esi, 0xc */ { u32 c = (12u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0084ff06: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0084ff0c: cmp edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0084ff12: jae 0x84ff49 */ if (!fC) goto L_0084ff49;
L_0084ff14:; BB(0x0084ff14);
    /* 0084ff14: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0084ff1a: fld qword ptr [0x994250] */ FPUSH(R_F64((u32)(0x994250u)));
    /* 0084ff20: or edx, 0x3ff00000 */ {  u32 a = r_edx; u32 b = 0x3ff00000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0084ff26: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0084ff28: fld qword ptr [ebp - 0x30] */ FPUSH(R_F64((u32)(r_ebp+0xffffffd0u)));
    /* 0084ff2b: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0084ff2d: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 0084ff30: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0084ff32: mov eax, edx */ r_eax = r_edx;
    /* 0084ff34: shr eax, 0x14 */ { u32 c = (20u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0084ff37: add eax, 0xfffff803 */ {  u32 a = r_eax; u32 b = 0xfffff803u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084ff3c: mov esi, edx */ r_esi = r_edx;
    /* 0084ff3e: shr esi, 0xc */ { u32 c = (12u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0084ff41: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0084ff47: jmp 0x84ff4f */ goto L_0084ff4f;
L_0084ff49:; BB(0x0084ff49);
    /* 0084ff49: fld qword ptr [0x994250] */ FPUSH(R_F64((u32)(0x994250u)));
L_0084ff4f:; BB(0x0084ff4f);
    /* 0084ff4f: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0084ff55: fld dword ptr [esi*4 + 0x996ba0] */ FPUSH(R_F32((u32)(r_esi*4+0x996ba0u)));
    /* 0084ff5c: fld qword ptr [0x9941b0] */ FPUSH(R_F64((u32)(0x9941b0u)));
    /* 0084ff62: fld qword ptr [0x994198] */ FPUSH(R_F64((u32)(0x994198u)));
    /* 0084ff68: fld qword ptr [0x994200] */ FPUSH(R_F64((u32)(0x994200u)));
    /* 0084ff6e: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0084ff74: and edx, 0x800fffff */ {  u32 a = r_edx; u32 b = 0x800fffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084ff7a: or edx, 0x3ff00000 */ {  u32 a = r_edx; u32 b = 0x3ff00000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0084ff80: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0084ff82: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084ff84: fld qword ptr [ebp - 0x30] */ FPUSH(R_F64((u32)(r_ebp+0xffffffd0u)));
    /* 0084ff87: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0084ff8e: fld qword ptr [ebp - 0x30] */ FPUSH(R_F64((u32)(r_ebp+0xffffffd0u)));
    /* 0084ff91: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0084ff93: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084ff95: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084ff97: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0084ff99: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084ff9b: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 0084ff9d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084ff9f: fst qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0));
    /* 0084ffa2: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084ffa4: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0084ffa6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084ffa8: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0084ffaa: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0084ffac: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0084ffae: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0084ffb0: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084ffb2: fadd qword ptr [0x9941a8] */ ST(0) = ST(0) + R_F64((u32)(0x9941a8u));
    /* 0084ffb8: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084ffba: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084ffbc: fadd qword ptr [0x994190] */ ST(0) = ST(0) + R_F64((u32)(0x994190u));
    /* 0084ffc2: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084ffc4: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084ffc6: fadd qword ptr [0x9941a0] */ ST(0) = ST(0) + R_F64((u32)(0x9941a0u));
    /* 0084ffcc: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084ffce: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084ffd0: fadd qword ptr [0x994188] */ ST(0) = ST(0) + R_F64((u32)(0x994188u));
    /* 0084ffd6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084ffd8: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0084ffda: fild dword ptr [ebp - 0xb8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff48u)));
    /* 0084ffe0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084ffe2: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084ffe4: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0084ffe6: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0084ffe8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0084ffea: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 0084ffec: fmul qword ptr [0x994208] */ ST(0) = ST(0) * R_F64((u32)(0x994208u));
    /* 0084fff2: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0084fff4: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0084fff7: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 0084fff9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0084fffb: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0084fffd: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0084ffff: fadd qword ptr [esi*8 + 0x995ba0] */ ST(0) = ST(0) + R_F64((u32)(r_esi*8+0x995ba0u));
    /* 00850006: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00850008: fadd qword ptr [esi*8 + 0x995ba8] */ ST(0) = ST(0) + R_F64((u32)(r_esi*8+0x995ba8u));
    /* 0085000f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00850011: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00850013: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00850015: fst qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0));
    /* 00850018: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0085001a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0085001c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0085001e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00850020: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00850022:; BB(0x00850022);
    /* 00850022: fld qword ptr [ebx + 0x10] */ FPUSH(R_F64((u32)(r_ebx+0x10u)));
    /* 00850025: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0085002b: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 0085002e: fst qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0));
    /* 00850031: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00850033: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00850036: fld qword ptr [ebp - 0x30] */ FPUSH(R_F64((u32)(r_ebp+0xffffffd0u)));
    /* 00850039: fst qword ptr [ebp - 0x90] */ W_F64((u32)(r_ebp+0xffffff70u), ST(0));
    /* 0085003f: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 00850041: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00850043: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00850045: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00850047: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00850049: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 0085004c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0085004f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00850051: fld qword ptr [ebp - 0x20] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe0u)));
    /* 00850054: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00850056: mov esi, eax */ r_esi = r_eax;
    /* 00850058: and esi, 0x7ff00000 */ {  u32 a = r_esi; u32 b = 0x7ff00000u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0085005e: mov edx, ecx */ r_edx = r_ecx;
    /* 00850060: xor eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00850062: and edx, 0x7ff00000 */ {  u32 a = r_edx; u32 b = 0x7ff00000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00850068: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0085006b: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085006d: cmp edx, 0x80800000 */ {  u32 a = r_edx; u32 b = 0x80800000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00850073: jbe 0x8500d6 */ if ((fC||fZ)) goto L_008500d6;
L_00850075:; BB(0x00850075);
    /* 00850075: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00850077: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00850079: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0085007b: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0085007e: fstp qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 00850081: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00850083: je 0x850088 */ if (fZ) goto L_00850088;
L_00850085:; BB(0x00850085);
    /* 00850085: fldcw word ptr [ebp - 8] */ fcw = R16((u32)(r_ebp+0xfffffff8u));
L_00850088:; BB(0x00850088);
    /* 00850088: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0085008b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085008d: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 00850090: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00850092: jne 0x850637 */ if (!fZ) goto L_00850637;
L_00850098:; BB(0x00850098);
    /* 00850098: mov eax, edx */ r_eax = r_edx;
    /* 0085009a: fld qword ptr [eax*4 + 0x994210] */ FPUSH(R_F64((u32)(r_eax*4+0x994210u)));
    /* 008500a1: fmul qword ptr [0x994210] */ ST(0) = ST(0) * R_F64((u32)(0x994210u));
    /* 008500a7: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 008500aa: lea esi, [ebx + 8] */ r_esi = (u32)(r_ebx+0x8u);
    /* 008500ad: lea ecx, [ebx + 0x10] */ r_ecx = (u32)(r_ebx+0x10u);
    /* 008500b0: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 008500b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 008500b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008500b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008500b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008500b8: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x8500bdu); f_00850eb4();
    /* 008500bd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_008500c0:; BB(0x008500c0);
    /* 008500c0: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 008500c3: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 008500c9: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 008500cf: mov esp, ebp */ r_esp = r_ebp;
    /* 008500d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008500d2: mov esp, ebx */ r_esp = r_ebx;
    /* 008500d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008500d5: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_008500d6:; BB(0x008500d6);
    /* 008500d6: cmp edx, 0x7c500000 */ {  u32 a = r_edx; u32 b = 0x7c500000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008500dc: jae 0x850115 */ if (!fC) goto L_00850115;
L_008500de:; BB(0x008500de);
    /* 008500de: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 008500e0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008500e2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008500e4: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 008500e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008500e9: je 0x850691 */ if (fZ) goto L_00850691;
L_008500ef:; BB(0x008500ef);
    /* 008500ef: fstp qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 008500f2: fldcw word ptr [ebp - 8] */ fcw = R16((u32)(r_ebp+0xfffffff8u));
L_008500f5:; BB(0x008500f5);
    /* 008500f5: fld qword ptr [0x994250] */ FPUSH(R_F64((u32)(0x994250u)));
    /* 008500fb: fadd qword ptr [eax*8 + 0x994220] */ ST(0) = ST(0) + R_F64((u32)(r_eax*8+0x994220u));
    /* 00850102: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 00850108: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0085010e: mov esp, ebp */ r_esp = r_ebp;
    /* 00850110: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00850111: mov esp, ebx */ r_esp = r_ebx;
    /* 00850113: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00850114: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_00850115:; BB(0x00850115);
    /* 00850115: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00850117: fld qword ptr [ebp - 0x90] */ FPUSH(R_F64((u32)(r_ebp+0xffffff70u)));
    /* 0085011d: fld qword ptr [ebp - 0x90] */ FPUSH(R_F64((u32)(r_ebp+0xffffff70u)));
    /* 00850123: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850125: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00850127: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00850129: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0085012b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0085012d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0085012f: fld qword ptr [0x9941f8] */ FPUSH(R_F64((u32)(0x9941f8u)));
    /* 00850135: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0085013b: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0085013d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0085013f: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00850141: fst qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00850144: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00850146: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00850148: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0085014a: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 0085014d: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 00850150: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 00850152: fst qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0));
    /* 00850155: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 00850157: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850159: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0085015b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0085015d: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0085015f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00850161: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00850163: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00850165: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 00850168: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 0085016b: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0085016d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0085016f: fst qword ptr [ebp - 0xa0] */ W_F64((u32)(r_ebp+0xffffff60u), ST(0));
    /* 00850175: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00850177: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00850179: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0085017b: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0085017d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0085017f: fst qword ptr [ebp - 0x90] */ W_F64((u32)(r_ebp+0xffffff70u), ST(0));
    /* 00850185: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00850187: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850189: fst qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0));
    /* 0085018c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085018e: mov ecx, eax */ r_ecx = r_eax;
    /* 00850190: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00850193: mov edx, dword ptr [eax*8 + 0x9941ec] */ r_edx = R32((u32)(r_eax*8+0x9941ecu));
    /* 0085019a: and ecx, 0x7fffffff */ {  u32 a = r_ecx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008501a0: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008501a2: jbe 0x8501ab */ if ((fC||fZ)) goto L_008501ab;
L_008501a4:; BB(0x008501a4);
    /* 008501a4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008501a6: fstp qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 008501a9: jmp 0x8501be */ goto L_008501be;
L_008501ab:; BB(0x008501ab);
    /* 008501ab: jne 0x850216 */ if (!fZ) goto L_00850216;
L_008501ad:; BB(0x008501ad);
    /* 008501ad: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 008501b0: cmp edx, dword ptr [eax*8 + 0x9941e8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*8+0x9941e8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008501b7: jbe 0x850216 */ if ((fC||fZ)) goto L_00850216;
L_008501b9:; BB(0x008501b9);
    /* 008501b9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008501bb: fstp qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
L_008501be:; BB(0x008501be);
    /* 008501be: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 008501c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008501c3: je 0x8501c8 */ if (fZ) goto L_008501c8;
L_008501c5:; BB(0x008501c5);
    /* 008501c5: fldcw word ptr [ebp - 8] */ fcw = R16((u32)(r_ebp+0xfffffff8u));
L_008501c8:; BB(0x008501c8);
    /* 008501c8: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 008501cb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008501cd: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 008501d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008501d2: jne 0x850664 */ if (!fZ) goto L_00850664;
L_008501d8:; BB(0x008501d8);
    /* 008501d8: mov eax, edx */ r_eax = r_edx;
    /* 008501da: fld qword ptr [eax*4 + 0x994210] */ FPUSH(R_F64((u32)(r_eax*4+0x994210u)));
    /* 008501e1: fmul qword ptr [0x994210] */ ST(0) = ST(0) * R_F64((u32)(0x994210u));
    /* 008501e7: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 008501ea: lea esi, [ebx + 8] */ r_esi = (u32)(r_ebx+0x8u);
    /* 008501ed: lea ecx, [ebx + 0x10] */ r_ecx = (u32)(r_ebx+0x10u);
    /* 008501f0: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 008501f3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 008501f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008501f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008501f7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008501f8: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x8501fdu); f_00850eb4();
    /* 008501fd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00850200:; BB(0x00850200);
    /* 00850200: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 00850203: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 00850209: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0085020f: mov esp, ebp */ r_esp = r_ebp;
    /* 00850211: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00850212: mov esp, ebx */ r_esp = r_ebx;
    /* 00850214: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00850215: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_00850216:; BB(0x00850216);
    /* 00850216: cmp ecx, 0x3d900000 */ {  u32 a = r_ecx; u32 b = 0x3d900000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085021c: jae 0x850280 */ if (!fC) goto L_00850280;
L_0085021e:; BB(0x0085021e);
    /* 0085021e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00850220: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00850223: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00850225: je 0x850698 */ if (fZ) goto L_00850698;
L_0085022b:; BB(0x0085022b);
    /* 0085022b: fstp qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 0085022e: fldcw word ptr [ebp - 8] */ fcw = R16((u32)(r_ebp+0xfffffff8u));
L_00850231:; BB(0x00850231);
    /* 00850231: fld qword ptr [ebp - 0x30] */ FPUSH(R_F64((u32)(r_ebp+0xffffffd0u)));
    /* 00850234: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00850236: fmul qword ptr [0x9941d8] */ ST(0) = ST(0) * R_F64((u32)(0x9941d8u));
    /* 0085023c: fadd qword ptr [ebp - 0x90] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffff70u));
    /* 00850242: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00850245: fld qword ptr [edx*8 + 0x994250] */ FPUSH(R_F64((u32)(r_edx*8+0x994250u)));
    /* 0085024c: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0085024e: fld qword ptr [edx*8 + 0x994250] */ FPUSH(R_F64((u32)(r_edx*8+0x994250u)));
    /* 00850255: fld qword ptr [ebp - 0xa0] */ FPUSH(R_F64((u32)(r_ebp+0xffffff60u)));
    /* 0085025b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0085025d: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0085025f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850261: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 00850263: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 00850269: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0085026b: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0085026d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0085026f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00850271: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00850273: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 00850279: mov esp, ebp */ r_esp = r_ebp;
    /* 0085027b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085027c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085027e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085027f: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_00850280:; BB(0x00850280);
    /* 00850280: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00850282: fmul qword ptr [0x994100] */ ST(0) = ST(0) * R_F64((u32)(0x994100u));
    /* 00850288: fld qword ptr [0x9941d0] */ FPUSH(R_F64((u32)(0x9941d0u)));
    /* 0085028e: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00850290: fld qword ptr [0x994138] */ FPUSH(R_F64((u32)(0x994138u)));
    /* 00850296: fld qword ptr [ebp - 0x90] */ FPUSH(R_F64((u32)(r_ebp+0xffffff70u)));
    /* 0085029c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0085029e: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 008502a1: fld qword ptr [ebp - 0xa0] */ FPUSH(R_F64((u32)(r_ebp+0xffffff60u)));
    /* 008502a7: fld qword ptr [ebp - 0x48] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb8u)));
    /* 008502aa: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 008502ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008502ae: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008502b0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008502b2: fmul qword ptr [0x994130] */ ST(0) = ST(0) * R_F64((u32)(0x994130u));
    /* 008502b8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008502ba: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008502bc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008502be: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 008502c0: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008502c2: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 008502c4: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 008502c7: fld qword ptr [0x994250] */ FPUSH(R_F64((u32)(0x994250u)));
    /* 008502cd: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 008502cf: fld qword ptr [0x994258] */ FPUSH(R_F64((u32)(0x994258u)));
    /* 008502d5: fld qword ptr [0x994120] */ FPUSH(R_F64((u32)(0x994120u)));
    /* 008502db: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008502dd: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 008502e0: mov esi, edi */ r_esi = r_edi;
    /* 008502e2: shl esi, 0x19 */ { u32 c = (25u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008502e5: fld qword ptr [0x994110] */ FPUSH(R_F64((u32)(0x994110u)));
    /* 008502eb: sar esi, 0x19 */ { u32 c = (25u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008502ee: mov ecx, edi */ r_ecx = r_edi;
    /* 008502f0: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008502f2: sar ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008502f5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008502f7: add ecx, dword ptr [eax*4 + 0x9941c8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax*4+0x9941c8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008502fe: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00850300: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00850303: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 00850306: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00850308: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0085030a: fsubp st(5) */ ST(5) = ST(5) - ST(0); FPOP();
    /* 0085030c: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0085030e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00850310: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00850312: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00850314: fadd qword ptr [0x994128] */ ST(0) = ST(0) + R_F64((u32)(0x994128u));
    /* 0085031a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0085031c: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0085031e: fadd qword ptr [0x994118] */ ST(0) = ST(0) + R_F64((u32)(0x994118u));
    /* 00850324: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850326: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00850328: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0085032a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0085032c: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0085032e: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00850330: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00850332: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00850334: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00850336: fmul qword ptr [0x994108] */ ST(0) = ST(0) * R_F64((u32)(0x994108u));
    /* 0085033c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0085033e: fst qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0));
    /* 00850341: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00850343: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00850346: shl ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00850349: cmp edi, 0xfffe0101 */ {  u32 a = r_edi; u32 b = 0xfffe0101u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085034f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00850352: fld qword ptr [esi*8 + 0x997a00] */ FPUSH(R_F64((u32)(r_esi*8+0x997a00u)));
    /* 00850359: fld qword ptr [esi*8 + 0x997a08] */ FPUSH(R_F64((u32)(r_esi*8+0x997a08u)));
    /* 00850360: jle 0x850381 */ if ((fZ||fS!=fO)) goto L_00850381;
L_00850362:; BB(0x00850362);
    /* 00850362: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00850364: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00850366: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850368: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0085036a: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0085036c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0085036e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00850370: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00850372: fmul qword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xfffffff0u));
    /* 00850375: fmul qword ptr [eax*8 + 0x9941b8] */ ST(0) = ST(0) * R_F64((u32)(r_eax*8+0x9941b8u));
    /* 0085037c: jmp 0x850423 */ goto L_00850423;
L_00850381:; BB(0x00850381);
    /* 00850381: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00850383: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850385: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00850387: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850389: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0085038b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0085038d: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0085038f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00850391: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00850393: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00850395: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00850397: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00850399: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0085039c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0085039f: and edx, 0xfffff000 */ {  u32 a = r_edx; u32 b = 0xfffff000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008503a5: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 008503a8: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 008503ab: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 008503ad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008503af: fst qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0));
    /* 008503b2: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008503b4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008503b6: fmul qword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xfffffff0u));
    /* 008503b9: fmul qword ptr [eax*8 + 0x9941b8] */ ST(0) = ST(0) * R_F64((u32)(r_eax*8+0x9941b8u));
    /* 008503c0: fst qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0));
    /* 008503c3: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 008503c6: cmp eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008503cb: jge 0x850423 */ if ((fS==fO)) goto L_00850423;
L_008503cd:; BB(0x008503cd);
    /* 008503cd: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 008503d0: fmul qword ptr [eax*8 + 0x994250] */ ST(0) = ST(0) * R_F64((u32)(r_eax*8+0x994250u));
    /* 008503d7: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 008503da: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 008503dd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008503df: je 0x8503e4 */ if (fZ) goto L_008503e4;
L_008503e1:; BB(0x008503e1);
    /* 008503e1: fldcw word ptr [ebp - 8] */ fcw = R16((u32)(r_ebp+0xfffffff8u));
L_008503e4:; BB(0x008503e4);
    /* 008503e4: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 008503e7: fld qword ptr [eax*8 + 0x994220] */ FPUSH(R_F64((u32)(r_eax*8+0x994220u)));
    /* 008503ee: fmul qword ptr [0x994220] */ ST(0) = ST(0) * R_F64((u32)(0x994220u));
    /* 008503f4: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 008503f7: lea esi, [ebx + 8] */ r_esi = (u32)(r_ebx+0x8u);
    /* 008503fa: lea ecx, [ebx + 0x10] */ r_ecx = (u32)(r_ebx+0x10u);
    /* 008503fd: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 00850400: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00850402: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00850403: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00850404: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00850405: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x85040au); f_00850eb4();
    /* 0085040a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085040d: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 00850410: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 00850416: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0085041c: mov esp, ebp */ r_esp = r_ebp;
    /* 0085041e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085041f: mov esp, ebx */ r_esp = r_ebx;
    /* 00850421: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00850422: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_00850423:; BB(0x00850423);
    /* 00850423: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00850426: fmul qword ptr [eax*8 + 0x994250] */ ST(0) = ST(0) * R_F64((u32)(r_eax*8+0x994250u));
    /* 0085042d: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00850430: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 00850433: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00850435: je 0x85043a */ if (fZ) goto L_0085043a;
L_00850437:; BB(0x00850437);
    /* 00850437: fldcw word ptr [ebp - 8] */ fcw = R16((u32)(r_ebp+0xfffffff8u));
L_0085043a:; BB(0x0085043a);
    /* 0085043a: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 0085043d: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 00850443: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 00850449: mov esp, ebp */ r_esp = r_ebp;
    /* 0085044b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085044c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085044e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085044f: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_00850450:; BB(0x00850450);
    /* 00850450: fld qword ptr [0x994250] */ FPUSH(R_F64((u32)(0x994250u)));
    /* 00850456: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 0085045c: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 00850462: mov esp, ebp */ r_esp = r_ebp;
    /* 00850464: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00850465: mov esp, ebx */ r_esp = r_ebx;
    /* 00850467: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00850468: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_00850469:; BB(0x00850469);
    /* 00850469: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0085046c: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0085046f: lea edx, [ebx + 0x10] */ r_edx = (u32)(r_ebx+0x10u);
    /* 00850472: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 00850475: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00850477: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00850478: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00850479: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085047a: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x85047fu); f_00850eb4();
    /* 0085047f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00850482: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 00850485: jmp 0x84f7ce */ goto L_0084f7ce;
L_0085048a:; BB(0x0085048a);
    /* 0085048a: fld qword ptr [0x994250] */ FPUSH(R_F64((u32)(0x994250u)));
    /* 00850490: fdiv qword ptr [0x994230] */ ST(0) = ST(0) / R_F64((u32)(0x994230u));
    /* 00850496: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 00850499: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0085049c: lea edx, [ebx + 0x10] */ r_edx = (u32)(r_ebx+0x10u);
    /* 0085049f: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008504a2: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 008504a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008504a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008504a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008504a7: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x8504acu); f_00850eb4();
    /* 008504ac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008504af: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 008504b2: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 008504b8: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 008504be: mov esp, ebp */ r_esp = r_ebp;
    /* 008504c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008504c1: mov esp, ebx */ r_esp = r_ebx;
    /* 008504c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008504c4: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_008504c5:; BB(0x008504c5);
    /* 008504c5: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 008504c8: fld qword ptr [eax*8 + 0x994250] */ FPUSH(R_F64((u32)(r_eax*8+0x994250u)));
    /* 008504cf: fdiv qword ptr [0x994230] */ ST(0) = ST(0) / R_F64((u32)(0x994230u));
    /* 008504d5: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 008504d8: lea esi, [ebx + 8] */ r_esi = (u32)(r_ebx+0x8u);
    /* 008504db: lea ecx, [ebx + 0x10] */ r_ecx = (u32)(r_ebx+0x10u);
    /* 008504de: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 008504e1: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 008504e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008504e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008504e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008504e6: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x8504ebu); f_00850eb4();
    /* 008504eb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008504ee: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 008504f1: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 008504f7: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 008504fd: mov esp, ebp */ r_esp = r_ebp;
    /* 008504ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00850500: mov esp, ebx */ r_esp = r_ebx;
    /* 00850502: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00850503: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_00850504:; BB(0x00850504);
    /* 00850504: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00850507: fld qword ptr [eax*8 + 0x994230] */ FPUSH(R_F64((u32)(r_eax*8+0x994230u)));
    /* 0085050e: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 00850511: lea esi, [ebx + 8] */ r_esi = (u32)(r_ebx+0x8u);
    /* 00850514: lea ecx, [ebx + 0x10] */ r_ecx = (u32)(r_ebx+0x10u);
    /* 00850517: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 0085051a: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0085051c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0085051d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085051e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085051f: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x850524u); f_00850eb4();
    /* 00850524: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00850527: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 0085052a: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 00850530: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 00850536: mov esp, ebp */ r_esp = r_ebp;
    /* 00850538: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00850539: mov esp, ebx */ r_esp = r_ebx;
    /* 0085053b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085053c: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_0085053d:; BB(0x0085053d);
    /* 0085053d: fld qword ptr [0x994240] */ FPUSH(R_F64((u32)(0x994240u)));
    /* 00850543: fmul qword ptr [0x994230] */ ST(0) = ST(0) * R_F64((u32)(0x994230u));
    /* 00850549: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0085054c: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0085054f: lea edx, [ebx + 0x10] */ r_edx = (u32)(r_ebx+0x10u);
    /* 00850552: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 00850555: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00850557: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00850558: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00850559: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085055a: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x85055fu); f_00850eb4();
    /* 0085055f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00850562: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 00850565: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 0085056b: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 00850571: mov esp, ebp */ r_esp = r_ebp;
    /* 00850573: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00850574: mov esp, ebx */ r_esp = r_ebx;
    /* 00850576: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00850577: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_00850578:; BB(0x00850578);
    /* 00850578: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0085057b: fld qword ptr [eax*8 + 0x994220] */ FPUSH(R_F64((u32)(r_eax*8+0x994220u)));
    /* 00850582: fmul qword ptr [0x994220] */ ST(0) = ST(0) * R_F64((u32)(0x994220u));
    /* 00850588: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 0085058b: lea esi, [ebx + 8] */ r_esi = (u32)(r_ebx+0x8u);
    /* 0085058e: lea ecx, [ebx + 0x10] */ r_ecx = (u32)(r_ebx+0x10u);
    /* 00850591: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 00850594: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00850596: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00850597: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00850598: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00850599: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x85059eu); f_00850eb4();
    /* 0085059e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008505a1: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 008505a4: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 008505aa: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 008505b0: mov esp, ebp */ r_esp = r_ebp;
    /* 008505b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008505b3: mov esp, ebx */ r_esp = r_ebx;
    /* 008505b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008505b6: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_008505b7:; BB(0x008505b7);
    /* 008505b7: fld qword ptr [eax*4 + 0x994220] */ FPUSH(R_F64((u32)(r_eax*4+0x994220u)));
    /* 008505be: fmul qword ptr [0x994220] */ ST(0) = ST(0) * R_F64((u32)(0x994220u));
    /* 008505c4: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 008505c7: lea esi, [ebx + 8] */ r_esi = (u32)(r_ebx+0x8u);
    /* 008505ca: lea ecx, [ebx + 0x10] */ r_ecx = (u32)(r_ebx+0x10u);
    /* 008505cd: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 008505d0: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 008505d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008505d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008505d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008505d5: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x8505dau); f_00850eb4();
    /* 008505da: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008505dd: jmp 0x84fcbc */ goto L_0084fcbc;
L_008505e2:; BB(0x008505e2);
    /* 008505e2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008505e4: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 008505e7: fld qword ptr [eax*8 + 0x994210] */ FPUSH(R_F64((u32)(r_eax*8+0x994210u)));
    /* 008505ee: fmul qword ptr [0x994210] */ ST(0) = ST(0) * R_F64((u32)(0x994210u));
    /* 008505f4: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 008505f7: lea esi, [ebx + 8] */ r_esi = (u32)(r_ebx+0x8u);
    /* 008505fa: lea ecx, [ebx + 0x10] */ r_ecx = (u32)(r_ebx+0x10u);
    /* 008505fd: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 00850600: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00850602: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00850603: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00850604: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00850605: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x85060au); f_00850eb4();
    /* 0085060a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085060d: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 00850610: mov esi, dword ptr [ebp - 0xac] */ r_esi = R32((u32)(r_ebp+0xffffff54u));
    /* 00850616: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 0085061c: mov esp, ebp */ r_esp = r_ebp;
    /* 0085061e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085061f: mov esp, ebx */ r_esp = r_ebx;
    /* 00850621: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00850622: ret  */ FN_RET(0x0084d1d4); r_esp += 4; return;
L_00850623:; BB(0x00850623);
    /* 00850623: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00850625: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 00850628: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085062a: je 0x84fcfa */ if (fZ) goto L_0084fcfa;
L_00850630:; BB(0x00850630);
    /* 00850630: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 00850632: jmp 0x84fcfa */ goto L_0084fcfa;
L_00850637:; BB(0x00850637);
    /* 00850637: mov eax, edx */ r_eax = r_edx;
    /* 00850639: fld qword ptr [eax*4 + 0x994220] */ FPUSH(R_F64((u32)(r_eax*4+0x994220u)));
    /* 00850640: fmul qword ptr [0x994220] */ ST(0) = ST(0) * R_F64((u32)(0x994220u));
    /* 00850646: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 00850649: lea esi, [ebx + 8] */ r_esi = (u32)(r_ebx+0x8u);
    /* 0085064c: lea ecx, [ebx + 0x10] */ r_ecx = (u32)(r_ebx+0x10u);
    /* 0085064f: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 00850652: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00850654: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00850655: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00850656: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00850657: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x85065cu); f_00850eb4();
    /* 0085065c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085065f: jmp 0x8500c0 */ goto L_008500c0;
L_00850664:; BB(0x00850664);
    /* 00850664: mov eax, edx */ r_eax = r_edx;
    /* 00850666: fld qword ptr [eax*4 + 0x994220] */ FPUSH(R_F64((u32)(r_eax*4+0x994220u)));
    /* 0085066d: fmul qword ptr [0x994220] */ ST(0) = ST(0) * R_F64((u32)(0x994220u));
    /* 00850673: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 00850676: lea esi, [ebx + 8] */ r_esi = (u32)(r_ebx+0x8u);
    /* 00850679: lea ecx, [ebx + 0x10] */ r_ecx = (u32)(r_ebx+0x10u);
    /* 0085067c: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 0085067f: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00850681: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00850682: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00850683: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00850684: call 0x850eb4 */ r_esp -= 4; W32(r_esp, 0x850689u); f_00850eb4();
    /* 00850689: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085068c: jmp 0x850200 */ goto L_00850200;
L_00850691:; BB(0x00850691);
    /* 00850691: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00850693: jmp 0x8500f5 */ goto L_008500f5;
L_00850698:; BB(0x00850698);
    /* 00850698: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0085069a: jmp 0x850231 */ goto L_00850231;
}

void f_0084d1fc(void) /* sub_84D1FC */
{
    FN_ENTER(0x0084d1fc);
L_0084d1fc:; BB(0x0084d1fc);
    /* 0084d1fc: test dword ptr [0xae7f00], 0xfffffe00 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xfffffe00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084d206: jne 0x8506a0 */ if (!fZ) goto L_008506a0;
L_0084d20c:; BB(0x0084d20c);
    /* 0084d20c: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084d216: jne 0x8508f8 */ if (!fZ) goto L_008508f8;
L_0084d21c:; BB(0x0084d21c);
    /* 0084d21c: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x84d221u); f_0086b8a0();
    /* 0084d221: jmp 0x84d1fc */ goto L_0084d1fc;
L_008506a0:; BB(0x008506a0);
    /* 008506a0: movlpd xmm0, qword ptr [esp + 4] */ xmm[0].q[0] = R64((u32)(r_esp+0x4u));
    /* 008506a6: movlpd xmm3, qword ptr [0x994d60] */ xmm[3].q[0] = R64((u32)(0x994d60u));
    /* 008506ae: xorpd xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].q[0] = xmm[2].q[0] ^ s.q[0]; xmm[2].q[1] = xmm[2].q[1] ^ s.q[1]; }
    /* 008506b2: movlpd xmm6, qword ptr [0x994d68] */ xmm[6].q[0] = R64((u32)(0x994d68u));
    /* 008506ba: movlpd xmm7, qword ptr [0x994d98] */ xmm[7].q[0] = R64((u32)(0x994d98u));
    /* 008506c2: pextrw edx, xmm0, 3 */ r_edx = (u32)xmm[0].w[3];
    /* 008506c7: mov eax, edx */ r_eax = r_edx;
    /* 008506c9: and edx, 0x7fff */ {  u32 a = r_edx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008506cf: mov ecx, 0x4040 */ r_ecx = 0x4040u;
    /* 008506d4: pinsrw xmm2, ecx, 3 */ xmm[2].w[3] = (u16)(r_ecx);
    /* 008506d9: andpd xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 008506dd: xorpd xmm7, xmm7 */ { XMM s = xmm[7]; xmm[7].q[0] = xmm[7].q[0] ^ s.q[0]; xmm[7].q[1] = xmm[7].q[1] ^ s.q[1]; }
    /* 008506e1: movsd xmm1, xmm0 */ xmm[1].q[0] = xmm[0].q[0];
    /* 008506e5: andpd xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].q[0] = xmm[3].q[0] & s.q[0]; xmm[3].q[1] = xmm[3].q[1] & s.q[1]; }
    /* 008506e9: pinsrw xmm7, ecx, 3 */ xmm[7].w[3] = (u16)(r_ecx);
    /* 008506ee: orpd xmm3, xmm6 */ { XMM s = xmm[6]; xmm[3].q[0] = xmm[3].q[0] | s.q[0]; xmm[3].q[1] = xmm[3].q[1] | s.q[1]; }
    /* 008506f2: movlpd xmm5, qword ptr [0x994d70] */ xmm[5].q[0] = R64((u32)(0x994d70u));
    /* 008506fa: sub edx, 0x3fa0 */ {  u32 a = r_edx; u32 b = 0x3fa0u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00850700: cmp edx, 0x45f */ {  u32 a = r_edx; u32 b = 0x45fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00850706: ja 0x8507d2 */ if ((!fC&&!fZ)) goto L_008507d2;
L_0085070c:; BB(0x0085070c);
    /* 0085070c: cmpnlesd xmm2, xmm0 */ { XMM s = xmm[0]; double a = xmm[2].f[0]; double b = s.f[0]; xmm[2].q[0] = (!(a <= b)) ? ~0ull : 0ull; }
    /* 00850711: minsd xmm3, xmm7 */ { XMM s = xmm[7]; xmm[3].f[0] = (xmm[3].f[0] < s.f[0]) ? xmm[3].f[0] : s.f[0]; }
    /* 00850715: andpd xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].q[0] = xmm[5].q[0] & s.q[0]; xmm[5].q[1] = xmm[5].q[1] & s.q[1]; }
    /* 00850719: andpd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 0085071d: mulsd xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 00850721: subsd xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; }
    /* 00850725: addsd xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].f[0] = xmm[1].f[0] + s.f[0]; }
    /* 00850729: divsd xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].f[0] = xmm[0].f[0] / s.f[0]; }
    /* 0085072d: pextrw edx, xmm3, 3 */ r_edx = (u32)xmm[3].w[3];
    /* 00850732: sub edx, 0x3f9f */ {  u32 a = r_edx; u32 b = 0x3f9fu; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00850738: movlpd xmm2, qword ptr [0x994d78] */ xmm[2].q[0] = R64((u32)(0x994d78u));
    /* 00850740: movlpd xmm4, qword ptr [0x994d88] */ xmm[4].q[0] = R64((u32)(0x994d88u));
    /* 00850748: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085074d: pinsrw xmm7, eax, 3 */ xmm[7].w[3] = (u16)(r_eax);
    /* 00850752: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00850754: movlpd xmm6, qword ptr [edx*8 + 0x994340] */ xmm[6].q[0] = R64((u32)(r_edx*8+0x994340u));
    /* 0085075d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00850760: movlpd xmm5, qword ptr [edx*8 + 0x994340] */ xmm[5].q[0] = R64((u32)(r_edx*8+0x994340u));
    /* 00850769: xorpd xmm5, xmm7 */ { XMM s = xmm[7]; xmm[5].q[0] = xmm[5].q[0] ^ s.q[0]; xmm[5].q[1] = xmm[5].q[1] ^ s.q[1]; }
    /* 0085076d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00850770: xorpd xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].q[0] = xmm[6].q[0] ^ s.q[0]; xmm[6].q[1] = xmm[6].q[1] ^ s.q[1]; }
    /* 00850774: movsd xmm1, xmm0 */ xmm[1].q[0] = xmm[0].q[0];
    /* 00850778: xorpd xmm1, xmm7 */ { XMM s = xmm[7]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 0085077c: movsd xmm3, xmm1 */ xmm[3].q[0] = xmm[1].q[0];
    /* 00850780: mulsd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 00850784: mulsd xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].f[0] = xmm[2].f[0] * s.f[0]; }
    /* 00850788: addsd xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].f[0] = xmm[4].f[0] + s.f[0]; }
    /* 0085078c: addsd xmm1, xmm6 */ { XMM s = xmm[6]; xmm[1].f[0] = xmm[1].f[0] + s.f[0]; }
    /* 00850790: subsd xmm6, xmm1 */ { XMM s = xmm[1]; xmm[6].f[0] = xmm[6].f[0] - s.f[0]; }
    /* 00850794: addsd xmm6, xmm3 */ { XMM s = xmm[3]; xmm[6].f[0] = xmm[6].f[0] + s.f[0]; }
    /* 00850798: addsd xmm2, qword ptr [0x994d80] */ { XMM s; s.q[0] = R64((u32)(0x994d80u)); s.q[1] = 0; xmm[2].f[0] = xmm[2].f[0] + s.f[0]; }
    /* 008507a0: mulsd xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].f[0] = xmm[4].f[0] * s.f[0]; }
    /* 008507a4: mulsd xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].f[0] = xmm[3].f[0] * s.f[0]; }
    /* 008507a8: addsd xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6].f[0] = xmm[6].f[0] + s.f[0]; }
    /* 008507ac: mulsd xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].f[0] = xmm[2].f[0] * s.f[0]; }
    /* 008507b0: addsd xmm4, qword ptr [0x994d90] */ { XMM s; s.q[0] = R64((u32)(0x994d90u)); s.q[1] = 0; xmm[4].f[0] = xmm[4].f[0] + s.f[0]; }
    /* 008507b8: mulsd xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].f[0] = xmm[2].f[0] * s.f[0]; }
    /* 008507bc: addsd xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2].f[0] = xmm[2].f[0] + s.f[0]; }
    /* 008507c0: addsd xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].f[0] = xmm[1].f[0] + s.f[0]; }
    /* 008507c4: movlpd qword ptr [esp + 4], xmm1 */ W64((u32)(r_esp+0x4u), xmm[1].q[0]);
    /* 008507ca: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 008507ce: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008507d1: ret  */ FN_RET(0x0084d1fc); r_esp += 4; return;
L_008507d2:; BB(0x008507d2);
    /* 008507d2: add edx, 0x3b0 */ {  u32 a = r_edx; u32 b = 0x3b0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008507d8: cmp edx, 0x80f */ {  u32 a = r_edx; u32 b = 0x80fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008507de: ja 0x850847 */ if ((!fC&&!fZ)) goto L_00850847;
L_008507e4:; BB(0x008507e4);
    /* 008507e4: movlpd xmm4, qword ptr [0x994d78] */ xmm[4].q[0] = R64((u32)(0x994d78u));
    /* 008507ec: movlpd xmm7, qword ptr [0x994d88] */ xmm[7].q[0] = R64((u32)(0x994d88u));
    /* 008507f4: movlpd xmm0, qword ptr [esp + 4] */ xmm[0].q[0] = R64((u32)(r_esp+0x4u));
    /* 008507fa: mulsd xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 008507fe: movlpd xmm2, qword ptr [0x994d80] */ xmm[2].q[0] = R64((u32)(0x994d80u));
    /* 00850806: movlpd xmm5, qword ptr [0x994d90] */ xmm[5].q[0] = R64((u32)(0x994d90u));
    /* 0085080e: mulsd xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].f[0] = xmm[4].f[0] * s.f[0]; }
    /* 00850812: addsd xmm7, xmm1 */ { XMM s = xmm[1]; xmm[7].f[0] = xmm[7].f[0] + s.f[0]; }
    /* 00850816: movsd xmm6, xmm1 */ xmm[6].q[0] = xmm[1].q[0];
    /* 0085081a: mulsd xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].f[0] = xmm[1].f[0] * s.f[0]; }
    /* 0085081e: addsd xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].f[0] = xmm[2].f[0] + s.f[0]; }
    /* 00850822: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00850825: mulsd xmm7, xmm6 */ { XMM s = xmm[6]; xmm[7].f[0] = xmm[7].f[0] * s.f[0]; }
    /* 00850829: mulsd xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].f[0] = xmm[2].f[0] * s.f[0]; }
    /* 0085082d: addsd xmm7, xmm5 */ { XMM s = xmm[5]; xmm[7].f[0] = xmm[7].f[0] + s.f[0]; }
    /* 00850831: mulsd xmm2, xmm7 */ { XMM s = xmm[7]; xmm[2].f[0] = xmm[2].f[0] * s.f[0]; }
    /* 00850835: addsd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 00850839: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 0085083f: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 00850843: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00850846: ret  */ FN_RET(0x0084d1fc); r_esp += 4; return;
L_00850847:; BB(0x00850847);
    /* 00850847: add edx, 0x3bf0 */ {  u32 a = r_edx; u32 b = 0x3bf0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085084d: cmp edx, 0x43f0 */ {  u32 a = r_edx; u32 b = 0x43f0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00850853: jae 0x850871 */ if (!fC) goto L_00850871;
L_00850859:; BB(0x00850859);
    /* 00850859: movlpd xmm0, qword ptr [esp + 4] */ xmm[0].q[0] = R64((u32)(r_esp+0x4u));
    /* 0085085f: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00850862: jae 0x85086c */ if (!fC) goto L_0085086c;
L_00850868:; BB(0x00850868);
    /* 00850868: mulsd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
L_0085086c:; BB(0x0085086c);
    /* 0085086c: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 00850870: ret  */ FN_RET(0x0084d1fc); r_esp += 4; return;
L_00850871:; BB(0x00850871);
    /* 00850871: movlpd xmm4, qword ptr [esp + 4] */ xmm[4].q[0] = R64((u32)(r_esp+0x4u));
    /* 00850877: movlpd xmm0, qword ptr [0x994d98] */ xmm[0].q[0] = R64((u32)(0x994d98u));
    /* 0085087f: movlpd xmm2, qword ptr [0x994da0] */ xmm[2].q[0] = R64((u32)(0x994da0u));
    /* 00850887: movlpd xmm3, qword ptr [0x994da8] */ xmm[3].q[0] = R64((u32)(0x994da8u));
    /* 0085088f: movd eax, xmm1 */ r_eax = xmm[1].d[0];
    /* 00850893: psrlq xmm1, 0x20 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); xmm[1].q[1] = r.q; }
    /* 00850898: movd edx, xmm1 */ r_edx = xmm[1].d[0];
    /* 0085089c: cmp edx, 0x7ff00000 */ {  u32 a = r_edx; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008508a2: jae 0x8508c5 */ if (!fC) goto L_008508c5;
L_008508a4:; BB(0x008508a4);
    /* 008508a4: andnpd xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].q[0] = ~xmm[0].q[0] & s.q[0]; xmm[0].q[1] = ~xmm[0].q[1] & s.q[1]; }
    /* 008508a8: orpd xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].q[0] = xmm[2].q[0] | s.q[0]; xmm[2].q[1] = xmm[2].q[1] | s.q[1]; }
    /* 008508ac: orpd xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].q[0] = xmm[0].q[0] | s.q[0]; xmm[0].q[1] = xmm[0].q[1] | s.q[1]; }
    /* 008508b0: addsd xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 008508b4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008508b7: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 008508bd: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 008508c1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008508c4: ret  */ FN_RET(0x0084d1fc); r_esp += 4; return;
L_008508c5:; BB(0x008508c5);
    /* 008508c5: sub edx, 0x7ff00000 */ {  u32 a = r_edx; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008508cb: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008508cd: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008508d0: je 0x8508a4 */ if (fZ) goto L_008508a4;
L_008508d2:; BB(0x008508d2);
    /* 008508d2: movsd xmm0, xmm4 */ xmm[0].q[0] = xmm[4].q[0];
    /* 008508d6: addsd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[0] = xmm[0].f[0] + s.f[0]; }
    /* 008508da: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008508dd: movlpd qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 008508e3: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 008508e7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008508ea: ret  */ FN_RET(0x0084d1fc); r_esp += 4; return;
L_008508f8:; BB(0x008508f8);
    /* 008508f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008508f9: mov ebx, esp */ r_ebx = r_esp;
    /* 008508fb: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008508fe: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00850901: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00850904: mov ecx, eax */ r_ecx = r_eax;
    /* 00850906: and ecx, 0x7fffffff */ {  u32 a = r_ecx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0085090c: cmp ecx, 0x40200000 */ {  u32 a = r_ecx; u32 b = 0x40200000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00850912: jge 0x850b10 */ if ((fS==fO)) goto L_00850b10;
L_00850918:; BB(0x00850918);
    /* 00850918: cmp ecx, 0x3fd00000 */ {  u32 a = r_ecx; u32 b = 0x3fd00000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085091e: jge 0x850b04 */ if ((fS==fO)) goto L_00850b04;
L_00850924:; BB(0x00850924);
    /* 00850924: cmp ecx, 0x3fa00000 */ {  u32 a = r_ecx; u32 b = 0x3fa00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085092a: jge 0x850a3a */ if ((fS==fO)) goto L_00850a3a;
L_00850930:; BB(0x00850930);
    /* 00850930: cmp ecx, 0x3f800000 */ {  u32 a = r_ecx; u32 b = 0x3f800000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00850936: jge 0x8509ea */ if ((fS==fO)) goto L_008509ea;
L_0085093c:; BB(0x0085093c);
    /* 0085093c: cmp ecx, 0x3f000000 */ {  u32 a = r_ecx; u32 b = 0x3f000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00850942: jge 0x8509ae */ if ((fS==fO)) goto L_008509ae;
L_00850944:; BB(0x00850944);
    /* 00850944: cmp ecx, 0x3e400000 */ {  u32 a = r_ecx; u32 b = 0x3e400000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085094a: jge 0x85098e */ if ((fS==fO)) goto L_0085098e;
L_0085094c:; BB(0x0085094c);
    /* 0085094c: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0085094f: cmp ecx, 0x100000 */ {  u32 a = r_ecx; u32 b = 0x100000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00850955: jl 0x85096b */ if ((fS!=fO)) goto L_0085096b;
L_00850957:; BB(0x00850957);
    /* 00850957: fld qword ptr [0x994f10] */ FPUSH(R_F64((u32)(0x994f10u)));
    /* 0085095d: fchs  */ ST(0) = -ST(0);
    /* 0085095f: fmul qword ptr [eax*8 + 0x994f10] */ ST(0) = ST(0) * R_F64((u32)(r_eax*8+0x994f10u));
    /* 00850966: fadd qword ptr [ebx + 8] */ ST(0) = ST(0) + R_F64((u32)(r_ebx+0x8u));
    /* 00850969: jmp 0x85098a */ goto L_0085098a;
L_0085096b:; BB(0x0085096b);
    /* 0085096b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0085096e: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00850970: je 0x850987 */ if (fZ) goto L_00850987;
L_00850972:; BB(0x00850972);
    /* 00850972: fld qword ptr [eax*8 + 0x994f10] */ FPUSH(R_F64((u32)(r_eax*8+0x994f10u)));
    /* 00850979: fmul qword ptr [0x994f10] */ ST(0) = ST(0) * R_F64((u32)(0x994f10u));
    /* 0085097f: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00850982: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 00850985: jmp 0x85098a */ goto L_0085098a;
L_00850987:; BB(0x00850987);
    /* 00850987: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
L_0085098a:; BB(0x0085098a);
    /* 0085098a: mov esp, ebx */ r_esp = r_ebx;
    /* 0085098c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085098d: ret  */ FN_RET(0x0084d1fc); r_esp += 4; return;
L_0085098e:; BB(0x0085098e);
    /* 0085098e: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 00850991: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 00850994: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00850996: fld qword ptr [0x994ef0] */ FPUSH(R_F64((u32)(0x994ef0u)));
    /* 0085099c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0085099e: fadd qword ptr [0x994ee8] */ ST(0) = ST(0) + R_F64((u32)(0x994ee8u));
    /* 008509a4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008509a6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008509a8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008509aa: mov esp, ebx */ r_esp = r_ebx;
    /* 008509ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008509ad: ret  */ FN_RET(0x0084d1fc); r_esp += 4; return;
L_008509ae:; BB(0x008509ae);
    /* 008509ae: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 008509b1: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 008509b4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 008509b6: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008509b8: fld qword ptr [0x994f00] */ FPUSH(R_F64((u32)(0x994f00u)));
    /* 008509be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008509c0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 008509c2: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 008509c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008509c6: fadd qword ptr [0x994ef0] */ ST(0) = ST(0) + R_F64((u32)(0x994ef0u));
    /* 008509cc: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008509ce: fld qword ptr [0x994ef8] */ FPUSH(R_F64((u32)(0x994ef8u)));
    /* 008509d4: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008509d6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008509d8: fadd qword ptr [0x994ee8] */ ST(0) = ST(0) + R_F64((u32)(0x994ee8u));
    /* 008509de: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008509e0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008509e2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008509e4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008509e6: mov esp, ebx */ r_esp = r_ebx;
    /* 008509e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008509e9: ret  */ FN_RET(0x0084d1fc); r_esp += 4; return;
L_008509ea:; BB(0x008509ea);
    /* 008509ea: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 008509ed: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 008509f0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 008509f2: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008509f4: fld qword ptr [0x994ee0] */ FPUSH(R_F64((u32)(0x994ee0u)));
    /* 008509fa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008509fc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 008509fe: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00850a00: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850a02: fadd qword ptr [0x994ed0] */ ST(0) = ST(0) + R_F64((u32)(0x994ed0u));
    /* 00850a08: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00850a0a: fld qword ptr [0x994ed8] */ FPUSH(R_F64((u32)(0x994ed8u)));
    /* 00850a10: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00850a12: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850a14: fadd qword ptr [0x994ec0] */ ST(0) = ST(0) + R_F64((u32)(0x994ec0u));
    /* 00850a1a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00850a1c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850a1e: fadd qword ptr [0x994ec8] */ ST(0) = ST(0) + R_F64((u32)(0x994ec8u));
    /* 00850a24: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00850a26: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850a28: fadd qword ptr [0x994eb8] */ ST(0) = ST(0) + R_F64((u32)(0x994eb8u));
    /* 00850a2e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00850a30: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00850a32: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00850a34: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00850a36: mov esp, ebx */ r_esp = r_ebx;
    /* 00850a38: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00850a39: ret  */ FN_RET(0x0084d1fc); r_esp += 4; return;
L_00850a3a:; BB(0x00850a3a);
    /* 00850a3a: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 00850a3d: fadd qword ptr [0x994e90] */ ST(0) = ST(0) + R_F64((u32)(0x994e90u));
    /* 00850a43: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 00850a46: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850a48: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00850a4b: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 00850a4e: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 00850a51: fld qword ptr [esp] */ FPUSH(R_F64((u32)(r_esp)));
    /* 00850a54: fsub qword ptr [0x994e90] */ ST(0) = ST(0) - R_F64((u32)(0x994e90u));
    /* 00850a5a: fld qword ptr [0x994e28] */ FPUSH(R_F64((u32)(0x994e28u)));
    /* 00850a60: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850a62: fst qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0));
    /* 00850a66: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 00850a68: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00850a6a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00850a6c: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00850a6e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00850a70: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00850a72: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00850a74: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850a76: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00850a78: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00850a7a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00850a7c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00850a7e: fld qword ptr [0x994e20] */ FPUSH(R_F64((u32)(0x994e20u)));
    /* 00850a84: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850a86: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00850a88: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00850a8a: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00850a8c: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00850a8e: fadd qword ptr [0x994e18] */ ST(0) = ST(0) + R_F64((u32)(0x994e18u));
    /* 00850a94: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00850a96: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850a98: fadd qword ptr [0x994e10] */ ST(0) = ST(0) + R_F64((u32)(0x994e10u));
    /* 00850a9e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00850aa0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850aa2: fadd qword ptr [0x994e08] */ ST(0) = ST(0) + R_F64((u32)(0x994e08u));
    /* 00850aa8: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00850aaa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850aac: fadd qword ptr [0x994e00] */ ST(0) = ST(0) + R_F64((u32)(0x994e00u));
    /* 00850ab2: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00850ab4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850ab6: fadd qword ptr [0x994df8] */ ST(0) = ST(0) + R_F64((u32)(0x994df8u));
    /* 00850abc: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00850abe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850ac0: fadd qword ptr [0x994df0] */ ST(0) = ST(0) + R_F64((u32)(0x994df0u));
    /* 00850ac6: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00850ac8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850aca: fadd qword ptr [0x994de8] */ ST(0) = ST(0) + R_F64((u32)(0x994de8u));
    /* 00850ad0: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00850ad2: fadd qword ptr [0x994de0] */ ST(0) = ST(0) + R_F64((u32)(0x994de0u));
    /* 00850ad8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00850ada: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00850adc: fld qword ptr [0x994e30] */ FPUSH(R_F64((u32)(0x994e30u)));
    /* 00850ae2: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00850ae4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00850ae6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850ae8: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00850aea: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00850aec: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00850aee: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00850af0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00850af2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00850af4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00850af6: fld qword ptr [esp + 8] */ FPUSH(R_F64((u32)(r_esp+0x8u)));
    /* 00850afa: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00850afc: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00850afe: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00850b00: mov esp, ebx */ r_esp = r_ebx;
    /* 00850b02: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00850b03: ret  */ FN_RET(0x0084d1fc); r_esp += 4; return;
L_00850b04:; BB(0x00850b04);
    /* 00850b04: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 00850b07: call 0x8508ec */ r_esp -= 4; W32(r_esp, 0x850b0cu); f_008508ec();
    /* 00850b0c: mov esp, ebx */ r_esp = r_ebx;
    /* 00850b0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00850b0f: ret  */ FN_RET(0x0084d1fc); r_esp += 4; return;
L_00850b10:; BB(0x00850b10);
    /* 00850b10: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00850b13: cmp ecx, 0x43600000 */ {  u32 a = r_ecx; u32 b = 0x43600000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00850b19: jge 0x850cf7 */ if ((fS==fO)) goto L_00850cf7;
L_00850b1f:; BB(0x00850b1f);
    /* 00850b1f: cmp ecx, 0x40600000 */ {  u32 a = r_ecx; u32 b = 0x40600000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00850b25: jge 0x850c37 */ if ((fS==fO)) goto L_00850c37;
L_00850b2b:; BB(0x00850b2b);
    /* 00850b2b: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 00850b2e: fld qword ptr [0x994f08] */ FPUSH(R_F64((u32)(0x994f08u)));
    /* 00850b34: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00850b36: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00850b39: fld qword ptr [esp] */ FPUSH(R_F64((u32)(r_esp)));
    /* 00850b3c: cmp ecx, 0x40400000 */ {  u32 a = r_ecx; u32 b = 0x40400000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00850b42: fld qword ptr [0x994f08] */ FPUSH(R_F64((u32)(0x994f08u)));
    /* 00850b48: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00850b4a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850b4c: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 00850b4e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00850b50: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00850b52: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850b54: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00850b56: fdivr qword ptr [0x994e80] */ ST(0) = R_F64((u32)(0x994e80u)) / ST(0);
    /* 00850b5c: fst qword ptr [ebx + 8] */ W_F64((u32)(r_ebx+0x8u), ST(0));
    /* 00850b5f: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00850b61: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00850b63: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00850b66: fld qword ptr [esp] */ FPUSH(R_F64((u32)(r_esp)));
    /* 00850b69: fsub qword ptr [0x994f08] */ ST(0) = ST(0) - R_F64((u32)(0x994f08u));
    /* 00850b6f: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00850b71: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00850b73: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00850b75: fadd qword ptr [0x994e88] */ ST(0) = ST(0) + R_F64((u32)(0x994e88u));
    /* 00850b7b: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00850b7d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00850b7f: fsubr st(5) */ ST(0) = ST(5) - ST(0);
    /* 00850b81: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00850b83: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00850b85: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00850b87: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00850b89: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00850b8b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00850b8d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00850b8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850b91: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00850b93: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00850b95: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00850b97: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00850b99: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00850b9b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00850b9d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00850b9f: jge 0x850bf6 */ if ((fS==fO)) goto L_00850bf6;
L_00850ba1:; BB(0x00850ba1);
    /* 00850ba1: fld qword ptr [0x994e78] */ FPUSH(R_F64((u32)(0x994e78u)));
    /* 00850ba7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00850ba9: fadd qword ptr [0x994e68] */ ST(0) = ST(0) + R_F64((u32)(0x994e68u));
    /* 00850baf: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00850bb1: fld qword ptr [0x994e70] */ FPUSH(R_F64((u32)(0x994e70u)));
    /* 00850bb7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00850bb9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850bbb: fadd qword ptr [0x994e58] */ ST(0) = ST(0) + R_F64((u32)(0x994e58u));
    /* 00850bc1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00850bc3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850bc5: fadd qword ptr [0x994e60] */ ST(0) = ST(0) + R_F64((u32)(0x994e60u));
    /* 00850bcb: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00850bcd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850bcf: fadd qword ptr [0x994e48] */ ST(0) = ST(0) + R_F64((u32)(0x994e48u));
    /* 00850bd5: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00850bd7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850bd9: fadd qword ptr [0x994e50] */ ST(0) = ST(0) + R_F64((u32)(0x994e50u));
    /* 00850bdf: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00850be1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850be3: fadd qword ptr [0x994e40] */ ST(0) = ST(0) + R_F64((u32)(0x994e40u));
    /* 00850be9: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00850beb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00850bed: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00850bef: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850bf1: jmp 0x850cd9 */ goto L_00850cd9;
L_00850bf6:; BB(0x00850bf6);
    /* 00850bf6: fld qword ptr [0x994ee0] */ FPUSH(R_F64((u32)(0x994ee0u)));
    /* 00850bfc: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00850bfe: fadd qword ptr [0x994ed0] */ ST(0) = ST(0) + R_F64((u32)(0x994ed0u));
    /* 00850c04: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00850c06: fld qword ptr [0x994ed8] */ FPUSH(R_F64((u32)(0x994ed8u)));
    /* 00850c0c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00850c0e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850c10: fadd qword ptr [0x994ec0] */ ST(0) = ST(0) + R_F64((u32)(0x994ec0u));
    /* 00850c16: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00850c18: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850c1a: fadd qword ptr [0x994ec8] */ ST(0) = ST(0) + R_F64((u32)(0x994ec8u));
    /* 00850c20: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00850c22: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850c24: fadd qword ptr [0x994eb8] */ ST(0) = ST(0) + R_F64((u32)(0x994eb8u));
    /* 00850c2a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00850c2c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00850c2e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00850c30: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850c32: jmp 0x850cd9 */ goto L_00850cd9;
L_00850c37:; BB(0x00850c37);
    /* 00850c37: fld qword ptr [0x994e80] */ FPUSH(R_F64((u32)(0x994e80u)));
    /* 00850c3d: fdiv qword ptr [ebx + 8] */ ST(0) = ST(0) / R_F64((u32)(r_ebx+0x8u));
    /* 00850c40: fld qword ptr [0x994f08] */ FPUSH(R_F64((u32)(0x994f08u)));
    /* 00850c46: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850c48: fst qword ptr [ebx + 8] */ W_F64((u32)(r_ebx+0x8u), ST(0));
    /* 00850c4b: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00850c4d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850c4f: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00850c52: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00850c54: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00850c56: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00850c58: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00850c5a: fld qword ptr [esp] */ FPUSH(R_F64((u32)(r_esp)));
    /* 00850c5d: fsub qword ptr [0x994f08] */ ST(0) = ST(0) - R_F64((u32)(0x994f08u));
    /* 00850c63: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00850c65: fsubr st(4) */ ST(0) = ST(4) - ST(0);
    /* 00850c67: cmp ecx, 0x40e00000 */ {  u32 a = r_ecx; u32 b = 0x40e00000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00850c6d: jge 0x850caf */ if ((fS==fO)) goto L_00850caf;
L_00850c6f:; BB(0x00850c6f);
    /* 00850c6f: fld qword ptr [0x994ee0] */ FPUSH(R_F64((u32)(0x994ee0u)));
    /* 00850c75: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00850c77: fadd qword ptr [0x994ed0] */ ST(0) = ST(0) + R_F64((u32)(0x994ed0u));
    /* 00850c7d: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00850c7f: fld qword ptr [0x994ed8] */ FPUSH(R_F64((u32)(0x994ed8u)));
    /* 00850c85: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00850c87: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850c89: fadd qword ptr [0x994ec0] */ ST(0) = ST(0) + R_F64((u32)(0x994ec0u));
    /* 00850c8f: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00850c91: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850c93: fadd qword ptr [0x994ec8] */ ST(0) = ST(0) + R_F64((u32)(0x994ec8u));
    /* 00850c99: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00850c9b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00850c9d: fadd qword ptr [0x994eb8] */ ST(0) = ST(0) + R_F64((u32)(0x994eb8u));
    /* 00850ca3: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00850ca5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00850ca7: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00850ca9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00850cab: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00850cad: jmp 0x850cd9 */ goto L_00850cd9;
L_00850caf:; BB(0x00850caf);
    /* 00850caf: fld qword ptr [0x994f00] */ FPUSH(R_F64((u32)(0x994f00u)));
    /* 00850cb5: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00850cb7: fadd qword ptr [0x994ef0] */ ST(0) = ST(0) + R_F64((u32)(0x994ef0u));
    /* 00850cbd: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00850cbf: fld qword ptr [0x994ef8] */ FPUSH(R_F64((u32)(0x994ef8u)));
    /* 00850cc5: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00850cc7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00850cc9: fadd qword ptr [0x994ee8] */ ST(0) = ST(0) + R_F64((u32)(0x994ee8u));
    /* 00850ccf: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00850cd1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00850cd3: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00850cd5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00850cd7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
L_00850cd9:; BB(0x00850cd9);
    /* 00850cd9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00850cdb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850cdd: fadd qword ptr [eax*8 + 0x994ea0] */ ST(0) = ST(0) + R_F64((u32)(r_eax*8+0x994ea0u));
    /* 00850ce4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00850ce6: fadd qword ptr [eax*8 + 0x994e98] */ ST(0) = ST(0) + R_F64((u32)(r_eax*8+0x994e98u));
    /* 00850ced: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850cef: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00850cf1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00850cf3: mov esp, ebx */ r_esp = r_ebx;
    /* 00850cf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00850cf6: ret  */ FN_RET(0x0084d1fc); r_esp += 4; return;
L_00850cf7:; BB(0x00850cf7);
    /* 00850cf7: cmp ecx, 0x7ff00000 */ {  u32 a = r_ecx; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00850cfd: jge 0x850d11 */ if ((fS==fO)) goto L_00850d11;
L_00850cff:; BB(0x00850cff);
    /* 00850cff: fld qword ptr [eax*8 + 0x994f20] */ FPUSH(R_F64((u32)(r_eax*8+0x994f20u)));
    /* 00850d06: fsub qword ptr [eax*8 + 0x994f10] */ ST(0) = ST(0) - R_F64((u32)(r_eax*8+0x994f10u));
    /* 00850d0d: mov esp, ebx */ r_esp = r_ebx;
    /* 00850d0f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00850d10: ret  */ FN_RET(0x0084d1fc); r_esp += 4; return;
L_00850d11:; BB(0x00850d11);
    /* 00850d11: je 0x850d20 */ if (fZ) goto L_00850d20;
L_00850d13:; BB(0x00850d13);
    /* 00850d13: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 00850d16: fmul qword ptr [0x994e88] */ ST(0) = ST(0) * R_F64((u32)(0x994e88u));
    /* 00850d1c: mov esp, ebx */ r_esp = r_ebx;
    /* 00850d1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00850d1f: ret  */ FN_RET(0x0084d1fc); r_esp += 4; return;
L_00850d20:; BB(0x00850d20);
    /* 00850d20: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00850d23: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00850d25: je 0x850cff */ if (fZ) goto L_00850cff;
L_00850d27:; BB(0x00850d27);
    /* 00850d27: jmp 0x850d13 */ goto L_00850d13;
}

void f_0084d224(void)
{
    FN_ENTER(0x0084d224);
L_0084d224:; BB(0x0084d224);
    /* 0084d224: test dword ptr [0xae7f00], 0xfffffe00 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xfffffe00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084d22e: jne 0x850d2c */ if (!fZ) goto L_00850d2c;
L_0084d234:; BB(0x0084d234);
    /* 0084d234: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084d23e: jne 0x850dcc */ if (!fZ) goto L_00850dcc;
L_0084d244:; BB(0x0084d244);
    /* 0084d244: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x84d249u); f_0086b8a0();
    /* 0084d249: jmp 0x84d224 */ goto L_0084d224;
L_00850d2c:; BB(0x00850d2c);
    /* 00850d2c: movq xmm1, qword ptr [esp + 4] */ { xmm[1].q[0] = R64((u32)(r_esp+0x4u)); xmm[1].q[1] = 0; }
    /* 00850d32: movq xmm2, qword ptr [0x994f40] */ { xmm[2].q[0] = R64((u32)(0x994f40u)); xmm[2].q[1] = 0; }
    /* 00850d3a: movq xmm5, qword ptr [0x994f48] */ { xmm[5].q[0] = R64((u32)(0x994f48u)); xmm[5].q[1] = 0; }
    /* 00850d42: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00850d46: movdqa xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 00850d4a: psrlq xmm1, 0x34 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x34u; r.q = c > 63 ? 0 : (a.q >> c); xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x34u; r.q = c > 63 ? 0 : (a.q >> c); xmm[1].q[1] = r.q; }
    /* 00850d4f: pand xmm5, xmm0 */ { MM64 a; a.q = xmm[5].q[0]; MM64 b; b.q = xmm[0].q[0]; MM64 r; r.q = a.q & b.q; xmm[5].q[0] = r.q; } { MM64 a; a.q = xmm[5].q[1]; MM64 b; b.q = xmm[0].q[1]; MM64 r; r.q = a.q & b.q; xmm[5].q[1] = r.q; }
    /* 00850d53: movq xmm3, qword ptr [0x994f50] */ { xmm[3].q[0] = R64((u32)(0x994f50u)); xmm[3].q[1] = 0; }
    /* 00850d5b: movd eax, xmm1 */ r_eax = xmm[1].d[0];
    /* 00850d5f: and eax, 0x7ff */ {  u32 a = r_eax; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00850d64: sub eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00850d69: js 0x850d9b */ if (fS) goto L_00850d9b;
L_00850d6b:; BB(0x00850d6b);
    /* 00850d6b: cmp eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00850d6e: jae 0x850da4 */ if (!fC) goto L_00850da4;
L_00850d70:; BB(0x00850d70);
    /* 00850d70: pand xmm1, xmm3 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = xmm[3].q[0]; MM64 r; r.q = a.q & b.q; xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = xmm[3].q[1]; MM64 r; r.q = a.q & b.q; xmm[1].q[1] = r.q; }
    /* 00850d74: movdqa xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4] = s; }
    /* 00850d78: psubd xmm2, xmm1 */ { MM64 a; a.q = xmm[2].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; xmm[2].q[0] = r.q; } { MM64 a; a.q = xmm[2].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; xmm[2].q[1] = r.q; }
    /* 00850d7c: psrlq xmm4, xmm2 */ { MM64 a; a.q = xmm[4].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; u32 c = (u32)(0xffu & xmm[2].q[0]); r.q = c > 63 ? 0 : (a.q >> c); xmm[4].q[0] = r.q; } { MM64 a; a.q = xmm[4].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; u32 c = (u32)(0xffu & xmm[2].q[0]); r.q = c > 63 ? 0 : (a.q >> c); xmm[4].q[1] = r.q; }
    /* 00850d80: psllq xmm4, xmm2 */ { MM64 a; a.q = xmm[4].q[0]; MM64 b; b.q = xmm[2].q[0]; MM64 r; u32 c = (u32)(0xffu & xmm[2].q[0]); r.q = c > 63 ? 0 : (a.q << c); xmm[4].q[0] = r.q; } { MM64 a; a.q = xmm[4].q[1]; MM64 b; b.q = xmm[2].q[1]; MM64 r; u32 c = (u32)(0xffu & xmm[2].q[0]); r.q = c > 63 ? 0 : (a.q << c); xmm[4].q[1] = r.q; }
    /* 00850d84: movq qword ptr [ecx], xmm4 */ W64((u32)(r_ecx), xmm[4].q[0]);
    /* 00850d88: subsd xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].f[0] = xmm[0].f[0] - s.f[0]; }
    /* 00850d8c: por xmm0, xmm5 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[5].q[0]; MM64 r; r.q = a.q | b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[5].q[1]; MM64 r; r.q = a.q | b.q; xmm[0].q[1] = r.q; }
    /* 00850d90: movq qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 00850d96: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 00850d9a: ret  */ FN_RET(0x0084d224); r_esp += 4; return;
L_00850d9b:; BB(0x00850d9b);
    /* 00850d9b: movq qword ptr [ecx], xmm5 */ W64((u32)(r_ecx), xmm[5].q[0]);
    /* 00850d9f: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 00850da3: ret  */ FN_RET(0x0084d224); r_esp += 4; return;
L_00850da4:; BB(0x00850da4);
    /* 00850da4: ucomisd xmm0, xmm0 */ { XMM s = xmm[0]; double a = xmm[0].f[0]; double b = s.f[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 00850da8: jp 0x850db9 */ if (fP) goto L_00850db9;
L_00850daa:; BB(0x00850daa);
    /* 00850daa: movq qword ptr [ecx], xmm0 */ W64((u32)(r_ecx), xmm[0].q[0]);
    /* 00850dae: movq qword ptr [esp + 4], xmm5 */ W64((u32)(r_esp+0x4u), xmm[5].q[0]);
    /* 00850db4: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 00850db8: ret  */ FN_RET(0x0084d224); r_esp += 4; return;
L_00850db9:; BB(0x00850db9);
    /* 00850db9: mulsd xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].f[0] = xmm[0].f[0] * s.f[0]; }
    /* 00850dbd: movq qword ptr [ecx], xmm0 */ W64((u32)(r_ecx), xmm[0].q[0]);
    /* 00850dc1: movq qword ptr [esp + 4], xmm0 */ W64((u32)(r_esp+0x4u), xmm[0].q[0]);
    /* 00850dc7: fld qword ptr [esp + 4] */ FPUSH(R_F64((u32)(r_esp+0x4u)));
    /* 00850dcb: ret  */ FN_RET(0x0084d224); r_esp += 4; return;
L_00850dcc:; BB(0x00850dcc);
    /* 00850dcc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00850dcd: mov ebx, esp */ r_ebx = r_esp;
    /* 00850dcf: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00850dd2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00850dd3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00850dd4: mov edi, dword ptr [ebx + 0x10] */ r_edi = R32((u32)(r_ebx+0x10u));
    /* 00850dd7: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00850dda: mov eax, edx */ r_eax = r_edx;
    /* 00850ddc: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00850de1: lea ecx, [eax - 0x3ff00000] */ r_ecx = (u32)(r_eax+0xc0100000u);
    /* 00850de7: cmp ecx, 0x3400000 */ {  u32 a = r_ecx; u32 b = 0x3400000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00850ded: jae 0x850e64 */ if (!fC) goto L_00850e64;
L_00850def:; BB(0x00850def);
    /* 00850def: mov ecx, eax */ r_ecx = r_eax;
    /* 00850df1: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00850df4: cmp eax, 0x41400000 */ {  u32 a = r_eax; u32 b = 0x41400000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00850df9: jae 0x850e20 */ if (!fC) goto L_00850e20;
L_00850dfb:; BB(0x00850dfb);
    /* 00850dfb: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00850dfd: add ecx, 0x413 */ {  u32 a = r_ecx; u32 b = 0x413u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00850e03: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00850e08: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00850e0a: mov ecx, eax */ r_ecx = r_eax;
    /* 00850e0c: not ecx */ r_ecx = ~r_ecx;
    /* 00850e0e: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00850e10: and edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00850e12: or ecx, dword ptr [ebx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00850e15: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
    /* 00850e1b: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00850e1e: jmp 0x850e42 */ goto L_00850e42;
L_00850e20:; BB(0x00850e20);
    /* 00850e20: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00850e23: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00850e25: add ecx, 0x433 */ {  u32 a = r_ecx; u32 b = 0x433u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00850e2b: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00850e30: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00850e32: mov ecx, eax */ r_ecx = r_eax;
    /* 00850e34: not ecx */ r_ecx = ~r_ecx;
    /* 00850e36: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00850e38: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00850e3a: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00850e3c: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00850e3f: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
L_00850e42:; BB(0x00850e42);
    /* 00850e42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00850e44: je 0x850e51 */ if (fZ) goto L_00850e51;
L_00850e46:; BB(0x00850e46);
    /* 00850e46: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 00850e49: fsub qword ptr [edi] */ ST(0) = ST(0) - R_F64((u32)(r_edi));
    /* 00850e4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00850e4c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00850e4d: mov esp, ebx */ r_esp = r_ebx;
    /* 00850e4f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00850e50: ret  */ FN_RET(0x0084d224); r_esp += 4; return;
L_00850e51:; BB(0x00850e51);
    /* 00850e51: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00850e54: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00850e57: fld qword ptr [edx*8 + 0x994f58] */ FPUSH(R_F64((u32)(r_edx*8+0x994f58u)));
    /* 00850e5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00850e5f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00850e60: mov esp, ebx */ r_esp = r_ebx;
    /* 00850e62: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00850e63: ret  */ FN_RET(0x0084d224); r_esp += 4; return;
L_00850e64:; BB(0x00850e64);
    /* 00850e64: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00850e67: cmp eax, 0x7ff00000 */ {  u32 a = r_eax; u32 b = 0x7ff00000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00850e6c: jb 0x850e85 */ if (fC) goto L_00850e85;
L_00850e6e:; BB(0x00850e6e);
    /* 00850e6e: add eax, 0x80100000 */ {  u32 a = r_eax; u32 b = 0x80100000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00850e73: or eax, dword ptr [ebx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00850e76: je 0x850e8c */ if (fZ) goto L_00850e8c;
L_00850e78:; BB(0x00850e78);
    /* 00850e78: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 00850e7b: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00850e7d: fst qword ptr [edi] */ W_F64((u32)(r_edi), ST(0));
    /* 00850e7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00850e80: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00850e81: mov esp, ebx */ r_esp = r_ebx;
    /* 00850e83: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00850e84: ret  */ FN_RET(0x0084d224); r_esp += 4; return;
L_00850e85:; BB(0x00850e85);
    /* 00850e85: cmp eax, 0x3ff00000 */ {  u32 a = r_eax; u32 b = 0x3ff00000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00850e8a: jbe 0x850ea0 */ if ((fC||fZ)) goto L_00850ea0;
L_00850e8c:; BB(0x00850e8c);
    /* 00850e8c: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 00850e8f: fld qword ptr [edx*8 + 0x994f58] */ FPUSH(R_F64((u32)(r_edx*8+0x994f58u)));
    /* 00850e96: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00850e98: fstp qword ptr [edi] */ W_F64((u32)(r_edi), ST(0)); FPOP();
    /* 00850e9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00850e9b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00850e9c: mov esp, ebx */ r_esp = r_ebx;
    /* 00850e9e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00850e9f: ret  */ FN_RET(0x0084d224); r_esp += 4; return;
L_00850ea0:; BB(0x00850ea0);
    /* 00850ea0: fld qword ptr [edx*8 + 0x994f58] */ FPUSH(R_F64((u32)(r_edx*8+0x994f58u)));
    /* 00850ea7: fstp qword ptr [edi] */ W_F64((u32)(r_edi), ST(0)); FPOP();
    /* 00850ea9: fld qword ptr [ebx + 8] */ FPUSH(R_F64((u32)(r_ebx+0x8u)));
    /* 00850eac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00850ead: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00850eae: mov esp, ebx */ r_esp = r_ebx;
    /* 00850eb0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00850eb1: ret  */ FN_RET(0x0084d224); r_esp += 4; return;
}

void f_0084d6e2(void)
{
    FN_ENTER(0x0084d6e2);
    /* 0084d6e2: ret 0x8910 */ FN_RET(0x0084d6e2); r_esp += 35092; return;
}

