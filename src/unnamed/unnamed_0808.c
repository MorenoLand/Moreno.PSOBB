#include "protos.h"

void f_00808080(void)
{
    FN_ENTER(0x00808080);
    goto L_00808080;
L_00808029:; BB(0x00808029);
    /* 00808029: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0080802c: test ecx, 0x80000 */ {  u32 a = r_ecx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808032: jne 0x8082f7 */ if (!fZ) goto L_008082f7;
L_00808038:; BB(0x00808038);
    /* 00808038: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 0080803b: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0080803e: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 00808041: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00808044: fld dword ptr [edi + 0x1c] */ FPUSH(R_F32((u32)(r_edi+0x1cu)));
    /* 00808047: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808049: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 00808051: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00808055: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00808059: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0080805e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00808060: fsub dword ptr [eax + 0x178] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x178u));
    /* 00808066: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00808068: fsub dword ptr [eax + 0x180] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x180u));
    /* 0080806e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00808070: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 00808074: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808076: fadd dword ptr [0x97f188] */ ST(0) = ST(0) + R_F32((u32)(0x97f188u));
    /* 0080807c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080807e: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
L_00808080:; BB(0x00808080);
    /* 00808080: and al, 0x3c */ {  u32 a = (u8)r_eax; u32 b = 0x3cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00808082: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808084: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00808086: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00808088: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080808a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0080808c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0080808e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0080808f: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 00808097: jae 0x8080b0 */ if (!fC) goto L_008080b0;
L_00808099:; BB(0x00808099);
    /* 00808099: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0080809b: or ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008080a1: mov dword ptr [edi + 0x30], ecx */ W32((u32)(r_edi+0x30u), r_ecx);
    /* 008080a4: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008080a7: add dword ptr [ebp + 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008080ab: jmp 0x808489 */ goto L_00808489;
L_008080b0:; BB(0x008080b0);
    /* 008080b0: fld dword ptr [0xa11490] */ FPUSH(R_F32((u32)(0xa11490u)));
    /* 008080b6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 008080b8: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 008080ba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008080bc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008080bd: jae 0x8080d0 */ if (!fC) goto L_008080d0;
L_008080bf:; BB(0x008080bf);
    /* 008080bf: and ecx, 0xfffeffff */ {  u32 a = r_ecx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008080c5: mov dword ptr [edi + 0x30], ecx */ W32((u32)(r_edi+0x30u), r_ecx);
    /* 008080c8: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008080cb: jmp 0x808489 */ goto L_00808489;
L_008080d0:; BB(0x008080d0);
    /* 008080d0: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 008080d4: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x8080d9u); f_0082df08();
    /* 008080d9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008080db: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 008080df: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 008080e3: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x8080e8u); f_0082f9e0();
    /* 008080e8: fcom dword ptr [0x97f188] */ fx_compare(ST(0), R_F32((u32)(0x97f188u))); 
    /* 008080ee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008080f0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008080f1: jae 0x80810e */ if (!fC) goto L_0080810e;
L_008080f3:; BB(0x008080f3);
    /* 008080f3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008080f5: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 008080fb: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 008080fe: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00808103: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00808106: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00808109: jmp 0x808489 */ goto L_00808489;
L_0080810e:; BB(0x0080810e);
    /* 0080810e: fcomp dword ptr [0x97f184] */ fx_compare(ST(0), R_F32((u32)(0x97f184u))); FPOP();
    /* 00808114: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808116: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808117: jb 0x808136 */ if (fC) goto L_00808136;
L_00808119:; BB(0x00808119);
    /* 00808119: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 0080811f: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00808122: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00808127: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0080812a: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080812d: add dword ptr [ebp + 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00808131: jmp 0x808489 */ goto L_00808489;
L_00808136:; BB(0x00808136);
    /* 00808136: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0080813b: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x808140u); f_0082d990();
    /* 00808140: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00808145: mov edx, dword ptr [eax + 0x19c] */ r_edx = R32((u32)(r_eax+0x19cu));
    /* 0080814b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080814d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x808152u); f_0082d8bc();
    /* 00808152: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00808156: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808157: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0080815b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080815d: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x808162u); f_0082eab8();
    /* 00808162: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00808166: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x80816bu); f_0082df08();
    /* 0080816b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0080816d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00808172: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x808177u); f_0082eb80();
    /* 00808177: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 0080817b: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0080817f: fld dword ptr [edi + 0x1c] */ FPUSH(R_F32((u32)(r_edi+0x1cu)));
    /* 00808182: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00808185: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x80818au); f_0082f9e0();
    /* 0080818a: fcomp dword ptr [0x97f188] */ fx_compare(ST(0), R_F32((u32)(0x97f188u))); FPOP();
    /* 00808190: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808192: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808193: jb 0x808209 */ if (fC) goto L_00808209;
L_00808195:; BB(0x00808195);
    /* 00808195: mov esi, dword ptr [0xa48a54] */ r_esi = R32((u32)(0xa48a54u));
    /* 0080819b: mov eax, dword ptr [esi + 0x178] */ r_eax = R32((u32)(r_esi+0x178u));
    /* 008081a1: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 008081a5: mov eax, dword ptr [esi + 0x180] */ r_eax = R32((u32)(r_esi+0x180u));
    /* 008081ab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008081ad: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 008081b1: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 008081b5: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008081b9: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 008081bd: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 008081c1: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 008081c5: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 008081c9: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 008081cd: lea esi, [esp + 0x28] */ r_esi = (u32)(r_esp+0x28u);
    /* 008081d1: lea edx, [esp + 0x40] */ r_edx = (u32)(r_esp+0x40u);
    /* 008081d5: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 008081d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008081da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008081db: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008081dc: call 0x83a0dc */ r_esp -= 4; W32(r_esp, 0x8081e1u); f_0083a0dc();
    /* 008081e1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008081e4: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 008081e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008081e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008081ea: ja 0x808209 */ if ((!fC&&!fZ)) goto L_00808209;
L_008081ec:; BB(0x008081ec);
    /* 008081ec: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 008081f2: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 008081f5: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008081fa: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 008081fd: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00808200: add dword ptr [ebp + 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00808204: jmp 0x808489 */ goto L_00808489;
L_00808209:; BB(0x00808209);
    /* 00808209: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0080820e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x808213u); f_0082d990();
    /* 00808213: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00808218: mov edx, dword ptr [eax + 0x19c] */ r_edx = R32((u32)(r_eax+0x19cu));
    /* 0080821e: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00808220: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808222: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x808227u); f_0082d8bc();
    /* 00808227: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0080822b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080822c: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00808230: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808232: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x808237u); f_0082eab8();
    /* 00808237: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0080823b: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x808240u); f_0082df08();
    /* 00808240: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808242: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00808247: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x80824cu); f_0082eb80();
    /* 0080824c: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 00808250: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00808254: fld dword ptr [edi + 0x1c] */ FPUSH(R_F32((u32)(r_edi+0x1cu)));
    /* 00808257: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0080825a: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x80825fu); f_0082f9e0();
    /* 0080825f: fcomp dword ptr [0x97f188] */ fx_compare(ST(0), R_F32((u32)(0x97f188u))); FPOP();
    /* 00808265: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808267: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808268: jb 0x8082de */ if (fC) goto L_008082de;
L_0080826a:; BB(0x0080826a);
    /* 0080826a: mov esi, dword ptr [0xa48a54] */ r_esi = R32((u32)(0xa48a54u));
    /* 00808270: mov eax, dword ptr [esi + 0x178] */ r_eax = R32((u32)(r_esi+0x178u));
    /* 00808276: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0080827a: mov eax, dword ptr [esi + 0x180] */ r_eax = R32((u32)(r_esi+0x180u));
    /* 00808280: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00808282: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00808286: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0080828a: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0080828e: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00808292: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00808296: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 0080829a: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0080829e: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 008082a2: lea esi, [esp + 0x28] */ r_esi = (u32)(r_esp+0x28u);
    /* 008082a6: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 008082aa: lea eax, [esp + 0x7c] */ r_eax = (u32)(r_esp+0x7cu);
    /* 008082ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008082af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008082b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008082b1: call 0x83a0dc */ r_esp -= 4; W32(r_esp, 0x8082b6u); f_0083a0dc();
    /* 008082b6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008082b9: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 008082bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008082be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008082bf: ja 0x8082de */ if ((!fC&&!fZ)) goto L_008082de;
L_008082c1:; BB(0x008082c1);
    /* 008082c1: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 008082c7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 008082ca: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008082cf: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 008082d2: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008082d5: add dword ptr [ebp + 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008082d9: jmp 0x808489 */ goto L_00808489;
L_008082de:; BB(0x008082de);
    /* 008082de: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 008082e4: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 008082e7: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008082ec: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 008082ef: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008082f2: jmp 0x808489 */ goto L_00808489;
L_008082f7:; BB(0x008082f7);
    /* 008082f7: or ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008082fd: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 00808300: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00808303: mov dword ptr [edi + 0x30], ecx */ W32((u32)(r_edi+0x30u), r_ecx);
    /* 00808306: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00808308: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080830a: jle 0x8083c0 */ if ((fZ||fS!=fO)) goto L_008083c0;
L_00808310:; BB(0x00808310);
    /* 00808310: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00808314: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00808318: mov ebx, edx */ r_ebx = r_edx;
    /* 0080831a: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
L_0080831e:; BB(0x0080831e);
    /* 0080831e: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 00808320: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808322: je 0x8083a6 */ if (fZ) goto L_008083a6;
L_00808328:; BB(0x00808328);
    /* 00808328: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0080832b: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808331: je 0x808336 */ if (fZ) goto L_00808336;
L_00808333:; BB(0x00808333);
    /* 00808333: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
L_00808336:; BB(0x00808336);
    /* 00808336: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00808339: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080833b: je 0x808396 */ if (fZ) goto L_00808396;
L_0080833d:; BB(0x0080833d);
    /* 0080833d: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00808342: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808344: je 0x808396 */ if (fZ) goto L_00808396;
L_00808346:; BB(0x00808346);
    /* 00808346: lea edi, [ebp + 8] */ r_edi = (u32)(r_ebp+0x8u);
    /* 00808349: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080834a: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080834f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808350: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x808355u); f_0078ea50();
    /* 00808355: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00808358: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0080835b: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 0080835e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808360: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00808362: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808364: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808365: ja 0x80837f */ if ((!fC&&!fZ)) goto L_0080837f;
L_00808367:; BB(0x00808367);
    /* 00808367: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0080836c: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 00808371: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00808372: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00808376: call 0x808660 */ r_esp -= 4; W32(r_esp, 0x80837bu); f_00808660();
    /* 0080837b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080837d: je 0x808393 */ if (fZ) goto L_00808393;
L_0080837f:; BB(0x0080837f);
    /* 0080837f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00808383: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00808386: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080838b: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 0080838e: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00808391: jmp 0x8083a6 */ goto L_008083a6;
L_00808393:; BB(0x00808393);
    /* 00808393: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
L_00808396:; BB(0x00808396);
    /* 00808396: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0080839a: and ecx, 0xfffeffff */ {  u32 a = r_ecx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008083a0: mov dword ptr [ebx + 0xc], ecx */ W32((u32)(r_ebx+0xcu), r_ecx);
    /* 008083a3: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
L_008083a6:; BB(0x008083a6);
    /* 008083a6: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008083a9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008083ac: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008083ae: jl 0x80831e */ if ((fS!=fO)) goto L_0080831e;
L_008083b4:; BB(0x008083b4);
    /* 008083b4: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 008083b8: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 008083bc: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_008083c0:; BB(0x008083c0);
    /* 008083c0: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 008083c3: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 008083c6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008083c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008083ca: jle 0x808480 */ if ((fZ||fS!=fO)) goto L_00808480;
L_008083d0:; BB(0x008083d0);
    /* 008083d0: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 008083d4: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 008083d8: mov ebx, edx */ r_ebx = r_edx;
    /* 008083da: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
L_008083de:; BB(0x008083de);
    /* 008083de: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 008083e0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008083e2: je 0x808466 */ if (fZ) goto L_00808466;
L_008083e8:; BB(0x008083e8);
    /* 008083e8: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 008083eb: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008083f1: je 0x8083f6 */ if (fZ) goto L_008083f6;
L_008083f3:; BB(0x008083f3);
    /* 008083f3: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
L_008083f6:; BB(0x008083f6);
    /* 008083f6: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 008083f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008083fb: je 0x808456 */ if (fZ) goto L_00808456;
L_008083fd:; BB(0x008083fd);
    /* 008083fd: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00808402: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808404: je 0x808456 */ if (fZ) goto L_00808456;
L_00808406:; BB(0x00808406);
    /* 00808406: lea edi, [ebp + 8] */ r_edi = (u32)(r_ebp+0x8u);
    /* 00808409: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080840a: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080840f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808410: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x808415u); f_0078ea50();
    /* 00808415: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00808418: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0080841b: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 0080841e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808420: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00808422: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808424: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808425: ja 0x80843f */ if ((!fC&&!fZ)) goto L_0080843f;
L_00808427:; BB(0x00808427);
    /* 00808427: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0080842c: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 00808431: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00808432: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00808436: call 0x808660 */ r_esp -= 4; W32(r_esp, 0x80843bu); f_00808660();
    /* 0080843b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080843d: je 0x808453 */ if (fZ) goto L_00808453;
L_0080843f:; BB(0x0080843f);
    /* 0080843f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00808443: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00808446: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080844b: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 0080844e: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00808451: jmp 0x808466 */ goto L_00808466;
L_00808453:; BB(0x00808453);
    /* 00808453: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
L_00808456:; BB(0x00808456);
    /* 00808456: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0080845a: and ecx, 0xfffeffff */ {  u32 a = r_ecx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00808460: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 00808463: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
L_00808466:; BB(0x00808466);
    /* 00808466: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808469: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080846c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080846e: jl 0x8083de */ if ((fS!=fO)) goto L_008083de;
L_00808474:; BB(0x00808474);
    /* 00808474: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00808478: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0080847c: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00808480:; BB(0x00808480);
    /* 00808480: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808486: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00808489:; BB(0x00808489);
    /* 00808489: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 0080848d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808490: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808492: jl 0x808029 */ if ((fS!=fO)) goto L_00808029;
L_00808498:; BB(0x00808498);
    /* 00808498: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
    /* 0080849b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0080849d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080849f: jle 0x808648 */ if ((fZ||fS!=fO)) goto L_00808648;
L_008084a5:; BB(0x008084a5);
    /* 008084a5: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 008084a8: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008084ae: je 0x80863a */ if (fZ) goto L_0080863a;
L_008084b4:; BB(0x008084b4);
    /* 008084b4: mov esi, dword ptr [edi + 0x20] */ r_esi = R32((u32)(r_edi+0x20u));
    /* 008084b7: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 008084ba: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008084bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008084be: jle 0x80857c */ if ((fZ||fS!=fO)) goto L_0080857c;
L_008084c4:; BB(0x008084c4);
    /* 008084c4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008084c6: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 008084c9: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008084cf: je 0x8084d3 */ if (fZ) goto L_008084d3;
L_008084d1:; BB(0x008084d1);
    /* 008084d1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
L_008084d3:; BB(0x008084d3);
    /* 008084d3: fld dword ptr [0xa11494] */ FPUSH(R_F32((u32)(0xa11494u)));
    /* 008084d9: fadd dword ptr [0xa1148c] */ ST(0) = ST(0) + R_F32((u32)(0xa1148cu));
    /* 008084df: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 008084e2: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 008084e5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 008084e8: fadd dword ptr [edx + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x1cu));
    /* 008084eb: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 008084ee: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008084f0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 008084f3: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 008084fa: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 008084fd: fadd dword ptr [eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xcu));
    /* 00808500: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00808503: fadd dword ptr [edx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x20u));
    /* 00808506: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0080850d: fadd dword ptr [eax + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x10u));
    /* 00808510: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808512: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00808515: fadd dword ptr [eax + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x24u));
    /* 00808518: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 0080851f: lea eax, [esp + 0x94] */ r_eax = (u32)(r_esp+0x94u);
    /* 00808526: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808527: lea edx, [esp + 0x8c] */ r_edx = (u32)(r_esp+0x8cu);
    /* 0080852e: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x808533u); f_00830aa0();
    /* 00808533: fld dword ptr [esp + 0x9c] */ FPUSH(R_F32((u32)(r_esp+0x9cu)));
    /* 0080853a: fcom dword ptr [0x97f188] */ fx_compare(ST(0), R_F32((u32)(0x97f188u))); 
    /* 00808540: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808542: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808543: ja 0x808560 */ if ((!fC&&!fZ)) goto L_00808560;
L_00808545:; BB(0x00808545);
    /* 00808545: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00808548: fchs  */ ST(0) = -ST(0);
    /* 0080854a: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0080854c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0080854e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0080854f: ja 0x808560 */ if ((!fC&&!fZ)) goto L_00808560;
L_00808551:; BB(0x00808551);
    /* 00808551: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808553: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00808556: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080855b: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0080855e: jmp 0x80856d */ goto L_0080856d;
L_00808560:; BB(0x00808560);
    /* 00808560: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808562: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00808565: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0080856a: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
L_0080856d:; BB(0x0080856d);
    /* 0080856d: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00808570: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808573: cmp ebx, dword ptr [edi + 0x28] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808576: jl 0x8084c4 */ if ((fS!=fO)) goto L_008084c4;
L_0080857c:; BB(0x0080857c);
    /* 0080857c: mov esi, dword ptr [edi + 0x24] */ r_esi = R32((u32)(r_edi+0x24u));
    /* 0080857f: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 00808582: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00808584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00808586: jle 0x808653 */ if ((fZ||fS!=fO)) goto L_00808653;
L_0080858c:; BB(0x0080858c);
    /* 0080858c: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0080858e: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00808591: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808596: je 0x80859a */ if (fZ) goto L_0080859a;
L_00808598:; BB(0x00808598);
    /* 00808598: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
L_0080859a:; BB(0x0080859a);
    /* 0080859a: fld dword ptr [0xa11494] */ FPUSH(R_F32((u32)(0xa11494u)));
    /* 008085a0: fadd dword ptr [0xa1148c] */ ST(0) = ST(0) + R_F32((u32)(0xa1148cu));
    /* 008085a6: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 008085a9: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 008085ac: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 008085af: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008085b1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 008085b4: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 008085bb: lea eax, [esp + 0xa0] */ r_eax = (u32)(r_esp+0xa0u);
    /* 008085c2: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 008085c5: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 008085c8: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 008085cf: fadd dword ptr [edx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x10u));
    /* 008085d2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008085d4: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 008085db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008085dc: lea edx, [esp + 0x8c] */ r_edx = (u32)(r_esp+0x8cu);
    /* 008085e3: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x8085e8u); f_00830aa0();
    /* 008085e8: fld dword ptr [esp + 0xa8] */ FPUSH(R_F32((u32)(r_esp+0xa8u)));
    /* 008085ef: fcom dword ptr [0x97f188] */ fx_compare(ST(0), R_F32((u32)(0x97f188u))); 
    /* 008085f5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008085f7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008085f8: ja 0x808615 */ if ((!fC&&!fZ)) goto L_00808615;
L_008085fa:; BB(0x008085fa);
    /* 008085fa: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 008085fd: fchs  */ ST(0) = -ST(0);
    /* 008085ff: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00808601: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808603: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808604: ja 0x808615 */ if ((!fC&&!fZ)) goto L_00808615;
L_00808606:; BB(0x00808606);
    /* 00808606: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808608: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0080860b: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00808610: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00808613: jmp 0x808622 */ goto L_00808622;
L_00808615:; BB(0x00808615);
    /* 00808615: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808617: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0080861a: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0080861f: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
L_00808622:; BB(0x00808622);
    /* 00808622: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00808625: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808628: cmp ebx, dword ptr [edi + 0x2c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080862b: jl 0x80858c */ if ((fS!=fO)) goto L_0080858c;
L_00808631:; BB(0x00808631);
    /* 00808631: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 00808636: movsx eax, word ptr [eax + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
L_0080863a:; BB(0x0080863a);
    /* 0080863a: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080863d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00808640: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808642: jl 0x8084a5 */ if ((fS!=fO)) goto L_008084a5;
L_00808648:; BB(0x00808648);
    /* 00808648: add esp, 0xac */ {  u32 a = r_esp; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080864e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080864f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00808650: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00808651: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00808652: ret  */ FN_RET(0x00808080); r_esp += 4; return;
L_00808653:; BB(0x00808653);
    /* 00808653: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 00808658: movsx eax, word ptr [eax + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 0080865c: jmp 0x80863a */ goto L_0080863a;
}

void f_0080858c(void)
{
    FN_ENTER(0x0080858c);
    goto L_0080858c;
L_008084a5:; BB(0x008084a5);
    /* 008084a5: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 008084a8: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008084ae: je 0x80863a */ if (fZ) goto L_0080863a;
L_008084b4:; BB(0x008084b4);
    /* 008084b4: mov esi, dword ptr [edi + 0x20] */ r_esi = R32((u32)(r_edi+0x20u));
    /* 008084b7: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 008084ba: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008084bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008084be: jle 0x80857c */ if ((fZ||fS!=fO)) goto L_0080857c;
L_008084c4:; BB(0x008084c4);
    /* 008084c4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008084c6: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 008084c9: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008084cf: je 0x8084d3 */ if (fZ) goto L_008084d3;
L_008084d1:; BB(0x008084d1);
    /* 008084d1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
L_008084d3:; BB(0x008084d3);
    /* 008084d3: fld dword ptr [0xa11494] */ FPUSH(R_F32((u32)(0xa11494u)));
    /* 008084d9: fadd dword ptr [0xa1148c] */ ST(0) = ST(0) + R_F32((u32)(0xa1148cu));
    /* 008084df: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 008084e2: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 008084e5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 008084e8: fadd dword ptr [edx + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x1cu));
    /* 008084eb: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 008084ee: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008084f0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 008084f3: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 008084fa: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 008084fd: fadd dword ptr [eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xcu));
    /* 00808500: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00808503: fadd dword ptr [edx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x20u));
    /* 00808506: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0080850d: fadd dword ptr [eax + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x10u));
    /* 00808510: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808512: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00808515: fadd dword ptr [eax + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x24u));
    /* 00808518: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 0080851f: lea eax, [esp + 0x94] */ r_eax = (u32)(r_esp+0x94u);
    /* 00808526: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808527: lea edx, [esp + 0x8c] */ r_edx = (u32)(r_esp+0x8cu);
    /* 0080852e: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x808533u); f_00830aa0();
    /* 00808533: fld dword ptr [esp + 0x9c] */ FPUSH(R_F32((u32)(r_esp+0x9cu)));
    /* 0080853a: fcom dword ptr [0x97f188] */ fx_compare(ST(0), R_F32((u32)(0x97f188u))); 
    /* 00808540: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808542: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808543: ja 0x808560 */ if ((!fC&&!fZ)) goto L_00808560;
L_00808545:; BB(0x00808545);
    /* 00808545: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00808548: fchs  */ ST(0) = -ST(0);
    /* 0080854a: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0080854c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0080854e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0080854f: ja 0x808560 */ if ((!fC&&!fZ)) goto L_00808560;
L_00808551:; BB(0x00808551);
    /* 00808551: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808553: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00808556: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080855b: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0080855e: jmp 0x80856d */ goto L_0080856d;
L_00808560:; BB(0x00808560);
    /* 00808560: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808562: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00808565: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0080856a: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
L_0080856d:; BB(0x0080856d);
    /* 0080856d: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00808570: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808573: cmp ebx, dword ptr [edi + 0x28] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808576: jl 0x8084c4 */ if ((fS!=fO)) goto L_008084c4;
L_0080857c:; BB(0x0080857c);
    /* 0080857c: mov esi, dword ptr [edi + 0x24] */ r_esi = R32((u32)(r_edi+0x24u));
    /* 0080857f: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 00808582: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00808584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00808586: jle 0x808653 */ if ((fZ||fS!=fO)) goto L_00808653;
L_0080858c:; BB(0x0080858c);
    /* 0080858c: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0080858e: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00808591: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808596: je 0x80859a */ if (fZ) goto L_0080859a;
L_00808598:; BB(0x00808598);
    /* 00808598: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
L_0080859a:; BB(0x0080859a);
    /* 0080859a: fld dword ptr [0xa11494] */ FPUSH(R_F32((u32)(0xa11494u)));
    /* 008085a0: fadd dword ptr [0xa1148c] */ ST(0) = ST(0) + R_F32((u32)(0xa1148cu));
    /* 008085a6: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 008085a9: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 008085ac: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 008085af: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008085b1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 008085b4: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 008085bb: lea eax, [esp + 0xa0] */ r_eax = (u32)(r_esp+0xa0u);
    /* 008085c2: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 008085c5: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 008085c8: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 008085cf: fadd dword ptr [edx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x10u));
    /* 008085d2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008085d4: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 008085db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008085dc: lea edx, [esp + 0x8c] */ r_edx = (u32)(r_esp+0x8cu);
    /* 008085e3: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x8085e8u); f_00830aa0();
    /* 008085e8: fld dword ptr [esp + 0xa8] */ FPUSH(R_F32((u32)(r_esp+0xa8u)));
    /* 008085ef: fcom dword ptr [0x97f188] */ fx_compare(ST(0), R_F32((u32)(0x97f188u))); 
    /* 008085f5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008085f7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008085f8: ja 0x808615 */ if ((!fC&&!fZ)) goto L_00808615;
L_008085fa:; BB(0x008085fa);
    /* 008085fa: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 008085fd: fchs  */ ST(0) = -ST(0);
    /* 008085ff: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00808601: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808603: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808604: ja 0x808615 */ if ((!fC&&!fZ)) goto L_00808615;
L_00808606:; BB(0x00808606);
    /* 00808606: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808608: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0080860b: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00808610: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00808613: jmp 0x808622 */ goto L_00808622;
L_00808615:; BB(0x00808615);
    /* 00808615: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808617: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0080861a: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0080861f: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
L_00808622:; BB(0x00808622);
    /* 00808622: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00808625: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808628: cmp ebx, dword ptr [edi + 0x2c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080862b: jl 0x80858c */ if ((fS!=fO)) goto L_0080858c;
L_00808631:; BB(0x00808631);
    /* 00808631: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 00808636: movsx eax, word ptr [eax + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
L_0080863a:; BB(0x0080863a);
    /* 0080863a: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080863d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00808640: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808642: jl 0x8084a5 */ if ((fS!=fO)) goto L_008084a5;
L_00808648:; BB(0x00808648);
    /* 00808648: add esp, 0xac */ {  u32 a = r_esp; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080864e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080864f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00808650: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00808651: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00808652: ret  */ FN_RET(0x0080858c); r_esp += 4; return;
L_00808653:; BB(0x00808653);
    /* 00808653: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 00808658: movsx eax, word ptr [eax + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 0080865c: jmp 0x80863a */ goto L_0080863a;
}

void f_00808660(void) /* sub_808660 */
{
    FN_ENTER(0x00808660);
    /* 00808660: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00808663: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00808666: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808667: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808669: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0080866d: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x808672u); f_00830aa0();
    /* 00808672: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00808676: fcom dword ptr [0x97f178] */ fx_compare(ST(0), R_F32((u32)(0x97f178u))); 
    /* 0080867c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0080867e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0080867f: ja 0x80868e */ if ((!fC&&!fZ)) goto L_0080868e;
L_00808681:; BB(0x00808681);
    /* 00808681: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00808685: fchs  */ ST(0) = -ST(0);
    /* 00808687: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00808689: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0080868b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0080868c: jbe 0x808698 */ if ((fC||fZ)) goto L_00808698;
L_0080868e:; BB(0x0080868e);
    /* 0080868e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808690: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00808692: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00808695: ret 0xc */ FN_RET(0x00808660); r_esp += 16; return;
L_00808698:; BB(0x00808698);
    /* 00808698: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0080869a: mov eax, 1 */ r_eax = 0x1u;
    /* 0080869f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008086a2: ret 0xc */ FN_RET(0x00808660); r_esp += 16; return;
}

void f_008086a8(void) /* sub_8086A8 */
{
    FN_ENTER(0x008086a8);
    /* 008086a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008086a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008086aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008086ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008086ac: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008086b2: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 008086b6: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 008086bb: mov edi, dword ptr [0xa48a54] */ r_edi = R32((u32)(0xa48a54u));
    /* 008086c1: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 008086c7: add edi, 0x178 */ {  u32 a = r_edi; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008086cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008086cf: je 0x809029 */ if (fZ) goto L_00809029;
L_008086d5:; BB(0x008086d5);
    /* 008086d5: fld dword ptr [0x97f174] */ FPUSH(R_F32((u32)(0x97f174u)));
    /* 008086db: mov esi, dword ptr [edx + 0x10] */ r_esi = R32((u32)(r_edx+0x10u));
    /* 008086de: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 008086e2: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 008086e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008086e6: jle 0x809090 */ if ((fZ||fS!=fO)) goto L_00809090;
L_008086ec:; BB(0x008086ec);
    /* 008086ec: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
L_008086f0:; BB(0x008086f0);
    /* 008086f0: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008086f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008086f4: jl 0x80873e */ if ((fS!=fO)) goto L_0080873e;
L_008086f6:; BB(0x008086f6);
    /* 008086f6: lea eax, [esi + 4] */ r_eax = (u32)(r_esi+0x4u);
    /* 008086f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008086fa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008086fb: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x808700u); f_0078ea2c();
    /* 00808700: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00808703: fld dword ptr [esi + 0x1c] */ FPUSH(R_F32((u32)(r_esi+0x1cu)));
    /* 00808706: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808708: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0080870a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0080870c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0080870d: jae 0x80871d */ if (!fC) goto L_0080871d;
L_0080870f:; BB(0x0080870f);
    /* 0080870f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808711: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808717: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 0080871b: jmp 0x80873e */ goto L_0080873e;
L_0080871d:; BB(0x0080871d);
    /* 0080871d: fcom dword ptr [esp + 0x18] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x18u))); 
    /* 00808721: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808723: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808724: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 0080872a: jae 0x808738 */ if (!fC) goto L_00808738;
L_0080872c:; BB(0x0080872c);
    /* 0080872c: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 0080872e: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00808732: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00808736: jmp 0x80873e */ goto L_0080873e;
L_00808738:; BB(0x00808738);
    /* 00808738: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0080873a: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
L_0080873e:; BB(0x0080873e);
    /* 0080873e: add esi, 0x34 */ {  u32 a = r_esi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00808741: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00808744: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808746: jl 0x8086f0 */ if ((fS!=fO)) goto L_008086f0;
L_00808748:; BB(0x00808748);
    /* 00808748: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080874a: jl 0x809015 */ if ((fS!=fO)) goto L_00809015;
L_00808750:; BB(0x00808750);
    /* 00808750: mov edi, dword ptr [0xaafc4c] */ r_edi = R32((u32)(0xaafc4cu));
    /* 00808756: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 00808759: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0080875c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080875e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00808760: jle 0x8087ae */ if ((fZ||fS!=fO)) goto L_008087ae;
L_00808762:; BB(0x00808762);
    /* 00808762: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808765: jl 0x8087a0 */ if ((fS!=fO)) goto L_008087a0;
L_00808767:; BB(0x00808767);
    /* 00808767: cmp ebx, dword ptr [ecx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808769: je 0x8087ae */ if (fZ) goto L_008087ae;
L_0080876b:; BB(0x0080876b);
    /* 0080876b: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080876e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808771: cmp ebx, dword ptr [ecx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808773: je 0x8087ae */ if (fZ) goto L_008087ae;
L_00808775:; BB(0x00808775);
    /* 00808775: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00808778: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080877b: cmp ebx, dword ptr [ecx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080877d: je 0x8087ae */ if (fZ) goto L_008087ae;
L_0080877f:; BB(0x0080877f);
    /* 0080877f: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00808782: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808785: cmp ebx, dword ptr [ecx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808787: je 0x8087ae */ if (fZ) goto L_008087ae;
L_00808789:; BB(0x00808789);
    /* 00808789: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080878c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080878f: cmp ebx, dword ptr [ecx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808791: je 0x8087ae */ if (fZ) goto L_008087ae;
L_00808793:; BB(0x00808793);
    /* 00808793: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00808796: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808799: lea ebp, [esi - 6] */ r_ebp = (u32)(r_esi+0xfffffffau);
    /* 0080879c: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080879e: jle 0x808767 */ if ((fZ||fS!=fO)) goto L_00808767;
L_008087a0:; BB(0x008087a0);
    /* 008087a0: cmp ebx, dword ptr [ecx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008087a2: je 0x8087ae */ if (fZ) goto L_008087ae;
L_008087a4:; BB(0x008087a4);
    /* 008087a4: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008087a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008087aa: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008087ac: jl 0x8087a0 */ if ((fS!=fO)) goto L_008087a0;
L_008087ae:; BB(0x008087ae);
    /* 008087ae: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008087b0: jl 0x8087c6 */ if ((fS!=fO)) goto L_008087c6;
L_008087b2:; BB(0x008087b2);
    /* 008087b2: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008087b6: call 0x809098 */ r_esp -= 4; W32(r_esp, 0x8087bbu); f_00809098();
    /* 008087bb: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008087c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008087c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008087c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008087c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008087c5: ret  */ FN_RET(0x008086a8); r_esp += 4; return;
L_008087c6:; BB(0x008087c6);
    /* 008087c6: movsx ebp, word ptr [edx + 8] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 008087ca: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 008087ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008087d0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008087d2: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 008087d6: jle 0x8088f3 */ if ((fZ||fS!=fO)) goto L_008088f3;
L_008087dc:; BB(0x008087dc);
    /* 008087dc: mov eax, ebp */ r_eax = r_ebp;
    /* 008087de: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008087e1: jl 0x809009 */ if ((fS!=fO)) goto L_00809009;
L_008087e7:; BB(0x008087e7);
    /* 008087e7: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 008087ea: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 008087ee: mov ebp, eax */ r_ebp = r_eax;
    /* 008087f0: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 008087f4: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 008087f8: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 008087fc: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 008087ff: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
L_00808803:; BB(0x00808803);
    /* 00808803: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00808806: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808808: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0080880a: lea eax, [edx + eax*4] */ r_eax = (u32)(r_edx+r_eax*4);
    /* 0080880d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080880f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808811: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808813: cmp ebx, dword ptr [eax] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808815: je 0x808ff9 */ if (fZ) goto L_00808ff9;
L_0080881b:; BB(0x0080881b);
    /* 0080881b: lea esi, [edx + 1] */ r_esi = (u32)(r_edx+0x1u);
    /* 0080881e: lea eax, [edx + edx + 2] */ r_eax = (u32)(r_edx+r_edx+0x2u);
    /* 00808822: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808824: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00808826: lea eax, [edx + eax*4 + 1] */ r_eax = (u32)(r_edx+r_eax*4+0x1u);
    /* 0080882a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080882c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080882e: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808830: cmp ebx, dword ptr [eax] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808832: je 0x808fe9 */ if (fZ) goto L_00808fe9;
L_00808838:; BB(0x00808838);
    /* 00808838: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 0080883b: lea edx, [esi + esi + 2] */ r_edx = (u32)(r_esi+r_esi+0x2u);
    /* 0080883f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00808841: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00808843: lea eax, [esi + edx*4 + 1] */ r_eax = (u32)(r_esi+r_edx*4+0x1u);
    /* 00808847: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808849: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080884b: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080884d: cmp ebx, dword ptr [eax] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080884f: je 0x809080 */ if (fZ) goto L_00809080;
L_00808855:; BB(0x00808855);
    /* 00808855: lea eax, [esi + 2] */ r_eax = (u32)(r_esi+0x2u);
    /* 00808858: lea edx, [esi + esi + 4] */ r_edx = (u32)(r_esi+r_esi+0x4u);
    /* 0080885c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080885e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00808860: lea eax, [esi + edx*4 + 2] */ r_eax = (u32)(r_esi+r_edx*4+0x2u);
    /* 00808864: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808866: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808868: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080886a: cmp ebx, dword ptr [eax] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080886c: je 0x809070 */ if (fZ) goto L_00809070;
L_00808872:; BB(0x00808872);
    /* 00808872: lea eax, [esi + 3] */ r_eax = (u32)(r_esi+0x3u);
    /* 00808875: lea edx, [esi + esi + 6] */ r_edx = (u32)(r_esi+r_esi+0x6u);
    /* 00808879: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080887b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0080887d: lea eax, [esi + edx*4 + 3] */ r_eax = (u32)(r_esi+r_edx*4+0x3u);
    /* 00808881: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808883: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808885: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808887: cmp ebx, dword ptr [eax] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808889: je 0x809060 */ if (fZ) goto L_00809060;
L_0080888f:; BB(0x0080888f);
    /* 0080888f: lea edx, [esi + 4] */ r_edx = (u32)(r_esi+0x4u);
    /* 00808892: lea eax, [edi - 6] */ r_eax = (u32)(r_edi+0xfffffffau);
    /* 00808895: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808897: jle 0x808803 */ if ((fZ||fS!=fO)) goto L_00808803;
L_0080889d:; BB(0x0080889d);
    /* 0080889d: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008088a1: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 008088a5: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 008088a9: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
L_008088ac:; BB(0x008088ac);
    /* 008088ac: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 008088b0: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 008088b4: mov esi, eax */ r_esi = r_eax;
    /* 008088b6: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 008088b9: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008088bb: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 008088bf: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 008088c3: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 008088c6: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008088ca: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008088cc: lea ebp, [eax + ebp*4] */ r_ebp = (u32)(r_eax+r_ebp*4);
    /* 008088cf: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008088d1: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_008088d3:; BB(0x008088d3);
    /* 008088d3: lea eax, [edx + ebp] */ r_eax = (u32)(r_edx+r_ebp);
    /* 008088d6: cmp ebx, dword ptr [eax] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008088d8: je 0x808fd9 */ if (fZ) goto L_00808fd9;
L_008088de:; BB(0x008088de);
    /* 008088de: add ebp, 0x34 */ {  u32 a = r_ebp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008088e1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008088e4: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008088e6: jl 0x8088d3 */ if ((fS!=fO)) goto L_008088d3;
L_008088e8:; BB(0x008088e8);
    /* 008088e8: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008088ec: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 008088f0: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
L_008088f3:; BB(0x008088f3);
    /* 008088f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008088f5:; BB(0x008088f5);
    /* 008088f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008088f7: je 0x808908 */ if (fZ) goto L_00808908;
L_008088f9:; BB(0x008088f9);
    /* 008088f9: mov ebx, dword ptr [eax + 0x30] */ r_ebx = R32((u32)(r_eax+0x30u));
    /* 008088fc: or ebx, 0x10000 */ {  u32 a = r_ebx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00808902: mov dword ptr [eax + 0x30], ebx */ W32((u32)(r_eax+0x30u), r_ebx);
    /* 00808905: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
L_00808908:; BB(0x00808908);
    /* 00808908: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080890a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080890c: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0080890f: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808911: lea ebp, [edi + eax + 8] */ r_ebp = (u32)(r_edi+r_eax+0x8u);
    /* 00808915: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00808918: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080891a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080891c: jle 0x808b7f */ if ((fZ||fS!=fO)) goto L_00808b7f;
L_00808922:; BB(0x00808922);
    /* 00808922: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00808926: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0080892a: jmp 0x808932 */ goto L_00808932;
L_0080892c:; BB(0x0080892c);
    /* 0080892c: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
L_00808932:; BB(0x00808932);
    /* 00808932: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00808936: mov ebp, dword ptr [ecx + 8] */ r_ebp = R32((u32)(r_ecx+0x8u));
    /* 00808939: movsx ecx, word ptr [edx + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 0080893d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080893f: add ebp, dword ptr [esp + 0x10] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00808943: movsx esi, word ptr [ebp + ebx*2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2));
    /* 00808948: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0080894a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080894c: jle 0x808a37 */ if ((fZ||fS!=fO)) goto L_00808a37;
L_00808952:; BB(0x00808952);
    /* 00808952: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808955: jl 0x808fd1 */ if ((fS!=fO)) goto L_00808fd1;
L_0080895b:; BB(0x0080895b);
    /* 0080895b: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0080895e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00808962: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00808966: lea edi, [ecx - 6] */ r_edi = (u32)(r_ecx+0xfffffffau);
L_00808969:; BB(0x00808969);
    /* 00808969: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0080896d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080896f: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00808971: lea ebx, [ebp + eax*4] */ r_ebx = (u32)(r_ebp+r_eax*4);
    /* 00808975: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808977: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808979: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080897b: cmp esi, dword ptr [ebx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080897d: je 0x808fc2 */ if (fZ) goto L_00808fc2;
L_00808983:; BB(0x00808983);
    /* 00808983: lea eax, [ebp + 1] */ r_eax = (u32)(r_ebp+0x1u);
    /* 00808986: lea ebx, [ebp + ebp + 2] */ r_ebx = (u32)(r_ebp+r_ebp+0x2u);
    /* 0080898a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080898c: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0080898e: lea ebx, [ebp + ebx*4 + 1] */ r_ebx = (u32)(r_ebp+r_ebx*4+0x1u);
    /* 00808992: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808994: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808996: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808998: cmp esi, dword ptr [ebx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080899a: je 0x808fb3 */ if (fZ) goto L_00808fb3;
L_008089a0:; BB(0x008089a0);
    /* 008089a0: lea ebx, [eax + 1] */ r_ebx = (u32)(r_eax+0x1u);
    /* 008089a3: lea ebp, [eax + eax + 2] */ r_ebp = (u32)(r_eax+r_eax+0x2u);
    /* 008089a7: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008089a9: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008089ab: lea ebx, [eax + ebp*4 + 1] */ r_ebx = (u32)(r_eax+r_ebp*4+0x1u);
    /* 008089af: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008089b1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008089b3: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008089b5: cmp esi, dword ptr [ebx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008089b7: je 0x809051 */ if (fZ) goto L_00809051;
L_008089bd:; BB(0x008089bd);
    /* 008089bd: lea ebx, [eax + 2] */ r_ebx = (u32)(r_eax+0x2u);
    /* 008089c0: lea ebp, [eax + eax + 4] */ r_ebp = (u32)(r_eax+r_eax+0x4u);
    /* 008089c4: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008089c6: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008089c8: lea ebx, [eax + ebp*4 + 2] */ r_ebx = (u32)(r_eax+r_ebp*4+0x2u);
    /* 008089cc: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008089ce: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008089d0: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008089d2: cmp esi, dword ptr [ebx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008089d4: je 0x809042 */ if (fZ) goto L_00809042;
L_008089da:; BB(0x008089da);
    /* 008089da: lea ebx, [eax + 3] */ r_ebx = (u32)(r_eax+0x3u);
    /* 008089dd: lea ebp, [eax + eax + 6] */ r_ebp = (u32)(r_eax+r_eax+0x6u);
    /* 008089e1: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008089e3: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008089e5: lea ebx, [eax + ebp*4 + 3] */ r_ebx = (u32)(r_eax+r_ebp*4+0x3u);
    /* 008089e9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008089eb: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008089ed: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008089ef: cmp esi, dword ptr [ebx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008089f1: je 0x809033 */ if (fZ) goto L_00809033;
L_008089f7:; BB(0x008089f7);
    /* 008089f7: lea ebp, [eax + 4] */ r_ebp = (u32)(r_eax+0x4u);
    /* 008089fa: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008089fc: jle 0x808969 */ if ((fZ||fS!=fO)) goto L_00808969;
L_00808a02:; BB(0x00808a02);
    /* 00808a02: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00808a06: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_00808a0a:; BB(0x00808a0a);
    /* 00808a0a: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00808a0e: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 00808a12: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00808a14: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00808a16: lea edi, [ebp + edi*4] */ r_edi = (u32)(r_ebp+r_edi*4);
    /* 00808a1a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00808a1c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00808a1e:; BB(0x00808a1e);
    /* 00808a1e: lea ebx, [edx + edi] */ r_ebx = (u32)(r_edx+r_edi);
    /* 00808a21: cmp esi, dword ptr [ebx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808a23: je 0x808fa8 */ if (fZ) goto L_00808fa8;
L_00808a29:; BB(0x00808a29);
    /* 00808a29: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00808a2c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00808a2f: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808a31: jl 0x808a1e */ if ((fS!=fO)) goto L_00808a1e;
L_00808a33:; BB(0x00808a33);
    /* 00808a33: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_00808a37:; BB(0x00808a37);
    /* 00808a37: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00808a39:; BB(0x00808a39);
    /* 00808a39: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808a3b: je 0x808b74 */ if (fZ) goto L_00808b74;
L_00808a41:; BB(0x00808a41);
    /* 00808a41: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00808a46: lea edx, [ebp + 4] */ r_edx = (u32)(r_ebp+0x4u);
    /* 00808a49: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808a4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808a4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00808a50: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x808a55u); f_0078ea50();
    /* 00808a55: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00808a59: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00808a5c: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00808a60: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00808a63: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808a65: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00808a67: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808a69: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808a6a: jbe 0x808a83 */ if ((fC||fZ)) goto L_00808a83;
L_00808a6c:; BB(0x00808a6c);
    /* 00808a6c: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00808a70: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00808a73: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00808a78: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00808a7b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00808a7e: jmp 0x808b74 */ goto L_00808b74;
L_00808a83:; BB(0x00808a83);
    /* 00808a83: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 00808a89: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00808a8d: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00808a90: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00808a93: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00808a96: add edx, 0x178 */ {  u32 a = r_edx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00808a9c: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00808aa0: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00808aa4: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00808aa8: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x808aadu); f_0082f9c4();
    /* 00808aad: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00808ab1: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x808ab6u); f_0082df08();
    /* 00808ab6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808ab8: mov dword ptr [esp + 0x30], 0 */ W32((u32)(r_esp+0x30u), 0x0u);
    /* 00808ac0: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00808ac5: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 00808acd: mov dword ptr [esp + 0x38], 0xbf800000 */ W32((u32)(r_esp+0x38u), 0xbf800000u);
    /* 00808ad5: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x808adau); f_0082d990();
    /* 00808ada: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00808adf: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 00808ae5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808ae7: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x808aecu); f_0082d8bc();
    /* 00808aec: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 00808af0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808af1: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 00808af5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808af7: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x808afcu); f_0082eab8();
    /* 00808afc: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x808b01u); f_0082da80();
    /* 00808b01: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 00808b05: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x808b0au); f_0082df08();
    /* 00808b0a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808b0c: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00808b10: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 00808b14: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x808b19u); f_0082f9e0();
    /* 00808b19: fcomp dword ptr [0x97f170] */ fx_compare(ST(0), R_F32((u32)(0x97f170u))); FPOP();
    /* 00808b1f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808b21: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808b22: jae 0x808b38 */ if (!fC) goto L_00808b38;
L_00808b24:; BB(0x00808b24);
    /* 00808b24: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00808b28: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00808b2b: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00808b30: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00808b33: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00808b36: jmp 0x808b74 */ goto L_00808b74;
L_00808b38:; BB(0x00808b38);
    /* 00808b38: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808b3e: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00808b42: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00808b45: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808b47: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00808b49: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808b4b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808b4c: jbe 0x808b62 */ if ((fC||fZ)) goto L_00808b62;
L_00808b4e:; BB(0x00808b4e);
    /* 00808b4e: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00808b52: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00808b55: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00808b5a: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00808b5d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00808b60: jmp 0x808b74 */ goto L_00808b74;
L_00808b62:; BB(0x00808b62);
    /* 00808b62: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00808b66: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00808b69: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00808b6e: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00808b71: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
L_00808b74:; BB(0x00808b74);
    /* 00808b74: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808b77: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808b79: jl 0x80892c */ if ((fS!=fO)) goto L_0080892c;
L_00808b7f:; BB(0x00808b7f);
    /* 00808b7f: mov dword ptr [esp + 0x48], 0 */ W32((u32)(r_esp+0x48u), 0x0u);
    /* 00808b87: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00808b8c: mov dword ptr [esp + 0x4c], 0 */ W32((u32)(r_esp+0x4cu), 0x0u);
    /* 00808b94: mov dword ptr [esp + 0x50], 0xbf800000 */ W32((u32)(r_esp+0x50u), 0xbf800000u);
    /* 00808b9c: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x808ba1u); f_0082d990();
    /* 00808ba1: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00808ba6: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 00808bac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808bae: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x808bb3u); f_0082d8bc();
    /* 00808bb3: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 00808bb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808bb8: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 00808bbc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808bbe: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x808bc3u); f_0082eab8();
    /* 00808bc3: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00808bc7: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x808bccu); f_0082df08();
    /* 00808bcc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808bce: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x808bd3u); f_0082da80();
    /* 00808bd3: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808bd9: mov ebp, dword ptr [edx + 0x10] */ r_ebp = R32((u32)(r_edx+0x10u));
    /* 00808bdc: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00808be0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00808be2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00808be4: jle 0x808d92 */ if ((fZ||fS!=fO)) goto L_00808d92;
L_00808bea:; BB(0x00808bea);
    /* 00808bea: mov edi, dword ptr [ebp + 0x30] */ r_edi = R32((u32)(r_ebp+0x30u));
    /* 00808bed: test edi, 0x80000 */ {  u32 a = r_edi; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808bf3: jne 0x808c05 */ if (!fZ) goto L_00808c05;
L_00808bf5:; BB(0x00808bf5);
    /* 00808bf5: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 00808bf8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00808bfa: jl 0x808d9d */ if ((fS!=fO)) goto L_00808d9d;
L_00808c00:; BB(0x00808c00);
    /* 00808c00: jmp 0x808d84 */ goto L_00808d84;
L_00808c05:; BB(0x00808c05);
    /* 00808c05: or edi, 0x10000 */ {  u32 a = r_edi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00808c0b: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00808c0e: mov dword ptr [ebp + 0x30], edi */ W32((u32)(r_ebp+0x30u), r_edi);
    /* 00808c11: mov edi, dword ptr [ebp + 0x20] */ r_edi = R32((u32)(r_ebp+0x20u));
    /* 00808c14: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00808c16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00808c18: jle 0x808cc4 */ if ((fZ||fS!=fO)) goto L_00808cc4;
L_00808c1e:; BB(0x00808c1e);
    /* 00808c1e: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 00808c22: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
L_00808c26:; BB(0x00808c26);
    /* 00808c26: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 00808c28: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808c2a: je 0x808cae */ if (fZ) goto L_00808cae;
L_00808c30:; BB(0x00808c30);
    /* 00808c30: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 00808c33: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808c39: je 0x808c3e */ if (fZ) goto L_00808c3e;
L_00808c3b:; BB(0x00808c3b);
    /* 00808c3b: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
L_00808c3e:; BB(0x00808c3e);
    /* 00808c3e: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00808c41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808c43: je 0x808c9e */ if (fZ) goto L_00808c9e;
L_00808c45:; BB(0x00808c45);
    /* 00808c45: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00808c4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808c4c: je 0x808c9e */ if (fZ) goto L_00808c9e;
L_00808c4e:; BB(0x00808c4e);
    /* 00808c4e: lea ebx, [ebp + 8] */ r_ebx = (u32)(r_ebp+0x8u);
    /* 00808c51: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00808c52: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808c57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808c58: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x808c5du); f_0078ea50();
    /* 00808c5d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00808c60: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00808c63: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 00808c66: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808c68: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00808c6a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808c6c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808c6d: ja 0x808c87 */ if ((!fC&&!fZ)) goto L_00808c87;
L_00808c6f:; BB(0x00808c6f);
    /* 00808c6f: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00808c74: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 00808c79: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00808c7a: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00808c7e: call 0x808660 */ r_esp -= 4; W32(r_esp, 0x808c83u); f_00808660();
    /* 00808c83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808c85: je 0x808c9b */ if (fZ) goto L_00808c9b;
L_00808c87:; BB(0x00808c87);
    /* 00808c87: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00808c8b: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00808c8e: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00808c93: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 00808c96: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00808c99: jmp 0x808cae */ goto L_00808cae;
L_00808c9b:; BB(0x00808c9b);
    /* 00808c9b: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
L_00808c9e:; BB(0x00808c9e);
    /* 00808c9e: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00808ca2: and edx, 0xfffeffff */ {  u32 a = r_edx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00808ca8: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 00808cab: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
L_00808cae:; BB(0x00808cae);
    /* 00808cae: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00808cb1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00808cb4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808cb6: jl 0x808c26 */ if ((fS!=fO)) goto L_00808c26;
L_00808cbc:; BB(0x00808cbc);
    /* 00808cbc: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00808cc0: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
L_00808cc4:; BB(0x00808cc4);
    /* 00808cc4: mov edi, dword ptr [ebp + 0x24] */ r_edi = R32((u32)(r_ebp+0x24u));
    /* 00808cc7: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00808cca: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00808ccc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00808cce: jle 0x808f99 */ if ((fZ||fS!=fO)) goto L_00808f99;
L_00808cd4:; BB(0x00808cd4);
    /* 00808cd4: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 00808cd8: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
L_00808cdc:; BB(0x00808cdc);
    /* 00808cdc: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 00808cde: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808ce0: je 0x808d64 */ if (fZ) goto L_00808d64;
L_00808ce6:; BB(0x00808ce6);
    /* 00808ce6: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 00808ce9: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808cef: je 0x808cf4 */ if (fZ) goto L_00808cf4;
L_00808cf1:; BB(0x00808cf1);
    /* 00808cf1: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
L_00808cf4:; BB(0x00808cf4);
    /* 00808cf4: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00808cf7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808cf9: je 0x808d54 */ if (fZ) goto L_00808d54;
L_00808cfb:; BB(0x00808cfb);
    /* 00808cfb: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00808d00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808d02: je 0x808d54 */ if (fZ) goto L_00808d54;
L_00808d04:; BB(0x00808d04);
    /* 00808d04: lea ebx, [ebp + 8] */ r_ebx = (u32)(r_ebp+0x8u);
    /* 00808d07: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00808d08: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808d0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808d0e: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x808d13u); f_0078ea50();
    /* 00808d13: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00808d16: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00808d19: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 00808d1c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808d1e: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00808d20: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808d22: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808d23: ja 0x808d3d */ if ((!fC&&!fZ)) goto L_00808d3d;
L_00808d25:; BB(0x00808d25);
    /* 00808d25: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00808d2a: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 00808d2f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00808d30: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00808d34: call 0x808660 */ r_esp -= 4; W32(r_esp, 0x808d39u); f_00808660();
    /* 00808d39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808d3b: je 0x808d51 */ if (fZ) goto L_00808d51;
L_00808d3d:; BB(0x00808d3d);
    /* 00808d3d: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00808d41: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00808d44: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00808d49: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 00808d4c: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00808d4f: jmp 0x808d64 */ goto L_00808d64;
L_00808d51:; BB(0x00808d51);
    /* 00808d51: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
L_00808d54:; BB(0x00808d54);
    /* 00808d54: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00808d58: and edx, 0xfffeffff */ {  u32 a = r_edx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00808d5e: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 00808d61: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
L_00808d64:; BB(0x00808d64);
    /* 00808d64: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00808d67: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00808d6a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808d6c: jl 0x808cdc */ if ((fS!=fO)) goto L_00808cdc;
L_00808d72:; BB(0x00808d72);
    /* 00808d72: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00808d76: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00808d7a: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808d80: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
L_00808d84:; BB(0x00808d84);
    /* 00808d84: add ebp, 0x34 */ {  u32 a = r_ebp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00808d87: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808d8a: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808d8c: jl 0x808bea */ if ((fS!=fO)) goto L_00808bea;
L_00808d92:; BB(0x00808d92);
    /* 00808d92: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00808d98: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00808d99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00808d9a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00808d9b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00808d9c: ret  */ FN_RET(0x008086a8); r_esp += 4; return;
L_00808d9d:; BB(0x00808d9d);
    /* 00808d9d: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 00808da3: mov esi, dword ptr [ecx + 0x19c] */ r_esi = R32((u32)(r_ecx+0x19cu));
    /* 00808da9: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 00808dac: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00808daf: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00808db2: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00808db5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808db7: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 00808dbf: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00808dc3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00808dc6: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00808dca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00808dcc: fsub dword ptr [ecx + 0x178] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x178u));
    /* 00808dd2: fst dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0));
    /* 00808dd6: mov dword ptr [esp + 0x70], 0 */ W32((u32)(r_esp+0x70u), 0x0u);
    /* 00808dde: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808de0: fadd dword ptr [0x97f170] */ ST(0) = ST(0) + R_F32((u32)(0x97f170u));
    /* 00808de6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00808de8: fsub dword ptr [ecx + 0x180] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x180u));
    /* 00808dee: fst dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0));
    /* 00808df2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808df4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00808df6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00808df8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00808dfa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808dfc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808dfe: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00808e01: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808e03: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808e04: jb 0x808f83 */ if (fC) goto L_00808f83;
L_00808e0a:; BB(0x00808e0a);
    /* 00808e0a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00808e0c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808e0e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808e0f: jae 0x808e23 */ if (!fC) goto L_00808e23;
L_00808e11:; BB(0x00808e11);
    /* 00808e11: and edi, 0xfffeffff */ {  u32 a = r_edi; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00808e17: mov dword ptr [ebp + 0x30], edi */ W32((u32)(r_ebp+0x30u), r_edi);
    /* 00808e1a: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00808e1e: jmp 0x808d84 */ goto L_00808d84;
L_00808e23:; BB(0x00808e23);
    /* 00808e23: lea ecx, [esp + 0x6c] */ r_ecx = (u32)(r_esp+0x6cu);
    /* 00808e27: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x808e2cu); f_0082df08();
    /* 00808e2c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808e2e: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00808e32: lea edx, [esp + 0x6c] */ r_edx = (u32)(r_esp+0x6cu);
    /* 00808e36: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x808e3bu); f_0082f9e0();
    /* 00808e3b: fcom dword ptr [0x97f170] */ fx_compare(ST(0), R_F32((u32)(0x97f170u))); 
    /* 00808e41: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808e43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808e44: jb 0x808f67 */ if (fC) goto L_00808f67;
L_00808e4a:; BB(0x00808e4a);
    /* 00808e4a: fcomp dword ptr [0x97f168] */ fx_compare(ST(0), R_F32((u32)(0x97f168u))); FPOP();
    /* 00808e50: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808e52: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808e53: jae 0x808f4d */ if (!fC) goto L_00808f4d;
L_00808e59:; BB(0x00808e59);
    /* 00808e59: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00808e5e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x808e63u); f_0082d990();
    /* 00808e63: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808e65: mov edx, esi */ r_edx = r_esi;
    /* 00808e67: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x808e6cu); f_0082d8bc();
    /* 00808e6c: lea eax, [esp + 0x78] */ r_eax = (u32)(r_esp+0x78u);
    /* 00808e70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808e71: lea edx, [esp + 0x58] */ r_edx = (u32)(r_esp+0x58u);
    /* 00808e75: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808e77: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x808e7cu); f_0082eab8();
    /* 00808e7c: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 00808e80: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x808e85u); f_0082df08();
    /* 00808e85: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808e87: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x808e8cu); f_0082da80();
    /* 00808e8c: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 00808e90: lea edi, [esp + 0x6c] */ r_edi = (u32)(r_esp+0x6cu);
    /* 00808e94: lea eax, [esp + 0x78] */ r_eax = (u32)(r_esp+0x78u);
    /* 00808e98: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00808e9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808e9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00808e9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00808e9e: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00808ea2: call 0x807f04 */ r_esp -= 4; W32(r_esp, 0x808ea7u); f_00807f04();
    /* 00808ea7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808ea9: je 0x808ec5 */ if (fZ) goto L_00808ec5;
L_00808eab:; BB(0x00808eab);
    /* 00808eab: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808eb1: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00808eb4: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00808eb9: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00808ebc: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00808ec0: jmp 0x808d84 */ goto L_00808d84;
L_00808ec5:; BB(0x00808ec5);
    /* 00808ec5: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00808eca: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x808ecfu); f_0082d990();
    /* 00808ecf: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00808ed1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808ed3: mov edx, esi */ r_edx = r_esi;
    /* 00808ed5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x808edau); f_0082d8bc();
    /* 00808eda: lea eax, [esp + 0x78] */ r_eax = (u32)(r_esp+0x78u);
    /* 00808ede: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808edf: lea edx, [esp + 0x58] */ r_edx = (u32)(r_esp+0x58u);
    /* 00808ee3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808ee5: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x808eeau); f_0082eab8();
    /* 00808eea: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 00808eee: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x808ef3u); f_0082df08();
    /* 00808ef3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808ef5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x808efau); f_0082da80();
    /* 00808efa: lea esi, [esp + 0x60] */ r_esi = (u32)(r_esp+0x60u);
    /* 00808efe: lea edx, [esp + 0x6c] */ r_edx = (u32)(r_esp+0x6cu);
    /* 00808f02: lea eax, [esp + 0x78] */ r_eax = (u32)(r_esp+0x78u);
    /* 00808f06: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00808f09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808f0a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00808f0b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00808f0c: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00808f10: call 0x807f04 */ r_esp -= 4; W32(r_esp, 0x808f15u); f_00807f04();
    /* 00808f15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808f17: je 0x808f33 */ if (fZ) goto L_00808f33;
L_00808f19:; BB(0x00808f19);
    /* 00808f19: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808f1f: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00808f22: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00808f27: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00808f2a: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00808f2e: jmp 0x808d84 */ goto L_00808d84;
L_00808f33:; BB(0x00808f33);
    /* 00808f33: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808f39: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00808f3c: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00808f41: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00808f44: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00808f48: jmp 0x808d84 */ goto L_00808d84;
L_00808f4d:; BB(0x00808f4d);
    /* 00808f4d: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808f53: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00808f56: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00808f5b: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00808f5e: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00808f62: jmp 0x808d84 */ goto L_00808d84;
L_00808f67:; BB(0x00808f67);
    /* 00808f67: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808f69: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808f6f: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00808f72: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00808f77: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00808f7a: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00808f7e: jmp 0x808d84 */ goto L_00808d84;
L_00808f83:; BB(0x00808f83);
    /* 00808f83: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808f85: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808f87: or edi, 0x10000 */ {  u32 a = r_edi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00808f8d: mov dword ptr [ebp + 0x30], edi */ W32((u32)(r_ebp+0x30u), r_edi);
    /* 00808f90: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00808f94: jmp 0x808d84 */ goto L_00808d84;
L_00808f99:; BB(0x00808f99);
    /* 00808f99: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808f9f: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00808fa3: jmp 0x808d84 */ goto L_00808d84;
L_00808fa8:; BB(0x00808fa8);
    /* 00808fa8: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00808faa: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00808fae: jmp 0x808a39 */ goto L_00808a39;
L_00808fb3:; BB(0x00808fb3);
    /* 00808fb3: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00808fb7: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00808fb9: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00808fbd: jmp 0x808a39 */ goto L_00808a39;
L_00808fc2:; BB(0x00808fc2);
    /* 00808fc2: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00808fc6: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00808fc8: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00808fcc: jmp 0x808a39 */ goto L_00808a39;
L_00808fd1:; BB(0x00808fd1);
    /* 00808fd1: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 00808fd4: jmp 0x808a0a */ goto L_00808a0a;
L_00808fd9:; BB(0x00808fd9);
    /* 00808fd9: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00808fdd: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00808fe1: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00808fe4: jmp 0x8088f5 */ goto L_008088f5;
L_00808fe9:; BB(0x00808fe9);
    /* 00808fe9: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00808fed: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00808ff1: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00808ff4: jmp 0x8088f5 */ goto L_008088f5;
L_00808ff9:; BB(0x00808ff9);
    /* 00808ff9: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00808ffd: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00809001: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00809004: jmp 0x8088f5 */ goto L_008088f5;
L_00809009:; BB(0x00809009);
    /* 00809009: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0080900c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00809010: jmp 0x8088ac */ goto L_008088ac;
L_00809015:; BB(0x00809015);
    /* 00809015: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00809019: call 0x809098 */ r_esp -= 4; W32(r_esp, 0x80901eu); f_00809098();
    /* 0080901e: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00809024: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00809025: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00809026: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00809027: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00809028: ret  */ FN_RET(0x008086a8); r_esp += 4; return;
L_00809029:; BB(0x00809029);
    /* 00809029: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0080902e: jmp 0x808748 */ goto L_00808748;
L_00809033:; BB(0x00809033);
    /* 00809033: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00809037: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00809039: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0080903d: jmp 0x808a39 */ goto L_00808a39;
L_00809042:; BB(0x00809042);
    /* 00809042: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00809046: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00809048: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0080904c: jmp 0x808a39 */ goto L_00808a39;
L_00809051:; BB(0x00809051);
    /* 00809051: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00809055: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00809057: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0080905b: jmp 0x808a39 */ goto L_00808a39;
L_00809060:; BB(0x00809060);
    /* 00809060: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00809064: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00809068: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0080906b: jmp 0x8088f5 */ goto L_008088f5;
L_00809070:; BB(0x00809070);
    /* 00809070: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00809074: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00809078: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0080907b: jmp 0x8088f5 */ goto L_008088f5;
L_00809080:; BB(0x00809080);
    /* 00809080: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00809084: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00809088: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0080908b: jmp 0x8088f5 */ goto L_008088f5;
L_00809090:; BB(0x00809090);
    /* 00809090: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00809092: jmp 0x808748 */ goto L_00808748;
}

void f_00808b32(void)
{
    FN_ENTER(0x00808b32);
    goto L_00808b32;
L_0080892c:; BB(0x0080892c);
    /* 0080892c: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808932: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00808936: mov ebp, dword ptr [ecx + 8] */ r_ebp = R32((u32)(r_ecx+0x8u));
    /* 00808939: movsx ecx, word ptr [edx + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 0080893d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080893f: add ebp, dword ptr [esp + 0x10] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00808943: movsx esi, word ptr [ebp + ebx*2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2));
    /* 00808948: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0080894a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080894c: jle 0x808a37 */ if ((fZ||fS!=fO)) goto L_00808a37;
L_00808952:; BB(0x00808952);
    /* 00808952: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808955: jl 0x808fd1 */ if ((fS!=fO)) goto L_00808fd1;
L_0080895b:; BB(0x0080895b);
    /* 0080895b: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0080895e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00808962: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00808966: lea edi, [ecx - 6] */ r_edi = (u32)(r_ecx+0xfffffffau);
L_00808969:; BB(0x00808969);
    /* 00808969: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0080896d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080896f: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00808971: lea ebx, [ebp + eax*4] */ r_ebx = (u32)(r_ebp+r_eax*4);
    /* 00808975: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808977: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808979: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080897b: cmp esi, dword ptr [ebx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080897d: je 0x808fc2 */ if (fZ) goto L_00808fc2;
L_00808983:; BB(0x00808983);
    /* 00808983: lea eax, [ebp + 1] */ r_eax = (u32)(r_ebp+0x1u);
    /* 00808986: lea ebx, [ebp + ebp + 2] */ r_ebx = (u32)(r_ebp+r_ebp+0x2u);
    /* 0080898a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080898c: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0080898e: lea ebx, [ebp + ebx*4 + 1] */ r_ebx = (u32)(r_ebp+r_ebx*4+0x1u);
    /* 00808992: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808994: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808996: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808998: cmp esi, dword ptr [ebx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080899a: je 0x808fb3 */ if (fZ) goto L_00808fb3;
L_008089a0:; BB(0x008089a0);
    /* 008089a0: lea ebx, [eax + 1] */ r_ebx = (u32)(r_eax+0x1u);
    /* 008089a3: lea ebp, [eax + eax + 2] */ r_ebp = (u32)(r_eax+r_eax+0x2u);
    /* 008089a7: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008089a9: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008089ab: lea ebx, [eax + ebp*4 + 1] */ r_ebx = (u32)(r_eax+r_ebp*4+0x1u);
    /* 008089af: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008089b1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008089b3: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008089b5: cmp esi, dword ptr [ebx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008089b7: je 0x809051 */ if (fZ) goto L_00809051;
L_008089bd:; BB(0x008089bd);
    /* 008089bd: lea ebx, [eax + 2] */ r_ebx = (u32)(r_eax+0x2u);
    /* 008089c0: lea ebp, [eax + eax + 4] */ r_ebp = (u32)(r_eax+r_eax+0x4u);
    /* 008089c4: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008089c6: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008089c8: lea ebx, [eax + ebp*4 + 2] */ r_ebx = (u32)(r_eax+r_ebp*4+0x2u);
    /* 008089cc: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008089ce: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008089d0: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008089d2: cmp esi, dword ptr [ebx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008089d4: je 0x809042 */ if (fZ) goto L_00809042;
L_008089da:; BB(0x008089da);
    /* 008089da: lea ebx, [eax + 3] */ r_ebx = (u32)(r_eax+0x3u);
    /* 008089dd: lea ebp, [eax + eax + 6] */ r_ebp = (u32)(r_eax+r_eax+0x6u);
    /* 008089e1: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008089e3: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008089e5: lea ebx, [eax + ebp*4 + 3] */ r_ebx = (u32)(r_eax+r_ebp*4+0x3u);
    /* 008089e9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008089eb: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008089ed: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008089ef: cmp esi, dword ptr [ebx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008089f1: je 0x809033 */ if (fZ) goto L_00809033;
L_008089f7:; BB(0x008089f7);
    /* 008089f7: lea ebp, [eax + 4] */ r_ebp = (u32)(r_eax+0x4u);
    /* 008089fa: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008089fc: jle 0x808969 */ if ((fZ||fS!=fO)) goto L_00808969;
L_00808a02:; BB(0x00808a02);
    /* 00808a02: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00808a06: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_00808a0a:; BB(0x00808a0a);
    /* 00808a0a: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00808a0e: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 00808a12: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00808a14: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00808a16: lea edi, [ebp + edi*4] */ r_edi = (u32)(r_ebp+r_edi*4);
    /* 00808a1a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00808a1c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00808a1e:; BB(0x00808a1e);
    /* 00808a1e: lea ebx, [edx + edi] */ r_ebx = (u32)(r_edx+r_edi);
    /* 00808a21: cmp esi, dword ptr [ebx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808a23: je 0x808fa8 */ if (fZ) goto L_00808fa8;
L_00808a29:; BB(0x00808a29);
    /* 00808a29: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00808a2c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00808a2f: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808a31: jl 0x808a1e */ if ((fS!=fO)) goto L_00808a1e;
L_00808a33:; BB(0x00808a33);
    /* 00808a33: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_00808a37:; BB(0x00808a37);
    /* 00808a37: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00808a39:; BB(0x00808a39);
    /* 00808a39: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808a3b: je 0x808b74 */ if (fZ) goto L_00808b74;
L_00808a41:; BB(0x00808a41);
    /* 00808a41: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00808a46: lea edx, [ebp + 4] */ r_edx = (u32)(r_ebp+0x4u);
    /* 00808a49: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808a4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808a4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00808a50: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x808a55u); f_0078ea50();
    /* 00808a55: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00808a59: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00808a5c: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00808a60: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00808a63: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808a65: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00808a67: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808a69: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808a6a: jbe 0x808a83 */ if ((fC||fZ)) goto L_00808a83;
L_00808a6c:; BB(0x00808a6c);
    /* 00808a6c: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00808a70: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00808a73: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00808a78: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00808a7b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00808a7e: jmp 0x808b74 */ goto L_00808b74;
L_00808a83:; BB(0x00808a83);
    /* 00808a83: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 00808a89: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00808a8d: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00808a90: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00808a93: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00808a96: add edx, 0x178 */ {  u32 a = r_edx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00808a9c: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00808aa0: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00808aa4: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00808aa8: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x808aadu); f_0082f9c4();
    /* 00808aad: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00808ab1: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x808ab6u); f_0082df08();
    /* 00808ab6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808ab8: mov dword ptr [esp + 0x30], 0 */ W32((u32)(r_esp+0x30u), 0x0u);
    /* 00808ac0: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00808ac5: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 00808acd: mov dword ptr [esp + 0x38], 0xbf800000 */ W32((u32)(r_esp+0x38u), 0xbf800000u);
    /* 00808ad5: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x808adau); f_0082d990();
    /* 00808ada: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00808adf: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 00808ae5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808ae7: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x808aecu); f_0082d8bc();
    /* 00808aec: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 00808af0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808af1: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 00808af5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808af7: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x808afcu); f_0082eab8();
    /* 00808afc: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x808b01u); f_0082da80();
    /* 00808b01: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 00808b05: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x808b0au); f_0082df08();
    /* 00808b0a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808b0c: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00808b10: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 00808b14: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x808b19u); f_0082f9e0();
    /* 00808b19: fcomp dword ptr [0x97f170] */ fx_compare(ST(0), R_F32((u32)(0x97f170u))); FPOP();
    /* 00808b1f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808b21: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808b22: jae 0x808b38 */ if (!fC) goto L_00808b38;
L_00808b24:; BB(0x00808b24);
    /* 00808b24: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00808b28: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00808b2b: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00808b30: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
L_00808b32:; BB(0x00808b32);
    /* 00808b32: xor byte ptr [ebx + 0x3ceb0442], cl */ { u32 ad = (u32)(r_ebx+0x3ceb0442u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 00808b33: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00808b36: jmp 0x808b74 */ goto L_00808b74;
L_00808b38:; BB(0x00808b38);
    /* 00808b38: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808b3e: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00808b42: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00808b45: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808b47: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00808b49: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808b4b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808b4c: jbe 0x808b62 */ if ((fC||fZ)) goto L_00808b62;
L_00808b4e:; BB(0x00808b4e);
    /* 00808b4e: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00808b52: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00808b55: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00808b5a: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00808b5d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00808b60: jmp 0x808b74 */ goto L_00808b74;
L_00808b62:; BB(0x00808b62);
    /* 00808b62: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00808b66: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00808b69: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00808b6e: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00808b71: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
L_00808b74:; BB(0x00808b74);
    /* 00808b74: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808b77: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808b79: jl 0x80892c */ if ((fS!=fO)) goto L_0080892c;
L_00808b7f:; BB(0x00808b7f);
    /* 00808b7f: mov dword ptr [esp + 0x48], 0 */ W32((u32)(r_esp+0x48u), 0x0u);
    /* 00808b87: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00808b8c: mov dword ptr [esp + 0x4c], 0 */ W32((u32)(r_esp+0x4cu), 0x0u);
    /* 00808b94: mov dword ptr [esp + 0x50], 0xbf800000 */ W32((u32)(r_esp+0x50u), 0xbf800000u);
    /* 00808b9c: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x808ba1u); f_0082d990();
    /* 00808ba1: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00808ba6: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 00808bac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808bae: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x808bb3u); f_0082d8bc();
    /* 00808bb3: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 00808bb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808bb8: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 00808bbc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808bbe: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x808bc3u); f_0082eab8();
    /* 00808bc3: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00808bc7: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x808bccu); f_0082df08();
    /* 00808bcc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808bce: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x808bd3u); f_0082da80();
    /* 00808bd3: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808bd9: mov ebp, dword ptr [edx + 0x10] */ r_ebp = R32((u32)(r_edx+0x10u));
    /* 00808bdc: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00808be0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00808be2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00808be4: jle 0x808d92 */ if ((fZ||fS!=fO)) goto L_00808d92;
L_00808bea:; BB(0x00808bea);
    /* 00808bea: mov edi, dword ptr [ebp + 0x30] */ r_edi = R32((u32)(r_ebp+0x30u));
    /* 00808bed: test edi, 0x80000 */ {  u32 a = r_edi; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808bf3: jne 0x808c05 */ if (!fZ) goto L_00808c05;
L_00808bf5:; BB(0x00808bf5);
    /* 00808bf5: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 00808bf8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00808bfa: jl 0x808d9d */ if ((fS!=fO)) goto L_00808d9d;
L_00808c00:; BB(0x00808c00);
    /* 00808c00: jmp 0x808d84 */ goto L_00808d84;
L_00808c05:; BB(0x00808c05);
    /* 00808c05: or edi, 0x10000 */ {  u32 a = r_edi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00808c0b: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00808c0e: mov dword ptr [ebp + 0x30], edi */ W32((u32)(r_ebp+0x30u), r_edi);
    /* 00808c11: mov edi, dword ptr [ebp + 0x20] */ r_edi = R32((u32)(r_ebp+0x20u));
    /* 00808c14: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00808c16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00808c18: jle 0x808cc4 */ if ((fZ||fS!=fO)) goto L_00808cc4;
L_00808c1e:; BB(0x00808c1e);
    /* 00808c1e: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 00808c22: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
L_00808c26:; BB(0x00808c26);
    /* 00808c26: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 00808c28: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808c2a: je 0x808cae */ if (fZ) goto L_00808cae;
L_00808c30:; BB(0x00808c30);
    /* 00808c30: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 00808c33: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808c39: je 0x808c3e */ if (fZ) goto L_00808c3e;
L_00808c3b:; BB(0x00808c3b);
    /* 00808c3b: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
L_00808c3e:; BB(0x00808c3e);
    /* 00808c3e: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00808c41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808c43: je 0x808c9e */ if (fZ) goto L_00808c9e;
L_00808c45:; BB(0x00808c45);
    /* 00808c45: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00808c4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808c4c: je 0x808c9e */ if (fZ) goto L_00808c9e;
L_00808c4e:; BB(0x00808c4e);
    /* 00808c4e: lea ebx, [ebp + 8] */ r_ebx = (u32)(r_ebp+0x8u);
    /* 00808c51: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00808c52: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808c57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808c58: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x808c5du); f_0078ea50();
    /* 00808c5d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00808c60: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00808c63: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 00808c66: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808c68: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00808c6a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808c6c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808c6d: ja 0x808c87 */ if ((!fC&&!fZ)) goto L_00808c87;
L_00808c6f:; BB(0x00808c6f);
    /* 00808c6f: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00808c74: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 00808c79: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00808c7a: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00808c7e: call 0x808660 */ r_esp -= 4; W32(r_esp, 0x808c83u); f_00808660();
    /* 00808c83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808c85: je 0x808c9b */ if (fZ) goto L_00808c9b;
L_00808c87:; BB(0x00808c87);
    /* 00808c87: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00808c8b: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00808c8e: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00808c93: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 00808c96: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00808c99: jmp 0x808cae */ goto L_00808cae;
L_00808c9b:; BB(0x00808c9b);
    /* 00808c9b: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
L_00808c9e:; BB(0x00808c9e);
    /* 00808c9e: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00808ca2: and edx, 0xfffeffff */ {  u32 a = r_edx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00808ca8: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 00808cab: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
L_00808cae:; BB(0x00808cae);
    /* 00808cae: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00808cb1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00808cb4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808cb6: jl 0x808c26 */ if ((fS!=fO)) goto L_00808c26;
L_00808cbc:; BB(0x00808cbc);
    /* 00808cbc: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00808cc0: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
L_00808cc4:; BB(0x00808cc4);
    /* 00808cc4: mov edi, dword ptr [ebp + 0x24] */ r_edi = R32((u32)(r_ebp+0x24u));
    /* 00808cc7: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00808cca: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00808ccc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00808cce: jle 0x808f99 */ if ((fZ||fS!=fO)) goto L_00808f99;
L_00808cd4:; BB(0x00808cd4);
    /* 00808cd4: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 00808cd8: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
L_00808cdc:; BB(0x00808cdc);
    /* 00808cdc: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 00808cde: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808ce0: je 0x808d64 */ if (fZ) goto L_00808d64;
L_00808ce6:; BB(0x00808ce6);
    /* 00808ce6: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 00808ce9: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808cef: je 0x808cf4 */ if (fZ) goto L_00808cf4;
L_00808cf1:; BB(0x00808cf1);
    /* 00808cf1: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
L_00808cf4:; BB(0x00808cf4);
    /* 00808cf4: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00808cf7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808cf9: je 0x808d54 */ if (fZ) goto L_00808d54;
L_00808cfb:; BB(0x00808cfb);
    /* 00808cfb: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00808d00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808d02: je 0x808d54 */ if (fZ) goto L_00808d54;
L_00808d04:; BB(0x00808d04);
    /* 00808d04: lea ebx, [ebp + 8] */ r_ebx = (u32)(r_ebp+0x8u);
    /* 00808d07: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00808d08: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00808d0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808d0e: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x808d13u); f_0078ea50();
    /* 00808d13: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00808d16: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00808d19: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 00808d1c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808d1e: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00808d20: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808d22: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808d23: ja 0x808d3d */ if ((!fC&&!fZ)) goto L_00808d3d;
L_00808d25:; BB(0x00808d25);
    /* 00808d25: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00808d2a: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 00808d2f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00808d30: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00808d34: call 0x808660 */ r_esp -= 4; W32(r_esp, 0x808d39u); f_00808660();
    /* 00808d39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808d3b: je 0x808d51 */ if (fZ) goto L_00808d51;
L_00808d3d:; BB(0x00808d3d);
    /* 00808d3d: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00808d41: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00808d44: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00808d49: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 00808d4c: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00808d4f: jmp 0x808d64 */ goto L_00808d64;
L_00808d51:; BB(0x00808d51);
    /* 00808d51: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
L_00808d54:; BB(0x00808d54);
    /* 00808d54: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00808d58: and edx, 0xfffeffff */ {  u32 a = r_edx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00808d5e: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 00808d61: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
L_00808d64:; BB(0x00808d64);
    /* 00808d64: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00808d67: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00808d6a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808d6c: jl 0x808cdc */ if ((fS!=fO)) goto L_00808cdc;
L_00808d72:; BB(0x00808d72);
    /* 00808d72: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00808d76: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00808d7a: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808d80: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
L_00808d84:; BB(0x00808d84);
    /* 00808d84: add ebp, 0x34 */ {  u32 a = r_ebp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00808d87: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00808d8a: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00808d8c: jl 0x808bea */ if ((fS!=fO)) goto L_00808bea;
L_00808d92:; BB(0x00808d92);
    /* 00808d92: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00808d98: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00808d99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00808d9a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00808d9b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00808d9c: ret  */ FN_RET(0x00808b32); r_esp += 4; return;
L_00808d9d:; BB(0x00808d9d);
    /* 00808d9d: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 00808da3: mov esi, dword ptr [ecx + 0x19c] */ r_esi = R32((u32)(r_ecx+0x19cu));
    /* 00808da9: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 00808dac: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00808daf: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00808db2: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00808db5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808db7: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 00808dbf: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00808dc3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00808dc6: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00808dca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00808dcc: fsub dword ptr [ecx + 0x178] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x178u));
    /* 00808dd2: fst dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0));
    /* 00808dd6: mov dword ptr [esp + 0x70], 0 */ W32((u32)(r_esp+0x70u), 0x0u);
    /* 00808dde: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808de0: fadd dword ptr [0x97f170] */ ST(0) = ST(0) + R_F32((u32)(0x97f170u));
    /* 00808de6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00808de8: fsub dword ptr [ecx + 0x180] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x180u));
    /* 00808dee: fst dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0));
    /* 00808df2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808df4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00808df6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00808df8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00808dfa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808dfc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808dfe: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00808e01: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00808e03: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808e04: jb 0x808f83 */ if (fC) goto L_00808f83;
L_00808e0a:; BB(0x00808e0a);
    /* 00808e0a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00808e0c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808e0e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808e0f: jae 0x808e23 */ if (!fC) goto L_00808e23;
L_00808e11:; BB(0x00808e11);
    /* 00808e11: and edi, 0xfffeffff */ {  u32 a = r_edi; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00808e17: mov dword ptr [ebp + 0x30], edi */ W32((u32)(r_ebp+0x30u), r_edi);
    /* 00808e1a: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00808e1e: jmp 0x808d84 */ goto L_00808d84;
L_00808e23:; BB(0x00808e23);
    /* 00808e23: lea ecx, [esp + 0x6c] */ r_ecx = (u32)(r_esp+0x6cu);
    /* 00808e27: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x808e2cu); f_0082df08();
    /* 00808e2c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808e2e: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00808e32: lea edx, [esp + 0x6c] */ r_edx = (u32)(r_esp+0x6cu);
    /* 00808e36: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x808e3bu); f_0082f9e0();
    /* 00808e3b: fcom dword ptr [0x97f170] */ fx_compare(ST(0), R_F32((u32)(0x97f170u))); 
    /* 00808e41: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808e43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808e44: jb 0x808f67 */ if (fC) goto L_00808f67;
L_00808e4a:; BB(0x00808e4a);
    /* 00808e4a: fcomp dword ptr [0x97f168] */ fx_compare(ST(0), R_F32((u32)(0x97f168u))); FPOP();
    /* 00808e50: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00808e52: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00808e53: jae 0x808f4d */ if (!fC) goto L_00808f4d;
L_00808e59:; BB(0x00808e59);
    /* 00808e59: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00808e5e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x808e63u); f_0082d990();
    /* 00808e63: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808e65: mov edx, esi */ r_edx = r_esi;
    /* 00808e67: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x808e6cu); f_0082d8bc();
    /* 00808e6c: lea eax, [esp + 0x78] */ r_eax = (u32)(r_esp+0x78u);
    /* 00808e70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808e71: lea edx, [esp + 0x58] */ r_edx = (u32)(r_esp+0x58u);
    /* 00808e75: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808e77: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x808e7cu); f_0082eab8();
    /* 00808e7c: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 00808e80: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x808e85u); f_0082df08();
    /* 00808e85: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808e87: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x808e8cu); f_0082da80();
    /* 00808e8c: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 00808e90: lea edi, [esp + 0x6c] */ r_edi = (u32)(r_esp+0x6cu);
    /* 00808e94: lea eax, [esp + 0x78] */ r_eax = (u32)(r_esp+0x78u);
    /* 00808e98: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00808e9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808e9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00808e9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00808e9e: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00808ea2: call 0x807f04 */ r_esp -= 4; W32(r_esp, 0x808ea7u); f_00807f04();
    /* 00808ea7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808ea9: je 0x808ec5 */ if (fZ) goto L_00808ec5;
L_00808eab:; BB(0x00808eab);
    /* 00808eab: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808eb1: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00808eb4: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00808eb9: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00808ebc: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00808ec0: jmp 0x808d84 */ goto L_00808d84;
L_00808ec5:; BB(0x00808ec5);
    /* 00808ec5: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00808eca: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x808ecfu); f_0082d990();
    /* 00808ecf: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00808ed1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808ed3: mov edx, esi */ r_edx = r_esi;
    /* 00808ed5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x808edau); f_0082d8bc();
    /* 00808eda: lea eax, [esp + 0x78] */ r_eax = (u32)(r_esp+0x78u);
    /* 00808ede: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808edf: lea edx, [esp + 0x58] */ r_edx = (u32)(r_esp+0x58u);
    /* 00808ee3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00808ee5: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x808eeau); f_0082eab8();
    /* 00808eea: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 00808eee: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x808ef3u); f_0082df08();
    /* 00808ef3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808ef5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x808efau); f_0082da80();
    /* 00808efa: lea esi, [esp + 0x60] */ r_esi = (u32)(r_esp+0x60u);
    /* 00808efe: lea edx, [esp + 0x6c] */ r_edx = (u32)(r_esp+0x6cu);
    /* 00808f02: lea eax, [esp + 0x78] */ r_eax = (u32)(r_esp+0x78u);
    /* 00808f06: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00808f09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00808f0a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00808f0b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00808f0c: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00808f10: call 0x807f04 */ r_esp -= 4; W32(r_esp, 0x808f15u); f_00807f04();
    /* 00808f15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00808f17: je 0x808f33 */ if (fZ) goto L_00808f33;
L_00808f19:; BB(0x00808f19);
    /* 00808f19: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808f1f: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00808f22: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00808f27: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00808f2a: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00808f2e: jmp 0x808d84 */ goto L_00808d84;
L_00808f33:; BB(0x00808f33);
    /* 00808f33: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808f39: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00808f3c: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00808f41: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00808f44: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00808f48: jmp 0x808d84 */ goto L_00808d84;
L_00808f4d:; BB(0x00808f4d);
    /* 00808f4d: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808f53: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00808f56: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00808f5b: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00808f5e: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00808f62: jmp 0x808d84 */ goto L_00808d84;
L_00808f67:; BB(0x00808f67);
    /* 00808f67: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808f69: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808f6f: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00808f72: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00808f77: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00808f7a: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00808f7e: jmp 0x808d84 */ goto L_00808d84;
L_00808f83:; BB(0x00808f83);
    /* 00808f83: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808f85: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00808f87: or edi, 0x10000 */ {  u32 a = r_edi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00808f8d: mov dword ptr [ebp + 0x30], edi */ W32((u32)(r_ebp+0x30u), r_edi);
    /* 00808f90: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00808f94: jmp 0x808d84 */ goto L_00808d84;
L_00808f99:; BB(0x00808f99);
    /* 00808f99: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 00808f9f: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00808fa3: jmp 0x808d84 */ goto L_00808d84;
L_00808fa8:; BB(0x00808fa8);
    /* 00808fa8: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00808faa: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00808fae: jmp 0x808a39 */ goto L_00808a39;
L_00808fb3:; BB(0x00808fb3);
    /* 00808fb3: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00808fb7: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00808fb9: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00808fbd: jmp 0x808a39 */ goto L_00808a39;
L_00808fc2:; BB(0x00808fc2);
    /* 00808fc2: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00808fc6: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00808fc8: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00808fcc: jmp 0x808a39 */ goto L_00808a39;
L_00808fd1:; BB(0x00808fd1);
    /* 00808fd1: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 00808fd4: jmp 0x808a0a */ goto L_00808a0a;
L_00809033:; BB(0x00809033);
    /* 00809033: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00809037: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00809039: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0080903d: jmp 0x808a39 */ goto L_00808a39;
L_00809042:; BB(0x00809042);
    /* 00809042: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00809046: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00809048: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0080904c: jmp 0x808a39 */ goto L_00808a39;
L_00809051:; BB(0x00809051);
    /* 00809051: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00809055: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00809057: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0080905b: jmp 0x808a39 */ goto L_00808a39;
}

