#include "protos.h"

void f_0066616d(void)
{
    FN_ENTER(0x0066616d);
    /* 0066616d: sbb byte ptr [eax + eax], 0x59 */ { u32 ad = (u32)(r_eax+r_eax); u32 c = fC; u32 a = R8(ad); u32 b = 0x59u; u32 r = (a - b - c) & 0xffu; W8(ad, r);  }
    /* 00666171: call 0x7a9558 */ r_esp -= 4; W32(r_esp, 0x666176u); f_007a9558();
    /* 00666176: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 0066617c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066617e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x666183u); f_005b8610();
    /* 00666183: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666184: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x666189u); f_0082e1e8();
    /* 00666189: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066618a: call 0x7a9564 */ r_esp -= 4; W32(r_esp, 0x66618fu); f_007a9564();
    /* 0066618f: jmp 0x6661d3 */ goto L_006661d3;
L_006661d3:; BB(0x006661d3);
    /* 006661d3: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006661d8: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6661ddu); f_0082d710();
    /* 006661dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006661de: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006661e3: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x6661e8u); f_0082eb80();
    /* 006661e8: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 006661ed: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 006661f3: mov esi, dword ptr [0xaab508] */ r_esi = R32((u32)(0xaab508u));
    /* 006661f9: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 006661fe: mov eax, dword ptr [0xaab50c] */ r_eax = R32((u32)(0xaab50cu));
    /* 00666203: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 00666209: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066620b: mov dword ptr [0xaf0370], esi */ W32((u32)(0xaf0370u), r_esi);
    /* 00666211: mov dword ptr [0xaf0374], eax */ W32((u32)(0xaf0374u), r_eax);
    /* 00666216: mov eax, dword ptr [0xaab510] */ r_eax = R32((u32)(0xaab510u));
    /* 0066621b: mov dword ptr [0xaf0378], eax */ W32((u32)(0xaf0378u), r_eax);
    /* 00666220: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 00666225: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 0066622a: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0066622f: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00666234: call 0x6662d4 */ r_esp -= 4; W32(r_esp, 0x666239u); f_006662d4();
    /* 00666239: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066623c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066623d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066623e: ret  */ FN_RET(0x0066616d); r_esp += 4; return;
}

void f_00666275(void)
{
    FN_ENTER(0x00666275);
    goto L_00666275;
L_006661d3:; BB(0x006661d3);
    /* 006661d3: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006661d8: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6661ddu); f_0082d710();
    /* 006661dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006661de: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006661e3: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x6661e8u); f_0082eb80();
    /* 006661e8: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 006661ed: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 006661f3: mov esi, dword ptr [0xaab508] */ r_esi = R32((u32)(0xaab508u));
    /* 006661f9: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 006661fe: mov eax, dword ptr [0xaab50c] */ r_eax = R32((u32)(0xaab50cu));
    /* 00666203: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 00666209: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066620b: mov dword ptr [0xaf0370], esi */ W32((u32)(0xaf0370u), r_esi);
    /* 00666211: mov dword ptr [0xaf0374], eax */ W32((u32)(0xaf0374u), r_eax);
    /* 00666216: mov eax, dword ptr [0xaab510] */ r_eax = R32((u32)(0xaab510u));
    /* 0066621b: mov dword ptr [0xaf0378], eax */ W32((u32)(0xaf0378u), r_eax);
    /* 00666220: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 00666225: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 0066622a: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0066622f: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00666234: call 0x6662d4 */ r_esp -= 4; W32(r_esp, 0x666239u); f_006662d4();
    /* 00666239: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066623c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066623d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066623e: ret  */ FN_RET(0x00666275); r_esp += 4; return;
L_00666275:; BB(0x00666275);
    /* 00666275: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666276: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x66627bu); f_0082e1e8();
    /* 0066627b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066627c: call 0x7a9564 */ r_esp -= 4; W32(r_esp, 0x666281u); f_007a9564();
    /* 00666281: jmp 0x6661d3 */ goto L_006661d3;
}

