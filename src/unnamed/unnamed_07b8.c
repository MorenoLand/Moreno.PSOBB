#include "protos.h"

void f_007b8338(void) /* sub_7B8338 */
{
    FN_ENTER(0x007b8338);
    /* 007b8338: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b8339: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b833a: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b833d: mov esi, ecx */ r_esi = r_ecx;
    /* 007b833f: mov edi, dword ptr [esp + 0x70] */ r_edi = R32((u32)(r_esp+0x70u));
    /* 007b8343: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 007b8347: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007b834b: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b834d: je 0x7b8602 */ if (fZ) goto L_007b8602;
L_007b8353:; BB(0x007b8353);
    /* 007b8353: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8355: je 0x7b8602 */ if (fZ) goto L_007b8602;
L_007b835b:; BB(0x007b835b);
    /* 007b835b: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 007b835e: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8363: jne 0x7b8602 */ if (!fZ) goto L_007b8602;
L_007b8369:; BB(0x007b8369);
    /* 007b8369: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 007b836c: test eax, 0x80000800 */ {  u32 a = r_eax; u32 b = 0x80000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8371: jne 0x7b8602 */ if (!fZ) goto L_007b8602;
L_007b8377:; BB(0x007b8377);
    /* 007b8377: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 007b837a: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 007b837d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b837e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b837f: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7b8384u); f_007a9180();
    /* 007b8384: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b8387: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007b838b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007b838d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007b838f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b8391: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b8392: jb 0x7b8602 */ if (fC) goto L_007b8602;
L_007b8398:; BB(0x007b8398);
    /* 007b8398: mov ecx, dword ptr [esi + 0xa4] */ r_ecx = R32((u32)(r_esi+0xa4u));
    /* 007b839e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b83a0: je 0x7b8602 */ if (fZ) goto L_007b8602;
L_007b83a6:; BB(0x007b83a6);
    /* 007b83a6: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 007b83ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b83ae: je 0x7b8602 */ if (fZ) goto L_007b8602;
L_007b83b4:; BB(0x007b83b4);
    /* 007b83b4: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 007b83b8: mov ecx, dword ptr [esi + 0xa8] */ r_ecx = R32((u32)(r_esi+0xa8u));
    /* 007b83be: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 007b83c2: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 007b83c5: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 007b83c9: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 007b83cc: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 007b83d0: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 007b83d3: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 007b83d7: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 007b83da: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 007b83de: mov edx, esp */ r_edx = r_esp;
    /* 007b83e0: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 007b83e4: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 007b83e8: mov eax, dword ptr [edi + 0xa8] */ r_eax = R32((u32)(r_edi+0xa8u));
    /* 007b83ee: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 007b83f2: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 007b83f5: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 007b83f9: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 007b83fc: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 007b8400: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 007b8403: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 007b8407: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 007b840a: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 007b840e: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007b8412: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007b8414: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 007b8418: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007b841b: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 007b841f: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 007b8422: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 007b8426: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 007b8429: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007b842d: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 007b8430: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 007b8434: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 007b8437: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007b843b: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 007b843d: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 007b8441: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 007b8444: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 007b8448: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 007b844b: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 007b844f: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 007b8452: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 007b8456: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 007b8459: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 007b845d: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 007b8460: call 0x7b5318 */ r_esp -= 4; W32(r_esp, 0x7b8465u); f_007b5318();
    /* 007b8465: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8467: je 0x7b8602 */ if (fZ) goto L_007b8602;
L_007b846d:; BB(0x007b846d);
    /* 007b846d: mov ecx, dword ptr [0xaad6e0] */ r_ecx = R32((u32)(0xaad6e0u));
    /* 007b8473: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b8475: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8477: je 0x7b85ee */ if (fZ) goto L_007b85ee;
L_007b847d:; BB(0x007b847d);
    /* 007b847d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b847f: je 0x7b860c */ if (fZ) goto L_007b860c;
L_007b8485:; BB(0x007b8485);
    /* 007b8485: mov ecx, dword ptr [0xaad6e4] */ r_ecx = R32((u32)(0xaad6e4u));
    /* 007b848b: mov edx, 1 */ r_edx = 0x1u;
    /* 007b8490: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8492: je 0x7b85ee */ if (fZ) goto L_007b85ee;
L_007b8498:; BB(0x007b8498);
    /* 007b8498: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b849a: je 0x7b860c */ if (fZ) goto L_007b860c;
L_007b84a0:; BB(0x007b84a0);
    /* 007b84a0: mov ecx, dword ptr [0xaad6e8] */ r_ecx = R32((u32)(0xaad6e8u));
    /* 007b84a6: mov edx, 2 */ r_edx = 0x2u;
    /* 007b84ab: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b84ad: je 0x7b85ee */ if (fZ) goto L_007b85ee;
L_007b84b3:; BB(0x007b84b3);
    /* 007b84b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b84b5: je 0x7b860c */ if (fZ) goto L_007b860c;
L_007b84bb:; BB(0x007b84bb);
    /* 007b84bb: mov ecx, dword ptr [0xaad6ec] */ r_ecx = R32((u32)(0xaad6ecu));
    /* 007b84c1: mov edx, 3 */ r_edx = 0x3u;
    /* 007b84c6: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b84c8: je 0x7b85ee */ if (fZ) goto L_007b85ee;
L_007b84ce:; BB(0x007b84ce);
    /* 007b84ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b84d0: je 0x7b860c */ if (fZ) goto L_007b860c;
L_007b84d6:; BB(0x007b84d6);
    /* 007b84d6: mov ecx, dword ptr [0xaad6f0] */ r_ecx = R32((u32)(0xaad6f0u));
    /* 007b84dc: mov edx, 4 */ r_edx = 0x4u;
    /* 007b84e1: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b84e3: je 0x7b85ee */ if (fZ) goto L_007b85ee;
L_007b84e9:; BB(0x007b84e9);
    /* 007b84e9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b84eb: je 0x7b860c */ if (fZ) goto L_007b860c;
L_007b84f1:; BB(0x007b84f1);
    /* 007b84f1: mov ecx, dword ptr [0xaad6f4] */ r_ecx = R32((u32)(0xaad6f4u));
    /* 007b84f7: mov edx, 5 */ r_edx = 0x5u;
    /* 007b84fc: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b84fe: je 0x7b85ee */ if (fZ) goto L_007b85ee;
L_007b8504:; BB(0x007b8504);
    /* 007b8504: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8506: je 0x7b860c */ if (fZ) goto L_007b860c;
L_007b850c:; BB(0x007b850c);
    /* 007b850c: mov ecx, dword ptr [0xaad6f8] */ r_ecx = R32((u32)(0xaad6f8u));
    /* 007b8512: mov edx, 6 */ r_edx = 0x6u;
    /* 007b8517: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8519: je 0x7b85ee */ if (fZ) goto L_007b85ee;
L_007b851f:; BB(0x007b851f);
    /* 007b851f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8521: je 0x7b860c */ if (fZ) goto L_007b860c;
L_007b8527:; BB(0x007b8527);
    /* 007b8527: mov ecx, dword ptr [0xaad6fc] */ r_ecx = R32((u32)(0xaad6fcu));
    /* 007b852d: mov edx, 7 */ r_edx = 0x7u;
    /* 007b8532: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8534: je 0x7b85ee */ if (fZ) goto L_007b85ee;
L_007b853a:; BB(0x007b853a);
    /* 007b853a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b853c: je 0x7b860c */ if (fZ) goto L_007b860c;
L_007b8542:; BB(0x007b8542);
    /* 007b8542: mov ecx, dword ptr [0xaad700] */ r_ecx = R32((u32)(0xaad700u));
    /* 007b8548: mov edx, 8 */ r_edx = 0x8u;
    /* 007b854d: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b854f: je 0x7b85ee */ if (fZ) goto L_007b85ee;
L_007b8555:; BB(0x007b8555);
    /* 007b8555: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8557: je 0x7b860c */ if (fZ) goto L_007b860c;
L_007b855d:; BB(0x007b855d);
    /* 007b855d: mov ecx, dword ptr [0xaad704] */ r_ecx = R32((u32)(0xaad704u));
    /* 007b8563: mov edx, 9 */ r_edx = 0x9u;
    /* 007b8568: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b856a: je 0x7b85ee */ if (fZ) goto L_007b85ee;
L_007b8570:; BB(0x007b8570);
    /* 007b8570: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8572: je 0x7b860c */ if (fZ) goto L_007b860c;
L_007b8578:; BB(0x007b8578);
    /* 007b8578: mov ecx, dword ptr [0xaad708] */ r_ecx = R32((u32)(0xaad708u));
    /* 007b857e: mov edx, 0xa */ r_edx = 0xau;
    /* 007b8583: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8585: je 0x7b85ee */ if (fZ) goto L_007b85ee;
L_007b8587:; BB(0x007b8587);
    /* 007b8587: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8589: je 0x7b860c */ if (fZ) goto L_007b860c;
L_007b858f:; BB(0x007b858f);
    /* 007b858f: mov ecx, dword ptr [0xaad70c] */ r_ecx = R32((u32)(0xaad70cu));
    /* 007b8595: mov edx, 0xb */ r_edx = 0xbu;
    /* 007b859a: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b859c: je 0x7b85ee */ if (fZ) goto L_007b85ee;
L_007b859e:; BB(0x007b859e);
    /* 007b859e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b85a0: je 0x7b860c */ if (fZ) goto L_007b860c;
L_007b85a2:; BB(0x007b85a2);
    /* 007b85a2: mov ecx, dword ptr [0xaad710] */ r_ecx = R32((u32)(0xaad710u));
    /* 007b85a8: mov edx, 0xc */ r_edx = 0xcu;
    /* 007b85ad: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b85af: je 0x7b85ee */ if (fZ) goto L_007b85ee;
L_007b85b1:; BB(0x007b85b1);
    /* 007b85b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b85b3: je 0x7b860c */ if (fZ) goto L_007b860c;
L_007b85b5:; BB(0x007b85b5);
    /* 007b85b5: mov ecx, dword ptr [0xaad714] */ r_ecx = R32((u32)(0xaad714u));
    /* 007b85bb: mov edx, 0xd */ r_edx = 0xdu;
    /* 007b85c0: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b85c2: je 0x7b85ee */ if (fZ) goto L_007b85ee;
L_007b85c4:; BB(0x007b85c4);
    /* 007b85c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b85c6: je 0x7b860c */ if (fZ) goto L_007b860c;
L_007b85c8:; BB(0x007b85c8);
    /* 007b85c8: mov ecx, dword ptr [0xaad718] */ r_ecx = R32((u32)(0xaad718u));
    /* 007b85ce: mov edx, 0xe */ r_edx = 0xeu;
    /* 007b85d3: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b85d5: je 0x7b85ee */ if (fZ) goto L_007b85ee;
L_007b85d7:; BB(0x007b85d7);
    /* 007b85d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b85d9: je 0x7b860c */ if (fZ) goto L_007b860c;
L_007b85db:; BB(0x007b85db);
    /* 007b85db: mov ecx, dword ptr [0xaad71c] */ r_ecx = R32((u32)(0xaad71cu));
    /* 007b85e1: mov edx, 0xf */ r_edx = 0xfu;
    /* 007b85e6: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b85e8: je 0x7b85ee */ if (fZ) goto L_007b85ee;
L_007b85ea:; BB(0x007b85ea);
    /* 007b85ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b85ec: je 0x7b860c */ if (fZ) goto L_007b860c;
L_007b85ee:; BB(0x007b85ee);
    /* 007b85ee: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 007b85f1: or edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007b85f7: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 007b85fa: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b85fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b85fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b85ff: ret 8 */ FN_RET(0x007b8338); r_esp += 12; return;
L_007b8602:; BB(0x007b8602);
    /* 007b8602: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b8604: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b8607: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b8608: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b8609: ret 8 */ FN_RET(0x007b8338); r_esp += 12; return;
L_007b860c:; BB(0x007b860c);
    /* 007b860c: mov dword ptr [edx*4 + 0xaad6e0], edi */ W32((u32)(r_edx*4+0xaad6e0u), r_edi);
    /* 007b8613: jmp 0x7b85ee */ goto L_007b85ee;
}

void f_007b8618(void) /* sub_7B8618 */
{
    FN_ENTER(0x007b8618);
    /* 007b8618: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b861b: mov eax, ecx */ r_eax = r_ecx;
    /* 007b861d: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 007b8623: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8625: je 0x7b8958 */ if (fZ) goto L_007b8958;
L_007b862b:; BB(0x007b862b);
    /* 007b862b: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 007b862e: and edx, 0xfff7ffff */ {  u32 a = r_edx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007b8634: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 007b8637: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 007b863d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b863f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007b8641: jle 0x7b8958 */ if ((fZ||fS!=fO)) goto L_007b8958;
L_007b8647:; BB(0x007b8647);
    /* 007b8647: mov dword ptr [esp + 0x68], ebx */ W32((u32)(r_esp+0x68u), r_ebx);
    /* 007b864b: mov ebx, edx */ r_ebx = r_edx;
    /* 007b864d: mov dword ptr [esp + 0x64], esi */ W32((u32)(r_esp+0x64u), r_esi);
    /* 007b8651: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 007b8655: mov esi, eax */ r_esi = r_eax;
    /* 007b8657: mov edx, ecx */ r_edx = r_ecx;
L_007b8659:; BB(0x007b8659);
    /* 007b8659: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 007b8660: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8662: je 0x7b8941 */ if (fZ) goto L_007b8941;
L_007b8668:; BB(0x007b8668);
    /* 007b8668: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b866a: je 0x7b8929 */ if (fZ) goto L_007b8929;
L_007b8670:; BB(0x007b8670);
    /* 007b8670: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 007b8673: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8678: jne 0x7b8929 */ if (!fZ) goto L_007b8929;
L_007b867e:; BB(0x007b867e);
    /* 007b867e: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 007b8681: test eax, 0x80000800 */ {  u32 a = r_eax; u32 b = 0x80000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8686: jne 0x7b8929 */ if (!fZ) goto L_007b8929;
L_007b868c:; BB(0x007b868c);
    /* 007b868c: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 007b868f: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 007b8692: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b8693: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b8694: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7b8699u); f_007a9180();
    /* 007b8699: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b869c: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 007b86a0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007b86a2: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007b86a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b86a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b86a7: jb 0x7b891f */ if (fC) goto L_007b891f;
L_007b86ad:; BB(0x007b86ad);
    /* 007b86ad: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 007b86b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b86b5: je 0x7b896f */ if (fZ) goto L_007b896f;
L_007b86bb:; BB(0x007b86bb);
    /* 007b86bb: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 007b86c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b86c3: je 0x7b8977 */ if (fZ) goto L_007b8977;
L_007b86c9:; BB(0x007b86c9);
    /* 007b86c9: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 007b86cd: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 007b86d3: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 007b86d7: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 007b86da: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 007b86de: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 007b86e1: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 007b86e5: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 007b86e8: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 007b86ec: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 007b86ef: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 007b86f3: mov eax, dword ptr [edi + 0xa8] */ r_eax = R32((u32)(r_edi+0xa8u));
    /* 007b86f9: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 007b86fd: mov ecx, esp */ r_ecx = r_esp;
    /* 007b86ff: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 007b8703: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 007b8706: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 007b870a: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 007b870e: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 007b8711: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 007b8715: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 007b8718: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 007b871c: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 007b871f: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 007b8723: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007b8727: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 007b8729: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 007b872d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 007b8730: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 007b8734: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 007b8737: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 007b873b: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 007b873e: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007b8742: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 007b8745: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 007b8749: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 007b874c: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 007b8750: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 007b8752: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007b8756: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 007b8759: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 007b875d: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 007b8760: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 007b8764: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 007b8767: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 007b876b: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 007b876e: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 007b8772: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 007b8775: call 0x7b5318 */ r_esp -= 4; W32(r_esp, 0x7b877au); f_007b5318();
    /* 007b877a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b877c: je 0x7b8967 */ if (fZ) goto L_007b8967;
L_007b8782:; BB(0x007b8782);
    /* 007b8782: mov ecx, dword ptr [0xaad6e0] */ r_ecx = R32((u32)(0xaad6e0u));
    /* 007b8788: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b878a: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b878c: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b8792:; BB(0x007b8792);
    /* 007b8792: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8794: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b879a:; BB(0x007b879a);
    /* 007b879a: mov ecx, dword ptr [0xaad6e4] */ r_ecx = R32((u32)(0xaad6e4u));
    /* 007b87a0: mov edx, 1 */ r_edx = 0x1u;
    /* 007b87a5: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b87a7: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b87ad:; BB(0x007b87ad);
    /* 007b87ad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b87af: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b87b5:; BB(0x007b87b5);
    /* 007b87b5: mov ecx, dword ptr [0xaad6e8] */ r_ecx = R32((u32)(0xaad6e8u));
    /* 007b87bb: mov edx, 2 */ r_edx = 0x2u;
    /* 007b87c0: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b87c2: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b87c8:; BB(0x007b87c8);
    /* 007b87c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b87ca: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b87d0:; BB(0x007b87d0);
    /* 007b87d0: mov ecx, dword ptr [0xaad6ec] */ r_ecx = R32((u32)(0xaad6ecu));
    /* 007b87d6: mov edx, 3 */ r_edx = 0x3u;
    /* 007b87db: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b87dd: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b87e3:; BB(0x007b87e3);
    /* 007b87e3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b87e5: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b87eb:; BB(0x007b87eb);
    /* 007b87eb: mov ecx, dword ptr [0xaad6f0] */ r_ecx = R32((u32)(0xaad6f0u));
    /* 007b87f1: mov edx, 4 */ r_edx = 0x4u;
    /* 007b87f6: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b87f8: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b87fe:; BB(0x007b87fe);
    /* 007b87fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8800: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b8806:; BB(0x007b8806);
    /* 007b8806: mov ecx, dword ptr [0xaad6f4] */ r_ecx = R32((u32)(0xaad6f4u));
    /* 007b880c: mov edx, 5 */ r_edx = 0x5u;
    /* 007b8811: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8813: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b8819:; BB(0x007b8819);
    /* 007b8819: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b881b: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b8821:; BB(0x007b8821);
    /* 007b8821: mov ecx, dword ptr [0xaad6f8] */ r_ecx = R32((u32)(0xaad6f8u));
    /* 007b8827: mov edx, 6 */ r_edx = 0x6u;
    /* 007b882c: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b882e: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b8834:; BB(0x007b8834);
    /* 007b8834: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8836: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b883c:; BB(0x007b883c);
    /* 007b883c: mov ecx, dword ptr [0xaad6fc] */ r_ecx = R32((u32)(0xaad6fcu));
    /* 007b8842: mov edx, 7 */ r_edx = 0x7u;
    /* 007b8847: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8849: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b884f:; BB(0x007b884f);
    /* 007b884f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8851: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b8857:; BB(0x007b8857);
    /* 007b8857: mov ecx, dword ptr [0xaad700] */ r_ecx = R32((u32)(0xaad700u));
    /* 007b885d: mov edx, 8 */ r_edx = 0x8u;
    /* 007b8862: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8864: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b886a:; BB(0x007b886a);
    /* 007b886a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b886c: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b8872:; BB(0x007b8872);
    /* 007b8872: mov ecx, dword ptr [0xaad704] */ r_ecx = R32((u32)(0xaad704u));
    /* 007b8878: mov edx, 9 */ r_edx = 0x9u;
    /* 007b887d: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b887f: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b8885:; BB(0x007b8885);
    /* 007b8885: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8887: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b888d:; BB(0x007b888d);
    /* 007b888d: mov ecx, dword ptr [0xaad708] */ r_ecx = R32((u32)(0xaad708u));
    /* 007b8893: mov edx, 0xa */ r_edx = 0xau;
    /* 007b8898: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b889a: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b889c:; BB(0x007b889c);
    /* 007b889c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b889e: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b88a4:; BB(0x007b88a4);
    /* 007b88a4: mov ecx, dword ptr [0xaad70c] */ r_ecx = R32((u32)(0xaad70cu));
    /* 007b88aa: mov edx, 0xb */ r_edx = 0xbu;
    /* 007b88af: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b88b1: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b88b3:; BB(0x007b88b3);
    /* 007b88b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b88b5: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b88bb:; BB(0x007b88bb);
    /* 007b88bb: mov ecx, dword ptr [0xaad710] */ r_ecx = R32((u32)(0xaad710u));
    /* 007b88c1: mov edx, 0xc */ r_edx = 0xcu;
    /* 007b88c6: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b88c8: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b88ca:; BB(0x007b88ca);
    /* 007b88ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b88cc: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b88d2:; BB(0x007b88d2);
    /* 007b88d2: mov ecx, dword ptr [0xaad714] */ r_ecx = R32((u32)(0xaad714u));
    /* 007b88d8: mov edx, 0xd */ r_edx = 0xdu;
    /* 007b88dd: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b88df: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b88e1:; BB(0x007b88e1);
    /* 007b88e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b88e3: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b88e5:; BB(0x007b88e5);
    /* 007b88e5: mov ecx, dword ptr [0xaad718] */ r_ecx = R32((u32)(0xaad718u));
    /* 007b88eb: mov edx, 0xe */ r_edx = 0xeu;
    /* 007b88f0: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b88f2: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b88f4:; BB(0x007b88f4);
    /* 007b88f4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b88f6: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b88f8:; BB(0x007b88f8);
    /* 007b88f8: mov ecx, dword ptr [0xaad71c] */ r_ecx = R32((u32)(0xaad71cu));
    /* 007b88fe: mov edx, 0xf */ r_edx = 0xfu;
    /* 007b8903: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8905: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b8907:; BB(0x007b8907);
    /* 007b8907: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8909: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b890b:; BB(0x007b890b);
    /* 007b890b: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b8911: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 007b8914: or ecx, 0x4000000 */ {  u32 a = r_ecx; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007b891a: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 007b891d: jmp 0x7b892b */ goto L_007b892b;
L_007b891f:; BB(0x007b891f);
    /* 007b891f: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b8925: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b8927: jmp 0x7b892b */ goto L_007b892b;
L_007b8929:; BB(0x007b8929);
    /* 007b8929: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007b892b:; BB(0x007b892b);
    /* 007b892b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b892d: je 0x7b8941 */ if (fZ) goto L_007b8941;
L_007b892f:; BB(0x007b892f);
    /* 007b892f: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 007b8935: mov edi, dword ptr [eax + 0x18] */ r_edi = R32((u32)(r_eax+0x18u));
    /* 007b8938: or edi, 0x80000 */ {  u32 a = r_edi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 007b893e: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
L_007b8941:; BB(0x007b8941);
    /* 007b8941: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b8944: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b8946: jl 0x7b8659 */ if ((fS!=fO)) goto L_007b8659;
L_007b894c:; BB(0x007b894c);
    /* 007b894c: mov ebx, dword ptr [esp + 0x68] */ r_ebx = R32((u32)(r_esp+0x68u));
    /* 007b8950: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007b8954: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
L_007b8958:; BB(0x007b8958);
    /* 007b8958: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b895b: ret 4 */ FN_RET(0x007b8618); r_esp += 8; return;
L_007b895e:; BB(0x007b895e);
    /* 007b895e: mov dword ptr [edx*4 + 0xaad6e0], edi */ W32((u32)(r_edx*4+0xaad6e0u), r_edi);
    /* 007b8965: jmp 0x7b890b */ goto L_007b890b;
L_007b8967:; BB(0x007b8967);
    /* 007b8967: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b896d: jmp 0x7b8929 */ goto L_007b8929;
L_007b896f:; BB(0x007b896f);
    /* 007b896f: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b8975: jmp 0x7b8929 */ goto L_007b8929;
L_007b8977:; BB(0x007b8977);
    /* 007b8977: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b897d: jmp 0x7b8929 */ goto L_007b8929;
}

void f_007b87a0(void)
{
    FN_ENTER(0x007b87a0);
    goto L_007b87a0;
L_007b8659:; BB(0x007b8659);
    /* 007b8659: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 007b8660: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8662: je 0x7b8941 */ if (fZ) goto L_007b8941;
L_007b8668:; BB(0x007b8668);
    /* 007b8668: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b866a: je 0x7b8929 */ if (fZ) goto L_007b8929;
L_007b8670:; BB(0x007b8670);
    /* 007b8670: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 007b8673: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8678: jne 0x7b8929 */ if (!fZ) goto L_007b8929;
L_007b867e:; BB(0x007b867e);
    /* 007b867e: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 007b8681: test eax, 0x80000800 */ {  u32 a = r_eax; u32 b = 0x80000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8686: jne 0x7b8929 */ if (!fZ) goto L_007b8929;
L_007b868c:; BB(0x007b868c);
    /* 007b868c: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 007b868f: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 007b8692: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b8693: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b8694: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7b8699u); f_007a9180();
    /* 007b8699: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b869c: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 007b86a0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007b86a2: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007b86a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b86a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b86a7: jb 0x7b891f */ if (fC) goto L_007b891f;
L_007b86ad:; BB(0x007b86ad);
    /* 007b86ad: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 007b86b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b86b5: je 0x7b896f */ if (fZ) goto L_007b896f;
L_007b86bb:; BB(0x007b86bb);
    /* 007b86bb: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 007b86c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b86c3: je 0x7b8977 */ if (fZ) goto L_007b8977;
L_007b86c9:; BB(0x007b86c9);
    /* 007b86c9: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 007b86cd: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 007b86d3: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 007b86d7: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 007b86da: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 007b86de: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 007b86e1: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 007b86e5: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 007b86e8: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 007b86ec: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 007b86ef: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 007b86f3: mov eax, dword ptr [edi + 0xa8] */ r_eax = R32((u32)(r_edi+0xa8u));
    /* 007b86f9: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 007b86fd: mov ecx, esp */ r_ecx = r_esp;
    /* 007b86ff: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 007b8703: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 007b8706: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 007b870a: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 007b870e: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 007b8711: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 007b8715: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 007b8718: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 007b871c: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 007b871f: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 007b8723: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007b8727: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 007b8729: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 007b872d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 007b8730: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 007b8734: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 007b8737: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 007b873b: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 007b873e: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007b8742: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 007b8745: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 007b8749: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 007b874c: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 007b8750: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 007b8752: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007b8756: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 007b8759: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 007b875d: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 007b8760: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 007b8764: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 007b8767: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 007b876b: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 007b876e: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 007b8772: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 007b8775: call 0x7b5318 */ r_esp -= 4; W32(r_esp, 0x7b877au); f_007b5318();
    /* 007b877a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b877c: je 0x7b8967 */ if (fZ) goto L_007b8967;
L_007b8782:; BB(0x007b8782);
    /* 007b8782: mov ecx, dword ptr [0xaad6e0] */ r_ecx = R32((u32)(0xaad6e0u));
    /* 007b8788: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b878a: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b878c: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b8792:; BB(0x007b8792);
    /* 007b8792: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8794: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b879a:; BB(0x007b879a);
    /* 007b879a: mov ecx, dword ptr [0xaad6e4] */ r_ecx = R32((u32)(0xaad6e4u));
L_007b87a0:; BB(0x007b87a0);
    /* 007b87a0: mov edx, 1 */ r_edx = 0x1u;
    /* 007b87a5: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b87a7: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b87ad:; BB(0x007b87ad);
    /* 007b87ad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b87af: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b87b5:; BB(0x007b87b5);
    /* 007b87b5: mov ecx, dword ptr [0xaad6e8] */ r_ecx = R32((u32)(0xaad6e8u));
    /* 007b87bb: mov edx, 2 */ r_edx = 0x2u;
    /* 007b87c0: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b87c2: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b87c8:; BB(0x007b87c8);
    /* 007b87c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b87ca: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b87d0:; BB(0x007b87d0);
    /* 007b87d0: mov ecx, dword ptr [0xaad6ec] */ r_ecx = R32((u32)(0xaad6ecu));
    /* 007b87d6: mov edx, 3 */ r_edx = 0x3u;
    /* 007b87db: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b87dd: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b87e3:; BB(0x007b87e3);
    /* 007b87e3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b87e5: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b87eb:; BB(0x007b87eb);
    /* 007b87eb: mov ecx, dword ptr [0xaad6f0] */ r_ecx = R32((u32)(0xaad6f0u));
    /* 007b87f1: mov edx, 4 */ r_edx = 0x4u;
    /* 007b87f6: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b87f8: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b87fe:; BB(0x007b87fe);
    /* 007b87fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8800: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b8806:; BB(0x007b8806);
    /* 007b8806: mov ecx, dword ptr [0xaad6f4] */ r_ecx = R32((u32)(0xaad6f4u));
    /* 007b880c: mov edx, 5 */ r_edx = 0x5u;
    /* 007b8811: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8813: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b8819:; BB(0x007b8819);
    /* 007b8819: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b881b: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b8821:; BB(0x007b8821);
    /* 007b8821: mov ecx, dword ptr [0xaad6f8] */ r_ecx = R32((u32)(0xaad6f8u));
    /* 007b8827: mov edx, 6 */ r_edx = 0x6u;
    /* 007b882c: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b882e: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b8834:; BB(0x007b8834);
    /* 007b8834: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8836: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b883c:; BB(0x007b883c);
    /* 007b883c: mov ecx, dword ptr [0xaad6fc] */ r_ecx = R32((u32)(0xaad6fcu));
    /* 007b8842: mov edx, 7 */ r_edx = 0x7u;
    /* 007b8847: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8849: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b884f:; BB(0x007b884f);
    /* 007b884f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8851: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b8857:; BB(0x007b8857);
    /* 007b8857: mov ecx, dword ptr [0xaad700] */ r_ecx = R32((u32)(0xaad700u));
    /* 007b885d: mov edx, 8 */ r_edx = 0x8u;
    /* 007b8862: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8864: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b886a:; BB(0x007b886a);
    /* 007b886a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b886c: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b8872:; BB(0x007b8872);
    /* 007b8872: mov ecx, dword ptr [0xaad704] */ r_ecx = R32((u32)(0xaad704u));
    /* 007b8878: mov edx, 9 */ r_edx = 0x9u;
    /* 007b887d: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b887f: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b8885:; BB(0x007b8885);
    /* 007b8885: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8887: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b888d:; BB(0x007b888d);
    /* 007b888d: mov ecx, dword ptr [0xaad708] */ r_ecx = R32((u32)(0xaad708u));
    /* 007b8893: mov edx, 0xa */ r_edx = 0xau;
    /* 007b8898: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b889a: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b889c:; BB(0x007b889c);
    /* 007b889c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b889e: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b88a4:; BB(0x007b88a4);
    /* 007b88a4: mov ecx, dword ptr [0xaad70c] */ r_ecx = R32((u32)(0xaad70cu));
    /* 007b88aa: mov edx, 0xb */ r_edx = 0xbu;
    /* 007b88af: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b88b1: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b88b3:; BB(0x007b88b3);
    /* 007b88b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b88b5: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b88bb:; BB(0x007b88bb);
    /* 007b88bb: mov ecx, dword ptr [0xaad710] */ r_ecx = R32((u32)(0xaad710u));
    /* 007b88c1: mov edx, 0xc */ r_edx = 0xcu;
    /* 007b88c6: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b88c8: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b88ca:; BB(0x007b88ca);
    /* 007b88ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b88cc: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b88d2:; BB(0x007b88d2);
    /* 007b88d2: mov ecx, dword ptr [0xaad714] */ r_ecx = R32((u32)(0xaad714u));
    /* 007b88d8: mov edx, 0xd */ r_edx = 0xdu;
    /* 007b88dd: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b88df: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b88e1:; BB(0x007b88e1);
    /* 007b88e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b88e3: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b88e5:; BB(0x007b88e5);
    /* 007b88e5: mov ecx, dword ptr [0xaad718] */ r_ecx = R32((u32)(0xaad718u));
    /* 007b88eb: mov edx, 0xe */ r_edx = 0xeu;
    /* 007b88f0: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b88f2: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b88f4:; BB(0x007b88f4);
    /* 007b88f4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b88f6: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b88f8:; BB(0x007b88f8);
    /* 007b88f8: mov ecx, dword ptr [0xaad71c] */ r_ecx = R32((u32)(0xaad71cu));
    /* 007b88fe: mov edx, 0xf */ r_edx = 0xfu;
    /* 007b8903: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8905: je 0x7b890b */ if (fZ) goto L_007b890b;
L_007b8907:; BB(0x007b8907);
    /* 007b8907: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8909: je 0x7b895e */ if (fZ) goto L_007b895e;
L_007b890b:; BB(0x007b890b);
    /* 007b890b: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b8911: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 007b8914: or ecx, 0x4000000 */ {  u32 a = r_ecx; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007b891a: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 007b891d: jmp 0x7b892b */ goto L_007b892b;
L_007b891f:; BB(0x007b891f);
    /* 007b891f: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b8925: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b8927: jmp 0x7b892b */ goto L_007b892b;
L_007b8929:; BB(0x007b8929);
    /* 007b8929: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007b892b:; BB(0x007b892b);
    /* 007b892b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b892d: je 0x7b8941 */ if (fZ) goto L_007b8941;
L_007b892f:; BB(0x007b892f);
    /* 007b892f: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 007b8935: mov edi, dword ptr [eax + 0x18] */ r_edi = R32((u32)(r_eax+0x18u));
    /* 007b8938: or edi, 0x80000 */ {  u32 a = r_edi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 007b893e: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
L_007b8941:; BB(0x007b8941);
    /* 007b8941: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b8944: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b8946: jl 0x7b8659 */ if ((fS!=fO)) goto L_007b8659;
L_007b894c:; BB(0x007b894c);
    /* 007b894c: mov ebx, dword ptr [esp + 0x68] */ r_ebx = R32((u32)(r_esp+0x68u));
    /* 007b8950: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 007b8954: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 007b8958: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b895b: ret 4 */ FN_RET(0x007b87a0); r_esp += 8; return;
L_007b895e:; BB(0x007b895e);
    /* 007b895e: mov dword ptr [edx*4 + 0xaad6e0], edi */ W32((u32)(r_edx*4+0xaad6e0u), r_edi);
    /* 007b8965: jmp 0x7b890b */ goto L_007b890b;
L_007b8967:; BB(0x007b8967);
    /* 007b8967: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b896d: jmp 0x7b8929 */ goto L_007b8929;
L_007b896f:; BB(0x007b896f);
    /* 007b896f: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b8975: jmp 0x7b8929 */ goto L_007b8929;
L_007b8977:; BB(0x007b8977);
    /* 007b8977: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b897d: jmp 0x7b8929 */ goto L_007b8929;
}

void f_007b8980(void) /* sub_7B8980 */
{
    FN_ENTER(0x007b8980);
    /* 007b8980: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b8981: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b8982: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b8983: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b8986: mov eax, ecx */ r_eax = r_ecx;
    /* 007b8988: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 007b898e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8990: je 0x7b8cc3 */ if (fZ) goto L_007b8cc3;
L_007b8996:; BB(0x007b8996);
    /* 007b8996: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 007b8999: and edx, 0xffefffff */ {  u32 a = r_edx; u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007b899f: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 007b89a2: mov ecx, dword ptr [0xaae16c] */ r_ecx = R32((u32)(0xaae16cu));
    /* 007b89a8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b89aa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007b89ac: jle 0x7b8cc3 */ if ((fZ||fS!=fO)) goto L_007b8cc3;
L_007b89b2:; BB(0x007b89b2);
    /* 007b89b2: mov esi, eax */ r_esi = r_eax;
    /* 007b89b4: mov ebx, edx */ r_ebx = r_edx;
    /* 007b89b6: mov edx, ecx */ r_edx = r_ecx;
L_007b89b8:; BB(0x007b89b8);
    /* 007b89b8: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 007b89bf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b89c1: je 0x7b8cc3 */ if (fZ) goto L_007b8cc3;
L_007b89c7:; BB(0x007b89c7);
    /* 007b89c7: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 007b89cb: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b89d0: jl 0x7b8cb8 */ if ((fS!=fO)) goto L_007b8cb8;
L_007b89d6:; BB(0x007b89d6);
    /* 007b89d6: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b89db: jge 0x7b8cb8 */ if ((fS==fO)) goto L_007b8cb8;
L_007b89e1:; BB(0x007b89e1);
    /* 007b89e1: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b89e3: je 0x7b8ca0 */ if (fZ) goto L_007b8ca0;
L_007b89e9:; BB(0x007b89e9);
    /* 007b89e9: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 007b89ec: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b89f1: jne 0x7b8ca0 */ if (!fZ) goto L_007b8ca0;
L_007b89f7:; BB(0x007b89f7);
    /* 007b89f7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 007b89fa: test eax, 0x80000800 */ {  u32 a = r_eax; u32 b = 0x80000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b89ff: jne 0x7b8ca0 */ if (!fZ) goto L_007b8ca0;
L_007b8a05:; BB(0x007b8a05);
    /* 007b8a05: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 007b8a08: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 007b8a0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b8a0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b8a0d: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7b8a12u); f_007a9180();
    /* 007b8a12: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b8a15: fcomp dword ptr [0x97e378] */ fx_compare(ST(0), R_F32((u32)(0x97e378u))); FPOP();
    /* 007b8a1b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b8a1d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b8a1e: ja 0x7b8c96 */ if ((!fC&&!fZ)) goto L_007b8c96;
L_007b8a24:; BB(0x007b8a24);
    /* 007b8a24: mov ecx, dword ptr [esi + 0xa4] */ r_ecx = R32((u32)(r_esi+0xa4u));
    /* 007b8a2a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8a2c: je 0x7b8cdb */ if (fZ) goto L_007b8cdb;
L_007b8a32:; BB(0x007b8a32);
    /* 007b8a32: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 007b8a38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8a3a: je 0x7b8ce3 */ if (fZ) goto L_007b8ce3;
L_007b8a40:; BB(0x007b8a40);
    /* 007b8a40: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 007b8a44: mov ecx, dword ptr [esi + 0xa8] */ r_ecx = R32((u32)(r_esi+0xa8u));
    /* 007b8a4a: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 007b8a4e: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 007b8a51: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 007b8a55: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 007b8a58: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 007b8a5c: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 007b8a5f: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 007b8a63: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 007b8a66: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 007b8a6a: mov edx, esp */ r_edx = r_esp;
    /* 007b8a6c: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 007b8a70: mov eax, dword ptr [edi + 0xa8] */ r_eax = R32((u32)(r_edi+0xa8u));
    /* 007b8a76: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 007b8a7a: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 007b8a7d: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 007b8a81: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 007b8a84: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 007b8a88: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 007b8a8b: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 007b8a8f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 007b8a92: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 007b8a96: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007b8a9a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007b8a9c: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 007b8aa0: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007b8aa3: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 007b8aa7: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 007b8aaa: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 007b8aae: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 007b8ab1: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007b8ab5: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 007b8ab8: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 007b8abc: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 007b8abf: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007b8ac3: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 007b8ac7: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 007b8ac9: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007b8acd: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 007b8ad0: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 007b8ad4: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 007b8ad7: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007b8adb: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 007b8ade: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 007b8ae2: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 007b8ae5: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 007b8ae9: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 007b8aec: call 0x7b5318 */ r_esp -= 4; W32(r_esp, 0x7b8af1u); f_007b5318();
    /* 007b8af1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8af3: je 0x7b8cd3 */ if (fZ) goto L_007b8cd3;
L_007b8af9:; BB(0x007b8af9);
    /* 007b8af9: mov ecx, dword ptr [0xaad6e0] */ r_ecx = R32((u32)(0xaad6e0u));
    /* 007b8aff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b8b01: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8b03: je 0x7b8c82 */ if (fZ) goto L_007b8c82;
L_007b8b09:; BB(0x007b8b09);
    /* 007b8b09: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8b0b: je 0x7b8cca */ if (fZ) goto L_007b8cca;
L_007b8b11:; BB(0x007b8b11);
    /* 007b8b11: mov ecx, dword ptr [0xaad6e4] */ r_ecx = R32((u32)(0xaad6e4u));
    /* 007b8b17: mov edx, 1 */ r_edx = 0x1u;
    /* 007b8b1c: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8b1e: je 0x7b8c82 */ if (fZ) goto L_007b8c82;
L_007b8b24:; BB(0x007b8b24);
    /* 007b8b24: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8b26: je 0x7b8cca */ if (fZ) goto L_007b8cca;
L_007b8b2c:; BB(0x007b8b2c);
    /* 007b8b2c: mov ecx, dword ptr [0xaad6e8] */ r_ecx = R32((u32)(0xaad6e8u));
    /* 007b8b32: mov edx, 2 */ r_edx = 0x2u;
    /* 007b8b37: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8b39: je 0x7b8c82 */ if (fZ) goto L_007b8c82;
L_007b8b3f:; BB(0x007b8b3f);
    /* 007b8b3f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8b41: je 0x7b8cca */ if (fZ) goto L_007b8cca;
L_007b8b47:; BB(0x007b8b47);
    /* 007b8b47: mov ecx, dword ptr [0xaad6ec] */ r_ecx = R32((u32)(0xaad6ecu));
    /* 007b8b4d: mov edx, 3 */ r_edx = 0x3u;
    /* 007b8b52: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8b54: je 0x7b8c82 */ if (fZ) goto L_007b8c82;
L_007b8b5a:; BB(0x007b8b5a);
    /* 007b8b5a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8b5c: je 0x7b8cca */ if (fZ) goto L_007b8cca;
L_007b8b62:; BB(0x007b8b62);
    /* 007b8b62: mov ecx, dword ptr [0xaad6f0] */ r_ecx = R32((u32)(0xaad6f0u));
    /* 007b8b68: mov edx, 4 */ r_edx = 0x4u;
    /* 007b8b6d: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8b6f: je 0x7b8c82 */ if (fZ) goto L_007b8c82;
L_007b8b75:; BB(0x007b8b75);
    /* 007b8b75: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8b77: je 0x7b8cca */ if (fZ) goto L_007b8cca;
L_007b8b7d:; BB(0x007b8b7d);
    /* 007b8b7d: mov ecx, dword ptr [0xaad6f4] */ r_ecx = R32((u32)(0xaad6f4u));
    /* 007b8b83: mov edx, 5 */ r_edx = 0x5u;
    /* 007b8b88: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8b8a: je 0x7b8c82 */ if (fZ) goto L_007b8c82;
L_007b8b90:; BB(0x007b8b90);
    /* 007b8b90: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8b92: je 0x7b8cca */ if (fZ) goto L_007b8cca;
L_007b8b98:; BB(0x007b8b98);
    /* 007b8b98: mov ecx, dword ptr [0xaad6f8] */ r_ecx = R32((u32)(0xaad6f8u));
    /* 007b8b9e: mov edx, 6 */ r_edx = 0x6u;
    /* 007b8ba3: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8ba5: je 0x7b8c82 */ if (fZ) goto L_007b8c82;
L_007b8bab:; BB(0x007b8bab);
    /* 007b8bab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8bad: je 0x7b8cca */ if (fZ) goto L_007b8cca;
L_007b8bb3:; BB(0x007b8bb3);
    /* 007b8bb3: mov ecx, dword ptr [0xaad6fc] */ r_ecx = R32((u32)(0xaad6fcu));
    /* 007b8bb9: mov edx, 7 */ r_edx = 0x7u;
    /* 007b8bbe: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8bc0: je 0x7b8c82 */ if (fZ) goto L_007b8c82;
L_007b8bc6:; BB(0x007b8bc6);
    /* 007b8bc6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8bc8: je 0x7b8cca */ if (fZ) goto L_007b8cca;
L_007b8bce:; BB(0x007b8bce);
    /* 007b8bce: mov ecx, dword ptr [0xaad700] */ r_ecx = R32((u32)(0xaad700u));
    /* 007b8bd4: mov edx, 8 */ r_edx = 0x8u;
    /* 007b8bd9: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8bdb: je 0x7b8c82 */ if (fZ) goto L_007b8c82;
L_007b8be1:; BB(0x007b8be1);
    /* 007b8be1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8be3: je 0x7b8cca */ if (fZ) goto L_007b8cca;
L_007b8be9:; BB(0x007b8be9);
    /* 007b8be9: mov ecx, dword ptr [0xaad704] */ r_ecx = R32((u32)(0xaad704u));
    /* 007b8bef: mov edx, 9 */ r_edx = 0x9u;
    /* 007b8bf4: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8bf6: je 0x7b8c82 */ if (fZ) goto L_007b8c82;
L_007b8bfc:; BB(0x007b8bfc);
    /* 007b8bfc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8bfe: je 0x7b8cca */ if (fZ) goto L_007b8cca;
L_007b8c04:; BB(0x007b8c04);
    /* 007b8c04: mov ecx, dword ptr [0xaad708] */ r_ecx = R32((u32)(0xaad708u));
    /* 007b8c0a: mov edx, 0xa */ r_edx = 0xau;
    /* 007b8c0f: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8c11: je 0x7b8c82 */ if (fZ) goto L_007b8c82;
L_007b8c13:; BB(0x007b8c13);
    /* 007b8c13: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8c15: je 0x7b8cca */ if (fZ) goto L_007b8cca;
L_007b8c1b:; BB(0x007b8c1b);
    /* 007b8c1b: mov ecx, dword ptr [0xaad70c] */ r_ecx = R32((u32)(0xaad70cu));
    /* 007b8c21: mov edx, 0xb */ r_edx = 0xbu;
    /* 007b8c26: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8c28: je 0x7b8c82 */ if (fZ) goto L_007b8c82;
L_007b8c2a:; BB(0x007b8c2a);
    /* 007b8c2a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8c2c: je 0x7b8cca */ if (fZ) goto L_007b8cca;
L_007b8c32:; BB(0x007b8c32);
    /* 007b8c32: mov ecx, dword ptr [0xaad710] */ r_ecx = R32((u32)(0xaad710u));
    /* 007b8c38: mov edx, 0xc */ r_edx = 0xcu;
    /* 007b8c3d: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8c3f: je 0x7b8c82 */ if (fZ) goto L_007b8c82;
L_007b8c41:; BB(0x007b8c41);
    /* 007b8c41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8c43: je 0x7b8cca */ if (fZ) goto L_007b8cca;
L_007b8c49:; BB(0x007b8c49);
    /* 007b8c49: mov ecx, dword ptr [0xaad714] */ r_ecx = R32((u32)(0xaad714u));
    /* 007b8c4f: mov edx, 0xd */ r_edx = 0xdu;
    /* 007b8c54: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8c56: je 0x7b8c82 */ if (fZ) goto L_007b8c82;
L_007b8c58:; BB(0x007b8c58);
    /* 007b8c58: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8c5a: je 0x7b8cca */ if (fZ) goto L_007b8cca;
L_007b8c5c:; BB(0x007b8c5c);
    /* 007b8c5c: mov ecx, dword ptr [0xaad718] */ r_ecx = R32((u32)(0xaad718u));
    /* 007b8c62: mov edx, 0xe */ r_edx = 0xeu;
    /* 007b8c67: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8c69: je 0x7b8c82 */ if (fZ) goto L_007b8c82;
L_007b8c6b:; BB(0x007b8c6b);
    /* 007b8c6b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8c6d: je 0x7b8cca */ if (fZ) goto L_007b8cca;
L_007b8c6f:; BB(0x007b8c6f);
    /* 007b8c6f: mov ecx, dword ptr [0xaad71c] */ r_ecx = R32((u32)(0xaad71cu));
    /* 007b8c75: mov edx, 0xf */ r_edx = 0xfu;
    /* 007b8c7a: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8c7c: je 0x7b8c82 */ if (fZ) goto L_007b8c82;
L_007b8c7e:; BB(0x007b8c7e);
    /* 007b8c7e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8c80: je 0x7b8cca */ if (fZ) goto L_007b8cca;
L_007b8c82:; BB(0x007b8c82);
    /* 007b8c82: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 007b8c88: mov edi, dword ptr [eax + 0x18] */ r_edi = R32((u32)(r_eax+0x18u));
    /* 007b8c8b: or edi, 0x4000000 */ {  u32 a = r_edi; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 007b8c91: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 007b8c94: jmp 0x7b8ca2 */ goto L_007b8ca2;
L_007b8c96:; BB(0x007b8c96);
    /* 007b8c96: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 007b8c9c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b8c9e: jmp 0x7b8ca2 */ goto L_007b8ca2;
L_007b8ca0:; BB(0x007b8ca0);
    /* 007b8ca0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007b8ca2:; BB(0x007b8ca2);
    /* 007b8ca2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8ca4: je 0x7b8cb8 */ if (fZ) goto L_007b8cb8;
L_007b8ca6:; BB(0x007b8ca6);
    /* 007b8ca6: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 007b8cac: mov edi, dword ptr [eax + 0x18] */ r_edi = R32((u32)(r_eax+0x18u));
    /* 007b8caf: or edi, 0x100000 */ {  u32 a = r_edi; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 007b8cb5: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
L_007b8cb8:; BB(0x007b8cb8);
    /* 007b8cb8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b8cbb: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b8cbd: jl 0x7b89b8 */ if ((fS!=fO)) goto L_007b89b8;
L_007b8cc3:; BB(0x007b8cc3);
    /* 007b8cc3: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b8cc6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b8cc7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b8cc8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b8cc9: ret  */ FN_RET(0x007b8980); r_esp += 4; return;
L_007b8cca:; BB(0x007b8cca);
    /* 007b8cca: mov dword ptr [edx*4 + 0xaad6e0], edi */ W32((u32)(r_edx*4+0xaad6e0u), r_edi);
    /* 007b8cd1: jmp 0x7b8c82 */ goto L_007b8c82;
L_007b8cd3:; BB(0x007b8cd3);
    /* 007b8cd3: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 007b8cd9: jmp 0x7b8ca0 */ goto L_007b8ca0;
L_007b8cdb:; BB(0x007b8cdb);
    /* 007b8cdb: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 007b8ce1: jmp 0x7b8ca0 */ goto L_007b8ca0;
L_007b8ce3:; BB(0x007b8ce3);
    /* 007b8ce3: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 007b8ce9: jmp 0x7b8ca0 */ goto L_007b8ca0;
}

void f_007b8cec(void) /* sub_7B8CEC */
{
    FN_ENTER(0x007b8cec);
    /* 007b8cec: mov edx, 0xaad660 */ r_edx = 0xaad660u;
    /* 007b8cf1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b8cf3: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007b8cf5: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007b8cf8: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 007b8cfb: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 007b8cfe: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 007b8d01: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 007b8d04: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 007b8d07: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 007b8d0a: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 007b8d0d: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 007b8d10: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 007b8d13: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 007b8d16: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 007b8d19: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 007b8d1c: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 007b8d1f: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 007b8d22: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 007b8d25: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 007b8d28: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 007b8d2b: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 007b8d2e: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 007b8d31: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 007b8d34: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 007b8d37: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 007b8d3a: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 007b8d3d: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 007b8d40: mov dword ptr [edx + 0x68], eax */ W32((u32)(r_edx+0x68u), r_eax);
    /* 007b8d43: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 007b8d46: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 007b8d49: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 007b8d4c: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 007b8d4f: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 007b8d52: mov dword ptr [0xaae15c], 0 */ W32((u32)(0xaae15cu), 0x0u);
    /* 007b8d5c: ret  */ FN_RET(0x007b8cec); r_esp += 4; return;
}

void f_007b8d60(void) /* sub_7B8D60 */
{
    FN_ENTER(0x007b8d60);
    /* 007b8d60: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b8d63: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007b8d69: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b8d6f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007b8d73: mov ecx, dword ptr [0xaae160] */ r_ecx = R32((u32)(0xaae160u));
    /* 007b8d79: call 0x7b8d90 */ r_esp -= 4; W32(r_esp, 0x7b8d7eu); f_007b8d90();
    /* 007b8d7e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b8d81: ret  */ FN_RET(0x007b8d60); r_esp += 4; return;
}

void f_007b8d90(void) /* sub_7B8D90 */
{
    FN_ENTER(0x007b8d90);
    /* 007b8d90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b8d91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b8d92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b8d93: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b8d94: sub esp, 0x240 */ {  u32 a = r_esp; u32 b = 0x240u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b8d9a: mov esi, ecx */ r_esi = r_ecx;
    /* 007b8d9c: mov ebp, edx */ r_ebp = r_edx;
    /* 007b8d9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8da0: je 0x7b9184 */ if (fZ) goto L_007b9184;
L_007b8da6:; BB(0x007b8da6);
    /* 007b8da6: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 007b8da8: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 007b8dac: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8dae: je 0x7b9184 */ if (fZ) goto L_007b9184;
L_007b8db4:; BB(0x007b8db4);
    /* 007b8db4: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 007b8db7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007b8db9: jle 0x7b9184 */ if ((fZ||fS!=fO)) goto L_007b9184;
L_007b8dbf:; BB(0x007b8dbf);
    /* 007b8dbf: mov edi, dword ptr [eax + 0x14] */ r_edi = R32((u32)(r_eax+0x14u));
    /* 007b8dc2: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 007b8dc5: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 007b8dc9: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 007b8dcc: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 007b8dcf: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 007b8dd3: mov ecx, edi */ r_ecx = r_edi;
    /* 007b8dd5: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 007b8dd9: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7b8ddeu); f_0082dcbc();
    /* 007b8dde: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007b8de2: mov ecx, edi */ r_ecx = r_edi;
    /* 007b8de4: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7b8de9u); f_0082ddd8();
    /* 007b8de9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8deb: je 0x7b975c */ if (fZ) goto L_007b975c;
L_007b8df1:; BB(0x007b8df1);
    /* 007b8df1: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 007b8df5: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b8df7: lea eax, [ebp + ebp + 0xaad720] */ r_eax = (u32)(r_ebp+r_ebp+0xaad720u);
    /* 007b8dfe: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007b8e02: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 007b8e06: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 007b8e0a: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_007b8e0d:; BB(0x007b8e0d);
    /* 007b8e0d: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 007b8e11: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 007b8e14: mov esi, dword ptr [edi + 0x18] */ r_esi = R32((u32)(r_edi+0x18u));
    /* 007b8e17: mov ebp, dword ptr [edi + 0x14] */ r_ebp = R32((u32)(r_edi+0x14u));
    /* 007b8e1a: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007b8e1c: fmul dword ptr [esp + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x6cu));
    /* 007b8e20: fadd dword ptr [esp + 0x70] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x70u));
    /* 007b8e24: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b8e26: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 007b8e29: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 007b8e2c: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 007b8e30: fadd dword ptr [esp + 0x78] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x78u));
    /* 007b8e34: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b8e36: fst dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0));
    /* 007b8e39: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b8e3b: fst dword ptr [edi + 0x24] */ W_F32((u32)(r_edi+0x24u), ST(0));
    /* 007b8e3e: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8e41: je 0x7b94b2 */ if (fZ) goto L_007b94b2;
L_007b8e47:; BB(0x007b8e47);
    /* 007b8e47: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b8e49: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 007b8e4d: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 007b8e54: mov dword ptr [esp + 0x80], 0 */ W32((u32)(r_esp+0x80u), 0x0u);
    /* 007b8e5f: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 007b8e62: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
L_007b8e69:; BB(0x007b8e69);
    /* 007b8e69: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 007b8e6d: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 007b8e70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8e72: je 0x7b9178 */ if (fZ) goto L_007b9178;
L_007b8e78:; BB(0x007b8e78);
    /* 007b8e78: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 007b8e7c: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 007b8e80: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 007b8e84: mov ebx, edx */ r_ebx = r_edx;
    /* 007b8e86: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 007b8e8a: mov edi, eax */ r_edi = r_eax;
L_007b8e8c:; BB(0x007b8e8c);
    /* 007b8e8c: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 007b8e8e: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b8e91: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007b8e94: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8e96: je 0x7b9168 */ if (fZ) goto L_007b9168;
L_007b8e9c:; BB(0x007b8e9c);
    /* 007b8e9c: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 007b8e9f: test ecx, 0x80000800 */ {  u32 a = r_ecx; u32 b = 0x80000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8ea5: jne 0x7b9168 */ if (!fZ) goto L_007b9168;
L_007b8eab:; BB(0x007b8eab);
    /* 007b8eab: mov ecx, dword ptr [esi + 0xa4] */ r_ecx = R32((u32)(r_esi+0xa4u));
    /* 007b8eb1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8eb3: je 0x7b9168 */ if (fZ) goto L_007b9168;
L_007b8eb9:; BB(0x007b8eb9);
    /* 007b8eb9: lea ebp, [esp + 0x70] */ r_ebp = (u32)(r_esp+0x70u);
    /* 007b8ebd: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 007b8ec0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b8ec1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b8ec2: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7b8ec7u); f_007a9180();
    /* 007b8ec7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b8eca: fcomp dword ptr [0x97e364] */ fx_compare(ST(0), R_F32((u32)(0x97e364u))); FPOP();
    /* 007b8ed0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b8ed2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b8ed3: jae 0x7b9168 */ if (!fC) goto L_007b9168;
L_007b8ed9:; BB(0x007b8ed9);
    /* 007b8ed9: mov ebp, dword ptr [esi + 0xa4] */ r_ebp = R32((u32)(r_esi+0xa4u));
    /* 007b8edf: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 007b8ee2: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 007b8ee5: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 007b8ee8: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 007b8eeb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007b8eed: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007b8ef1: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007b8ef5: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007b8ef9: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 007b8efd: mov ebp, dword ptr [esi + 0xa8] */ r_ebp = R32((u32)(r_esi+0xa8u));
    /* 007b8f03: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 007b8f07: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b8f0c: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b8f11u); f_0082d990();
    /* 007b8f11: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 007b8f15: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b8f17: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b8f1cu); f_0082d8bc();
    /* 007b8f1c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b8f1e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8f20: je 0x7b9163 */ if (fZ) goto L_007b9163;
L_007b8f26:; BB(0x007b8f26);
    /* 007b8f26: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007b8f2a: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 007b8f2e: mov ecx, edx */ r_ecx = r_edx;
    /* 007b8f30: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 007b8f34: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 007b8f38: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 007b8f3c: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007b8f3f: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 007b8f43: mov ecx, edx */ r_ecx = r_edx;
    /* 007b8f45: and ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007b8f48: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 007b8f4c: mov ecx, edx */ r_ecx = r_edx;
    /* 007b8f4e: and ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007b8f51: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 007b8f55: mov ecx, edx */ r_ecx = r_edx;
    /* 007b8f57: and ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007b8f5a: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 007b8f5e: mov ecx, edx */ r_ecx = r_edx;
    /* 007b8f60: and ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007b8f66: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 007b8f6a: mov ecx, edx */ r_ecx = r_edx;
    /* 007b8f6c: mov ebp, eax */ r_ebp = r_eax;
    /* 007b8f6e: and ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007b8f74: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 007b8f78: mov ecx, edx */ r_ecx = r_edx;
    /* 007b8f7a: and ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007b8f80: mov dword ptr [esp + 0x60], ecx */ W32((u32)(r_esp+0x60u), r_ecx);
    /* 007b8f84: mov ecx, edx */ r_ecx = r_edx;
    /* 007b8f86: and ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007b8f8c: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 007b8f90: mov ecx, edx */ r_ecx = r_edx;
    /* 007b8f92: and ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007b8f98: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 007b8f9c: and edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007b8fa2: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
L_007b8fa6:; BB(0x007b8fa6);
    /* 007b8fa6: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007b8faa: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 007b8fad: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007b8faf: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007b8fb1: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b8fb4: je 0x7b9149 */ if (fZ) goto L_007b9149;
L_007b8fba:; BB(0x007b8fba);
    /* 007b8fba: test cl, 6 */ {  u32 a = (u8)r_ecx; u32 b = 0x6u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b8fbd: je 0x7b9149 */ if (fZ) goto L_007b9149;
L_007b8fc3:; BB(0x007b8fc3);
    /* 007b8fc3: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 007b8fc7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8fc9: je 0x7b8fd7 */ if (fZ) goto L_007b8fd7;
L_007b8fcb:; BB(0x007b8fcb);
    /* 007b8fcb: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8fd1: jne 0x7b9149 */ if (!fZ) goto L_007b9149;
L_007b8fd7:; BB(0x007b8fd7);
    /* 007b8fd7: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b8fda: je 0x7b8fe8 */ if (fZ) goto L_007b8fe8;
L_007b8fdc:; BB(0x007b8fdc);
    /* 007b8fdc: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 007b8fe0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8fe2: jne 0x7b9149 */ if (!fZ) goto L_007b9149;
L_007b8fe8:; BB(0x007b8fe8);
    /* 007b8fe8: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 007b8fec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8fee: je 0x7b8ffc */ if (fZ) goto L_007b8ffc;
L_007b8ff0:; BB(0x007b8ff0);
    /* 007b8ff0: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b8ff6: jne 0x7b9149 */ if (!fZ) goto L_007b9149;
L_007b8ffc:; BB(0x007b8ffc);
    /* 007b8ffc: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b8fff: je 0x7b900d */ if (fZ) goto L_007b900d;
L_007b9001:; BB(0x007b9001);
    /* 007b9001: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 007b9005: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9007: jne 0x7b9149 */ if (!fZ) goto L_007b9149;
L_007b900d:; BB(0x007b900d);
    /* 007b900d: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 007b9011: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9013: je 0x7b9021 */ if (fZ) goto L_007b9021;
L_007b9015:; BB(0x007b9015);
    /* 007b9015: test edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b901b: jne 0x7b9149 */ if (!fZ) goto L_007b9149;
L_007b9021:; BB(0x007b9021);
    /* 007b9021: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b9024: je 0x7b9032 */ if (fZ) goto L_007b9032;
L_007b9026:; BB(0x007b9026);
    /* 007b9026: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 007b902a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b902c: jne 0x7b9149 */ if (!fZ) goto L_007b9149;
L_007b9032:; BB(0x007b9032);
    /* 007b9032: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 007b9036: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9038: je 0x7b9046 */ if (fZ) goto L_007b9046;
L_007b903a:; BB(0x007b903a);
    /* 007b903a: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9040: jne 0x7b9149 */ if (!fZ) goto L_007b9149;
L_007b9046:; BB(0x007b9046);
    /* 007b9046: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b9049: je 0x7b9057 */ if (fZ) goto L_007b9057;
L_007b904b:; BB(0x007b904b);
    /* 007b904b: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 007b904f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9051: jne 0x7b9149 */ if (!fZ) goto L_007b9149;
L_007b9057:; BB(0x007b9057);
    /* 007b9057: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 007b905b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b905d: je 0x7b906b */ if (fZ) goto L_007b906b;
L_007b905f:; BB(0x007b905f);
    /* 007b905f: test edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9065: jne 0x7b9149 */ if (!fZ) goto L_007b9149;
L_007b906b:; BB(0x007b906b);
    /* 007b906b: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9071: je 0x7b907f */ if (fZ) goto L_007b907f;
L_007b9073:; BB(0x007b9073);
    /* 007b9073: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 007b9077: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9079: jne 0x7b9149 */ if (!fZ) goto L_007b9149;
L_007b907f:; BB(0x007b907f);
    /* 007b907f: lea edx, [esp + 0x158] */ r_edx = (u32)(r_esp+0x158u);
    /* 007b9086: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b9087: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b9088: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b908du); f_0083a610();
    /* 007b908d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b9090: fld dword ptr [esp + 0x158] */ FPUSH(R_F32((u32)(r_esp+0x158u)));
    /* 007b9097: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 007b909b: fld dword ptr [esp + 0x15c] */ FPUSH(R_F32((u32)(r_esp+0x15cu)));
    /* 007b90a2: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 007b90a6: fld dword ptr [esp + 0x160] */ FPUSH(R_F32((u32)(r_esp+0x160u)));
    /* 007b90ad: fadd dword ptr [esp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x40u));
    /* 007b90b1: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 007b90b4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007b90b6: fst dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0));
    /* 007b90b9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b90bb: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 007b90be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b90c0: fst dword ptr [edi + 0x24] */ W_F32((u32)(r_edi+0x24u), ST(0));
    /* 007b90c3: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b90c6: je 0x7b91b9 */ if (fZ) goto L_007b91b9;
L_007b90cc:; BB(0x007b90cc);
    /* 007b90cc: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 007b90d0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b90d2: fstp dword ptr [esp + 0x164] */ W_F32((u32)(r_esp+0x164u), ST(0)); FPOP();
    /* 007b90d9: fstp dword ptr [esp + 0x16c] */ W_F32((u32)(r_esp+0x16cu), ST(0)); FPOP();
    /* 007b90e0: mov dword ptr [esp + 0x168], 0 */ W32((u32)(r_esp+0x168u), 0x0u);
    /* 007b90eb: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 007b90ee: mov dword ptr [esp + 0x170], edx */ W32((u32)(r_esp+0x170u), r_edx);
    /* 007b90f5: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b90f8: je 0x7b9196 */ if (fZ) goto L_007b9196;
L_007b90fe:; BB(0x007b90fe);
    /* 007b90fe: lea ecx, [esp + 0x7c] */ r_ecx = (u32)(r_esp+0x7cu);
    /* 007b9102: lea edx, [esp + 0x164] */ r_edx = (u32)(r_esp+0x164u);
    /* 007b9109: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b910a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b910b: call 0x83dbd4 */ r_esp -= 4; W32(r_esp, 0x7b9110u); f_0083dbd4();
    /* 007b9110: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b9113: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9115: je 0x7b9149 */ if (fZ) goto L_007b9149;
L_007b9117:; BB(0x007b9117);
    /* 007b9117: mov ebx, edi */ r_ebx = r_edi;
L_007b9119:; BB(0x007b9119);
    /* 007b9119: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b911b: je 0x7b9149 */ if (fZ) goto L_007b9149;
L_007b911d:; BB(0x007b911d);
    /* 007b911d: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 007b9123: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007b9126: jae 0x7b9149 */ if (!fC) goto L_007b9149;
L_007b9128:; BB(0x007b9128);
    /* 007b9128: mov ecx, 0xaad660 */ r_ecx = 0xaad660u;
    /* 007b912d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b912f: je 0x7b913d */ if (fZ) goto L_007b913d;
L_007b9131:; BB(0x007b9131);
    /* 007b9131: cmp esi, dword ptr [ecx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9133: je 0x7b918f */ if (fZ) goto L_007b918f;
L_007b9135:; BB(0x007b9135);
    /* 007b9135: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b9138: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007b913b: jne 0x7b9131 */ if (!fZ) goto L_007b9131;
L_007b913d:; BB(0x007b913d);
    /* 007b913d: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 007b913f: add dword ptr [0xaae15c], 1 */ { u32 ad = (u32)(0xaae15cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007b9146: mov dword ptr [ecx + 4], ebp */ W32((u32)(r_ecx+0x4u), r_ebp);
L_007b9149:; BB(0x007b9149);
    /* 007b9149: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 007b914d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007b9150: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007b9153: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9155: jne 0x7b8fa6 */ if (!fZ) goto L_007b8fa6;
L_007b915b:; BB(0x007b915b);
    /* 007b915b: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 007b915f: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
L_007b9163:; BB(0x007b9163);
    /* 007b9163: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b9168u); f_0082da80();
L_007b9168:; BB(0x007b9168);
    /* 007b9168: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b916a: jne 0x7b8e8c */ if (!fZ) goto L_007b8e8c;
L_007b9170:; BB(0x007b9170);
    /* 007b9170: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 007b9174: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007b9178:; BB(0x007b9178);
    /* 007b9178: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007b917b: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 007b917e: jne 0x7b8e0d */ if (!fZ) goto L_007b8e0d;
L_007b9184:; BB(0x007b9184);
    /* 007b9184: add esp, 0x240 */ {  u32 a = r_esp; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b918a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b918b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b918c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b918d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b918e: ret  */ FN_RET(0x007b8d90); r_esp += 4; return;
L_007b918f:; BB(0x007b918f);
    /* 007b918f: cmp ebp, dword ptr [ecx + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9192: je 0x7b9149 */ if (fZ) goto L_007b9149;
L_007b9194:; BB(0x007b9194);
    /* 007b9194: jmp 0x7b9135 */ goto L_007b9135;
L_007b9196:; BB(0x007b9196);
    /* 007b9196: lea ecx, [esp + 0xf8] */ r_ecx = (u32)(r_esp+0xf8u);
    /* 007b919d: lea edx, [esp + 0x164] */ r_edx = (u32)(r_esp+0x164u);
    /* 007b91a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b91a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b91a6: call 0x83d2fc */ r_esp -= 4; W32(r_esp, 0x7b91abu); f_0083d2fc();
    /* 007b91ab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b91ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b91b0: je 0x7b9149 */ if (fZ) goto L_007b9149;
L_007b91b2:; BB(0x007b91b2);
    /* 007b91b2: mov ebx, edi */ r_ebx = r_edi;
    /* 007b91b4: jmp 0x7b9119 */ goto L_007b9119;
L_007b91b9:; BB(0x007b91b9);
    /* 007b91b9: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 007b91bc: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 007b91bf: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 007b91c2: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 007b91c5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007b91c7: fstp dword ptr [esp + 0x174] */ W_F32((u32)(r_esp+0x174u), ST(0)); FPOP();
    /* 007b91ce: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b91d0: fstp dword ptr [esp + 0x17c] */ W_F32((u32)(r_esp+0x17cu), ST(0)); FPOP();
    /* 007b91d7: fchs  */ ST(0) = -ST(0);
    /* 007b91d9: fst dword ptr [esp + 0x180] */ W_F32((u32)(r_esp+0x180u), ST(0));
    /* 007b91e0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b91e2: fchs  */ ST(0) = -ST(0);
    /* 007b91e4: mov dword ptr [esp + 0x188], ecx */ W32((u32)(r_esp+0x188u), r_ecx);
    /* 007b91eb: mov dword ptr [esp + 0x178], 0 */ W32((u32)(r_esp+0x178u), 0x0u);
    /* 007b91f6: mov dword ptr [esp + 0x184], 0x42480000 */ W32((u32)(r_esp+0x184u), 0x42480000u);
    /* 007b9201: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b9203: fst dword ptr [esp + 0x18c] */ W_F32((u32)(r_esp+0x18cu), ST(0));
    /* 007b920a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b920c: fst dword ptr [esp + 0x194] */ W_F32((u32)(r_esp+0x194u), ST(0));
    /* 007b9213: fst dword ptr [esp + 0x1a0] */ W_F32((u32)(r_esp+0x1a0u), ST(0));
    /* 007b921a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b921c: fst dword ptr [esp + 0x1b0] */ W_F32((u32)(r_esp+0x1b0u), ST(0));
    /* 007b9223: fstp dword ptr [esp + 0x1bc] */ W_F32((u32)(r_esp+0x1bcu), ST(0)); FPOP();
    /* 007b922a: fst dword ptr [esp + 0x1c4] */ W_F32((u32)(r_esp+0x1c4u), ST(0));
    /* 007b9231: fstp dword ptr [esp + 0x1d0] */ W_F32((u32)(r_esp+0x1d0u), ST(0)); FPOP();
    /* 007b9238: mov dword ptr [esp + 0x190], 0x42480000 */ W32((u32)(r_esp+0x190u), 0x42480000u);
    /* 007b9243: mov dword ptr [esp + 0x198], edx */ W32((u32)(r_esp+0x198u), r_edx);
    /* 007b924a: mov dword ptr [esp + 0x19c], 0x42480000 */ W32((u32)(r_esp+0x19cu), 0x42480000u);
    /* 007b9255: mov dword ptr [esp + 0x1a4], edx */ W32((u32)(r_esp+0x1a4u), r_edx);
    /* 007b925c: mov dword ptr [esp + 0x1a8], 0x42480000 */ W32((u32)(r_esp+0x1a8u), 0x42480000u);
    /* 007b9267: mov dword ptr [esp + 0x1ac], ecx */ W32((u32)(r_esp+0x1acu), r_ecx);
    /* 007b926e: mov dword ptr [esp + 0x1b4], 0xc2480000 */ W32((u32)(r_esp+0x1b4u), 0xc2480000u);
    /* 007b9279: mov dword ptr [esp + 0x1b8], ecx */ W32((u32)(r_esp+0x1b8u), r_ecx);
    /* 007b9280: mov dword ptr [esp + 0x1c0], 0xc2480000 */ W32((u32)(r_esp+0x1c0u), 0xc2480000u);
    /* 007b928b: mov dword ptr [esp + 0x1c8], edx */ W32((u32)(r_esp+0x1c8u), r_edx);
    /* 007b9292: mov dword ptr [esp + 0x1cc], 0xc2480000 */ W32((u32)(r_esp+0x1ccu), 0xc2480000u);
    /* 007b929d: mov dword ptr [esp + 0x1d4], edx */ W32((u32)(r_esp+0x1d4u), r_edx);
    /* 007b92a4: mov dword ptr [esp + 0x1d8], 0xc2480000 */ W32((u32)(r_esp+0x1d8u), 0xc2480000u);
    /* 007b92af: mov dword ptr [esp + 0x1dc], ecx */ W32((u32)(r_esp+0x1dcu), r_ecx);
    /* 007b92b6: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b92bb: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b92c0u); f_0082d990();
    /* 007b92c0: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 007b92c4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b92c6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b92cbu); f_0082d8bc();
    /* 007b92cb: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 007b92cf: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 007b92d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b92d5: mov esi, eax */ r_esi = r_eax;
L_007b92d7:; BB(0x007b92d7);
    /* 007b92d7: lea edx, [esp + 0x180] */ r_edx = (u32)(r_esp+0x180u);
    /* 007b92de: lea edi, [edx + esi] */ r_edi = (u32)(r_edx+r_esi);
    /* 007b92e1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b92e2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b92e3: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b92e8u); f_0083a610();
    /* 007b92e8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b92eb: lea edx, [esp + 0x174] */ r_edx = (u32)(r_esp+0x174u);
    /* 007b92f2: mov ecx, edi */ r_ecx = r_edi;
    /* 007b92f4: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b92f9u); f_0082ebac();
    /* 007b92f9: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b92fc: cmp esi, 0x60 */ {  u32 a = r_esi; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b92ff: jl 0x7b92d7 */ if ((fS!=fO)) goto L_007b92d7;
L_007b9301:; BB(0x007b9301);
    /* 007b9301: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 007b9305: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 007b9309: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b930eu); f_0082da80();
    /* 007b930e: mov edx, dword ptr [esp + 0x180] */ r_edx = R32((u32)(r_esp+0x180u));
    /* 007b9315: mov ecx, dword ptr [esp + 0x184] */ r_ecx = R32((u32)(r_esp+0x184u));
    /* 007b931c: mov dword ptr [esp + 0x1e0], edx */ W32((u32)(r_esp+0x1e0u), r_edx);
    /* 007b9323: mov edx, dword ptr [esp + 0x188] */ r_edx = R32((u32)(r_esp+0x188u));
    /* 007b932a: mov dword ptr [esp + 0x1e4], ecx */ W32((u32)(r_esp+0x1e4u), r_ecx);
    /* 007b9331: mov dword ptr [esp + 0x1e8], edx */ W32((u32)(r_esp+0x1e8u), r_edx);
    /* 007b9338: mov edx, dword ptr [esp + 0x18c] */ r_edx = R32((u32)(r_esp+0x18cu));
    /* 007b933f: mov dword ptr [esp + 0x1ec], edx */ W32((u32)(r_esp+0x1ecu), r_edx);
    /* 007b9346: mov edx, dword ptr [esp + 0x190] */ r_edx = R32((u32)(r_esp+0x190u));
    /* 007b934d: mov dword ptr [esp + 0x1f0], edx */ W32((u32)(r_esp+0x1f0u), r_edx);
    /* 007b9354: mov edx, dword ptr [esp + 0x194] */ r_edx = R32((u32)(r_esp+0x194u));
    /* 007b935b: mov dword ptr [esp + 0x1f4], edx */ W32((u32)(r_esp+0x1f4u), r_edx);
    /* 007b9362: mov edx, dword ptr [esp + 0x198] */ r_edx = R32((u32)(r_esp+0x198u));
    /* 007b9369: mov dword ptr [esp + 0x1f8], edx */ W32((u32)(r_esp+0x1f8u), r_edx);
    /* 007b9370: mov edx, dword ptr [esp + 0x19c] */ r_edx = R32((u32)(r_esp+0x19cu));
    /* 007b9377: mov dword ptr [esp + 0x1fc], edx */ W32((u32)(r_esp+0x1fcu), r_edx);
    /* 007b937e: mov edx, dword ptr [esp + 0x1a0] */ r_edx = R32((u32)(r_esp+0x1a0u));
    /* 007b9385: mov dword ptr [esp + 0x200], edx */ W32((u32)(r_esp+0x200u), r_edx);
    /* 007b938c: mov edx, dword ptr [esp + 0x1a4] */ r_edx = R32((u32)(r_esp+0x1a4u));
    /* 007b9393: mov dword ptr [esp + 0x204], edx */ W32((u32)(r_esp+0x204u), r_edx);
    /* 007b939a: mov edx, dword ptr [esp + 0x1a8] */ r_edx = R32((u32)(r_esp+0x1a8u));
    /* 007b93a1: mov dword ptr [esp + 0x208], edx */ W32((u32)(r_esp+0x208u), r_edx);
    /* 007b93a8: mov edx, dword ptr [esp + 0x1ac] */ r_edx = R32((u32)(r_esp+0x1acu));
    /* 007b93af: mov dword ptr [esp + 0x20c], edx */ W32((u32)(r_esp+0x20cu), r_edx);
    /* 007b93b6: mov edx, dword ptr [esp + 0x1b0] */ r_edx = R32((u32)(r_esp+0x1b0u));
    /* 007b93bd: mov dword ptr [esp + 0x210], edx */ W32((u32)(r_esp+0x210u), r_edx);
    /* 007b93c4: mov edx, dword ptr [esp + 0x1b4] */ r_edx = R32((u32)(r_esp+0x1b4u));
    /* 007b93cb: mov dword ptr [esp + 0x214], edx */ W32((u32)(r_esp+0x214u), r_edx);
    /* 007b93d2: mov edx, dword ptr [esp + 0x1b8] */ r_edx = R32((u32)(r_esp+0x1b8u));
    /* 007b93d9: mov dword ptr [esp + 0x218], edx */ W32((u32)(r_esp+0x218u), r_edx);
    /* 007b93e0: mov edx, dword ptr [esp + 0x1bc] */ r_edx = R32((u32)(r_esp+0x1bcu));
    /* 007b93e7: mov dword ptr [esp + 0x21c], edx */ W32((u32)(r_esp+0x21cu), r_edx);
    /* 007b93ee: mov edx, dword ptr [esp + 0x1c0] */ r_edx = R32((u32)(r_esp+0x1c0u));
    /* 007b93f5: mov dword ptr [esp + 0x220], edx */ W32((u32)(r_esp+0x220u), r_edx);
    /* 007b93fc: mov edx, dword ptr [esp + 0x1c4] */ r_edx = R32((u32)(r_esp+0x1c4u));
    /* 007b9403: mov dword ptr [esp + 0x224], edx */ W32((u32)(r_esp+0x224u), r_edx);
    /* 007b940a: mov edx, dword ptr [esp + 0x1c8] */ r_edx = R32((u32)(r_esp+0x1c8u));
    /* 007b9411: mov dword ptr [esp + 0x228], edx */ W32((u32)(r_esp+0x228u), r_edx);
    /* 007b9418: mov edx, dword ptr [esp + 0x1cc] */ r_edx = R32((u32)(r_esp+0x1ccu));
    /* 007b941f: mov dword ptr [esp + 0x22c], edx */ W32((u32)(r_esp+0x22cu), r_edx);
    /* 007b9426: mov edx, dword ptr [esp + 0x1d0] */ r_edx = R32((u32)(r_esp+0x1d0u));
    /* 007b942d: mov dword ptr [esp + 0x230], edx */ W32((u32)(r_esp+0x230u), r_edx);
    /* 007b9434: mov edx, dword ptr [esp + 0x1d4] */ r_edx = R32((u32)(r_esp+0x1d4u));
    /* 007b943b: mov dword ptr [esp + 0x234], edx */ W32((u32)(r_esp+0x234u), r_edx);
    /* 007b9442: mov edx, dword ptr [esp + 0x1d8] */ r_edx = R32((u32)(r_esp+0x1d8u));
    /* 007b9449: mov dword ptr [esp + 0x238], edx */ W32((u32)(r_esp+0x238u), r_edx);
    /* 007b9450: mov edx, dword ptr [esp + 0x1dc] */ r_edx = R32((u32)(r_esp+0x1dcu));
    /* 007b9457: mov dword ptr [esp + 0x23c], edx */ W32((u32)(r_esp+0x23cu), r_edx);
    /* 007b945e: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 007b9462: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b9465: je 0x7b948b */ if (fZ) goto L_007b948b;
L_007b9467:; BB(0x007b9467);
    /* 007b9467: lea ecx, [esp + 0x1e0] */ r_ecx = (u32)(r_esp+0x1e0u);
    /* 007b946e: lea edx, [esp + 0x7c] */ r_edx = (u32)(r_esp+0x7cu);
    /* 007b9472: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b9473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b9474: call 0x83d2fc */ r_esp -= 4; W32(r_esp, 0x7b9479u); f_0083d2fc();
    /* 007b9479: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b947c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b947e: je 0x7b9119 */ if (fZ) goto L_007b9119;
L_007b9484:; BB(0x007b9484);
    /* 007b9484: mov ebx, edi */ r_ebx = r_edi;
    /* 007b9486: jmp 0x7b9119 */ goto L_007b9119;
L_007b948b:; BB(0x007b948b);
    /* 007b948b: lea ecx, [esp + 0xf8] */ r_ecx = (u32)(r_esp+0xf8u);
    /* 007b9492: lea edx, [esp + 0x1e0] */ r_edx = (u32)(r_esp+0x1e0u);
    /* 007b9499: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b949a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b949b: call 0x844540 */ r_esp -= 4; W32(r_esp, 0x7b94a0u); f_00844540();
    /* 007b94a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b94a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b94a5: je 0x7b9119 */ if (fZ) goto L_007b9119;
L_007b94ab:; BB(0x007b94ab);
    /* 007b94ab: mov ebx, edi */ r_ebx = r_edi;
    /* 007b94ad: jmp 0x7b9119 */ goto L_007b9119;
L_007b94b2:; BB(0x007b94b2);
    /* 007b94b2: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 007b94b5: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 007b94b8: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 007b94bb: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 007b94be: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007b94c0: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 007b94c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b94c9: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 007b94d0: fchs  */ ST(0) = -ST(0);
    /* 007b94d2: fst dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0));
    /* 007b94d9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b94db: fchs  */ ST(0) = -ST(0);
    /* 007b94dd: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b94e2: mov dword ptr [esp + 0x90], 0 */ W32((u32)(r_esp+0x90u), 0x0u);
    /* 007b94ed: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 007b94f4: mov dword ptr [esp + 0x9c], 0x42480000 */ W32((u32)(r_esp+0x9cu), 0x42480000u);
    /* 007b94ff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b9501: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 007b9508: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b950a: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 007b9511: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 007b9518: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b951a: fst dword ptr [esp + 0xc8] */ W_F32((u32)(r_esp+0xc8u), ST(0));
    /* 007b9521: fstp dword ptr [esp + 0xd4] */ W_F32((u32)(r_esp+0xd4u), ST(0)); FPOP();
    /* 007b9528: fst dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0));
    /* 007b952f: fstp dword ptr [esp + 0xe8] */ W_F32((u32)(r_esp+0xe8u), ST(0)); FPOP();
    /* 007b9536: mov dword ptr [esp + 0xa8], 0x42480000 */ W32((u32)(r_esp+0xa8u), 0x42480000u);
    /* 007b9541: mov dword ptr [esp + 0xb0], eax */ W32((u32)(r_esp+0xb0u), r_eax);
    /* 007b9548: mov dword ptr [esp + 0xb4], 0x42480000 */ W32((u32)(r_esp+0xb4u), 0x42480000u);
    /* 007b9553: mov dword ptr [esp + 0xbc], eax */ W32((u32)(r_esp+0xbcu), r_eax);
    /* 007b955a: mov dword ptr [esp + 0xc0], 0x42480000 */ W32((u32)(r_esp+0xc0u), 0x42480000u);
    /* 007b9565: mov dword ptr [esp + 0xc4], edx */ W32((u32)(r_esp+0xc4u), r_edx);
    /* 007b956c: mov dword ptr [esp + 0xcc], 0xc2480000 */ W32((u32)(r_esp+0xccu), 0xc2480000u);
    /* 007b9577: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 007b957e: mov dword ptr [esp + 0xd8], 0xc2480000 */ W32((u32)(r_esp+0xd8u), 0xc2480000u);
    /* 007b9589: mov dword ptr [esp + 0xe0], eax */ W32((u32)(r_esp+0xe0u), r_eax);
    /* 007b9590: mov dword ptr [esp + 0xe4], 0xc2480000 */ W32((u32)(r_esp+0xe4u), 0xc2480000u);
    /* 007b959b: mov dword ptr [esp + 0xec], eax */ W32((u32)(r_esp+0xecu), r_eax);
    /* 007b95a2: mov dword ptr [esp + 0xf0], 0xc2480000 */ W32((u32)(r_esp+0xf0u), 0xc2480000u);
    /* 007b95ad: mov dword ptr [esp + 0xf4], edx */ W32((u32)(r_esp+0xf4u), r_edx);
    /* 007b95b4: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b95b9u); f_0082d990();
    /* 007b95b9: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007b95bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b95bf: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b95c4u); f_0082d8bc();
    /* 007b95c4: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 007b95c8: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 007b95cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b95ce: mov edi, eax */ r_edi = r_eax;
L_007b95d0:; BB(0x007b95d0);
    /* 007b95d0: lea edx, [esp + 0x98] */ r_edx = (u32)(r_esp+0x98u);
    /* 007b95d7: lea ebx, [edx + edi] */ r_ebx = (u32)(r_edx+r_edi);
    /* 007b95da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b95db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b95dc: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x7b95e1u); f_0083a610();
    /* 007b95e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b95e4: lea edx, [esp + 0x8c] */ r_edx = (u32)(r_esp+0x8cu);
    /* 007b95eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b95ed: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7b95f2u); f_0082ebac();
    /* 007b95f2: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007b95f5: cmp edi, 0x60 */ {  u32 a = r_edi; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b95f8: jl 0x7b95d0 */ if ((fS!=fO)) goto L_007b95d0;
L_007b95fa:; BB(0x007b95fa);
    /* 007b95fa: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 007b95fe: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 007b9602: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7b9607u); f_0082da80();
    /* 007b9607: mov eax, dword ptr [esp + 0x98] */ r_eax = R32((u32)(r_esp+0x98u));
    /* 007b960e: mov edx, dword ptr [esp + 0x9c] */ r_edx = R32((u32)(r_esp+0x9cu));
    /* 007b9615: mov ecx, dword ptr [esp + 0xa0] */ r_ecx = R32((u32)(r_esp+0xa0u));
    /* 007b961c: mov dword ptr [esp + 0xf8], eax */ W32((u32)(r_esp+0xf8u), r_eax);
    /* 007b9623: mov eax, dword ptr [esp + 0xa4] */ r_eax = R32((u32)(r_esp+0xa4u));
    /* 007b962a: mov dword ptr [esp + 0xfc], edx */ W32((u32)(r_esp+0xfcu), r_edx);
    /* 007b9631: mov dword ptr [esp + 0x100], ecx */ W32((u32)(r_esp+0x100u), r_ecx);
    /* 007b9638: mov dword ptr [esp + 0x104], eax */ W32((u32)(r_esp+0x104u), r_eax);
    /* 007b963f: mov eax, dword ptr [esp + 0xa8] */ r_eax = R32((u32)(r_esp+0xa8u));
    /* 007b9646: mov dword ptr [esp + 0x108], eax */ W32((u32)(r_esp+0x108u), r_eax);
    /* 007b964d: mov eax, dword ptr [esp + 0xac] */ r_eax = R32((u32)(r_esp+0xacu));
    /* 007b9654: mov dword ptr [esp + 0x10c], eax */ W32((u32)(r_esp+0x10cu), r_eax);
    /* 007b965b: mov eax, dword ptr [esp + 0xb0] */ r_eax = R32((u32)(r_esp+0xb0u));
    /* 007b9662: mov dword ptr [esp + 0x110], eax */ W32((u32)(r_esp+0x110u), r_eax);
    /* 007b9669: mov eax, dword ptr [esp + 0xb4] */ r_eax = R32((u32)(r_esp+0xb4u));
    /* 007b9670: mov dword ptr [esp + 0x114], eax */ W32((u32)(r_esp+0x114u), r_eax);
    /* 007b9677: mov eax, dword ptr [esp + 0xb8] */ r_eax = R32((u32)(r_esp+0xb8u));
    /* 007b967e: mov dword ptr [esp + 0x118], eax */ W32((u32)(r_esp+0x118u), r_eax);
    /* 007b9685: mov eax, dword ptr [esp + 0xbc] */ r_eax = R32((u32)(r_esp+0xbcu));
    /* 007b968c: mov dword ptr [esp + 0x11c], eax */ W32((u32)(r_esp+0x11cu), r_eax);
    /* 007b9693: mov eax, dword ptr [esp + 0xc0] */ r_eax = R32((u32)(r_esp+0xc0u));
    /* 007b969a: mov dword ptr [esp + 0x120], eax */ W32((u32)(r_esp+0x120u), r_eax);
    /* 007b96a1: mov eax, dword ptr [esp + 0xc4] */ r_eax = R32((u32)(r_esp+0xc4u));
    /* 007b96a8: mov dword ptr [esp + 0x124], eax */ W32((u32)(r_esp+0x124u), r_eax);
    /* 007b96af: mov eax, dword ptr [esp + 0xc8] */ r_eax = R32((u32)(r_esp+0xc8u));
    /* 007b96b6: mov dword ptr [esp + 0x128], eax */ W32((u32)(r_esp+0x128u), r_eax);
    /* 007b96bd: mov eax, dword ptr [esp + 0xcc] */ r_eax = R32((u32)(r_esp+0xccu));
    /* 007b96c4: mov dword ptr [esp + 0x12c], eax */ W32((u32)(r_esp+0x12cu), r_eax);
    /* 007b96cb: mov eax, dword ptr [esp + 0xd0] */ r_eax = R32((u32)(r_esp+0xd0u));
    /* 007b96d2: mov dword ptr [esp + 0x130], eax */ W32((u32)(r_esp+0x130u), r_eax);
    /* 007b96d9: mov eax, dword ptr [esp + 0xd4] */ r_eax = R32((u32)(r_esp+0xd4u));
    /* 007b96e0: mov dword ptr [esp + 0x134], eax */ W32((u32)(r_esp+0x134u), r_eax);
    /* 007b96e7: mov eax, dword ptr [esp + 0xd8] */ r_eax = R32((u32)(r_esp+0xd8u));
    /* 007b96ee: mov dword ptr [esp + 0x138], eax */ W32((u32)(r_esp+0x138u), r_eax);
    /* 007b96f5: mov eax, dword ptr [esp + 0xdc] */ r_eax = R32((u32)(r_esp+0xdcu));
    /* 007b96fc: mov dword ptr [esp + 0x13c], eax */ W32((u32)(r_esp+0x13cu), r_eax);
    /* 007b9703: mov eax, dword ptr [esp + 0xe0] */ r_eax = R32((u32)(r_esp+0xe0u));
    /* 007b970a: mov dword ptr [esp + 0x140], eax */ W32((u32)(r_esp+0x140u), r_eax);
    /* 007b9711: mov eax, dword ptr [esp + 0xe4] */ r_eax = R32((u32)(r_esp+0xe4u));
    /* 007b9718: mov dword ptr [esp + 0x144], eax */ W32((u32)(r_esp+0x144u), r_eax);
    /* 007b971f: mov eax, dword ptr [esp + 0xe8] */ r_eax = R32((u32)(r_esp+0xe8u));
    /* 007b9726: mov dword ptr [esp + 0x148], eax */ W32((u32)(r_esp+0x148u), r_eax);
    /* 007b972d: mov eax, dword ptr [esp + 0xec] */ r_eax = R32((u32)(r_esp+0xecu));
    /* 007b9734: mov dword ptr [esp + 0x14c], eax */ W32((u32)(r_esp+0x14cu), r_eax);
    /* 007b973b: mov eax, dword ptr [esp + 0xf0] */ r_eax = R32((u32)(r_esp+0xf0u));
    /* 007b9742: mov dword ptr [esp + 0x150], eax */ W32((u32)(r_esp+0x150u), r_eax);
    /* 007b9749: mov eax, dword ptr [esp + 0xf4] */ r_eax = R32((u32)(r_esp+0xf4u));
    /* 007b9750: mov dword ptr [esp + 0x154], eax */ W32((u32)(r_esp+0x154u), r_eax);
    /* 007b9757: jmp 0x7b8e69 */ goto L_007b8e69;
L_007b975c:; BB(0x007b975c);
    /* 007b975c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b975e: add esp, 0x240 */ {  u32 a = r_esp; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b9764: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b9765: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b9766: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b9767: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b9768: ret  */ FN_RET(0x007b8d90); r_esp += 4; return;
}

