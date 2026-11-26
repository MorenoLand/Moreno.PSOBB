#include "protos.h"

void f_006450d4(void) /* sub_6450D4 */
{
    FN_ENTER(0x006450d4);
    /* 006450d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006450d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006450d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006450d7: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006450da: mov edi, edx */ r_edi = r_edx;
    /* 006450dc: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 006450e0: mov esi, eax */ r_esi = r_eax;
    /* 006450e2: push dword ptr [esi*4 + 0x9355d4] */ { u32 v = R32((u32)(r_esi*4+0x9355d4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006450e9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006450eb: call 0x645b00 */ r_esp -= 4; W32(r_esp, 0x6450f0u); f_00645b00();
    /* 006450f0: mov ecx, eax */ r_ecx = r_eax;
    /* 006450f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006450f5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006450f9: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 006450fc: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006450ff: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00645102: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00645105: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00645108: fadd dword ptr [ebx*4 + 0x935530] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x935530u));
    /* 0064510f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00645111: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00645113: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00645115: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0064511a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064511b: jbe 0x645123 */ if ((fC||fZ)) goto L_00645123;
L_0064511d:; BB(0x0064511d);
    /* 0064511d: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 00645121: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00645123:; BB(0x00645123);
    /* 00645123: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00645125: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00645126: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0064512a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0064512d: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x645132u); f_008304c8();
    /* 00645132: push dword ptr [esi*4 + 0x9355c0] */ { u32 v = R32((u32)(r_esi*4+0x9355c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00645139: call 0x645ae8 */ r_esp -= 4; W32(r_esp, 0x64513eu); f_00645ae8();
    /* 0064513e: mov ecx, eax */ r_ecx = r_eax;
    /* 00645140: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00645143: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 00645147: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0064514b: lea esi, [esp + 0xc] */ r_esi = (u32)(r_esp+0xcu);
    /* 0064514f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00645150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645151: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00645152: mov edx, edi */ r_edx = r_edi;
    /* 00645154: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x645159u); f_0082facc();
    /* 00645159: mov eax, ebx */ r_eax = r_ebx;
    /* 0064515b: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064515e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064515f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00645160: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00645161: ret  */ FN_RET(0x006450d4); r_esp += 4; return;
}

void f_00645164(void) /* sub_645164 */
{
    FN_ENTER(0x00645164);
    /* 00645164: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00645165: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00645168: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0064516a: fld dword ptr [ebp + 0x90] */ FPUSH(R_F32((u32)(r_ebp+0x90u)));
    /* 00645170: fadd dword ptr [ebp + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x94u));
    /* 00645176: fstp dword ptr [ebp + 0x90] */ W_F32((u32)(r_ebp+0x90u), ST(0)); FPOP();
    /* 0064517c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0064517e: call 0x644f58 */ r_esp -= 4; W32(r_esp, 0x645183u); f_00644f58();
    /* 00645183: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645185: jne 0x645194 */ if (!fZ) goto L_00645194;
L_00645187:; BB(0x00645187);
    /* 00645187: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0064518b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00645190: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_00645194:; BB(0x00645194);
    /* 00645194: mov edx, dword ptr [ebp + 0x98] */ r_edx = R32((u32)(r_ebp+0x98u));
    /* 0064519a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064519d: je 0x645330 */ if (fZ) goto L_00645330;
L_006451a3:; BB(0x006451a3);
    /* 006451a3: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006451a6: je 0x64529f */ if (fZ) goto L_0064529f;
L_006451ac:; BB(0x006451ac);
    /* 006451ac: mov eax, dword ptr [0xa8f3e4] */ r_eax = R32((u32)(0xa8f3e4u));
    /* 006451b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006451b3: je 0x64526b */ if (fZ) goto L_0064526b;
L_006451b9:; BB(0x006451b9);
    /* 006451b9: mov edx, dword ptr [ebp + 0xa0] */ r_edx = R32((u32)(r_ebp+0xa0u));
    /* 006451bf: lea eax, [edx - 0xa] */ r_eax = (u32)(r_edx+0xfffffff6u);
    /* 006451c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006451c4: jl 0x64528e */ if ((fS!=fO)) goto L_0064528e;
L_006451ca:; BB(0x006451ca);
    /* 006451ca: mov dword ptr [ebp + 0xa0], eax */ W32((u32)(r_ebp+0xa0u), r_eax);
L_006451d0:; BB(0x006451d0);
    /* 006451d0: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 006451d6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006451d9: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006451dc: jl 0x6451ea */ if ((fS!=fO)) goto L_006451ea;
L_006451de:; BB(0x006451de);
    /* 006451de: mov dword ptr [ebp + 0xa4], 0 */ W32((u32)(r_ebp+0xa4u), 0x0u);
    /* 006451e8: jmp 0x6451f0 */ goto L_006451f0;
L_006451ea:; BB(0x006451ea);
    /* 006451ea: mov dword ptr [ebp + 0xa4], eax */ W32((u32)(r_ebp+0xa4u), r_eax);
L_006451f0:; BB(0x006451f0);
    /* 006451f0: mov eax, dword ptr [ebp + 0xa8] */ r_eax = R32((u32)(r_ebp+0xa8u));
    /* 006451f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006451f8: je 0x645270 */ if (fZ) goto L_00645270;
L_006451fa:; BB(0x006451fa);
    /* 006451fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006451fc: je 0x64526b */ if (fZ) goto L_0064526b;
L_006451fe:; BB(0x006451fe);
    /* 006451fe: mov eax, dword ptr [ebp + 0x9c] */ r_eax = R32((u32)(r_ebp+0x9cu));
    /* 00645204: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645206: jne 0x645214 */ if (!fZ) goto L_00645214;
L_00645208:; BB(0x00645208);
    /* 00645208: fld dword ptr [0x9355b8] */ FPUSH(R_F32((u32)(0x9355b8u)));
    /* 0064520e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00645212: jmp 0x64521e */ goto L_0064521e;
L_00645214:; BB(0x00645214);
    /* 00645214: fld dword ptr [0x9355bc] */ FPUSH(R_F32((u32)(0x9355bcu)));
    /* 0064521a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_0064521e:; BB(0x0064521e);
    /* 0064521e: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00645221: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00645224: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 00645227: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0064522a: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0064522d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00645231: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00645235: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x64523au); f_0082dcbc();
    /* 0064523a: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 0064523e: fsubr dword ptr [esp] */ ST(0) = R_F32((u32)(r_esp)) - ST(0);
    /* 00645241: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 00645244: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00645247: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x64524cu); f_0082ddd8();
    /* 0064524c: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00645250: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00645253: mov ecx, dword ptr [ebp + 0xa8] */ r_ecx = R32((u32)(r_ebp+0xa8u));
    /* 00645259: fchs  */ ST(0) = -ST(0);
    /* 0064525b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0064525d: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00645261: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00645265: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645266: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x64526bu); f_00508db8();
L_0064526b:; BB(0x0064526b);
    /* 0064526b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064526e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064526f: ret  */ FN_RET(0x00645164); r_esp += 4; return;
L_00645270:; BB(0x00645270);
    /* 00645270: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00645272: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 00645277: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0064527a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064527b: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x645280u); f_0050981c();
    /* 00645280: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00645283: mov dword ptr [ebp + 0xa8], eax */ W32((u32)(r_ebp+0xa8u), r_eax);
    /* 00645289: jmp 0x6451fa */ goto L_006451fa;
L_0064528e:; BB(0x0064528e);
    /* 0064528e: add edx, 0xf6 */ {  u32 a = r_edx; u32 b = 0xf6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00645294: mov dword ptr [ebp + 0xa0], edx */ W32((u32)(r_ebp+0xa0u), r_edx);
    /* 0064529a: jmp 0x6451d0 */ goto L_006451d0;
L_0064529f:; BB(0x0064529f);
    /* 0064529f: fld dword ptr [ebp + 0x90] */ FPUSH(R_F32((u32)(r_ebp+0x90u)));
    /* 006452a5: fcom dword ptr [0x9355ac] */ fx_compare(ST(0), R_F32((u32)(0x9355acu))); 
    /* 006452ab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006452ad: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006452ae: jb 0x645355 */ if (fC) goto L_00645355;
L_006452b4:; BB(0x006452b4);
    /* 006452b4: fcomp dword ptr [0x9355a8] */ fx_compare(ST(0), R_F32((u32)(0x9355a8u))); FPOP();
    /* 006452ba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006452bc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006452bd: ja 0x6451ac */ if ((!fC&&!fZ)) goto L_006451ac;
L_006452c3:; BB(0x006452c3);
    /* 006452c3: mov eax, dword ptr [ebp + 0x9c] */ r_eax = R32((u32)(r_ebp+0x9cu));
    /* 006452c9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006452cc: je 0x645315 */ if (fZ) goto L_00645315;
L_006452ce:; BB(0x006452ce);
    /* 006452ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006452d0: jne 0x6452fa */ if (!fZ) goto L_006452fa;
L_006452d2:; BB(0x006452d2);
    /* 006452d2: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006452d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006452d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006452d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006452d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006452da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006452db: push 0x418 */ { u32 v = 0x418u; r_esp -= 4; W32(r_esp, v); }
    /* 006452e0: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x6452e5u); f_008144b0();
    /* 006452e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006452e7: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 006452ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006452ed: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6452f2u); f_00814664();
    /* 006452f2: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006452f5: jmp 0x6451ac */ goto L_006451ac;
L_006452fa:; BB(0x006452fa);
    /* 006452fa: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006452fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006452ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645300: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645301: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00645302: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00645303: push 0x418 */ { u32 v = 0x418u; r_esp -= 4; W32(r_esp, v); }
    /* 00645308: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x64530du); f_008144b0();
    /* 0064530d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00645310: jmp 0x6451ac */ goto L_006451ac;
L_00645315:; BB(0x00645315);
    /* 00645315: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00645318: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064531a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064531b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064531c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064531d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064531e: push 0x419 */ { u32 v = 0x419u; r_esp -= 4; W32(r_esp, v); }
    /* 00645323: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x645328u); f_008144b0();
    /* 00645328: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064532b: jmp 0x6451ac */ goto L_006451ac;
L_00645330:; BB(0x00645330);
    /* 00645330: fld dword ptr [ebp + 0x90] */ FPUSH(R_F32((u32)(r_ebp+0x90u)));
    /* 00645336: fcom dword ptr [0x9355b4] */ fx_compare(ST(0), R_F32((u32)(0x9355b4u))); 
    /* 0064533c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064533e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064533f: jb 0x64535c */ if (fC) goto L_0064535c;
L_00645341:; BB(0x00645341);
    /* 00645341: fcomp dword ptr [0x9355b0] */ fx_compare(ST(0), R_F32((u32)(0x9355b0u))); FPOP();
    /* 00645347: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00645349: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064534a: jbe 0x6452c3 */ if ((fC||fZ)) goto L_006452c3;
L_00645350:; BB(0x00645350);
    /* 00645350: jmp 0x6451a3 */ goto L_006451a3;
L_00645355:; BB(0x00645355);
    /* 00645355: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00645357: jmp 0x6451ac */ goto L_006451ac;
L_0064535c:; BB(0x0064535c);
    /* 0064535c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0064535e: jmp 0x6451a3 */ goto L_006451a3;
}

void f_00645364(void) /* sub_645364 */
{
    FN_ENTER(0x00645364);
    /* 00645364: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00645365: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00645366: mov esi, ecx */ r_esi = r_ecx;
    /* 00645368: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064536d: mov ecx, esi */ r_ecx = r_esi;
    /* 0064536f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00645371: push 0x44480000 */ { u32 v = 0x44480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00645376: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x645379u); call_ind(t); }
    /* 00645379: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064537b: jne 0x645380 */ if (!fZ) goto L_00645380;
L_0064537d:; BB(0x0064537d);
    /* 0064537d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064537e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064537f: ret  */ FN_RET(0x00645364); r_esp += 4; return;
L_00645380:; BB(0x00645380);
    /* 00645380: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x645385u); f_0082dab0();
    /* 00645385: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x64538au); f_0082d7b0();
    /* 0064538a: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0064538d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x645392u); f_0082d838();
    /* 00645392: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00645395: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00645397: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x64539cu); f_0082d8bc();
    /* 0064539c: mov eax, dword ptr [esi + 0x9c] */ r_eax = R32((u32)(r_esi+0x9cu));
    /* 006453a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006453a4: je 0x6453b0 */ if (fZ) goto L_006453b0;
L_006453a6:; BB(0x006453a6);
    /* 006453a6: mov edx, dword ptr [esi + 0x64] */ r_edx = R32((u32)(r_esi+0x64u));
    /* 006453a9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006453ab: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x6453b0u); f_00830c04();
L_006453b0:; BB(0x006453b0);
    /* 006453b0: mov ecx, dword ptr [0xa8f430] */ r_ecx = R32((u32)(0xa8f430u));
    /* 006453b6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6453bbu); f_00829cc8();
    /* 006453bb: mov eax, dword ptr [esi + 0x9c] */ r_eax = R32((u32)(r_esi+0x9cu));
    /* 006453c1: push dword ptr [eax*4 + 0x9355c0] */ { u32 v = R32((u32)(r_eax*4+0x9355c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006453c8: call 0x645ae8 */ r_esp -= 4; W32(r_esp, 0x6453cdu); f_00645ae8();
    /* 006453cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006453ce: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x6453d3u); f_0082e1e8();
    /* 006453d3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006453d6: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6453dbu); f_0082dbac();
    /* 006453db: mov eax, dword ptr [esi + 0x9c] */ r_eax = R32((u32)(r_esi+0x9cu));
    /* 006453e1: push dword ptr [eax*4 + 0x93558c] */ { u32 v = R32((u32)(r_eax*4+0x93558cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006453e8: call 0x645ae8 */ r_esp -= 4; W32(r_esp, 0x6453edu); f_00645ae8();
    /* 006453ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006453ee: mov ecx, eax */ r_ecx = r_eax;
    /* 006453f0: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x6453f5u); f_00831758();
    /* 006453f5: mov eax, dword ptr [0xa8f3e4] */ r_eax = R32((u32)(0xa8f3e4u));
    /* 006453fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006453fc: je 0x645469 */ if (fZ) goto L_00645469;
L_006453fe:; BB(0x006453fe);
    /* 006453fe: mov ecx, dword ptr [0xa8f3e8] */ r_ecx = R32((u32)(0xa8f3e8u));
    /* 00645404: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00645406: mov edi, dword ptr [eax + 0x20] */ r_edi = R32((u32)(r_eax+0x20u));
    /* 00645409: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 0064540f: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00645412: jl 0x64541a */ if ((fS!=fO)) goto L_0064541a;
L_00645414:; BB(0x00645414);
    /* 00645414: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00645417: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
L_0064541a:; BB(0x0064541a);
    /* 0064541a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x64541fu); f_00829cc8();
    /* 0064541f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00645421: mov edx, dword ptr [esi + 0x9c] */ r_edx = R32((u32)(r_esi+0x9cu));
    /* 00645427: mov ecx, dword ptr [edx*4 + 0xa8f3ec] */ r_ecx = R32((u32)(r_edx*4+0xa8f3ecu));
    /* 0064542e: movsx eax, word ptr [esi + 0xa0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xa0u));
    /* 00645435: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645436: call 0x52ddac */ r_esp -= 4; W32(r_esp, 0x64543bu); f_0052ddac();
    /* 0064543b: mov eax, dword ptr [0xa8f3e4] */ r_eax = R32((u32)(0xa8f3e4u));
    /* 00645440: mov esi, dword ptr [esi + 0x9c] */ r_esi = R32((u32)(r_esi+0x9cu));
    /* 00645446: mov ecx, dword ptr [esi*4 + 0x935578] */ r_ecx = R32((u32)(r_esi*4+0x935578u));
    /* 0064544d: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00645453: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00645455: push dword ptr [edx + ecx*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00645459: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x64545eu); f_0082e1e8();
    /* 0064545e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064545f: mov eax, dword ptr [0xa8f3e8] */ r_eax = R32((u32)(0xa8f3e8u));
    /* 00645464: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00645466: mov dword ptr [edx + 0x20], edi */ W32((u32)(r_edx+0x20u), r_edi);
L_00645469:; BB(0x00645469);
    /* 00645469: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x64546eu); f_0082da80();
    /* 0064546e: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x645473u); f_0082dab0();
    /* 00645473: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00645474: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00645475: ret  */ FN_RET(0x00645364); r_esp += 4; return;
}

void f_00645478(void) /* sub_645478 */
{
    FN_ENTER(0x00645478);
    /* 00645478: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00645479: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0064547e: mov ebx, eax */ r_ebx = r_eax;
L_00645480:; BB(0x00645480);
    /* 00645480: mov ecx, dword ptr [ebx + 0xa8f3ec] */ r_ecx = R32((u32)(r_ebx+0xa8f3ecu));
    /* 00645486: add ebx, -4 */ {  u32 a = r_ebx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00645489: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064548b: je 0x6454a0 */ if (fZ) goto L_006454a0;
L_0064548d:; BB(0x0064548d);
    /* 0064548d: je 0x645496 */ if (fZ) goto L_00645496;
L_0064548f:; BB(0x0064548f);
    /* 0064548f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00645491: call 0x44bbac */ r_esp -= 4; W32(r_esp, 0x645496u); f_0044bbac();
L_00645496:; BB(0x00645496);
    /* 00645496: mov dword ptr [ebx + 0xa8f3f0], 0 */ W32((u32)(r_ebx+0xa8f3f0u), 0x0u);
L_006454a0:; BB(0x006454a0);
    /* 006454a0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006454a2: jge 0x645480 */ if ((fS==fO)) goto L_00645480;
L_006454a4:; BB(0x006454a4);
    /* 006454a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006454a5: ret  */ FN_RET(0x00645478); r_esp += 4; return;
}

void f_006454a8(void) /* sub_6454A8 */
{
    FN_ENTER(0x006454a8);
    /* 006454a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006454a9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006454ab: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006454af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006454b1: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6454b6u); f_008193cc();
    /* 006454b6: mov dword ptr [ebp], 0xb2f3a0 */ W32((u32)(r_ebp), 0xb2f3a0u);
    /* 006454bd: mov eax, dword ptr [0x9c7024] */ r_eax = R32((u32)(0x9c7024u));
    /* 006454c2: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 006454c5: lea edx, [ebp + 0x28] */ r_edx = (u32)(r_ebp+0x28u);
    /* 006454c8: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 006454cf: lea eax, [ebp + 0x78] */ r_eax = (u32)(r_ebp+0x78u);
    /* 006454d2: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
    /* 006454d9: mov dword ptr [ebp + 0x24], 0x14 */ W32((u32)(r_ebp+0x24u), 0x14u);
L_006454e0:; BB(0x006454e0);
    /* 006454e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006454e2: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006454e4: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 006454e7: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 006454ea: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 006454ed: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006454f0: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006454f2: ja 0x6454e0 */ if ((!fC&&!fZ)) goto L_006454e0;
L_006454f4:; BB(0x006454f4);
    /* 006454f4: mov eax, ebp */ r_eax = r_ebp;
    /* 006454f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006454f7: ret 4 */ FN_RET(0x006454a8); r_esp += 8; return;
}

void f_006454fc(void) /* sub_6454FC */
{
    FN_ENTER(0x006454fc);
    /* 006454fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006454fd: mov ebp, esp */ r_ebp = r_esp;
    /* 006454ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00645501: push 0x8e59ae */ { u32 v = 0x8e59aeu; r_esp -= 4; W32(r_esp, v); }
    /* 00645506: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064550c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064550d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00645514: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00645517: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064551a: mov dword ptr [ebp - 0x38], ebx */ W32((u32)(r_ebp+0xffffffc8u), r_ebx);
    /* 0064551d: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
    /* 00645520: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 00645523: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00645526: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00645528: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0064552b:; BB(0x0064552b);
    /* 0064552b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064552e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00645531: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00645534: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00645537: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00645539: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064553b: add ecx, dword ptr [ebp - 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064553e: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00645541: mov esi, dword ptr [ecx + 0x2c] */ r_esi = R32((u32)(r_ecx+0x2cu));
    /* 00645544: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00645547: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00645549: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0064554c: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 0064554f: mov ebx, 0 */ r_ebx = 0x0u;
    /* 00645554: jle 0x6455f3 */ if ((fZ||fS!=fO)) goto L_006455f3;
L_0064555a:; BB(0x0064555a);
    /* 0064555a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064555d: mov ecx, dword ptr [eax + ebx*4 + 0x30] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x30u));
    /* 00645561: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645563: je 0x64557a */ if (fZ) goto L_0064557a;
L_00645565:; BB(0x00645565);
    /* 00645565: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x64556au); f_008173b4();
    /* 0064556a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064556c: je 0x64557a */ if (fZ) goto L_0064557a;
L_0064556e:; BB(0x0064556e);
    /* 0064556e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00645571: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00645574: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00645576: jl 0x64555a */ if ((fS!=fO)) goto L_0064555a;
L_00645578:; BB(0x00645578);
    /* 00645578: jmp 0x6455f3 */ goto L_006455f3;
L_0064557a:; BB(0x0064557a);
    /* 0064557a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064557d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00645580: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00645583: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00645585: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00645587: jge 0x6455dd */ if ((fS==fO)) goto L_006455dd;
L_00645589:; BB(0x00645589);
    /* 00645589: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064558b: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064558e: jl 0x6455c8 */ if ((fS!=fO)) goto L_006455c8;
L_00645590:; BB(0x00645590);
    /* 00645590: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00645593: lea edx, [eax - 6] */ r_edx = (u32)(r_eax+0xfffffffau);
L_00645596:; BB(0x00645596);
    /* 00645596: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00645599: mov esi, dword ptr [eax + ecx*4 + 0x34] */ r_esi = R32((u32)(r_eax+r_ecx*4+0x34u));
    /* 0064559d: mov edi, dword ptr [eax + ecx*4 + 0x38] */ r_edi = R32((u32)(r_eax+r_ecx*4+0x38u));
    /* 006455a1: mov dword ptr [eax + ecx*4 + 0x30], esi */ W32((u32)(r_eax+r_ecx*4+0x30u), r_esi);
    /* 006455a5: mov esi, dword ptr [eax + ecx*4 + 0x3c] */ r_esi = R32((u32)(r_eax+r_ecx*4+0x3cu));
    /* 006455a9: mov dword ptr [eax + ecx*4 + 0x34], edi */ W32((u32)(r_eax+r_ecx*4+0x34u), r_edi);
    /* 006455ad: mov dword ptr [eax + ecx*4 + 0x38], esi */ W32((u32)(r_eax+r_ecx*4+0x38u), r_esi);
    /* 006455b1: mov esi, dword ptr [eax + ecx*4 + 0x40] */ r_esi = R32((u32)(r_eax+r_ecx*4+0x40u));
    /* 006455b5: mov dword ptr [eax + ecx*4 + 0x3c], esi */ W32((u32)(r_eax+r_ecx*4+0x3cu), r_esi);
    /* 006455b9: mov esi, dword ptr [eax + ecx*4 + 0x44] */ r_esi = R32((u32)(r_eax+r_ecx*4+0x44u));
    /* 006455bd: mov dword ptr [eax + ecx*4 + 0x40], esi */ W32((u32)(r_eax+r_ecx*4+0x40u), r_esi);
    /* 006455c1: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006455c4: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006455c6: jle 0x645596 */ if ((fZ||fS!=fO)) goto L_00645596;
L_006455c8:; BB(0x006455c8);
    /* 006455c8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006455cb: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006455ce: mov eax, dword ptr [edx + ecx*4 + 0x34] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x34u));
    /* 006455d2: mov dword ptr [edx + ecx*4 + 0x30], eax */ W32((u32)(r_edx+r_ecx*4+0x30u), r_eax);
    /* 006455d6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006455d9: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006455db: jl 0x6455c8 */ if ((fS!=fO)) goto L_006455c8;
L_006455dd:; BB(0x006455dd);
    /* 006455dd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006455e0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006455e3: mov dword ptr [eax + edx*4 + 0x30], 0 */ W32((u32)(r_eax+r_edx*4+0x30u), 0x0u);
    /* 006455eb: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006455ee: jmp 0x64556e */ goto L_0064556e;
L_006455f3:; BB(0x006455f3);
    /* 006455f3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006455f6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006455f9: jge 0x645608 */ if ((fS==fO)) goto L_00645608;
L_006455fb:; BB(0x006455fb);
    /* 006455fb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006455fe: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00645601: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00645604: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00645606: jle 0x645645 */ if ((fZ||fS!=fO)) goto L_00645645;
L_00645608:; BB(0x00645608);
    /* 00645608: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064560b: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064560e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00645611: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00645614: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00645617: mov dword ptr [ecx + ebx*8 + 0x2c], eax */ W32((u32)(r_ecx+r_ebx*8+0x2cu), r_eax);
    /* 0064561b: mov dword ptr [ecx + ebx*8 + 0x28], edx */ W32((u32)(r_ecx+r_ebx*8+0x28u), r_edx);
    /* 0064561f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00645622: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00645625: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00645628: jl 0x64552b */ if ((fS!=fO)) goto L_0064552b;
L_0064562e:; BB(0x0064562e);
    /* 0064562e: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 00645631: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 00645634: mov ebx, dword ptr [ebp - 0x38] */ r_ebx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00645637: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064563a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00645641: mov esp, ebp */ r_esp = r_ebp;
    /* 00645643: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00645644: ret  */ FN_RET(0x006454fc); r_esp += 4; return;
L_00645645:; BB(0x00645645);
    /* 00645645: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x64564au); f_008587a5();
    /* 0064564a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064564d: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00645650: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 00645653: fdiv dword ptr [0x93556c] */ ST(0) = ST(0) / R_F32((u32)(0x93556cu));
    /* 00645659: fmul dword ptr [0x935568] */ ST(0) = ST(0) * R_F32((u32)(0x935568u));
    /* 0064565f: fadd dword ptr [0x935570] */ ST(0) = ST(0) + R_F32((u32)(0x935570u));
    /* 00645665: fnstcw word ptr [ebp - 0x60] */ W16((u32)(r_ebp+0xffffffa0u), fcw);
    /* 00645668: movzx eax, word ptr [ebp - 0x60] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa0u));
    /* 0064566c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00645671: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00645674: fldcw word ptr [ebp - 0x58] */ fcw = R16((u32)(r_ebp+0xffffffa8u));
    /* 00645677: fistp dword ptr [ebp - 0x48] */ W32((u32)(r_ebp+0xffffffb8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0064567a: fldcw word ptr [ebp - 0x60] */ fcw = R16((u32)(r_ebp+0xffffffa0u));
    /* 0064567d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064567f: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00645682: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00645685: jne 0x6456e3 */ if (!fZ) goto L_006456e3;
L_00645687:; BB(0x00645687);
    /* 00645687: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x64568cu); f_008587a5();
    /* 0064568c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064568f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00645692: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 00645695: fdiv dword ptr [0x93556c] */ ST(0) = ST(0) / R_F32((u32)(0x93556cu));
    /* 0064569b: fmul dword ptr [0x935560] */ ST(0) = ST(0) * R_F32((u32)(0x935560u));
    /* 006456a1: fnstcw word ptr [ebp - 0x60] */ W16((u32)(r_ebp+0xffffffa0u), fcw);
    /* 006456a4: movzx eax, word ptr [ebp - 0x60] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa0u));
    /* 006456a8: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006456ad: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006456b2: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006456b5: fldcw word ptr [ebp - 0x58] */ fcw = R16((u32)(r_ebp+0xffffffa8u));
    /* 006456b8: fistp dword ptr [ebp - 0x48] */ W32((u32)(r_ebp+0xffffffb8u), (u32)fx_int32(ST(0))); FPOP();
    /* 006456bb: fldcw word ptr [ebp - 0x60] */ fcw = R16((u32)(r_ebp+0xffffffa0u));
    /* 006456be: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006456c1: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006456c4: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006456c7: jne 0x64572f */ if (!fZ) goto L_0064572f;
L_006456c9:; BB(0x006456c9);
    /* 006456c9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006456cc: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 006456cf: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006456d2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006456d5: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006456d8: je 0x64585a */ if (fZ) goto L_0064585a;
L_006456de:; BB(0x006456de);
    /* 006456de: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 006456e1: jmp 0x64572f */ goto L_0064572f;
L_006456e3:; BB(0x006456e3);
    /* 006456e3: mov eax, edx */ r_eax = r_edx;
    /* 006456e5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006456e8: je 0x645687 */ if (fZ) goto L_00645687;
L_006456ea:; BB(0x006456ea);
    /* 006456ea: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6456efu); f_008587a5();
    /* 006456ef: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006456f2: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006456f5: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 006456f8: fdiv dword ptr [0x93556c] */ ST(0) = ST(0) / R_F32((u32)(0x93556cu));
    /* 006456fe: fmul dword ptr [0x935564] */ ST(0) = ST(0) * R_F32((u32)(0x935564u));
    /* 00645704: fnstcw word ptr [ebp - 0x60] */ W16((u32)(r_ebp+0xffffffa0u), fcw);
    /* 00645707: movzx eax, word ptr [ebp - 0x60] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa0u));
    /* 0064570b: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00645710: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00645715: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00645718: fldcw word ptr [ebp - 0x58] */ fcw = R16((u32)(r_ebp+0xffffffa8u));
    /* 0064571b: fistp dword ptr [ebp - 0x48] */ W32((u32)(r_ebp+0xffffffb8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0064571e: fldcw word ptr [ebp - 0x60] */ fcw = R16((u32)(r_ebp+0xffffffa0u));
    /* 00645721: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00645724: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00645727: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064572a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0064572d: je 0x6456c9 */ if (fZ) goto L_006456c9;
L_0064572f:; BB(0x0064572f);
    /* 0064572f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x645734u); f_008587a5();
    /* 00645734: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00645737: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0064573a: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 0064573d: fdiv dword ptr [0x93556c] */ ST(0) = ST(0) / R_F32((u32)(0x93556cu));
    /* 00645743: fmul dword ptr [0x935558] */ ST(0) = ST(0) * R_F32((u32)(0x935558u));
    /* 00645749: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064574c: fadd dword ptr [0x93555c] */ ST(0) = ST(0) + R_F32((u32)(0x93555cu));
    /* 00645752: fmul dword ptr [eax*4 + 0xa8f400] */ ST(0) = ST(0) * R_F32((u32)(r_eax*4+0xa8f400u));
    /* 00645759: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 0064575c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0064575e: jle 0x64578d */ if ((fZ||fS!=fO)) goto L_0064578d;
L_00645760:; BB(0x00645760);
    /* 00645760: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00645763: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00645766: mov ebx, eax */ r_ebx = r_eax;
    /* 00645768: fld dword ptr [ebx*4 + 0xa8f414] */ FPUSH(R_F32((u32)(r_ebx*4+0xa8f414u)));
    /* 0064576f: fmul dword ptr [0x935554] */ ST(0) = ST(0) * R_F32((u32)(0x935554u));
    /* 00645775: mov edx, dword ptr [edx + ecx*4 + 0x2c] */ r_edx = R32((u32)(r_edx+r_ecx*4+0x2cu));
    /* 00645779: fcomp dword ptr [edx + 0x90] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x90u))); FPOP();
    /* 0064577f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00645781: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00645782: jbe 0x64578d */ if ((fC||fZ)) goto L_0064578d;
L_00645784:; BB(0x00645784);
    /* 00645784: fld dword ptr [edx + 0x94] */ FPUSH(R_F32((u32)(r_edx+0x94u)));
    /* 0064578a: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
L_0064578d:; BB(0x0064578d);
    /* 0064578d: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 00645794: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00645799: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64579eu); f_005caba4();
    /* 0064579e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006457a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006457a4: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 006457a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006457a9: je 0x64587b */ if (fZ) goto L_0064587b;
L_006457af:; BB(0x006457af);
    /* 006457af: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
    /* 006457b6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006457bd: mov ecx, eax */ r_ecx = r_eax;
    /* 006457bf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006457c2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 006457c5: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 006457c8: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006457cb: fstp dword ptr [ebp - 0x6c] */ W_F32((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 006457ce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006457cf: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 006457d2: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 006457d5: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 006457d8: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x6457ddu); f_007ba278();
    /* 006457dd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006457e4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006457e7: mov dword ptr [ecx], 0xb2f3b0 */ W32((u32)(r_ecx), 0xb2f3b0u);
    /* 006457ed: mov eax, dword ptr [0x9c7028] */ r_eax = R32((u32)(0x9c7028u));
    /* 006457f2: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 006457fc: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006457ff: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00645801: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00645804: mov ebx, dword ptr [ebp - 0x70] */ r_ebx = R32((u32)(r_ebp+0xffffff90u));
    /* 00645807: mov esi, dword ptr [ebp - 0x6c] */ r_esi = R32((u32)(r_ebp+0xffffff94u));
    /* 0064580a: mov dword ptr [ecx + 0x98], edx */ W32((u32)(r_ecx+0x98u), r_edx);
    /* 00645810: mov dword ptr [ecx + 0x9c], ebx */ W32((u32)(r_ecx+0x9cu), r_ebx);
    /* 00645816: mov dword ptr [ecx + 0x94], esi */ W32((u32)(r_ecx+0x94u), r_esi);
    /* 0064581c: mov dword ptr [ecx + 0xa0], edi */ W32((u32)(r_ecx+0xa0u), r_edi);
    /* 00645822: mov dword ptr [ecx + 0xa4], edi */ W32((u32)(r_ecx+0xa4u), r_edi);
    /* 00645828: mov dword ptr [ecx + 0xa8], edi */ W32((u32)(r_ecx+0xa8u), r_edi);
    /* 0064582e: call 0x644f58 */ r_esp -= 4; W32(r_esp, 0x645833u); f_00644f58();
    /* 00645833: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00645836: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00645838: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 0064583b: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
L_0064583e:; BB(0x0064583e);
    /* 0064583e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00645841: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00645844: mov dword ptr [edx + ecx*4 + 0x30], eax */ W32((u32)(r_edx+r_ecx*4+0x30u), r_eax);
    /* 00645848: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064584b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0064584e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00645855: jmp 0x645608 */ goto L_00645608;
L_0064585a:; BB(0x0064585a);
    /* 0064585a: cmp ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064585d: jl 0x64586b */ if ((fS!=fO)) goto L_0064586b;
L_0064585f:; BB(0x0064585f);
    /* 0064585f: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 00645866: jmp 0x64572f */ goto L_0064572f;
L_0064586b:; BB(0x0064586b);
    /* 0064586b: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 0064586e: mov edx, 2 */ r_edx = 0x2u;
    /* 00645873: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00645876: jmp 0x64572f */ goto L_0064572f;
L_0064587b:; BB(0x0064587b);
    /* 0064587b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064587d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00645880: jmp 0x64583e */ goto L_0064583e;
}

void f_00645884(void) /* sub_645884 */
{
    FN_ENTER(0x00645884);
    /* 00645884: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00645885: mov ebp, esp */ r_ebp = r_esp;
    /* 00645887: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00645889: push 0x8e59d4 */ { u32 v = 0x8e59d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0064588e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00645894: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645895: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064589c: sub esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006458a2: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006458a5: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 006458a8: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 006458ab: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006458ae: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_006458b0:; BB(0x006458b0);
    /* 006458b0: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 006458b3: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 006458b6: push dword ptr [eax + 0x9355d4] */ { u32 v = R32((u32)(r_eax+0x9355d4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006458bc: call 0x645b00 */ r_esp -= 4; W32(r_esp, 0x6458c1u); f_00645b00();
    /* 006458c1: mov ebx, eax */ r_ebx = r_eax;
    /* 006458c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006458c6: fld dword ptr [0x93554c] */ FPUSH(R_F32((u32)(0x93554cu)));
    /* 006458cc: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006458cf: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 006458d2: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006458d5: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006458d8: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 006458db: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006458de: fadd dword ptr [edx*4 + 0x935528] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x935528u));
    /* 006458e5: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 006458e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006458ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006458ec: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x6458f1u); f_008304c8();
    /* 006458f1: push dword ptr [esi*2 + 0x9355c0] */ { u32 v = R32((u32)(r_esi*2+0x9355c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006458f8: call 0x645ae8 */ r_esp -= 4; W32(r_esp, 0x6458fdu); f_00645ae8();
    /* 006458fd: mov ecx, eax */ r_ecx = r_eax;
    /* 006458ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00645902: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 00645908: lea edx, [ebp - 0x94] */ r_edx = (u32)(r_ebp+0xffffff6cu);
    /* 0064590e: lea esi, [ebp - 0xa4] */ r_esi = (u32)(r_ebp+0xffffff5cu);
    /* 00645914: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00645915: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00645916: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645917: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 0064591a: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x64591fu); f_0082facc();
    /* 0064591f: fld dword ptr [0x935548] */ FPUSH(R_F32((u32)(0x935548u)));
    /* 00645925: fcom dword ptr [ebp - 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffffe4u))); 
    /* 00645928: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064592a: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 0064592d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064592e: jae 0x6459a8 */ if (!fC) goto L_006459a8;
L_00645930:; BB(0x00645930);
    /* 00645930: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00645933: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00645934: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00645937: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00645939: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x64593eu); f_008304c8();
    /* 0064593e: push dword ptr [edi*4 + 0x9355c0] */ { u32 v = R32((u32)(r_edi*4+0x9355c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00645945: call 0x645ae8 */ r_esp -= 4; W32(r_esp, 0x64594au); f_00645ae8();
    /* 0064594a: mov ecx, eax */ r_ecx = r_eax;
    /* 0064594c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064594f: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 00645952: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 00645955: lea esi, [ebp - 0x70] */ r_esi = (u32)(r_ebp+0xffffff90u);
    /* 00645958: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00645959: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064595a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064595b: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 0064595e: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x645963u); f_0082facc();
    /* 00645963: lea ecx, [ebp - 0x7c] */ r_ecx = (u32)(r_ebp+0xffffff84u);
    /* 00645966: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 00645969: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x64596eu); f_0082f9c4();
    /* 0064596e: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 00645971: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00645972: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x645977u); f_00782868();
    /* 00645977: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00645978: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 0064597b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0064597d: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00645980: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00645983: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00645986: fadd dword ptr [0x935548] */ ST(0) = ST(0) + R_F32((u32)(0x935548u));
    /* 0064598c: fcom dword ptr [ebp - 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffffe4u))); 
    /* 0064598f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00645991: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00645993: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00645996: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 00645999: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064599a: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 0064599d: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006459a0: mov dword ptr [ebp - 0x78], esi */ W32((u32)(r_ebp+0xffffff88u), r_esi);
    /* 006459a3: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 006459a6: jb 0x645930 */ if (fC) goto L_00645930;
L_006459a8:; BB(0x006459a8);
    /* 006459a8: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 006459ab: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 006459ae: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 006459b0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006459b2: fstp dword ptr [edi*4 + 0xa8f414] */ W_F32((u32)(r_edi*4+0xa8f414u), ST(0)); FPOP();
    /* 006459b9: fstp dword ptr [edi*4 + 0xa8f400] */ W_F32((u32)(r_edi*4+0xa8f400u), ST(0)); FPOP();
    /* 006459c0: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006459c3: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006459c6: jl 0x6458b0 */ if ((fS!=fO)) goto L_006458b0;
L_006459cc:; BB(0x006459cc);
    /* 006459cc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006459ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006459d0: mov dword ptr [0xa8f3e4], eax */ W32((u32)(0xa8f3e4u), r_eax);
    /* 006459d5: mov dword ptr [0xa8f3e8], eax */ W32((u32)(0xa8f3e8u), r_eax);
    /* 006459da: mov dword ptr [0xa8f3ec], eax */ W32((u32)(0xa8f3ecu), r_eax);
    /* 006459df: mov dword ptr [0xa8f3f0], eax */ W32((u32)(0xa8f3f0u), r_eax);
    /* 006459e4: mov dword ptr [0xa8f3f4], eax */ W32((u32)(0xa8f3f4u), r_eax);
    /* 006459e9: mov dword ptr [0xa8f3f8], eax */ W32((u32)(0xa8f3f8u), r_eax);
    /* 006459ee: mov dword ptr [0xa8f3fc], eax */ W32((u32)(0xa8f3fcu), r_eax);
    /* 006459f3: call 0x6494a0 */ r_esp -= 4; W32(r_esp, 0x6459f8u); f_006494a0();
    /* 006459f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006459f9: mov dword ptr [0xa8f3e4], eax */ W32((u32)(0xa8f3e4u), r_eax);
    /* 006459fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00645a00: je 0x645a88 */ if (fZ) goto L_00645a88;
L_00645a06:; BB(0x00645a06);
    /* 00645a06: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00645a08: call 0x6494ac */ r_esp -= 4; W32(r_esp, 0x645a0du); f_006494ac();
    /* 00645a0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00645a0e: mov dword ptr [0xa8f3e8], eax */ W32((u32)(0xa8f3e8u), r_eax);
    /* 00645a13: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00645a15: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00645a18:; BB(0x00645a18);
    /* 00645a18: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00645a1f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00645a21: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x645a26u); f_008581c5();
    /* 00645a26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00645a27: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00645a2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645a2c: je 0x645a9f */ if (fZ) goto L_00645a9f;
L_00645a2e:; BB(0x00645a2e);
    /* 00645a2e: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00645a35: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00645a3c: mov edx, dword ptr [0xa8f3e4] */ r_edx = R32((u32)(0xa8f3e4u));
    /* 00645a42: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00645a45: mov esi, dword ptr [eax*4 + 0x935578] */ r_esi = R32((u32)(r_eax*4+0x935578u));
    /* 00645a4c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00645a4f: mov ebx, dword ptr [edx + 0x42c] */ r_ebx = R32((u32)(r_edx+0x42cu));
    /* 00645a55: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00645a57: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00645a59: push dword ptr [ebx + esi*8 + 8] */ { u32 v = R32((u32)(r_ebx+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00645a5d: call 0x52d584 */ r_esp -= 4; W32(r_esp, 0x645a62u); f_0052d584();
    /* 00645a62: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00645a65: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00645a6c:; BB(0x00645a6c);
    /* 00645a6c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00645a6f: mov dword ptr [eax*4 + 0xa8f3ec], edx */ W32((u32)(r_eax*4+0xa8f3ecu), r_edx);
    /* 00645a76: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00645a7d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00645a80: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00645a83: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00645a86: jl 0x645a18 */ if ((fS!=fO)) goto L_00645a18;
L_00645a88:; BB(0x00645a88);
    /* 00645a88: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00645a8b: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00645a8e: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00645a91: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00645a94: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00645a9b: mov esp, ebp */ r_esp = r_ebp;
    /* 00645a9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00645a9e: ret  */ FN_RET(0x00645884); r_esp += 4; return;
L_00645a9f:; BB(0x00645a9f);
    /* 00645a9f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00645aa1: jmp 0x645a6c */ goto L_00645a6c;
}

void f_00645aa4(void) /* sub_645AA4 */
{
    FN_ENTER(0x00645aa4);
    /* 00645aa4: mov ecx, dword ptr [0xa8f430] */ r_ecx = R32((u32)(0xa8f430u));
    /* 00645aaa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645aac: je 0x645ac9 */ if (fZ) goto L_00645ac9;
L_00645aae:; BB(0x00645aae);
    /* 00645aae: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x645ab3u); f_00829de0();
    /* 00645ab3: push dword ptr [0xa8f430] */ { u32 v = R32((u32)(0xa8f430u)); r_esp -= 4; W32(r_esp, v); }
    /* 00645ab9: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x645abeu); f_0082e960();
    /* 00645abe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00645abf: mov dword ptr [0xa8f430], 0 */ W32((u32)(0xa8f430u), 0x0u);
L_00645ac9:; BB(0x00645ac9);
    /* 00645ac9: mov ecx, dword ptr [0xa8f434] */ r_ecx = R32((u32)(0xa8f434u));
    /* 00645acf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00645ad1: je 0x645ada */ if (fZ) goto L_00645ada;
L_00645ad3:; BB(0x00645ad3);
    /* 00645ad3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00645ad5: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x645adau); f_004066a8();
L_00645ada:; BB(0x00645ada);
    /* 00645ada: mov dword ptr [0xa8f434], 0 */ W32((u32)(0xa8f434u), 0x0u);
    /* 00645ae4: ret  */ FN_RET(0x00645aa4); r_esp += 4; return;
}

void f_00645ae8(void) /* sub_645AE8 */
{
    FN_ENTER(0x00645ae8);
    /* 00645ae8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00645aec: mov ecx, dword ptr [0xa8f434] */ r_ecx = R32((u32)(0xa8f434u));
    /* 00645af2: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 00645af8: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 00645afb: mov eax, dword ptr [eax + edx*8 + 8] */ r_eax = R32((u32)(r_eax+r_edx*8+0x8u));
    /* 00645aff: ret  */ FN_RET(0x00645ae8); r_esp += 4; return;
}

void f_00645b00(void) /* sub_645B00 */
{
    FN_ENTER(0x00645b00);
    /* 00645b00: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00645b04: mov edx, dword ptr [0xa8f434] */ r_edx = R32((u32)(0xa8f434u));
    /* 00645b0a: mov ecx, dword ptr [edx + 0x430] */ r_ecx = R32((u32)(r_edx+0x430u));
    /* 00645b10: mov eax, dword ptr [ecx + eax*8 + 4] */ r_eax = R32((u32)(r_ecx+r_eax*8+0x4u));
    /* 00645b14: ret  */ FN_RET(0x00645b00); r_esp += 4; return;
}

void f_00645b18(void) /* sub_645B18 */
{
    FN_ENTER(0x00645b18);
    /* 00645b18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00645b19: mov ebp, esp */ r_ebp = r_esp;
    /* 00645b1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00645b1d: push 0x8e59fc */ { u32 v = 0x8e59fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00645b22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00645b28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645b29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00645b30: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00645b33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00645b36: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00645b39: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00645b3c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00645b3f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00645b44: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00645b4b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x645b50u); f_008581c5();
    /* 00645b50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00645b51: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00645b54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645b56: je 0x645bae */ if (fZ) goto L_00645bae;
L_00645b58:; BB(0x00645b58);
    /* 00645b58: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00645b5f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00645b66: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00645b69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00645b6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645b6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645b6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645b6e: push 0x9c70d4 */ { u32 v = 0x9c70d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00645b73: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00645b75: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x645b7au); f_005b7a84();
    /* 00645b7a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00645b7d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00645b84:; BB(0x00645b84);
    /* 00645b84: mov dword ptr [0xa8f434], eax */ W32((u32)(0xa8f434u), r_eax);
    /* 00645b89: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00645b90: push 0x935954 */ { u32 v = 0x935954u; r_esp -= 4; W32(r_esp, v); }
    /* 00645b95: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x645b9au); f_008009dc();
    /* 00645b9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00645b9b: mov dword ptr [0xa8f430], eax */ W32((u32)(0xa8f430u), r_eax);
    /* 00645ba0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00645ba3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00645baa: mov esp, ebp */ r_esp = r_ebp;
    /* 00645bac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00645bad: ret  */ FN_RET(0x00645b18); r_esp += 4; return;
L_00645bae:; BB(0x00645bae);
    /* 00645bae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00645bb0: jmp 0x645b84 */ goto L_00645b84;
}

void f_00645bb4(void) /* sub_645BB4 */
{
    FN_ENTER(0x00645bb4);
    /* 00645bb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00645bb5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00645bb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00645bb9: call 0x645c4c */ r_esp -= 4; W32(r_esp, 0x645bbeu); f_00645c4c();
    /* 00645bbe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00645bc2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00645bc4: jne 0x645bca */ if (!fZ) goto L_00645bca;
L_00645bc6:; BB(0x00645bc6);
    /* 00645bc6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00645bc7: ret 4 */ FN_RET(0x00645bb4); r_esp += 8; return;
L_00645bca:; BB(0x00645bca);
    /* 00645bca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00645bcb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x645bd0u); f_005c2f74();
    /* 00645bd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00645bd1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00645bd2: ret 4 */ FN_RET(0x00645bb4); r_esp += 8; return;
}

void f_00645bd8(void) /* sub_645BD8 */
{
    FN_ENTER(0x00645bd8);
    /* 00645bd8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00645bd9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00645bdb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00645bdd: call 0x645bfc */ r_esp -= 4; W32(r_esp, 0x645be2u); f_00645bfc();
    /* 00645be2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00645be6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00645be8: jne 0x645bee */ if (!fZ) goto L_00645bee;
L_00645bea:; BB(0x00645bea);
    /* 00645bea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00645beb: ret 4 */ FN_RET(0x00645bd8); r_esp += 8; return;
L_00645bee:; BB(0x00645bee);
    /* 00645bee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00645bef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x645bf4u); f_005c2f74();
    /* 00645bf4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00645bf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00645bf6: ret 4 */ FN_RET(0x00645bd8); r_esp += 8; return;
}

void f_00645bfc(void) /* sub_645BFC */
{
    FN_ENTER(0x00645bfc);
    /* 00645bfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00645bfd: mov ebp, esp */ r_ebp = r_esp;
    /* 00645bff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00645c01: push 0x8e5a18 */ { u32 v = 0x8e5a18u; r_esp -= 4; W32(r_esp, v); }
    /* 00645c06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00645c0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645c0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00645c14: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00645c17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00645c1a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00645c1d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00645c20: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00645c23: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00645c26: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00645c29: mov dword ptr [ecx], 0xb2f700 */ W32((u32)(r_ecx), 0xb2f700u);
    /* 00645c2f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00645c36: call 0x645c4c */ r_esp -= 4; W32(r_esp, 0x645c3bu); f_00645c4c();
    /* 00645c3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00645c3e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00645c45: mov esp, ebp */ r_esp = r_ebp;
    /* 00645c47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00645c48: ret  */ FN_RET(0x00645bfc); r_esp += 4; return;
}

void f_00645c4c(void) /* sub_645C4C */
{
    FN_ENTER(0x00645c4c);
    /* 00645c4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00645c4d: mov ebp, esp */ r_ebp = r_esp;
    /* 00645c4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00645c51: push 0x8e5a34 */ { u32 v = 0x8e5a34u; r_esp -= 4; W32(r_esp, v); }
    /* 00645c56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00645c5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645c5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00645c64: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00645c67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00645c6a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00645c6d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00645c70: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00645c73: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00645c76: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00645c7d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00645c80: mov dword ptr [eax], 0xb2f6a0 */ W32((u32)(r_eax), 0xb2f6a0u);
    /* 00645c86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645c87: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x645c8cu); f_007b4e84();
    /* 00645c8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00645c8d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00645c90: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x645c95u); f_007b9c8c();
    /* 00645c95: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00645c9c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00645c9f: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x645ca4u); f_007b4aec();
    /* 00645ca4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00645ca7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00645cae: mov esp, ebp */ r_esp = r_ebp;
    /* 00645cb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00645cb1: ret  */ FN_RET(0x00645c4c); r_esp += 4; return;
}

void f_00645cb4(void) /* sub_645CB4 */
{
    FN_ENTER(0x00645cb4);
    /* 00645cb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00645cb5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00645cb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00645cb9: call 0x645cd8 */ r_esp -= 4; W32(r_esp, 0x645cbeu); f_00645cd8();
    /* 00645cbe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00645cc2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00645cc4: jne 0x645cca */ if (!fZ) goto L_00645cca;
L_00645cc6:; BB(0x00645cc6);
    /* 00645cc6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00645cc7: ret 4 */ FN_RET(0x00645cb4); r_esp += 8; return;
L_00645cca:; BB(0x00645cca);
    /* 00645cca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00645ccb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x645cd0u); f_005c2f74();
    /* 00645cd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00645cd1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00645cd2: ret 4 */ FN_RET(0x00645cb4); r_esp += 8; return;
}

void f_00645cd8(void) /* sub_645CD8 */
{
    FN_ENTER(0x00645cd8);
    /* 00645cd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00645cd9: mov ebp, esp */ r_ebp = r_esp;
    /* 00645cdb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00645cdd: push 0x8e5a50 */ { u32 v = 0x8e5a50u; r_esp -= 4; W32(r_esp, v); }
    /* 00645ce2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00645ce8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645ce9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00645cf0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00645cf3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00645cf6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00645cf9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00645cfc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00645cff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00645d02: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00645d05: mov dword ptr [ecx], 0xb2f760 */ W32((u32)(r_ecx), 0xb2f760u);
    /* 00645d0b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00645d12: call 0x645c4c */ r_esp -= 4; W32(r_esp, 0x645d17u); f_00645c4c();
    /* 00645d17: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00645d1a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00645d21: mov esp, ebp */ r_esp = r_ebp;
    /* 00645d23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00645d24: ret  */ FN_RET(0x00645cd8); r_esp += 4; return;
}

void f_00645d28(void) /* sub_645D28 */
{
    FN_ENTER(0x00645d28);
    /* 00645d28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00645d29: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00645d2b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00645d2d: call 0x645d4c */ r_esp -= 4; W32(r_esp, 0x645d32u); f_00645d4c();
    /* 00645d32: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00645d36: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00645d38: jne 0x645d3e */ if (!fZ) goto L_00645d3e;
L_00645d3a:; BB(0x00645d3a);
    /* 00645d3a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00645d3b: ret 4 */ FN_RET(0x00645d28); r_esp += 8; return;
L_00645d3e:; BB(0x00645d3e);
    /* 00645d3e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00645d3f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x645d44u); f_005c2f74();
    /* 00645d44: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00645d45: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00645d46: ret 4 */ FN_RET(0x00645d28); r_esp += 8; return;
}

void f_00645d4c(void) /* sub_645D4C */
{
    FN_ENTER(0x00645d4c);
    /* 00645d4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00645d4d: mov ebp, esp */ r_ebp = r_esp;
    /* 00645d4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00645d51: push 0x8e5a6c */ { u32 v = 0x8e5a6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00645d56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00645d5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645d5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00645d64: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00645d67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00645d6a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00645d6d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00645d70: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00645d73: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00645d76: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00645d79: mov dword ptr [ecx], 0xb2f7c0 */ W32((u32)(r_ecx), 0xb2f7c0u);
    /* 00645d7f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00645d86: call 0x645c4c */ r_esp -= 4; W32(r_esp, 0x645d8bu); f_00645c4c();
    /* 00645d8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00645d8e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00645d95: mov esp, ebp */ r_esp = r_ebp;
    /* 00645d97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00645d98: ret  */ FN_RET(0x00645d4c); r_esp += 4; return;
}

void f_00645d9c(void) /* sub_645D9C */
{
    FN_ENTER(0x00645d9c);
    /* 00645d9c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00645d9d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00645d9f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00645da1: call 0x645dc0 */ r_esp -= 4; W32(r_esp, 0x645da6u); f_00645dc0();
    /* 00645da6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00645daa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00645dac: jne 0x645db2 */ if (!fZ) goto L_00645db2;
L_00645dae:; BB(0x00645dae);
    /* 00645dae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00645daf: ret 4 */ FN_RET(0x00645d9c); r_esp += 8; return;
L_00645db2:; BB(0x00645db2);
    /* 00645db2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00645db3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x645db8u); f_005c2f74();
    /* 00645db8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00645db9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00645dba: ret 4 */ FN_RET(0x00645d9c); r_esp += 8; return;
}

void f_00645dc0(void) /* sub_645DC0 */
{
    FN_ENTER(0x00645dc0);
    /* 00645dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00645dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00645dc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00645dc5: push 0x8e5a88 */ { u32 v = 0x8e5a88u; r_esp -= 4; W32(r_esp, v); }
    /* 00645dca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00645dd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645dd1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00645dd8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00645ddb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00645dde: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00645de1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00645de4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00645de7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00645dea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00645ded: mov dword ptr [ecx], 0xb2f820 */ W32((u32)(r_ecx), 0xb2f820u);
    /* 00645df3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00645dfa: call 0x645c4c */ r_esp -= 4; W32(r_esp, 0x645dffu); f_00645c4c();
    /* 00645dff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00645e02: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00645e09: mov esp, ebp */ r_esp = r_ebp;
    /* 00645e0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00645e0c: ret  */ FN_RET(0x00645dc0); r_esp += 4; return;
}

void f_00645e10(void) /* sub_645E10 */
{
    FN_ENTER(0x00645e10);
    /* 00645e10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00645e11: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00645e13: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00645e15: call 0x645e34 */ r_esp -= 4; W32(r_esp, 0x645e1au); f_00645e34();
    /* 00645e1a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00645e1e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00645e20: jne 0x645e26 */ if (!fZ) goto L_00645e26;
L_00645e22:; BB(0x00645e22);
    /* 00645e22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00645e23: ret 4 */ FN_RET(0x00645e10); r_esp += 8; return;
L_00645e26:; BB(0x00645e26);
    /* 00645e26: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00645e27: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x645e2cu); f_005c2f74();
    /* 00645e2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00645e2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00645e2e: ret 4 */ FN_RET(0x00645e10); r_esp += 8; return;
}

void f_00645e34(void) /* sub_645E34 */
{
    FN_ENTER(0x00645e34);
    /* 00645e34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00645e35: mov ebp, esp */ r_ebp = r_esp;
    /* 00645e37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00645e39: push 0x8e5aa4 */ { u32 v = 0x8e5aa4u; r_esp -= 4; W32(r_esp, v); }
    /* 00645e3e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00645e44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645e45: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00645e4c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00645e4f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00645e52: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00645e55: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00645e58: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00645e5b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00645e5e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00645e65: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00645e68: mov eax, dword ptr [edx + 0x250] */ r_eax = R32((u32)(r_edx+0x250u));
    /* 00645e6e: mov dword ptr [edx], 0xb2f880 */ W32((u32)(r_edx), 0xb2f880u);
    /* 00645e74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645e76: je 0x645e91 */ if (fZ) goto L_00645e91;
L_00645e78:; BB(0x00645e78);
    /* 00645e78: mov ecx, dword ptr [0xaab3f0] */ r_ecx = R32((u32)(0xaab3f0u));
    /* 00645e7e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645e80: je 0x645e91 */ if (fZ) goto L_00645e91;
L_00645e82:; BB(0x00645e82);
    /* 00645e82: add edx, 0x90 */ {  u32 a = r_edx; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00645e88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00645e89: call 0x7a7c2c */ r_esp -= 4; W32(r_esp, 0x645e8eu); f_007a7c2c();
    /* 00645e8e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_00645e91:; BB(0x00645e91);
    /* 00645e91: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00645e98: mov ecx, edx */ r_ecx = r_edx;
    /* 00645e9a: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x645e9fu); f_007ba1f0();
    /* 00645e9f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00645ea2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00645ea9: mov esp, ebp */ r_esp = r_ebp;
    /* 00645eab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00645eac: ret  */ FN_RET(0x00645e34); r_esp += 4; return;
}

void f_00645eb0(void) /* sub_645EB0 */
{
    FN_ENTER(0x00645eb0);
    /* 00645eb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00645eb1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00645eb3: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00645eb5: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 00645ebb: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00645ebe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00645ec0: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x645ec3u); call_ind(t); }
    /* 00645ec3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00645ec5: je 0x645ee7 */ if (fZ) goto L_00645ee7;
L_00645ec7:; BB(0x00645ec7);
    /* 00645ec7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00645ec9: mov dword ptr [ebx + 0xac], 1 */ W32((u32)(r_ebx+0xacu), 0x1u);
    /* 00645ed3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00645ed5: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x645ed8u); call_ind(t); }
    /* 00645ed8: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 00645ede: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00645ee1: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00645ee4: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
L_00645ee7:; BB(0x00645ee7);
    /* 00645ee7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00645ee8: ret  */ FN_RET(0x00645eb0); r_esp += 4; return;
}

void f_00645eec(void) /* sub_645EEC */
{
    FN_ENTER(0x00645eec);
    /* 00645eec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00645eed: mov edi, ecx */ r_edi = r_ecx;
    /* 00645eef: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00645ef1: mov eax, dword ptr [edi + 0xb8] */ r_eax = R32((u32)(r_edi+0xb8u));
    /* 00645ef7: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00645efa: mov ecx, edi */ r_ecx = r_edi;
    /* 00645efc: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x645effu); call_ind(t); }
    /* 00645eff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 00645f01: jne 0x645f49 */ if (!fZ) goto L_00645f49;
L_00645f03:; BB(0x00645f03);
    /* 00645f03: mov edx, dword ptr [edi + 0xb8] */ r_edx = R32((u32)(r_edi+0xb8u));
    /* 00645f09: fld dword ptr [edi + 0xb4] */ FPUSH(R_F32((u32)(r_edi+0xb4u)));
    /* 00645f0f: fsub dword ptr [edx] */ ST(0) = ST(0) - R_F32((u32)(r_edx));
    /* 00645f11: fcom dword ptr [0x935ae0] */ fx_compare(ST(0), R_F32((u32)(0x935ae0u))); 
    /* 00645f17: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00645f19: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00645f1a: ja 0x645f41 */ if ((!fC&&!fZ)) goto L_00645f41;
L_00645f1c:; BB(0x00645f1c);
    /* 00645f1c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00645f1e: mov ecx, dword ptr [edi + 0xa4] */ r_ecx = R32((u32)(r_edi+0xa4u));
    /* 00645f24: mov dword ptr [edi + 0xac], 0 */ W32((u32)(r_edi+0xacu), 0x0u);
    /* 00645f2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00645f30: mov dword ptr [edi + 0xb4], eax */ W32((u32)(r_edi+0xb4u), r_eax);
    /* 00645f36: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00645f39: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00645f3c: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 00645f3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00645f40: ret  */ FN_RET(0x00645eec); r_esp += 4; return;
L_00645f41:; BB(0x00645f41);
    /* 00645f41: fstp dword ptr [edi + 0xb4] */ W_F32((u32)(r_edi+0xb4u), ST(0)); FPOP();
    /* 00645f47: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00645f48: ret  */ FN_RET(0x00645eec); r_esp += 4; return;
L_00645f49:; BB(0x00645f49);
    /* 00645f49: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00645f4b: mov dword ptr [edi + 0xac], 1 */ W32((u32)(r_edi+0xacu), 0x1u);
    /* 00645f55: mov ecx, edi */ r_ecx = r_edi;
    /* 00645f57: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x645f5au); call_ind(t); }
    /* 00645f5a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00645f5b: ret  */ FN_RET(0x00645eec); r_esp += 4; return;
}

void f_00645f5c(void) /* sub_645F5C */
{
    FN_ENTER(0x00645f5c);
    /* 00645f5c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00645f5d: mov esi, ecx */ r_esi = r_ecx;
    /* 00645f5f: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00645f61: mov eax, dword ptr [esi + 0xb8] */ r_eax = R32((u32)(r_esi+0xb8u));
    /* 00645f67: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00645f6a: mov ecx, esi */ r_ecx = r_esi;
    /* 00645f6c: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x645f6fu); call_ind(t); }
    /* 00645f6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00645f71: jne 0x645f84 */ if (!fZ) goto L_00645f84;
L_00645f73:; BB(0x00645f73);
    /* 00645f73: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00645f75: mov dword ptr [esi + 0xac], 3 */ W32((u32)(r_esi+0xacu), 0x3u);
    /* 00645f7f: mov ecx, esi */ r_ecx = r_esi;
    /* 00645f81: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x645f84u); call_ind(t); }
L_00645f84:; BB(0x00645f84);
    /* 00645f84: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00645f85: ret  */ FN_RET(0x00645f5c); r_esp += 4; return;
}

void f_00645f88(void) /* sub_645F88 */
{
    FN_ENTER(0x00645f88);
    /* 00645f88: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00645f8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00645f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645f8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645f8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00645f90: push 0x41c */ { u32 v = 0x41cu; r_esp -= 4; W32(r_esp, v); }
    /* 00645f95: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x645f9au); f_00814298();
    /* 00645f9a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00645f9d: ret  */ FN_RET(0x00645f88); r_esp += 4; return;
}

void f_00645fa0(void) /* sub_645FA0 */
{
    FN_ENTER(0x00645fa0);
    /* 00645fa0: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00645fa3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00645fa5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645fa6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645fa7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00645fa8: push 0x41b */ { u32 v = 0x41bu; r_esp -= 4; W32(r_esp, v); }
    /* 00645fad: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x645fb2u); f_00814298();
    /* 00645fb2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00645fb5: ret  */ FN_RET(0x00645fa0); r_esp += 4; return;
}

void f_00645fb8(void) /* sub_645FB8 */
{
    FN_ENTER(0x00645fb8);
    /* 00645fb8: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 00645fbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645fc0: je 0x645fe3 */ if (fZ) goto L_00645fe3;
L_00645fc2:; BB(0x00645fc2);
    /* 00645fc2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645fc5: je 0x645fdd */ if (fZ) goto L_00645fdd;
L_00645fc7:; BB(0x00645fc7);
    /* 00645fc7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645fca: jne 0x645fd2 */ if (!fZ) goto L_00645fd2;
L_00645fcc:; BB(0x00645fcc);
    /* 00645fcc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00645fce: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x645fd1u); call_ind(t); }
    /* 00645fd1: ret  */ FN_RET(0x00645fb8); r_esp += 4; return;
L_00645fd2:; BB(0x00645fd2);
    /* 00645fd2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00645fd5: jne 0x645fe2 */ if (!fZ) goto L_00645fe2;
L_00645fd7:; BB(0x00645fd7);
    /* 00645fd7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00645fd9: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x645fdcu); call_ind(t); }
    /* 00645fdc: ret  */ FN_RET(0x00645fb8); r_esp += 4; return;
L_00645fdd:; BB(0x00645fdd);
    /* 00645fdd: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00645fdf: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x645fe2u); call_ind(t); }
L_00645fe2:; BB(0x00645fe2);
    /* 00645fe2: ret  */ FN_RET(0x00645fb8); r_esp += 4; return;
L_00645fe3:; BB(0x00645fe3);
    /* 00645fe3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00645fe5: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x645fe8u); call_ind(t); }
    /* 00645fe8: ret  */ FN_RET(0x00645fb8); r_esp += 4; return;
}

void f_00645fec(void) /* sub_645FEC */
{
    FN_ENTER(0x00645fec);
    /* 00645fec: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 00645ff2: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00645ff5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00645ff7: push dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00645ffa: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x645ffdu); call_ind(t); }
    /* 00645ffd: ret  */ FN_RET(0x00645fec); r_esp += 4; return;
}

