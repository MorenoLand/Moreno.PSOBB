#include "protos.h"

void f_00657069(void)
{
    FN_ENTER(0x00657069);
    goto L_00657069;
L_00657013:; BB(0x00657013);
    /* 00657013: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00657016: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00657017: ret  */ FN_RET(0x00657069); r_esp += 4; return;
L_00657069:; BB(0x00657069);
    /* 00657069: dec byte ptr [esp + edi*2] */ { u32 ad = (u32)(r_esp+r_edi*2); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 0065706c: les ecx, ptr [ebx - 0x14d7db8c] */ UNSUP(0x0065706c, "les ecx, ptr [ebx - 0x14d7db8c]");
    /* 00657072: mov al, byte ptr [0x2824748b] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x2824748bu))) & 0xffu);
    /* 00657077: mov dword ptr [ebx + 0xb4], 0 */ W32((u32)(r_ebx+0xb4u), 0x0u);
    /* 00657081: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00657083: mov dword ptr [ebx + 0xac], 4 */ W32((u32)(r_ebx+0xacu), 0x4u);
    /* 0065708d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065708f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657091: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x657096u); f_007b52ec();
    /* 00657096: jmp 0x657013 */ goto L_00657013;
}

void f_006571f4(void) /* sub_6571F4 */
{
    FN_ENTER(0x006571f4);
    /* 006571f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006571f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006571f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006571f7: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006571fa: mov edi, ecx */ r_edi = r_ecx;
    /* 006571fc: mov eax, dword ptr [0xa8f744] */ r_eax = R32((u32)(0xa8f744u));
    /* 00657201: mov edx, dword ptr [edi + 0xac] */ r_edx = R32((u32)(r_edi+0xacu));
    /* 00657207: mov ebp, edx */ r_ebp = r_edx;
    /* 00657209: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065720b: je 0x657219 */ if (fZ) goto L_00657219;
L_0065720d:; BB(0x0065720d);
    /* 0065720d: mov dword ptr [edi + 0xac], 0 */ W32((u32)(r_edi+0xacu), 0x0u);
    /* 00657217: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00657219:; BB(0x00657219);
    /* 00657219: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065721b: je 0x65724f */ if (fZ) goto L_0065724f;
L_0065721d:; BB(0x0065721d);
    /* 0065721d: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657220: je 0x65724f */ if (fZ) goto L_0065724f;
L_00657222:; BB(0x00657222);
    /* 00657222: push 0x437a0000 */ { u32 v = 0x437a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00657227: mov ecx, edi */ r_ecx = r_edi;
    /* 00657229: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0065722b: push 0x442f0000 */ { u32 v = 0x442f0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00657230: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x657233u); call_ind(t); }
    /* 00657233: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657235: je 0x6572cf */ if (fZ) goto L_006572cf;
L_0065723b:; BB(0x0065723b);
    /* 0065723b: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 00657241: mov ecx, edi */ r_ecx = r_edi;
    /* 00657243: call dword ptr [eax*4 + 0x9c7ad8] */ { u32 t = R32((u32)(r_eax*4+0x9c7ad8u)); r_esp -= 4; W32(r_esp, 0x65724au); call_ind(t); }
    /* 0065724a: jmp 0x6572cf */ goto L_006572cf;
L_0065724f:; BB(0x0065724f);
    /* 0065724f: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00657254: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 00657257: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065725c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065725d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065725e: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x657263u); f_0078ea2c();
    /* 00657263: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00657266: fcom dword ptr [0x937950] */ fx_compare(ST(0), R_F32((u32)(0x937950u))); 
    /* 0065726c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065726e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065726f: ja 0x6572e5 */ if ((!fC&&!fZ)) goto L_006572e5;
L_00657271:; BB(0x00657271);
    /* 00657271: fcomp dword ptr [0x93794c] */ fx_compare(ST(0), R_F32((u32)(0x93794cu))); FPOP();
    /* 00657277: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00657279: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065727a: jb 0x6572c0 */ if (fC) goto L_006572c0;
L_0065727c:; BB(0x0065727c);
    /* 0065727c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0065727f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657280: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00657282: mov edx, ebx */ r_edx = r_ebx;
    /* 00657284: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x657289u); f_0082f09c();
    /* 00657289: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0065728c: fcom dword ptr [0x937948] */ fx_compare(ST(0), R_F32((u32)(0x937948u))); 
    /* 00657292: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00657294: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00657295: jae 0x65729b */ if (!fC) goto L_0065729b;
L_00657297:; BB(0x00657297);
    /* 00657297: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00657299: jmp 0x6572cf */ goto L_006572cf;
L_0065729b:; BB(0x0065729b);
    /* 0065729b: movsx ebx, word ptr [0xa48a4c] */ r_ebx = (u32)(i32)(i16)R16((u32)(0xa48a4cu));
    /* 006572a2: movsx edx, word ptr [0x9acb68] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9acb68u));
    /* 006572a9: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006572ab: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 006572af: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006572b3: fadd dword ptr [0x937958] */ ST(0) = ST(0) + R_F32((u32)(0x937958u));
    /* 006572b9: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006572bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006572bd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006572be: jb 0x6572cf */ if (fC) goto L_006572cf;
L_006572c0:; BB(0x006572c0);
    /* 006572c0: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 006572c6: mov ecx, edi */ r_ecx = r_edi;
    /* 006572c8: call dword ptr [eax*4 + 0x9c7ad8] */ { u32 t = R32((u32)(r_eax*4+0x9c7ad8u)); r_esp -= 4; W32(r_esp, 0x6572cfu); call_ind(t); }
L_006572cf:; BB(0x006572cf);
    /* 006572cf: mov eax, dword ptr [0xa8f744] */ r_eax = R32((u32)(0xa8f744u));
    /* 006572d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006572d6: je 0x6572de */ if (fZ) goto L_006572de;
L_006572d8:; BB(0x006572d8);
    /* 006572d8: mov dword ptr [edi + 0xac], ebp */ W32((u32)(r_edi+0xacu), r_ebp);
L_006572de:; BB(0x006572de);
    /* 006572de: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006572e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006572e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006572e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006572e4: ret  */ FN_RET(0x006571f4); r_esp += 4; return;
L_006572e5:; BB(0x006572e5);
    /* 006572e5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006572e7: jmp 0x6572cf */ goto L_006572cf;
}

void f_00657265(void)
{
    FN_ENTER(0x00657265);
    /* 00657265: or al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 00657267: adc eax, 0x937950 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x937950u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 0065726c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065726e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065726f: ja 0x6572e5 */ if ((!fC&&!fZ)) goto L_006572e5;
L_00657271:; BB(0x00657271);
    /* 00657271: fcomp dword ptr [0x93794c] */ fx_compare(ST(0), R_F32((u32)(0x93794cu))); FPOP();
    /* 00657277: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00657279: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065727a: jb 0x6572c0 */ if (fC) goto L_006572c0;
L_0065727c:; BB(0x0065727c);
    /* 0065727c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0065727f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657280: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00657282: mov edx, ebx */ r_edx = r_ebx;
    /* 00657284: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x657289u); f_0082f09c();
    /* 00657289: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0065728c: fcom dword ptr [0x937948] */ fx_compare(ST(0), R_F32((u32)(0x937948u))); 
    /* 00657292: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00657294: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00657295: jae 0x65729b */ if (!fC) goto L_0065729b;
L_00657297:; BB(0x00657297);
    /* 00657297: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00657299: jmp 0x6572cf */ goto L_006572cf;
L_0065729b:; BB(0x0065729b);
    /* 0065729b: movsx ebx, word ptr [0xa48a4c] */ r_ebx = (u32)(i32)(i16)R16((u32)(0xa48a4cu));
    /* 006572a2: movsx edx, word ptr [0x9acb68] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9acb68u));
    /* 006572a9: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006572ab: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 006572af: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006572b3: fadd dword ptr [0x937958] */ ST(0) = ST(0) + R_F32((u32)(0x937958u));
    /* 006572b9: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006572bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006572bd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006572be: jb 0x6572cf */ if (fC) goto L_006572cf;
L_006572c0:; BB(0x006572c0);
    /* 006572c0: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 006572c6: mov ecx, edi */ r_ecx = r_edi;
    /* 006572c8: call dword ptr [eax*4 + 0x9c7ad8] */ { u32 t = R32((u32)(r_eax*4+0x9c7ad8u)); r_esp -= 4; W32(r_esp, 0x6572cfu); call_ind(t); }
L_006572cf:; BB(0x006572cf);
    /* 006572cf: mov eax, dword ptr [0xa8f744] */ r_eax = R32((u32)(0xa8f744u));
    /* 006572d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006572d6: je 0x6572de */ if (fZ) goto L_006572de;
L_006572d8:; BB(0x006572d8);
    /* 006572d8: mov dword ptr [edi + 0xac], ebp */ W32((u32)(r_edi+0xacu), r_ebp);
L_006572de:; BB(0x006572de);
    /* 006572de: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006572e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006572e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006572e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006572e4: ret  */ FN_RET(0x00657265); r_esp += 4; return;
L_006572e5:; BB(0x006572e5);
    /* 006572e5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006572e7: jmp 0x6572cf */ goto L_006572cf;
}

void f_00657269(void)
{
    FN_ENTER(0x00657269);
    goto L_00657269;
L_006571fe:; BB(0x006571fe);
    /* 006571fe: imul dword ptr [eax - 0x53687500] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_eax+0xac978b00u)); r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00657204: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00657206: add byte ptr [ebx + 0x74c085ea], cl */ { u32 ad = (u32)(r_ebx+0x74c085eau);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0065720c: or al, 0xc7 */ {  u32 a = (u8)r_eax; u32 b = 0xc7u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0065720d:; BB(0x0065720d);
    /* 0065720d: mov dword ptr [edi + 0xac], 0 */ W32((u32)(r_edi+0xacu), 0x0u);
    /* 0065720e: xchg dword ptr [eax + eax], ebp */ { u32 x = R32((u32)(r_eax+r_eax)); u32 y = r_ebp; W32((u32)(r_eax+r_eax), y); r_ebp = x; }
    /* 00657215: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00657217: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00657219: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065721b: je 0x65724f */ if (fZ) goto L_0065724f;
L_0065721d:; BB(0x0065721d);
    /* 0065721d: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657220: je 0x65724f */ if (fZ) goto L_0065724f;
L_00657222:; BB(0x00657222);
    /* 00657222: push 0x437a0000 */ { u32 v = 0x437a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00657227: mov ecx, edi */ r_ecx = r_edi;
    /* 00657229: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0065722b: push 0x442f0000 */ { u32 v = 0x442f0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00657230: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x657233u); call_ind(t); }
    /* 00657233: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657235: je 0x6572cf */ if (fZ) goto L_006572cf;
L_0065723b:; BB(0x0065723b);
    /* 0065723b: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 00657241: mov ecx, edi */ r_ecx = r_edi;
    /* 00657243: call dword ptr [eax*4 + 0x9c7ad8] */ { u32 t = R32((u32)(r_eax*4+0x9c7ad8u)); r_esp -= 4; W32(r_esp, 0x65724au); call_ind(t); }
    /* 0065724a: jmp 0x6572cf */ goto L_006572cf;
L_0065724f:; BB(0x0065724f);
    /* 0065724f: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00657254: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 00657257: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065725c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065725d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065725e: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x657263u); f_0078ea2c();
    /* 00657263: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00657266: fcom dword ptr [0x937950] */ fx_compare(ST(0), R_F32((u32)(0x937950u))); 
L_00657269:; BB(0x00657269);
    /* 00657269: jns 0x6571fe */ if (!fS) goto L_006571fe;
L_0065726b:; BB(0x0065726b);
    /* 0065726b: add bh, bl */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); fC = (r < a); }
    /* 0065726c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065726d: loopne 0x65720d */ r_ecx--; if (r_ecx && !fZ) goto L_0065720d;
    /* 0065726e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065726f: ja 0x6572e5 */ if ((!fC&&!fZ)) goto L_006572e5;
L_00657271:; BB(0x00657271);
    /* 00657271: fcomp dword ptr [0x93794c] */ fx_compare(ST(0), R_F32((u32)(0x93794cu))); FPOP();
    /* 00657277: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00657279: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065727a: jb 0x6572c0 */ if (fC) goto L_006572c0;
L_0065727c:; BB(0x0065727c);
    /* 0065727c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0065727f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657280: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00657282: mov edx, ebx */ r_edx = r_ebx;
    /* 00657284: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x657289u); f_0082f09c();
    /* 00657289: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0065728c: fcom dword ptr [0x937948] */ fx_compare(ST(0), R_F32((u32)(0x937948u))); 
    /* 00657292: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00657294: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00657295: jae 0x65729b */ if (!fC) goto L_0065729b;
L_00657297:; BB(0x00657297);
    /* 00657297: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00657299: jmp 0x6572cf */ goto L_006572cf;
L_0065729b:; BB(0x0065729b);
    /* 0065729b: movsx ebx, word ptr [0xa48a4c] */ r_ebx = (u32)(i32)(i16)R16((u32)(0xa48a4cu));
    /* 006572a2: movsx edx, word ptr [0x9acb68] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9acb68u));
    /* 006572a9: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006572ab: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 006572af: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006572b3: fadd dword ptr [0x937958] */ ST(0) = ST(0) + R_F32((u32)(0x937958u));
    /* 006572b9: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006572bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006572bd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006572be: jb 0x6572cf */ if (fC) goto L_006572cf;
L_006572c0:; BB(0x006572c0);
    /* 006572c0: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 006572c6: mov ecx, edi */ r_ecx = r_edi;
    /* 006572c8: call dword ptr [eax*4 + 0x9c7ad8] */ { u32 t = R32((u32)(r_eax*4+0x9c7ad8u)); r_esp -= 4; W32(r_esp, 0x6572cfu); call_ind(t); }
L_006572cf:; BB(0x006572cf);
    /* 006572cf: mov eax, dword ptr [0xa8f744] */ r_eax = R32((u32)(0xa8f744u));
    /* 006572d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006572d6: je 0x6572de */ if (fZ) goto L_006572de;
L_006572d8:; BB(0x006572d8);
    /* 006572d8: mov dword ptr [edi + 0xac], ebp */ W32((u32)(r_edi+0xacu), r_ebp);
L_006572de:; BB(0x006572de);
    /* 006572de: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006572e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006572e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006572e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006572e4: ret  */ FN_RET(0x00657269); r_esp += 4; return;
L_006572e5:; BB(0x006572e5);
    /* 006572e5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006572e7: jmp 0x6572cf */ goto L_006572cf;
}

void f_006572ec(void) /* sub_6572EC */
{
    FN_ENTER(0x006572ec);
    /* 006572ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006572ed: mov eax, dword ptr [0xa8f748] */ r_eax = R32((u32)(0xa8f748u));
    /* 006572f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006572f4: je 0x657321 */ if (fZ) goto L_00657321;
L_006572f6:; BB(0x006572f6);
    /* 006572f6: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006572f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006572fb: mov ebx, eax */ r_ebx = r_eax;
L_006572fd:; BB(0x006572fd);
    /* 006572fd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00657300: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00657303: jae 0x65731e */ if (!fC) goto L_0065731e;
L_00657305:; BB(0x00657305);
    /* 00657305: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657307: je 0x6572fd */ if (fZ) goto L_006572fd;
L_00657309:; BB(0x00657309);
    /* 00657309: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 0065730f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00657310: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x657315u); f_005b8610();
    /* 00657315: mov ecx, eax */ r_ecx = r_eax;
    /* 00657317: call 0x834f64 */ r_esp -= 4; W32(r_esp, 0x65731cu); f_00834f64();
    /* 0065731c: jmp 0x6572fd */ goto L_006572fd;
L_0065731e:; BB(0x0065731e);
    /* 0065731e: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00657321:; BB(0x00657321);
    /* 00657321: push dword ptr [0xa8f768] */ { u32 v = R32((u32)(0xa8f768u)); r_esp -= 4; W32(r_esp, v); }
    /* 00657327: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x65732cu); f_00800b5c();
    /* 0065732c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065732d: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 00657333: mov dword ptr [0xa8f768], 0 */ W32((u32)(0xa8f768u), 0x0u);
    /* 0065733d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065733f: je 0x657354 */ if (fZ) goto L_00657354;
L_00657341:; BB(0x00657341);
    /* 00657341: je 0x65734a */ if (fZ) goto L_0065734a;
L_00657343:; BB(0x00657343);
    /* 00657343: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00657345: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x65734au); f_004066a8();
L_0065734a:; BB(0x0065734a);
    /* 0065734a: mov dword ptr [0xa8f748], 0 */ W32((u32)(0xa8f748u), 0x0u);
L_00657354:; BB(0x00657354);
    /* 00657354: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00657355: ret  */ FN_RET(0x006572ec); r_esp += 4; return;
}

void f_00657358(void)
{
    FN_ENTER(0x00657358);
    /* 00657358: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00657359: mov ebp, esp */ r_ebp = r_esp;
    /* 0065735b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065735d: push 0x8e6efc */ { u32 v = 0x8e6efcu; r_esp -= 4; W32(r_esp, v); }
    /* 00657362: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00657368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657369: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00657370: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00657373: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00657376: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00657379: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065737c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065737f: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00657384: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065738b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x657390u); f_005caba4();
    /* 00657390: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00657391: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00657394: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657396: je 0x6573cf */ if (fZ) goto L_006573cf;
L_00657398:; BB(0x00657398);
    /* 00657398: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065739f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006573a6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006573a9: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006573af: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006573b2: call 0x6573d4 */ r_esp -= 4; W32(r_esp, 0x6573b7u); f_006573d4();
    /* 006573b7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006573ba: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006573c1:; BB(0x006573c1);
    /* 006573c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006573c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006573cb: mov esp, ebp */ r_esp = r_ebp;
    /* 006573cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006573ce: ret  */ FN_RET(0x00657358); r_esp += 4; return;
L_006573cf:; BB(0x006573cf);
    /* 006573cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006573d1: jmp 0x6573c1 */ goto L_006573c1;
}

void f_00657365(void)
{
    FN_ENTER(0x00657365);
    /* 00657365: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00657367: add byte ptr [eax + 0x64], dl */ { u32 ad = (u32)(r_eax+0x64u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0065736a: mov dword ptr [0], esp */ W32((u32)(0x0u), r_esp);
    /* 00657370: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00657373: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00657376: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00657379: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065737c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065737f: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00657384: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065738b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x657390u); f_005caba4();
    /* 00657390: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00657391: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00657394: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657396: je 0x6573cf */ if (fZ) goto L_006573cf;
L_00657398:; BB(0x00657398);
    /* 00657398: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065739f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006573a6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006573a9: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006573af: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006573b2: call 0x6573d4 */ r_esp -= 4; W32(r_esp, 0x6573b7u); f_006573d4();
    /* 006573b7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006573ba: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006573c1:; BB(0x006573c1);
    /* 006573c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006573c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006573cb: mov esp, ebp */ r_esp = r_ebp;
    /* 006573cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006573ce: ret  */ FN_RET(0x00657365); r_esp += 4; return;
L_006573cf:; BB(0x006573cf);
    /* 006573cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006573d1: jmp 0x6573c1 */ goto L_006573c1;
}

void f_0065736f(void)
{
    FN_ENTER(0x0065736f);
    /* 0065736f: add byte ptr [ebx + 0x658918ec], al */ { u32 ad = (u32)(r_ebx+0x658918ecu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    UNSUP(0x00657375, "falls out of decoded code");
}

void f_006573d4(void) /* sub_6573D4 */
{
    FN_ENTER(0x006573d4);
    /* 006573d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006573d5: mov ebp, esp */ r_ebp = r_esp;
    /* 006573d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006573d9: push 0x8e6f18 */ { u32 v = 0x8e6f18u; r_esp -= 4; W32(r_esp, v); }
    /* 006573de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006573e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006573e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006573ec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006573ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006573f2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006573f5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006573f8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006573fb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006573fe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00657401: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00657404: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00657407: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x65740cu); f_007b4b48();
    /* 0065740c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00657413: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00657416: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00657419: mov dword ptr [ecx], 0xb32168 */ W32((u32)(r_ecx), 0xb32168u);
    /* 0065741f: mov eax, dword ptr [0x9c7bd4] */ r_eax = R32((u32)(0x9c7bd4u));
    /* 00657424: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00657425: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00657428: call dword ptr [0xb3217c] */ { u32 t = R32((u32)(0xb3217cu)); r_esp -= 4; W32(r_esp, 0x65742eu); call_ind(t); }
    /* 0065742e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00657431: mov esi, dword ptr [ecx + 0x84] */ r_esi = R32((u32)(r_ecx+0x84u));
    /* 00657437: mov dword ptr [ecx + 0xb8], 0 */ W32((u32)(r_ecx+0xb8u), 0x0u);
    /* 00657441: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00657443: mov dword ptr [ecx + 0xb4], 0 */ W32((u32)(r_ecx+0xb4u), 0x0u);
    /* 0065744d: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 00657453: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 00657459: mov edi, 1 */ r_edi = 0x1u;
    /* 0065745e: mov dword ptr [ecx + 0xc0], 0x50 */ W32((u32)(r_ecx+0xc0u), 0x50u);
    /* 00657468: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00657469: mov dword ptr [ecx + 0xb0], edi */ W32((u32)(r_ecx+0xb0u), r_edi);
    /* 0065746f: mov dword ptr [ecx + 0xc4], 0 */ W32((u32)(r_ecx+0xc4u), 0x0u);
    /* 00657479: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0065747a: push 0x9c7bd8 */ { u32 v = 0x9c7bd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065747f: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00657481: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00657483: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00657486: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00657488: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065748a: movsx ebx, al */ r_ebx = (u32)(i32)(i8)(u8)r_eax;
    /* 0065748d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065748f: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 00657495: mov eax, esi */ r_eax = r_esi;
    /* 00657497: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0065749c: and esi, 0xff00 */ {  u32 a = r_esi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006574a2: mov dword ptr [ecx + 0xcc], eax */ W32((u32)(r_ecx+0xccu), r_eax);
    /* 006574a8: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006574ad: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006574b0: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006574b2: mov eax, esi */ r_eax = r_esi;
    /* 006574b4: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006574b7: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006574ba: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006574bc: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006574bf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006574c1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006574c3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006574c5: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006574c7: mov dword ptr [ecx + 0xd0], esi */ W32((u32)(r_ecx+0xd0u), r_esi);
    /* 006574cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006574cf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006574d1: jg 0x6574d5 */ if ((!fZ&&fS==fO)) goto L_006574d5;
L_006574d3:; BB(0x006574d3);
    /* 006574d3: mov ebx, eax */ r_ebx = r_eax;
L_006574d5:; BB(0x006574d5);
    /* 006574d5: mov eax, 1 */ r_eax = 0x1u;
    /* 006574da: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006574dd: jl 0x6574e1 */ if ((fS!=fO)) goto L_006574e1;
L_006574df:; BB(0x006574df);
    /* 006574df: mov ebx, eax */ r_ebx = r_eax;
L_006574e1:; BB(0x006574e1);
    /* 006574e1: mov byte ptr [ecx + 0xbc], bl */ W8((u32)(r_ecx+0xbcu), (u8)r_ebx);
    /* 006574e7: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6574ecu); f_007b9a88();
    /* 006574ec: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006574ef: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 006574f2: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006574f7: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 006574fa: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6574ffu); f_007b4f54();
    /* 006574ff: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00657502: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00657505: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00657508: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065750b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065750e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00657515: mov esp, ebp */ r_esp = r_ebp;
    /* 00657517: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657518: ret 8 */ FN_RET(0x006573d4); r_esp += 12; return;
}

void f_00657461(void)
{
    FN_ENTER(0x00657461);
    /* 00657461: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00657463: add byte ptr [eax], dl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00657466: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00657468: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00657469: mov dword ptr [ecx + 0xb0], edi */ W32((u32)(r_ecx+0xb0u), r_edi);
    /* 0065746f: mov dword ptr [ecx + 0xc4], 0 */ W32((u32)(r_ecx+0xc4u), 0x0u);
    /* 00657479: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0065747a: push 0x9c7bd8 */ { u32 v = 0x9c7bd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065747f: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00657481: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00657483: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00657486: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00657488: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065748a: movsx ebx, al */ r_ebx = (u32)(i32)(i8)(u8)r_eax;
    /* 0065748d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065748f: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 00657495: mov eax, esi */ r_eax = r_esi;
    /* 00657497: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0065749c: and esi, 0xff00 */ {  u32 a = r_esi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006574a2: mov dword ptr [ecx + 0xcc], eax */ W32((u32)(r_ecx+0xccu), r_eax);
    /* 006574a8: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006574ad: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006574b0: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006574b2: mov eax, esi */ r_eax = r_esi;
    /* 006574b4: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006574b7: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006574ba: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006574bc: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006574bf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006574c1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006574c3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006574c5: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006574c7: mov dword ptr [ecx + 0xd0], esi */ W32((u32)(r_ecx+0xd0u), r_esi);
    /* 006574cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006574cf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006574d1: jg 0x6574d5 */ if ((!fZ&&fS==fO)) goto L_006574d5;
L_006574d3:; BB(0x006574d3);
    /* 006574d3: mov ebx, eax */ r_ebx = r_eax;
L_006574d5:; BB(0x006574d5);
    /* 006574d5: mov eax, 1 */ r_eax = 0x1u;
    /* 006574da: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006574dd: jl 0x6574e1 */ if ((fS!=fO)) goto L_006574e1;
L_006574df:; BB(0x006574df);
    /* 006574df: mov ebx, eax */ r_ebx = r_eax;
L_006574e1:; BB(0x006574e1);
    /* 006574e1: mov byte ptr [ecx + 0xbc], bl */ W8((u32)(r_ecx+0xbcu), (u8)r_ebx);
    /* 006574e7: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6574ecu); f_007b9a88();
    /* 006574ec: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006574ef: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 006574f2: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006574f7: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 006574fa: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6574ffu); f_007b4f54();
    /* 006574ff: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00657502: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00657505: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00657508: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065750b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065750e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00657515: mov esp, ebp */ r_esp = r_ebp;
    /* 00657517: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657518: ret 8 */ FN_RET(0x00657461); r_esp += 12; return;
}

void f_00657479(void)
{
    FN_ENTER(0x00657479);
    /* 00657479: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0065747a: push 0x9c7bd8 */ { u32 v = 0x9c7bd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065747f: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00657481: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00657483: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00657486: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00657488: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065748a: movsx ebx, al */ r_ebx = (u32)(i32)(i8)(u8)r_eax;
    /* 0065748d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065748f: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 00657495: mov eax, esi */ r_eax = r_esi;
    /* 00657497: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0065749c: and esi, 0xff00 */ {  u32 a = r_esi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006574a2: mov dword ptr [ecx + 0xcc], eax */ W32((u32)(r_ecx+0xccu), r_eax);
    /* 006574a8: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006574ad: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006574b0: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006574b2: mov eax, esi */ r_eax = r_esi;
    /* 006574b4: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006574b7: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006574ba: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006574bc: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006574bf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006574c1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006574c3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006574c5: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006574c7: mov dword ptr [ecx + 0xd0], esi */ W32((u32)(r_ecx+0xd0u), r_esi);
    /* 006574cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006574cf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006574d1: jg 0x6574d5 */ if ((!fZ&&fS==fO)) goto L_006574d5;
L_006574d3:; BB(0x006574d3);
    /* 006574d3: mov ebx, eax */ r_ebx = r_eax;
L_006574d5:; BB(0x006574d5);
    /* 006574d5: mov eax, 1 */ r_eax = 0x1u;
    /* 006574da: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006574dd: jl 0x6574e1 */ if ((fS!=fO)) goto L_006574e1;
L_006574df:; BB(0x006574df);
    /* 006574df: mov ebx, eax */ r_ebx = r_eax;
L_006574e1:; BB(0x006574e1);
    /* 006574e1: mov byte ptr [ecx + 0xbc], bl */ W8((u32)(r_ecx+0xbcu), (u8)r_ebx);
    /* 006574e7: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6574ecu); f_007b9a88();
    /* 006574ec: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006574ef: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 006574f2: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006574f7: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 006574fa: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6574ffu); f_007b4f54();
    /* 006574ff: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00657502: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00657505: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00657508: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065750b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065750e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00657515: mov esp, ebp */ r_esp = r_ebp;
    /* 00657517: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657518: ret 8 */ FN_RET(0x00657479); r_esp += 12; return;
}

void f_0065751c(void) /* sub_65751C */
{
    FN_ENTER(0x0065751c);
    /* 0065751c: mov dword ptr [0xa8f738], 0x3f800000 */ W32((u32)(0xa8f738u), 0x3f800000u);
    /* 00657526: mov dword ptr [0xa8f73c], 0x41000000 */ W32((u32)(0xa8f73cu), 0x41000000u);
    /* 00657530: mov dword ptr [0xa8f740], 0x3fc00000 */ W32((u32)(0xa8f740u), 0x3fc00000u);
    /* 0065753a: ret  */ FN_RET(0x0065751c); r_esp += 4; return;
}

void f_0065753c(void) /* sub_65753C */
{
    FN_ENTER(0x0065753c);
    /* 0065753c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065753d: mov ebp, esp */ r_ebp = r_esp;
    /* 0065753f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00657541: push 0x8e6f40 */ { u32 v = 0x8e6f40u; r_esp -= 4; W32(r_esp, v); }
    /* 00657546: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065754c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065754d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00657554: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00657557: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065755a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065755d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00657560: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00657563: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00657568: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065756f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x657574u); f_008581c5();
    /* 00657574: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00657575: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00657578: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065757a: je 0x657684 */ if (fZ) goto L_00657684;
L_00657580:; BB(0x00657580);
    /* 00657580: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00657587: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065758e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00657591: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00657593: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657594: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657595: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657596: push 0x9c7bc4 */ { u32 v = 0x9c7bc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065759b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065759d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6575a2u); f_005b7a84();
    /* 006575a2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006575a5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006575ac:; BB(0x006575ac);
    /* 006575ac: mov dword ptr [0xa8f748], eax */ W32((u32)(0xa8f748u), r_eax);
    /* 006575b1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006575b8: push 0x937a70 */ { u32 v = 0x937a70u; r_esp -= 4; W32(r_esp, v); }
    /* 006575bd: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x6575c2u); f_008009dc();
    /* 006575c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006575c3: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 006575c9: mov dword ptr [0xa8f768], eax */ W32((u32)(0xa8f768u), r_eax);
    /* 006575ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006575d0: je 0x6575f5 */ if (fZ) goto L_006575f5;
L_006575d2:; BB(0x006575d2);
    /* 006575d2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006575d4:; BB(0x006575d4);
    /* 006575d4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006575d7: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006575da: jae 0x6575f5 */ if (!fC) goto L_006575f5;
L_006575dc:; BB(0x006575dc);
    /* 006575dc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006575de: je 0x6575d4 */ if (fZ) goto L_006575d4;
L_006575e0:; BB(0x006575e0);
    /* 006575e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006575e1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6575e6u); f_005b8610();
    /* 006575e6: mov ecx, eax */ r_ecx = r_eax;
    /* 006575e8: call 0x834c58 */ r_esp -= 4; W32(r_esp, 0x6575edu); f_00834c58();
    /* 006575ed: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 006575f3: jmp 0x6575d4 */ goto L_006575d4;
L_006575f5:; BB(0x006575f5);
    /* 006575f5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006575f7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6575fcu); f_005b8610();
    /* 006575fc: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 00657602: mov dword ptr [0xa8f74c], eax */ W32((u32)(0xa8f74cu), r_eax);
    /* 00657607: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00657609: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65760eu); f_005b8610();
    /* 0065760e: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 00657614: mov dword ptr [0xa8f750], eax */ W32((u32)(0xa8f750u), r_eax);
    /* 00657619: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065761b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x657620u); f_005b8610();
    /* 00657620: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 00657626: mov dword ptr [0xa8f754], eax */ W32((u32)(0xa8f754u), r_eax);
    /* 0065762b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065762d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x657632u); f_005b8610();
    /* 00657632: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 00657638: mov dword ptr [0xa8f758], eax */ W32((u32)(0xa8f758u), r_eax);
    /* 0065763d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065763f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x657644u); f_005b8610();
    /* 00657644: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 0065764a: mov dword ptr [0xa8f75c], eax */ W32((u32)(0xa8f75cu), r_eax);
    /* 0065764f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657651: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x657656u); f_005b8638();
    /* 00657656: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 0065765c: mov dword ptr [0xa8f760], eax */ W32((u32)(0xa8f760u), r_eax);
    /* 00657661: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00657663: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x657668u); f_005b8638();
    /* 00657668: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065766b: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065766e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00657671: mov dword ptr [0xa8f764], eax */ W32((u32)(0xa8f764u), r_eax);
    /* 00657676: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00657679: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00657680: mov esp, ebp */ r_esp = r_ebp;
    /* 00657682: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657683: ret  */ FN_RET(0x0065753c); r_esp += 4; return;
L_00657684:; BB(0x00657684);
    /* 00657684: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00657686: jmp 0x6575ac */ goto L_006575ac;
}

void f_00657554(void)
{
    FN_ENTER(0x00657554);
    /* 00657554: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00657557: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065755a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065755d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00657560: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00657563: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00657568: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065756f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x657574u); f_008581c5();
    /* 00657574: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00657575: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00657578: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065757a: je 0x657684 */ if (fZ) goto L_00657684;
L_00657580:; BB(0x00657580);
    /* 00657580: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00657587: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065758e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00657591: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00657593: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657594: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657595: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657596: push 0x9c7bc4 */ { u32 v = 0x9c7bc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065759b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065759d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6575a2u); f_005b7a84();
    /* 006575a2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006575a5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006575ac:; BB(0x006575ac);
    /* 006575ac: mov dword ptr [0xa8f748], eax */ W32((u32)(0xa8f748u), r_eax);
    /* 006575b1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006575b8: push 0x937a70 */ { u32 v = 0x937a70u; r_esp -= 4; W32(r_esp, v); }
    /* 006575bd: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x6575c2u); f_008009dc();
    /* 006575c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006575c3: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 006575c9: mov dword ptr [0xa8f768], eax */ W32((u32)(0xa8f768u), r_eax);
    /* 006575ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006575d0: je 0x6575f5 */ if (fZ) goto L_006575f5;
L_006575d2:; BB(0x006575d2);
    /* 006575d2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006575d4:; BB(0x006575d4);
    /* 006575d4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006575d7: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006575da: jae 0x6575f5 */ if (!fC) goto L_006575f5;
L_006575dc:; BB(0x006575dc);
    /* 006575dc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006575de: je 0x6575d4 */ if (fZ) goto L_006575d4;
L_006575e0:; BB(0x006575e0);
    /* 006575e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006575e1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6575e6u); f_005b8610();
    /* 006575e6: mov ecx, eax */ r_ecx = r_eax;
    /* 006575e8: call 0x834c58 */ r_esp -= 4; W32(r_esp, 0x6575edu); f_00834c58();
    /* 006575ed: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 006575f3: jmp 0x6575d4 */ goto L_006575d4;
L_006575f5:; BB(0x006575f5);
    /* 006575f5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006575f7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6575fcu); f_005b8610();
    /* 006575fc: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 00657602: mov dword ptr [0xa8f74c], eax */ W32((u32)(0xa8f74cu), r_eax);
    /* 00657607: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00657609: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65760eu); f_005b8610();
    /* 0065760e: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 00657614: mov dword ptr [0xa8f750], eax */ W32((u32)(0xa8f750u), r_eax);
    /* 00657619: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065761b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x657620u); f_005b8610();
    /* 00657620: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 00657626: mov dword ptr [0xa8f754], eax */ W32((u32)(0xa8f754u), r_eax);
    /* 0065762b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065762d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x657632u); f_005b8610();
    /* 00657632: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 00657638: mov dword ptr [0xa8f758], eax */ W32((u32)(0xa8f758u), r_eax);
    /* 0065763d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065763f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x657644u); f_005b8610();
    /* 00657644: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 0065764a: mov dword ptr [0xa8f75c], eax */ W32((u32)(0xa8f75cu), r_eax);
    /* 0065764f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657651: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x657656u); f_005b8638();
    /* 00657656: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 0065765c: mov dword ptr [0xa8f760], eax */ W32((u32)(0xa8f760u), r_eax);
    /* 00657661: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00657663: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x657668u); f_005b8638();
    /* 00657668: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065766b: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065766e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00657671: mov dword ptr [0xa8f764], eax */ W32((u32)(0xa8f764u), r_eax);
    /* 00657676: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00657679: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00657680: mov esp, ebp */ r_esp = r_ebp;
    /* 00657682: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657683: ret  */ FN_RET(0x00657554); r_esp += 4; return;
L_00657684:; BB(0x00657684);
    /* 00657684: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00657686: jmp 0x6575ac */ goto L_006575ac;
}

void f_0065756c(void)
{
    FN_ENTER(0x0065756c);
    goto L_0065756c;
L_00657491:; BB(0x00657491);
    /* 00657491: enter 0, 0 */ { u32 f = 0x0u; u32 lv = 0u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 00657495: mov eax, esi */ r_eax = r_esi;
    /* 00657497: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0065749c: and esi, 0xff00 */ {  u32 a = r_esi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006574a2: mov dword ptr [ecx + 0xcc], eax */ W32((u32)(r_ecx+0xccu), r_eax);
    /* 006574a8: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006574ad: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006574b0: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006574b2: mov eax, esi */ r_eax = r_esi;
    /* 006574b4: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006574b7: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006574ba: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006574bc: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006574bf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006574c1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006574c3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006574c5: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006574c7: mov dword ptr [ecx + 0xd0], esi */ W32((u32)(r_ecx+0xd0u), r_esi);
    /* 006574cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006574cf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006574d1: jg 0x6574d5 */ if ((!fZ&&fS==fO)) goto L_006574d5;
L_006574d3:; BB(0x006574d3);
    /* 006574d3: mov ebx, eax */ r_ebx = r_eax;
L_006574d5:; BB(0x006574d5);
    /* 006574d5: mov eax, 1 */ r_eax = 0x1u;
    /* 006574da: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006574dd: jl 0x6574e1 */ if ((fS!=fO)) goto L_006574e1;
L_006574df:; BB(0x006574df);
    /* 006574df: mov ebx, eax */ r_ebx = r_eax;
L_006574e1:; BB(0x006574e1);
    /* 006574e1: mov byte ptr [ecx + 0xbc], bl */ W8((u32)(r_ecx+0xbcu), (u8)r_ebx);
    /* 006574e7: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6574ecu); f_007b9a88();
L_006574ec:; BB(0x006574ec);
    /* 006574ec: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006574ef: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 006574f2: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006574f7: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 006574fa: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6574ffu); f_007b4f54();
L_006574fe:; BB(0x006574fe);
    /* 006574fe: add byte ptr [ebx + 0x7d8bdc45], cl */ { u32 ad = (u32)(r_ebx+0x7d8bdc45u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 006574ff: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00657502: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00657504: loopne 0x657491 */ r_ecx--; if (r_ecx && !fZ) goto L_00657491;
    /* 00657505: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00657506: jne 0x6574ec */ if (!fZ) goto L_006574ec;
L_00657508:; BB(0x00657508);
    /* 00657508: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065750b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065750e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00657515: mov esp, ebp */ r_esp = r_ebp;
    /* 00657517: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657518: ret 8 */ FN_RET(0x0065756c); r_esp += 12; return;
L_0065756c:; BB(0x0065756c);
    /* 0065756c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0065756e: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00657570: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00657571: or al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00657573: add byte ptr [ecx - 0x77], bl */ { u32 ad = (u32)(r_ecx+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00657576: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00657577: loopne 0x6574fe */ r_ecx--; if (r_ecx && !fZ) goto L_006574fe;
    /* 00657579: ror byte ptr [edi], 0x84 */ { u32 ad = (u32)(r_edi); u32 c = (4u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 0065757c: add al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065757e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00657580: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00657587: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065758e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00657591: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00657593: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657594: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657595: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657596: push 0x9c7bc4 */ { u32 v = 0x9c7bc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065759b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065759d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6575a2u); f_005b7a84();
    /* 006575a2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006575a5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006575ac: mov dword ptr [0xa8f748], eax */ W32((u32)(0xa8f748u), r_eax);
    /* 006575b1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006575b8: push 0x937a70 */ { u32 v = 0x937a70u; r_esp -= 4; W32(r_esp, v); }
    /* 006575bd: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x6575c2u); f_008009dc();
    /* 006575c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006575c3: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 006575c9: mov dword ptr [0xa8f768], eax */ W32((u32)(0xa8f768u), r_eax);
    /* 006575ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006575d0: je 0x6575f5 */ if (fZ) goto L_006575f5;
L_006575d2:; BB(0x006575d2);
    /* 006575d2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006575d4:; BB(0x006575d4);
    /* 006575d4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006575d7: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006575da: jae 0x6575f5 */ if (!fC) goto L_006575f5;
L_006575dc:; BB(0x006575dc);
    /* 006575dc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006575de: je 0x6575d4 */ if (fZ) goto L_006575d4;
L_006575e0:; BB(0x006575e0);
    /* 006575e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006575e1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6575e6u); f_005b8610();
    /* 006575e6: mov ecx, eax */ r_ecx = r_eax;
    /* 006575e8: call 0x834c58 */ r_esp -= 4; W32(r_esp, 0x6575edu); f_00834c58();
    /* 006575ed: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 006575f3: jmp 0x6575d4 */ goto L_006575d4;
L_006575f5:; BB(0x006575f5);
    /* 006575f5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006575f7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6575fcu); f_005b8610();
    /* 006575fc: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 00657602: mov dword ptr [0xa8f74c], eax */ W32((u32)(0xa8f74cu), r_eax);
    /* 00657607: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00657609: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65760eu); f_005b8610();
    /* 0065760e: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 00657614: mov dword ptr [0xa8f750], eax */ W32((u32)(0xa8f750u), r_eax);
    /* 00657619: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065761b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x657620u); f_005b8610();
    /* 00657620: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 00657626: mov dword ptr [0xa8f754], eax */ W32((u32)(0xa8f754u), r_eax);
    /* 0065762b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065762d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x657632u); f_005b8610();
    /* 00657632: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 00657638: mov dword ptr [0xa8f758], eax */ W32((u32)(0xa8f758u), r_eax);
    /* 0065763d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065763f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x657644u); f_005b8610();
    /* 00657644: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 0065764a: mov dword ptr [0xa8f75c], eax */ W32((u32)(0xa8f75cu), r_eax);
    /* 0065764f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657651: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x657656u); f_005b8638();
    /* 00657656: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 0065765c: mov dword ptr [0xa8f760], eax */ W32((u32)(0xa8f760u), r_eax);
    /* 00657661: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00657663: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x657668u); f_005b8638();
    /* 00657668: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065766b: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065766e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00657671: mov dword ptr [0xa8f764], eax */ W32((u32)(0xa8f764u), r_eax);
    /* 00657676: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00657679: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00657680: mov esp, ebp */ r_esp = r_ebp;
    /* 00657682: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657683: ret  */ FN_RET(0x0065756c); r_esp += 4; return;
}

void f_00657600(void)
{
    FN_ENTER(0x00657600);
    /* 00657600: test al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a & b) & 0xffu;   }
    /* 00657602: mov dword ptr [0xa8f74c], eax */ W32((u32)(0xa8f74cu), r_eax);
    /* 00657607: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00657609: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65760eu); f_005b8610();
    /* 0065760e: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 00657614: mov dword ptr [0xa8f750], eax */ W32((u32)(0xa8f750u), r_eax);
    /* 00657619: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065761b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x657620u); f_005b8610();
    /* 00657620: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 00657626: mov dword ptr [0xa8f754], eax */ W32((u32)(0xa8f754u), r_eax);
    /* 0065762b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065762d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x657632u); f_005b8610();
    /* 00657632: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 00657638: mov dword ptr [0xa8f758], eax */ W32((u32)(0xa8f758u), r_eax);
    /* 0065763d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065763f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x657644u); f_005b8610();
    /* 00657644: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 0065764a: mov dword ptr [0xa8f75c], eax */ W32((u32)(0xa8f75cu), r_eax);
    /* 0065764f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657651: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x657656u); f_005b8638();
    /* 00657656: mov ecx, dword ptr [0xa8f748] */ r_ecx = R32((u32)(0xa8f748u));
    /* 0065765c: mov dword ptr [0xa8f760], eax */ W32((u32)(0xa8f760u), r_eax);
    /* 00657661: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00657663: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x657668u); f_005b8638();
    /* 00657668: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065766b: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065766e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00657671: mov dword ptr [0xa8f764], eax */ W32((u32)(0xa8f764u), r_eax);
    /* 00657676: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00657679: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00657680: mov esp, ebp */ r_esp = r_ebp;
    /* 00657682: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657683: ret  */ FN_RET(0x00657600); r_esp += 4; return;
}

void f_0065768c(void) /* sub_65768C */
{
    FN_ENTER(0x0065768c);
    /* 0065768c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065768d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065768f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00657691: call 0x6576b0 */ r_esp -= 4; W32(r_esp, 0x657696u); f_006576b0();
    /* 00657696: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065769a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065769c: jne 0x6576a2 */ if (!fZ) goto L_006576a2;
L_0065769e:; BB(0x0065769e);
    /* 0065769e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065769f: ret 4 */ FN_RET(0x0065768c); r_esp += 8; return;
L_006576a2:; BB(0x006576a2);
    /* 006576a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006576a3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6576a8u); f_005c2f74();
    /* 006576a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006576a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006576aa: ret 4 */ FN_RET(0x0065768c); r_esp += 8; return;
}

void f_006576b0(void) /* sub_6576B0 */
{
    FN_ENTER(0x006576b0);
    /* 006576b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006576b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006576b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006576b5: push 0x8e6f5c */ { u32 v = 0x8e6f5cu; r_esp -= 4; W32(r_esp, v); }
    /* 006576ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006576c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006576c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006576c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006576cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006576ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006576d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006576d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006576d7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006576da: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006576e1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006576e4: mov dword ptr [eax], 0xb32240 */ W32((u32)(r_eax), 0xb32240u);
    /* 006576ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006576eb: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6576f0u); f_007b4e84();
    /* 006576f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006576f1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006576f4: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6576f9u); f_007b9c8c();
    /* 006576f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00657700: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00657703: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x657708u); f_00619b10();
    /* 00657708: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065770b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00657712: mov esp, ebp */ r_esp = r_ebp;
    /* 00657714: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657715: ret  */ FN_RET(0x006576b0); r_esp += 4; return;
}

void f_00657718(void) /* sub_657718 */
{
    FN_ENTER(0x00657718);
    /* 00657718: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00657719: mov edi, ecx */ r_edi = r_ecx;
    /* 0065771b: mov eax, dword ptr [0xa8eba4] */ r_eax = R32((u32)(0xa8eba4u));
    /* 00657720: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657722: je 0x657740 */ if (fZ) goto L_00657740;
L_00657724:; BB(0x00657724);
    /* 00657724: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00657726: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657728: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0065772e: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00657731: mov dword ptr [edi + 0xd0], eax */ W32((u32)(r_edi+0xd0u), r_eax);
    /* 00657737: mov ecx, edi */ r_ecx = r_edi;
    /* 00657739: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x65773eu); f_007b52ec();
    /* 0065773e: jmp 0x657747 */ goto L_00657747;
L_00657740:; BB(0x00657740);
    /* 00657740: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00657742: mov ecx, edi */ r_ecx = r_edi;
    /* 00657744: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x657747u); call_ind(t); }
L_00657747:; BB(0x00657747);
    /* 00657747: mov edx, dword ptr [edi + 0xd0] */ r_edx = R32((u32)(r_edi+0xd0u));
    /* 0065774d: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00657750: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00657753: je 0x65776e */ if (fZ) goto L_0065776e;
L_00657755:; BB(0x00657755);
    /* 00657755: movzx ecx, word ptr [edi + 0x60] */ r_ecx = (u32)R16((u32)(r_edi+0x60u));
    /* 00657759: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0065775b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065775c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065775d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065775e: push 0xff00ff00 */ { u32 v = 0xff00ff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00657763: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657764: call 0x8056b0 */ r_esp -= 4; W32(r_esp, 0x657769u); f_008056b0();
    /* 00657769: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065776c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065776d: ret  */ FN_RET(0x00657718); r_esp += 4; return;
L_0065776e:; BB(0x0065776e);
    /* 0065776e: movzx ecx, word ptr [edi + 0x60] */ r_ecx = (u32)R16((u32)(r_edi+0x60u));
    /* 00657772: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00657774: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00657775: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00657776: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00657777: push 0xffff0000 */ { u32 v = 0xffff0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0065777c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065777d: call 0x8056b0 */ r_esp -= 4; W32(r_esp, 0x657782u); f_008056b0();
    /* 00657782: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00657785: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00657786: ret  */ FN_RET(0x00657718); r_esp += 4; return;
}

void f_00657788(void) /* sub_657788 */
{
    FN_ENTER(0x00657788);
    /* 00657788: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00657789: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065778a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065778b: mov edi, ecx */ r_edi = r_ecx;
    /* 0065778d: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00657792: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00657794: push 0x44228000 */ { u32 v = 0x44228000u; r_esp -= 4; W32(r_esp, v); }
    /* 00657799: mov ecx, edi */ r_ecx = r_edi;
    /* 0065779b: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x65779eu); call_ind(t); }
    /* 0065779e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006577a0: je 0x657938 */ if (fZ) goto L_00657938;
L_006577a6:; BB(0x006577a6);
    /* 006577a6: mov ebp, dword ptr [0xa8f790] */ r_ebp = R32((u32)(0xa8f790u));
    /* 006577ac: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 006577b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006577b4: je 0x6577d9 */ if (fZ) goto L_006577d9;
L_006577b6:; BB(0x006577b6);
    /* 006577b6: mov eax, dword ptr [0xa8f78c] */ r_eax = R32((u32)(0xa8f78cu));
    /* 006577bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006577bd: jl 0x6577f5 */ if ((fS!=fO)) goto L_006577f5;
L_006577bf:; BB(0x006577bf);
    /* 006577bf: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006577c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006577c3: push dword ptr [0xa8f770] */ { u32 v = R32((u32)(0xa8f770u)); r_esp -= 4; W32(r_esp, v); }
    /* 006577c9: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x6577ceu); f_0081a588();
    /* 006577ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006577d1: mov ebp, dword ptr [0xa8f78c] */ r_ebp = R32((u32)(0xa8f78cu));
    /* 006577d7: jmp 0x6577f5 */ goto L_006577f5;
L_006577d9:; BB(0x006577d9);
    /* 006577d9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006577db: jl 0x6577f5 */ if ((fS!=fO)) goto L_006577f5;
L_006577dd:; BB(0x006577dd);
    /* 006577dd: movzx eax, bp */ r_eax = (u32)(u16)r_ebp;
    /* 006577e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006577e1: push dword ptr [0xa8f770] */ { u32 v = R32((u32)(0xa8f770u)); r_esp -= 4; W32(r_esp, v); }
    /* 006577e7: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x6577ecu); f_0081a588();
    /* 006577ec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006577ef: mov ebp, dword ptr [0xa8f790] */ r_ebp = R32((u32)(0xa8f790u));
L_006577f5:; BB(0x006577f5);
    /* 006577f5: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 006577fa: cmp eax, dword ptr [0xa8f79c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8f79cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657800: je 0x657824 */ if (fZ) goto L_00657824;
L_00657802:; BB(0x00657802);
    /* 00657802: mov ecx, dword ptr [0xa8f7a0] */ r_ecx = R32((u32)(0xa8f7a0u));
    /* 00657808: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065780a: je 0x65781a */ if (fZ) goto L_0065781a;
L_0065780c:; BB(0x0065780c);
    /* 0065780c: push -0xa */ { u32 v = 0xfffffff6u; r_esp -= 4; W32(r_esp, v); }
    /* 0065780e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657810: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00657812: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x657815u); call_ind(t); }
    /* 00657815: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
L_0065781a:; BB(0x0065781a);
    /* 0065781a: mov dword ptr [0xa8f79c], eax */ W32((u32)(0xa8f79cu), r_eax);
    /* 0065781f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x657824u); f_0061cdb0();
L_00657824:; BB(0x00657824);
    /* 00657824: mov edx, dword ptr [edi + 0xd4] */ r_edx = R32((u32)(r_edi+0xd4u));
    /* 0065782a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065782c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065782e: jle 0x65787a */ if ((fZ||fS!=fO)) goto L_0065787a;
L_00657830:; BB(0x00657830);
    /* 00657830: mov esi, eax */ r_esi = r_eax;
L_00657832:; BB(0x00657832);
    /* 00657832: mov edx, esi */ r_edx = r_esi;
    /* 00657834: add edx, dword ptr [edi + 0xc8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0xc8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065783a: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0065783d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065783e: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x657843u); f_00816eec();
    /* 00657843: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00657844: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00657847: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065784a: je 0x65793c */ if (fZ) goto L_0065793c;
L_00657850:; BB(0x00657850);
    /* 00657850: mov edx, dword ptr [0xa8f798] */ r_edx = R32((u32)(0xa8f798u));
    /* 00657856: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00657858: jl 0x65786d */ if ((fS!=fO)) goto L_0065786d;
L_0065785a:; BB(0x0065785a);
    /* 0065785a: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0065785d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065785e: push dword ptr [esi*4 + 0xa8f774] */ { u32 v = R32((u32)(r_esi*4+0xa8f774u)); r_esp -= 4; W32(r_esp, v); }
    /* 00657865: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x65786au); f_0081a588();
    /* 0065786a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065786d:; BB(0x0065786d);
    /* 0065786d: mov edx, dword ptr [edi + 0xd4] */ r_edx = R32((u32)(r_edi+0xd4u));
    /* 00657873: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00657876: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00657878: jl 0x657832 */ if ((fS!=fO)) goto L_00657832;
L_0065787a:; BB(0x0065787a);
    /* 0065787a: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065787d: jge 0x6578a5 */ if ((fS==fO)) goto L_006578a5;
L_0065787f:; BB(0x0065787f);
    /* 0065787f: mov esi, edx */ r_esi = r_edx;
L_00657881:; BB(0x00657881);
    /* 00657881: mov eax, dword ptr [0xa8f794] */ r_eax = R32((u32)(0xa8f794u));
    /* 00657886: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00657888: jl 0x65789d */ if ((fS!=fO)) goto L_0065789d;
L_0065788a:; BB(0x0065788a);
    /* 0065788a: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0065788d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065788e: push dword ptr [esi*4 + 0xa8f774] */ { u32 v = R32((u32)(r_esi*4+0xa8f774u)); r_esp -= 4; W32(r_esp, v); }
    /* 00657895: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x65789au); f_0081a588();
    /* 0065789a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065789d:; BB(0x0065789d);
    /* 0065789d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006578a0: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006578a3: jl 0x657881 */ if ((fS!=fO)) goto L_00657881;
L_006578a5:; BB(0x006578a5);
    /* 006578a5: mov ecx, dword ptr [0xa8f784] */ r_ecx = R32((u32)(0xa8f784u));
    /* 006578ab: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6578b0u); f_00829cc8();
    /* 006578b0: mov eax, dword ptr [0xa8f7a0] */ r_eax = R32((u32)(0xa8f7a0u));
    /* 006578b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006578b7: je 0x6578cc */ if (fZ) goto L_006578cc;
L_006578b9:; BB(0x006578b9);
    /* 006578b9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006578bb: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x6578c0u); f_00835f78();
    /* 006578c0: mov ecx, dword ptr [0xa8f7a0] */ r_ecx = R32((u32)(0xa8f7a0u));
    /* 006578c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006578c7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006578c9: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x6578ccu); call_ind(t); }
L_006578cc:; BB(0x006578cc);
    /* 006578cc: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6578d1u); f_0082d7b0();
    /* 006578d1: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 006578d4: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6578d9u); f_0082d838();
    /* 006578d9: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 006578dc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006578de: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6578e3u); f_0082d8bc();
    /* 006578e3: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x6578e8u); f_00835068();
    /* 006578e8: mov ecx, dword ptr [0xa8f788] */ r_ecx = R32((u32)(0xa8f788u));
    /* 006578ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006578f0: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6578f5u); f_005b8610();
    /* 006578f5: mov ecx, eax */ r_ecx = r_eax;
    /* 006578f7: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x6578fcu); f_00835090();
    /* 006578fc: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x657901u); f_0082dbac();
    /* 00657901: mov ecx, dword ptr [0xa8f788] */ r_ecx = R32((u32)(0xa8f788u));
    /* 00657907: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00657909: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65790eu); f_005b8610();
    /* 0065790e: mov ecx, eax */ r_ecx = r_eax;
    /* 00657910: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x657915u); f_00835090();
    /* 00657915: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x65791au); f_00835078();
    /* 0065791a: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x65791fu); f_0082dab0();
    /* 0065791f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x657924u); f_0082da80();
    /* 00657924: mov ecx, dword ptr [0xa8f7a0] */ r_ecx = R32((u32)(0xa8f7a0u));
    /* 0065792a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065792c: je 0x657938 */ if (fZ) goto L_00657938;
L_0065792e:; BB(0x0065792e);
    /* 0065792e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00657930: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x657933u); call_ind(t); }
    /* 00657933: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x657938u); f_0083603c();
L_00657938:; BB(0x00657938);
    /* 00657938: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657939: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065793a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065793b: ret  */ FN_RET(0x00657788); r_esp += 4; return;
L_0065793c:; BB(0x0065793c);
    /* 0065793c: mov edx, dword ptr [0xa8f794] */ r_edx = R32((u32)(0xa8f794u));
    /* 00657942: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00657944: jl 0x65786d */ if ((fS!=fO)) goto L_0065786d;
L_0065794a:; BB(0x0065794a);
    /* 0065794a: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0065794d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065794e: push dword ptr [esi*4 + 0xa8f774] */ { u32 v = R32((u32)(r_esi*4+0xa8f774u)); r_esp -= 4; W32(r_esp, v); }
    /* 00657955: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x65795au); f_0081a588();
    /* 0065795a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065795d: jmp 0x65786d */ goto L_0065786d;
}

void f_00657964(void) /* sub_657964 */
{
    FN_ENTER(0x00657964);
    /* 00657964: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00657965: mov edi, ecx */ r_edi = r_ecx;
    /* 00657967: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00657969: mov ecx, edi */ r_ecx = r_edi;
    /* 0065796b: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x65796eu); call_ind(t); }
    /* 0065796e: mov ecx, edi */ r_ecx = r_edi;
    /* 00657970: call 0x6579a4 */ r_esp -= 4; W32(r_esp, 0x657975u); f_006579a4();
    /* 00657975: push dword ptr [edi + 0xc8] */ { u32 v = R32((u32)(r_edi+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065797b: push 0x937ac8 */ { u32 v = 0x937ac8u; r_esp -= 4; W32(r_esp, v); }
    /* 00657980: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 00657985: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x65798au); f_0061cdb0();
    /* 0065798a: push dword ptr [edi + 0xd4] */ { u32 v = R32((u32)(r_edi+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00657990: push 0x936de8 */ { u32 v = 0x936de8u; r_esp -= 4; W32(r_esp, v); }
    /* 00657995: push 0x130021 */ { u32 v = 0x130021u; r_esp -= 4; W32(r_esp, v); }
    /* 0065799a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x65799fu); f_0061cdb0();
    /* 0065799f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006579a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006579a3: ret  */ FN_RET(0x00657964); r_esp += 4; return;
}

void f_00657965(void)
{
    FN_ENTER(0x00657965);
    /* 00657965: mov edi, ecx */ r_edi = r_ecx;
    /* 00657967: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00657969: mov ecx, edi */ r_ecx = r_edi;
    /* 0065796b: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x65796eu); call_ind(t); }
    /* 0065796e: mov ecx, edi */ r_ecx = r_edi;
    /* 00657970: call 0x6579a4 */ r_esp -= 4; W32(r_esp, 0x657975u); f_006579a4();
    /* 00657975: push dword ptr [edi + 0xc8] */ { u32 v = R32((u32)(r_edi+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065797b: push 0x937ac8 */ { u32 v = 0x937ac8u; r_esp -= 4; W32(r_esp, v); }
    /* 00657980: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 00657985: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x65798au); f_0061cdb0();
    /* 0065798a: push dword ptr [edi + 0xd4] */ { u32 v = R32((u32)(r_edi+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00657990: push 0x936de8 */ { u32 v = 0x936de8u; r_esp -= 4; W32(r_esp, v); }
    /* 00657995: push 0x130021 */ { u32 v = 0x130021u; r_esp -= 4; W32(r_esp, v); }
    /* 0065799a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x65799fu); f_0061cdb0();
    /* 0065799f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006579a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006579a3: ret  */ FN_RET(0x00657965); r_esp += 4; return;
}

void f_006579a4(void) /* sub_6579A4 */
{
    FN_ENTER(0x006579a4);
    /* 006579a4: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 006579aa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006579ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006579ae: jg 0x6579b2 */ if ((!fZ&&fS==fO)) goto L_006579b2;
L_006579b0:; BB(0x006579b0);
    /* 006579b0: mov eax, edx */ r_eax = r_edx;
L_006579b2:; BB(0x006579b2);
    /* 006579b2: mov edx, 4 */ r_edx = 0x4u;
    /* 006579b7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006579ba: jl 0x6579be */ if ((fS!=fO)) goto L_006579be;
L_006579bc:; BB(0x006579bc);
    /* 006579bc: mov eax, edx */ r_eax = r_edx;
L_006579be:; BB(0x006579be);
    /* 006579be: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 006579c4: ret  */ FN_RET(0x006579a4); r_esp += 4; return;
}

void f_006579c8(void) /* sub_6579C8 */
{
    FN_ENTER(0x006579c8);
    /* 006579c8: mov ecx, dword ptr [0xa8f7a0] */ r_ecx = R32((u32)(0xa8f7a0u));
    /* 006579ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006579d0: je 0x6579e4 */ if (fZ) goto L_006579e4;
L_006579d2:; BB(0x006579d2);
    /* 006579d2: je 0x6579da */ if (fZ) goto L_006579da;
L_006579d4:; BB(0x006579d4);
    /* 006579d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006579d6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006579d8: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x6579dau); call_ind(t); }
L_006579da:; BB(0x006579da);
    /* 006579da: mov dword ptr [0xa8f7a0], 0 */ W32((u32)(0xa8f7a0u), 0x0u);
L_006579e4:; BB(0x006579e4);
    /* 006579e4: mov ecx, dword ptr [0xa8f788] */ r_ecx = R32((u32)(0xa8f788u));
    /* 006579ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006579ec: je 0x657a01 */ if (fZ) goto L_00657a01;
L_006579ee:; BB(0x006579ee);
    /* 006579ee: je 0x6579f7 */ if (fZ) goto L_006579f7;
L_006579f0:; BB(0x006579f0);
    /* 006579f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006579f2: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6579f7u); f_004066a8();
L_006579f7:; BB(0x006579f7);
    /* 006579f7: mov dword ptr [0xa8f788], 0 */ W32((u32)(0xa8f788u), 0x0u);
L_00657a01:; BB(0x00657a01);
    /* 00657a01: ret  */ FN_RET(0x006579c8); r_esp += 4; return;
}

void f_00657a04(void)
{
    FN_ENTER(0x00657a04);
    /* 00657a04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00657a05: mov ebp, esp */ r_ebp = r_esp;
    /* 00657a07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00657a09: push 0x8e6f84 */ { u32 v = 0x8e6f84u; r_esp -= 4; W32(r_esp, v); }
    /* 00657a0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00657a14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657a15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00657a1c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00657a1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00657a22: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00657a25: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00657a28: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00657a2b: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00657a30: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00657a37: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x657a3cu); f_005caba4();
    /* 00657a3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00657a3d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00657a40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657a42: je 0x657a7b */ if (fZ) goto L_00657a7b;
L_00657a44:; BB(0x00657a44);
    /* 00657a44: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00657a4b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00657a52: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00657a55: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00657a5b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00657a5e: call 0x657a80 */ r_esp -= 4; W32(r_esp, 0x657a63u); f_00657a80();
    /* 00657a63: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00657a66: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00657a6d:; BB(0x00657a6d);
    /* 00657a6d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00657a70: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00657a77: mov esp, ebp */ r_esp = r_ebp;
    /* 00657a79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657a7a: ret  */ FN_RET(0x00657a04); r_esp += 4; return;
L_00657a7b:; BB(0x00657a7b);
    /* 00657a7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00657a7d: jmp 0x657a6d */ goto L_00657a6d;
}

void f_00657a69(void)
{
    FN_ENTER(0x00657a69);
    /* 00657a69: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00657a6b: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00657a6d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00657a70: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00657a77: mov esp, ebp */ r_esp = r_ebp;
    /* 00657a79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657a7a: ret  */ FN_RET(0x00657a69); r_esp += 4; return;
}

void f_00657a80(void) /* sub_657A80 */
{
    FN_ENTER(0x00657a80);
    /* 00657a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00657a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00657a83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00657a85: push 0x8e6fa0 */ { u32 v = 0x8e6fa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657a8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00657a90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657a91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00657a98: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00657a9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00657a9e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00657aa1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00657aa4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00657aa7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00657aaa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00657aad: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00657ab0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00657ab3: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x657ab8u); f_00619df0();
    /* 00657ab8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00657abf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00657ac2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00657ac5: mov dword ptr [ecx], 0xb32240 */ W32((u32)(r_ecx), 0xb32240u);
    /* 00657acb: mov eax, dword ptr [0x9c7c3c] */ r_eax = R32((u32)(0x9c7c3cu));
    /* 00657ad0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00657ad1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00657ad4: call dword ptr [0xb32254] */ { u32 t = R32((u32)(0xb32254u)); r_esp -= 4; W32(r_esp, 0x657adau); call_ind(t); }
    /* 00657ada: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00657add: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00657adf: push 0x9c7c40 */ { u32 v = 0x9c7c40u; r_esp -= 4; W32(r_esp, v); }
    /* 00657ae4: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x657ae9u); f_007b9a88();
    /* 00657ae9: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00657aec: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x657af1u); f_007b999c();
    /* 00657af1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00657af2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00657af5: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x657afau); f_007b4f54();
    /* 00657afa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00657afd: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00657aff: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x657b02u); call_ind(t); }
    /* 00657b02: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00657b05: call 0x6579a4 */ r_esp -= 4; W32(r_esp, 0x657b0au); f_006579a4();
    /* 00657b0a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00657b0d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00657b10: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00657b17: mov esp, ebp */ r_esp = r_ebp;
    /* 00657b19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657b1a: ret 8 */ FN_RET(0x00657a80); r_esp += 12; return;
}

void f_00657b20(void) /* sub_657B20 */
{
    FN_ENTER(0x00657b20);
    /* 00657b20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00657b21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00657b22: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00657b23: mov eax, ecx */ r_eax = r_ecx;
    /* 00657b25: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 00657b2b: mov edx, 1 */ r_edx = 0x1u;
    /* 00657b30: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00657b32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00657b34: jle 0x657b69 */ if ((fZ||fS!=fO)) goto L_00657b69;
L_00657b36:; BB(0x00657b36);
    /* 00657b36: mov edi, eax */ r_edi = r_eax;
    /* 00657b38: mov esi, edx */ r_esi = r_edx;
L_00657b3a:; BB(0x00657b3a);
    /* 00657b3a: mov eax, ebx */ r_eax = r_ebx;
    /* 00657b3c: add eax, dword ptr [edi + 0xc8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0xc8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00657b42: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00657b45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657b46: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x657b4bu); f_00816eec();
    /* 00657b4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00657b4c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00657b4f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657b52: je 0x657ba5 */ if (fZ) goto L_00657ba5;
L_00657b54:; BB(0x00657b54);
    /* 00657b54: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00657b56:; BB(0x00657b56);
    /* 00657b56: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00657b59: cmp ebx, dword ptr [edi + 0xd4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0xd4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00657b5f: jl 0x657b3a */ if ((fS!=fO)) goto L_00657b3a;
L_00657b61:; BB(0x00657b61);
    /* 00657b61: mov edx, esi */ r_edx = r_esi;
    /* 00657b63: mov eax, edi */ r_eax = r_edi;
    /* 00657b65: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657b67: je 0x657b87 */ if (fZ) goto L_00657b87;
L_00657b69:; BB(0x00657b69);
    /* 00657b69: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00657b6b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657b6d: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00657b73: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00657b76: mov dword ptr [eax + 0xd0], edx */ W32((u32)(r_eax+0xd0u), r_edx);
    /* 00657b7c: mov ecx, eax */ r_ecx = r_eax;
    /* 00657b7e: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x657b83u); f_007b52c4();
    /* 00657b83: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00657b84: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00657b85: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00657b86: ret  */ FN_RET(0x00657b20); r_esp += 4; return;
L_00657b87:; BB(0x00657b87);
    /* 00657b87: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00657b89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657b8b: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00657b91: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00657b94: mov dword ptr [eax + 0xd0], edx */ W32((u32)(r_eax+0xd0u), r_edx);
    /* 00657b9a: mov ecx, eax */ r_ecx = r_eax;
    /* 00657b9c: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x657ba1u); f_007b52ec();
    /* 00657ba1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00657ba2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00657ba3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00657ba4: ret  */ FN_RET(0x00657b20); r_esp += 4; return;
L_00657ba5:; BB(0x00657ba5);
    /* 00657ba5: and esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00657ba8: jmp 0x657b56 */ goto L_00657b56;
}

void f_00657bac(void) /* sub_657BAC */
{
    FN_ENTER(0x00657bac);
    /* 00657bac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00657bad: mov ebp, esp */ r_ebp = r_esp;
    /* 00657baf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00657bb1: push 0x8e6fc8 */ { u32 v = 0x8e6fc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00657bb6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00657bbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657bbd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00657bc4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00657bc7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00657bca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00657bcd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00657bd0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00657bd3: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00657bd8: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00657bdf: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x657be4u); f_008581c5();
    /* 00657be4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00657be5: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00657be8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657bea: je 0x657d47 */ if (fZ) goto L_00657d47;
L_00657bf0:; BB(0x00657bf0);
    /* 00657bf0: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00657bf7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00657bfe: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00657c01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00657c03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657c04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657c05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657c06: push 0x9c7c2c */ { u32 v = 0x9c7c2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00657c0b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00657c0d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x657c12u); f_005b7a84();
    /* 00657c12: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00657c15: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00657c1c:; BB(0x00657c1c);
    /* 00657c1c: mov dword ptr [0xa8f788], ecx */ W32((u32)(0xa8f788u), r_ecx);
    /* 00657c22: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00657c29: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657c2b: je 0x657c38 */ if (fZ) goto L_00657c38;
L_00657c2d:; BB(0x00657c2d);
    /* 00657c2d: call 0x5b90d0 */ r_esp -= 4; W32(r_esp, 0x657c32u); f_005b90d0();
    /* 00657c32: mov ecx, dword ptr [0xa8f788] */ r_ecx = R32((u32)(0xa8f788u));
L_00657c38:; BB(0x00657c38);
    /* 00657c38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657c3a: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x657c3fu); f_005b8624();
    /* 00657c3f: mov ecx, dword ptr [0xa8f788] */ r_ecx = R32((u32)(0xa8f788u));
    /* 00657c45: mov dword ptr [0xa8f784], eax */ W32((u32)(0xa8f784u), r_eax);
    /* 00657c4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00657c4c: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x657c51u); f_005b8610();
    /* 00657c51: mov ebx, eax */ r_ebx = r_eax;
    /* 00657c53: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00657c56: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00657c59: mov esi, dword ptr [eax + 0x2c] */ r_esi = R32((u32)(r_eax+0x2cu));
    /* 00657c5c: mov dword ptr [0xa8f774], edx */ W32((u32)(0xa8f774u), r_edx);
    /* 00657c62: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00657c65: mov edx, dword ptr [esi + 0x2c] */ r_edx = R32((u32)(r_esi+0x2cu));
    /* 00657c68: mov dword ptr [0xa8f79c], 0 */ W32((u32)(0xa8f79cu), 0x0u);
    /* 00657c72: mov dword ptr [0xa8f778], ecx */ W32((u32)(0xa8f778u), r_ecx);
    /* 00657c78: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 00657c7b: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 00657c7e: mov dword ptr [0xa8f77c], edi */ W32((u32)(0xa8f77cu), r_edi);
    /* 00657c84: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00657c87: mov dword ptr [0xa8f780], edx */ W32((u32)(0xa8f780u), r_edx);
    /* 00657c8d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00657c90: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00657c93: mov dword ptr [0xa8f770], edx */ W32((u32)(0xa8f770u), r_edx);
    /* 00657c99: mov dword ptr [ebp - 0x28], 0x937af4 */ W32((u32)(r_ebp+0xffffffd8u), 0x937af4u);
    /* 00657ca0: mov edx, 0x937adc */ r_edx = 0x937adcu;
    /* 00657ca5: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00657ca8: mov dword ptr [ebp - 0x24], 0x937b0c */ W32((u32)(r_ebp+0xffffffdcu), 0x937b0cu);
    /* 00657caf: mov dword ptr [ebp - 0x20], 0x937b20 */ W32((u32)(r_ebp+0xffffffe0u), 0x937b20u);
    /* 00657cb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00657cb7: push dword ptr [0xa8f784] */ { u32 v = R32((u32)(0xa8f784u)); r_esp -= 4; W32(r_esp, v); }
    /* 00657cbd: call 0x81a630 */ r_esp -= 4; W32(r_esp, 0x657cc2u); f_0081a630();
    /* 00657cc2: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00657cc5: push dword ptr [0xa8f784] */ { u32 v = R32((u32)(0xa8f784u)); r_esp -= 4; W32(r_esp, v); }
    /* 00657ccb: mov dword ptr [0xa8f798], eax */ W32((u32)(0xa8f798u), r_eax);
    /* 00657cd0: call 0x81a630 */ r_esp -= 4; W32(r_esp, 0x657cd5u); f_0081a630();
    /* 00657cd5: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00657cd8: push dword ptr [0xa8f784] */ { u32 v = R32((u32)(0xa8f784u)); r_esp -= 4; W32(r_esp, v); }
    /* 00657cde: mov dword ptr [0xa8f794], eax */ W32((u32)(0xa8f794u), r_eax);
    /* 00657ce3: call 0x81a630 */ r_esp -= 4; W32(r_esp, 0x657ce8u); f_0081a630();
    /* 00657ce8: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00657ceb: push dword ptr [0xa8f784] */ { u32 v = R32((u32)(0xa8f784u)); r_esp -= 4; W32(r_esp, v); }
    /* 00657cf1: mov dword ptr [0xa8f790], eax */ W32((u32)(0xa8f790u), r_eax);
    /* 00657cf6: call 0x81a630 */ r_esp -= 4; W32(r_esp, 0x657cfbu); f_0081a630();
    /* 00657cfb: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00657cfe: mov edx, dword ptr [0xa8f790] */ r_edx = R32((u32)(0xa8f790u));
    /* 00657d04: mov dword ptr [0xa8f78c], eax */ W32((u32)(0xa8f78cu), r_eax);
    /* 00657d09: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00657d0c: je 0x657d26 */ if (fZ) goto L_00657d26;
L_00657d0e:; BB(0x00657d0e);
    /* 00657d0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00657d0f: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00657d12: push dword ptr [eax + 0x30] */ { u32 v = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00657d15: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00657d17: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x657d1cu); f_0066f3d4();
    /* 00657d1c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00657d1f: mov dword ptr [0xa8f7a0], eax */ W32((u32)(0xa8f7a0u), r_eax);
    /* 00657d24: jmp 0x657d30 */ goto L_00657d30;
L_00657d26:; BB(0x00657d26);
    /* 00657d26: mov dword ptr [0xa8f7a0], 0 */ W32((u32)(0xa8f7a0u), 0x0u);
L_00657d30:; BB(0x00657d30);
    /* 00657d30: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00657d33: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00657d36: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00657d39: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00657d3c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00657d43: mov esp, ebp */ r_esp = r_ebp;
    /* 00657d45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657d46: ret  */ FN_RET(0x00657bac); r_esp += 4; return;
L_00657d47:; BB(0x00657d47);
    /* 00657d47: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00657d49: jmp 0x657c1c */ goto L_00657c1c;
}

void f_00657d50(void) /* sub_657D50 */
{
    FN_ENTER(0x00657d50);
    /* 00657d50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00657d51: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00657d53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00657d55: call 0x657d74 */ r_esp -= 4; W32(r_esp, 0x657d5au); f_00657d74();
    /* 00657d5a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00657d5e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00657d60: jne 0x657d66 */ if (!fZ) goto L_00657d66;
L_00657d62:; BB(0x00657d62);
    /* 00657d62: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00657d63: ret 4 */ FN_RET(0x00657d50); r_esp += 8; return;
L_00657d66:; BB(0x00657d66);
    /* 00657d66: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00657d67: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x657d6cu); f_005c2f74();
    /* 00657d6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00657d6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00657d6e: ret 4 */ FN_RET(0x00657d50); r_esp += 8; return;
}

void f_00657d74(void) /* sub_657D74 */
{
    FN_ENTER(0x00657d74);
    /* 00657d74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00657d75: mov ebp, esp */ r_ebp = r_esp;
    /* 00657d77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00657d79: push 0x8e6fe4 */ { u32 v = 0x8e6fe4u; r_esp -= 4; W32(r_esp, v); }
    /* 00657d7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00657d84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657d85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00657d8c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00657d8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00657d92: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00657d95: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00657d98: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00657d9b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00657d9e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00657da5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00657da8: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 00657dae: mov dword ptr [eax], 0xb32340 */ W32((u32)(r_eax), 0xb32340u);
    /* 00657db4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657db6: je 0x657dd2 */ if (fZ) goto L_00657dd2;
L_00657db8:; BB(0x00657db8);
    /* 00657db8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00657dbc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00657dc1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00657dc5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00657dc8: mov dword ptr [eax + 0xdc], 0 */ W32((u32)(r_eax+0xdcu), 0x0u);
L_00657dd2:; BB(0x00657dd2);
    /* 00657dd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657dd3: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x657dd8u); f_007b4e84();
    /* 00657dd8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00657dd9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00657ddc: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x657de1u); f_007b9c8c();
    /* 00657de1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00657de8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00657deb: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x657df0u); f_00619b10();
    /* 00657df0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00657df3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00657dfa: mov esp, ebp */ r_esp = r_ebp;
    /* 00657dfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657dfd: ret  */ FN_RET(0x00657d74); r_esp += 4; return;
}

void f_00657e00(void) /* sub_657E00 */
{
    FN_ENTER(0x00657e00);
    /* 00657e00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00657e01: mov ebx, esp */ r_ebx = r_esp;
    /* 00657e03: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00657e06: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00657e07: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00657e08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00657e09: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00657e0c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00657e0e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00657e11: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00657e13: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x657e16u); call_ind(t); }
    /* 00657e16: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 00657e1c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00657e1e: je 0x658024 */ if (fZ) goto L_00658024;
L_00657e24:; BB(0x00657e24);
    /* 00657e24: fld dword ptr [0x937b98] */ FPUSH(R_F32((u32)(0x937b98u)));
    /* 00657e2a: fld dword ptr [ebp + 0xb4] */ FPUSH(R_F32((u32)(r_ebp+0xb4u)));
    /* 00657e30: fadd dword ptr [ebp + 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xb8u));
    /* 00657e36: mov edx, dword ptr [ebp + 0xbc] */ r_edx = R32((u32)(r_ebp+0xbcu));
    /* 00657e3c: fst dword ptr [ebp + 0xb4] */ W_F32((u32)(r_ebp+0xb4u), ST(0));
    /* 00657e42: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00657e45: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00657e47: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00657e4a: mov dword ptr [esp + 0x60], esi */ W32((u32)(r_esp+0x60u), r_esi);
    /* 00657e4e: fild dword ptr [esp + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x60u)));
    /* 00657e52: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00657e55: fadd dword ptr [esi*4 + 0x937b58] */ ST(0) = ST(0) + R_F32((u32)(r_esi*4+0x937b58u));
    /* 00657e5c: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 00657e5e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00657e60: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00657e62: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00657e64: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00657e65: jae 0x657eee */ if (!fC) goto L_00657eee;
L_00657e6b:; BB(0x00657e6b);
    /* 00657e6b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00657e6d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00657e6f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00657e70: jae 0x657eee */ if (!fC) goto L_00657eee;
L_00657e72:; BB(0x00657e72);
    /* 00657e72: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00657e74: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00657e76: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00657e78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657e7a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00657e7c: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x657e81u); f_007b52c4();
    /* 00657e81: mov edx, dword ptr [ebp + 0xdc] */ r_edx = R32((u32)(r_ebp+0xdcu));
    /* 00657e87: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657e89: je 0x657ec8 */ if (fZ) goto L_00657ec8;
L_00657e8b:; BB(0x00657e8b);
    /* 00657e8b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00657e8f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00657e94: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00657e98: fld dword ptr [ebp + 0xb4] */ FPUSH(R_F32((u32)(r_ebp+0xb4u)));
    /* 00657e9e: mov edx, dword ptr [ebp + 0xbc] */ r_edx = R32((u32)(r_ebp+0xbcu));
    /* 00657ea4: mov dword ptr [ebp + 0xdc], 0 */ W32((u32)(r_ebp+0xdcu), 0x0u);
    /* 00657eae: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00657eb1: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00657eb4: mov dword ptr [esp + 0x68], esi */ W32((u32)(r_esp+0x68u), r_esi);
    /* 00657eb8: fild dword ptr [esp + 0x68] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x68u)));
    /* 00657ebc: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00657ebf: fadd dword ptr [esi*4 + 0x937b58] */ ST(0) = ST(0) + R_F32((u32)(r_esi*4+0x937b58u));
    /* 00657ec6: jmp 0x657ef5 */ goto L_00657ef5;
L_00657ec8:; BB(0x00657ec8);
    /* 00657ec8: fld dword ptr [ebp + 0xb4] */ FPUSH(R_F32((u32)(r_ebp+0xb4u)));
    /* 00657ece: mov eax, dword ptr [ebp + 0xbc] */ r_eax = R32((u32)(r_ebp+0xbcu));
    /* 00657ed4: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00657ed7: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00657eda: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00657ede: fild dword ptr [esp + 0x68] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x68u)));
    /* 00657ee2: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00657ee5: fadd dword ptr [edx*4 + 0x937b58] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x937b58u));
    /* 00657eec: jmp 0x657ef5 */ goto L_00657ef5;
L_00657eee:; BB(0x00657eee);
    /* 00657eee: mov edi, 1 */ r_edi = 0x1u;
    /* 00657ef3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00657ef5:; BB(0x00657ef5);
    /* 00657ef5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00657ef7: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00657ef9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00657efb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00657efc: jbe 0x657f0c */ if ((fC||fZ)) goto L_00657f0c;
L_00657efe:; BB(0x00657efe);
    /* 00657efe: fstp dword ptr [ebp + 0xb4] */ W_F32((u32)(r_ebp+0xb4u), ST(0)); FPOP();
    /* 00657f04: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 00657f07: jmp 0x658003 */ goto L_00658003;
L_00657f0c:; BB(0x00657f0c);
    /* 00657f0c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00657f0e: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 00657f11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00657f13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657f14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657f15: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00657f16: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00657f17: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00657f1c: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x657f21u); f_008144b0();
    /* 00657f21: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00657f24: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657f26: je 0x658003 */ if (fZ) goto L_00658003;
L_00657f2c:; BB(0x00657f2c);
    /* 00657f2c: mov edi, dword ptr [ebp + 0xd8] */ r_edi = R32((u32)(r_ebp+0xd8u));
    /* 00657f32: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00657f35: mov dword ptr [ebp + 0xd8], edi */ W32((u32)(r_ebp+0xd8u), r_edi);
    /* 00657f3b: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 00657f40: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00657f42: mov eax, edi */ r_eax = r_edi;
    /* 00657f44: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00657f47: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00657f49: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00657f4c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00657f4e: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00657f51: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00657f53: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00657f55: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00657f57: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00657f59: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00657f5b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00657f5d: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00657f5f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657f61: jne 0x658003 */ if (!fZ) goto L_00658003;
L_00657f67:; BB(0x00657f67);
    /* 00657f67: mov dword ptr [esp + 0x40], 0x42200000 */ W32((u32)(r_esp+0x40u), 0x42200000u);
    /* 00657f6f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00657f72: mov dword ptr [esp + 0x44], 0 */ W32((u32)(r_esp+0x44u), 0x0u);
    /* 00657f7a: mov dword ptr [esp + 0x48], 0 */ W32((u32)(r_esp+0x48u), 0x0u);
    /* 00657f82: mov dword ptr [esp + 0x4c], 0xc2200000 */ W32((u32)(r_esp+0x4cu), 0xc2200000u);
    /* 00657f8a: mov dword ptr [esp + 0x50], 0 */ W32((u32)(r_esp+0x50u), 0x0u);
    /* 00657f92: mov dword ptr [esp + 0x54], 0 */ W32((u32)(r_esp+0x54u), 0x0u);
    /* 00657f9a: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x657f9fu); f_00830cd8();
    /* 00657f9f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00657fa2: mov edx, esi */ r_edx = r_esi;
    /* 00657fa4: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x657fa9u); f_008316b4();
    /* 00657fa9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00657fac: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00657faf: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x657fb4u); f_0082d8bc();
    /* 00657fb4: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00657fb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657fb9: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00657fbd: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00657fc1: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x657fc6u); f_00830aa0();
    /* 00657fc6: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 00657fca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657fcb: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00657fcf: lea edx, [esp + 0x50] */ r_edx = (u32)(r_esp+0x50u);
    /* 00657fd3: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x657fd8u); f_00830aa0();
    /* 00657fd8: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00657fdc: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00657fe1: push 0x229 */ { u32 v = 0x229u; r_esp -= 4; W32(r_esp, v); }
    /* 00657fe6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657fe7: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x657fecu); f_0050b7a4();
    /* 00657fec: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 00657ff0: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00657ff5: push 0x229 */ { u32 v = 0x229u; r_esp -= 4; W32(r_esp, v); }
    /* 00657ffa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657ffb: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x658000u); f_0050b7a4();
    /* 00658000: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00658003:; BB(0x00658003);
    /* 00658003: movzx ecx, word ptr [ebp + 0x60] */ r_ecx = (u32)R16((u32)(r_ebp+0x60u));
    /* 00658007: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00658009: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065800a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065800b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065800c: push 0xff00ff00 */ { u32 v = 0xff00ff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00658011: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00658012: call 0x8056b0 */ r_esp -= 4; W32(r_esp, 0x658017u); f_008056b0();
    /* 00658017: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065801a: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065801d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065801e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065801f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00658020: mov esp, ebx */ r_esp = r_ebx;
    /* 00658022: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00658023: ret  */ FN_RET(0x00657e00); r_esp += 4; return;
L_00658024:; BB(0x00658024);
    /* 00658024: movzx edx, word ptr [ebp + 0x60] */ r_edx = (u32)R16((u32)(r_ebp+0x60u));
    /* 00658028: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 0065802b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065802d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065802e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065802f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658030: push 0xffff0000 */ { u32 v = 0xffff0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00658035: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00658036: call 0x8056b0 */ r_esp -= 4; W32(r_esp, 0x65803bu); f_008056b0();
    /* 0065803b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065803e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00658040: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00658042: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00658044: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x658049u); f_007b52ec();
    /* 00658049: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065804c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065804d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065804e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065804f: mov esp, ebx */ r_esp = r_ebx;
    /* 00658051: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00658052: ret  */ FN_RET(0x00657e00); r_esp += 4; return;
}

