#include "protos.h"

void f_005b60bc(void) /* sub_5B60BC */
{
    FN_ENTER(0x005b60bc);
    /* 005b60bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b60bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005b60bf: mov edx, dword ptr [ebx + 0x37c] */ r_edx = R32((u32)(r_ebx+0x37cu));
    /* 005b60c5: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005b60c8: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 005b60cc: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005b60d0: mov dword ptr [ebx + 0x37c], edx */ W32((u32)(r_ebx+0x37cu), r_edx);
    /* 005b60d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b60d8: je 0x5b60fb */ if (fZ) goto L_005b60fb;
L_005b60da:; BB(0x005b60da);
    /* 005b60da: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
L_005b60dc:; BB(0x005b60dc);
    /* 005b60dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b60de: je 0x5b60f6 */ if (fZ) goto L_005b60f6;
L_005b60e0:; BB(0x005b60e0);
    /* 005b60e0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
L_005b60e2:; BB(0x005b60e2);
    /* 005b60e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b60e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b60e4: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b60e6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b60e8: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5b60ebu); call_ind(t); }
    /* 005b60eb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b60ed: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b60ef: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5b60f2u); call_ind(t); }
    /* 005b60f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b60f3: ret 8 */ FN_RET(0x005b60bc); r_esp += 12; return;
L_005b60f6:; BB(0x005b60f6);
    /* 005b60f6: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 005b60f9: jmp 0x5b60e2 */ goto L_005b60e2;
L_005b60fb:; BB(0x005b60fb);
    /* 005b60fb: mov edx, dword ptr [ebx + 0x3bc] */ r_edx = R32((u32)(r_ebx+0x3bcu));
    /* 005b6101: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 005b6104: jmp 0x5b60dc */ goto L_005b60dc;
}

