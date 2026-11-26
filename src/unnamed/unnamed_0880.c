#include "protos.h"

void f_00880000(void)
{
    FN_ENTER(0x00880000);
    /* 00880000: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00880001: add ch, bl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00880003: add eax, 0x99a878 */ {  u32 a = r_eax; u32 b = 0x99a878u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00880008: fld qword ptr [0x99a870] */ FPUSH(R_F64((u32)(0x99a870u)));
    /* 0088000e: fld dword ptr [0x99ab98] */ FPUSH(R_F32((u32)(0x99ab98u)));
    /* 00880014: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 00880018: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088001b: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0088001f: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 00880023: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00880027: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 0088002b: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 0088002f: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 00880033: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880035: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880037: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880039: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088003b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088003d: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 00880041: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
L_00880045:; BB(0x00880045);
    /* 00880045: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 00880049: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0088004d: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00880051: fst dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0));
    /* 00880058: fld dword ptr [0x99aba0] */ FPUSH(R_F32((u32)(0x99aba0u)));
    /* 0088005e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00880060: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00880063: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x880068u); f_0084d1fc();
    /* 00880068: fstp qword ptr [esp + 0x60] */ W_F64((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0088006c: mov eax, ebp */ r_eax = r_ebp;
    /* 0088006e: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880071: imul eax, dword ptr [esp + 0x68] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x68u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880076: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0088007a: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0088007e: fmul dword ptr [0x99ab9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ab9cu));
    /* 00880084: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00880087: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x88008cu); f_0084d1fc();
    /* 0088008c: fld qword ptr [esp + 0x60] */ FPUSH(R_F64((u32)(r_esp+0x60u)));
    /* 00880090: fmul qword ptr [0x99a878] */ ST(0) = ST(0) * R_F64((u32)(0x99a878u));
    /* 00880096: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00880098: fmul qword ptr [0x99a870] */ ST(0) = ST(0) * R_F64((u32)(0x99a870u));
    /* 0088009e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008800a0: fld dword ptr [esp + 0x80] */ FPUSH(R_F32((u32)(r_esp+0x80u)));
    /* 008800a7: fmul dword ptr [0x99ab98] */ ST(0) = ST(0) * R_F32((u32)(0x99ab98u));
    /* 008800ad: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008800af: fstp qword ptr [esp + 0x60] */ W_F64((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 008800b3: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 008800b7: mov edi, dword ptr [edi + 0x78] */ r_edi = R32((u32)(r_edi+0x78u));
    /* 008800ba: lea eax, [esi + edi] */ r_eax = (u32)(r_esi+r_edi);
    /* 008800bd: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008800bf: jge 0x8801ee */ if ((fS==fO)) goto L_008801ee;
L_008800c5:; BB(0x008800c5);
    /* 008800c5: mov eax, esi */ r_eax = r_esi;
    /* 008800c7: imul eax, dword ptr [esp + 0x70] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x70u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008800cc: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 008800d0: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 008800d4: fst dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0));
    /* 008800d8: fld dword ptr [0x99aba0] */ FPUSH(R_F32((u32)(0x99aba0u)));
    /* 008800de: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008800e0: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008800e3: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x8800e8u); f_0084d1fc();
    /* 008800e8: fstp qword ptr [esp + 0x80] */ W_F64((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 008800ef: mov eax, esi */ r_eax = r_esi;
    /* 008800f1: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008800f4: imul eax, dword ptr [esp + 0x68] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x68u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008800f9: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 008800fd: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00880101: fmul dword ptr [0x99ab9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ab9cu));
    /* 00880107: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088010a: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x88010fu); f_0084d1fc();
    /* 0088010f: fld qword ptr [esp + 0x80] */ FPUSH(R_F64((u32)(r_esp+0x80u)));
    /* 00880116: fmul qword ptr [0x99a878] */ ST(0) = ST(0) * R_F64((u32)(0x99a878u));
    /* 0088011c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088011e: fmul qword ptr [0x99a870] */ ST(0) = ST(0) * R_F64((u32)(0x99a870u));
    /* 00880124: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 00880128: fmul dword ptr [0x99ab98] */ ST(0) = ST(0) * R_F32((u32)(0x99ab98u));
    /* 0088012e: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00880130: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00880132: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00880136: fld dword ptr [edx + 0x70] */ FPUSH(R_F32((u32)(r_edx+0x70u)));
    /* 00880139: fsubr qword ptr [esp + 0x60] */ ST(0) = R_F64((u32)(r_esp+0x60u)) - ST(0);
    /* 0088013d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088013f: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00880141: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00880143: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00880144: jae 0x8805a5 */ if (!fC) goto L_008805a5;
L_0088014a:; BB(0x0088014a);
    /* 0088014a: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088014c: mov eax, esi */ r_eax = r_esi;
    /* 0088014e: imul eax, dword ptr [esp + 0x70] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x70u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880153: mov dword ptr [esp + 0x5c], ebp */ W32((u32)(r_esp+0x5cu), r_ebp);
    /* 00880157: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 0088015e: mov ebp, edi */ r_ebp = r_edi;
    /* 00880160: mov edi, eax */ r_edi = r_eax;
L_00880162:; BB(0x00880162);
    /* 00880162: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880163: add edi, dword ptr [esp + 0x70] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x70u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00880167: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880168: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 0088016c: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088016e: jge 0x880563 */ if ((fS==fO)) goto L_00880563;
L_00880174:; BB(0x00880174);
    /* 00880174: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00880178: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0088017c: fst dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0));
    /* 00880180: fld dword ptr [0x99aba0] */ FPUSH(R_F32((u32)(0x99aba0u)));
    /* 00880186: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00880188: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088018b: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x880190u); f_0084d1fc();
    /* 00880190: fstp qword ptr [esp + 0x88] */ W_F64((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00880197: mov edx, esi */ r_edx = r_esi;
    /* 00880199: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088019c: imul edx, dword ptr [esp + 0x68] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x68u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008801a1: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 008801a5: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 008801a9: fmul dword ptr [0x99ab9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ab9cu));
    /* 008801af: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008801b2: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x8801b7u); f_0084d1fc();
    /* 008801b7: fld qword ptr [esp + 0x88] */ FPUSH(R_F64((u32)(r_esp+0x88u)));
    /* 008801be: fmul qword ptr [0x99a878] */ ST(0) = ST(0) * R_F64((u32)(0x99a878u));
    /* 008801c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008801c6: fmul qword ptr [0x99a870] */ ST(0) = ST(0) * R_F64((u32)(0x99a870u));
    /* 008801cc: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 008801d0: fmul dword ptr [0x99ab98] */ ST(0) = ST(0) * R_F32((u32)(0x99ab98u));
    /* 008801d6: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008801d8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008801da: fcomp dword ptr [esp + 0x80] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x80u))); FPOP();
    /* 008801e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008801e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008801e4: jb 0x880162 */ if (fC) goto L_00880162;
L_008801ea:; BB(0x008801ea);
    /* 008801ea: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
L_008801ee:; BB(0x008801ee);
    /* 008801ee: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 008801f2: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 008801f6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008801f8: jg 0x8802c5 */ if ((!fZ&&fS==fO)) goto L_008802c5;
L_008801fe:; BB(0x008801fe);
    /* 008801fe: mov eax, ebp */ r_eax = r_ebp;
    /* 00880200: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00880204: add eax, dword ptr [edx + 0x7c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x7cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00880207: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 0088020b: imul edi, dword ptr [esp + 0x70] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_esp+0x70u)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880210: mov dword ptr [esp + 0x5c], ebp */ W32((u32)(r_esp+0x5cu), r_ebp);
    /* 00880214: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 00880218: mov ebp, eax */ r_ebp = r_eax;
    /* 0088021a: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
L_0088021e:; BB(0x0088021e);
    /* 0088021e: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880220: jl 0x8802a8 */ if ((fS!=fO)) goto L_008802a8;
L_00880226:; BB(0x00880226);
    /* 00880226: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0088022a: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0088022e: fst dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0));
    /* 00880235: fld dword ptr [0x99aba0] */ FPUSH(R_F32((u32)(0x99aba0u)));
    /* 0088023b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0088023d: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00880240: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x880245u); f_0084d1fc();
    /* 00880245: fstp qword ptr [esp + 0x88] */ W_F64((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 0088024c: mov edx, esi */ r_edx = r_esi;
    /* 0088024e: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880251: imul edx, dword ptr [esp + 0x68] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x68u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880256: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0088025a: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0088025e: fmul dword ptr [0x99ab9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ab9cu));
    /* 00880264: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00880267: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x88026cu); f_0084d1fc();
    /* 0088026c: fld dword ptr [esp + 0x80] */ FPUSH(R_F32((u32)(r_esp+0x80u)));
    /* 00880273: fmul dword ptr [0x99ab98] */ ST(0) = ST(0) * R_F32((u32)(0x99ab98u));
    /* 00880279: fld qword ptr [esp + 0x88] */ FPUSH(R_F64((u32)(r_esp+0x88u)));
    /* 00880280: fmul qword ptr [0x99a878] */ ST(0) = ST(0) * R_F64((u32)(0x99a878u));
    /* 00880286: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00880288: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088028a: fmul qword ptr [0x99a870] */ ST(0) = ST(0) * R_F64((u32)(0x99a870u));
    /* 00880290: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00880292: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00880296: fld dword ptr [edx + 0x74] */ FPUSH(R_F32((u32)(r_edx+0x74u)));
    /* 00880299: fadd qword ptr [esp + 0x60] */ ST(0) = ST(0) + R_F64((u32)(r_esp+0x60u));
    /* 0088029d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0088029f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008802a1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008802a2: jbe 0x880552 */ if ((fC||fZ)) goto L_00880552;
L_008802a8:; BB(0x008802a8);
    /* 008802a8: add edi, dword ptr [esp + 0x70] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x70u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008802ac: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008802ad: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 008802b1: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008802b3: jle 0x88021e */ if ((fZ||fS!=fO)) goto L_0088021e;
L_008802b9:; BB(0x008802b9);
    /* 008802b9: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 008802bd: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 008802c1: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
L_008802c5:; BB(0x008802c5);
    /* 008802c5: lea eax, [esi - 1] */ r_eax = (u32)(r_esi+0xffffffffu);
    /* 008802c8: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008802cb: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 008802cf: lea edi, [eax + edx - 1] */ r_edi = (u32)(r_eax+r_edx+0xffffffffu);
    /* 008802d3: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 008802d7: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 008802da: mov dword ptr [eax + ebp*4], edi */ W32((u32)(r_eax+r_ebp*4), r_edi);
    /* 008802dd: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 008802e1: add eax, dword ptr [esp + 0x70] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x70u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008802e5: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 008802e9: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008802ea: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 008802ee: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008802f0: jl 0x880045 */ if ((fS!=fO)) goto L_00880045;
L_008802f6:; BB(0x008802f6);
    /* 008802f6: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 008802fa: mov ebp, eax */ r_ebp = r_eax;
    /* 008802fc: mov edi, ecx */ r_edi = r_ecx;
    /* 008802fe: fld qword ptr [0x99a8b0] */ FPUSH(R_F64((u32)(0x99a8b0u)));
    /* 00880304: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00880306: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00880308: jle 0x8803b0 */ if ((fZ||fS!=fO)) goto L_008803b0;
L_0088030e:; BB(0x0088030e);
    /* 0088030e: fld dword ptr [0x99aba4] */ FPUSH(R_F32((u32)(0x99aba4u)));
    /* 00880314: fld qword ptr [0x99a8a0] */ FPUSH(R_F64((u32)(0x99a8a0u)));
    /* 0088031a: fld qword ptr [0x99a898] */ FPUSH(R_F64((u32)(0x99a898u)));
    /* 00880320: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00880324: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880326: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880328: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088032a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088032c: mov esi, eax */ r_esi = r_eax;
L_0088032e:; BB(0x0088032e);
    /* 0088032e: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00880332: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00880336: fadd dword ptr [0x99aba4] */ ST(0) = ST(0) + R_F32((u32)(0x99aba4u));
    /* 0088033c: fmul qword ptr [0x99a8b0] */ ST(0) = ST(0) * R_F64((u32)(0x99a8b0u));
    /* 00880342: fmul qword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x40u));
    /* 00880346: fdiv qword ptr [esp + 0x48] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x48u));
    /* 0088034a: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088034d: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x880352u); f_0084d1ac();
    /* 00880352: fmul qword ptr [0x99a898] */ ST(0) = ST(0) * R_F64((u32)(0x99a898u));
    /* 00880358: fadd qword ptr [0x99a8a0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8a0u));
    /* 0088035e: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00880361: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00880362: mov eax, 1 */ r_eax = 0x1u;
    /* 00880367: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00880369: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0088036d: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00880371: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00880373: fadd qword ptr [0x99a8b0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8b0u));
    /* 00880379: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0088037d: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00880382: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00880387: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0088038b: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0088038f: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00880393: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00880397: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0088039b: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 0088039e: mov dword ptr [eax + esi*4], ecx */ W32((u32)(r_eax+r_esi*4), r_ecx);
    /* 008803a1: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008803a2: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008803a4: jl 0x88032e */ if ((fS!=fO)) goto L_0088032e;
L_008803a6:; BB(0x008803a6);
    /* 008803a6: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 008803aa: fld qword ptr [0x99a8b0] */ FPUSH(R_F64((u32)(0x99a8b0u)));
L_008803b0:; BB(0x008803b0);
    /* 008803b0: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 008803b4: lea eax, [edx + 0x24] */ r_eax = (u32)(r_edx+0x24u);
    /* 008803b7: fmul qword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x40u));
    /* 008803bb: fdiv qword ptr [esp + 0x48] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x48u));
    /* 008803bf: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 008803c2: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 008803c6: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 008803c9: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 008803cd: mov edx, ebp */ r_edx = r_ebp;
    /* 008803cf: call 0x87ca38 */ r_esp -= 4; W32(r_esp, 0x8803d4u); f_0087ca38();
    /* 008803d4: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 008803d7: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 008803d9: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8803deu); f_00859c55();
    /* 008803de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008803df: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 008803e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008803e4: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 008803e8: mov ebp, eax */ r_ebp = r_eax;
L_008803ea:; BB(0x008803ea);
    /* 008803ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008803eb: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8803f0u); f_00859c55();
    /* 008803f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008803f1: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 008803f4: mov dword ptr [edx + ebp*4], eax */ W32((u32)(r_edx+r_ebp*4), r_eax);
    /* 008803f7: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008803f8: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008803fb: jl 0x8803ea */ if ((fS!=fO)) goto L_008803ea;
L_008803fd:; BB(0x008803fd);
    /* 008803fd: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 00880401: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00880403: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00880405: jle 0x88052f */ if ((fZ||fS!=fO)) goto L_0088052f;
L_0088040b:; BB(0x0088040b);
    /* 0088040b: fld qword ptr [0x99a8b8] */ FPUSH(R_F64((u32)(0x99a8b8u)));
    /* 00880411: fld qword ptr [0x99a8b0] */ FPUSH(R_F64((u32)(0x99a8b0u)));
    /* 00880417: fld qword ptr [esp + 0x48] */ FPUSH(R_F64((u32)(r_esp+0x48u)));
    /* 0088041b: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0088041d: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00880421: fld qword ptr [0x99a8a0] */ FPUSH(R_F64((u32)(0x99a8a0u)));
    /* 00880427: fld qword ptr [0x99a898] */ FPUSH(R_F64((u32)(0x99a898u)));
    /* 0088042d: fld dword ptr [0x99ab94] */ FPUSH(R_F32((u32)(0x99ab94u)));
    /* 00880433: fld dword ptr [0x99ab90] */ FPUSH(R_F32((u32)(0x99ab90u)));
    /* 00880439: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088043b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088043d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088043f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880441: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880443: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00880445:; BB(0x00880445);
    /* 00880445: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00880449: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0088044d: fadd qword ptr [0x99a8b0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8b0u));
    /* 00880453: fmul qword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x40u));
    /* 00880457: fdiv qword ptr [esp + 0x48] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x48u));
    /* 0088045b: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088045e: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x880463u); f_0084d1ac();
    /* 00880463: fmul qword ptr [0x99a898] */ ST(0) = ST(0) * R_F64((u32)(0x99a898u));
    /* 00880469: fadd qword ptr [0x99a8a0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8a0u));
    /* 0088046f: fmul qword ptr [0x99a8b8] */ ST(0) = ST(0) * R_F64((u32)(0x99a8b8u));
    /* 00880475: fld dword ptr [0x99ab94] */ FPUSH(R_F32((u32)(0x99ab94u)));
    /* 0088047b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0088047d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088047f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00880480: jbe 0x880484 */ if ((fC||fZ)) goto L_00880484;
L_00880482:; BB(0x00880482);
    /* 00880482: fst st(1) */ ST(1) = ST(0);
L_00880484:; BB(0x00880484);
    /* 00880484: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880486: fld dword ptr [0x99ab90] */ FPUSH(R_F32((u32)(0x99ab90u)));
    /* 0088048c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0088048e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00880490: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00880491: ja 0x880495 */ if ((!fC&&!fZ)) goto L_00880495;
L_00880493:; BB(0x00880493);
    /* 00880493: fst st(1) */ ST(1) = ST(0);
L_00880495:; BB(0x00880495);
    /* 00880495: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880497: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0088049b: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 008804a0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008804a5: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 008804a9: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 008804ad: fist dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0)));
    /* 008804b1: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 008804b5: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 008804b9: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 008804bd: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008804bf: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008804c2: fld qword ptr [0x99a868] */ FPUSH(R_F64((u32)(0x99a868u)));
    /* 008804c8: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008804ca: fld dword ptr [eax + ecx*4 + 0x84] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x84u)));
    /* 008804d1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008804d3: fld dword ptr [eax + ecx*4 + 0x88] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x88u)));
    /* 008804da: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008804dc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008804de: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 008804e1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008804e3: fstp dword ptr [eax + esi*4] */ W_F32((u32)(r_eax+r_esi*4), ST(0)); FPOP();
    /* 008804e6: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008804e9: fld dword ptr [eax + ecx*4 + 0xc8] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0xc8u)));
    /* 008804f0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008804f2: fld dword ptr [eax + ecx*4 + 0xcc] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0xccu)));
    /* 008804f9: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008804fb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008804fd: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00880500: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00880503: fstp dword ptr [eax + esi*4] */ W_F32((u32)(r_eax+r_esi*4), ST(0)); FPOP();
    /* 00880506: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00880509: fld dword ptr [eax + ecx*4 + 0x10c] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x10cu)));
    /* 00880510: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00880512: fld dword ptr [eax + ecx*4 + 0x110] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x110u)));
    /* 00880519: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0088051b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088051d: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00880520: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00880523: fstp dword ptr [eax + esi*4] */ W_F32((u32)(r_eax+r_esi*4), ST(0)); FPOP();
    /* 00880526: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880527: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880529: jl 0x880445 */ if ((fS!=fO)) goto L_00880445;
L_0088052f:; BB(0x0088052f);
    /* 0088052f: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00880535: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00880536: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00880537: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00880538: mov esp, ebx */ r_esp = r_ebx;
    /* 0088053a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088053b: ret  */ FN_RET(0x00880000); r_esp += 4; return;
L_00880552:; BB(0x00880552);
    /* 00880552: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 00880556: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 0088055a: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 0088055e: jmp 0x8802c5 */ goto L_008802c5;
L_00880563:; BB(0x00880563);
    /* 00880563: mov ebp, edx */ r_ebp = r_edx;
    /* 00880565: jmp 0x8801ee */ goto L_008801ee;
L_008805a5:; BB(0x008805a5);
    /* 008805a5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008805a7: jmp 0x8801ee */ goto L_008801ee;
}

void f_00880018(void)
{
    FN_ENTER(0x00880018);
    /* 00880018: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088001b: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0088001f: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 00880023: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00880027: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 0088002b: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 0088002f: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 00880033: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880035: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880037: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880039: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088003b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088003d: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 00880041: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
L_00880045:; BB(0x00880045);
    /* 00880045: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 00880049: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0088004d: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00880051: fst dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0));
    /* 00880058: fld dword ptr [0x99aba0] */ FPUSH(R_F32((u32)(0x99aba0u)));
    /* 0088005e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00880060: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00880063: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x880068u); f_0084d1fc();
    /* 00880068: fstp qword ptr [esp + 0x60] */ W_F64((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0088006c: mov eax, ebp */ r_eax = r_ebp;
    /* 0088006e: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880071: imul eax, dword ptr [esp + 0x68] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x68u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880076: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0088007a: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0088007e: fmul dword ptr [0x99ab9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ab9cu));
    /* 00880084: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00880087: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x88008cu); f_0084d1fc();
    /* 0088008c: fld qword ptr [esp + 0x60] */ FPUSH(R_F64((u32)(r_esp+0x60u)));
    /* 00880090: fmul qword ptr [0x99a878] */ ST(0) = ST(0) * R_F64((u32)(0x99a878u));
    /* 00880096: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00880098: fmul qword ptr [0x99a870] */ ST(0) = ST(0) * R_F64((u32)(0x99a870u));
    /* 0088009e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008800a0: fld dword ptr [esp + 0x80] */ FPUSH(R_F32((u32)(r_esp+0x80u)));
    /* 008800a7: fmul dword ptr [0x99ab98] */ ST(0) = ST(0) * R_F32((u32)(0x99ab98u));
    /* 008800ad: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008800af: fstp qword ptr [esp + 0x60] */ W_F64((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 008800b3: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 008800b7: mov edi, dword ptr [edi + 0x78] */ r_edi = R32((u32)(r_edi+0x78u));
    /* 008800ba: lea eax, [esi + edi] */ r_eax = (u32)(r_esi+r_edi);
    /* 008800bd: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008800bf: jge 0x8801ee */ if ((fS==fO)) goto L_008801ee;
L_008800c5:; BB(0x008800c5);
    /* 008800c5: mov eax, esi */ r_eax = r_esi;
    /* 008800c7: imul eax, dword ptr [esp + 0x70] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x70u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008800cc: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 008800d0: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 008800d4: fst dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0));
    /* 008800d8: fld dword ptr [0x99aba0] */ FPUSH(R_F32((u32)(0x99aba0u)));
    /* 008800de: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008800e0: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008800e3: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x8800e8u); f_0084d1fc();
    /* 008800e8: fstp qword ptr [esp + 0x80] */ W_F64((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 008800ef: mov eax, esi */ r_eax = r_esi;
    /* 008800f1: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008800f4: imul eax, dword ptr [esp + 0x68] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x68u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008800f9: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 008800fd: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00880101: fmul dword ptr [0x99ab9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ab9cu));
    /* 00880107: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088010a: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x88010fu); f_0084d1fc();
    /* 0088010f: fld qword ptr [esp + 0x80] */ FPUSH(R_F64((u32)(r_esp+0x80u)));
    /* 00880116: fmul qword ptr [0x99a878] */ ST(0) = ST(0) * R_F64((u32)(0x99a878u));
    /* 0088011c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088011e: fmul qword ptr [0x99a870] */ ST(0) = ST(0) * R_F64((u32)(0x99a870u));
    /* 00880124: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 00880128: fmul dword ptr [0x99ab98] */ ST(0) = ST(0) * R_F32((u32)(0x99ab98u));
    /* 0088012e: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00880130: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00880132: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00880136: fld dword ptr [edx + 0x70] */ FPUSH(R_F32((u32)(r_edx+0x70u)));
    /* 00880139: fsubr qword ptr [esp + 0x60] */ ST(0) = R_F64((u32)(r_esp+0x60u)) - ST(0);
    /* 0088013d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088013f: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00880141: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00880143: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00880144: jae 0x8805a5 */ if (!fC) goto L_008805a5;
L_0088014a:; BB(0x0088014a);
    /* 0088014a: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088014c: mov eax, esi */ r_eax = r_esi;
    /* 0088014e: imul eax, dword ptr [esp + 0x70] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x70u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880153: mov dword ptr [esp + 0x5c], ebp */ W32((u32)(r_esp+0x5cu), r_ebp);
    /* 00880157: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 0088015e: mov ebp, edi */ r_ebp = r_edi;
    /* 00880160: mov edi, eax */ r_edi = r_eax;
L_00880162:; BB(0x00880162);
    /* 00880162: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880163: add edi, dword ptr [esp + 0x70] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x70u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00880167: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880168: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 0088016c: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088016e: jge 0x880563 */ if ((fS==fO)) goto L_00880563;
L_00880174:; BB(0x00880174);
    /* 00880174: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00880178: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0088017c: fst dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0));
    /* 00880180: fld dword ptr [0x99aba0] */ FPUSH(R_F32((u32)(0x99aba0u)));
    /* 00880186: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00880188: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088018b: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x880190u); f_0084d1fc();
    /* 00880190: fstp qword ptr [esp + 0x88] */ W_F64((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00880197: mov edx, esi */ r_edx = r_esi;
    /* 00880199: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088019c: imul edx, dword ptr [esp + 0x68] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x68u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008801a1: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 008801a5: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 008801a9: fmul dword ptr [0x99ab9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ab9cu));
    /* 008801af: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008801b2: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x8801b7u); f_0084d1fc();
    /* 008801b7: fld qword ptr [esp + 0x88] */ FPUSH(R_F64((u32)(r_esp+0x88u)));
    /* 008801be: fmul qword ptr [0x99a878] */ ST(0) = ST(0) * R_F64((u32)(0x99a878u));
    /* 008801c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008801c6: fmul qword ptr [0x99a870] */ ST(0) = ST(0) * R_F64((u32)(0x99a870u));
    /* 008801cc: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 008801d0: fmul dword ptr [0x99ab98] */ ST(0) = ST(0) * R_F32((u32)(0x99ab98u));
    /* 008801d6: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008801d8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008801da: fcomp dword ptr [esp + 0x80] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x80u))); FPOP();
    /* 008801e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008801e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008801e4: jb 0x880162 */ if (fC) goto L_00880162;
L_008801ea:; BB(0x008801ea);
    /* 008801ea: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
L_008801ee:; BB(0x008801ee);
    /* 008801ee: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 008801f2: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 008801f6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008801f8: jg 0x8802c5 */ if ((!fZ&&fS==fO)) goto L_008802c5;
L_008801fe:; BB(0x008801fe);
    /* 008801fe: mov eax, ebp */ r_eax = r_ebp;
    /* 00880200: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00880204: add eax, dword ptr [edx + 0x7c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x7cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00880207: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 0088020b: imul edi, dword ptr [esp + 0x70] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_esp+0x70u)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880210: mov dword ptr [esp + 0x5c], ebp */ W32((u32)(r_esp+0x5cu), r_ebp);
    /* 00880214: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 00880218: mov ebp, eax */ r_ebp = r_eax;
    /* 0088021a: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
L_0088021e:; BB(0x0088021e);
    /* 0088021e: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880220: jl 0x8802a8 */ if ((fS!=fO)) goto L_008802a8;
L_00880226:; BB(0x00880226);
    /* 00880226: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0088022a: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0088022e: fst dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0));
    /* 00880235: fld dword ptr [0x99aba0] */ FPUSH(R_F32((u32)(0x99aba0u)));
    /* 0088023b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0088023d: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00880240: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x880245u); f_0084d1fc();
    /* 00880245: fstp qword ptr [esp + 0x88] */ W_F64((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 0088024c: mov edx, esi */ r_edx = r_esi;
    /* 0088024e: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880251: imul edx, dword ptr [esp + 0x68] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x68u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880256: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0088025a: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0088025e: fmul dword ptr [0x99ab9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ab9cu));
    /* 00880264: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00880267: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x88026cu); f_0084d1fc();
    /* 0088026c: fld dword ptr [esp + 0x80] */ FPUSH(R_F32((u32)(r_esp+0x80u)));
    /* 00880273: fmul dword ptr [0x99ab98] */ ST(0) = ST(0) * R_F32((u32)(0x99ab98u));
    /* 00880279: fld qword ptr [esp + 0x88] */ FPUSH(R_F64((u32)(r_esp+0x88u)));
    /* 00880280: fmul qword ptr [0x99a878] */ ST(0) = ST(0) * R_F64((u32)(0x99a878u));
    /* 00880286: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00880288: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088028a: fmul qword ptr [0x99a870] */ ST(0) = ST(0) * R_F64((u32)(0x99a870u));
    /* 00880290: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00880292: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00880296: fld dword ptr [edx + 0x74] */ FPUSH(R_F32((u32)(r_edx+0x74u)));
    /* 00880299: fadd qword ptr [esp + 0x60] */ ST(0) = ST(0) + R_F64((u32)(r_esp+0x60u));
    /* 0088029d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0088029f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008802a1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008802a2: jbe 0x880552 */ if ((fC||fZ)) goto L_00880552;
L_008802a8:; BB(0x008802a8);
    /* 008802a8: add edi, dword ptr [esp + 0x70] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x70u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008802ac: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008802ad: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 008802b1: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008802b3: jle 0x88021e */ if ((fZ||fS!=fO)) goto L_0088021e;
L_008802b9:; BB(0x008802b9);
    /* 008802b9: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 008802bd: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 008802c1: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
L_008802c5:; BB(0x008802c5);
    /* 008802c5: lea eax, [esi - 1] */ r_eax = (u32)(r_esi+0xffffffffu);
    /* 008802c8: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008802cb: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 008802cf: lea edi, [eax + edx - 1] */ r_edi = (u32)(r_eax+r_edx+0xffffffffu);
    /* 008802d3: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 008802d7: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 008802da: mov dword ptr [eax + ebp*4], edi */ W32((u32)(r_eax+r_ebp*4), r_edi);
    /* 008802dd: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 008802e1: add eax, dword ptr [esp + 0x70] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x70u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008802e5: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 008802e9: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008802ea: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 008802ee: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008802f0: jl 0x880045 */ if ((fS!=fO)) goto L_00880045;
L_008802f6:; BB(0x008802f6);
    /* 008802f6: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 008802fa: mov ebp, eax */ r_ebp = r_eax;
    /* 008802fc: mov edi, ecx */ r_edi = r_ecx;
    /* 008802fe: fld qword ptr [0x99a8b0] */ FPUSH(R_F64((u32)(0x99a8b0u)));
    /* 00880304: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00880306: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00880308: jle 0x8803b0 */ if ((fZ||fS!=fO)) goto L_008803b0;
L_0088030e:; BB(0x0088030e);
    /* 0088030e: fld dword ptr [0x99aba4] */ FPUSH(R_F32((u32)(0x99aba4u)));
    /* 00880314: fld qword ptr [0x99a8a0] */ FPUSH(R_F64((u32)(0x99a8a0u)));
    /* 0088031a: fld qword ptr [0x99a898] */ FPUSH(R_F64((u32)(0x99a898u)));
    /* 00880320: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00880324: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880326: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880328: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088032a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088032c: mov esi, eax */ r_esi = r_eax;
L_0088032e:; BB(0x0088032e);
    /* 0088032e: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00880332: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00880336: fadd dword ptr [0x99aba4] */ ST(0) = ST(0) + R_F32((u32)(0x99aba4u));
    /* 0088033c: fmul qword ptr [0x99a8b0] */ ST(0) = ST(0) * R_F64((u32)(0x99a8b0u));
    /* 00880342: fmul qword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x40u));
    /* 00880346: fdiv qword ptr [esp + 0x48] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x48u));
    /* 0088034a: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088034d: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x880352u); f_0084d1ac();
    /* 00880352: fmul qword ptr [0x99a898] */ ST(0) = ST(0) * R_F64((u32)(0x99a898u));
    /* 00880358: fadd qword ptr [0x99a8a0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8a0u));
    /* 0088035e: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00880361: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00880362: mov eax, 1 */ r_eax = 0x1u;
    /* 00880367: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00880369: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0088036d: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00880371: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00880373: fadd qword ptr [0x99a8b0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8b0u));
    /* 00880379: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0088037d: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00880382: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00880387: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0088038b: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0088038f: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00880393: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00880397: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0088039b: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 0088039e: mov dword ptr [eax + esi*4], ecx */ W32((u32)(r_eax+r_esi*4), r_ecx);
    /* 008803a1: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008803a2: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008803a4: jl 0x88032e */ if ((fS!=fO)) goto L_0088032e;
L_008803a6:; BB(0x008803a6);
    /* 008803a6: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 008803aa: fld qword ptr [0x99a8b0] */ FPUSH(R_F64((u32)(0x99a8b0u)));
L_008803b0:; BB(0x008803b0);
    /* 008803b0: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 008803b4: lea eax, [edx + 0x24] */ r_eax = (u32)(r_edx+0x24u);
    /* 008803b7: fmul qword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x40u));
    /* 008803bb: fdiv qword ptr [esp + 0x48] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x48u));
    /* 008803bf: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 008803c2: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 008803c6: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 008803c9: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 008803cd: mov edx, ebp */ r_edx = r_ebp;
    /* 008803cf: call 0x87ca38 */ r_esp -= 4; W32(r_esp, 0x8803d4u); f_0087ca38();
    /* 008803d4: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 008803d7: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 008803d9: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8803deu); f_00859c55();
    /* 008803de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008803df: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 008803e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008803e4: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 008803e8: mov ebp, eax */ r_ebp = r_eax;
L_008803ea:; BB(0x008803ea);
    /* 008803ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008803eb: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8803f0u); f_00859c55();
    /* 008803f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008803f1: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 008803f4: mov dword ptr [edx + ebp*4], eax */ W32((u32)(r_edx+r_ebp*4), r_eax);
    /* 008803f7: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008803f8: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008803fb: jl 0x8803ea */ if ((fS!=fO)) goto L_008803ea;
L_008803fd:; BB(0x008803fd);
    /* 008803fd: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 00880401: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00880403: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00880405: jle 0x88052f */ if ((fZ||fS!=fO)) goto L_0088052f;
L_0088040b:; BB(0x0088040b);
    /* 0088040b: fld qword ptr [0x99a8b8] */ FPUSH(R_F64((u32)(0x99a8b8u)));
    /* 00880411: fld qword ptr [0x99a8b0] */ FPUSH(R_F64((u32)(0x99a8b0u)));
    /* 00880417: fld qword ptr [esp + 0x48] */ FPUSH(R_F64((u32)(r_esp+0x48u)));
    /* 0088041b: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0088041d: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00880421: fld qword ptr [0x99a8a0] */ FPUSH(R_F64((u32)(0x99a8a0u)));
    /* 00880427: fld qword ptr [0x99a898] */ FPUSH(R_F64((u32)(0x99a898u)));
    /* 0088042d: fld dword ptr [0x99ab94] */ FPUSH(R_F32((u32)(0x99ab94u)));
    /* 00880433: fld dword ptr [0x99ab90] */ FPUSH(R_F32((u32)(0x99ab90u)));
    /* 00880439: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088043b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088043d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088043f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880441: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880443: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00880445:; BB(0x00880445);
    /* 00880445: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00880449: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0088044d: fadd qword ptr [0x99a8b0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8b0u));
    /* 00880453: fmul qword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x40u));
    /* 00880457: fdiv qword ptr [esp + 0x48] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x48u));
    /* 0088045b: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088045e: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x880463u); f_0084d1ac();
    /* 00880463: fmul qword ptr [0x99a898] */ ST(0) = ST(0) * R_F64((u32)(0x99a898u));
    /* 00880469: fadd qword ptr [0x99a8a0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8a0u));
    /* 0088046f: fmul qword ptr [0x99a8b8] */ ST(0) = ST(0) * R_F64((u32)(0x99a8b8u));
    /* 00880475: fld dword ptr [0x99ab94] */ FPUSH(R_F32((u32)(0x99ab94u)));
    /* 0088047b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0088047d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088047f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00880480: jbe 0x880484 */ if ((fC||fZ)) goto L_00880484;
L_00880482:; BB(0x00880482);
    /* 00880482: fst st(1) */ ST(1) = ST(0);
L_00880484:; BB(0x00880484);
    /* 00880484: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880486: fld dword ptr [0x99ab90] */ FPUSH(R_F32((u32)(0x99ab90u)));
    /* 0088048c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0088048e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00880490: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00880491: ja 0x880495 */ if ((!fC&&!fZ)) goto L_00880495;
L_00880493:; BB(0x00880493);
    /* 00880493: fst st(1) */ ST(1) = ST(0);
L_00880495:; BB(0x00880495);
    /* 00880495: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880497: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0088049b: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 008804a0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008804a5: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 008804a9: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 008804ad: fist dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0)));
    /* 008804b1: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 008804b5: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 008804b9: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 008804bd: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008804bf: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008804c2: fld qword ptr [0x99a868] */ FPUSH(R_F64((u32)(0x99a868u)));
    /* 008804c8: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008804ca: fld dword ptr [eax + ecx*4 + 0x84] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x84u)));
    /* 008804d1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008804d3: fld dword ptr [eax + ecx*4 + 0x88] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x88u)));
    /* 008804da: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008804dc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008804de: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 008804e1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008804e3: fstp dword ptr [eax + esi*4] */ W_F32((u32)(r_eax+r_esi*4), ST(0)); FPOP();
    /* 008804e6: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008804e9: fld dword ptr [eax + ecx*4 + 0xc8] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0xc8u)));
    /* 008804f0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008804f2: fld dword ptr [eax + ecx*4 + 0xcc] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0xccu)));
    /* 008804f9: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008804fb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008804fd: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00880500: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00880503: fstp dword ptr [eax + esi*4] */ W_F32((u32)(r_eax+r_esi*4), ST(0)); FPOP();
    /* 00880506: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00880509: fld dword ptr [eax + ecx*4 + 0x10c] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x10cu)));
    /* 00880510: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00880512: fld dword ptr [eax + ecx*4 + 0x110] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x110u)));
    /* 00880519: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0088051b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088051d: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00880520: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00880523: fstp dword ptr [eax + esi*4] */ W_F32((u32)(r_eax+r_esi*4), ST(0)); FPOP();
    /* 00880526: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880527: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880529: jl 0x880445 */ if ((fS!=fO)) goto L_00880445;
L_0088052f:; BB(0x0088052f);
    /* 0088052f: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00880535: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00880536: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00880537: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00880538: mov esp, ebx */ r_esp = r_ebx;
    /* 0088053a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088053b: ret  */ FN_RET(0x00880018); r_esp += 4; return;
L_00880552:; BB(0x00880552);
    /* 00880552: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 00880556: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 0088055a: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 0088055e: jmp 0x8802c5 */ goto L_008802c5;
L_00880563:; BB(0x00880563);
    /* 00880563: mov ebp, edx */ r_ebp = r_edx;
    /* 00880565: jmp 0x8801ee */ goto L_008801ee;
L_008805a5:; BB(0x008805a5);
    /* 008805a5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008805a7: jmp 0x8801ee */ goto L_008801ee;
}

void f_00880030(void)
{
    FN_ENTER(0x00880030);
    /* 00880030: jl 0x880056 */ if ((fS!=fO)) goto L_00880056;
L_00880032:; BB(0x00880032);
    /* 00880032: insb byte ptr es:[edi], dx */ UNSUP(0x00880032, "insb byte ptr es:[edi], dx");
    /* 00880033: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880035: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880037: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880039: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088003b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088003d: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 00880041: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
L_00880045:; BB(0x00880045);
    /* 00880045: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 00880049: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0088004d: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00880051: fst dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0));
L_00880056:; BB(0x00880056);
    /* 00880056: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00880058: fld dword ptr [0x99aba0] */ FPUSH(R_F32((u32)(0x99aba0u)));
    /* 0088005e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00880060: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00880063: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x880068u); f_0084d1fc();
    /* 00880068: fstp qword ptr [esp + 0x60] */ W_F64((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0088006c: mov eax, ebp */ r_eax = r_ebp;
    /* 0088006e: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880071: imul eax, dword ptr [esp + 0x68] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x68u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880076: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0088007a: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0088007e: fmul dword ptr [0x99ab9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ab9cu));
    /* 00880084: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00880087: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x88008cu); f_0084d1fc();
    /* 0088008c: fld qword ptr [esp + 0x60] */ FPUSH(R_F64((u32)(r_esp+0x60u)));
    /* 00880090: fmul qword ptr [0x99a878] */ ST(0) = ST(0) * R_F64((u32)(0x99a878u));
    /* 00880096: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00880098: fmul qword ptr [0x99a870] */ ST(0) = ST(0) * R_F64((u32)(0x99a870u));
    /* 0088009e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008800a0: fld dword ptr [esp + 0x80] */ FPUSH(R_F32((u32)(r_esp+0x80u)));
    /* 008800a7: fmul dword ptr [0x99ab98] */ ST(0) = ST(0) * R_F32((u32)(0x99ab98u));
    /* 008800ad: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008800af: fstp qword ptr [esp + 0x60] */ W_F64((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 008800b3: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 008800b7: mov edi, dword ptr [edi + 0x78] */ r_edi = R32((u32)(r_edi+0x78u));
    /* 008800ba: lea eax, [esi + edi] */ r_eax = (u32)(r_esi+r_edi);
    /* 008800bd: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008800bf: jge 0x8801ee */ if ((fS==fO)) goto L_008801ee;
L_008800c5:; BB(0x008800c5);
    /* 008800c5: mov eax, esi */ r_eax = r_esi;
    /* 008800c7: imul eax, dword ptr [esp + 0x70] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x70u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008800cc: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 008800d0: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 008800d4: fst dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0));
    /* 008800d8: fld dword ptr [0x99aba0] */ FPUSH(R_F32((u32)(0x99aba0u)));
    /* 008800de: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008800e0: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008800e3: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x8800e8u); f_0084d1fc();
    /* 008800e8: fstp qword ptr [esp + 0x80] */ W_F64((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 008800ef: mov eax, esi */ r_eax = r_esi;
    /* 008800f1: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008800f4: imul eax, dword ptr [esp + 0x68] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x68u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008800f9: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 008800fd: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00880101: fmul dword ptr [0x99ab9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ab9cu));
    /* 00880107: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088010a: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x88010fu); f_0084d1fc();
    /* 0088010f: fld qword ptr [esp + 0x80] */ FPUSH(R_F64((u32)(r_esp+0x80u)));
    /* 00880116: fmul qword ptr [0x99a878] */ ST(0) = ST(0) * R_F64((u32)(0x99a878u));
    /* 0088011c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088011e: fmul qword ptr [0x99a870] */ ST(0) = ST(0) * R_F64((u32)(0x99a870u));
    /* 00880124: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 00880128: fmul dword ptr [0x99ab98] */ ST(0) = ST(0) * R_F32((u32)(0x99ab98u));
    /* 0088012e: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00880130: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00880132: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00880136: fld dword ptr [edx + 0x70] */ FPUSH(R_F32((u32)(r_edx+0x70u)));
    /* 00880139: fsubr qword ptr [esp + 0x60] */ ST(0) = R_F64((u32)(r_esp+0x60u)) - ST(0);
    /* 0088013d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088013f: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00880141: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00880143: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00880144: jae 0x8805a5 */ if (!fC) goto L_008805a5;
L_0088014a:; BB(0x0088014a);
    /* 0088014a: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088014c: mov eax, esi */ r_eax = r_esi;
    /* 0088014e: imul eax, dword ptr [esp + 0x70] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x70u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880153: mov dword ptr [esp + 0x5c], ebp */ W32((u32)(r_esp+0x5cu), r_ebp);
    /* 00880157: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 0088015e: mov ebp, edi */ r_ebp = r_edi;
    /* 00880160: mov edi, eax */ r_edi = r_eax;
L_00880162:; BB(0x00880162);
    /* 00880162: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880163: add edi, dword ptr [esp + 0x70] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x70u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00880167: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880168: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 0088016c: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088016e: jge 0x880563 */ if ((fS==fO)) goto L_00880563;
L_00880174:; BB(0x00880174);
    /* 00880174: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00880178: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0088017c: fst dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0));
    /* 00880180: fld dword ptr [0x99aba0] */ FPUSH(R_F32((u32)(0x99aba0u)));
    /* 00880186: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00880188: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088018b: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x880190u); f_0084d1fc();
    /* 00880190: fstp qword ptr [esp + 0x88] */ W_F64((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00880197: mov edx, esi */ r_edx = r_esi;
    /* 00880199: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088019c: imul edx, dword ptr [esp + 0x68] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x68u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008801a1: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 008801a5: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 008801a9: fmul dword ptr [0x99ab9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ab9cu));
    /* 008801af: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008801b2: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x8801b7u); f_0084d1fc();
    /* 008801b7: fld qword ptr [esp + 0x88] */ FPUSH(R_F64((u32)(r_esp+0x88u)));
    /* 008801be: fmul qword ptr [0x99a878] */ ST(0) = ST(0) * R_F64((u32)(0x99a878u));
    /* 008801c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008801c6: fmul qword ptr [0x99a870] */ ST(0) = ST(0) * R_F64((u32)(0x99a870u));
    /* 008801cc: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 008801d0: fmul dword ptr [0x99ab98] */ ST(0) = ST(0) * R_F32((u32)(0x99ab98u));
    /* 008801d6: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008801d8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008801da: fcomp dword ptr [esp + 0x80] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x80u))); FPOP();
    /* 008801e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008801e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008801e4: jb 0x880162 */ if (fC) goto L_00880162;
L_008801ea:; BB(0x008801ea);
    /* 008801ea: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
L_008801ee:; BB(0x008801ee);
    /* 008801ee: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 008801f2: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 008801f6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008801f8: jg 0x8802c5 */ if ((!fZ&&fS==fO)) goto L_008802c5;
L_008801fe:; BB(0x008801fe);
    /* 008801fe: mov eax, ebp */ r_eax = r_ebp;
    /* 00880200: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00880204: add eax, dword ptr [edx + 0x7c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x7cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00880207: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 0088020b: imul edi, dword ptr [esp + 0x70] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_esp+0x70u)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880210: mov dword ptr [esp + 0x5c], ebp */ W32((u32)(r_esp+0x5cu), r_ebp);
    /* 00880214: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 00880218: mov ebp, eax */ r_ebp = r_eax;
    /* 0088021a: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
L_0088021e:; BB(0x0088021e);
    /* 0088021e: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880220: jl 0x8802a8 */ if ((fS!=fO)) goto L_008802a8;
L_00880226:; BB(0x00880226);
    /* 00880226: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0088022a: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0088022e: fst dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0));
    /* 00880235: fld dword ptr [0x99aba0] */ FPUSH(R_F32((u32)(0x99aba0u)));
    /* 0088023b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0088023d: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00880240: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x880245u); f_0084d1fc();
    /* 00880245: fstp qword ptr [esp + 0x88] */ W_F64((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 0088024c: mov edx, esi */ r_edx = r_esi;
    /* 0088024e: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880251: imul edx, dword ptr [esp + 0x68] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x68u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880256: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0088025a: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0088025e: fmul dword ptr [0x99ab9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ab9cu));
    /* 00880264: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00880267: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x88026cu); f_0084d1fc();
    /* 0088026c: fld dword ptr [esp + 0x80] */ FPUSH(R_F32((u32)(r_esp+0x80u)));
    /* 00880273: fmul dword ptr [0x99ab98] */ ST(0) = ST(0) * R_F32((u32)(0x99ab98u));
    /* 00880279: fld qword ptr [esp + 0x88] */ FPUSH(R_F64((u32)(r_esp+0x88u)));
    /* 00880280: fmul qword ptr [0x99a878] */ ST(0) = ST(0) * R_F64((u32)(0x99a878u));
    /* 00880286: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00880288: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088028a: fmul qword ptr [0x99a870] */ ST(0) = ST(0) * R_F64((u32)(0x99a870u));
    /* 00880290: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00880292: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00880296: fld dword ptr [edx + 0x74] */ FPUSH(R_F32((u32)(r_edx+0x74u)));
    /* 00880299: fadd qword ptr [esp + 0x60] */ ST(0) = ST(0) + R_F64((u32)(r_esp+0x60u));
    /* 0088029d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0088029f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008802a1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008802a2: jbe 0x880552 */ if ((fC||fZ)) goto L_00880552;
L_008802a8:; BB(0x008802a8);
    /* 008802a8: add edi, dword ptr [esp + 0x70] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x70u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008802ac: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008802ad: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 008802b1: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008802b3: jle 0x88021e */ if ((fZ||fS!=fO)) goto L_0088021e;
L_008802b9:; BB(0x008802b9);
    /* 008802b9: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 008802bd: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 008802c1: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
L_008802c5:; BB(0x008802c5);
    /* 008802c5: lea eax, [esi - 1] */ r_eax = (u32)(r_esi+0xffffffffu);
    /* 008802c8: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008802cb: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 008802cf: lea edi, [eax + edx - 1] */ r_edi = (u32)(r_eax+r_edx+0xffffffffu);
    /* 008802d3: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 008802d7: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 008802da: mov dword ptr [eax + ebp*4], edi */ W32((u32)(r_eax+r_ebp*4), r_edi);
    /* 008802dd: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 008802e1: add eax, dword ptr [esp + 0x70] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x70u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008802e5: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 008802e9: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008802ea: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 008802ee: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008802f0: jl 0x880045 */ if ((fS!=fO)) goto L_00880045;
L_008802f6:; BB(0x008802f6);
    /* 008802f6: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 008802fa: mov ebp, eax */ r_ebp = r_eax;
    /* 008802fc: mov edi, ecx */ r_edi = r_ecx;
    /* 008802fe: fld qword ptr [0x99a8b0] */ FPUSH(R_F64((u32)(0x99a8b0u)));
    /* 00880304: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00880306: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00880308: jle 0x8803b0 */ if ((fZ||fS!=fO)) goto L_008803b0;
L_0088030e:; BB(0x0088030e);
    /* 0088030e: fld dword ptr [0x99aba4] */ FPUSH(R_F32((u32)(0x99aba4u)));
    /* 00880314: fld qword ptr [0x99a8a0] */ FPUSH(R_F64((u32)(0x99a8a0u)));
    /* 0088031a: fld qword ptr [0x99a898] */ FPUSH(R_F64((u32)(0x99a898u)));
    /* 00880320: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00880324: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880326: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880328: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088032a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088032c: mov esi, eax */ r_esi = r_eax;
L_0088032e:; BB(0x0088032e);
    /* 0088032e: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00880332: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00880336: fadd dword ptr [0x99aba4] */ ST(0) = ST(0) + R_F32((u32)(0x99aba4u));
    /* 0088033c: fmul qword ptr [0x99a8b0] */ ST(0) = ST(0) * R_F64((u32)(0x99a8b0u));
    /* 00880342: fmul qword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x40u));
    /* 00880346: fdiv qword ptr [esp + 0x48] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x48u));
    /* 0088034a: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088034d: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x880352u); f_0084d1ac();
    /* 00880352: fmul qword ptr [0x99a898] */ ST(0) = ST(0) * R_F64((u32)(0x99a898u));
    /* 00880358: fadd qword ptr [0x99a8a0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8a0u));
    /* 0088035e: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00880361: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00880362: mov eax, 1 */ r_eax = 0x1u;
    /* 00880367: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00880369: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0088036d: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00880371: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00880373: fadd qword ptr [0x99a8b0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8b0u));
    /* 00880379: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0088037d: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00880382: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00880387: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0088038b: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0088038f: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00880393: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00880397: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0088039b: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 0088039e: mov dword ptr [eax + esi*4], ecx */ W32((u32)(r_eax+r_esi*4), r_ecx);
    /* 008803a1: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008803a2: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008803a4: jl 0x88032e */ if ((fS!=fO)) goto L_0088032e;
L_008803a6:; BB(0x008803a6);
    /* 008803a6: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 008803aa: fld qword ptr [0x99a8b0] */ FPUSH(R_F64((u32)(0x99a8b0u)));
L_008803b0:; BB(0x008803b0);
    /* 008803b0: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 008803b4: lea eax, [edx + 0x24] */ r_eax = (u32)(r_edx+0x24u);
    /* 008803b7: fmul qword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x40u));
    /* 008803bb: fdiv qword ptr [esp + 0x48] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x48u));
    /* 008803bf: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 008803c2: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 008803c6: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 008803c9: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 008803cd: mov edx, ebp */ r_edx = r_ebp;
    /* 008803cf: call 0x87ca38 */ r_esp -= 4; W32(r_esp, 0x8803d4u); f_0087ca38();
    /* 008803d4: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 008803d7: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 008803d9: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8803deu); f_00859c55();
    /* 008803de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008803df: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 008803e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008803e4: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 008803e8: mov ebp, eax */ r_ebp = r_eax;
L_008803ea:; BB(0x008803ea);
    /* 008803ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008803eb: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8803f0u); f_00859c55();
    /* 008803f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008803f1: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 008803f4: mov dword ptr [edx + ebp*4], eax */ W32((u32)(r_edx+r_ebp*4), r_eax);
    /* 008803f7: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008803f8: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008803fb: jl 0x8803ea */ if ((fS!=fO)) goto L_008803ea;
L_008803fd:; BB(0x008803fd);
    /* 008803fd: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 00880401: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00880403: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00880405: jle 0x88052f */ if ((fZ||fS!=fO)) goto L_0088052f;
L_0088040b:; BB(0x0088040b);
    /* 0088040b: fld qword ptr [0x99a8b8] */ FPUSH(R_F64((u32)(0x99a8b8u)));
    /* 00880411: fld qword ptr [0x99a8b0] */ FPUSH(R_F64((u32)(0x99a8b0u)));
    /* 00880417: fld qword ptr [esp + 0x48] */ FPUSH(R_F64((u32)(r_esp+0x48u)));
    /* 0088041b: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0088041d: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00880421: fld qword ptr [0x99a8a0] */ FPUSH(R_F64((u32)(0x99a8a0u)));
    /* 00880427: fld qword ptr [0x99a898] */ FPUSH(R_F64((u32)(0x99a898u)));
    /* 0088042d: fld dword ptr [0x99ab94] */ FPUSH(R_F32((u32)(0x99ab94u)));
    /* 00880433: fld dword ptr [0x99ab90] */ FPUSH(R_F32((u32)(0x99ab90u)));
    /* 00880439: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088043b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088043d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088043f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880441: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880443: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00880445:; BB(0x00880445);
    /* 00880445: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00880449: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0088044d: fadd qword ptr [0x99a8b0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8b0u));
    /* 00880453: fmul qword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x40u));
    /* 00880457: fdiv qword ptr [esp + 0x48] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x48u));
    /* 0088045b: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088045e: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x880463u); f_0084d1ac();
    /* 00880463: fmul qword ptr [0x99a898] */ ST(0) = ST(0) * R_F64((u32)(0x99a898u));
    /* 00880469: fadd qword ptr [0x99a8a0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8a0u));
    /* 0088046f: fmul qword ptr [0x99a8b8] */ ST(0) = ST(0) * R_F64((u32)(0x99a8b8u));
    /* 00880475: fld dword ptr [0x99ab94] */ FPUSH(R_F32((u32)(0x99ab94u)));
    /* 0088047b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0088047d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088047f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00880480: jbe 0x880484 */ if ((fC||fZ)) goto L_00880484;
L_00880482:; BB(0x00880482);
    /* 00880482: fst st(1) */ ST(1) = ST(0);
L_00880484:; BB(0x00880484);
    /* 00880484: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880486: fld dword ptr [0x99ab90] */ FPUSH(R_F32((u32)(0x99ab90u)));
    /* 0088048c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0088048e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00880490: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00880491: ja 0x880495 */ if ((!fC&&!fZ)) goto L_00880495;
L_00880493:; BB(0x00880493);
    /* 00880493: fst st(1) */ ST(1) = ST(0);
L_00880495:; BB(0x00880495);
    /* 00880495: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880497: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0088049b: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 008804a0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008804a5: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 008804a9: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 008804ad: fist dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0)));
    /* 008804b1: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 008804b5: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 008804b9: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 008804bd: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008804bf: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008804c2: fld qword ptr [0x99a868] */ FPUSH(R_F64((u32)(0x99a868u)));
    /* 008804c8: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008804ca: fld dword ptr [eax + ecx*4 + 0x84] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x84u)));
    /* 008804d1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008804d3: fld dword ptr [eax + ecx*4 + 0x88] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x88u)));
    /* 008804da: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008804dc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008804de: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 008804e1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008804e3: fstp dword ptr [eax + esi*4] */ W_F32((u32)(r_eax+r_esi*4), ST(0)); FPOP();
    /* 008804e6: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008804e9: fld dword ptr [eax + ecx*4 + 0xc8] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0xc8u)));
    /* 008804f0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008804f2: fld dword ptr [eax + ecx*4 + 0xcc] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0xccu)));
    /* 008804f9: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008804fb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008804fd: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00880500: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00880503: fstp dword ptr [eax + esi*4] */ W_F32((u32)(r_eax+r_esi*4), ST(0)); FPOP();
    /* 00880506: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00880509: fld dword ptr [eax + ecx*4 + 0x10c] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x10cu)));
    /* 00880510: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00880512: fld dword ptr [eax + ecx*4 + 0x110] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x110u)));
    /* 00880519: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0088051b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088051d: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00880520: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00880523: fstp dword ptr [eax + esi*4] */ W_F32((u32)(r_eax+r_esi*4), ST(0)); FPOP();
    /* 00880526: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880527: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880529: jl 0x880445 */ if ((fS!=fO)) goto L_00880445;
L_0088052f:; BB(0x0088052f);
    /* 0088052f: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00880535: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00880536: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00880537: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00880538: mov esp, ebx */ r_esp = r_ebx;
    /* 0088053a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088053b: ret  */ FN_RET(0x00880030); r_esp += 4; return;
L_00880552:; BB(0x00880552);
    /* 00880552: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 00880556: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 0088055a: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 0088055e: jmp 0x8802c5 */ goto L_008802c5;
L_00880563:; BB(0x00880563);
    /* 00880563: mov ebp, edx */ r_ebp = r_edx;
    /* 00880565: jmp 0x8801ee */ goto L_008801ee;
L_008805a5:; BB(0x008805a5);
    /* 008805a5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008805a7: jmp 0x8801ee */ goto L_008801ee;
}

void f_008805ac(void) /* sub_8805AC */
{
    FN_ENTER(0x008805ac);
    /* 008805ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008805ad: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008805b0: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 008805b4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008805b6: je 0x8806bd */ if (fZ) goto L_008806bd;
L_008805bc:; BB(0x008805bc);
    /* 008805bc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008805be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008805c0: je 0x8805c9 */ if (fZ) goto L_008805c9;
L_008805c2:; BB(0x008805c2);
    /* 008805c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008805c3: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8805c8u); f_00858882();
    /* 008805c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008805c9:; BB(0x008805c9);
    /* 008805c9: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008805cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008805ce: je 0x8805d7 */ if (fZ) goto L_008805d7;
L_008805d0:; BB(0x008805d0);
    /* 008805d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008805d1: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8805d6u); f_00858882();
    /* 008805d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008805d7:; BB(0x008805d7);
    /* 008805d7: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 008805da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008805dc: je 0x8805e5 */ if (fZ) goto L_008805e5;
L_008805de:; BB(0x008805de);
    /* 008805de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008805df: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8805e4u); f_00858882();
    /* 008805e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008805e5:; BB(0x008805e5);
    /* 008805e5: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 008805e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008805ea: je 0x8805f3 */ if (fZ) goto L_008805f3;
L_008805ec:; BB(0x008805ec);
    /* 008805ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008805ed: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8805f2u); f_00858882();
    /* 008805f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008805f3:; BB(0x008805f3);
    /* 008805f3: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 008805f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008805f8: je 0x880601 */ if (fZ) goto L_00880601;
L_008805fa:; BB(0x008805fa);
    /* 008805fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008805fb: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x880600u); f_00858882();
    /* 00880600: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00880601:; BB(0x00880601);
    /* 00880601: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00880604: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00880606: je 0x88060f */ if (fZ) goto L_0088060f;
L_00880608:; BB(0x00880608);
    /* 00880608: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00880609: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x88060eu); f_00858882();
    /* 0088060e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0088060f:; BB(0x0088060f);
    /* 0088060f: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 00880612: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00880614: je 0x880660 */ if (fZ) goto L_00880660;
L_00880616:; BB(0x00880616);
    /* 00880616: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00880619: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088061b: je 0x88064f */ if (fZ) goto L_0088064f;
L_0088061d:; BB(0x0088061d);
    /* 0088061d: mov edx, 0 */ r_edx = 0x0u;
    /* 00880622: jle 0x880659 */ if ((fZ||fS!=fO)) goto L_00880659;
L_00880624:; BB(0x00880624);
    /* 00880624: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 00880627: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880629: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088062b: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0088062f: mov esi, ecx */ r_esi = r_ecx;
    /* 00880631: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00880634: mov edi, edx */ r_edi = r_edx;
    /* 00880636: jmp 0x88063b */ goto L_0088063b;
L_00880638:; BB(0x00880638);
    /* 00880638: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
L_0088063b:; BB(0x0088063b);
    /* 0088063b: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088063d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088063e: call 0x877ba8 */ r_esp -= 4; W32(r_esp, 0x880643u); f_00877ba8();
    /* 00880643: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00880644: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880647: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00880648: cmp edi, dword ptr [ebx + 8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088064b: jl 0x880638 */ if ((fS!=fO)) goto L_00880638;
L_0088064d:; BB(0x0088064d);
    /* 0088064d: jmp 0x8806c2 */ goto L_008806c2;
L_0088064f:; BB(0x0088064f);
    /* 0088064f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00880650: call 0x877ba8 */ r_esp -= 4; W32(r_esp, 0x880655u); f_00877ba8();
    /* 00880655: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00880656: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
L_00880659:; BB(0x00880659);
    /* 00880659: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088065a: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x88065fu); f_00858882();
    /* 0088065f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00880660:; BB(0x00880660);
    /* 00880660: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 00880663: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00880665: je 0x88066e */ if (fZ) goto L_0088066e;
L_00880667:; BB(0x00880667);
    /* 00880667: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00880668: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x88066du); f_00858882();
    /* 0088066d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0088066e:; BB(0x0088066e);
    /* 0088066e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00880670: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00880672: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00880675: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 00880678: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 0088067b: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 0088067e: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 00880681: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 00880684: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 00880687: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 0088068a: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 0088068d: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 00880690: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 00880693: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00880696: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 00880699: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0088069c: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 0088069f: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 008806a2: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 008806a5: mov dword ptr [ebx + 0x48], eax */ W32((u32)(r_ebx+0x48u), r_eax);
    /* 008806a8: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 008806ab: mov dword ptr [ebx + 0x50], eax */ W32((u32)(r_ebx+0x50u), r_eax);
    /* 008806ae: mov dword ptr [ebx + 0x54], eax */ W32((u32)(r_ebx+0x54u), r_eax);
    /* 008806b1: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 008806b4: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 008806b7: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 008806ba: mov dword ptr [ebx + 0x64], eax */ W32((u32)(r_ebx+0x64u), r_eax);
L_008806bd:; BB(0x008806bd);
    /* 008806bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008806c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008806c1: ret  */ FN_RET(0x008805ac); r_esp += 4; return;
L_008806c2:; BB(0x008806c2);
    /* 008806c2: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 008806c6: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 008806c9: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 008806cc: jmp 0x880659 */ goto L_00880659;
}

void f_008806d0(void) /* sub_8806D0 */
{
    FN_ENTER(0x008806d0);
    /* 008806d0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008806d4: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 008806d7: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 008806da: cmp dword ptr [ecx + 0x50], 0 */ {  u32 a = R32((u32)(r_ecx+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008806de: je 0x8806e6 */ if (fZ) goto L_008806e6;
L_008806e0:; BB(0x008806e0);
    /* 008806e0: mov eax, 1 */ r_eax = 0x1u;
    /* 008806e5: ret  */ FN_RET(0x008806d0); r_esp += 4; return;
L_008806e6:; BB(0x008806e6);
    /* 008806e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008806e8: ret  */ FN_RET(0x008806d0); r_esp += 4; return;
}

void f_008806ec(void) /* sub_8806EC */
{
    FN_ENTER(0x008806ec);
    /* 008806ec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008806ef: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 008806f3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008806f5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008806f8: je 0x880719 */ if (fZ) goto L_00880719;
L_008806fa:; BB(0x008806fa);
    /* 008806fa: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 008806fd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008806ff: add edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880702: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00880706: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00880709: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0088070c: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00880710: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00880714: call 0x880720 */ r_esp -= 4; W32(r_esp, 0x880719u); f_00880720();
L_00880719:; BB(0x00880719);
    /* 00880719: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088071c: ret  */ FN_RET(0x008806ec); r_esp += 4; return;
}

void f_00880720(void) /* sub_880720 */
{
    FN_ENTER(0x00880720);
L_00880720:; BB(0x00880720);
    /* 00880720: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088072a: jne 0x880748 */ if (!fZ) goto L_00880748;
L_00880730:; BB(0x00880730);
    /* 00880730: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088073a: jne 0x881118 */ if (!fZ) goto L_00881118;
L_00880740:; BB(0x00880740);
    /* 00880740: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x880745u); f_0086b8a0();
    /* 00880745: jmp 0x880720 */ goto L_00880720;
L_00880748:; BB(0x00880748);
    /* 00880748: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00880749: mov ebx, esp */ r_ebx = r_esp;
    /* 0088074b: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088074e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088074f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00880750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00880751: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00880757: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 0088075b: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 0088075e: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00880761: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00880766: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00880768: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0088076c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088076e: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00880772: jle 0x8809f8 */ if ((fZ||fS!=fO)) goto L_008809f8;
L_00880778:; BB(0x00880778);
    /* 00880778: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 0088077b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088077d: add edi, dword ptr [ebx + 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00880780: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 00880784: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00880787: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00880789: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0088078b: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 0088078f: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00880793: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 00880797: mov esi, eax */ r_esi = r_eax;
    /* 00880799: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0088079d: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 008807a1: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
L_008807a5:; BB(0x008807a5);
    /* 008807a5: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 008807a9: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 008807ad: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 008807b1: mov edi, dword ptr [edi + eax + 4] */ r_edi = R32((u32)(r_edi+r_eax+0x4u));
    /* 008807b5: mov eax, ecx */ r_eax = r_ecx;
    /* 008807b7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008807b8: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x008807b8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008807b8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008807ba: mov ebp, eax */ r_ebp = r_eax;
    /* 008807bc: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 008807c0: mov dword ptr [esp + 0x4c], ebp */ W32((u32)(r_esp+0x4cu), r_ebp);
    /* 008807c4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008807c5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008807c5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008807c5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008807c7: imul ebp, eax */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_eax; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008807ca: mov ecx, eax */ r_ecx = r_eax;
    /* 008807cc: mov dword ptr [esp + 0x64], ebp */ W32((u32)(r_esp+0x64u), r_ebp);
    /* 008807d0: mov ebp, eax */ r_ebp = r_eax;
    /* 008807d2: imul ebp, edi */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_edi; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008807d5: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008807d7: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008807d9: sub esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008807db: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 008807df: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008807e1: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008807e2: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008807e5: je 0x881075 */ if (fZ) goto L_00881075;
L_008807eb:; BB(0x008807eb);
    /* 008807eb: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008807ee: je 0x880a10 */ if (fZ) goto L_00880a10;
L_008807f4:; BB(0x008807f4);
    /* 008807f4: mov edx, ebp */ r_edx = r_ebp;
    /* 008807f6: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008807f8: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008807f9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008807fc: cmove ebp, edx */ if (fZ) { r_ebp = r_edx; }
    /* 008807ff: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00880801: je 0x880846 */ if (fZ) goto L_00880846;
L_00880803:; BB(0x00880803);
    /* 00880803: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 00880806: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880808: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0088080b: lea ebp, [ebp + edx - 4] */ r_ebp = (u32)(r_ebp+r_edx+0xfffffffcu);
    /* 0088080f: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00880813: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00880817: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 0088081b: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 0088081f: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00880823: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00880827: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0088082b: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 0088082f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00880833: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00880837: mov edx, edi */ r_edx = r_edi;
    /* 00880839: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 0088083d: call 0x8818d8 */ r_esp -= 4; W32(r_esp, 0x880842u); f_008818d8();
    /* 00880842: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00880844: jmp 0x88088a */ goto L_0088088a;
L_00880846:; BB(0x00880846);
    /* 00880846: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 00880849: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088084b: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0088084e: lea ebp, [ebp + edx - 4] */ r_ebp = (u32)(r_ebp+r_edx+0xfffffffcu);
    /* 00880852: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00880856: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0088085a: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 0088085e: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00880862: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00880866: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0088086a: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0088086e: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00880872: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00880876: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0088087a: mov edx, edi */ r_edx = r_edi;
    /* 0088087c: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 00880880: call 0x8818d8 */ r_esp -= 4; W32(r_esp, 0x880885u); f_008818d8();
    /* 00880885: mov ebp, 1 */ r_ebp = 0x1u;
L_0088088a:; BB(0x0088088a);
    /* 0088088a: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 0088088e: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00880892: add dword ptr [esp + 0x48], -4 */ { u32 ad = (u32)(r_esp+0x48u);  u32 a = R32(ad); u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00880897: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00880898: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0088089c: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 008808a0: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008808a2: jl 0x8807a5 */ if ((fS!=fO)) goto L_008807a5;
L_008808a8:; BB(0x008808a8);
    /* 008808a8: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 008808ac: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 008808b0: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008808b3: je 0x8809f8 */ if (fZ) goto L_008809f8;
L_008808b9:; BB(0x008808b9);
    /* 008808b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008808bb: jle 0x8809f8 */ if ((fZ||fS!=fO)) goto L_008809f8;
L_008808c1:; BB(0x008808c1);
    /* 008808c1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008808c3: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008808c6: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 008808ca: jb 0x88099d */ if (fC) goto L_0088099d;
L_008808d0:; BB(0x008808d0);
    /* 008808d0: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 008808d3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008808d5: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 008808d9: lea ebp, [edx + esi] */ r_ebp = (u32)(r_edx+r_esi);
    /* 008808dc: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008808de: jb 0x880a05 */ if (fC) goto L_00880a05;
L_008808e4:; BB(0x008808e4);
    /* 008808e4: mov ebp, eax */ r_ebp = r_eax;
    /* 008808e6: mov esi, edx */ r_esi = r_edx;
    /* 008808e8: and esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008808eb: mov edi, ecx */ r_edi = r_ecx;
    /* 008808ed: je 0x880932 */ if (fZ) goto L_00880932;
L_008808ef:; BB(0x008808ef);
    /* 008808ef: test esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008808f5: jne 0x88099d */ if (!fZ) goto L_0088099d;
L_008808fb:; BB(0x008808fb);
    /* 008808fb: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008808fd: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 00880900: lea edi, [ecx + esi + 0x10] */ r_edi = (u32)(r_ecx+r_esi+0x10u);
    /* 00880904: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00880907: mov ebp, eax */ r_ebp = r_eax;
    /* 00880909: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088090b: mov dword ptr [esp + 0x64], edi */ W32((u32)(r_esp+0x64u), r_edi);
    /* 0088090f: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 00880913: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
    /* 00880917: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
L_0088091b:; BB(0x0088091b);
    /* 0088091b: mov eax, dword ptr [ecx + edi*4] */ r_eax = R32((u32)(r_ecx+r_edi*4));
    /* 0088091e: mov dword ptr [esi + edi*4], eax */ W32((u32)(r_esi+r_edi*4), r_eax);
    /* 00880921: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00880922: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00880924: jb 0x88091b */ if (fC) goto L_0088091b;
L_00880926:; BB(0x00880926);
    /* 00880926: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 0088092a: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 0088092e: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
L_00880932:; BB(0x00880932);
    /* 00880932: and ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00880935: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00880937: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880939: test edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088093f: jne 0x88096d */ if (!fZ) goto L_0088096d;
L_00880941:; BB(0x00880941);
    /* 00880941: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
    /* 00880945: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
L_00880949:; BB(0x00880949);
    /* 00880949: prefetchnta byte ptr [ecx + esi*4 + 0x40] */ ;
    /* 0088094e: movaps xmm0, xmmword ptr [ecx + esi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_esi*4), 16); xmm[0] = s; }
    /* 00880952: movaps xmmword ptr [edx + esi*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+r_esi*4), &xmm[0], 16);
    /* 00880956: movaps xmm1, xmmword ptr [ecx + esi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_esi*4+0x10u), 16); xmm[1] = s; }
    /* 0088095b: movaps xmmword ptr [edx + esi*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+r_esi*4+0x10u), &xmm[1], 16);
    /* 00880960: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880963: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00880965: jb 0x880949 */ if (fC) goto L_00880949;
L_00880967:; BB(0x00880967);
    /* 00880967: mov dword ptr [esp + 0x60], esi */ W32((u32)(r_esp+0x60u), r_esi);
    /* 0088096b: jmp 0x880997 */ goto L_00880997;
L_0088096d:; BB(0x0088096d);
    /* 0088096d: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
    /* 00880971: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
L_00880975:; BB(0x00880975);
    /* 00880975: movups xmm0, xmmword ptr [ecx + esi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_esi*4), 16); xmm[0] = s; }
    /* 00880979: prefetchnta byte ptr [ecx + esi*4 + 0x40] */ ;
    /* 0088097e: movaps xmmword ptr [edx + esi*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+r_esi*4), &xmm[0], 16);
    /* 00880982: movups xmm1, xmmword ptr [ecx + esi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_esi*4+0x10u), 16); xmm[1] = s; }
    /* 00880987: movaps xmmword ptr [edx + esi*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+r_esi*4+0x10u), &xmm[1], 16);
    /* 0088098c: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088098f: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00880991: jb 0x880975 */ if (fC) goto L_00880975;
L_00880993:; BB(0x00880993);
    /* 00880993: mov dword ptr [esp + 0x60], esi */ W32((u32)(r_esp+0x60u), r_esi);
L_00880997:; BB(0x00880997);
    /* 00880997: mov edx, esi */ r_edx = r_esi;
    /* 00880999: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088099b: jae 0x8809f8 */ if (!fC) goto L_008809f8;
L_0088099d:; BB(0x0088099d);
    /* 0088099d: mov edx, eax */ r_edx = r_eax;
    /* 0088099f: sub edx, dword ptr [esp + 0x60] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x60u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008809a3: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008809a6: jb 0x8809e4 */ if (fC) goto L_008809e4;
L_008809a8:; BB(0x008809a8);
    /* 008809a8: lea edx, [eax - 6] */ r_edx = (u32)(r_eax+0xfffffffau);
    /* 008809ab: mov ebp, dword ptr [esp + 0x60] */ r_ebp = R32((u32)(r_esp+0x60u));
    /* 008809af: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
L_008809b3:; BB(0x008809b3);
    /* 008809b3: mov edi, dword ptr [ecx + ebp*4] */ r_edi = R32((u32)(r_ecx+r_ebp*4));
    /* 008809b6: mov dword ptr [esi + ebp*4], edi */ W32((u32)(r_esi+r_ebp*4), r_edi);
    /* 008809b9: mov edi, dword ptr [ecx + ebp*4 + 4] */ r_edi = R32((u32)(r_ecx+r_ebp*4+0x4u));
    /* 008809bd: mov dword ptr [esi + ebp*4 + 4], edi */ W32((u32)(r_esi+r_ebp*4+0x4u), r_edi);
    /* 008809c1: mov edi, dword ptr [ecx + ebp*4 + 8] */ r_edi = R32((u32)(r_ecx+r_ebp*4+0x8u));
    /* 008809c5: mov dword ptr [esi + ebp*4 + 8], edi */ W32((u32)(r_esi+r_ebp*4+0x8u), r_edi);
    /* 008809c9: mov edi, dword ptr [ecx + ebp*4 + 0xc] */ r_edi = R32((u32)(r_ecx+r_ebp*4+0xcu));
    /* 008809cd: mov dword ptr [esi + ebp*4 + 0xc], edi */ W32((u32)(r_esi+r_ebp*4+0xcu), r_edi);
    /* 008809d1: mov edi, dword ptr [ecx + ebp*4 + 0x10] */ r_edi = R32((u32)(r_ecx+r_ebp*4+0x10u));
    /* 008809d5: mov dword ptr [esi + ebp*4 + 0x10], edi */ W32((u32)(r_esi+r_ebp*4+0x10u), r_edi);
    /* 008809d9: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008809dc: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008809de: jbe 0x8809b3 */ if ((fC||fZ)) goto L_008809b3;
L_008809e0:; BB(0x008809e0);
    /* 008809e0: mov dword ptr [esp + 0x60], ebp */ W32((u32)(r_esp+0x60u), r_ebp);
L_008809e4:; BB(0x008809e4);
    /* 008809e4: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
    /* 008809e8: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
L_008809ec:; BB(0x008809ec);
    /* 008809ec: mov edx, dword ptr [ecx + esi*4] */ r_edx = R32((u32)(r_ecx+r_esi*4));
    /* 008809ef: mov dword ptr [ebp + esi*4], edx */ W32((u32)(r_ebp+r_esi*4), r_edx);
    /* 008809f3: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008809f4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008809f6: jb 0x8809ec */ if (fC) goto L_008809ec;
L_008809f8:; BB(0x008809f8);
    /* 008809f8: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008809fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008809ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00880a00: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00880a01: mov esp, ebx */ r_esp = r_ebx;
    /* 00880a03: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00880a04: ret  */ FN_RET(0x00880720); r_esp += 4; return;
L_00880a05:; BB(0x00880a05);
    /* 00880a05: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880a07: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00880a09: jb 0x88099d */ if (fC) goto L_0088099d;
L_00880a0b:; BB(0x00880a0b);
    /* 00880a0b: jmp 0x8808e4 */ goto L_008808e4;
L_00880a10:; BB(0x00880a10);
    /* 00880a10: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00880a12: je 0x880d33 */ if (fZ) goto L_00880d33;
L_00880a18:; BB(0x00880a18);
    /* 00880a18: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00880a1b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880a1d: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 00880a20: lea edx, [edx + edi - 4] */ r_edx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 00880a24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00880a26: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00880a29: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00880a2d: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00880a31: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 00880a35: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00880a37: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 00880a3b: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00880a3f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00880a41: jle 0x880aa0 */ if ((fZ||fS!=fO)) goto L_00880aa0;
L_00880a43:; BB(0x00880a43);
    /* 00880a43: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 00880a47: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00880a4a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00880a4c: add edi, dword ptr [esp + 0x58] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x58u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00880a50: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 00880a54: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00880a58: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 00880a5c: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00880a60: mov ebp, dword ptr [esp + 0x68] */ r_ebp = R32((u32)(r_esp+0x68u));
L_00880a64:; BB(0x00880a64);
    /* 00880a64: movss xmm0, dword ptr [esi + ecx*4] */ { u32 v = R32((u32)(r_esi+r_ecx*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00880a69: addss xmm0, dword ptr [esi + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 00880a6e: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 00880a72: movss dword ptr [edi + ecx*8], xmm0 */ W32((u32)(r_edi+r_ecx*8), xmm[0].d[0]);
    /* 00880a77: movss xmm1, dword ptr [esi + ecx*4] */ { u32 v = R32((u32)(r_esi+r_ecx*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00880a7c: subss xmm1, dword ptr [esi + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 00880a81: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 00880a85: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880a87: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880a88: movss dword ptr [edi + ecx*8 - 4], xmm1 */ W32((u32)(r_edi+r_ecx*8+0xfffffffcu), xmm[1].d[0]);
    /* 00880a8e: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880a90: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00880a94: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880a96: jl 0x880a64 */ if ((fS!=fO)) goto L_00880a64;
L_00880a98:; BB(0x00880a98);
    /* 00880a98: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00880a9c: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
L_00880aa0:; BB(0x00880aa0);
    /* 00880aa0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880aa3: jl 0x88088a */ if ((fS!=fO)) goto L_0088088a;
L_00880aa9:; BB(0x00880aa9);
    /* 00880aa9: je 0x880c01 */ if (fZ) goto L_00880c01;
L_00880aaf:; BB(0x00880aaf);
    /* 00880aaf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00880ab1: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00880ab5: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00880ab9: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 00880abd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00880abf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00880ac1: jle 0x88103d */ if ((fZ||fS!=fO)) goto L_0088103d;
L_00880ac7:; BB(0x00880ac7);
    /* 00880ac7: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 00880acb: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00880acf: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00880ad3: mov esi, dword ptr [esp + 0x6c] */ r_esi = R32((u32)(r_esp+0x6cu));
    /* 00880ad7: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
L_00880adb:; BB(0x00880adb);
    /* 00880adb: mov ebp, esi */ r_ebp = r_esi;
    /* 00880add: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 00880ae1: lea eax, [ecx + edx] */ r_eax = (u32)(r_ecx+r_edx);
    /* 00880ae4: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00880ae8: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 00880aeb: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00880aee: mov dword ptr [esp + 0x80], edi */ W32((u32)(r_esp+0x80u), r_edi);
    /* 00880af5: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880af8: jle 0x880bc1 */ if ((fZ||fS!=fO)) goto L_00880bc1;
L_00880afe:; BB(0x00880afe);
    /* 00880afe: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 00880b02: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 00880b06: mov dword ptr [esp + 0x7c], ecx */ W32((u32)(r_esp+0x7cu), r_ecx);
    /* 00880b0a: lea ecx, [ecx + edi*4 - 8] */ r_ecx = (u32)(r_ecx+r_edi*4+0xfffffff8u);
    /* 00880b0e: mov dword ptr [esp + 0x74], ecx */ W32((u32)(r_esp+0x74u), r_ecx);
    /* 00880b12: mov dword ptr [esp + 0x78], ebp */ W32((u32)(r_esp+0x78u), r_ebp);
    /* 00880b16: mov dword ptr [esp + 0x6c], esi */ W32((u32)(r_esp+0x6cu), r_esi);
    /* 00880b1a: mov ebp, dword ptr [esp + 0x7c] */ r_ebp = R32((u32)(r_esp+0x7cu));
    /* 00880b1e: mov esi, dword ptr [esp + 0x80] */ r_esi = R32((u32)(r_esp+0x80u));
L_00880b25:; BB(0x00880b25);
    /* 00880b25: mov edi, dword ptr [esp + 0x78] */ r_edi = R32((u32)(r_esp+0x78u));
    /* 00880b29: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00880b2c: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00880b2f: mov dword ptr [esp + 0x78], edi */ W32((u32)(r_esp+0x78u), r_edi);
    /* 00880b33: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880b36: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880b39: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00880b3d: movss xmm3, dword ptr [ecx + edi*4] */ { u32 v = R32((u32)(r_ecx+r_edi*4)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 00880b42: movss xmm4, dword ptr [ecx + edi*4 - 4] */ { u32 v = R32((u32)(r_ecx+r_edi*4+0xfffffffcu)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 00880b48: movss xmm6, dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 00880b4d: movss xmm2, dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 00880b52: movss xmm0, xmm2 */ xmm[0].d[0] = xmm[2].d[0];
    /* 00880b56: mulss xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 00880b5a: movss xmm1, xmm6 */ xmm[1].d[0] = xmm[6].d[0];
    /* 00880b5e: mulss xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 00880b62: addss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 00880b66: mulss xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 00880b6a: mulss xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; }
    /* 00880b6e: subss xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 00880b72: movss xmm7, dword ptr [ecx + edx*4] */ { u32 v = R32((u32)(r_ecx+r_edx*4)); xmm[7].d[0] = v; xmm[7].d[1] = 0; xmm[7].d[2] = 0; xmm[7].d[3] = 0; }
    /* 00880b77: addss xmm7, xmm2 */ { XMM s = xmm[2]; xmm[7].fs[0] = xmm[7].fs[0] + s.fs[0]; }
    /* 00880b7b: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 00880b7f: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880b82: movss dword ptr [edi + esi*4], xmm7 */ W32((u32)(r_edi+r_esi*4), xmm[7].d[0]);
    /* 00880b87: subss xmm2, dword ptr [ecx + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 00880b8c: movss dword ptr [edi + eax*4], xmm2 */ W32((u32)(r_edi+r_eax*4), xmm[2].d[0]);
    /* 00880b91: movss xmm5, dword ptr [ecx + edx*4 - 4] */ { u32 v = R32((u32)(r_ecx+r_edx*4+0xfffffffcu)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 00880b97: addss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; }
    /* 00880b9b: movss dword ptr [edi + esi*4 - 4], xmm5 */ W32((u32)(r_edi+r_esi*4+0xfffffffcu), xmm[5].d[0]);
    /* 00880ba1: movss xmm1, dword ptr [ecx + edx*4 - 4] */ { u32 v = R32((u32)(r_ecx+r_edx*4+0xfffffffcu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00880ba7: subss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 00880bab: movss dword ptr [edi + eax*4 - 4], xmm1 */ W32((u32)(r_edi+r_eax*4+0xfffffffcu), xmm[1].d[0]);
    /* 00880bb1: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00880bb5: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00880bb7: jb 0x880b25 */ if (fC) goto L_00880b25;
L_00880bbd:; BB(0x00880bbd);
    /* 00880bbd: mov esi, dword ptr [esp + 0x6c] */ r_esi = R32((u32)(r_esp+0x6cu));
L_00880bc1:; BB(0x00880bc1);
    /* 00880bc1: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00880bc5: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00880bc9: add esi, dword ptr [esp + 0x5c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x5cu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880bcd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00880bce: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00880bd2: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00880bd6: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880bd8: jl 0x880adb */ if ((fS!=fO)) goto L_00880adb;
L_00880bde:; BB(0x00880bde);
    /* 00880bde: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00880be2: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00880be6: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00880bea: mov ecx, eax */ r_ecx = r_eax;
    /* 00880bec: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00880bed: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00880bef: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00880bf1: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00880bf4: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00880bf6: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00880bf8: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00880bfb: je 0x88088a */ if (fZ) goto L_0088088a;
L_00880c01:; BB(0x00880c01);
    /* 00880c01: mov ecx, eax */ r_ecx = r_eax;
    /* 00880c03: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 00880c06: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00880c0a: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 00880c0e: lea edx, [edi + eax - 1] */ r_edx = (u32)(r_edi+r_eax+0xffffffffu);
    /* 00880c12: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00880c16: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00880c1a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00880c1c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00880c1e: jle 0x88088a */ if ((fZ||fS!=fO)) goto L_0088088a;
L_00880c24:; BB(0x00880c24);
    /* 00880c24: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880c27: jl 0x880ce1 */ if ((fS!=fO)) goto L_00880ce1;
L_00880c2d:; BB(0x00880c2d);
    /* 00880c2d: lea edi, [edi - 4] */ r_edi = (u32)(r_edi+0xfffffffcu);
    /* 00880c30: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 00880c34: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00880c38: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00880c3c: mov esi, dword ptr [esp + 0x6c] */ r_esi = R32((u32)(r_esp+0x6cu));
    /* 00880c40: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00880c44: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
L_00880c48:; BB(0x00880c48);
    /* 00880c48: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 00880c4f: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00880c53: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 00880c57: xorps xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].q[0] = xmm[2].q[0] ^ s.q[0]; xmm[2].q[1] = xmm[2].q[1] ^ s.q[1]; }
    /* 00880c5a: subss xmm2, dword ptr [edi + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_edi+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 00880c5f: movss dword ptr [edx + ecx*4], xmm2 */ W32((u32)(r_edx+r_ecx*4), xmm[2].d[0]);
    /* 00880c64: mov eax, dword ptr [edi + esi*4] */ r_eax = R32((u32)(r_edi+r_esi*4));
    /* 00880c67: mov dword ptr [edx + ecx*4 - 4], eax */ W32((u32)(r_edx+r_ecx*4+0xfffffffcu), r_eax);
    /* 00880c6b: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00880c6f: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880c71: add ecx, dword ptr [esp + 0x60] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x60u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880c75: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880c77: xorps xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].q[0] = xmm[3].q[0] ^ s.q[0]; xmm[3].q[1] = xmm[3].q[1] ^ s.q[1]; }
    /* 00880c7a: subss xmm3, dword ptr [edi + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_edi+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; }
    /* 00880c7f: movss dword ptr [edx + ecx*4], xmm3 */ W32((u32)(r_edx+r_ecx*4), xmm[3].d[0]);
    /* 00880c84: mov edi, dword ptr [edi + esi*4] */ r_edi = R32((u32)(r_edi+r_esi*4));
    /* 00880c87: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880c89: mov dword ptr [edx + ecx*4 - 4], edi */ W32((u32)(r_edx+r_ecx*4+0xfffffffcu), r_edi);
    /* 00880c8d: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 00880c91: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880c93: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880c95: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00880c99: xorps xmm4, xmm4 */ { XMM s = xmm[4]; xmm[4].q[0] = xmm[4].q[0] ^ s.q[0]; xmm[4].q[1] = xmm[4].q[1] ^ s.q[1]; }
    /* 00880c9c: subss xmm4, dword ptr [eax + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; }
    /* 00880ca1: movss dword ptr [edx + ecx*4], xmm4 */ W32((u32)(r_edx+r_ecx*4), xmm[4].d[0]);
    /* 00880ca6: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 00880ca9: mov dword ptr [edx + ecx*4 - 4], eax */ W32((u32)(r_edx+r_ecx*4+0xfffffffcu), r_eax);
    /* 00880cad: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880caf: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00880cb3: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880cb5: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880cb7: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 00880cbe: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880cc1: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00880cc5: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880cc7: jle 0x880c48 */ if ((fZ||fS!=fO)) goto L_00880c48;
L_00880ccd:; BB(0x00880ccd);
    /* 00880ccd: mov dword ptr [esp + 0x64], ebp */ W32((u32)(r_esp+0x64u), r_ebp);
    /* 00880cd1: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00880cd5: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00880cd9: mov dword ptr [esp + 0x6c], esi */ W32((u32)(r_esp+0x6cu), r_esi);
    /* 00880cdd: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
L_00880ce1:; BB(0x00880ce1);
    /* 00880ce1: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00880ce5: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00880ce9: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00880ced: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 00880cf1: mov ebp, dword ptr [esp + 0x6c] */ r_ebp = R32((u32)(r_esp+0x6cu));
L_00880cf5:; BB(0x00880cf5);
    /* 00880cf5: xorps xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 00880cf8: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00880cfc: subss xmm1, dword ptr [edi + esi*4] */ { XMM s; s.d[0] = R32((u32)(r_edi+r_esi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 00880d01: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00880d05: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880d06: movss dword ptr [eax + ecx*4], xmm1 */ W32((u32)(r_eax+r_ecx*4), xmm[1].d[0]);
    /* 00880d0b: mov edi, dword ptr [edi + ebp*4] */ r_edi = R32((u32)(r_edi+r_ebp*4));
    /* 00880d0e: mov dword ptr [eax + ecx*4 - 4], edi */ W32((u32)(r_eax+r_ecx*4+0xfffffffcu), r_edi);
    /* 00880d12: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00880d16: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880d18: add ecx, dword ptr [esp + 0x60] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x60u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880d1c: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880d1e: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00880d22: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880d24: jl 0x880cf5 */ if ((fS!=fO)) goto L_00880cf5;
L_00880d26:; BB(0x00880d26);
    /* 00880d26: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00880d2a: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00880d2e: jmp 0x88088a */ goto L_0088088a;
L_00880d33:; BB(0x00880d33);
    /* 00880d33: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 00880d36: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880d38: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00880d3b: lea edi, [ecx + edx - 4] */ r_edi = (u32)(r_ecx+r_edx+0xfffffffcu);
    /* 00880d3f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00880d41: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00880d45: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 00880d49: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00880d4c: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 00880d50: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00880d52: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 00880d56: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00880d5a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00880d5c: jle 0x880dbb */ if ((fZ||fS!=fO)) goto L_00880dbb;
L_00880d5e:; BB(0x00880d5e);
    /* 00880d5e: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00880d62: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00880d65: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00880d67: add edi, dword ptr [esp + 0x50] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x50u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00880d6b: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 00880d6f: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00880d73: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
    /* 00880d77: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00880d7b: mov ebp, dword ptr [esp + 0x6c] */ r_ebp = R32((u32)(r_esp+0x6cu));
L_00880d7f:; BB(0x00880d7f);
    /* 00880d7f: movss xmm0, dword ptr [esi + ecx*4] */ { u32 v = R32((u32)(r_esi+r_ecx*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00880d84: addss xmm0, dword ptr [esi + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 00880d89: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00880d8d: movss dword ptr [edi + ecx*8], xmm0 */ W32((u32)(r_edi+r_ecx*8), xmm[0].d[0]);
    /* 00880d92: movss xmm1, dword ptr [esi + ecx*4] */ { u32 v = R32((u32)(r_esi+r_ecx*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00880d97: subss xmm1, dword ptr [esi + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 00880d9c: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 00880da0: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880da2: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880da3: movss dword ptr [edi + ecx*8 - 4], xmm1 */ W32((u32)(r_edi+r_ecx*8+0xfffffffcu), xmm[1].d[0]);
    /* 00880da9: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880dab: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00880daf: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880db1: jl 0x880d7f */ if ((fS!=fO)) goto L_00880d7f;
L_00880db3:; BB(0x00880db3);
    /* 00880db3: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00880db7: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
L_00880dbb:; BB(0x00880dbb);
    /* 00880dbb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880dbe: jl 0x88088a */ if ((fS!=fO)) goto L_0088088a;
L_00880dc4:; BB(0x00880dc4);
    /* 00880dc4: je 0x880f1b */ if (fZ) goto L_00880f1b;
L_00880dca:; BB(0x00880dca);
    /* 00880dca: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00880dcc: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 00880dd0: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00880dd4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00880dd6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00880dd8: jle 0x881059 */ if ((fZ||fS!=fO)) goto L_00881059;
L_00880dde:; BB(0x00880dde);
    /* 00880dde: mov dword ptr [esp + 0x80], ecx */ W32((u32)(r_esp+0x80u), r_ecx);
    /* 00880de5: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00880de9: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00880ded: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 00880df1: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
L_00880df5:; BB(0x00880df5);
    /* 00880df5: mov ebp, esi */ r_ebp = r_esi;
    /* 00880df7: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 00880dfb: lea eax, [ecx + edx] */ r_eax = (u32)(r_ecx+r_edx);
    /* 00880dfe: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 00880e02: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 00880e05: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00880e08: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 00880e0c: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880e0f: jle 0x880ed5 */ if ((fZ||fS!=fO)) goto L_00880ed5;
L_00880e15:; BB(0x00880e15);
    /* 00880e15: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 00880e19: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 00880e1d: mov dword ptr [esp + 0x70], ecx */ W32((u32)(r_esp+0x70u), r_ecx);
    /* 00880e21: lea ecx, [ecx + edi*4 - 8] */ r_ecx = (u32)(r_ecx+r_edi*4+0xfffffff8u);
    /* 00880e25: mov dword ptr [esp + 0x78], ecx */ W32((u32)(r_esp+0x78u), r_ecx);
    /* 00880e29: mov dword ptr [esp + 0x74], ebp */ W32((u32)(r_esp+0x74u), r_ebp);
    /* 00880e2d: mov dword ptr [esp + 0x68], esi */ W32((u32)(r_esp+0x68u), r_esi);
    /* 00880e31: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
    /* 00880e35: mov esi, dword ptr [esp + 0x6c] */ r_esi = R32((u32)(r_esp+0x6cu));
L_00880e39:; BB(0x00880e39);
    /* 00880e39: mov edi, dword ptr [esp + 0x74] */ r_edi = R32((u32)(r_esp+0x74u));
    /* 00880e3d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00880e40: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00880e43: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 00880e47: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880e4a: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880e4d: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 00880e51: movss xmm3, dword ptr [ecx + edi*4] */ { u32 v = R32((u32)(r_ecx+r_edi*4)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 00880e56: movss xmm4, dword ptr [ecx + edi*4 - 4] */ { u32 v = R32((u32)(r_ecx+r_edi*4+0xfffffffcu)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 00880e5c: movss xmm6, dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 00880e61: movss xmm2, dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 00880e66: movss xmm0, xmm2 */ xmm[0].d[0] = xmm[2].d[0];
    /* 00880e6a: mulss xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 00880e6e: movss xmm1, xmm6 */ xmm[1].d[0] = xmm[6].d[0];
    /* 00880e72: mulss xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 00880e76: addss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 00880e7a: mulss xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 00880e7e: mulss xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; }
    /* 00880e82: subss xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 00880e86: movss xmm7, dword ptr [ecx + edx*4] */ { u32 v = R32((u32)(r_ecx+r_edx*4)); xmm[7].d[0] = v; xmm[7].d[1] = 0; xmm[7].d[2] = 0; xmm[7].d[3] = 0; }
    /* 00880e8b: addss xmm7, xmm2 */ { XMM s = xmm[2]; xmm[7].fs[0] = xmm[7].fs[0] + s.fs[0]; }
    /* 00880e8f: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00880e93: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880e96: movss dword ptr [edi + esi*4], xmm7 */ W32((u32)(r_edi+r_esi*4), xmm[7].d[0]);
    /* 00880e9b: subss xmm2, dword ptr [ecx + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 00880ea0: movss dword ptr [edi + eax*4], xmm2 */ W32((u32)(r_edi+r_eax*4), xmm[2].d[0]);
    /* 00880ea5: movss xmm5, dword ptr [ecx + edx*4 - 4] */ { u32 v = R32((u32)(r_ecx+r_edx*4+0xfffffffcu)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 00880eab: addss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; }
    /* 00880eaf: movss dword ptr [edi + esi*4 - 4], xmm5 */ W32((u32)(r_edi+r_esi*4+0xfffffffcu), xmm[5].d[0]);
    /* 00880eb5: movss xmm1, dword ptr [ecx + edx*4 - 4] */ { u32 v = R32((u32)(r_ecx+r_edx*4+0xfffffffcu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00880ebb: subss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 00880ebf: movss dword ptr [edi + eax*4 - 4], xmm1 */ W32((u32)(r_edi+r_eax*4+0xfffffffcu), xmm[1].d[0]);
    /* 00880ec5: mov ecx, dword ptr [esp + 0x78] */ r_ecx = R32((u32)(r_esp+0x78u));
    /* 00880ec9: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00880ecb: jb 0x880e39 */ if (fC) goto L_00880e39;
L_00880ed1:; BB(0x00880ed1);
    /* 00880ed1: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
L_00880ed5:; BB(0x00880ed5);
    /* 00880ed5: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
    /* 00880ed9: mov eax, dword ptr [esp + 0x80] */ r_eax = R32((u32)(r_esp+0x80u));
    /* 00880ee0: add esi, dword ptr [esp + 0x5c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x5cu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880ee4: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00880ee5: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00880ee9: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 00880ef0: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880ef2: jl 0x880df5 */ if ((fS!=fO)) goto L_00880df5;
L_00880ef8:; BB(0x00880ef8);
    /* 00880ef8: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00880efc: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00880f00: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00880f04: mov ecx, eax */ r_ecx = r_eax;
    /* 00880f06: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00880f07: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00880f09: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00880f0b: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00880f0e: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00880f10: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00880f12: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00880f15: je 0x88088a */ if (fZ) goto L_0088088a;
L_00880f1b:; BB(0x00880f1b);
    /* 00880f1b: mov ecx, eax */ r_ecx = r_eax;
    /* 00880f1d: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 00880f20: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00880f24: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00880f28: lea edx, [edi + eax - 1] */ r_edx = (u32)(r_edi+r_eax+0xffffffffu);
    /* 00880f2c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00880f2e: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 00880f32: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00880f36: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00880f38: jle 0x88088a */ if ((fZ||fS!=fO)) goto L_0088088a;
L_00880f3e:; BB(0x00880f3e);
    /* 00880f3e: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880f41: jl 0x880feb */ if ((fS!=fO)) goto L_00880feb;
L_00880f47:; BB(0x00880f47);
    /* 00880f47: lea edi, [edi - 4] */ r_edi = (u32)(r_edi+0xfffffffcu);
    /* 00880f4a: mov dword ptr [esp + 0x64], edi */ W32((u32)(r_esp+0x64u), r_edi);
    /* 00880f4e: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00880f52: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00880f56: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 00880f5a: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
L_00880f5e:; BB(0x00880f5e);
    /* 00880f5e: xorps xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 00880f61: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 00880f65: subss xmm1, dword ptr [edi + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_edi+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 00880f6a: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00880f6e: movss dword ptr [eax + ecx*4], xmm1 */ W32((u32)(r_eax+r_ecx*4), xmm[1].d[0]);
    /* 00880f73: mov ebp, dword ptr [edi + esi*4] */ r_ebp = R32((u32)(r_edi+r_esi*4));
    /* 00880f76: mov dword ptr [eax + ecx*4 - 4], ebp */ W32((u32)(r_eax+r_ecx*4+0xfffffffcu), r_ebp);
    /* 00880f7a: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 00880f7e: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880f80: add ecx, dword ptr [esp + 0x54] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880f84: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880f86: xorps xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].q[0] = xmm[2].q[0] ^ s.q[0]; xmm[2].q[1] = xmm[2].q[1] ^ s.q[1]; }
    /* 00880f89: subss xmm2, dword ptr [edi + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_edi+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 00880f8e: movss dword ptr [eax + ecx*4], xmm2 */ W32((u32)(r_eax+r_ecx*4), xmm[2].d[0]);
    /* 00880f93: mov edi, dword ptr [edi + esi*4] */ r_edi = R32((u32)(r_edi+r_esi*4));
    /* 00880f96: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880f98: mov dword ptr [eax + ecx*4 - 4], edi */ W32((u32)(r_eax+r_ecx*4+0xfffffffcu), r_edi);
    /* 00880f9c: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00880fa0: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880fa2: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880fa4: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 00880fa8: xorps xmm4, xmm4 */ { XMM s = xmm[4]; xmm[4].q[0] = xmm[4].q[0] ^ s.q[0]; xmm[4].q[1] = xmm[4].q[1] ^ s.q[1]; }
    /* 00880fab: subss xmm4, dword ptr [ebp + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_ebp+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; }
    /* 00880fb1: movss dword ptr [eax + ecx*4], xmm4 */ W32((u32)(r_eax+r_ecx*4), xmm[4].d[0]);
    /* 00880fb6: mov ebp, dword ptr [ebp + esi*4] */ r_ebp = R32((u32)(r_ebp+r_esi*4));
    /* 00880fba: mov dword ptr [eax + ecx*4 - 4], ebp */ W32((u32)(r_eax+r_ecx*4+0xfffffffcu), r_ebp);
    /* 00880fbe: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880fc0: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00880fc4: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880fc6: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880fc8: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 00880fcc: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00880fcf: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 00880fd3: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880fd5: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00880fd9: jle 0x880f5e */ if ((fZ||fS!=fO)) goto L_00880f5e;
L_00880fdb:; BB(0x00880fdb);
    /* 00880fdb: mov dword ptr [esp + 0x68], esi */ W32((u32)(r_esp+0x68u), r_esi);
    /* 00880fdf: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00880fe3: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00880fe7: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
L_00880feb:; BB(0x00880feb);
    /* 00880feb: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00880fef: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00880ff3: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00880ff7: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
    /* 00880ffb: mov ebp, dword ptr [esp + 0x68] */ r_ebp = R32((u32)(r_esp+0x68u));
L_00880fff:; BB(0x00880fff);
    /* 00880fff: xorps xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 00881002: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 00881006: subss xmm1, dword ptr [edi + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_edi+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 0088100b: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0088100f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00881010: movss dword ptr [eax + ecx*4], xmm1 */ W32((u32)(r_eax+r_ecx*4), xmm[1].d[0]);
    /* 00881015: mov edi, dword ptr [edi + ebp*4] */ r_edi = R32((u32)(r_edi+r_ebp*4));
    /* 00881018: mov dword ptr [eax + ecx*4 - 4], edi */ W32((u32)(r_eax+r_ecx*4+0xfffffffcu), r_edi);
    /* 0088101c: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00881020: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881022: add ecx, dword ptr [esp + 0x54] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00881026: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00881028: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0088102c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088102e: jl 0x880fff */ if ((fS!=fO)) goto L_00880fff;
L_00881030:; BB(0x00881030);
    /* 00881030: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00881034: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00881038: jmp 0x88088a */ goto L_0088088a;
L_0088103d:; BB(0x0088103d);
    /* 0088103d: mov ecx, eax */ r_ecx = r_eax;
    /* 0088103f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00881040: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00881042: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00881044: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00881047: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00881049: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088104b: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088104e: je 0x88088a */ if (fZ) goto L_0088088a;
L_00881054:; BB(0x00881054);
    /* 00881054: jmp 0x880c01 */ goto L_00880c01;
L_00881059:; BB(0x00881059);
    /* 00881059: mov ecx, eax */ r_ecx = r_eax;
    /* 0088105b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088105c: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088105e: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00881060: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00881063: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00881065: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00881067: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088106a: je 0x88088a */ if (fZ) goto L_0088088a;
L_00881070:; BB(0x00881070);
    /* 00881070: jmp 0x880f1b */ goto L_00880f1b;
L_00881075:; BB(0x00881075);
    /* 00881075: lea edx, [eax + esi] */ r_edx = (u32)(r_eax+r_esi);
    /* 00881078: lea ecx, [eax + edx] */ r_ecx = (u32)(r_eax+r_edx);
    /* 0088107b: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 0088107f: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00881082: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881084: mov dword ptr [esp + 0x6c], ecx */ W32((u32)(r_esp+0x6cu), r_ecx);
    /* 00881088: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088108a: je 0x8810d1 */ if (fZ) goto L_008810d1;
L_0088108c:; BB(0x0088108c);
    /* 0088108c: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 0088108f: lea ecx, [edx + edi - 4] */ r_ecx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 00881093: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 00881097: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0088109b: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 0088109f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008810a1: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 008810a5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008810a7: lea edx, [edx + edi - 4] */ r_edx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 008810ab: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008810af: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 008810b3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008810b5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008810b7: lea edx, [edx + edi - 4] */ r_edx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 008810bb: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 008810bf: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 008810c3: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 008810c7: call 0x883b80 */ r_esp -= 4; W32(r_esp, 0x8810ccu); f_00883b80();
    /* 008810cc: jmp 0x88088a */ goto L_0088088a;
L_008810d1:; BB(0x008810d1);
    /* 008810d1: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 008810d4: lea ecx, [edx + edi - 4] */ r_ecx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 008810d8: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 008810dc: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 008810e0: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 008810e4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008810e6: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 008810ea: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008810ec: lea edx, [edx + edi - 4] */ r_edx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 008810f0: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008810f4: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 008810f8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008810fa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008810fc: lea edx, [edx + edi - 4] */ r_edx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 00881100: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00881104: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 00881108: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 0088110c: call 0x883b80 */ r_esp -= 4; W32(r_esp, 0x881111u); f_00883b80();
    /* 00881111: jmp 0x88088a */ goto L_0088088a;
L_00881118:; BB(0x00881118);
    /* 00881118: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00881119: mov ebx, esp */ r_ebx = r_esp;
    /* 0088111b: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088111e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088111f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00881120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00881121: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00881127: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 0088112b: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0088112f: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 00881132: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 00881135: mov esi, 1 */ r_esi = 0x1u;
    /* 0088113a: mov ecx, eax */ r_ecx = r_eax;
    /* 0088113c: mov ebp, eax */ r_ebp = r_eax;
    /* 0088113e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00881140: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00881142: jle 0x8812b5 */ if ((fZ||fS!=fO)) goto L_008812b5;
L_00881148:; BB(0x00881148);
    /* 00881148: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0088114c: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 00881150: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
L_00881154:; BB(0x00881154);
    /* 00881154: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 00881158: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0088115c: sub edi, dword ptr [esp + 0x40] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00881160: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 00881163: mov edi, dword ptr [eax + edi*4 + 4] */ r_edi = R32((u32)(r_eax+r_edi*4+0x4u));
    /* 00881167: mov eax, ecx */ r_eax = r_ecx;
    /* 00881169: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088116a: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x0088116a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0088116a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088116c: mov esi, eax */ r_esi = r_eax;
    /* 0088116e: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00881172: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00881176: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00881177: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00881177, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00881177, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00881179: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088117c: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 00881180: mov esi, eax */ r_esi = r_eax;
    /* 00881182: imul esi, edi */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_edi; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00881185: mov ecx, eax */ r_ecx = r_eax;
    /* 00881187: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00881189: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088118b: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088118d: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00881191: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00881193: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00881194: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00881197: je 0x881835 */ if (fZ) goto L_00881835;
L_0088119d:; BB(0x0088119d);
    /* 0088119d: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008811a0: je 0x8812c2 */ if (fZ) goto L_008812c2;
L_008811a6:; BB(0x008811a6);
    /* 008811a6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008811a9: jne 0x8811ae */ if (!fZ) goto L_008811ae;
L_008811ab:; BB(0x008811ab);
    /* 008811ab: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008811ad: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_008811ae:; BB(0x008811ae);
    /* 008811ae: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008811b0: je 0x8811f6 */ if (fZ) goto L_008811f6;
L_008811b2:; BB(0x008811b2);
    /* 008811b2: lea esi, [ebp + ebp] */ r_esi = (u32)(r_ebp+r_ebp);
    /* 008811b6: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008811b8: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 008811bb: lea esi, [esi + edx - 4] */ r_esi = (u32)(r_esi+r_edx+0xfffffffcu);
    /* 008811bf: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 008811c3: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 008811c7: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 008811cb: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008811cf: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008811d3: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 008811d7: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 008811db: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 008811df: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 008811e3: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 008811e7: mov edx, edi */ r_edx = r_edi;
    /* 008811e9: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 008811ed: call 0x8818d8 */ r_esp -= 4; W32(r_esp, 0x8811f2u); f_008818d8();
    /* 008811f2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008811f4: jmp 0x88123b */ goto L_0088123b;
L_008811f6:; BB(0x008811f6);
    /* 008811f6: lea esi, [ebp + ebp] */ r_esi = (u32)(r_ebp+r_ebp);
    /* 008811fa: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008811fc: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 008811ff: lea esi, [esi + edx - 4] */ r_esi = (u32)(r_esi+r_edx+0xfffffffcu);
    /* 00881203: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 00881207: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0088120b: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 0088120f: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00881213: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00881217: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0088121b: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 0088121f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00881223: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00881227: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 0088122b: mov edx, edi */ r_edx = r_edi;
    /* 0088122d: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 00881231: call 0x8818d8 */ r_esp -= 4; W32(r_esp, 0x881236u); f_008818d8();
    /* 00881236: mov esi, 1 */ r_esi = 0x1u;
L_0088123b:; BB(0x0088123b);
    /* 0088123b: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 0088123f: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00881243: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00881244: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00881248: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0088124c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088124e: jl 0x881154 */ if ((fS!=fO)) goto L_00881154;
L_00881254:; BB(0x00881254);
    /* 00881254: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00881258: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088125b: je 0x8812b5 */ if (fZ) goto L_008812b5;
L_0088125d:; BB(0x0088125d);
    /* 0088125d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088125f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00881261: jle 0x8812b5 */ if ((fZ||fS!=fO)) goto L_008812b5;
L_00881263:; BB(0x00881263);
    /* 00881263: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881266: jl 0x8812a1 */ if ((fS!=fO)) goto L_008812a1;
L_00881268:; BB(0x00881268);
    /* 00881268: lea edx, [eax - 6] */ r_edx = (u32)(r_eax+0xfffffffau);
    /* 0088126b: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 0088126f: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
L_00881273:; BB(0x00881273);
    /* 00881273: mov edi, dword ptr [esi + ecx*4] */ r_edi = R32((u32)(r_esi+r_ecx*4));
    /* 00881276: mov dword ptr [ebp + ecx*4], edi */ W32((u32)(r_ebp+r_ecx*4), r_edi);
    /* 0088127a: mov edi, dword ptr [esi + ecx*4 + 4] */ r_edi = R32((u32)(r_esi+r_ecx*4+0x4u));
    /* 0088127e: mov dword ptr [ebp + ecx*4 + 4], edi */ W32((u32)(r_ebp+r_ecx*4+0x4u), r_edi);
    /* 00881282: mov edi, dword ptr [esi + ecx*4 + 8] */ r_edi = R32((u32)(r_esi+r_ecx*4+0x8u));
    /* 00881286: mov dword ptr [ebp + ecx*4 + 8], edi */ W32((u32)(r_ebp+r_ecx*4+0x8u), r_edi);
    /* 0088128a: mov edi, dword ptr [esi + ecx*4 + 0xc] */ r_edi = R32((u32)(r_esi+r_ecx*4+0xcu));
    /* 0088128e: mov dword ptr [ebp + ecx*4 + 0xc], edi */ W32((u32)(r_ebp+r_ecx*4+0xcu), r_edi);
    /* 00881292: mov edi, dword ptr [esi + ecx*4 + 0x10] */ r_edi = R32((u32)(r_esi+r_ecx*4+0x10u));
    /* 00881296: mov dword ptr [ebp + ecx*4 + 0x10], edi */ W32((u32)(r_ebp+r_ecx*4+0x10u), r_edi);
    /* 0088129a: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088129d: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088129f: jle 0x881273 */ if ((fZ||fS!=fO)) goto L_00881273;
L_008812a1:; BB(0x008812a1);
    /* 008812a1: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 008812a5: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
L_008812a9:; BB(0x008812a9);
    /* 008812a9: mov edx, dword ptr [esi + ecx*4] */ r_edx = R32((u32)(r_esi+r_ecx*4));
    /* 008812ac: mov dword ptr [ebp + ecx*4], edx */ W32((u32)(r_ebp+r_ecx*4), r_edx);
    /* 008812b0: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008812b1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008812b3: jl 0x8812a9 */ if ((fS!=fO)) goto L_008812a9;
L_008812b5:; BB(0x008812b5);
    /* 008812b5: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008812bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008812bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008812bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008812be: mov esp, ebx */ r_esp = r_ebx;
    /* 008812c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008812c1: ret  */ FN_RET(0x00880720); r_esp += 4; return;
L_008812c2:; BB(0x008812c2);
    /* 008812c2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008812c4: je 0x88157e */ if (fZ) goto L_0088157e;
L_008812ca:; BB(0x008812ca);
    /* 008812ca: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 008812ce: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008812d0: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 008812d3: lea edx, [edx + edi - 4] */ r_edx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 008812d7: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 008812db: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008812dd: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 008812e1: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 008812e4: mov dword ptr [esp + 0x70], edi */ W32((u32)(r_esp+0x70u), r_edi);
    /* 008812e8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008812ea: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 008812ee: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 008812f2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008812f4: jle 0x881347 */ if ((fZ||fS!=fO)) goto L_00881347;
L_008812f6:; BB(0x008812f6);
    /* 008812f6: mov edi, dword ptr [esp + 0x70] */ r_edi = R32((u32)(r_esp+0x70u));
    /* 008812fa: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 008812fd: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008812ff: add edi, dword ptr [esp + 0x50] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x50u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00881303: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 00881307: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 0088130b: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 0088130f: mov ebp, dword ptr [esp + 0x6c] */ r_ebp = R32((u32)(r_esp+0x6cu));
    /* 00881313: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
L_00881317:; BB(0x00881317);
    /* 00881317: fld dword ptr [esi + ecx*4] */ FPUSH(R_F32((u32)(r_esi+r_ecx*4)));
    /* 0088131a: fadd dword ptr [esi + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_edx*4));
    /* 0088131d: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00881321: fstp dword ptr [edi + ecx*8] */ W_F32((u32)(r_edi+r_ecx*8), ST(0)); FPOP();
    /* 00881324: fld dword ptr [esi + ecx*4] */ FPUSH(R_F32((u32)(r_esi+r_ecx*4)));
    /* 00881327: fsub dword ptr [esi + edx*4] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_edx*4));
    /* 0088132a: mov edi, dword ptr [esp + 0x74] */ r_edi = R32((u32)(r_esp+0x74u));
    /* 0088132e: fstp dword ptr [edi + ecx*8 - 4] */ W_F32((u32)(r_edi+r_ecx*8+0xfffffffcu), ST(0)); FPOP();
    /* 00881332: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00881334: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881336: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00881337: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 0088133b: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088133d: jl 0x881317 */ if ((fS!=fO)) goto L_00881317;
L_0088133f:; BB(0x0088133f);
    /* 0088133f: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 00881343: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_00881347:; BB(0x00881347);
    /* 00881347: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088134a: jl 0x88123b */ if ((fS!=fO)) goto L_0088123b;
L_00881350:; BB(0x00881350);
    /* 00881350: je 0x881474 */ if (fZ) goto L_00881474;
L_00881356:; BB(0x00881356);
    /* 00881356: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00881358: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 0088135c: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 00881360: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00881362: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 00881366: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00881368: jle 0x88145d */ if ((fZ||fS!=fO)) goto L_0088145d;
L_0088136e:; BB(0x0088136e);
    /* 0088136e: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 00881372: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00881376: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 0088137a: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 0088137e: mov esi, dword ptr [esp + 0x74] */ r_esi = R32((u32)(r_esp+0x74u));
L_00881382:; BB(0x00881382);
    /* 00881382: mov ebp, esi */ r_ebp = r_esi;
    /* 00881384: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 00881388: lea eax, [ecx + edx] */ r_eax = (u32)(r_ecx+r_edx);
    /* 0088138b: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0088138f: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 00881392: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00881395: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 00881399: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088139c: jle 0x881434 */ if ((fZ||fS!=fO)) goto L_00881434;
L_008813a2:; BB(0x008813a2);
    /* 008813a2: mov ecx, dword ptr [esp + 0x78] */ r_ecx = R32((u32)(r_esp+0x78u));
    /* 008813a6: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 008813aa: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 008813ae: lea ecx, [ecx + edi*4 - 8] */ r_ecx = (u32)(r_ecx+r_edi*4+0xfffffff8u);
    /* 008813b2: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 008813b6: mov dword ptr [esp + 0x60], ebp */ W32((u32)(r_esp+0x60u), r_ebp);
    /* 008813ba: mov dword ptr [esp + 0x74], esi */ W32((u32)(r_esp+0x74u), r_esi);
    /* 008813be: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 008813c2: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
L_008813c6:; BB(0x008813c6);
    /* 008813c6: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 008813ca: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008813cd: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 008813d1: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008813d4: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008813d7: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008813da: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 008813de: fld dword ptr [ecx + edi*4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4)));
    /* 008813e1: fld dword ptr [ecx + edi*4 - 4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4+0xfffffffcu)));
    /* 008813e5: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 008813e8: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 008813eb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008813ed: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008813ef: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 008813f1: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 008813f3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008813f5: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008813f7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008813f9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008813fb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008813fd: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008813ff: fld dword ptr [ecx + edx*4] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4)));
    /* 00881402: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00881404: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00881408: fstp dword ptr [edi + esi*4] */ W_F32((u32)(r_edi+r_esi*4), ST(0)); FPOP();
    /* 0088140b: fsub dword ptr [ecx + edx*4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+r_edx*4));
    /* 0088140e: fstp dword ptr [edi + eax*4] */ W_F32((u32)(r_edi+r_eax*4), ST(0)); FPOP();
    /* 00881411: fld dword ptr [ecx + edx*4 - 4] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0xfffffffcu)));
    /* 00881415: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00881417: fstp dword ptr [edi + esi*4 - 4] */ W_F32((u32)(r_edi+r_esi*4+0xfffffffcu), ST(0)); FPOP();
    /* 0088141b: fld dword ptr [ecx + edx*4 - 4] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0xfffffffcu)));
    /* 0088141f: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00881421: fstp dword ptr [edi + eax*4 - 4] */ W_F32((u32)(r_edi+r_eax*4+0xfffffffcu), ST(0)); FPOP();
    /* 00881425: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00881428: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0088142c: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088142e: jb 0x8813c6 */ if (fC) goto L_008813c6;
L_00881430:; BB(0x00881430);
    /* 00881430: mov esi, dword ptr [esp + 0x74] */ r_esi = R32((u32)(r_esp+0x74u));
L_00881434:; BB(0x00881434);
    /* 00881434: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00881438: add esi, dword ptr [esp + 0x54] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088143c: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00881440: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00881441: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00881445: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 00881449: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088144b: jl 0x881382 */ if ((fS!=fO)) goto L_00881382;
L_00881451:; BB(0x00881451);
    /* 00881451: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00881455: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 00881459: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_0088145d:; BB(0x0088145d);
    /* 0088145d: mov ecx, eax */ r_ecx = r_eax;
    /* 0088145f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00881460: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00881462: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00881464: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00881467: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00881469: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088146b: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088146e: je 0x88123b */ if (fZ) goto L_0088123b;
L_00881474:; BB(0x00881474);
    /* 00881474: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 00881478: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 0088147b: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 0088147f: lea edx, [edx + eax - 1] */ r_edx = (u32)(r_edx+r_eax+0xffffffffu);
    /* 00881483: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00881485: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 00881489: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 0088148d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088148f: jle 0x88123b */ if ((fZ||fS!=fO)) goto L_0088123b;
L_00881495:; BB(0x00881495);
    /* 00881495: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881498: jl 0x881531 */ if ((fS!=fO)) goto L_00881531;
L_0088149e:; BB(0x0088149e);
    /* 0088149e: lea edi, [edi - 4] */ r_edi = (u32)(r_edi+0xfffffffcu);
    /* 008814a1: mov dword ptr [esp + 0x78], edi */ W32((u32)(r_esp+0x78u), r_edi);
    /* 008814a5: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 008814a9: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 008814ad: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 008814b1: mov ebp, dword ptr [esp + 0x74] */ r_ebp = R32((u32)(r_esp+0x74u));
L_008814b5:; BB(0x008814b5);
    /* 008814b5: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 008814b9: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 008814bc: fchs  */ ST(0) = -ST(0);
    /* 008814be: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 008814c2: fstp dword ptr [eax + ebp*4] */ W_F32((u32)(r_eax+r_ebp*4), ST(0)); FPOP();
    /* 008814c5: mov esi, dword ptr [edi + ecx*4] */ r_esi = R32((u32)(r_edi+r_ecx*4));
    /* 008814c8: mov dword ptr [eax + ebp*4 - 4], esi */ W32((u32)(r_eax+r_ebp*4+0xfffffffcu), r_esi);
    /* 008814cc: add ebp, dword ptr [esp + 0x70] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x70u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008814d0: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 008814d4: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008814d6: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008814d8: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 008814db: fchs  */ ST(0) = -ST(0);
    /* 008814dd: fstp dword ptr [eax + ebp*4] */ W_F32((u32)(r_eax+r_ebp*4), ST(0)); FPOP();
    /* 008814e0: mov edi, dword ptr [edi + ecx*4] */ r_edi = R32((u32)(r_edi+r_ecx*4));
    /* 008814e3: mov dword ptr [eax + ebp*4 - 4], edi */ W32((u32)(r_eax+r_ebp*4+0xfffffffcu), r_edi);
    /* 008814e7: mov edi, dword ptr [esp + 0x70] */ r_edi = R32((u32)(r_esp+0x70u));
    /* 008814eb: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008814ed: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008814ef: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008814f1: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 008814f5: fld dword ptr [esi + edx*4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4)));
    /* 008814f8: fchs  */ ST(0) = -ST(0);
    /* 008814fa: fstp dword ptr [eax + ebp*4] */ W_F32((u32)(r_eax+r_ebp*4), ST(0)); FPOP();
    /* 008814fd: mov esi, dword ptr [esi + ecx*4] */ r_esi = R32((u32)(r_esi+r_ecx*4));
    /* 00881500: mov dword ptr [eax + ebp*4 - 4], esi */ W32((u32)(r_eax+r_ebp*4+0xfffffffcu), r_esi);
    /* 00881504: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00881506: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 0088150a: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088150c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088150e: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00881512: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00881515: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00881519: mov esi, dword ptr [esp + 0x78] */ r_esi = R32((u32)(r_esp+0x78u));
    /* 0088151d: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088151f: jle 0x8814b5 */ if ((fZ||fS!=fO)) goto L_008814b5;
L_00881521:; BB(0x00881521);
    /* 00881521: mov dword ptr [esp + 0x74], ebp */ W32((u32)(r_esp+0x74u), r_ebp);
    /* 00881525: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00881529: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 0088152d: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_00881531:; BB(0x00881531);
    /* 00881531: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00881535: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 00881539: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 0088153d: mov esi, dword ptr [esp + 0x6c] */ r_esi = R32((u32)(r_esp+0x6cu));
    /* 00881541: mov ebp, dword ptr [esp + 0x74] */ r_ebp = R32((u32)(r_esp+0x74u));
L_00881545:; BB(0x00881545);
    /* 00881545: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00881549: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 0088154c: fchs  */ ST(0) = -ST(0);
    /* 0088154e: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00881552: fstp dword ptr [eax + ebp*4] */ W_F32((u32)(r_eax+r_ebp*4), ST(0)); FPOP();
    /* 00881555: mov edi, dword ptr [edi + ecx*4] */ r_edi = R32((u32)(r_edi+r_ecx*4));
    /* 00881558: mov dword ptr [eax + ebp*4 - 4], edi */ W32((u32)(r_eax+r_ebp*4+0xfffffffcu), r_edi);
    /* 0088155c: add ebp, dword ptr [esp + 0x70] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x70u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00881560: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00881564: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881566: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00881568: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00881569: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0088156d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088156f: jl 0x881545 */ if ((fS!=fO)) goto L_00881545;
L_00881571:; BB(0x00881571);
    /* 00881571: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 00881575: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00881579: jmp 0x88123b */ goto L_0088123b;
L_0088157e:; BB(0x0088157e);
    /* 0088157e: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 00881582: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00881584: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00881587: lea edi, [ecx + edx - 4] */ r_edi = (u32)(r_ecx+r_edx+0xfffffffcu);
    /* 0088158b: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 0088158f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00881591: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 00881595: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00881598: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 0088159c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0088159e: mov dword ptr [esp + 0x70], edi */ W32((u32)(r_esp+0x70u), r_edi);
    /* 008815a2: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 008815a6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008815a8: jle 0x8815fb */ if ((fZ||fS!=fO)) goto L_008815fb;
L_008815aa:; BB(0x008815aa);
    /* 008815aa: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 008815ae: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 008815b1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008815b3: add edi, dword ptr [esp + 0x48] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x48u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008815b7: mov dword ptr [esp + 0x78], edi */ W32((u32)(r_esp+0x78u), r_edi);
    /* 008815bb: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 008815bf: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 008815c3: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
    /* 008815c7: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
L_008815cb:; BB(0x008815cb);
    /* 008815cb: fld dword ptr [esi + ecx*4] */ FPUSH(R_F32((u32)(r_esi+r_ecx*4)));
    /* 008815ce: fadd dword ptr [esi + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_edx*4));
    /* 008815d1: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 008815d5: fstp dword ptr [edi + ecx*8] */ W_F32((u32)(r_edi+r_ecx*8), ST(0)); FPOP();
    /* 008815d8: fld dword ptr [esi + ecx*4] */ FPUSH(R_F32((u32)(r_esi+r_ecx*4)));
    /* 008815db: fsub dword ptr [esi + edx*4] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_edx*4));
    /* 008815de: mov edi, dword ptr [esp + 0x78] */ r_edi = R32((u32)(r_esp+0x78u));
    /* 008815e2: fstp dword ptr [edi + ecx*8 - 4] */ W_F32((u32)(r_edi+r_ecx*8+0xfffffffcu), ST(0)); FPOP();
    /* 008815e6: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008815e8: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008815ea: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008815eb: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 008815ef: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008815f1: jl 0x8815cb */ if ((fS!=fO)) goto L_008815cb;
L_008815f3:; BB(0x008815f3);
    /* 008815f3: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 008815f7: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_008815fb:; BB(0x008815fb);
    /* 008815fb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008815fe: jl 0x88123b */ if ((fS!=fO)) goto L_0088123b;
L_00881604:; BB(0x00881604);
    /* 00881604: je 0x881723 */ if (fZ) goto L_00881723;
L_0088160a:; BB(0x0088160a);
    /* 0088160a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088160c: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 00881610: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00881614: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00881616: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00881618: jle 0x88170c */ if ((fZ||fS!=fO)) goto L_0088170c;
L_0088161e:; BB(0x0088161e);
    /* 0088161e: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 00881622: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00881626: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 0088162a: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 0088162e: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
L_00881632:; BB(0x00881632);
    /* 00881632: mov edx, esi */ r_edx = r_esi;
    /* 00881634: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 00881638: lea eax, [ebp + ecx] */ r_eax = (u32)(r_ebp+r_ecx);
    /* 0088163c: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00881640: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 00881643: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 00881646: mov dword ptr [esp + 0x70], edi */ W32((u32)(r_esp+0x70u), r_edi);
    /* 0088164a: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088164d: jle 0x8816e3 */ if ((fZ||fS!=fO)) goto L_008816e3;
L_00881653:; BB(0x00881653);
    /* 00881653: mov ebp, dword ptr [esp + 0x74] */ r_ebp = R32((u32)(r_esp+0x74u));
    /* 00881657: mov dword ptr [esp + 0x6c], ebp */ W32((u32)(r_esp+0x6cu), r_ebp);
    /* 0088165b: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 0088165f: lea ebp, [ebp + edi*4 - 8] */ r_ebp = (u32)(r_ebp+r_edi*4+0xfffffff8u);
    /* 00881663: mov dword ptr [esp + 0x68], ebp */ W32((u32)(r_esp+0x68u), r_ebp);
    /* 00881667: mov dword ptr [esp + 0x5c], esi */ W32((u32)(r_esp+0x5cu), r_esi);
    /* 0088166b: mov esi, dword ptr [esp + 0x6c] */ r_esi = R32((u32)(r_esp+0x6cu));
    /* 0088166f: mov edi, dword ptr [esp + 0x70] */ r_edi = R32((u32)(r_esp+0x70u));
L_00881673:; BB(0x00881673);
    /* 00881673: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881676: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 0088167a: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088167d: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00881680: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00881683: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00881686: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00881688: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 0088168c: fld dword ptr [ebp + edx*4] */ FPUSH(R_F32((u32)(r_ebp+r_edx*4)));
    /* 00881690: fld dword ptr [ebp + edx*4 - 4] */ FPUSH(R_F32((u32)(r_ebp+r_edx*4+0xfffffffcu)));
    /* 00881694: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00881696: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00881698: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0088169a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0088169c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088169e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008816a0: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 008816a2: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 008816a4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008816a6: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008816a8: fld dword ptr [ebp + ecx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4)));
    /* 008816ac: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 008816ae: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 008816b2: fstp dword ptr [edx + edi*4] */ W_F32((u32)(r_edx+r_edi*4), ST(0)); FPOP();
    /* 008816b5: fsub dword ptr [ebp + ecx*4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+r_ecx*4));
    /* 008816b9: fstp dword ptr [edx + eax*4] */ W_F32((u32)(r_edx+r_eax*4), ST(0)); FPOP();
    /* 008816bc: fld dword ptr [ebp + ecx*4 - 4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu)));
    /* 008816c0: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 008816c2: fstp dword ptr [edx + edi*4 - 4] */ W_F32((u32)(r_edx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 008816c6: fld dword ptr [ebp + ecx*4 - 4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu)));
    /* 008816ca: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 008816cc: fstp dword ptr [edx + eax*4 - 4] */ W_F32((u32)(r_edx+r_eax*4+0xfffffffcu), ST(0)); FPOP();
    /* 008816d0: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008816d3: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 008816d7: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008816d9: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 008816dd: jb 0x881673 */ if (fC) goto L_00881673;
L_008816df:; BB(0x008816df);
    /* 008816df: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
L_008816e3:; BB(0x008816e3);
    /* 008816e3: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 008816e7: add esi, dword ptr [esp + 0x54] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008816eb: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 008816ef: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008816f0: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 008816f4: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 008816f8: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008816fa: jl 0x881632 */ if ((fS!=fO)) goto L_00881632;
L_00881700:; BB(0x00881700);
    /* 00881700: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00881704: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 00881708: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_0088170c:; BB(0x0088170c);
    /* 0088170c: mov ecx, eax */ r_ecx = r_eax;
    /* 0088170e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088170f: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00881711: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00881713: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00881716: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00881718: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088171a: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088171d: je 0x88123b */ if (fZ) goto L_0088123b;
L_00881723:; BB(0x00881723);
    /* 00881723: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00881727: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 0088172a: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 0088172e: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 00881732: lea ecx, [edi + eax - 1] */ r_ecx = (u32)(r_edi+r_eax+0xffffffffu);
    /* 00881736: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00881738: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 0088173c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088173e: jle 0x88123b */ if ((fZ||fS!=fO)) goto L_0088123b;
L_00881744:; BB(0x00881744);
    /* 00881744: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881747: jl 0x8817e8 */ if ((fS!=fO)) goto L_008817e8;
L_0088174d:; BB(0x0088174d);
    /* 0088174d: lea edi, [edi - 4] */ r_edi = (u32)(r_edi+0xfffffffcu);
    /* 00881750: mov dword ptr [esp + 0x78], edi */ W32((u32)(r_esp+0x78u), r_edi);
    /* 00881754: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00881758: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 0088175c: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 00881760: mov esi, dword ptr [esp + 0x74] */ r_esi = R32((u32)(r_esp+0x74u));
    /* 00881764: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
L_00881768:; BB(0x00881768);
    /* 00881768: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 0088176c: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00881770: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 00881773: fchs  */ ST(0) = -ST(0);
    /* 00881775: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00881779: fstp dword ptr [edx + ebp*4] */ W_F32((u32)(r_edx+r_ebp*4), ST(0)); FPOP();
    /* 0088177c: mov eax, dword ptr [edi + esi*4] */ r_eax = R32((u32)(r_edi+r_esi*4));
    /* 0088177f: mov dword ptr [edx + ebp*4 - 4], eax */ W32((u32)(r_edx+r_ebp*4+0xfffffffcu), r_eax);
    /* 00881783: add ebp, dword ptr [esp + 0x4c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00881787: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 0088178b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088178d: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088178f: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 00881792: fchs  */ ST(0) = -ST(0);
    /* 00881794: fstp dword ptr [edx + ebp*4] */ W_F32((u32)(r_edx+r_ebp*4), ST(0)); FPOP();
    /* 00881797: mov edi, dword ptr [edi + esi*4] */ r_edi = R32((u32)(r_edi+r_esi*4));
    /* 0088179a: mov dword ptr [edx + ebp*4 - 4], edi */ W32((u32)(r_edx+r_ebp*4+0xfffffffcu), r_edi);
    /* 0088179e: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 008817a2: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008817a4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008817a6: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008817a8: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 008817ac: fld dword ptr [eax + ecx*4] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4)));
    /* 008817af: fchs  */ ST(0) = -ST(0);
    /* 008817b1: fstp dword ptr [edx + ebp*4] */ W_F32((u32)(r_edx+r_ebp*4), ST(0)); FPOP();
    /* 008817b4: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 008817b7: mov dword ptr [edx + ebp*4 - 4], eax */ W32((u32)(r_edx+r_ebp*4+0xfffffffcu), r_eax);
    /* 008817bb: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008817bd: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 008817c1: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008817c3: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008817c5: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 008817c9: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008817cc: mov eax, dword ptr [esp + 0x78] */ r_eax = R32((u32)(r_esp+0x78u));
    /* 008817d0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008817d2: jle 0x881768 */ if ((fZ||fS!=fO)) goto L_00881768;
L_008817d4:; BB(0x008817d4);
    /* 008817d4: mov dword ptr [esp + 0x74], esi */ W32((u32)(r_esp+0x74u), r_esi);
    /* 008817d8: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 008817dc: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 008817e0: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 008817e4: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_008817e8:; BB(0x008817e8);
    /* 008817e8: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 008817ec: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 008817f0: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 008817f4: mov esi, dword ptr [esp + 0x74] */ r_esi = R32((u32)(r_esp+0x74u));
    /* 008817f8: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
L_008817fc:; BB(0x008817fc);
    /* 008817fc: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00881800: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 00881803: fchs  */ ST(0) = -ST(0);
    /* 00881805: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00881809: fstp dword ptr [eax + ebp*4] */ W_F32((u32)(r_eax+r_ebp*4), ST(0)); FPOP();
    /* 0088180c: mov edi, dword ptr [edi + esi*4] */ r_edi = R32((u32)(r_edi+r_esi*4));
    /* 0088180f: mov dword ptr [eax + ebp*4 - 4], edi */ W32((u32)(r_eax+r_ebp*4+0xfffffffcu), r_edi);
    /* 00881813: add ebp, dword ptr [esp + 0x4c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00881817: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 0088181b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088181d: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088181f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881820: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00881824: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00881826: jl 0x8817fc */ if ((fS!=fO)) goto L_008817fc;
L_00881828:; BB(0x00881828);
    /* 00881828: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 0088182c: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00881830: jmp 0x88123b */ goto L_0088123b;
L_00881835:; BB(0x00881835);
    /* 00881835: lea edx, [eax + ebp] */ r_edx = (u32)(r_eax+r_ebp);
    /* 00881838: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 0088183c: lea ecx, [eax + edx] */ r_ecx = (u32)(r_eax+r_edx);
    /* 0088183f: mov dword ptr [esp + 0x78], ecx */ W32((u32)(r_esp+0x78u), r_ecx);
    /* 00881843: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 00881847: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881849: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088184b: je 0x881892 */ if (fZ) goto L_00881892;
L_0088184d:; BB(0x0088184d);
    /* 0088184d: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 00881850: lea ecx, [edx + edi - 4] */ r_ecx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 00881854: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00881858: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0088185c: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00881860: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 00881864: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881866: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881868: lea edx, [edx + edi - 4] */ r_edx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 0088186c: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00881870: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 00881874: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881876: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881878: lea edx, [edx + edi - 4] */ r_edx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 0088187c: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00881880: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 00881884: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 00881888: call 0x883b80 */ r_esp -= 4; W32(r_esp, 0x88188du); f_00883b80();
    /* 0088188d: jmp 0x88123b */ goto L_0088123b;
L_00881892:; BB(0x00881892);
    /* 00881892: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 00881895: lea ecx, [edx + edi - 4] */ r_ecx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 00881899: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 0088189d: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 008818a1: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 008818a5: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 008818a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008818ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008818ad: lea edx, [edx + edi - 4] */ r_edx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 008818b1: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008818b5: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 008818b9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008818bb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008818bd: lea edx, [edx + edi - 4] */ r_edx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 008818c1: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 008818c5: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 008818c9: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 008818cd: call 0x883b80 */ r_esp -= 4; W32(r_esp, 0x8818d2u); f_00883b80();
    /* 008818d2: jmp 0x88123b */ goto L_0088123b;
}

void f_00880b2c(void)
{
    FN_ENTER(0x00880b2c);
    goto L_00880b2c;
L_008807a5:; BB(0x008807a5);
    /* 008807a5: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 008807a9: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 008807ad: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 008807b1: mov edi, dword ptr [edi + eax + 4] */ r_edi = R32((u32)(r_edi+r_eax+0x4u));
    /* 008807b5: mov eax, ecx */ r_eax = r_ecx;
    /* 008807b7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008807b8: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x008807b8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008807b8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008807ba: mov ebp, eax */ r_ebp = r_eax;
    /* 008807bc: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 008807c0: mov dword ptr [esp + 0x4c], ebp */ W32((u32)(r_esp+0x4cu), r_ebp);
    /* 008807c4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008807c5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008807c5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008807c5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008807c7: imul ebp, eax */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_eax; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008807ca: mov ecx, eax */ r_ecx = r_eax;
    /* 008807cc: mov dword ptr [esp + 0x64], ebp */ W32((u32)(r_esp+0x64u), r_ebp);
    /* 008807d0: mov ebp, eax */ r_ebp = r_eax;
    /* 008807d2: imul ebp, edi */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_edi; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008807d5: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008807d7: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008807d9: sub esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008807db: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 008807df: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008807e1: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008807e2: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008807e5: je 0x881075 */ if (fZ) goto L_00881075;
L_008807eb:; BB(0x008807eb);
    /* 008807eb: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008807ee: je 0x880a10 */ if (fZ) goto L_00880a10;
L_008807f4:; BB(0x008807f4);
    /* 008807f4: mov edx, ebp */ r_edx = r_ebp;
    /* 008807f6: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008807f8: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008807f9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008807fc: cmove ebp, edx */ if (fZ) { r_ebp = r_edx; }
    /* 008807ff: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00880801: je 0x880846 */ if (fZ) goto L_00880846;
L_00880803:; BB(0x00880803);
    /* 00880803: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 00880806: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880808: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0088080b: lea ebp, [ebp + edx - 4] */ r_ebp = (u32)(r_ebp+r_edx+0xfffffffcu);
    /* 0088080f: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00880813: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00880817: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 0088081b: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 0088081f: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00880823: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00880827: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0088082b: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 0088082f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00880833: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00880837: mov edx, edi */ r_edx = r_edi;
    /* 00880839: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 0088083d: call 0x8818d8 */ r_esp -= 4; W32(r_esp, 0x880842u); f_008818d8();
    /* 00880842: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00880844: jmp 0x88088a */ goto L_0088088a;
L_00880846:; BB(0x00880846);
    /* 00880846: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 00880849: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0088084b: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0088084e: lea ebp, [ebp + edx - 4] */ r_ebp = (u32)(r_ebp+r_edx+0xfffffffcu);
    /* 00880852: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00880856: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0088085a: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 0088085e: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00880862: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00880866: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0088086a: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0088086e: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00880872: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00880876: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0088087a: mov edx, edi */ r_edx = r_edi;
    /* 0088087c: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 00880880: call 0x8818d8 */ r_esp -= 4; W32(r_esp, 0x880885u); f_008818d8();
    /* 00880885: mov ebp, 1 */ r_ebp = 0x1u;
L_0088088a:; BB(0x0088088a);
    /* 0088088a: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 0088088e: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00880892: add dword ptr [esp + 0x48], -4 */ { u32 ad = (u32)(r_esp+0x48u);  u32 a = R32(ad); u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00880897: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00880898: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0088089c: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 008808a0: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008808a2: jl 0x8807a5 */ if ((fS!=fO)) goto L_008807a5;
L_008808a8:; BB(0x008808a8);
    /* 008808a8: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 008808ac: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 008808b0: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008808b3: je 0x8809f8 */ if (fZ) goto L_008809f8;
L_008808b9:; BB(0x008808b9);
    /* 008808b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008808bb: jle 0x8809f8 */ if ((fZ||fS!=fO)) goto L_008809f8;
L_008808c1:; BB(0x008808c1);
    /* 008808c1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008808c3: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008808c6: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 008808ca: jb 0x88099d */ if (fC) goto L_0088099d;
L_008808d0:; BB(0x008808d0);
    /* 008808d0: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 008808d3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008808d5: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 008808d9: lea ebp, [edx + esi] */ r_ebp = (u32)(r_edx+r_esi);
    /* 008808dc: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008808de: jb 0x880a05 */ if (fC) goto L_00880a05;
L_008808e4:; BB(0x008808e4);
    /* 008808e4: mov ebp, eax */ r_ebp = r_eax;
    /* 008808e6: mov esi, edx */ r_esi = r_edx;
    /* 008808e8: and esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008808eb: mov edi, ecx */ r_edi = r_ecx;
    /* 008808ed: je 0x880932 */ if (fZ) goto L_00880932;
L_008808ef:; BB(0x008808ef);
    /* 008808ef: test esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008808f5: jne 0x88099d */ if (!fZ) goto L_0088099d;
L_008808fb:; BB(0x008808fb);
    /* 008808fb: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008808fd: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 00880900: lea edi, [ecx + esi + 0x10] */ r_edi = (u32)(r_ecx+r_esi+0x10u);
    /* 00880904: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00880907: mov ebp, eax */ r_ebp = r_eax;
    /* 00880909: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0088090b: mov dword ptr [esp + 0x64], edi */ W32((u32)(r_esp+0x64u), r_edi);
    /* 0088090f: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 00880913: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
    /* 00880917: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
L_0088091b:; BB(0x0088091b);
    /* 0088091b: mov eax, dword ptr [ecx + edi*4] */ r_eax = R32((u32)(r_ecx+r_edi*4));
    /* 0088091e: mov dword ptr [esi + edi*4], eax */ W32((u32)(r_esi+r_edi*4), r_eax);
    /* 00880921: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00880922: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00880924: jb 0x88091b */ if (fC) goto L_0088091b;
L_00880926:; BB(0x00880926);
    /* 00880926: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 0088092a: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 0088092e: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
L_00880932:; BB(0x00880932);
    /* 00880932: and ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00880935: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00880937: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880939: test edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088093f: jne 0x88096d */ if (!fZ) goto L_0088096d;
L_00880941:; BB(0x00880941);
    /* 00880941: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
    /* 00880945: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
L_00880949:; BB(0x00880949);
    /* 00880949: prefetchnta byte ptr [ecx + esi*4 + 0x40] */ ;
    /* 0088094e: movaps xmm0, xmmword ptr [ecx + esi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_esi*4), 16); xmm[0] = s; }
    /* 00880952: movaps xmmword ptr [edx + esi*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+r_esi*4), &xmm[0], 16);
    /* 00880956: movaps xmm1, xmmword ptr [ecx + esi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_esi*4+0x10u), 16); xmm[1] = s; }
    /* 0088095b: movaps xmmword ptr [edx + esi*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+r_esi*4+0x10u), &xmm[1], 16);
    /* 00880960: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880963: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00880965: jb 0x880949 */ if (fC) goto L_00880949;
L_00880967:; BB(0x00880967);
    /* 00880967: mov dword ptr [esp + 0x60], esi */ W32((u32)(r_esp+0x60u), r_esi);
    /* 0088096b: jmp 0x880997 */ goto L_00880997;
L_0088096d:; BB(0x0088096d);
    /* 0088096d: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
    /* 00880971: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
L_00880975:; BB(0x00880975);
    /* 00880975: movups xmm0, xmmword ptr [ecx + esi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_esi*4), 16); xmm[0] = s; }
    /* 00880979: prefetchnta byte ptr [ecx + esi*4 + 0x40] */ ;
    /* 0088097e: movaps xmmword ptr [edx + esi*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+r_esi*4), &xmm[0], 16);
    /* 00880982: movups xmm1, xmmword ptr [ecx + esi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_esi*4+0x10u), 16); xmm[1] = s; }
    /* 00880987: movaps xmmword ptr [edx + esi*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+r_esi*4+0x10u), &xmm[1], 16);
    /* 0088098c: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088098f: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00880991: jb 0x880975 */ if (fC) goto L_00880975;
L_00880993:; BB(0x00880993);
    /* 00880993: mov dword ptr [esp + 0x60], esi */ W32((u32)(r_esp+0x60u), r_esi);
L_00880997:; BB(0x00880997);
    /* 00880997: mov edx, esi */ r_edx = r_esi;
    /* 00880999: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088099b: jae 0x8809f8 */ if (!fC) goto L_008809f8;
L_0088099d:; BB(0x0088099d);
    /* 0088099d: mov edx, eax */ r_edx = r_eax;
    /* 0088099f: sub edx, dword ptr [esp + 0x60] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x60u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008809a3: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008809a6: jb 0x8809e4 */ if (fC) goto L_008809e4;
L_008809a8:; BB(0x008809a8);
    /* 008809a8: lea edx, [eax - 6] */ r_edx = (u32)(r_eax+0xfffffffau);
    /* 008809ab: mov ebp, dword ptr [esp + 0x60] */ r_ebp = R32((u32)(r_esp+0x60u));
    /* 008809af: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
L_008809b3:; BB(0x008809b3);
    /* 008809b3: mov edi, dword ptr [ecx + ebp*4] */ r_edi = R32((u32)(r_ecx+r_ebp*4));
    /* 008809b6: mov dword ptr [esi + ebp*4], edi */ W32((u32)(r_esi+r_ebp*4), r_edi);
    /* 008809b9: mov edi, dword ptr [ecx + ebp*4 + 4] */ r_edi = R32((u32)(r_ecx+r_ebp*4+0x4u));
    /* 008809bd: mov dword ptr [esi + ebp*4 + 4], edi */ W32((u32)(r_esi+r_ebp*4+0x4u), r_edi);
    /* 008809c1: mov edi, dword ptr [ecx + ebp*4 + 8] */ r_edi = R32((u32)(r_ecx+r_ebp*4+0x8u));
    /* 008809c5: mov dword ptr [esi + ebp*4 + 8], edi */ W32((u32)(r_esi+r_ebp*4+0x8u), r_edi);
    /* 008809c9: mov edi, dword ptr [ecx + ebp*4 + 0xc] */ r_edi = R32((u32)(r_ecx+r_ebp*4+0xcu));
    /* 008809cd: mov dword ptr [esi + ebp*4 + 0xc], edi */ W32((u32)(r_esi+r_ebp*4+0xcu), r_edi);
    /* 008809d1: mov edi, dword ptr [ecx + ebp*4 + 0x10] */ r_edi = R32((u32)(r_ecx+r_ebp*4+0x10u));
    /* 008809d5: mov dword ptr [esi + ebp*4 + 0x10], edi */ W32((u32)(r_esi+r_ebp*4+0x10u), r_edi);
    /* 008809d9: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008809dc: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008809de: jbe 0x8809b3 */ if ((fC||fZ)) goto L_008809b3;
L_008809e0:; BB(0x008809e0);
    /* 008809e0: mov dword ptr [esp + 0x60], ebp */ W32((u32)(r_esp+0x60u), r_ebp);
L_008809e4:; BB(0x008809e4);
    /* 008809e4: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
    /* 008809e8: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
L_008809ec:; BB(0x008809ec);
    /* 008809ec: mov edx, dword ptr [ecx + esi*4] */ r_edx = R32((u32)(r_ecx+r_esi*4));
    /* 008809ef: mov dword ptr [ebp + esi*4], edx */ W32((u32)(r_ebp+r_esi*4), r_edx);
    /* 008809f3: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008809f4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008809f6: jb 0x8809ec */ if (fC) goto L_008809ec;
L_008809f8:; BB(0x008809f8);
    /* 008809f8: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008809fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008809ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00880a00: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00880a01: mov esp, ebx */ r_esp = r_ebx;
    /* 00880a03: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00880a04: ret  */ FN_RET(0x00880b2c); r_esp += 4; return;
L_00880a05:; BB(0x00880a05);
    /* 00880a05: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880a07: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00880a09: jb 0x88099d */ if (fC) goto L_0088099d;
L_00880a0b:; BB(0x00880a0b);
    /* 00880a0b: jmp 0x8808e4 */ goto L_008808e4;
L_00880a10:; BB(0x00880a10);
    /* 00880a10: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00880a12: je 0x880d33 */ if (fZ) goto L_00880d33;
L_00880a18:; BB(0x00880a18);
    /* 00880a18: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00880a1b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880a1d: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 00880a20: lea edx, [edx + edi - 4] */ r_edx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 00880a24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00880a26: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00880a29: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00880a2d: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00880a31: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 00880a35: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00880a37: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 00880a3b: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00880a3f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00880a41: jle 0x880aa0 */ if ((fZ||fS!=fO)) goto L_00880aa0;
L_00880a43:; BB(0x00880a43);
    /* 00880a43: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 00880a47: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00880a4a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00880a4c: add edi, dword ptr [esp + 0x58] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x58u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00880a50: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 00880a54: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00880a58: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 00880a5c: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00880a60: mov ebp, dword ptr [esp + 0x68] */ r_ebp = R32((u32)(r_esp+0x68u));
L_00880a64:; BB(0x00880a64);
    /* 00880a64: movss xmm0, dword ptr [esi + ecx*4] */ { u32 v = R32((u32)(r_esi+r_ecx*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00880a69: addss xmm0, dword ptr [esi + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 00880a6e: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 00880a72: movss dword ptr [edi + ecx*8], xmm0 */ W32((u32)(r_edi+r_ecx*8), xmm[0].d[0]);
    /* 00880a77: movss xmm1, dword ptr [esi + ecx*4] */ { u32 v = R32((u32)(r_esi+r_ecx*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00880a7c: subss xmm1, dword ptr [esi + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 00880a81: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 00880a85: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880a87: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880a88: movss dword ptr [edi + ecx*8 - 4], xmm1 */ W32((u32)(r_edi+r_ecx*8+0xfffffffcu), xmm[1].d[0]);
    /* 00880a8e: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880a90: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00880a94: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880a96: jl 0x880a64 */ if ((fS!=fO)) goto L_00880a64;
L_00880a98:; BB(0x00880a98);
    /* 00880a98: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00880a9c: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
L_00880aa0:; BB(0x00880aa0);
    /* 00880aa0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880aa3: jl 0x88088a */ if ((fS!=fO)) goto L_0088088a;
L_00880aa9:; BB(0x00880aa9);
    /* 00880aa9: je 0x880c01 */ if (fZ) goto L_00880c01;
L_00880aaf:; BB(0x00880aaf);
    /* 00880aaf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00880ab1: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00880ab5: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00880ab9: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 00880abd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00880abf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00880ac1: jle 0x88103d */ if ((fZ||fS!=fO)) goto L_0088103d;
L_00880ac7:; BB(0x00880ac7);
    /* 00880ac7: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 00880acb: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00880acf: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00880ad3: mov esi, dword ptr [esp + 0x6c] */ r_esi = R32((u32)(r_esp+0x6cu));
    /* 00880ad7: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
L_00880adb:; BB(0x00880adb);
    /* 00880adb: mov ebp, esi */ r_ebp = r_esi;
    /* 00880add: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 00880ae1: lea eax, [ecx + edx] */ r_eax = (u32)(r_ecx+r_edx);
    /* 00880ae4: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00880ae8: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 00880aeb: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00880aee: mov dword ptr [esp + 0x80], edi */ W32((u32)(r_esp+0x80u), r_edi);
    /* 00880af5: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880af8: jle 0x880bc1 */ if ((fZ||fS!=fO)) goto L_00880bc1;
L_00880afe:; BB(0x00880afe);
    /* 00880afe: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 00880b02: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 00880b06: mov dword ptr [esp + 0x7c], ecx */ W32((u32)(r_esp+0x7cu), r_ecx);
    /* 00880b0a: lea ecx, [ecx + edi*4 - 8] */ r_ecx = (u32)(r_ecx+r_edi*4+0xfffffff8u);
    /* 00880b0e: mov dword ptr [esp + 0x74], ecx */ W32((u32)(r_esp+0x74u), r_ecx);
    /* 00880b12: mov dword ptr [esp + 0x78], ebp */ W32((u32)(r_esp+0x78u), r_ebp);
    /* 00880b16: mov dword ptr [esp + 0x6c], esi */ W32((u32)(r_esp+0x6cu), r_esi);
    /* 00880b1a: mov ebp, dword ptr [esp + 0x7c] */ r_ebp = R32((u32)(r_esp+0x7cu));
    /* 00880b1e: mov esi, dword ptr [esp + 0x80] */ r_esi = R32((u32)(r_esp+0x80u));
L_00880b25:; BB(0x00880b25);
    /* 00880b25: mov edi, dword ptr [esp + 0x78] */ r_edi = R32((u32)(r_esp+0x78u));
    /* 00880b29: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00880b2c:; BB(0x00880b2c);
    /* 00880b2c: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00880b2f: mov dword ptr [esp + 0x78], edi */ W32((u32)(r_esp+0x78u), r_edi);
    /* 00880b33: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880b36: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880b39: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00880b3d: movss xmm3, dword ptr [ecx + edi*4] */ { u32 v = R32((u32)(r_ecx+r_edi*4)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 00880b42: movss xmm4, dword ptr [ecx + edi*4 - 4] */ { u32 v = R32((u32)(r_ecx+r_edi*4+0xfffffffcu)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 00880b48: movss xmm6, dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 00880b4d: movss xmm2, dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 00880b52: movss xmm0, xmm2 */ xmm[0].d[0] = xmm[2].d[0];
    /* 00880b56: mulss xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 00880b5a: movss xmm1, xmm6 */ xmm[1].d[0] = xmm[6].d[0];
    /* 00880b5e: mulss xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 00880b62: addss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 00880b66: mulss xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 00880b6a: mulss xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; }
    /* 00880b6e: subss xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 00880b72: movss xmm7, dword ptr [ecx + edx*4] */ { u32 v = R32((u32)(r_ecx+r_edx*4)); xmm[7].d[0] = v; xmm[7].d[1] = 0; xmm[7].d[2] = 0; xmm[7].d[3] = 0; }
    /* 00880b77: addss xmm7, xmm2 */ { XMM s = xmm[2]; xmm[7].fs[0] = xmm[7].fs[0] + s.fs[0]; }
    /* 00880b7b: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 00880b7f: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880b82: movss dword ptr [edi + esi*4], xmm7 */ W32((u32)(r_edi+r_esi*4), xmm[7].d[0]);
    /* 00880b87: subss xmm2, dword ptr [ecx + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 00880b8c: movss dword ptr [edi + eax*4], xmm2 */ W32((u32)(r_edi+r_eax*4), xmm[2].d[0]);
    /* 00880b91: movss xmm5, dword ptr [ecx + edx*4 - 4] */ { u32 v = R32((u32)(r_ecx+r_edx*4+0xfffffffcu)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 00880b97: addss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; }
    /* 00880b9b: movss dword ptr [edi + esi*4 - 4], xmm5 */ W32((u32)(r_edi+r_esi*4+0xfffffffcu), xmm[5].d[0]);
    /* 00880ba1: movss xmm1, dword ptr [ecx + edx*4 - 4] */ { u32 v = R32((u32)(r_ecx+r_edx*4+0xfffffffcu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00880ba7: subss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 00880bab: movss dword ptr [edi + eax*4 - 4], xmm1 */ W32((u32)(r_edi+r_eax*4+0xfffffffcu), xmm[1].d[0]);
    /* 00880bb1: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00880bb5: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00880bb7: jb 0x880b25 */ if (fC) goto L_00880b25;
L_00880bbd:; BB(0x00880bbd);
    /* 00880bbd: mov esi, dword ptr [esp + 0x6c] */ r_esi = R32((u32)(r_esp+0x6cu));
L_00880bc1:; BB(0x00880bc1);
    /* 00880bc1: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00880bc5: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00880bc9: add esi, dword ptr [esp + 0x5c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x5cu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880bcd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00880bce: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00880bd2: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00880bd6: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880bd8: jl 0x880adb */ if ((fS!=fO)) goto L_00880adb;
L_00880bde:; BB(0x00880bde);
    /* 00880bde: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00880be2: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00880be6: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00880bea: mov ecx, eax */ r_ecx = r_eax;
    /* 00880bec: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00880bed: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00880bef: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00880bf1: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00880bf4: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00880bf6: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00880bf8: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00880bfb: je 0x88088a */ if (fZ) goto L_0088088a;
L_00880c01:; BB(0x00880c01);
    /* 00880c01: mov ecx, eax */ r_ecx = r_eax;
    /* 00880c03: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 00880c06: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00880c0a: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 00880c0e: lea edx, [edi + eax - 1] */ r_edx = (u32)(r_edi+r_eax+0xffffffffu);
    /* 00880c12: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00880c16: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00880c1a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00880c1c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00880c1e: jle 0x88088a */ if ((fZ||fS!=fO)) goto L_0088088a;
L_00880c24:; BB(0x00880c24);
    /* 00880c24: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880c27: jl 0x880ce1 */ if ((fS!=fO)) goto L_00880ce1;
L_00880c2d:; BB(0x00880c2d);
    /* 00880c2d: lea edi, [edi - 4] */ r_edi = (u32)(r_edi+0xfffffffcu);
    /* 00880c30: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 00880c34: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00880c38: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00880c3c: mov esi, dword ptr [esp + 0x6c] */ r_esi = R32((u32)(r_esp+0x6cu));
    /* 00880c40: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00880c44: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
L_00880c48:; BB(0x00880c48);
    /* 00880c48: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 00880c4f: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00880c53: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 00880c57: xorps xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].q[0] = xmm[2].q[0] ^ s.q[0]; xmm[2].q[1] = xmm[2].q[1] ^ s.q[1]; }
    /* 00880c5a: subss xmm2, dword ptr [edi + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_edi+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 00880c5f: movss dword ptr [edx + ecx*4], xmm2 */ W32((u32)(r_edx+r_ecx*4), xmm[2].d[0]);
    /* 00880c64: mov eax, dword ptr [edi + esi*4] */ r_eax = R32((u32)(r_edi+r_esi*4));
    /* 00880c67: mov dword ptr [edx + ecx*4 - 4], eax */ W32((u32)(r_edx+r_ecx*4+0xfffffffcu), r_eax);
    /* 00880c6b: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00880c6f: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880c71: add ecx, dword ptr [esp + 0x60] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x60u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880c75: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880c77: xorps xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].q[0] = xmm[3].q[0] ^ s.q[0]; xmm[3].q[1] = xmm[3].q[1] ^ s.q[1]; }
    /* 00880c7a: subss xmm3, dword ptr [edi + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_edi+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; }
    /* 00880c7f: movss dword ptr [edx + ecx*4], xmm3 */ W32((u32)(r_edx+r_ecx*4), xmm[3].d[0]);
    /* 00880c84: mov edi, dword ptr [edi + esi*4] */ r_edi = R32((u32)(r_edi+r_esi*4));
    /* 00880c87: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880c89: mov dword ptr [edx + ecx*4 - 4], edi */ W32((u32)(r_edx+r_ecx*4+0xfffffffcu), r_edi);
    /* 00880c8d: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 00880c91: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880c93: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880c95: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00880c99: xorps xmm4, xmm4 */ { XMM s = xmm[4]; xmm[4].q[0] = xmm[4].q[0] ^ s.q[0]; xmm[4].q[1] = xmm[4].q[1] ^ s.q[1]; }
    /* 00880c9c: subss xmm4, dword ptr [eax + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; }
    /* 00880ca1: movss dword ptr [edx + ecx*4], xmm4 */ W32((u32)(r_edx+r_ecx*4), xmm[4].d[0]);
    /* 00880ca6: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 00880ca9: mov dword ptr [edx + ecx*4 - 4], eax */ W32((u32)(r_edx+r_ecx*4+0xfffffffcu), r_eax);
    /* 00880cad: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880caf: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00880cb3: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880cb5: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880cb7: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 00880cbe: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880cc1: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00880cc5: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880cc7: jle 0x880c48 */ if ((fZ||fS!=fO)) goto L_00880c48;
L_00880ccd:; BB(0x00880ccd);
    /* 00880ccd: mov dword ptr [esp + 0x64], ebp */ W32((u32)(r_esp+0x64u), r_ebp);
    /* 00880cd1: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00880cd5: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00880cd9: mov dword ptr [esp + 0x6c], esi */ W32((u32)(r_esp+0x6cu), r_esi);
    /* 00880cdd: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
L_00880ce1:; BB(0x00880ce1);
    /* 00880ce1: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00880ce5: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00880ce9: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00880ced: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 00880cf1: mov ebp, dword ptr [esp + 0x6c] */ r_ebp = R32((u32)(r_esp+0x6cu));
L_00880cf5:; BB(0x00880cf5);
    /* 00880cf5: xorps xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 00880cf8: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00880cfc: subss xmm1, dword ptr [edi + esi*4] */ { XMM s; s.d[0] = R32((u32)(r_edi+r_esi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 00880d01: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00880d05: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880d06: movss dword ptr [eax + ecx*4], xmm1 */ W32((u32)(r_eax+r_ecx*4), xmm[1].d[0]);
    /* 00880d0b: mov edi, dword ptr [edi + ebp*4] */ r_edi = R32((u32)(r_edi+r_ebp*4));
    /* 00880d0e: mov dword ptr [eax + ecx*4 - 4], edi */ W32((u32)(r_eax+r_ecx*4+0xfffffffcu), r_edi);
    /* 00880d12: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00880d16: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880d18: add ecx, dword ptr [esp + 0x60] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x60u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880d1c: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880d1e: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00880d22: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880d24: jl 0x880cf5 */ if ((fS!=fO)) goto L_00880cf5;
L_00880d26:; BB(0x00880d26);
    /* 00880d26: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00880d2a: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00880d2e: jmp 0x88088a */ goto L_0088088a;
L_00880d33:; BB(0x00880d33);
    /* 00880d33: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 00880d36: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880d38: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00880d3b: lea edi, [ecx + edx - 4] */ r_edi = (u32)(r_ecx+r_edx+0xfffffffcu);
    /* 00880d3f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00880d41: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00880d45: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 00880d49: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00880d4c: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 00880d50: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00880d52: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 00880d56: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00880d5a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00880d5c: jle 0x880dbb */ if ((fZ||fS!=fO)) goto L_00880dbb;
L_00880d5e:; BB(0x00880d5e);
    /* 00880d5e: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00880d62: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00880d65: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00880d67: add edi, dword ptr [esp + 0x50] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x50u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00880d6b: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 00880d6f: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00880d73: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
    /* 00880d77: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00880d7b: mov ebp, dword ptr [esp + 0x6c] */ r_ebp = R32((u32)(r_esp+0x6cu));
L_00880d7f:; BB(0x00880d7f);
    /* 00880d7f: movss xmm0, dword ptr [esi + ecx*4] */ { u32 v = R32((u32)(r_esi+r_ecx*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00880d84: addss xmm0, dword ptr [esi + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 00880d89: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00880d8d: movss dword ptr [edi + ecx*8], xmm0 */ W32((u32)(r_edi+r_ecx*8), xmm[0].d[0]);
    /* 00880d92: movss xmm1, dword ptr [esi + ecx*4] */ { u32 v = R32((u32)(r_esi+r_ecx*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00880d97: subss xmm1, dword ptr [esi + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 00880d9c: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 00880da0: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880da2: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880da3: movss dword ptr [edi + ecx*8 - 4], xmm1 */ W32((u32)(r_edi+r_ecx*8+0xfffffffcu), xmm[1].d[0]);
    /* 00880da9: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880dab: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00880daf: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880db1: jl 0x880d7f */ if ((fS!=fO)) goto L_00880d7f;
L_00880db3:; BB(0x00880db3);
    /* 00880db3: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00880db7: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
L_00880dbb:; BB(0x00880dbb);
    /* 00880dbb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880dbe: jl 0x88088a */ if ((fS!=fO)) goto L_0088088a;
L_00880dc4:; BB(0x00880dc4);
    /* 00880dc4: je 0x880f1b */ if (fZ) goto L_00880f1b;
L_00880dca:; BB(0x00880dca);
    /* 00880dca: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00880dcc: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 00880dd0: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00880dd4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00880dd6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00880dd8: jle 0x881059 */ if ((fZ||fS!=fO)) goto L_00881059;
L_00880dde:; BB(0x00880dde);
    /* 00880dde: mov dword ptr [esp + 0x80], ecx */ W32((u32)(r_esp+0x80u), r_ecx);
    /* 00880de5: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00880de9: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00880ded: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 00880df1: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
L_00880df5:; BB(0x00880df5);
    /* 00880df5: mov ebp, esi */ r_ebp = r_esi;
    /* 00880df7: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 00880dfb: lea eax, [ecx + edx] */ r_eax = (u32)(r_ecx+r_edx);
    /* 00880dfe: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 00880e02: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 00880e05: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00880e08: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 00880e0c: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880e0f: jle 0x880ed5 */ if ((fZ||fS!=fO)) goto L_00880ed5;
L_00880e15:; BB(0x00880e15);
    /* 00880e15: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 00880e19: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 00880e1d: mov dword ptr [esp + 0x70], ecx */ W32((u32)(r_esp+0x70u), r_ecx);
    /* 00880e21: lea ecx, [ecx + edi*4 - 8] */ r_ecx = (u32)(r_ecx+r_edi*4+0xfffffff8u);
    /* 00880e25: mov dword ptr [esp + 0x78], ecx */ W32((u32)(r_esp+0x78u), r_ecx);
    /* 00880e29: mov dword ptr [esp + 0x74], ebp */ W32((u32)(r_esp+0x74u), r_ebp);
    /* 00880e2d: mov dword ptr [esp + 0x68], esi */ W32((u32)(r_esp+0x68u), r_esi);
    /* 00880e31: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
    /* 00880e35: mov esi, dword ptr [esp + 0x6c] */ r_esi = R32((u32)(r_esp+0x6cu));
L_00880e39:; BB(0x00880e39);
    /* 00880e39: mov edi, dword ptr [esp + 0x74] */ r_edi = R32((u32)(r_esp+0x74u));
    /* 00880e3d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00880e40: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00880e43: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 00880e47: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880e4a: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880e4d: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 00880e51: movss xmm3, dword ptr [ecx + edi*4] */ { u32 v = R32((u32)(r_ecx+r_edi*4)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 00880e56: movss xmm4, dword ptr [ecx + edi*4 - 4] */ { u32 v = R32((u32)(r_ecx+r_edi*4+0xfffffffcu)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 00880e5c: movss xmm6, dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 00880e61: movss xmm2, dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 00880e66: movss xmm0, xmm2 */ xmm[0].d[0] = xmm[2].d[0];
    /* 00880e6a: mulss xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 00880e6e: movss xmm1, xmm6 */ xmm[1].d[0] = xmm[6].d[0];
    /* 00880e72: mulss xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 00880e76: addss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 00880e7a: mulss xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 00880e7e: mulss xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; }
    /* 00880e82: subss xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 00880e86: movss xmm7, dword ptr [ecx + edx*4] */ { u32 v = R32((u32)(r_ecx+r_edx*4)); xmm[7].d[0] = v; xmm[7].d[1] = 0; xmm[7].d[2] = 0; xmm[7].d[3] = 0; }
    /* 00880e8b: addss xmm7, xmm2 */ { XMM s = xmm[2]; xmm[7].fs[0] = xmm[7].fs[0] + s.fs[0]; }
    /* 00880e8f: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00880e93: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880e96: movss dword ptr [edi + esi*4], xmm7 */ W32((u32)(r_edi+r_esi*4), xmm[7].d[0]);
    /* 00880e9b: subss xmm2, dword ptr [ecx + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 00880ea0: movss dword ptr [edi + eax*4], xmm2 */ W32((u32)(r_edi+r_eax*4), xmm[2].d[0]);
    /* 00880ea5: movss xmm5, dword ptr [ecx + edx*4 - 4] */ { u32 v = R32((u32)(r_ecx+r_edx*4+0xfffffffcu)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 00880eab: addss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; }
    /* 00880eaf: movss dword ptr [edi + esi*4 - 4], xmm5 */ W32((u32)(r_edi+r_esi*4+0xfffffffcu), xmm[5].d[0]);
    /* 00880eb5: movss xmm1, dword ptr [ecx + edx*4 - 4] */ { u32 v = R32((u32)(r_ecx+r_edx*4+0xfffffffcu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00880ebb: subss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 00880ebf: movss dword ptr [edi + eax*4 - 4], xmm1 */ W32((u32)(r_edi+r_eax*4+0xfffffffcu), xmm[1].d[0]);
    /* 00880ec5: mov ecx, dword ptr [esp + 0x78] */ r_ecx = R32((u32)(r_esp+0x78u));
    /* 00880ec9: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00880ecb: jb 0x880e39 */ if (fC) goto L_00880e39;
L_00880ed1:; BB(0x00880ed1);
    /* 00880ed1: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
L_00880ed5:; BB(0x00880ed5);
    /* 00880ed5: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
    /* 00880ed9: mov eax, dword ptr [esp + 0x80] */ r_eax = R32((u32)(r_esp+0x80u));
    /* 00880ee0: add esi, dword ptr [esp + 0x5c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x5cu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880ee4: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00880ee5: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00880ee9: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 00880ef0: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880ef2: jl 0x880df5 */ if ((fS!=fO)) goto L_00880df5;
L_00880ef8:; BB(0x00880ef8);
    /* 00880ef8: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00880efc: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00880f00: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00880f04: mov ecx, eax */ r_ecx = r_eax;
    /* 00880f06: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00880f07: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00880f09: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00880f0b: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00880f0e: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00880f10: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00880f12: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00880f15: je 0x88088a */ if (fZ) goto L_0088088a;
L_00880f1b:; BB(0x00880f1b);
    /* 00880f1b: mov ecx, eax */ r_ecx = r_eax;
    /* 00880f1d: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 00880f20: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00880f24: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00880f28: lea edx, [edi + eax - 1] */ r_edx = (u32)(r_edi+r_eax+0xffffffffu);
    /* 00880f2c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00880f2e: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 00880f32: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00880f36: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00880f38: jle 0x88088a */ if ((fZ||fS!=fO)) goto L_0088088a;
L_00880f3e:; BB(0x00880f3e);
    /* 00880f3e: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880f41: jl 0x880feb */ if ((fS!=fO)) goto L_00880feb;
L_00880f47:; BB(0x00880f47);
    /* 00880f47: lea edi, [edi - 4] */ r_edi = (u32)(r_edi+0xfffffffcu);
    /* 00880f4a: mov dword ptr [esp + 0x64], edi */ W32((u32)(r_esp+0x64u), r_edi);
    /* 00880f4e: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00880f52: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00880f56: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 00880f5a: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
L_00880f5e:; BB(0x00880f5e);
    /* 00880f5e: xorps xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 00880f61: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 00880f65: subss xmm1, dword ptr [edi + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_edi+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 00880f6a: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00880f6e: movss dword ptr [eax + ecx*4], xmm1 */ W32((u32)(r_eax+r_ecx*4), xmm[1].d[0]);
    /* 00880f73: mov ebp, dword ptr [edi + esi*4] */ r_ebp = R32((u32)(r_edi+r_esi*4));
    /* 00880f76: mov dword ptr [eax + ecx*4 - 4], ebp */ W32((u32)(r_eax+r_ecx*4+0xfffffffcu), r_ebp);
    /* 00880f7a: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 00880f7e: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880f80: add ecx, dword ptr [esp + 0x54] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880f84: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880f86: xorps xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].q[0] = xmm[2].q[0] ^ s.q[0]; xmm[2].q[1] = xmm[2].q[1] ^ s.q[1]; }
    /* 00880f89: subss xmm2, dword ptr [edi + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_edi+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 00880f8e: movss dword ptr [eax + ecx*4], xmm2 */ W32((u32)(r_eax+r_ecx*4), xmm[2].d[0]);
    /* 00880f93: mov edi, dword ptr [edi + esi*4] */ r_edi = R32((u32)(r_edi+r_esi*4));
    /* 00880f96: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880f98: mov dword ptr [eax + ecx*4 - 4], edi */ W32((u32)(r_eax+r_ecx*4+0xfffffffcu), r_edi);
    /* 00880f9c: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00880fa0: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880fa2: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880fa4: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 00880fa8: xorps xmm4, xmm4 */ { XMM s = xmm[4]; xmm[4].q[0] = xmm[4].q[0] ^ s.q[0]; xmm[4].q[1] = xmm[4].q[1] ^ s.q[1]; }
    /* 00880fab: subss xmm4, dword ptr [ebp + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_ebp+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; }
    /* 00880fb1: movss dword ptr [eax + ecx*4], xmm4 */ W32((u32)(r_eax+r_ecx*4), xmm[4].d[0]);
    /* 00880fb6: mov ebp, dword ptr [ebp + esi*4] */ r_ebp = R32((u32)(r_ebp+r_esi*4));
    /* 00880fba: mov dword ptr [eax + ecx*4 - 4], ebp */ W32((u32)(r_eax+r_ecx*4+0xfffffffcu), r_ebp);
    /* 00880fbe: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00880fc0: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00880fc4: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00880fc6: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880fc8: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 00880fcc: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00880fcf: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 00880fd3: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880fd5: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00880fd9: jle 0x880f5e */ if ((fZ||fS!=fO)) goto L_00880f5e;
L_00880fdb:; BB(0x00880fdb);
    /* 00880fdb: mov dword ptr [esp + 0x68], esi */ W32((u32)(r_esp+0x68u), r_esi);
    /* 00880fdf: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00880fe3: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00880fe7: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
L_00880feb:; BB(0x00880feb);
    /* 00880feb: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00880fef: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00880ff3: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00880ff7: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
    /* 00880ffb: mov ebp, dword ptr [esp + 0x68] */ r_ebp = R32((u32)(r_esp+0x68u));
L_00880fff:; BB(0x00880fff);
    /* 00880fff: xorps xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 00881002: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 00881006: subss xmm1, dword ptr [edi + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_edi+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 0088100b: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0088100f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00881010: movss dword ptr [eax + ecx*4], xmm1 */ W32((u32)(r_eax+r_ecx*4), xmm[1].d[0]);
    /* 00881015: mov edi, dword ptr [edi + ebp*4] */ r_edi = R32((u32)(r_edi+r_ebp*4));
    /* 00881018: mov dword ptr [eax + ecx*4 - 4], edi */ W32((u32)(r_eax+r_ecx*4+0xfffffffcu), r_edi);
    /* 0088101c: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00881020: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881022: add ecx, dword ptr [esp + 0x54] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00881026: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00881028: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0088102c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088102e: jl 0x880fff */ if ((fS!=fO)) goto L_00880fff;
L_00881030:; BB(0x00881030);
    /* 00881030: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00881034: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00881038: jmp 0x88088a */ goto L_0088088a;
L_0088103d:; BB(0x0088103d);
    /* 0088103d: mov ecx, eax */ r_ecx = r_eax;
    /* 0088103f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00881040: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00881042: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00881044: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00881047: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00881049: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088104b: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088104e: je 0x88088a */ if (fZ) goto L_0088088a;
L_00881054:; BB(0x00881054);
    /* 00881054: jmp 0x880c01 */ goto L_00880c01;
L_00881059:; BB(0x00881059);
    /* 00881059: mov ecx, eax */ r_ecx = r_eax;
    /* 0088105b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088105c: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088105e: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00881060: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00881063: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00881065: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00881067: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088106a: je 0x88088a */ if (fZ) goto L_0088088a;
L_00881070:; BB(0x00881070);
    /* 00881070: jmp 0x880f1b */ goto L_00880f1b;
L_00881075:; BB(0x00881075);
    /* 00881075: lea edx, [eax + esi] */ r_edx = (u32)(r_eax+r_esi);
    /* 00881078: lea ecx, [eax + edx] */ r_ecx = (u32)(r_eax+r_edx);
    /* 0088107b: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 0088107f: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00881082: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00881084: mov dword ptr [esp + 0x6c], ecx */ W32((u32)(r_esp+0x6cu), r_ecx);
    /* 00881088: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088108a: je 0x8810d1 */ if (fZ) goto L_008810d1;
L_0088108c:; BB(0x0088108c);
    /* 0088108c: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 0088108f: lea ecx, [edx + edi - 4] */ r_ecx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 00881093: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 00881097: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0088109b: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 0088109f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008810a1: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 008810a5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008810a7: lea edx, [edx + edi - 4] */ r_edx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 008810ab: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008810af: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 008810b3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008810b5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008810b7: lea edx, [edx + edi - 4] */ r_edx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 008810bb: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 008810bf: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 008810c3: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 008810c7: call 0x883b80 */ r_esp -= 4; W32(r_esp, 0x8810ccu); f_00883b80();
    /* 008810cc: jmp 0x88088a */ goto L_0088088a;
L_008810d1:; BB(0x008810d1);
    /* 008810d1: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 008810d4: lea ecx, [edx + edi - 4] */ r_ecx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 008810d8: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 008810dc: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 008810e0: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 008810e4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008810e6: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 008810ea: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008810ec: lea edx, [edx + edi - 4] */ r_edx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 008810f0: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008810f4: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 008810f8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008810fa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008810fc: lea edx, [edx + edi - 4] */ r_edx = (u32)(r_edx+r_edi+0xfffffffcu);
    /* 00881100: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00881104: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 00881108: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 0088110c: call 0x883b80 */ r_esp -= 4; W32(r_esp, 0x881111u); f_00883b80();
    /* 00881111: jmp 0x88088a */ goto L_0088088a;
}