void f_006662d4(void) /* sub_6662D4 */
{
    FN_ENTER(0x006662d4);
    /* 006662d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006662d5: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006662d8: lea ebx, [ecx + 0x38] */ r_ebx = (u32)(r_ecx+0x38u);
    /* 006662db: add ecx, 0x128 */ {  u32 a = r_ecx; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006662e1: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 006662e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006662e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006662e5: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x6662eau); f_007806dc();
    /* 006662ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006662ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006662ef: je 0x666541 */ if (fZ) goto L_00666541;
L_006662f5:; BB(0x006662f5);
    /* 006662f5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006662f8: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 006662fa: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006662fd: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00666300: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00666303: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00666307: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0066630a: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0066630d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00666311: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00666314: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 00666317: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0066631b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0066631e: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 00666321: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00666325: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00666328: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 0066632b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0066632f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00666332: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00666333: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666334: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x666339u); f_00836208();
    /* 00666339: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066633c: fld dword ptr [0x9396a4] */ FPUSH(R_F32((u32)(0x9396a4u)));
    /* 00666342: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00666344: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00666346: fdivr dword ptr [0x9396a0] */ ST(0) = R_F32((u32)(0x9396a0u)) / ST(0);
    /* 0066634c: fld dword ptr [0x93969c] */ FPUSH(R_F32((u32)(0x93969cu)));
    /* 00666352: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00666354: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 0066635a: mov ecx, dword ptr [0xaf0374] */ r_ecx = R32((u32)(0xaf0374u));
    /* 00666360: mov ebx, dword ptr [0xaf0378] */ r_ebx = R32((u32)(0xaf0378u));
    /* 00666366: mov eax, dword ptr [0xaf037c] */ r_eax = R32((u32)(0xaf037cu));
    /* 0066636b: fld dword ptr [0x939698] */ FPUSH(R_F32((u32)(0x939698u)));
    /* 00666371: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00666373: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00666375: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 0066637b: mov dword ptr [0xaab50c], ecx */ W32((u32)(0xaab50cu), r_ecx);
    /* 00666381: mov dword ptr [0xaab510], ebx */ W32((u32)(0xaab510u), r_ebx);
    /* 00666387: mov dword ptr [0xaab514], eax */ W32((u32)(0xaab514u), r_eax);
    /* 0066638c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066638e: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00666390: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00666392: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00666393: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00666395: jb 0x666399 */ if (fC) goto L_00666399;
L_00666397:; BB(0x00666397);
    /* 00666397: fst st(2) */ ST(2) = ST(0);
L_00666399:; BB(0x00666399);
    /* 00666399: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0066639b: mov eax, dword ptr [0xa73344] */ r_eax = R32((u32)(0xa73344u));
    /* 006663a0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006663a2: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 006663a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006663a8: je 0x666546 */ if (fZ) goto L_00666546;
L_006663ae:; BB(0x006663ae);
    /* 006663ae: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 006663b2: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 006663b6: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006663ba: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 006663be: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 006663c2: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 006663c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006663c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006663c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006663c9: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x6663ceu); f_007a8d98();
    /* 006663ce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006663d1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6663d6u); f_0082d7b0();
    /* 006663d6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006663d9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6663deu); f_0082d838();
    /* 006663de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006663e0: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 006663e5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006663e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006663e9: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x6663eeu); f_00830b74();
    /* 006663ee: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 006663f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006663f4: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x6663f9u); f_00830c04();
    /* 006663f9: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 006663fd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006663ff: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x666404u); f_0082e9e4();
    /* 00666404: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00666406: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00666408: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x66640du); f_0082d8bc();
    /* 0066640d: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00666411: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x666416u); f_00831290();
    /* 00666416: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00666418: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 0066641d: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x666422u); f_0082e9e4();
    /* 00666422: mov eax, dword ptr [0xa73344] */ r_eax = R32((u32)(0xa73344u));
    /* 00666427: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0066642b: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0066642f: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00666433: mov dword ptr [esp + 0x30], 0xc0a00000 */ W32((u32)(r_esp+0x30u), 0xc0a00000u);
    /* 0066643b: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 00666443: lea edx, [esp + 0x50] */ r_edx = (u32)(r_esp+0x50u);
    /* 00666447: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 0066644f: mov dword ptr [esp + 0x3c], 0x3f800000 */ W32((u32)(r_esp+0x3cu), 0x3f800000u);
    /* 00666457: mov dword ptr [esp + 0x40], 0x3f800000 */ W32((u32)(r_esp+0x40u), 0x3f800000u);
    /* 0066645f: mov dword ptr [esp + 0x44], 0 */ W32((u32)(r_esp+0x44u), 0x0u);
    /* 00666467: mov dword ptr [esp + 0x4c], 0x9c9388 */ W32((u32)(r_esp+0x4cu), 0x9c9388u);
    /* 0066646f: mov dword ptr [esp + 0x54], 0x3f800000 */ W32((u32)(r_esp+0x54u), 0x3f800000u);
    /* 00666477: mov dword ptr [esp + 0x58], 0x3f800000 */ W32((u32)(r_esp+0x58u), 0x3f800000u);
    /* 0066647f: mov dword ptr [esp + 0x5c], 0x3f800000 */ W32((u32)(r_esp+0x5cu), 0x3f800000u);
    /* 00666487: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666488: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x66648du); f_0082d710();
    /* 0066648d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066648e: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x666493u); f_0082dbac();
    /* 00666493: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00666497: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00666499: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066649b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066649c: call 0x82bcb4 */ r_esp -= 4; W32(r_esp, 0x6664a1u); f_0082bcb4();
    /* 006664a1: mov dword ptr [esp + 0x3c], 0 */ W32((u32)(r_esp+0x3cu), 0x0u);
    /* 006664a9: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 006664ad: mov dword ptr [esp + 0x40], 0 */ W32((u32)(r_esp+0x40u), 0x0u);
    /* 006664b5: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 006664b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006664b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006664ba: call 0x82bcb4 */ r_esp -= 4; W32(r_esp, 0x6664bfu); f_0082bcb4();
    /* 006664bf: mov dword ptr [esp + 0x48], 0xc0a00000 */ W32((u32)(r_esp+0x48u), 0xc0a00000u);
    /* 006664c7: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 006664cb: mov dword ptr [esp + 0x4c], 0xc0a00000 */ W32((u32)(r_esp+0x4cu), 0xc0a00000u);
    /* 006664d3: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006664d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006664d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006664d8: call 0x82bcb4 */ r_esp -= 4; W32(r_esp, 0x6664ddu); f_0082bcb4();
    /* 006664dd: mov dword ptr [esp + 0x54], 0 */ W32((u32)(r_esp+0x54u), 0x0u);
    /* 006664e5: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 006664e9: mov dword ptr [esp + 0x58], 0xc0a00000 */ W32((u32)(r_esp+0x58u), 0xc0a00000u);
    /* 006664f1: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 006664f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006664f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006664f6: call 0x82bcb4 */ r_esp -= 4; W32(r_esp, 0x6664fbu); f_0082bcb4();
    /* 006664fb: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006664fe: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x666503u); f_0082dab0();
    /* 00666503: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666508: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x66650du); f_0082d710();
    /* 0066650d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066650e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x666513u); f_0082da80();
L_00666513:; BB(0x00666513);
    /* 00666513: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 00666518: mov edx, dword ptr [0xaab50c] */ r_edx = R32((u32)(0xaab50cu));
    /* 0066651e: mov ecx, dword ptr [0xaab510] */ r_ecx = R32((u32)(0xaab510u));
    /* 00666524: mov ebx, dword ptr [0xaab514] */ r_ebx = R32((u32)(0xaab514u));
    /* 0066652a: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 0066652f: mov dword ptr [0xaf0374], edx */ W32((u32)(0xaf0374u), r_edx);
    /* 00666535: mov dword ptr [0xaf0378], ecx */ W32((u32)(0xaf0378u), r_ecx);
    /* 0066653b: mov dword ptr [0xaf037c], ebx */ W32((u32)(0xaf037cu), r_ebx);
L_00666541:; BB(0x00666541);
    /* 00666541: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00666544: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00666545: ret  */ FN_RET(0x006662d4); r_esp += 4; return;
L_00666546:; BB(0x00666546);
    /* 00666546: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00666548: jmp 0x666513 */ goto L_00666513;
}

void f_00666432(void)
{
    FN_ENTER(0x00666432);
    /* 00666432: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00666433: mov dword ptr [esp + 0x30], 0xc0a00000 */ W32((u32)(r_esp+0x30u), 0xc0a00000u);
    /* 0066643b: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 00666443: lea edx, [esp + 0x50] */ r_edx = (u32)(r_esp+0x50u);
    /* 00666447: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 0066644f: mov dword ptr [esp + 0x3c], 0x3f800000 */ W32((u32)(r_esp+0x3cu), 0x3f800000u);
    /* 00666457: mov dword ptr [esp + 0x40], 0x3f800000 */ W32((u32)(r_esp+0x40u), 0x3f800000u);
    /* 0066645f: mov dword ptr [esp + 0x44], 0 */ W32((u32)(r_esp+0x44u), 0x0u);
    /* 00666467: mov dword ptr [esp + 0x4c], 0x9c9388 */ W32((u32)(r_esp+0x4cu), 0x9c9388u);
    /* 0066646f: mov dword ptr [esp + 0x54], 0x3f800000 */ W32((u32)(r_esp+0x54u), 0x3f800000u);
    /* 00666477: mov dword ptr [esp + 0x58], 0x3f800000 */ W32((u32)(r_esp+0x58u), 0x3f800000u);
    /* 0066647f: mov dword ptr [esp + 0x5c], 0x3f800000 */ W32((u32)(r_esp+0x5cu), 0x3f800000u);
    /* 00666487: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666488: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x66648du); f_0082d710();
    /* 0066648d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066648e: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x666493u); f_0082dbac();
    /* 00666493: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00666497: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00666499: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066649b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066649c: call 0x82bcb4 */ r_esp -= 4; W32(r_esp, 0x6664a1u); f_0082bcb4();
    /* 006664a1: mov dword ptr [esp + 0x3c], 0 */ W32((u32)(r_esp+0x3cu), 0x0u);
    /* 006664a9: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 006664ad: mov dword ptr [esp + 0x40], 0 */ W32((u32)(r_esp+0x40u), 0x0u);
    /* 006664b5: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 006664b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006664b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006664ba: call 0x82bcb4 */ r_esp -= 4; W32(r_esp, 0x6664bfu); f_0082bcb4();
    /* 006664bf: mov dword ptr [esp + 0x48], 0xc0a00000 */ W32((u32)(r_esp+0x48u), 0xc0a00000u);
    /* 006664c7: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 006664cb: mov dword ptr [esp + 0x4c], 0xc0a00000 */ W32((u32)(r_esp+0x4cu), 0xc0a00000u);
    /* 006664d3: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006664d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006664d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006664d8: call 0x82bcb4 */ r_esp -= 4; W32(r_esp, 0x6664ddu); f_0082bcb4();
    /* 006664dd: mov dword ptr [esp + 0x54], 0 */ W32((u32)(r_esp+0x54u), 0x0u);
    /* 006664e5: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 006664e9: mov dword ptr [esp + 0x58], 0xc0a00000 */ W32((u32)(r_esp+0x58u), 0xc0a00000u);
    /* 006664f1: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 006664f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006664f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006664f6: call 0x82bcb4 */ r_esp -= 4; W32(r_esp, 0x6664fbu); f_0082bcb4();
    /* 006664fb: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006664fe: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x666503u); f_0082dab0();
    /* 00666503: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666508: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x66650du); f_0082d710();
    /* 0066650d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066650e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x666513u); f_0082da80();
    /* 00666513: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 00666518: mov edx, dword ptr [0xaab50c] */ r_edx = R32((u32)(0xaab50cu));
    /* 0066651e: mov ecx, dword ptr [0xaab510] */ r_ecx = R32((u32)(0xaab510u));
    /* 00666524: mov ebx, dword ptr [0xaab514] */ r_ebx = R32((u32)(0xaab514u));
    /* 0066652a: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 0066652f: mov dword ptr [0xaf0374], edx */ W32((u32)(0xaf0374u), r_edx);
    /* 00666535: mov dword ptr [0xaf0378], ecx */ W32((u32)(0xaf0378u), r_ecx);
    /* 0066653b: mov dword ptr [0xaf037c], ebx */ W32((u32)(0xaf037cu), r_ebx);
    /* 00666541: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00666544: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00666545: ret  */ FN_RET(0x00666432); r_esp += 4; return;
}

