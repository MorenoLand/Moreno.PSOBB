#include "protos.h"

void f_0058e074(void) /* sub_58E074 */
{
    FN_ENTER(0x0058e074);
    /* 0058e074: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058e075: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058e076: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058e077: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058e078: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058e07b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0058e07d: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0058e081: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e084: je 0x58e4a3 */ if (fZ) goto L_0058e4a3;
L_0058e08a:; BB(0x0058e08a);
    /* 0058e08a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e08d: je 0x58e3ca */ if (fZ) goto L_0058e3ca;
L_0058e093:; BB(0x0058e093);
    /* 0058e093: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e095: jne 0x58e35a */ if (!fZ) goto L_0058e35a;
L_0058e09b:; BB(0x0058e09b);
    /* 0058e09b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058e09d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58e0a2u); f_007aa094();
    /* 0058e0a2: push dword ptr [ebx + 0x398] */ { u32 v = R32((u32)(r_ebx+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058e0a8: add dword ptr [ebx + 0x40c], 1 */ { u32 ad = (u32)(r_ebx+0x40cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0058e0af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058e0b1: call 0x5212c8 */ r_esp -= 4; W32(r_esp, 0x58e0b6u); f_005212c8();
    /* 0058e0b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e0b8: je 0x58e0df */ if (fZ) goto L_0058e0df;
L_0058e0ba:; BB(0x0058e0ba);
    /* 0058e0ba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058e0bc: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x58e0c1u); f_007ba980();
    /* 0058e0c1: mov ebp, eax */ r_ebp = r_eax;
    /* 0058e0c3: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 0058e0c9: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x58e0ceu); f_007ba980();
    /* 0058e0ce: movsx edx, bp */ r_edx = (u32)(i32)(i16)(u16)r_ebp;
    /* 0058e0d1: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0058e0d4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e0d6: jne 0x58e0df */ if (!fZ) goto L_0058e0df;
L_0058e0d8:; BB(0x0058e0d8);
    /* 0058e0d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058e0da: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x58e0dfu); f_005213d8();
L_0058e0df:; BB(0x0058e0df);
    /* 0058e0df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058e0e1: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x58e0e6u); f_00521410();
    /* 0058e0e6: push dword ptr [ebx + 0x414] */ { u32 v = R32((u32)(r_ebx+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058e0ec: lea edx, [ebx + 0x3a8] */ r_edx = (u32)(r_ebx+0x3a8u);
    /* 0058e0f2: lea eax, [ebx + 0x3b0] */ r_eax = (u32)(r_ebx+0x3b0u);
    /* 0058e0f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e0f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058e0fa: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x58e0ffu); f_00782b64();
    /* 0058e0ff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e102: fld dword ptr [0xa7442c] */ FPUSH(R_F32((u32)(0xa7442cu)));
    /* 0058e108: fld dword ptr [ebx + 0x3b4] */ FPUSH(R_F32((u32)(r_ebx+0x3b4u)));
    /* 0058e10e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0058e110: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058e112: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058e113: jbe 0x58e12c */ if ((fC||fZ)) goto L_0058e12c;
L_0058e115:; BB(0x0058e115);
    /* 0058e115: fld dword ptr [0x928cb8] */ FPUSH(R_F32((u32)(0x928cb8u)));
    /* 0058e11b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0058e11d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0058e11f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058e121: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058e122: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058e124: jae 0x58e128 */ if (!fC) goto L_0058e128;
L_0058e126:; BB(0x0058e126);
    /* 0058e126: fst st(1) */ ST(1) = ST(0);
L_0058e128:; BB(0x0058e128);
    /* 0058e128: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058e12a: jmp 0x58e148 */ goto L_0058e148;
L_0058e12c:; BB(0x0058e12c);
    /* 0058e12c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0058e12e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058e130: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058e131: jae 0x58e148 */ if (!fC) goto L_0058e148;
L_0058e133:; BB(0x0058e133);
    /* 0058e133: fld dword ptr [0x928cb8] */ FPUSH(R_F32((u32)(0x928cb8u)));
    /* 0058e139: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0058e13b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0058e13d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058e13f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058e140: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058e142: jbe 0x58e146 */ if ((fC||fZ)) goto L_0058e146;
L_0058e144:; BB(0x0058e144);
    /* 0058e144: fst st(1) */ ST(1) = ST(0);
L_0058e146:; BB(0x0058e146);
    /* 0058e146: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0058e148:; BB(0x0058e148);
    /* 0058e148: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0058e14a: fmul dword ptr [ebx + 0x418] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x418u));
    /* 0058e150: fld dword ptr [0x928cc8] */ FPUSH(R_F32((u32)(0x928cc8u)));
    /* 0058e156: fadd dword ptr [ebx + 0x3a0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3a0u));
    /* 0058e15c: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 0058e15f: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 0058e162: mov ebp, dword ptr [ebx + 0x300] */ r_ebp = R32((u32)(r_ebx+0x300u));
    /* 0058e168: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 0058e16e: mov edx, dword ptr [ebx + 0x3a0] */ r_edx = R32((u32)(r_ebx+0x3a0u));
    /* 0058e174: fld dword ptr [ebx + 0x3a8] */ FPUSH(R_F32((u32)(r_ebx+0x3a8u)));
    /* 0058e17a: fld dword ptr [ebx + 0x3b0] */ FPUSH(R_F32((u32)(r_ebx+0x3b0u)));
    /* 0058e180: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 0058e184: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 0058e187: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 0058e18b: mov ebp, dword ptr [ebx + 0x304] */ r_ebp = R32((u32)(r_ebx+0x304u));
    /* 0058e191: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0058e193: fstp dword ptr [ebx + 0x304] */ W_F32((u32)(r_ebx+0x304u), ST(0)); FPOP();
    /* 0058e199: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0058e19d: mov eax, dword ptr [ebx + 0x39c] */ r_eax = R32((u32)(r_ebx+0x39cu));
    /* 0058e1a3: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0058e1a6: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 0058e1a9: mov edx, dword ptr [ebx + 0x3a4] */ r_edx = R32((u32)(r_ebx+0x3a4u));
    /* 0058e1af: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 0058e1b2: mov dword ptr [ebx + 0x300], eax */ W32((u32)(r_ebx+0x300u), r_eax);
    /* 0058e1b8: mov dword ptr [ebx + 0x308], edx */ W32((u32)(r_ebx+0x308u), r_edx);
    /* 0058e1be: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e1c1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0058e1c3: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0058e1c7: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0058e1cb: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058e1ce: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058e1d0: fchs  */ ST(0) = -ST(0);
    /* 0058e1d2: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058e1d6: fchs  */ ST(0) = -ST(0);
    /* 0058e1d8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0058e1dc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058e1de: call 0x520a04 */ r_esp -= 4; W32(r_esp, 0x58e1e3u); f_00520a04();
    /* 0058e1e3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0058e1e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e1e7: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0058e1e9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058e1eb: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x58e1eeu); call_ind(t); }
    /* 0058e1ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e1f0: jne 0x58e22d */ if (!fZ) goto L_0058e22d;
L_0058e1f2:; BB(0x0058e1f2);
    /* 0058e1f2: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0058e1f6: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0058e1fa: fld dword ptr [ebx + 0x418] */ FPUSH(R_F32((u32)(r_ebx+0x418u)));
    /* 0058e200: fmul dword ptr [0x928cc0] */ ST(0) = ST(0) * R_F32((u32)(0x928cc0u));
    /* 0058e206: fstp dword ptr [ebx + 0x418] */ W_F32((u32)(r_ebx+0x418u), ST(0)); FPOP();
    /* 0058e20c: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0058e20f: mov dword ptr [ebx + 0x3c], edi */ W32((u32)(r_ebx+0x3cu), r_edi);
    /* 0058e212: mov dword ptr [ebx + 0x40], esi */ W32((u32)(r_ebx+0x40u), r_esi);
    /* 0058e215: mov dword ptr [ebx + 0x300], edx */ W32((u32)(r_ebx+0x300u), r_edx);
    /* 0058e21b: mov dword ptr [ebx + 0x304], ebp */ W32((u32)(r_ebx+0x304u), r_ebp);
    /* 0058e221: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 0058e225: mov dword ptr [ebx + 0x308], ebp */ W32((u32)(r_ebx+0x308u), r_ebp);
    /* 0058e22b: jmp 0x58e290 */ goto L_0058e290;
L_0058e22d:; BB(0x0058e22d);
    /* 0058e22d: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0058e231: mov dword ptr [ebx + 0x418], 0x3f800000 */ W32((u32)(r_ebx+0x418u), 0x3f800000u);
    /* 0058e23b: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0058e23e: mov dword ptr [ebx + 0x3c], edi */ W32((u32)(r_ebx+0x3cu), r_edi);
    /* 0058e241: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0058e244: mov dword ptr [ebx + 0x40], esi */ W32((u32)(r_ebx+0x40u), r_esi);
    /* 0058e247: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0058e24b: mov dword ptr [ebx + 0x300], esi */ W32((u32)(r_ebx+0x300u), r_esi);
    /* 0058e251: mov dword ptr [ebx + 0x304], ebp */ W32((u32)(r_ebx+0x304u), r_ebp);
    /* 0058e257: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0058e25a: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 0058e25e: mov dword ptr [ebx + 0x308], ebp */ W32((u32)(r_ebx+0x308u), r_ebp);
    /* 0058e264: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x58e269u); f_0082f9c4();
    /* 0058e269: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0058e26c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e26d: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x58e272u); f_007828e4();
    /* 0058e272: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058e273: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e276: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0058e27a: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0058e27e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0058e282: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058e284: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058e287: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0058e28b: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x58e290u); f_005209d4();
L_0058e290:; BB(0x0058e290);
    /* 0058e290: fld dword ptr [ebx + 0x3a8] */ FPUSH(R_F32((u32)(r_ebx+0x3a8u)));
    /* 0058e296: fld dword ptr [ebx + 0x3b0] */ FPUSH(R_F32((u32)(r_ebx+0x3b0u)));
    /* 0058e29c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0058e29e: fmul qword ptr [0x928b60] */ ST(0) = ST(0) * R_F64((u32)(0x928b60u));
    /* 0058e2a4: fdiv qword ptr [0x928b58] */ ST(0) = ST(0) / R_F64((u32)(0x928b58u));
    /* 0058e2aa: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0058e2ae: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0058e2b3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058e2b8: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0058e2bc: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0058e2c0: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0058e2c4: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0058e2c8: mov eax, dword ptr [ebx + 0x414] */ r_eax = R32((u32)(r_ebx+0x414u));
    /* 0058e2ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e2d0: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0058e2d4: mov dword ptr [ebx + 0x60], edx */ W32((u32)(r_ebx+0x60u), r_edx);
    /* 0058e2d7: je 0x58e346 */ if (fZ) goto L_0058e346;
L_0058e2d9:; BB(0x0058e2d9);
    /* 0058e2d9: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0058e2e1: mov eax, dword ptr [ebx + 0x414] */ r_eax = R32((u32)(r_ebx+0x414u));
    /* 0058e2e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0058e2e9: jle 0x58e481 */ if ((fZ||fS!=fO)) goto L_0058e481;
L_0058e2ef:; BB(0x0058e2ef);
    /* 0058e2ef: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
L_0058e2f3:; BB(0x0058e2f3);
    /* 0058e2f3: mov dword ptr [esp + 0x14], 0xffffc000 */ W32((u32)(r_esp+0x14u), 0xffffc000u);
    /* 0058e2fb: mov ecx, dword ptr [ebx + 0x42c] */ r_ecx = R32((u32)(r_ebx+0x42cu));
    /* 0058e301: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e303: je 0x58e449 */ if (fZ) goto L_0058e449;
L_0058e309:; BB(0x0058e309);
    /* 0058e309: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0058e30d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e30e: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x58e313u); f_00508dd0();
    /* 0058e313: mov ecx, dword ptr [ebx + 0x42c] */ r_ecx = R32((u32)(r_ebx+0x42cu));
    /* 0058e319: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0058e31c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058e31d: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x58e322u); f_00508db8();
L_0058e322:; BB(0x0058e322);
    /* 0058e322: mov ecx, dword ptr [ebx + 0x430] */ r_ecx = R32((u32)(r_ebx+0x430u));
    /* 0058e328: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e32a: je 0x58e414 */ if (fZ) goto L_0058e414;
L_0058e330:; BB(0x0058e330);
    /* 0058e330: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0058e334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e335: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x58e33au); f_00508dd0();
    /* 0058e33a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058e33b: mov ecx, dword ptr [ebx + 0x430] */ r_ecx = R32((u32)(r_ebx+0x430u));
    /* 0058e341: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x58e346u); f_00508db8();
L_0058e346:; BB(0x0058e346);
    /* 0058e346: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058e348: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058e34a: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x58e350u); call_ind(t); }
    /* 0058e350: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058e353: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058e354: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058e355: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058e356: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058e357: ret 4 */ FN_RET(0x0058e074); r_esp += 8; return;
L_0058e35a:; BB(0x0058e35a);
    /* 0058e35a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e35d: jne 0x58e40a */ if (!fZ) goto L_0058e40a;
L_0058e363:; BB(0x0058e363);
    /* 0058e363: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058e365: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058e367: call dword ptr [eax + 0x17c] */ { u32 t = R32((u32)(r_eax+0x17cu)); r_esp -= 4; W32(r_esp, 0x58e36du); call_ind(t); }
    /* 0058e36d: mov edx, dword ptr [ebx + 0x42c] */ r_edx = R32((u32)(r_ebx+0x42cu));
    /* 0058e373: mov dword ptr [ebx + 0x384], 0x41200000 */ W32((u32)(r_ebx+0x384u), 0x41200000u);
    /* 0058e37d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e37f: je 0x58e398 */ if (fZ) goto L_0058e398;
L_0058e381:; BB(0x0058e381);
    /* 0058e381: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0058e385: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058e38a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0058e38e: mov dword ptr [ebx + 0x42c], 0 */ W32((u32)(r_ebx+0x42cu), 0x0u);
L_0058e398:; BB(0x0058e398);
    /* 0058e398: mov edx, dword ptr [ebx + 0x430] */ r_edx = R32((u32)(r_ebx+0x430u));
    /* 0058e39e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e3a0: je 0x58e3b9 */ if (fZ) goto L_0058e3b9;
L_0058e3a2:; BB(0x0058e3a2);
    /* 0058e3a2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0058e3a6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058e3ab: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0058e3af: mov dword ptr [ebx + 0x430], 0 */ W32((u32)(r_ebx+0x430u), 0x0u);
L_0058e3b9:; BB(0x0058e3b9);
    /* 0058e3b9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058e3bb: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x58e3c0u); f_00520be8();
    /* 0058e3c0: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058e3c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058e3c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058e3c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058e3c6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058e3c7: ret 4 */ FN_RET(0x0058e074); r_esp += 8; return;
L_0058e3ca:; BB(0x0058e3ca);
    /* 0058e3ca: mov eax, dword ptr [ebx + 0x40c] */ r_eax = R32((u32)(r_ebx+0x40cu));
    /* 0058e3d0: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058e3d3: jl 0x58e40a */ if ((fS!=fO)) goto L_0058e40a;
L_0058e3d5:; BB(0x0058e3d5);
    /* 0058e3d5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058e3d7: call 0x58e570 */ r_esp -= 4; W32(r_esp, 0x58e3dcu); f_0058e570();
    /* 0058e3dc: push dword ptr [0xa74430] */ { u32 v = R32((u32)(0xa74430u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058e3e2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058e3e4: call 0x51fabc */ r_esp -= 4; W32(r_esp, 0x58e3e9u); f_0051fabc();
    /* 0058e3e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0058e3eb: jle 0x58e490 */ if ((fZ||fS!=fO)) goto L_0058e490;
L_0058e3f1:; BB(0x0058e3f1);
    /* 0058e3f1: movzx eax, word ptr [eax*8 + 0xa72e88] */ r_eax = (u32)R16((u32)(r_eax*8+0xa72e88u));
    /* 0058e3f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e3fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058e3fc: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x58e401u); f_00520fcc();
    /* 0058e401: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e403: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058e405: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58e40au); f_0051f62c();
L_0058e40a:; BB(0x0058e40a);
    /* 0058e40a: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058e40d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058e40e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058e40f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058e410: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058e411: ret 4 */ FN_RET(0x0058e074); r_esp += 8; return;
L_0058e414:; BB(0x0058e414);
    /* 0058e414: push 0x116 */ { u32 v = 0x116u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e419: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058e41a: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x58e41fu); f_00509590();
    /* 0058e41f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e422: mov dword ptr [ebx + 0x430], eax */ W32((u32)(r_ebx+0x430u), r_eax);
    /* 0058e428: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e42a: je 0x58e346 */ if (fZ) goto L_0058e346;
L_0058e430:; BB(0x0058e430);
    /* 0058e430: mov ecx, eax */ r_ecx = r_eax;
    /* 0058e432: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x58e437u); f_00508f48();
    /* 0058e437: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e439: mov ecx, dword ptr [ebx + 0x430] */ r_ecx = R32((u32)(r_ebx+0x430u));
    /* 0058e43f: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x58e444u); f_00508efc();
    /* 0058e444: jmp 0x58e346 */ goto L_0058e346;
L_0058e449:; BB(0x0058e449);
    /* 0058e449: push 0x115 */ { u32 v = 0x115u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e44e: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0058e451: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058e452: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x58e457u); f_00509590();
    /* 0058e457: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e45a: mov dword ptr [ebx + 0x42c], eax */ W32((u32)(r_ebx+0x42cu), r_eax);
    /* 0058e460: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e462: je 0x58e322 */ if (fZ) goto L_0058e322;
L_0058e468:; BB(0x0058e468);
    /* 0058e468: mov ecx, eax */ r_ecx = r_eax;
    /* 0058e46a: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x58e46fu); f_00508f48();
    /* 0058e46f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e471: mov ecx, dword ptr [ebx + 0x42c] */ r_ecx = R32((u32)(r_ebx+0x42cu));
    /* 0058e477: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x58e47cu); f_00508efc();
    /* 0058e47c: jmp 0x58e322 */ goto L_0058e322;
L_0058e481:; BB(0x0058e481);
    /* 0058e481: add edx, 0xffff8000 */ {  u32 a = r_edx; u32 b = 0xffff8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058e487: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0058e48b: jmp 0x58e2f3 */ goto L_0058e2f3;
L_0058e490:; BB(0x0058e490);
    /* 0058e490: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0058e492: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058e494: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58e499u); f_0051f62c();
    /* 0058e499: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058e49c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058e49d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058e49e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058e49f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058e4a0: ret 4 */ FN_RET(0x0058e074); r_esp += 8; return;
L_0058e4a3:; BB(0x0058e4a3);
    /* 0058e4a3: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 0058e4a9: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0058e4ab: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058e4ae: mov dword ptr [ebx + 0x3cc], eax */ W32((u32)(r_ebx+0x3ccu), r_eax);
    /* 0058e4b4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058e4b6: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x58e4bcu); call_ind(t); }
    /* 0058e4bc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058e4be: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058e4c0: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x58e4c6u); call_ind(t); }
    /* 0058e4c6: fld qword ptr [0x928b50] */ FPUSH(R_F64((u32)(0x928b50u)));
    /* 0058e4cc: mov esi, dword ptr [ebx + 0x3dc] */ r_esi = R32((u32)(r_ebx+0x3dcu));
    /* 0058e4d2: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0058e4d6: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0058e4db: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058e4e0: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058e4e5: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0058e4e9: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0058e4ed: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0058e4f1: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0058e4f5: sub esi, dword ptr [esp + 0x28] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0058e4f9: imul edi, esi, 0x3333 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x3333u; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058e4ff: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0058e504: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058e506: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0058e509: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0058e50b: mov dword ptr [ebx + 0x418], 0x3f800000 */ W32((u32)(r_ebx+0x418u), 0x3f800000u);
    /* 0058e515: mov dword ptr [ebx + 0x40c], ebp */ W32((u32)(r_ebx+0x40cu), r_ebp);
    /* 0058e51b: mov dword ptr [ebx + 0x410], ebp */ W32((u32)(r_ebx+0x410u), r_ebp);
    /* 0058e521: mov dword ptr [ebx + 0x384], 0x41f00000 */ W32((u32)(r_ebx+0x384u), 0x41f00000u);
    /* 0058e52b: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0058e52e: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0058e531: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0058e533: mov dword ptr [ebx + 0x414], edx */ W32((u32)(r_ebx+0x414u), r_edx);
    /* 0058e539: mov dword ptr [ebx + 0x420], eax */ W32((u32)(r_ebx+0x420u), r_eax);
    /* 0058e53f: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 0058e542: mov dword ptr [ebx + 0x424], eax */ W32((u32)(r_ebx+0x424u), r_eax);
    /* 0058e548: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0058e54b: mov dword ptr [ebx + 0x428], eax */ W32((u32)(r_ebx+0x428u), r_eax);
    /* 0058e551: mov dword ptr [ebx + 0x42c], ebp */ W32((u32)(r_ebx+0x42cu), r_ebp);
    /* 0058e557: mov dword ptr [ebx + 0x430], ebp */ W32((u32)(r_ebx+0x430u), r_ebp);
    /* 0058e55d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058e55f: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x58e564u); f_00520bdc();
    /* 0058e564: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058e567: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058e568: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058e569: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058e56a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058e56b: ret 4 */ FN_RET(0x0058e074); r_esp += 8; return;
}

void f_0058e570(void) /* sub_58E570 */
{
    FN_ENTER(0x0058e570);
    /* 0058e570: mov eax, dword ptr [ecx + 0x3cc] */ r_eax = R32((u32)(r_ecx+0x3ccu));
    /* 0058e576: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058e579: mov dword ptr [ecx + 0x3cc], eax */ W32((u32)(r_ecx+0x3ccu), r_eax);
    /* 0058e57f: movsx eax, word ptr [ecx + 0x3e4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x3e4u));
    /* 0058e586: lea edx, [eax] */ r_edx = (u32)(r_eax);
    /* 0058e588: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0058e58b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0058e58d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0058e58f: mov word ptr [ecx + 0x2d0], ax */ W16((u32)(r_ecx+0x2d0u), (u16)r_eax);
    /* 0058e596: ret  */ FN_RET(0x0058e570); r_esp += 4; return;
}

void f_0058e598(void) /* sub_58E598 */
{
    FN_ENTER(0x0058e598);
    /* 0058e598: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058e599: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058e59a: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058e59d: mov esi, ecx */ r_esi = r_ecx;
    /* 0058e59f: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0058e5a3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e5a6: je 0x58e7e6 */ if (fZ) goto L_0058e7e6;
L_0058e5ac:; BB(0x0058e5ac);
    /* 0058e5ac: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e5af: je 0x58e72d */ if (fZ) goto L_0058e72d;
L_0058e5b5:; BB(0x0058e5b5);
    /* 0058e5b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e5b7: jne 0x58e70f */ if (!fZ) goto L_0058e70f;
L_0058e5bd:; BB(0x0058e5bd);
    /* 0058e5bd: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e5bf: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58e5c4u); f_007aa094();
    /* 0058e5c4: mov eax, dword ptr [esi + 0x40c] */ r_eax = R32((u32)(r_esi+0x40cu));
    /* 0058e5ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e5cc: je 0x58e692 */ if (fZ) goto L_0058e692;
L_0058e5d2:; BB(0x0058e5d2);
    /* 0058e5d2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e5d5: jne 0x58e659 */ if (!fZ) goto L_0058e659;
L_0058e5db:; BB(0x0058e5db);
    /* 0058e5db: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 0058e5e1: fadd dword ptr [esi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xc8u));
    /* 0058e5e7: fcomp dword ptr [0x928ca8] */ fx_compare(ST(0), R_F32((u32)(0x928ca8u))); FPOP();
    /* 0058e5ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058e5ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058e5f0: jb 0x58e62e */ if (fC) goto L_0058e62e;
L_0058e5f2:; BB(0x0058e5f2);
    /* 0058e5f2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058e5f4: mov dword ptr [esi + 0x40c], 2 */ W32((u32)(r_esi+0x40cu), 0x2u);
    /* 0058e5fe: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e600: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x58e606u); call_ind(t); }
    /* 0058e606: push 0x137 */ { u32 v = 0x137u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e60b: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e60d: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x58e612u); f_007879b8();
    /* 0058e612: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0058e615: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058e617: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058e618: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058e619: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058e61a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e61b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x58e620u); f_00814298();
    /* 0058e620: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e625: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058e626: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x58e62bu); f_0050b510();
    /* 0058e62b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058e62e:; BB(0x0058e62e);
    /* 0058e62e: push dword ptr [esi + 0x418] */ { u32 v = R32((u32)(r_esi+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058e634: push dword ptr [esi + 0x3b0] */ { u32 v = R32((u32)(r_esi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058e63a: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e63c: push dword ptr [esi + 0x3a8] */ { u32 v = R32((u32)(r_esi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058e642: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x58e647u); f_005209d4();
    /* 0058e647: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058e649: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e64b: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x58e651u); call_ind(t); }
    /* 0058e651: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058e654: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058e655: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058e656: ret 4 */ FN_RET(0x0058e598); r_esp += 8; return;
L_0058e659:; BB(0x0058e659);
    /* 0058e659: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e65c: jne 0x58e738 */ if (!fZ) goto L_0058e738;
L_0058e662:; BB(0x0058e662);
    /* 0058e662: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0058e668: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058e66a: je 0x58e676 */ if (fZ) goto L_0058e676;
L_0058e66c:; BB(0x0058e66c);
    /* 0058e66c: mov dword ptr [esi + 0x40c], 3 */ W32((u32)(r_esi+0x40cu), 0x3u);
L_0058e676:; BB(0x0058e676);
    /* 0058e676: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058e678: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e67a: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x58e680u); call_ind(t); }
    /* 0058e680: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058e682: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e684: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x58e68au); call_ind(t); }
    /* 0058e68a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058e68d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058e68e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058e68f: ret 4 */ FN_RET(0x0058e598); r_esp += 8; return;
L_0058e692:; BB(0x0058e692);
    /* 0058e692: push 0x31c7 */ { u32 v = 0x31c7u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e697: push dword ptr [esi + 0x414] */ { u32 v = R32((u32)(r_esi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058e69d: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058e6a0: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x58e6a5u); f_007a8c74();
    /* 0058e6a5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e6a8: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 0058e6ae: fadd dword ptr [esi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xc8u));
    /* 0058e6b4: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 0058e6b7: fcomp dword ptr [0x928ca4] */ fx_compare(ST(0), R_F32((u32)(0x928ca4u))); FPOP();
    /* 0058e6bd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058e6bf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058e6c0: jb 0x58e6f3 */ if (fC) goto L_0058e6f3;
L_0058e6c2:; BB(0x0058e6c2);
    /* 0058e6c2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058e6c4: mov dword ptr [esi + 0x40c], 1 */ W32((u32)(r_esi+0x40cu), 0x1u);
    /* 0058e6ce: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e6d0: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x58e6d6u); call_ind(t); }
    /* 0058e6d6: push 0x136 */ { u32 v = 0x136u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e6db: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e6dd: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x58e6e2u); f_007879b8();
    /* 0058e6e2: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0058e6e5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058e6e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058e6e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058e6e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058e6ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e6eb: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x58e6f0u); f_00814298();
    /* 0058e6f0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058e6f3:; BB(0x0058e6f3);
    /* 0058e6f3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058e6f5: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e6f7: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x58e6fdu); call_ind(t); }
    /* 0058e6fd: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058e6ff: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e701: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x58e707u); call_ind(t); }
    /* 0058e707: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058e70a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058e70b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058e70c: ret 4 */ FN_RET(0x0058e598); r_esp += 8; return;
L_0058e70f:; BB(0x0058e70f);
    /* 0058e70f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e712: jne 0x58e738 */ if (!fZ) goto L_0058e738;
L_0058e714:; BB(0x0058e714);
    /* 0058e714: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058e716: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e718: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x58e71eu); call_ind(t); }
    /* 0058e71e: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e720: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x58e725u); f_00520be8();
    /* 0058e725: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058e728: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058e729: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058e72a: ret 4 */ FN_RET(0x0058e598); r_esp += 8; return;
L_0058e72d:; BB(0x0058e72d);
    /* 0058e72d: mov eax, dword ptr [esi + 0x40c] */ r_eax = R32((u32)(r_esi+0x40cu));
    /* 0058e733: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e736: je 0x58e740 */ if (fZ) goto L_0058e740;
L_0058e738:; BB(0x0058e738);
    /* 0058e738: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058e73b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058e73c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058e73d: ret 4 */ FN_RET(0x0058e598); r_esp += 8; return;
L_0058e740:; BB(0x0058e740);
    /* 0058e740: fld dword ptr [0x928cb4] */ FPUSH(R_F32((u32)(0x928cb4u)));
    /* 0058e746: fcom dword ptr [esi + 0x360] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x360u))); 
    /* 0058e74c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058e74e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058e74f: ja 0x58e764 */ if ((!fC&&!fZ)) goto L_0058e764;
L_0058e751:; BB(0x0058e751);
    /* 0058e751: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058e753: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0058e755: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e757: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58e75cu); f_0051f62c();
    /* 0058e75c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058e75f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058e760: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058e761: ret 4 */ FN_RET(0x0058e598); r_esp += 8; return;
L_0058e764:; BB(0x0058e764);
    /* 0058e764: mov edx, dword ptr [esi + 0x3cc] */ r_edx = R32((u32)(r_esi+0x3ccu));
    /* 0058e76a: test edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e770: jne 0x58e79c */ if (!fZ) goto L_0058e79c;
L_0058e772:; BB(0x0058e772);
    /* 0058e772: fcom dword ptr [esi + 0x35c] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x35cu))); 
    /* 0058e778: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058e77a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058e77b: jbe 0x58e79c */ if ((fC||fZ)) goto L_0058e79c;
L_0058e77d:; BB(0x0058e77d);
    /* 0058e77d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058e77f: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0058e785: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0058e787: mov dword ptr [esi + 0x3cc], edx */ W32((u32)(r_esi+0x3ccu), r_edx);
    /* 0058e78d: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e78f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58e794u); f_0051f62c();
    /* 0058e794: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058e797: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058e798: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058e799: ret 4 */ FN_RET(0x0058e598); r_esp += 8; return;
L_0058e79c:; BB(0x0058e79c);
    /* 0058e79c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058e79e: and edx, 0xfffcffff */ {  u32 a = r_edx; u32 b = 0xfffcffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0058e7a4: mov dword ptr [esi + 0x3cc], edx */ W32((u32)(r_esi+0x3ccu), r_edx);
    /* 0058e7aa: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x58e7afu); f_00520e6c();
    /* 0058e7af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e7b1: je 0x58e7c4 */ if (fZ) goto L_0058e7c4;
L_0058e7b3:; BB(0x0058e7b3);
    /* 0058e7b3: fld dword ptr [esi + 0x35c] */ FPUSH(R_F32((u32)(r_esi+0x35cu)));
    /* 0058e7b9: fcomp dword ptr [0x928cb4] */ fx_compare(ST(0), R_F32((u32)(0x928cb4u))); FPOP();
    /* 0058e7bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058e7c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058e7c2: jae 0x58e7d5 */ if (!fC) goto L_0058e7d5;
L_0058e7c4:; BB(0x0058e7c4);
    /* 0058e7c4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e7c6: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e7c8: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58e7cdu); f_0051f62c();
    /* 0058e7cd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058e7d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058e7d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058e7d2: ret 4 */ FN_RET(0x0058e598); r_esp += 8; return;
L_0058e7d5:; BB(0x0058e7d5);
    /* 0058e7d5: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e7d7: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e7d9: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58e7deu); f_0051f62c();
    /* 0058e7de: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058e7e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058e7e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058e7e3: ret 4 */ FN_RET(0x0058e598); r_esp += 8; return;
L_0058e7e6:; BB(0x0058e7e6);
    /* 0058e7e6: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e7e8: mov eax, 2 */ r_eax = 0x2u;
    /* 0058e7ed: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0058e7f4: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e7f6: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x58e7fbu); f_0051f664();
    /* 0058e7fb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058e7fd: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e7ff: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x58e805u); call_ind(t); }
    /* 0058e805: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 0058e80b: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0058e80d: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e812: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058e815: mov dword ptr [esi + 0x3e0], 0 */ W32((u32)(r_esi+0x3e0u), 0x0u);
    /* 0058e81f: mov dword ptr [esi + 0x3cc], eax */ W32((u32)(r_esi+0x3ccu), r_eax);
    /* 0058e825: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e827: mov dword ptr [esi + 0x40c], 3 */ W32((u32)(r_esi+0x40cu), 0x3u);
    /* 0058e831: call dword ptr [edx + 0x1a8] */ { u32 t = R32((u32)(r_edx+0x1a8u)); r_esp -= 4; W32(r_esp, 0x58e837u); call_ind(t); }
    /* 0058e837: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e839: je 0x58e8de */ if (fZ) goto L_0058e8de;
L_0058e83f:; BB(0x0058e83f);
    /* 0058e83f: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e841: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x58e846u); f_005213d8();
    /* 0058e846: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e848: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x58e84du); f_00521410();
    /* 0058e84d: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 0058e853: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 0058e859: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0058e85b: fmul qword ptr [0x928b48] */ ST(0) = ST(0) * R_F64((u32)(0x928b48u));
    /* 0058e861: fdiv qword ptr [0x928b40] */ ST(0) = ST(0) / R_F64((u32)(0x928b40u));
    /* 0058e867: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0058e86a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0058e86e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058e873: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0058e877: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0058e87b: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0058e87f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0058e882: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e884: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0058e888: mov dword ptr [esi + 0x414], eax */ W32((u32)(r_esi+0x414u), r_eax);
    /* 0058e88e: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058e893: push 0x42a00000 */ { u32 v = 0x42a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e898: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e899: call 0x58d120 */ r_esp -= 4; W32(r_esp, 0x58e89eu); f_0058d120();
    /* 0058e89e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e8a0: jne 0x58e8de */ if (!fZ) goto L_0058e8de;
L_0058e8a2:; BB(0x0058e8a2);
    /* 0058e8a2: fld dword ptr [0x928ca0] */ FPUSH(R_F32((u32)(0x928ca0u)));
    /* 0058e8a8: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 0058e8ae: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 0058e8b4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058e8b6: fchs  */ ST(0) = -ST(0);
    /* 0058e8b8: fstp dword ptr [esi + 0x3a8] */ W_F32((u32)(r_esi+0x3a8u), ST(0)); FPOP();
    /* 0058e8be: mov dword ptr [esi + 0x40c], 0 */ W32((u32)(r_esi+0x40cu), 0x0u);
    /* 0058e8c8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058e8ca: fdiv dword ptr [0xa74434] */ ST(0) = ST(0) / R_F32((u32)(0xa74434u));
    /* 0058e8d0: fstp dword ptr [esi + 0x418] */ W_F32((u32)(r_esi+0x418u), ST(0)); FPOP();
    /* 0058e8d6: fchs  */ ST(0) = -ST(0);
    /* 0058e8d8: fstp dword ptr [esi + 0x3b0] */ W_F32((u32)(r_esi+0x3b0u), ST(0)); FPOP();
L_0058e8de:; BB(0x0058e8de);
    /* 0058e8de: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e8e0: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x58e8e5u); f_00520bdc();
    /* 0058e8e5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058e8e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058e8e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058e8ea: ret 4 */ FN_RET(0x0058e598); r_esp += 8; return;
}

void f_0058e8f0(void) /* sub_58E8F0 */
{
    FN_ENTER(0x0058e8f0);
    /* 0058e8f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058e8f1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058e8f4: mov esi, ecx */ r_esi = r_ecx;
    /* 0058e8f6: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0058e8fa: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e8fd: je 0x58eab8 */ if (fZ) goto L_0058eab8;
L_0058e903:; BB(0x0058e903);
    /* 0058e903: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e906: je 0x58ea9d */ if (fZ) goto L_0058ea9d;
L_0058e90c:; BB(0x0058e90c);
    /* 0058e90c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e90e: jne 0x58eab1 */ if (!fZ) goto L_0058eab1;
L_0058e914:; BB(0x0058e914);
    /* 0058e914: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e916: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58e91bu); f_007aa094();
    /* 0058e91b: mov eax, dword ptr [esi + 0x40c] */ r_eax = R32((u32)(r_esi+0x40cu));
    /* 0058e921: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e923: jne 0x58ea52 */ if (!fZ) goto L_0058ea52;
L_0058e929:; BB(0x0058e929);
    /* 0058e929: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058e92b: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e92d: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x58e933u); call_ind(t); }
    /* 0058e933: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 0058e939: fcomp dword ptr [0x928c9c] */ fx_compare(ST(0), R_F32((u32)(0x928c9cu))); FPOP();
    /* 0058e93f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058e941: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058e942: jae 0x58e9d1 */ if (!fC) goto L_0058e9d1;
L_0058e948:; BB(0x0058e948);
    /* 0058e948: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e94a: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x58e94fu); f_00521238();
    /* 0058e94f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058e951: jne 0x58e95a */ if (!fZ) goto L_0058e95a;
L_0058e953:; BB(0x0058e953);
    /* 0058e953: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0058e956: mov eax, edx */ r_eax = r_edx;
    /* 0058e958: jmp 0x58e9a4 */ goto L_0058e9a4;
L_0058e95a:; BB(0x0058e95a);
    /* 0058e95a: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e95c: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x58e961u); f_005213d8();
    /* 0058e961: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e963: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x58e968u); f_00521410();
    /* 0058e968: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 0058e96e: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 0058e974: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0058e976: fmul qword ptr [0x928b38] */ ST(0) = ST(0) * R_F64((u32)(0x928b38u));
    /* 0058e97c: fdiv qword ptr [0x928b30] */ ST(0) = ST(0) / R_F64((u32)(0x928b30u));
    /* 0058e982: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0058e985: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0058e988: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0058e98c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058e991: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0058e995: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0058e999: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0058e99d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0058e9a0: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_0058e9a4:; BB(0x0058e9a4);
    /* 0058e9a4: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 0058e9a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058e9aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058e9ab: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x58e9b0u); f_007a8c74();
    /* 0058e9b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058e9b3: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 0058e9b6: mov ecx, eax */ r_ecx = r_eax;
    /* 0058e9b8: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x58e9bdu); f_0082dcbc();
    /* 0058e9bd: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0058e9c0: fstp dword ptr [esi + 0x3a8] */ W_F32((u32)(r_esi+0x3a8u), ST(0)); FPOP();
    /* 0058e9c6: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x58e9cbu); f_0082ddd8();
    /* 0058e9cb: fstp dword ptr [esi + 0x3b0] */ W_F32((u32)(r_esi+0x3b0u), ST(0)); FPOP();
L_0058e9d1:; BB(0x0058e9d1);
    /* 0058e9d1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058e9d3: mov ecx, esi */ r_ecx = r_esi;
    /* 0058e9d5: call dword ptr [eax + 0x1c8] */ { u32 t = R32((u32)(r_eax+0x1c8u)); r_esp -= 4; W32(r_esp, 0x58e9dbu); call_ind(t); }
    /* 0058e9db: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 0058e9e1: fcom dword ptr [0x928c98] */ fx_compare(ST(0), R_F32((u32)(0x928c98u))); 
    /* 0058e9e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058e9e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058e9ea: jb 0x58ea1e */ if (fC) goto L_0058ea1e;
L_0058e9ec:; BB(0x0058e9ec);
    /* 0058e9ec: fcom dword ptr [0x928c94] */ fx_compare(ST(0), R_F32((u32)(0x928c94u))); 
    /* 0058e9f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058e9f4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058e9f5: ja 0x58ea1e */ if ((!fC&&!fZ)) goto L_0058ea1e;
L_0058e9f7:; BB(0x0058e9f7);
    /* 0058e9f7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058e9f9: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 0058e9ff: mov edx, dword ptr [eax*4 + 0xa74458] */ r_edx = R32((u32)(r_eax*4+0xa74458u));
    /* 0058ea06: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058ea09: mov ecx, esi */ r_ecx = r_esi;
    /* 0058ea0b: push dword ptr [esi + 0x3b0] */ { u32 v = R32((u32)(r_esi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058ea11: push dword ptr [esi + 0x3a8] */ { u32 v = R32((u32)(r_esi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058ea17: call 0x52069c */ r_esp -= 4; W32(r_esp, 0x58ea1cu); f_0052069c();
    /* 0058ea1c: jmp 0x58ea2a */ goto L_0058ea2a;
L_0058ea1e:; BB(0x0058ea1e);
    /* 0058ea1e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058ea20: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058ea22: mov ecx, esi */ r_ecx = r_esi;
    /* 0058ea24: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x58ea2au); call_ind(t); }
L_0058ea2a:; BB(0x0058ea2a);
    /* 0058ea2a: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 0058ea30: fcomp dword ptr [0x928c90] */ fx_compare(ST(0), R_F32((u32)(0x928c90u))); FPOP();
    /* 0058ea36: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058ea38: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058ea39: jb 0x58ea8c */ if (fC) goto L_0058ea8c;
L_0058ea3b:; BB(0x0058ea3b);
    /* 0058ea3b: mov dword ptr [esi + 0x40c], 1 */ W32((u32)(r_esi+0x40cu), 0x1u);
    /* 0058ea45: mov eax, 0x41c80000 */ r_eax = 0x41c80000u;
    /* 0058ea4a: mov dword ptr [esi + 0xc0], eax */ W32((u32)(r_esi+0xc0u), r_eax);
    /* 0058ea50: jmp 0x58ea8c */ goto L_0058ea8c;
L_0058ea52:; BB(0x0058ea52);
    /* 0058ea52: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ea55: jne 0x58ea8c */ if (!fZ) goto L_0058ea8c;
L_0058ea57:; BB(0x0058ea57);
    /* 0058ea57: mov edx, dword ptr [esi + 0x410] */ r_edx = R32((u32)(r_esi+0x410u));
    /* 0058ea5d: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 0058ea63: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058ea66: mov dword ptr [esi + 0x410], edx */ W32((u32)(r_esi+0x410u), r_edx);
    /* 0058ea6c: mov eax, dword ptr [eax*4 + 0xa74458] */ r_eax = R32((u32)(r_eax*4+0xa74458u));
    /* 0058ea73: cmp edx, dword ptr [eax + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058ea76: jg 0x58ea82 */ if ((!fZ&&fS==fO)) goto L_0058ea82;
L_0058ea78:; BB(0x0058ea78);
    /* 0058ea78: mov dword ptr [esi + 0xc0], 0x41c80000 */ W32((u32)(r_esi+0xc0u), 0x41c80000u);
L_0058ea82:; BB(0x0058ea82);
    /* 0058ea82: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058ea84: mov ecx, esi */ r_ecx = r_esi;
    /* 0058ea86: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x58ea8cu); call_ind(t); }
L_0058ea8c:; BB(0x0058ea8c);
    /* 0058ea8c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058ea8e: mov ecx, esi */ r_ecx = r_esi;
    /* 0058ea90: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x58ea96u); call_ind(t); }
    /* 0058ea96: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058ea99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058ea9a: ret 4 */ FN_RET(0x0058e8f0); r_esp += 8; return;
L_0058ea9d:; BB(0x0058ea9d);
    /* 0058ea9d: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0058eaa3: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058eaa5: je 0x58eab1 */ if (fZ) goto L_0058eab1;
L_0058eaa7:; BB(0x0058eaa7);
    /* 0058eaa7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058eaa9: mov ecx, esi */ r_ecx = r_esi;
    /* 0058eaab: call dword ptr [eax + 0x1b4] */ { u32 t = R32((u32)(r_eax+0x1b4u)); r_esp -= 4; W32(r_esp, 0x58eab1u); call_ind(t); }
L_0058eab1:; BB(0x0058eab1);
    /* 0058eab1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058eab4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058eab5: ret 4 */ FN_RET(0x0058e8f0); r_esp += 8; return;
L_0058eab8:; BB(0x0058eab8);
    /* 0058eab8: mov eax, 6 */ r_eax = 0x6u;
    /* 0058eabd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058eabe: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0058eac5: mov ecx, esi */ r_ecx = r_esi;
    /* 0058eac7: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x58eaccu); f_0051f664();
    /* 0058eacc: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058eace: mov ecx, esi */ r_ecx = r_esi;
    /* 0058ead0: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x58ead6u); call_ind(t); }
    /* 0058ead6: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 0058eadc: mov ecx, dword ptr [esi + 0x3e8] */ r_ecx = R32((u32)(r_esi+0x3e8u));
    /* 0058eae2: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058eae5: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058eaea: mov dword ptr [esi + 0x3cc], eax */ W32((u32)(r_esi+0x3ccu), r_eax);
    /* 0058eaf0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058eaf2: mov dword ptr [esi + 0x40c], edx */ W32((u32)(r_esi+0x40cu), r_edx);
    /* 0058eaf8: mov dword ptr [esi + 0x410], edx */ W32((u32)(r_esi+0x410u), r_edx);
    /* 0058eafe: call 0x7a7d3c */ r_esp -= 4; W32(r_esp, 0x58eb03u); f_007a7d3c();
    /* 0058eb03: mov ecx, dword ptr [esi + 0x3ec] */ r_ecx = R32((u32)(r_esi+0x3ecu));
    /* 0058eb09: call 0x7a7d3c */ r_esp -= 4; W32(r_esp, 0x58eb0eu); f_007a7d3c();
    /* 0058eb0e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058eb11: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058eb12: ret 4 */ FN_RET(0x0058e8f0); r_esp += 8; return;
}

void f_0058eb18(void) /* sub_58EB18 */
{
    FN_ENTER(0x0058eb18);
    /* 0058eb18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058eb19: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058eb1a: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058eb1d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0058eb1f: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0058eb23: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058eb26: je 0x58efde */ if (fZ) goto L_0058efde;
L_0058eb2c:; BB(0x0058eb2c);
    /* 0058eb2c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058eb2f: je 0x58eea5 */ if (fZ) goto L_0058eea5;
L_0058eb35:; BB(0x0058eb35);
    /* 0058eb35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058eb37: jne 0x58ee73 */ if (!fZ) goto L_0058ee73;
L_0058eb3d:; BB(0x0058eb3d);
    /* 0058eb3d: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 0058eb43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058eb45: je 0x58ef91 */ if (fZ) goto L_0058ef91;
L_0058eb4b:; BB(0x0058eb4b);
    /* 0058eb4b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058eb4e: je 0x58eede */ if (fZ) goto L_0058eede;
L_0058eb54:; BB(0x0058eb54);
    /* 0058eb54: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058eb57: je 0x58ecba */ if (fZ) goto L_0058ecba;
L_0058eb5d:; BB(0x0058eb5d);
    /* 0058eb5d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058eb60: jne 0x58ebf0 */ if (!fZ) goto L_0058ebf0;
L_0058eb66:; BB(0x0058eb66);
    /* 0058eb66: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058eb68: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58eb6du); f_007aa094();
    /* 0058eb6d: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 0058eb73: fadd dword ptr [ebp + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xc8u));
    /* 0058eb79: fcomp dword ptr [0x928c70] */ fx_compare(ST(0), R_F32((u32)(0x928c70u))); FPOP();
    /* 0058eb7f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058eb81: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058eb82: jb 0x58ebc1 */ if (fC) goto L_0058ebc1;
L_0058eb84:; BB(0x0058eb84);
    /* 0058eb84: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058eb87: mov dword ptr [ebp + 0x40c], 4 */ W32((u32)(r_ebp+0x40cu), 0x4u);
    /* 0058eb91: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058eb93: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x58eb99u); call_ind(t); }
    /* 0058eb99: push 0x137 */ { u32 v = 0x137u; r_esp -= 4; W32(r_esp, v); }
    /* 0058eb9e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058eba0: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x58eba5u); f_007879b8();
    /* 0058eba5: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0058eba8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058ebaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ebab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ebac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058ebad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ebae: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x58ebb3u); f_00814298();
    /* 0058ebb3: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ebb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058ebb9: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x58ebbeu); f_0050b510();
    /* 0058ebbe: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058ebc1:; BB(0x0058ebc1);
    /* 0058ebc1: push dword ptr [ebp + 0x41c] */ { u32 v = R32((u32)(r_ebp+0x41cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0058ebc7: push dword ptr [ebp + 0x3b0] */ { u32 v = R32((u32)(r_ebp+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058ebcd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ebcf: push dword ptr [ebp + 0x3a8] */ { u32 v = R32((u32)(r_ebp+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058ebd5: call 0x520adc */ r_esp -= 4; W32(r_esp, 0x58ebdau); f_00520adc();
    /* 0058ebda: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058ebdd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ebdf: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x58ebe5u); call_ind(t); }
    /* 0058ebe5: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 0058ebeb: jmp 0x58ee00 */ goto L_0058ee00;
L_0058ebf0:; BB(0x0058ebf0);
    /* 0058ebf0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ebf3: jne 0x58ee00 */ if (!fZ) goto L_0058ee00;
L_0058ebf9:; BB(0x0058ebf9);
    /* 0058ebf9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ebfb: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58ec00u); f_007aa094();
    /* 0058ec00: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ec05: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ec07: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x58ec0cu); f_007aaa30();
    /* 0058ec0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ec0e: je 0x58ec71 */ if (fZ) goto L_0058ec71;
L_0058ec10:; BB(0x0058ec10);
    /* 0058ec10: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ec12: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x58ec17u); f_00520f04();
    /* 0058ec17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ec19: je 0x58ec54 */ if (fZ) goto L_0058ec54;
L_0058ec1b:; BB(0x0058ec1b);
    /* 0058ec1b: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ec20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058ec21: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 0058ec27: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0058ec29: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x58ec2cu); call_ind(t); }
    /* 0058ec2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ec2e: je 0x58ec54 */ if (fZ) goto L_0058ec54;
L_0058ec30:; BB(0x0058ec30);
    /* 0058ec30: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ec35: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058ec36: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 0058ec3c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058ec3e: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x58ec41u); call_ind(t); }
    /* 0058ec41: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058ec43: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ec48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058ec49: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 0058ec4f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0058ec51: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x58ec54u); call_ind(t); }
L_0058ec54:; BB(0x0058ec54);
    /* 0058ec54: push 0x138 */ { u32 v = 0x138u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ec59: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ec5b: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x58ec60u); f_007879b8();
    /* 0058ec60: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0058ec63: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058ec65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ec66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ec67: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058ec68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ec69: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x58ec6eu); f_00814298();
    /* 0058ec6e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058ec71:; BB(0x0058ec71);
    /* 0058ec71: fld dword ptr [ebp + 0x41c] */ FPUSH(R_F32((u32)(r_ebp+0x41cu)));
    /* 0058ec77: fmul dword ptr [0x928c7c] */ ST(0) = ST(0) * R_F32((u32)(0x928c7cu));
    /* 0058ec7d: mov eax, dword ptr [ebp + 0x3a8] */ r_eax = R32((u32)(r_ebp+0x3a8u));
    /* 0058ec83: mov edx, dword ptr [ebp + 0x3b0] */ r_edx = R32((u32)(r_ebp+0x3b0u));
    /* 0058ec89: fst dword ptr [ebp + 0x41c] */ W_F32((u32)(r_ebp+0x41cu), ST(0));
    /* 0058ec8f: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ec92: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0058ec96: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ec98: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058ec9b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0058ec9f: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x58eca4u); f_005207c4();
    /* 0058eca4: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058eca7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058eca9: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x58ecafu); call_ind(t); }
    /* 0058ecaf: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 0058ecb5: jmp 0x58ee00 */ goto L_0058ee00;
L_0058ecba:; BB(0x0058ecba);
    /* 0058ecba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ecbc: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58ecc1u); f_007aa094();
    /* 0058ecc1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ecc3: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x58ecc8u); f_00521238();
    /* 0058ecc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ecca: je 0x58ecda */ if (fZ) goto L_0058ecda;
L_0058eccc:; BB(0x0058eccc);
    /* 0058eccc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ecce: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x58ecd3u); f_005213d8();
    /* 0058ecd3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ecd5: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x58ecdau); f_00521410();
L_0058ecda:; BB(0x0058ecda);
    /* 0058ecda: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 0058ece0: fadd dword ptr [ebp + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xc8u));
    /* 0058ece6: fcomp dword ptr [0x928c6c] */ fx_compare(ST(0), R_F32((u32)(0x928c6cu))); FPOP();
    /* 0058ecec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058ecee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058ecef: jb 0x58ede4 */ if (fC) goto L_0058ede4;
L_0058ecf5:; BB(0x0058ecf5);
    /* 0058ecf5: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 0058ecf8: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 0058ecfe: fsub dword ptr [0x928d38] */ ST(0) = ST(0) - R_F32((u32)(0x928d38u));
    /* 0058ed04: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ed07: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058ed0b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058ed0e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ed10: call 0x58d120 */ r_esp -= 4; W32(r_esp, 0x58ed15u); f_0058d120();
    /* 0058ed15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ed17: je 0x58ed28 */ if (fZ) goto L_0058ed28;
L_0058ed19:; BB(0x0058ed19);
    /* 0058ed19: mov dword ptr [ebp + 0x40c], 5 */ W32((u32)(r_ebp+0x40cu), 0x5u);
    /* 0058ed23: jmp 0x58ede4 */ goto L_0058ede4;
L_0058ed28:; BB(0x0058ed28);
    /* 0058ed28: fld dword ptr [0x928c78] */ FPUSH(R_F32((u32)(0x928c78u)));
    /* 0058ed2e: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 0058ed34: fsub dword ptr [0x928d38] */ ST(0) = ST(0) - R_F32((u32)(0x928d38u));
    /* 0058ed3a: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0058ed3d: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0058ed40: mov edi, dword ptr [ebp + 0x40] */ r_edi = R32((u32)(r_ebp+0x40u));
    /* 0058ed43: fld dword ptr [ebp + 0x3a8] */ FPUSH(R_F32((u32)(r_ebp+0x3a8u)));
    /* 0058ed49: fld dword ptr [ebp + 0x3b0] */ FPUSH(R_F32((u32)(r_ebp+0x3b0u)));
    /* 0058ed4f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058ed51: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0058ed53: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0058ed55: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058ed57: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058ed5a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058ed5c: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0058ed5f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0058ed62: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0058ed66: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058ed68: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0058ed6c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058ed70: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0058ed74: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 0058ed78: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0058ed7c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0058ed7f: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ed81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ed82: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x58ed87u); f_00780630();
    /* 0058ed87: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ed8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ed8c: je 0x58edda */ if (fZ) goto L_0058edda;
L_0058ed8e:; BB(0x0058ed8e);
    /* 0058ed8e: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 0058ed94: fsub dword ptr [0x928d38] */ ST(0) = ST(0) - R_F32((u32)(0x928d38u));
    /* 0058ed9a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058ed9d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ed9f: mov dword ptr [ebp + 0x40c], 3 */ W32((u32)(r_ebp+0x40cu), 0x3u);
    /* 0058eda9: fdiv dword ptr [0xa74438] */ ST(0) = ST(0) / R_F32((u32)(0xa74438u));
    /* 0058edaf: fstp dword ptr [ebp + 0x41c] */ W_F32((u32)(r_ebp+0x41cu), ST(0)); FPOP();
    /* 0058edb5: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x58edbbu); call_ind(t); }
    /* 0058edbb: push 0x136 */ { u32 v = 0x136u; r_esp -= 4; W32(r_esp, v); }
    /* 0058edc0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058edc2: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x58edc7u); f_007879b8();
    /* 0058edc7: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0058edca: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058edcc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058edcd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058edce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058edcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058edd0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x58edd5u); f_00814298();
    /* 0058edd5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058edd8: jmp 0x58ede4 */ goto L_0058ede4;
L_0058edda:; BB(0x0058edda);
    /* 0058edda: mov dword ptr [ebp + 0x40c], 5 */ W32((u32)(r_ebp+0x40cu), 0x5u);
L_0058ede4:; BB(0x0058ede4);
    /* 0058ede4: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058ede7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ede9: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x58edefu); call_ind(t); }
    /* 0058edef: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058edf2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058edf4: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x58edfau); call_ind(t); }
    /* 0058edfa: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
L_0058ee00:; BB(0x0058ee00);
    /* 0058ee00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ee02: je 0x58eed6 */ if (fZ) goto L_0058eed6;
L_0058ee08:; BB(0x0058ee08);
    /* 0058ee08: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058ee0e: mov ecx, dword ptr [0xa74478] */ r_ecx = R32((u32)(0xa74478u));
    /* 0058ee14: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x58ee19u); f_00579de0();
    /* 0058ee19: mov edi, eax */ r_edi = r_eax;
    /* 0058ee1b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ee1d: je 0x58eed6 */ if (fZ) goto L_0058eed6;
L_0058ee23:; BB(0x0058ee23);
    /* 0058ee23: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x58ee28u); f_0082d7b0();
    /* 0058ee28: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058ee2a: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x58ee2fu); f_00830cd8();
    /* 0058ee2f: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0058ee32: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x58ee37u); f_0082d838();
    /* 0058ee37: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0058ee3a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058ee3c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x58ee41u); f_0082d8bc();
    /* 0058ee41: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0058ee45: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ee47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ee48: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058ee4a: mov edx, edi */ r_edx = r_edi;
    /* 0058ee4c: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x58ee51u); f_0082f940();
    /* 0058ee51: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x58ee56u); f_0082da80();
    /* 0058ee56: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0058ee5a: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0058ee5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ee5f: mov ecx, dword ptr [ebp + 0x3e8] */ r_ecx = R32((u32)(r_ebp+0x3e8u));
    /* 0058ee65: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 0058ee67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ee68: call dword ptr [ebp + 0x10] */ { u32 t = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, 0x58ee6bu); call_ind(t); }
    /* 0058ee6b: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058ee6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058ee6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058ee70: ret 4 */ FN_RET(0x0058eb18); r_esp += 8; return;
L_0058ee73:; BB(0x0058ee73);
    /* 0058ee73: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ee76: jne 0x58eed6 */ if (!fZ) goto L_0058eed6;
L_0058ee78:; BB(0x0058ee78);
    /* 0058ee78: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 0058ee7b: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0058ee7e: mov dword ptr [ebp + 0x3d4], 0 */ W32((u32)(r_ebp+0x3d4u), 0x0u);
    /* 0058ee88: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0058ee8e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ee90: call dword ptr [edx + 0x178] */ { u32 t = R32((u32)(r_edx+0x178u)); r_esp -= 4; W32(r_esp, 0x58ee96u); call_ind(t); }
    /* 0058ee96: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ee98: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x58ee9du); f_00520be8();
    /* 0058ee9d: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058eea0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058eea1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058eea2: ret 4 */ FN_RET(0x0058eb18); r_esp += 8; return;
L_0058eea5:; BB(0x0058eea5);
    /* 0058eea5: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 0058eeab: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058eeae: je 0x58eeba */ if (fZ) goto L_0058eeba;
L_0058eeb0:; BB(0x0058eeb0);
    /* 0058eeb0: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0058eeb6: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058eeb8: je 0x58eed6 */ if (fZ) goto L_0058eed6;
L_0058eeba:; BB(0x0058eeba);
    /* 0058eeba: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058eebd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058eebf: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x58eec5u); call_ind(t); }
    /* 0058eec5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058eec7: je 0x58efcd */ if (fZ) goto L_0058efcd;
L_0058eecd:; BB(0x0058eecd);
    /* 0058eecd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058eecf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058eed1: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58eed6u); f_0051f62c();
L_0058eed6:; BB(0x0058eed6);
    /* 0058eed6: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058eed9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058eeda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058eedb: ret 4 */ FN_RET(0x0058eb18); r_esp += 8; return;
L_0058eede:; BB(0x0058eede);
    /* 0058eede: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058eee0: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58eee5u); f_007aa094();
    /* 0058eee5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058eee7: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x58eeecu); f_00521238();
    /* 0058eeec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058eeee: jne 0x58eef7 */ if (!fZ) goto L_0058eef7;
L_0058eef0:; BB(0x0058eef0);
    /* 0058eef0: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0058eef3: mov eax, edx */ r_eax = r_edx;
    /* 0058eef5: jmp 0x58ef44 */ goto L_0058ef44;
L_0058eef7:; BB(0x0058eef7);
    /* 0058eef7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058eef9: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x58eefeu); f_005213d8();
    /* 0058eefe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ef00: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x58ef05u); f_00521410();
    /* 0058ef05: fld dword ptr [ebp + 0x3a8] */ FPUSH(R_F32((u32)(r_ebp+0x3a8u)));
    /* 0058ef0b: fld dword ptr [ebp + 0x3b0] */ FPUSH(R_F32((u32)(r_ebp+0x3b0u)));
    /* 0058ef11: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0058ef13: fmul qword ptr [0x928b28] */ ST(0) = ST(0) * R_F64((u32)(0x928b28u));
    /* 0058ef19: fdiv qword ptr [0x928b20] */ ST(0) = ST(0) / R_F64((u32)(0x928b20u));
    /* 0058ef1f: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0058ef22: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0058ef26: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0058ef2b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058ef30: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0058ef34: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0058ef38: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0058ef3c: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0058ef40: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
L_0058ef44:; BB(0x0058ef44);
    /* 0058ef44: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ef49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ef4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ef4b: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x58ef50u); f_007a8c74();
    /* 0058ef50: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ef53: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ef58: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 0058ef5b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ef5d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x58ef62u); f_007aaa30();
    /* 0058ef62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ef64: je 0x58ef70 */ if (fZ) goto L_0058ef70;
L_0058ef66:; BB(0x0058ef66);
    /* 0058ef66: mov dword ptr [ebp + 0x40c], 2 */ W32((u32)(r_ebp+0x40cu), 0x2u);
L_0058ef70:; BB(0x0058ef70);
    /* 0058ef70: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058ef73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ef75: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x58ef7bu); call_ind(t); }
    /* 0058ef7b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058ef7e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ef80: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x58ef86u); call_ind(t); }
    /* 0058ef86: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 0058ef8c: jmp 0x58ee00 */ goto L_0058ee00;
L_0058ef91:; BB(0x0058ef91);
    /* 0058ef91: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058ef93: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58ef98u); f_007aa094();
    /* 0058ef98: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0058ef9e: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058efa0: je 0x58efac */ if (fZ) goto L_0058efac;
L_0058efa2:; BB(0x0058efa2);
    /* 0058efa2: mov dword ptr [ebp + 0x40c], 1 */ W32((u32)(r_ebp+0x40cu), 0x1u);
L_0058efac:; BB(0x0058efac);
    /* 0058efac: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058efaf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058efb1: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x58efb7u); call_ind(t); }
    /* 0058efb7: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058efba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058efbc: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x58efc2u); call_ind(t); }
    /* 0058efc2: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 0058efc8: jmp 0x58ee00 */ goto L_0058ee00;
L_0058efcd:; BB(0x0058efcd);
    /* 0058efcd: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0058efcf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058efd1: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58efd6u); f_0051f62c();
    /* 0058efd6: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058efd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058efda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058efdb: ret 4 */ FN_RET(0x0058eb18); r_esp += 8; return;
L_0058efde:; BB(0x0058efde);
    /* 0058efde: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058efe0: mov eax, 5 */ r_eax = 0x5u;
    /* 0058efe5: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0058efec: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058efee: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x58eff3u); f_0051f664();
    /* 0058eff3: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058eff6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058eff8: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x58effeu); call_ind(t); }
    /* 0058effe: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 0058f004: mov ecx, dword ptr [ebp + 0x3e8] */ r_ecx = R32((u32)(r_ebp+0x3e8u));
    /* 0058f00a: mov dword ptr [ebp + 0x40c], 0 */ W32((u32)(r_ebp+0x40cu), 0x0u);
    /* 0058f014: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058f017: mov dword ptr [ebp + 0x418], 0 */ W32((u32)(r_ebp+0x418u), 0x0u);
    /* 0058f021: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058f026: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 0058f02c: call 0x7a7d3c */ r_esp -= 4; W32(r_esp, 0x58f031u); f_007a7d3c();
    /* 0058f031: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058f033: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x58f038u); f_00520bdc();
    /* 0058f038: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058f03b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058f03c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058f03d: ret 4 */ FN_RET(0x0058eb18); r_esp += 8; return;
}