void f_005b6108(void) /* sub_5B6108 */
{
    FN_ENTER(0x005b6108);
    /* 005b6108: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b6109: mov esi, ecx */ r_esi = r_ecx;
    /* 005b610b: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 005b6111: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b6113: je 0x5b619e */ if (fZ) goto L_005b619e;
L_005b6119:; BB(0x005b6119);
    /* 005b6119: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005b611c: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 005b6122: mov dword ptr [esi + 0x398], 0 */ W32((u32)(r_esi+0x398u), 0x0u);
    /* 005b612c: and eax, 0xfffbfdff */ {  u32 a = r_eax; u32 b = 0xfffbfdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b6131: mov dword ptr [esi + 0x39c], 0x3f800000 */ W32((u32)(r_esi+0x39cu), 0x3f800000u);
    /* 005b613b: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005b613e: movzx eax, word ptr [esi + 0x32e] */ r_eax = (u32)R16((u32)(r_esi+0x32eu));
    /* 005b6145: and edx, 0xfffffff1 */ {  u32 a = r_edx; u32 b = 0xfffffff1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b6148: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 005b614e: mov word ptr [esi + 0x332], ax */ W16((u32)(r_esi+0x332u), (u16)r_eax);
    /* 005b6155: mov eax, 2 */ r_eax = 0x2u;
    /* 005b615a: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
    /* 005b6161: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b6163: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005b616a: push dword ptr [0x9c1a50] */ { u32 v = R32((u32)(0x9c1a50u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b6170: mov ecx, esi */ r_ecx = r_esi;
    /* 005b6172: call 0x5b5de0 */ r_esp -= 4; W32(r_esp, 0x5b6177u); f_005b5de0();
    /* 005b6177: movzx eax, word ptr [0x9c1a54] */ r_eax = (u32)R16((u32)(0x9c1a54u));
    /* 005b617e: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005b6185: mov edx, dword ptr [0x9c1a58] */ r_edx = R32((u32)(0x9c1a58u));
    /* 005b618b: or dword ptr [esi + 0x37c], edx */ { u32 ad = (u32)(r_esi+0x37cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b6191: mov eax, dword ptr [0x9c1a48] */ r_eax = R32((u32)(0x9c1a48u));
    /* 005b6196: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b6198: je 0x5b619e */ if (fZ) goto L_005b619e;
L_005b619a:; BB(0x005b619a);
    /* 005b619a: mov ecx, esi */ r_ecx = r_esi;
    /* 005b619c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b619eu); call_ind(t); }
L_005b619e:; BB(0x005b619e);
    /* 005b619e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b619f: ret  */ FN_RET(0x005b6108); r_esp += 4; return;
}

void f_005b61a0(void) /* sub_5B61A0 */
{
    FN_ENTER(0x005b61a0);
    /* 005b61a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b61a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b61a2: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b61a5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b61a7: mov edx, dword ptr [ebp + 0x3c0] */ r_edx = R32((u32)(r_ebp+0x3c0u));
    /* 005b61ad: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 005b61b3: fcomp dword ptr [edx + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x14u))); FPOP();
    /* 005b61b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b61b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b61b9: jae 0x5b6222 */ if (!fC) goto L_005b6222;
L_005b61bb:; BB(0x005b61bb);
    /* 005b61bb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b61bd: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5b61c2u); f_00770738();
    /* 005b61c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b61c4: je 0x5b621c */ if (fZ) goto L_005b621c;
L_005b61c6:; BB(0x005b61c6);
    /* 005b61c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b61c8: push dword ptr [eax + 0x40] */ { u32 v = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b61cb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b61cd: push dword ptr [eax + 0x3c] */ { u32 v = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b61d0: push dword ptr [eax + 0x38] */ { u32 v = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b61d3: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x5b61d8u); f_00771c8c();
    /* 005b61d8: mov edx, dword ptr [ebp + 0x3bc] */ r_edx = R32((u32)(r_ebp+0x3bcu));
    /* 005b61de: fild dword ptr [edx + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x18u)));
    /* 005b61e1: fmul dword ptr [0x92b004] */ ST(0) = ST(0) * R_F32((u32)(0x92b004u));
    /* 005b61e7: fdiv dword ptr [0x92b000] */ ST(0) = ST(0) / R_F32((u32)(0x92b000u));
    /* 005b61ed: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b61ef: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005b61f2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005b61f6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b61fb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b61ff: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005b6203: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005b6207: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005b620a: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005b620e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b620f: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x5b6214u); f_00772358();
    /* 005b6214: mov edx, dword ptr [ebp + 0x3c0] */ r_edx = R32((u32)(r_ebp+0x3c0u));
    /* 005b621a: jmp 0x5b6222 */ goto L_005b6222;
L_005b621c:; BB(0x005b621c);
    /* 005b621c: mov edx, dword ptr [ebp + 0x3c0] */ r_edx = R32((u32)(r_ebp+0x3c0u));
L_005b6222:; BB(0x005b6222);
    /* 005b6222: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 005b6225: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 005b6228: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005b622a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b622c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 005b622f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005b6231: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b6232: je 0x5b6301 */ if (fZ) goto L_005b6301;
L_005b6238:; BB(0x005b6238);
    /* 005b6238: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 005b623e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b6240: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005b6242: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b6244: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b6245: ja 0x5b6255 */ if ((!fC&&!fZ)) goto L_005b6255;
L_005b6247:; BB(0x005b6247);
    /* 005b6247: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005b6249: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b624b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b624c: ja 0x5b6259 */ if ((!fC&&!fZ)) goto L_005b6259;
L_005b624e:; BB(0x005b624e);
    /* 005b624e: mov edi, 1 */ r_edi = 0x1u;
    /* 005b6253: jmp 0x5b6259 */ goto L_005b6259;
L_005b6255:; BB(0x005b6255);
    /* 005b6255: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b6257: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005b6259:; BB(0x005b6259);
    /* 005b6259: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005b625c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b625e: je 0x5b6268 */ if (fZ) goto L_005b6268;
L_005b6260:; BB(0x005b6260);
    /* 005b6260: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6262: je 0x5b6268 */ if (fZ) goto L_005b6268;
L_005b6264:; BB(0x005b6264);
    /* 005b6264: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b6266: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b6268u); call_ind(t); }
L_005b6268:; BB(0x005b6268);
    /* 005b6268: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 005b626e: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b6270: je 0x5b62fb */ if (fZ) goto L_005b62fb;
L_005b6276:; BB(0x005b6276);
    /* 005b6276: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005b6279: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
    /* 005b627f: movzx edi, word ptr [ebp + 0x32e] */ r_edi = (u32)R16((u32)(r_ebp+0x32eu));
    /* 005b6286: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b628b: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 005b628e: and edx, 0xfffffff1 */ {  u32 a = r_edx; u32 b = 0xfffffff1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b6291: mov dword ptr [ebp + 0x398], 0 */ W32((u32)(r_ebp+0x398u), 0x0u);
    /* 005b629b: mov dword ptr [ebp + 0x37c], edx */ W32((u32)(r_ebp+0x37cu), r_edx);
    /* 005b62a1: mov word ptr [ebp + 0x332], di */ W16((u32)(r_ebp+0x332u), (u16)r_edi);
    /* 005b62a8: mov eax, 2 */ r_eax = 0x2u;
    /* 005b62ad: mov dword ptr [ebp + 0x39c], 0x3f800000 */ W32((u32)(r_ebp+0x39cu), 0x3f800000u);
    /* 005b62b7: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 005b62be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b62c0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 005b62c7: push dword ptr [0x9c1a50] */ { u32 v = R32((u32)(0x9c1a50u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b62cd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b62cf: call 0x5b5de0 */ r_esp -= 4; W32(r_esp, 0x5b62d4u); f_005b5de0();
    /* 005b62d4: movzx eax, word ptr [0x9c1a54] */ r_eax = (u32)R16((u32)(0x9c1a54u));
    /* 005b62db: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005b62e2: mov edx, dword ptr [0x9c1a58] */ r_edx = R32((u32)(0x9c1a58u));
    /* 005b62e8: or dword ptr [ebp + 0x37c], edx */ { u32 ad = (u32)(r_ebp+0x37cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b62ee: mov eax, dword ptr [0x9c1a48] */ r_eax = R32((u32)(0x9c1a48u));
    /* 005b62f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b62f5: je 0x5b62fb */ if (fZ) goto L_005b62fb;
L_005b62f7:; BB(0x005b62f7);
    /* 005b62f7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b62f9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b62fbu); call_ind(t); }
L_005b62fb:; BB(0x005b62fb);
    /* 005b62fb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b62fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b62ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b6300: ret  */ FN_RET(0x005b61a0); r_esp += 4; return;
L_005b6301:; BB(0x005b6301);
    /* 005b6301: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b6303: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b6305: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6306: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b6308: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b630du); f_007aaa30();
    /* 005b630d: mov edx, dword ptr [ebp + 0x3c0] */ r_edx = R32((u32)(r_ebp+0x3c0u));
    /* 005b6313: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6315: je 0x5b6259 */ if (fZ) goto L_005b6259;
L_005b631b:; BB(0x005b631b);
    /* 005b631b: mov edi, 1 */ r_edi = 0x1u;
    /* 005b6320: jmp 0x5b6259 */ goto L_005b6259;
}

void f_005b6328(void) /* sub_5B6328 */
{
    FN_ENTER(0x005b6328);
    /* 005b6328: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6329: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b632b: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 005b6331: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b6333: je 0x5b6380 */ if (fZ) goto L_005b6380;
L_005b6335:; BB(0x005b6335);
    /* 005b6335: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 005b633b: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 005b633d: jne 0x5b6356 */ if (!fZ) goto L_005b6356;
L_005b633f:; BB(0x005b633f);
    /* 005b633f: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6341: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b6344: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
    /* 005b634a: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 005b634d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b634e: call 0x578538 */ r_esp -= 4; W32(r_esp, 0x5b6353u); f_00578538();
    /* 005b6353: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_005b6356:; BB(0x005b6356);
    /* 005b6356: fld dword ptr [ebp + 0x3c4] */ FPUSH(R_F32((u32)(r_ebp+0x3c4u)));
    /* 005b635c: fsub dword ptr [0x92aff4] */ ST(0) = ST(0) - R_F32((u32)(0x92aff4u));
    /* 005b6362: fcom dword ptr [0x92aff0] */ fx_compare(ST(0), R_F32((u32)(0x92aff0u))); 
    /* 005b6368: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b636a: fstp dword ptr [ebp + 0x3c4] */ W_F32((u32)(r_ebp+0x3c4u), ST(0)); FPOP();
    /* 005b6370: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b6371: jae 0x5b6380 */ if (!fC) goto L_005b6380;
L_005b6373:; BB(0x005b6373);
    /* 005b6373: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 005b6377: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b637c: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_005b6380:; BB(0x005b6380);
    /* 005b6380: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b6381: ret  */ FN_RET(0x005b6328); r_esp += 4; return;
}

void f_005b6384(void)
{
    FN_ENTER(0x005b6384);
    /* 005b6384: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b6385: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6386: mov edi, ecx */ r_edi = r_ecx;
    /* 005b6388: mov ecx, edi */ r_ecx = r_edi;
    /* 005b638a: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5b638fu); f_00770738();
    /* 005b638f: mov ebp, eax */ r_ebp = r_eax;
    /* 005b6391: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b6396u); f_00807ac0();
    /* 005b6396: mov ecx, eax */ r_ecx = r_eax;
    /* 005b6398: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005b639b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b639d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b639e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b639f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b63a0: push dword ptr [ecx*4 + 0x9c1c88] */ { u32 v = R32((u32)(r_ecx*4+0x9c1c88u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b63a7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b63acu); f_00814298();
    /* 005b63ac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b63af: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b63b1: je 0x5b63e1 */ if (fZ) goto L_005b63e1;
L_005b63b3:; BB(0x005b63b3);
    /* 005b63b3: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b63b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b63b9: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005b63bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b63be: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5b63c1u); call_ind(t); }
    /* 005b63c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b63c3: je 0x5b63e1 */ if (fZ) goto L_005b63e1;
L_005b63c5:; BB(0x005b63c5);
    /* 005b63c5: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b63ca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b63cb: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005b63ce: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b63d0: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5b63d3u); call_ind(t); }
    /* 005b63d3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b63d5: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 005b63d8: or edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b63de: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
L_005b63e1:; BB(0x005b63e1);
    /* 005b63e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b63e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b63e3: ret  */ FN_RET(0x005b6384); r_esp += 4; return;
}

void f_005b63e4(void)
{
    FN_ENTER(0x005b63e4);
    /* 005b63e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b63e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b63e6: mov esi, ecx */ r_esi = r_ecx;
    /* 005b63e8: mov ecx, esi */ r_ecx = r_esi;
    /* 005b63ea: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5b63efu); f_00770738();
    /* 005b63ef: mov ebp, eax */ r_ebp = r_eax;
    /* 005b63f1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b63f3: je 0x5b6400 */ if (fZ) goto L_005b6400;
L_005b63f5:; BB(0x005b63f5);
    /* 005b63f5: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 005b63f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b63fa: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5b63ffu); f_0068d5a8();
    /* 005b63ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005b6400:; BB(0x005b6400);
    /* 005b6400: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 005b6406: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b6409: je 0x5b6465 */ if (fZ) goto L_005b6465;
L_005b640b:; BB(0x005b640b);
    /* 005b640b: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 005b6411: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6413: je 0x5b644c */ if (fZ) goto L_005b644c;
L_005b6415:; BB(0x005b6415);
    /* 005b6415: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005b6418: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b641a: je 0x5b6433 */ if (fZ) goto L_005b6433;
L_005b641c:; BB(0x005b641c);
    /* 005b641c: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 005b6422: fsub dword ptr [esi + 0xc8] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0xc8u));
    /* 005b6428: fstp dword ptr [esi + 0xc0] */ W_F32((u32)(r_esi+0xc0u), ST(0)); FPOP();
    /* 005b642e: jmp 0x5b64ed */ f_005b64ed(); return;
L_005b6433:; BB(0x005b6433);
    /* 005b6433: mov dword ptr [esi + 0x3d0], 0 */ W32((u32)(r_esi+0x3d0u), 0x0u);
    /* 005b643d: mov dword ptr [esi + 0xc0], 0x42b40000 */ W32((u32)(r_esi+0xc0u), 0x42b40000u);
    /* 005b6447: jmp 0x5b64ed */ f_005b64ed(); return;
L_005b644c:; BB(0x005b644c);
    /* 005b644c: mov dword ptr [esi + 0x3d0], 0 */ W32((u32)(r_esi+0x3d0u), 0x0u);
    /* 005b6456: mov dword ptr [esi + 0xc0], 0x42b40000 */ W32((u32)(r_esi+0xc0u), 0x42b40000u);
    /* 005b6460: jmp 0x5b64ed */ f_005b64ed(); return;
L_005b6465:; BB(0x005b6465);
    /* 005b6465: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b646au); f_00807ac0();
    /* 005b646a: mov ecx, eax */ r_ecx = r_eax;
    /* 005b646c: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 005b646f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b6471: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6472: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6474: push dword ptr [ecx*4 + 0x9c1c88] */ { u32 v = R32((u32)(r_ecx*4+0x9c1c88u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b647b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b6480u); f_00814298();
    /* 005b6480: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b6483: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6485: jne 0x5b648f */ if (!fZ) goto L_005b648f;
L_005b6487:; BB(0x005b6487);
    /* 005b6487: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 005b648d: jmp 0x5b64ed */ f_005b64ed(); return;
L_005b648f:; BB(0x005b648f);
    /* 005b648f: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 005b6492: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6498: je 0x5b64a2 */ if (fZ) goto L_005b64a2;
L_005b649a:; BB(0x005b649a);
    /* 005b649a: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 005b64a0: jmp 0x5b64ed */ f_005b64ed(); return;
L_005b64a2:; BB(0x005b64a2);
    /* 005b64a2: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b64a5: je 0x5b64af */ if (fZ) goto L_005b64af;
L_005b64a7:; BB(0x005b64a7);
    /* 005b64a7: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 005b64ad: jmp 0x5b64ed */ f_005b64ed(); return;
L_005b64af:; BB(0x005b64af);
    /* 005b64af: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b64b0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b64b2: call 0x772c08 */ r_esp -= 4; W32(r_esp, 0x5b64b7u); f_00772c08();
    /* 005b64b7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b64ba: jne 0x5b64c4 */ if (!fZ) goto L_005b64c4;
L_005b64bc:; BB(0x005b64bc);
    /* 005b64bc: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 005b64c2: jmp 0x5b64ed */ f_005b64ed(); return;
L_005b64c4:; BB(0x005b64c4);
    /* 005b64c4: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b64c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b64ca: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005b64cd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b64cf: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5b64d2u); call_ind(t); }
    /* 005b64d2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b64d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b64d6: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005b64d9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b64db: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x5b64e1u); call_ind(t); }
    /* 005b64e1: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 005b64e7: mov dword ptr [esi + 0x3d0], ebp */ W32((u32)(r_esi+0x3d0u), r_ebp);
    /* 005b64ed: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b64f0: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 005b64f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b64f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b64f8: ret  */ FN_RET(0x005b63e4); r_esp += 4; return;
}

void f_005b64fc(void) /* sub_5B64FC */
{
    FN_ENTER(0x005b64fc);
    /* 005b64fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b64fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b64fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b64ff: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b6502: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b6504: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b6506: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5b650bu); f_00770738();
    /* 005b650b: mov edi, eax */ r_edi = r_eax;
    /* 005b650d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005b6510: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6511: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005b6513: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 005b6516: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b6518: call dword ptr [ebx + 0x10c] */ { u32 t = R32((u32)(r_ebx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5b651eu); call_ind(t); }
    /* 005b651e: push 0x40c00000 */ { u32 v = 0x40c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6523: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b6525: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b652au); f_007aaa30();
    /* 005b652a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b652c: je 0x5b6567 */ if (fZ) goto L_005b6567;
L_005b652e:; BB(0x005b652e);
    /* 005b652e: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
    /* 005b6534: and edx, 0xffffff7f */ {  u32 a = r_edx; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b653a: mov dword ptr [ebp + 0x37c], edx */ W32((u32)(r_ebp+0x37cu), r_edx);
    /* 005b6540: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b6545u); f_00807ac0();
    /* 005b6545: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 005b6548: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b654a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b654b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b654c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b654d: push dword ptr [eax*4 + 0x9c1cac] */ { u32 v = R32((u32)(r_eax*4+0x9c1cacu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b6554: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b6559u); f_00814298();
    /* 005b6559: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 005b655e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b655f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5b6564u); f_0050b510();
    /* 005b6564: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b6567:; BB(0x005b6567);
    /* 005b6567: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
    /* 005b656d: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6573: jne 0x5b660d */ if (!fZ) goto L_005b660d;
L_005b6579:; BB(0x005b6579);
    /* 005b6579: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 005b657f: fcom dword ptr [0x92afd8] */ fx_compare(ST(0), R_F32((u32)(0x92afd8u))); 
    /* 005b6585: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b6587: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b6588: jbe 0x5b6675 */ if ((fC||fZ)) goto L_005b6675;
L_005b658e:; BB(0x005b658e);
    /* 005b658e: fcomp dword ptr [0x92afd4] */ fx_compare(ST(0), R_F32((u32)(0x92afd4u))); FPOP();
    /* 005b6594: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b6596: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b6597: jae 0x5b660d */ if (!fC) goto L_005b660d;
L_005b6599:; BB(0x005b6599);
    /* 005b6599: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b659b: je 0x5b660d */ if (fZ) goto L_005b660d;
L_005b659d:; BB(0x005b659d);
    /* 005b659d: lea ebx, [esp] */ r_ebx = (u32)(r_esp);
    /* 005b65a0: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005b65a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b65a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b65a5: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5b65aau); f_007a9180();
    /* 005b65aa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b65ad: mov edx, dword ptr [ebp + 0x31c] */ r_edx = R32((u32)(r_ebp+0x31cu));
    /* 005b65b3: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 005b65b6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005b65b8: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005b65ba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b65bc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b65bd: jbe 0x5b660d */ if ((fC||fZ)) goto L_005b660d;
L_005b65bf:; BB(0x005b65bf);
    /* 005b65bf: movsx edx, word ptr [ebp + 0x2c4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2c4u));
    /* 005b65c6: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 005b65ca: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 005b65ce: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005b65d0: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 005b65d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b65d6: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 005b65db: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005b65df: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b65e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b65e1: mov ecx, edi */ r_ecx = r_edi;
    /* 005b65e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b65e4: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b65e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b65ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b65eb: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x5b65eeu); call_ind(t); }
    /* 005b65ee: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b65f0: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 005b65f3: or edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005b65f9: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 005b65fc: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 005b6602: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b6607: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
L_005b660d:; BB(0x005b660d);
    /* 005b660d: lea edx, [ebp + 0x3d8] */ r_edx = (u32)(r_ebp+0x3d8u);
    /* 005b6613: lea eax, [ebp + 0x3d4] */ r_eax = (u32)(r_ebp+0x3d4u);
    /* 005b6619: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b661a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b661c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b661d: call 0x5b60bc */ r_esp -= 4; W32(r_esp, 0x5b6622u); f_005b60bc();
    /* 005b6622: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6627: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b6629: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b662eu); f_007aaa30();
    /* 005b662e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6630: je 0x5b666e */ if (fZ) goto L_005b666e;
L_005b6632:; BB(0x005b6632);
    /* 005b6632: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b6637u); f_00807ac0();
    /* 005b6637: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 005b663a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b663c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b663d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b663e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b663f: push dword ptr [eax*4 + 0x9c1cac] */ { u32 v = R32((u32)(r_eax*4+0x9c1cacu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b6646: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b664bu); f_00814298();
    /* 005b664b: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005b664f: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6654: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6655: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5b665au); f_0050b510();
    /* 005b665a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b665d: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 005b6663: and eax, 0xffffff7f */ {  u32 a = r_eax; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b6668: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
L_005b666e:; BB(0x005b666e);
    /* 005b666e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b6671: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b6672: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b6673: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b6674: ret  */ FN_RET(0x005b64fc); r_esp += 4; return;
L_005b6675:; BB(0x005b6675);
    /* 005b6675: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b6677: jmp 0x5b660d */ goto L_005b660d;
}

void f_005b667c(void) /* sub_5B667C */
{
    FN_ENTER(0x005b667c);
    /* 005b667c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b667d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b6680: mov edi, ecx */ r_edi = r_ecx;
    /* 005b6682: mov ecx, edi */ r_ecx = r_edi;
    /* 005b6684: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b6687: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6688: call 0x5b66a8 */ r_esp -= 4; W32(r_esp, 0x5b668du); f_005b66a8();
    /* 005b668d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005b6690: mov eax, dword ptr [edi + 0x3bc] */ r_eax = R32((u32)(r_edi+0x3bcu));
    /* 005b6696: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b6699: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b669c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b669d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b669e: call 0x6e38e0 */ r_esp -= 4; W32(r_esp, 0x5b66a3u); f_006e38e0();
    /* 005b66a3: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b66a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b66a7: ret  */ FN_RET(0x005b667c); r_esp += 4; return;
}

void f_005b66a8(void) /* sub_5B66A8 */
{
    FN_ENTER(0x005b66a8);
    /* 005b66a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b66a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b66aa: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b66ac: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005b66b0: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005b66b5: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5b66bau); f_0082d990();
    /* 005b66ba: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 005b66bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b66bf: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5b66c4u); f_0082d8bc();
    /* 005b66c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b66c5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b66c7: mov edx, 0x92afc8 */ r_edx = 0x92afc8u;
    /* 005b66cc: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5b66d1u); f_0082eab8();
    /* 005b66d1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005b66d6: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x5b66dbu); f_0082eb80();
    /* 005b66db: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005b66de: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b66e0: mov edx, ebp */ r_edx = r_ebp;
    /* 005b66e2: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5b66e7u); f_0082ebac();
    /* 005b66e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b66e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b66e9: ret 4 */ FN_RET(0x005b66a8); r_esp += 8; return;
}

void f_005b66ec(void) /* sub_5B66EC */
{
    FN_ENTER(0x005b66ec);
    /* 005b66ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b66ed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005b66ef: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5b66f4u); f_004f7c84();
    /* 005b66f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b66f6: je 0x5b6704 */ if (fZ) goto L_005b6704;
L_005b66f8:; BB(0x005b66f8);
    /* 005b66f8: mov dword ptr [ebx + 0x39c], 0x3f800000 */ W32((u32)(r_ebx+0x39cu), 0x3f800000u);
    /* 005b6702: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b6703: ret  */ FN_RET(0x005b66ec); r_esp += 4; return;
L_005b6704:; BB(0x005b6704);
    /* 005b6704: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6706: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6708: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b670a: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x5b670fu); f_007b52c4();
    /* 005b670f: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005b6716: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005b6719: mov eax, dword ptr [edx*4 + 0x9c1a24] */ r_eax = R32((u32)(r_edx*4+0x9c1a24u));
    /* 005b6720: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6722: je 0x5b6728 */ if (fZ) goto L_005b6728;
L_005b6724:; BB(0x005b6724);
    /* 005b6724: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b6726: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b6728u); call_ind(t); }
L_005b6728:; BB(0x005b6728);
    /* 005b6728: fld dword ptr [ebx + 0x398] */ FPUSH(R_F32((u32)(r_ebx+0x398u)));
    /* 005b672e: fcomp dword ptr [0x92afc4] */ fx_compare(ST(0), R_F32((u32)(0x92afc4u))); FPOP();
    /* 005b6734: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b6736: mov edx, dword ptr [ebx + 0x398] */ r_edx = R32((u32)(r_ebx+0x398u));
    /* 005b673c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b673d: je 0x5b6751 */ if (fZ) goto L_005b6751;
L_005b673f:; BB(0x005b673f);
    /* 005b673f: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b6742: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6743: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b6745: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b6747: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5b674au); call_ind(t); }
    /* 005b674a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b674c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b674e: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5b6751u); call_ind(t); }
L_005b6751:; BB(0x005b6751);
    /* 005b6751: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b6753: call 0x5b67f4 */ r_esp -= 4; W32(r_esp, 0x5b6758u); f_005b67f4();
    /* 005b6758: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b675a: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x5b675fu); f_007b6894();
    /* 005b675f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b6761: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5b6766u); f_007b798c();
    /* 005b6766: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b6768: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5b676du); f_0078730c();
    /* 005b676d: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005b6773: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005b6779: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005b677c: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005b6782: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005b6785: mov edx, dword ptr [ebx + 0x37c] */ r_edx = R32((u32)(r_ebx+0x37cu));
    /* 005b678b: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005b678e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b6791: jne 0x5b67ab */ if (!fZ) goto L_005b67ab;
L_005b6793:; BB(0x005b6793);
    /* 005b6793: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 005b679a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005b679c: jl 0x5b67ab */ if ((fS!=fO)) goto L_005b67ab;
L_005b679e:; BB(0x005b679e);
    /* 005b679e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b67a0: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5b67a5u); f_007aa094();
    /* 005b67a5: mov edx, dword ptr [ebx + 0x37c] */ r_edx = R32((u32)(r_ebx+0x37cu));
L_005b67ab:; BB(0x005b67ab);
    /* 005b67ab: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b67ae: jne 0x5b67c1 */ if (!fZ) goto L_005b67c1;
L_005b67b0:; BB(0x005b67b0);
    /* 005b67b0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b67b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b67b3: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5b67b8u); f_006946a8();
    /* 005b67b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b67bb: mov edx, dword ptr [ebx + 0x37c] */ r_edx = R32((u32)(r_ebx+0x37cu));
L_005b67c1:; BB(0x005b67c1);
    /* 005b67c1: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b67c4: jne 0x5b67e1 */ if (!fZ) goto L_005b67e1;
L_005b67c6:; BB(0x005b67c6);
    /* 005b67c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b67c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b67ca: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 005b67cd: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b67d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b67d3: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5b67d8u); f_00805608();
    /* 005b67d8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b67db: mov edx, dword ptr [ebx + 0x37c] */ r_edx = R32((u32)(r_ebx+0x37cu));
L_005b67e1:; BB(0x005b67e1);
    /* 005b67e1: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b67e4: je 0x5b67f1 */ if (fZ) goto L_005b67f1;
L_005b67e6:; BB(0x005b67e6);
    /* 005b67e6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b67e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b67ea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b67ec: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x5b67f1u); f_007b52ec();
L_005b67f1:; BB(0x005b67f1);
    /* 005b67f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b67f2: ret  */ FN_RET(0x005b66ec); r_esp += 4; return;
}

void f_005b67f4(void) /* sub_5B67F4 */
{
    FN_ENTER(0x005b67f4);
    /* 005b67f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b67f5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b67f8: mov edi, ecx */ r_edi = r_ecx;
    /* 005b67fa: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005b67fc: mov ecx, edi */ r_ecx = r_edi;
    /* 005b67fe: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b6801: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6802: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005b6804: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5b680au); call_ind(t); }
    /* 005b680a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5b680fu); f_0082d7b0();
    /* 005b680f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b6811: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x5b6816u); f_00830cd8();
    /* 005b6816: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005b6819: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b681b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b681d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5b6822u); f_0082d8bc();
    /* 005b6822: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 005b6825: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 005b6828: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 005b682b: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b682e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005b6830: fchs  */ ST(0) = -ST(0);
    /* 005b6832: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005b6835: fchs  */ ST(0) = -ST(0);
    /* 005b6837: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005b683b: fchs  */ ST(0) = -ST(0);
    /* 005b683d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005b6841: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b6843: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5b6848u); f_00830b74();
    /* 005b6848: push dword ptr [edi + 0xa4] */ { u32 v = R32((u32)(r_edi+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b684e: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005b6852: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b6854: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5b6859u); f_00830aa0();
    /* 005b6859: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5b685eu); f_0082da80();
    /* 005b685e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b6861: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b6862: ret  */ FN_RET(0x005b67f4); r_esp += 4; return;
}

void f_005b6864(void) /* sub_5B6864 */
{
    FN_ENTER(0x005b6864);
    /* 005b6864: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b6865: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b6866: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6867: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6868: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b686b: mov esi, ecx */ r_esi = r_ecx;
    /* 005b686d: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5b6872u); f_004f7c84();
    /* 005b6872: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6877: mov ecx, esi */ r_ecx = r_esi;
    /* 005b6879: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005b687b: mov edi, 1 */ r_edi = 0x1u;
    /* 005b6880: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6885: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x5b6888u); call_ind(t); }
    /* 005b6888: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b688a: jne 0x5b6894 */ if (!fZ) goto L_005b6894;
L_005b688c:; BB(0x005b688c);
    /* 005b688c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b688f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b6890: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b6891: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b6892: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b6893: ret  */ FN_RET(0x005b6864); r_esp += 4; return;
L_005b6894:; BB(0x005b6894);
    /* 005b6894: lea ebp, [esi + 0x3a0] */ r_ebp = (u32)(r_esi+0x3a0u);
    /* 005b689a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b689c: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x5b68a1u); f_005771a4();
    /* 005b68a1: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 005b68a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b68a8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b68aa: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x5b68afu); f_0057725c();
    /* 005b68af: mov ebx, eax */ r_ebx = r_eax;
    /* 005b68b1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b68b3: je 0x5b68cd */ if (fZ) goto L_005b68cd;
L_005b68b5:; BB(0x005b68b5);
    /* 005b68b5: mov edx, dword ptr [esi + 0x3a0] */ r_edx = R32((u32)(r_esi+0x3a0u));
    /* 005b68bb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b68bd: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5b68c0u); call_ind(t); }
    /* 005b68c0: mov ecx, esi */ r_ecx = r_esi;
    /* 005b68c2: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x5b68c7u); f_008173d0();
    /* 005b68c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b68c9: je 0x5b68cd */ if (fZ) goto L_005b68cd;
L_005b68cb:; BB(0x005b68cb);
    /* 005b68cb: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005b68cd:; BB(0x005b68cd);
    /* 005b68cd: fld dword ptr [esi + 0x39c] */ FPUSH(R_F32((u32)(r_esi+0x39cu)));
    /* 005b68d3: fcomp dword ptr [0x92afb4] */ fx_compare(ST(0), R_F32((u32)(0x92afb4u))); FPOP();
    /* 005b68d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b68db: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b68dc: jbe 0x5b69dc */ if ((fC||fZ)) goto L_005b69dc;
L_005b68e2:; BB(0x005b68e2);
    /* 005b68e2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b68e4: je 0x5b69dc */ if (fZ) goto L_005b69dc;
L_005b68ea:; BB(0x005b68ea);
    /* 005b68ea: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5b68efu); f_0082d7b0();
    /* 005b68ef: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 005b68f2: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 005b68f5: fadd dword ptr [esi + 0x3c4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3c4u));
    /* 005b68fb: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 005b68fe: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b6901: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005b6905: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005b6908: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b690a: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 005b690e: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5b6913u); f_00830b74();
    /* 005b6913: mov edx, dword ptr [esi + 0x39c] */ r_edx = R32((u32)(r_esi+0x39cu));
    /* 005b6919: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b691a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b691b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b691d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b691e: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5b6923u); f_0082fa0c();
    /* 005b6923: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005b6926: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b6928: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5b692du); f_0082d8bc();
    /* 005b692d: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 005b6930: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5b6935u); f_00829cc8();
    /* 005b6935: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6937: je 0x5b6942 */ if (fZ) goto L_005b6942;
L_005b6939:; BB(0x005b6939);
    /* 005b6939: mov ecx, esi */ r_ecx = r_esi;
    /* 005b693b: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5b6940u); f_007aa668();
    /* 005b6940: jmp 0x5b69a8 */ goto L_005b69a8;
L_005b6942:; BB(0x005b6942);
    /* 005b6942: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 005b6948: or edx, 0x400000 */ {  u32 a = r_edx; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005b694e: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 005b6954: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005b6959: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b695eu); f_0061cdb0();
    /* 005b695e: mov ecx, esi */ r_ecx = r_esi;
    /* 005b6960: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5b6965u); f_007aa668();
    /* 005b6965: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b696au); f_0061cdb0();
    /* 005b696a: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 005b6970: and edx, 0xffbfffff */ {  u32 a = r_edx; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b6976: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 005b697c: mov ecx, 2 */ r_ecx = 0x2u;
    /* 005b6981: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b6986u); f_0061cdb0();
    /* 005b6986: call 0x7a954c */ r_esp -= 4; W32(r_esp, 0x5b698bu); f_007a954c();
    /* 005b698b: mov ecx, esi */ r_ecx = r_esi;
    /* 005b698d: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5b6992u); f_007aa668();
    /* 005b6992: call 0x7a9558 */ r_esp -= 4; W32(r_esp, 0x5b6997u); f_007a9558();
    /* 005b6997: mov ecx, esi */ r_ecx = r_esi;
    /* 005b6999: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5b699eu); f_007aa668();
    /* 005b699e: call 0x7a9564 */ r_esp -= 4; W32(r_esp, 0x5b69a3u); f_007a9564();
    /* 005b69a3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b69a8u); f_0061cdb0();
L_005b69a8:; BB(0x005b69a8);
    /* 005b69a8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5b69adu); f_0082da80();
    /* 005b69ad: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005b69b0: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b69b6: jne 0x5b69dc */ if (!fZ) goto L_005b69dc;
L_005b69b8:; BB(0x005b69b8);
    /* 005b69b8: mov dword ptr [esp], 0x40000000 */ W32((u32)(r_esp), 0x40000000u);
    /* 005b69bf: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005b69c2: mov ecx, esi */ r_ecx = r_esi;
    /* 005b69c4: mov dword ptr [esp + 4], 0x40000000 */ W32((u32)(r_esp+0x4u), 0x40000000u);
    /* 005b69cc: mov dword ptr [esp + 8], 0x40000000 */ W32((u32)(r_esp+0x8u), 0x40000000u);
    /* 005b69d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b69d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b69d7: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x5b69dcu); f_00779d4c();
L_005b69dc:; BB(0x005b69dc);
    /* 005b69dc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b69de: je 0x5b69eb */ if (fZ) goto L_005b69eb;
L_005b69e0:; BB(0x005b69e0);
    /* 005b69e0: mov eax, dword ptr [esi + 0x3a0] */ r_eax = R32((u32)(r_esi+0x3a0u));
    /* 005b69e6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b69e8: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x5b69ebu); call_ind(t); }
L_005b69eb:; BB(0x005b69eb);
    /* 005b69eb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b69ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b69ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b69f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b69f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b69f2: ret  */ FN_RET(0x005b6864); r_esp += 4; return;
}

void f_005b69f4(void) /* sub_5B69F4 */
{
    FN_ENTER(0x005b69f4);
    /* 005b69f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b69f5: mov edi, ecx */ r_edi = r_ecx;
    /* 005b69f7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005b69fa: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 005b6a00: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b6a05: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b6a08: je 0x5b6a0f */ if (fZ) goto L_005b6a0f;
L_005b6a0a:; BB(0x005b6a0a);
    /* 005b6a0a: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005b6a0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b6a0e: ret  */ FN_RET(0x005b69f4); r_esp += 4; return;
L_005b6a0f:; BB(0x005b6a0f);
    /* 005b6a0f: mov dword ptr [edi + 0x398], 0 */ W32((u32)(r_edi+0x398u), 0x0u);
    /* 005b6a19: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b6a1e: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005b6a21: movzx eax, word ptr [edi + 0x32e] */ r_eax = (u32)R16((u32)(r_edi+0x32eu));
    /* 005b6a28: mov dword ptr [edi + 0x39c], 0x3f800000 */ W32((u32)(r_edi+0x39cu), 0x3f800000u);
    /* 005b6a32: and edx, 0xfffffff1 */ {  u32 a = r_edx; u32 b = 0xfffffff1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b6a35: mov dword ptr [edi + 0x37c], edx */ W32((u32)(r_edi+0x37cu), r_edx);
    /* 005b6a3b: mov word ptr [edi + 0x332], ax */ W16((u32)(r_edi+0x332u), (u16)r_eax);
    /* 005b6a42: mov edx, 5 */ r_edx = 0x5u;
    /* 005b6a47: mov word ptr [edi + 0x32e], dx */ W16((u32)(r_edi+0x32eu), (u16)r_edx);
    /* 005b6a4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b6a50: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 005b6a57: mov ecx, edi */ r_ecx = r_edi;
    /* 005b6a59: push dword ptr [0x9c1a8c] */ { u32 v = R32((u32)(0x9c1a8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b6a5f: call 0x5b5de0 */ r_esp -= 4; W32(r_esp, 0x5b6a64u); f_005b5de0();
    /* 005b6a64: movzx eax, word ptr [0x9c1a90] */ r_eax = (u32)R16((u32)(0x9c1a90u));
    /* 005b6a6b: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005b6a72: mov edx, dword ptr [0x9c1a94] */ r_edx = R32((u32)(0x9c1a94u));
    /* 005b6a78: or dword ptr [edi + 0x37c], edx */ { u32 ad = (u32)(r_edi+0x37cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b6a7e: mov eax, dword ptr [0x9c1a84] */ r_eax = R32((u32)(0x9c1a84u));
    /* 005b6a83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b6a85: je 0x5b6a8b */ if (fZ) goto L_005b6a8b;
L_005b6a87:; BB(0x005b6a87);
    /* 005b6a87: mov ecx, edi */ r_ecx = r_edi;
    /* 005b6a89: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b6a8bu); call_ind(t); }
L_005b6a8b:; BB(0x005b6a8b);
    /* 005b6a8b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b6a8c: ret  */ FN_RET(0x005b69f4); r_esp += 4; return;
}

void f_005b6a90(void) /* sub_5B6A90 */
{
    FN_ENTER(0x005b6a90);
    /* 005b6a90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b6a91: mov edi, ecx */ r_edi = r_ecx;
    /* 005b6a93: movsx ecx, word ptr [edi + 0x32e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 005b6a9a: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b6a9d: je 0x5b6b21 */ if (fZ) goto L_005b6b21;
L_005b6aa3:; BB(0x005b6aa3);
    /* 005b6aa3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005b6aa6: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 005b6aac: mov dword ptr [edi + 0x398], 0 */ W32((u32)(r_edi+0x398u), 0x0u);
    /* 005b6ab6: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b6abb: mov dword ptr [edi + 0x39c], 0x3f800000 */ W32((u32)(r_edi+0x39cu), 0x3f800000u);
    /* 005b6ac5: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005b6ac8: and edx, 0xfffffff1 */ {  u32 a = r_edx; u32 b = 0xfffffff1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b6acb: mov dword ptr [edi + 0x37c], edx */ W32((u32)(r_edi+0x37cu), r_edx);
    /* 005b6ad1: mov word ptr [edi + 0x332], cx */ W16((u32)(r_edi+0x332u), (u16)r_ecx);
    /* 005b6ad8: mov eax, 6 */ r_eax = 0x6u;
    /* 005b6add: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 005b6ae4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b6ae6: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 005b6aed: mov ecx, edi */ r_ecx = r_edi;
    /* 005b6aef: push dword ptr [0x9c1aa0] */ { u32 v = R32((u32)(0x9c1aa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b6af5: call 0x5b5de0 */ r_esp -= 4; W32(r_esp, 0x5b6afau); f_005b5de0();
    /* 005b6afa: movzx eax, word ptr [0x9c1aa4] */ r_eax = (u32)R16((u32)(0x9c1aa4u));
    /* 005b6b01: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005b6b08: mov edx, dword ptr [0x9c1aa8] */ r_edx = R32((u32)(0x9c1aa8u));
    /* 005b6b0e: or dword ptr [edi + 0x37c], edx */ { u32 ad = (u32)(r_edi+0x37cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b6b14: mov eax, dword ptr [0x9c1a98] */ r_eax = R32((u32)(0x9c1a98u));
    /* 005b6b19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b6b1b: je 0x5b6b21 */ if (fZ) goto L_005b6b21;
L_005b6b1d:; BB(0x005b6b1d);
    /* 005b6b1d: mov ecx, edi */ r_ecx = r_edi;
    /* 005b6b1f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b6b21u); call_ind(t); }
L_005b6b21:; BB(0x005b6b21);
    /* 005b6b21: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b6b22: ret  */ FN_RET(0x005b6a90); r_esp += 4; return;
}

void f_005b6b24(void)
{
    FN_ENTER(0x005b6b24);
    /* 005b6b24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6b25: mov ebp, esp */ r_ebp = r_esp;
    /* 005b6b27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b6b29: push 0x8d919a */ { u32 v = 0x8d919au; r_esp -= 4; W32(r_esp, v); }
    /* 005b6b2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b6b34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6b35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005b6b3c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b6b3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005b6b42: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005b6b45: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005b6b48: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005b6b4b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6b4d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005b6b54: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5b6b59u); f_005caba4();
    /* 005b6b59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b6b5a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005b6b5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6b5f: je 0x5b6be7 */ if (fZ) goto L_005b6be7;
L_005b6b65:; BB(0x005b6b65);
    /* 005b6b65: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005b6b6c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b6b73: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b6b79: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b6b7c: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x5b6b81u); f_00787a4c();
    /* 005b6b81: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b6b84: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005b6b8b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005b6b8e:; BB(0x005b6b8e);
    /* 005b6b8e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b6b95: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005b6b9c: push 0x3dc */ { u32 v = 0x3dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b6ba1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5b6ba6u); f_005caba4();
    /* 005b6ba6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b6ba7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005b6baa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6bac: je 0x5b6be3 */ if (fZ) goto L_005b6be3;
L_005b6bae:; BB(0x005b6bae);
    /* 005b6bae: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005b6bb5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005b6bbc: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b6bbf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b6bc2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6bc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6bc6: call 0x5b6bf0 */ r_esp -= 4; W32(r_esp, 0x5b6bcbu); f_005b6bf0();
    /* 005b6bcb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6bce: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005b6bd5:; BB(0x005b6bd5);
    /* 005b6bd5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b6bd8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b6bdf: mov esp, ebp */ r_esp = r_ebp;
    /* 005b6be1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b6be2: ret  */ FN_RET(0x005b6b24); r_esp += 4; return;
L_005b6be3:; BB(0x005b6be3);
    /* 005b6be3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b6be5: jmp 0x5b6bd5 */ goto L_005b6bd5;
L_005b6be7:; BB(0x005b6be7);
    /* 005b6be7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b6be9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b6bec: jmp 0x5b6b8e */ goto L_005b6b8e;
}

void f_005b6bf0(void) /* sub_5B6BF0 */
{
    FN_ENTER(0x005b6bf0);
    /* 005b6bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b6bf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b6bf5: push 0x8d91c8 */ { u32 v = 0x8d91c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6bfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b6c00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6c01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005b6c08: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b6c0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005b6c0e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005b6c11: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005b6c14: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005b6c17: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b6c1a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b6c1d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005b6c20: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b6c23: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x5b6c28u); f_007865e8();
    /* 005b6c28: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b6c2f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6c32: mov dword ptr [ecx], 0xb0b6a0 */ W32((u32)(r_ecx), 0xb0b6a0u);
    /* 005b6c38: add ecx, 0x3a0 */ {  u32 a = r_ecx; u32 b = 0x3a0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b6c3e: call 0x57713c */ r_esp -= 4; W32(r_esp, 0x5b6c43u); f_0057713c();
    /* 005b6c43: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005b6c4a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6c4d: mov eax, dword ptr [0x9c1d84] */ r_eax = R32((u32)(0x9c1d84u));
    /* 005b6c52: mov edx, dword ptr [0xa74a10] */ r_edx = R32((u32)(0xa74a10u));
    /* 005b6c58: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005b6c5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6c5d: je 0x5b6e7f */ if (fZ) goto L_005b6e7f;
L_005b6c63:; BB(0x005b6c63);
    /* 005b6c63: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b6c66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6c67: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b6c69: call dword ptr [edx + 0x14c] */ { u32 t = R32((u32)(r_edx+0x14cu)); r_esp -= 4; W32(r_esp, 0x5b6c6fu); call_ind(t); }
    /* 005b6c6f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6c72: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005b6c74: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x5b6c7au); call_ind(t); }
    /* 005b6c7a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6c7d: movsx edx, word ptr [eax + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2cu));
    /* 005b6c81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6c82: call 0x813038 */ r_esp -= 4; W32(r_esp, 0x5b6c87u); f_00813038();
    /* 005b6c87: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b6c88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6c8a: jne 0x5b6c98 */ if (!fZ) goto L_005b6c98;
L_005b6c8c:; BB(0x005b6c8c);
    /* 005b6c8c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b6c8f: movzx edx, word ptr [eax + 0x3c] */ r_edx = (u32)R16((u32)(r_eax+0x3cu));
    /* 005b6c93: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b6c96: je 0x5b6c9f */ if (fZ) goto L_005b6c9f;
L_005b6c98:; BB(0x005b6c98);
    /* 005b6c98: mov eax, 1 */ r_eax = 0x1u;
    /* 005b6c9d: jmp 0x5b6ca1 */ goto L_005b6ca1;
L_005b6c9f:; BB(0x005b6c9f);
    /* 005b6c9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005b6ca1:; BB(0x005b6ca1);
    /* 005b6ca1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6ca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6ca5: call 0x5b6ea0 */ r_esp -= 4; W32(r_esp, 0x5b6caau); f_005b6ea0();
    /* 005b6caa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6cad: call 0x5b6ebc */ r_esp -= 4; W32(r_esp, 0x5b6cb2u); f_005b6ebc();
    /* 005b6cb2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6cb5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6cb7: push 0x9c1d88 */ { u32 v = 0x9c1d88u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6cbc: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x5b6cc1u); f_007b9a88();
    /* 005b6cc1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6cc4: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x5b6cc9u); f_007b4f54();
    /* 005b6cc9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6ccc: call 0x5b6edc */ r_esp -= 4; W32(r_esp, 0x5b6cd1u); f_005b6edc();
    /* 005b6cd1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6cd4: mov eax, dword ptr [0xa74a10] */ r_eax = R32((u32)(0xa74a10u));
    /* 005b6cd9: mov dword ptr [ecx + 0xd8], 0x9c1980 */ W32((u32)(r_ecx+0xd8u), 0x9c1980u);
    /* 005b6ce3: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005b6ce9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6ceb: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 005b6cf1: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x5b6cf6u); f_007aa4c8();
    /* 005b6cf6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6cf9: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005b6cff: mov ecx, dword ptr [edx + 0x380] */ r_ecx = R32((u32)(r_edx+0x380u));
    /* 005b6d05: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005b6d07: mov word ptr [edx + 0xb8], di */ W16((u32)(r_edx+0xb8u), (u16)r_edi);
    /* 005b6d0e: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b6d11: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 005b6d17: lea edi, [ecx + ecx*4] */ r_edi = (u32)(r_ecx+r_ecx*4);
    /* 005b6d1a: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 005b6d1d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b6d1f: push dword ptr [ebx + 0x9c1db8] */ { u32 v = R32((u32)(r_ebx+0x9c1db8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b6d25: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5b6d2au); f_0077a684();
    /* 005b6d2a: mov esi, eax */ r_esi = r_eax;
    /* 005b6d2c: push dword ptr [edi*4 + 0x9c1db8] */ { u32 v = R32((u32)(r_edi*4+0x9c1db8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b6d33: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5b6d38u); f_0077a698();
    /* 005b6d38: mov ebx, eax */ r_ebx = r_eax;
    /* 005b6d3a: push dword ptr [edi*4 + 0x9c1db8] */ { u32 v = R32((u32)(r_edi*4+0x9c1db8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b6d41: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5b6d46u); f_0077a6b4();
    /* 005b6d46: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b6d49: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6d4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d4d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d4e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d4f: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x5b6d54u); f_007868f8();
    /* 005b6d54: push dword ptr [edi*4 + 0x9c1db8] */ { u32 v = R32((u32)(r_edi*4+0x9c1db8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b6d5b: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5b6d60u); f_0077a6cc();
    /* 005b6d60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b6d61: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6d64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d66: mov dword ptr [ecx + 0x3bc], eax */ W32((u32)(r_ecx+0x3bcu), r_eax);
    /* 005b6d6c: mov eax, dword ptr [ecx + 0x2e8] */ r_eax = R32((u32)(r_ecx+0x2e8u));
    /* 005b6d72: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b6d75: mov dword ptr [ecx + 0x2e8], eax */ W32((u32)(r_ecx+0x2e8u), r_eax);
    /* 005b6d7b: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 005b6d7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d7f: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5b6d84u); f_007b4c58();
    /* 005b6d84: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6d87: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5b6d8cu); f_0078730c();
    /* 005b6d8c: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6d8f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6d92: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005b6d98: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005b6d9e: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 005b6da4: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005b6da7: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005b6daa: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 005b6dad: mov dword ptr [ecx + 0x37c], 0 */ W32((u32)(r_ecx+0x37cu), 0x0u);
    /* 005b6db7: add ecx, 0x3a0 */ {  u32 a = r_ecx; u32 b = 0x3a0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b6dbd: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x5b6dc2u); f_0057739c();
    /* 005b6dc2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6dc5: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005b6dc8: mov edx, dword ptr [ecx + 0x37c] */ r_edx = R32((u32)(r_ecx+0x37cu));
    /* 005b6dce: movzx ebx, word ptr [ecx + 0x32e] */ r_ebx = (u32)R16((u32)(r_ecx+0x32eu));
    /* 005b6dd5: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b6dda: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 005b6ddd: mov dword ptr [ecx + 0x3c4], 0 */ W32((u32)(r_ecx+0x3c4u), 0x0u);
    /* 005b6de7: and edx, 0xfffffff1 */ {  u32 a = r_edx; u32 b = 0xfffffff1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b6dea: mov dword ptr [ecx + 0x37c], edx */ W32((u32)(r_ecx+0x37cu), r_edx);
    /* 005b6df0: mov word ptr [ecx + 0x332], bx */ W16((u32)(r_ecx+0x332u), (u16)r_ebx);
    /* 005b6df7: mov dword ptr [ecx + 0x398], 0 */ W32((u32)(r_ecx+0x398u), 0x0u);
    /* 005b6e01: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005b6e03: mov word ptr [ecx + 0x32e], si */ W16((u32)(r_ecx+0x32eu), (u16)r_esi);
    /* 005b6e0a: mov word ptr [ecx + 0x330], si */ W16((u32)(r_ecx+0x330u), (u16)r_esi);
    /* 005b6e11: mov dword ptr [ecx + 0x39c], 0x3f800000 */ W32((u32)(r_ecx+0x39cu), 0x3f800000u);
    /* 005b6e1b: push dword ptr [0x9c1a28] */ { u32 v = R32((u32)(0x9c1a28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b6e21: call 0x5b5de0 */ r_esp -= 4; W32(r_esp, 0x5b6e26u); f_005b5de0();
    /* 005b6e26: movzx eax, word ptr [0x9c1a2c] */ r_eax = (u32)R16((u32)(0x9c1a2cu));
    /* 005b6e2d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6e30: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005b6e37: mov edx, dword ptr [0x9c1a30] */ r_edx = R32((u32)(0x9c1a30u));
    /* 005b6e3d: or dword ptr [ecx + 0x37c], edx */ { u32 ad = (u32)(r_ecx+0x37cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b6e43: mov eax, dword ptr [0x9c1a20] */ r_eax = R32((u32)(0x9c1a20u));
    /* 005b6e48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b6e4a: je 0x5b6e51 */ if (fZ) goto L_005b6e51;
L_005b6e4c:; BB(0x005b6e4c);
    /* 005b6e4c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b6e4eu); call_ind(t); }
    /* 005b6e4e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_005b6e51:; BB(0x005b6e51);
    /* 005b6e51: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b6e54: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b6e57: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 005b6e5a: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 005b6e5d: mov edi, dword ptr [ecx + 0x40] */ r_edi = R32((u32)(r_ecx+0x40u));
    /* 005b6e60: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 005b6e63: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 005b6e66: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6e69: mov dword ptr [ecx + 0x4c], edi */ W32((u32)(r_ecx+0x4cu), r_edi);
    /* 005b6e6c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b6e6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b6e72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b6e79: mov esp, ebp */ r_esp = r_ebp;
    /* 005b6e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b6e7c: ret 8 */ FN_RET(0x005b6bf0); r_esp += 12; return;
L_005b6e7f:; BB(0x005b6e7f);
    /* 005b6e7f: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 005b6e83: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b6e89: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 005b6e8d: mov eax, ecx */ r_eax = r_ecx;
    /* 005b6e8f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b6e92: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b6e99: mov esp, ebp */ r_esp = r_ebp;
    /* 005b6e9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b6e9c: ret 8 */ FN_RET(0x005b6bf0); r_esp += 12; return;
}

void f_005b6d8d(void)
{
    FN_ENTER(0x005b6d8d);
    goto L_005b6d8d;
L_005b6d6b:; BB(0x005b6d6b);
    /* 005b6d6b: add byte ptr [ebx + 0x2e881], cl */ { u32 ad = (u32)(r_ebx+0x2e881u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b6d71: add byte ptr [ebx - 0x7e76fd38], al */ { u32 ad = (u32)(r_ebx+0x818902c8u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b6d77: call 0x8d5b6d7e */ r_esp -= 4; W32(r_esp, 0x5b6d7cu); f_8d5b6d7e();
    /* 005b6d7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d7d: cmp byte ptr [edx - 0x18], dl */ {  u32 a = R8((u32)(r_edx+0xffffffe8u)); u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;   }
    /* 005b6d80: aam 0xde */ UNSUP(0x005b6d80, "aam 0xde");
    /* 005b6d82: pop ds */ UNSUP(0x005b6d82, "pop ds");
    /* 005b6d83: add byte ptr [ebx - 0x7f1723b3], cl */ { u32 ad = (u32)(r_ebx+0x80e8dc4du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b6d89: add eax, 0x758b001d */ {  u32 a = r_eax; u32 b = 0x758b001du; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_005b6d8d:; BB(0x005b6d8d);
    /* 005b6d8d: jne 0x5b6d6b */ if (!fZ) goto L_005b6d6b;
    /* 005b6d8e: fmul qword ptr [ebx - 0x797423b3] */ ST(0) = ST(0) * R_F64((u32)(r_ebx+0x868bdc4du));
L_005b6d8f:; BB(0x005b6d8f);
    /* 005b6d8f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6d92: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005b6d94: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b6d96: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b6d98: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005b6d9e: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 005b6da4: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005b6da7: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005b6daa: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 005b6dad: mov dword ptr [ecx + 0x37c], 0 */ W32((u32)(r_ecx+0x37cu), 0x0u);
    /* 005b6db7: add ecx, 0x3a0 */ {  u32 a = r_ecx; u32 b = 0x3a0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b6dbd: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x5b6dc2u); f_0057739c();
    /* 005b6dc2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6dc5: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005b6dc8: mov edx, dword ptr [ecx + 0x37c] */ r_edx = R32((u32)(r_ecx+0x37cu));
    /* 005b6dce: movzx ebx, word ptr [ecx + 0x32e] */ r_ebx = (u32)R16((u32)(r_ecx+0x32eu));
    /* 005b6dd5: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b6dda: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 005b6ddd: mov dword ptr [ecx + 0x3c4], 0 */ W32((u32)(r_ecx+0x3c4u), 0x0u);
    /* 005b6de7: and edx, 0xfffffff1 */ {  u32 a = r_edx; u32 b = 0xfffffff1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b6dea: mov dword ptr [ecx + 0x37c], edx */ W32((u32)(r_ecx+0x37cu), r_edx);
    /* 005b6df0: mov word ptr [ecx + 0x332], bx */ W16((u32)(r_ecx+0x332u), (u16)r_ebx);
    /* 005b6df7: mov dword ptr [ecx + 0x398], 0 */ W32((u32)(r_ecx+0x398u), 0x0u);
    /* 005b6e01: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005b6e03: mov word ptr [ecx + 0x32e], si */ W16((u32)(r_ecx+0x32eu), (u16)r_esi);
    /* 005b6e0a: mov word ptr [ecx + 0x330], si */ W16((u32)(r_ecx+0x330u), (u16)r_esi);
    /* 005b6e11: mov dword ptr [ecx + 0x39c], 0x3f800000 */ W32((u32)(r_ecx+0x39cu), 0x3f800000u);
    /* 005b6e1b: push dword ptr [0x9c1a28] */ { u32 v = R32((u32)(0x9c1a28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b6e21: call 0x5b5de0 */ r_esp -= 4; W32(r_esp, 0x5b6e26u); f_005b5de0();
    /* 005b6e26: movzx eax, word ptr [0x9c1a2c] */ r_eax = (u32)R16((u32)(0x9c1a2cu));
    /* 005b6e2d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6e30: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005b6e37: mov edx, dword ptr [0x9c1a30] */ r_edx = R32((u32)(0x9c1a30u));
    /* 005b6e3d: or dword ptr [ecx + 0x37c], edx */ { u32 ad = (u32)(r_ecx+0x37cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b6e43: mov eax, dword ptr [0x9c1a20] */ r_eax = R32((u32)(0x9c1a20u));
    /* 005b6e48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b6e4a: je 0x5b6e51 */ if (fZ) goto L_005b6e51;
L_005b6e4c:; BB(0x005b6e4c);
    /* 005b6e4c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b6e4eu); call_ind(t); }
    /* 005b6e4e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_005b6e51:; BB(0x005b6e51);
    /* 005b6e51: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b6e54: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b6e57: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 005b6e5a: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 005b6e5d: mov edi, dword ptr [ecx + 0x40] */ r_edi = R32((u32)(r_ecx+0x40u));
    /* 005b6e60: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 005b6e63: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 005b6e66: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6e69: mov dword ptr [ecx + 0x4c], edi */ W32((u32)(r_ecx+0x4cu), r_edi);
    /* 005b6e6c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b6e6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b6e72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b6e79: mov esp, ebp */ r_esp = r_ebp;
    /* 005b6e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b6e7c: ret 8 */ FN_RET(0x005b6d8d); r_esp += 12; return;
}

void f_005b6ea0(void) /* sub_5B6EA0 */
{
    FN_ENTER(0x005b6ea0);
    /* 005b6ea0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005b6ea4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b6ea6: je 0x5b6eaf */ if (fZ) goto L_005b6eaf;
L_005b6ea8:; BB(0x005b6ea8);
    /* 005b6ea8: mov eax, 1 */ r_eax = 0x1u;
    /* 005b6ead: jmp 0x5b6eb1 */ goto L_005b6eb1;
L_005b6eaf:; BB(0x005b6eaf);
    /* 005b6eaf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_005b6eb1:; BB(0x005b6eb1);
    /* 005b6eb1: mov dword ptr [ecx + 0x380], eax */ W32((u32)(r_ecx+0x380u), r_eax);
    /* 005b6eb7: ret 4 */ FN_RET(0x005b6ea0); r_esp += 8; return;
}

void f_005b6ebc(void) /* sub_5B6EBC */
{
    FN_ENTER(0x005b6ebc);
    /* 005b6ebc: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 005b6ec2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6ec4: jne 0x5b6ecd */ if (!fZ) goto L_005b6ecd;
L_005b6ec6:; BB(0x005b6ec6);
    /* 005b6ec6: mov eax, 0x5b */ r_eax = 0x5bu;
    /* 005b6ecb: jmp 0x5b6ed2 */ goto L_005b6ed2;
L_005b6ecd:; BB(0x005b6ecd);
    /* 005b6ecd: mov eax, 0x5c */ r_eax = 0x5cu;
L_005b6ed2:; BB(0x005b6ed2);
    /* 005b6ed2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6ed3: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x5b6ed8u); f_00787550();
    /* 005b6ed8: ret  */ FN_RET(0x005b6ebc); r_esp += 4; return;
}

void f_005b6edc(void) /* sub_5B6EDC */
{
    FN_ENTER(0x005b6edc);
    /* 005b6edc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6edd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005b6edf: push dword ptr [ebx + 0x380] */ { u32 v = R32((u32)(r_ebx+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b6ee5: mov ecx, dword ptr [0xa74a10] */ r_ecx = R32((u32)(0xa74a10u));
    /* 005b6eeb: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x5b6ef0u); f_005b8610();
    /* 005b6ef0: push dword ptr [ebx + 0x380] */ { u32 v = R32((u32)(r_ebx+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b6ef6: mov ecx, dword ptr [0xa74a10] */ r_ecx = R32((u32)(0xa74a10u));
    /* 005b6efc: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 005b6eff: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x5b6f04u); f_005b8624();
    /* 005b6f04: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 005b6f07: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b6f08: ret  */ FN_RET(0x005b6edc); r_esp += 4; return;
}

void f_005b6f0c(void) /* sub_5B6F0C */
{
    FN_ENTER(0x005b6f0c);
    /* 005b6f0c: mov ecx, dword ptr [0xa74a10] */ r_ecx = R32((u32)(0xa74a10u));
    /* 005b6f12: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b6f14: je 0x5b6f29 */ if (fZ) goto L_005b6f29;
L_005b6f16:; BB(0x005b6f16);
    /* 005b6f16: je 0x5b6f1f */ if (fZ) goto L_005b6f1f;
L_005b6f18:; BB(0x005b6f18);
    /* 005b6f18: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6f1a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5b6f1fu); f_004066a8();
L_005b6f1f:; BB(0x005b6f1f);
    /* 005b6f1f: mov dword ptr [0xa74a10], 0 */ W32((u32)(0xa74a10u), 0x0u);
L_005b6f29:; BB(0x005b6f29);
    /* 005b6f29: ret  */ FN_RET(0x005b6f0c); r_esp += 4; return;
}

