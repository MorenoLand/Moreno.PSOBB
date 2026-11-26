#include "protos.h"

void f_005381c0(void)
{
    FN_ENTER(0x005381c0);
    /* 005381c0: rol byte ptr [ebp + 0x168e0ff6], 0xfe */ { u32 ad = (u32)(r_ebp+0x168e0ff6u); u32 c = (30u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    UNSUP(0x005381c7, "falls out of decoded code");
}

void f_005382d8(void) /* sub_5382D8 */
{
    FN_ENTER(0x005382d8);
    /* 005382d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005382d9: mov ebx, esp */ r_ebx = r_esp;
    /* 005382db: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 005382de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005382df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005382e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005382e1: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005382e4: mov esi, ecx */ r_esi = r_ecx;
    /* 005382e6: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 005382e9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005382ec: je 0x538965 */ if (fZ) goto L_00538965;
L_005382f2:; BB(0x005382f2);
    /* 005382f2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005382f5: je 0x538865 */ if (fZ) goto L_00538865;
L_005382fb:; BB(0x005382fb);
    /* 005382fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005382fd: jne 0x5388c7 */ if (!fZ) goto L_005388c7;
L_00538303:; BB(0x00538303);
    /* 00538303: mov ecx, esi */ r_ecx = r_esi;
    /* 00538305: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53830au); f_007aa094();
    /* 0053830a: mov ecx, esi */ r_ecx = r_esi;
    /* 0053830c: call 0x537e00 */ r_esp -= 4; W32(r_esp, 0x538311u); f_00537e00();
    /* 00538311: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00538316: mov ecx, esi */ r_ecx = r_esi;
    /* 00538318: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x53831du); f_00520ea0();
    /* 0053831d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053831f: je 0x53832f */ if (fZ) goto L_0053832f;
L_00538321:; BB(0x00538321);
    /* 00538321: mov ecx, esi */ r_ecx = r_esi;
    /* 00538323: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x538328u); f_005213d8();
    /* 00538328: mov ecx, esi */ r_ecx = r_esi;
    /* 0053832a: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x53832fu); f_00521410();
L_0053832f:; BB(0x0053832f);
    /* 0053832f: mov eax, dword ptr [esi + 0x4cc] */ r_eax = R32((u32)(r_esi+0x4ccu));
    /* 00538335: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538337: je 0x53873c */ if (fZ) goto L_0053873c;
L_0053833d:; BB(0x0053833d);
    /* 0053833d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538340: je 0x53879f */ if (fZ) goto L_0053879f;
L_00538346:; BB(0x00538346);
    /* 00538346: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538349: jne 0x53884f */ if (!fZ) goto L_0053884f;
L_0053834f:; BB(0x0053834f);
    /* 0053834f: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x538354u); f_00520e6c();
    /* 00538354: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538356: jne 0x538534 */ if (!fZ) goto L_00538534;
L_0053835c:; BB(0x0053835c);
    /* 0053835c: fld dword ptr [0x922ecc] */ FPUSH(R_F32((u32)(0x922eccu)));
    /* 00538362: fadd dword ptr [esi + 0x4d8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4d8u));
    /* 00538368: fcom dword ptr [0x922ec8] */ fx_compare(ST(0), R_F32((u32)(0x922ec8u))); 
    /* 0053836e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00538370: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00538371: jb 0x538511 */ if (fC) goto L_00538511;
L_00538377:; BB(0x00538377);
    /* 00538377: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00538379: fld dword ptr [0x922ed4] */ FPUSH(R_F32((u32)(0x922ed4u)));
    /* 0053837f: mov eax, dword ptr [esi + 0x4c8] */ r_eax = R32((u32)(r_esi+0x4c8u));
    /* 00538385: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00538389: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053838c: mov dword ptr [esi + 0x4d8], 0 */ W32((u32)(r_esi+0x4d8u), 0x0u);
    /* 00538396: mov dword ptr [esi + 0x4c8], eax */ W32((u32)(r_esi+0x4c8u), r_eax);
    /* 0053839c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053839f: jl 0x538505 */ if ((fS!=fO)) goto L_00538505;
L_005383a5:; BB(0x005383a5);
    /* 005383a5: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 005383ab: fcomp dword ptr [0x922ec4] */ fx_compare(ST(0), R_F32((u32)(0x922ec4u))); FPOP();
    /* 005383b1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005383b3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005383b4: jbe 0x538505 */ if ((fC||fZ)) goto L_00538505;
L_005383ba:; BB(0x005383ba);
    /* 005383ba: mov eax, dword ptr [esi + 0x3fc] */ r_eax = R32((u32)(r_esi+0x3fcu));
    /* 005383c0: mov edx, dword ptr [esi + eax*4 + 0x420] */ r_edx = R32((u32)(r_esi+r_eax*4+0x420u));
    /* 005383c7: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005383ca: jne 0x538505 */ if (!fZ) goto L_00538505;
L_005383d0:; BB(0x005383d0);
    /* 005383d0: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 005383d5: mov ecx, 0xaaa */ r_ecx = 0xaaau;
    /* 005383da: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5383dfu); f_0082ddd8();
    /* 005383df: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 005383e3: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 005383e6: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5383ebu); f_0082dcbc();
    /* 005383eb: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 005383ef: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 005383f2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5383f7u); f_0082ddd8();
    /* 005383f7: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 005383fc: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005383fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00538400: jle 0x5389db */ if ((fZ||fS!=fO)) goto L_005389db;
L_00538406:; BB(0x00538406);
    /* 00538406: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0053840a: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 0053840e: mov edi, eax */ r_edi = r_eax;
    /* 00538410: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
L_00538414:; BB(0x00538414);
    /* 00538414: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0053841b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053841c: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x538421u); f_00520f3c();
    /* 00538421: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00538422: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538424: je 0x5384be */ if (fZ) goto L_005384be;
L_0053842a:; BB(0x0053842a);
    /* 0053842a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0053842d: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 00538430: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00538433: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00538436: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0053843a: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 0053843d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00538441: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00538445: lea edx, [edx + 0x300] */ r_edx = (u32)(r_edx+0x300u);
    /* 0053844b: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0053844f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x538454u); f_0082f9c4();
    /* 00538454: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0053845c: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0053845f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00538460: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x538465u); f_007828e4();
    /* 00538465: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00538469: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053846c: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00538470: fcomp dword ptr [0x922f4c] */ fx_compare(ST(0), R_F32((u32)(0x922f4cu))); FPOP();
    /* 00538476: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00538478: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00538479: jae 0x5384be */ if (!fC) goto L_005384be;
L_0053847b:; BB(0x0053847b);
    /* 0053847b: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0053847f: fcomp dword ptr [esp + 0x4c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4cu))); FPOP();
    /* 00538483: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00538485: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00538486: jbe 0x5384be */ if ((fC||fZ)) goto L_005384be;
L_00538488:; BB(0x00538488);
    /* 00538488: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0053848b: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 0053848f: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00538493: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 00538497: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00538499: fcomp dword ptr [esp + 0x48] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x48u))); FPOP();
    /* 0053849d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053849f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005384a0: jbe 0x5384be */ if ((fC||fZ)) goto L_005384be;
L_005384a2:; BB(0x005384a2);
    /* 005384a2: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 005384a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005384a9: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 005384ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005384ae: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x5384b3u); f_00780d3c();
    /* 005384b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005384b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005384b8: je 0x5388d3 */ if (fZ) goto L_005388d3;
L_005384be:; BB(0x005384be);
    /* 005384be: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005384c1: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005384c3: jl 0x538414 */ if ((fS!=fO)) goto L_00538414;
L_005384c9:; BB(0x005384c9);
    /* 005384c9: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 005384cd: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_005384d1:; BB(0x005384d1);
    /* 005384d1: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005384d7: je 0x538505 */ if (fZ) goto L_00538505;
L_005384d9:; BB(0x005384d9);
    /* 005384d9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005384da: mov ecx, esi */ r_ecx = r_esi;
    /* 005384dc: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x5384e1u); f_00520fcc();
    /* 005384e1: mov dword ptr [esi + 0x4c8], 0 */ W32((u32)(r_esi+0x4c8u), 0x0u);
    /* 005384eb: mov ecx, esi */ r_ecx = r_esi;
    /* 005384ed: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5384f2u); f_005213d8();
    /* 005384f2: mov ecx, esi */ r_ecx = r_esi;
    /* 005384f4: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5384f9u); f_00521410();
    /* 005384f9: mov dword ptr [esi + 0x4cc], 3 */ W32((u32)(r_esi+0x4ccu), 0x3u);
    /* 00538503: jmp 0x538517 */ goto L_00538517;
L_00538505:; BB(0x00538505);
    /* 00538505: mov dword ptr [esi + 0x4cc], 0 */ W32((u32)(r_esi+0x4ccu), 0x0u);
    /* 0053850f: jmp 0x538517 */ goto L_00538517;
L_00538511:; BB(0x00538511);
    /* 00538511: fstp dword ptr [esi + 0x4d8] */ W_F32((u32)(r_esi+0x4d8u), ST(0)); FPOP();
L_00538517:; BB(0x00538517);
    /* 00538517: push 0x3e8f5c29 */ { u32 v = 0x3e8f5c29u; r_esp -= 4; W32(r_esp, v); }
    /* 0053851c: push dword ptr [esi + 0x4e8] */ { u32 v = R32((u32)(r_esi+0x4e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00538522: mov ecx, esi */ r_ecx = r_esi;
    /* 00538524: push dword ptr [esi + 0x4e0] */ { u32 v = R32((u32)(r_esi+0x4e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053852a: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x53852fu); f_005209d4();
    /* 0053852f: jmp 0x53884f */ goto L_0053884f;
L_00538534:; BB(0x00538534);
    /* 00538534: fld dword ptr [0x922ed4] */ FPUSH(R_F32((u32)(0x922ed4u)));
    /* 0053853a: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0053853e: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 00538543: mov ecx, 0xaaa */ r_ecx = 0xaaau;
    /* 00538548: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x53854du); f_0082ddd8();
    /* 0053854d: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00538551: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00538554: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x538559u); f_0082dcbc();
    /* 00538559: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0053855d: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00538560: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x538565u); f_0082ddd8();
    /* 00538565: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0053856a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0053856c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0053856e: jle 0x5389e2 */ if ((fZ||fS!=fO)) goto L_005389e2;
L_00538574:; BB(0x00538574);
    /* 00538574: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00538578: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 0053857c: mov edi, eax */ r_edi = r_eax;
    /* 0053857e: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
L_00538582:; BB(0x00538582);
    /* 00538582: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00538589: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053858a: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x53858fu); f_00520f3c();
    /* 0053858f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00538590: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538592: je 0x538630 */ if (fZ) goto L_00538630;
L_00538598:; BB(0x00538598);
    /* 00538598: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0053859c: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 0053859f: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005385a3: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 005385a6: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005385aa: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 005385ad: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 005385b1: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 005385b5: lea edx, [edx + 0x300] */ r_edx = (u32)(r_edx+0x300u);
    /* 005385bb: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 005385bf: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5385c4u); f_0082f9c4();
    /* 005385c4: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005385cc: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005385d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005385d1: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x5385d6u); f_007828e4();
    /* 005385d6: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005385da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005385dd: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005385e1: fcomp dword ptr [0x922f4c] */ fx_compare(ST(0), R_F32((u32)(0x922f4cu))); FPOP();
    /* 005385e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005385e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005385ea: jae 0x538630 */ if (!fC) goto L_00538630;
L_005385ec:; BB(0x005385ec);
    /* 005385ec: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005385f0: fcomp dword ptr [esp + 0x48] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x48u))); FPOP();
    /* 005385f4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005385f6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005385f7: jbe 0x538630 */ if ((fC||fZ)) goto L_00538630;
L_005385f9:; BB(0x005385f9);
    /* 005385f9: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005385fd: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 00538601: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00538605: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 00538609: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0053860b: fcomp dword ptr [esp + 0x4c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4cu))); FPOP();
    /* 0053860f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00538611: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00538612: jbe 0x538630 */ if ((fC||fZ)) goto L_00538630;
L_00538614:; BB(0x00538614);
    /* 00538614: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 0053861a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053861b: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 0053861f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538620: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x538625u); f_00780d3c();
    /* 00538625: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00538628: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053862a: je 0x5388e8 */ if (fZ) goto L_005388e8;
L_00538630:; BB(0x00538630);
    /* 00538630: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00538633: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00538635: jl 0x538582 */ if ((fS!=fO)) goto L_00538582;
L_0053863b:; BB(0x0053863b);
    /* 0053863b: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0053863f: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_00538643:; BB(0x00538643);
    /* 00538643: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538649: je 0x538670 */ if (fZ) goto L_00538670;
L_0053864b:; BB(0x0053864b);
    /* 0053864b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053864c: mov ecx, esi */ r_ecx = r_esi;
    /* 0053864e: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x538653u); f_00520fcc();
    /* 00538653: mov ecx, esi */ r_ecx = r_esi;
    /* 00538655: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x53865au); f_005213d8();
    /* 0053865a: mov ecx, esi */ r_ecx = r_esi;
    /* 0053865c: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x538661u); f_00521410();
    /* 00538661: mov dword ptr [esi + 0x4cc], 3 */ W32((u32)(r_esi+0x4ccu), 0x3u);
    /* 0053866b: jmp 0x53884f */ goto L_0053884f;
L_00538670:; BB(0x00538670);
    /* 00538670: mov ecx, esi */ r_ecx = r_esi;
    /* 00538672: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x538677u); f_00520f04();
    /* 00538677: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538679: je 0x5386c0 */ if (fZ) goto L_005386c0;
L_0053867b:; BB(0x0053867b);
    /* 0053867b: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 00538681: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 00538687: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00538689: fmul qword ptr [0x922e40] */ ST(0) = ST(0) * R_F64((u32)(0x922e40u));
    /* 0053868f: fdiv qword ptr [0x922e38] */ ST(0) = ST(0) / R_F64((u32)(0x922e38u));
    /* 00538695: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00538699: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0053869e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005386a3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005386a7: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005386ab: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 005386af: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005386b3: movzx ebp, word ptr [esp + 0x28] */ r_ebp = (u32)R16((u32)(r_esp+0x28u));
    /* 005386b8: mov dword ptr [esi + 0x4d0], ebp */ W32((u32)(r_esi+0x4d0u), r_ebp);
    /* 005386be: jmp 0x5386c9 */ goto L_005386c9;
L_005386c0:; BB(0x005386c0);
    /* 005386c0: mov ebp, dword ptr [esi + 0x60] */ r_ebp = R32((u32)(r_esi+0x60u));
    /* 005386c3: mov dword ptr [esi + 0x4d0], ebp */ W32((u32)(r_esi+0x4d0u), r_ebp);
L_005386c9:; BB(0x005386c9);
    /* 005386c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005386ca: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005386cd: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x5386d2u); f_007a900c();
    /* 005386d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005386d5: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005386da: jle 0x538705 */ if ((fZ||fS!=fO)) goto L_00538705;
L_005386dc:; BB(0x005386dc);
    /* 005386dc: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 005386df: add eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005386e4: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 005386e7: mov eax, dword ptr [esi + 0x4c4] */ r_eax = R32((u32)(r_esi+0x4c4u));
    /* 005386ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005386ef: jl 0x5388fd */ if ((fS!=fO)) goto L_005388fd;
L_005386f5:; BB(0x005386f5);
    /* 005386f5: add eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005386fa: mov dword ptr [esi + 0x4c4], eax */ W32((u32)(r_esi+0x4c4u), r_eax);
    /* 00538700: jmp 0x53884f */ goto L_0053884f;
L_00538705:; BB(0x00538705);
    /* 00538705: cmp eax, 0xffffff00 */ {  u32 a = r_eax; u32 b = 0xffffff00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053870a: jge 0x538734 */ if ((fS==fO)) goto L_00538734;
L_0053870c:; BB(0x0053870c);
    /* 0053870c: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 0053870f: add eax, 0xffffff00 */ {  u32 a = r_eax; u32 b = 0xffffff00u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00538714: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 00538717: mov eax, dword ptr [esi + 0x4c4] */ r_eax = R32((u32)(r_esi+0x4c4u));
    /* 0053871d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0053871f: jle 0x53890c */ if ((fZ||fS!=fO)) goto L_0053890c;
L_00538725:; BB(0x00538725);
    /* 00538725: mov dword ptr [esi + 0x4c4], 0 */ W32((u32)(r_esi+0x4c4u), 0x0u);
    /* 0053872f: jmp 0x53884f */ goto L_0053884f;
L_00538734:; BB(0x00538734);
    /* 00538734: mov dword ptr [esi + 0x60], ebp */ W32((u32)(r_esi+0x60u), r_ebp);
    /* 00538737: jmp 0x53884f */ goto L_0053884f;
L_0053873c:; BB(0x0053873c);
    /* 0053873c: mov ecx, esi */ r_ecx = r_esi;
    /* 0053873e: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x538743u); f_00520f04();
    /* 00538743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538745: je 0x53878c */ if (fZ) goto L_0053878c;
L_00538747:; BB(0x00538747);
    /* 00538747: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 0053874d: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 00538753: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00538755: fmul qword ptr [0x922e40] */ ST(0) = ST(0) * R_F64((u32)(0x922e40u));
    /* 0053875b: fdiv qword ptr [0x922e38] */ ST(0) = ST(0) / R_F64((u32)(0x922e38u));
    /* 00538761: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00538765: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0053876a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053876f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00538773: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00538777: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0053877b: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0053877f: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00538784: mov dword ptr [esi + 0x4d0], eax */ W32((u32)(r_esi+0x4d0u), r_eax);
    /* 0053878a: jmp 0x538795 */ goto L_00538795;
L_0053878c:; BB(0x0053878c);
    /* 0053878c: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 0053878f: mov dword ptr [esi + 0x4d0], eax */ W32((u32)(r_esi+0x4d0u), r_eax);
L_00538795:; BB(0x00538795);
    /* 00538795: mov dword ptr [esi + 0x4cc], 1 */ W32((u32)(r_esi+0x4ccu), 0x1u);
L_0053879f:; BB(0x0053879f);
    /* 0053879f: mov ebp, dword ptr [esi + 0x4d0] */ r_ebp = R32((u32)(r_esi+0x4d0u));
    /* 005387a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005387a6: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005387a9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005387ab: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x5387b0u); f_007a900c();
    /* 005387b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005387b3: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005387b8: jle 0x5387e0 */ if ((fZ||fS!=fO)) goto L_005387e0;
L_005387ba:; BB(0x005387ba);
    /* 005387ba: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 005387bd: add eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005387c2: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 005387c5: mov eax, dword ptr [esi + 0x4c4] */ r_eax = R32((u32)(r_esi+0x4c4u));
    /* 005387cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005387cd: jl 0x53891c */ if ((fS!=fO)) goto L_0053891c;
L_005387d3:; BB(0x005387d3);
    /* 005387d3: add eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005387d8: mov dword ptr [esi + 0x4c4], eax */ W32((u32)(r_esi+0x4c4u), r_eax);
    /* 005387de: jmp 0x538814 */ goto L_00538814;
L_005387e0:; BB(0x005387e0);
    /* 005387e0: cmp eax, 0xffffff00 */ {  u32 a = r_eax; u32 b = 0xffffff00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005387e5: jge 0x53880c */ if ((fS==fO)) goto L_0053880c;
L_005387e7:; BB(0x005387e7);
    /* 005387e7: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 005387ea: add eax, 0xffffff00 */ {  u32 a = r_eax; u32 b = 0xffffff00u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005387ef: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 005387f2: mov eax, dword ptr [esi + 0x4c4] */ r_eax = R32((u32)(r_esi+0x4c4u));
    /* 005387f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005387fa: jle 0x53892b */ if ((fZ||fS!=fO)) goto L_0053892b;
L_00538800:; BB(0x00538800);
    /* 00538800: mov dword ptr [esi + 0x4c4], 0 */ W32((u32)(r_esi+0x4c4u), 0x0u);
    /* 0053880a: jmp 0x538814 */ goto L_00538814;
L_0053880c:; BB(0x0053880c);
    /* 0053880c: mov dword ptr [esi + 0x60], ebp */ W32((u32)(r_esi+0x60u), r_ebp);
    /* 0053880f: mov edi, 1 */ r_edi = 0x1u;
L_00538814:; BB(0x00538814);
    /* 00538814: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538816: je 0x538845 */ if (fZ) goto L_00538845;
L_00538818:; BB(0x00538818);
    /* 00538818: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0053881b: mov dword ptr [esi + 0x4cc], 2 */ W32((u32)(r_esi+0x4ccu), 0x2u);
    /* 00538825: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x53882au); f_0082dcbc();
    /* 0053882a: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0053882d: fstp dword ptr [esi + 0x4e0] */ W_F32((u32)(r_esi+0x4e0u), ST(0)); FPOP();
    /* 00538833: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x538838u); f_0082ddd8();
    /* 00538838: fstp dword ptr [esi + 0x4e8] */ W_F32((u32)(r_esi+0x4e8u), ST(0)); FPOP();
    /* 0053883e: mov ecx, esi */ r_ecx = r_esi;
    /* 00538840: call 0x5394d0 */ r_esp -= 4; W32(r_esp, 0x538845u); f_005394d0();
L_00538845:; BB(0x00538845);
    /* 00538845: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00538847: mov ecx, esi */ r_ecx = r_esi;
    /* 00538849: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x53884fu); call_ind(t); }
L_0053884f:; BB(0x0053884f);
    /* 0053884f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00538851: mov ecx, esi */ r_ecx = r_esi;
    /* 00538853: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x538859u); call_ind(t); }
    /* 00538859: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053885c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053885d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053885e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053885f: mov esp, ebx */ r_esp = r_ebx;
    /* 00538861: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00538862: ret 4 */ FN_RET(0x005382d8); r_esp += 8; return;
L_00538865:; BB(0x00538865);
    /* 00538865: mov ecx, esi */ r_ecx = r_esi;
    /* 00538867: call 0x53781c */ r_esp -= 4; W32(r_esp, 0x53886cu); f_0053781c();
    /* 0053886c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053886e: jne 0x5388c7 */ if (!fZ) goto L_005388c7;
L_00538870:; BB(0x00538870);
    /* 00538870: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 00538876: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538878: je 0x538950 */ if (fZ) goto L_00538950;
L_0053887e:; BB(0x0053887e);
    /* 0053887e: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 00538884: fcomp dword ptr [0x922ec0] */ fx_compare(ST(0), R_F32((u32)(0x922ec0u))); FPOP();
    /* 0053888a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053888c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053888d: jbe 0x5388be */ if ((fC||fZ)) goto L_005388be;
L_0053888f:; BB(0x0053888f);
    /* 0053888f: mov eax, dword ptr [esi + 0x4cc] */ r_eax = R32((u32)(r_esi+0x4ccu));
    /* 00538895: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538898: je 0x53893b */ if (fZ) goto L_0053893b;
L_0053889e:; BB(0x0053889e);
    /* 0053889e: mov ecx, esi */ r_ecx = r_esi;
    /* 005388a0: call 0x537e44 */ r_esp -= 4; W32(r_esp, 0x5388a5u); f_00537e44();
    /* 005388a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005388a7: je 0x5388c7 */ if (fZ) goto L_005388c7;
L_005388a9:; BB(0x005388a9);
    /* 005388a9: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005388ab: mov ecx, esi */ r_ecx = r_esi;
    /* 005388ad: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5388b2u); f_0051f62c();
    /* 005388b2: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005388b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005388b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005388b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005388b8: mov esp, ebx */ r_esp = r_ebx;
    /* 005388ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005388bb: ret 4 */ FN_RET(0x005382d8); r_esp += 8; return;
L_005388be:; BB(0x005388be);
    /* 005388be: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005388c0: mov ecx, esi */ r_ecx = r_esi;
    /* 005388c2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5388c7u); f_0051f62c();
L_005388c7:; BB(0x005388c7);
    /* 005388c7: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005388ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005388cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005388cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005388cd: mov esp, ebx */ r_esp = r_ebx;
    /* 005388cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005388d0: ret 4 */ FN_RET(0x005382d8); r_esp += 8; return;
L_005388d3:; BB(0x005388d3);
    /* 005388d3: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 005388d7: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 005388db: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 005388df: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 005388e3: jmp 0x5384be */ goto L_005384be;
L_005388e8:; BB(0x005388e8);
    /* 005388e8: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005388ec: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 005388f0: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 005388f4: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 005388f8: jmp 0x538630 */ goto L_00538630;
L_005388fd:; BB(0x005388fd);
    /* 005388fd: mov dword ptr [esi + 0x4c4], 0 */ W32((u32)(r_esi+0x4c4u), 0x0u);
    /* 00538907: jmp 0x53884f */ goto L_0053884f;
L_0053890c:; BB(0x0053890c);
    /* 0053890c: add eax, 0xffffff00 */ {  u32 a = r_eax; u32 b = 0xffffff00u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00538911: mov dword ptr [esi + 0x4c4], eax */ W32((u32)(r_esi+0x4c4u), r_eax);
    /* 00538917: jmp 0x53884f */ goto L_0053884f;
L_0053891c:; BB(0x0053891c);
    /* 0053891c: mov dword ptr [esi + 0x4c4], 0 */ W32((u32)(r_esi+0x4c4u), 0x0u);
    /* 00538926: jmp 0x538814 */ goto L_00538814;
L_0053892b:; BB(0x0053892b);
    /* 0053892b: add eax, 0xffffff00 */ {  u32 a = r_eax; u32 b = 0xffffff00u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00538930: mov dword ptr [esi + 0x4c4], eax */ W32((u32)(r_esi+0x4c4u), r_eax);
    /* 00538936: jmp 0x538814 */ goto L_00538814;
L_0053893b:; BB(0x0053893b);
    /* 0053893b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053893d: mov ecx, esi */ r_ecx = r_esi;
    /* 0053893f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x538944u); f_0051f62c();
    /* 00538944: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00538947: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538948: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00538949: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053894a: mov esp, ebx */ r_esp = r_ebx;
    /* 0053894c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053894d: ret 4 */ FN_RET(0x005382d8); r_esp += 8; return;
L_00538950:; BB(0x00538950);
    /* 00538950: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00538952: mov ecx, esi */ r_ecx = r_esi;
    /* 00538954: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x538959u); f_0051f62c();
    /* 00538959: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053895c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053895d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053895e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053895f: mov esp, ebx */ r_esp = r_ebx;
    /* 00538961: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00538962: ret 4 */ FN_RET(0x005382d8); r_esp += 8; return;
L_00538965:; BB(0x00538965);
    /* 00538965: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00538967: mov eax, 1 */ r_eax = 0x1u;
    /* 0053896c: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00538973: mov ecx, esi */ r_ecx = r_esi;
    /* 00538975: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x53897bu); call_ind(t); }
    /* 0053897b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053897d: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 00538983: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00538986: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0053898c: mov ecx, esi */ r_ecx = r_esi;
    /* 0053898e: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x538993u); f_0051f664();
    /* 00538993: mov dword ptr [esi + 0x4d8], 0 */ W32((u32)(r_esi+0x4d8u), 0x0u);
    /* 0053899d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053899f: mov dword ptr [esi + 0x4c8], eax */ W32((u32)(r_esi+0x4c8u), r_eax);
    /* 005389a5: mov dword ptr [esi + 0x4d0], eax */ W32((u32)(r_esi+0x4d0u), r_eax);
    /* 005389ab: mov dword ptr [esi + 0x4e0], 0 */ W32((u32)(r_esi+0x4e0u), 0x0u);
    /* 005389b5: mov dword ptr [esi + 0x4cc], eax */ W32((u32)(r_esi+0x4ccu), r_eax);
    /* 005389bb: mov dword ptr [esi + 0x4e4], 0 */ W32((u32)(r_esi+0x4e4u), 0x0u);
    /* 005389c5: mov dword ptr [esi + 0x4e8], 0 */ W32((u32)(r_esi+0x4e8u), 0x0u);
    /* 005389cf: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005389d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005389d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005389d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005389d5: mov esp, ebx */ r_esp = r_ebx;
    /* 005389d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005389d8: ret 4 */ FN_RET(0x005382d8); r_esp += 8; return;
L_005389db:; BB(0x005389db);
    /* 005389db: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005389dd: jmp 0x5384d1 */ goto L_005384d1;
L_005389e2:; BB(0x005389e2);
    /* 005389e2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005389e4: jmp 0x538643 */ goto L_00538643;
}

void f_00538496(void)
{
    FN_ENTER(0x00538496);
    goto L_00538496;
L_00538414:; BB(0x00538414);
    /* 00538414: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0053841b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053841c: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x538421u); f_00520f3c();
    /* 00538421: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00538422: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538424: je 0x5384be */ if (fZ) goto L_005384be;
L_0053842a:; BB(0x0053842a);
    /* 0053842a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0053842d: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 00538430: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00538433: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00538436: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0053843a: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 0053843d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00538441: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00538445: lea edx, [edx + 0x300] */ r_edx = (u32)(r_edx+0x300u);
    /* 0053844b: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0053844f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x538454u); f_0082f9c4();
    /* 00538454: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0053845c: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0053845f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00538460: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x538465u); f_007828e4();
    /* 00538465: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00538469: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053846c: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00538470: fcomp dword ptr [0x922f4c] */ fx_compare(ST(0), R_F32((u32)(0x922f4cu))); FPOP();
    /* 00538476: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00538478: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00538479: jae 0x5384be */ if (!fC) goto L_005384be;
L_0053847b:; BB(0x0053847b);
    /* 0053847b: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0053847f: fcomp dword ptr [esp + 0x4c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4cu))); FPOP();
    /* 00538483: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00538485: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00538486: jbe 0x5384be */ if ((fC||fZ)) goto L_005384be;
L_00538488:; BB(0x00538488);
    /* 00538488: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0053848b: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 0053848f: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00538493: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
L_00538496:; BB(0x00538496);
    /* 00538496: xor dh, bl */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00538497: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00538498: rcr eax, 0x5c */ { u32 c = (28u) & 31; u32 a = r_eax; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_eax = a; }
    /* 00538499: fcomp dword ptr [esp + 0x48] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x48u))); FPOP();
    /* 0053849b: and al, 0x48 */ {  u32 a = (u8)r_eax; u32 b = 0x48u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0053849d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053849f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005384a0: jbe 0x5384be */ if ((fC||fZ)) goto L_005384be;
L_005384a2:; BB(0x005384a2);
    /* 005384a2: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 005384a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005384a9: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 005384ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005384ae: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x5384b3u); f_00780d3c();
    /* 005384b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005384b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005384b8: je 0x5388d3 */ if (fZ) goto L_005388d3;
L_005384be:; BB(0x005384be);
    /* 005384be: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005384c1: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005384c3: jl 0x538414 */ if ((fS!=fO)) goto L_00538414;
L_005384c9:; BB(0x005384c9);
    /* 005384c9: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 005384cd: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 005384d1: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005384d7: je 0x538505 */ if (fZ) goto L_00538505;
L_005384d9:; BB(0x005384d9);
    /* 005384d9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005384da: mov ecx, esi */ r_ecx = r_esi;
    /* 005384dc: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x5384e1u); f_00520fcc();
    /* 005384e1: mov dword ptr [esi + 0x4c8], 0 */ W32((u32)(r_esi+0x4c8u), 0x0u);
    /* 005384eb: mov ecx, esi */ r_ecx = r_esi;
    /* 005384ed: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5384f2u); f_005213d8();
    /* 005384f2: mov ecx, esi */ r_ecx = r_esi;
    /* 005384f4: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5384f9u); f_00521410();
    /* 005384f9: mov dword ptr [esi + 0x4cc], 3 */ W32((u32)(r_esi+0x4ccu), 0x3u);
    /* 00538503: jmp 0x538517 */ goto L_00538517;
L_00538505:; BB(0x00538505);
    /* 00538505: mov dword ptr [esi + 0x4cc], 0 */ W32((u32)(r_esi+0x4ccu), 0x0u);
    /* 0053850f: jmp 0x538517 */ goto L_00538517;
L_00538517:; BB(0x00538517);
    /* 00538517: push 0x3e8f5c29 */ { u32 v = 0x3e8f5c29u; r_esp -= 4; W32(r_esp, v); }
    /* 0053851c: push dword ptr [esi + 0x4e8] */ { u32 v = R32((u32)(r_esi+0x4e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00538522: mov ecx, esi */ r_ecx = r_esi;
    /* 00538524: push dword ptr [esi + 0x4e0] */ { u32 v = R32((u32)(r_esi+0x4e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053852a: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x53852fu); f_005209d4();
    /* 0053852f: jmp 0x53884f */ goto L_0053884f;
L_0053884f:; BB(0x0053884f);
    /* 0053884f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00538851: mov ecx, esi */ r_ecx = r_esi;
    /* 00538853: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x538859u); call_ind(t); }
    /* 00538859: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053885c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053885d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053885e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053885f: mov esp, ebx */ r_esp = r_ebx;
    /* 00538861: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00538862: ret 4 */ FN_RET(0x00538496); r_esp += 8; return;
L_005388d3:; BB(0x005388d3);
    /* 005388d3: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 005388d7: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 005388db: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 005388df: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 005388e3: jmp 0x5384be */ goto L_005384be;
}

void f_005389ec(void) /* sub_5389EC */
{
    FN_ENTER(0x005389ec);
    /* 005389ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005389ed: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005389f0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005389f2: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005389f6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005389f9: je 0x538be6 */ if (fZ) goto L_00538be6;
L_005389ff:; BB(0x005389ff);
    /* 005389ff: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538a02: je 0x538bb6 */ if (fZ) goto L_00538bb6;
L_00538a08:; BB(0x00538a08);
    /* 00538a08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538a0a: jne 0x538b8b */ if (!fZ) goto L_00538b8b;
L_00538a10:; BB(0x00538a10);
    /* 00538a10: mov eax, dword ptr [ebp + 0x4c8] */ r_eax = R32((u32)(r_ebp+0x4c8u));
    /* 00538a16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538a18: jne 0x538a4b */ if (!fZ) goto L_00538a4b;
L_00538a1a:; BB(0x00538a1a);
    /* 00538a1a: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00538a1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00538a21: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x538a26u); f_00520ea0();
    /* 00538a26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538a28: je 0x538b6e */ if (fZ) goto L_00538b6e;
L_00538a2e:; BB(0x00538a2e);
    /* 00538a2e: mov dword ptr [ebp + 0x4c8], 1 */ W32((u32)(r_ebp+0x4c8u), 0x1u);
    /* 00538a38: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00538a3a: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x538a3fu); f_005213d8();
    /* 00538a3f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00538a41: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x538a46u); f_00521410();
    /* 00538a46: jmp 0x538b6e */ goto L_00538b6e;
L_00538a4b:; BB(0x00538a4b);
    /* 00538a4b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538a4e: jne 0x538b6e */ if (!fZ) goto L_00538b6e;
L_00538a54:; BB(0x00538a54);
    /* 00538a54: mov edx, dword ptr [ebp + 0x4cc] */ r_edx = R32((u32)(r_ebp+0x4ccu));
    /* 00538a5a: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00538a5d: jne 0x538a9f */ if (!fZ) goto L_00538a9f;
L_00538a5f:; BB(0x00538a5f);
    /* 00538a5f: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 00538a65: mov ecx, eax */ r_ecx = r_eax;
    /* 00538a67: shr ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00538a6a: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00538a6d: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00538a73: jl 0x538a89 */ if ((fS!=fO)) goto L_00538a89;
L_00538a75:; BB(0x00538a75);
    /* 00538a75: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 00538a7b: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00538a7e: mov dword ptr [ebp + 0x4cc], edx */ W32((u32)(r_ebp+0x4ccu), r_edx);
    /* 00538a84: mov ecx, 0xff */ r_ecx = 0xffu;
L_00538a89:; BB(0x00538a89);
    /* 00538a89: and eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00538a8e: mov edx, dword ptr [ebp + 0x4cc] */ r_edx = R32((u32)(r_ebp+0x4ccu));
    /* 00538a94: shl ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00538a97: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00538a99: mov dword ptr [ebp + 0x3cc], ecx */ W32((u32)(r_ebp+0x3ccu), r_ecx);
L_00538a9f:; BB(0x00538a9f);
    /* 00538a9f: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00538aa2: jne 0x538b06 */ if (!fZ) goto L_00538b06;
L_00538aa4:; BB(0x00538aa4);
    /* 00538aa4: fld dword ptr [0x922eb4] */ FPUSH(R_F32((u32)(0x922eb4u)));
    /* 00538aaa: fadd dword ptr [ebp + 0x4d8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4d8u));
    /* 00538ab0: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00538ab3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00538ab7: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00538abc: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00538ac1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00538ac5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00538ac9: fist dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0)));
    /* 00538acd: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00538ad0: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00538ad4: fstp dword ptr [ebp + 0x4d8] */ W_F32((u32)(r_ebp+0x4d8u), ST(0)); FPOP();
    /* 00538ada: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 00538ae0: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00538ae3: jl 0x538b00 */ if ((fS!=fO)) goto L_00538b00;
L_00538ae5:; BB(0x00538ae5);
    /* 00538ae5: mov edx, dword ptr [ebp + 0x4cc] */ r_edx = R32((u32)(r_ebp+0x4ccu));
    /* 00538aeb: mov dword ptr [ebp + 0x3d4], 0xc */ W32((u32)(r_ebp+0x3d4u), 0xcu);
    /* 00538af5: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00538af8: mov dword ptr [ebp + 0x4cc], edx */ W32((u32)(r_ebp+0x4ccu), r_edx);
    /* 00538afe: jmp 0x538b06 */ goto L_00538b06;
L_00538b00:; BB(0x00538b00);
    /* 00538b00: mov edx, dword ptr [ebp + 0x4cc] */ r_edx = R32((u32)(r_ebp+0x4ccu));
L_00538b06:; BB(0x00538b06);
    /* 00538b06: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00538b09: jne 0x538b44 */ if (!fZ) goto L_00538b44;
L_00538b0b:; BB(0x00538b0b);
    /* 00538b0b: movzx eax, byte ptr [ebp + 0x3d0] */ r_eax = (u32)R8((u32)(r_ebp+0x3d0u));
    /* 00538b12: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00538b15: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00538b1a: jl 0x538b2a */ if ((fS!=fO)) goto L_00538b2a;
L_00538b1c:; BB(0x00538b1c);
    /* 00538b1c: mov eax, 0xff */ r_eax = 0xffu;
    /* 00538b21: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00538b24: mov dword ptr [ebp + 0x4cc], edx */ W32((u32)(r_ebp+0x4ccu), r_edx);
L_00538b2a:; BB(0x00538b2a);
    /* 00538b2a: mov ecx, eax */ r_ecx = r_eax;
    /* 00538b2c: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00538b2f: or ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00538b35: mov edx, eax */ r_edx = r_eax;
    /* 00538b37: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00538b3a: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00538b3c: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00538b3e: mov dword ptr [ebp + 0x3d0], ecx */ W32((u32)(r_ebp+0x3d0u), r_ecx);
L_00538b44:; BB(0x00538b44);
    /* 00538b44: push 0x1e9 */ { u32 v = 0x1e9u; r_esp -= 4; W32(r_esp, v); }
    /* 00538b49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00538b4b: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x538b50u); f_007879b8();
    /* 00538b50: mov ecx, eax */ r_ecx = r_eax;
    /* 00538b52: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00538b55: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00538b57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00538b58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00538b59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00538b5a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538b5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538b5c: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x538b61u); f_008144b0();
    /* 00538b61: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00538b66: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x538b6bu); f_00814680();
    /* 00538b6b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00538b6e:; BB(0x00538b6e);
    /* 00538b6e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00538b71: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00538b73: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x538b79u); call_ind(t); }
    /* 00538b79: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00538b7c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00538b7e: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x538b84u); call_ind(t); }
    /* 00538b84: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00538b87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538b88: ret 4 */ FN_RET(0x005389ec); r_esp += 8; return;
L_00538b8b:; BB(0x00538b8b);
    /* 00538b8b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538b8e: jne 0x538bc4 */ if (!fZ) goto L_00538bc4;
L_00538b90:; BB(0x00538b90);
    /* 00538b90: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00538b93: mov dword ptr [ebp + 0x3cc], 0xffffffff */ W32((u32)(r_ebp+0x3ccu), 0xffffffffu);
    /* 00538b9d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00538b9f: mov dword ptr [ebp + 0x3d4], 0xc */ W32((u32)(r_ebp+0x3d4u), 0xcu);
    /* 00538ba9: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x538bafu); call_ind(t); }
    /* 00538baf: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00538bb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538bb3: ret 4 */ FN_RET(0x005389ec); r_esp += 8; return;
L_00538bb6:; BB(0x00538bb6);
    /* 00538bb6: mov eax, dword ptr [ebp + 0x4cc] */ r_eax = R32((u32)(r_ebp+0x4ccu));
    /* 00538bbc: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00538bbf: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538bc2: je 0x538bcb */ if (fZ) goto L_00538bcb;
L_00538bc4:; BB(0x00538bc4);
    /* 00538bc4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00538bc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538bc8: ret 4 */ FN_RET(0x005389ec); r_esp += 8; return;
L_00538bcb:; BB(0x00538bcb);
    /* 00538bcb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00538bcd: call 0x53781c */ r_esp -= 4; W32(r_esp, 0x538bd2u); f_0053781c();
    /* 00538bd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538bd4: jne 0x538bc4 */ if (!fZ) goto L_00538bc4;
L_00538bd6:; BB(0x00538bd6);
    /* 00538bd6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00538bd8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00538bda: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x538bdfu); f_0051f62c();
    /* 00538bdf: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00538be2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538be3: ret 4 */ FN_RET(0x005389ec); r_esp += 8; return;
L_00538be6:; BB(0x00538be6);
    /* 00538be6: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00538be9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00538beb: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00538bf2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00538bf4: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x538bfau); call_ind(t); }
    /* 00538bfa: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00538bfc: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 00538c02: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00538c05: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 00538c0b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00538c0d: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x538c12u); f_0051f664();
    /* 00538c12: mov dword ptr [ebp + 0x3cc], 0xffffff */ W32((u32)(r_ebp+0x3ccu), 0xffffffu);
    /* 00538c1c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00538c1e: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 00538c24: mov dword ptr [ebp + 0x4c8], eax */ W32((u32)(r_ebp+0x4c8u), r_eax);
    /* 00538c2a: mov dword ptr [ebp + 0x3d0], 0xff000000 */ W32((u32)(r_ebp+0x3d0u), 0xff000000u);
    /* 00538c34: mov dword ptr [ebp + 0x4cc], eax */ W32((u32)(r_ebp+0x4ccu), r_eax);
    /* 00538c3a: mov dword ptr [ebp + 0x4d8], 0 */ W32((u32)(r_ebp+0x4d8u), 0x0u);
    /* 00538c44: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00538c47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538c48: ret 4 */ FN_RET(0x005389ec); r_esp += 8; return;
}

void f_00538c4c(void) /* sub_538C4C */
{
    FN_ENTER(0x00538c4c);
    /* 00538c4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00538c4d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00538c4f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00538c53: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538c56: je 0x538c7a */ if (fZ) goto L_00538c7a;
L_00538c58:; BB(0x00538c58);
    /* 00538c58: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00538c5b: jne 0x538c76 */ if (!fZ) goto L_00538c76;
L_00538c5d:; BB(0x00538c5d);
    /* 00538c5d: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00538c62: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00538c64: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x538c69u); f_00520ea0();
    /* 00538c69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00538c6b: je 0x538c76 */ if (fZ) goto L_00538c76;
L_00538c6d:; BB(0x00538c6d);
    /* 00538c6d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00538c6f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00538c71: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x538c76u); f_0051f62c();
L_00538c76:; BB(0x00538c76);
    /* 00538c76: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00538c77: ret 4 */ FN_RET(0x00538c4c); r_esp += 8; return;
L_00538c7a:; BB(0x00538c7a);
    /* 00538c7a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00538c7c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00538c7e: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00538c85: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00538c87: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x538c8du); call_ind(t); }
    /* 00538c8d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00538c8f: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 00538c95: and eax, 0xfffffff9 */ {  u32 a = r_eax; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00538c98: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00538c9b: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 00538ca1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00538ca3: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x538ca8u); f_0051f664();
    /* 00538ca8: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 00538cab: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 00538cae: mov ecx, dword ptr [ebx + 0x58] */ r_ecx = R32((u32)(r_ebx+0x58u));
    /* 00538cb1: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 00538cb4: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 00538cb7: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
    /* 00538cba: mov dword ptr [ebx + 0x3cc], 0xffffffff */ W32((u32)(r_ebx+0x3ccu), 0xffffffffu);
    /* 00538cc4: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 00538cc7: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 00538cca: mov dword ptr [ebx + 0x4c], ecx */ W32((u32)(r_ebx+0x4cu), r_ecx);
    /* 00538ccd: mov dword ptr [ebx + 0x3d0], 0xff000000 */ W32((u32)(r_ebx+0x3d0u), 0xff000000u);
    /* 00538cd7: mov dword ptr [ebx + 0x300], eax */ W32((u32)(r_ebx+0x300u), r_eax);
    /* 00538cdd: mov eax, dword ptr [ebx + 0x3e0] */ r_eax = R32((u32)(r_ebx+0x3e0u));
    /* 00538ce3: mov dword ptr [ebx + 0x304], edx */ W32((u32)(r_ebx+0x304u), r_edx);
    /* 00538ce9: mov dword ptr [ebx + 0x3dc], 1 */ W32((u32)(r_ebx+0x3dcu), 0x1u);
    /* 00538cf3: mov dword ptr [ebx + 0x308], ecx */ W32((u32)(r_ebx+0x308u), r_ecx);
    /* 00538cf9: lea ecx, [ebx + 0x3e0] */ r_ecx = (u32)(r_ebx+0x3e0u);
    /* 00538cff: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x538d02u); call_ind(t); }
    /* 00538d02: mov dword ptr [ebx + 0x3fc], 1 */ W32((u32)(r_ebx+0x3fcu), 0x1u);
    /* 00538d0c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00538d0e: call 0x5394d0 */ r_esp -= 4; W32(r_esp, 0x538d13u); f_005394d0();
    /* 00538d13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00538d14: ret 4 */ FN_RET(0x00538c4c); r_esp += 8; return;
}

void f_00538d18(void) /* sub_538D18 */
{
    FN_ENTER(0x00538d18);
    /* 00538d18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00538d19: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00538d1b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00538d1f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538d22: je 0x538d7d */ if (fZ) goto L_00538d7d;
L_00538d24:; BB(0x00538d24);
    /* 00538d24: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538d27: je 0x538d5d */ if (fZ) goto L_00538d5d;
L_00538d29:; BB(0x00538d29);
    /* 00538d29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538d2b: jne 0x538d45 */ if (!fZ) goto L_00538d45;
L_00538d2d:; BB(0x00538d2d);
    /* 00538d2d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00538d2f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00538d31: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x538d37u); call_ind(t); }
    /* 00538d37: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00538d39: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00538d3b: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x538d41u); call_ind(t); }
    /* 00538d41: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00538d42: ret 4 */ FN_RET(0x00538d18); r_esp += 8; return;
L_00538d45:; BB(0x00538d45);
    /* 00538d45: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00538d48: jne 0x538d79 */ if (!fZ) goto L_00538d79;
L_00538d4a:; BB(0x00538d4a);
    /* 00538d4a: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 00538d50: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00538d53: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 00538d59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00538d5a: ret 4 */ FN_RET(0x00538d18); r_esp += 8; return;
L_00538d5d:; BB(0x00538d5d);
    /* 00538d5d: mov eax, dword ptr [ebx + 0x3e0] */ r_eax = R32((u32)(r_ebx+0x3e0u));
    /* 00538d63: lea ecx, [ebx + 0x3e0] */ r_ecx = (u32)(r_ebx+0x3e0u);
    /* 00538d69: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x538d6cu); call_ind(t); }
    /* 00538d6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00538d6e: je 0x538d79 */ if (fZ) goto L_00538d79;
L_00538d70:; BB(0x00538d70);
    /* 00538d70: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00538d72: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00538d74: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x538d79u); f_0051f62c();
L_00538d79:; BB(0x00538d79);
    /* 00538d79: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00538d7a: ret 4 */ FN_RET(0x00538d18); r_esp += 8; return;
L_00538d7d:; BB(0x00538d7d);
    /* 00538d7d: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00538d7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00538d81: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00538d88: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00538d8a: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x538d90u); call_ind(t); }
    /* 00538d90: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00538d92: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 00538d98: and eax, 0xfffffffa */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00538d9b: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00538d9e: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 00538da4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00538da6: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x538dabu); f_0051f664();
    /* 00538dab: lea ecx, [ebx + 0x3e0] */ r_ecx = (u32)(r_ebx+0x3e0u);
    /* 00538db1: call 0x512494 */ r_esp -= 4; W32(r_esp, 0x538db6u); f_00512494();
    /* 00538db6: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 00538db9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00538dba: call 0x578a20 */ r_esp -= 4; W32(r_esp, 0x538dbfu); f_00578a20();
    /* 00538dbf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00538dc0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00538dc2: call 0x5394d0 */ r_esp -= 4; W32(r_esp, 0x538dc7u); f_005394d0();
    /* 00538dc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00538dc8: ret 4 */ FN_RET(0x00538d18); r_esp += 8; return;
}

void f_00538dcc(void) /* sub_538DCC */
{
    FN_ENTER(0x00538dcc);
    /* 00538dcc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00538dcd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538dce: mov esi, ecx */ r_esi = r_ecx;
    /* 00538dd0: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 00538dd6: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00538dd8: jne 0x538e1b */ if (!fZ) goto L_00538e1b;
L_00538dda:; BB(0x00538dda);
    /* 00538dda: movsx ebp, word ptr [esi + 0x346] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x346u));
    /* 00538de1: movsx eax, word ptr [esi + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 00538de8: movsx ecx, word ptr [esi + 0x2bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x2bcu));
    /* 00538def: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00538df1: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00538df6: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538df8: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00538dfb: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00538dfd: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00538dff: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00538e01: jl 0x538e1b */ if ((fS!=fO)) goto L_00538e1b;
L_00538e03:; BB(0x00538e03);
    /* 00538e03: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00538e0a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00538e0d: je 0x538e22 */ if (fZ) goto L_00538e22;
L_00538e0f:; BB(0x00538e0f);
    /* 00538e0f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00538e11: mov ecx, esi */ r_ecx = r_esi;
    /* 00538e13: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x538e18u); f_0051f62c();
    /* 00538e18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538e19: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00538e1a: ret  */ FN_RET(0x00538dcc); r_esp += 4; return;
L_00538e1b:; BB(0x00538e1b);
    /* 00538e1b: mov ecx, esi */ r_ecx = r_esi;
    /* 00538e1d: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x538e22u); f_0051f81c();
L_00538e22:; BB(0x00538e22);
    /* 00538e22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538e23: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00538e24: ret  */ FN_RET(0x00538dcc); r_esp += 4; return;
}

void f_00538e28(void) /* sub_538E28 */
{
    FN_ENTER(0x00538e28);
    /* 00538e28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00538e29: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00538e2d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00538e30: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00538e32: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00538e34: lea edi, [eax + edx*4] */ r_edi = (u32)(r_eax+r_edx*4);
    /* 00538e37: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 00538e3a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00538e3c: mov eax, dword ptr [ecx + 0xa73540] */ r_eax = R32((u32)(r_ecx+0xa73540u));
    /* 00538e42: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00538e44: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00538e46: jne 0x538e61 */ if (!fZ) goto L_00538e61;
L_00538e48:; BB(0x00538e48);
    /* 00538e48: mov ecx, dword ptr [edi*4 + 0xa73544] */ r_ecx = R32((u32)(r_edi*4+0xa73544u));
    /* 00538e4f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x538e54u); f_00829cc8();
    /* 00538e54: push dword ptr [edi*4 + 0xa73540] */ { u32 v = R32((u32)(r_edi*4+0xa73540u)); r_esp -= 4; W32(r_esp, v); }
    /* 00538e5b: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x538e60u); f_0082e1e8();
    /* 00538e60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00538e61:; BB(0x00538e61);
    /* 00538e61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00538e62: ret  */ FN_RET(0x00538e28); r_esp += 4; return;
}

void f_00538e64(void) /* sub_538E64 */
{
    FN_ENTER(0x00538e64);
    /* 00538e64: mov edx, dword ptr [ecx + 0x3fc] */ r_edx = R32((u32)(r_ecx+0x3fcu));
    /* 00538e6a: mov eax, dword ptr [ecx + edx*4 + 0x420] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x420u));
    /* 00538e71: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00538e74: mov dword ptr [ecx + edx*4 + 0x420], eax */ W32((u32)(r_ecx+r_edx*4+0x420u), r_eax);
    /* 00538e7b: ret  */ FN_RET(0x00538e64); r_esp += 4; return;
}

void f_00538e7c(void) /* sub_538E7C */
{
    FN_ENTER(0x00538e7c);
    /* 00538e7c: push dword ptr [0xa735b0] */ { u32 v = R32((u32)(0xa735b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00538e82: push dword ptr [0xa735b8] */ { u32 v = R32((u32)(0xa735b8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00538e88: push dword ptr [0xa735bc] */ { u32 v = R32((u32)(0xa735bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00538e8e: call 0x520c98 */ r_esp -= 4; W32(r_esp, 0x538e93u); f_00520c98();
    /* 00538e93: ret  */ FN_RET(0x00538e7c); r_esp += 4; return;
}

void f_00538e94(void) /* sub_538E94 */
{
    FN_ENTER(0x00538e94);
    /* 00538e94: push dword ptr [0xa735b0] */ { u32 v = R32((u32)(0xa735b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00538e9a: push dword ptr [0xa735b4] */ { u32 v = R32((u32)(0xa735b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00538ea0: push dword ptr [0xa735bc] */ { u32 v = R32((u32)(0xa735bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00538ea6: call 0x520c98 */ r_esp -= 4; W32(r_esp, 0x538eabu); f_00520c98();
    /* 00538eab: ret  */ FN_RET(0x00538e94); r_esp += 4; return;
}

void f_00538ef4(void)
{
    FN_ENTER(0x00538ef4);
    /* 00538ef4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00538ef5: mov ebx, esp */ r_ebx = r_esp;
    /* 00538ef7: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00538efa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538efb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538efc: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 00538eff: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00538f03: mov ebp, esp */ r_ebp = r_esp;
    /* 00538f05: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00538f07: push 0x8d510c */ { u32 v = 0x8d510cu; r_esp -= 4; W32(r_esp, v); }
    /* 00538f0c: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00538f12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00538f13: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00538f1a: sub esp, 0xcc */ {  u32 a = r_esp; u32 b = 0xccu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00538f20: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00538f23: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00538f26: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 00538f29: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 00538f2c: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x538f31u); f_00520e6c();
    /* 00538f31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00538f33: je 0x538f4e */ if (fZ) goto L_00538f4e;
L_00538f35:; BB(0x00538f35);
    /* 00538f35: push 0x923060 */ { u32 v = 0x923060u; r_esp -= 4; W32(r_esp, v); }
    /* 00538f3a: push 0x9bcb54 */ { u32 v = 0x9bcb54u; r_esp -= 4; W32(r_esp, v); }
    /* 00538f3f: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x538f44u); f_0051f674();
    /* 00538f44: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00538f47: mov dword ptr [0xa735a8], eax */ W32((u32)(0xa735a8u), r_eax);
    /* 00538f4c: jmp 0x538f5e */ goto L_00538f5e;
L_00538f4e:; BB(0x00538f4e);
    /* 00538f4e: push 0x9bcb54 */ { u32 v = 0x9bcb54u; r_esp -= 4; W32(r_esp, v); }
    /* 00538f53: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x538f58u); f_0051f6b0();
    /* 00538f58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00538f59: mov dword ptr [0xa735a8], eax */ W32((u32)(0xa735a8u), r_eax);
L_00538f5e:; BB(0x00538f5e);
    /* 00538f5e: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 00538f64: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00538f67: mov dword ptr [0xa7359c], 0 */ W32((u32)(0xa7359cu), 0x0u);
    /* 00538f71: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00538f73: mov dword ptr [0xa735a0], 0 */ W32((u32)(0xa735a0u), 0x0u);
    /* 00538f7d: mov dword ptr [0xa735f8], edx */ W32((u32)(0xa735f8u), r_edx);
    /* 00538f83: mov dword ptr [0xa735f4], edx */ W32((u32)(0xa735f4u), r_edx);
    /* 00538f89: mov dword ptr [0xa735a4], 0 */ W32((u32)(0xa735a4u), 0x0u);
    /* 00538f93: mov dword ptr [0xa735f0], edx */ W32((u32)(0xa735f0u), r_edx);
    /* 00538f99: mov dword ptr [0xa735ec], edx */ W32((u32)(0xa735ecu), r_edx);
    /* 00538f9f: mov dword ptr [0xa735e8], edx */ W32((u32)(0xa735e8u), r_edx);
    /* 00538fa5: mov dword ptr [0xa735e4], edx */ W32((u32)(0xa735e4u), r_edx);
    /* 00538fab: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00538fae: push 0x880 */ { u32 v = 0x880u; r_esp -= 4; W32(r_esp, v); }
    /* 00538fb3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x538fb8u); f_008581c5();
    /* 00538fb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00538fb9: mov edi, dword ptr [0xa735a8] */ r_edi = R32((u32)(0xa735a8u));
    /* 00538fbf: mov dword ptr [0xa73524], 0x21 */ W32((u32)(0xa73524u), 0x21u);
    /* 00538fc9: mov dword ptr [0xa735e0], eax */ W32((u32)(0xa735e0u), r_eax);
    /* 00538fce: mov dword ptr [0xa73528], 0x31 */ W32((u32)(0xa73528u), 0x31u);
    /* 00538fd8: mov dword ptr [0xa73520], eax */ W32((u32)(0xa73520u), r_eax);
    /* 00538fdd: mov dword ptr [0xa73558], 0x38 */ W32((u32)(0xa73558u), 0x38u);
    /* 00538fe7: add eax, 0x440 */ {  u32 a = r_eax; u32 b = 0x440u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00538fec: mov dword ptr [0xa73554], eax */ W32((u32)(0xa73554u), r_eax);
    /* 00538ff1: mov dword ptr [0xa7355c], 0x48 */ W32((u32)(0xa7355cu), 0x48u);
    /* 00538ffb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00538ffd: mov dword ptr [0xa7352c], 3 */ W32((u32)(0xa7352cu), 0x3u);
    /* 00539007: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0053900a: mov dword ptr [0xa73530], 0x41a00000 */ W32((u32)(0xa73530u), 0x41a00000u);
    /* 00539014: mov dword ptr [0xa73534], 0x41f00000 */ W32((u32)(0xa73534u), 0x41f00000u);
    /* 0053901e: mov dword ptr [0xa73560], 4 */ W32((u32)(0xa73560u), 0x4u);
    /* 00539028: mov dword ptr [0xa73564], 0x41980000 */ W32((u32)(0xa73564u), 0x41980000u);
    /* 00539032: mov dword ptr [0xa73568], 0x41e80000 */ W32((u32)(0xa73568u), 0x41e80000u);
L_0053903c:; BB(0x0053903c);
    /* 0053903c: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053903f: mov edi, dword ptr [edi + 0x430] */ r_edi = R32((u32)(r_edi+0x430u));
    /* 00539045: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00539048: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053904a: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053904c: lea edx, [esi + eax*4] */ r_edx = (u32)(r_esi+r_eax*4);
    /* 0053904f: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00539052: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00539055: lea esi, [ecx + ecx + 0xa73520] */ r_esi = (u32)(r_ecx+r_ecx+0xa73520u);
    /* 0053905c: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0053905f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00539061: mov eax, dword ptr [eax*8 + 0x9bcaa4] */ r_eax = R32((u32)(r_eax*8+0x9bcaa4u));
    /* 00539068: mov edi, dword ptr [edi + eax*8 + 4] */ r_edi = R32((u32)(r_edi+r_eax*8+0x4u));
    /* 0053906c: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x539071u); f_0082fa9c();
    /* 00539071: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00539074: push dword ptr [eax*4 + 0xa73534] */ { u32 v = R32((u32)(r_eax*4+0xa73534u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053907b: mov ecx, edi */ r_ecx = r_edi;
    /* 0053907d: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x539082u); f_008304c8();
    /* 00539082: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00539085: mov eax, dword ptr [edi*4 + 0xa73520] */ r_eax = R32((u32)(r_edi*4+0xa73520u));
    /* 0053908c: mov edx, dword ptr [edi*4 + 0xa73524] */ r_edx = R32((u32)(r_edi*4+0xa73524u));
    /* 00539093: mov ecx, dword ptr [edi*4 + 0xa73528] */ r_ecx = R32((u32)(r_edi*4+0xa73528u));
    /* 0053909a: add esi, 0x28 */ {  u32 a = r_esi; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0053909d: mov dword ptr [0xa735c4], eax */ W32((u32)(0xa735c4u), r_eax);
    /* 005390a2: mov dword ptr [0xa735cc], edx */ W32((u32)(0xa735ccu), r_edx);
    /* 005390a8: mov dword ptr [0xa735c8], ecx */ W32((u32)(0xa735c8u), r_ecx);
    /* 005390ae: mov dword ptr [0xa735c0], esi */ W32((u32)(0xa735c0u), r_esi);
    /* 005390b4: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005390b9: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5390beu); f_0082d990();
    /* 005390be: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005390c1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_005390c3:; BB(0x005390c3);
    /* 005390c3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5390c8u); f_0082d7b0();
    /* 005390c8: mov ecx, edi */ r_ecx = r_edi;
    /* 005390ca: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x5390cfu); f_008305ec();
    /* 005390cf: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005390d1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005390d4: mov eax, dword ptr [0xa735cc] */ r_eax = R32((u32)(0xa735ccu));
    /* 005390d9: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005390db: jne 0x539195 */ if (!fZ) goto L_00539195;
L_005390e1:; BB(0x005390e1);
    /* 005390e1: mov eax, dword ptr [0xa735c0] */ r_eax = R32((u32)(0xa735c0u));
    /* 005390e6: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 005390ec: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005390ee: mov edx, dword ptr [0xa735c0] */ r_edx = R32((u32)(0xa735c0u));
    /* 005390f4: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 005390fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005390fc: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 00539103: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x539108u); f_00830aa0();
    /* 00539108: mov eax, dword ptr [0xa735c0] */ r_eax = R32((u32)(0xa735c0u));
    /* 0053910d: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 00539113: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00539116: fadd dword ptr [0x922f44] */ ST(0) = ST(0) + R_F32((u32)(0x922f44u));
    /* 0053911c: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0053911f: fadd dword ptr [0x922f40] */ ST(0) = ST(0) + R_F32((u32)(0x922f40u));
    /* 00539125: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00539127: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0053912a: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 0053912d: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x539132u); f_00831650();
    /* 00539132: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00539137: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x53913cu); f_0082d990();
    /* 0053913c: mov eax, dword ptr [0xa735c0] */ r_eax = R32((u32)(0xa735c0u));
    /* 00539141: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00539143: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00539146: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00539149: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053914c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053914e: fchs  */ ST(0) = -ST(0);
    /* 00539150: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00539153: fchs  */ ST(0) = -ST(0);
    /* 00539155: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00539159: fchs  */ ST(0) = -ST(0);
    /* 0053915b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0053915f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00539161: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x539166u); f_00830b74();
    /* 00539166: lea edx, [ebp - 0xd8] */ r_edx = (u32)(r_ebp+0xffffff28u);
    /* 0053916c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053916e: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x539173u); f_00831308();
    /* 00539173: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 00539179: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x53917eu); f_00831650();
    /* 0053917e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x539183u); f_0082da80();
    /* 00539183: lea edx, [ebp - 0xd8] */ r_edx = (u32)(r_ebp+0xffffff28u);
    /* 00539189: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053918b: call 0x83b410 */ r_esp -= 4; W32(r_esp, 0x539190u); f_0083b410();
    /* 00539190: mov eax, dword ptr [0xa735cc] */ r_eax = R32((u32)(0xa735ccu));
L_00539195:; BB(0x00539195);
    /* 00539195: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00539197: jl 0x5391b4 */ if ((fS!=fO)) goto L_005391b4;
L_00539199:; BB(0x00539199);
    /* 00539199: cmp esi, dword ptr [0xa735c8] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa735c8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053919f: jg 0x5391b4 */ if ((!fZ&&fS==fO)) goto L_005391b4;
L_005391a1:; BB(0x005391a1);
    /* 005391a1: mov ecx, dword ptr [0xa735c4] */ r_ecx = R32((u32)(0xa735c4u));
    /* 005391a7: lea eax, [ecx + 0x40] */ r_eax = (u32)(r_ecx+0x40u);
    /* 005391aa: mov dword ptr [0xa735c4], eax */ W32((u32)(0xa735c4u), r_eax);
    /* 005391af: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x5391b4u); f_00831650();
L_005391b4:; BB(0x005391b4);
    /* 005391b4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005391b7: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005391ba: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005391bc: jne 0x5391d0 */ if (!fZ) goto L_005391d0;
L_005391be:; BB(0x005391be);
    /* 005391be: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 005391c1: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005391c4: mov edx, esi */ r_edx = r_esi;
    /* 005391c6: call 0x5369e0 */ r_esp -= 4; W32(r_esp, 0x5391cbu); f_005369e0();
    /* 005391cb: mov esi, eax */ r_esi = r_eax;
    /* 005391cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005391d0:; BB(0x005391d0);
    /* 005391d0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5391d5u); f_0082da80();
    /* 005391d5: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 005391d8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005391da: jne 0x5390c3 */ if (!fZ) goto L_005390c3;
L_005391e0:; BB(0x005391e0);
    /* 005391e0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5391e5u); f_0082da80();
    /* 005391e5: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5391eau); f_0082faac();
    /* 005391ea: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005391ed: push dword ptr [eax*4 + 0xa73524] */ { u32 v = R32((u32)(r_eax*4+0xa73524u)); r_esp -= 4; W32(r_esp, v); }
    /* 005391f4: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005391f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005391f8: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5391fdu); f_0078e934();
    /* 005391fd: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00539200: push dword ptr [edx*4 + 0xa73528] */ { u32 v = R32((u32)(r_edx*4+0xa73528u)); r_esp -= 4; W32(r_esp, v); }
    /* 00539207: mov dword ptr [edx*4 + 0xa73538], eax */ W32((u32)(r_edx*4+0xa73538u), r_eax);
    /* 0053920e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00539211: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539212: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x539217u); f_0078e934();
    /* 00539217: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053921a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053921d: mov edi, dword ptr [0xa735a8] */ r_edi = R32((u32)(0xa735a8u));
    /* 00539223: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00539226: mov dword ptr [ecx*4 + 0xa7353c], eax */ W32((u32)(r_ecx*4+0xa7353cu), r_eax);
    /* 0053922d: mov esi, dword ptr [edi + 0x42c] */ r_esi = R32((u32)(r_edi+0x42cu));
    /* 00539233: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00539236: mov esi, dword ptr [esi + eax*8 + 0x18] */ r_esi = R32((u32)(r_esi+r_eax*8+0x18u));
    /* 0053923a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053923d: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00539240: mov dword ptr [ecx*4 + 0xa73540], esi */ W32((u32)(r_ecx*4+0xa73540u), r_esi);
    /* 00539247: mov esi, dword ptr [edi + 0x42c] */ r_esi = R32((u32)(r_edi+0x42cu));
    /* 0053924d: mov eax, dword ptr [esi + eax*8 + 0x1c] */ r_eax = R32((u32)(r_esi+r_eax*8+0x1cu));
    /* 00539251: mov dword ptr [ecx*4 + 0xa73544], eax */ W32((u32)(r_ecx*4+0xa73544u), r_eax);
    /* 00539258: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0053925b: jl 0x53903c */ if ((fS!=fO)) goto L_0053903c;
L_00539261:; BB(0x00539261);
    /* 00539261: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00539264: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00539266: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539267: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x53926cu); f_0078e934();
    /* 0053926c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053926f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00539271: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539272: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00539275: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00539278: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053927b: mov dword ptr [0xa735dc], edx */ W32((u32)(0xa735dcu), r_edx);
    /* 00539281: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x539286u); f_0078e934();
    /* 00539286: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00539289: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0053928c: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 00539296: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00539299: mov dword ptr [0xa735d8], edx */ W32((u32)(0xa735d8u), r_edx);
    /* 0053929f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005392a1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5392a6u); f_008581c5();
    /* 005392a6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005392a9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005392ac: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 005392b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005392b4: je 0x5394c3 */ if (fZ) goto L_005394c3;
L_005392ba:; BB(0x005392ba);
    /* 005392ba: mov dword ptr [ebp - 0x98], 1 */ W32((u32)(r_ebp+0xffffff68u), 0x1u);
    /* 005392c4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005392cb: mov eax, dword ptr [0xa735a8] */ r_eax = R32((u32)(0xa735a8u));
    /* 005392d0: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005392d3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005392d5: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 005392db: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005392de: call 0x52d584 */ r_esp -= 4; W32(r_esp, 0x5392e3u); f_0052d584();
    /* 005392e3: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 005392ed: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005392f0: mov dword ptr [0xa735d4], eax */ W32((u32)(0xa735d4u), r_eax);
    /* 005392f5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005392fc: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 00539306: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00539308: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x53930du); f_008581c5();
    /* 0053930d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00539310: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539313: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00539319: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053931b: je 0x5394b9 */ if (fZ) goto L_005394b9;
L_00539321:; BB(0x00539321);
    /* 00539321: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 0053932b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00539332: mov ecx, eax */ r_ecx = r_eax;
    /* 00539334: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00539336: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0053933b: push 0x41880000 */ { u32 v = 0x41880000u; r_esp -= 4; W32(r_esp, v); }
    /* 00539340: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 00539345: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x53934au); f_005795a0();
    /* 0053934a: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 00539354: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00539357: mov dword ptr [0xa735d0], eax */ W32((u32)(0xa735d0u), r_eax);
    /* 0053935c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00539363: mov ecx, dword ptr [0xa735a8] */ r_ecx = R32((u32)(0xa735a8u));
    /* 00539369: mov eax, dword ptr [0x9bcac4] */ r_eax = R32((u32)(0x9bcac4u));
    /* 0053936e: mov edx, dword ptr [ecx + 0x42c] */ r_edx = R32((u32)(r_ecx+0x42cu));
    /* 00539374: mov esi, 0x2e */ r_esi = 0x2eu;
    /* 00539379: mov edi, 0x45 */ r_edi = 0x45u;
    /* 0053937e: mov dword ptr [ebp - 0x88], esi */ W32((u32)(r_ebp+0xffffff78u), r_esi);
    /* 00539384: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 0053938b: mov dword ptr [ebp - 0x84], esi */ W32((u32)(r_ebp+0xffffff7cu), r_esi);
    /* 00539391: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 00539398: mov dword ptr [ebp - 0x80], edi */ W32((u32)(r_ebp+0xffffff80u), r_edi);
    /* 0053939b: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 005393a2: mov dword ptr [ebp - 0x7c], edi */ W32((u32)(r_ebp+0xffffff84u), r_edi);
    /* 005393a5: mov edi, dword ptr [ecx + 0x430] */ r_edi = R32((u32)(r_ecx+0x430u));
    /* 005393ab: lea esi, [ebp - 0x88] */ r_esi = (u32)(r_ebp+0xffffff78u);
    /* 005393b1: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 005393b4: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 005393bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005393bc: mov ecx, dword ptr [0xa735d0] */ r_ecx = R32((u32)(0xa735d0u));
    /* 005393c2: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 005393c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005393ca: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 005393d1: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005393d8: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005393df: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005393e6: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005393ed: mov dword ptr [ebp - 0x78], 0x41200000 */ W32((u32)(r_ebp+0xffffff88u), 0x41200000u);
    /* 005393f4: mov dword ptr [ebp - 0x60], 0x41200000 */ W32((u32)(r_ebp+0xffffffa0u), 0x41200000u);
    /* 005393fb: push dword ptr [edi + eax*8 + 4] */ { u32 v = R32((u32)(r_edi+r_eax*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005393ff: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00539402: call 0x579794 */ r_esp -= 4; W32(r_esp, 0x539407u); f_00579794();
    /* 00539407: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00539409: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x53940eu); f_0077a684();
    /* 0053940e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053940f: mov dword ptr [0xa735bc], eax */ W32((u32)(0xa735bcu), r_eax);
    /* 00539414: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00539416:; BB(0x00539416);
    /* 00539416: push dword ptr [esi*4 + 0x922e68] */ { u32 v = R32((u32)(r_esi*4+0x922e68u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053941d: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x539422u); f_0077a698();
    /* 00539422: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00539423: mov dword ptr [esi*4 + 0xa735b4], eax */ W32((u32)(r_esi*4+0xa735b4u), r_eax);
    /* 0053942a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0053942d: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00539430: jl 0x539416 */ if ((fS!=fO)) goto L_00539416;
L_00539432:; BB(0x00539432);
    /* 00539432: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00539434: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x539439u); f_0077a6b4();
    /* 00539439: mov dword ptr [0xa735b0], eax */ W32((u32)(0xa735b0u), r_eax);
    /* 0053943e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00539440: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x539445u); f_0077a6cc();
    /* 00539445: movzx edx, word ptr [0x922e2c] */ r_edx = (u32)R16((u32)(0x922e2cu));
    /* 0053944c: movzx ecx, word ptr [0x922e2e] */ r_ecx = (u32)R16((u32)(0x922e2eu));
    /* 00539453: movzx esi, word ptr [0x922e30] */ r_esi = (u32)R16((u32)(0x922e30u));
    /* 0053945a: mov dword ptr [0xa735ac], eax */ W32((u32)(0xa735acu), r_eax);
    /* 0053945f: mov eax, dword ptr [0x922e28] */ r_eax = R32((u32)(0x922e28u));
    /* 00539464: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00539467: mov eax, dword ptr [0xa735a8] */ r_eax = R32((u32)(0xa735a8u));
    /* 0053946c: mov edi, dword ptr [eax + 0x430] */ r_edi = R32((u32)(r_eax+0x430u));
    /* 00539472: mov word ptr [ebp - 0x40], dx */ W16((u32)(r_ebp+0xffffffc0u), (u16)r_edx);
    /* 00539476: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0053947c: mov word ptr [ebp - 0x3e], cx */ W16((u32)(r_ebp+0xffffffc2u), (u16)r_ecx);
    /* 00539480: mov word ptr [ebp - 0x3c], si */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_esi);
    /* 00539484: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 00539487: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 0053948a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053948b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053948d: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00539492: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00539495: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00539498: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0053949a: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x53949fu); f_00608470();
    /* 0053949f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005394a2: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 005394a5: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 005394a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005394ab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005394b2: mov esp, ebp */ r_esp = r_ebp;
    /* 005394b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005394b5: mov esp, ebx */ r_esp = r_ebx;
    /* 005394b7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005394b8: ret  */ FN_RET(0x00538ef4); r_esp += 4; return;
L_005394b9:; BB(0x005394b9);
    /* 005394b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005394bb: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005394be: jmp 0x539354 */ f_00539354(); return;
L_005394c3:; BB(0x005394c3);
    /* 005394c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005394c5: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005394c8: jmp 0x5392ed */ f_005392ed(); return;
}

