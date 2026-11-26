#include "protos.h"

void f_00772054(void) /* sub_772054 */
{
    FN_ENTER(0x00772054);
    /* 00772054: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00772055: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00772056: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00772057: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077205a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0077205c: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 00772060: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00772064: lea esi, [ebx + 0x300] */ r_esi = (u32)(r_ebx+0x300u);
    /* 0077206a: lea ebp, [ebx + 0x2a4] */ r_ebp = (u32)(r_ebx+0x2a4u);
    /* 00772070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00772071: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00772072: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x772077u); f_007a9180();
    /* 00772077: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0077207b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077207e: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00772082: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00772084: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00772088: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0077208a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077208c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077208d: jb 0x7720d9 */ if (fC) goto L_007720d9;
L_0077208f:; BB(0x0077208f);
    /* 0077208f: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 00772094: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00772096: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00772098: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x77209bu); call_ind(t); }
    /* 0077209b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077209d: jne 0x7720d9 */ if (!fZ) goto L_007720d9;
L_0077209f:; BB(0x0077209f);
    /* 0077209f: push dword ptr [esp + 0x68] */ { u32 v = R32((u32)(r_esp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 007720a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007720a5: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x7720aau); f_00772358();
    /* 007720aa: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 007720ad: push dword ptr [esp + 0x60] */ { u32 v = R32((u32)(r_esp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 007720b1: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007720b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007720b5: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x7720b8u); call_ind(t); }
    /* 007720b8: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007720ba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007720bc: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x7720bfu); call_ind(t); }
    /* 007720bf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007720c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007720c1: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7720c6u); f_007a9180();
    /* 007720c6: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 007720ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007720cd: add dword ptr [ebx + 0x2b0], 1 */ { u32 ad = (u32)(r_ebx+0x2b0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007720d4: jmp 0x772343 */ goto L_00772343;
L_007720d9:; BB(0x007720d9);
    /* 007720d9: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 007720e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007720e3: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 007720eb: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 007720f3: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x7720f8u); f_007751b0();
    /* 007720f8: fld dword ptr [0x978304] */ FPUSH(R_F32((u32)(0x978304u)));
    /* 007720fe: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00772100: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00772102: fmul dword ptr [0x978300] */ ST(0) = ST(0) * R_F32((u32)(0x978300u));
    /* 00772108: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0077210a: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0077210f: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 00772113: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 00772118: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077211d: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00772121: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 00772125: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00772129: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0077212d: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 00772131: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x772136u); f_0082d990();
    /* 00772136: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00772138: mov edx, ebp */ r_edx = r_ebp;
    /* 0077213a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x77213fu); f_0082d8bc();
    /* 0077213f: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00772143: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00772144: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00772148: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0077214a: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x77214fu); f_0082eab8();
    /* 0077214f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x772154u); f_0082da80();
    /* 00772154: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00772158: fmul dword ptr [esp + 0x60] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x60u));
    /* 0077215c: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00772160: fmul dword ptr [esp + 0x64] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x64u));
    /* 00772164: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00772166: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0077216a: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0077216e: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 00772172: lea edx, [ebx + 0x50] */ r_edx = (u32)(r_ebx+0x50u);
    /* 00772175: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x77217au); f_0082ebac();
    /* 0077217a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0077217e: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00772182: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00772186: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00772189: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0077218b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0077218f: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
    /* 00772197: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0077219b: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0077219f: lea esi, [esp + 4] */ r_esi = (u32)(r_esp+0x4u);
    /* 007721a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007721a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007721a6: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x7721abu); f_007b4c58();
    /* 007721ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007721ad: je 0x772325 */ if (fZ) goto L_00772325;
L_007721b3:; BB(0x007721b3);
    /* 007721b3: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007721b7: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007721bb: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 007721bf: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007721c3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007721c7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007721cb: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007721d1: jne 0x7721e2 */ if (!fZ) goto L_007721e2;
L_007721d3:; BB(0x007721d3);
    /* 007721d3: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007721d6: mov eax, dword ptr [edx + 0x304] */ r_eax = R32((u32)(r_edx+0x304u));
    /* 007721dc: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 007721e0: jmp 0x7721fa */ goto L_007721fa;
L_007721e2:; BB(0x007721e2);
    /* 007721e2: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007721e5: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 007721e9: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 007721ed: fadd dword ptr [edx + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x304u));
    /* 007721f3: fsub dword ptr [edx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x3cu));
    /* 007721f6: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
L_007721fa:; BB(0x007721fa);
    /* 007721fa: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00772200: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00772202: je 0x7722c4 */ if (fZ) goto L_007722c4;
L_00772208:; BB(0x00772208);
    /* 00772208: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0077220c: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00772212: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x772217u); f_0082f9c4();
    /* 00772217: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0077221b: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0077221f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00772221: fmul qword ptr [0x978020] */ ST(0) = ST(0) * R_F64((u32)(0x978020u));
    /* 00772227: fdiv qword ptr [0x978018] */ ST(0) = ST(0) / R_F64((u32)(0x978018u));
    /* 0077222d: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 00772231: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 00772236: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077223b: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0077223f: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 00772243: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00772247: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0077224b: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0077224e: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 00772254: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00772257: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 0077225b: mov dword ptr [0xaab4f4], 0 */ W32((u32)(0xaab4f4u), 0x0u);
    /* 00772265: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0077226a: mov dword ptr [0xaab4f0], 0 */ W32((u32)(0xaab4f0u), 0x0u);
    /* 00772274: mov dword ptr [0xaab4f8], eax */ W32((u32)(0xaab4f8u), r_eax);
    /* 00772279: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x77227eu); f_0082d990();
    /* 0077227e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00772280: mov edx, ebp */ r_edx = r_ebp;
    /* 00772282: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x772287u); f_0082d8bc();
    /* 00772287: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077228c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0077228e: mov edx, 0xaab4f0 */ r_edx = 0xaab4f0u;
    /* 00772293: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x772298u); f_0082eab8();
    /* 00772298: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x77229du); f_0082da80();
    /* 0077229d: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 007722a1: mov edx, 0xaab4f0 */ r_edx = 0xaab4f0u;
    /* 007722a6: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7722abu); f_0082ebac();
    /* 007722ab: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007722ae: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 007722b2: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007722b8: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7722bdu); f_0082ebac();
    /* 007722bd: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007722c0: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_007722c4:; BB(0x007722c4);
    /* 007722c4: test ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007722ca: jne 0x7722e3 */ if (!fZ) goto L_007722e3;
L_007722cc:; BB(0x007722cc);
    /* 007722cc: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 007722d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007722d1: mov ecx, edx */ r_ecx = r_edx;
    /* 007722d3: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x7722d8u); f_00771e14();
    /* 007722d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007722da: jne 0x772325 */ if (!fZ) goto L_00772325;
L_007722dc:; BB(0x007722dc);
    /* 007722dc: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007722df: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_007722e3:; BB(0x007722e3);
    /* 007722e3: test ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007722e9: jne 0x772307 */ if (!fZ) goto L_00772307;
L_007722eb:; BB(0x007722eb);
    /* 007722eb: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 007722ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007722f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007722f2: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007722f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007722f9: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x7722feu); f_0077fffc();
    /* 007722fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00772301: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00772303: jne 0x772325 */ if (!fZ) goto L_00772325;
L_00772305:; BB(0x00772305);
    /* 00772305: jmp 0x772350 */ goto L_00772350;
L_00772307:; BB(0x00772307);
    /* 00772307: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077230b: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0077230f: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00772313: mov dword ptr [edx + 0x2a4], eax */ W32((u32)(r_edx+0x2a4u), r_eax);
    /* 00772319: mov dword ptr [edx + 0x2a8], ebp */ W32((u32)(r_edx+0x2a8u), r_ebp);
    /* 0077231f: mov dword ptr [edx + 0x2ac], esi */ W32((u32)(r_edx+0x2acu), r_esi);
L_00772325:; BB(0x00772325);
    /* 00772325: mov dword ptr [ebx + 0x314], 0 */ W32((u32)(r_ebx+0x314u), 0x0u);
    /* 0077232f: mov dword ptr [ebx + 0x30c], 0 */ W32((u32)(r_ebx+0x30cu), 0x0u);
    /* 00772339: mov dword ptr [ebx + 0x2b0], 0 */ W32((u32)(r_ebx+0x2b0u), 0x0u);
L_00772343:; BB(0x00772343);
    /* 00772343: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00772347: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077234a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077234b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077234c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077234d: ret 0x10 */ FN_RET(0x00772054); r_esp += 20; return;
L_00772350:; BB(0x00772350);
    /* 00772350: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00772353: jmp 0x772307 */ goto L_00772307;
}

void f_007722fb(void)
{
    FN_ENTER(0x007722fb);
    /* 007722fb: fadd qword ptr [eax] */ ST(0) = ST(0) + R_F64((u32)(r_eax));
    /* 007722fd: add byte ptr [ebx - 0x3f7af33c], al */ { u32 ad = (u32)(r_ebx+0xc0850cc4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 00772303: jne 0x772325 */ if (!fZ) goto L_00772325;
L_00772305:; BB(0x00772305);
    /* 00772305: jmp 0x772350 */ goto L_00772350;
L_00772307:; BB(0x00772307);
    /* 00772307: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077230b: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0077230f: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00772313: mov dword ptr [edx + 0x2a4], eax */ W32((u32)(r_edx+0x2a4u), r_eax);
    /* 00772319: mov dword ptr [edx + 0x2a8], ebp */ W32((u32)(r_edx+0x2a8u), r_ebp);
    /* 0077231f: mov dword ptr [edx + 0x2ac], esi */ W32((u32)(r_edx+0x2acu), r_esi);
L_00772325:; BB(0x00772325);
    /* 00772325: mov dword ptr [ebx + 0x314], 0 */ W32((u32)(r_ebx+0x314u), 0x0u);
    /* 0077232f: mov dword ptr [ebx + 0x30c], 0 */ W32((u32)(r_ebx+0x30cu), 0x0u);
    /* 00772339: mov dword ptr [ebx + 0x2b0], 0 */ W32((u32)(r_ebx+0x2b0u), 0x0u);
    /* 00772343: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00772347: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077234a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077234b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077234c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077234d: ret 0x10 */ FN_RET(0x007722fb); r_esp += 20; return;
L_00772350:; BB(0x00772350);
    /* 00772350: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00772353: jmp 0x772307 */ goto L_00772307;
}

void f_00772358(void) /* sub_772358 */
{
    FN_ENTER(0x00772358);
    /* 00772358: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00772359: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077235a: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077235d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0077235f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00772362: mov eax, dword ptr [ebp + 0x2a4] */ r_eax = R32((u32)(r_ebp+0x2a4u));
    /* 00772368: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0077236b: mov eax, dword ptr [ebp + 0x2a8] */ r_eax = R32((u32)(r_ebp+0x2a8u));
    /* 00772371: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00772374: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00772378: mov eax, dword ptr [ebp + 0x2ac] */ r_eax = R32((u32)(r_ebp+0x2acu));
    /* 0077237e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00772382: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x772387u); f_0082f9c4();
    /* 00772387: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0077238a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0077238e: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00772390: fmul qword ptr [0x978010] */ ST(0) = ST(0) * R_F64((u32)(0x978010u));
    /* 00772396: fdiv qword ptr [0x978008] */ ST(0) = ST(0) / R_F64((u32)(0x978008u));
    /* 0077239c: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 007723a0: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 007723a5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007723aa: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007723ae: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 007723b2: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 007723b6: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 007723ba: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007723be: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 007723c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007723c3: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 007723c6: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x7723cbu); f_007a8c74();
    /* 007723cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007723cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007723cd: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 007723d0: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x7723d5u); f_007a9018();
    /* 007723d5: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007723d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007723d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007723da: ret 4 */ FN_RET(0x00772358); r_esp += 8; return;
}

void f_007723e0(void) /* sub_7723E0 */
{
    FN_ENTER(0x007723e0);
    /* 007723e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007723e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007723e2: mov edi, ecx */ r_edi = r_ecx;
    /* 007723e4: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 007723e8: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 007723ec: mov ecx, edi */ r_ecx = r_edi;
    /* 007723ee: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 007723f2: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 007723f6: call 0x77246c */ r_esp -= 4; W32(r_esp, 0x7723fbu); f_0077246c();
    /* 007723fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007723fd: je 0x772461 */ if (fZ) goto L_00772461;
L_007723ff:; BB(0x007723ff);
    /* 007723ff: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00772405: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077240b: mov ecx, edi */ r_ecx = r_edi;
    /* 0077240d: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00772413: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x772418u); f_00771f1c();
    /* 00772418: push dword ptr [edi + 0x2ac] */ { u32 v = R32((u32)(r_edi+0x2acu)); r_esp -= 4; W32(r_esp, v); }
    /* 0077241e: push dword ptr [edi + 0x2a8] */ { u32 v = R32((u32)(r_edi+0x2a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00772424: mov ecx, edi */ r_ecx = r_edi;
    /* 00772426: push dword ptr [edi + 0x2a4] */ { u32 v = R32((u32)(r_edi+0x2a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077242c: push dword ptr [edi + 0x2a0] */ { u32 v = R32((u32)(r_edi+0x2a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00772432: push dword ptr [edi + 0x29c] */ { u32 v = R32((u32)(r_edi+0x29cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00772438: push dword ptr [edi + 0x298] */ { u32 v = R32((u32)(r_edi+0x298u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077243e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077243f: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x772444u); f_00771f5c();
    /* 00772444: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00772446: mov ecx, edi */ r_ecx = r_edi;
    /* 00772448: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x77244bu); call_ind(t); }
    /* 0077244b: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0077244f: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00772452: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00772453: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00772454: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x772459u); f_007a9180();
    /* 00772459: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077245c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077245d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077245e: ret 0x10 */ FN_RET(0x007723e0); r_esp += 20; return;
L_00772461:; BB(0x00772461);
    /* 00772461: fld dword ptr [0x9782fc] */ FPUSH(R_F32((u32)(0x9782fcu)));
    /* 00772467: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00772468: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00772469: ret 0x10 */ FN_RET(0x007723e0); r_esp += 20; return;
}

void f_0077246c(void) /* sub_77246C */
{
    FN_ENTER(0x0077246c);
    /* 0077246c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077246d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077246e: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00772471: mov esi, ecx */ r_esi = r_ecx;
    /* 00772473: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00772477: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0077247b: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 0077247f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00772483: lea ebx, [esi + 0x300] */ r_ebx = (u32)(r_esi+0x300u);
    /* 00772489: mov edx, ebx */ r_edx = r_ebx;
    /* 0077248b: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 0077248f: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00772493: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 00772497: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x77249cu); f_0082f9c4();
    /* 0077249c: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007724a1: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7724a6u); f_0082d990();
    /* 007724a6: mov edx, 0x8000 */ r_edx = 0x8000u;
    /* 007724ab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007724ad: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7724b2u); f_0082d8bc();
    /* 007724b2: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 007724b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007724b7: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 007724bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007724bd: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x7724c2u); f_0082eab8();
    /* 007724c2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7724c7u); f_0082da80();
    /* 007724c7: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 007724cb: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x7724d0u); f_0082def4();
    /* 007724d0: fcomp dword ptr [0x9782f8] */ fx_compare(ST(0), R_F32((u32)(0x9782f8u))); FPOP();
    /* 007724d6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007724d8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007724d9: jbe 0x7726c1 */ if ((fC||fZ)) goto L_007726c1;
L_007724df:; BB(0x007724df);
    /* 007724df: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 007724e3: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7724e8u); f_0082df08();
    /* 007724e8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007724ea: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 007724ee: mov edx, ebx */ r_edx = r_ebx;
    /* 007724f0: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7724f5u); f_0082ebac();
    /* 007724f5: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007724f9: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007724fd: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00772501: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00772504: mov ecx, esi */ r_ecx = r_esi;
    /* 00772506: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0077250a: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
    /* 00772512: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00772516: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0077251a: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0077251e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00772520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00772521: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x772526u); f_007b4c58();
    /* 00772526: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00772528: je 0x7726b7 */ if (fZ) goto L_007726b7;
L_0077252e:; BB(0x0077252e);
    /* 0077252e: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00772532: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00772536: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0077253a: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0077253e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00772542: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00772546: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00772549: jne 0x77255a */ if (!fZ) goto L_0077255a;
L_0077254b:; BB(0x0077254b);
    /* 0077254b: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0077254e: mov edx, dword ptr [eax + 0x304] */ r_edx = R32((u32)(r_eax+0x304u));
    /* 00772554: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00772558: jmp 0x772572 */ goto L_00772572;
L_0077255a:; BB(0x0077255a);
    /* 0077255a: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0077255e: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00772561: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00772565: fadd dword ptr [eax + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x304u));
    /* 0077256b: fsub dword ptr [eax + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x3cu));
    /* 0077256e: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
L_00772572:; BB(0x00772572);
    /* 00772572: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 00772578: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077257a: je 0x77263e */ if (fZ) goto L_0077263e;
L_00772580:; BB(0x00772580);
    /* 00772580: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00772584: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00772589: mov edx, eax */ r_edx = r_eax;
    /* 0077258b: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x772590u); f_0082f9c4();
    /* 00772590: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00772594: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00772598: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0077259a: fmul qword ptr [0x978000] */ ST(0) = ST(0) * R_F64((u32)(0x978000u));
    /* 007725a0: fdiv qword ptr [0x977ff8] */ ST(0) = ST(0) / R_F64((u32)(0x977ff8u));
    /* 007725a6: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 007725aa: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 007725af: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007725b4: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 007725b8: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 007725bc: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 007725c0: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 007725c4: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 007725c7: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 007725cd: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 007725d0: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 007725d4: mov dword ptr [0xaab4f4], 0 */ W32((u32)(0xaab4f4u), 0x0u);
    /* 007725de: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007725e3: mov dword ptr [0xaab4f0], 0 */ W32((u32)(0xaab4f0u), 0x0u);
    /* 007725ed: mov dword ptr [0xaab4f8], esi */ W32((u32)(0xaab4f8u), r_esi);
    /* 007725f3: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7725f8u); f_0082d990();
    /* 007725f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007725fa: mov edx, ebx */ r_edx = r_ebx;
    /* 007725fc: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x772601u); f_0082d8bc();
    /* 00772601: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00772606: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00772608: mov edx, 0xaab4f0 */ r_edx = 0xaab4f0u;
    /* 0077260d: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x772612u); f_0082eab8();
    /* 00772612: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x772617u); f_0082da80();
    /* 00772617: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0077261b: mov edx, 0xaab4f0 */ r_edx = 0xaab4f0u;
    /* 00772620: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x772625u); f_0082ebac();
    /* 00772625: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00772628: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0077262c: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00772632: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x772637u); f_0082ebac();
    /* 00772637: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0077263a: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
L_0077263e:; BB(0x0077263e);
    /* 0077263e: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00772641: jne 0x77265a */ if (!fZ) goto L_0077265a;
L_00772643:; BB(0x00772643);
    /* 00772643: lea ebx, [esp + 0x20] */ r_ebx = (u32)(r_esp+0x20u);
    /* 00772647: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00772648: mov ecx, eax */ r_ecx = r_eax;
    /* 0077264a: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x77264fu); f_00771e14();
    /* 0077264f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00772651: jne 0x7726ad */ if (!fZ) goto L_007726ad;
L_00772653:; BB(0x00772653);
    /* 00772653: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00772656: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
L_0077265a:; BB(0x0077265a);
    /* 0077265a: test bl, 4 */ {  u32 a = (u8)r_ebx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0077265d: jne 0x772682 */ if (!fZ) goto L_00772682;
L_0077265f:; BB(0x0077265f);
    /* 0077265f: lea ebx, [esp + 0x20] */ r_ebx = (u32)(r_esp+0x20u);
    /* 00772663: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00772665: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00772666: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077266b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077266c: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x772671u); f_0077fffc();
    /* 00772671: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00772674: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00772676: je 0x7726cb */ if (fZ) goto L_007726cb;
L_00772678:; BB(0x00772678);
    /* 00772678: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077267a: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077267d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077267e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077267f: ret 0xc */ FN_RET(0x0077246c); r_esp += 16; return;
L_00772682:; BB(0x00772682);
    /* 00772682: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00772686: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0077268a: mov dword ptr [eax + 0x2a4], ebx */ W32((u32)(r_eax+0x2a4u), r_ebx);
    /* 00772690: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00772694: mov dword ptr [eax + 0x2a8], esi */ W32((u32)(r_eax+0x2a8u), r_esi);
    /* 0077269a: mov dword ptr [eax + 0x2ac], ebx */ W32((u32)(r_eax+0x2acu), r_ebx);
    /* 007726a0: mov eax, 1 */ r_eax = 0x1u;
    /* 007726a5: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007726a8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007726a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007726aa: ret 0xc */ FN_RET(0x0077246c); r_esp += 16; return;
L_007726ad:; BB(0x007726ad);
    /* 007726ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007726af: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007726b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007726b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007726b4: ret 0xc */ FN_RET(0x0077246c); r_esp += 16; return;
L_007726b7:; BB(0x007726b7);
    /* 007726b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007726b9: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007726bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007726bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007726be: ret 0xc */ FN_RET(0x0077246c); r_esp += 16; return;
L_007726c1:; BB(0x007726c1);
    /* 007726c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007726c3: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007726c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007726c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007726c8: ret 0xc */ FN_RET(0x0077246c); r_esp += 16; return;
L_007726cb:; BB(0x007726cb);
    /* 007726cb: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 007726ce: jmp 0x772682 */ goto L_00772682;
}

void f_007725cf(void)
{
    FN_ENTER(0x007725cf);
    /* 007725cf: or al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 007725d1: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 007725d2: and al, 0x3c */ {  u32 a = (u8)r_eax; u32 b = 0x3cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 007725d4: mov dword ptr [0xaab4f4], 0 */ W32((u32)(0xaab4f4u), 0x0u);
    /* 007725de: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007725e3: mov dword ptr [0xaab4f0], 0 */ W32((u32)(0xaab4f0u), 0x0u);
    /* 007725ed: mov dword ptr [0xaab4f8], esi */ W32((u32)(0xaab4f8u), r_esi);
    /* 007725f3: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7725f8u); f_0082d990();
    /* 007725f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007725fa: mov edx, ebx */ r_edx = r_ebx;
    /* 007725fc: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x772601u); f_0082d8bc();
    /* 00772601: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00772606: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00772608: mov edx, 0xaab4f0 */ r_edx = 0xaab4f0u;
    /* 0077260d: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x772612u); f_0082eab8();
    /* 00772612: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x772617u); f_0082da80();
    /* 00772617: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0077261b: mov edx, 0xaab4f0 */ r_edx = 0xaab4f0u;
    /* 00772620: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x772625u); f_0082ebac();
    /* 00772625: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00772628: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0077262c: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00772632: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x772637u); f_0082ebac();
    /* 00772637: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0077263a: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0077263e: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00772641: jne 0x77265a */ if (!fZ) goto L_0077265a;
L_00772643:; BB(0x00772643);
    /* 00772643: lea ebx, [esp + 0x20] */ r_ebx = (u32)(r_esp+0x20u);
    /* 00772647: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00772648: mov ecx, eax */ r_ecx = r_eax;
    /* 0077264a: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x77264fu); f_00771e14();
    /* 0077264f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00772651: jne 0x7726ad */ if (!fZ) goto L_007726ad;
L_00772653:; BB(0x00772653);
    /* 00772653: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00772656: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
L_0077265a:; BB(0x0077265a);
    /* 0077265a: test bl, 4 */ {  u32 a = (u8)r_ebx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0077265d: jne 0x772682 */ if (!fZ) goto L_00772682;
L_0077265f:; BB(0x0077265f);
    /* 0077265f: lea ebx, [esp + 0x20] */ r_ebx = (u32)(r_esp+0x20u);
    /* 00772663: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00772665: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00772666: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077266b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077266c: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x772671u); f_0077fffc();
    /* 00772671: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00772674: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00772676: je 0x7726cb */ if (fZ) goto L_007726cb;
L_00772678:; BB(0x00772678);
    /* 00772678: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077267a: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077267d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077267e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077267f: ret 0xc */ FN_RET(0x007725cf); r_esp += 16; return;
L_00772682:; BB(0x00772682);
    /* 00772682: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00772686: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0077268a: mov dword ptr [eax + 0x2a4], ebx */ W32((u32)(r_eax+0x2a4u), r_ebx);
    /* 00772690: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00772694: mov dword ptr [eax + 0x2a8], esi */ W32((u32)(r_eax+0x2a8u), r_esi);
    /* 0077269a: mov dword ptr [eax + 0x2ac], ebx */ W32((u32)(r_eax+0x2acu), r_ebx);
    /* 007726a0: mov eax, 1 */ r_eax = 0x1u;
    /* 007726a5: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007726a8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007726a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007726aa: ret 0xc */ FN_RET(0x007725cf); r_esp += 16; return;
L_007726ad:; BB(0x007726ad);
    /* 007726ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007726af: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007726b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007726b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007726b4: ret 0xc */ FN_RET(0x007725cf); r_esp += 16; return;
L_007726cb:; BB(0x007726cb);
    /* 007726cb: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 007726ce: jmp 0x772682 */ goto L_00772682;
}

void f_007726d0(void) /* sub_7726D0 */
{
    FN_ENTER(0x007726d0);
    /* 007726d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007726d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007726d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007726d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007726d4: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007726d7: mov esi, ecx */ r_esi = r_ecx;
    /* 007726d9: lea ebp, [esi + 0x300] */ r_ebp = (u32)(r_esi+0x300u);
    /* 007726df: lea ebx, [esi + 0x298] */ r_ebx = (u32)(r_esi+0x298u);
    /* 007726e5: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 007726e9: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 007726ed: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 007726f1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007726f3: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007726f7: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 007726fb: mov eax, dword ptr [esp + 0x78] */ r_eax = R32((u32)(r_esp+0x78u));
    /* 007726ff: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00772703: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 00772707: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00772708: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00772709: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x77270eu); f_007a9180();
    /* 0077270e: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00772712: lea edi, [esi + 0x2a4] */ r_edi = (u32)(r_esi+0x2a4u);
    /* 00772718: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00772719: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077271a: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x77271fu); f_007a9180();
    /* 0077271f: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00772723: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00772724: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00772725: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x77272au); f_007a9180();
    /* 0077272a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077272d: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00772731: fcomp dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); FPOP();
    /* 00772735: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00772737: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00772738: ja 0x77273e */ if ((!fC&&!fZ)) goto L_0077273e;
L_0077273a:; BB(0x0077273a);
    /* 0077273a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0077273c: jmp 0x772770 */ goto L_00772770;
L_0077273e:; BB(0x0077273e);
    /* 0077273e: fld dword ptr [0x9782e8] */ FPUSH(R_F32((u32)(0x9782e8u)));
    /* 00772744: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00772748: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0077274a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077274c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077274d: jae 0x772755 */ if (!fC) goto L_00772755;
L_0077274f:; BB(0x0077274f);
    /* 0077274f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00772751: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00772753: jmp 0x772770 */ goto L_00772770;
L_00772755:; BB(0x00772755);
    /* 00772755: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00772757: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00772759: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077275a: ja 0x772770 */ if ((!fC&&!fZ)) goto L_00772770;
L_0077275c:; BB(0x0077275c);
    /* 0077275c: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 00772761: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00772763: mov ecx, esi */ r_ecx = r_esi;
    /* 00772765: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x772768u); call_ind(t); }
    /* 00772768: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077276a: je 0x7729d7 */ if (fZ) goto L_007729d7;
L_00772770:; BB(0x00772770);
    /* 00772770: mov eax, dword ptr [esp + 0x7c] */ r_eax = R32((u32)(r_esp+0x7cu));
    /* 00772774: mov ebx, dword ptr [esp + 0x80] */ r_ebx = R32((u32)(r_esp+0x80u));
    /* 0077277b: mov edi, dword ptr [esp + 0x84] */ r_edi = R32((u32)(r_esp+0x84u));
    /* 00772782: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00772786: mov edx, ebp */ r_edx = r_ebp;
    /* 00772788: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0077278c: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00772790: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 00772794: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x772799u); f_0082f9c4();
    /* 00772799: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0077279d: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 007727a1: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007727a3: fmul qword ptr [0x977fe0] */ ST(0) = ST(0) * R_F64((u32)(0x977fe0u));
    /* 007727a9: fdiv qword ptr [0x977fd8] */ ST(0) = ST(0) / R_F64((u32)(0x977fd8u));
    /* 007727af: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 007727b3: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 007727b8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007727bd: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 007727c1: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 007727c5: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 007727c9: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 007727cd: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 007727d1: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 007727d5: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 007727dd: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007727e1: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007727e6: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 007727ee: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7727f3u); f_0082d990();
    /* 007727f3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007727f5: mov edx, ebx */ r_edx = r_ebx;
    /* 007727f7: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7727fcu); f_0082d8bc();
    /* 007727fc: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00772800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00772801: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00772805: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00772807: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x77280cu); f_0082eab8();
    /* 0077280c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x772811u); f_0082da80();
    /* 00772811: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 00772815: mov edx, ebp */ r_edx = r_ebp;
    /* 00772817: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x77281cu); f_0082ebac();
    /* 0077281c: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00772820: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00772824: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00772828: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0077282b: mov ecx, esi */ r_ecx = r_esi;
    /* 0077282d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00772831: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
    /* 00772839: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0077283d: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00772841: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00772845: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00772847: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00772848: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x77284du); f_007b4c58();
    /* 0077284d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077284f: je 0x7729d7 */ if (fZ) goto L_007729d7;
L_00772855:; BB(0x00772855);
    /* 00772855: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00772859: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0077285d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00772861: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00772865: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 00772869: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0077286d: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00772870: jne 0x772881 */ if (!fZ) goto L_00772881;
L_00772872:; BB(0x00772872);
    /* 00772872: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00772875: mov eax, dword ptr [edx + 0x304] */ r_eax = R32((u32)(r_edx+0x304u));
    /* 0077287b: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0077287f: jmp 0x772899 */ goto L_00772899;
L_00772881:; BB(0x00772881);
    /* 00772881: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00772884: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00772888: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0077288c: fadd dword ptr [edx + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x304u));
    /* 00772892: fsub dword ptr [edx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x3cu));
    /* 00772895: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
L_00772899:; BB(0x00772899);
    /* 00772899: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 0077289f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007728a1: je 0x772963 */ if (fZ) goto L_00772963;
L_007728a7:; BB(0x007728a7);
    /* 007728a7: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 007728ab: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007728b1: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x7728b6u); f_0082f9c4();
    /* 007728b6: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007728ba: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007728be: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007728c0: fmul qword ptr [0x977fe0] */ ST(0) = ST(0) * R_F64((u32)(0x977fe0u));
    /* 007728c6: fdiv qword ptr [0x977fd8] */ ST(0) = ST(0) / R_F64((u32)(0x977fd8u));
    /* 007728cc: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 007728d0: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 007728d5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007728da: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 007728de: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 007728e2: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 007728e6: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 007728ea: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 007728ed: mov edi, dword ptr [eax + 0xa4] */ r_edi = R32((u32)(r_eax+0xa4u));
    /* 007728f3: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 007728f6: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 007728fa: mov dword ptr [0xaab4f4], 0 */ W32((u32)(0xaab4f4u), 0x0u);
    /* 00772904: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00772909: mov dword ptr [0xaab4f0], 0 */ W32((u32)(0xaab4f0u), 0x0u);
    /* 00772913: mov dword ptr [0xaab4f8], eax */ W32((u32)(0xaab4f8u), r_eax);
    /* 00772918: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x77291du); f_0082d990();
    /* 0077291d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0077291f: mov edx, ebx */ r_edx = r_ebx;
    /* 00772921: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x772926u); f_0082d8bc();
    /* 00772926: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077292b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0077292d: mov edx, 0xaab4f0 */ r_edx = 0xaab4f0u;
    /* 00772932: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x772937u); f_0082eab8();
    /* 00772937: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x77293cu); f_0082da80();
    /* 0077293c: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00772940: mov edx, 0xaab4f0 */ r_edx = 0xaab4f0u;
    /* 00772945: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x77294au); f_0082ebac();
    /* 0077294a: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0077294d: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00772951: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00772957: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x77295cu); f_0082ebac();
    /* 0077295c: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0077295f: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
L_00772963:; BB(0x00772963);
    /* 00772963: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00772966: jne 0x77297f */ if (!fZ) goto L_0077297f;
L_00772968:; BB(0x00772968);
    /* 00772968: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 0077296c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077296d: mov ecx, edx */ r_ecx = r_edx;
    /* 0077296f: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x772974u); f_00771e14();
    /* 00772974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00772976: jne 0x7729d7 */ if (!fZ) goto L_007729d7;
L_00772978:; BB(0x00772978);
    /* 00772978: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0077297b: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
L_0077297f:; BB(0x0077297f);
    /* 0077297f: test bl, 4 */ {  u32 a = (u8)r_ebx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00772982: jne 0x7729a0 */ if (!fZ) goto L_007729a0;
L_00772984:; BB(0x00772984);
    /* 00772984: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00772988: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077298a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077298b: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00772991: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00772992: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x772997u); f_0077fffc();
    /* 00772997: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077299a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077299c: jne 0x7729d7 */ if (!fZ) goto L_007729d7;
L_0077299e:; BB(0x0077299e);
    /* 0077299e: jmp 0x772a0e */ goto L_00772a0e;
L_007729a0:; BB(0x007729a0);
    /* 007729a0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007729a4: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 007729a8: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 007729ac: mov dword ptr [edx + 0x2a4], eax */ W32((u32)(r_edx+0x2a4u), r_eax);
    /* 007729b2: mov dword ptr [edx + 0x2a8], ebx */ W32((u32)(r_edx+0x2a8u), r_ebx);
    /* 007729b8: mov dword ptr [edx + 0x2ac], edi */ W32((u32)(r_edx+0x2acu), r_edi);
    /* 007729be: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 007729c4: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 007729ca: mov ecx, esi */ r_ecx = r_esi;
    /* 007729cc: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 007729d2: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x7729d7u); f_00771f1c();
L_007729d7:; BB(0x007729d7);
    /* 007729d7: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 007729db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007729dc: mov ecx, esi */ r_ecx = r_esi;
    /* 007729de: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x7729e3u); f_00772358();
    /* 007729e3: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 007729e6: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 007729ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007729eb: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 007729ed: mov ecx, esi */ r_ecx = r_esi;
    /* 007729ef: call dword ptr [ebx + 0x48] */ { u32 t = R32((u32)(r_ebx+0x48u)); r_esp -= 4; W32(r_esp, 0x7729f2u); call_ind(t); }
    /* 007729f2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 007729f4: mov ecx, esi */ r_ecx = r_esi;
    /* 007729f6: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x7729f9u); call_ind(t); }
    /* 007729f9: lea eax, [esp + 0x7c] */ r_eax = (u32)(r_esp+0x7cu);
    /* 007729fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007729fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007729ff: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x772a04u); f_007a9180();
    /* 00772a04: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00772a07: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00772a08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00772a09: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00772a0a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00772a0b: ret 0x18 */ FN_RET(0x007726d0); r_esp += 28; return;
L_00772a0e:; BB(0x00772a0e);
    /* 00772a0e: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00772a11: jmp 0x7729a0 */ goto L_007729a0;
}

void f_00772a14(void) /* sub_772A14 */
{
    FN_ENTER(0x00772a14);
    /* 00772a14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00772a15: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00772a16: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00772a17: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00772a18: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00772a1a: mov ecx, dword ptr [ebx + 0x300] */ r_ecx = R32((u32)(r_ebx+0x300u));
    /* 00772a20: mov edi, dword ptr [ebx + 0x304] */ r_edi = R32((u32)(r_ebx+0x304u));
    /* 00772a26: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00772a2a: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00772a2e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00772a32: mov esi, dword ptr [ebx + 0x308] */ r_esi = R32((u32)(r_ebx+0x308u));
    /* 00772a38: mov dword ptr [ebx + 0x2a4], ebp */ W32((u32)(r_ebx+0x2a4u), r_ebp);
    /* 00772a3e: mov dword ptr [ebx + 0x2a8], edx */ W32((u32)(r_ebx+0x2a8u), r_edx);
    /* 00772a44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00772a45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00772a46: mov dword ptr [ebx + 0x2ac], eax */ W32((u32)(r_ebx+0x2acu), r_eax);
    /* 00772a4c: mov dword ptr [ebx + 0x298], ecx */ W32((u32)(r_ebx+0x298u), r_ecx);
    /* 00772a52: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00772a53: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00772a54: mov dword ptr [ebx + 0x29c], edi */ W32((u32)(r_ebx+0x29cu), r_edi);
    /* 00772a5a: mov dword ptr [ebx + 0x2a0], esi */ W32((u32)(r_ebx+0x2a0u), r_esi);
    /* 00772a60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00772a61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00772a62: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00772a64: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00772a68: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x772a6du); f_00771f5c();
    /* 00772a6d: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00772a71: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 00772a74: fadd dword ptr [ebx + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x30cu));
    /* 00772a7a: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 00772a7d: fadd dword ptr [ebx + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x314u));
    /* 00772a83: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00772a85: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 00772a88: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 00772a8b: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00772a8e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00772a8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00772a90: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x772a95u); f_007a9180();
    /* 00772a95: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00772a98: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00772a99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00772a9a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00772a9b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00772a9c: ret 0x10 */ FN_RET(0x00772a14); r_esp += 20; return;
}

void f_00772aa0(void) /* sub_772AA0 */
{
    FN_ENTER(0x00772aa0);
    /* 00772aa0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00772aa1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00772aa2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00772aa3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00772aa4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00772aa5: mov edi, ecx */ r_edi = r_ecx;
    /* 00772aa7: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 00772aaa: lea edx, [edi + 0x2a4] */ r_edx = (u32)(r_edi+0x2a4u);
    /* 00772ab0: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00772ab4: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00772ab8: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00772abc: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00772abf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00772ac0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00772ac1: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x772ac6u); f_007a9180();
    /* 00772ac6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00772ac9: fcomp dword ptr [0x9782e0] */ fx_compare(ST(0), R_F32((u32)(0x9782e0u))); FPOP();
    /* 00772acf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00772ad1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00772ad2: jb 0x772ae1 */ if (fC) goto L_00772ae1;
L_00772ad4:; BB(0x00772ad4);
    /* 00772ad4: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00772ad6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00772ad8: mov ecx, edi */ r_ecx = r_edi;
    /* 00772ada: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x772addu); call_ind(t); }
    /* 00772add: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00772adf: je 0x772b15 */ if (fZ) goto L_00772b15;
L_00772ae1:; BB(0x00772ae1);
    /* 00772ae1: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00772ae4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00772ae5: mov ecx, edi */ r_ecx = r_edi;
    /* 00772ae7: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00772aeb: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00772aef: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00772af3: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x772af8u); f_00771c8c();
    /* 00772af8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00772afa: je 0x772b15 */ if (fZ) goto L_00772b15;
L_00772afc:; BB(0x00772afc);
    /* 00772afc: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00772b02: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00772b08: mov ecx, edi */ r_ecx = r_edi;
    /* 00772b0a: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00772b10: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x772b15u); f_00771f1c();
L_00772b15:; BB(0x00772b15);
    /* 00772b15: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00772b16: mov ecx, edi */ r_ecx = r_edi;
    /* 00772b18: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x772b1du); f_00772358();
    /* 00772b1d: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00772b20: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00772b21: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00772b23: mov ecx, edi */ r_ecx = r_edi;
    /* 00772b25: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x772b28u); call_ind(t); }
    /* 00772b28: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00772b2a: mov ecx, edi */ r_ecx = r_edi;
    /* 00772b2c: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x772b2fu); call_ind(t); }
    /* 00772b2f: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00772b33: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00772b34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00772b35: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x772b3au); f_007a9180();
    /* 00772b3a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00772b3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00772b3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00772b3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00772b40: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00772b41: ret 0x18 */ FN_RET(0x00772aa0); r_esp += 28; return;
}

void f_00772b44(void) /* sub_772B44 */
{
    FN_ENTER(0x00772b44);
    /* 00772b44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00772b45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00772b46: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00772b49: mov edi, ecx */ r_edi = r_ecx;
    /* 00772b4b: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00772b4f: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00772b52: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 00772b55: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00772b58: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00772b5b: mov ecx, edi */ r_ecx = r_edi;
    /* 00772b5d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00772b61: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00772b65: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00772b68: lea eax, [edi + 0x250] */ r_eax = (u32)(r_edi+0x250u);
    /* 00772b6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00772b6f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00772b70: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x772b75u); f_007b4c58();
    /* 00772b75: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00772b77: je 0x772b8c */ if (fZ) goto L_00772b8c;
L_00772b79:; BB(0x00772b79);
    /* 00772b79: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00772b7c: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 00772b7e: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00772b82: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00772b85: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00772b89: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
L_00772b8c:; BB(0x00772b8c);
    /* 00772b8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00772b8e: je 0x772bf2 */ if (fZ) goto L_00772bf2;
L_00772b90:; BB(0x00772b90);
    /* 00772b90: fld dword ptr [0x9782d0] */ FPUSH(R_F32((u32)(0x9782d0u)));
    /* 00772b96: fadd dword ptr [edi + 0x310] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x310u));
    /* 00772b9c: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00772ba0: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 00772ba4: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00772ba7: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00772ba9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00772bab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00772bad: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00772bae: ja 0x772bd4 */ if ((!fC&&!fZ)) goto L_00772bd4;
L_00772bb0:; BB(0x00772bb0);
    /* 00772bb0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00772bb2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00772bb4: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00772bb7: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 00772bba: or eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00772bbf: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00772bc2: mov dword ptr [edi + 0x310], 0 */ W32((u32)(r_edi+0x310u), 0x0u);
    /* 00772bcc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00772bcf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00772bd0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00772bd1: ret 8 */ FN_RET(0x00772b44); r_esp += 12; return;
L_00772bd4:; BB(0x00772bd4);
    /* 00772bd4: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00772bd6: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00772bd9: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 00772bdc: fstp dword ptr [edi + 0x310] */ W_F32((u32)(r_edi+0x310u), ST(0)); FPOP();
    /* 00772be2: and eax, 0xff7fffff */ {  u32 a = r_eax; u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00772be7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00772bea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00772bed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00772bee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00772bef: ret 8 */ FN_RET(0x00772b44); r_esp += 12; return;
L_00772bf2:; BB(0x00772bf2);
    /* 00772bf2: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00772bf5: and eax, 0xff7fffff */ {  u32 a = r_eax; u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00772bfa: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00772bfd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00772c00: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00772c01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00772c02: ret 8 */ FN_RET(0x00772b44); r_esp += 12; return;
}

void f_00772c00(void)
{
    FN_ENTER(0x00772c00);
    /* 00772c00: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00772c01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00772c02: ret 8 */ FN_RET(0x00772c00); r_esp += 12; return;
}

void f_00772c08(void) /* sub_772C08 */
{
    FN_ENTER(0x00772c08);
    /* 00772c08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00772c09: mov ebx, esp */ r_ebx = r_esp;
    /* 00772c0b: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00772c0e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00772c0f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00772c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00772c11: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00772c14: mov edi, ecx */ r_edi = r_ecx;
    /* 00772c16: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 00772c19: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 00772c1e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00772c20: je 0x772d95 */ if (fZ) goto L_00772d95;
L_00772c26:; BB(0x00772c26);
    /* 00772c26: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 00772c2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00772c2e: je 0x772da9 */ if (fZ) goto L_00772da9;
L_00772c34:; BB(0x00772c34);
    /* 00772c34: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x772c39u); f_0082d7b0();
    /* 00772c39: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00772c3b: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x772c40u); f_00830cd8();
    /* 00772c40: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00772c43: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00772c46: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 00772c49: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00772c4c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00772c4e: fchs  */ ST(0) = -ST(0);
    /* 00772c50: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00772c53: fchs  */ ST(0) = -ST(0);
    /* 00772c55: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00772c59: fchs  */ ST(0) = -ST(0);
    /* 00772c5b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00772c5f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00772c61: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x772c66u); f_00830b74();
    /* 00772c66: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00772c69: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x772c6eu); f_0082d838();
    /* 00772c6e: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00772c71: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00772c73: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x772c78u); f_0082d8bc();
    /* 00772c78: mov edx, dword ptr [edi + 0xa8] */ r_edx = R32((u32)(r_edi+0xa8u));
    /* 00772c7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00772c80: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00772c82: jle 0x772d90 */ if ((fZ||fS!=fO)) goto L_00772d90;
L_00772c88:; BB(0x00772c88);
    /* 00772c88: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00772c8c: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00772c8f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00772c91: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00772c93: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00772c95: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00772c97: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00772c99: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00772c9b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00772c9d: mov ebp, eax */ r_ebp = r_eax;
    /* 00772c9f: mov esi, ecx */ r_esi = r_ecx;
L_00772ca1:; BB(0x00772ca1);
    /* 00772ca1: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 00772ca7: mov ecx, dword ptr [esi + eax + 0x18] */ r_ecx = R32((u32)(r_esi+r_eax+0x18u));
    /* 00772cab: test ecx, 0x2000000 */ {  u32 a = r_ecx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00772cb1: jne 0x772d7e */ if (!fZ) goto L_00772d7e;
L_00772cb7:; BB(0x00772cb7);
    /* 00772cb7: mov edx, dword ptr [esi + eax] */ r_edx = R32((u32)(r_esi+r_eax));
    /* 00772cba: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00772cbd: mov edx, dword ptr [esi + eax + 4] */ r_edx = R32((u32)(r_esi+r_eax+0x4u));
    /* 00772cc1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00772cc3: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00772cc7: mov edx, dword ptr [esi + eax + 8] */ r_edx = R32((u32)(r_esi+r_eax+0x8u));
    /* 00772ccb: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00772ccf: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00772cd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00772cd3: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00772cd7: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x772cdcu); f_00830aa0();
    /* 00772cdc: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00772cdf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00772ce2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00772ce4: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00772ce8: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00772cec: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00772cee: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00772cf0: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00772cf3: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 00772cf9: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00772cff: fld dword ptr [esi + edx + 0xc] */ FPUSH(R_F32((u32)(r_esi+r_edx+0xcu)));
    /* 00772d03: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 00772d06: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00772d08: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00772d0a: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00772d0e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00772d10: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00772d14: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00772d16: fmul qword ptr [0x977fc0] */ ST(0) = ST(0) * R_F64((u32)(0x977fc0u));
    /* 00772d1c: fdiv qword ptr [0x977fb8] */ ST(0) = ST(0) / R_F64((u32)(0x977fb8u));
    /* 00772d22: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00772d26: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00772d2b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00772d30: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00772d34: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00772d38: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00772d3c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00772d40: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00772d44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00772d45: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00772d48: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00772d4b: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x772d50u); f_007a9018();
    /* 00772d50: mov edx, eax */ r_edx = r_eax;
    /* 00772d52: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00772d55: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00772d59: fcomp dword ptr [esp + 0x2c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x2cu))); FPOP();
    /* 00772d5d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00772d5f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00772d60: jb 0x772d6a */ if (fC) goto L_00772d6a;
L_00772d62:; BB(0x00772d62);
    /* 00772d62: mov edx, dword ptr [edi + 0xa8] */ r_edx = R32((u32)(r_edi+0xa8u));
    /* 00772d68: jmp 0x772d7e */ goto L_00772d7e;
L_00772d6a:; BB(0x00772d6a);
    /* 00772d6a: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00772d6d: mov eax, dword ptr [eax + 0x31c] */ r_eax = R32((u32)(r_eax+0x31cu));
    /* 00772d73: cmp edx, dword ptr [eax + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00772d76: jl 0x772da3 */ if ((fS!=fO)) goto L_00772da3;
L_00772d78:; BB(0x00772d78);
    /* 00772d78: mov edx, dword ptr [edi + 0xa8] */ r_edx = R32((u32)(r_edi+0xa8u));
L_00772d7e:; BB(0x00772d7e);
    /* 00772d7e: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00772d81: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00772d84: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00772d86: jl 0x772ca1 */ if ((fS!=fO)) goto L_00772ca1;
L_00772d8c:; BB(0x00772d8c);
    /* 00772d8c: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_00772d90:; BB(0x00772d90);
    /* 00772d90: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x772d95u); f_0082da80();
L_00772d95:; BB(0x00772d95);
    /* 00772d95: mov eax, ebp */ r_eax = r_ebp;
    /* 00772d97: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00772d9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00772d9b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00772d9c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00772d9d: mov esp, ebx */ r_esp = r_ebx;
    /* 00772d9f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00772da0: ret 4 */ FN_RET(0x00772c08); r_esp += 8; return;
L_00772da3:; BB(0x00772da3);
    /* 00772da3: mov eax, ebp */ r_eax = r_ebp;
    /* 00772da5: mov ebp, eax */ r_ebp = r_eax;
    /* 00772da7: jmp 0x772d90 */ goto L_00772d90;
L_00772da9:; BB(0x00772da9);
    /* 00772da9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00772dac: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 00772daf: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00772db2: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 00772db5: mov edi, dword ptr [edi + 0x40] */ r_edi = R32((u32)(r_edi+0x40u));
    /* 00772db8: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00772dbc: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00772dc0: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00772dc3: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x772dc8u); f_0082f9c4();
    /* 00772dc8: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00772dcb: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00772dce: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00772dd0: mov ecx, dword ptr [esi + 0x31c] */ r_ecx = R32((u32)(r_esi+0x31cu));
    /* 00772dd6: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00772dd9: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00772ddb: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00772ddd: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00772de1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00772de3: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00772de7: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00772deb: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00772ded: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00772def: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00772df1: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00772df5: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00772df7: fmul qword ptr [0x977fc0] */ ST(0) = ST(0) * R_F64((u32)(0x977fc0u));
    /* 00772dfd: fdiv qword ptr [0x977fb8] */ ST(0) = ST(0) / R_F64((u32)(0x977fb8u));
    /* 00772e03: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00772e07: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00772e0c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00772e11: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00772e15: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00772e19: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00772e1d: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00772e21: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00772e25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00772e26: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00772e29: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x772e2eu); f_007a9018();
    /* 00772e2e: mov edx, eax */ r_edx = r_eax;
    /* 00772e30: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00772e33: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00772e37: fcomp dword ptr [esp + 0x30] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x30u))); FPOP();
    /* 00772e3b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00772e3d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00772e3e: jb 0x772e4f */ if (fC) goto L_00772e4f;
L_00772e40:; BB(0x00772e40);
    /* 00772e40: mov ecx, dword ptr [esi + 0x31c] */ r_ecx = R32((u32)(r_esi+0x31cu));
    /* 00772e46: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00772e49: jle 0x772d95 */ if ((fZ||fS!=fO)) goto L_00772d95;
L_00772e4f:; BB(0x00772e4f);
    /* 00772e4f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00772e54: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00772e57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00772e58: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00772e59: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00772e5a: mov esp, ebx */ r_esp = r_ebx;
    /* 00772e5c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00772e5d: ret 4 */ FN_RET(0x00772c08); r_esp += 8; return;
}

void f_00772e60(void) /* sub_772E60 */
{
    FN_ENTER(0x00772e60);
    /* 00772e60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00772e61: mov ebx, esp */ r_ebx = r_esp;
    /* 00772e63: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00772e66: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00772e67: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00772e68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00772e69: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00772e6c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00772e6e: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 00772e71: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 00772e76: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00772e78: je 0x772ff5 */ if (fZ) goto L_00772ff5;
L_00772e7e:; BB(0x00772e7e);
    /* 00772e7e: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 00772e84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00772e86: je 0x77302c */ if (fZ) goto L_0077302c;
L_00772e8c:; BB(0x00772e8c);
    /* 00772e8c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x772e91u); f_0082d7b0();
    /* 00772e91: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00772e93: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x772e98u); f_00830cd8();
    /* 00772e98: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 00772e9b: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00772e9e: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 00772ea1: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00772ea4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00772ea6: fchs  */ ST(0) = -ST(0);
    /* 00772ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00772eab: fchs  */ ST(0) = -ST(0);
    /* 00772ead: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00772eb1: fchs  */ ST(0) = -ST(0);
    /* 00772eb3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00772eb7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00772eb9: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x772ebeu); f_00830b74();
    /* 00772ebe: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00772ec1: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x772ec6u); f_0082d838();
    /* 00772ec6: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00772ec9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00772ecb: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x772ed0u); f_0082d8bc();
    /* 00772ed0: mov eax, dword ptr [ebp + 0xa8] */ r_eax = R32((u32)(r_ebp+0xa8u));
    /* 00772ed6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00772ed8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00772eda: jle 0x772feb */ if ((fZ||fS!=fO)) goto L_00772feb;
L_00772ee0:; BB(0x00772ee0);
    /* 00772ee0: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00772ee4: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00772ee7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00772ee9: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00772eeb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00772eed: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00772eef: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00772ef1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00772ef3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00772ef5: mov esi, edx */ r_esi = r_edx;
    /* 00772ef7: mov edi, ecx */ r_edi = r_ecx;
L_00772ef9:; BB(0x00772ef9);
    /* 00772ef9: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 00772eff: mov ecx, dword ptr [edi + edx + 0x18] */ r_ecx = R32((u32)(r_edi+r_edx+0x18u));
    /* 00772f03: test ecx, 0x2000000 */ {  u32 a = r_ecx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00772f09: jne 0x772fd6 */ if (!fZ) goto L_00772fd6;
L_00772f0f:; BB(0x00772f0f);
    /* 00772f0f: mov eax, dword ptr [edi + edx] */ r_eax = R32((u32)(r_edi+r_edx));
    /* 00772f12: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00772f15: mov eax, dword ptr [edi + edx + 4] */ r_eax = R32((u32)(r_edi+r_edx+0x4u));
    /* 00772f19: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00772f1b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00772f1f: mov eax, dword ptr [edi + edx + 8] */ r_eax = R32((u32)(r_edi+r_edx+0x8u));
    /* 00772f23: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00772f27: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00772f2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00772f2b: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00772f2f: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x772f34u); f_00830aa0();
    /* 00772f34: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00772f37: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00772f3a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00772f3c: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00772f40: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00772f44: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00772f46: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00772f48: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00772f4b: mov edx, dword ptr [eax + 0x31c] */ r_edx = R32((u32)(r_eax+0x31cu));
    /* 00772f51: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 00772f57: fld dword ptr [edi + eax + 0xc] */ FPUSH(R_F32((u32)(r_edi+r_eax+0xcu)));
    /* 00772f5b: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 00772f5e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00772f60: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00772f62: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00772f66: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00772f68: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00772f6c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00772f6e: fmul qword ptr [0x977fb0] */ ST(0) = ST(0) * R_F64((u32)(0x977fb0u));
    /* 00772f74: fdiv qword ptr [0x977fa8] */ ST(0) = ST(0) / R_F64((u32)(0x977fa8u));
    /* 00772f7a: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00772f7e: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00772f83: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00772f88: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00772f8c: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00772f90: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00772f94: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00772f98: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00772f9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00772f9d: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00772fa0: push dword ptr [eax + 0x60] */ { u32 v = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00772fa3: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x772fa8u); f_007a9018();
    /* 00772fa8: mov edx, eax */ r_edx = r_eax;
    /* 00772faa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00772fad: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00772fb1: fcomp dword ptr [esp + 0x2c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x2cu))); FPOP();
    /* 00772fb5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00772fb7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00772fb8: jb 0x772fc2 */ if (fC) goto L_00772fc2;
L_00772fba:; BB(0x00772fba);
    /* 00772fba: mov eax, dword ptr [ebp + 0xa8] */ r_eax = R32((u32)(r_ebp+0xa8u));
    /* 00772fc0: jmp 0x772fd6 */ goto L_00772fd6;
L_00772fc2:; BB(0x00772fc2);
    /* 00772fc2: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00772fc5: mov eax, dword ptr [eax + 0x31c] */ r_eax = R32((u32)(r_eax+0x31cu));
    /* 00772fcb: cmp edx, dword ptr [eax + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00772fce: jl 0x773023 */ if ((fS!=fO)) goto L_00773023;
L_00772fd0:; BB(0x00772fd0);
    /* 00772fd0: mov eax, dword ptr [ebp + 0xa8] */ r_eax = R32((u32)(r_ebp+0xa8u));
L_00772fd6:; BB(0x00772fd6);
    /* 00772fd6: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00772fd9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00772fdc: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00772fde: jl 0x772ef9 */ if ((fS!=fO)) goto L_00772ef9;
L_00772fe4:; BB(0x00772fe4);
    /* 00772fe4: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00772fe8: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
L_00772feb:; BB(0x00772feb);
    /* 00772feb: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x772ff0u); f_0082da80();
    /* 00772ff0: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00772ff3: jne 0x772ff5 */ if (!fZ) goto L_00772ff5;
L_00772ff5:; BB(0x00772ff5);
    /* 00772ff5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00772ff7: jl 0x7730dc */ if ((fS!=fO)) goto L_007730dc;
L_00772ffd:; BB(0x00772ffd);
    /* 00772ffd: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00773000: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00773001: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00773004: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00773006: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00773007: call dword ptr [eax + 0x6c] */ { u32 t = R32((u32)(r_eax+0x6cu)); r_esp -= 4; W32(r_esp, 0x77300au); call_ind(t); }
    /* 0077300a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077300c: je 0x7730dc */ if (fZ) goto L_007730dc;
L_00773012:; BB(0x00773012);
    /* 00773012: mov eax, 1 */ r_eax = 0x1u;
    /* 00773017: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077301a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077301b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077301c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077301d: mov esp, ebx */ r_esp = r_ebx;
    /* 0077301f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00773020: ret 8 */ FN_RET(0x00772e60); r_esp += 12; return;
L_00773023:; BB(0x00773023);
    /* 00773023: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 00773026: mov edx, esi */ r_edx = r_esi;
    /* 00773028: mov esi, edx */ r_esi = r_edx;
    /* 0077302a: jmp 0x772feb */ goto L_00772feb;
L_0077302c:; BB(0x0077302c);
    /* 0077302c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0077302f: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00773032: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00773035: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00773038: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0077303b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0077303f: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00773042: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00773046: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x77304bu); f_0082f9c4();
    /* 0077304b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0077304e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00773051: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00773053: mov eax, dword ptr [edi + 0x31c] */ r_eax = R32((u32)(r_edi+0x31cu));
    /* 00773059: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0077305c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0077305e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00773060: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00773064: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00773066: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0077306a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0077306e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00773070: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00773072: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00773074: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00773078: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0077307a: fmul qword ptr [0x977fb0] */ ST(0) = ST(0) * R_F64((u32)(0x977fb0u));
    /* 00773080: fdiv qword ptr [0x977fa8] */ ST(0) = ST(0) / R_F64((u32)(0x977fa8u));
    /* 00773086: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0077308a: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0077308f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00773094: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00773098: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0077309c: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 007730a0: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007730a4: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007730a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007730a9: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 007730ac: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x7730b1u); f_007a9018();
    /* 007730b1: mov edx, eax */ r_edx = r_eax;
    /* 007730b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007730b6: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 007730ba: fcomp dword ptr [esp + 0x30] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x30u))); FPOP();
    /* 007730be: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007730c0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007730c1: jb 0x7730d2 */ if (fC) goto L_007730d2;
L_007730c3:; BB(0x007730c3);
    /* 007730c3: mov eax, dword ptr [edi + 0x31c] */ r_eax = R32((u32)(r_edi+0x31cu));
    /* 007730c9: cmp edx, dword ptr [eax + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007730cc: jle 0x772ff5 */ if ((fZ||fS!=fO)) goto L_00772ff5;
L_007730d2:; BB(0x007730d2);
    /* 007730d2: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 007730d7: jmp 0x772ff5 */ goto L_00772ff5;
L_007730dc:; BB(0x007730dc);
    /* 007730dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007730de: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007730e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007730e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007730e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007730e4: mov esp, ebx */ r_esp = r_ebx;
    /* 007730e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007730e7: ret 8 */ FN_RET(0x00772e60); r_esp += 12; return;
}

