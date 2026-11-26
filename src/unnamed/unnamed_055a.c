#include "protos.h"

void f_0055a124(void) /* sub_55A124 */
{
    FN_ENTER(0x0055a124);
    /* 0055a124: mov eax, dword ptr [ecx + 0x448] */ r_eax = R32((u32)(r_ecx+0x448u));
    /* 0055a12a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055a12d: mov dword ptr [ecx + 0x448], eax */ W32((u32)(r_ecx+0x448u), r_eax);
    /* 0055a133: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055a135: jg 0x55a146 */ if ((!fZ&&fS==fO)) goto L_0055a146;
L_0055a137:; BB(0x0055a137);
    /* 0055a137: mov eax, dword ptr [ecx + 0x440] */ r_eax = R32((u32)(r_ecx+0x440u));
    /* 0055a13d: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055a140: mov dword ptr [ecx + 0x440], eax */ W32((u32)(r_ecx+0x440u), r_eax);
L_0055a146:; BB(0x0055a146);
    /* 0055a146: ret  */ FN_RET(0x0055a124); r_esp += 4; return;
}

void f_0055a148(void) /* sub_55A148 */
{
    FN_ENTER(0x0055a148);
    /* 0055a148: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055a149: mov esi, ecx */ r_esi = r_ecx;
    /* 0055a14b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055a14f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a152: je 0x55a192 */ if (fZ) goto L_0055a192;
L_0055a154:; BB(0x0055a154);
    /* 0055a154: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a157: je 0x55a172 */ if (fZ) goto L_0055a172;
L_0055a159:; BB(0x0055a159);
    /* 0055a159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055a15b: jne 0x55a18e */ if (!fZ) goto L_0055a18e;
L_0055a15d:; BB(0x0055a15d);
    /* 0055a15d: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a15f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55a164u); f_007aa094();
    /* 0055a164: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055a166: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a168: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x55a16eu); call_ind(t); }
    /* 0055a16e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055a16f: ret 4 */ FN_RET(0x0055a148); r_esp += 8; return;
L_0055a172:; BB(0x0055a172);
    /* 0055a172: mov eax, dword ptr [esi + 0x4c8] */ r_eax = R32((u32)(r_esi+0x4c8u));
    /* 0055a178: lea ecx, [esi + 0x4c8] */ r_ecx = (u32)(r_esi+0x4c8u);
    /* 0055a17e: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x55a181u); call_ind(t); }
    /* 0055a181: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055a183: je 0x55a18e */ if (fZ) goto L_0055a18e;
L_0055a185:; BB(0x0055a185);
    /* 0055a185: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a187: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a189: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55a18eu); f_0051f62c();
L_0055a18e:; BB(0x0055a18e);
    /* 0055a18e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055a18f: ret 4 */ FN_RET(0x0055a148); r_esp += 8; return;
L_0055a192:; BB(0x0055a192);
    /* 0055a192: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a194: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a196: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55a19bu); f_0051f664();
    /* 0055a19b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055a19d: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a19f: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x55a1a5u); call_ind(t); }
    /* 0055a1a5: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 0055a1ab: or eax, 0x42 */ {  u32 a = r_eax; u32 b = 0x42u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055a1ae: and eax, 0xfffffdfe */ {  u32 a = r_eax; u32 b = 0xfffffdfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055a1b3: mov dword ptr [esi + 0x440], eax */ W32((u32)(r_esi+0x440u), r_eax);
    /* 0055a1b9: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a1bb: call 0x5592a0 */ r_esp -= 4; W32(r_esp, 0x55a1c0u); f_005592a0();
    /* 0055a1c0: add esi, 0x4c8 */ {  u32 a = r_esi; u32 b = 0x4c8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0055a1c6: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a1c8: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x55a1cdu); f_00576c48();
    /* 0055a1cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055a1ce: ret 4 */ FN_RET(0x0055a148); r_esp += 8; return;
}

void f_0055a1d4(void) /* sub_55A1D4 */
{
    FN_ENTER(0x0055a1d4);
    /* 0055a1d4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055a1d7: fld dword ptr [0x9253e8] */ FPUSH(R_F32((u32)(0x9253e8u)));
    /* 0055a1dd: fadd dword ptr [ecx + 0x35c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x35cu));
    /* 0055a1e3: mov edx, 5 */ r_edx = 0x5u;
    /* 0055a1e8: fld dword ptr [0x9253f4] */ FPUSH(R_F32((u32)(0x9253f4u)));
    /* 0055a1ee: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0055a1f0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055a1f2: fld dword ptr [0x9253f0] */ FPUSH(R_F32((u32)(0x9253f0u)));
    /* 0055a1f8: fadd dword ptr [ecx + 0x360] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x360u));
    /* 0055a1fe: fld dword ptr [0x9253ec] */ FPUSH(R_F32((u32)(0x9253ecu)));
    /* 0055a204: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055a205: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0055a207: jb 0x55a20b */ if (fC) goto L_0055a20b;
L_0055a209:; BB(0x0055a209);
    /* 0055a209: fst st(3) */ ST(3) = ST(0);
L_0055a20b:; BB(0x0055a20b);
    /* 0055a20b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055a20d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0055a210: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0055a214: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055a219: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0055a21d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0055a221: fistp dword ptr [ecx + 0x464] */ W32((u32)(r_ecx+0x464u), (u32)fx_int32(ST(0))); FPOP();
    /* 0055a227: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0055a22a: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0055a22c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055a22e: fld dword ptr [ecx + 0x364] */ FPUSH(R_F32((u32)(r_ecx+0x364u)));
    /* 0055a234: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0055a236: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055a237: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055a239: jb 0x55a23d */ if (fC) goto L_0055a23d;
L_0055a23b:; BB(0x0055a23b);
    /* 0055a23b: fst st(3) */ ST(3) = ST(0);
L_0055a23d:; BB(0x0055a23d);
    /* 0055a23d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055a23f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0055a242: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0055a246: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055a24b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0055a24f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0055a253: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0055a257: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0055a25a: fld dword ptr [ecx + 0x368] */ FPUSH(R_F32((u32)(r_ecx+0x368u)));
    /* 0055a260: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0055a264: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0055a266: fstp dword ptr [ecx + 0x460] */ W_F32((u32)(r_ecx+0x460u), ST(0)); FPOP();
    /* 0055a26c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0055a26e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055a271: jg 0x55a275 */ if ((!fZ&&fS==fO)) goto L_0055a275;
L_0055a273:; BB(0x0055a273);
    /* 0055a273: mov eax, edx */ r_eax = r_edx;
L_0055a275:; BB(0x0055a275);
    /* 0055a275: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0055a278: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055a27a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055a27c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055a27e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055a280: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0055a282: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0055a284: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0055a287: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0055a28b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055a290: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0055a294: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0055a298: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0055a29c: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0055a29f: mov dword ptr [ecx + 0x458], edx */ W32((u32)(r_ecx+0x458u), r_edx);
    /* 0055a2a5: mov eax, 5 */ r_eax = 0x5u;
    /* 0055a2aa: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0055a2ae: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055a2b1: jg 0x55a2b5 */ if ((!fZ&&fS==fO)) goto L_0055a2b5;
L_0055a2b3:; BB(0x0055a2b3);
    /* 0055a2b3: mov edx, eax */ r_edx = r_eax;
L_0055a2b5:; BB(0x0055a2b5);
    /* 0055a2b5: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0055a2b8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055a2ba: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055a2bc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055a2be: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055a2c0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0055a2c2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0055a2c4: mov dword ptr [ecx + 0x45c], eax */ W32((u32)(r_ecx+0x45cu), r_eax);
    /* 0055a2ca: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055a2cd: ret  */ FN_RET(0x0055a1d4); r_esp += 4; return;
}

void f_0055a2d0(void) /* sub_55A2D0 */
{
    FN_ENTER(0x0055a2d0);
    /* 0055a2d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055a2d1: mov edi, ecx */ r_edi = r_ecx;
    /* 0055a2d3: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x55a2d8u); f_004f7c84();
    /* 0055a2d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a2da: je 0x55a2e8 */ if (fZ) goto L_0055a2e8;
L_0055a2dc:; BB(0x0055a2dc);
    /* 0055a2dc: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055a2de: mov ecx, edi */ r_ecx = r_edi;
    /* 0055a2e0: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x55a2e6u); call_ind(t); }
    /* 0055a2e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055a2e7: ret  */ FN_RET(0x0055a2d0); r_esp += 4; return;
L_0055a2e8:; BB(0x0055a2e8);
    /* 0055a2e8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055a2ea: mov ecx, edi */ r_ecx = r_edi;
    /* 0055a2ec: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x55a2f2u); call_ind(t); }
    /* 0055a2f2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a2f5: je 0x55a311 */ if (fZ) goto L_0055a311;
L_0055a2f7:; BB(0x0055a2f7);
    /* 0055a2f7: mov ecx, edi */ r_ecx = r_edi;
    /* 0055a2f9: call 0x55a370 */ r_esp -= 4; W32(r_esp, 0x55a2feu); f_0055a370();
    /* 0055a2fe: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055a300: mov ecx, edi */ r_ecx = r_edi;
    /* 0055a302: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x55a308u); call_ind(t); }
    /* 0055a308: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0055a30f: jmp 0x55a31d */ goto L_0055a31d;
L_0055a311:; BB(0x0055a311);
    /* 0055a311: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0055a318: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a31b: je 0x55a35c */ if (fZ) goto L_0055a35c;
L_0055a31d:; BB(0x0055a31d);
    /* 0055a31d: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a320: je 0x55a338 */ if (fZ) goto L_0055a338;
L_0055a322:; BB(0x0055a322);
    /* 0055a322: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0055a325: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055a327: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a328: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a329: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055a32a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055a32b: push 0x2ce */ { u32 v = 0x2ceu; r_esp -= 4; W32(r_esp, v); }
    /* 0055a330: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x55a335u); f_008144b0();
    /* 0055a335: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0055a338:; BB(0x0055a338);
    /* 0055a338: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055a33a: mov ecx, edi */ r_ecx = r_edi;
    /* 0055a33c: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x55a342u); call_ind(t); }
    /* 0055a342: mov ecx, edi */ r_ecx = r_edi;
    /* 0055a344: call 0x558504 */ r_esp -= 4; W32(r_esp, 0x55a349u); f_00558504();
    /* 0055a349: mov ecx, edi */ r_ecx = r_edi;
    /* 0055a34b: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x55a350u); f_006401f0();
    /* 0055a350: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055a352: mov ecx, edi */ r_ecx = r_edi;
    /* 0055a354: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x55a35au); call_ind(t); }
    /* 0055a35a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055a35b: ret  */ FN_RET(0x0055a2d0); r_esp += 4; return;
L_0055a35c:; BB(0x0055a35c);
    /* 0055a35c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a35e: mov ecx, edi */ r_ecx = r_edi;
    /* 0055a360: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55a365u); f_0051f62c();
    /* 0055a365: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0055a36c: jmp 0x55a31d */ goto L_0055a31d;
}

void f_0055a370(void) /* sub_55A370 */
{
    FN_ENTER(0x0055a370);
    /* 0055a370: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055a371: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0055a373: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055a375: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a37a: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x55a37fu); f_00520ea0();
    /* 0055a37f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a382: je 0x55a397 */ if (fZ) goto L_0055a397;
L_0055a384:; BB(0x0055a384);
    /* 0055a384: mov eax, dword ptr [ebx + 0x440] */ r_eax = R32((u32)(r_ebx+0x440u));
    /* 0055a38a: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055a38f: mov dword ptr [ebx + 0x440], eax */ W32((u32)(r_ebx+0x440u), r_eax);
    /* 0055a395: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055a396: ret  */ FN_RET(0x0055a370); r_esp += 4; return;
L_0055a397:; BB(0x0055a397);
    /* 0055a397: mov eax, dword ptr [ebx + 0x440] */ r_eax = R32((u32)(r_ebx+0x440u));
    /* 0055a39d: and eax, 0xffffff7f */ {  u32 a = r_eax; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055a3a2: mov dword ptr [ebx + 0x440], eax */ W32((u32)(r_ebx+0x440u), r_eax);
    /* 0055a3a8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055a3a9: ret  */ FN_RET(0x0055a370); r_esp += 4; return;
}

void f_0055a3ac(void) /* sub_55A3AC */
{
    FN_ENTER(0x0055a3ac);
    /* 0055a3ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055a3ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055a3ae: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055a3b1: mov esi, ecx */ r_esi = r_ecx;
    /* 0055a3b3: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x55a3b8u); f_004f7c84();
    /* 0055a3b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a3ba: jne 0x55a584 */ if (!fZ) goto L_0055a584;
L_0055a3c0:; BB(0x0055a3c0);
    /* 0055a3c0: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0055a3c3: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a3c8: je 0x55a3d0 */ if (fZ) goto L_0055a3d0;
L_0055a3ca:; BB(0x0055a3ca);
    /* 0055a3ca: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055a3cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055a3ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055a3cf: ret  */ FN_RET(0x0055a3ac); r_esp += 4; return;
L_0055a3d0:; BB(0x0055a3d0);
    /* 0055a3d0: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 0055a3d6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055a3d8: jne 0x55a44a */ if (!fZ) goto L_0055a44a;
L_0055a3da:; BB(0x0055a3da);
    /* 0055a3da: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x55a3dfu); f_00694cc8();
    /* 0055a3df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a3e1: je 0x55a401 */ if (fZ) goto L_0055a401;
L_0055a3e3:; BB(0x0055a3e3);
    /* 0055a3e3: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a3e8: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a3ea: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055a3ec: push 0x44228000 */ { u32 v = 0x44228000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a3f1: push 0x44228000 */ { u32 v = 0x44228000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a3f6: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x55a3f9u); call_ind(t); }
    /* 0055a3f9: mov ebx, eax */ r_ebx = r_eax;
    /* 0055a3fb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a3fd: jne 0x55a41b */ if (!fZ) goto L_0055a41b;
L_0055a3ff:; BB(0x0055a3ff);
    /* 0055a3ff: jmp 0x55a44a */ goto L_0055a44a;
L_0055a401:; BB(0x0055a401);
    /* 0055a401: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a406: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a408: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055a40a: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a40f: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x55a412u); call_ind(t); }
    /* 0055a412: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a414: je 0x55a44a */ if (fZ) goto L_0055a44a;
L_0055a416:; BB(0x0055a416);
    /* 0055a416: mov ebx, 1 */ r_ebx = 0x1u;
L_0055a41b:; BB(0x0055a41b);
    /* 0055a41b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0055a41d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055a41e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055a41f: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a421: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x55a426u); f_00520cf8();
    /* 0055a426: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a428: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x55a42du); f_008173d0();
    /* 0055a42d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055a42e: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a430: call 0x55a5c8 */ r_esp -= 4; W32(r_esp, 0x55a435u); f_0055a5c8();
    /* 0055a435: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0055a43c: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a43f: je 0x55a594 */ if (fZ) goto L_0055a594;
L_0055a445:; BB(0x0055a445);
    /* 0055a445: jmp 0x55a579 */ goto L_0055a579;
L_0055a44a:; BB(0x0055a44a);
    /* 0055a44a: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 0055a44e: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 0055a452: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0055a454: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0055a457: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
L_0055a45b:; BB(0x0055a45b);
    /* 0055a45b: mov dword ptr [esp], 0x1c */ W32((u32)(r_esp), 0x1cu);
    /* 0055a462: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055a465: mov edi, 3 */ r_edi = 0x3u;
    /* 0055a46a: jg 0x55a46e */ if ((!fZ&&fS==fO)) goto L_0055a46e;
L_0055a46c:; BB(0x0055a46c);
    /* 0055a46c: mov edi, ebx */ r_edi = r_ebx;
L_0055a46e:; BB(0x0055a46e);
    /* 0055a46e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055a470: mov dword ptr [esp + 4], 0x26 */ W32((u32)(r_esp+0x4u), 0x26u);
    /* 0055a478: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0055a47a: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0055a47f: jg 0x55a483 */ if ((!fZ&&fS==fO)) goto L_0055a483;
L_0055a481:; BB(0x0055a481);
    /* 0055a481: mov edi, eax */ r_edi = r_eax;
L_0055a483:; BB(0x0055a483);
    /* 0055a483: mov dword ptr [esp + 8], 0x30 */ W32((u32)(r_esp+0x8u), 0x30u);
    /* 0055a48b: mov dword ptr [esp + 0xc], 0x3a */ W32((u32)(r_esp+0xcu), 0x3au);
    /* 0055a493: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x55a498u); f_0082d990();
    /* 0055a498: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0055a49c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x55a4a1u); f_0082d838();
    /* 0055a4a1: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0055a4a4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055a4a6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x55a4abu); f_0082d8bc();
    /* 0055a4ab: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x55a4b0u); f_0082fa9c();
    /* 0055a4b0: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055a4b6: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a4b8: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x55a4bdu); f_007aaab8();
    /* 0055a4bd: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x55a4c2u); f_0082faac();
    /* 0055a4c2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x55a4c7u); f_0082da80();
    /* 0055a4c7: mov ecx, dword ptr [esp + edi*4] */ r_ecx = R32((u32)(r_esp+r_edi*4));
    /* 0055a4ca: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055a4cc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055a4ce: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055a4d0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055a4d2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055a4d4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055a4d6: add ecx, dword ptr [0xaab540] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaab540u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055a4dc: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x55a4e1u); f_0082d990();
    /* 0055a4e1: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0055a4e9: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0055a4ec: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055a4ee: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 0055a4f1: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0055a4f9: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0055a4fb: lea eax, [esi + ebp + 0x478] */ r_eax = (u32)(r_esi+r_ebp+0x478u);
    /* 0055a502: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055a504: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0055a50c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a50d: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0055a511: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x55a516u); f_00830aa0();
    /* 0055a516: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x55a51bu); f_0082da80();
    /* 0055a51b: fld dword ptr [ebp + esi + 0x478] */ FPUSH(R_F32((u32)(r_ebp+r_esi+0x478u)));
    /* 0055a522: fsub dword ptr [esi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38u));
    /* 0055a525: fld dword ptr [ebp + esi + 0x480] */ FPUSH(R_F32((u32)(r_ebp+r_esi+0x480u)));
    /* 0055a52c: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 0055a52f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0055a531: fmul qword ptr [0x925368] */ ST(0) = ST(0) * R_F64((u32)(0x925368u));
    /* 0055a537: fdiv qword ptr [0x925360] */ ST(0) = ST(0) / R_F64((u32)(0x925360u));
    /* 0055a53d: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 0055a541: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 0055a546: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055a54b: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0055a54f: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0055a553: fistp dword ptr [esi + edi*4 + 0x468] */ W32((u32)(r_esi+r_edi*4+0x468u), (u32)fx_int32(ST(0))); FPOP();
    /* 0055a55a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0055a55e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0055a561: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055a564: jl 0x55a45b */ if ((fS!=fO)) goto L_0055a45b;
L_0055a56a:; BB(0x0055a56a);
    /* 0055a56a: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0055a56e: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0055a572: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
L_0055a579:; BB(0x0055a579);
    /* 0055a579: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a57c: je 0x55a5b1 */ if (fZ) goto L_0055a5b1;
L_0055a57e:; BB(0x0055a57e);
    /* 0055a57e: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055a581: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055a582: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055a583: ret  */ FN_RET(0x0055a3ac); r_esp += 4; return;
L_0055a584:; BB(0x0055a584);
    /* 0055a584: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055a586: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a588: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x55a58eu); call_ind(t); }
    /* 0055a58e: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055a591: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055a592: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055a593: ret  */ FN_RET(0x0055a3ac); r_esp += 4; return;
L_0055a594:; BB(0x0055a594);
    /* 0055a594: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 0055a59a: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a59f: je 0x55a579 */ if (fZ) goto L_0055a579;
L_0055a5a1:; BB(0x0055a5a1);
    /* 0055a5a1: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a5a3: call 0x55a884 */ r_esp -= 4; W32(r_esp, 0x55a5a8u); f_0055a884();
    /* 0055a5a8: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0055a5af: jmp 0x55a579 */ goto L_0055a579;
L_0055a5b1:; BB(0x0055a5b1);
    /* 0055a5b1: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 0055a5b7: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a5bc: je 0x55a57e */ if (fZ) goto L_0055a57e;
L_0055a5be:; BB(0x0055a5be);
    /* 0055a5be: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a5c0: call 0x55a8fc */ r_esp -= 4; W32(r_esp, 0x55a5c5u); f_0055a8fc();
    /* 0055a5c5: jmp 0x55a57e */ goto L_0055a57e;
}

void f_0055a5c8(void) /* sub_55A5C8 */
{
    FN_ENTER(0x0055a5c8);
    /* 0055a5c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055a5c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055a5ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055a5cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055a5cc: mov esi, ecx */ r_esi = r_ecx;
    /* 0055a5ce: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a5d0: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0055a5d5: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 0055a5db: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0055a5e0: mov eax, dword ptr [0xaf0364] */ r_eax = R32((u32)(0xaf0364u));
    /* 0055a5e5: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 0055a5eb: mov dword ptr [0xaab500], eax */ W32((u32)(0xaab500u), r_eax);
    /* 0055a5f0: lea eax, [esi + 0x4a8] */ r_eax = (u32)(r_esi+0x4a8u);
    /* 0055a5f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a5f7: call 0x557a80 */ r_esp -= 4; W32(r_esp, 0x55a5fcu); f_00557a80();
    /* 0055a5fc: lea ebp, [esi + 0x3c8] */ r_ebp = (u32)(r_esi+0x3c8u);
    /* 0055a602: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055a604: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x55a609u); f_005771a4();
    /* 0055a609: lea ebx, [esi + 0x300] */ r_ebx = (u32)(r_esi+0x300u);
    /* 0055a60f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055a610: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055a612: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x55a617u); f_0057725c();
    /* 0055a617: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a619: je 0x55a65f */ if (fZ) goto L_0055a65f;
L_0055a61b:; BB(0x0055a61b);
    /* 0055a61b: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 0055a621: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055a623: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x55a626u); call_ind(t); }
    /* 0055a626: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 0055a62b: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055a630: jne 0x55a6f8 */ if (!fZ) goto L_0055a6f8;
L_0055a636:; BB(0x0055a636);
    /* 0055a636: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0055a63b: mov edx, dword ptr [0xaab504] */ r_edx = R32((u32)(0xaab504u));
    /* 0055a641: mov ecx, dword ptr [0xaab500] */ r_ecx = R32((u32)(0xaab500u));
    /* 0055a647: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0055a64c: mov dword ptr [0xaf0360], edx */ W32((u32)(0xaf0360u), r_edx);
    /* 0055a652: mov dword ptr [0xaf0364], ecx */ W32((u32)(0xaf0364u), r_ecx);
    /* 0055a658: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055a659: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055a65a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055a65b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055a65c: ret 4 */ FN_RET(0x0055a5c8); r_esp += 8; return;
L_0055a65f:; BB(0x0055a65f);
    /* 0055a65f: mov eax, dword ptr [esi + 0x4c8] */ r_eax = R32((u32)(r_esi+0x4c8u));
    /* 0055a665: lea edi, [esi + 0x4c8] */ r_edi = (u32)(r_esi+0x4c8u);
    /* 0055a66b: mov ecx, edi */ r_ecx = r_edi;
    /* 0055a66d: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x55a670u); call_ind(t); }
    /* 0055a670: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055a672: je 0x55a828 */ if (fZ) goto L_0055a828;
L_0055a678:; BB(0x0055a678);
    /* 0055a678: mov ecx, edi */ r_ecx = r_edi;
    /* 0055a67a: call 0x576be4 */ r_esp -= 4; W32(r_esp, 0x55a67fu); f_00576be4();
    /* 0055a67f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a681: je 0x55a6c3 */ if (fZ) goto L_0055a6c3;
L_0055a683:; BB(0x0055a683);
    /* 0055a683: mov eax, dword ptr [esi + 0x4c8] */ r_eax = R32((u32)(r_esi+0x4c8u));
    /* 0055a689: mov ecx, edi */ r_ecx = r_edi;
    /* 0055a68b: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x55a68eu); call_ind(t); }
    /* 0055a68e: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 0055a693: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055a698: jne 0x55a6f8 */ if (!fZ) goto L_0055a6f8;
L_0055a69a:; BB(0x0055a69a);
    /* 0055a69a: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0055a69f: mov edx, dword ptr [0xaab504] */ r_edx = R32((u32)(0xaab504u));
    /* 0055a6a5: mov ecx, dword ptr [0xaab500] */ r_ecx = R32((u32)(0xaab500u));
    /* 0055a6ab: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0055a6b0: mov dword ptr [0xaf0360], edx */ W32((u32)(0xaf0360u), r_edx);
    /* 0055a6b6: mov dword ptr [0xaf0364], ecx */ W32((u32)(0xaf0364u), r_ecx);
    /* 0055a6bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055a6bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055a6be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055a6bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055a6c0: ret 4 */ FN_RET(0x0055a5c8); r_esp += 8; return;
L_0055a6c3:; BB(0x0055a6c3);
    /* 0055a6c3: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 0055a6c8: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055a6cd: je 0x55a6f8 */ if (fZ) goto L_0055a6f8;
L_0055a6cf:; BB(0x0055a6cf);
    /* 0055a6cf: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0055a6d4: mov edx, dword ptr [0xaab504] */ r_edx = R32((u32)(0xaab504u));
    /* 0055a6da: mov ecx, dword ptr [0xaab500] */ r_ecx = R32((u32)(0xaab500u));
    /* 0055a6e0: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0055a6e5: mov dword ptr [0xaf0360], edx */ W32((u32)(0xaf0360u), r_edx);
    /* 0055a6eb: mov dword ptr [0xaf0364], ecx */ W32((u32)(0xaf0364u), r_ecx);
    /* 0055a6f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055a6f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055a6f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055a6f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055a6f5: ret 4 */ FN_RET(0x0055a5c8); r_esp += 8; return;
L_0055a6f8:; BB(0x0055a6f8);
    /* 0055a6f8: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a6fa: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x55a6ffu); f_00520608();
    /* 0055a6ff: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0055a702: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x55a707u); f_00829cc8();
    /* 0055a707: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x55a70cu); f_0082d7b0();
    /* 0055a70c: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 0055a70f: mov ecx, edi */ r_ecx = r_edi;
    /* 0055a711: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x55a716u); f_0082d838();
    /* 0055a716: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a718: push 0x41c00000 */ { u32 v = 0x41c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a71d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055a71f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a721: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x55a726u); f_00830b74();
    /* 0055a726: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0055a729: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055a72b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x55a730u); f_0082d8bc();
    /* 0055a730: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x55a735u); f_00520d08();
    /* 0055a735: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 0055a73b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055a73d: je 0x55a749 */ if (fZ) goto L_0055a749;
L_0055a73f:; BB(0x0055a73f);
    /* 0055a73f: mov ecx, 0x558444 */ r_ecx = 0x558444u;
    /* 0055a744: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x55a749u); f_0082fac4();
L_0055a749:; BB(0x0055a749);
    /* 0055a749: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x55a74eu); f_00578b38();
    /* 0055a74e: mov dword ptr [0xa73bdc], edi */ W32((u32)(0xa73bdcu), r_edi);
    /* 0055a754: movsx edi, word ptr [esi + 0x32e] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0055a75b: lea eax, [esi + 0x478] */ r_eax = (u32)(r_esi+0x478u);
    /* 0055a761: lea edx, [esi + 0x468] */ r_edx = (u32)(r_esi+0x468u);
    /* 0055a767: cmp edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a76a: mov dword ptr [0xa73be0], eax */ W32((u32)(0xa73be0u), r_eax);
    /* 0055a76f: mov dword ptr [0xa73be4], edx */ W32((u32)(0xa73be4u), r_edx);
    /* 0055a775: je 0x55a85d */ if (fZ) goto L_0055a85d;
L_0055a77b:; BB(0x0055a77b);
    /* 0055a77b: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0055a77f: mov dword ptr [0xa73be8], 0 */ W32((u32)(0xa73be8u), 0x0u);
    /* 0055a789: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a78c: je 0x55a851 */ if (fZ) goto L_0055a851;
L_0055a792:; BB(0x0055a792);
    /* 0055a792: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a794: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x55a799u); f_007aa7b8();
L_0055a799:; BB(0x0055a799);
    /* 0055a799: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x55a79eu); f_0082dab0();
    /* 0055a79e: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 0055a7a4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055a7a6: je 0x55a7af */ if (fZ) goto L_0055a7af;
L_0055a7a8:; BB(0x0055a7a8);
    /* 0055a7a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055a7aa: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x55a7afu); f_0082fac4();
L_0055a7af:; BB(0x0055a7af);
    /* 0055a7af: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x55a7b4u); f_0082da80();
    /* 0055a7b4: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a7b6: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x55a7bbu); f_00520610();
    /* 0055a7bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055a7bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055a7be: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x55a7c3u); f_0057725c();
    /* 0055a7c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a7c5: je 0x55a7d4 */ if (fZ) goto L_0055a7d4;
L_0055a7c7:; BB(0x0055a7c7);
    /* 0055a7c7: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 0055a7cd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055a7cf: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x55a7d2u); call_ind(t); }
    /* 0055a7d2: jmp 0x55a7ff */ goto L_0055a7ff;
L_0055a7d4:; BB(0x0055a7d4);
    /* 0055a7d4: mov eax, dword ptr [esi + 0x4c8] */ r_eax = R32((u32)(r_esi+0x4c8u));
    /* 0055a7da: lea ebx, [esi + 0x4c8] */ r_ebx = (u32)(r_esi+0x4c8u);
    /* 0055a7e0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055a7e2: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x55a7e5u); call_ind(t); }
    /* 0055a7e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055a7e7: je 0x55a7ff */ if (fZ) goto L_0055a7ff;
L_0055a7e9:; BB(0x0055a7e9);
    /* 0055a7e9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055a7eb: call 0x576be4 */ r_esp -= 4; W32(r_esp, 0x55a7f0u); f_00576be4();
    /* 0055a7f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055a7f2: je 0x55a7ff */ if (fZ) goto L_0055a7ff;
L_0055a7f4:; BB(0x0055a7f4);
    /* 0055a7f4: mov eax, dword ptr [esi + 0x4c8] */ r_eax = R32((u32)(r_esi+0x4c8u));
    /* 0055a7fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055a7fc: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x55a7ffu); call_ind(t); }
L_0055a7ff:; BB(0x0055a7ff);
    /* 0055a7ff: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0055a804: mov edx, dword ptr [0xaab504] */ r_edx = R32((u32)(0xaab504u));
    /* 0055a80a: mov ecx, dword ptr [0xaab500] */ r_ecx = R32((u32)(0xaab500u));
    /* 0055a810: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0055a815: mov dword ptr [0xaf0360], edx */ W32((u32)(0xaf0360u), r_edx);
    /* 0055a81b: mov dword ptr [0xaf0364], ecx */ W32((u32)(0xaf0364u), r_ecx);
    /* 0055a821: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055a822: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055a823: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055a824: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055a825: ret 4 */ FN_RET(0x0055a5c8); r_esp += 8; return;
L_0055a828:; BB(0x0055a828);
    /* 0055a828: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0055a82d: mov edx, dword ptr [0xaab504] */ r_edx = R32((u32)(0xaab504u));
    /* 0055a833: mov ecx, dword ptr [0xaab500] */ r_ecx = R32((u32)(0xaab500u));
    /* 0055a839: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0055a83e: mov dword ptr [0xaf0360], edx */ W32((u32)(0xaf0360u), r_edx);
    /* 0055a844: mov dword ptr [0xaf0364], ecx */ W32((u32)(0xaf0364u), r_ecx);
    /* 0055a84a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055a84b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055a84c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055a84d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055a84e: ret 4 */ FN_RET(0x0055a5c8); r_esp += 8; return;
L_0055a851:; BB(0x0055a851);
    /* 0055a851: mov ecx, esi */ r_ecx = r_esi;
    /* 0055a853: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x55a858u); f_007aa668();
    /* 0055a858: jmp 0x55a799 */ goto L_0055a799;
L_0055a85d:; BB(0x0055a85d);
    /* 0055a85d: mov eax, dword ptr [esi + 0x454] */ r_eax = R32((u32)(r_esi+0x454u));
    /* 0055a863: mov dword ptr [0xa73be8], 0xffffffff */ W32((u32)(0xa73be8u), 0xffffffffu);
    /* 0055a86d: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0055a870: or eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055a875: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a876: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055a877: call 0x52d2b0 */ r_esp -= 4; W32(r_esp, 0x55a87cu); f_0052d2b0();
    /* 0055a87c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055a87f: jmp 0x55a799 */ goto L_0055a799;
}

void f_0055a884(void) /* sub_55A884 */
{
    FN_ENTER(0x0055a884);
    /* 0055a884: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055a885: mov edi, ecx */ r_edi = r_ecx;
    /* 0055a887: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 0055a88c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055a891: je 0x55a8f9 */ if (fZ) goto L_0055a8f9;
L_0055a893:; BB(0x0055a893);
    /* 0055a893: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x55a898u); f_0082d7b0();
    /* 0055a898: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0055a89b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x55a8a0u); f_0082d838();
    /* 0055a8a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a8a2: push 0x41c00000 */ { u32 v = 0x41c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a8a7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055a8a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a8ab: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x55a8b0u); f_00830b74();
    /* 0055a8b0: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0055a8b3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055a8b5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x55a8bau); f_0082d8bc();
    /* 0055a8ba: mov eax, dword ptr [edi + 0x500] */ r_eax = R32((u32)(r_edi+0x500u));
    /* 0055a8c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a8c1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055a8c3: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a8c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a8c9: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x55a8ceu); f_0082fa0c();
    /* 0055a8ce: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0055a8d1: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x55a8d6u); f_00829cc8();
    /* 0055a8d6: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x55a8dbu); f_00578b38();
    /* 0055a8db: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055a8e1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a8e3: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x55a8e8u); f_005b8610();
    /* 0055a8e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a8e9: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x55a8eeu); f_0082e1e8();
    /* 0055a8ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055a8ef: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x55a8f4u); f_0082dab0();
    /* 0055a8f4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x55a8f9u); f_0082da80();
L_0055a8f9:; BB(0x0055a8f9);
    /* 0055a8f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055a8fa: ret  */ FN_RET(0x0055a884); r_esp += 4; return;
}

void f_0055a8fc(void) /* sub_55A8FC */
{
    FN_ENTER(0x0055a8fc);
    /* 0055a8fc: mov eax, dword ptr [ecx + 0x300] */ r_eax = R32((u32)(r_ecx+0x300u));
    /* 0055a902: mov edx, dword ptr [ecx + 0x304] */ r_edx = R32((u32)(r_ecx+0x304u));
    /* 0055a908: mov dword ptr [0xa73b98], eax */ W32((u32)(0xa73b98u), r_eax);
    /* 0055a90d: mov eax, dword ptr [ecx + 0x308] */ r_eax = R32((u32)(r_ecx+0x308u));
    /* 0055a913: mov dword ptr [0xa73b9c], edx */ W32((u32)(0xa73b9cu), r_edx);
    /* 0055a919: mov dword ptr [0xa73ba0], eax */ W32((u32)(0xa73ba0u), r_eax);
    /* 0055a91e: mov eax, dword ptr [ecx + 0x504] */ r_eax = R32((u32)(r_ecx+0x504u));
    /* 0055a924: mov dword ptr [0xa73ba4], eax */ W32((u32)(0xa73ba4u), r_eax);
    /* 0055a929: mov eax, dword ptr [ecx + 0x508] */ r_eax = R32((u32)(r_ecx+0x508u));
    /* 0055a92f: mov dword ptr [0xa73ba8], eax */ W32((u32)(0xa73ba8u), r_eax);
    /* 0055a934: mov eax, dword ptr [ecx + 0x50c] */ r_eax = R32((u32)(r_ecx+0x50cu));
    /* 0055a93a: mov dword ptr [0xa73bac], eax */ W32((u32)(0xa73bacu), r_eax);
    /* 0055a93f: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x55a944u); f_007a902c();
    /* 0055a944: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a946: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a948: push 0x9bde28 */ { u32 v = 0x9bde28u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a94d: call 0x82c07c */ r_esp -= 4; W32(r_esp, 0x55a952u); f_0082c07c();
    /* 0055a952: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055a955: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x55a95au); f_007a9044();
    /* 0055a95a: ret  */ FN_RET(0x0055a8fc); r_esp += 4; return;
}

void f_0055a95c(void) /* sub_55A95C */
{
    FN_ENTER(0x0055a95c);
    /* 0055a95c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0055a960: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055a963: ja 0x55a9e8 */ if ((!fC&&!fZ)) goto L_0055a9e8;
L_0055a969:; BB(0x0055a969);
    /* 0055a969: mov eax, dword ptr [eax*4 + 0x9252ac] */ r_eax = R32((u32)(r_eax*4+0x9252acu));
    /* 0055a970: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0055a9e8:; BB(0x0055a9e8);
    /* 0055a9e8: ret 8 */ FN_RET(0x0055a95c); r_esp += 12; return;
}

void f_0055a972(void)
{
    FN_ENTER(0x0055a972);
    /* 0055a972: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055a976: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a977: call 0x5588dc */ r_esp -= 4; W32(r_esp, 0x55a97cu); f_005588dc();
    /* 0055a97c: jmp 0x55a9e8 */ goto L_0055a9e8;
L_0055a9e8:; BB(0x0055a9e8);
    /* 0055a9e8: ret 8 */ FN_RET(0x0055a972); r_esp += 12; return;
}

void f_0055a97e(void)
{
    FN_ENTER(0x0055a97e);
    /* 0055a97e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055a982: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a983: call 0x558a10 */ r_esp -= 4; W32(r_esp, 0x55a988u); f_00558a10();
    /* 0055a988: jmp 0x55a9e8 */ goto L_0055a9e8;
L_0055a9e8:; BB(0x0055a9e8);
    /* 0055a9e8: ret 8 */ FN_RET(0x0055a97e); r_esp += 12; return;
}

void f_0055a98a(void)
{
    FN_ENTER(0x0055a98a);
    /* 0055a98a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055a98e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a98f: call 0x558b34 */ r_esp -= 4; W32(r_esp, 0x55a994u); f_00558b34();
    /* 0055a994: jmp 0x55a9e8 */ goto L_0055a9e8;
L_0055a9e8:; BB(0x0055a9e8);
    /* 0055a9e8: ret 8 */ FN_RET(0x0055a98a); r_esp += 12; return;
}

void f_0055a996(void)
{
    FN_ENTER(0x0055a996);
    /* 0055a996: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055a99a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a99b: call 0x558c84 */ r_esp -= 4; W32(r_esp, 0x55a9a0u); f_00558c84();
    /* 0055a9a0: jmp 0x55a9e8 */ goto L_0055a9e8;
L_0055a9e8:; BB(0x0055a9e8);
    /* 0055a9e8: ret 8 */ FN_RET(0x0055a996); r_esp += 12; return;
}

void f_0055a9a2(void)
{
    FN_ENTER(0x0055a9a2);
    /* 0055a9a2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055a9a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a9a7: call 0x558fb8 */ r_esp -= 4; W32(r_esp, 0x55a9acu); f_00558fb8();
    /* 0055a9ac: jmp 0x55a9e8 */ goto L_0055a9e8;
L_0055a9e8:; BB(0x0055a9e8);
    /* 0055a9e8: ret 8 */ FN_RET(0x0055a9a2); r_esp += 12; return;
}

void f_0055a9ae(void)
{
    FN_ENTER(0x0055a9ae);
    /* 0055a9ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055a9b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a9b3: call 0x559334 */ r_esp -= 4; W32(r_esp, 0x55a9b8u); f_00559334();
    /* 0055a9b8: jmp 0x55a9e8 */ goto L_0055a9e8;
L_0055a9e8:; BB(0x0055a9e8);
    /* 0055a9e8: ret 8 */ FN_RET(0x0055a9ae); r_esp += 12; return;
}

void f_0055a9ba(void)
{
    FN_ENTER(0x0055a9ba);
    /* 0055a9ba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055a9be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a9bf: call 0x559610 */ r_esp -= 4; W32(r_esp, 0x55a9c4u); f_00559610();
    /* 0055a9c4: jmp 0x55a9e8 */ goto L_0055a9e8;
L_0055a9e8:; BB(0x0055a9e8);
    /* 0055a9e8: ret 8 */ FN_RET(0x0055a9ba); r_esp += 12; return;
}

void f_0055a9c6(void)
{
    FN_ENTER(0x0055a9c6);
    /* 0055a9c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055a9ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a9cb: call 0x55988c */ r_esp -= 4; W32(r_esp, 0x55a9d0u); f_0055988c();
    /* 0055a9d0: jmp 0x55a9e8 */ goto L_0055a9e8;
L_0055a9e8:; BB(0x0055a9e8);
    /* 0055a9e8: ret 8 */ FN_RET(0x0055a9c6); r_esp += 12; return;
}

void f_0055a9d2(void)
{
    FN_ENTER(0x0055a9d2);
    /* 0055a9d2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055a9d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a9d7: call 0x55a148 */ r_esp -= 4; W32(r_esp, 0x55a9dcu); f_0055a148();
    /* 0055a9dc: jmp 0x55a9e8 */ goto L_0055a9e8;
L_0055a9e8:; BB(0x0055a9e8);
    /* 0055a9e8: ret 8 */ FN_RET(0x0055a9d2); r_esp += 12; return;
}

void f_0055a9de(void)
{
    FN_ENTER(0x0055a9de);
    /* 0055a9de: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055a9e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a9e3: call 0x55ad34 */ r_esp -= 4; W32(r_esp, 0x55a9e8u); f_0055ad34();
    /* 0055a9e8: ret 8 */ FN_RET(0x0055a9de); r_esp += 12; return;
}

void f_0055a9ec(void) /* sub_55A9EC */
{
    FN_ENTER(0x0055a9ec);
    /* 0055a9ec: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0055a9f3: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055a9f6: je 0x55a9ff */ if (fZ) goto L_0055a9ff;
L_0055a9f8:; BB(0x0055a9f8);
    /* 0055a9f8: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a9fa: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55a9ffu); f_0051f62c();
L_0055a9ff:; BB(0x0055a9ff);
    /* 0055a9ff: ret  */ FN_RET(0x0055a9ec); r_esp += 4; return;
}

void f_0055aa00(void) /* sub_55AA00 */
{
    FN_ENTER(0x0055aa00);
    /* 0055aa00: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0055aa07: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055aa0a: je 0x55aa21 */ if (fZ) goto L_0055aa21;
L_0055aa0c:; BB(0x0055aa0c);
    /* 0055aa0c: mov eax, dword ptr [ecx + 0x440] */ r_eax = R32((u32)(r_ecx+0x440u));
    /* 0055aa12: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055aa14: jne 0x55aa21 */ if (!fZ) goto L_0055aa21;
L_0055aa16:; BB(0x0055aa16);
    /* 0055aa16: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055aa18: jne 0x55aa21 */ if (!fZ) goto L_0055aa21;
L_0055aa1a:; BB(0x0055aa1a);
    /* 0055aa1a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055aa1c: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55aa21u); f_0051f62c();
L_0055aa21:; BB(0x0055aa21);
    /* 0055aa21: ret  */ FN_RET(0x0055aa00); r_esp += 4; return;
}

void f_0055aa24(void) /* sub_55AA24 */
{
    FN_ENTER(0x0055aa24);
    /* 0055aa24: mov eax, dword ptr [ecx + 0x440] */ r_eax = R32((u32)(r_ecx+0x440u));
    /* 0055aa2a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055aa2c: jne 0x55aa42 */ if (!fZ) goto L_0055aa42;
L_0055aa2e:; BB(0x0055aa2e);
    /* 0055aa2e: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055aa30: jne 0x55aa42 */ if (!fZ) goto L_0055aa42;
L_0055aa32:; BB(0x0055aa32);
    /* 0055aa32: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055aa36: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055aa3a: call 0x7732b8 */ r_esp -= 4; W32(r_esp, 0x55aa3fu); f_007732b8();
    /* 0055aa3f: ret 8 */ FN_RET(0x0055aa24); r_esp += 12; return;
L_0055aa42:; BB(0x0055aa42);
    /* 0055aa42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055aa44: lea eax, [ecx + 0x300] */ r_eax = (u32)(r_ecx+0x300u);
    /* 0055aa4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055aa4b: call 0x77535c */ r_esp -= 4; W32(r_esp, 0x55aa50u); f_0077535c();
    /* 0055aa50: fld dword ptr [0x9253c0] */ FPUSH(R_F32((u32)(0x9253c0u)));
    /* 0055aa56: ret 8 */ FN_RET(0x0055aa24); r_esp += 12; return;
}

void f_0055aa5c(void) /* sub_55AA5C */
{
    FN_ENTER(0x0055aa5c);
    /* 0055aa5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055aa5d: mov edi, ecx */ r_edi = r_ecx;
    /* 0055aa5f: mov eax, dword ptr [edi + 0x440] */ r_eax = R32((u32)(r_edi+0x440u));
    /* 0055aa65: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055aa67: jne 0x55aaa4 */ if (!fZ) goto L_0055aaa4;
L_0055aa69:; BB(0x0055aa69);
    /* 0055aa69: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055aa6b: jne 0x55aaa4 */ if (!fZ) goto L_0055aaa4;
L_0055aa6d:; BB(0x0055aa6d);
    /* 0055aa6d: mov ecx, edi */ r_ecx = r_edi;
    /* 0055aa6f: call 0x55aaf0 */ r_esp -= 4; W32(r_esp, 0x55aa74u); f_0055aaf0();
    /* 0055aa74: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0055aa77: cmp eax, dword ptr [esp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055aa7b: je 0x55aaad */ if (fZ) goto L_0055aaad;
L_0055aa7d:; BB(0x0055aa7d);
    /* 0055aa7d: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0055aa81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055aa82: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0055aa86: mov ecx, edi */ r_ecx = r_edi;
    /* 0055aa88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055aa89: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0055aa8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055aa8e: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0055aa92: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0055aa96: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0055aa9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055aa9b: call 0x773afc */ r_esp -= 4; W32(r_esp, 0x55aaa0u); f_00773afc();
    /* 0055aaa0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055aaa1: ret 0x18 */ FN_RET(0x0055aa5c); r_esp += 28; return;
L_0055aaa4:; BB(0x0055aaa4);
    /* 0055aaa4: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0055aaa8: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055aaab: je 0x55aac7 */ if (fZ) goto L_0055aac7;
L_0055aaad:; BB(0x0055aaad);
    /* 0055aaad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055aaaf: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 0055aab5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055aab6: mov ecx, edi */ r_ecx = r_edi;
    /* 0055aab8: call 0x77535c */ r_esp -= 4; W32(r_esp, 0x55aabdu); f_0077535c();
    /* 0055aabd: fld dword ptr [0x9253bc] */ FPUSH(R_F32((u32)(0x9253bcu)));
    /* 0055aac3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055aac4: ret 0x18 */ FN_RET(0x0055aa5c); r_esp += 28; return;
L_0055aac7:; BB(0x0055aac7);
    /* 0055aac7: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0055aacb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055aacc: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0055aad0: mov ecx, edi */ r_ecx = r_edi;
    /* 0055aad2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055aad3: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0055aad7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055aad8: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0055aadc: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0055aae0: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0055aae4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055aae5: call 0x773afc */ r_esp -= 4; W32(r_esp, 0x55aaeau); f_00773afc();
    /* 0055aaea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055aaeb: ret 0x18 */ FN_RET(0x0055aa5c); r_esp += 28; return;
}

void f_0055aaf0(void) /* sub_55AAF0 */
{
    FN_ENTER(0x0055aaf0);
    /* 0055aaf0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055aaf3: movsx eax, word ptr [ecx + 0x446] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x446u));
    /* 0055aafa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0055aafc: jl 0x55ab03 */ if ((fS!=fO)) goto L_0055ab03;
L_0055aafe:; BB(0x0055aafe);
    /* 0055aafe: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ab01: jle 0x55ab09 */ if ((fZ||fS!=fO)) goto L_0055ab09;
L_0055ab03:; BB(0x0055ab03);
    /* 0055ab03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055ab05: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055ab08: ret  */ FN_RET(0x0055aaf0); r_esp += 4; return;
L_0055ab09:; BB(0x0055ab09);
    /* 0055ab09: mov dword ptr [esp + 0xc], 5 */ W32((u32)(r_esp+0xcu), 0x5u);
    /* 0055ab11: mov dword ptr [esp + 8], 3 */ W32((u32)(r_esp+0x8u), 0x3u);
    /* 0055ab19: mov dword ptr [esp + 4], 2 */ W32((u32)(r_esp+0x4u), 0x2u);
    /* 0055ab21: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 0055ab28: movsx eax, word ptr [esp + eax*4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+r_eax*4));
    /* 0055ab2c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055ab2f: ret  */ FN_RET(0x0055aaf0); r_esp += 4; return;
}

void f_0055ab30(void) /* sub_55AB30 */
{
    FN_ENTER(0x0055ab30);
    /* 0055ab30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055ab31: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ab32: mov edi, ecx */ r_edi = r_ecx;
    /* 0055ab34: mov eax, dword ptr [edi + 0x440] */ r_eax = R32((u32)(r_edi+0x440u));
    /* 0055ab3a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055ab3c: jne 0x55abe5 */ if (!fZ) goto L_0055abe5;
L_0055ab42:; BB(0x0055ab42);
    /* 0055ab42: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055ab44: jne 0x55abe5 */ if (!fZ) goto L_0055abe5;
L_0055ab4a:; BB(0x0055ab4a);
    /* 0055ab4a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0055ab4e: movsx ebx, word ptr [edx + 0x116] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x116u));
    /* 0055ab55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055ab57: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ab59: je 0x55abcf */ if (fZ) goto L_0055abcf;
L_0055ab5b:; BB(0x0055ab5b);
    /* 0055ab5b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0055ab5f: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 0055ab63: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ab69: je 0x55abcf */ if (fZ) goto L_0055abcf;
L_0055ab6b:; BB(0x0055ab6b);
    /* 0055ab6b: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0055ab6e: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ab74: je 0x55ab7b */ if (fZ) goto L_0055ab7b;
L_0055ab76:; BB(0x0055ab76);
    /* 0055ab76: mov eax, 1 */ r_eax = 0x1u;
L_0055ab7b:; BB(0x0055ab7b);
    /* 0055ab7b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0055ab7f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ab81: je 0x55ab92 */ if (fZ) goto L_0055ab92;
L_0055ab83:; BB(0x0055ab83);
    /* 0055ab83: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0055ab87: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 0055ab8a: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ab90: jne 0x55ab96 */ if (!fZ) goto L_0055ab96;
L_0055ab92:; BB(0x0055ab92);
    /* 0055ab92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ab94: je 0x55ac00 */ if (fZ) goto L_0055ac00;
L_0055ab96:; BB(0x0055ab96);
    /* 0055ab96: cmp ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055ab99: ja 0x55abc4 */ if ((!fC&&!fZ)) goto L_0055abc4;
L_0055ab9b:; BB(0x0055ab9b);
    /* 0055ab9b: mov eax, dword ptr [ebx*4 + 0x9252d4] */ r_eax = R32((u32)(r_ebx*4+0x9252d4u));
    /* 0055aba2: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0055abc4:; BB(0x0055abc4);
    /* 0055abc4: fld dword ptr [0x9253b8] */ FPUSH(R_F32((u32)(0x9253b8u)));
    /* 0055abca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055abcb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055abcc: ret 8 */ FN_RET(0x0055ab30); r_esp += 12; return;
L_0055abcf:; BB(0x0055abcf);
    /* 0055abcf: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0055abd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055abd3: mov ecx, edi */ r_ecx = r_edi;
    /* 0055abd5: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x55abdau); f_00777450();
    /* 0055abda: fld dword ptr [0x9253b8] */ FPUSH(R_F32((u32)(0x9253b8u)));
    /* 0055abe0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055abe1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055abe2: ret 8 */ FN_RET(0x0055ab30); r_esp += 12; return;
L_0055abe5:; BB(0x0055abe5);
    /* 0055abe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055abe7: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 0055abed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055abee: mov ecx, edi */ r_ecx = r_edi;
    /* 0055abf0: call 0x77535c */ r_esp -= 4; W32(r_esp, 0x55abf5u); f_0077535c();
    /* 0055abf5: fld dword ptr [0x9253b8] */ FPUSH(R_F32((u32)(0x9253b8u)));
    /* 0055abfb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055abfc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055abfd: ret 8 */ FN_RET(0x0055ab30); r_esp += 12; return;
L_0055ac00:; BB(0x0055ac00);
    /* 0055ac00: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ac02: call 0x55ac24 */ r_esp -= 4; W32(r_esp, 0x55ac07u); f_0055ac24();
    /* 0055ac07: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0055ac0a: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ac0c: je 0x55abe5 */ if (fZ) goto L_0055abe5;
L_0055ac0e:; BB(0x0055ac0e);
    /* 0055ac0e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0055ac12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055ac13: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0055ac17: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ac19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ac1a: call 0x7753b4 */ r_esp -= 4; W32(r_esp, 0x55ac1fu); f_007753b4();
    /* 0055ac1f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055ac20: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055ac21: ret 8 */ FN_RET(0x0055ab30); r_esp += 12; return;
}

void f_0055aba4(void)
{
    FN_ENTER(0x0055aba4);
    /* 0055aba4: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 0055abaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055abab: mov ecx, edi */ r_ecx = r_edi;
    /* 0055abad: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x55abb2u); f_00777450();
    /* 0055abb2: jmp 0x55abc4 */ goto L_0055abc4;
L_0055abc4:; BB(0x0055abc4);
    /* 0055abc4: fld dword ptr [0x9253b8] */ FPUSH(R_F32((u32)(0x9253b8u)));
    /* 0055abca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055abcb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055abcc: ret 8 */ FN_RET(0x0055aba4); r_esp += 12; return;
}

void f_0055abb4(void)
{
    FN_ENTER(0x0055abb4);
    /* 0055abb4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055abb6: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 0055abbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055abbd: mov ecx, edi */ r_ecx = r_edi;
    /* 0055abbf: call 0x77535c */ r_esp -= 4; W32(r_esp, 0x55abc4u); f_0077535c();
    /* 0055abc4: fld dword ptr [0x9253b8] */ FPUSH(R_F32((u32)(0x9253b8u)));
    /* 0055abca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055abcb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055abcc: ret 8 */ FN_RET(0x0055abb4); r_esp += 12; return;
}

void f_0055abc4(void)
{
    FN_ENTER(0x0055abc4);
    /* 0055abc4: fld dword ptr [0x9253b8] */ FPUSH(R_F32((u32)(0x9253b8u)));
    /* 0055abca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055abcb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055abcc: ret 8 */ FN_RET(0x0055abc4); r_esp += 12; return;
}

void f_0055ac24(void) /* sub_55AC24 */
{
    FN_ENTER(0x0055ac24);
    /* 0055ac24: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055ac27: movsx eax, word ptr [ecx + 0x446] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x446u));
    /* 0055ac2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0055ac30: jl 0x55ac37 */ if ((fS!=fO)) goto L_0055ac37;
L_0055ac32:; BB(0x0055ac32);
    /* 0055ac32: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ac35: jle 0x55ac3d */ if ((fZ||fS!=fO)) goto L_0055ac3d;
L_0055ac37:; BB(0x0055ac37);
    /* 0055ac37: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055ac39: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055ac3c: ret  */ FN_RET(0x0055ac24); r_esp += 4; return;
L_0055ac3d:; BB(0x0055ac3d);
    /* 0055ac3d: mov edx, 0xb */ r_edx = 0xbu;
    /* 0055ac42: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 0055ac47: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0055ac4c: mov edx, 7 */ r_edx = 0x7u;
    /* 0055ac51: mov word ptr [esp + 4], cx */ W16((u32)(r_esp+0x4u), (u16)r_ecx);
    /* 0055ac56: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 0055ac5b: mov edx, 9 */ r_edx = 0x9u;
    /* 0055ac60: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 0055ac64: movsx eax, word ptr [esp + eax*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+r_eax*2));
    /* 0055ac68: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055ac6b: ret  */ FN_RET(0x0055ac24); r_esp += 4; return;
}

void f_0055ac6c(void) /* sub_55AC6C */
{
    FN_ENTER(0x0055ac6c);
    /* 0055ac6c: mov edx, dword ptr [ecx + 0x440] */ r_edx = R32((u32)(r_ecx+0x440u));
    /* 0055ac72: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055ac78: mov eax, 0 */ r_eax = 0x0u;
    /* 0055ac7d: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0055ac80: ret  */ FN_RET(0x0055ac6c); r_esp += 4; return;
}

void f_0055accc(void) /* sub_55ACCC */
{
    FN_ENTER(0x0055accc);
    /* 0055accc: mov edx, dword ptr [ecx + 0x440] */ r_edx = R32((u32)(r_ecx+0x440u));
    /* 0055acd2: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055acd5: mov eax, 0 */ r_eax = 0x0u;
    /* 0055acda: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0055acdd: ret  */ FN_RET(0x0055accc); r_esp += 4; return;
}

void f_0055ace0(void) /* sub_55ACE0 */
{
    FN_ENTER(0x0055ace0);
    /* 0055ace0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055ace1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ace2: mov edx, ecx */ r_edx = r_ecx;
    /* 0055ace4: mov eax, dword ptr [edx + 0x440] */ r_eax = R32((u32)(r_edx+0x440u));
    /* 0055acea: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055aced: mov dword ptr [edx + 0x440], eax */ W32((u32)(r_edx+0x440u), r_eax);
    /* 0055acf3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055acf5: mov ebx, eax */ r_ebx = r_eax;
    /* 0055acf7: mov esi, edx */ r_esi = r_edx;
L_0055acf9:; BB(0x0055acf9);
    /* 0055acf9: movzx ecx, word ptr [esi + ebx*2 + 0x4e4] */ r_ecx = (u32)R16((u32)(r_esi+r_ebx*2+0x4e4u));
    /* 0055ad01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ad02: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x55ad07u); f_007b4d18();
    /* 0055ad07: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055ad08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ad0a: je 0x55ad27 */ if (fZ) goto L_0055ad27;
L_0055ad0c:; BB(0x0055ad0c);
    /* 0055ad0c: mov ecx, eax */ r_ecx = r_eax;
    /* 0055ad0e: call 0x55c178 */ r_esp -= 4; W32(r_esp, 0x55ad13u); f_0055c178();
    /* 0055ad13: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ad16: jne 0x55ad27 */ if (!fZ) goto L_0055ad27;
L_0055ad18:; BB(0x0055ad18);
    /* 0055ad18: mov ecx, dword ptr [esi + 0x440] */ r_ecx = R32((u32)(r_esi+0x440u));
    /* 0055ad1e: or ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0055ad21: mov dword ptr [esi + 0x440], ecx */ W32((u32)(r_esi+0x440u), r_ecx);
L_0055ad27:; BB(0x0055ad27);
    /* 0055ad27: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0055ad2a: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055ad2d: jl 0x55acf9 */ if ((fS!=fO)) goto L_0055acf9;
L_0055ad2f:; BB(0x0055ad2f);
    /* 0055ad2f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055ad30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055ad31: ret  */ FN_RET(0x0055ace0); r_esp += 4; return;
}

void f_0055ad34(void) /* sub_55AD34 */
{
    FN_ENTER(0x0055ad34);
    /* 0055ad34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055ad35: mov edi, ecx */ r_edi = r_ecx;
    /* 0055ad37: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055ad3b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ad3e: je 0x55ad5f */ if (fZ) goto L_0055ad5f;
L_0055ad40:; BB(0x0055ad40);
    /* 0055ad40: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055ad43: jne 0x55ad5b */ if (!fZ) goto L_0055ad5b;
L_0055ad45:; BB(0x0055ad45);
    /* 0055ad45: mov eax, dword ptr [edi + 0x440] */ r_eax = R32((u32)(r_edi+0x440u));
    /* 0055ad4b: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055ad50: jne 0x55ad5b */ if (!fZ) goto L_0055ad5b;
L_0055ad52:; BB(0x0055ad52);
    /* 0055ad52: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ad54: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ad56: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55ad5bu); f_0051f62c();
L_0055ad5b:; BB(0x0055ad5b);
    /* 0055ad5b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055ad5c: ret 4 */ FN_RET(0x0055ad34); r_esp += 8; return;
L_0055ad5f:; BB(0x0055ad5f);
    /* 0055ad5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ad61: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ad63: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55ad68u); f_0051f664();
    /* 0055ad68: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055ad6a: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ad6c: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x55ad72u); call_ind(t); }
    /* 0055ad72: mov eax, dword ptr [edi + 0x440] */ r_eax = R32((u32)(r_edi+0x440u));
    /* 0055ad78: or eax, 0x43 */ {  u32 a = r_eax; u32 b = 0x43u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055ad7b: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055ad80: mov dword ptr [edi + 0x440], eax */ W32((u32)(r_edi+0x440u), r_eax);
    /* 0055ad86: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ad88: call 0x5592a0 */ r_esp -= 4; W32(r_esp, 0x55ad8du); f_005592a0();
    /* 0055ad8d: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 0055ad90: mov edx, dword ptr [edi + 0x54] */ r_edx = R32((u32)(r_edi+0x54u));
    /* 0055ad93: mov ecx, dword ptr [edi + 0x58] */ r_ecx = R32((u32)(r_edi+0x58u));
    /* 0055ad96: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0055ad99: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 0055ad9c: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 0055ad9f: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 0055ada2: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 0055ada5: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 0055ada8: mov dword ptr [edi + 0x300], eax */ W32((u32)(r_edi+0x300u), r_eax);
    /* 0055adae: mov eax, dword ptr [edi + 0x458] */ r_eax = R32((u32)(r_edi+0x458u));
    /* 0055adb4: mov dword ptr [edi + 0x304], edx */ W32((u32)(r_edi+0x304u), r_edx);
    /* 0055adba: mov dword ptr [edi + 0x308], ecx */ W32((u32)(r_edi+0x308u), r_ecx);
    /* 0055adc0: mov dword ptr [edi + 0x448], eax */ W32((u32)(r_edi+0x448u), r_eax);
    /* 0055adc6: mov eax, dword ptr [edi + 0x45c] */ r_eax = R32((u32)(r_edi+0x45cu));
    /* 0055adcc: mov dword ptr [edi + 0x44c], eax */ W32((u32)(r_edi+0x44cu), r_eax);
    /* 0055add2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055add3: ret 4 */ FN_RET(0x0055ad34); r_esp += 8; return;
}

void f_0055add8(void) /* sub_55ADD8 */
{
    FN_ENTER(0x0055add8);
    /* 0055add8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055add9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0055addb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055addd: call 0x55adfc */ r_esp -= 4; W32(r_esp, 0x55ade2u); f_0055adfc();
    /* 0055ade2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055ade6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055ade8: jne 0x55adee */ if (!fZ) goto L_0055adee;
L_0055adea:; BB(0x0055adea);
    /* 0055adea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055adeb: ret 4 */ FN_RET(0x0055add8); r_esp += 8; return;
L_0055adee:; BB(0x0055adee);
    /* 0055adee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055adef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x55adf4u); f_005c2f74();
    /* 0055adf4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055adf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055adf6: ret 4 */ FN_RET(0x0055add8); r_esp += 8; return;
}

void f_0055adfc(void) /* sub_55ADFC */
{
    FN_ENTER(0x0055adfc);
    /* 0055adfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055adfd: mov ebp, esp */ r_ebp = r_esp;
    /* 0055adff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0055ae01: push 0x8d6528 */ { u32 v = 0x8d6528u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ae06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0055ae0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055ae0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0055ae14: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055ae17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0055ae1a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0055ae1d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0055ae20: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0055ae23: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0055ae26: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0055ae2d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055ae30: mov edx, dword ptr [eax + 0x448] */ r_edx = R32((u32)(r_eax+0x448u));
    /* 0055ae36: mov dword ptr [eax], 0xb04f20 */ W32((u32)(r_eax), 0xb04f20u);
    /* 0055ae3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ae3e: je 0x55ae5a */ if (fZ) goto L_0055ae5a;
L_0055ae40:; BB(0x0055ae40);
    /* 0055ae40: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0055ae44: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055ae49: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0055ae4d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055ae50: mov dword ptr [eax + 0x448], 0 */ W32((u32)(r_eax+0x448u), 0x0u);
L_0055ae5a:; BB(0x0055ae5a);
    /* 0055ae5a: mov ecx, dword ptr [eax + 0x464] */ r_ecx = R32((u32)(r_eax+0x464u));
    /* 0055ae60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ae62: je 0x55ae89 */ if (fZ) goto L_0055ae89;
L_0055ae64:; BB(0x0055ae64);
    /* 0055ae64: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x55ae69u); f_007b9c8c();
    /* 0055ae69: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055ae6c: mov ecx, dword ptr [eax + 0x464] */ r_ecx = R32((u32)(r_eax+0x464u));
    /* 0055ae72: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ae74: je 0x55ae7f */ if (fZ) goto L_0055ae7f;
L_0055ae76:; BB(0x0055ae76);
    /* 0055ae76: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ae78: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0055ae7a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x55ae7cu); call_ind(t); }
    /* 0055ae7c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0055ae7f:; BB(0x0055ae7f);
    /* 0055ae7f: mov dword ptr [eax + 0x464], 0 */ W32((u32)(r_eax+0x464u), 0x0u);
L_0055ae89:; BB(0x0055ae89);
    /* 0055ae89: mov ecx, eax */ r_ecx = r_eax;
    /* 0055ae8b: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x55ae90u); f_007b9c8c();
    /* 0055ae90: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0055ae97: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055ae9a: add ecx, 0x4c4 */ {  u32 a = r_ecx; u32 b = 0x4c4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055aea0: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x55aea5u); f_005769f8();
    /* 0055aea5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055aeac: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055aeaf: call 0x557908 */ r_esp -= 4; W32(r_esp, 0x55aeb4u); f_00557908();
    /* 0055aeb4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055aeb7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0055aebe: mov esp, ebp */ r_esp = r_ebp;
    /* 0055aec0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055aec1: ret  */ FN_RET(0x0055adfc); r_esp += 4; return;
}

void f_0055ae20(void)
{
    FN_ENTER(0x0055ae20);
    /* 0055ae20: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0055ae23: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0055ae26: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0055ae2d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055ae30: mov edx, dword ptr [eax + 0x448] */ r_edx = R32((u32)(r_eax+0x448u));
    /* 0055ae36: mov dword ptr [eax], 0xb04f20 */ W32((u32)(r_eax), 0xb04f20u);
    /* 0055ae3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ae3e: je 0x55ae5a */ if (fZ) goto L_0055ae5a;
L_0055ae40:; BB(0x0055ae40);
    /* 0055ae40: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0055ae44: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055ae49: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0055ae4d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055ae50: mov dword ptr [eax + 0x448], 0 */ W32((u32)(r_eax+0x448u), 0x0u);
L_0055ae5a:; BB(0x0055ae5a);
    /* 0055ae5a: mov ecx, dword ptr [eax + 0x464] */ r_ecx = R32((u32)(r_eax+0x464u));
    /* 0055ae60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ae62: je 0x55ae89 */ if (fZ) goto L_0055ae89;
L_0055ae64:; BB(0x0055ae64);
    /* 0055ae64: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x55ae69u); f_007b9c8c();
    /* 0055ae69: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055ae6c: mov ecx, dword ptr [eax + 0x464] */ r_ecx = R32((u32)(r_eax+0x464u));
    /* 0055ae72: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ae74: je 0x55ae7f */ if (fZ) goto L_0055ae7f;
L_0055ae76:; BB(0x0055ae76);
    /* 0055ae76: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ae78: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0055ae7a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x55ae7cu); call_ind(t); }
    /* 0055ae7c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0055ae7f:; BB(0x0055ae7f);
    /* 0055ae7f: mov dword ptr [eax + 0x464], 0 */ W32((u32)(r_eax+0x464u), 0x0u);
L_0055ae89:; BB(0x0055ae89);
    /* 0055ae89: mov ecx, eax */ r_ecx = r_eax;
    /* 0055ae8b: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x55ae90u); f_007b9c8c();
    /* 0055ae90: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0055ae97: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055ae9a: add ecx, 0x4c4 */ {  u32 a = r_ecx; u32 b = 0x4c4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055aea0: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x55aea5u); f_005769f8();
    /* 0055aea5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055aeac: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055aeaf: call 0x557908 */ r_esp -= 4; W32(r_esp, 0x55aeb4u); f_00557908();
    /* 0055aeb4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055aeb7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0055aebe: mov esp, ebp */ r_esp = r_ebp;
    /* 0055aec0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055aec1: ret  */ FN_RET(0x0055ae20); r_esp += 4; return;
}

void f_0055aec4(void) /* sub_55AEC4 */
{
    FN_ENTER(0x0055aec4);
    /* 0055aec4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055aec6: lea eax, [ecx + 0x300] */ r_eax = (u32)(r_ecx+0x300u);
    /* 0055aecc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055aecd: call 0x520068 */ r_esp -= 4; W32(r_esp, 0x55aed2u); f_00520068();
    /* 0055aed2: ret  */ FN_RET(0x0055aec4); r_esp += 4; return;
}

void f_0055aed4(void) /* sub_55AED4 */
{
    FN_ENTER(0x0055aed4);
    /* 0055aed4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055aed5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0055aed7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055aed9: call 0x520220 */ r_esp -= 4; W32(r_esp, 0x55aedeu); f_00520220();
    /* 0055aede: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 0055aee4: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0055aee7: test edx, 0x400000 */ {  u32 a = r_edx; u32 b = 0x400000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055aeed: je 0x55af02 */ if (fZ) goto L_0055af02;
L_0055aeef:; BB(0x0055aeef);
    /* 0055aeef: mov eax, dword ptr [ebp + 0x474] */ r_eax = R32((u32)(r_ebp+0x474u));
    /* 0055aef5: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055aefa: mov dword ptr [ebp + 0x474], eax */ W32((u32)(r_ebp+0x474u), r_eax);
    /* 0055af00: jmp 0x55af13 */ goto L_0055af13;
L_0055af02:; BB(0x0055af02);
    /* 0055af02: mov eax, dword ptr [ebp + 0x474] */ r_eax = R32((u32)(r_ebp+0x474u));
    /* 0055af08: and eax, 0xffffff7f */ {  u32 a = r_eax; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055af0d: mov dword ptr [ebp + 0x474], eax */ W32((u32)(r_ebp+0x474u), r_eax);
L_0055af13:; BB(0x0055af13);
    /* 0055af13: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055af15: call 0x55b338 */ r_esp -= 4; W32(r_esp, 0x55af1au); f_0055b338();
    /* 0055af1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055af1b: ret  */ FN_RET(0x0055aed4); r_esp += 4; return;
}

void f_0055af1c(void) /* sub_55AF1C */
{
    FN_ENTER(0x0055af1c);
    /* 0055af1c: mov eax, dword ptr [0xa73c1c] */ r_eax = R32((u32)(0xa73c1cu));
    /* 0055af21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055af23: je 0x55af2e */ if (fZ) goto L_0055af2e;
L_0055af25:; BB(0x0055af25);
    /* 0055af25: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055af28: mov dword ptr [0xa73c1c], eax */ W32((u32)(0xa73c1cu), r_eax);
    /* 0055af2d: ret  */ FN_RET(0x0055af1c); r_esp += 4; return;
L_0055af2e:; BB(0x0055af2e);
    /* 0055af2e: push dword ptr [0xa73c18] */ { u32 v = R32((u32)(0xa73c18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055af34: push 0xa73bf0 */ { u32 v = 0xa73bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055af39: call 0x520c5c */ r_esp -= 4; W32(r_esp, 0x55af3eu); f_00520c5c();
    /* 0055af3e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055af41: mov eax, dword ptr [0xa73c1c] */ r_eax = R32((u32)(0xa73c1cu));
    /* 0055af46: jmp 0x55af25 */ goto L_0055af25;
}

void f_0055af48(void) /* sub_55AF48 */
{
    FN_ENTER(0x0055af48);
    /* 0055af48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055af49: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055af4a: mov esi, ecx */ r_esi = r_ecx;
    /* 0055af4c: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x55af51u); f_004f7c84();
    /* 0055af51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055af53: jne 0x55b004 */ if (!fZ) goto L_0055b004;
L_0055af59:; BB(0x0055af59);
    /* 0055af59: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0055af5c: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055af61: jne 0x55b004 */ if (!fZ) goto L_0055b004;
L_0055af67:; BB(0x0055af67);
    /* 0055af67: mov eax, dword ptr [esi + 0x474] */ r_eax = R32((u32)(r_esi+0x474u));
    /* 0055af6d: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055af6f: jne 0x55afd6 */ if (!fZ) goto L_0055afd6;
L_0055af71:; BB(0x0055af71);
    /* 0055af71: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x55af76u); f_00694cc8();
    /* 0055af76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055af78: je 0x55af98 */ if (fZ) goto L_0055af98;
L_0055af7a:; BB(0x0055af7a);
    /* 0055af7a: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055af7f: mov ecx, esi */ r_ecx = r_esi;
    /* 0055af81: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055af83: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055af88: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055af8d: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x55af90u); call_ind(t); }
    /* 0055af90: mov ebp, eax */ r_ebp = r_eax;
    /* 0055af92: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055af94: jne 0x55afb2 */ if (!fZ) goto L_0055afb2;
L_0055af96:; BB(0x0055af96);
    /* 0055af96: jmp 0x55afd6 */ goto L_0055afd6;
L_0055af98:; BB(0x0055af98);
    /* 0055af98: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055af9d: mov ecx, esi */ r_ecx = r_esi;
    /* 0055af9f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055afa1: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055afa6: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x55afa9u); call_ind(t); }
    /* 0055afa9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055afab: je 0x55afd6 */ if (fZ) goto L_0055afd6;
L_0055afad:; BB(0x0055afad);
    /* 0055afad: mov ebp, 1 */ r_ebp = 0x1u;
L_0055afb2:; BB(0x0055afb2);
    /* 0055afb2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0055afb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055afb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055afb6: mov ecx, esi */ r_ecx = r_esi;
    /* 0055afb8: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x55afbdu); f_00520cf8();
    /* 0055afbd: mov ecx, esi */ r_ecx = r_esi;
    /* 0055afbf: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x55afc4u); f_008173d0();
    /* 0055afc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055afc5: mov ecx, esi */ r_ecx = r_esi;
    /* 0055afc7: call 0x55b008 */ r_esp -= 4; W32(r_esp, 0x55afccu); f_0055b008();
    /* 0055afcc: mov ecx, esi */ r_ecx = r_esi;
    /* 0055afce: call 0x55b228 */ r_esp -= 4; W32(r_esp, 0x55afd3u); f_0055b228();
    /* 0055afd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055afd4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055afd5: ret  */ FN_RET(0x0055af48); r_esp += 4; return;
L_0055afd6:; BB(0x0055afd6);
    /* 0055afd6: mov dword ptr [esi + 0x468], 0 */ W32((u32)(r_esi+0x468u), 0x0u);
    /* 0055afe0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055afe2: lea eax, [esi + 0x468] */ r_eax = (u32)(r_esi+0x468u);
    /* 0055afe8: mov dword ptr [esi + 0x46c], 0 */ W32((u32)(r_esi+0x46cu), 0x0u);
    /* 0055aff2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055aff3: mov ecx, esi */ r_ecx = r_esi;
    /* 0055aff5: mov dword ptr [esi + 0x470], 0 */ W32((u32)(r_esi+0x470u), 0x0u);
    /* 0055afff: call 0x5579fc */ r_esp -= 4; W32(r_esp, 0x55b004u); f_005579fc();
L_0055b004:; BB(0x0055b004);
    /* 0055b004: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055b005: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055b006: ret  */ FN_RET(0x0055af48); r_esp += 4; return;
}

