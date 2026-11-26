#include "protos.h"

void f_005b41a0(void) /* sub_5B41A0 */
{
    FN_ENTER(0x005b41a0);
    /* 005b41a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b41a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b41a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b41a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b41a4: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b41a7: mov edi, ecx */ r_edi = r_ecx;
    /* 005b41a9: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 005b41af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b41b1: je 0x5b43b3 */ if (fZ) goto L_005b43b3;
L_005b41b7:; BB(0x005b41b7);
    /* 005b41b7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b41ba: je 0x5b4412 */ if (fZ) goto L_005b4412;
L_005b41c0:; BB(0x005b41c0);
    /* 005b41c0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b41c3: jne 0x5b44f0 */ if (!fZ) goto L_005b44f0;
L_005b41c9:; BB(0x005b41c9);
    /* 005b41c9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005b41cc: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 005b41d2: mov dword ptr [edi + 0x380], 1 */ W32((u32)(r_edi+0x380u), 0x1u);
    /* 005b41dc: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b41e1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005b41e3: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005b41e6: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b41e9: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
    /* 005b41ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005b41f1: call 0x5b2ed4 */ r_esp -= 4; W32(r_esp, 0x5b41f6u); f_005b2ed4();
    /* 005b41f6: fld dword ptr [0x92adc0] */ FPUSH(R_F32((u32)(0x92adc0u)));
    /* 005b41fc: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 005b4202: mov ebx, dword ptr [edi + 0x304] */ r_ebx = R32((u32)(r_edi+0x304u));
    /* 005b4208: mov ebp, dword ptr [edi + 0x308] */ r_ebp = R32((u32)(r_edi+0x308u));
    /* 005b420e: mov esi, dword ptr [edi + 0x2a4] */ r_esi = R32((u32)(r_edi+0x2a4u));
    /* 005b4214: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 005b4218: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005b4220: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005b4228: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005b422c: mov eax, dword ptr [edi + 0x2a8] */ r_eax = R32((u32)(r_edi+0x2a8u));
    /* 005b4232: mov dword ptr [esp], 0xc3160000 */ W32((u32)(r_esp), 0xc3160000u);
    /* 005b4239: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 005b423d: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 005b4241: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 005b4245: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005b4249: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 005b424d: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b4251: mov eax, dword ptr [edi + 0x2ac] */ r_eax = R32((u32)(r_edi+0x2acu));
    /* 005b4257: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005b425b: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5b4260u); f_0082f9c4();
    /* 005b4260: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005b4264: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005b4268: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005b426a: fmul qword ptr [0x92acd8] */ ST(0) = ST(0) * R_F64((u32)(0x92acd8u));
    /* 005b4270: fdiv qword ptr [0x92acd0] */ ST(0) = ST(0) / R_F64((u32)(0x92acd0u));
    /* 005b4276: fnstcw word ptr [esp + 0x3c] */ W16((u32)(r_esp+0x3cu), fcw);
    /* 005b427a: movzx eax, word ptr [esp + 0x3c] */ r_eax = (u32)R16((u32)(r_esp+0x3cu));
    /* 005b427f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b4284: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 005b4288: fldcw word ptr [esp + 0x44] */ fcw = R16((u32)(r_esp+0x44u));
    /* 005b428c: fistp dword ptr [esp + 0x4c] */ W32((u32)(r_esp+0x4cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005b4290: fldcw word ptr [esp + 0x3c] */ fcw = R16((u32)(r_esp+0x3cu));
    /* 005b4294: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005b4299: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 005b429d: mov ebp, esi */ r_ebp = r_esi;
    /* 005b429f: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5b42a4u); f_0082d990();
    /* 005b42a4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b42a6: mov edx, esi */ r_edx = r_esi;
    /* 005b42a8: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5b42adu); f_0082d8bc();
    /* 005b42ad: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005b42af:; BB(0x005b42af);
    /* 005b42af: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 005b42b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b42b4: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005b42b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b42ba: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5b42bfu); f_00830aa0();
    /* 005b42bf: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 005b42c3: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b42c7: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5b42ccu); f_0082ebac();
    /* 005b42cc: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b42d0: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 005b42d4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b42d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b42d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b42d8: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5b42ddu); f_0077fffc();
    /* 005b42dd: mov edx, eax */ r_edx = r_eax;
    /* 005b42df: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b42e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b42e4: je 0x5b4328 */ if (fZ) goto L_005b4328;
L_005b42e6:; BB(0x005b42e6);
    /* 005b42e6: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b42e9: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005b42ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b42ed: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x5b42f2u); f_0078ea6c();
    /* 005b42f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b42f5: fadd dword ptr [0x92adb8] */ ST(0) = ST(0) + R_F32((u32)(0x92adb8u));
    /* 005b42fb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 005b42ff: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005b4301: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b4303: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b4304: jae 0x5b430c */ if (!fC) goto L_005b430c;
L_005b4306:; BB(0x005b4306);
    /* 005b4306: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 005b430a: mov ebp, esi */ r_ebp = r_esi;
L_005b430c:; BB(0x005b430c);
    /* 005b430c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b430e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b4310: mov edx, 0x5555 */ r_edx = 0x5555u;
    /* 005b4315: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5b431au); f_0082d8bc();
    /* 005b431a: add esi, 0x5555 */ {  u32 a = r_esi; u32 b = 0x5555u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b4320: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b4323: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4326: jl 0x5b42af */ if ((fS!=fO)) goto L_005b42af;
L_005b4328:; BB(0x005b4328);
    /* 005b4328: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5b432du); f_0082da80();
    /* 005b432d: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4330: jne 0x5b437f */ if (!fZ) goto L_005b437f;
L_005b4332:; BB(0x005b4332);
    /* 005b4332: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 005b4336: fcomp dword ptr [0x92adb4] */ fx_compare(ST(0), R_F32((u32)(0x92adb4u))); FPOP();
    /* 005b433c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b433e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b433f: jb 0x5b439d */ if (fC) goto L_005b439d;
L_005b4341:; BB(0x005b4341);
    /* 005b4341: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005b4346: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5b434bu); f_0082d990();
    /* 005b434b: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 005b434f: fchs  */ ST(0) = -ST(0);
    /* 005b4351: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005b4354: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b4356: mov edx, ebp */ r_edx = r_ebp;
    /* 005b4358: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5b435du); f_0082d8bc();
    /* 005b435d: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 005b4361: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4362: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005b4366: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b4368: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5b436du); f_00830aa0();
    /* 005b436d: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 005b4371: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b4375: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5b437au); f_0082ebac();
    /* 005b437a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5b437fu); f_0082da80();
L_005b437f:; BB(0x005b437f);
    /* 005b437f: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005b4383: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 005b4387: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 005b438b: mov dword ptr [edi + 0x2a4], eax */ W32((u32)(r_edi+0x2a4u), r_eax);
    /* 005b4391: mov dword ptr [edi + 0x2a8], edx */ W32((u32)(r_edi+0x2a8u), r_edx);
    /* 005b4397: mov dword ptr [edi + 0x2ac], ebx */ W32((u32)(r_edi+0x2acu), r_ebx);
L_005b439d:; BB(0x005b439d);
    /* 005b439d: movzx eax, word ptr [edi + 0x334] */ r_eax = (u32)R16((u32)(r_edi+0x334u));
    /* 005b43a4: mov word ptr [edi + 0x346], ax */ W16((u32)(r_edi+0x346u), (u16)r_eax);
    /* 005b43ab: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b43ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b43af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b43b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b43b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b43b2: ret  */ FN_RET(0x005b41a0); r_esp += 4; return;
L_005b43b3:; BB(0x005b43b3);
    /* 005b43b3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005b43b6: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b43bb: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b43c0: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005b43c3: je 0x5b43cc */ if (fZ) goto L_005b43cc;
L_005b43c5:; BB(0x005b43c5);
    /* 005b43c5: mov eax, 0xc */ r_eax = 0xcu;
    /* 005b43ca: jmp 0x5b43d1 */ goto L_005b43d1;
L_005b43cc:; BB(0x005b43cc);
    /* 005b43cc: mov eax, 3 */ r_eax = 0x3u;
L_005b43d1:; BB(0x005b43d1);
    /* 005b43d1: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b43d6: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005b43dd: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 005b43e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b43e4: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5b43e9u); f_0050b510();
    /* 005b43e9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b43ec: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b43f1u); f_00807ac0();
    /* 005b43f1: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 005b43f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b43f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b43f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b43f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b43f9: push dword ptr [eax*4 + 0x9c1738] */ { u32 v = R32((u32)(r_eax*4+0x9c1738u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b4400: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b4405u); f_00814298();
    /* 005b4405: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4408: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
L_005b4412:; BB(0x005b4412);
    /* 005b4412: mov ecx, edi */ r_ecx = r_edi;
    /* 005b4414: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5b4419u); f_007aa094();
    /* 005b4419: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005b441c: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4421: je 0x5b442e */ if (fZ) goto L_005b442e;
L_005b4423:; BB(0x005b4423);
    /* 005b4423: fld dword ptr [0x92adc0] */ FPUSH(R_F32((u32)(0x92adc0u)));
    /* 005b4429: jmp 0x5b44bf */ goto L_005b44bf;
L_005b442e:; BB(0x005b442e);
    /* 005b442e: lea ebp, [esp + 0x30] */ r_ebp = (u32)(r_esp+0x30u);
    /* 005b4432: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 005b4438: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 005b443e: mov ebx, dword ptr [edi + 0x308] */ r_ebx = R32((u32)(r_edi+0x308u));
    /* 005b4444: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005b4448: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005b444c: fadd dword ptr [edi + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x30cu));
    /* 005b4452: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005b4456: mov ecx, edi */ r_ecx = r_edi;
    /* 005b4458: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 005b445c: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 005b4460: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 005b4464: fadd dword ptr [edi + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x314u));
    /* 005b446a: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 005b446e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b446f: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x5b4474u); f_00771e14();
    /* 005b4474: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4476: je 0x5b448e */ if (fZ) goto L_005b448e;
L_005b4478:; BB(0x005b4478);
    /* 005b4478: fld dword ptr [0x92adc0] */ FPUSH(R_F32((u32)(0x92adc0u)));
    /* 005b447e: fld dword ptr [0x92adc0] */ FPUSH(R_F32((u32)(0x92adc0u)));
    /* 005b4484: fld dword ptr [0x92adc0] */ FPUSH(R_F32((u32)(0x92adc0u)));
    /* 005b448a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b448c: jmp 0x5b44a7 */ goto L_005b44a7;
L_005b448e:; BB(0x005b448e);
    /* 005b448e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005b4490: mov ecx, edi */ r_ecx = r_edi;
    /* 005b4492: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5b4495u); call_ind(t); }
    /* 005b4495: fld dword ptr [0x92adc0] */ FPUSH(R_F32((u32)(0x92adc0u)));
    /* 005b449b: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 005b44a1: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
L_005b44a7:; BB(0x005b44a7);
    /* 005b44a7: fld dword ptr [0x92adb0] */ FPUSH(R_F32((u32)(0x92adb0u)));
    /* 005b44ad: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 005b44af: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b44b1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b44b3: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 005b44b9: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
L_005b44bf:; BB(0x005b44bf);
    /* 005b44bf: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b44c2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005b44c5: mov ecx, edi */ r_ecx = r_edi;
    /* 005b44c7: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005b44cf: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5b44d4u); f_00772b44();
    /* 005b44d4: mov ecx, edi */ r_ecx = r_edi;
    /* 005b44d6: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5b44dbu); f_007b6880();
    /* 005b44db: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 005b44e1: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b44e4: je 0x5b44f0 */ if (fZ) goto L_005b44f0;
L_005b44e6:; BB(0x005b44e6);
    /* 005b44e6: mov dword ptr [edi + 0x384], 0xffffffff */ W32((u32)(r_edi+0x384u), 0xffffffffu);
L_005b44f0:; BB(0x005b44f0);
    /* 005b44f0: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b44f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b44f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b44f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b44f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b44f7: ret  */ FN_RET(0x005b41a0); r_esp += 4; return;
}

void f_005b44f8(void) /* sub_5B44F8 */
{
    FN_ENTER(0x005b44f8);
    /* 005b44f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b44f9: mov edi, ecx */ r_edi = r_ecx;
    /* 005b44fb: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 005b4501: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4503: je 0x5b454e */ if (fZ) goto L_005b454e;
L_005b4505:; BB(0x005b4505);
    /* 005b4505: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4508: jne 0x5b453d */ if (!fZ) goto L_005b453d;
L_005b450a:; BB(0x005b450a);
    /* 005b450a: push dword ptr [edi + 0x3a0] */ { u32 v = R32((u32)(r_edi+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b4510: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4515: mov ecx, edi */ r_ecx = r_edi;
    /* 005b4517: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b451c: push dword ptr [0xa7498c] */ { u32 v = R32((u32)(0xa7498cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b4522: call 0x772054 */ r_esp -= 4; W32(r_esp, 0x5b4527u); f_00772054();
    /* 005b4527: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b4529: mov ecx, edi */ r_ecx = r_edi;
    /* 005b452b: call 0x5b36e4 */ r_esp -= 4; W32(r_esp, 0x5b4530u); f_005b36e4();
    /* 005b4530: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b4532: je 0x5b457b */ if (fZ) goto L_005b457b;
L_005b4534:; BB(0x005b4534);
    /* 005b4534: mov ecx, edi */ r_ecx = r_edi;
    /* 005b4536: call 0x5b378c */ r_esp -= 4; W32(r_esp, 0x5b453bu); f_005b378c();
    /* 005b453b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b453c: ret  */ FN_RET(0x005b44f8); r_esp += 4; return;
L_005b453d:; BB(0x005b453d);
    /* 005b453d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b4540: jne 0x5b457b */ if (!fZ) goto L_005b457b;
L_005b4542:; BB(0x005b4542);
    /* 005b4542: mov dword ptr [edi + 0x384], 0 */ W32((u32)(r_edi+0x384u), 0x0u);
    /* 005b454c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b454d: ret  */ FN_RET(0x005b44f8); r_esp += 4; return;
L_005b454e:; BB(0x005b454e);
    /* 005b454e: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 005b4554: mov dword ptr [edi + 0x418], 0x42a00000 */ W32((u32)(r_edi+0x418u), 0x42a00000u);
    /* 005b455e: mov edx, 1 */ r_edx = 0x1u;
    /* 005b4563: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 005b456a: and eax, 0xfff7ffff */ {  u32 a = r_eax; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b456f: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 005b4575: mov dword ptr [edi + 0x384], edx */ W32((u32)(r_edi+0x384u), r_edx);
L_005b457b:; BB(0x005b457b);
    /* 005b457b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b457c: ret  */ FN_RET(0x005b44f8); r_esp += 4; return;
}

void f_005b4580(void) /* sub_5B4580 */
{
    FN_ENTER(0x005b4580);
    /* 005b4580: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b4581: mov esi, ecx */ r_esi = r_ecx;
    /* 005b4583: mov ecx, esi */ r_ecx = r_esi;
    /* 005b4585: call 0x52d00c */ r_esp -= 4; W32(r_esp, 0x5b458au); f_0052d00c();
    /* 005b458a: mov ecx, esi */ r_ecx = r_esi;
    /* 005b458c: call 0x786584 */ r_esp -= 4; W32(r_esp, 0x5b4591u); f_00786584();
    /* 005b4591: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4593: jne 0x5b459c */ if (!fZ) goto L_005b459c;
L_005b4595:; BB(0x005b4595);
    /* 005b4595: mov ecx, esi */ r_ecx = r_esi;
    /* 005b4597: call 0x7865cc */ r_esp -= 4; W32(r_esp, 0x5b459cu); f_007865cc();
L_005b459c:; BB(0x005b459c);
    /* 005b459c: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
    /* 005b45a3: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b45a8: je 0x5b45fb */ if (fZ) goto L_005b45fb;
L_005b45aa:; BB(0x005b45aa);
    /* 005b45aa: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
L_005b45b0:; BB(0x005b45b0);
    /* 005b45b0: test edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b45b6: jne 0x5b45e9 */ if (!fZ) goto L_005b45e9;
L_005b45b8:; BB(0x005b45b8);
    /* 005b45b8: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005b45be: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 005b45c0: mov ecx, esi */ r_ecx = r_esi;
    /* 005b45c2: call 0x52ccd8 */ r_esp -= 4; W32(r_esp, 0x5b45c7u); f_0052ccd8();
    /* 005b45c7: mov ecx, esi */ r_ecx = r_esi;
    /* 005b45c9: call 0x786584 */ r_esp -= 4; W32(r_esp, 0x5b45ceu); f_00786584();
    /* 005b45ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b45d0: je 0x5b45db */ if (fZ) goto L_005b45db;
L_005b45d2:; BB(0x005b45d2);
    /* 005b45d2: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
    /* 005b45d9: jmp 0x5b45e9 */ goto L_005b45e9;
L_005b45db:; BB(0x005b45db);
    /* 005b45db: mov ecx, esi */ r_ecx = r_esi;
    /* 005b45dd: call 0x7865cc */ r_esp -= 4; W32(r_esp, 0x5b45e2u); f_007865cc();
    /* 005b45e2: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
L_005b45e9:; BB(0x005b45e9);
    /* 005b45e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b45eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b45ec: mov ecx, esi */ r_ecx = r_esi;
    /* 005b45ee: call 0x7713d4 */ r_esp -= 4; W32(r_esp, 0x5b45f3u); f_007713d4();
    /* 005b45f3: fstp dword ptr [esi + 0x3b0] */ W_F32((u32)(r_esi+0x3b0u), ST(0)); FPOP();
    /* 005b45f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b45fa: ret  */ FN_RET(0x005b4580); r_esp += 4; return;
L_005b45fb:; BB(0x005b45fb);
    /* 005b45fb: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 005b4601: and edx, 0xfff7ffff */ {  u32 a = r_edx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b4607: mov dword ptr [esi + 0x390], edx */ W32((u32)(r_esi+0x390u), r_edx);
    /* 005b460d: jmp 0x5b45b0 */ goto L_005b45b0;
}

void f_005b4610(void) /* sub_5B4610 */
{
    FN_ENTER(0x005b4610);
    /* 005b4610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b4611: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b4614: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b4616: fld dword ptr [ebp + 0x3ac] */ FPUSH(R_F32((u32)(r_ebp+0x3acu)));
    /* 005b461c: fcom dword ptr [0x92ada4] */ fx_compare(ST(0), R_F32((u32)(0x92ada4u))); 
    /* 005b4622: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b4624: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b4625: je 0x5b4696 */ if (fZ) goto L_005b4696;
L_005b4627:; BB(0x005b4627);
    /* 005b4627: fld dword ptr [ebp + 0x3a4] */ FPUSH(R_F32((u32)(r_ebp+0x3a4u)));
    /* 005b462d: fld dword ptr [ebp + 0x3a4] */ FPUSH(R_F32((u32)(r_ebp+0x3a4u)));
    /* 005b4633: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005b4635: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005b4637: fld dword ptr [ebp + 0x3a8] */ FPUSH(R_F32((u32)(r_ebp+0x3a8u)));
    /* 005b463d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b463f: fst dword ptr [ebp + 0x3a4] */ W_F32((u32)(r_ebp+0x3a4u), ST(0));
    /* 005b4645: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b4647: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 005b4649: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005b464b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005b464f: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 005b4651: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 005b4654: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b4655: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005b4658: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x5b465du); f_0082e900();
    /* 005b465d: fcomp dword ptr [0x92ada0] */ fx_compare(ST(0), R_F32((u32)(0x92ada0u))); FPOP();
    /* 005b4663: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b4665: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b4666: jae 0x5b4670 */ if (!fC) goto L_005b4670;
L_005b4668:; BB(0x005b4668);
    /* 005b4668: fld dword ptr [0x92ada4] */ FPUSH(R_F32((u32)(0x92ada4u)));
    /* 005b466e: jmp 0x5b4684 */ goto L_005b4684;
L_005b4670:; BB(0x005b4670);
    /* 005b4670: fld dword ptr [0x92ada4] */ FPUSH(R_F32((u32)(0x92ada4u)));
    /* 005b4676: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005b467a: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 005b467d: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005b467f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b4681: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b4682: jae 0x5b4696 */ if (!fC) goto L_005b4696;
L_005b4684:; BB(0x005b4684);
    /* 005b4684: mov eax, dword ptr [ebp + 0x3a8] */ r_eax = R32((u32)(r_ebp+0x3a8u));
    /* 005b468a: fst dword ptr [ebp + 0x3ac] */ W_F32((u32)(r_ebp+0x3acu), ST(0));
    /* 005b4690: mov dword ptr [ebp + 0x3a4], eax */ W32((u32)(r_ebp+0x3a4u), r_eax);
L_005b4696:; BB(0x005b4696);
    /* 005b4696: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b4698: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b469b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b469c: ret  */ FN_RET(0x005b4610); r_esp += 4; return;
}

void f_005b46a0(void) /* sub_5B46A0 */
{
    FN_ENTER(0x005b46a0);
    /* 005b46a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b46a1: mov esi, ecx */ r_esi = r_ecx;
    /* 005b46a3: movsx eax, word ptr [esi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 005b46aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b46ad: je 0x5b46c2 */ if (fZ) goto L_005b46c2;
L_005b46af:; BB(0x005b46af);
    /* 005b46af: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b46b2: je 0x5b46c2 */ if (fZ) goto L_005b46c2;
L_005b46b4:; BB(0x005b46b4);
    /* 005b46b4: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b46b7: jne 0x5b46f7 */ if (!fZ) goto L_005b46f7;
L_005b46b9:; BB(0x005b46b9);
    /* 005b46b9: mov ecx, esi */ r_ecx = r_esi;
    /* 005b46bb: call 0x5b46fc */ r_esp -= 4; W32(r_esp, 0x5b46c0u); f_005b46fc();
    /* 005b46c0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b46c1: ret  */ FN_RET(0x005b46a0); r_esp += 4; return;
L_005b46c2:; BB(0x005b46c2);
    /* 005b46c2: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b46c7: mov ecx, esi */ r_ecx = r_esi;
    /* 005b46c9: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b46ceu); f_007aaa30();
    /* 005b46ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b46d0: je 0x5b46f7 */ if (fZ) goto L_005b46f7;
L_005b46d2:; BB(0x005b46d2);
    /* 005b46d2: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b46d7u); f_00807ac0();
    /* 005b46d7: mov ecx, eax */ r_ecx = r_eax;
    /* 005b46d9: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 005b46dc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b46de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b46df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b46e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b46e1: push dword ptr [ecx*4 + 0x9c1714] */ { u32 v = R32((u32)(r_ecx*4+0x9c1714u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b46e8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b46edu); f_00814298();
    /* 005b46ed: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b46f0: mov ecx, esi */ r_ecx = r_esi;
    /* 005b46f2: call 0x5b46fc */ r_esp -= 4; W32(r_esp, 0x5b46f7u); f_005b46fc();
L_005b46f7:; BB(0x005b46f7);
    /* 005b46f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b46f8: ret  */ FN_RET(0x005b46a0); r_esp += 4; return;
}

void f_005b46fc(void) /* sub_5B46FC */
{
    FN_ENTER(0x005b46fc);
    /* 005b46fc: fld dword ptr [ecx + 0x418] */ FPUSH(R_F32((u32)(r_ecx+0x418u)));
    /* 005b4702: fcomp dword ptr [0x92ad98] */ fx_compare(ST(0), R_F32((u32)(0x92ad98u))); FPOP();
    /* 005b4708: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b470a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b470b: jae 0x5b4712 */ if (!fC) goto L_005b4712;
L_005b470d:; BB(0x005b470d);
    /* 005b470d: call 0x5b4714 */ r_esp -= 4; W32(r_esp, 0x5b4712u); f_005b4714();
L_005b4712:; BB(0x005b4712);
    /* 005b4712: ret  */ FN_RET(0x005b46fc); r_esp += 4; return;
}

void f_005b4714(void) /* sub_5B4714 */
{
    FN_ENTER(0x005b4714);
    /* 005b4714: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b4717: mov eax, dword ptr [ecx + 0x300] */ r_eax = R32((u32)(r_ecx+0x300u));
    /* 005b471d: mov edx, dword ptr [ecx + 0x304] */ r_edx = R32((u32)(r_ecx+0x304u));
    /* 005b4723: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005b4726: mov eax, dword ptr [ecx + 0x308] */ r_eax = R32((u32)(r_ecx+0x308u));
    /* 005b472c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005b4730: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b4734: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b4737: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4739: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b473a: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5b473fu); f_007b4c58();
    /* 005b473f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4741: je 0x5b4754 */ if (fZ) goto L_005b4754;
L_005b4743:; BB(0x005b4743);
    /* 005b4743: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b4746: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b474b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b474c: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5b4751u); f_0050b510();
    /* 005b4751: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4754:; BB(0x005b4754);
    /* 005b4754: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b4757: ret  */ FN_RET(0x005b4714); r_esp += 4; return;
}

void f_005b4758(void) /* sub_5B4758 */
{
    FN_ENTER(0x005b4758);
    /* 005b4758: mov edx, dword ptr [ecx + 0x514] */ r_edx = R32((u32)(r_ecx+0x514u));
    /* 005b475e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005b4761: mov dword ptr [0xa74180], eax */ W32((u32)(0xa74180u), r_eax);
    /* 005b4766: mov dword ptr [0xa7417c], 0 */ W32((u32)(0xa7417cu), 0x0u);
    /* 005b4770: mov dword ptr [0xa74178], 0 */ W32((u32)(0xa74178u), 0x0u);
    /* 005b477a: mov dword ptr [0xa74174], 0 */ W32((u32)(0xa74174u), 0x0u);
    /* 005b4784: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005b4787: mov dword ptr [0xa7416c], 0 */ W32((u32)(0xa7416cu), 0x0u);
    /* 005b4791: mov dword ptr [0xa74170], eax */ W32((u32)(0xa74170u), r_eax);
    /* 005b4796: ret  */ FN_RET(0x005b4758); r_esp += 4; return;
}

void f_005b4798(void) /* sub_5B4798 */
{
    FN_ENTER(0x005b4798);
    /* 005b4798: mov ecx, dword ptr [0xa749e8] */ r_ecx = R32((u32)(0xa749e8u));
    /* 005b479e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b47a0: je 0x5b47b5 */ if (fZ) goto L_005b47b5;
L_005b47a2:; BB(0x005b47a2);
    /* 005b47a2: je 0x5b47ab */ if (fZ) goto L_005b47ab;
L_005b47a4:; BB(0x005b47a4);
    /* 005b47a4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b47a6: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5b47abu); f_004066a8();
L_005b47ab:; BB(0x005b47ab);
    /* 005b47ab: mov dword ptr [0xa749e8], 0 */ W32((u32)(0xa749e8u), 0x0u);
L_005b47b5:; BB(0x005b47b5);
    /* 005b47b5: ret  */ FN_RET(0x005b4798); r_esp += 4; return;
}

void f_005b47b8(void)
{
    FN_ENTER(0x005b47b8);
    /* 005b47b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b47b9: mov ebp, esp */ r_ebp = r_esp;
    /* 005b47bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b47bd: push 0x8d90a2 */ { u32 v = 0x8d90a2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b47c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b47c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b47c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005b47d0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b47d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005b47d6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005b47d9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005b47dc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005b47df: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005b47e1: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005b47e8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5b47edu); f_005caba4();
    /* 005b47ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b47ee: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005b47f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b47f3: je 0x5b487b */ if (fZ) goto L_005b487b;
L_005b47f9:; BB(0x005b47f9);
    /* 005b47f9: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005b4800: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b4807: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b480d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b4810: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x5b4815u); f_00787a4c();
    /* 005b4815: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b4818: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005b481f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005b4822:; BB(0x005b4822);
    /* 005b4822: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b4829: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005b4830: push 0x518 */ { u32 v = 0x518u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4835: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5b483au); f_005caba4();
    /* 005b483a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b483b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005b483e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4840: je 0x5b4877 */ if (fZ) goto L_005b4877;
L_005b4842:; BB(0x005b4842);
    /* 005b4842: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005b4849: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005b4850: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b4853: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b4856: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b4859: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b485a: call 0x5b4884 */ r_esp -= 4; W32(r_esp, 0x5b485fu); f_005b4884();
    /* 005b485f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b4862: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005b4869:; BB(0x005b4869);
    /* 005b4869: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b486c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b4873: mov esp, ebp */ r_esp = r_ebp;
    /* 005b4875: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b4876: ret  */ FN_RET(0x005b47b8); r_esp += 4; return;
L_005b4877:; BB(0x005b4877);
    /* 005b4877: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b4879: jmp 0x5b4869 */ goto L_005b4869;
L_005b487b:; BB(0x005b487b);
    /* 005b487b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b487d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b4880: jmp 0x5b4822 */ goto L_005b4822;
}

void f_005b4884(void) /* sub_5B4884 */
{
    FN_ENTER(0x005b4884);
    /* 005b4884: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b4885: mov ebp, esp */ r_ebp = r_esp;
    /* 005b4887: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b4889: push 0x8d90f0 */ { u32 v = 0x8d90f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b488e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b4894: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4895: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005b489c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b489f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005b48a2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005b48a5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005b48a8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005b48ab: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b48ae: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b48b1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005b48b4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b48b7: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x5b48bcu); f_0052c3fc();
    /* 005b48bc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b48c3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b48c6: mov dword ptr [ecx], 0xb0b480 */ W32((u32)(r_ecx), 0xb0b480u);
    /* 005b48cc: add ecx, 0x474 */ {  u32 a = r_ecx; u32 b = 0x474u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b48d2: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x5b48d7u); f_00576a48();
    /* 005b48d7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005b48de: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005b48e3: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b48e8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b48eb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b48ed: add eax, 0x494 */ {  u32 a = r_eax; u32 b = 0x494u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b48f2: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b48f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b48f5: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x5b48fau); f_00858736();
    /* 005b48fa: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005b4901: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b4904: mov eax, dword ptr [0x9c1940] */ r_eax = R32((u32)(0x9c1940u));
    /* 005b4909: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b490c: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005b490e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005b4911: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4912: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x5b4918u); call_ind(t); }
    /* 005b4918: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b491b: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 005b491e: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 005b4921: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 005b4924: mov dword ptr [ebx + 0x2a4], edx */ W32((u32)(r_ebx+0x2a4u), r_edx);
    /* 005b492a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b492d: mov dword ptr [ebx + 0x2a8], ecx */ W32((u32)(r_ebx+0x2a8u), r_ecx);
    /* 005b4933: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b4936: mov dword ptr [ebx + 0x2ac], eax */ W32((u32)(r_ebx+0x2acu), r_eax);
    /* 005b493c: mov esi, dword ptr [edx + 0x2a4] */ r_esi = R32((u32)(r_edx+0x2a4u));
    /* 005b4942: mov edi, dword ptr [edx + 0x2a8] */ r_edi = R32((u32)(r_edx+0x2a8u));
    /* 005b4948: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 005b494e: mov dword ptr [edx + 0x298], esi */ W32((u32)(r_edx+0x298u), r_esi);
    /* 005b4954: mov dword ptr [edx + 0x29c], edi */ W32((u32)(r_edx+0x29cu), r_edi);
    /* 005b495a: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 005b4960: mov edx, dword ptr [0xa749e8] */ r_edx = R32((u32)(0xa749e8u));
    /* 005b4966: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 005b496c: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 005b4972: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b4975: movzx eax, word ptr [eax + 0x3c] */ r_eax = (u32)R16((u32)(r_eax+0x3cu));
    /* 005b4979: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b497b: je 0x5b4cef */ if (fZ) goto L_005b4cef;
L_005b4981:; BB(0x005b4981);
    /* 005b4981: mov dword ptr [ecx + 0x504], 1 */ W32((u32)(r_ecx+0x504u), 0x1u);
    /* 005b498b: mov eax, 1 */ r_eax = 0x1u;
L_005b4990:; BB(0x005b4990);
    /* 005b4990: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005b4993: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4995: mov ebx, dword ptr [ecx + 0x2e8] */ r_ebx = R32((u32)(r_ecx+0x2e8u));
    /* 005b499b: or ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 005b499e: mov dword ptr [ecx + 0x2e8], ebx */ W32((u32)(r_ecx+0x2e8u), r_ebx);
    /* 005b49a4: push 0x9c1640 */ { u32 v = 0x9c1640u; r_esp -= 4; W32(r_esp, v); }
    /* 005b49a9: movsx edi, word ptr [esi + 0x3e] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x3eu));
    /* 005b49ad: mov dword ptr [ecx + 0x374], edi */ W32((u32)(r_ecx+0x374u), r_edi);
    /* 005b49b3: mov ebx, dword ptr [edx + 0x42c] */ r_ebx = R32((u32)(r_edx+0x42cu));
    /* 005b49b9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b49bb: mov ebx, dword ptr [ebx + eax*8 + 8] */ r_ebx = R32((u32)(r_ebx+r_eax*8+0x8u));
    /* 005b49bf: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 005b49c2: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 005b49c8: mov eax, dword ptr [edx + eax*8 + 0xc] */ r_eax = R32((u32)(r_edx+r_eax*8+0xcu));
    /* 005b49cc: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 005b49cf: mov dword ptr [ecx + 0xd8], 0x9c16a0 */ W32((u32)(r_ecx+0xd8u), 0x9c16a0u);
    /* 005b49d9: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x5b49deu); f_007b9a88();
    /* 005b49de: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b49e1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b49e4: mov esi, dword ptr [edx + 0xa4] */ r_esi = R32((u32)(r_edx+0xa4u));
    /* 005b49ea: mov ebx, dword ptr [esi + 0x44] */ r_ebx = R32((u32)(r_esi+0x44u));
    /* 005b49ed: and ebx, 0xfffffffe */ {  u32 a = r_ebx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 005b49f0: mov dword ptr [esi + 0x44], ebx */ W32((u32)(r_esi+0x44u), r_ebx);
    /* 005b49f3: mov eax, dword ptr [ecx + 0x504] */ r_eax = R32((u32)(r_ecx+0x504u));
    /* 005b49f9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b49fb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b49fd: mov esi, dword ptr [eax + 0xa749e0] */ r_esi = R32((u32)(r_eax+0xa749e0u));
    /* 005b4a03: mov ebx, dword ptr [eax + 0xa749d8] */ r_ebx = R32((u32)(r_eax+0xa749d8u));
    /* 005b4a09: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 005b4a0c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b4a0e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b4a10: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005b4a12: mov dword ptr [ecx + 0x508], esi */ W32((u32)(r_ecx+0x508u), r_esi);
    /* 005b4a18: mov dword ptr [ecx + 0x50c], ebx */ W32((u32)(r_ecx+0x50cu), r_ebx);
    /* 005b4a1e: lea edx, [edi + 0x9c1944] */ r_edx = (u32)(r_edi+0x9c1944u);
    /* 005b4a24: mov dword ptr [ecx + 0x358], edx */ W32((u32)(r_ecx+0x358u), r_edx);
    /* 005b4a2a: mov edx, dword ptr [eax + 0xa749d0] */ r_edx = R32((u32)(r_eax+0xa749d0u));
    /* 005b4a30: mov eax, dword ptr [eax + 0xa749c8] */ r_eax = R32((u32)(r_eax+0xa749c8u));
    /* 005b4a36: mov dword ptr [ecx + 0x510], edx */ W32((u32)(r_ecx+0x510u), r_edx);
    /* 005b4a3c: mov dword ptr [ecx + 0x514], eax */ W32((u32)(r_ecx+0x514u), r_eax);
    /* 005b4a42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4a43: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4a44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b4a45: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x5b4a4au); f_007868f8();
    /* 005b4a4a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b4a4d: call 0x5b4758 */ r_esp -= 4; W32(r_esp, 0x5b4a52u); f_005b4758();
    /* 005b4a52: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b4a55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4a57: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x5b4a5cu); f_007aa4c8();
    /* 005b4a5c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b4a5f: movsx edx, word ptr [ecx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 005b4a66: movzx eax, word ptr [ecx + 0x2be] */ r_eax = (u32)R16((u32)(r_ecx+0x2beu));
    /* 005b4a6d: mov word ptr [ecx + 0x334], dx */ W16((u32)(r_ecx+0x334u), (u16)r_edx);
    /* 005b4a74: mov word ptr [ecx + 0x336], ax */ W16((u32)(r_ecx+0x336u), (u16)r_eax);
    /* 005b4a7b: mov word ptr [ecx + 0x346], dx */ W16((u32)(r_ecx+0x346u), (u16)r_edx);
    /* 005b4a82: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5b4a87u); f_0078730c();
    /* 005b4a87: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b4a8a: call 0x786bbc */ r_esp -= 4; W32(r_esp, 0x5b4a8fu); f_00786bbc();
    /* 005b4a8f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b4a92: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 005b4a95: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 005b4a98: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 005b4a9b: mov esi, dword ptr [edi + 0x504] */ r_esi = R32((u32)(r_edi+0x504u));
    /* 005b4aa1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005b4aa3: mov dword ptr [edi + 0x68], 0x3f800000 */ W32((u32)(r_edi+0x68u), 0x3f800000u);
    /* 005b4aaa: mov word ptr [edi + 0x41c], bx */ W16((u32)(r_edi+0x41cu), (u16)r_ebx);
    /* 005b4ab1: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 005b4ab4: mov dword ptr [edi + 0x54], edx */ W32((u32)(r_edi+0x54u), r_edx);
    /* 005b4ab7: mov dword ptr [edi + 0x58], ecx */ W32((u32)(r_edi+0x58u), r_ecx);
    /* 005b4aba: mov dword ptr [edi + 0x420], eax */ W32((u32)(r_edi+0x420u), r_eax);
    /* 005b4ac0: mov dword ptr [edi + 0x424], edx */ W32((u32)(r_edi+0x424u), r_edx);
    /* 005b4ac6: mov dword ptr [edi + 0x428], ecx */ W32((u32)(r_edi+0x428u), r_ecx);
    /* 005b4acc: mov dword ptr [edi + 0x468], ebx */ W32((u32)(r_edi+0x468u), r_ebx);
    /* 005b4ad2: mov dword ptr [edi + 0x46c], ebx */ W32((u32)(r_edi+0x46cu), r_ebx);
    /* 005b4ad8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4ada: je 0x5b4ae7 */ if (fZ) goto L_005b4ae7;
L_005b4adc:; BB(0x005b4adc);
    /* 005b4adc: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ade: mov ecx, edi */ r_ecx = r_edi;
    /* 005b4ae0: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x5b4ae5u); f_00787550();
    /* 005b4ae5: jmp 0x5b4af0 */ goto L_005b4af0;
L_005b4ae7:; BB(0x005b4ae7);
    /* 005b4ae7: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ae9: mov ecx, edi */ r_ecx = r_edi;
    /* 005b4aeb: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x5b4af0u); f_00787550();
L_005b4af0:; BB(0x005b4af0);
    /* 005b4af0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b4af3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b4af6: mov dword ptr [ecx + 0x470], 0 */ W32((u32)(r_ecx+0x470u), 0x0u);
    /* 005b4b00: movsx edx, word ptr [eax + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 005b4b04: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005b4b06: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4b08: je 0x5b4b14 */ if (fZ) goto L_005b4b14;
L_005b4b0a:; BB(0x005b4b0a);
    /* 005b4b0a: call 0x52ca40 */ r_esp -= 4; W32(r_esp, 0x5b4b0fu); f_0052ca40();
    /* 005b4b0f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b4b12: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005b4b14:; BB(0x005b4b14);
    /* 005b4b14: mov dword ptr [ecx + 0x418], ebx */ W32((u32)(r_ecx+0x418u), r_ebx);
    /* 005b4b1a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005b4b1c:; BB(0x005b4b1c);
    /* 005b4b1c: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 005b4b1f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b4b21: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005b4b24: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b4b26: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b4b28: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b4b2a: lea ecx, [ecx + edx + 0x494] */ r_ecx = (u32)(r_ecx+r_edx+0x494u);
    /* 005b4b31: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x5b4b36u); f_0057739c();
    /* 005b4b36: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b4b39: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4b3c: jge 0x5b4b43 */ if ((fS==fO)) goto L_005b4b43;
L_005b4b3e:; BB(0x005b4b3e);
    /* 005b4b3e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b4b41: jmp 0x5b4b1c */ goto L_005b4b1c;
L_005b4b43:; BB(0x005b4b43);
    /* 005b4b43: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b4b46: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b4b49: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005b4b4c: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b4b51: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 005b4b54: mov ebx, dword ptr [edi + 0x3c] */ r_ebx = R32((u32)(r_edi+0x3cu));
    /* 005b4b57: mov esi, dword ptr [edi + 0x40] */ r_esi = R32((u32)(r_edi+0x40u));
    /* 005b4b5a: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005b4b5d: mov dword ptr [edi + 0x44], edx */ W32((u32)(r_edi+0x44u), r_edx);
    /* 005b4b60: mov dword ptr [edi + 0x48], ebx */ W32((u32)(r_edi+0x48u), r_ebx);
    /* 005b4b63: mov dword ptr [edi + 0x4c], esi */ W32((u32)(r_edi+0x4cu), r_esi);
    /* 005b4b66: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005b4b68: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x5b4b6eu); call_ind(t); }
    /* 005b4b6e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b4b71: fld dword ptr [0x92ad78] */ FPUSH(R_F32((u32)(0x92ad78u)));
    /* 005b4b77: fld dword ptr [0xa74994] */ FPUSH(R_F32((u32)(0xa74994u)));
    /* 005b4b7d: mov edx, dword ptr [eax + 0x514] */ r_edx = R32((u32)(r_eax+0x514u));
    /* 005b4b83: fld dword ptr [eax + 0x68] */ FPUSH(R_F32((u32)(r_eax+0x68u)));
    /* 005b4b86: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 005b4b88: mov dword ptr [eax + 0x3bc], 0x42700000 */ W32((u32)(r_eax+0x3bcu), 0x42700000u);
    /* 005b4b92: mov dword ptr [eax + 0x3c0], 0x2000 */ W32((u32)(r_eax+0x3c0u), 0x2000u);
    /* 005b4b9c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 005b4b9f: mov dword ptr [eax + 0x3c8], 0x1e */ W32((u32)(r_eax+0x3c8u), 0x1eu);
    /* 005b4ba9: mov dword ptr [eax + 0x3c4], ecx */ W32((u32)(r_eax+0x3c4u), r_ecx);
    /* 005b4baf: mov edi, dword ptr [edx + 0x1c] */ r_edi = R32((u32)(r_edx+0x1cu));
    /* 005b4bb2: mov dword ptr [eax + 0x3d0], 0x78 */ W32((u32)(r_eax+0x3d0u), 0x78u);
    /* 005b4bbc: mov dword ptr [eax + 0x3cc], edi */ W32((u32)(r_eax+0x3ccu), r_edi);
    /* 005b4bc2: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 005b4bc5: fmul dword ptr [0x9c1728] */ ST(0) = ST(0) * R_F32((u32)(0x9c1728u));
    /* 005b4bcb: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b4bce: fstp dword ptr [eax + 0x3d4] */ W_F32((u32)(r_eax+0x3d4u), ST(0)); FPOP();
    /* 005b4bd4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b4bd6: mov dword ptr [eax + 0x3d8], 0x43340000 */ W32((u32)(r_eax+0x3d8u), 0x43340000u);
    /* 005b4be0: mov dword ptr [eax + 0x3dc], 0x1000 */ W32((u32)(r_eax+0x3dcu), 0x1000u);
    /* 005b4bea: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 005b4bed: mov dword ptr [eax + 0x3e4], 0xa */ W32((u32)(r_eax+0x3e4u), 0xau);
    /* 005b4bf7: mov dword ptr [eax + 0x3e0], esi */ W32((u32)(r_eax+0x3e0u), r_esi);
    /* 005b4bfd: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b4c00: mov dword ptr [eax + 0x3f0], 0x437a0000 */ W32((u32)(r_eax+0x3f0u), 0x437a0000u);
    /* 005b4c0a: mov dword ptr [eax + 0x3e8], ecx */ W32((u32)(r_eax+0x3e8u), r_ecx);
    /* 005b4c10: mov dword ptr [eax + 0x3ec], ecx */ W32((u32)(r_eax+0x3ecu), r_ecx);
    /* 005b4c16: mov dword ptr [eax + 0x3f4], 0x400 */ W32((u32)(r_eax+0x3f4u), 0x400u);
    /* 005b4c20: mov dword ptr [eax + 0x3f8], ecx */ W32((u32)(r_eax+0x3f8u), r_ecx);
    /* 005b4c26: mov dword ptr [eax + 0x3fc], ecx */ W32((u32)(r_eax+0x3fcu), r_ecx);
    /* 005b4c2c: mov ebx, dword ptr [edx + 0x28] */ r_ebx = R32((u32)(r_edx+0x28u));
    /* 005b4c2f: mov dword ptr [eax + 0x408], 0 */ W32((u32)(r_eax+0x408u), 0x0u);
    /* 005b4c39: mov dword ptr [eax + 0x400], ebx */ W32((u32)(r_eax+0x400u), r_ebx);
    /* 005b4c3f: mov ebx, 2 */ r_ebx = 0x2u;
    /* 005b4c44: mov dword ptr [eax + 0x404], ebx */ W32((u32)(r_eax+0x404u), r_ebx);
    /* 005b4c4a: mov dword ptr [eax + 0x40c], ecx */ W32((u32)(r_eax+0x40cu), r_ecx);
    /* 005b4c50: mov ecx, dword ptr [eax + 0x418] */ r_ecx = R32((u32)(r_eax+0x418u));
    /* 005b4c56: mov dword ptr [eax + 0x410], ecx */ W32((u32)(r_eax+0x410u), r_ecx);
    /* 005b4c5c: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005b4c5f: mov dword ptr [eax + 0x414], ecx */ W32((u32)(r_eax+0x414u), r_ecx);
    /* 005b4c65: mov dword ptr [eax + 0x3b4], ebx */ W32((u32)(r_eax+0x3b4u), r_ebx);
    /* 005b4c6b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b4c6e: mov dword ptr [eax + 0x3b0], 0x461c4000 */ W32((u32)(r_eax+0x3b0u), 0x461c4000u);
    /* 005b4c78: mov dword ptr [eax + 0x3b8], 0x42a00000 */ W32((u32)(r_eax+0x3b8u), 0x42a00000u);
    /* 005b4c82: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 005b4c84: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 005b4c86: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005b4c88: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005b4c8a: fstp dword ptr [eax + 0x398] */ W_F32((u32)(r_eax+0x398u), ST(0)); FPOP();
    /* 005b4c90: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b4c92: fstp dword ptr [eax + 0x394] */ W_F32((u32)(r_eax+0x394u), ST(0)); FPOP();
    /* 005b4c98: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 005b4c9b: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 005b4ca1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005b4ca3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b4ca5: fstp dword ptr [eax + 0x39c] */ W_F32((u32)(r_eax+0x39cu), ST(0)); FPOP();
    /* 005b4cab: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b4cb1: mov dword ptr [eax + 0x3a0], 0x300 */ W32((u32)(r_eax+0x3a0u), 0x300u);
    /* 005b4cbb: mov dword ptr [eax + 0x390], edx */ W32((u32)(r_eax+0x390u), r_edx);
    /* 005b4cc1: mov dword ptr [eax + 0x3a4], 0 */ W32((u32)(r_eax+0x3a4u), 0x0u);
    /* 005b4ccb: mov dword ptr [eax + 0x3a8], 0 */ W32((u32)(r_eax+0x3a8u), 0x0u);
    /* 005b4cd5: mov dword ptr [eax + 0x3ac], 0 */ W32((u32)(r_eax+0x3acu), 0x0u);
    /* 005b4cdf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b4ce2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b4ce9: mov esp, ebp */ r_esp = r_ebp;
    /* 005b4ceb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b4cec: ret 8 */ FN_RET(0x005b4884); r_esp += 12; return;
L_005b4cef:; BB(0x005b4cef);
    /* 005b4cef: movsx eax, word ptr [ecx + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2cu));
    /* 005b4cf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4cf4: call 0x813038 */ r_esp -= 4; W32(r_esp, 0x5b4cf9u); f_00813038();
    /* 005b4cf9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b4cfa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b4cfd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4cff: je 0x5b4d1b */ if (fZ) goto L_005b4d1b;
L_005b4d01:; BB(0x005b4d01);
    /* 005b4d01: mov edx, dword ptr [0xa749e8] */ r_edx = R32((u32)(0xa749e8u));
    /* 005b4d07: mov dword ptr [ecx + 0x504], 1 */ W32((u32)(r_ecx+0x504u), 0x1u);
    /* 005b4d11: mov eax, 1 */ r_eax = 0x1u;
    /* 005b4d16: jmp 0x5b4990 */ goto L_005b4990;
L_005b4d1b:; BB(0x005b4d1b);
    /* 005b4d1b: mov edx, dword ptr [0xa749e8] */ r_edx = R32((u32)(0xa749e8u));
    /* 005b4d21: mov dword ptr [ecx + 0x504], 0 */ W32((u32)(r_ecx+0x504u), 0x0u);
    /* 005b4d2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b4d2d: jmp 0x5b4990 */ goto L_005b4990;
}

void f_005b4ba0(void)
{
    FN_ENTER(0x005b4ba0);
    /* 005b4ba0: or al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b4ba3: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b4ba5: push ds */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ba6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b4ba8: add byte ptr [ecx + 0x3c488], cl */ { u32 ad = (u32)(r_ecx+0x3c488u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b4bae: add byte ptr [ebx - 0x7f38e386], cl */ { u32 ad = (u32)(r_ebx+0x80c71c7au);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b4bb4: rol byte ptr [ebx], 1 */ { u32 ad = (u32)(r_ebx); u32 c = (1u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 005b4bb6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fS = ((r >> 7) & 1); }
    /* 005b4bb8: js 0x5b4bba */ if (fS) goto L_005b4bba;
L_005b4bba:; BB(0x005b4bba);
    /* 005b4bba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b4bbc: mov dword ptr [eax + 0x3cc], edi */ W32((u32)(r_eax+0x3ccu), r_edi);
    /* 005b4bc2: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 005b4bc5: fmul dword ptr [0x9c1728] */ ST(0) = ST(0) * R_F32((u32)(0x9c1728u));
    /* 005b4bcb: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b4bce: fstp dword ptr [eax + 0x3d4] */ W_F32((u32)(r_eax+0x3d4u), ST(0)); FPOP();
    /* 005b4bd4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b4bd6: mov dword ptr [eax + 0x3d8], 0x43340000 */ W32((u32)(r_eax+0x3d8u), 0x43340000u);
    /* 005b4be0: mov dword ptr [eax + 0x3dc], 0x1000 */ W32((u32)(r_eax+0x3dcu), 0x1000u);
    /* 005b4bea: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 005b4bed: mov dword ptr [eax + 0x3e4], 0xa */ W32((u32)(r_eax+0x3e4u), 0xau);
    /* 005b4bf7: mov dword ptr [eax + 0x3e0], esi */ W32((u32)(r_eax+0x3e0u), r_esi);
    /* 005b4bfd: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b4c00: mov dword ptr [eax + 0x3f0], 0x437a0000 */ W32((u32)(r_eax+0x3f0u), 0x437a0000u);
    /* 005b4c0a: mov dword ptr [eax + 0x3e8], ecx */ W32((u32)(r_eax+0x3e8u), r_ecx);
    /* 005b4c10: mov dword ptr [eax + 0x3ec], ecx */ W32((u32)(r_eax+0x3ecu), r_ecx);
    /* 005b4c16: mov dword ptr [eax + 0x3f4], 0x400 */ W32((u32)(r_eax+0x3f4u), 0x400u);
    /* 005b4c20: mov dword ptr [eax + 0x3f8], ecx */ W32((u32)(r_eax+0x3f8u), r_ecx);
    /* 005b4c26: mov dword ptr [eax + 0x3fc], ecx */ W32((u32)(r_eax+0x3fcu), r_ecx);
    /* 005b4c2c: mov ebx, dword ptr [edx + 0x28] */ r_ebx = R32((u32)(r_edx+0x28u));
    /* 005b4c2f: mov dword ptr [eax + 0x408], 0 */ W32((u32)(r_eax+0x408u), 0x0u);
    /* 005b4c39: mov dword ptr [eax + 0x400], ebx */ W32((u32)(r_eax+0x400u), r_ebx);
    /* 005b4c3f: mov ebx, 2 */ r_ebx = 0x2u;
    /* 005b4c44: mov dword ptr [eax + 0x404], ebx */ W32((u32)(r_eax+0x404u), r_ebx);
    /* 005b4c4a: mov dword ptr [eax + 0x40c], ecx */ W32((u32)(r_eax+0x40cu), r_ecx);
    /* 005b4c50: mov ecx, dword ptr [eax + 0x418] */ r_ecx = R32((u32)(r_eax+0x418u));
    /* 005b4c56: mov dword ptr [eax + 0x410], ecx */ W32((u32)(r_eax+0x410u), r_ecx);
    /* 005b4c5c: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005b4c5f: mov dword ptr [eax + 0x414], ecx */ W32((u32)(r_eax+0x414u), r_ecx);
    /* 005b4c65: mov dword ptr [eax + 0x3b4], ebx */ W32((u32)(r_eax+0x3b4u), r_ebx);
    /* 005b4c6b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b4c6e: mov dword ptr [eax + 0x3b0], 0x461c4000 */ W32((u32)(r_eax+0x3b0u), 0x461c4000u);
    /* 005b4c78: mov dword ptr [eax + 0x3b8], 0x42a00000 */ W32((u32)(r_eax+0x3b8u), 0x42a00000u);
    /* 005b4c82: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 005b4c84: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 005b4c86: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005b4c88: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005b4c8a: fstp dword ptr [eax + 0x398] */ W_F32((u32)(r_eax+0x398u), ST(0)); FPOP();
    /* 005b4c90: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b4c92: fstp dword ptr [eax + 0x394] */ W_F32((u32)(r_eax+0x394u), ST(0)); FPOP();
    /* 005b4c98: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 005b4c9b: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 005b4ca1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005b4ca3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b4ca5: fstp dword ptr [eax + 0x39c] */ W_F32((u32)(r_eax+0x39cu), ST(0)); FPOP();
    /* 005b4cab: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b4cb1: mov dword ptr [eax + 0x3a0], 0x300 */ W32((u32)(r_eax+0x3a0u), 0x300u);
    /* 005b4cbb: mov dword ptr [eax + 0x390], edx */ W32((u32)(r_eax+0x390u), r_edx);
    /* 005b4cc1: mov dword ptr [eax + 0x3a4], 0 */ W32((u32)(r_eax+0x3a4u), 0x0u);
    /* 005b4ccb: mov dword ptr [eax + 0x3a8], 0 */ W32((u32)(r_eax+0x3a8u), 0x0u);
    /* 005b4cd5: mov dword ptr [eax + 0x3ac], 0 */ W32((u32)(r_eax+0x3acu), 0x0u);
    /* 005b4cdf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b4ce2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b4ce9: mov esp, ebp */ r_esp = r_ebp;
    /* 005b4ceb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b4cec: ret 8 */ FN_RET(0x005b4ba0); r_esp += 12; return;
}

void f_005b4d34(void) /* sub_5B4D34 */
{
    FN_ENTER(0x005b4d34);
    /* 005b4d34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4d35: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005b4d37: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b4d39: push 0x3e3da12f */ { u32 v = 0x3e3da12fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b4d3e: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b4d42: call 0x5b2504 */ r_esp -= 4; W32(r_esp, 0x5b4d47u); f_005b2504();
    /* 005b4d47: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b4d4b: push dword ptr [ebx + 0x3a4] */ { u32 v = R32((u32)(r_ebx+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b4d51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b4d53: call 0x771934 */ r_esp -= 4; W32(r_esp, 0x5b4d58u); f_00771934();
    /* 005b4d58: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b4d59: ret 8 */ FN_RET(0x005b4d34); r_esp += 12; return;
}

void f_005b4d5c(void) /* sub_5B4D5C */
{
    FN_ENTER(0x005b4d5c);
    /* 005b4d5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b4d5d: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b4d60: mov edi, ecx */ r_edi = r_ecx;
    /* 005b4d62: fld dword ptr [edi + 0x418] */ FPUSH(R_F32((u32)(r_edi+0x418u)));
    /* 005b4d68: fcomp dword ptr [0x92ad6c] */ fx_compare(ST(0), R_F32((u32)(0x92ad6cu))); FPOP();
    /* 005b4d6e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b4d70: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b4d71: jae 0x5b4d84 */ if (!fC) goto L_005b4d84;
L_005b4d73:; BB(0x005b4d73);
    /* 005b4d73: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 005b4d79: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4d7e: je 0x5b4e60 */ if (fZ) goto L_005b4e60;
L_005b4d84:; BB(0x005b4d84);
    /* 005b4d84: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005b4d87: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b4d8b: mov eax, dword ptr [edi + 0x30c] */ r_eax = R32((u32)(r_edi+0x30cu));
    /* 005b4d91: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005b4d95: mov eax, dword ptr [edi + 0x310] */ r_eax = R32((u32)(r_edi+0x310u));
    /* 005b4d9b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005b4d9f: mov eax, dword ptr [edi + 0x314] */ r_eax = R32((u32)(r_edi+0x314u));
    /* 005b4da5: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005b4da9: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 005b4dac: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005b4daf: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 005b4db2: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005b4db6: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 005b4db9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b4dbd: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5b4dc2u); f_0082ebac();
    /* 005b4dc2: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005b4dc5: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005b4dc9: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005b4dcd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005b4dd1: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 005b4dd5: mov ecx, edi */ r_ecx = r_edi;
    /* 005b4dd7: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005b4ddb: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 005b4ddf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4de1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4de2: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5b4de7u); f_007b4c58();
    /* 005b4de7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4de9: je 0x5b4e08 */ if (fZ) goto L_005b4e08;
L_005b4deb:; BB(0x005b4deb);
    /* 005b4deb: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005b4def: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 005b4df3: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005b4df7: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 005b4dfb: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005b4dfe: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005b4e02: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 005b4e06: jmp 0x5b4e13 */ goto L_005b4e13;
L_005b4e08:; BB(0x005b4e08);
    /* 005b4e08: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005b4e0b: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005b4e0f: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
L_005b4e13:; BB(0x005b4e13);
    /* 005b4e13: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 005b4e15: fld dword ptr [0x92ad68] */ FPUSH(R_F32((u32)(0x92ad68u)));
    /* 005b4e1b: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 005b4e1e: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 005b4e20: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005b4e22: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005b4e24: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b4e26: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b4e27: jbe 0x5b4e35 */ if ((fC||fZ)) goto L_005b4e35;
L_005b4e29:; BB(0x005b4e29);
    /* 005b4e29: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b4e2b: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 005b4e2d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 005b4e2f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005b4e31: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005b4e33: jmp 0x5b4e4e */ goto L_005b4e4e;
L_005b4e35:; BB(0x005b4e35);
    /* 005b4e35: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005b4e37: fld dword ptr [0x92ad64] */ FPUSH(R_F32((u32)(0x92ad64u)));
    /* 005b4e3d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b4e3f: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005b4e41: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b4e43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b4e44: jae 0x5b4e4e */ if (!fC) goto L_005b4e4e;
L_005b4e46:; BB(0x005b4e46);
    /* 005b4e46: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 005b4e48: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 005b4e4a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005b4e4c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_005b4e4e:; BB(0x005b4e4e);
    /* 005b4e4e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005b4e50: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b4e52: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 005b4e55: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 005b4e58: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 005b4e5b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b4e5e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b4e5f: ret  */ FN_RET(0x005b4d5c); r_esp += 4; return;
L_005b4e60:; BB(0x005b4e60);
    /* 005b4e60: mov ecx, edi */ r_ecx = r_edi;
    /* 005b4e62: call 0x771994 */ r_esp -= 4; W32(r_esp, 0x5b4e67u); f_00771994();
    /* 005b4e67: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b4e6a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b4e6b: ret  */ FN_RET(0x005b4d5c); r_esp += 4; return;
}

void f_005b4e6c(void) /* sub_5B4E6C */
{
    FN_ENTER(0x005b4e6c);
    /* 005b4e6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b4e6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b4e6e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b4e6f: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b4e72: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b4e74: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005b4e76: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b4e78: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5b4e7du); f_00770738();
    /* 005b4e7d: mov esi, eax */ r_esi = r_eax;
    /* 005b4e7f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4e81: je 0x5b4ee0 */ if (fZ) goto L_005b4ee0;
L_005b4e83:; BB(0x005b4e83);
    /* 005b4e83: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b4e84: mov ecx, esi */ r_ecx = r_esi;
    /* 005b4e86: call 0x772c08 */ r_esp -= 4; W32(r_esp, 0x5b4e8bu); f_00772c08();
    /* 005b4e8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005b4e8d: jl 0x5b4ee0 */ if ((fS!=fO)) goto L_005b4ee0;
L_005b4e8f:; BB(0x005b4e8f);
    /* 005b4e8f: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b4e93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4e94: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005b4e96: mov edi, 1 */ r_edi = 0x1u;
    /* 005b4e9b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b4e9c: mov ecx, esi */ r_ecx = r_esi;
    /* 005b4e9e: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x5b4ea1u); call_ind(t); }
    /* 005b4ea1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4ea3: je 0x5b4ee0 */ if (fZ) goto L_005b4ee0;
L_005b4ea5:; BB(0x005b4ea5);
    /* 005b4ea5: movsx eax, word ptr [ebp + 0x2c4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2c4u));
    /* 005b4eac: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005b4eaf: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005b4eb2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005b4eb4: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005b4eb8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b4eba: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 005b4ebf: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005b4ec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ec4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ec5: mov ecx, esi */ r_ecx = r_esi;
    /* 005b4ec7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ec8: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b4ecc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ece: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ecf: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x5b4ed2u); call_ind(t); }
    /* 005b4ed2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b4ed4: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005b4ed7: or edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005b4edd: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005b4ee0:; BB(0x005b4ee0);
    /* 005b4ee0: mov eax, edi */ r_eax = r_edi;
    /* 005b4ee2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b4ee5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b4ee6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b4ee7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b4ee8: ret 4 */ FN_RET(0x005b4e6c); r_esp += 8; return;
}

void f_005b4f5c(void) /* sub_5B4F5C */
{
    FN_ENTER(0x005b4f5c);
    /* 005b4f5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b4f5d: mov ebp, esp */ r_ebp = r_esp;
    /* 005b4f5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b4f61: push 0x8d9118 */ { u32 v = 0x8d9118u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4f66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b4f6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4f6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005b4f74: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b4f77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005b4f7a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005b4f7d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005b4f80: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005b4f83: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4f88: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005b4f8f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5b4f94u); f_008581c5();
    /* 005b4f94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b4f95: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005b4f98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4f9a: je 0x5b50c0 */ if (fZ) goto L_005b50c0;
L_005b4fa0:; BB(0x005b4fa0);
    /* 005b4fa0: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 005b4fa7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b4fae: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005b4fb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b4fb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4fb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4fb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4fb6: push 0x9c1930 */ { u32 v = 0x9c1930u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4fbb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4fbd: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x5b4fc2u); f_005b7a84();
    /* 005b4fc2: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005b4fc5: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005b4fcc:; BB(0x005b4fcc);
    /* 005b4fcc: mov dword ptr [0xa749e8], eax */ W32((u32)(0xa749e8u), r_eax);
    /* 005b4fd1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b4fd8: call 0x807e68 */ r_esp -= 4; W32(r_esp, 0x5b4fddu); f_00807e68();
    /* 005b4fdd: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4fe0: je 0x5b50b6 */ if (fZ) goto L_005b50b6;
L_005b4fe6:; BB(0x005b4fe6);
    /* 005b4fe6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_005b4fe8:; BB(0x005b4fe8);
    /* 005b4fe8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005b4fea: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b4fec: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b4fee: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_005b4ff0:; BB(0x005b4ff0);
    /* 005b4ff0: mov ebx, dword ptr [esi + edi*4 + 0x92acbc] */ r_ebx = R32((u32)(r_esi+r_edi*4+0x92acbcu));
    /* 005b4ff7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ff8: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 005b4ffb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b4ffe: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5b5003u); f_0077a684();
    /* 005b5003: mov dword ptr [edi*4 + 0xa749e0], eax */ W32((u32)(r_edi*4+0xa749e0u), r_eax);
    /* 005b500a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b500b: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5b5010u); f_0077a698();
    /* 005b5010: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b5013: mov dword ptr [edx*2 + 0xa749d8], eax */ W32((u32)(r_edx*2+0xa749d8u), r_eax);
    /* 005b501a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b501b: mov dword ptr [eax + 8], 0x42200000 */ W32((u32)(r_eax+0x8u), 0x42200000u);
    /* 005b5022: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5b5027u); f_0077a6b4();
    /* 005b5027: mov dword ptr [edi*4 + 0xa749d0], eax */ W32((u32)(r_edi*4+0xa749d0u), r_eax);
    /* 005b502e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b502f: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5b5034u); f_0077a6cc();
    /* 005b5034: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b5037: mov dword ptr [edi*4 + 0xa749c8], eax */ W32((u32)(r_edi*4+0xa749c8u), r_eax);
    /* 005b503e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b5041: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b5044: jl 0x5b4ff0 */ if ((fS!=fO)) goto L_005b4ff0;
L_005b5046:; BB(0x005b5046);
    /* 005b5046: mov eax, dword ptr [0x92acb0] */ r_eax = R32((u32)(0x92acb0u));
    /* 005b504b: movzx edx, word ptr [0x92acb4] */ r_edx = (u32)R16((u32)(0x92acb4u));
    /* 005b5052: movzx ecx, word ptr [0x92acb6] */ r_ecx = (u32)R16((u32)(0x92acb6u));
    /* 005b5059: movzx ebx, word ptr [0x92acb8] */ r_ebx = (u32)R16((u32)(0x92acb8u));
    /* 005b5060: mov edi, dword ptr [0xa749e8] */ r_edi = R32((u32)(0xa749e8u));
    /* 005b5066: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 005b506c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005b506f: mov word ptr [ebp - 0x28], dx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_edx);
    /* 005b5073: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 005b5079: mov word ptr [ebp - 0x26], cx */ W16((u32)(r_ebp+0xffffffdau), (u16)r_ecx);
    /* 005b507d: mov word ptr [ebp - 0x24], bx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ebx);
    /* 005b5081: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 005b5084: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 005b5087: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5088: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b508a: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b508f: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b5092: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b5095: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5097: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5b509cu); f_00608470();
    /* 005b509c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b509f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b50a2: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b50a5: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b50a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b50ab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b50b2: mov esp, ebp */ r_esp = r_ebp;
    /* 005b50b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b50b5: ret  */ FN_RET(0x005b4f5c); r_esp += 4; return;
L_005b50b6:; BB(0x005b50b6);
    /* 005b50b6: mov esi, 1 */ r_esi = 0x1u;
    /* 005b50bb: jmp 0x5b4fe8 */ goto L_005b4fe8;
L_005b50c0:; BB(0x005b50c0);
    /* 005b50c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b50c2: jmp 0x5b4fcc */ goto L_005b4fcc;
}

