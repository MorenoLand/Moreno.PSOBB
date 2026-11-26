#include "protos.h"

void f_0054401f(void)
{
    FN_ENTER(0x0054401f);
    /* 0054401f: add dword ptr [ebx + eax], 0 */ { u32 ad = (u32)(r_ebx+r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00544027: add byte ptr [esi - 0x77], ah */ { u32 ad = (u32)(r_esi+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0054402a: xchg ebx, eax */ { u32 x = r_ebx; u32 y = r_eax; r_ebx = y; r_eax = x; }
    /* 0054402b: add eax, dword ptr cs:[eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054402e: add byte ptr [ebx + 0x38ee8cb], cl */ { u32 ad = (u32)(r_ebx+0x38ee8cbu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00544034: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00544036: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00544038: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x54403du); f_0078730c();
    /* 0054403d: fld dword ptr [ebx + 0x394] */ FPUSH(R_F32((u32)(r_ebx+0x394u)));
    /* 00544043: fld dword ptr [ebx + 0x304] */ FPUSH(R_F32((u32)(r_ebx+0x304u)));
    /* 00544049: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0054404b: mov eax, dword ptr [ebx + 0x3bc] */ r_eax = R32((u32)(r_ebx+0x3bcu));
    /* 00544051: mov edx, dword ptr [ebx + 0x3c0] */ r_edx = R32((u32)(r_ebx+0x3c0u));
    /* 00544057: fstp dword ptr [ebx + 0x304] */ W_F32((u32)(r_ebx+0x304u), ST(0)); FPOP();
    /* 0054405d: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 00544060: mov eax, dword ptr [ebx + 0x3c4] */ r_eax = R32((u32)(r_ebx+0x3c4u));
    /* 00544066: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 00544069: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 0054406c: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00544072: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544077: je 0x5440a4 */ if (fZ) goto L_005440a4;
L_00544079:; BB(0x00544079);
    /* 00544079: fld dword ptr [0x923a54] */ FPUSH(R_F32((u32)(0x923a54u)));
    /* 0054407f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00544081: fcom dword ptr [0x923a50] */ fx_compare(ST(0), R_F32((u32)(0x923a50u))); 
    /* 00544087: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00544089: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054408a: jb 0x544094 */ if (fC) goto L_00544094;
L_0054408c:; BB(0x0054408c);
    /* 0054408c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054408e: fld dword ptr [0x923a7c] */ FPUSH(R_F32((u32)(0x923a7cu)));
L_00544094:; BB(0x00544094);
    /* 00544094: fld dword ptr [0x923a80] */ FPUSH(R_F32((u32)(0x923a80u)));
    /* 0054409a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054409c: fstp dword ptr [ebx + 0x394] */ W_F32((u32)(r_ebx+0x394u), ST(0)); FPOP();
    /* 005440a2: jmp 0x5440cb */ goto L_005440cb;
L_005440a4:; BB(0x005440a4);
    /* 005440a4: fld dword ptr [0x923a80] */ FPUSH(R_F32((u32)(0x923a80u)));
    /* 005440aa: fld dword ptr [0x923a54] */ FPUSH(R_F32((u32)(0x923a54u)));
    /* 005440b0: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 005440b2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005440b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005440b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005440b7: jae 0x5440bd */ if (!fC) goto L_005440bd;
L_005440b9:; BB(0x005440b9);
    /* 005440b9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005440bb: jmp 0x5440c5 */ goto L_005440c5;
L_005440bd:; BB(0x005440bd);
    /* 005440bd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005440bf: fld dword ptr [0x923a80] */ FPUSH(R_F32((u32)(0x923a80u)));
L_005440c5:; BB(0x005440c5);
    /* 005440c5: fstp dword ptr [ebx + 0x394] */ W_F32((u32)(r_ebx+0x394u), ST(0)); FPOP();
L_005440cb:; BB(0x005440cb);
    /* 005440cb: fld dword ptr [0x923a78] */ FPUSH(R_F32((u32)(0x923a78u)));
    /* 005440d1: fadd dword ptr [ebx + 0x39c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x39cu));
    /* 005440d7: fld dword ptr [ebx + 0x398] */ FPUSH(R_F32((u32)(r_ebx+0x398u)));
    /* 005440dd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005440df: fst dword ptr [ebx + 0x39c] */ W_F32((u32)(r_ebx+0x39cu), ST(0));
    /* 005440e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005440e7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005440e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005440eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005440ec: jae 0x5440f2 */ if (!fC) goto L_005440f2;
L_005440ee:; BB(0x005440ee);
    /* 005440ee: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005440f0: jmp 0x544107 */ goto L_00544107;
L_005440f2:; BB(0x005440f2);
    /* 005440f2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005440f4: fld dword ptr [0x923a74] */ FPUSH(R_F32((u32)(0x923a74u)));
    /* 005440fa: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005440fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005440fe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005440ff: jbe 0x544105 */ if ((fC||fZ)) goto L_00544105;
L_00544101:; BB(0x00544101);
    /* 00544101: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00544103: jmp 0x544107 */ goto L_00544107;
L_00544105:; BB(0x00544105);
    /* 00544105: fstp st(1) */ ST(1) = ST(0); FPOP();
L_00544107:; BB(0x00544107);
    /* 00544107: fstp dword ptr [ebx + 0x398] */ W_F32((u32)(r_ebx+0x398u), ST(0)); FPOP();
    /* 0054410d: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00544112: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x544117u); f_0082d990();
    /* 00544117: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0054411a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x54411fu); f_0082d838();
    /* 0054411f: mov edx, dword ptr [ebx + 0x64] */ r_edx = R32((u32)(r_ebx+0x64u));
    /* 00544122: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00544124: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x544129u); f_00830c04();
    /* 00544129: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0054412c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054412e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x544133u); f_0082d8bc();
    /* 00544133: fld dword ptr [0x923a70] */ FPUSH(R_F32((u32)(0x923a70u)));
    /* 00544139: fadd dword ptr [ebx + 0x398] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x398u));
    /* 0054413f: fadd dword ptr [ebx + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x394u));
    /* 00544145: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00544149: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00544150: lea eax, [ebx + 0x3bc] */ r_eax = (u32)(r_ebx+0x3bcu);
    /* 00544156: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00544158: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00544160: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544161: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00544165: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x54416au); f_00830aa0();
    /* 0054416a: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00544171: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544174: je 0x544228 */ if (fZ) goto L_00544228;
L_0054417a:; BB(0x0054417a);
    /* 0054417a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x54417fu); f_0082da80();
    /* 0054417f: fld dword ptr [0x923a64] */ FPUSH(R_F32((u32)(0x923a64u)));
    /* 00544185: fadd dword ptr [ebx + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x394u));
    /* 0054418b: mov edx, dword ptr [0xa9c4ec] */ r_edx = R32((u32)(0xa9c4ecu));
    /* 00544191: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 00544197: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0054419a: test dl, 3 */ {  u32 a = (u8)r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054419d: jne 0x5441ac */ if (!fZ) goto L_005441ac;
L_0054419f:; BB(0x0054419f);
    /* 0054419f: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 005441a5: test eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005441aa: jne 0x5441d0 */ if (!fZ) goto L_005441d0;
L_005441ac:; BB(0x005441ac);
    /* 005441ac: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005441af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005441b0: ret  */ FN_RET(0x0054401f); r_esp += 4; return;
L_005441d0:; BB(0x005441d0);
    /* 005441d0: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005441d3: test al, 0x22 */ {  u32 a = (u8)r_eax; u32 b = 0x22u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005441d5: jne 0x5441ac */ if (!fZ) goto L_005441ac;
L_005441d7:; BB(0x005441d7);
    /* 005441d7: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005441dc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005441de: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005441e0: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005441e5: push 0x43160000 */ { u32 v = 0x43160000u; r_esp -= 4; W32(r_esp, v); }
    /* 005441ea: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5441edu); call_ind(t); }
    /* 005441ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005441ef: je 0x5441ac */ if (fZ) goto L_005441ac;
L_005441f1:; BB(0x005441f1);
    /* 005441f1: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005441f5: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005441f8: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 005441fb: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005441ff: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00544202: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00544206: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0054420a: fadd dword ptr [ebx + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x394u));
    /* 00544210: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00544214: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00544218: push 0xd6 */ { u32 v = 0xd6u; r_esp -= 4; W32(r_esp, v); }
    /* 0054421d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054421e: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x544223u); f_0050b510();
    /* 00544223: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00544226: jmp 0x5441ac */ goto L_005441ac;
L_00544228:; BB(0x00544228);
    /* 00544228: movzx eax, byte ptr [0xa737c4] */ r_eax = (u32)R8((u32)(0xa737c4u));
    /* 0054422f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00544231: jne 0x54428d */ if (!fZ) goto L_0054428d;
L_00544233:; BB(0x00544233);
    /* 00544233: mov dword ptr [0xa737cc], 0x41200000 */ W32((u32)(0xa737ccu), 0x41200000u);
    /* 0054423d: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00544242: mov byte ptr [0xa737c4], al */ W8((u32)(0xa737c4u), (u8)r_eax);
    /* 00544247: mov dword ptr [0xa737d0], 0x40000000 */ W32((u32)(0xa737d0u), 0x40000000u);
    /* 00544251: mov dword ptr [0xa737d8], 0x41200000 */ W32((u32)(0xa737d8u), 0x41200000u);
    /* 0054425b: mov dword ptr [0xa737dc], 0xc0000000 */ W32((u32)(0xa737dcu), 0xc0000000u);
    /* 00544265: mov dword ptr [0xa737e0], 0x40000000 */ W32((u32)(0xa737e0u), 0x40000000u);
    /* 0054426f: mov dword ptr [0xa737e4], 0x41200000 */ W32((u32)(0xa737e4u), 0x41200000u);
    /* 00544279: mov dword ptr [0xa737ec], 0xc0000000 */ W32((u32)(0xa737ecu), 0xc0000000u);
    /* 00544283: mov dword ptr [0xa737f0], 0x41200000 */ W32((u32)(0xa737f0u), 0x41200000u);
L_0054428d:; BB(0x0054428d);
    /* 0054428d: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00544291: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 00544295: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00544297: lea eax, [ebx + 0x3c8] */ r_eax = (u32)(r_ebx+0x3c8u);
    /* 0054429d: mov ebp, eax */ r_ebp = r_eax;
    /* 0054429f: mov edi, edx */ r_edi = r_edx;
L_005442a1:; BB(0x005442a1);
    /* 005442a1: lea edx, [edi + 0xa737c8] */ r_edx = (u32)(r_edi+0xa737c8u);
    /* 005442a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005442a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005442aa: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5442afu); f_00830aa0();
    /* 005442af: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005442b2: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005442b5: cmp edi, 0x30 */ {  u32 a = r_edi; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005442b8: jl 0x5442a1 */ if ((fS!=fO)) goto L_005442a1;
L_005442ba:; BB(0x005442ba);
    /* 005442ba: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005442be: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 005442c2: jmp 0x54417a */ goto L_0054417a;
}

void f_00544144(void)
{
    FN_ENTER(0x00544144);
    /* 00544144: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00544146: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 00544147: and al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00544149: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00544150: lea eax, [ebx + 0x3bc] */ r_eax = (u32)(r_ebx+0x3bcu);
    /* 00544156: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00544158: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00544160: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544161: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00544165: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x54416au); f_00830aa0();
    /* 0054416a: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00544171: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544174: je 0x544228 */ if (fZ) goto L_00544228;
L_0054417a:; BB(0x0054417a);
    /* 0054417a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x54417fu); f_0082da80();
    /* 0054417f: fld dword ptr [0x923a64] */ FPUSH(R_F32((u32)(0x923a64u)));
    /* 00544185: fadd dword ptr [ebx + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x394u));
    /* 0054418b: mov edx, dword ptr [0xa9c4ec] */ r_edx = R32((u32)(0xa9c4ecu));
    /* 00544191: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 00544197: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0054419a: test dl, 3 */ {  u32 a = (u8)r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054419d: jne 0x5441ac */ if (!fZ) goto L_005441ac;
L_0054419f:; BB(0x0054419f);
    /* 0054419f: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 005441a5: test eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005441aa: jne 0x5441d0 */ if (!fZ) goto L_005441d0;
L_005441ac:; BB(0x005441ac);
    /* 005441ac: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005441af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005441b0: ret  */ FN_RET(0x00544144); r_esp += 4; return;
L_005441d0:; BB(0x005441d0);
    /* 005441d0: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005441d3: test al, 0x22 */ {  u32 a = (u8)r_eax; u32 b = 0x22u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005441d5: jne 0x5441ac */ if (!fZ) goto L_005441ac;
L_005441d7:; BB(0x005441d7);
    /* 005441d7: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005441dc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005441de: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005441e0: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005441e5: push 0x43160000 */ { u32 v = 0x43160000u; r_esp -= 4; W32(r_esp, v); }
    /* 005441ea: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5441edu); call_ind(t); }
    /* 005441ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005441ef: je 0x5441ac */ if (fZ) goto L_005441ac;
L_005441f1:; BB(0x005441f1);
    /* 005441f1: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005441f5: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005441f8: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 005441fb: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005441ff: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00544202: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00544206: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0054420a: fadd dword ptr [ebx + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x394u));
    /* 00544210: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00544214: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00544218: push 0xd6 */ { u32 v = 0xd6u; r_esp -= 4; W32(r_esp, v); }
    /* 0054421d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054421e: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x544223u); f_0050b510();
    /* 00544223: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00544226: jmp 0x5441ac */ goto L_005441ac;
L_00544228:; BB(0x00544228);
    /* 00544228: movzx eax, byte ptr [0xa737c4] */ r_eax = (u32)R8((u32)(0xa737c4u));
    /* 0054422f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00544231: jne 0x54428d */ if (!fZ) goto L_0054428d;
L_00544233:; BB(0x00544233);
    /* 00544233: mov dword ptr [0xa737cc], 0x41200000 */ W32((u32)(0xa737ccu), 0x41200000u);
    /* 0054423d: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00544242: mov byte ptr [0xa737c4], al */ W8((u32)(0xa737c4u), (u8)r_eax);
    /* 00544247: mov dword ptr [0xa737d0], 0x40000000 */ W32((u32)(0xa737d0u), 0x40000000u);
    /* 00544251: mov dword ptr [0xa737d8], 0x41200000 */ W32((u32)(0xa737d8u), 0x41200000u);
    /* 0054425b: mov dword ptr [0xa737dc], 0xc0000000 */ W32((u32)(0xa737dcu), 0xc0000000u);
    /* 00544265: mov dword ptr [0xa737e0], 0x40000000 */ W32((u32)(0xa737e0u), 0x40000000u);
    /* 0054426f: mov dword ptr [0xa737e4], 0x41200000 */ W32((u32)(0xa737e4u), 0x41200000u);
    /* 00544279: mov dword ptr [0xa737ec], 0xc0000000 */ W32((u32)(0xa737ecu), 0xc0000000u);
    /* 00544283: mov dword ptr [0xa737f0], 0x41200000 */ W32((u32)(0xa737f0u), 0x41200000u);
L_0054428d:; BB(0x0054428d);
    /* 0054428d: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00544291: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 00544295: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00544297: lea eax, [ebx + 0x3c8] */ r_eax = (u32)(r_ebx+0x3c8u);
    /* 0054429d: mov ebp, eax */ r_ebp = r_eax;
    /* 0054429f: mov edi, edx */ r_edi = r_edx;
L_005442a1:; BB(0x005442a1);
    /* 005442a1: lea edx, [edi + 0xa737c8] */ r_edx = (u32)(r_edi+0xa737c8u);
    /* 005442a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005442a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005442aa: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5442afu); f_00830aa0();
    /* 005442af: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005442b2: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005442b5: cmp edi, 0x30 */ {  u32 a = r_edi; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005442b8: jl 0x5442a1 */ if ((fS!=fO)) goto L_005442a1;
L_005442ba:; BB(0x005442ba);
    /* 005442ba: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005442be: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 005442c2: jmp 0x54417a */ goto L_0054417a;
}

void f_00544345(void)
{
    FN_ENTER(0x00544345);
    goto L_00544345;
L_00543f89:; BB(0x00543f89);
    /* 00543f89: test eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543f8e: jne 0x5442c7 */ if (!fZ) goto L_005442c7;
L_00543f94:; BB(0x00543f94);
    /* 00543f94: mov edx, dword ptr [ebx + 0x408] */ r_edx = R32((u32)(r_ebx+0x408u));
    /* 00543f9a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543f9c: je 0x543fb5 */ if (fZ) goto L_00543fb5;
L_00543f9e:; BB(0x00543f9e);
    /* 00543f9e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00543fa2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00543fa7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00543fab: mov dword ptr [ebx + 0x408], 0 */ W32((u32)(r_ebx+0x408u), 0x0u);
L_00543fb5:; BB(0x00543fb5);
    /* 00543fb5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00543fb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00543fb9: call dword ptr [eax + 0x98] */ { u32 t = R32((u32)(r_eax+0x98u)); r_esp -= 4; W32(r_esp, 0x543fbfu); call_ind(t); }
    /* 00543fbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543fc1: jne 0x5441b1 */ if (!fZ) goto L_005441b1;
L_00543fc7:; BB(0x00543fc7);
    /* 00543fc7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00543fc9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00543fcb: call dword ptr [eax + 0xa8] */ { u32 t = R32((u32)(r_eax+0xa8u)); r_esp -= 4; W32(r_esp, 0x543fd1u); call_ind(t); }
    /* 00543fd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543fd3: jne 0x5441b1 */ if (!fZ) goto L_005441b1;
L_00543fd9:; BB(0x00543fd9);
    /* 00543fd9: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00543fdb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00543fdd: call dword ptr [eax + 0xa4] */ { u32 t = R32((u32)(r_eax+0xa4u)); r_esp -= 4; W32(r_esp, 0x543fe3u); call_ind(t); }
    /* 00543fe3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543fe5: jne 0x5441b1 */ if (!fZ) goto L_005441b1;
L_00543feb:; BB(0x00543feb);
    /* 00543feb: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00543ff2: mov edx, dword ptr [ebx + 0x37c] */ r_edx = R32((u32)(r_ebx+0x37cu));
    /* 00543ff8: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543ffa: je 0x54402f */ if (fZ) goto L_0054402f;
L_00543ffc:; BB(0x00543ffc);
    /* 00543ffc: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00544002: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544005: je 0x54401e */ if (fZ) goto L_0054401e;
L_00544007:; BB(0x00544007);
    /* 00544007: mov dword ptr [ebx + 0x384], 0xffffffff */ W32((u32)(r_ebx+0x384u), 0xffffffffu);
    /* 00544011: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00544013: call 0x5443c4 */ r_esp -= 4; W32(r_esp, 0x544018u); f_005443c4();
    /* 00544018: mov edx, dword ptr [ebx + 0x37c] */ r_edx = R32((u32)(r_ebx+0x37cu));
L_0054401e:; BB(0x0054401e);
    /* 0054401e: mov dword ptr [ebx + 0x384], 0 */ W32((u32)(r_ebx+0x384u), 0x0u);
    /* 00544028: mov word ptr [ebx + 0x32e], dx */ W16((u32)(r_ebx+0x32eu), (u16)r_edx);
L_0054402f:; BB(0x0054402f);
    /* 0054402f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00544031: call 0x5443c4 */ r_esp -= 4; W32(r_esp, 0x544036u); f_005443c4();
    /* 00544036: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00544038: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x54403du); f_0078730c();
    /* 0054403d: fld dword ptr [ebx + 0x394] */ FPUSH(R_F32((u32)(r_ebx+0x394u)));
    /* 00544043: fld dword ptr [ebx + 0x304] */ FPUSH(R_F32((u32)(r_ebx+0x304u)));
    /* 00544049: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0054404b: mov eax, dword ptr [ebx + 0x3bc] */ r_eax = R32((u32)(r_ebx+0x3bcu));
    /* 00544051: mov edx, dword ptr [ebx + 0x3c0] */ r_edx = R32((u32)(r_ebx+0x3c0u));
    /* 00544057: fstp dword ptr [ebx + 0x304] */ W_F32((u32)(r_ebx+0x304u), ST(0)); FPOP();
    /* 0054405d: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 00544060: mov eax, dword ptr [ebx + 0x3c4] */ r_eax = R32((u32)(r_ebx+0x3c4u));
    /* 00544066: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 00544069: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 0054406c: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00544072: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544077: je 0x5440a4 */ if (fZ) goto L_005440a4;
L_00544079:; BB(0x00544079);
    /* 00544079: fld dword ptr [0x923a54] */ FPUSH(R_F32((u32)(0x923a54u)));
    /* 0054407f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00544081: fcom dword ptr [0x923a50] */ fx_compare(ST(0), R_F32((u32)(0x923a50u))); 
    /* 00544087: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00544089: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054408a: jb 0x544094 */ if (fC) goto L_00544094;
L_0054408c:; BB(0x0054408c);
    /* 0054408c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054408e: fld dword ptr [0x923a7c] */ FPUSH(R_F32((u32)(0x923a7cu)));
L_00544094:; BB(0x00544094);
    /* 00544094: fld dword ptr [0x923a80] */ FPUSH(R_F32((u32)(0x923a80u)));
    /* 0054409a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054409c: fstp dword ptr [ebx + 0x394] */ W_F32((u32)(r_ebx+0x394u), ST(0)); FPOP();
    /* 005440a2: jmp 0x5440cb */ goto L_005440cb;
L_005440a4:; BB(0x005440a4);
    /* 005440a4: fld dword ptr [0x923a80] */ FPUSH(R_F32((u32)(0x923a80u)));
    /* 005440aa: fld dword ptr [0x923a54] */ FPUSH(R_F32((u32)(0x923a54u)));
    /* 005440b0: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 005440b2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005440b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005440b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005440b7: jae 0x5440bd */ if (!fC) goto L_005440bd;
L_005440b9:; BB(0x005440b9);
    /* 005440b9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005440bb: jmp 0x5440c5 */ goto L_005440c5;
L_005440bd:; BB(0x005440bd);
    /* 005440bd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005440bf: fld dword ptr [0x923a80] */ FPUSH(R_F32((u32)(0x923a80u)));
L_005440c5:; BB(0x005440c5);
    /* 005440c5: fstp dword ptr [ebx + 0x394] */ W_F32((u32)(r_ebx+0x394u), ST(0)); FPOP();
L_005440cb:; BB(0x005440cb);
    /* 005440cb: fld dword ptr [0x923a78] */ FPUSH(R_F32((u32)(0x923a78u)));
    /* 005440d1: fadd dword ptr [ebx + 0x39c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x39cu));
    /* 005440d7: fld dword ptr [ebx + 0x398] */ FPUSH(R_F32((u32)(r_ebx+0x398u)));
    /* 005440dd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005440df: fst dword ptr [ebx + 0x39c] */ W_F32((u32)(r_ebx+0x39cu), ST(0));
    /* 005440e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005440e7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005440e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005440eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005440ec: jae 0x5440f2 */ if (!fC) goto L_005440f2;
L_005440ee:; BB(0x005440ee);
    /* 005440ee: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005440f0: jmp 0x544107 */ goto L_00544107;
L_005440f2:; BB(0x005440f2);
    /* 005440f2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005440f4: fld dword ptr [0x923a74] */ FPUSH(R_F32((u32)(0x923a74u)));
    /* 005440fa: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005440fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005440fe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005440ff: jbe 0x544105 */ if ((fC||fZ)) goto L_00544105;
L_00544101:; BB(0x00544101);
    /* 00544101: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00544103: jmp 0x544107 */ goto L_00544107;
L_00544105:; BB(0x00544105);
    /* 00544105: fstp st(1) */ ST(1) = ST(0); FPOP();
L_00544107:; BB(0x00544107);
    /* 00544107: fstp dword ptr [ebx + 0x398] */ W_F32((u32)(r_ebx+0x398u), ST(0)); FPOP();
    /* 0054410d: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00544112: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x544117u); f_0082d990();
    /* 00544117: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0054411a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x54411fu); f_0082d838();
    /* 0054411f: mov edx, dword ptr [ebx + 0x64] */ r_edx = R32((u32)(r_ebx+0x64u));
    /* 00544122: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00544124: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x544129u); f_00830c04();
    /* 00544129: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0054412c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054412e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x544133u); f_0082d8bc();
    /* 00544133: fld dword ptr [0x923a70] */ FPUSH(R_F32((u32)(0x923a70u)));
    /* 00544139: fadd dword ptr [ebx + 0x398] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x398u));
    /* 0054413f: fadd dword ptr [ebx + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x394u));
    /* 00544145: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00544149: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00544150: lea eax, [ebx + 0x3bc] */ r_eax = (u32)(r_ebx+0x3bcu);
    /* 00544156: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00544158: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00544160: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544161: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00544165: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x54416au); f_00830aa0();
    /* 0054416a: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00544171: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544174: je 0x544228 */ if (fZ) goto L_00544228;
L_0054417a:; BB(0x0054417a);
    /* 0054417a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x54417fu); f_0082da80();
    /* 0054417f: fld dword ptr [0x923a64] */ FPUSH(R_F32((u32)(0x923a64u)));
    /* 00544185: fadd dword ptr [ebx + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x394u));
    /* 0054418b: mov edx, dword ptr [0xa9c4ec] */ r_edx = R32((u32)(0xa9c4ecu));
    /* 00544191: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 00544197: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0054419a: test dl, 3 */ {  u32 a = (u8)r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054419d: jne 0x5441ac */ if (!fZ) goto L_005441ac;
L_0054419f:; BB(0x0054419f);
    /* 0054419f: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 005441a5: test eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005441aa: jne 0x5441d0 */ if (!fZ) goto L_005441d0;
L_005441ac:; BB(0x005441ac);
    /* 005441ac: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005441af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005441b0: ret  */ FN_RET(0x00544345); r_esp += 4; return;
L_005441b1:; BB(0x005441b1);
    /* 005441b1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005441b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005441b4: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5441b9u); f_006946a8();
    /* 005441b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005441bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005441bd: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005441c0: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005441c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005441c6: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5441cbu); f_00805608();
    /* 005441cb: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005441ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005441cf: ret  */ FN_RET(0x00544345); r_esp += 4; return;
L_005441d0:; BB(0x005441d0);
    /* 005441d0: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005441d3: test al, 0x22 */ {  u32 a = (u8)r_eax; u32 b = 0x22u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005441d5: jne 0x5441ac */ if (!fZ) goto L_005441ac;
L_005441d7:; BB(0x005441d7);
    /* 005441d7: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005441dc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005441de: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005441e0: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005441e5: push 0x43160000 */ { u32 v = 0x43160000u; r_esp -= 4; W32(r_esp, v); }
    /* 005441ea: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5441edu); call_ind(t); }
    /* 005441ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005441ef: je 0x5441ac */ if (fZ) goto L_005441ac;
L_005441f1:; BB(0x005441f1);
    /* 005441f1: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005441f5: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005441f8: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 005441fb: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005441ff: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00544202: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00544206: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0054420a: fadd dword ptr [ebx + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x394u));
    /* 00544210: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00544214: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00544218: push 0xd6 */ { u32 v = 0xd6u; r_esp -= 4; W32(r_esp, v); }
    /* 0054421d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054421e: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x544223u); f_0050b510();
    /* 00544223: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00544226: jmp 0x5441ac */ goto L_005441ac;
L_00544228:; BB(0x00544228);
    /* 00544228: movzx eax, byte ptr [0xa737c4] */ r_eax = (u32)R8((u32)(0xa737c4u));
    /* 0054422f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00544231: jne 0x54428d */ if (!fZ) goto L_0054428d;
L_00544233:; BB(0x00544233);
    /* 00544233: mov dword ptr [0xa737cc], 0x41200000 */ W32((u32)(0xa737ccu), 0x41200000u);
    /* 0054423d: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00544242: mov byte ptr [0xa737c4], al */ W8((u32)(0xa737c4u), (u8)r_eax);
    /* 00544247: mov dword ptr [0xa737d0], 0x40000000 */ W32((u32)(0xa737d0u), 0x40000000u);
    /* 00544251: mov dword ptr [0xa737d8], 0x41200000 */ W32((u32)(0xa737d8u), 0x41200000u);
    /* 0054425b: mov dword ptr [0xa737dc], 0xc0000000 */ W32((u32)(0xa737dcu), 0xc0000000u);
    /* 00544265: mov dword ptr [0xa737e0], 0x40000000 */ W32((u32)(0xa737e0u), 0x40000000u);
    /* 0054426f: mov dword ptr [0xa737e4], 0x41200000 */ W32((u32)(0xa737e4u), 0x41200000u);
    /* 00544279: mov dword ptr [0xa737ec], 0xc0000000 */ W32((u32)(0xa737ecu), 0xc0000000u);
    /* 00544283: mov dword ptr [0xa737f0], 0x41200000 */ W32((u32)(0xa737f0u), 0x41200000u);
L_0054428d:; BB(0x0054428d);
    /* 0054428d: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00544291: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 00544295: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00544297: lea eax, [ebx + 0x3c8] */ r_eax = (u32)(r_ebx+0x3c8u);
    /* 0054429d: mov ebp, eax */ r_ebp = r_eax;
    /* 0054429f: mov edi, edx */ r_edi = r_edx;
L_005442a1:; BB(0x005442a1);
    /* 005442a1: lea edx, [edi + 0xa737c8] */ r_edx = (u32)(r_edi+0xa737c8u);
    /* 005442a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005442a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005442aa: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5442afu); f_00830aa0();
    /* 005442af: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005442b2: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005442b5: cmp edi, 0x30 */ {  u32 a = r_edi; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005442b8: jl 0x5442a1 */ if ((fS!=fO)) goto L_005442a1;
L_005442ba:; BB(0x005442ba);
    /* 005442ba: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005442be: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 005442c2: jmp 0x54417a */ goto L_0054417a;
L_005442c7:; BB(0x005442c7);
    /* 005442c7: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 005442ca: test dl, 0x22 */ {  u32 a = (u8)r_edx; u32 b = 0x22u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005442cd: jne 0x543f94 */ if (!fZ) goto L_00543f94;
L_005442d3:; BB(0x005442d3);
    /* 005442d3: mov ecx, dword ptr [ebx + 0x408] */ r_ecx = R32((u32)(r_ebx+0x408u));
    /* 005442d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005442db: je 0x5442ee */ if (fZ) goto L_005442ee;
L_005442dd:; BB(0x005442dd);
    /* 005442dd: lea eax, [ebx + 0x3bc] */ r_eax = (u32)(r_ebx+0x3bcu);
    /* 005442e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005442e4: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5442e9u); f_00508db8();
    /* 005442e9: jmp 0x543fb5 */ goto L_00543fb5;
L_005442ee:; BB(0x005442ee);
    /* 005442ee: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005442f3: je 0x544314 */ if (fZ) goto L_00544314;
L_005442f5:; BB(0x005442f5);
    /* 005442f5: push 0xd9 */ { u32 v = 0xd9u; r_esp -= 4; W32(r_esp, v); }
    /* 005442fa: lea eax, [ebx + 0x3bc] */ r_eax = (u32)(r_ebx+0x3bcu);
    /* 00544300: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544301: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x544306u); f_00509590();
    /* 00544306: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00544309: mov dword ptr [ebx + 0x408], eax */ W32((u32)(r_ebx+0x408u), r_eax);
    /* 0054430f: jmp 0x543fb5 */ goto L_00543fb5;
L_00544314:; BB(0x00544314);
    /* 00544314: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00544319: lea eax, [ebx + 0x3bc] */ r_eax = (u32)(r_ebx+0x3bcu);
    /* 0054431f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544320: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x544325u); f_00509590();
    /* 00544325: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00544328: mov dword ptr [ebx + 0x408], eax */ W32((u32)(r_ebx+0x408u), r_eax);
    /* 0054432e: jmp 0x543fb5 */ goto L_00543fb5;
L_00544345:; BB(0x00544345);
    /* 00544345: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544347: je 0x544360 */ if (fZ) goto L_00544360;
L_00544349:; BB(0x00544349);
    /* 00544349: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 0054434f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544350: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x544355u); f_00508db8();
    /* 00544355: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0054435b: jmp 0x543f89 */ goto L_00543f89;
L_00544360:; BB(0x00544360);
    /* 00544360: push 0xdb */ { u32 v = 0xdbu; r_esp -= 4; W32(r_esp, v); }
    /* 00544365: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 0054436b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054436c: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x544371u); f_00509590();
    /* 00544371: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00544374: mov dword ptr [ebx + 0x40c], eax */ W32((u32)(r_ebx+0x40cu), r_eax);
    /* 0054437a: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00544380: jmp 0x543f89 */ goto L_00543f89;
}

void f_005443c4(void) /* sub_5443C4 */
{
    FN_ENTER(0x005443c4);
    /* 005443c4: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005443cb: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005443ce: ja 0x54440f */ if ((!fC&&!fZ)) goto L_0054440f;
L_005443d0:; BB(0x005443d0);
    /* 005443d0: mov eax, dword ptr [eax*4 + 0x923938] */ r_eax = R32((u32)(r_eax*4+0x923938u));
    /* 005443d7: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0054440f:; BB(0x0054440f);
    /* 0054440f: ret  */ FN_RET(0x005443c4); r_esp += 4; return;
}

void f_005443d9(void)
{
    FN_ENTER(0x005443d9);
    /* 005443d9: call 0x544410 */ r_esp -= 4; W32(r_esp, 0x5443deu); f_00544410();
    /* 005443de: jmp 0x54440f */ goto L_0054440f;
L_0054440f:; BB(0x0054440f);
    /* 0054440f: ret  */ FN_RET(0x005443d9); r_esp += 4; return;
}

void f_005443e0(void)
{
    FN_ENTER(0x005443e0);
    /* 005443e0: call 0x544518 */ r_esp -= 4; W32(r_esp, 0x5443e5u); f_00544518();
    /* 005443e5: jmp 0x54440f */ goto L_0054440f;
L_0054440f:; BB(0x0054440f);
    /* 0054440f: ret  */ FN_RET(0x005443e0); r_esp += 4; return;
}

void f_005443e7(void)
{
    FN_ENTER(0x005443e7);
    /* 005443e7: call 0x544634 */ r_esp -= 4; W32(r_esp, 0x5443ecu); f_00544634();
    /* 005443ec: jmp 0x54440f */ goto L_0054440f;
L_0054440f:; BB(0x0054440f);
    /* 0054440f: ret  */ FN_RET(0x005443e7); r_esp += 4; return;
}

void f_005443ee(void)
{
    FN_ENTER(0x005443ee);
    /* 005443ee: call 0x544704 */ r_esp -= 4; W32(r_esp, 0x5443f3u); f_00544704();
    /* 005443f3: jmp 0x54440f */ goto L_0054440f;
L_0054440f:; BB(0x0054440f);
    /* 0054440f: ret  */ FN_RET(0x005443ee); r_esp += 4; return;
}

void f_005443f5(void)
{
    FN_ENTER(0x005443f5);
    /* 005443f5: call 0x5448e0 */ r_esp -= 4; W32(r_esp, 0x5443fau); f_005448e0();
    /* 005443fa: jmp 0x54440f */ goto L_0054440f;
L_0054440f:; BB(0x0054440f);
    /* 0054440f: ret  */ FN_RET(0x005443f5); r_esp += 4; return;
}

void f_005443fc(void)
{
    FN_ENTER(0x005443fc);
    /* 005443fc: call 0x5449a8 */ r_esp -= 4; W32(r_esp, 0x544401u); f_005449a8();
    /* 00544401: jmp 0x54440f */ goto L_0054440f;
L_0054440f:; BB(0x0054440f);
    /* 0054440f: ret  */ FN_RET(0x005443fc); r_esp += 4; return;
}

void f_00544403(void)
{
    FN_ENTER(0x00544403);
    /* 00544403: call 0x544fe0 */ r_esp -= 4; W32(r_esp, 0x544408u); f_00544fe0();
    /* 00544408: jmp 0x54440f */ goto L_0054440f;
L_0054440f:; BB(0x0054440f);
    /* 0054440f: ret  */ FN_RET(0x00544403); r_esp += 4; return;
}

void f_0054440a(void)
{
    FN_ENTER(0x0054440a);
    /* 0054440a: call 0x545a64 */ r_esp -= 4; W32(r_esp, 0x54440fu); f_00545a64();
    /* 0054440f: ret  */ FN_RET(0x0054440a); r_esp += 4; return;
}

void f_0054440f(void)
{
    FN_ENTER(0x0054440f);
    /* 0054440f: ret  */ FN_RET(0x0054440f); r_esp += 4; return;
}

void f_00544410(void)
{
    FN_ENTER(0x00544410);
    /* 00544410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544411: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00544413: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 00544419: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054441b: je 0x544428 */ if (fZ) goto L_00544428;
L_0054441d:; BB(0x0054441d);
    /* 0054441d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00544420: jne 0x5444c8 */ if (!fZ) goto L_005444c8;
L_00544426:; BB(0x00544426);
    /* 00544426: jmp 0x544451 */ goto L_00544451;
L_00544428:; BB(0x00544428);
    /* 00544428: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 0054442e: mov dword ptr [ebp + 0x384], 1 */ W32((u32)(r_ebp+0x384u), 0x1u);
    /* 00544438: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054443d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054443f: or eax, 0x480000 */ {  u32 a = r_eax; u32 b = 0x480000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00544444: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
    /* 0054444a: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
L_00544451:; BB(0x00544451);
    /* 00544451: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00544453: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x544458u); f_007aa094();
    /* 00544458: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0054445b: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544460: jne 0x54446d */ if (!fZ) goto L_0054446d;
L_00544462:; BB(0x00544462);
    /* 00544462: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544464: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544466: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00544468: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54446du); f_00772b44();
L_0054446d:; BB(0x0054446d);
    /* 0054446d: mov eax, dword ptr [0xa73824] */ r_eax = R32((u32)(0xa73824u));
    /* 00544472: push dword ptr [ebp + 0x58] */ { u32 v = R32((u32)(r_ebp+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00544475: push dword ptr [ebp + 0x54] */ { u32 v = R32((u32)(r_ebp+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00544478: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054447a: push dword ptr [ebp + 0x50] */ { u32 v = R32((u32)(r_ebp+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054447d: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00544480: push dword ptr [ebp + 0x3c] */ { u32 v = R32((u32)(r_ebp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00544483: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00544486: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00544488: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x54448du); f_00771f5c();
    /* 0054448d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00544490: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00544492: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x544495u); call_ind(t); }
    /* 00544495: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00544498: lea eax, [ebp + 0x50] */ r_eax = (u32)(r_ebp+0x50u);
    /* 0054449b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054449c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054449d: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x5444a2u); f_0078ea50();
    /* 005444a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 005444a5: fcomp dword ptr [0x923a48] */ fx_compare(ST(0), R_F32((u32)(0x923a48u))); FPOP();
    /* 005444ab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005444ad: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005444ae: ja 0x5444c8 */ if ((!fC&&!fZ)) goto L_005444c8;
L_005444b0:; BB(0x005444b0);
    /* 005444b0: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 005444b6: and eax, 0xfff7ffff */ {  u32 a = r_eax; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005444bb: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
    /* 005444c1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005444c3: call 0x5444cc */ r_esp -= 4; W32(r_esp, 0x5444c8u); f_005444cc();
L_005444c8:; BB(0x005444c8);
    /* 005444c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005444c9: ret  */ FN_RET(0x00544410); r_esp += 4; return;
}

void f_00544450(void)
{
    FN_ENTER(0x00544450);
    /* 00544450: add byte ptr [ebx + 0x5c3ce8cd], cl */ { u32 ad = (u32)(r_ebx+0x5c3ce8cdu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00544456: add byte ptr es:[ebx + 0xa93045], cl */ { u32 ad = (u32)(r_ebx+0xa93045u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0054445d: add byte ptr [eax + 0x6a0b7500], al */ { u32 ad = (u32)(r_eax+0x6a0b7500u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00544463: add byte ptr [edx], ch */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00544466: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00544468: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54446du); f_00772b44();
    /* 0054446d: mov eax, dword ptr [0xa73824] */ r_eax = R32((u32)(0xa73824u));
    /* 00544472: push dword ptr [ebp + 0x58] */ { u32 v = R32((u32)(r_ebp+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00544475: push dword ptr [ebp + 0x54] */ { u32 v = R32((u32)(r_ebp+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00544478: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054447a: push dword ptr [ebp + 0x50] */ { u32 v = R32((u32)(r_ebp+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054447d: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00544480: push dword ptr [ebp + 0x3c] */ { u32 v = R32((u32)(r_ebp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00544483: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00544486: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00544488: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x54448du); f_00771f5c();
    /* 0054448d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00544490: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00544492: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x544495u); call_ind(t); }
    /* 00544495: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00544498: lea eax, [ebp + 0x50] */ r_eax = (u32)(r_ebp+0x50u);
    /* 0054449b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054449c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054449d: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x5444a2u); f_0078ea50();
    /* 005444a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 005444a5: fcomp dword ptr [0x923a48] */ fx_compare(ST(0), R_F32((u32)(0x923a48u))); FPOP();
    /* 005444ab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005444ad: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005444ae: ja 0x5444c8 */ if ((!fC&&!fZ)) goto L_005444c8;
L_005444b0:; BB(0x005444b0);
    /* 005444b0: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 005444b6: and eax, 0xfff7ffff */ {  u32 a = r_eax; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005444bb: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
    /* 005444c1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005444c3: call 0x5444cc */ r_esp -= 4; W32(r_esp, 0x5444c8u); f_005444cc();
L_005444c8:; BB(0x005444c8);
    /* 005444c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005444c9: ret  */ FN_RET(0x00544450); r_esp += 4; return;
}

void f_005444cc(void) /* sub_5444CC */
{
    FN_ENTER(0x005444cc);
    /* 005444cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005444cd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005444cf: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 005444d2: lea eax, [ebp + 0x50] */ r_eax = (u32)(r_ebp+0x50u);
    /* 005444d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005444d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005444d7: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x5444dcu); f_0078ea50();
    /* 005444dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005444df: fcomp dword ptr [0x923a44] */ fx_compare(ST(0), R_F32((u32)(0x923a44u))); FPOP();
    /* 005444e5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005444e7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005444e8: jbe 0x5444f1 */ if ((fC||fZ)) goto L_005444f1;
L_005444ea:; BB(0x005444ea);
    /* 005444ea: mov edx, 8 */ r_edx = 0x8u;
    /* 005444ef: jmp 0x5444f3 */ goto L_005444f3;
L_005444f1:; BB(0x005444f1);
    /* 005444f1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005444f3:; BB(0x005444f3);
    /* 005444f3: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 005444f9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005444fb: jne 0x544514 */ if (!fZ) goto L_00544514;
L_005444fd:; BB(0x005444fd);
    /* 005444fd: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00544504: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00544506: je 0x544514 */ if (fZ) goto L_00544514;
L_00544508:; BB(0x00544508);
    /* 00544508: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
    /* 0054450e: mov dword ptr [ebp + 0x37c], edx */ W32((u32)(r_ebp+0x37cu), r_edx);
L_00544514:; BB(0x00544514);
    /* 00544514: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544515: ret  */ FN_RET(0x005444cc); r_esp += 4; return;
}

void f_00544518(void)
{
    FN_ENTER(0x00544518);
    /* 00544518: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00544519: mov edi, ecx */ r_edi = r_ecx;
    /* 0054451b: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 00544521: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544523: je 0x544549 */ if (fZ) goto L_00544549;
L_00544525:; BB(0x00544525);
    /* 00544525: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544528: je 0x544591 */ if (fZ) goto L_00544591;
L_0054452a:; BB(0x0054452a);
    /* 0054452a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054452d: jne 0x5445cc */ if (!fZ) goto L_005445cc;
L_00544533:; BB(0x00544533);
    /* 00544533: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00544539: and eax, 0xff7fffff */ {  u32 a = r_eax; u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054453e: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 00544544: jmp 0x5445cc */ f_005445cc(); return;
L_00544549:; BB(0x00544549);
    /* 00544549: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0054454c: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 00544552: or edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00544558: and eax, 0xffdbfcff */ {  u32 a = r_eax; u32 b = 0xffdbfcffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054455d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00544560: and edx, 0xffb7ffff */ {  u32 a = r_edx; u32 b = 0xffb7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00544566: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
    /* 0054456c: mov eax, 8 */ r_eax = 0x8u;
    /* 00544571: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00544578: mov eax, dword ptr [0xa73824] */ r_eax = R32((u32)(0xa73824u));
    /* 0054457d: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 00544580: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 0054458a: mov word ptr [edi + 0x3a4], ax */ W16((u32)(r_edi+0x3a4u), (u16)r_eax);
L_00544591:; BB(0x00544591);
    /* 00544591: mov ecx, edi */ r_ecx = r_edi;
    /* 00544593: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x544598u); f_007aa094();
    /* 00544598: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0054459b: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005445a0: jne 0x5445ad */ if (!fZ) goto L_005445ad;
L_005445a2:; BB(0x005445a2);
    /* 005445a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005445a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005445a6: mov ecx, edi */ r_ecx = r_edi;
    /* 005445a8: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5445adu); f_00772b44();
L_005445ad:; BB(0x005445ad);
    /* 005445ad: mov ecx, edi */ r_ecx = r_edi;
    /* 005445af: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5445b4u); f_007b6880();
    /* 005445b4: movsx eax, word ptr [edi + 0x3a4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3a4u));
    /* 005445bb: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005445be: mov word ptr [edi + 0x3a4], ax */ W16((u32)(r_edi+0x3a4u), (u16)r_eax);
    /* 005445c5: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005445c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005445ca: jle 0x5445eb */ if ((fZ||fS!=fO)) goto L_005445eb;
L_005445cc:; BB(0x005445cc);
    /* 005445cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005445ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005445d0: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005445d3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005445d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005445d9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5445deu); f_00805608();
    /* 005445de: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005445e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005445e1: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5445e6u); f_006946a8();
    /* 005445e6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005445e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005445ea: ret  */ FN_RET(0x00544518); r_esp += 4; return;
L_005445eb:; BB(0x005445eb);
    /* 005445eb: mov ecx, edi */ r_ecx = r_edi;
    /* 005445ed: call 0x5445f4 */ r_esp -= 4; W32(r_esp, 0x5445f2u); f_005445f4();
    /* 005445f2: jmp 0x5445cc */ f_005445cc(); return;
}

void f_0054454b(void)
{
    FN_ENTER(0x0054454b);
    /* 0054454b: xor byte ptr [ebx + 0x39097], cl */ { u32 ad = (u32)(r_ebx+0x39097u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 00544551: add byte ptr [ecx - 0x7fffff36], al */ { u32 ad = (u32)(r_ecx+0x800000cau);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00544557: add byte ptr [0xffdbfcff], ah */ { u32 ad = (u32)(0xffdbfcffu);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0054455d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00544560: and edx, 0xffb7ffff */ {  u32 a = r_edx; u32 b = 0xffb7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00544566: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
    /* 0054456c: mov eax, 8 */ r_eax = 0x8u;
    /* 00544571: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00544578: mov eax, dword ptr [0xa73824] */ r_eax = R32((u32)(0xa73824u));
    /* 0054457d: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 00544580: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 0054458a: mov word ptr [edi + 0x3a4], ax */ W16((u32)(r_edi+0x3a4u), (u16)r_eax);
    /* 00544591: mov ecx, edi */ r_ecx = r_edi;
    /* 00544593: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x544598u); f_007aa094();
    /* 00544598: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0054459b: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005445a0: jne 0x5445ad */ if (!fZ) goto L_005445ad;
L_005445a2:; BB(0x005445a2);
    /* 005445a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005445a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005445a6: mov ecx, edi */ r_ecx = r_edi;
    /* 005445a8: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5445adu); f_00772b44();
L_005445ad:; BB(0x005445ad);
    /* 005445ad: mov ecx, edi */ r_ecx = r_edi;
    /* 005445af: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5445b4u); f_007b6880();
    /* 005445b4: movsx eax, word ptr [edi + 0x3a4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3a4u));
    /* 005445bb: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005445be: mov word ptr [edi + 0x3a4], ax */ W16((u32)(r_edi+0x3a4u), (u16)r_eax);
    /* 005445c5: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005445c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005445ca: jle 0x5445eb */ if ((fZ||fS!=fO)) goto L_005445eb;
L_005445cc:; BB(0x005445cc);
    /* 005445cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005445ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005445d0: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005445d3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005445d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005445d9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5445deu); f_00805608();
    /* 005445de: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005445e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005445e1: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5445e6u); f_006946a8();
    /* 005445e6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005445e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005445ea: ret  */ FN_RET(0x0054454b); r_esp += 4; return;
L_005445eb:; BB(0x005445eb);
    /* 005445eb: mov ecx, edi */ r_ecx = r_edi;
    /* 005445ed: call 0x5445f4 */ r_esp -= 4; W32(r_esp, 0x5445f2u); f_005445f4();
    /* 005445f2: jmp 0x5445cc */ f_005445cc(); return;
}

void f_0054454c(void)
{
    FN_ENTER(0x0054454c);
    /* 0054454c: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 00544552: or edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00544558: and eax, 0xffdbfcff */ {  u32 a = r_eax; u32 b = 0xffdbfcffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054455d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00544560: and edx, 0xffb7ffff */ {  u32 a = r_edx; u32 b = 0xffb7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00544566: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
    /* 0054456c: mov eax, 8 */ r_eax = 0x8u;
    /* 00544571: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00544578: mov eax, dword ptr [0xa73824] */ r_eax = R32((u32)(0xa73824u));
    /* 0054457d: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 00544580: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 0054458a: mov word ptr [edi + 0x3a4], ax */ W16((u32)(r_edi+0x3a4u), (u16)r_eax);
    /* 00544591: mov ecx, edi */ r_ecx = r_edi;
    /* 00544593: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x544598u); f_007aa094();
    /* 00544598: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0054459b: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005445a0: jne 0x5445ad */ if (!fZ) goto L_005445ad;
L_005445a2:; BB(0x005445a2);
    /* 005445a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005445a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005445a6: mov ecx, edi */ r_ecx = r_edi;
    /* 005445a8: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5445adu); f_00772b44();
L_005445ad:; BB(0x005445ad);
    /* 005445ad: mov ecx, edi */ r_ecx = r_edi;
    /* 005445af: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5445b4u); f_007b6880();
    /* 005445b4: movsx eax, word ptr [edi + 0x3a4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3a4u));
    /* 005445bb: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005445be: mov word ptr [edi + 0x3a4], ax */ W16((u32)(r_edi+0x3a4u), (u16)r_eax);
    /* 005445c5: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005445c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005445ca: jle 0x5445eb */ if ((fZ||fS!=fO)) goto L_005445eb;
L_005445cc:; BB(0x005445cc);
    /* 005445cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005445ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005445d0: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005445d3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005445d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005445d9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5445deu); f_00805608();
    /* 005445de: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005445e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005445e1: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5445e6u); f_006946a8();
    /* 005445e6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005445e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005445ea: ret  */ FN_RET(0x0054454c); r_esp += 4; return;
L_005445eb:; BB(0x005445eb);
    /* 005445eb: mov ecx, edi */ r_ecx = r_edi;
    /* 005445ed: call 0x5445f4 */ r_esp -= 4; W32(r_esp, 0x5445f2u); f_005445f4();
    /* 005445f2: jmp 0x5445cc */ f_005445cc(); return;
}

void f_005445f4(void) /* sub_5445F4 */
{
    FN_ENTER(0x005445f4);
    /* 005445f4: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005445f7: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005445fc: je 0x5445ff */ if (fZ) goto L_005445ff;
L_005445fe:; BB(0x005445fe);
    /* 005445fe: ret  */ FN_RET(0x005445f4); r_esp += 4; return;
L_005445ff:; BB(0x005445ff);
    /* 005445ff: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 00544605: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00544608: jne 0x544626 */ if (!fZ) goto L_00544626;
L_0054460a:; BB(0x0054460a);
    /* 0054460a: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00544611: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544614: je 0x544626 */ if (fZ) goto L_00544626;
L_00544616:; BB(0x00544616);
    /* 00544616: mov dword ptr [ecx + 0x37c], 1 */ W32((u32)(r_ecx+0x37cu), 0x1u);
    /* 00544620: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
L_00544626:; BB(0x00544626);
    /* 00544626: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054462c: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
    /* 00544632: ret  */ FN_RET(0x005445f4); r_esp += 4; return;
}

void f_00544634(void) /* sub_544634 */
{
    FN_ENTER(0x00544634);
    /* 00544634: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00544635: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00544637: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0054463d: and eax, 0xff07ffff */ {  u32 a = r_eax; u32 b = 0xff07ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00544642: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 00544648: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 0054464e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544650: je 0x544683 */ if (fZ) goto L_00544683;
L_00544652:; BB(0x00544652);
    /* 00544652: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00544655: jne 0x5446e2 */ if (!fZ) goto L_005446e2;
L_0054465b:; BB(0x0054465b);
    /* 0054465b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054465d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x544662u); f_007aa094();
    /* 00544662: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544664: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544666: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00544668: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54466du); f_00772b44();
    /* 0054466d: mov eax, dword ptr [ebx + 0x410] */ r_eax = R32((u32)(r_ebx+0x410u));
    /* 00544673: lea ecx, [ebx + 0x410] */ r_ecx = (u32)(r_ebx+0x410u);
    /* 00544679: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x54467cu); call_ind(t); }
    /* 0054467c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054467f: jne 0x5446e2 */ if (!fZ) goto L_005446e2;
L_00544681:; BB(0x00544681);
    /* 00544681: jmp 0x5446e4 */ goto L_005446e4;
L_00544683:; BB(0x00544683);
    /* 00544683: mov eax, 7 */ r_eax = 0x7u;
    /* 00544688: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0054468f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00544691: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x544696u); f_00787534();
    /* 00544696: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00544697: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x54469cu); f_008113e4();
    /* 0054469c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054469d: lea ecx, [ebx + 0x410] */ r_ecx = (u32)(r_ebx+0x410u);
    /* 005446a3: call 0x512458 */ r_esp -= 4; W32(r_esp, 0x5446a8u); f_00512458();
    /* 005446a8: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 005446ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005446af: call 0x5787fc */ r_esp -= 4; W32(r_esp, 0x5446b4u); f_005787fc();
    /* 005446b4: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 005446ba: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005446bd: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 005446c3: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 005446c6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005446c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005446c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005446ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005446cb: push 0x202 */ { u32 v = 0x202u; r_esp -= 4; W32(r_esp, v); }
    /* 005446d0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5446d5u); f_00814298();
    /* 005446d5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005446d8: mov dword ptr [ebx + 0x384], 1 */ W32((u32)(r_ebx+0x384u), 0x1u);
L_005446e2:; BB(0x005446e2);
    /* 005446e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005446e3: ret  */ FN_RET(0x00544634); r_esp += 4; return;
L_005446e4:; BB(0x005446e4);
    /* 005446e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005446e6: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 005446e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005446ea: call 0x5786e8 */ r_esp -= 4; W32(r_esp, 0x5446efu); f_005786e8();
    /* 005446ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005446f2: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005446f6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005446fb: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 005446ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00544700: ret  */ FN_RET(0x00544634); r_esp += 4; return;
}

void f_00544657(void)
{
    FN_ENTER(0x00544657);
    /* 00544657: xchg dword ptr [eax], eax */ { u32 x = R32((u32)(r_eax)); u32 y = r_eax; W32((u32)(r_eax), y); r_eax = x; }
    /* 00544659: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0054465b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054465d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x544662u); f_007aa094();
    /* 00544662: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544664: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544666: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00544668: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54466du); f_00772b44();
    /* 0054466d: mov eax, dword ptr [ebx + 0x410] */ r_eax = R32((u32)(r_ebx+0x410u));
    /* 00544673: lea ecx, [ebx + 0x410] */ r_ecx = (u32)(r_ebx+0x410u);
    /* 00544679: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x54467cu); call_ind(t); }
    /* 0054467c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054467f: jne 0x5446e2 */ if (!fZ) goto L_005446e2;
L_00544681:; BB(0x00544681);
    /* 00544681: jmp 0x5446e4 */ goto L_005446e4;
L_005446e2:; BB(0x005446e2);
    /* 005446e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005446e3: ret  */ FN_RET(0x00544657); r_esp += 4; return;
L_005446e4:; BB(0x005446e4);
    /* 005446e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005446e6: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 005446e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005446ea: call 0x5786e8 */ r_esp -= 4; W32(r_esp, 0x5446efu); f_005786e8();
    /* 005446ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005446f2: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005446f6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005446fb: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 005446ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00544700: ret  */ FN_RET(0x00544657); r_esp += 4; return;
}

void f_00544704(void) /* sub_544704 */
{
    FN_ENTER(0x00544704);
    /* 00544704: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00544705: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00544708: mov esi, ecx */ r_esi = r_ecx;
    /* 0054470a: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 00544710: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544712: je 0x54473a */ if (fZ) goto L_0054473a;
L_00544714:; BB(0x00544714);
    /* 00544714: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544717: je 0x5447e2 */ if (fZ) goto L_005447e2;
L_0054471d:; BB(0x0054471d);
    /* 0054471d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544720: jne 0x5448c0 */ if (!fZ) goto L_005448c0;
L_00544726:; BB(0x00544726);
    /* 00544726: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0054472c: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054472f: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 00544735: jmp 0x5448c0 */ goto L_005448c0;
L_0054473a:; BB(0x0054473a);
    /* 0054473a: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054473d: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 00544743: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00544748: test edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054474e: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00544751: je 0x544761 */ if (fZ) goto L_00544761;
L_00544753:; BB(0x00544753);
    /* 00544753: mov eax, 9 */ r_eax = 0x9u;
    /* 00544758: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0054475f: jmp 0x54476d */ goto L_0054476d;
L_00544761:; BB(0x00544761);
    /* 00544761: mov eax, 5 */ r_eax = 0x5u;
    /* 00544766: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
L_0054476d:; BB(0x0054476d);
    /* 0054476d: lea ecx, [esi + 0x30c] */ r_ecx = (u32)(r_esi+0x30cu);
    /* 00544773: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x544778u); f_0083173c();
    /* 00544778: mov edx, dword ptr [0xa73824] */ r_edx = R32((u32)(0xa73824u));
    /* 0054477e: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00544781: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00544783: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00544785: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00544786: jae 0x5447aa */ if (!fC) goto L_005447aa;
L_00544788:; BB(0x00544788);
    /* 00544788: fld dword ptr [esi + 0x30c] */ FPUSH(R_F32((u32)(r_esi+0x30cu)));
    /* 0054478e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00544790: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00544792: fld dword ptr [esi + 0x314] */ FPUSH(R_F32((u32)(r_esi+0x314u)));
    /* 00544798: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0054479a: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0054479c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054479e: fstp dword ptr [esi + 0x30c] */ W_F32((u32)(r_esi+0x30cu), ST(0)); FPOP();
    /* 005447a4: fstp dword ptr [esi + 0x314] */ W_F32((u32)(r_esi+0x314u), ST(0)); FPOP();
L_005447aa:; BB(0x005447aa);
    /* 005447aa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005447ac: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005447ae: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 005447b4: test eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005447b9: je 0x5447cf */ if (fZ) goto L_005447cf;
L_005447bb:; BB(0x005447bb);
    /* 005447bb: push 0xd7 */ { u32 v = 0xd7u; r_esp -= 4; W32(r_esp, v); }
    /* 005447c0: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 005447c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005447c7: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5447ccu); f_0050b510();
    /* 005447cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005447cf:; BB(0x005447cf);
    /* 005447cf: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 005447d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005447db: mov word ptr [esi + 0x3a6], ax */ W16((u32)(r_esi+0x3a6u), (u16)r_eax);
L_005447e2:; BB(0x005447e2);
    /* 005447e2: fld dword ptr [0x923a38] */ FPUSH(R_F32((u32)(0x923a38u)));
    /* 005447e8: fld dword ptr [esi + 0x30c] */ FPUSH(R_F32((u32)(r_esi+0x30cu)));
    /* 005447ee: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005447f0: fld dword ptr [esi + 0x314] */ FPUSH(R_F32((u32)(r_esi+0x314u)));
    /* 005447f6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005447f8: fstp dword ptr [esi + 0x30c] */ W_F32((u32)(r_esi+0x30cu), ST(0)); FPOP();
    /* 005447fe: fstp dword ptr [esi + 0x314] */ W_F32((u32)(r_esi+0x314u), ST(0)); FPOP();
    /* 00544804: mov ecx, esi */ r_ecx = r_esi;
    /* 00544806: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54480bu); f_007aa094();
    /* 0054480b: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 00544811: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00544817: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0054481a: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0054481d: fadd dword ptr [esi + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x30cu));
    /* 00544823: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 00544829: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0054482c: mov ecx, esi */ r_ecx = r_esi;
    /* 0054482e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00544832: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00544836: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0054483a: fadd dword ptr [esi + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x314u));
    /* 00544840: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00544844: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00544847: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544848: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x54484du); f_00771e14();
    /* 0054484d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054484f: je 0x544869 */ if (fZ) goto L_00544869;
L_00544851:; BB(0x00544851);
    /* 00544851: mov dword ptr [esi + 0x314], 0 */ W32((u32)(r_esi+0x314u), 0x0u);
    /* 0054485b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054485d: mov dword ptr [esi + 0x30c], 0 */ W32((u32)(r_esi+0x30cu), 0x0u);
    /* 00544867: jmp 0x544872 */ goto L_00544872;
L_00544869:; BB(0x00544869);
    /* 00544869: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0054486b: mov ecx, esi */ r_ecx = r_esi;
    /* 0054486d: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x544870u); call_ind(t); }
    /* 00544870: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00544872:; BB(0x00544872);
    /* 00544872: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544874: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544875: mov ecx, esi */ r_ecx = r_esi;
    /* 00544877: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54487cu); f_00772b44();
    /* 0054487c: mov ecx, esi */ r_ecx = r_esi;
    /* 0054487e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x544883u); f_007b6880();
    /* 00544883: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00544889: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054488c: je 0x5448c0 */ if (fZ) goto L_005448c0;
L_0054488e:; BB(0x0054488e);
    /* 0054488e: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00544891: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 00544897: and eax, 0xfffbfcff */ {  u32 a = r_eax; u32 b = 0xfffbfcffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054489c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0054489f: movzx eax, word ptr [esi + 0x334] */ r_eax = (u32)R16((u32)(r_esi+0x334u));
    /* 005448a6: and edx, 0xff7ffffe */ {  u32 a = r_edx; u32 b = 0xff7ffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005448ac: mov dword ptr [esi + 0x390], edx */ W32((u32)(r_esi+0x390u), r_edx);
    /* 005448b2: mov word ptr [esi + 0x346], ax */ W16((u32)(r_esi+0x346u), (u16)r_eax);
    /* 005448b9: mov ecx, esi */ r_ecx = r_esi;
    /* 005448bb: call 0x5445f4 */ r_esp -= 4; W32(r_esp, 0x5448c0u); f_005445f4();
L_005448c0:; BB(0x005448c0);
    /* 005448c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005448c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005448c4: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 005448c7: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005448cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005448cd: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5448d2u); f_00805608();
    /* 005448d2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005448d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005448d5: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5448dau); f_006946a8();
    /* 005448da: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005448dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005448de: ret  */ FN_RET(0x00544704); r_esp += 4; return;
}

void f_00544843(void)
{
    FN_ENTER(0x00544843);
    /* 00544843: or byte ptr [ebp - 0x17afdbfc], cl */ { u32 ad = (u32)(r_ebp+0xe8502404u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    UNSUP(0x00544849, "falls out of decoded code");
}

void f_00544847(void)
{
    FN_ENTER(0x00544847);
    /* 00544847: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544848: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x54484du); f_00771e14();
    /* 0054484d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054484f: je 0x544869 */ if (fZ) goto L_00544869;
L_00544851:; BB(0x00544851);
    /* 00544851: mov dword ptr [esi + 0x314], 0 */ W32((u32)(r_esi+0x314u), 0x0u);
    /* 0054485b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054485d: mov dword ptr [esi + 0x30c], 0 */ W32((u32)(r_esi+0x30cu), 0x0u);
    /* 00544867: jmp 0x544872 */ goto L_00544872;
L_00544869:; BB(0x00544869);
    /* 00544869: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0054486b: mov ecx, esi */ r_ecx = r_esi;
    /* 0054486d: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x544870u); call_ind(t); }
    /* 00544870: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00544872:; BB(0x00544872);
    /* 00544872: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544874: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544875: mov ecx, esi */ r_ecx = r_esi;
    /* 00544877: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54487cu); f_00772b44();
    /* 0054487c: mov ecx, esi */ r_ecx = r_esi;
    /* 0054487e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x544883u); f_007b6880();
    /* 00544883: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00544889: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054488c: je 0x5448c0 */ if (fZ) goto L_005448c0;
L_0054488e:; BB(0x0054488e);
    /* 0054488e: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00544891: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 00544897: and eax, 0xfffbfcff */ {  u32 a = r_eax; u32 b = 0xfffbfcffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054489c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0054489f: movzx eax, word ptr [esi + 0x334] */ r_eax = (u32)R16((u32)(r_esi+0x334u));
    /* 005448a6: and edx, 0xff7ffffe */ {  u32 a = r_edx; u32 b = 0xff7ffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005448ac: mov dword ptr [esi + 0x390], edx */ W32((u32)(r_esi+0x390u), r_edx);
    /* 005448b2: mov word ptr [esi + 0x346], ax */ W16((u32)(r_esi+0x346u), (u16)r_eax);
    /* 005448b9: mov ecx, esi */ r_ecx = r_esi;
    /* 005448bb: call 0x5445f4 */ r_esp -= 4; W32(r_esp, 0x5448c0u); f_005445f4();
L_005448c0:; BB(0x005448c0);
    /* 005448c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005448c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005448c4: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 005448c7: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005448cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005448cd: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5448d2u); f_00805608();
    /* 005448d2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005448d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005448d5: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5448dau); f_006946a8();
    /* 005448da: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005448dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005448de: ret  */ FN_RET(0x00544847); r_esp += 4; return;
}

void f_005448e0(void) /* sub_5448E0 */
{
    FN_ENTER(0x005448e0);
    /* 005448e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005448e1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005448e3: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 005448e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005448eb: je 0x5448f4 */ if (fZ) goto L_005448f4;
L_005448ed:; BB(0x005448ed);
    /* 005448ed: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005448f0: jne 0x544968 */ if (!fZ) goto L_00544968;
L_005448f2:; BB(0x005448f2);
    /* 005448f2: jmp 0x544930 */ goto L_00544930;
L_005448f4:; BB(0x005448f4);
    /* 005448f4: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 005448fa: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 005448fd: movzx edx, word ptr [ebp + 0x342] */ r_edx = (u32)R16((u32)(r_ebp+0x342u));
    /* 00544904: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00544907: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
    /* 0054490d: and ecx, 0xff9ffeff */ {  u32 a = r_ecx; u32 b = 0xff9ffeffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00544913: mov dword ptr [ebp + 0x384], 1 */ W32((u32)(r_ebp+0x384u), 0x1u);
    /* 0054491d: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 00544924: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00544926: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0054492d: mov dword ptr [ebp + 0x30], ecx */ W32((u32)(r_ebp+0x30u), r_ecx);
L_00544930:; BB(0x00544930);
    /* 00544930: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00544932: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x544937u); f_007aa094();
    /* 00544937: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0054493a: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054493f: jne 0x54494c */ if (!fZ) goto L_0054494c;
L_00544941:; BB(0x00544941);
    /* 00544941: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544943: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544945: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00544947: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54494cu); f_00772b44();
L_0054494c:; BB(0x0054494c);
    /* 0054494c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054494e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x544953u); f_007b6880();
    /* 00544953: movsx edx, word ptr [ebp + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x344u));
    /* 0054495a: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 0054495d: mov word ptr [ebp + 0x344], ax */ W16((u32)(r_ebp+0x344u), (u16)r_eax);
    /* 00544964: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00544966: jl 0x54497f */ if ((fS!=fO)) goto L_0054497f;
L_00544968:; BB(0x00544968);
    /* 00544968: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054496a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054496c: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0054496f: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00544974: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544975: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x54497au); f_00805608();
    /* 0054497a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054497d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054497e: ret  */ FN_RET(0x005448e0); r_esp += 4; return;
L_0054497f:; BB(0x0054497f);
    /* 0054497f: movzx eax, word ptr [ebp + 0x334] */ r_eax = (u32)R16((u32)(r_ebp+0x334u));
    /* 00544986: mov edx, dword ptr [ebp + 0x390] */ r_edx = R32((u32)(r_ebp+0x390u));
    /* 0054498c: mov word ptr [ebp + 0x346], ax */ W16((u32)(r_ebp+0x346u), (u16)r_eax);
    /* 00544993: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00544996: mov dword ptr [ebp + 0x390], edx */ W32((u32)(r_ebp+0x390u), r_edx);
    /* 0054499c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054499e: call 0x5445f4 */ r_esp -= 4; W32(r_esp, 0x5449a3u); f_005445f4();
    /* 005449a3: jmp 0x544968 */ goto L_00544968;
}

void f_00544941(void)
{
    FN_ENTER(0x00544941);
    /* 00544941: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544943: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544945: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00544947: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54494cu); f_00772b44();
    /* 0054494c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054494e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x544953u); f_007b6880();
    /* 00544953: movsx edx, word ptr [ebp + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x344u));
    /* 0054495a: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 0054495d: mov word ptr [ebp + 0x344], ax */ W16((u32)(r_ebp+0x344u), (u16)r_eax);
    /* 00544964: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00544966: jl 0x54497f */ if ((fS!=fO)) goto L_0054497f;
L_00544968:; BB(0x00544968);
    /* 00544968: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054496a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054496c: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0054496f: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00544974: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544975: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x54497au); f_00805608();
    /* 0054497a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054497d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054497e: ret  */ FN_RET(0x00544941); r_esp += 4; return;
L_0054497f:; BB(0x0054497f);
    /* 0054497f: movzx eax, word ptr [ebp + 0x334] */ r_eax = (u32)R16((u32)(r_ebp+0x334u));
    /* 00544986: mov edx, dword ptr [ebp + 0x390] */ r_edx = R32((u32)(r_ebp+0x390u));
    /* 0054498c: mov word ptr [ebp + 0x346], ax */ W16((u32)(r_ebp+0x346u), (u16)r_eax);
    /* 00544993: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00544996: mov dword ptr [ebp + 0x390], edx */ W32((u32)(r_ebp+0x390u), r_edx);
    /* 0054499c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054499e: call 0x5445f4 */ r_esp -= 4; W32(r_esp, 0x5449a3u); f_005445f4();
    /* 005449a3: jmp 0x544968 */ goto L_00544968;
}

void f_00544948(void)
{
    FN_ENTER(0x00544948);
    /* 00544948: clc  */ fC = 0;
    /* 00544949: loope 0x54496d */ r_ecx--; if (r_ecx && fZ) goto L_0054496d;
    /* 0054494b: add byte ptr [ebx + 0x1f2de8cd], cl */ { u32 ad = (u32)(r_ebx+0x1f2de8cdu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00544951: daa  */ UNSUP(0x00544951, "daa ");
    /* 00544952: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00544954: mov edi, 0x34495 */ r_edi = 0x34495u;
    /* 00544959: add byte ptr [ebp - 0x769900be], cl */ { u32 ad = (u32)(r_ebp+0x8966ff42u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0054495f: test dword ptr [ebx + eax], eax */ {  u32 a = R32((u32)(r_ebx+r_eax)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;   }
    /* 00544963: add byte ptr [ebp + 0x6a177cd2], al */ { u32 ad = (u32)(r_ebp+0x6a177cd2u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00544969: add byte ptr [edx + 1], ch */ { u32 ad = (u32)(r_edx+0x1u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0054496c: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0054496d:; BB(0x0054496d);
    /* 0054496d: lds edi, ptr [eax] */ UNSUP(0x0054496d, "lds edi, ptr [eax]");
    /* 0054496f: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00544974: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544975: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x54497au); f_00805608();
    /* 0054497a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054497d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054497e: ret  */ FN_RET(0x00544948); r_esp += 4; return;
}

void f_005449a8(void) /* sub_5449A8 */
{
    FN_ENTER(0x005449a8);
    /* 005449a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005449a9: mov ebp, esp */ r_ebp = r_esp;
    /* 005449ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005449ad: push 0x8d587a */ { u32 v = 0x8d587au; r_esp -= 4; W32(r_esp, v); }
    /* 005449b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005449b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005449b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005449c0: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005449c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005449c6: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 005449c9: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005449cc: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 005449cf: mov eax, dword ptr [ecx + 0x384] */ r_eax = R32((u32)(r_ecx+0x384u));
    /* 005449d5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005449d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005449da: je 0x544f72 */ if (fZ) goto L_00544f72;
L_005449e0:; BB(0x005449e0);
    /* 005449e0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005449e3: je 0x544e5f */ if (fZ) goto L_00544e5f;
L_005449e9:; BB(0x005449e9);
    /* 005449e9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005449ec: je 0x544d0f */ if (fZ) goto L_00544d0f;
L_005449f2:; BB(0x005449f2);
    /* 005449f2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005449f5: je 0x544c29 */ if (fZ) goto L_00544c29;
L_005449fb:; BB(0x005449fb);
    /* 005449fb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005449fe: je 0x544b71 */ if (fZ) goto L_00544b71;
L_00544a04:; BB(0x00544a04);
    /* 00544a04: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544a07: jne 0x544a9f */ if (!fZ) goto L_00544a9f;
L_00544a0d:; BB(0x00544a0d);
    /* 00544a0d: mov eax, ecx */ r_eax = r_ecx;
    /* 00544a0f: movsx edx, word ptr [eax + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00544a16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544a18: jne 0x544a94 */ if (!fZ) goto L_00544a94;
L_00544a1a:; BB(0x00544a1a);
    /* 00544a1a: mov edx, dword ptr [eax + 0x3b8] */ r_edx = R32((u32)(r_eax+0x3b8u));
    /* 00544a20: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00544a23: jge 0x544a48 */ if ((fS==fO)) goto L_00544a48;
L_00544a25:; BB(0x00544a25);
    /* 00544a25: mov edx, eax */ r_edx = r_eax;
    /* 00544a27: mov dword ptr [edx + 0x384], 1 */ W32((u32)(r_edx+0x384u), 0x1u);
    /* 00544a31: mov eax, 3 */ r_eax = 0x3u;
    /* 00544a36: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 00544a3d: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 00544a40: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00544a43: jmp 0x544b9e */ goto L_00544b9e;
L_00544a48:; BB(0x00544a48);
    /* 00544a48: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 00544a4e: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00544a51: je 0x544a5e */ if (fZ) goto L_00544a5e;
L_00544a53:; BB(0x00544a53);
    /* 00544a53: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00544a56: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00544a59: jmp 0x544b9e */ goto L_00544b9e;
L_00544a5e:; BB(0x00544a5e);
    /* 00544a5e: movsx eax, word ptr [eax + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 00544a65: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544a68: je 0x544a87 */ if (fZ) goto L_00544a87;
L_00544a6a:; BB(0x00544a6a);
    /* 00544a6a: mov edx, ecx */ r_edx = r_ecx;
    /* 00544a6c: mov dword ptr [edx + 0x37c], 1 */ W32((u32)(r_edx+0x37cu), 0x1u);
    /* 00544a76: mov dword ptr [edx + 0x388], eax */ W32((u32)(r_edx+0x388u), r_eax);
    /* 00544a7c: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 00544a7f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00544a82: jmp 0x544b9e */ goto L_00544b9e;
L_00544a87:; BB(0x00544a87);
    /* 00544a87: mov eax, ecx */ r_eax = r_ecx;
    /* 00544a89: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00544a8c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00544a8f: jmp 0x544b9e */ goto L_00544b9e;
L_00544a94:; BB(0x00544a94);
    /* 00544a94: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00544a97: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00544a9a: jmp 0x544b9e */ goto L_00544b9e;
L_00544a9f:; BB(0x00544a9f);
    /* 00544a9f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544aa2: jne 0x544b67 */ if (!fZ) goto L_00544b67;
L_00544aa8:; BB(0x00544aa8);
    /* 00544aa8: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 00544aae: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00544ab1: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00544ab6: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 00544abc: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00544ac2: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00544ac5: mov edx, dword ptr [ecx + 0x3f8] */ r_edx = R32((u32)(r_ecx+0x3f8u));
    /* 00544acb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544acd: je 0x544ae8 */ if (fZ) goto L_00544ae8;
L_00544acf:; BB(0x00544acf);
    /* 00544acf: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00544ad3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00544ad8: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00544adc: mov edx, ecx */ r_edx = r_ecx;
    /* 00544ade: mov dword ptr [edx + 0x3f8], 0 */ W32((u32)(r_edx+0x3f8u), 0x0u);
L_00544ae8:; BB(0x00544ae8);
    /* 00544ae8: mov eax, ecx */ r_eax = r_ecx;
    /* 00544aea: mov edx, dword ptr [eax + 0x3fc] */ r_edx = R32((u32)(r_eax+0x3fcu));
    /* 00544af0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544af2: je 0x544b0d */ if (fZ) goto L_00544b0d;
L_00544af4:; BB(0x00544af4);
    /* 00544af4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00544af8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00544afd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00544b01: mov edx, ecx */ r_edx = r_ecx;
    /* 00544b03: mov dword ptr [edx + 0x3fc], 0 */ W32((u32)(r_edx+0x3fcu), 0x0u);
L_00544b0d:; BB(0x00544b0d);
    /* 00544b0d: mov eax, ecx */ r_eax = r_ecx;
    /* 00544b0f: mov edx, dword ptr [eax + 0x400] */ r_edx = R32((u32)(r_eax+0x400u));
    /* 00544b15: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544b17: je 0x544b32 */ if (fZ) goto L_00544b32;
L_00544b19:; BB(0x00544b19);
    /* 00544b19: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00544b1d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00544b22: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00544b26: mov edx, ecx */ r_edx = r_ecx;
    /* 00544b28: mov dword ptr [edx + 0x400], 0 */ W32((u32)(r_edx+0x400u), 0x0u);
L_00544b32:; BB(0x00544b32);
    /* 00544b32: mov eax, ecx */ r_eax = r_ecx;
    /* 00544b34: mov edx, dword ptr [eax + 0x404] */ r_edx = R32((u32)(r_eax+0x404u));
    /* 00544b3a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544b3c: je 0x544b5f */ if (fZ) goto L_00544b5f;
L_00544b3e:; BB(0x00544b3e);
    /* 00544b3e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00544b42: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00544b47: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00544b4b: mov edx, ecx */ r_edx = r_ecx;
    /* 00544b4d: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 00544b50: mov dword ptr [edx + 0x404], 0 */ W32((u32)(r_edx+0x404u), 0x0u);
    /* 00544b5a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00544b5d: jmp 0x544b9e */ goto L_00544b9e;
L_00544b5f:; BB(0x00544b5f);
    /* 00544b5f: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00544b62: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00544b65: jmp 0x544b9e */ goto L_00544b9e;
L_00544b67:; BB(0x00544b67);
    /* 00544b67: mov eax, ecx */ r_eax = r_ecx;
    /* 00544b69: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00544b6c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00544b6f: jmp 0x544b9e */ goto L_00544b9e;
L_00544b71:; BB(0x00544b71);
    /* 00544b71: mov eax, ecx */ r_eax = r_ecx;
    /* 00544b73: movsx edx, word ptr [eax + 0x3a2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a2u));
    /* 00544b7a: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00544b7d: mov word ptr [eax + 0x3a2], dx */ W16((u32)(r_eax+0x3a2u), (u16)r_edx);
    /* 00544b84: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00544b87: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00544b89: jle 0x544bfc */ if ((fZ||fS!=fO)) goto L_00544bfc;
L_00544b8b:; BB(0x00544b8b);
    /* 00544b8b: mov edx, eax */ r_edx = r_eax;
    /* 00544b8d: mov eax, 0x3fcdf012 */ r_eax = 0x3fcdf012u;
    /* 00544b92: mov dword ptr [edx + 0x39c], eax */ W32((u32)(r_edx+0x39cu), r_eax);
    /* 00544b98: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 00544b9b: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_00544b9e:; BB(0x00544b9e);
    /* 00544b9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00544ba1: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00544ba4: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00544ba9: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00544bac: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x544bb1u); f_007aa094();
    /* 00544bb1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00544bb4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544bb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544bb8: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x544bbdu); f_00772b44();
    /* 00544bbd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00544bc0: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x544bc5u); f_007b6880();
    /* 00544bc5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00544bc8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544bca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00544bcc: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00544bd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544bd2: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x544bd7u); f_00805608();
    /* 00544bd7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00544bda: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00544bdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544bdd: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x544be2u); f_006946a8();
    /* 00544be2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00544be5: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00544be8: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00544beb: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00544bee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00544bf1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00544bf8: mov esp, ebp */ r_esp = r_ebp;
    /* 00544bfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544bfb: ret  */ FN_RET(0x005449a8); r_esp += 4; return;
L_00544bfc:; BB(0x00544bfc);
    /* 00544bfc: mov edx, eax */ r_edx = r_eax;
    /* 00544bfe: mov dword ptr [edx + 0x384], 5 */ W32((u32)(r_edx+0x384u), 0x5u);
    /* 00544c08: mov eax, 0xd */ r_eax = 0xdu;
    /* 00544c0d: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 00544c14: mov dword ptr [edx + 0x39c], 0 */ W32((u32)(r_edx+0x39cu), 0x0u);
    /* 00544c1e: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 00544c21: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00544c24: jmp 0x544b9e */ goto L_00544b9e;
L_00544c29:; BB(0x00544c29);
    /* 00544c29: mov eax, ecx */ r_eax = r_ecx;
    /* 00544c2b: mov dword ptr [eax + 0x39c], 0x3fcdf012 */ W32((u32)(r_eax+0x39cu), 0x3fcdf012u);
    /* 00544c35: movsx eax, word ptr [eax + 0x3a2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x3a2u));
    /* 00544c3c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00544c3f: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00544c42: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00544c44: jle 0x544c5a */ if ((fZ||fS!=fO)) goto L_00544c5a;
L_00544c46:; BB(0x00544c46);
    /* 00544c46: mov edx, ecx */ r_edx = r_ecx;
    /* 00544c48: mov word ptr [edx + 0x3a2], ax */ W16((u32)(r_edx+0x3a2u), (u16)r_eax);
    /* 00544c4f: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 00544c52: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00544c55: jmp 0x544b9e */ goto L_00544b9e;
L_00544c5a:; BB(0x00544c5a);
    /* 00544c5a: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00544c5f: mov eax, 0xf */ r_eax = 0xfu;
    /* 00544c64: mov word ptr [ecx + 0x3a2], ax */ W16((u32)(r_ecx+0x3a2u), (u16)r_eax);
    /* 00544c6b: add dword ptr [ecx + 0x3b8], 1 */ { u32 ad = (u32)(r_ecx+0x3b8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00544c72: mov dword ptr [ecx + 0x384], 4 */ W32((u32)(r_ecx+0x384u), 0x4u);
    /* 00544c7c: call 0x52ccd8 */ r_esp -= 4; W32(r_esp, 0x544c81u); f_0052ccd8();
    /* 00544c81: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00544c84: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x544c89u); f_00770738();
    /* 00544c89: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00544c8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544c8e: je 0x544d01 */ if (fZ) goto L_00544d01;
L_00544c90:; BB(0x00544c90);
    /* 00544c90: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00544c97: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00544c9c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x544ca1u); f_005caba4();
    /* 00544ca1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00544ca2: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00544ca5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544ca7: je 0x544cda */ if (fZ) goto L_00544cda;
L_00544ca9:; BB(0x00544ca9);
    /* 00544ca9: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00544cb0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00544cb7: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00544cba: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00544cbd: lea ebx, [esi + 0x3bc] */ r_ebx = (u32)(r_esi+0x3bcu);
    /* 00544cc3: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00544cc9: mov ecx, eax */ r_ecx = r_eax;
    /* 00544ccb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00544ccc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00544ccd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00544cce: call 0x546610 */ r_esp -= 4; W32(r_esp, 0x544cd3u); f_00546610();
    /* 00544cd3: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00544cda:; BB(0x00544cda);
    /* 00544cda: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00544ce1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00544ce4: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00544ce7: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00544cea: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00544cec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00544ced: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00544cee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544cef: push 0x1f6 */ { u32 v = 0x1f6u; r_esp -= 4; W32(r_esp, v); }
    /* 00544cf4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x544cf9u); f_00814298();
    /* 00544cf9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00544cfc: jmp 0x544b9e */ goto L_00544b9e;
L_00544d01:; BB(0x00544d01);
    /* 00544d01: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00544d04: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00544d07: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00544d0a: jmp 0x544b9e */ goto L_00544b9e;
L_00544d0f:; BB(0x00544d0f);
    /* 00544d0f: mov eax, ecx */ r_eax = r_ecx;
    /* 00544d11: mov dword ptr [eax + 0x39c], 0x3fcdf012 */ W32((u32)(r_eax+0x39cu), 0x3fcdf012u);
    /* 00544d1b: movsx eax, word ptr [eax + 0x3a2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x3a2u));
    /* 00544d22: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00544d25: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00544d28: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00544d2a: jle 0x544d40 */ if ((fZ||fS!=fO)) goto L_00544d40;
L_00544d2c:; BB(0x00544d2c);
    /* 00544d2c: mov edx, ecx */ r_edx = r_ecx;
    /* 00544d2e: mov word ptr [edx + 0x3a2], ax */ W16((u32)(r_edx+0x3a2u), (u16)r_eax);
    /* 00544d35: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 00544d38: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00544d3b: jmp 0x544b9e */ goto L_00544b9e;
L_00544d40:; BB(0x00544d40);
    /* 00544d40: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 00544d46: mov eax, 4 */ r_eax = 0x4u;
    /* 00544d4b: mov word ptr [ecx + 0x3a2], ax */ W16((u32)(r_ecx+0x3a2u), (u16)r_eax);
    /* 00544d52: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00544d58: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
    /* 00544d5e: mov edx, dword ptr [ecx + 0x3f8] */ r_edx = R32((u32)(r_ecx+0x3f8u));
    /* 00544d64: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544d66: je 0x544d81 */ if (fZ) goto L_00544d81;
L_00544d68:; BB(0x00544d68);
    /* 00544d68: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00544d6c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00544d71: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00544d75: mov edx, ecx */ r_edx = r_ecx;
    /* 00544d77: mov dword ptr [edx + 0x3f8], 0 */ W32((u32)(r_edx+0x3f8u), 0x0u);
L_00544d81:; BB(0x00544d81);
    /* 00544d81: mov eax, ecx */ r_eax = r_ecx;
    /* 00544d83: mov edx, dword ptr [eax + 0x3fc] */ r_edx = R32((u32)(r_eax+0x3fcu));
    /* 00544d89: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544d8b: je 0x544da6 */ if (fZ) goto L_00544da6;
L_00544d8d:; BB(0x00544d8d);
    /* 00544d8d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00544d91: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00544d96: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00544d9a: mov edx, ecx */ r_edx = r_ecx;
    /* 00544d9c: mov dword ptr [edx + 0x3fc], 0 */ W32((u32)(r_edx+0x3fcu), 0x0u);
L_00544da6:; BB(0x00544da6);
    /* 00544da6: mov eax, ecx */ r_eax = r_ecx;
    /* 00544da8: mov edx, dword ptr [eax + 0x400] */ r_edx = R32((u32)(r_eax+0x400u));
    /* 00544dae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544db0: je 0x544dcb */ if (fZ) goto L_00544dcb;
L_00544db2:; BB(0x00544db2);
    /* 00544db2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00544db6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00544dbb: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00544dbf: mov edx, ecx */ r_edx = r_ecx;
    /* 00544dc1: mov dword ptr [edx + 0x400], 0 */ W32((u32)(r_edx+0x400u), 0x0u);
L_00544dcb:; BB(0x00544dcb);
    /* 00544dcb: mov eax, ecx */ r_eax = r_ecx;
    /* 00544dcd: mov edx, dword ptr [eax + 0x404] */ r_edx = R32((u32)(r_eax+0x404u));
    /* 00544dd3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544dd5: je 0x544df0 */ if (fZ) goto L_00544df0;
L_00544dd7:; BB(0x00544dd7);
    /* 00544dd7: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00544ddb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00544de0: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00544de4: mov edx, ecx */ r_edx = r_ecx;
    /* 00544de6: mov dword ptr [edx + 0x404], 0 */ W32((u32)(r_edx+0x404u), 0x0u);
L_00544df0:; BB(0x00544df0);
    /* 00544df0: mov eax, ecx */ r_eax = r_ecx;
    /* 00544df2: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 00544df8: mov dword ptr [eax + 0x384], 3 */ W32((u32)(r_eax+0x384u), 0x3u);
    /* 00544e02: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544e08: je 0x544e11 */ if (fZ) goto L_00544e11;
L_00544e0a:; BB(0x00544e0a);
    /* 00544e0a: mov eax, 1 */ r_eax = 0x1u;
    /* 00544e0f: jmp 0x544e13 */ goto L_00544e13;
L_00544e11:; BB(0x00544e11);
    /* 00544e11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00544e13:; BB(0x00544e13);
    /* 00544e13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544e15: je 0x544e3b */ if (fZ) goto L_00544e3b;
L_00544e17:; BB(0x00544e17);
    /* 00544e17: mov eax, ecx */ r_eax = r_ecx;
    /* 00544e19: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00544e1e: lea edx, [eax + 0x3bc] */ r_edx = (u32)(r_eax+0x3bcu);
    /* 00544e24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00544e25: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x544e2au); f_0050b510();
    /* 00544e2a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00544e2d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00544e30: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00544e33: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00544e36: jmp 0x544b9e */ goto L_00544b9e;
L_00544e3b:; BB(0x00544e3b);
    /* 00544e3b: mov eax, ecx */ r_eax = r_ecx;
    /* 00544e3d: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 00544e42: lea edx, [eax + 0x3bc] */ r_edx = (u32)(r_eax+0x3bcu);
    /* 00544e48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00544e49: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x544e4eu); f_0050b510();
    /* 00544e4e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00544e51: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00544e54: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00544e57: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00544e5a: jmp 0x544b9e */ goto L_00544b9e;
L_00544e5f:; BB(0x00544e5f);
    /* 00544e5f: mov edx, ecx */ r_edx = r_ecx;
    /* 00544e61: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 00544e67: fcomp dword ptr [0x923a24] */ fx_compare(ST(0), R_F32((u32)(0x923a24u))); FPOP();
    /* 00544e6d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00544e6f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00544e70: jb 0x544e7e */ if (fC) goto L_00544e7e;
L_00544e72:; BB(0x00544e72);
    /* 00544e72: mov eax, edx */ r_eax = r_edx;
    /* 00544e74: mov dword ptr [eax + 0x39c], 0x3fcdf012 */ W32((u32)(r_eax+0x39cu), 0x3fcdf012u);
L_00544e7e:; BB(0x00544e7e);
    /* 00544e7e: mov eax, edx */ r_eax = r_edx;
    /* 00544e80: movsx edx, word ptr [eax + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00544e87: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544e8a: je 0x544e97 */ if (fZ) goto L_00544e97;
L_00544e8c:; BB(0x00544e8c);
    /* 00544e8c: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00544e8f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00544e92: jmp 0x544b9e */ goto L_00544b9e;
L_00544e97:; BB(0x00544e97);
    /* 00544e97: mov ebx, eax */ r_ebx = r_eax;
    /* 00544e99: mov edx, dword ptr [0xa73824] */ r_edx = R32((u32)(0xa73824u));
    /* 00544e9f: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 00544ea5: or eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00544eaa: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 00544eb0: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00544eb3: mov dword ptr [ebx + 0x384], 2 */ W32((u32)(r_ebx+0x384u), 0x2u);
    /* 00544ebd: mov word ptr [ebx + 0x3a2], cx */ W16((u32)(r_ebx+0x3a2u), (u16)r_ecx);
    /* 00544ec4: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 00544ec7: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 00544eca: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00544ecc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00544ecd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00544ece: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00544ecf: push 0x1f5 */ { u32 v = 0x1f5u; r_esp -= 4; W32(r_esp, v); }
    /* 00544ed4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x544ed9u); f_00814298();
    /* 00544ed9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00544edc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00544ede: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_00544ee1:; BB(0x00544ee1);
    /* 00544ee1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00544ee8: push 0x348 */ { u32 v = 0x348u; r_esp -= 4; W32(r_esp, v); }
    /* 00544eed: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x544ef2u); f_005caba4();
    /* 00544ef2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00544ef5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00544ef8: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00544efb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544efd: je 0x544f6b */ if (fZ) goto L_00544f6b;
L_00544eff:; BB(0x00544eff);
    /* 00544eff: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00544f06: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00544f0d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00544f10: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00544f13: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00544f15: lea edi, [ecx + 0x3bc] */ r_edi = (u32)(r_ecx+0x3bcu);
    /* 00544f1b: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00544f1e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00544f20: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00544f23: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00544f25: lea esi, [ecx + ebx + 0x3c8] */ r_esi = (u32)(r_ecx+r_ebx+0x3c8u);
    /* 00544f2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00544f2d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00544f2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544f2f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00544f32: call 0x546bbc */ r_esp -= 4; W32(r_esp, 0x544f37u); f_00546bbc();
    /* 00544f37: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00544f3e:; BB(0x00544f3e);
    /* 00544f3e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00544f41: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00544f44: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00544f47: mov dword ptr [edx + ecx*4 + 0x3f8], eax */ W32((u32)(r_edx+r_ecx*4+0x3f8u), r_eax);
    /* 00544f4e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00544f55: mov eax, ecx */ r_eax = r_ecx;
    /* 00544f57: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00544f5a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00544f5d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00544f60: jl 0x544ee1 */ if ((fS!=fO)) goto L_00544ee1;
L_00544f66:; BB(0x00544f66);
    /* 00544f66: jmp 0x544b9e */ goto L_00544b9e;
L_00544f6b:; BB(0x00544f6b);
    /* 00544f6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00544f6d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00544f70: jmp 0x544f3e */ goto L_00544f3e;
L_00544f72:; BB(0x00544f72);
    /* 00544f72: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00544f74: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00544f77: or eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00544f7c: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 00544f82: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00544f85: and edx, 0xffb7ffff */ {  u32 a = r_edx; u32 b = 0xffb7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00544f8b: mov dword ptr [ebx + 0x390], edx */ W32((u32)(r_ebx+0x390u), r_edx);
    /* 00544f91: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00544f93: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00544f94: mov dword ptr [ebx + 0x3b8], esi */ W32((u32)(r_ebx+0x3b8u), r_esi);
    /* 00544f9a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00544f9b: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00544fa0: mov word ptr [ebx + 0xb8], cx */ W16((u32)(r_ebx+0xb8u), (u16)r_ecx);
    /* 00544fa7: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 00544faa: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 00544fad: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00544fae: push 0x1fa */ { u32 v = 0x1fau; r_esp -= 4; W32(r_esp, v); }
    /* 00544fb3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x544fb8u); f_00814298();
    /* 00544fb8: mov edx, edi */ r_edx = r_edi;
    /* 00544fba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00544fbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544fbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544fbe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00544fbf: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00544fc4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x544fc9u); f_00814298();
    /* 00544fc9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00544fcc: mov eax, ebx */ r_eax = r_ebx;
    /* 00544fce: mov dword ptr [eax + 0x384], 1 */ W32((u32)(r_eax+0x384u), 0x1u);
    /* 00544fd8: jmp 0x544b9e */ goto L_00544b9e;
}

void f_00544c55(void)
{
    FN_ENTER(0x00544c55);
    goto L_00544c55;
L_00544b9e:; BB(0x00544b9e);
    /* 00544b9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00544ba1: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00544ba4: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00544ba9: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00544bac: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x544bb1u); f_007aa094();
    /* 00544bb1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00544bb4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544bb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544bb8: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x544bbdu); f_00772b44();
    /* 00544bbd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00544bc0: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x544bc5u); f_007b6880();
    /* 00544bc5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00544bc8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544bca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00544bcc: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00544bd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544bd2: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x544bd7u); f_00805608();
    /* 00544bd7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00544bda: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00544bdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544bdd: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x544be2u); f_006946a8();
    /* 00544be2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00544be5: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00544be8: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00544beb: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00544bee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00544bf1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00544bf8: mov esp, ebp */ r_esp = r_ebp;
    /* 00544bfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544bfb: ret  */ FN_RET(0x00544c55); r_esp += 4; return;
L_00544c55:; BB(0x00544c55);
    /* 00544c55: jmp 0x544b9e */ goto L_00544b9e;
}

void f_00544e45(void)
{
    FN_ENTER(0x00544e45);
    /* 00544e45: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00544e47: add byte ptr [edx - 0x18], dl */ { u32 ad = (u32)(r_edx+0xffffffe8u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00544e4a: ret 0xfc66 */ FN_RET(0x00544e45); r_esp += 64618; return;
}

void f_00544e55(void)
{
    FN_ENTER(0x00544e55);
    /* 00544e55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544e56: cmp byte ptr [ecx + 0x3fe9e855], cl */ {  u32 a = R8((u32)(r_ecx+0x3fe9e855u)); u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu;   }
    /* 00544e5c: std  */ rt_df = 1;
    UNSUP(0x00544e5d, "falls out of decoded code");
}

void f_00544f48(void)
{
    FN_ENTER(0x00544f48);
    goto L_00544f48;
L_00544b9e:; BB(0x00544b9e);
    /* 00544b9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00544ba1: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00544ba4: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00544ba9: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00544bac: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x544bb1u); f_007aa094();
    /* 00544bb1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00544bb4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544bb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544bb8: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x544bbdu); f_00772b44();
    /* 00544bbd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00544bc0: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x544bc5u); f_007b6880();
    /* 00544bc5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00544bc8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00544bca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00544bcc: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00544bd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544bd2: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x544bd7u); f_00805608();
    /* 00544bd7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00544bda: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00544bdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544bdd: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x544be2u); f_006946a8();
    /* 00544be2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00544be5: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00544be8: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00544beb: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00544bee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00544bf1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00544bf8: mov esp, ebp */ r_esp = r_ebp;
    /* 00544bfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544bfb: ret  */ FN_RET(0x00544f48); r_esp += 4; return;
L_00544ee1:; BB(0x00544ee1);
    /* 00544ee1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00544ee8: push 0x348 */ { u32 v = 0x348u; r_esp -= 4; W32(r_esp, v); }
    /* 00544eed: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x544ef2u); f_005caba4();
    /* 00544ef2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00544ef5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00544ef8: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00544efb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00544efd: je 0x544f6b */ if (fZ) goto L_00544f6b;
L_00544eff:; BB(0x00544eff);
    /* 00544eff: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00544f06: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00544f0d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00544f10: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00544f13: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00544f15: lea edi, [ecx + 0x3bc] */ r_edi = (u32)(r_ecx+0x3bcu);
    /* 00544f1b: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00544f1e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00544f20: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00544f23: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00544f25: lea esi, [ecx + ebx + 0x3c8] */ r_esi = (u32)(r_ecx+r_ebx+0x3c8u);
    /* 00544f2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00544f2d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00544f2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00544f2f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00544f32: call 0x546bbc */ r_esp -= 4; W32(r_esp, 0x544f37u); f_00546bbc();
    /* 00544f37: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00544f3e:; BB(0x00544f3e);
    /* 00544f3e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00544f41: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00544f44: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00544f47: mov dword ptr [edx + ecx*4 + 0x3f8], eax */ W32((u32)(r_edx+r_ecx*4+0x3f8u), r_eax);
L_00544f48:; BB(0x00544f48);
    /* 00544f48: test byte ptr [edx + 0x3f8], cl */ {  u32 a = R8((u32)(r_edx+0x3f8u)); u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;   }
    /* 00544f4e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00544f55: mov eax, ecx */ r_eax = r_ecx;
    /* 00544f57: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00544f5a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00544f5d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00544f60: jl 0x544ee1 */ if ((fS!=fO)) goto L_00544ee1;
L_00544f66:; BB(0x00544f66);
    /* 00544f66: jmp 0x544b9e */ goto L_00544b9e;
L_00544f6b:; BB(0x00544f6b);
    /* 00544f6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00544f6d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00544f70: jmp 0x544f3e */ goto L_00544f3e;
}

void f_00544fe0(void) /* sub_544FE0 */
{
    FN_ENTER(0x00544fe0);
    /* 00544fe0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00544fe1: mov ebx, esp */ r_ebx = r_esp;
    /* 00544fe3: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00544fe6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544fe7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00544fe8: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 00544feb: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00544fef: mov ebp, esp */ r_ebp = r_esp;
    /* 00544ff1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00544ff3: push 0x8d5902 */ { u32 v = 0x8d5902u; r_esp -= 4; W32(r_esp, v); }
    /* 00544ff8: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00544ffe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00544fff: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00545006: sub esp, 0xdc */ {  u32 a = r_esp; u32 b = 0xdcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054500c: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0054500f: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00545012: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00545015: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00545018: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0054501b: and edx, 0xfffbffff */ {  u32 a = r_edx; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00545021: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00545024: mov ecx, dword ptr [ecx + 0x384] */ r_ecx = R32((u32)(r_ecx+0x384u));
    /* 0054502a: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 0054502d: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00545030: ja 0x5457c8 */ if ((!fC&&!fZ)) goto L_005457c8;
L_00545036:; BB(0x00545036);
    /* 00545036: mov eax, dword ptr [ecx*4 + 0x923960] */ r_eax = R32((u32)(r_ecx*4+0x923960u));
    /* 0054503d: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005457c8:; BB(0x005457c8);
    /* 005457c8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457cb: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 005457ce: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 005457d1: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005457d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457d7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5457dcu); f_007b6880();
    /* 005457dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005457df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005457e3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005457e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457e9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5457eeu); f_00805608();
    /* 005457ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005457f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005457f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005457f4: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5457f9u); f_006946a8();
    /* 005457f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005457fc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005457ff: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00545802: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545805: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054580c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054580e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054580f: mov esp, ebx */ r_esp = r_ebx;
    /* 00545811: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00545812: ret  */ FN_RET(0x00544fe0); r_esp += 4; return;
}

