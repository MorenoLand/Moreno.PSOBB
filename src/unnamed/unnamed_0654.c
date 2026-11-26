#include "protos.h"

void f_00654028(void) /* sub_654028 */
{
    FN_ENTER(0x00654028);
    /* 00654028: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00654029: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065402a: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065402d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0065402f: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x654034u); f_004f7c84();
    /* 00654034: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654037: je 0x6540b1 */ if (fZ) goto L_006540b1;
L_00654039:; BB(0x00654039);
    /* 00654039: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
L_0065403c:; BB(0x0065403c);
    /* 0065403c: mov ecx, dword ptr [0xa8f72c] */ r_ecx = R32((u32)(0xa8f72cu));
    /* 00654042: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x654047u); f_00829cc8();
    /* 00654047: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65404cu); f_0082d7b0();
    /* 0065404c: mov ecx, edi */ r_ecx = r_edi;
    /* 0065404e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x654053u); f_0082d838();
    /* 00654053: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00654056: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00654058: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65405du); f_0082d8bc();
    /* 0065405d: lea ecx, [ebp + 0xac] */ r_ecx = (u32)(r_ebp+0xacu);
    /* 00654063: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x654068u); f_0082d838();
    /* 00654068: mov edx, dword ptr [ebp + 0xb8] */ r_edx = R32((u32)(r_ebp+0xb8u));
    /* 0065406e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00654070: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x654075u); f_0082d8bc();
    /* 00654075: mov edx, dword ptr [ebp + 0xc0] */ r_edx = R32((u32)(r_ebp+0xc0u));
    /* 0065407b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065407d: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x654082u); f_00830c04();
    /* 00654082: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x654087u); f_0082fa9c();
    /* 00654087: push dword ptr [ebp + 0xa8] */ { u32 v = R32((u32)(r_ebp+0xa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065408d: push dword ptr [ebp + 0x9c] */ { u32 v = R32((u32)(r_ebp+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00654093: push dword ptr [ebp + 0x98] */ { u32 v = R32((u32)(r_ebp+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654099: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x65409eu); f_0083046c();
    /* 0065409e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006540a1: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x6540a6u); f_0082faac();
    /* 006540a6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6540abu); f_0082da80();
    /* 006540ab: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006540ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006540af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006540b0: ret  */ FN_RET(0x00654028); r_esp += 4; return;
L_006540b1:; BB(0x006540b1);
    /* 006540b1: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 006540b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006540b8: je 0x6540c2 */ if (fZ) goto L_006540c2;
L_006540ba:; BB(0x006540ba);
    /* 006540ba: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 006540bd: jmp 0x65403c */ goto L_0065403c;
L_006540c2:; BB(0x006540c2);
    /* 006540c2: fld dword ptr [0x937614] */ FPUSH(R_F32((u32)(0x937614u)));
    /* 006540c8: mov eax, dword ptr [ebp + 0x98] */ r_eax = R32((u32)(r_ebp+0x98u));
    /* 006540ce: mov ecx, dword ptr [ebp + 0xa0] */ r_ecx = R32((u32)(r_ebp+0xa0u));
    /* 006540d4: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006540d8: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 006540dc: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 006540e0: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 006540e3: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 006540e7: mov edi, eax */ r_edi = r_eax;
    /* 006540e9: mov esi, ecx */ r_esi = r_ecx;
L_006540eb:; BB(0x006540eb);
    /* 006540eb: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 006540ef: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006540f2: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006540f5: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006540f8: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006540fb: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006540fe: fadd dword ptr [edx*4 + 0x937460] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x937460u));
    /* 00654105: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00654107: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00654109: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065410a: jae 0x65410e */ if (!fC) goto L_0065410e;
L_0065410c:; BB(0x0065410c);
    /* 0065410c: fst st(1) */ ST(1) = ST(0);
L_0065410e:; BB(0x0065410e);
    /* 0065410e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00654110: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00654111: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00654114: mov ecx, esi */ r_ecx = r_esi;
    /* 00654116: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x65411bu); f_008304c8();
    /* 0065411b: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 0065411f: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 00654123: lea ebx, [esp + 0x20] */ r_ebx = (u32)(r_esp+0x20u);
    /* 00654127: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00654128: mov ecx, edi */ r_ecx = r_edi;
    /* 0065412a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065412b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065412c: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 00654130: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x654135u); f_0082facc();
    /* 00654135: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00654139: fadd dword ptr [0x937610] */ ST(0) = ST(0) + R_F32((u32)(0x937610u));
    /* 0065413f: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00654142: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 00654146: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0065414b: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065414e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00654152: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00654156: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00654159: fadd dword ptr [edx*4 + 0x937460] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x937460u));
    /* 00654160: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00654162: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00654164: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00654165: jae 0x65416b */ if (!fC) goto L_0065416b;
L_00654167:; BB(0x00654167);
    /* 00654167: fst st(1) */ ST(1) = ST(0);
    /* 00654169: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0065416b:; BB(0x0065416b);
    /* 0065416b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065416d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065416e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00654171: mov ecx, esi */ r_ecx = r_esi;
    /* 00654173: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x654178u); f_008304c8();
    /* 00654178: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 0065417c: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00654180: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 00654184: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00654185: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654186: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00654187: mov ecx, edi */ r_ecx = r_edi;
    /* 00654189: lea edx, [esp + 0x70] */ r_edx = (u32)(r_esp+0x70u);
    /* 0065418d: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x654192u); f_0082facc();
    /* 00654192: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x654197u); f_0082d7b0();
    /* 00654197: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0065419b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6541a0u); f_0082d838();
    /* 006541a0: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 006541a3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006541a5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6541aau); f_0082d8bc();
    /* 006541aa: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 006541ae: lea eax, [esp + 0x64] */ r_eax = (u32)(r_esp+0x64u);
    /* 006541b2: mov edx, 0xfff0f0f0 */ r_edx = 0xfff0f0f0u;
    /* 006541b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006541b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006541b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006541ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006541bb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6541c0u); f_0061cdb0();
    /* 006541c0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006541c3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6541c8u); f_0082da80();
    /* 006541c8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006541ca: jne 0x6540eb */ if (!fZ) goto L_006540eb;
L_006541d0:; BB(0x006541d0);
    /* 006541d0: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 006541d4: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006541d8: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 006541dc: jmp 0x65403c */ goto L_0065403c;
}

void f_006540c0(void)
{
    FN_ENTER(0x006540c0);
}

void f_006541e4(void) /* sub_6541E4 */
{
    FN_ENTER(0x006541e4);
    /* 006541e4: mov ecx, dword ptr [0xa8f724] */ r_ecx = R32((u32)(0xa8f724u));
    /* 006541ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006541ec: je 0x654209 */ if (fZ) goto L_00654209;
L_006541ee:; BB(0x006541ee);
    /* 006541ee: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x6541f3u); f_00829de0();
    /* 006541f3: push dword ptr [0xa8f724] */ { u32 v = R32((u32)(0xa8f724u)); r_esp -= 4; W32(r_esp, v); }
    /* 006541f9: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6541feu); f_0082e960();
    /* 006541fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006541ff: mov dword ptr [0xa8f724], 0 */ W32((u32)(0xa8f724u), 0x0u);
L_00654209:; BB(0x00654209);
    /* 00654209: mov ecx, dword ptr [0xa8f728] */ r_ecx = R32((u32)(0xa8f728u));
    /* 0065420f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00654211: je 0x654226 */ if (fZ) goto L_00654226;
L_00654213:; BB(0x00654213);
    /* 00654213: je 0x65421c */ if (fZ) goto L_0065421c;
L_00654215:; BB(0x00654215);
    /* 00654215: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654217: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x65421cu); f_004066a8();
L_0065421c:; BB(0x0065421c);
    /* 0065421c: mov dword ptr [0xa8f728], 0 */ W32((u32)(0xa8f728u), 0x0u);
L_00654226:; BB(0x00654226);
    /* 00654226: ret  */ FN_RET(0x006541e4); r_esp += 4; return;
}

void f_00654228(void)
{
    FN_ENTER(0x00654228);
    /* 00654228: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00654229: mov ebp, esp */ r_ebp = r_esp;
    /* 0065422b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065422d: push 0x8e6d08 */ { u32 v = 0x8e6d08u; r_esp -= 4; W32(r_esp, v); }
    /* 00654232: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00654238: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654239: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00654240: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00654243: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00654246: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00654249: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065424c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065424f: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00654254: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065425b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x654260u); f_005caba4();
    /* 00654260: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00654261: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00654264: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654266: je 0x65429f */ if (fZ) goto L_0065429f;
L_00654268:; BB(0x00654268);
    /* 00654268: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065426f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00654276: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654279: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065427f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654282: call 0x6542a4 */ r_esp -= 4; W32(r_esp, 0x654287u); f_006542a4();
    /* 00654287: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065428a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00654291:; BB(0x00654291);
    /* 00654291: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00654294: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065429b: mov esp, ebp */ r_esp = r_ebp;
    /* 0065429d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065429e: ret  */ FN_RET(0x00654228); r_esp += 4; return;
L_0065429f:; BB(0x0065429f);
    /* 0065429f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006542a1: jmp 0x654291 */ goto L_00654291;
}

void f_006542a4(void) /* sub_6542A4 */
{
    FN_ENTER(0x006542a4);
    /* 006542a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006542a5: mov ebp, esp */ r_ebp = r_esp;
    /* 006542a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006542a9: push 0x8e6d24 */ { u32 v = 0x8e6d24u; r_esp -= 4; W32(r_esp, v); }
    /* 006542ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006542b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006542b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006542bc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006542bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006542c2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006542c5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006542c8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006542cb: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006542ce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006542d1: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006542d4: call 0x653c74 */ r_esp -= 4; W32(r_esp, 0x6542d9u); f_00653c74();
    /* 006542d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006542e0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006542e3: mov dword ptr [eax], 0xb31ff8 */ W32((u32)(r_eax), 0xb31ff8u);
    /* 006542e9: mov ecx, dword ptr [0xa8f728] */ r_ecx = R32((u32)(0xa8f728u));
    /* 006542ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006542f1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6542f6u); f_005b8610();
    /* 006542f6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006542f9: mov ecx, dword ptr [0xa8f728] */ r_ecx = R32((u32)(0xa8f728u));
    /* 006542ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654301: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00654307: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x65430cu); f_005b8638();
    /* 0065430c: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065430f: mov ecx, dword ptr [0xa8f728] */ r_ecx = R32((u32)(0xa8f728u));
    /* 00654315: mov esi, dword ptr [ebx + 0x84] */ r_esi = R32((u32)(r_ebx+0x84u));
    /* 0065431b: mov dword ptr [ebx + 0x9c], eax */ W32((u32)(r_ebx+0x9cu), r_eax);
    /* 00654321: mov eax, 2 */ r_eax = 0x2u;
    /* 00654326: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00654329: mov edx, 0 */ r_edx = 0x0u;
    /* 0065432e: jl 0x654332 */ if ((fS!=fO)) goto L_00654332;
L_00654330:; BB(0x00654330);
    /* 00654330: mov esi, eax */ r_esi = r_eax;
L_00654332:; BB(0x00654332);
    /* 00654332: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00654334: jg 0x654338 */ if ((!fZ&&fS==fO)) goto L_00654338;
L_00654336:; BB(0x00654336);
    /* 00654336: mov esi, edx */ r_esi = r_edx;
L_00654338:; BB(0x00654338);
    /* 00654338: mov dword ptr [ebx + 0xc8], esi */ W32((u32)(r_ebx+0xc8u), r_esi);
    /* 0065433e: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 00654341: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00654343: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00654345: push dword ptr [edi*8 + 0x937320] */ { u32 v = R32((u32)(r_edi*8+0x937320u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065434c: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x654351u); f_005b8638();
    /* 00654351: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654354: mov dword ptr [ecx + 0xa4], 0 */ W32((u32)(r_ecx+0xa4u), 0x0u);
    /* 0065435e: mov dword ptr [ecx + 0xa0], eax */ W32((u32)(r_ecx+0xa0u), r_eax);
    /* 00654364: mov dword ptr [ecx + 0xa8], 0 */ W32((u32)(r_ecx+0xa8u), 0x0u);
    /* 0065436e: call 0x656460 */ r_esp -= 4; W32(r_esp, 0x654373u); f_00656460();
    /* 00654373: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654376: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00654379: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065437c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065437f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00654382: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00654389: mov esp, ebp */ r_esp = r_ebp;
    /* 0065438b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065438c: ret 8 */ FN_RET(0x006542a4); r_esp += 12; return;
}

void f_00654390(void) /* sub_654390 */
{
    FN_ENTER(0x00654390);
    /* 00654390: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00654391: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00654394: mov edi, ecx */ r_edi = r_ecx;
    /* 00654396: mov eax, dword ptr [edi + 0xc8] */ r_eax = R32((u32)(r_edi+0xc8u));
    /* 0065439c: fld dword ptr [edi + 0xa4] */ FPUSH(R_F32((u32)(r_edi+0xa4u)));
    /* 006543a2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006543a5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006543a7: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006543a9: fadd dword ptr [edx*8 + 0x937324] */ ST(0) = ST(0) + R_F32((u32)(r_edx*8+0x937324u));
    /* 006543b0: mov ecx, edi */ r_ecx = r_edi;
    /* 006543b2: fstp dword ptr [edi + 0xa4] */ W_F32((u32)(r_edi+0xa4u), ST(0)); FPOP();
    /* 006543b8: call 0x654420 */ r_esp -= 4; W32(r_esp, 0x6543bdu); f_00654420();
    /* 006543bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006543bf: jne 0x6543cb */ if (!fZ) goto L_006543cb;
L_006543c1:; BB(0x006543c1);
    /* 006543c1: mov dword ptr [edi + 0xa4], 0 */ W32((u32)(r_edi+0xa4u), 0x0u);
L_006543cb:; BB(0x006543cb);
    /* 006543cb: mov edx, dword ptr [edi + 0xc8] */ r_edx = R32((u32)(r_edi+0xc8u));
    /* 006543d1: fld dword ptr [edi + 0xa8] */ FPUSH(R_F32((u32)(r_edi+0xa8u)));
    /* 006543d7: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006543da: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006543dc: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006543de: fadd dword ptr [eax*8 + 0x937328] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0x937328u));
    /* 006543e5: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 006543eb: fst dword ptr [edi + 0xa8] */ W_F32((u32)(r_edi+0xa8u), ST(0));
    /* 006543f1: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 006543f4: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006543f7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006543fa: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006543fd: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00654400: fadd dword ptr [eax*4 + 0x937458] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x937458u));
    /* 00654407: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00654409: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065440b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065440c: jae 0x654418 */ if (!fC) goto L_00654418;
L_0065440e:; BB(0x0065440e);
    /* 0065440e: mov dword ptr [edi + 0xa8], 0 */ W32((u32)(r_edi+0xa8u), 0x0u);
L_00654418:; BB(0x00654418);
    /* 00654418: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065441b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065441c: ret  */ FN_RET(0x00654390); r_esp += 4; return;
}

void f_00654420(void) /* sub_654420 */
{
    FN_ENTER(0x00654420);
    /* 00654420: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00654421: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00654422: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00654423: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00654424: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00654427: mov esi, ecx */ r_esi = r_ecx;
    /* 00654429: mov eax, dword ptr [esi + 0xc8] */ r_eax = R32((u32)(r_esi+0xc8u));
    /* 0065442f: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00654432: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00654434: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00654436: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00654439: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065443b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065443d: mov eax, dword ptr [edx + 0x937334] */ r_eax = R32((u32)(r_edx+0x937334u));
    /* 00654443: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00654445: jne 0x654454 */ if (!fZ) goto L_00654454;
L_00654447:; BB(0x00654447);
    /* 00654447: mov eax, 1 */ r_eax = 0x1u;
    /* 0065444c: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065444f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00654450: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00654451: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00654452: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00654453: ret  */ FN_RET(0x00654420); r_esp += 4; return;
L_00654454:; BB(0x00654454);
    /* 00654454: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00654457: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654458: push dword ptr [esi + 0xa4] */ { u32 v = R32((u32)(r_esi+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065445e: mov ecx, esi */ r_ecx = r_esi;
    /* 00654460: push dword ptr [esi + 0xa0] */ { u32 v = R32((u32)(r_esi+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654466: push dword ptr [esi + 0x98] */ { u32 v = R32((u32)(r_esi+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065446c: call 0x653fc4 */ r_esp -= 4; W32(r_esp, 0x654471u); f_00653fc4();
    /* 00654471: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00654474: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00654478: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0065447c: mov ebp, dword ptr [esi + 0x98] */ r_ebp = R32((u32)(r_esi+0x98u));
    /* 00654482: mov dword ptr [esi + 0xac], eax */ W32((u32)(r_esi+0xacu), r_eax);
    /* 00654488: mov eax, dword ptr [esi + 0xa0] */ r_eax = R32((u32)(r_esi+0xa0u));
    /* 0065448e: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 00654494: mov dword ptr [esi + 0xb4], ebx */ W32((u32)(r_esi+0xb4u), r_ebx);
    /* 0065449a: fld dword ptr [edi*8 + 0x93732c] */ FPUSH(R_F32((u32)(r_edi*8+0x93732cu)));
    /* 006544a1: fadd dword ptr [esi + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa4u));
    /* 006544a7: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006544aa: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006544ae: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006544b1: mov ecx, esi */ r_ecx = r_esi;
    /* 006544b3: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006544b7: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 006544bb: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006544bf: call 0x653fc4 */ r_esp -= 4; W32(r_esp, 0x6544c4u); f_00653fc4();
    /* 006544c4: mov ebp, eax */ r_ebp = r_eax;
    /* 006544c6: movsx edx, word ptr [esi + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x1eu));
    /* 006544ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006544cc: je 0x654525 */ if (fZ) goto L_00654525;
L_006544ce:; BB(0x006544ce);
    /* 006544ce: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 006544d2: mov ebx, dword ptr [esi + 0xac] */ r_ebx = R32((u32)(r_esi+0xacu));
    /* 006544d8: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 006544de: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 006544e2: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006544e6: mov edx, dword ptr [esi + 0xb4] */ r_edx = R32((u32)(r_esi+0xb4u));
    /* 006544ec: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006544f0: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 006544f3: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x6544f8u); f_0082ebac();
    /* 006544f8: fld dword ptr [0x937600] */ FPUSH(R_F32((u32)(0x937600u)));
    /* 006544fe: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 00654502: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00654506: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0065450a: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 0065450f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00654510: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x654515u); f_00780630();
    /* 00654515: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654518: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065451a: je 0x654525 */ if (fZ) goto L_00654525;
L_0065451c:; BB(0x0065451c);
    /* 0065451c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0065451f: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 00654522: mov dword ptr [esi + 0x3c], ebx */ W32((u32)(r_esi+0x3cu), r_ebx);
L_00654525:; BB(0x00654525);
    /* 00654525: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00654529: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0065452d: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 00654531: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00654535: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00654539: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0065453d: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00654541: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00654544: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x654549u); f_0082f9c4();
    /* 00654549: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0065454d: lea ebx, [esp + 0x34] */ r_ebx = (u32)(r_esp+0x34u);
    /* 00654551: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 00654555: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00654556: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00654557: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654558: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x65455du); f_007a8d98();
    /* 0065455d: push dword ptr [edi*8 + 0x937330] */ { u32 v = R32((u32)(r_edi*8+0x937330u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654564: push dword ptr [esp + 0x44] */ { u32 v = R32((u32)(r_esp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654568: push dword ptr [esi + 0xbc] */ { u32 v = R32((u32)(r_esi+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0065456e: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x654573u); f_007a8c74();
    /* 00654573: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654576: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0065457a: fsub dword ptr [esp] */ ST(0) = ST(0) - R_F32((u32)(r_esp));
    /* 0065457d: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00654581: fsub dword ptr [esp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x8u));
    /* 00654585: mov ebx, dword ptr [esi + 0xb8] */ r_ebx = R32((u32)(r_esi+0xb8u));
    /* 0065458b: mov dword ptr [esi + 0xbc], eax */ W32((u32)(r_esi+0xbcu), r_eax);
    /* 00654591: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00654593: fmul qword ptr [0x937450] */ ST(0) = ST(0) * R_F64((u32)(0x937450u));
    /* 00654599: fdiv qword ptr [0x937448] */ ST(0) = ST(0) / R_F64((u32)(0x937448u));
    /* 0065459f: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 006545a3: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 006545a8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006545ad: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006545b1: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 006545b5: fistp dword ptr [esp + 0x48] */ W32((u32)(r_esp+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 006545b9: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 006545bd: mov eax, dword ptr [edi*8 + 0x937334] */ r_eax = R32((u32)(r_edi*8+0x937334u));
    /* 006545c4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006545c6: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 006545ca: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006545ce: jne 0x6545ee */ if (!fZ) goto L_006545ee;
L_006545d0:; BB(0x006545d0);
    /* 006545d0: push dword ptr [edi*8 + 0x937330] */ { u32 v = R32((u32)(r_edi*8+0x937330u)); r_esp -= 4; W32(r_esp, v); }
    /* 006545d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006545d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006545d9: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x6545deu); f_007a8c74();
    /* 006545de: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006545e1: mov dword ptr [esi + 0xb8], eax */ W32((u32)(r_esi+0xb8u), r_eax);
    /* 006545e7: mov eax, dword ptr [edi*8 + 0x937334] */ r_eax = R32((u32)(r_edi*8+0x937334u));
L_006545ee:; BB(0x006545ee);
    /* 006545ee: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006545f0: jne 0x6546e8 */ if (!fZ) goto L_006546e8;
L_006545f6:; BB(0x006545f6);
    /* 006545f6: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 006545fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006545fb: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x654600u); f_007a900c();
    /* 00654600: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654603: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00654606: jle 0x654658 */ if ((fZ||fS!=fO)) goto L_00654658;
L_00654608:; BB(0x00654608);
    /* 00654608: mov edi, dword ptr [esi + 0xc4] */ r_edi = R32((u32)(r_esi+0xc4u));
    /* 0065460e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00654610: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00654612: mov ebx, 0xfffffe00 */ r_ebx = 0xfffffe00u;
    /* 00654617: jl 0x65461b */ if ((fS!=fO)) goto L_0065461b;
L_00654619:; BB(0x00654619);
    /* 00654619: mov edi, edx */ r_edi = r_edx;
L_0065461b:; BB(0x0065461b);
    /* 0065461b: mov edx, dword ptr [esi + 0xc0] */ r_edx = R32((u32)(r_esi+0xc0u));
    /* 00654621: add edi, -0x40 */ {  u32 a = r_edi; u32 b = 0xffffffc0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00654624: cmp edi, 0xfffffe00 */ {  u32 a = r_edi; u32 b = 0xfffffe00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065462a: jg 0x65462e */ if ((!fZ&&fS==fO)) goto L_0065462e;
L_0065462c:; BB(0x0065462c);
    /* 0065462c: mov edi, ebx */ r_edi = r_ebx;
L_0065462e:; BB(0x0065462e);
    /* 0065462e: mov dword ptr [esi + 0xc4], edi */ W32((u32)(r_esi+0xc4u), r_edi);
    /* 00654634: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00654636: cmp edx, 0xffffe000 */ {  u32 a = r_edx; u32 b = 0xffffe000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065463c: jl 0x654649 */ if ((fS!=fO)) goto L_00654649;
L_0065463e:; BB(0x0065463e);
    /* 0065463e: mov dword ptr [esi + 0xc0], edx */ W32((u32)(r_esi+0xc0u), r_edx);
    /* 00654644: jmp 0x6546e8 */ goto L_006546e8;
L_00654649:; BB(0x00654649);
    /* 00654649: mov dword ptr [esi + 0xc0], 0xffffe000 */ W32((u32)(r_esi+0xc0u), 0xffffe000u);
    /* 00654653: jmp 0x6546e8 */ goto L_006546e8;
L_00654658:; BB(0x00654658);
    /* 00654658: cmp eax, -0x30 */ {  u32 a = r_eax; u32 b = 0xffffffd0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065465b: jge 0x6546a7 */ if ((fS==fO)) goto L_006546a7;
L_0065465d:; BB(0x0065465d);
    /* 0065465d: mov edi, dword ptr [esi + 0xc4] */ r_edi = R32((u32)(r_esi+0xc4u));
    /* 00654663: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00654665: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00654667: mov ebx, 0x200 */ r_ebx = 0x200u;
    /* 0065466c: jg 0x654670 */ if ((!fZ&&fS==fO)) goto L_00654670;
L_0065466e:; BB(0x0065466e);
    /* 0065466e: mov edi, edx */ r_edi = r_edx;
L_00654670:; BB(0x00654670);
    /* 00654670: mov edx, dword ptr [esi + 0xc0] */ r_edx = R32((u32)(r_esi+0xc0u));
    /* 00654676: add edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00654679: cmp edi, 0x200 */ {  u32 a = r_edi; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065467f: jl 0x654683 */ if ((fS!=fO)) goto L_00654683;
L_00654681:; BB(0x00654681);
    /* 00654681: mov edi, ebx */ r_edi = r_ebx;
L_00654683:; BB(0x00654683);
    /* 00654683: mov dword ptr [esi + 0xc4], edi */ W32((u32)(r_esi+0xc4u), r_edi);
    /* 00654689: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065468b: cmp edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00654691: jg 0x65469b */ if ((!fZ&&fS==fO)) goto L_0065469b;
L_00654693:; BB(0x00654693);
    /* 00654693: mov dword ptr [esi + 0xc0], edx */ W32((u32)(r_esi+0xc0u), r_edx);
    /* 00654699: jmp 0x6546e8 */ goto L_006546e8;
L_0065469b:; BB(0x0065469b);
    /* 0065469b: mov dword ptr [esi + 0xc0], 0x2000 */ W32((u32)(r_esi+0xc0u), 0x2000u);
    /* 006546a5: jmp 0x6546e8 */ goto L_006546e8;
L_006546a7:; BB(0x006546a7);
    /* 006546a7: mov ebx, dword ptr [esi + 0xc0] */ r_ebx = R32((u32)(r_esi+0xc0u));
    /* 006546ad: mov dword ptr [esi + 0xc4], 0 */ W32((u32)(r_esi+0xc4u), 0x0u);
    /* 006546b7: cmp ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006546bd: jle 0x6546cd */ if ((fZ||fS!=fO)) goto L_006546cd;
L_006546bf:; BB(0x006546bf);
    /* 006546bf: add ebx, 0xffffff00 */ {  u32 a = r_ebx; u32 b = 0xffffff00u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006546c5: mov dword ptr [esi + 0xc0], ebx */ W32((u32)(r_esi+0xc0u), r_ebx);
    /* 006546cb: jmp 0x6546e8 */ goto L_006546e8;
L_006546cd:; BB(0x006546cd);
    /* 006546cd: mov edx, 0xffffff00 */ r_edx = 0xffffff00u;
    /* 006546d2: cmp ebx, 0xffffff00 */ {  u32 a = r_ebx; u32 b = 0xffffff00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006546d8: jl 0x6546dc */ if ((fS!=fO)) goto L_006546dc;
L_006546da:; BB(0x006546da);
    /* 006546da: mov ebx, edx */ r_ebx = r_edx;
L_006546dc:; BB(0x006546dc);
    /* 006546dc: add ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006546e2: mov dword ptr [esi + 0xc0], ebx */ W32((u32)(r_esi+0xc0u), r_ebx);
L_006546e8:; BB(0x006546e8);
    /* 006546e8: mov eax, ebp */ r_eax = r_ebp;
    /* 006546ea: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006546ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006546ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006546ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006546f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006546f1: ret  */ FN_RET(0x00654420); r_esp += 4; return;
}

void f_006546f4(void) /* sub_6546F4 */
{
    FN_ENTER(0x006546f4);
    /* 006546f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006546f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006546f6: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006546f9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006546fb: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x654700u); f_004f7c84();
    /* 00654700: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654703: je 0x654773 */ if (fZ) goto L_00654773;
L_00654705:; BB(0x00654705);
    /* 00654705: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
L_00654708:; BB(0x00654708);
    /* 00654708: mov ecx, dword ptr [0xa8f724] */ r_ecx = R32((u32)(0xa8f724u));
    /* 0065470e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x654713u); f_00829cc8();
    /* 00654713: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x654718u); f_0082d7b0();
    /* 00654718: mov ecx, edi */ r_ecx = r_edi;
    /* 0065471a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65471fu); f_0082d838();
    /* 0065471f: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00654722: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00654724: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x654729u); f_0082d8bc();
    /* 00654729: lea ecx, [ebp + 0xac] */ r_ecx = (u32)(r_ebp+0xacu);
    /* 0065472f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x654734u); f_0082d838();
    /* 00654734: mov edx, dword ptr [ebp + 0xb8] */ r_edx = R32((u32)(r_ebp+0xb8u));
    /* 0065473a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065473c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x654741u); f_0082d8bc();
    /* 00654741: mov edx, dword ptr [ebp + 0xc0] */ r_edx = R32((u32)(r_ebp+0xc0u));
    /* 00654747: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00654749: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x65474eu); f_00830c04();
    /* 0065474e: push dword ptr [ebp + 0xa8] */ { u32 v = R32((u32)(r_ebp+0xa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654754: push dword ptr [ebp + 0x9c] */ { u32 v = R32((u32)(r_ebp+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0065475a: push dword ptr [ebp + 0x98] */ { u32 v = R32((u32)(r_ebp+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654760: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x654765u); f_0083046c();
    /* 00654765: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654768: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65476du); f_0082da80();
    /* 0065476d: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00654770: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00654771: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00654772: ret  */ FN_RET(0x006546f4); r_esp += 4; return;
L_00654773:; BB(0x00654773);
    /* 00654773: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 00654778: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065477a: je 0x654781 */ if (fZ) goto L_00654781;
L_0065477c:; BB(0x0065477c);
    /* 0065477c: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0065477f: jmp 0x654708 */ goto L_00654708;
L_00654781:; BB(0x00654781);
    /* 00654781: fld dword ptr [0x9375fc] */ FPUSH(R_F32((u32)(0x9375fcu)));
    /* 00654787: mov eax, dword ptr [ebp + 0x98] */ r_eax = R32((u32)(r_ebp+0x98u));
    /* 0065478d: mov ecx, dword ptr [ebp + 0xa0] */ r_ecx = R32((u32)(r_ebp+0xa0u));
    /* 00654793: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00654797: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 0065479b: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0065479f: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 006547a2: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 006547a6: mov edi, eax */ r_edi = r_eax;
    /* 006547a8: mov esi, ecx */ r_esi = r_ecx;
L_006547aa:; BB(0x006547aa);
    /* 006547aa: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 006547ae: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006547b1: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006547b4: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006547b7: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006547ba: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006547bd: fadd dword ptr [edx*4 + 0x937440] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x937440u));
    /* 006547c4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006547c6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006547c8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006547c9: jae 0x6547cd */ if (!fC) goto L_006547cd;
L_006547cb:; BB(0x006547cb);
    /* 006547cb: fst st(1) */ ST(1) = ST(0);
L_006547cd:; BB(0x006547cd);
    /* 006547cd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006547cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006547d0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006547d3: mov ecx, esi */ r_ecx = r_esi;
    /* 006547d5: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x6547dau); f_008304c8();
    /* 006547da: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 006547de: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 006547e2: lea ebx, [esp + 0x20] */ r_ebx = (u32)(r_esp+0x20u);
    /* 006547e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006547e7: mov ecx, edi */ r_ecx = r_edi;
    /* 006547e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006547ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006547eb: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 006547ef: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x6547f4u); f_0082facc();
    /* 006547f4: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 006547f8: fadd dword ptr [0x9375f8] */ ST(0) = ST(0) + R_F32((u32)(0x9375f8u));
    /* 006547fe: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00654801: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 00654805: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0065480a: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065480d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00654811: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00654815: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00654818: fadd dword ptr [edx*4 + 0x937440] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x937440u));
    /* 0065481f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00654821: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00654823: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00654824: jae 0x65482a */ if (!fC) goto L_0065482a;
L_00654826:; BB(0x00654826);
    /* 00654826: fst st(1) */ ST(1) = ST(0);
    /* 00654828: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0065482a:; BB(0x0065482a);
    /* 0065482a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065482c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065482d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00654830: mov ecx, esi */ r_ecx = r_esi;
    /* 00654832: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x654837u); f_008304c8();
    /* 00654837: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 0065483b: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0065483f: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 00654843: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00654844: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654845: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00654846: mov ecx, edi */ r_ecx = r_edi;
    /* 00654848: lea edx, [esp + 0x70] */ r_edx = (u32)(r_esp+0x70u);
    /* 0065484c: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x654851u); f_0082facc();
    /* 00654851: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x654856u); f_0082d7b0();
    /* 00654856: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0065485a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65485fu); f_0082d838();
    /* 0065485f: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00654862: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00654864: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x654869u); f_0082d8bc();
    /* 00654869: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 0065486d: lea eax, [esp + 0x64] */ r_eax = (u32)(r_esp+0x64u);
    /* 00654871: mov edx, 0xfff0f0f0 */ r_edx = 0xfff0f0f0u;
    /* 00654876: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00654877: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00654878: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654879: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065487a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x65487fu); f_0061cdb0();
    /* 0065487f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654882: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x654887u); f_0082da80();
    /* 00654887: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654889: jne 0x6547aa */ if (!fZ) goto L_006547aa;
L_0065488f:; BB(0x0065488f);
    /* 0065488f: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00654893: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00654897: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0065489b: jmp 0x654708 */ goto L_00654708;
}

void f_006548a0(void) /* sub_6548A0 */
{
    FN_ENTER(0x006548a0);
    /* 006548a0: mov ecx, dword ptr [0xa8f71c] */ r_ecx = R32((u32)(0xa8f71cu));
    /* 006548a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006548a8: je 0x6548c5 */ if (fZ) goto L_006548c5;
L_006548aa:; BB(0x006548aa);
    /* 006548aa: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x6548afu); f_00829de0();
    /* 006548af: push dword ptr [0xa8f71c] */ { u32 v = R32((u32)(0xa8f71cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006548b5: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6548bau); f_0082e960();
    /* 006548ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006548bb: mov dword ptr [0xa8f71c], 0 */ W32((u32)(0xa8f71cu), 0x0u);
L_006548c5:; BB(0x006548c5);
    /* 006548c5: mov ecx, dword ptr [0xa8f720] */ r_ecx = R32((u32)(0xa8f720u));
    /* 006548cb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006548cd: je 0x6548e2 */ if (fZ) goto L_006548e2;
L_006548cf:; BB(0x006548cf);
    /* 006548cf: je 0x6548d8 */ if (fZ) goto L_006548d8;
L_006548d1:; BB(0x006548d1);
    /* 006548d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006548d3: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6548d8u); f_004066a8();
L_006548d8:; BB(0x006548d8);
    /* 006548d8: mov dword ptr [0xa8f720], 0 */ W32((u32)(0xa8f720u), 0x0u);
L_006548e2:; BB(0x006548e2);
    /* 006548e2: ret  */ FN_RET(0x006548a0); r_esp += 4; return;
}

void f_006548e4(void)
{
    FN_ENTER(0x006548e4);
    /* 006548e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006548e5: mov ebp, esp */ r_ebp = r_esp;
    /* 006548e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006548e9: push 0x8e6d4c */ { u32 v = 0x8e6d4cu; r_esp -= 4; W32(r_esp, v); }
    /* 006548ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006548f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006548f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006548fc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006548ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00654902: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00654905: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00654908: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065490b: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00654910: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00654917: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65491cu); f_005caba4();
    /* 0065491c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065491d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00654920: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654922: je 0x65495b */ if (fZ) goto L_0065495b;
L_00654924:; BB(0x00654924);
    /* 00654924: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065492b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00654932: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654935: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065493b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065493e: call 0x654960 */ r_esp -= 4; W32(r_esp, 0x654943u); f_00654960();
    /* 00654943: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654946: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065494d:; BB(0x0065494d);
    /* 0065494d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00654950: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00654957: mov esp, ebp */ r_esp = r_ebp;
    /* 00654959: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065495a: ret  */ FN_RET(0x006548e4); r_esp += 4; return;
L_0065495b:; BB(0x0065495b);
    /* 0065495b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065495d: jmp 0x65494d */ goto L_0065494d;
}

void f_00654960(void) /* sub_654960 */
{
    FN_ENTER(0x00654960);
    /* 00654960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00654961: mov ebp, esp */ r_ebp = r_esp;
    /* 00654963: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654965: push 0x8e6d68 */ { u32 v = 0x8e6d68u; r_esp -= 4; W32(r_esp, v); }
    /* 0065496a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00654970: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654971: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00654978: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065497b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065497e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00654981: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00654984: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00654987: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0065498a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065498d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00654990: call 0x653c74 */ r_esp -= 4; W32(r_esp, 0x654995u); f_00653c74();
    /* 00654995: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065499c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065499f: mov dword ptr [eax], 0xb3202c */ W32((u32)(r_eax), 0xb3202cu);
    /* 006549a5: mov ecx, dword ptr [0xa8f720] */ r_ecx = R32((u32)(0xa8f720u));
    /* 006549ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006549ad: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6549b2u); f_005b8610();
    /* 006549b2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006549b5: mov ecx, dword ptr [0xa8f720] */ r_ecx = R32((u32)(0xa8f720u));
    /* 006549bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006549bd: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 006549c3: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6549c8u); f_005b8638();
    /* 006549c8: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006549cb: mov ecx, dword ptr [0xa8f720] */ r_ecx = R32((u32)(0xa8f720u));
    /* 006549d1: mov esi, dword ptr [ebx + 0x84] */ r_esi = R32((u32)(r_ebx+0x84u));
    /* 006549d7: mov dword ptr [ebx + 0x9c], eax */ W32((u32)(r_ebx+0x9cu), r_eax);
    /* 006549dd: mov eax, 2 */ r_eax = 0x2u;
    /* 006549e2: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006549e5: mov edx, 0 */ r_edx = 0x0u;
    /* 006549ea: jl 0x6549ee */ if ((fS!=fO)) goto L_006549ee;
L_006549ec:; BB(0x006549ec);
    /* 006549ec: mov esi, eax */ r_esi = r_eax;
L_006549ee:; BB(0x006549ee);
    /* 006549ee: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006549f0: jg 0x6549f4 */ if ((!fZ&&fS==fO)) goto L_006549f4;
L_006549f2:; BB(0x006549f2);
    /* 006549f2: mov esi, edx */ r_esi = r_edx;
L_006549f4:; BB(0x006549f4);
    /* 006549f4: mov dword ptr [ebx + 0xc8], esi */ W32((u32)(r_ebx+0xc8u), r_esi);
    /* 006549fa: lea edi, [esi + esi*4] */ r_edi = (u32)(r_esi+r_esi*4);
    /* 006549fd: push dword ptr [edi*4 + 0x937490] */ { u32 v = R32((u32)(r_edi*4+0x937490u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654a04: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x654a09u); f_005b8638();
    /* 00654a09: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654a0c: mov dword ptr [ecx + 0xa4], 0 */ W32((u32)(r_ecx+0xa4u), 0x0u);
    /* 00654a16: mov dword ptr [ecx + 0xa0], eax */ W32((u32)(r_ecx+0xa0u), r_eax);
    /* 00654a1c: mov dword ptr [ecx + 0xa8], 0 */ W32((u32)(r_ecx+0xa8u), 0x0u);
    /* 00654a26: call 0x656280 */ r_esp -= 4; W32(r_esp, 0x654a2bu); f_00656280();
    /* 00654a2b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654a2e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00654a31: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00654a34: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00654a37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00654a3a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00654a41: mov esp, ebp */ r_esp = r_ebp;
    /* 00654a43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00654a44: ret 8 */ FN_RET(0x00654960); r_esp += 12; return;
}

void f_00654a48(void) /* sub_654A48 */
{
    FN_ENTER(0x00654a48);
    /* 00654a48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00654a49: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00654a4c: mov edi, ecx */ r_edi = r_ecx;
    /* 00654a4e: mov eax, dword ptr [edi + 0xc8] */ r_eax = R32((u32)(r_edi+0xc8u));
    /* 00654a54: fld dword ptr [edi + 0xa4] */ FPUSH(R_F32((u32)(r_edi+0xa4u)));
    /* 00654a5a: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00654a5d: fadd dword ptr [edx*4 + 0x937494] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x937494u));
    /* 00654a64: fstp dword ptr [edi + 0xa4] */ W_F32((u32)(r_edi+0xa4u), ST(0)); FPOP();
    /* 00654a6a: mov ecx, edi */ r_ecx = r_edi;
    /* 00654a6c: call 0x654ad0 */ r_esp -= 4; W32(r_esp, 0x654a71u); f_00654ad0();
    /* 00654a71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654a73: jne 0x654a7f */ if (!fZ) goto L_00654a7f;
L_00654a75:; BB(0x00654a75);
    /* 00654a75: mov dword ptr [edi + 0xa4], 0 */ W32((u32)(r_edi+0xa4u), 0x0u);
L_00654a7f:; BB(0x00654a7f);
    /* 00654a7f: mov edx, dword ptr [edi + 0xc8] */ r_edx = R32((u32)(r_edi+0xc8u));
    /* 00654a85: fld dword ptr [edi + 0xa8] */ FPUSH(R_F32((u32)(r_edi+0xa8u)));
    /* 00654a8b: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 00654a8e: fadd dword ptr [eax*4 + 0x937498] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x937498u));
    /* 00654a95: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 00654a9b: fst dword ptr [edi + 0xa8] */ W_F32((u32)(r_edi+0xa8u), ST(0));
    /* 00654aa1: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00654aa4: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00654aa7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00654aaa: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00654aad: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00654ab0: fadd dword ptr [eax*4 + 0x937438] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x937438u));
    /* 00654ab7: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00654ab9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00654abb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00654abc: jae 0x654ac8 */ if (!fC) goto L_00654ac8;
L_00654abe:; BB(0x00654abe);
    /* 00654abe: mov dword ptr [edi + 0xa8], 0 */ W32((u32)(r_edi+0xa8u), 0x0u);
L_00654ac8:; BB(0x00654ac8);
    /* 00654ac8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00654acb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00654acc: ret  */ FN_RET(0x00654a48); r_esp += 4; return;
}

void f_00654ad0(void) /* sub_654AD0 */
{
    FN_ENTER(0x00654ad0);
    /* 00654ad0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00654ad1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00654ad2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00654ad3: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00654ad6: mov edi, ecx */ r_edi = r_ecx;
    /* 00654ad8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00654adb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654adc: mov ecx, edi */ r_ecx = r_edi;
    /* 00654ade: push dword ptr [edi + 0xa4] */ { u32 v = R32((u32)(r_edi+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654ae4: push dword ptr [edi + 0xa0] */ { u32 v = R32((u32)(r_edi+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654aea: push dword ptr [edi + 0x98] */ { u32 v = R32((u32)(r_edi+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654af0: call 0x653fc4 */ r_esp -= 4; W32(r_esp, 0x654af5u); f_00653fc4();
    /* 00654af5: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00654af8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00654afc: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00654b00: mov esi, dword ptr [edi + 0x98] */ r_esi = R32((u32)(r_edi+0x98u));
    /* 00654b06: fld dword ptr [edi + 0xa4] */ FPUSH(R_F32((u32)(r_edi+0xa4u)));
    /* 00654b0c: mov dword ptr [edi + 0xac], eax */ W32((u32)(r_edi+0xacu), r_eax);
    /* 00654b12: mov eax, dword ptr [edi + 0xa0] */ r_eax = R32((u32)(r_edi+0xa0u));
    /* 00654b18: mov dword ptr [edi + 0xb0], edx */ W32((u32)(r_edi+0xb0u), r_edx);
    /* 00654b1e: mov dword ptr [edi + 0xb4], ebx */ W32((u32)(r_edi+0xb4u), r_ebx);
    /* 00654b24: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654b27: mov ecx, edi */ r_ecx = r_edi;
    /* 00654b29: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00654b2c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00654b30: mov eax, dword ptr [edi + 0xc8] */ r_eax = R32((u32)(r_edi+0xc8u));
    /* 00654b36: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00654b39: fadd dword ptr [eax*4 + 0x93749c] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x93749cu));
    /* 00654b40: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00654b44: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 00654b48: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00654b4c: call 0x653fc4 */ r_esp -= 4; W32(r_esp, 0x654b51u); f_00653fc4();
    /* 00654b51: mov esi, eax */ r_esi = r_eax;
    /* 00654b53: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00654b57: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00654b5b: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00654b5f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00654b63: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00654b67: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00654b6b: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00654b6f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00654b72: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x654b77u); f_0082f9c4();
    /* 00654b77: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00654b7b: lea ebx, [esp + 0x28] */ r_ebx = (u32)(r_esp+0x28u);
    /* 00654b7f: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00654b83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00654b84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00654b85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654b86: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x654b8bu); f_007a8d98();
    /* 00654b8b: mov edx, dword ptr [edi + 0xc8] */ r_edx = R32((u32)(r_edi+0xc8u));
    /* 00654b91: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 00654b94: push dword ptr [ebx*4 + 0x9374a0] */ { u32 v = R32((u32)(r_ebx*4+0x9374a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654b9b: push dword ptr [esp + 0x38] */ { u32 v = R32((u32)(r_esp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654b9f: push dword ptr [edi + 0xbc] */ { u32 v = R32((u32)(r_edi+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00654ba5: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x654baau); f_007a8c74();
    /* 00654baa: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654bad: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00654bb1: fsub dword ptr [esp] */ ST(0) = ST(0) - R_F32((u32)(r_esp));
    /* 00654bb4: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00654bb8: fsub dword ptr [esp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x8u));
    /* 00654bbc: mov ebx, dword ptr [edi + 0xb8] */ r_ebx = R32((u32)(r_edi+0xb8u));
    /* 00654bc2: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 00654bc8: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00654bca: fmul qword ptr [0x937430] */ ST(0) = ST(0) * R_F64((u32)(0x937430u));
    /* 00654bd0: fdiv qword ptr [0x937428] */ ST(0) = ST(0) / R_F64((u32)(0x937428u));
    /* 00654bd6: mov edx, dword ptr [edi + 0xc8] */ r_edx = R32((u32)(r_edi+0xc8u));
    /* 00654bdc: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 00654be0: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 00654be5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00654bea: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00654bee: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 00654bf2: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00654bf6: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00654bfa: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00654bfe: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 00654c01: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00654c05: push dword ptr [edx*4 + 0x9374a0] */ { u32 v = R32((u32)(r_edx*4+0x9374a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654c0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654c0d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00654c0e: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x654c13u); f_007a8c74();
    /* 00654c13: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654c17: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00654c18: mov dword ptr [edi + 0xb8], eax */ W32((u32)(r_edi+0xb8u), r_eax);
    /* 00654c1e: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x654c23u); f_007a900c();
    /* 00654c23: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654c26: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00654c29: jle 0x654c7a */ if ((fZ||fS!=fO)) goto L_00654c7a;
L_00654c2b:; BB(0x00654c2b);
    /* 00654c2b: mov eax, dword ptr [edi + 0xc4] */ r_eax = R32((u32)(r_edi+0xc4u));
    /* 00654c31: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00654c33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00654c35: mov ebx, 0xfffffe00 */ r_ebx = 0xfffffe00u;
    /* 00654c3a: jl 0x654c3e */ if ((fS!=fO)) goto L_00654c3e;
L_00654c3c:; BB(0x00654c3c);
    /* 00654c3c: mov eax, edx */ r_eax = r_edx;
L_00654c3e:; BB(0x00654c3e);
    /* 00654c3e: mov edx, dword ptr [edi + 0xc0] */ r_edx = R32((u32)(r_edi+0xc0u));
    /* 00654c44: add eax, -0x40 */ {  u32 a = r_eax; u32 b = 0xffffffc0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00654c47: cmp eax, 0xfffffe00 */ {  u32 a = r_eax; u32 b = 0xfffffe00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00654c4c: jg 0x654c50 */ if ((!fZ&&fS==fO)) goto L_00654c50;
L_00654c4e:; BB(0x00654c4e);
    /* 00654c4e: mov eax, ebx */ r_eax = r_ebx;
L_00654c50:; BB(0x00654c50);
    /* 00654c50: mov dword ptr [edi + 0xc4], eax */ W32((u32)(r_edi+0xc4u), r_eax);
    /* 00654c56: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00654c58: cmp edx, 0xffffe000 */ {  u32 a = r_edx; u32 b = 0xffffe000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00654c5e: jl 0x654c6b */ if ((fS!=fO)) goto L_00654c6b;
L_00654c60:; BB(0x00654c60);
    /* 00654c60: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
    /* 00654c66: jmp 0x654d09 */ goto L_00654d09;
L_00654c6b:; BB(0x00654c6b);
    /* 00654c6b: mov dword ptr [edi + 0xc0], 0xffffe000 */ W32((u32)(r_edi+0xc0u), 0xffffe000u);
    /* 00654c75: jmp 0x654d09 */ goto L_00654d09;
L_00654c7a:; BB(0x00654c7a);
    /* 00654c7a: cmp eax, -0x30 */ {  u32 a = r_eax; u32 b = 0xffffffd0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00654c7d: jge 0x654cc8 */ if ((fS==fO)) goto L_00654cc8;
L_00654c7f:; BB(0x00654c7f);
    /* 00654c7f: mov eax, dword ptr [edi + 0xc4] */ r_eax = R32((u32)(r_edi+0xc4u));
    /* 00654c85: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00654c87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00654c89: mov ebx, 0x200 */ r_ebx = 0x200u;
    /* 00654c8e: jg 0x654c92 */ if ((!fZ&&fS==fO)) goto L_00654c92;
L_00654c90:; BB(0x00654c90);
    /* 00654c90: mov eax, edx */ r_eax = r_edx;
L_00654c92:; BB(0x00654c92);
    /* 00654c92: mov edx, dword ptr [edi + 0xc0] */ r_edx = R32((u32)(r_edi+0xc0u));
    /* 00654c98: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00654c9b: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00654ca0: jl 0x654ca4 */ if ((fS!=fO)) goto L_00654ca4;
L_00654ca2:; BB(0x00654ca2);
    /* 00654ca2: mov eax, ebx */ r_eax = r_ebx;
L_00654ca4:; BB(0x00654ca4);
    /* 00654ca4: mov dword ptr [edi + 0xc4], eax */ W32((u32)(r_edi+0xc4u), r_eax);
    /* 00654caa: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00654cac: cmp edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00654cb2: jg 0x654cbc */ if ((!fZ&&fS==fO)) goto L_00654cbc;
L_00654cb4:; BB(0x00654cb4);
    /* 00654cb4: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
    /* 00654cba: jmp 0x654d09 */ goto L_00654d09;
L_00654cbc:; BB(0x00654cbc);
    /* 00654cbc: mov dword ptr [edi + 0xc0], 0x2000 */ W32((u32)(r_edi+0xc0u), 0x2000u);
    /* 00654cc6: jmp 0x654d09 */ goto L_00654d09;
L_00654cc8:; BB(0x00654cc8);
    /* 00654cc8: mov ebx, dword ptr [edi + 0xc0] */ r_ebx = R32((u32)(r_edi+0xc0u));
    /* 00654cce: mov dword ptr [edi + 0xc4], 0 */ W32((u32)(r_edi+0xc4u), 0x0u);
    /* 00654cd8: cmp ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00654cde: jle 0x654cee */ if ((fZ||fS!=fO)) goto L_00654cee;
L_00654ce0:; BB(0x00654ce0);
    /* 00654ce0: add ebx, 0xffffff00 */ {  u32 a = r_ebx; u32 b = 0xffffff00u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00654ce6: mov dword ptr [edi + 0xc0], ebx */ W32((u32)(r_edi+0xc0u), r_ebx);
    /* 00654cec: jmp 0x654d09 */ goto L_00654d09;
L_00654cee:; BB(0x00654cee);
    /* 00654cee: mov edx, 0xffffff00 */ r_edx = 0xffffff00u;
    /* 00654cf3: cmp ebx, 0xffffff00 */ {  u32 a = r_ebx; u32 b = 0xffffff00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00654cf9: jl 0x654cfd */ if ((fS!=fO)) goto L_00654cfd;
L_00654cfb:; BB(0x00654cfb);
    /* 00654cfb: mov ebx, edx */ r_ebx = r_edx;
L_00654cfd:; BB(0x00654cfd);
    /* 00654cfd: add ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00654d03: mov dword ptr [edi + 0xc0], ebx */ W32((u32)(r_edi+0xc0u), r_ebx);
L_00654d09:; BB(0x00654d09);
    /* 00654d09: mov eax, esi */ r_eax = r_esi;
    /* 00654d0b: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00654d0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00654d0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00654d10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00654d11: ret  */ FN_RET(0x00654ad0); r_esp += 4; return;
}

void f_00654d14(void) /* sub_654D14 */
{
    FN_ENTER(0x00654d14);
    /* 00654d14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00654d15: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00654d16: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00654d19: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00654d1b: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x654d20u); f_004f7c84();
    /* 00654d20: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654d23: je 0x654d93 */ if (fZ) goto L_00654d93;
L_00654d25:; BB(0x00654d25);
    /* 00654d25: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
L_00654d28:; BB(0x00654d28);
    /* 00654d28: mov ecx, dword ptr [0xa8f71c] */ r_ecx = R32((u32)(0xa8f71cu));
    /* 00654d2e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x654d33u); f_00829cc8();
    /* 00654d33: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x654d38u); f_0082d7b0();
    /* 00654d38: mov ecx, edi */ r_ecx = r_edi;
    /* 00654d3a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x654d3fu); f_0082d838();
    /* 00654d3f: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00654d42: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00654d44: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x654d49u); f_0082d8bc();
    /* 00654d49: lea ecx, [ebp + 0xac] */ r_ecx = (u32)(r_ebp+0xacu);
    /* 00654d4f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x654d54u); f_0082d838();
    /* 00654d54: mov edx, dword ptr [ebp + 0xb8] */ r_edx = R32((u32)(r_ebp+0xb8u));
    /* 00654d5a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00654d5c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x654d61u); f_0082d8bc();
    /* 00654d61: mov edx, dword ptr [ebp + 0xc0] */ r_edx = R32((u32)(r_ebp+0xc0u));
    /* 00654d67: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00654d69: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x654d6eu); f_00830c04();
    /* 00654d6e: push dword ptr [ebp + 0xa8] */ { u32 v = R32((u32)(r_ebp+0xa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654d74: push dword ptr [ebp + 0x9c] */ { u32 v = R32((u32)(r_ebp+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00654d7a: push dword ptr [ebp + 0x98] */ { u32 v = R32((u32)(r_ebp+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654d80: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x654d85u); f_0083046c();
    /* 00654d85: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654d88: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x654d8du); f_0082da80();
    /* 00654d8d: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00654d90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00654d91: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00654d92: ret  */ FN_RET(0x00654d14); r_esp += 4; return;
L_00654d93:; BB(0x00654d93);
    /* 00654d93: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 00654d98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654d9a: je 0x654da1 */ if (fZ) goto L_00654da1;
L_00654d9c:; BB(0x00654d9c);
    /* 00654d9c: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 00654d9f: jmp 0x654d28 */ goto L_00654d28;
L_00654da1:; BB(0x00654da1);
    /* 00654da1: fld dword ptr [0x9375e8] */ FPUSH(R_F32((u32)(0x9375e8u)));
    /* 00654da7: mov eax, dword ptr [ebp + 0x98] */ r_eax = R32((u32)(r_ebp+0x98u));
    /* 00654dad: mov ecx, dword ptr [ebp + 0xa0] */ r_ecx = R32((u32)(r_ebp+0xa0u));
    /* 00654db3: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00654db7: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00654dbb: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00654dbf: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 00654dc2: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00654dc6: mov edi, eax */ r_edi = r_eax;
    /* 00654dc8: mov esi, ecx */ r_esi = r_ecx;
L_00654dca:; BB(0x00654dca);
    /* 00654dca: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00654dce: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00654dd1: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00654dd4: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00654dd7: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00654dda: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00654ddd: fadd dword ptr [edx*4 + 0x937420] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x937420u));
    /* 00654de4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00654de6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00654de8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00654de9: jae 0x654ded */ if (!fC) goto L_00654ded;
L_00654deb:; BB(0x00654deb);
    /* 00654deb: fst st(1) */ ST(1) = ST(0);
L_00654ded:; BB(0x00654ded);
    /* 00654ded: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00654def: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00654df0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00654df3: mov ecx, esi */ r_ecx = r_esi;
    /* 00654df5: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x654dfau); f_008304c8();
    /* 00654dfa: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 00654dfe: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 00654e02: lea ebx, [esp + 0x20] */ r_ebx = (u32)(r_esp+0x20u);
    /* 00654e06: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00654e07: mov ecx, edi */ r_ecx = r_edi;
    /* 00654e09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00654e0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654e0b: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 00654e0f: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x654e14u); f_0082facc();
    /* 00654e14: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00654e18: fadd dword ptr [0x9375e4] */ ST(0) = ST(0) + R_F32((u32)(0x9375e4u));
    /* 00654e1e: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00654e21: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 00654e25: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00654e2a: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00654e2d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00654e31: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00654e35: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00654e38: fadd dword ptr [edx*4 + 0x937420] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x937420u));
    /* 00654e3f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00654e41: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00654e43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00654e44: jae 0x654e4a */ if (!fC) goto L_00654e4a;
L_00654e46:; BB(0x00654e46);
    /* 00654e46: fst st(1) */ ST(1) = ST(0);
    /* 00654e48: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00654e4a:; BB(0x00654e4a);
    /* 00654e4a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00654e4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00654e4d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00654e50: mov ecx, esi */ r_ecx = r_esi;
    /* 00654e52: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x654e57u); f_008304c8();
    /* 00654e57: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 00654e5b: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00654e5f: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 00654e63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00654e64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654e65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00654e66: mov ecx, edi */ r_ecx = r_edi;
    /* 00654e68: lea edx, [esp + 0x70] */ r_edx = (u32)(r_esp+0x70u);
    /* 00654e6c: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x654e71u); f_0082facc();
    /* 00654e71: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x654e76u); f_0082d7b0();
    /* 00654e76: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00654e7a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x654e7fu); f_0082d838();
    /* 00654e7f: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00654e82: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00654e84: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x654e89u); f_0082d8bc();
    /* 00654e89: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 00654e8d: lea eax, [esp + 0x64] */ r_eax = (u32)(r_esp+0x64u);
    /* 00654e91: mov edx, 0xfff0f0f0 */ r_edx = 0xfff0f0f0u;
    /* 00654e96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00654e97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00654e98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654e99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00654e9a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x654e9fu); f_0061cdb0();
    /* 00654e9f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654ea2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x654ea7u); f_0082da80();
    /* 00654ea7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654ea9: jne 0x654dca */ if (!fZ) goto L_00654dca;
L_00654eaf:; BB(0x00654eaf);
    /* 00654eaf: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00654eb3: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00654eb7: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00654ebb: jmp 0x654d28 */ goto L_00654d28;
}

void f_00654da0(void)
{
    FN_ENTER(0x00654da0);
    goto L_00654da0;
L_00654d28:; BB(0x00654d28);
    /* 00654d28: mov ecx, dword ptr [0xa8f71c] */ r_ecx = R32((u32)(0xa8f71cu));
    /* 00654d2e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x654d33u); f_00829cc8();
    /* 00654d33: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x654d38u); f_0082d7b0();
    /* 00654d38: mov ecx, edi */ r_ecx = r_edi;
    /* 00654d3a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x654d3fu); f_0082d838();
    /* 00654d3f: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00654d42: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00654d44: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x654d49u); f_0082d8bc();
    /* 00654d49: lea ecx, [ebp + 0xac] */ r_ecx = (u32)(r_ebp+0xacu);
    /* 00654d4f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x654d54u); f_0082d838();
    /* 00654d54: mov edx, dword ptr [ebp + 0xb8] */ r_edx = R32((u32)(r_ebp+0xb8u));
    /* 00654d5a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00654d5c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x654d61u); f_0082d8bc();
    /* 00654d61: mov edx, dword ptr [ebp + 0xc0] */ r_edx = R32((u32)(r_ebp+0xc0u));
    /* 00654d67: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00654d69: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x654d6eu); f_00830c04();
    /* 00654d6e: push dword ptr [ebp + 0xa8] */ { u32 v = R32((u32)(r_ebp+0xa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654d74: push dword ptr [ebp + 0x9c] */ { u32 v = R32((u32)(r_ebp+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00654d7a: push dword ptr [ebp + 0x98] */ { u32 v = R32((u32)(r_ebp+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654d80: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x654d85u); f_0083046c();
    /* 00654d85: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654d88: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x654d8du); f_0082da80();
    /* 00654d8d: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00654d90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00654d91: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00654d92: ret  */ FN_RET(0x00654da0); r_esp += 4; return;
L_00654da0:; BB(0x00654da0);
    /* 00654da0: xchg ecx, ebx */ { u32 x = r_ecx; u32 y = r_ebx; r_ecx = y; r_ebx = x; }
    /* 00654da2: add eax, 0x9375e8 */ {  u32 a = r_eax; u32 b = 0x9375e8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00654da7: mov eax, dword ptr [ebp + 0x98] */ r_eax = R32((u32)(r_ebp+0x98u));
    /* 00654dad: mov ecx, dword ptr [ebp + 0xa0] */ r_ecx = R32((u32)(r_ebp+0xa0u));
    /* 00654db3: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00654db7: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00654dbb: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00654dbf: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 00654dc2: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00654dc6: mov edi, eax */ r_edi = r_eax;
    /* 00654dc8: mov esi, ecx */ r_esi = r_ecx;
L_00654dca:; BB(0x00654dca);
    /* 00654dca: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00654dce: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00654dd1: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00654dd4: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00654dd7: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00654dda: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00654ddd: fadd dword ptr [edx*4 + 0x937420] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x937420u));
    /* 00654de4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00654de6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00654de8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00654de9: jae 0x654ded */ if (!fC) goto L_00654ded;
L_00654deb:; BB(0x00654deb);
    /* 00654deb: fst st(1) */ ST(1) = ST(0);
L_00654ded:; BB(0x00654ded);
    /* 00654ded: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00654def: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00654df0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00654df3: mov ecx, esi */ r_ecx = r_esi;
    /* 00654df5: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x654dfau); f_008304c8();
    /* 00654dfa: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 00654dfe: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 00654e02: lea ebx, [esp + 0x20] */ r_ebx = (u32)(r_esp+0x20u);
    /* 00654e06: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00654e07: mov ecx, edi */ r_ecx = r_edi;
    /* 00654e09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00654e0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654e0b: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 00654e0f: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x654e14u); f_0082facc();
    /* 00654e14: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00654e18: fadd dword ptr [0x9375e4] */ ST(0) = ST(0) + R_F32((u32)(0x9375e4u));
    /* 00654e1e: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00654e21: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 00654e25: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00654e2a: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00654e2d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00654e31: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00654e35: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00654e38: fadd dword ptr [edx*4 + 0x937420] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x937420u));
    /* 00654e3f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00654e41: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00654e43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00654e44: jae 0x654e4a */ if (!fC) goto L_00654e4a;
L_00654e46:; BB(0x00654e46);
    /* 00654e46: fst st(1) */ ST(1) = ST(0);
    /* 00654e48: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00654e4a:; BB(0x00654e4a);
    /* 00654e4a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00654e4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00654e4d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00654e50: mov ecx, esi */ r_ecx = r_esi;
    /* 00654e52: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x654e57u); f_008304c8();
    /* 00654e57: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 00654e5b: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00654e5f: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 00654e63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00654e64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654e65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00654e66: mov ecx, edi */ r_ecx = r_edi;
    /* 00654e68: lea edx, [esp + 0x70] */ r_edx = (u32)(r_esp+0x70u);
    /* 00654e6c: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x654e71u); f_0082facc();
    /* 00654e71: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x654e76u); f_0082d7b0();
    /* 00654e76: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00654e7a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x654e7fu); f_0082d838();
    /* 00654e7f: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00654e82: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00654e84: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x654e89u); f_0082d8bc();
    /* 00654e89: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 00654e8d: lea eax, [esp + 0x64] */ r_eax = (u32)(r_esp+0x64u);
    /* 00654e91: mov edx, 0xfff0f0f0 */ r_edx = 0xfff0f0f0u;
    /* 00654e96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00654e97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00654e98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654e99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00654e9a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x654e9fu); f_0061cdb0();
    /* 00654e9f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654ea2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x654ea7u); f_0082da80();
    /* 00654ea7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654ea9: jne 0x654dca */ if (!fZ) goto L_00654dca;
L_00654eaf:; BB(0x00654eaf);
    /* 00654eaf: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00654eb3: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00654eb7: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00654ebb: jmp 0x654d28 */ goto L_00654d28;
}

void f_00654ec0(void) /* sub_654EC0 */
{
    FN_ENTER(0x00654ec0);
    /* 00654ec0: mov ecx, dword ptr [0xa8f714] */ r_ecx = R32((u32)(0xa8f714u));
    /* 00654ec6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654ec8: je 0x654ee5 */ if (fZ) goto L_00654ee5;
L_00654eca:; BB(0x00654eca);
    /* 00654eca: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x654ecfu); f_00829de0();
    /* 00654ecf: push dword ptr [0xa8f714] */ { u32 v = R32((u32)(0xa8f714u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654ed5: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x654edau); f_0082e960();
    /* 00654eda: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00654edb: mov dword ptr [0xa8f714], 0 */ W32((u32)(0xa8f714u), 0x0u);
L_00654ee5:; BB(0x00654ee5);
    /* 00654ee5: mov ecx, dword ptr [0xa8f718] */ r_ecx = R32((u32)(0xa8f718u));
    /* 00654eeb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00654eed: je 0x654f02 */ if (fZ) goto L_00654f02;
L_00654eef:; BB(0x00654eef);
    /* 00654eef: je 0x654ef8 */ if (fZ) goto L_00654ef8;
L_00654ef1:; BB(0x00654ef1);
    /* 00654ef1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00654ef3: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x654ef8u); f_004066a8();
L_00654ef8:; BB(0x00654ef8);
    /* 00654ef8: mov dword ptr [0xa8f718], 0 */ W32((u32)(0xa8f718u), 0x0u);
L_00654f02:; BB(0x00654f02);
    /* 00654f02: ret  */ FN_RET(0x00654ec0); r_esp += 4; return;
}

void f_00654f04(void)
{
    FN_ENTER(0x00654f04);
    /* 00654f04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00654f05: mov ebp, esp */ r_ebp = r_esp;
    /* 00654f07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654f09: push 0x8e6d90 */ { u32 v = 0x8e6d90u; r_esp -= 4; W32(r_esp, v); }
    /* 00654f0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00654f14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654f15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00654f1c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00654f1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00654f22: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00654f25: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00654f28: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00654f2b: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654f30: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00654f37: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x654f3cu); f_005caba4();
    /* 00654f3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00654f3d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00654f40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654f42: je 0x654f7b */ if (fZ) goto L_00654f7b;
L_00654f44:; BB(0x00654f44);
    /* 00654f44: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00654f4b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00654f52: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654f55: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654f5b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654f5e: call 0x654f80 */ r_esp -= 4; W32(r_esp, 0x654f63u); f_00654f80();
    /* 00654f63: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00654f66: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00654f6d:; BB(0x00654f6d);
    /* 00654f6d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00654f70: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00654f77: mov esp, ebp */ r_esp = r_ebp;
    /* 00654f79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00654f7a: ret  */ FN_RET(0x00654f04); r_esp += 4; return;
L_00654f7b:; BB(0x00654f7b);
    /* 00654f7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00654f7d: jmp 0x654f6d */ goto L_00654f6d;
}

void f_00654f80(void) /* sub_654F80 */
{
    FN_ENTER(0x00654f80);
    /* 00654f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00654f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00654f83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654f85: push 0x8e6dac */ { u32 v = 0x8e6dacu; r_esp -= 4; W32(r_esp, v); }
    /* 00654f8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00654f90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654f91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00654f98: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00654f9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00654f9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00654fa1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00654fa4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00654fa7: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00654faa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00654fad: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00654fb0: call 0x653c74 */ r_esp -= 4; W32(r_esp, 0x654fb5u); f_00653c74();
    /* 00654fb5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00654fbc: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00654fbf: mov dword ptr [eax], 0xb32060 */ W32((u32)(r_eax), 0xb32060u);
    /* 00654fc5: mov ecx, dword ptr [0xa8f718] */ r_ecx = R32((u32)(0xa8f718u));
    /* 00654fcb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654fcd: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x654fd2u); f_005b8610();
    /* 00654fd2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00654fd5: mov ecx, dword ptr [0xa8f718] */ r_ecx = R32((u32)(0xa8f718u));
    /* 00654fdb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00654fdd: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00654fe3: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x654fe8u); f_005b8638();
    /* 00654fe8: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 00654feb: mov ecx, dword ptr [0xa8f718] */ r_ecx = R32((u32)(0xa8f718u));
    /* 00654ff1: mov esi, dword ptr [ebx + 0x84] */ r_esi = R32((u32)(r_ebx+0x84u));
    /* 00654ff7: mov dword ptr [ebx + 0x9c], eax */ W32((u32)(r_ebx+0x9cu), r_eax);
    /* 00654ffd: mov eax, 2 */ r_eax = 0x2u;
    /* 00655002: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00655005: mov edx, 0 */ r_edx = 0x0u;
    /* 0065500a: jl 0x65500e */ if ((fS!=fO)) goto L_0065500e;
L_0065500c:; BB(0x0065500c);
    /* 0065500c: mov esi, eax */ r_esi = r_eax;
L_0065500e:; BB(0x0065500e);
    /* 0065500e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00655010: jg 0x655014 */ if ((!fZ&&fS==fO)) goto L_00655014;
L_00655012:; BB(0x00655012);
    /* 00655012: mov esi, edx */ r_esi = r_edx;
L_00655014:; BB(0x00655014);
    /* 00655014: mov dword ptr [ebx + 0xc8], esi */ W32((u32)(r_ebx+0xc8u), r_esi);
    /* 0065501a: lea edi, [esi + esi*4] */ r_edi = (u32)(r_esi+r_esi*4);
    /* 0065501d: push dword ptr [edi*4 + 0x9374cc] */ { u32 v = R32((u32)(r_edi*4+0x9374ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00655024: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x655029u); f_005b8638();
    /* 00655029: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0065502c: mov dword ptr [ecx + 0xa4], 0 */ W32((u32)(r_ecx+0xa4u), 0x0u);
    /* 00655036: mov dword ptr [ecx + 0xa0], eax */ W32((u32)(r_ecx+0xa0u), r_eax);
    /* 0065503c: mov dword ptr [ecx + 0xa8], 0 */ W32((u32)(r_ecx+0xa8u), 0x0u);
    /* 00655046: call 0x6560a0 */ r_esp -= 4; W32(r_esp, 0x65504bu); f_006560a0();
    /* 0065504b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0065504e: mov dword ptr [eax + 0x90], 0x447a0000 */ W32((u32)(r_eax+0x90u), 0x447a0000u);
    /* 00655058: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65505du); f_008587a5();
    /* 0065505d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00655060: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00655063: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00655066: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00655069: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0065506c: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 0065506f: fdiv dword ptr [0x9375d4] */ ST(0) = ST(0) / R_F32((u32)(0x9375d4u));
    /* 00655075: fmul dword ptr [0x9375d0] */ ST(0) = ST(0) * R_F32((u32)(0x9375d0u));
    /* 0065507b: fmul dword ptr [0x9375cc] */ ST(0) = ST(0) * R_F32((u32)(0x9375ccu));
    /* 00655081: fadd dword ptr [0x9375d8] */ ST(0) = ST(0) + R_F32((u32)(0x9375d8u));
    /* 00655087: fnstcw word ptr [ebp - 0x28] */ W16((u32)(r_ebp+0xffffffd8u), fcw);
    /* 0065508a: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0065508e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00655093: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00655096: fldcw word ptr [ebp - 0x20] */ fcw = R16((u32)(r_ebp+0xffffffe0u));
    /* 00655099: fistp dword ptr [edx + 0xcc] */ W32((u32)(r_edx+0xccu), (u32)fx_int32(ST(0))); FPOP();
    /* 0065509f: fldcw word ptr [ebp - 0x28] */ fcw = R16((u32)(r_ebp+0xffffffd8u));
    /* 006550a2: mov eax, edx */ r_eax = r_edx;
    /* 006550a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006550a7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006550ae: mov esp, ebp */ r_esp = r_ebp;
    /* 006550b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006550b1: ret 8 */ FN_RET(0x00654f80); r_esp += 12; return;
}

