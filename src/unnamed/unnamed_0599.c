#include "protos.h"

void f_005991a4(void) /* sub_5991A4 */
{
    FN_ENTER(0x005991a4);
    /* 005991a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005991a5: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005991a8: mov edi, ecx */ r_edi = r_ecx;
    /* 005991aa: mov ecx, edi */ r_ecx = r_edi;
    /* 005991ac: call 0x599530 */ r_esp -= 4; W32(r_esp, 0x5991b1u); f_00599530();
    /* 005991b1: mov eax, dword ptr [edi + 0x380] */ r_eax = R32((u32)(r_edi+0x380u));
    /* 005991b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005991b9: je 0x599291 */ if (fZ) goto L_00599291;
L_005991bf:; BB(0x005991bf);
    /* 005991bf: movzx eax, byte ptr [0xa745b4] */ r_eax = (u32)R8((u32)(0xa745b4u));
    /* 005991c6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005991c8: jne 0x5991e4 */ if (!fZ) goto L_005991e4;
L_005991ca:; BB(0x005991ca);
    /* 005991ca: fld dword ptr [0x929364] */ FPUSH(R_F32((u32)(0x929364u)));
    /* 005991d0: mov dword ptr [0xa745b8], 0x40e00000 */ W32((u32)(0xa745b8u), 0x40e00000u);
    /* 005991da: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005991dd: mov byte ptr [0xa745b4], al */ W8((u32)(0xa745b4u), (u8)r_eax);
    /* 005991e2: jmp 0x5991ea */ goto L_005991ea;
L_005991e4:; BB(0x005991e4);
    /* 005991e4: fld dword ptr [0xa745b8] */ FPUSH(R_F32((u32)(0xa745b8u)));
L_005991ea:; BB(0x005991ea);
    /* 005991ea: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005991ec: jne 0x599202 */ if (!fZ) goto L_00599202;
L_005991ee:; BB(0x005991ee);
    /* 005991ee: mov dword ptr [0xa745bc], 0x42400000 */ W32((u32)(0xa745bcu), 0x42400000u);
    /* 005991f8: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005991fd: mov byte ptr [0xa745b4], al */ W8((u32)(0xa745b4u), (u8)r_eax);
L_00599202:; BB(0x00599202);
    /* 00599202: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 00599208: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0059920a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059920c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059920d: jb 0x599266 */ if (fC) goto L_00599266;
L_0059920f:; BB(0x0059920f);
    /* 0059920f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00599211: fld dword ptr [0x929360] */ FPUSH(R_F32((u32)(0x929360u)));
    /* 00599217: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00599219: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059921b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059921c: ja 0x5993c2 */ if ((!fC&&!fZ)) goto L_005993c2;
L_00599222:; BB(0x00599222);
    /* 00599222: fld dword ptr [0xa745bc] */ FPUSH(R_F32((u32)(0xa745bcu)));
    /* 00599228: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0059922a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059922c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059922d: ja 0x599235 */ if ((!fC&&!fZ)) goto L_00599235;
L_0059922f:; BB(0x0059922f);
    /* 0059922f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00599231: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00599233: jmp 0x599297 */ goto L_00599297;
L_00599235:; BB(0x00599235);
    /* 00599235: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00599237: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 00599239: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0059923b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0059923d: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 00599243: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599246: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00599249: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0059924c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00599250: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00599253: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00599257: mov ecx, edi */ r_ecx = r_edi;
    /* 00599259: call 0x5993cc */ r_esp -= 4; W32(r_esp, 0x59925eu); f_005993cc();
    /* 0059925e: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 00599264: jmp 0x599297 */ goto L_00599297;
L_00599266:; BB(0x00599266);
    /* 00599266: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00599268: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 0059926e: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599271: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00599274: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00599277: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0059927b: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0059927e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00599282: mov ecx, edi */ r_ecx = r_edi;
    /* 00599284: call 0x5993cc */ r_esp -= 4; W32(r_esp, 0x599289u); f_005993cc();
    /* 00599289: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 0059928f: jmp 0x599297 */ goto L_00599297;
L_00599291:; BB(0x00599291);
    /* 00599291: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
L_00599297:; BB(0x00599297);
    /* 00599297: fcom dword ptr [0x92935c] */ fx_compare(ST(0), R_F32((u32)(0x92935cu))); 
    /* 0059929d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059929f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005992a0: jb 0x5993bb */ if (fC) goto L_005993bb;
L_005992a6:; BB(0x005992a6);
    /* 005992a6: fcomp dword ptr [0x929358] */ fx_compare(ST(0), R_F32((u32)(0x929358u))); FPOP();
    /* 005992ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005992ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005992af: jae 0x5993bd */ if (!fC) goto L_005993bd;
L_005992b5:; BB(0x005992b5);
    /* 005992b5: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 005992b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005992bb: mov ebx, edi */ r_ebx = r_edi;
    /* 005992bd: mov edi, eax */ r_edi = r_eax;
L_005992bf:; BB(0x005992bf);
    /* 005992bf: movzx edx, byte ptr [0xa74604] */ r_edx = (u32)R8((u32)(0xa74604u));
    /* 005992c6: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005992c9: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005992cc: jne 0x5992ec */ if (!fZ) goto L_005992ec;
L_005992ce:; BB(0x005992ce);
    /* 005992ce: fld dword ptr [0x929494] */ FPUSH(R_F32((u32)(0x929494u)));
    /* 005992d4: mov dword ptr [0xa74600], 0x41200000 */ W32((u32)(0xa74600u), 0x41200000u);
    /* 005992de: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005992e4: mov byte ptr [0xa74604], dl */ W8((u32)(0xa74604u), (u8)r_edx);
    /* 005992ea: jmp 0x5992f2 */ goto L_005992f2;
L_005992ec:; BB(0x005992ec);
    /* 005992ec: fld dword ptr [0xa74600] */ FPUSH(R_F32((u32)(0xa74600u)));
L_005992f2:; BB(0x005992f2);
    /* 005992f2: fadd dword ptr [edi + ebx + 0x39c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_ebx+0x39cu));
    /* 005992f9: mov edx, dword ptr [edi + ebx + 0x398] */ r_edx = R32((u32)(r_edi+r_ebx+0x398u));
    /* 00599300: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00599304: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00599306: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00599309: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0059930c: mov edx, dword ptr [edi + ebx + 0x3a0] */ r_edx = R32((u32)(r_edi+r_ebx+0x3a0u));
    /* 00599313: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00599317: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0059931b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059931c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059931d: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x599322u); f_007b4c58();
    /* 00599322: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599324: je 0x5993ac */ if (fZ) goto L_005993ac;
L_0059932a:; BB(0x0059932a);
    /* 0059932a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x59932fu); f_0082d7b0();
    /* 0059932f: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599332: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00599336: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0059933a: fadd dword ptr [0x929354] */ ST(0) = ST(0) + R_F32((u32)(0x929354u));
    /* 00599340: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00599344: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00599347: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00599349: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0059934d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00599351: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x599356u); f_00830b74();
    /* 00599356: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0059935a: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0059935e: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00599362: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599363: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599364: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599365: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x59936au); f_007a8d98();
    /* 0059936a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059936d: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00599371: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00599373: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x599378u); f_00830c04();
    /* 00599378: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0059937c: add edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00599382: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00599384: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x599389u); f_0082e9e4();
    /* 00599389: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059938e: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00599393: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00599398: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059939a: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x59939fu); f_0082fa0c();
    /* 0059939f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005993a1: call 0x52d46c */ r_esp -= 4; W32(r_esp, 0x5993a6u); f_0052d46c();
    /* 005993a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005993a7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5993acu); f_0082da80();
L_005993ac:; BB(0x005993ac);
    /* 005993ac: cmp edi, 0x30 */ {  u32 a = r_edi; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005993af: jl 0x5992bf */ if ((fS!=fO)) goto L_005992bf;
L_005993b5:; BB(0x005993b5);
    /* 005993b5: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 005993b9: jmp 0x5993bd */ goto L_005993bd;
L_005993bb:; BB(0x005993bb);
    /* 005993bb: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005993bd:; BB(0x005993bd);
    /* 005993bd: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005993c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005993c1: ret  */ FN_RET(0x005991a4); r_esp += 4; return;
L_005993c2:; BB(0x005993c2);
    /* 005993c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005993c4: jmp 0x599297 */ goto L_00599297;
}

void f_005993cc(void) /* sub_5993CC */
{
    FN_ENTER(0x005993cc);
    /* 005993cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005993cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005993ce: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005993d1: mov edi, ecx */ r_edi = r_ecx;
    /* 005993d3: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 005993d7: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 005993db: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 005993df: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005993e1: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005993e5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005993e8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005993ec: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005993ef: mov edx, esi */ r_edx = r_esi;
    /* 005993f1: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005993f5: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5993fau); f_0082f9c4();
    /* 005993fa: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 005993fe: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x599403u); f_0083173c();
    /* 00599403: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00599407: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x59940cu); f_0082d7b0();
    /* 0059940c: fld dword ptr [0x929418] */ FPUSH(R_F32((u32)(0x929418u)));
    /* 00599412: fadd dword ptr [esp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x44u));
    /* 00599416: fmul dword ptr [0x92941c] */ ST(0) = ST(0) * R_F32((u32)(0x92941cu));
    /* 0059941c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0059941e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00599422: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00599426: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00599429: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059942b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0059942d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059942f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00599431: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00599433: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 00599437: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0059943b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059943d: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 00599441: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00599444: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00599448: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0059944c: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00599450: fadd dword ptr [0x929374] */ ST(0) = ST(0) + R_F32((u32)(0x929374u));
    /* 00599456: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00599458: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0059945c: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 00599460: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00599462: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00599466: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0059946a: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0059946e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x599473u); f_0082d838();
    /* 00599473: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00599477: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0059947b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0059947d: fmul qword ptr [0x929390] */ ST(0) = ST(0) * R_F64((u32)(0x929390u));
    /* 00599483: fdiv qword ptr [0x929388] */ ST(0) = ST(0) / R_F64((u32)(0x929388u));
    /* 00599489: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 0059948d: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 00599492: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00599497: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0059949b: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0059949f: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005994a3: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 005994a7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005994a9: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 005994ad: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5994b2u); f_0082d8bc();
    /* 005994b2: fld dword ptr [0x929418] */ FPUSH(R_F32((u32)(0x929418u)));
    /* 005994b8: fsub dword ptr [esp + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x44u));
    /* 005994bc: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 005994c0: fdiv dword ptr [0x929370] */ ST(0) = ST(0) / R_F32((u32)(0x929370u));
    /* 005994c6: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005994c9: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005994cd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005994cf: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 005994d6: mov dword ptr [esp + 4], 0x3f000000 */ W32((u32)(r_esp+0x4u), 0x3f000000u);
    /* 005994de: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5994e3u); f_0082fa0c();
    /* 005994e3: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 005994e6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5994ebu); f_00829cc8();
    /* 005994eb: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 005994ef: fmul dword ptr [0x929414] */ ST(0) = ST(0) * R_F32((u32)(0x929414u));
    /* 005994f5: fadd dword ptr [0x92936c] */ ST(0) = ST(0) + R_F32((u32)(0x92936cu));
    /* 005994fb: call 0x596358 */ r_esp -= 4; W32(r_esp, 0x599500u); f_00596358();
    /* 00599500: mov esi, dword ptr [edi + 0xc0] */ r_esi = R32((u32)(r_edi+0xc0u));
    /* 00599506: mov dword ptr [edi + 0xc0], 0x40e00000 */ W32((u32)(r_edi+0xc0u), 0x40e00000u);
    /* 00599510: mov ecx, edi */ r_ecx = r_edi;
    /* 00599512: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x599517u); f_007aa668();
    /* 00599517: mov dword ptr [edi + 0xc0], esi */ W32((u32)(r_edi+0xc0u), r_esi);
    /* 0059951d: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x599522u); f_005963d0();
    /* 00599522: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x599527u); f_0082da80();
    /* 00599527: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059952a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059952b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059952c: ret 0xc */ FN_RET(0x005993cc); r_esp += 16; return;
}

void f_00599530(void) /* sub_599530 */
{
    FN_ENTER(0x00599530);
    /* 00599530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00599531: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00599532: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00599534: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x599539u); f_0082d7b0();
    /* 00599539: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0059953c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x599541u); f_0082d838();
    /* 00599541: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00599544: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00599546: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x59954bu); f_0082d8bc();
    /* 0059954b: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0059954e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x599553u); f_00829cc8();
    /* 00599553: mov eax, dword ptr [ebp + 0x380] */ r_eax = R32((u32)(r_ebp+0x380u));
    /* 00599559: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059955b: jne 0x5995d3 */ if (!fZ) goto L_005995d3;
L_0059955d:; BB(0x0059955d);
    /* 0059955d: fld dword ptr [ebp + 0x394] */ FPUSH(R_F32((u32)(r_ebp+0x394u)));
    /* 00599563: call 0x596358 */ r_esp -= 4; W32(r_esp, 0x599568u); f_00596358();
    /* 00599568: lea edx, [ebp + 0x388] */ r_edx = (u32)(r_ebp+0x388u);
    /* 0059956e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00599570: call 0x83c0a0 */ r_esp -= 4; W32(r_esp, 0x599575u); f_0083c0a0();
    /* 00599575: mov dword ptr [0xa74650], 0 */ W32((u32)(0xa74650u), 0x0u);
    /* 0059957f: mov ecx, 0x5996b4 */ r_ecx = 0x5996b4u;
    /* 00599584: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x599589u); f_0082fac4();
    /* 00599589: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059958b: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x599590u); f_007aa668();
    /* 00599590: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00599592: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x599597u); f_0082fac4();
    /* 00599597: lea eax, [ebp + 0x398] */ r_eax = (u32)(r_ebp+0x398u);
    /* 0059959d: call 0x59962c */ r_esp -= 4; W32(r_esp, 0x5995a2u); f_0059962c();
    /* 005995a2: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 005995a8: mov edx, dword ptr [ebp + 0x39c] */ r_edx = R32((u32)(r_ebp+0x39cu));
    /* 005995ae: mov dword ptr [ebp + 0x300], eax */ W32((u32)(r_ebp+0x300u), r_eax);
    /* 005995b4: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 005995ba: mov dword ptr [ebp + 0x304], edx */ W32((u32)(r_ebp+0x304u), r_edx);
    /* 005995c0: mov dword ptr [ebp + 0x308], eax */ W32((u32)(r_ebp+0x308u), r_eax);
    /* 005995c6: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x5995cbu); f_005963d0();
L_005995cb:; BB(0x005995cb);
    /* 005995cb: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5995d0u); f_0082da80();
    /* 005995d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005995d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005995d2: ret  */ FN_RET(0x00599530); r_esp += 4; return;
L_005995d3:; BB(0x005995d3);
    /* 005995d3: mov dword ptr [0xa74650], 0 */ W32((u32)(0xa74650u), 0x0u);
    /* 005995dd: mov ecx, 0x5996b4 */ r_ecx = 0x5996b4u;
    /* 005995e2: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5995e7u); f_0082fac4();
    /* 005995e7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005995e9: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5995eeu); f_007aa668();
    /* 005995ee: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005995f0: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5995f5u); f_0082fac4();
    /* 005995f5: lea eax, [ebp + 0x398] */ r_eax = (u32)(r_ebp+0x398u);
    /* 005995fb: call 0x59962c */ r_esp -= 4; W32(r_esp, 0x599600u); f_0059962c();
    /* 00599600: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 00599606: mov edx, dword ptr [ebp + 0x39c] */ r_edx = R32((u32)(r_ebp+0x39cu));
    /* 0059960c: mov dword ptr [ebp + 0x300], eax */ W32((u32)(r_ebp+0x300u), r_eax);
    /* 00599612: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 00599618: mov dword ptr [ebp + 0x304], edx */ W32((u32)(r_ebp+0x304u), r_edx);
    /* 0059961e: mov dword ptr [ebp + 0x308], eax */ W32((u32)(r_ebp+0x308u), r_eax);
    /* 00599624: jmp 0x5995cb */ goto L_005995cb;
}

void f_0059962c(void) /* sub_59962C */
{
    FN_ENTER(0x0059962c);
    /* 0059962c: mov edx, dword ptr [0xa74614] */ r_edx = R32((u32)(0xa74614u));
    /* 00599632: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00599634: mov ecx, dword ptr [0xa74618] */ r_ecx = R32((u32)(0xa74618u));
    /* 0059963a: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0059963d: mov edx, dword ptr [0xa7461c] */ r_edx = R32((u32)(0xa7461cu));
    /* 00599643: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00599646: mov edx, dword ptr [0xa74620] */ r_edx = R32((u32)(0xa74620u));
    /* 0059964c: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0059964f: mov edx, dword ptr [0xa74624] */ r_edx = R32((u32)(0xa74624u));
    /* 00599655: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 00599658: mov edx, dword ptr [0xa74628] */ r_edx = R32((u32)(0xa74628u));
    /* 0059965e: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00599661: mov edx, dword ptr [0xa7462c] */ r_edx = R32((u32)(0xa7462cu));
    /* 00599667: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0059966a: mov edx, dword ptr [0xa74630] */ r_edx = R32((u32)(0xa74630u));
    /* 00599670: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00599673: mov edx, dword ptr [0xa74634] */ r_edx = R32((u32)(0xa74634u));
    /* 00599679: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0059967c: mov edx, dword ptr [0xa74638] */ r_edx = R32((u32)(0xa74638u));
    /* 00599682: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00599685: mov edx, dword ptr [0xa7463c] */ r_edx = R32((u32)(0xa7463cu));
    /* 0059968b: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 0059968e: mov edx, dword ptr [0xa74640] */ r_edx = R32((u32)(0xa74640u));
    /* 00599694: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 00599697: mov edx, dword ptr [0xa74644] */ r_edx = R32((u32)(0xa74644u));
    /* 0059969d: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 005996a0: mov edx, dword ptr [0xa74648] */ r_edx = R32((u32)(0xa74648u));
    /* 005996a6: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 005996a9: mov edx, dword ptr [0xa7464c] */ r_edx = R32((u32)(0xa7464cu));
    /* 005996af: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 005996b2: ret  */ FN_RET(0x0059962c); r_esp += 4; return;
}

void f_005996b4(void)
{
    FN_ENTER(0x005996b4);
    /* 005996b4: mov eax, dword ptr [0xa74650] */ r_eax = R32((u32)(0xa74650u));
    /* 005996b9: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005996bc: je 0x5996f6 */ if (fZ) goto L_005996f6;
L_005996be:; BB(0x005996be);
    /* 005996be: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005996c1: jl 0x5996c8 */ if ((fS!=fO)) goto L_005996c8;
L_005996c3:; BB(0x005996c3);
    /* 005996c3: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005996c6: jl 0x5996d1 */ if ((fS!=fO)) goto L_005996d1;
L_005996c8:; BB(0x005996c8);
    /* 005996c8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005996cb: mov dword ptr [0xa74650], eax */ W32((u32)(0xa74650u), r_eax);
    /* 005996d0: ret  */ FN_RET(0x005996b4); r_esp += 4; return;
L_005996d1:; BB(0x005996d1);
    /* 005996d1: lea eax, [eax + eax - 8] */ r_eax = (u32)(r_eax+r_eax+0xfffffff8u);
    /* 005996d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005996d7: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005996da: lea ecx, [eax + edx + 0xa74620] */ r_ecx = (u32)(r_eax+r_edx+0xa74620u);
    /* 005996e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005996e2: push 0xa745cc */ { u32 v = 0xa745ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005996e7: call 0x4d4574 */ r_esp -= 4; W32(r_esp, 0x5996ecu); f_004d4574();
    /* 005996ec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005996ef: mov eax, dword ptr [0xa74650] */ r_eax = R32((u32)(0xa74650u));
    /* 005996f4: jmp 0x5996c8 */ goto L_005996c8;
L_005996f6:; BB(0x005996f6);
    /* 005996f6: push 0xa74614 */ { u32 v = 0xa74614u; r_esp -= 4; W32(r_esp, v); }
    /* 005996fb: push 0xa745c0 */ { u32 v = 0xa745c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599700: call 0x4d4574 */ r_esp -= 4; W32(r_esp, 0x599705u); f_004d4574();
    /* 00599705: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599708: mov eax, dword ptr [0xa74650] */ r_eax = R32((u32)(0xa74650u));
    /* 0059970d: jmp 0x5996be */ goto L_005996be;
}

void f_00599710(void) /* sub_599710 */
{
    FN_ENTER(0x00599710);
    /* 00599710: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00599713: mov dword ptr [0xa74608], 0x3f800000 */ W32((u32)(0xa74608u), 0x3f800000u);
    /* 0059971d: mov dword ptr [0xa7460c], 0x41000000 */ W32((u32)(0xa7460cu), 0x41000000u);
    /* 00599727: mov dword ptr [0xa74610], 0x3fc00000 */ W32((u32)(0xa74610u), 0x3fc00000u);
    /* 00599731: mov dword ptr [0xa745d8], 0x43fa0000 */ W32((u32)(0xa745d8u), 0x43fa0000u);
    /* 0059973b: mov dword ptr [0xa745dc], 0x43480000 */ W32((u32)(0xa745dcu), 0x43480000u);
    /* 00599745: mov dword ptr [0xa745e0], 0x42480000 */ W32((u32)(0xa745e0u), 0x42480000u);
    /* 0059974f: mov dword ptr [0xa745e4], 0x41700000 */ W32((u32)(0xa745e4u), 0x41700000u);
    /* 00599759: mov dword ptr [0x9bfd6c], 0x41700000 */ W32((u32)(0x9bfd6cu), 0x41700000u);
    /* 00599763: mov dword ptr [0x9bfd74], 0x40f00000 */ W32((u32)(0x9bfd74u), 0x40f00000u);
    /* 0059976d: mov dword ptr [0xa745fc], 0x43480000 */ W32((u32)(0xa745fcu), 0x43480000u);
    /* 00599777: fld dword ptr [0xa745fc] */ FPUSH(R_F32((u32)(0xa745fcu)));
    /* 0059977d: fdiv dword ptr [0x929510] */ ST(0) = ST(0) / R_F32((u32)(0x929510u));
    /* 00599783: fadd dword ptr [0x9293f0] */ ST(0) = ST(0) + R_F32((u32)(0x9293f0u));
    /* 00599789: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0059978c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00599790: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00599795: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00599799: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0059979d: fistp dword ptr [0xa745e8] */ W32((u32)(0xa745e8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005997a3: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005997a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005997a9: ret  */ FN_RET(0x00599710); r_esp += 4; return;
}

void f_005997ac(void) /* sub_5997AC */
{
    FN_ENTER(0x005997ac);
    /* 005997ac: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 005997af: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005997b2: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
    /* 005997b8: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 005997bb: mov dword ptr [ecx + 0x380], edx */ W32((u32)(r_ecx+0x380u), r_edx);
    /* 005997c1: mov dword ptr [ecx + 0x384], eax */ W32((u32)(r_ecx+0x384u), r_eax);
    /* 005997c7: ret  */ FN_RET(0x005997ac); r_esp += 4; return;
}

void f_005997c8(void) /* sub_5997C8 */
{
    FN_ENTER(0x005997c8);
    /* 005997c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005997c9: mov ebp, esp */ r_ebp = r_esp;
    /* 005997cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005997cd: push 0x8d84f0 */ { u32 v = 0x8d84f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005997d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005997d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005997d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005997e0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005997e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005997e6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005997e9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005997ec: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005997ef: movsx edx, word ptr [ecx + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2cu));
    /* 005997f3: mov eax, dword ptr [0xa74654] */ r_eax = R32((u32)(0xa74654u));
    /* 005997f8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005997fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005997fc: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
    /* 00599802: call 0x813038 */ r_esp -= 4; W32(r_esp, 0x599807u); f_00813038();
    /* 00599807: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00599808: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059980a: je 0x599820 */ if (fZ) goto L_00599820;
L_0059980c:; BB(0x0059980c);
    /* 0059980c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0059980f: mov dword ptr [eax + 0x3fc], 1 */ W32((u32)(r_eax+0x3fcu), 0x1u);
    /* 00599819: mov edx, 1 */ r_edx = 0x1u;
    /* 0059981e: jmp 0x59982f */ goto L_0059982f;
L_00599820:; BB(0x00599820);
    /* 00599820: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00599823: mov dword ptr [eax + 0x3fc], 0 */ W32((u32)(r_eax+0x3fcu), 0x0u);
    /* 0059982d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0059982f:; BB(0x0059982f);
    /* 0059982f: mov ebx, dword ptr [edx*4 + 0x9bfbf0] */ r_ebx = R32((u32)(r_edx*4+0x9bfbf0u));
    /* 00599836: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00599837: mov ecx, dword ptr [eax + 0x388] */ r_ecx = R32((u32)(r_eax+0x388u));
    /* 0059983d: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x599842u); f_005b8624();
    /* 00599842: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00599845: mov ecx, dword ptr [edx + 0x388] */ r_ecx = R32((u32)(r_edx+0x388u));
    /* 0059984b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059984c: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0059984f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x599854u); f_005b8610();
    /* 00599854: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00599857: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0059985a: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 0059985d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059985f: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00599862: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00599865: push 0x9bfd68 */ { u32 v = 0x9bfd68u; r_esp -= 4; W32(r_esp, v); }
    /* 0059986a: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 0059986d: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 00599870: mov dword ptr [ecx + 0x7c], ebx */ W32((u32)(r_ecx+0x7cu), r_ebx);
    /* 00599873: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 00599876: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 00599879: mov dword ptr [ecx + 0x58], ebx */ W32((u32)(r_ecx+0x58u), r_ebx);
    /* 0059987c: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 0059987f: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 00599882: mov dword ptr [ecx + 0x4c], ebx */ W32((u32)(r_ecx+0x4cu), r_ebx);
    /* 00599885: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x59988au); f_007b9a88();
    /* 0059988a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059988d: mov dword ptr [ecx + 0xd8], 0x9bfc80 */ W32((u32)(r_ecx+0xd8u), 0x9bfc80u);
    /* 00599897: mov dword ptr [ecx + 0x394], eax */ W32((u32)(r_ecx+0x394u), r_eax);
    /* 0059989d: mov eax, dword ptr [ecx + 0x388] */ r_eax = R32((u32)(r_ecx+0x388u));
    /* 005998a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005998a5: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005998ab: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 005998b1: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x5998b6u); f_007aa4c8();
    /* 005998b6: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005998b9: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 005998bc: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 005998bf: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 005998c2: mov edi, dword ptr [esi + 0x3fc] */ r_edi = R32((u32)(r_esi+0x3fcu));
    /* 005998c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005998ca: mov dword ptr [esi + 0x314], 0 */ W32((u32)(r_esi+0x314u), 0x0u);
    /* 005998d4: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005998db: mov dword ptr [esi + 0x300], edx */ W32((u32)(r_esi+0x300u), r_edx);
    /* 005998e1: mov dword ptr [esi + 0x304], ecx */ W32((u32)(r_esi+0x304u), r_ecx);
    /* 005998e7: mov dword ptr [esi + 0x310], 0 */ W32((u32)(r_esi+0x310u), 0x0u);
    /* 005998f1: mov dword ptr [esi + 0x308], ebx */ W32((u32)(r_esi+0x308u), r_ebx);
    /* 005998f7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005998f9: mov dword ptr [esi + 0x30c], 0 */ W32((u32)(r_esi+0x30cu), 0x0u);
    /* 00599903: jne 0x59992e */ if (!fZ) goto L_0059992e;
L_00599905:; BB(0x00599905);
    /* 00599905: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00599907: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x59990cu); f_0077a684();
    /* 0059990c: mov esi, eax */ r_esi = r_eax;
    /* 0059990e: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00599910: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x599915u); f_0077a698();
    /* 00599915: mov ebx, eax */ r_ebx = r_eax;
    /* 00599917: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00599919: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x59991eu); f_0077a6b4();
    /* 0059991e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599921: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00599924: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599925: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00599926: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00599927: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x59992cu); f_007868f8();
    /* 0059992c: jmp 0x599955 */ goto L_00599955;
L_0059992e:; BB(0x0059992e);
    /* 0059992e: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00599930: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x599935u); f_0077a684();
    /* 00599935: mov esi, eax */ r_esi = r_eax;
    /* 00599937: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00599939: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x59993eu); f_0077a698();
    /* 0059993e: mov ebx, eax */ r_ebx = r_eax;
    /* 00599940: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00599942: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x599947u); f_0077a6b4();
    /* 00599947: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059994a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059994d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059994e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059994f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00599950: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x599955u); f_007868f8();
L_00599955:; BB(0x00599955);
    /* 00599955: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00599958: movzx eax, word ptr [ecx + 0x334] */ r_eax = (u32)R16((u32)(r_ecx+0x334u));
    /* 0059995f: mov word ptr [ecx + 0x346], ax */ W16((u32)(r_ecx+0x346u), (u16)r_eax);
    /* 00599966: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x59996bu); f_007b4f54();
    /* 0059996b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0059996e: mov edx, dword ptr [eax + 0x3fc] */ r_edx = R32((u32)(r_eax+0x3fcu));
    /* 00599974: mov dword ptr [eax + 0x358], 0 */ W32((u32)(r_eax+0x358u), 0x0u);
    /* 0059997e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599980: jne 0x59998d */ if (!fZ) goto L_0059998d;
L_00599982:; BB(0x00599982);
    /* 00599982: mov ecx, eax */ r_ecx = r_eax;
    /* 00599984: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00599986: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x59998bu); f_00787550();
    /* 0059998b: jmp 0x599996 */ goto L_00599996;
L_0059998d:; BB(0x0059998d);
    /* 0059998d: mov ecx, eax */ r_ecx = r_eax;
    /* 0059998f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00599991: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x599996u); f_00787550();
L_00599996:; BB(0x00599996);
    /* 00599996: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0059999d: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0059999f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5999a4u); f_008581c5();
    /* 005999a4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005999a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005999aa: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005999ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005999af: je 0x599a17 */ if (fZ) goto L_00599a17;
L_005999b1:; BB(0x005999b1);
    /* 005999b1: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005999b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005999bf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005999c2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005999c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005999c6: call 0x599c68 */ r_esp -= 4; W32(r_esp, 0x5999cbu); f_00599c68();
    /* 005999cb: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005999d2:; BB(0x005999d2);
    /* 005999d2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005999d5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005999d8: mov dword ptr [edx + 0x390], eax */ W32((u32)(r_edx+0x390u), r_eax);
    /* 005999de: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005999e5: mov ecx, edx */ r_ecx = r_edx;
    /* 005999e7: mov dword ptr [ecx + 0x3f0], 0 */ W32((u32)(r_ecx+0x3f0u), 0x0u);
    /* 005999f1: mov dword ptr [ecx + 0x3d4], 0xffff */ W32((u32)(r_ecx+0x3d4u), 0xffffu);
    /* 005999fb: call 0x5997ac */ r_esp -= 4; W32(r_esp, 0x599a00u); f_005997ac();
    /* 00599a00: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00599a03: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00599a06: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00599a09: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00599a0c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00599a13: mov esp, ebp */ r_esp = r_ebp;
    /* 00599a15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00599a16: ret  */ FN_RET(0x005997c8); r_esp += 4; return;
L_00599a17:; BB(0x00599a17);
    /* 00599a17: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00599a19: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00599a1c: jmp 0x5999d2 */ goto L_005999d2;
}

void f_00599a20(void)
{
    FN_ENTER(0x00599a20);
    /* 00599a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00599a21: mov ebp, esp */ r_ebp = r_esp;
    /* 00599a23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00599a25: push 0x8d8518 */ { u32 v = 0x8d8518u; r_esp -= 4; W32(r_esp, v); }
    /* 00599a2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00599a30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599a31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00599a38: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00599a3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00599a3e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00599a41: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00599a44: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00599a47: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00599a4c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00599a53: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x599a58u); f_008581c5();
    /* 00599a58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00599a59: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00599a5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599a5e: je 0x599ae6 */ if (fZ) goto L_00599ae6;
L_00599a64:; BB(0x00599a64);
    /* 00599a64: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00599a6b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00599a72: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00599a75: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00599a77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599a78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599a79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599a7a: push 0x9bfd48 */ { u32 v = 0x9bfd48u; r_esp -= 4; W32(r_esp, v); }
    /* 00599a7f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00599a81: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x599a86u); f_005b7a84();
    /* 00599a86: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00599a89: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00599a90:; BB(0x00599a90);
    /* 00599a90: mov dword ptr [0xa74654], eax */ W32((u32)(0xa74654u), r_eax);
    /* 00599a95: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00599a9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599a9e: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00599aa3: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 00599aa9: push dword ptr [eax + 0x4c] */ { u32 v = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00599aac: push dword ptr [eax + 0x48] */ { u32 v = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599aaf: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00599ab1: call 0x608218 */ r_esp -= 4; W32(r_esp, 0x599ab6u); f_00608218();
    /* 00599ab6: mov eax, dword ptr [0xa74654] */ r_eax = R32((u32)(0xa74654u));
    /* 00599abb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599abd: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00599ac3: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00599ac8: push dword ptr [edx + 0x5c] */ { u32 v = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00599acb: push dword ptr [edx + 0x58] */ { u32 v = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599ace: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00599ad0: call 0x608218 */ r_esp -= 4; W32(r_esp, 0x599ad5u); f_00608218();
    /* 00599ad5: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00599ad8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00599adb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00599ae2: mov esp, ebp */ r_esp = r_ebp;
    /* 00599ae4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00599ae5: ret  */ FN_RET(0x00599a20); r_esp += 4; return;
L_00599ae6:; BB(0x00599ae6);
    /* 00599ae6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00599ae8: jmp 0x599a90 */ goto L_00599a90;
}

void f_00599aec(void) /* sub_599AEC */
{
    FN_ENTER(0x00599aec);
    /* 00599aec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00599aed: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00599af0: mov edi, ecx */ r_edi = r_ecx;
    /* 00599af2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00599af4: mov edx, dword ptr [0x929380] */ r_edx = R32((u32)(0x929380u));
    /* 00599afa: mov dword ptr [edi + 0x3c0], eax */ W32((u32)(r_edi+0x3c0u), r_eax);
    /* 00599b00: mov dword ptr [edi + 0x3c4], edx */ W32((u32)(r_edi+0x3c4u), r_edx);
    /* 00599b06: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 00599b0c: mov dword ptr [edi + 0x3cc], edx */ W32((u32)(r_edi+0x3ccu), r_edx);
    /* 00599b12: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 00599b18: mov dword ptr [edi + 0x3d4], edx */ W32((u32)(r_edi+0x3d4u), r_edx);
    /* 00599b1e: mov dword ptr [edi + 0x3d8], eax */ W32((u32)(r_edi+0x3d8u), r_eax);
    /* 00599b24: mov eax, dword ptr [edi + 0x3bc] */ r_eax = R32((u32)(r_edi+0x3bcu));
    /* 00599b2a: mov dword ptr [edi + 0x3dc], edx */ W32((u32)(r_edi+0x3dcu), r_edx);
    /* 00599b30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00599b32: jle 0x599c62 */ if ((fZ||fS!=fO)) goto L_00599c62;
L_00599b38:; BB(0x00599b38);
    /* 00599b38: mov eax, dword ptr [edi + 0x3c0] */ r_eax = R32((u32)(r_edi+0x3c0u));
    /* 00599b3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599b40: jne 0x599c62 */ if (!fZ) goto L_00599c62;
L_00599b46:; BB(0x00599b46);
    /* 00599b46: movzx edx, word ptr [edi + 0x37c] */ r_edx = (u32)R16((u32)(r_edi+0x37cu));
    /* 00599b4d: movzx eax, word ptr [edi + 0x380] */ r_eax = (u32)R16((u32)(r_edi+0x380u));
    /* 00599b54: movzx ecx, word ptr [edi + 0x384] */ r_ecx = (u32)R16((u32)(r_edi+0x384u));
    /* 00599b5b: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 00599b60: movzx eax, word ptr [edi + 0x382] */ r_eax = (u32)R16((u32)(r_edi+0x382u));
    /* 00599b67: mov word ptr [esp + 8], cx */ W16((u32)(r_esp+0x8u), (u16)r_ecx);
    /* 00599b6c: movzx ecx, word ptr [edi + 0x386] */ r_ecx = (u32)R16((u32)(r_edi+0x386u));
    /* 00599b73: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 00599b78: movzx ecx, word ptr [edi + 0x388] */ r_ecx = (u32)R16((u32)(r_edi+0x388u));
    /* 00599b7f: mov word ptr [esp + 0xc], cx */ W16((u32)(r_esp+0xcu), (u16)r_ecx);
    /* 00599b84: movzx ecx, word ptr [edi + 0x38a] */ r_ecx = (u32)R16((u32)(r_edi+0x38au));
    /* 00599b8b: mov word ptr [esp + 0xe], cx */ W16((u32)(r_esp+0xeu), (u16)r_ecx);
    /* 00599b90: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 00599b96: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00599b9a: mov ecx, dword ptr [edi + 0x390] */ r_ecx = R32((u32)(r_edi+0x390u));
    /* 00599ba0: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00599ba4: mov ecx, dword ptr [edi + 0x394] */ r_ecx = R32((u32)(r_edi+0x394u));
    /* 00599baa: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00599bae: mov ecx, dword ptr [edi + 0x398] */ r_ecx = R32((u32)(r_edi+0x398u));
    /* 00599bb4: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00599bb8: mov ecx, dword ptr [edi + 0x39c] */ r_ecx = R32((u32)(r_edi+0x39cu));
    /* 00599bbe: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00599bc2: mov ecx, dword ptr [edi + 0x3a0] */ r_ecx = R32((u32)(r_edi+0x3a0u));
    /* 00599bc8: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00599bcc: mov ecx, dword ptr [edi + 0x3a4] */ r_ecx = R32((u32)(r_edi+0x3a4u));
    /* 00599bd2: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00599bd6: mov ecx, dword ptr [edi + 0x3a8] */ r_ecx = R32((u32)(r_edi+0x3a8u));
    /* 00599bdc: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 00599be0: mov ecx, dword ptr [edi + 0x3ac] */ r_ecx = R32((u32)(r_edi+0x3acu));
    /* 00599be6: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00599bea: mov ecx, dword ptr [edi + 0x3b0] */ r_ecx = R32((u32)(r_edi+0x3b0u));
    /* 00599bf0: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00599bf4: mov ecx, dword ptr [edi + 0x3b4] */ r_ecx = R32((u32)(r_edi+0x3b4u));
    /* 00599bfa: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00599bfe: movzx ecx, word ptr [edi + 0x3b8] */ r_ecx = (u32)R16((u32)(r_edi+0x3b8u));
    /* 00599c05: mov word ptr [esp + 0x3c], cx */ W16((u32)(r_esp+0x3cu), (u16)r_ecx);
    /* 00599c0a: movzx ecx, word ptr [edi + 0x3ba] */ r_ecx = (u32)R16((u32)(r_edi+0x3bau));
    /* 00599c11: mov word ptr [esp + 0x3e], cx */ W16((u32)(r_esp+0x3eu), (u16)r_ecx);
    /* 00599c16: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00599c19: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 00599c1d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00599c1f: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 00599c24: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00599c27: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00599c2c: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00599c2f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00599c33: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 00599c36: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00599c3a: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00599c3d: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00599c41: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00599c44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599c45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00599c46: call 0x595f4c */ r_esp -= 4; W32(r_esp, 0x599c4bu); f_00595f4c();
    /* 00599c4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599c4e: mov dword ptr [edi + 0x3c4], eax */ W32((u32)(r_edi+0x3c4u), r_eax);
    /* 00599c54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599c56: je 0x599c62 */ if (fZ) goto L_00599c62;
L_00599c58:; BB(0x00599c58);
    /* 00599c58: mov dword ptr [edi + 0x3c0], 1 */ W32((u32)(r_edi+0x3c0u), 0x1u);
L_00599c62:; BB(0x00599c62);
    /* 00599c62: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00599c65: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00599c66: ret  */ FN_RET(0x00599aec); r_esp += 4; return;
}

void f_00599c68(void) /* sub_599C68 */
{
    FN_ENTER(0x00599c68);
    /* 00599c68: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00599c6c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00599c6e: mov eax, ecx */ r_eax = r_ecx;
    /* 00599c70: mov dword ptr [ecx + 4], 0xffffffff */ W32((u32)(r_ecx+0x4u), 0xffffffffu);
    /* 00599c77: ret 4 */ FN_RET(0x00599c68); r_esp += 8; return;
}

void f_00599c7c(void) /* sub_599C7C */
{
    FN_ENTER(0x00599c7c);
    /* 00599c7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00599c7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00599c7e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00599c7f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00599c80: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00599c81: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00599c83: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00599c86: and eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00599c8b: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00599c8f: and ebx, 0xffffefff */ {  u32 a = r_ebx; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00599c95: mov dword ptr [ebp + 4], ebx */ W32((u32)(r_ebp+0x4u), r_ebx);
    /* 00599c98: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00599c9b: je 0x599ce7 */ if (fZ) goto L_00599ce7;
L_00599c9d:; BB(0x00599c9d);
    /* 00599c9d: cmp ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599ca0: jge 0x599cef */ if ((fS==fO)) goto L_00599cef;
L_00599ca2:; BB(0x00599ca2);
    /* 00599ca2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00599ca4: je 0x599cdd */ if (fZ) goto L_00599cdd;
L_00599ca6:; BB(0x00599ca6);
    /* 00599ca6: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
    /* 00599ca9: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 00599caf: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 00599cb2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599cb3: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00599cb6: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00599cb9: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 00599cbf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00599cc1: call 0x7a9a6c */ r_esp -= 4; W32(r_esp, 0x599cc6u); f_007a9a6c();
    /* 00599cc6: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 00599ccc: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00599ccf: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 00599cd5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00599cd6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00599cd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00599cd8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00599cd9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00599cda: ret 4 */ FN_RET(0x00599c7c); r_esp += 8; return;
L_00599cdd:; BB(0x00599cdd);
    /* 00599cdd: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00599ce0: mov word ptr [eax + 0xb8], bx */ W16((u32)(r_eax+0xb8u), (u16)r_ebx);
L_00599ce7:; BB(0x00599ce7);
    /* 00599ce7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00599ce8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00599ce9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00599cea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00599ceb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00599cec: ret 4 */ FN_RET(0x00599c7c); r_esp += 8; return;
L_00599cef:; BB(0x00599cef);
    /* 00599cef: cmp ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599cf2: jge 0x599d80 */ if ((fS==fO)) goto L_00599d80;
L_00599cf8:; BB(0x00599cf8);
    /* 00599cf8: mov esi, dword ptr [0xa74654] */ r_esi = R32((u32)(0xa74654u));
    /* 00599cfe: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00599d01: mov edx, dword ptr [eax + 0x3fc] */ r_edx = R32((u32)(r_eax+0x3fcu));
    /* 00599d07: mov eax, dword ptr [edx*4 + 0x9bfda0] */ r_eax = R32((u32)(r_edx*4+0x9bfda0u));
    /* 00599d0e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00599d11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599d12: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 00599d15: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00599d17: mov ecx, esi */ r_ecx = r_esi;
    /* 00599d19: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x599d1eu); f_005b8610();
    /* 00599d1e: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00599d21: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00599d24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599d25: mov ecx, esi */ r_ecx = r_esi;
    /* 00599d27: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x599d2cu); f_005b8624();
    /* 00599d2c: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00599d2f: push dword ptr [edi + ebx*8 + 0x9bfd60] */ { u32 v = R32((u32)(r_edi+r_ebx*8+0x9bfd60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599d36: mov ecx, esi */ r_ecx = r_esi;
    /* 00599d38: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x599d3du); f_005b8638();
    /* 00599d3d: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 00599d40: push dword ptr [edi + ebx*8 + 0x9bfd64] */ { u32 v = R32((u32)(r_edi+r_ebx*8+0x9bfd64u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599d47: mov ecx, esi */ r_ecx = r_esi;
    /* 00599d49: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x599d4eu); f_005b8638();
    /* 00599d4e: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 00599d51: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00599d54: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00599d57: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00599d5a: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00599d5d: fadd dword ptr [edx*4 + 0x9297e0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9297e0u));
    /* 00599d64: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
    /* 00599d67: mov ebx, dword ptr [edi + ebx*8 + 0x9bfd68] */ r_ebx = R32((u32)(r_edi+r_ebx*8+0x9bfd68u));
    /* 00599d6e: mov dword ptr [ebp + 0x30], 0 */ W32((u32)(r_ebp+0x30u), 0x0u);
    /* 00599d75: mov dword ptr [ebp + 0x28], ebx */ W32((u32)(r_ebp+0x28u), r_ebx);
    /* 00599d78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00599d79: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00599d7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00599d7b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00599d7c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00599d7d: ret 4 */ FN_RET(0x00599c7c); r_esp += 8; return;
L_00599d80:; BB(0x00599d80);
    /* 00599d80: mov esi, dword ptr [0xa74654] */ r_esi = R32((u32)(0xa74654u));
    /* 00599d86: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00599d89: mov edx, dword ptr [eax + 0x3fc] */ r_edx = R32((u32)(r_eax+0x3fcu));
    /* 00599d8f: lea edi, [ebx + ebx*4] */ r_edi = (u32)(r_ebx+r_ebx*4);
    /* 00599d92: mov ecx, esi */ r_ecx = r_esi;
    /* 00599d94: mov ebx, dword ptr [edx*4 + 0x9bfe1c] */ r_ebx = R32((u32)(r_edx*4+0x9bfe1cu));
    /* 00599d9b: push dword ptr [ebx + edi*4 - 0xb4] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0xffffff4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00599da2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x599da7u); f_005b8610();
    /* 00599da7: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00599daa: push dword ptr [ebx + edi*4 - 0xb4] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0xffffff4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00599db1: mov ecx, esi */ r_ecx = r_esi;
    /* 00599db3: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x599db8u); f_005b8624();
    /* 00599db8: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00599dbb: push dword ptr [ebx + edi*4 - 0xb0] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0xffffff50u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599dc2: mov ecx, esi */ r_ecx = r_esi;
    /* 00599dc4: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x599dc9u); f_005b8638();
    /* 00599dc9: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 00599dcc: push dword ptr [ebx + edi*4 - 0xac] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0xffffff54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599dd3: mov ecx, esi */ r_ecx = r_esi;
    /* 00599dd5: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x599ddau); f_005b8610();
    /* 00599dda: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 00599ddd: push dword ptr [ebx + edi*4 - 0xac] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0xffffff54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599de4: mov ecx, esi */ r_ecx = r_esi;
    /* 00599de6: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x599debu); f_005b8624();
    /* 00599deb: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00599dee: push dword ptr [ebx + edi*4 - 0xa8] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0xffffff58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599df5: mov ecx, esi */ r_ecx = r_esi;
    /* 00599df7: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x599dfcu); f_005b8638();
    /* 00599dfc: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 00599dff: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00599e02: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00599e05: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00599e08: fadd dword ptr [edx*4 + 0x9297e0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9297e0u));
    /* 00599e0f: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
    /* 00599e12: mov eax, dword ptr [ebx + edi*4 - 0xa4] */ r_eax = R32((u32)(r_ebx+r_edi*4+0xffffff5cu));
    /* 00599e19: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 00599e1c: mov dword ptr [ebp + 0x30], 0 */ W32((u32)(r_ebp+0x30u), 0x0u);
    /* 00599e23: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00599e24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00599e25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00599e26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00599e27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00599e28: ret 4 */ FN_RET(0x00599c7c); r_esp += 8; return;
}

void f_00599e2c(void) /* sub_599E2C */
{
    FN_ENTER(0x00599e2c);
    /* 00599e2c: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00599e2f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00599e32: je 0x599e6e */ if (fZ) goto L_00599e6e;
L_00599e34:; BB(0x00599e34);
    /* 00599e34: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599e37: jl 0x599e6b */ if ((fS!=fO)) goto L_00599e6b;
L_00599e39:; BB(0x00599e39);
    /* 00599e39: movzx eax, byte ptr [0xa74668] */ r_eax = (u32)R8((u32)(0xa74668u));
    /* 00599e40: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 00599e42: jne 0x599e5d */ if (!fZ) goto L_00599e5d;
L_00599e44:; BB(0x00599e44);
    /* 00599e44: fld dword ptr [0x9297ec] */ FPUSH(R_F32((u32)(0x9297ecu)));
    /* 00599e4a: fadd dword ptr [ecx + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x2cu));
    /* 00599e4d: fstp dword ptr [0xa7466c] */ W_F32((u32)(0xa7466cu), ST(0)); FPOP();
    /* 00599e53: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 00599e58: mov byte ptr [0xa74668], al */ W8((u32)(0xa74668u), (u8)r_eax);
L_00599e5d:; BB(0x00599e5d);
    /* 00599e5d: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 00599e60: fcomp dword ptr [0xa7466c] */ fx_compare(ST(0), R_F32((u32)(0xa7466cu))); FPOP();
    /* 00599e66: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00599e68: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00599e69: je 0x599e6e */ if (fZ) goto L_00599e6e;
L_00599e6b:; BB(0x00599e6b);
    /* 00599e6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00599e6d: ret  */ FN_RET(0x00599e2c); r_esp += 4; return;
L_00599e6e:; BB(0x00599e6e);
    /* 00599e6e: mov eax, 1 */ r_eax = 0x1u;
    /* 00599e73: ret  */ FN_RET(0x00599e2c); r_esp += 4; return;
}

void f_00599e74(void) /* sub_599E74 */
{
    FN_ENTER(0x00599e74);
    /* 00599e74: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00599e77: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00599e7a: je 0x599eee */ if (fZ) goto L_00599eee;
L_00599e7c:; BB(0x00599e7c);
    /* 00599e7c: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599e7f: jl 0x599ee7 */ if ((fS!=fO)) goto L_00599ee7;
L_00599e81:; BB(0x00599e81);
    /* 00599e81: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599e84: jge 0x599ea2 */ if ((fS==fO)) goto L_00599ea2;
L_00599e86:; BB(0x00599e86);
    /* 00599e86: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 00599e89: fadd dword ptr [ecx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x28u));
    /* 00599e8c: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 00599e8f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00599e91: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00599e93: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00599e94: ja 0x599e9c */ if ((!fC&&!fZ)) goto L_00599e9c;
L_00599e96:; BB(0x00599e96);
    /* 00599e96: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00599e98: fstp dword ptr [ecx + 0x30] */ W_F32((u32)(r_ecx+0x30u), ST(0)); FPOP();
    /* 00599e9b: ret  */ FN_RET(0x00599e74); r_esp += 4; return;
L_00599e9c:; BB(0x00599e9c);
    /* 00599e9c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00599e9e: fstp dword ptr [ecx + 0x30] */ W_F32((u32)(r_ecx+0x30u), ST(0)); FPOP();
    /* 00599ea1: ret  */ FN_RET(0x00599e74); r_esp += 4; return;
L_00599ea2:; BB(0x00599ea2);
    /* 00599ea2: movzx eax, byte ptr [0xa74670] */ r_eax = (u32)R8((u32)(0xa74670u));
    /* 00599ea9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 00599eab: jne 0x599ec8 */ if (!fZ) goto L_00599ec8;
L_00599ead:; BB(0x00599ead);
    /* 00599ead: fld dword ptr [0x9297e8] */ FPUSH(R_F32((u32)(0x9297e8u)));
    /* 00599eb3: fadd dword ptr [ecx + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x2cu));
    /* 00599eb6: fst dword ptr [0xa74674] */ W_F32((u32)(0xa74674u), ST(0));
    /* 00599ebc: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 00599ec1: mov byte ptr [0xa74670], al */ W8((u32)(0xa74670u), (u8)r_eax);
    /* 00599ec6: jmp 0x599ece */ goto L_00599ece;
L_00599ec8:; BB(0x00599ec8);
    /* 00599ec8: fld dword ptr [0xa74674] */ FPUSH(R_F32((u32)(0xa74674u)));
L_00599ece:; BB(0x00599ece);
    /* 00599ece: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 00599ed1: fadd dword ptr [ecx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x28u));
    /* 00599ed4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00599ed6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00599ed8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00599ed9: jb 0x599ee1 */ if (fC) goto L_00599ee1;
L_00599edb:; BB(0x00599edb);
    /* 00599edb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00599edd: fstp dword ptr [ecx + 0x30] */ W_F32((u32)(r_ecx+0x30u), ST(0)); FPOP();
    /* 00599ee0: ret  */ FN_RET(0x00599e74); r_esp += 4; return;
L_00599ee1:; BB(0x00599ee1);
    /* 00599ee1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00599ee3: fstp dword ptr [ecx + 0x30] */ W_F32((u32)(r_ecx+0x30u), ST(0)); FPOP();
    /* 00599ee6: ret  */ FN_RET(0x00599e74); r_esp += 4; return;
L_00599ee7:; BB(0x00599ee7);
    /* 00599ee7: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00599ee9: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x599eeeu); f_007aa094();
L_00599eee:; BB(0x00599eee);
    /* 00599eee: ret  */ FN_RET(0x00599e74); r_esp += 4; return;
}

void f_00599ef0(void) /* sub_599EF0 */
{
    FN_ENTER(0x00599ef0);
    /* 00599ef0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00599ef1: mov edi, ecx */ r_edi = r_ecx;
    /* 00599ef3: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00599ef6: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00599ef9: je 0x59a128 */ if (fZ) goto L_0059a128;
L_00599eff:; BB(0x00599eff);
    /* 00599eff: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599f02: jl 0x59a09b */ if ((fS!=fO)) goto L_0059a09b;
L_00599f08:; BB(0x00599f08);
    /* 00599f08: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599f0b: jge 0x599fb0 */ if ((fS==fO)) goto L_00599fb0;
L_00599f11:; BB(0x00599f11);
    /* 00599f11: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 00599f14: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x599f19u); f_00829cc8();
    /* 00599f19: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00599f1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599f1f: je 0x599f66 */ if (fZ) goto L_00599f66;
L_00599f21:; BB(0x00599f21);
    /* 00599f21: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00599f26: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00599f2b: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00599f30: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00599f35: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x599f3au); f_0061cdb0();
    /* 00599f3a: push dword ptr [edi + 0x30] */ { u32 v = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599f3d: push dword ptr [edi + 0x14] */ { u32 v = R32((u32)(r_edi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599f40: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599f43: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599f46: call 0x8304e0 */ r_esp -= 4; W32(r_esp, 0x599f4bu); f_008304e0();
    /* 00599f4b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599f4e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x599f53u); f_0061cdb0();
    /* 00599f53: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00599f58: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00599f5d: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00599f62: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00599f63: ret 4 */ FN_RET(0x00599ef0); r_esp += 8; return;
L_00599f66:; BB(0x00599f66);
    /* 00599f66: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00599f6b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x599f70u); f_0061cdb0();
    /* 00599f70: call 0x7a954c */ r_esp -= 4; W32(r_esp, 0x599f75u); f_007a954c();
    /* 00599f75: push dword ptr [edi + 0x30] */ { u32 v = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599f78: push dword ptr [edi + 0x14] */ { u32 v = R32((u32)(r_edi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599f7b: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599f7e: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599f81: call 0x8304e0 */ r_esp -= 4; W32(r_esp, 0x599f86u); f_008304e0();
    /* 00599f86: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599f89: call 0x7a9558 */ r_esp -= 4; W32(r_esp, 0x599f8eu); f_007a9558();
    /* 00599f8e: push dword ptr [edi + 0x30] */ { u32 v = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599f91: push dword ptr [edi + 0x14] */ { u32 v = R32((u32)(r_edi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599f94: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599f97: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599f9a: call 0x8304e0 */ r_esp -= 4; W32(r_esp, 0x599f9fu); f_008304e0();
    /* 00599f9f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599fa2: call 0x7a9564 */ r_esp -= 4; W32(r_esp, 0x599fa7u); f_007a9564();
    /* 00599fa7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x599facu); f_0061cdb0();
    /* 00599fac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00599fad: ret 4 */ FN_RET(0x00599ef0); r_esp += 8; return;
L_00599fb0:; BB(0x00599fb0);
    /* 00599fb0: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 00599fb3: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x599fb8u); f_00829cc8();
    /* 00599fb8: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x599fbdu); f_0082fa9c();
    /* 00599fbd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00599fc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599fc3: je 0x59a01e */ if (fZ) goto L_0059a01e;
L_00599fc5:; BB(0x00599fc5);
    /* 00599fc5: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00599fca: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00599fcf: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00599fd4: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00599fd9: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x599fdeu); f_0061cdb0();
    /* 00599fde: push dword ptr [edi + 0x30] */ { u32 v = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599fe1: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599fe4: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599fe7: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x599fecu); f_0083046c();
    /* 00599fec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599fef: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00599ff2: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x599ff7u); f_00829cc8();
    /* 00599ff7: push dword ptr [edi + 0x30] */ { u32 v = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599ffa: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00599ffd: push dword ptr [edi + 0x18] */ { u32 v = R32((u32)(r_edi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a000: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x59a005u); f_0083046c();
    /* 0059a005: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a008: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x59a00du); f_0061cdb0();
    /* 0059a00d: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0059a012: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059a017: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0059a01c: jmp 0x59a092 */ goto L_0059a092;
L_0059a01e:; BB(0x0059a01e);
    /* 0059a01e: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0059a023: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x59a028u); f_0061cdb0();
    /* 0059a028: call 0x7a954c */ r_esp -= 4; W32(r_esp, 0x59a02du); f_007a954c();
    /* 0059a02d: push dword ptr [edi + 0x30] */ { u32 v = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a030: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a033: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a036: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x59a03bu); f_0083046c();
    /* 0059a03b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a03e: call 0x7a9558 */ r_esp -= 4; W32(r_esp, 0x59a043u); f_007a9558();
    /* 0059a043: push dword ptr [edi + 0x30] */ { u32 v = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a046: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a049: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a04c: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x59a051u); f_0083046c();
    /* 0059a051: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a054: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0059a057: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x59a05cu); f_00829cc8();
    /* 0059a05c: call 0x7a954c */ r_esp -= 4; W32(r_esp, 0x59a061u); f_007a954c();
    /* 0059a061: push dword ptr [edi + 0x30] */ { u32 v = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a064: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a067: push dword ptr [edi + 0x18] */ { u32 v = R32((u32)(r_edi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a06a: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x59a06fu); f_0083046c();
    /* 0059a06f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a072: call 0x7a9558 */ r_esp -= 4; W32(r_esp, 0x59a077u); f_007a9558();
    /* 0059a077: push dword ptr [edi + 0x30] */ { u32 v = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a07a: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a07d: push dword ptr [edi + 0x18] */ { u32 v = R32((u32)(r_edi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a080: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x59a085u); f_0083046c();
    /* 0059a085: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a088: call 0x7a9564 */ r_esp -= 4; W32(r_esp, 0x59a08du); f_007a9564();
    /* 0059a08d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x59a092u); f_0061cdb0();
L_0059a092:; BB(0x0059a092);
    /* 0059a092: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x59a097u); f_0082faac();
    /* 0059a097: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059a098: ret 4 */ FN_RET(0x00599ef0); r_esp += 8; return;
L_0059a09b:; BB(0x0059a09b);
    /* 0059a09b: mov ecx, dword ptr [0xa74654] */ r_ecx = R32((u32)(0xa74654u));
    /* 0059a0a1: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059a0a3: mov edx, dword ptr [eax + 0x3fc] */ r_edx = R32((u32)(r_eax+0x3fcu));
    /* 0059a0a9: push dword ptr [edx*4 + 0x9bfda8] */ { u32 v = R32((u32)(r_edx*4+0x9bfda8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059a0b0: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x59a0b5u); f_005b8624();
    /* 0059a0b5: mov ecx, eax */ r_ecx = r_eax;
    /* 0059a0b7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x59a0bcu); f_00829cc8();
    /* 0059a0bc: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059a0c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a0c2: je 0x59a0fc */ if (fZ) goto L_0059a0fc;
L_0059a0c4:; BB(0x0059a0c4);
    /* 0059a0c4: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0059a0c9: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059a0ce: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0059a0d3: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0059a0d8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x59a0ddu); f_0061cdb0();
    /* 0059a0dd: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0059a0df: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x59a0e4u); f_007aa668();
    /* 0059a0e4: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x59a0e9u); f_0061cdb0();
    /* 0059a0e9: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0059a0ee: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059a0f3: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0059a0f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059a0f9: ret 4 */ FN_RET(0x00599ef0); r_esp += 8; return;
L_0059a0fc:; BB(0x0059a0fc);
    /* 0059a0fc: call 0x7a954c */ r_esp -= 4; W32(r_esp, 0x59a101u); f_007a954c();
    /* 0059a101: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0059a106: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x59a10bu); f_0061cdb0();
    /* 0059a10b: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0059a10d: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x59a112u); f_007aa668();
    /* 0059a112: call 0x7a9558 */ r_esp -= 4; W32(r_esp, 0x59a117u); f_007a9558();
    /* 0059a117: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0059a119: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x59a11eu); f_007aa668();
    /* 0059a11e: call 0x7a9564 */ r_esp -= 4; W32(r_esp, 0x59a123u); f_007a9564();
    /* 0059a123: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x59a128u); f_0061cdb0();
L_0059a128:; BB(0x0059a128);
    /* 0059a128: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059a129: ret 4 */ FN_RET(0x00599ef0); r_esp += 8; return;
}