void f_0066654c(void) /* sub_66654C */
{
    FN_ENTER(0x0066654c);
    /* 0066654c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066654d: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 00666553: mov eax, 1 */ r_eax = 0x1u;
    /* 00666558: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066655a: mov dword ptr [0xa8fc00], 0x427c0000 */ W32((u32)(0xa8fc00u), 0x427c0000u);
    /* 00666564: mov word ptr [0xa8fc12], ax */ W16((u32)(0xa8fc12u), (u16)r_eax);
    /* 0066656a: mov dword ptr [0xa8fc04], 0 */ W32((u32)(0xa8fc04u), 0x0u);
    /* 00666574: mov dword ptr [0xa8fc08], 0x427c0000 */ W32((u32)(0xa8fc08u), 0x427c0000u);
    /* 0066657e: mov dword ptr [0xa8fc0c], 0 */ W32((u32)(0xa8fc0cu), 0x0u);
    /* 00666588: je 0x666591 */ if (fZ) goto L_00666591;
L_0066658a:; BB(0x0066658a);
    /* 0066658a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066658c: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x666591u); f_004066a8();
L_00666591:; BB(0x00666591);
    /* 00666591: mov dword ptr [0xa8fc1c], 0 */ W32((u32)(0xa8fc1cu), 0x0u);
    /* 0066659b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066659d: mov ebx, eax */ r_ebx = r_eax;
L_0066659f:; BB(0x0066659f);
    /* 0066659f: push dword ptr [ebx + 0xa8fc20] */ { u32 v = R32((u32)(r_ebx+0xa8fc20u)); r_esp -= 4; W32(r_esp, v); }
    /* 006665a5: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x6665aau); f_00800b5c();
    /* 006665aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006665ab: mov dword ptr [ebx + 0xa8fc20], 0 */ W32((u32)(r_ebx+0xa8fc20u), 0x0u);
    /* 006665b5: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006665b8: cmp ebx, 0x24 */ {  u32 a = r_ebx; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006665bb: jl 0x66659f */ if ((fS!=fO)) goto L_0066659f;
L_006665bd:; BB(0x006665bd);
    /* 006665bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006665be: ret  */ FN_RET(0x0066654c); r_esp += 4; return;
}

void f_00666564(void)
{
    FN_ENTER(0x00666564);
    /* 00666564: mov word ptr [0xa8fc12], ax */ W16((u32)(0xa8fc12u), (u16)r_eax);
    /* 0066656a: mov dword ptr [0xa8fc04], 0 */ W32((u32)(0xa8fc04u), 0x0u);
    /* 00666574: mov dword ptr [0xa8fc08], 0x427c0000 */ W32((u32)(0xa8fc08u), 0x427c0000u);
    /* 0066657e: mov dword ptr [0xa8fc0c], 0 */ W32((u32)(0xa8fc0cu), 0x0u);
    /* 00666588: je 0x666591 */ if (fZ) goto L_00666591;
L_0066658a:; BB(0x0066658a);
    /* 0066658a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066658c: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x666591u); f_004066a8();
L_00666591:; BB(0x00666591);
    /* 00666591: mov dword ptr [0xa8fc1c], 0 */ W32((u32)(0xa8fc1cu), 0x0u);
    /* 0066659b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066659d: mov ebx, eax */ r_ebx = r_eax;
L_0066659f:; BB(0x0066659f);
    /* 0066659f: push dword ptr [ebx + 0xa8fc20] */ { u32 v = R32((u32)(r_ebx+0xa8fc20u)); r_esp -= 4; W32(r_esp, v); }
    /* 006665a5: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x6665aau); f_00800b5c();
    /* 006665aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006665ab: mov dword ptr [ebx + 0xa8fc20], 0 */ W32((u32)(r_ebx+0xa8fc20u), 0x0u);
    /* 006665b5: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006665b8: cmp ebx, 0x24 */ {  u32 a = r_ebx; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006665bb: jl 0x66659f */ if ((fS!=fO)) goto L_0066659f;
L_006665bd:; BB(0x006665bd);
    /* 006665bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006665be: ret  */ FN_RET(0x00666564); r_esp += 4; return;
}

void f_006665c0(void)
{
    FN_ENTER(0x006665c0);
    /* 006665c0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006665c4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006665c6: mov word ptr [0xa8fc12], dx */ W16((u32)(0xa8fc12u), (u16)r_edx);
    /* 006665cd: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006665d0: mov dword ptr [0xa8fc00], ecx */ W32((u32)(0xa8fc00u), r_ecx);
    /* 006665d6: mov dword ptr [0xa8fc04], 0 */ W32((u32)(0xa8fc04u), 0x0u);
    /* 006665e0: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006665e3: mov dword ptr [0xa8fc08], edx */ W32((u32)(0xa8fc08u), r_edx);
    /* 006665e9: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006665ec: mov dword ptr [0xa8fc0c], edx */ W32((u32)(0xa8fc0cu), r_edx);
    /* 006665f2: movzx edx, byte ptr [eax + 0x14] */ r_edx = (u32)R8((u32)(r_eax+0x14u));
    /* 006665f6: mov byte ptr [0xa8fc18], dl */ W8((u32)(0xa8fc18u), (u8)r_edx);
    /* 006665fc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 006665ff: mov dword ptr [0xa8fc14], eax */ W32((u32)(0xa8fc14u), r_eax);
    /* 00666604: ret  */ FN_RET(0x006665c0); r_esp += 4; return;
}

void f_00666608(void) /* sub_666608 */
{
    FN_ENTER(0x00666608);
    /* 00666608: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666609: mov ebp, esp */ r_ebp = r_esp;
    /* 0066660b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066660d: push 0x8e85fc */ { u32 v = 0x8e85fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00666612: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00666618: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666619: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00666620: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00666623: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00666626: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00666629: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0066662c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0066662f: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00666632: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 00666638: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0066663d: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x666642u); f_007c1100();
    /* 00666642: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666644: jne 0x66664f */ if (!fZ) goto L_0066664f;
L_00666646:; BB(0x00666646);
    /* 00666646: mov ecx, 0xa8fc48 */ r_ecx = 0xa8fc48u;
    /* 0066664b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066664d: jmp 0x666677 */ goto L_00666677;
L_0066664f:; BB(0x0066664f);
    /* 0066664f: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00666655: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0066665a: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x66665fu); f_007c1160();
    /* 0066665f: mov ecx, 0xa8fc48 */ r_ecx = 0xa8fc48u;
    /* 00666664: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666666: jne 0x66666c */ if (!fZ) goto L_0066666c;
L_00666668:; BB(0x00666668);
    /* 00666668: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066666a: jmp 0x666677 */ goto L_00666677;
L_0066666c:; BB(0x0066666c);
    /* 0066666c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0066666e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00666670: mov dword ptr [0xa8fc44], eax */ W32((u32)(0xa8fc44u), r_eax);
    /* 00666675: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_00666677:; BB(0x00666677);
    /* 00666677: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0066667a: cmp eax, 0x3e7 */ {  u32 a = r_eax; u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066667f: jl 0x666689 */ if ((fS!=fO)) goto L_00666689;
L_00666681:; BB(0x00666681);
    /* 00666681: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00666687: jmp 0x6666a1 */ goto L_006666a1;
L_00666689:; BB(0x00666689);
    /* 00666689: movsx eax, word ptr [0xa8fc44] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa8fc44u));
    /* 00666690: cmp eax, 0x3e7 */ {  u32 a = r_eax; u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00666695: jl 0x6666a1 */ if ((fS!=fO)) goto L_006666a1;
L_00666697:; BB(0x00666697);
    /* 00666697: mov dword ptr [0xa8fc44], 0 */ W32((u32)(0xa8fc44u), 0x0u);
L_006666a1:; BB(0x006666a1);
    /* 006666a1: call 0x77bab4 */ r_esp -= 4; W32(r_esp, 0x6666a6u); f_0077bab4();
    /* 006666a6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006666a9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006666ac: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006666af: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006666b0: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006666b2: add edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006666b5: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 006666b8: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 006666bb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006666be: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x6666c3u); f_0082e900();
    /* 006666c3: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 006666c6: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 006666ca: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006666cf: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006666d2: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 006666d5: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 006666d8: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 006666db: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006666de: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006666e1: je 0x6666ee */ if (fZ) goto L_006666ee;
L_006666e3:; BB(0x006666e3);
    /* 006666e3: cmp eax, 0x3e7 */ {  u32 a = r_eax; u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006666e8: jne 0x666944 */ if (!fZ) goto L_00666944;
L_006666ee:; BB(0x006666ee);
    /* 006666ee: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006666f1: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006666f6: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006666f8: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006666fd: mov word ptr [0xa8fc12], cx */ W16((u32)(0xa8fc12u), (u16)r_ecx);
    /* 00666704: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00666707: mov ebx, esi */ r_ebx = r_esi;
    /* 00666709: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0066670c: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0066670e: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00666711: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00666713: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00666715: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00666717: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00666719: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066671b: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066671e: jl 0x666727 */ if ((fS!=fO)) goto L_00666727;
L_00666720:; BB(0x00666720);
    /* 00666720: mov ecx, 9 */ r_ecx = 0x9u;
    /* 00666725: jmp 0x66672f */ goto L_0066672f;
L_00666727:; BB(0x00666727);
    /* 00666727: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00666729: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0066672b: jge 0x66672f */ if ((fS==fO)) goto L_0066672f;
L_0066672d:; BB(0x0066672d);
    /* 0066672d: mov ecx, eax */ r_ecx = r_eax;
L_0066672f:; BB(0x0066672f);
    /* 0066672f: mov edx, 0xa8fba0 */ r_edx = 0xa8fba0u;
    /* 00666734: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 00666737: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00666739: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0066673b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0066673d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0066673f: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00666742: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00666744: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00666746: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00666748: lea eax, [ecx + 0x9c9000] */ r_eax = (u32)(r_ecx+0x9c9000u);
    /* 0066674e: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00666750: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00666753: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00666756: mov dword ptr [edx], esi */ W32((u32)(r_edx), r_esi);
    /* 00666758: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 0066675b: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0066675e: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00666761: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00666764: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00666767: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0066676a: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0066676d: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 00666770: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00666773: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 00666776: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00666779: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 0066677c: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0066677f: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 00666782: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00666785: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 00666788: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0066678b: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0066678e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00666791: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 00666794: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00666797: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 0066679a: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0066679d: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 006667a0: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006667a3: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 006667a6: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006667a9: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 006667ac: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 006667af: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 006667b2: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006667b5: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 006667b8: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006667bb: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 006667be: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 006667c1: mov eax, dword ptr [eax + 0x50] */ r_eax = R32((u32)(r_eax+0x50u));
    /* 006667c4: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 006667c7: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 006667ca: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 006667d1: push 0x3ac */ { u32 v = 0x3acu; r_esp -= 4; W32(r_esp, v); }
    /* 006667d6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6667dbu); f_005caba4();
    /* 006667db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006667dc: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 006667df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006667e1: je 0x666805 */ if (fZ) goto L_00666805;
L_006667e3:; BB(0x006667e3);
    /* 006667e3: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 006667ea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006667f1: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 006667f7: mov ecx, eax */ r_ecx = r_eax;
    /* 006667f9: call 0x666964 */ r_esp -= 4; W32(r_esp, 0x6667feu); f_00666964();
    /* 006667fe: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_00666805:; BB(0x00666805);
    /* 00666805: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066680c: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00666813: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 00666815: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x66681au); f_005caba4();
    /* 0066681a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066681b: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0066681e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666820: je 0x666853 */ if (fZ) goto L_00666853;
L_00666822:; BB(0x00666822);
    /* 00666822: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 00666829: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00666830: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00666836: movsx edx, word ptr [0xa8fbb4] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa8fbb4u));
    /* 0066683d: mov ecx, eax */ r_ecx = r_eax;
    /* 0066683f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666840: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00666842: push 0xa8fbd8 */ { u32 v = 0xa8fbd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00666847: call 0x6671cc */ r_esp -= 4; W32(r_esp, 0x66684cu); f_006671cc();
    /* 0066684c: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_00666853:; BB(0x00666853);
    /* 00666853: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066685a: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00666861: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 00666863: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x666868u); f_005caba4();
    /* 00666868: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00666869: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0066686c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066686e: je 0x6668a1 */ if (fZ) goto L_006668a1;
L_00666870:; BB(0x00666870);
    /* 00666870: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 00666877: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0066687e: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00666884: movsx edx, word ptr [0xa8fbb4] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa8fbb4u));
    /* 0066688b: mov ecx, eax */ r_ecx = r_eax;
    /* 0066688d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066688e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666890: push 0xa8fbcc */ { u32 v = 0xa8fbccu; r_esp -= 4; W32(r_esp, v); }
    /* 00666895: call 0x6671cc */ r_esp -= 4; W32(r_esp, 0x66689au); f_006671cc();
    /* 0066689a: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_006668a1:; BB(0x006668a1);
    /* 006668a1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006668a8: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006668af: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 006668b1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6668b6u); f_005caba4();
    /* 006668b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006668b7: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006668ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006668bc: je 0x6668f4 */ if (fZ) goto L_006668f4;
L_006668be:; BB(0x006668be);
    /* 006668be: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 006668c5: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006668cc: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 006668d2: movsx edx, word ptr [0xa8fbb4] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa8fbb4u));
    /* 006668d9: mov ebx, 1 */ r_ebx = 0x1u;
    /* 006668de: mov ecx, eax */ r_ecx = r_eax;
    /* 006668e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006668e1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006668e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006668e3: push 0x9c937c */ { u32 v = 0x9c937cu; r_esp -= 4; W32(r_esp, v); }
    /* 006668e8: call 0x667178 */ r_esp -= 4; W32(r_esp, 0x6668edu); f_00667178();
    /* 006668ed: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_006668f4:; BB(0x006668f4);
    /* 006668f4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006668fb: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00666902: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 00666904: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x666909u); f_005caba4();
    /* 00666909: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066690a: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0066690d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066690f: je 0x666944 */ if (fZ) goto L_00666944;
L_00666911:; BB(0x00666911);
    /* 00666911: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 00666918: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0066691f: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00666925: movsx edx, word ptr [0xa8fbb4] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa8fbb4u));
    /* 0066692c: mov ecx, eax */ r_ecx = r_eax;
    /* 0066692e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066692f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00666931: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666933: push 0x9c9370 */ { u32 v = 0x9c9370u; r_esp -= 4; W32(r_esp, v); }
    /* 00666938: call 0x667178 */ r_esp -= 4; W32(r_esp, 0x66693du); f_00667178();
    /* 0066693d: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00666944:; BB(0x00666944);
    /* 00666944: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00666947: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066694a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066694d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00666950: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00666953: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00666956: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666959: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00666960: mov esp, ebp */ r_esp = r_ebp;
    /* 00666962: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666963: ret  */ FN_RET(0x00666608); r_esp += 4; return;
}

void f_00666964(void) /* sub_666964 */
{
    FN_ENTER(0x00666964);
    /* 00666964: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666965: mov ebp, esp */ r_ebp = r_esp;
    /* 00666967: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00666969: push 0x8e8618 */ { u32 v = 0x8e8618u; r_esp -= 4; W32(r_esp, v); }
    /* 0066696e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00666974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666975: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066697c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066697f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00666982: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00666985: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00666988: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066698b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066698e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00666991: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x666996u); f_00770748();
    /* 00666996: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066699d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006669a0: mov dword ptr [ecx], 0xb347e0 */ W32((u32)(r_ecx), 0xb347e0u);
    /* 006669a6: mov eax, dword ptr [0xa8fbc0] */ r_eax = R32((u32)(0xa8fbc0u));
    /* 006669ab: mov dword ptr [ecx + 0x398], 0 */ W32((u32)(r_ecx+0x398u), 0x0u);
    /* 006669b5: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 006669b8: mov edx, dword ptr [0xa8fbc4] */ r_edx = R32((u32)(0xa8fbc4u));
    /* 006669be: mov dword ptr [ecx + 0x39c], 0 */ W32((u32)(r_ecx+0x39cu), 0x0u);
    /* 006669c8: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 006669cb: mov ebx, dword ptr [0xa8fbc8] */ r_ebx = R32((u32)(0xa8fbc8u));
    /* 006669d1: mov dword ptr [ecx + 0x3a0], 0 */ W32((u32)(r_ecx+0x3a0u), 0x0u);
    /* 006669db: mov dword ptr [ecx + 0x40], ebx */ W32((u32)(r_ecx+0x40u), r_ebx);
    /* 006669de: mov esi, dword ptr [0xa8fba0] */ r_esi = R32((u32)(0xa8fba0u));
    /* 006669e4: mov edi, dword ptr [0xa8fba4] */ r_edi = R32((u32)(0xa8fba4u));
    /* 006669ea: mov dword ptr [ecx + 0x3a4], 0 */ W32((u32)(r_ecx+0x3a4u), 0x0u);
    /* 006669f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006669f6: mov dword ptr [ecx + 0x358], eax */ W32((u32)(r_ecx+0x358u), r_eax);
    /* 006669fc: mov dword ptr [ecx + 0x34c], 0 */ W32((u32)(r_ecx+0x34cu), 0x0u);
    /* 00666a06: mov dword ptr [ecx + 0x35c], eax */ W32((u32)(r_ecx+0x35cu), r_eax);
    /* 00666a0c: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00666a12: mov dword ptr [ecx + 0x340], eax */ W32((u32)(r_ecx+0x340u), r_eax);
    /* 00666a18: mov dword ptr [ecx + 0x350], 0 */ W32((u32)(r_ecx+0x350u), 0x0u);
    /* 00666a22: mov dword ptr [ecx + 0x344], esi */ W32((u32)(r_ecx+0x344u), r_esi);
    /* 00666a28: mov dword ptr [ecx + 0x348], edi */ W32((u32)(r_ecx+0x348u), r_edi);
    /* 00666a2e: mov dword ptr [ecx + 0x360], eax */ W32((u32)(r_ecx+0x360u), r_eax);
    /* 00666a34: mov dword ptr [ecx + 0x354], 0 */ W32((u32)(r_ecx+0x354u), 0x0u);
    /* 00666a3e: lea eax, [ecx + 0x36c] */ r_eax = (u32)(r_ecx+0x36cu);
    /* 00666a44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666a45: mov dword ptr [ecx + 0x36c], 0 */ W32((u32)(r_ecx+0x36cu), 0x0u);
    /* 00666a4f: mov dword ptr [ecx + 0x370], 0 */ W32((u32)(r_ecx+0x370u), 0x0u);
    /* 00666a59: mov dword ptr [ecx + 0x374], 0 */ W32((u32)(r_ecx+0x374u), 0x0u);
    /* 00666a63: mov dword ptr [ecx + 0x378], 0x40000000 */ W32((u32)(r_ecx+0x378u), 0x40000000u);
    /* 00666a6d: mov dword ptr [ecx + 0x37c], 0x3f800000 */ W32((u32)(r_ecx+0x37cu), 0x3f800000u);
    /* 00666a77: mov dword ptr [ecx + 0x380], 1 */ W32((u32)(r_ecx+0x380u), 0x1u);
    /* 00666a81: mov dword ptr [ecx + 0x384], 0x40107 */ W32((u32)(r_ecx+0x384u), 0x40107u);
    /* 00666a8b: call 0x7b9ccc */ r_esp -= 4; W32(r_esp, 0x666a90u); f_007b9ccc();
    /* 00666a90: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00666a93: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x666a98u); f_007b4f54();
    /* 00666a98: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00666a9b: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00666a9e: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00666aa1: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00666aa4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00666aa6: mov dword ptr [eax + 0x364], edx */ W32((u32)(r_eax+0x364u), r_edx);
    /* 00666aac: mov word ptr [0xa8fc10], dx */ W16((u32)(0xa8fc10u), (u16)r_edx);
    /* 00666ab3: mov byte ptr [0xa8fc18], dl */ W8((u32)(0xa8fc18u), (u8)r_edx);
    /* 00666ab9: mov dword ptr [eax + 0x368], edx */ W32((u32)(r_eax+0x368u), r_edx);
    /* 00666abf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666ac2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00666ac9: mov esp, ebp */ r_esp = r_ebp;
    /* 00666acb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666acc: ret 4 */ FN_RET(0x00666964); r_esp += 8; return;
}

void f_00666ad0(void) /* sub_666AD0 */
{
    FN_ENTER(0x00666ad0);
    /* 00666ad0: movzx eax, word ptr [0xa8fc10] */ r_eax = (u32)R16((u32)(0xa8fc10u));
    /* 00666ad7: and eax, 0xffcc */ {  u32 a = r_eax; u32 b = 0xffccu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00666adc: mov word ptr [0xa8fc10], ax */ W16((u32)(0xa8fc10u), (u16)r_eax);
    /* 00666ae2: ret  */ FN_RET(0x00666ad0); r_esp += 4; return;
}

void f_00666ae4(void) /* sub_666AE4 */
{
    FN_ENTER(0x00666ae4);
    /* 00666ae4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666ae5: mov ebp, esp */ r_ebp = r_esp;
    /* 00666ae7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00666ae9: push 0x8e8640 */ { u32 v = 0x8e8640u; r_esp -= 4; W32(r_esp, v); }
    /* 00666aee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00666af4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666af5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00666afc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00666aff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00666b02: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00666b05: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00666b08: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00666b0b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00666b0d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00666b14: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x666b19u); f_005caba4();
    /* 00666b19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00666b1a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00666b1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00666b1f: je 0x666b44 */ if (fZ) goto L_00666b44;
L_00666b21:; BB(0x00666b21);
    /* 00666b21: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00666b28: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00666b2f: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 00666b35: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00666b38: call 0x666b54 */ r_esp -= 4; W32(r_esp, 0x666b3du); f_00666b54();
    /* 00666b3d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00666b44:; BB(0x00666b44);
    /* 00666b44: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666b47: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00666b4e: mov esp, ebp */ r_esp = r_ebp;
    /* 00666b50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666b51: ret  */ FN_RET(0x00666ae4); r_esp += 4; return;
}

void f_00666b54(void) /* sub_666B54 */
{
    FN_ENTER(0x00666b54);
    /* 00666b54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666b55: mov ebp, esp */ r_ebp = r_esp;
    /* 00666b57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00666b59: push 0x8e865c */ { u32 v = 0x8e865cu; r_esp -= 4; W32(r_esp, v); }
    /* 00666b5e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00666b64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666b65: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00666b6c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00666b6f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00666b72: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00666b75: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00666b78: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00666b7b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00666b7e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00666b81: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x666b86u); f_008193cc();
    /* 00666b86: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00666b8d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00666b90: mov dword ptr [eax], 0xb347c8 */ W32((u32)(r_eax), 0xb347c8u);
    /* 00666b96: call 0x77bab4 */ r_esp -= 4; W32(r_esp, 0x666b9bu); f_0077bab4();
    /* 00666b9b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00666b9e: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00666ba1: call 0x717e44 */ r_esp -= 4; W32(r_esp, 0x666ba6u); f_00717e44();
    /* 00666ba6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00666ba9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00666bab: mov dword ptr [0xa8fc48], edx */ W32((u32)(0xa8fc48u), r_edx);
    /* 00666bb1: mov dword ptr [0xa8fc44], edx */ W32((u32)(0xa8fc44u), r_edx);
    /* 00666bb7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666bba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00666bc1: mov esp, ebp */ r_esp = r_ebp;
    /* 00666bc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666bc4: ret 4 */ FN_RET(0x00666b54); r_esp += 8; return;
}

void f_00666bc8(void) /* sub_666BC8 */
{
    FN_ENTER(0x00666bc8);
    /* 00666bc8: mov dword ptr [0xa8fbf4], 0x3f800000 */ W32((u32)(0xa8fbf4u), 0x3f800000u);
    /* 00666bd2: mov dword ptr [0xa8fbf8], 0x41000000 */ W32((u32)(0xa8fbf8u), 0x41000000u);
    /* 00666bdc: mov dword ptr [0xa8fbfc], 0x3fc00000 */ W32((u32)(0xa8fbfcu), 0x3fc00000u);
    /* 00666be6: ret  */ FN_RET(0x00666bc8); r_esp += 4; return;
}

void f_00666be8(void) /* sub_666BE8 */
{
    FN_ENTER(0x00666be8);
    /* 00666be8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666be9: mov ebp, esp */ r_ebp = r_esp;
    /* 00666beb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00666bed: push 0x8e86ba */ { u32 v = 0x8e86bau; r_esp -= 4; W32(r_esp, v); }
    /* 00666bf2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00666bf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666bf9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00666c00: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00666c03: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00666c06: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00666c09: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00666c0c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00666c0f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00666c12: movzx eax, word ptr [0xa8fbe8] */ r_eax = (u32)R16((u32)(0xa8fbe8u));
    /* 00666c19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666c1b: jne 0x666c36 */ if (!fZ) goto L_00666c36;
L_00666c1d:; BB(0x00666c1d);
    /* 00666c1d: mov eax, ecx */ r_eax = r_ecx;
    /* 00666c1f: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00666c22: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00666c25: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00666c28: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00666c2b: je 0x666dd2 */ if (fZ) goto L_00666dd2;
L_00666c31:; BB(0x00666c31);
    /* 00666c31: jmp 0x666dbb */ goto L_00666dbb;
L_00666c36:; BB(0x00666c36);
    /* 00666c36: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666c39: je 0x666f0f */ if (fZ) goto L_00666f0f;
L_00666c3f:; BB(0x00666c3f);
    /* 00666c3f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666c42: je 0x666e22 */ if (fZ) goto L_00666e22;
L_00666c48:; BB(0x00666c48);
    /* 00666c48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00666c4a: je 0x666dbb */ if (fZ) goto L_00666dbb;
L_00666c50:; BB(0x00666c50);
    /* 00666c50: mov eax, ecx */ r_eax = r_ecx;
    /* 00666c52: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00666c55: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00666c58: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00666c5b: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00666c5e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666c60: je 0x666d17 */ if (fZ) goto L_00666d17;
L_00666c66:; BB(0x00666c66);
    /* 00666c66: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00666c6b: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00666c6d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00666c6f: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00666c72: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00666c74: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00666c76: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00666c79: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00666c7b: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00666c7d: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00666c7f: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00666c81: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00666c83: jne 0x666dbb */ if (!fZ) goto L_00666dbb;
L_00666c89:; BB(0x00666c89);
    /* 00666c89: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00666c8c: jg 0x666dbb */ if ((!fZ&&fS==fO)) goto L_00666dbb;
L_00666c92:; BB(0x00666c92);
    /* 00666c92: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00666c95: fld dword ptr [0x939664] */ FPUSH(R_F32((u32)(0x939664u)));
    /* 00666c9b: lea esi, [ebp - 0x60] */ r_esi = (u32)(r_ebp+0xffffffa0u);
    /* 00666c9e: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00666ca0: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00666ca3: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00666ca6: mov ebx, dword ptr [ecx + 0x24] */ r_ebx = R32((u32)(r_ecx+0x24u));
    /* 00666ca9: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00666cac: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00666caf: fadd dword ptr [ebp - 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffa4u));
    /* 00666cb2: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 00666cb5: mov dword ptr [ebp - 0x58], ebx */ W32((u32)(r_ebp+0xffffffa8u), r_ebx);
    /* 00666cb8: push 0x20e */ { u32 v = 0x20eu; r_esp -= 4; W32(r_esp, v); }
    /* 00666cbd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00666cbe: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x666cc3u); f_0050b7a4();
    /* 00666cc3: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00666cca: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00666ccc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x666cd1u); f_005caba4();
    /* 00666cd1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666cd4: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00666cd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00666cd9: je 0x666dbb */ if (fZ) goto L_00666dbb;
L_00666cdf:; BB(0x00666cdf);
    /* 00666cdf: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 00666ce6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00666ced: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00666cf3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00666cf6: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00666cf9: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00666cfc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666cfe: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 00666d03: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00666d05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666d06: call 0x6eb9f8 */ r_esp -= 4; W32(r_esp, 0x666d0bu); f_006eb9f8();
    /* 00666d0b: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00666d12: jmp 0x666dbb */ goto L_00666dbb;
L_00666d17:; BB(0x00666d17);
    /* 00666d17: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00666d1c: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00666d1e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00666d20: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00666d23: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00666d25: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00666d27: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00666d2a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00666d2c: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00666d2e: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00666d30: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00666d32: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00666d34: jne 0x666dbb */ if (!fZ) goto L_00666dbb;
L_00666d3a:; BB(0x00666d3a);
    /* 00666d3a: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00666d3d: jg 0x666dbb */ if ((!fZ&&fS==fO)) goto L_00666dbb;
L_00666d3f:; BB(0x00666d3f);
    /* 00666d3f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00666d42: fld dword ptr [0x939664] */ FPUSH(R_F32((u32)(0x939664u)));
    /* 00666d48: lea esi, [ebp - 0x74] */ r_esi = (u32)(r_ebp+0xffffff8cu);
    /* 00666d4b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00666d4d: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00666d50: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00666d53: mov ebx, dword ptr [ecx + 0x24] */ r_ebx = R32((u32)(r_ecx+0x24u));
    /* 00666d56: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00666d59: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 00666d5c: fadd dword ptr [ebp - 0x70] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff90u));
    /* 00666d5f: fstp dword ptr [ebp - 0x70] */ W_F32((u32)(r_ebp+0xffffff90u), ST(0)); FPOP();
    /* 00666d62: mov dword ptr [ebp - 0x6c], ebx */ W32((u32)(r_ebp+0xffffff94u), r_ebx);
    /* 00666d65: push 0x20f */ { u32 v = 0x20fu; r_esp -= 4; W32(r_esp, v); }
    /* 00666d6a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00666d6b: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x666d70u); f_0050b7a4();
    /* 00666d70: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 00666d77: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00666d79: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x666d7eu); f_005caba4();
    /* 00666d7e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666d81: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00666d84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00666d86: je 0x666dbb */ if (fZ) goto L_00666dbb;
L_00666d88:; BB(0x00666d88);
    /* 00666d88: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
    /* 00666d8f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00666d96: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00666d9c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00666d9f: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00666da2: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00666da5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666da7: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 00666dac: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00666dae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666daf: call 0x6eb9f8 */ r_esp -= 4; W32(r_esp, 0x666db4u); f_006eb9f8();
    /* 00666db4: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_00666dbb:; BB(0x00666dbb);
    /* 00666dbb: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00666dbe: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00666dc1: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00666dc4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666dc7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00666dce: mov esp, ebp */ r_esp = r_ebp;
    /* 00666dd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666dd1: ret  */ FN_RET(0x00666be8); r_esp += 4; return;
L_00666dd2:; BB(0x00666dd2);
    /* 00666dd2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00666dd9: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00666ddb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x666de0u); f_005caba4();
    /* 00666de0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00666de1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00666de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00666de6: je 0x666dbb */ if (fZ) goto L_00666dbb;
L_00666de8:; BB(0x00666de8);
    /* 00666de8: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00666def: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00666df6: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 00666dfc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00666dff: lea ebx, [eax + 0x1c] */ r_ebx = (u32)(r_eax+0x1cu);
    /* 00666e02: movsx edx, word ptr [0xa8fbb4] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa8fbb4u));
    /* 00666e09: push dword ptr [eax + 0x40] */ { u32 v = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00666e0c: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00666e0f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00666e12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666e13: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00666e14: call 0x667500 */ r_esp -= 4; W32(r_esp, 0x666e19u); f_00667500();
    /* 00666e19: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00666e20: jmp 0x666dbb */ goto L_00666dbb;
L_00666e22:; BB(0x00666e22);
    /* 00666e22: mov eax, ecx */ r_eax = r_ecx;
    /* 00666e24: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00666e27: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00666e2a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00666e2d: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00666e30: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666e32: je 0x666e3b */ if (fZ) goto L_00666e3b;
L_00666e34:; BB(0x00666e34);
    /* 00666e34: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00666e37: je 0x666e54 */ if (fZ) goto L_00666e54;
L_00666e39:; BB(0x00666e39);
    /* 00666e39: jmp 0x666e40 */ goto L_00666e40;
L_00666e3b:; BB(0x00666e3b);
    /* 00666e3b: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00666e3e: je 0x666eb0 */ if (fZ) goto L_00666eb0;
L_00666e40:; BB(0x00666e40);
    /* 00666e40: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00666e43: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00666e46: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666e49: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00666e50: mov esp, ebp */ r_esp = r_ebp;
    /* 00666e52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666e53: ret  */ FN_RET(0x00666be8); r_esp += 4; return;
L_00666e54:; BB(0x00666e54);
    /* 00666e54: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00666e56: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x666e5bu); f_004d4288();
    /* 00666e5b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00666e5e: fld dword ptr [0x939664] */ FPUSH(R_F32((u32)(0x939664u)));
    /* 00666e64: lea esi, [ebp - 0x40] */ r_esi = (u32)(r_ebp+0xffffffc0u);
    /* 00666e67: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00666e69: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00666e6c: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00666e6f: mov ebx, dword ptr [ecx + 0x24] */ r_ebx = R32((u32)(r_ecx+0x24u));
    /* 00666e72: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00666e75: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00666e78: fadd dword ptr [ebp - 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffc4u));
    /* 00666e7b: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 00666e7e: mov dword ptr [ebp - 0x38], ebx */ W32((u32)(r_ebp+0xffffffc8u), r_ebx);
    /* 00666e81: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00666e83: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00666e84: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x666e89u); f_0050b7a4();
    /* 00666e89: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 00666e8c: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00666e8e: push 0x189 */ { u32 v = 0x189u; r_esp -= 4; W32(r_esp, v); }
    /* 00666e93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666e94: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x666e99u); f_0050b7a4();
    /* 00666e99: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00666e9c: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00666e9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00666ea1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666ea2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666ea3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666ea4: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00666ea6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x666eabu); f_00814298();
    /* 00666eab: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00666eae: jmp 0x666e40 */ goto L_00666e40;
L_00666eb0:; BB(0x00666eb0);
    /* 00666eb0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00666eb2: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x666eb7u); f_004d4288();
    /* 00666eb7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00666eba: fld dword ptr [0x939664] */ FPUSH(R_F32((u32)(0x939664u)));
    /* 00666ec0: lea esi, [ebp - 0x4c] */ r_esi = (u32)(r_ebp+0xffffffb4u);
    /* 00666ec3: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00666ec5: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00666ec8: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00666ecb: mov ebx, dword ptr [ecx + 0x24] */ r_ebx = R32((u32)(r_ecx+0x24u));
    /* 00666ece: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00666ed1: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00666ed4: fadd dword ptr [ebp - 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffb8u));
    /* 00666ed7: fstp dword ptr [ebp - 0x48] */ W_F32((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 00666eda: mov dword ptr [ebp - 0x44], ebx */ W32((u32)(r_ebp+0xffffffbcu), r_ebx);
    /* 00666edd: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00666edf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00666ee0: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x666ee5u); f_0050b7a4();
    /* 00666ee5: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00666ee8: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00666eea: push 0x189 */ { u32 v = 0x189u; r_esp -= 4; W32(r_esp, v); }
    /* 00666eef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666ef0: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x666ef5u); f_0050b7a4();
    /* 00666ef5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00666ef8: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00666efb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00666efd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666efe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666eff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666f00: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00666f02: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x666f07u); f_00814298();
    /* 00666f07: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00666f0a: jmp 0x666e40 */ goto L_00666e40;
L_00666f0f:; BB(0x00666f0f);
    /* 00666f0f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00666f11: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00666f16: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 00666f19: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00666f1c: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00666f1e: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 00666f21: mov esi, ecx */ r_esi = r_ecx;
    /* 00666f23: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00666f25: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00666f28: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00666f2a: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00666f2d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00666f2f: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00666f31: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00666f33: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00666f35: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00666f37: jne 0x666dbb */ if (!fZ) goto L_00666dbb;
L_00666f3d:; BB(0x00666f3d);
    /* 00666f3d: cmp ecx, 0x1e */ {  u32 a = r_ecx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00666f40: jg 0x666dbb */ if ((!fZ&&fS==fO)) goto L_00666dbb;
L_00666f46:; BB(0x00666f46);
    /* 00666f46: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00666f48: fld dword ptr [0x939664] */ FPUSH(R_F32((u32)(0x939664u)));
    /* 00666f4e: lea esi, [ebp - 0x34] */ r_esi = (u32)(r_ebp+0xffffffccu);
    /* 00666f51: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00666f53: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00666f56: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00666f59: mov ebx, dword ptr [ecx + 0x24] */ r_ebx = R32((u32)(r_ecx+0x24u));
    /* 00666f5c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00666f5f: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00666f62: fadd dword ptr [ebp - 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffd0u));
    /* 00666f65: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 00666f68: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 00666f6b: push 0x20d */ { u32 v = 0x20du; r_esp -= 4; W32(r_esp, v); }
    /* 00666f70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00666f71: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x666f76u); f_0050b7a4();
    /* 00666f76: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00666f79: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00666f7c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00666f7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666f7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666f80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666f81: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00666f83: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x666f88u); f_00814298();
    /* 00666f88: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00666f8b: jmp 0x666dbb */ goto L_00666dbb;
}

void f_00666c6f(void)
{
    FN_ENTER(0x00666c6f);
    /* 00666c6f: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00666c72: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00666c74: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00666c76: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00666c79: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00666c7b: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00666c7d: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00666c7f: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00666c81: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00666c83: jne 0x666dbb */ if (!fZ) goto L_00666dbb;
L_00666c89:; BB(0x00666c89);
    /* 00666c89: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00666c8c: jg 0x666dbb */ if ((!fZ&&fS==fO)) goto L_00666dbb;
L_00666c92:; BB(0x00666c92);
    /* 00666c92: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00666c95: fld dword ptr [0x939664] */ FPUSH(R_F32((u32)(0x939664u)));
    /* 00666c9b: lea esi, [ebp - 0x60] */ r_esi = (u32)(r_ebp+0xffffffa0u);
    /* 00666c9e: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00666ca0: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00666ca3: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00666ca6: mov ebx, dword ptr [ecx + 0x24] */ r_ebx = R32((u32)(r_ecx+0x24u));
    /* 00666ca9: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00666cac: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00666caf: fadd dword ptr [ebp - 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffa4u));
    /* 00666cb2: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 00666cb5: mov dword ptr [ebp - 0x58], ebx */ W32((u32)(r_ebp+0xffffffa8u), r_ebx);
    /* 00666cb8: push 0x20e */ { u32 v = 0x20eu; r_esp -= 4; W32(r_esp, v); }
    /* 00666cbd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00666cbe: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x666cc3u); f_0050b7a4();
    /* 00666cc3: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00666cca: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00666ccc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x666cd1u); f_005caba4();
    /* 00666cd1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666cd4: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00666cd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00666cd9: je 0x666dbb */ if (fZ) goto L_00666dbb;
L_00666cdf:; BB(0x00666cdf);
    /* 00666cdf: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 00666ce6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00666ced: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00666cf3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00666cf6: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00666cf9: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00666cfc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666cfe: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 00666d03: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00666d05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666d06: call 0x6eb9f8 */ r_esp -= 4; W32(r_esp, 0x666d0bu); f_006eb9f8();
    /* 00666d0b: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00666d12: jmp 0x666dbb */ goto L_00666dbb;
L_00666dbb:; BB(0x00666dbb);
    /* 00666dbb: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00666dbe: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00666dc1: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00666dc4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666dc7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00666dce: mov esp, ebp */ r_esp = r_ebp;
    /* 00666dd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666dd1: ret  */ FN_RET(0x00666c6f); r_esp += 4; return;
}

void f_00666e6a(void)
{
    FN_ENTER(0x00666e6a);
    goto L_00666e6a;
L_00666e40:; BB(0x00666e40);
    /* 00666e40: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00666e43: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00666e46: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00666e49: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00666e50: mov esp, ebp */ r_esp = r_ebp;
    /* 00666e52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00666e53: ret  */ FN_RET(0x00666e6a); r_esp += 4; return;
L_00666e6a:; BB(0x00666e6a);
    /* 00666e6a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00666e6b: sbb al, 0x8b */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00666e6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00666e6e: and byte ptr [ebx + 0x45892459], cl */ { u32 ad = (u32)(r_ebx+0x45892459u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 00666e74: ror byte ptr [ecx + 0x45d8c455], 0xc4 */ { u32 ad = (u32)(r_ecx+0x45d8c455u); u32 c = (4u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 00666e7b: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 00666e7e: mov dword ptr [ebp - 0x38], ebx */ W32((u32)(r_ebp+0xffffffc8u), r_ebx);
    /* 00666e81: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00666e83: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00666e84: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x666e89u); f_0050b7a4();
    /* 00666e89: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 00666e8c: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00666e8e: push 0x189 */ { u32 v = 0x189u; r_esp -= 4; W32(r_esp, v); }
    /* 00666e93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666e94: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x666e99u); f_0050b7a4();
    /* 00666e99: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00666e9c: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00666e9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00666ea1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666ea2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666ea3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666ea4: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00666ea6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x666eabu); f_00814298();
    /* 00666eab: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00666eae: jmp 0x666e40 */ goto L_00666e40;
}

void f_00666e79(void)
{
    FN_ENTER(0x00666e79);
    /* 00666e79: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    UNSUP(0x00666e7a, "falls out of decoded code");
}

void f_00666f90(void) /* sub_666F90 */
{
    FN_ENTER(0x00666f90);
    /* 00666f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00666f91: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00666f92: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00666f94: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00666f97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666f99: je 0x666fb8 */ if (fZ) goto L_00666fb8;
L_00666f9b:; BB(0x00666f9b);
    /* 00666f9b: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 00666f9e: add edx, 0x38e */ {  u32 a = r_edx; u32 b = 0x38eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00666fa4: mov eax, 0x4000 */ r_eax = 0x4000u;
    /* 00666fa9: cmp edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00666faf: jl 0x666fb3 */ if ((fS!=fO)) goto L_00666fb3;
L_00666fb1:; BB(0x00666fb1);
    /* 00666fb1: mov edx, eax */ r_edx = r_eax;
L_00666fb3:; BB(0x00666fb3);
    /* 00666fb3: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 00666fb6: jmp 0x666fcc */ goto L_00666fcc;
L_00666fb8:; BB(0x00666fb8);
    /* 00666fb8: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 00666fbb: add edx, 0xfffffc72 */ {  u32 a = r_edx; u32 b = 0xfffffc72u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00666fc1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00666fc3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00666fc5: jg 0x666fc9 */ if ((!fZ&&fS==fO)) goto L_00666fc9;
L_00666fc7:; BB(0x00666fc7);
    /* 00666fc7: mov edx, eax */ r_edx = r_eax;
L_00666fc9:; BB(0x00666fc9);
    /* 00666fc9: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
L_00666fcc:; BB(0x00666fcc);
    /* 00666fcc: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 00666fd2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00666fd4: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x666fd9u); f_005b8610();
    /* 00666fd9: mov ebx, eax */ r_ebx = r_eax;
    /* 00666fdb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00666fdd: je 0x66708a */ if (fZ) goto L_0066708a;
L_00666fe3:; BB(0x00666fe3);
    /* 00666fe3: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 00666fe6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666fe8: je 0x666ff7 */ if (fZ) goto L_00666ff7;
L_00666fea:; BB(0x00666fea);
    /* 00666fea: mov ecx, dword ptr [0xa8fc3c] */ r_ecx = R32((u32)(0xa8fc3cu));
    /* 00666ff0: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x666ff5u); f_00829cc8();
    /* 00666ff5: jmp 0x667002 */ goto L_00667002;
L_00666ff7:; BB(0x00666ff7);
    /* 00666ff7: mov ecx, dword ptr [0xa8fc40] */ r_ecx = R32((u32)(0xa8fc40u));
    /* 00666ffd: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x667002u); f_00829cc8();
L_00667002:; BB(0x00667002);
    /* 00667002: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x667007u); f_0082d7b0();
    /* 00667007: lea ecx, [ebp + 0x1c] */ r_ecx = (u32)(r_ebp+0x1cu);
    /* 0066700a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x66700fu); f_0082d838();
    /* 0066700f: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00667012: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x667017u); f_008321d8();
    /* 00667017: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00667018: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x66701du); f_0082d7b0();
    /* 0066701d: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 00667020: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00667023: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x667028u); f_008321d8();
    /* 00667028: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00667029: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x66702eu); f_0082da80();
    /* 0066702e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x667033u); f_0082d7b0();
    /* 00667033: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 00667036: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00667038: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x66703du); f_00830c04();
    /* 0066703d: mov edx, 0x8000 */ r_edx = 0x8000u;
    /* 00667042: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00667044: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x667049u); f_0082d8bc();
    /* 00667049: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 0066704c: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0066704f: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00667052: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x667057u); f_008321d8();
    /* 00667057: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00667058: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x66705du); f_0082da80();
    /* 0066705d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x667062u); f_0082d7b0();
    /* 00667062: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 00667065: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00667067: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00667069: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x66706eu); f_00830c04();
    /* 0066706e: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00667071: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00667074: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00667077: push dword ptr [ecx + 4] */ { u32 v = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066707a: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x66707fu); f_008321d8();
    /* 0066707f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00667080: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x667085u); f_0082da80();
    /* 00667085: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x66708au); f_0082da80();
L_0066708a:; BB(0x0066708a);
    /* 0066708a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066708b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066708c: ret  */ FN_RET(0x00666f90); r_esp += 4; return;
}

