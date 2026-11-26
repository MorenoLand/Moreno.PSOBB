#include "protos.h"

void f_00850000(void)
{
    FN_ENTER(0x00850000);
    /* 00850000: add al, 0xf5 */ {  u32 a = (u8)r_eax; u32 b = 0xf5u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (r < a); }
    /* 00850002: mov al, byte ptr [0xd900995b] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xd900995bu))) & 0xffu);
    /* 00850007: retf 0x4dc */ { u32 t = R32(r_esp); r_esp += 4; r_eax = r_edx = 0; call_ind(t); }
    /* 0085000a: cmc  */ fC = !fC;
    /* 0085000b: test al, 0x5b */ {  u32 a = (u8)r_eax; u32 b = 0x5bu; u32 r = (a & b) & 0xffu;   }
    /* 0085000d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085000e: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00850010: retf 0xc4de */ { u32 t = R32(r_esp); r_esp += 4; r_eax = r_edx = 0; call_ind(t); }
    /* 00850013: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00850015: fst qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0));
    /* 00850018: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0085001a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0085001c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0085001e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00850020: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
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
    /* 008500d5: ret  */ FN_RET(0x00850000); r_esp += 4; return;
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
    /* 00850114: ret  */ FN_RET(0x00850000); r_esp += 4; return;
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
    /* 00850215: ret  */ FN_RET(0x00850000); r_esp += 4; return;
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
    /* 0085027f: ret  */ FN_RET(0x00850000); r_esp += 4; return;
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
    /* 00850422: ret  */ FN_RET(0x00850000); r_esp += 4; return;
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
    /* 0085044f: ret  */ FN_RET(0x00850000); r_esp += 4; return;
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

void f_00850015(void)
{
    FN_ENTER(0x00850015);
    /* 00850015: fst qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0));
    /* 00850018: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0085001a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0085001c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0085001e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00850020: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
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
    /* 008500d5: ret  */ FN_RET(0x00850015); r_esp += 4; return;
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
    /* 00850114: ret  */ FN_RET(0x00850015); r_esp += 4; return;
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
    /* 00850215: ret  */ FN_RET(0x00850015); r_esp += 4; return;
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
    /* 0085027f: ret  */ FN_RET(0x00850015); r_esp += 4; return;
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
    /* 00850422: ret  */ FN_RET(0x00850015); r_esp += 4; return;
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
    /* 0085044f: ret  */ FN_RET(0x00850015); r_esp += 4; return;
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

void f_0085002d(void)
{
    FN_ENTER(0x0085002d);
    goto L_0085002d;
L_0085002a:; BB(0x0085002a);
    /* 0085002a: dec dword ptr [ebx + 0x55dd144b] */ { u32 ad = (u32)(r_ebx+0x55dd144bu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
L_0085002d:; BB(0x0085002d);
    /* 0085002d: adc al, 0xdd */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xddu; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0085002f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00850030: loopne 0x850065 */ r_ecx--; if (r_ecx && !fZ) goto L_00850065;
    /* 00850032: ror byte ptr [ecx + 0x45ddd045], 0xd0 */ { u32 ad = (u32)(r_ecx+0x45ddd045u); u32 c = (16u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
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
L_00850065:; BB(0x00850065);
    /* 00850065: add al, dh */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; }
    /* 00850067: jg 0x85002a */ if ((!fZ&&fS==fO)) goto L_0085002a;
    /* 00850068: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_00850069:; BB(0x00850069);
    /* 00850069: call 0x825b038d */ r_esp -= 4; W32(r_esp, 0x85006eu); f_825b038d();
    /* 0085006b: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085006d: cmp edx, 0x80800000 */ {  u32 a = r_edx; u32 b = 0x80800000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085006e: cli  */ UNSUP(0x0085006e, "cli ");
    /* 0085006f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00850071: add byte ptr [eax - 0x25229e8a], 0xdd */ { u32 ad = (u32)(r_eax+0xdadd6176u);  u32 a = R8(ad); u32 b = 0xddu; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00850073: jbe 0x8500d6 */ if ((fC||fZ)) goto L_008500d6;
L_00850075:; BB(0x00850075);
    /* 00850075: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00850077: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00850078: fcomp st(5) */ fx_compare(ST(0), ST(5)); FPOP();
    /* 00850079: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0085007a: fmul dword ptr [ebx + 0x5ddd8855] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x5ddd8855u));
    /* 0085007b: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0085007e: fstp qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 00850080: enter -0x2d7b, 0x74 */ { u32 f = 0xd285u; u32 lv = 20u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 00850081: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00850083: je 0x850088 */ if (fZ) goto L_00850088;
    /* 00850084: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00850085:; BB(0x00850085);
    /* 00850085: fldcw word ptr [ebp - 8] */ fcw = R16((u32)(r_ebp+0xfffffff8u));
    /* 00850086: insd dword ptr es:[edi], dx */ UNSUP(0x00850086, "insd dword ptr es:[edi], dx");
    /* 00850087: clc  */ fC = 0;
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
    /* 008500d5: ret  */ FN_RET(0x0085002d); r_esp += 4; return;
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
    /* 00850114: ret  */ FN_RET(0x0085002d); r_esp += 4; return;
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
    /* 00850215: ret  */ FN_RET(0x0085002d); r_esp += 4; return;
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
    /* 0085027f: ret  */ FN_RET(0x0085002d); r_esp += 4; return;
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
    /* 00850422: ret  */ FN_RET(0x0085002d); r_esp += 4; return;
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
    /* 0085044f: ret  */ FN_RET(0x0085002d); r_esp += 4; return;
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

void f_00850045(void)
{
    FN_ENTER(0x00850045);
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
    /* 008500d5: ret  */ FN_RET(0x00850045); r_esp += 4; return;
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
    /* 00850114: ret  */ FN_RET(0x00850045); r_esp += 4; return;
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
    /* 00850215: ret  */ FN_RET(0x00850045); r_esp += 4; return;
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
    /* 0085027f: ret  */ FN_RET(0x00850045); r_esp += 4; return;
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
    /* 00850422: ret  */ FN_RET(0x00850045); r_esp += 4; return;
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
    /* 0085044f: ret  */ FN_RET(0x00850045); r_esp += 4; return;
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

void f_00850084(void)
{
    FN_ENTER(0x00850084);
    /* 00850084: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00850086: insd dword ptr es:[edi], dx */ UNSUP(0x00850086, "insd dword ptr es:[edi], dx");
    /* 00850087: clc  */ fC = 0;
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
    /* 008500d5: ret  */ FN_RET(0x00850084); r_esp += 4; return;
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
}

void f_008508ec(void) /* sub_8508EC */
{
    FN_ENTER(0x008508ec);
    /* 008508ec: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008508ee: fld qword ptr [0x994dc0] */ FPUSH(R_F64((u32)(0x994dc0u)));
    /* 008508f4: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 008508f6: ret  */ FN_RET(0x008508ec); r_esp += 4; return;
}

void f_00850eb4(void) /* sub_850EB4 */
{
    FN_ENTER(0x00850eb4);
    /* 00850eb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00850eb5: mov ebx, esp */ r_ebx = r_esp;
    /* 00850eb7: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00850eba: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00850ec0: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00850ec3: mov eax, dword ptr [0xa237e4] */ r_eax = R32((u32)(0xa237e4u));
    /* 00850ec8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00850ecb: je 0x85666c */ if (fZ) goto L_0085666c;
L_00850ed1:; BB(0x00850ed1);
    /* 00850ed1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00850ed4: je 0x85783b */ if (fZ) goto L_0085783b;
L_00850eda:; BB(0x00850eda);
    /* 00850eda: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00850edd: je 0x856f00 */ if (fZ) goto L_00856f00;
L_00850ee3:; BB(0x00850ee3);
    /* 00850ee3: cmp edx, 0xe3 */ {  u32 a = r_edx; u32 b = 0xe3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00850ee9: ja 0x85666c */ if ((!fC&&!fZ)) goto L_0085666c;
L_00850eef:; BB(0x00850eef);
    /* 00850eef: mov edx, dword ptr [edx*4 + 0x995720] */ r_edx = R32((u32)(r_edx*4+0x995720u));
    /* 00850ef6: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00850eb4); r_esp += 4; return;
L_00856f00:; BB(0x00856f00);
    /* 00856f00: cmp edx, 0xe3 */ {  u32 a = r_edx; u32 b = 0xe3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00856f06: ja 0x857837 */ if ((!fC&&!fZ)) goto L_00857837;
L_00856f0c:; BB(0x00856f0c);
    /* 00856f0c: mov eax, dword ptr [edx*4 + 0x995380] */ r_eax = R32((u32)(r_edx*4+0x995380u));
    /* 00856f13: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00850eb4); r_esp += 4; return;
L_0085783b:; BB(0x0085783b);
    /* 0085783b: cmp edx, 0xfe */ {  u32 a = r_edx; u32 b = 0xfeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00857841: ja 0x85789e */ if ((!fC&&!fZ)) goto L_0085789e;
L_00857843:; BB(0x00857843);
    /* 00857843: mov eax, dword ptr [edx*4 + 0x994f80] */ r_eax = R32((u32)(r_edx*4+0x994f80u));
    /* 0085784a: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0085789e:; BB(0x0085789e);
    /* 0085789e: mov esp, ebx */ r_esp = r_ebx;
    /* 008578a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008578a1: ret  */ FN_RET(0x00850eb4); r_esp += 4; return;
}

void f_00850ef8(void)
{
    FN_ENTER(0x00850ef8);
    /* 00850ef8: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 00850efd: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00850f00: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00850f03: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 00850f0b: mov dword ptr [esp + 0x64], 0xb48104 */ W32((u32)(r_esp+0x64u), 0xb48104u);
    /* 00850f13: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00850f15: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00850f17: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00850f1b: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00850f1e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00850f20: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00850f24: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00850f27: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00850f29: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00850f2d: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00850f31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00850f32: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x850f38u); call_ind(t); }
    /* 00850f38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00850f39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00850f3b: jne 0x850f58 */ if (!fZ) goto L_00850f58;
L_00850f3d:; BB(0x00850f3d);
    /* 00850f3d: mov eax, dword ptr [0xa237e4] */ r_eax = R32((u32)(0xa237e4u));
    /* 00850f42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00850f44: jne 0x850f58 */ if (!fZ) goto L_00850f58;
L_00850f46:; BB(0x00850f46);
    /* 00850f46: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00850f4b: push 0xb4810c */ { u32 v = 0xb4810cu; r_esp -= 4; W32(r_esp, v); }
    /* 00850f50: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x850f55u); f_0085b5fd();
    /* 00850f55: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00850f58:; BB(0x00850f58);
    /* 00850f58: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x850f5du); f_00859dd6();
    /* 00850f5d: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00850f60: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00850f66: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00850f6a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00850f6c: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00850ef8); r_esp += 4; return;
}

void f_00850f71(void)
{
    FN_ENTER(0x00850f71);
    /* 00850f71: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 00850f77: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00850f7a: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00850f7d: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00850f80: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 00850f88: mov dword ptr [esp + 0x44], 0xb480e4 */ W32((u32)(r_esp+0x44u), 0xb480e4u);
    /* 00850f90: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00850f92: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00850f95: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00850f97: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00850f9b: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00850f9d: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00850fa1: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00850fa3: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00850fa7: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00850fab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00850fac: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x850fb2u); call_ind(t); }
    /* 00850fb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00850fb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00850fb5: jne 0x850fdd */ if (!fZ) goto L_00850fdd;
L_00850fb7:; BB(0x00850fb7);
    /* 00850fb7: mov eax, dword ptr [0xa237e4] */ r_eax = R32((u32)(0xa237e4u));
    /* 00850fbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00850fbe: jne 0x850fd2 */ if (!fZ) goto L_00850fd2;
L_00850fc0:; BB(0x00850fc0);
    /* 00850fc0: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00850fc5: push 0xb480ec */ { u32 v = 0xb480ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00850fca: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x850fcfu); f_0085b5fd();
    /* 00850fcf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00850fd2:; BB(0x00850fd2);
    /* 00850fd2: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x850fd7u); f_00859dd6();
    /* 00850fd7: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
L_00850fdd:; BB(0x00850fdd);
    /* 00850fdd: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00850fe1: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00850fe4: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00850fe6: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00850f71); r_esp += 4; return;
}

void f_00850feb(void)
{
    FN_ENTER(0x00850feb);
    /* 00850feb: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 00850ff1: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00850ff4: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00850ff7: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00850ffa: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 00851001: mov dword ptr [esp + 4], 0xb480c4 */ W32((u32)(r_esp+0x4u), 0xb480c4u);
    /* 00851009: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 0085100b: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085100e: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00851010: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00851014: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00851016: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0085101a: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 0085101c: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00851020: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00851023: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851024: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x85102au); call_ind(t); }
    /* 0085102a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085102b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085102d: jne 0x851055 */ if (!fZ) goto L_00851055;
L_0085102f:; BB(0x0085102f);
    /* 0085102f: mov eax, dword ptr [0xa237e4] */ r_eax = R32((u32)(0xa237e4u));
    /* 00851034: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851036: jne 0x85104a */ if (!fZ) goto L_0085104a;
L_00851038:; BB(0x00851038);
    /* 00851038: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 0085103d: push 0xb480cc */ { u32 v = 0xb480ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00851042: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x851047u); f_0085b5fd();
    /* 00851047: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0085104a:; BB(0x0085104a);
    /* 0085104a: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85104fu); f_00859dd6();
    /* 0085104f: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
L_00851055:; BB(0x00851055);
    /* 00851055: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00851059: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085105c: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 0085105e: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00850feb); r_esp += 4; return;
}

