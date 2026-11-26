#include "protos.h"

void f_004b9011(void)
{
    FN_ENTER(0x004b9011);
    goto L_004b9011;
L_004b8eac:; BB(0x004b8eac);
    /* 004b8eac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b8eaf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b8eb0: ret  */ FN_RET(0x004b9011); r_esp += 4; return;
L_004b9011:; BB(0x004b9011);
    /* 004b9011: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b9013: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b9018u); f_00520bf4();
    /* 004b9018: fcomp dword ptr [0x906c84] */ fx_compare(ST(0), R_F32((u32)(0x906c84u))); FPOP();
    /* 004b901e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b9020: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b9021: jbe 0x4b902a */ if ((fC||fZ)) goto L_004b902a;
L_004b9023:; BB(0x004b9023);
    /* 004b9023: mov eax, 8 */ r_eax = 0x8u;
    /* 004b9028: jmp 0x4b902f */ goto L_004b902f;
L_004b902a:; BB(0x004b902a);
    /* 004b902a: mov eax, 6 */ r_eax = 0x6u;
L_004b902f:; BB(0x004b902f);
    /* 004b902f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9030: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b9032: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b9037u); f_004b5150();
    /* 004b9037: jmp 0x4b8eac */ goto L_004b8eac;
}

void f_004b902f(void)
{
    FN_ENTER(0x004b902f);
    goto L_004b902f;
L_004b8eac:; BB(0x004b8eac);
    /* 004b8eac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b8eaf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b8eb0: ret  */ FN_RET(0x004b902f); r_esp += 4; return;
L_004b902f:; BB(0x004b902f);
    /* 004b902f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9030: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b9032: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b9037u); f_004b5150();
    /* 004b9037: jmp 0x4b8eac */ goto L_004b8eac;
}

void f_004b903c(void) /* sub_4B903C */
{
    FN_ENTER(0x004b903c);
    /* 004b903c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b903d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b903e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b903f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b9040: mov edi, ecx */ r_edi = r_ecx;
    /* 004b9042: lea esi, [edi + 0x514] */ r_esi = (u32)(r_edi+0x514u);
    /* 004b9048: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 004b904b: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 004b9050: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b9051: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9052: call 0x520dc0 */ r_esp -= 4; W32(r_esp, 0x4b9057u); f_00520dc0();
    /* 004b9057: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 004b905c: lea ebp, [edi + 0x520] */ r_ebp = (u32)(r_edi+0x520u);
    /* 004b9062: lea eax, [edi + 0x4cc] */ r_eax = (u32)(r_edi+0x4ccu);
    /* 004b9068: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b9069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b906a: call 0x520dc0 */ r_esp -= 4; W32(r_esp, 0x4b906fu); f_00520dc0();
    /* 004b906f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9072: mov eax, dword ptr [edi + 0x520] */ r_eax = R32((u32)(r_edi+0x520u));
    /* 004b9078: lea ebx, [edi + 0x52c] */ r_ebx = (u32)(r_edi+0x52cu);
    /* 004b907e: mov dword ptr [edi + 0x52c], eax */ W32((u32)(r_edi+0x52cu), r_eax);
    /* 004b9084: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 004b908a: mov dword ptr [edi + 0x530], eax */ W32((u32)(r_edi+0x530u), r_eax);
    /* 004b9090: mov eax, dword ptr [edi + 0x528] */ r_eax = R32((u32)(r_edi+0x528u));
    /* 004b9096: mov dword ptr [edi + 0x534], eax */ W32((u32)(r_edi+0x534u), r_eax);
    /* 004b909c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b909e: mov edx, ebp */ r_edx = r_ebp;
    /* 004b90a0: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4b90a5u); f_0082ebac();
    /* 004b90a5: fld dword ptr [0x906c7c] */ FPUSH(R_F32((u32)(0x906c7cu)));
    /* 004b90ab: fld dword ptr [edi + 0x52c] */ FPUSH(R_F32((u32)(r_edi+0x52cu)));
    /* 004b90b1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b90b3: fld dword ptr [edi + 0x530] */ FPUSH(R_F32((u32)(r_edi+0x530u)));
    /* 004b90b9: fld dword ptr [edi + 0x534] */ FPUSH(R_F32((u32)(r_edi+0x534u)));
    /* 004b90bf: mov edx, dword ptr [edi + 0x630] */ r_edx = R32((u32)(r_edi+0x630u));
    /* 004b90c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b90c7: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004b90c9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004b90cb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004b90cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b90cf: fstp dword ptr [edi + 0x52c] */ W_F32((u32)(r_edi+0x52cu), ST(0)); FPOP();
    /* 004b90d5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b90d7: fstp dword ptr [edi + 0x530] */ W_F32((u32)(r_edi+0x530u), ST(0)); FPOP();
    /* 004b90dd: fstp dword ptr [edi + 0x534] */ W_F32((u32)(r_edi+0x534u), ST(0)); FPOP();
    /* 004b90e3: test edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b90e9: jne 0x4b90f3 */ if (!fZ) goto L_004b90f3;
L_004b90eb:; BB(0x004b90eb);
    /* 004b90eb: mov eax, dword ptr [edi + 0x6c4] */ r_eax = R32((u32)(r_edi+0x6c4u));
    /* 004b90f1: jmp 0x4b9133 */ goto L_004b9133;
L_004b90f3:; BB(0x004b90f3);
    /* 004b90f3: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b90f8: mov ecx, edi */ r_ecx = r_edi;
    /* 004b90fa: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b90ffu); f_007aaa30();
    /* 004b90ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9101: jne 0x4b9121 */ if (!fZ) goto L_004b9121;
L_004b9103:; BB(0x004b9103);
    /* 004b9103: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9108: mov ecx, edi */ r_ecx = r_edi;
    /* 004b910a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b910fu); f_007aaa30();
    /* 004b910f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9111: jne 0x4b9121 */ if (!fZ) goto L_004b9121;
L_004b9113:; BB(0x004b9113);
    /* 004b9113: mov edx, dword ptr [edi + 0x630] */ r_edx = R32((u32)(r_edi+0x630u));
    /* 004b9119: mov eax, dword ptr [edi + 0x6c4] */ r_eax = R32((u32)(r_edi+0x6c4u));
    /* 004b911f: jmp 0x4b9133 */ goto L_004b9133;
L_004b9121:; BB(0x004b9121);
    /* 004b9121: mov edx, dword ptr [edi + 0x630] */ r_edx = R32((u32)(r_edi+0x630u));
    /* 004b9127: mov dword ptr [edi + 0x6c4], 0 */ W32((u32)(r_edi+0x6c4u), 0x0u);
    /* 004b9131: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004b9133:; BB(0x004b9133);
    /* 004b9133: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b9136: jg 0x4b9175 */ if ((!fZ&&fS==fO)) goto L_004b9175;
L_004b9138:; BB(0x004b9138);
    /* 004b9138: test edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b913e: je 0x4b9155 */ if (fZ) goto L_004b9155;
L_004b9140:; BB(0x004b9140);
    /* 004b9140: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b9142: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9143: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9144: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b9145: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b9146: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 004b914b: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4b9150u); f_008144b0();
    /* 004b9150: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9153: jmp 0x4b9168 */ goto L_004b9168;
L_004b9155:; BB(0x004b9155);
    /* 004b9155: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b9157: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9158: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9159: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b915a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b915b: push 0x3ea */ { u32 v = 0x3eau; r_esp -= 4; W32(r_esp, v); }
    /* 004b9160: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4b9165u); f_008144b0();
    /* 004b9165: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b9168:; BB(0x004b9168);
    /* 004b9168: mov edx, dword ptr [edi + 0x630] */ r_edx = R32((u32)(r_edi+0x630u));
    /* 004b916e: add dword ptr [edi + 0x6c4], 1 */ { u32 ad = (u32)(r_edi+0x6c4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_004b9175:; BB(0x004b9175);
    /* 004b9175: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b917b: je 0x4b9190 */ if (fZ) goto L_004b9190;
L_004b917d:; BB(0x004b917d);
    /* 004b917d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b917f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9180: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9181: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b9182: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b9183: push 0x3ef */ { u32 v = 0x3efu; r_esp -= 4; W32(r_esp, v); }
    /* 004b9188: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4b918du); f_008144b0();
    /* 004b918d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004b9190:; BB(0x004b9190);
    /* 004b9190: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b9191: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b9192: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b9193: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b9194: ret  */ FN_RET(0x004b903c); r_esp += 4; return;
}

void f_004b9198(void) /* sub_4B9198 */
{
    FN_ENTER(0x004b9198);
    /* 004b9198: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b9199: mov edi, ecx */ r_edi = r_ecx;
    /* 004b919b: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 004b91a1: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004b91a4: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b91a7: je 0x4b91cd */ if (fZ) goto L_004b91cd;
L_004b91a9:; BB(0x004b91a9);
    /* 004b91a9: mov ecx, edi */ r_ecx = r_edi;
    /* 004b91ab: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x4b91b0u); f_006401f0();
    /* 004b91b0: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004b91b3: mov eax, 1 */ r_eax = 0x1u;
    /* 004b91b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b91b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b91ba: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b91bf: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b91c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b91c5: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x4b91cau); f_0080575c();
    /* 004b91ca: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004b91cd:; BB(0x004b91cd);
    /* 004b91cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b91ce: ret  */ FN_RET(0x004b9198); r_esp += 4; return;
}

void f_004b91d0(void) /* sub_4B91D0 */
{
    FN_ENTER(0x004b91d0);
    /* 004b91d0: mov eax, dword ptr [ecx + 0x630] */ r_eax = R32((u32)(r_ecx+0x630u));
    /* 004b91d6: mov dword ptr [0xa47ae4], eax */ W32((u32)(0xa47ae4u), r_eax);
    /* 004b91db: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004b91dd: lea eax, [ecx + 0x3f4] */ r_eax = (u32)(r_ecx+0x3f4u);
    /* 004b91e3: mov dword ptr [0xa47aec], edx */ W32((u32)(0xa47aecu), r_edx);
    /* 004b91e9: mov dword ptr [0xa47ae8], edx */ W32((u32)(0xa47ae8u), r_edx);
    /* 004b91ef: mov dword ptr [0xa47ae0], eax */ W32((u32)(0xa47ae0u), r_eax);
    /* 004b91f4: mov eax, dword ptr [ecx + 0x6e0] */ r_eax = R32((u32)(r_ecx+0x6e0u));
    /* 004b91fa: mov dword ptr [0xa47ad8], eax */ W32((u32)(0xa47ad8u), r_eax);
    /* 004b91ff: mov eax, dword ptr [ecx + 0x6dc] */ r_eax = R32((u32)(r_ecx+0x6dcu));
    /* 004b9205: mov dword ptr [0xa47ad4], eax */ W32((u32)(0xa47ad4u), r_eax);
    /* 004b920a: lea eax, [ecx + 0x4e4] */ r_eax = (u32)(r_ecx+0x4e4u);
    /* 004b9210: mov dword ptr [0xa47adc], eax */ W32((u32)(0xa47adcu), r_eax);
    /* 004b9215: add ecx, 0x7bc */ {  u32 a = r_ecx; u32 b = 0x7bcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b921b: mov dword ptr [0xa47ac4], ecx */ W32((u32)(0xa47ac4u), r_ecx);
    /* 004b9221: ret  */ FN_RET(0x004b91d0); r_esp += 4; return;
}

void f_004b9224(void) /* sub_4B9224 */
{
    FN_ENTER(0x004b9224);
    /* 004b9224: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b9225: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b9226: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b9227: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004b9229: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 004b922e: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 004b9230: je 0x4b9244 */ if (fZ) goto L_004b9244;
L_004b9232:; BB(0x004b9232);
    /* 004b9232: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 004b9235: fcomp dword ptr [0x906c6c] */ fx_compare(ST(0), R_F32((u32)(0x906c6cu))); FPOP();
    /* 004b923b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b923d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b923e: jae 0x4b9244 */ if (!fC) goto L_004b9244;
L_004b9240:; BB(0x004b9240);
    /* 004b9240: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b9241: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b9242: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b9243: ret  */ FN_RET(0x004b9224); r_esp += 4; return;
L_004b9244:; BB(0x004b9244);
    /* 004b9244: lea edx, [ebx + 0x600] */ r_edx = (u32)(r_ebx+0x600u);
    /* 004b924a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b924c: mov esi, eax */ r_esi = r_eax;
    /* 004b924e: mov edi, edx */ r_edi = r_edx;
L_004b9250:; BB(0x004b9250);
    /* 004b9250: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 004b9252: call 0x4ba2a4 */ r_esp -= 4; W32(r_esp, 0x4b9257u); f_004ba2a4();
    /* 004b9257: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9259: je 0x4b92ba */ if (fZ) goto L_004b92ba;
L_004b925b:; BB(0x004b925b);
    /* 004b925b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004b925d: jl 0x4b92ba */ if ((fS!=fO)) goto L_004b92ba;
L_004b925f:; BB(0x004b925f);
    /* 004b925f: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b9262: jge 0x4b92ba */ if ((fS==fO)) goto L_004b92ba;
L_004b9264:; BB(0x004b9264);
    /* 004b9264: mov ecx, dword ptr [0xa47af4] */ r_ecx = R32((u32)(0xa47af4u));
    /* 004b926a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b926c: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4b9271u); f_005b8610();
    /* 004b9271: push dword ptr [esi*4 + 0x907048] */ { u32 v = R32((u32)(r_esi*4+0x907048u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b9278: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9279: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x4b927eu); f_0078e934();
    /* 004b927e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9281: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9283: je 0x4b928f */ if (fZ) goto L_004b928f;
L_004b9285:; BB(0x004b9285);
    /* 004b9285: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004b9288: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
L_004b928f:; BB(0x004b928f);
    /* 004b928f: mov ecx, dword ptr [0xa47af4] */ r_ecx = R32((u32)(0xa47af4u));
    /* 004b9295: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9297: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4b929cu); f_005b8610();
    /* 004b929c: push dword ptr [esi*4 + 0x907020] */ { u32 v = R32((u32)(r_esi*4+0x907020u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b92a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b92a4: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x4b92a9u); f_0078e934();
    /* 004b92a9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b92ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b92ae: je 0x4b92ba */ if (fZ) goto L_004b92ba;
L_004b92b0:; BB(0x004b92b0);
    /* 004b92b0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004b92b3: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
L_004b92ba:; BB(0x004b92ba);
    /* 004b92ba: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b92bd: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004b92c0: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b92c3: jl 0x4b9250 */ if ((fS!=fO)) goto L_004b9250;
L_004b92c5:; BB(0x004b92c5);
    /* 004b92c5: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 004b92ca: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 004b92d0: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 004b92d5: mov eax, dword ptr [0xaf0364] */ r_eax = R32((u32)(0xaf0364u));
    /* 004b92da: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 004b92e0: mov dword ptr [0xaab500], eax */ W32((u32)(0xaab500u), r_eax);
    /* 004b92e5: mov eax, dword ptr [0xaf0370] */ r_eax = R32((u32)(0xaf0370u));
    /* 004b92ea: mov dword ptr [0xaab508], eax */ W32((u32)(0xaab508u), r_eax);
    /* 004b92ef: mov eax, dword ptr [0xaf0374] */ r_eax = R32((u32)(0xaf0374u));
    /* 004b92f4: mov dword ptr [0xaab50c], eax */ W32((u32)(0xaab50cu), r_eax);
    /* 004b92f9: mov eax, dword ptr [0xaf0378] */ r_eax = R32((u32)(0xaf0378u));
    /* 004b92fe: mov dword ptr [0xaab510], eax */ W32((u32)(0xaab510u), r_eax);
    /* 004b9303: mov eax, dword ptr [0xaf037c] */ r_eax = R32((u32)(0xaf037cu));
    /* 004b9308: mov dword ptr [0xaab514], eax */ W32((u32)(0xaab514u), r_eax);
    /* 004b930d: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x4b9312u); f_00520d08();
    /* 004b9312: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x4b9317u); f_0082dbac();
    /* 004b9317: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4b931cu); f_0082d7b0();
    /* 004b931c: mov eax, dword ptr [ebx + 0x7b4] */ r_eax = R32((u32)(r_ebx+0x7b4u));
    /* 004b9322: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9324: je 0x4b9397 */ if (fZ) goto L_004b9397;
L_004b9326:; BB(0x004b9326);
    /* 004b9326: mov edx, dword ptr [0xa47acc] */ r_edx = R32((u32)(0xa47accu));
    /* 004b932c: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b9332: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004b9334: je 0x4b933f */ if (fZ) goto L_004b933f;
L_004b9336:; BB(0x004b9336);
    /* 004b9336: mov dword ptr [edx + 0x2c], 0xa47800 */ W32((u32)(r_edx+0x2cu), 0xa47800u);
    /* 004b933d: jmp 0x4b9347 */ goto L_004b9347;
L_004b933f:; BB(0x004b933f);
    /* 004b933f: mov eax, dword ptr [0xa47ac8] */ r_eax = R32((u32)(0xa47ac8u));
    /* 004b9344: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
L_004b9347:; BB(0x004b9347);
    /* 004b9347: call 0x4b9450 */ r_esp -= 4; W32(r_esp, 0x4b934cu); f_004b9450();
    /* 004b934c: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 004b934f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b9354u); f_0082d838();
    /* 004b9354: lea ecx, [ebx + 0x6f4] */ r_ecx = (u32)(r_ebx+0x6f4u);
    /* 004b935a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4b935fu); f_0082d838();
    /* 004b935f: lea ecx, [ebx + 0x5c] */ r_ecx = (u32)(r_ebx+0x5cu);
    /* 004b9362: mov edx, 1 */ r_edx = 0x1u;
    /* 004b9367: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x4b936cu); f_00830df8();
    /* 004b936c: mov ecx, 0xa47aa4 */ r_ecx = 0xa47aa4u;
    /* 004b9371: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4b9376u); f_00831290();
    /* 004b9376: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4b937bu); f_0082fa9c();
    /* 004b937b: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b9381: push dword ptr [ebx + 0xf8] */ { u32 v = R32((u32)(r_ebx+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b9387: push dword ptr [ebx + 0x34] */ { u32 v = R32((u32)(r_ebx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b938a: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4b938fu); f_0083046c();
    /* 004b938f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9392: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4b9397u); f_0082faac();
L_004b9397:; BB(0x004b9397);
    /* 004b9397: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4b939cu); f_0082da80();
    /* 004b939c: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x4b93a1u); f_0082dab0();
    /* 004b93a1: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 004b93a6: mov edx, dword ptr [0xaab50c] */ r_edx = R32((u32)(0xaab50cu));
    /* 004b93ac: mov ecx, dword ptr [0xa47af4] */ r_ecx = R32((u32)(0xa47af4u));
    /* 004b93b2: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 004b93b7: mov eax, dword ptr [0xaab510] */ r_eax = R32((u32)(0xaab510u));
    /* 004b93bc: mov dword ptr [0xaf0374], edx */ W32((u32)(0xaf0374u), r_edx);
    /* 004b93c2: mov dword ptr [0xaf0378], eax */ W32((u32)(0xaf0378u), r_eax);
    /* 004b93c7: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 004b93cc: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 004b93d1: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 004b93d6: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 004b93db: mov eax, dword ptr [0xaab500] */ r_eax = R32((u32)(0xaab500u));
    /* 004b93e0: mov dword ptr [0xaf0364], eax */ W32((u32)(0xaf0364u), r_eax);
    /* 004b93e5: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 004b93ea: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 004b93ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b93f1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4b93f6u); f_005b8610();
    /* 004b93f6: mov edx, eax */ r_edx = r_eax;
    /* 004b93f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b93fa: mov esi, eax */ r_esi = r_eax;
    /* 004b93fc: mov edi, edx */ r_edi = r_edx;
L_004b93fe:; BB(0x004b93fe);
    /* 004b93fe: push dword ptr [esi*4 + 0x907048] */ { u32 v = R32((u32)(r_esi*4+0x907048u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b9405: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b9406: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x4b940bu); f_0078e934();
    /* 004b940b: push dword ptr [esi*4 + 0x907020] */ { u32 v = R32((u32)(r_esi*4+0x907020u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b9412: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b9413: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004b9416: mov ecx, dword ptr [ebx + esi*4 + 0x5b0] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x5b0u));
    /* 004b941d: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 004b9420: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x4b9425u); f_0078e934();
    /* 004b9425: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9428: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004b942b: mov ecx, dword ptr [ebx + esi*4 + 0x5d8] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x5d8u));
    /* 004b9432: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 004b9435: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b9438: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b943b: jl 0x4b93fe */ if ((fS!=fO)) goto L_004b93fe;
L_004b943d:; BB(0x004b943d);
    /* 004b943d: add ebx, 0x698 */ {  u32 a = r_ebx; u32 b = 0x698u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b9443: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b9445: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x4b944au); f_00818f50();
    /* 004b944a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b944b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b944c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b944d: ret  */ FN_RET(0x004b9224); r_esp += 4; return;
}

void f_004b9450(void) /* sub_4B9450 */
{
    FN_ENTER(0x004b9450);
    /* 004b9450: mov ecx, dword ptr [0xa47af4] */ r_ecx = R32((u32)(0xa47af4u));
    /* 004b9456: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9458: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x4b945du); f_005b8624();
    /* 004b945d: mov ecx, eax */ r_ecx = r_eax;
    /* 004b945f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4b9464u); f_00829cc8();
    /* 004b9464: ret  */ FN_RET(0x004b9450); r_esp += 4; return;
}

void f_004b9468(void) /* sub_4B9468 */
{
    FN_ENTER(0x004b9468);
    /* 004b9468: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 004b946e: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004b9471: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b9474: je 0x4b947b */ if (fZ) goto L_004b947b;
L_004b9476:; BB(0x004b9476);
    /* 004b9476: call 0x7879e0 */ r_esp -= 4; W32(r_esp, 0x4b947bu); f_007879e0();
L_004b947b:; BB(0x004b947b);
    /* 004b947b: ret  */ FN_RET(0x004b9468); r_esp += 4; return;
}

void f_004b947c(void) /* sub_4B947C */
{
    FN_ENTER(0x004b947c);
    /* 004b947c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b947d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b9480: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004b9482: movsx edx, word ptr [ebx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 004b9489: movsx eax, word ptr [ebx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 004b9490: mov ecx, dword ptr [ebx + 0x630] */ r_ecx = R32((u32)(r_ebx+0x630u));
    /* 004b9496: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b9498: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b949a: test cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004b949d: jne 0x4b94ba */ if (!fZ) goto L_004b94ba;
L_004b949f:; BB(0x004b949f);
    /* 004b949f: mov ecx, dword ptr [ebx + 0x708] */ r_ecx = R32((u32)(r_ebx+0x708u));
    /* 004b94a5: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004b94a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004b94a9: jl 0x4b9571 */ if ((fS!=fO)) goto L_004b9571;
L_004b94af:; BB(0x004b94af);
    /* 004b94af: mov dword ptr [ebx + 0x708], ecx */ W32((u32)(r_ebx+0x708u), r_ecx);
    /* 004b94b5: jmp 0x4b9557 */ goto L_004b9557;
L_004b94ba:; BB(0x004b94ba);
    /* 004b94ba: fld dword ptr [0x906c68] */ FPUSH(R_F32((u32)(0x906c68u)));
    /* 004b94c0: fld dword ptr [0xa4878c] */ FPUSH(R_F32((u32)(0xa4878cu)));
    /* 004b94c6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b94c8: fld dword ptr [0x906c64] */ FPUSH(R_F32((u32)(0x906c64u)));
    /* 004b94ce: mov edx, dword ptr [ebx + 0x704] */ r_edx = R32((u32)(r_ebx+0x704u));
    /* 004b94d4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b94d6: fld dword ptr [0xa48790] */ FPUSH(R_F32((u32)(0xa48790u)));
    /* 004b94dc: fld dword ptr [0xa48794] */ FPUSH(R_F32((u32)(0xa48794u)));
    /* 004b94e2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b94e4: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004b94e6: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004b94e8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004b94ea: mov dword ptr [ebx + 0x704], edx */ W32((u32)(r_ebx+0x704u), r_edx);
    /* 004b94f0: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004b94f6: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004b94f9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004b94fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004b94fe: fsubr dword ptr [esp] */ ST(0) = R_F32((u32)(r_esp)) - ST(0);
    /* 004b9501: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 004b9504: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004b9508: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b950a: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 004b950e: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 004b9510: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 004b9513: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b9516: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b9518: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004b951c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004b9520: fsubr dword ptr [esp + 8] */ ST(0) = R_F32((u32)(r_esp+0x8u)) - ST(0);
    /* 004b9524: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004b9528: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004b952b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004b952d: push 0x127 */ { u32 v = 0x127u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9532: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9533: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4b9538u); f_0050b7a4();
    /* 004b9538: lea edx, [ebx + 0x514] */ r_edx = (u32)(r_ebx+0x514u);
    /* 004b953e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b9540: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9541: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9542: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b9543: push 0x3fa */ { u32 v = 0x3fau; r_esp -= 4; W32(r_esp, v); }
    /* 004b9548: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b954du); f_00814298();
    /* 004b954d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9550: movsx edx, word ptr [ebx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
L_004b9557:; BB(0x004b9557);
    /* 004b9557: mov word ptr [ebx + 0x334], dx */ W16((u32)(r_ebx+0x334u), (u16)r_edx);
    /* 004b955e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b9560: call 0x4b95b4 */ r_esp -= 4; W32(r_esp, 0x4b9565u); f_004b95b4();
    /* 004b9565: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b9567: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x4b956cu); f_0051f81c();
    /* 004b956c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b956f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b9570: ret  */ FN_RET(0x004b947c); r_esp += 4; return;
L_004b9571:; BB(0x004b9571);
    /* 004b9571: mov dword ptr [ebx + 0x708], 0 */ W32((u32)(r_ebx+0x708u), 0x0u);
    /* 004b957b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b957d: call 0x4b958c */ r_esp -= 4; W32(r_esp, 0x4b9582u); f_004b958c();
    /* 004b9582: movsx edx, word ptr [ebx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 004b9589: jmp 0x4b9557 */ goto L_004b9557;
}

void f_004b958c(void) /* sub_4B958C */
{
    FN_ENTER(0x004b958c);
    /* 004b958c: mov eax, dword ptr [ecx + 0x630] */ r_eax = R32((u32)(r_ecx+0x630u));
    /* 004b9592: or eax, 0x88 */ {  u32 a = r_eax; u32 b = 0x88u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b9597: mov dword ptr [ecx + 0x630], eax */ W32((u32)(r_ecx+0x630u), r_eax);
    /* 004b959d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b95a0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004b95a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b95a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b95a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b95a5: push 0x3f9 */ { u32 v = 0x3f9u; r_esp -= 4; W32(r_esp, v); }
    /* 004b95aa: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b95afu); f_00814298();
    /* 004b95af: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b95b2: ret  */ FN_RET(0x004b958c); r_esp += 4; return;
}

void f_004b95b4(void) /* sub_4B95B4 */
{
    FN_ENTER(0x004b95b4);
    /* 004b95b4: mov eax, dword ptr [ecx + 0x630] */ r_eax = R32((u32)(r_ecx+0x630u));
    /* 004b95ba: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b95bf: mov dword ptr [ecx + 0x630], eax */ W32((u32)(r_ecx+0x630u), r_eax);
    /* 004b95c5: ret  */ FN_RET(0x004b95b4); r_esp += 4; return;
}

void f_004b95c8(void) /* sub_4B95C8 */
{
    FN_ENTER(0x004b95c8);
    /* 004b95c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b95c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b95ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b95cb: mov edi, ecx */ r_edi = r_ecx;
    /* 004b95cd: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004b95cf: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x4b95d4u); f_0077a684();
    /* 004b95d4: mov esi, eax */ r_esi = r_eax;
    /* 004b95d6: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004b95d8: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x4b95ddu); f_0077a698();
    /* 004b95dd: mov ebp, eax */ r_ebp = r_eax;
    /* 004b95df: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004b95e1: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x4b95e6u); f_0077a6b4();
    /* 004b95e6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b95e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b95ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b95eb: mov ecx, edi */ r_ecx = r_edi;
    /* 004b95ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b95ee: call 0x520c98 */ r_esp -= 4; W32(r_esp, 0x4b95f3u); f_00520c98();
    /* 004b95f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b95f5: push 0x9abb90 */ { u32 v = 0x9abb90u; r_esp -= 4; W32(r_esp, v); }
    /* 004b95fa: mov ecx, edi */ r_ecx = r_edi;
    /* 004b95fc: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b9600: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4b9605u); f_0051fdf8();
    /* 004b9605: push dword ptr [edi + 0x634] */ { u32 v = R32((u32)(r_edi+0x634u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b960b: mov ecx, edi */ r_ecx = r_edi;
    /* 004b960d: call 0x4b9618 */ r_esp -= 4; W32(r_esp, 0x4b9612u); f_004b9618();
    /* 004b9612: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b9613: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b9614: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b9615: ret 4 */ FN_RET(0x004b95c8); r_esp += 8; return;
}

void f_004b9618(void) /* sub_4B9618 */
{
    FN_ENTER(0x004b9618);
    /* 004b9618: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b9619: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b961a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b961b: mov edi, ecx */ r_edi = r_ecx;
    /* 004b961d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004b9621: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9624: jne 0x4b962d */ if (!fZ) goto L_004b962d;
L_004b9626:; BB(0x004b9626);
    /* 004b9626: mov ebx, 0x10 */ r_ebx = 0x10u;
    /* 004b962b: jmp 0x4b963e */ goto L_004b963e;
L_004b962d:; BB(0x004b962d);
    /* 004b962d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9630: jne 0x4b9639 */ if (!fZ) goto L_004b9639;
L_004b9632:; BB(0x004b9632);
    /* 004b9632: mov ebx, 0x11 */ r_ebx = 0x11u;
    /* 004b9637: jmp 0x4b963e */ goto L_004b963e;
L_004b9639:; BB(0x004b9639);
    /* 004b9639: mov ebx, 0xf */ r_ebx = 0xfu;
L_004b963e:; BB(0x004b963e);
    /* 004b963e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004b9640: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x4b9645u); f_0077a684();
    /* 004b9645: mov esi, eax */ r_esi = r_eax;
    /* 004b9647: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b9648: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x4b964du); f_0077a698();
    /* 004b964d: mov ebx, eax */ r_ebx = r_eax;
    /* 004b964f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004b9651: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x4b9656u); f_0077a6b4();
    /* 004b9656: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9659: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b965a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b965b: mov ecx, edi */ r_ecx = r_edi;
    /* 004b965d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b965e: call 0x520c98 */ r_esp -= 4; W32(r_esp, 0x4b9663u); f_00520c98();
    /* 004b9663: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b9664: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b9665: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b9666: ret 4 */ FN_RET(0x004b9618); r_esp += 8; return;
}

void f_004b966c(void) /* sub_4B966C */
{
    FN_ENTER(0x004b966c);
    /* 004b966c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b966f: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 004b9673: fmul dword ptr [0x906c60] */ ST(0) = ST(0) * R_F32((u32)(0x906c60u));
    /* 004b9679: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004b967c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004b9680: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b9685: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004b9689: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004b968d: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004b9691: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004b9694: mov eax, dword ptr [ecx + 0x704] */ r_eax = R32((u32)(r_ecx+0x704u));
    /* 004b969a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004b969c: sub eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b96a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b96a1: mov dword ptr [ecx + 0x704], eax */ W32((u32)(r_ecx+0x704u), r_eax);
    /* 004b96a7: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b96aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b96ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b96ac: push 0x3fa */ { u32 v = 0x3fau; r_esp -= 4; W32(r_esp, v); }
    /* 004b96b1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b96b6u); f_00814298();
    /* 004b96b6: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b96b9: ret 8 */ FN_RET(0x004b966c); r_esp += 12; return;
}

void f_004b96bc(void) /* sub_4B96BC */
{
    FN_ENTER(0x004b96bc);
    /* 004b96bc: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b96bf: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004b96c3: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004b96c7: fld dword ptr [0xa4878c] */ FPUSH(R_F32((u32)(0xa4878cu)));
    /* 004b96cd: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b96cf: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004b96d2: fld dword ptr [0xa48790] */ FPUSH(R_F32((u32)(0xa48790u)));
    /* 004b96d8: fld dword ptr [0xa48794] */ FPUSH(R_F32((u32)(0xa48794u)));
    /* 004b96de: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b96e0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004b96e2: fsub dword ptr [esp + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x14u));
    /* 004b96e6: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004b96e9: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 004b96ec: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004b96f0: fsubr dword ptr [esp + 4] */ ST(0) = R_F32((u32)(r_esp+0x4u)) - ST(0);
    /* 004b96f4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004b96f8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b96fa: fchs  */ ST(0) = -ST(0);
    /* 004b96fc: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004b96fe: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 004b9701: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b9704: fchs  */ ST(0) = -ST(0);
    /* 004b9706: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004b9708: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004b970c: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 004b9710: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004b9714: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004b9717: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9719: push 0x127 */ { u32 v = 0x127u; r_esp -= 4; W32(r_esp, v); }
    /* 004b971e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b971f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4b9724u); f_0050b7a4();
    /* 004b9724: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b9727: ret  */ FN_RET(0x004b96bc); r_esp += 4; return;
}

void f_004b9728(void) /* sub_4B9728 */
{
    FN_ENTER(0x004b9728);
    /* 004b9728: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b972b: mov edx, dword ptr [0xa47aec] */ r_edx = R32((u32)(0xa47aecu));
    /* 004b9731: cmp edx, 0x5f */ {  u32 a = r_edx; u32 b = 0x5fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9734: je 0x4b988e */ if (fZ) goto L_004b988e;
L_004b973a:; BB(0x004b973a);
    /* 004b973a: cmp edx, 0x71 */ {  u32 a = r_edx; u32 b = 0x71u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b973d: je 0x4b9855 */ if (fZ) goto L_004b9855;
L_004b9743:; BB(0x004b9743);
    /* 004b9743: mov eax, dword ptr [0xa47ae8] */ r_eax = R32((u32)(0xa47ae8u));
    /* 004b9748: cmp edx, dword ptr [eax*4 + 0x905d00] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0x905d00u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b974f: jne 0x4b9796 */ if (!fZ) goto L_004b9796;
L_004b9751:; BB(0x004b9751);
    /* 004b9751: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004b9759: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 004b975d: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 004b9765: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 004b976d: push dword ptr [0xa47ae0] */ { u32 v = R32((u32)(0xa47ae0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b9773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9774: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x4b9779u); f_00835c3c();
    /* 004b9779: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b977c: mov eax, dword ptr [0xa47ae0] */ r_eax = R32((u32)(0xa47ae0u));
    /* 004b9781: mov edx, dword ptr [0xa47aec] */ r_edx = R32((u32)(0xa47aecu));
    /* 004b9787: add dword ptr [0xa47ae8], 1 */ { u32 ad = (u32)(0xa47ae8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004b978e: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b9791: mov dword ptr [0xa47ae0], eax */ W32((u32)(0xa47ae0u), r_eax);
L_004b9796:; BB(0x004b9796);
    /* 004b9796: cmp edx, 0x33 */ {  u32 a = r_edx; u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9799: je 0x4b981e */ if (fZ) goto L_004b981e;
L_004b979f:; BB(0x004b979f);
    /* 004b979f: mov eax, dword ptr [0xa47ae4] */ r_eax = R32((u32)(0xa47ae4u));
    /* 004b97a4: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b97a9: je 0x4b97dd */ if (fZ) goto L_004b97dd;
L_004b97ab:; BB(0x004b97ab);
    /* 004b97ab: cmp edx, 0x4d */ {  u32 a = r_edx; u32 b = 0x4du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b97ae: jl 0x4b97dd */ if ((fS!=fO)) goto L_004b97dd;
L_004b97b0:; BB(0x004b97b0);
    /* 004b97b0: cmp edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b97b3: jg 0x4b97dd */ if ((!fZ&&fS==fO)) goto L_004b97dd;
L_004b97b5:; BB(0x004b97b5);
    /* 004b97b5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4b97bau); f_0082d7b0();
    /* 004b97ba: mov ecx, dword ptr [0xa47ad4] */ r_ecx = R32((u32)(0xa47ad4u));
    /* 004b97c0: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x4b97c5u); f_00831650();
    /* 004b97c5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4b97cau); f_0082da80();
    /* 004b97ca: mov eax, dword ptr [0xa47ad4] */ r_eax = R32((u32)(0xa47ad4u));
    /* 004b97cf: mov edx, dword ptr [0xa47aec] */ r_edx = R32((u32)(0xa47aecu));
    /* 004b97d5: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b97d8: mov dword ptr [0xa47ad4], eax */ W32((u32)(0xa47ad4u), r_eax);
L_004b97dd:; BB(0x004b97dd);
    /* 004b97dd: cmp edx, 0x1d */ {  u32 a = r_edx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b97e0: jl 0x4b97e7 */ if ((fS!=fO)) goto L_004b97e7;
L_004b97e2:; BB(0x004b97e2);
    /* 004b97e2: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b97e5: jle 0x4b97f4 */ if ((fZ||fS!=fO)) goto L_004b97f4;
L_004b97e7:; BB(0x004b97e7);
    /* 004b97e7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b97ea: mov dword ptr [0xa47aec], edx */ W32((u32)(0xa47aecu), r_edx);
    /* 004b97f0: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b97f3: ret  */ FN_RET(0x004b9728); r_esp += 4; return;
L_004b97f4:; BB(0x004b97f4);
    /* 004b97f4: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4b97f9u); f_0082d7b0();
    /* 004b97f9: mov ecx, dword ptr [0xa47ad8] */ r_ecx = R32((u32)(0xa47ad8u));
    /* 004b97ff: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x4b9804u); f_00831650();
    /* 004b9804: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4b9809u); f_0082da80();
    /* 004b9809: mov eax, dword ptr [0xa47ad8] */ r_eax = R32((u32)(0xa47ad8u));
    /* 004b980e: mov edx, dword ptr [0xa47aec] */ r_edx = R32((u32)(0xa47aecu));
    /* 004b9814: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b9817: mov dword ptr [0xa47ad8], eax */ W32((u32)(0xa47ad8u), r_eax);
    /* 004b981c: jmp 0x4b97e7 */ goto L_004b97e7;
L_004b981e:; BB(0x004b981e);
    /* 004b981e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4b9823u); f_0082d7b0();
    /* 004b9823: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9825: push dword ptr [0xa47adc] */ { u32 v = R32((u32)(0xa47adcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004b982b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004b982d: mov edx, 0x9abb60 */ r_edx = 0x9abb60u;
    /* 004b9832: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x4b9837u); f_0082f940();
    /* 004b9837: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4b983cu); f_0082da80();
    /* 004b983c: mov edx, dword ptr [0xa47adc] */ r_edx = R32((u32)(0xa47adcu));
    /* 004b9842: lea ecx, [edx + 0xc] */ r_ecx = (u32)(r_edx+0xcu);
    /* 004b9845: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4b984au); f_0082f9c4();
    /* 004b984a: mov edx, dword ptr [0xa47aec] */ r_edx = R32((u32)(0xa47aecu));
    /* 004b9850: jmp 0x4b979f */ goto L_004b979f;
L_004b9855:; BB(0x004b9855);
    /* 004b9855: mov eax, dword ptr [0xa47ac4] */ r_eax = R32((u32)(0xa47ac4u));
    /* 004b985a: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004b9862: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b9865: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004b986d: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004b9871: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004b9879: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b987a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b987b: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x4b9880u); f_00835c3c();
    /* 004b9880: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9883: mov edx, dword ptr [0xa47aec] */ r_edx = R32((u32)(0xa47aecu));
    /* 004b9889: jmp 0x4b9743 */ goto L_004b9743;
L_004b988e:; BB(0x004b988e);
    /* 004b988e: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 004b9895: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004b9898: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004b98a0: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 004b98a8: push dword ptr [0xa47ac4] */ { u32 v = R32((u32)(0xa47ac4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b98ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b98af: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x4b98b4u); f_00835c3c();
    /* 004b98b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b98b7: mov edx, dword ptr [0xa47aec] */ r_edx = R32((u32)(0xa47aecu));
    /* 004b98bd: jmp 0x4b973a */ goto L_004b973a;
}

void f_004b9860(void)
{
    FN_ENTER(0x004b9860);
    goto L_004b9860;
L_004b9743:; BB(0x004b9743);
    /* 004b9743: mov eax, dword ptr [0xa47ae8] */ r_eax = R32((u32)(0xa47ae8u));
    /* 004b9748: cmp edx, dword ptr [eax*4 + 0x905d00] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0x905d00u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b974f: jne 0x4b9796 */ if (!fZ) goto L_004b9796;
L_004b9751:; BB(0x004b9751);
    /* 004b9751: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004b9759: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 004b975d: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 004b9765: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 004b976d: push dword ptr [0xa47ae0] */ { u32 v = R32((u32)(0xa47ae0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b9773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9774: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x4b9779u); f_00835c3c();
    /* 004b9779: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b977c: mov eax, dword ptr [0xa47ae0] */ r_eax = R32((u32)(0xa47ae0u));
    /* 004b9781: mov edx, dword ptr [0xa47aec] */ r_edx = R32((u32)(0xa47aecu));
    /* 004b9787: add dword ptr [0xa47ae8], 1 */ { u32 ad = (u32)(0xa47ae8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004b978e: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b9791: mov dword ptr [0xa47ae0], eax */ W32((u32)(0xa47ae0u), r_eax);
L_004b9796:; BB(0x004b9796);
    /* 004b9796: cmp edx, 0x33 */ {  u32 a = r_edx; u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9799: je 0x4b981e */ if (fZ) goto L_004b981e;
L_004b979f:; BB(0x004b979f);
    /* 004b979f: mov eax, dword ptr [0xa47ae4] */ r_eax = R32((u32)(0xa47ae4u));
    /* 004b97a4: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b97a9: je 0x4b97dd */ if (fZ) goto L_004b97dd;
L_004b97ab:; BB(0x004b97ab);
    /* 004b97ab: cmp edx, 0x4d */ {  u32 a = r_edx; u32 b = 0x4du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b97ae: jl 0x4b97dd */ if ((fS!=fO)) goto L_004b97dd;
L_004b97b0:; BB(0x004b97b0);
    /* 004b97b0: cmp edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b97b3: jg 0x4b97dd */ if ((!fZ&&fS==fO)) goto L_004b97dd;
L_004b97b5:; BB(0x004b97b5);
    /* 004b97b5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4b97bau); f_0082d7b0();
    /* 004b97ba: mov ecx, dword ptr [0xa47ad4] */ r_ecx = R32((u32)(0xa47ad4u));
    /* 004b97c0: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x4b97c5u); f_00831650();
    /* 004b97c5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4b97cau); f_0082da80();
    /* 004b97ca: mov eax, dword ptr [0xa47ad4] */ r_eax = R32((u32)(0xa47ad4u));
    /* 004b97cf: mov edx, dword ptr [0xa47aec] */ r_edx = R32((u32)(0xa47aecu));
    /* 004b97d5: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b97d8: mov dword ptr [0xa47ad4], eax */ W32((u32)(0xa47ad4u), r_eax);
L_004b97dd:; BB(0x004b97dd);
    /* 004b97dd: cmp edx, 0x1d */ {  u32 a = r_edx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b97e0: jl 0x4b97e7 */ if ((fS!=fO)) goto L_004b97e7;
L_004b97e2:; BB(0x004b97e2);
    /* 004b97e2: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b97e5: jle 0x4b97f4 */ if ((fZ||fS!=fO)) goto L_004b97f4;
L_004b97e7:; BB(0x004b97e7);
    /* 004b97e7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b97ea: mov dword ptr [0xa47aec], edx */ W32((u32)(0xa47aecu), r_edx);
    /* 004b97f0: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b97f3: ret  */ FN_RET(0x004b9860); r_esp += 4; return;
L_004b97f4:; BB(0x004b97f4);
    /* 004b97f4: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4b97f9u); f_0082d7b0();
    /* 004b97f9: mov ecx, dword ptr [0xa47ad8] */ r_ecx = R32((u32)(0xa47ad8u));
    /* 004b97ff: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x4b9804u); f_00831650();
    /* 004b9804: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4b9809u); f_0082da80();
    /* 004b9809: mov eax, dword ptr [0xa47ad8] */ r_eax = R32((u32)(0xa47ad8u));
    /* 004b980e: mov edx, dword ptr [0xa47aec] */ r_edx = R32((u32)(0xa47aecu));
    /* 004b9814: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b9817: mov dword ptr [0xa47ad8], eax */ W32((u32)(0xa47ad8u), r_eax);
    /* 004b981c: jmp 0x4b97e7 */ goto L_004b97e7;
L_004b981e:; BB(0x004b981e);
    /* 004b981e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4b9823u); f_0082d7b0();
    /* 004b9823: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9825: push dword ptr [0xa47adc] */ { u32 v = R32((u32)(0xa47adcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004b982b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004b982d: mov edx, 0x9abb60 */ r_edx = 0x9abb60u;
    /* 004b9832: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x4b9837u); f_0082f940();
    /* 004b9837: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4b983cu); f_0082da80();
    /* 004b983c: mov edx, dword ptr [0xa47adc] */ r_edx = R32((u32)(0xa47adcu));
    /* 004b9842: lea ecx, [edx + 0xc] */ r_ecx = (u32)(r_edx+0xcu);
    /* 004b9845: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4b984au); f_0082f9c4();
    /* 004b984a: mov edx, dword ptr [0xa47aec] */ r_edx = R32((u32)(0xa47aecu));
    /* 004b9850: jmp 0x4b979f */ goto L_004b979f;
L_004b9860:; BB(0x004b9860);
    /* 004b9860: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004b9862: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b9865: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004b986d: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004b9871: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004b9879: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b987a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b987b: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x4b9880u); f_00835c3c();
    /* 004b9880: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9883: mov edx, dword ptr [0xa47aec] */ r_edx = R32((u32)(0xa47aecu));
    /* 004b9889: jmp 0x4b9743 */ goto L_004b9743;
}

void f_004b98c4(void) /* sub_4B98C4 */
{
    FN_ENTER(0x004b98c4);
    /* 004b98c4: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004b98c6: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x4b98cbu); f_0077a6cc();
    /* 004b98cb: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 004b98ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b98cf: ret  */ FN_RET(0x004b98c4); r_esp += 4; return;
}

void f_004b98d0(void) /* sub_4B98D0 */
{
    FN_ENTER(0x004b98d0);
    /* 004b98d0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004b98d2: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x4b98d7u); f_0077a6cc();
    /* 004b98d7: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 004b98da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b98db: ret  */ FN_RET(0x004b98d0); r_esp += 4; return;
}

void f_004b98dc(void) /* sub_4B98DC */
{
    FN_ENTER(0x004b98dc);
    /* 004b98dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b98dd: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 004b98e1: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 004b98e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b98e6: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4b98ebu); f_00786b3c();
    /* 004b98eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b98ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b98ee: je 0x4b98f8 */ if (fZ) goto L_004b98f8;
L_004b98f0:; BB(0x004b98f0);
    /* 004b98f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b98f1: mov ecx, eax */ r_ecx = r_eax;
    /* 004b98f3: call 0x4b98fc */ r_esp -= 4; W32(r_esp, 0x4b98f8u); f_004b98fc();
L_004b98f8:; BB(0x004b98f8);
    /* 004b98f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b98f9: ret  */ FN_RET(0x004b98dc); r_esp += 4; return;
}

void f_004b98fc(void) /* sub_4B98FC */
{
    FN_ENTER(0x004b98fc);
    /* 004b98fc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004b9900: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004b9904: mov dword ptr [ecx + 0x6bc], eax */ W32((u32)(r_ecx+0x6bcu), r_eax);
    /* 004b990a: movsx eax, word ptr [edx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 004b990e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b990f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x4b9914u); f_0051f62c();
    /* 004b9914: ret 4 */ FN_RET(0x004b98fc); r_esp += 8; return;
}

void f_004b9918(void) /* sub_4B9918 */
{
    FN_ENTER(0x004b9918);
    /* 004b9918: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b9919: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 004b991d: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 004b9921: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9922: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4b9927u); f_00786b3c();
    /* 004b9927: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b9928: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b992a: je 0x4b9934 */ if (fZ) goto L_004b9934;
L_004b992c:; BB(0x004b992c);
    /* 004b992c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b992d: mov ecx, eax */ r_ecx = r_eax;
    /* 004b992f: call 0x4b9938 */ r_esp -= 4; W32(r_esp, 0x4b9934u); f_004b9938();
L_004b9934:; BB(0x004b9934);
    /* 004b9934: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b9935: ret  */ FN_RET(0x004b9918); r_esp += 4; return;
}

void f_004b9938(void) /* sub_4B9938 */
{
    FN_ENTER(0x004b9938);
    /* 004b9938: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b9939: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b993a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004b993c: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 004b9940: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 004b9944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9945: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b9947: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x4b994cu); f_00520fcc();
    /* 004b994c: movsx eax, word ptr [esi + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 004b9950: mov dword ptr [ebp + 0x6bc], eax */ W32((u32)(r_ebp+0x6bcu), r_eax);
    /* 004b9956: movsx edx, word ptr [esi + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 004b995a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b995b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b995d: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x4b9962u); f_0051f62c();
    /* 004b9962: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b9963: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b9964: ret 4 */ FN_RET(0x004b9938); r_esp += 8; return;
}

void f_004b9968(void) /* sub_4B9968 */
{
    FN_ENTER(0x004b9968);
    /* 004b9968: mov eax, dword ptr [0xa47ad0] */ r_eax = R32((u32)(0xa47ad0u));
    /* 004b996d: ret  */ FN_RET(0x004b9968); r_esp += 4; return;
}

void f_004b9970(void) /* sub_4B9970 */
{
    FN_ENTER(0x004b9970);
    /* 004b9970: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b9974: mov ecx, dword ptr [0xa47af4] */ r_ecx = R32((u32)(0xa47af4u));
    /* 004b997a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4b997fu); f_005b8610();
    /* 004b997f: ret  */ FN_RET(0x004b9970); r_esp += 4; return;
}

void f_004b9980(void) /* sub_4B9980 */
{
    FN_ENTER(0x004b9980);
    /* 004b9980: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b9984: mov ecx, dword ptr [0xa47af4] */ r_ecx = R32((u32)(0xa47af4u));
    /* 004b998a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4b998fu); f_005b8638();
    /* 004b998f: ret  */ FN_RET(0x004b9980); r_esp += 4; return;
}

void f_004b9990(void) /* sub_4B9990 */
{
    FN_ENTER(0x004b9990);
    /* 004b9990: mov ecx, dword ptr [0xa47af4] */ r_ecx = R32((u32)(0xa47af4u));
    /* 004b9996: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9998: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x4b999du); f_005b8624();
    /* 004b999d: ret  */ FN_RET(0x004b9990); r_esp += 4; return;
}

void f_004b99a0(void)
{
    FN_ENTER(0x004b99a0);
    /* 004b99a0: fld dword ptr [0x906c30] */ FPUSH(R_F32((u32)(0x906c30u)));
    /* 004b99a6: fld dword ptr [0x906c1c] */ FPUSH(R_F32((u32)(0x906c1cu)));
    /* 004b99ac: mov dword ptr [0xa47ab0], 0x3f800000 */ W32((u32)(0xa47ab0u), 0x3f800000u);
    /* 004b99b6: mov dword ptr [0xa47ab4], 0x41000000 */ W32((u32)(0xa47ab4u), 0x41000000u);
    /* 004b99c0: mov dword ptr [0xa47ab8], 0x3fc00000 */ W32((u32)(0xa47ab8u), 0x3fc00000u);
    /* 004b99ca: mov dword ptr [0xa47af0], 0x3ecccccd */ W32((u32)(0xa47af0u), 0x3ecccccdu);
    /* 004b99d4: mov dword ptr [0xa47aa4], 0x40200000 */ W32((u32)(0xa47aa4u), 0x40200000u);
    /* 004b99de: mov dword ptr [0xa47aa8], 0x40200000 */ W32((u32)(0xa47aa8u), 0x40200000u);
    /* 004b99e8: mov dword ptr [0xa47aac], 0x40200000 */ W32((u32)(0xa47aacu), 0x40200000u);
    /* 004b99f2: mov dword ptr [0xa47abc], 0x40e00000 */ W32((u32)(0xa47abcu), 0x40e00000u);
    /* 004b99fc: mov dword ptr [0xa47780], 0xc32f0000 */ W32((u32)(0xa47780u), 0xc32f0000u);
    /* 004b9a06: mov dword ptr [0xa47784], 0x40e00000 */ W32((u32)(0xa47784u), 0x40e00000u);
    /* 004b9a10: mov dword ptr [0xa47788], 0x41c80000 */ W32((u32)(0xa47788u), 0x41c80000u);
    /* 004b9a1a: mov dword ptr [0xa4778c], 0 */ W32((u32)(0xa4778cu), 0x0u);
    /* 004b9a24: mov dword ptr [0xa47790], 0x40e00000 */ W32((u32)(0xa47790u), 0x40e00000u);
    /* 004b9a2e: mov dword ptr [0xa47794], 0x43fa0000 */ W32((u32)(0xa47794u), 0x43fa0000u);
    /* 004b9a38: mov dword ptr [0xa47798], 0x432f0000 */ W32((u32)(0xa47798u), 0x432f0000u);
    /* 004b9a42: mov dword ptr [0xa4779c], 0x40e00000 */ W32((u32)(0xa4779cu), 0x40e00000u);
    /* 004b9a4c: mov dword ptr [0xa477a0], 0x41c80000 */ W32((u32)(0xa477a0u), 0x41c80000u);
    /* 004b9a56: mov dword ptr [0xa477a4], 0 */ W32((u32)(0xa477a4u), 0x0u);
    /* 004b9a60: mov dword ptr [0xa477a8], 0x40e00000 */ W32((u32)(0xa477a8u), 0x40e00000u);
    /* 004b9a6a: mov dword ptr [0xa477ac], 0xc37a0000 */ W32((u32)(0xa477acu), 0xc37a0000u);
    /* 004b9a74: mov dword ptr [0xa477b0], 0 */ W32((u32)(0xa477b0u), 0x0u);
    /* 004b9a7e: mov dword ptr [0xa477b4], 0x40e00000 */ W32((u32)(0xa477b4u), 0x40e00000u);
    /* 004b9a88: mov dword ptr [0xa477b8], 0x41c80000 */ W32((u32)(0xa477b8u), 0x41c80000u);
    /* 004b9a92: mov dword ptr [0xa477bc], 0xc34d0000 */ W32((u32)(0xa477bcu), 0xc34d0000u);
    /* 004b9a9c: mov dword ptr [0xa477c0], 0xc2c80000 */ W32((u32)(0xa477c0u), 0xc2c80000u);
    /* 004b9aa6: mov dword ptr [0xa477c4], 0x41c80000 */ W32((u32)(0xa477c4u), 0x41c80000u);
    /* 004b9ab0: mov dword ptr [0xa477c8], 0 */ W32((u32)(0xa477c8u), 0x0u);
    /* 004b9aba: mov dword ptr [0xa477cc], 0xc2c80000 */ W32((u32)(0xa477ccu), 0xc2c80000u);
    /* 004b9ac4: mov dword ptr [0xa477d0], 0x44048000 */ W32((u32)(0xa477d0u), 0x44048000u);
    /* 004b9ace: mov dword ptr [0xa477d4], 0x434d0000 */ W32((u32)(0xa477d4u), 0x434d0000u);
    /* 004b9ad8: mov dword ptr [0xa477d8], 0xc2c80000 */ W32((u32)(0xa477d8u), 0xc2c80000u);
    /* 004b9ae2: mov dword ptr [0xa477dc], 0x41c80000 */ W32((u32)(0xa477dcu), 0x41c80000u);
    /* 004b9aec: mov dword ptr [0xa477e0], 0 */ W32((u32)(0xa477e0u), 0x0u);
    /* 004b9af6: mov dword ptr [0xa477e4], 0xc2c80000 */ W32((u32)(0xa477e4u), 0xc2c80000u);
    /* 004b9b00: mov dword ptr [0xa477e8], 0xc38c0000 */ W32((u32)(0xa477e8u), 0xc38c0000u);
    /* 004b9b0a: mov dword ptr [0xa477ec], 0 */ W32((u32)(0xa477ecu), 0x0u);
    /* 004b9b14: mov dword ptr [0xa477f0], 0xc2c80000 */ W32((u32)(0xa477f0u), 0xc2c80000u);
    /* 004b9b1e: mov dword ptr [0xa477f4], 0x41c80000 */ W32((u32)(0xa477f4u), 0x41c80000u);
    /* 004b9b28: mov dword ptr [0xa47a7c], 0x3e99999a */ W32((u32)(0xa47a7cu), 0x3e99999au);
    /* 004b9b32: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b9b34: fdiv dword ptr [0xa47a7c] */ ST(0) = ST(0) / R_F32((u32)(0xa47a7cu));
    /* 004b9b3a: fstp dword ptr [0xa47a70] */ W_F32((u32)(0xa47a70u), ST(0)); FPOP();
    /* 004b9b40: mov dword ptr [0xa47a78], 0x41a00000 */ W32((u32)(0xa47a78u), 0x41a00000u);
    /* 004b9b4a: mov dword ptr [0xa47a74], 0x41800000 */ W32((u32)(0xa47a74u), 0x41800000u);
    /* 004b9b54: mov dword ptr [0xa47a6c], 0x40000000 */ W32((u32)(0xa47a6cu), 0x40000000u);
    /* 004b9b5e: mov dword ptr [0xa47a68], 0x42100000 */ W32((u32)(0xa47a68u), 0x42100000u);
    /* 004b9b68: mov dword ptr [0xa47aa0], 0x3e47ae15 */ W32((u32)(0xa47aa0u), 0x3e47ae15u);
    /* 004b9b72: fdiv dword ptr [0xa47aa0] */ ST(0) = ST(0) / R_F32((u32)(0xa47aa0u));
    /* 004b9b78: fstp dword ptr [0xa47a98] */ W_F32((u32)(0xa47a98u), ST(0)); FPOP();
    /* 004b9b7e: mov dword ptr [0xa47a9c], 0x4192aaaa */ W32((u32)(0xa47a9cu), 0x4192aaaau);
    /* 004b9b88: mov dword ptr [0xa47ac0], 0x41baaaaa */ W32((u32)(0xa47ac0u), 0x41baaaaau);
    /* 004b9b92: mov dword ptr [0xa47a8c], 0x40e00000 */ W32((u32)(0xa47a8cu), 0x40e00000u);
    /* 004b9b9c: mov dword ptr [0xa47a88], 0x41400000 */ W32((u32)(0xa47a88u), 0x41400000u);
    /* 004b9ba6: mov dword ptr [0xa47a84], 0x40e00000 */ W32((u32)(0xa47a84u), 0x40e00000u);
    /* 004b9bb0: mov dword ptr [0xa47a80], 0x40a00000 */ W32((u32)(0xa47a80u), 0x40a00000u);
    /* 004b9bba: mov dword ptr [0xa47a90], 0x40800000 */ W32((u32)(0xa47a90u), 0x40800000u);
    /* 004b9bc4: mov dword ptr [0x9abb98], 0x41000000 */ W32((u32)(0x9abb98u), 0x41000000u);
    /* 004b9bce: mov dword ptr [0xa47a94], 0xc3090000 */ W32((u32)(0xa47a94u), 0xc3090000u);
    /* 004b9bd8: mov dword ptr [0x9abbac], 0x41800000 */ W32((u32)(0x9abbacu), 0x41800000u);
    /* 004b9be2: mov dword ptr [0x9abbdc], 0 */ W32((u32)(0x9abbdcu), 0x0u);
    /* 004b9bec: mov dword ptr [0x9abc00], 0x41c80000 */ W32((u32)(0x9abc00u), 0x41c80000u);
    /* 004b9bf6: mov dword ptr [0x9aba28], 0x3f333333 */ W32((u32)(0x9aba28u), 0x3f333333u);
    /* 004b9c00: mov dword ptr [0x9aba38], 0x3f19999a */ W32((u32)(0x9aba38u), 0x3f19999au);
    /* 004b9c0a: mov dword ptr [0x9aba58], 0x3ecccccd */ W32((u32)(0x9aba58u), 0x3ecccccdu);
    /* 004b9c14: mov dword ptr [0x9aba68], 0x3e99999a */ W32((u32)(0x9aba68u), 0x3e99999au);
    /* 004b9c1e: mov dword ptr [0x9aba78], 0x3f000000 */ W32((u32)(0x9aba78u), 0x3f000000u);
    /* 004b9c28: mov dword ptr [0x9aba88], 0x3f000000 */ W32((u32)(0x9aba88u), 0x3f000000u);
    /* 004b9c32: mov dword ptr [0x9aba98], 0x3e8f5c29 */ W32((u32)(0x9aba98u), 0x3e8f5c29u);
    /* 004b9c3c: mov dword ptr [0x9abaa8], 0x3e8f5c29 */ W32((u32)(0x9abaa8u), 0x3e8f5c29u);
    /* 004b9c46: mov dword ptr [0x9abb28], 0x3f333333 */ W32((u32)(0x9abb28u), 0x3f333333u);
    /* 004b9c50: ret  */ FN_RET(0x004b99a0); r_esp += 4; return;
}

void f_004b9bf1(void)
{
    FN_ENTER(0x004b9bf1);
    /* 004b9bf1: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004b9bf3: add al, cl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (r < a); }
    /* 004b9bf5: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 004b9bf6: mov dword ptr [0x9aba28], 0x3f333333 */ W32((u32)(0x9aba28u), 0x3f333333u);
    /* 004b9c00: mov dword ptr [0x9aba38], 0x3f19999a */ W32((u32)(0x9aba38u), 0x3f19999au);
    /* 004b9c0a: mov dword ptr [0x9aba58], 0x3ecccccd */ W32((u32)(0x9aba58u), 0x3ecccccdu);
    /* 004b9c14: mov dword ptr [0x9aba68], 0x3e99999a */ W32((u32)(0x9aba68u), 0x3e99999au);
    /* 004b9c1e: mov dword ptr [0x9aba78], 0x3f000000 */ W32((u32)(0x9aba78u), 0x3f000000u);
    /* 004b9c28: mov dword ptr [0x9aba88], 0x3f000000 */ W32((u32)(0x9aba88u), 0x3f000000u);
    /* 004b9c32: mov dword ptr [0x9aba98], 0x3e8f5c29 */ W32((u32)(0x9aba98u), 0x3e8f5c29u);
    /* 004b9c3c: mov dword ptr [0x9abaa8], 0x3e8f5c29 */ W32((u32)(0x9abaa8u), 0x3e8f5c29u);
    /* 004b9c46: mov dword ptr [0x9abb28], 0x3f333333 */ W32((u32)(0x9abb28u), 0x3f333333u);
    /* 004b9c50: ret  */ FN_RET(0x004b9bf1); r_esp += 4; return;
}

void f_004b9c54(void) /* sub_4B9C54 */
{
    FN_ENTER(0x004b9c54);
    /* 004b9c54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b9c55: mov ebp, esp */ r_ebp = r_esp;
    /* 004b9c57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004b9c59: push 0x8d0e78 */ { u32 v = 0x8d0e78u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9c5e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004b9c64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9c65: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004b9c6c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b9c6f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004b9c72: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004b9c75: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004b9c78: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004b9c7b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9c80: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004b9c87: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4b9c8cu); f_008581c5();
    /* 004b9c8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b9c8d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004b9c90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9c92: je 0x4b9e4c */ if (fZ) goto L_004b9e4c;
L_004b9c98:; BB(0x004b9c98);
    /* 004b9c98: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004b9c9f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b9ca6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b9ca9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b9cab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9cac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9cad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9cae: push 0x9abb4c */ { u32 v = 0x9abb4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b9cb3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9cb5: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x4b9cbau); f_005b7a84();
    /* 004b9cba: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b9cbd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004b9cc4:; BB(0x004b9cc4);
    /* 004b9cc4: mov dword ptr [0xa47af4], eax */ W32((u32)(0xa47af4u), r_eax);
    /* 004b9cc9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004b9cd0: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9cd2: push 0x9abc20 */ { u32 v = 0x9abc20u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9cd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b9cd9: mov dword ptr [0xa47aec], eax */ W32((u32)(0xa47aecu), r_eax);
    /* 004b9cde: mov dword ptr [0xa47ae8], eax */ W32((u32)(0xa47ae8u), r_eax);
    /* 004b9ce3: mov dword ptr [0xa47ae4], eax */ W32((u32)(0xa47ae4u), r_eax);
    /* 004b9ce8: mov dword ptr [0xa47ae0], eax */ W32((u32)(0xa47ae0u), r_eax);
    /* 004b9ced: mov dword ptr [0xa47adc], eax */ W32((u32)(0xa47adcu), r_eax);
    /* 004b9cf2: mov dword ptr [0xa47ad8], eax */ W32((u32)(0xa47ad8u), r_eax);
    /* 004b9cf7: mov dword ptr [0xa47ad4], eax */ W32((u32)(0xa47ad4u), r_eax);
    /* 004b9cfc: mov dword ptr [0xa47ad0], eax */ W32((u32)(0xa47ad0u), r_eax);
    /* 004b9d01: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x4b9d06u); f_0078b184();
    /* 004b9d06: mov eax, dword ptr [0xa47af4] */ r_eax = R32((u32)(0xa47af4u));
    /* 004b9d0b: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 004b9d0d: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 004b9d13: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b9d16: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x4b9d1bu); f_0078e934();
    /* 004b9d1b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b9d1e: mov dword ptr [0xa47acc], eax */ W32((u32)(0xa47accu), r_eax);
    /* 004b9d23: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 004b9d26: mov dword ptr [0xa47ac8], eax */ W32((u32)(0xa47ac8u), r_eax);
    /* 004b9d2b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004b9d2d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004b9d2f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b9d31:; BB(0x004b9d31);
    /* 004b9d31: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 004b9d34: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b9d36: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b9d38: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b9d3a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b9d3c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004b9d3e: mov dword ptr [edx*8 + 0xa47800], 0xf */ W32((u32)(r_edx*8+0xa47800u), 0xfu);
    /* 004b9d49: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b9d4c: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b9d4f: mov dword ptr [edx*8 + 0xa47804], eax */ W32((u32)(r_edx*8+0xa47804u), r_eax);
    /* 004b9d56: mov dword ptr [edx*8 + 0xa47808], edi */ W32((u32)(r_edx*8+0xa47808u), r_edi);
    /* 004b9d5d: mov dword ptr [edx*8 + 0xa47814], eax */ W32((u32)(r_edx*8+0xa47814u), r_eax);
    /* 004b9d64: mov edi, 0 */ r_edi = 0x0u;
    /* 004b9d69: mov dword ptr [edx*8 + 0xa4780c], edi */ W32((u32)(r_edx*8+0xa4780cu), r_edi);
    /* 004b9d70: mov dword ptr [edx*8 + 0xa47818], eax */ W32((u32)(r_edx*8+0xa47818u), r_eax);
    /* 004b9d77: mov dword ptr [edx*8 + 0xa4781c], eax */ W32((u32)(r_edx*8+0xa4781cu), r_eax);
    /* 004b9d7e: mov edi, 0 */ r_edi = 0x0u;
    /* 004b9d83: mov dword ptr [edx*8 + 0xa47810], edi */ W32((u32)(r_edx*8+0xa47810u), r_edi);
    /* 004b9d8a: mov dword ptr [edx*8 + 0xa47824], ebx */ W32((u32)(r_edx*8+0xa47824u), r_ebx);
    /* 004b9d91: mov dword ptr [edx*8 + 0xa47828], esi */ W32((u32)(r_edx*8+0xa47828u), r_esi);
    /* 004b9d98: mov edi, 0 */ r_edi = 0x0u;
    /* 004b9d9d: mov dword ptr [edx*8 + 0xa47820], edi */ W32((u32)(r_edx*8+0xa47820u), r_edi);
    /* 004b9da4: mov dword ptr [edx*8 + 0xa4782c], eax */ W32((u32)(r_edx*8+0xa4782cu), r_eax);
    /* 004b9dab: mov dword ptr [edx*8 + 0xa47830], eax */ W32((u32)(r_edx*8+0xa47830u), r_eax);
    /* 004b9db2: jl 0x4b9d31 */ if ((fS!=fO)) goto L_004b9d31;
L_004b9db8:; BB(0x004b9db8);
    /* 004b9db8: mov dword ptr [0xa4782c], 0xa47838 */ W32((u32)(0xa4782cu), 0xa47838u);
    /* 004b9dc2: mov dword ptr [0xa47864], 0xa47870 */ W32((u32)(0xa47864u), 0xa47870u);
    /* 004b9dcc: mov dword ptr [0xa4789c], 0xa478a8 */ W32((u32)(0xa4789cu), 0xa478a8u);
    /* 004b9dd6: mov dword ptr [0xa478d4], 0xa478e0 */ W32((u32)(0xa478d4u), 0xa478e0u);
    /* 004b9de0: mov dword ptr [0xa4790c], 0xa47918 */ W32((u32)(0xa4790cu), 0xa47918u);
    /* 004b9dea: mov dword ptr [0xa47944], 0xa47950 */ W32((u32)(0xa47944u), 0xa47950u);
    /* 004b9df4: mov dword ptr [0xa4797c], 0xa47988 */ W32((u32)(0xa4797cu), 0xa47988u);
    /* 004b9dfe: mov dword ptr [0xa479b4], 0xa479c0 */ W32((u32)(0xa479b4u), 0xa479c0u);
    /* 004b9e08: mov dword ptr [0xa479ec], 0xa479f8 */ W32((u32)(0xa479ecu), 0xa479f8u);
    /* 004b9e12: mov dword ptr [0xa47a24], 0xa47a30 */ W32((u32)(0xa47a24u), 0xa47a30u);
    /* 004b9e1c: mov dword ptr [0xa47a30], 0x1f */ W32((u32)(0xa47a30u), 0x1fu);
    /* 004b9e26: mov dword ptr [0xa47a5c], 0 */ W32((u32)(0xa47a5cu), 0x0u);
    /* 004b9e30: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x4b9e35u); f_00717f74();
    /* 004b9e35: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b9e38: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b9e3b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b9e3e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b9e41: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b9e48: mov esp, ebp */ r_esp = r_ebp;
    /* 004b9e4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b9e4b: ret  */ FN_RET(0x004b9c54); r_esp += 4; return;
L_004b9e4c:; BB(0x004b9e4c);
    /* 004b9e4c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b9e4e: jmp 0x4b9cc4 */ goto L_004b9cc4;
}

void f_004b9e54(void) /* sub_4B9E54 */
{
    FN_ENTER(0x004b9e54);
    /* 004b9e54: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b9e55: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b9e58: mov esi, ecx */ r_esi = r_ecx;
    /* 004b9e5a: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004b9e5e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9e61: je 0x4b9ec8 */ if (fZ) goto L_004b9ec8;
L_004b9e63:; BB(0x004b9e63);
    /* 004b9e63: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9e66: je 0x4b9e84 */ if (fZ) goto L_004b9e84;
L_004b9e68:; BB(0x004b9e68);
    /* 004b9e68: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9e6b: je 0x4b9e7d */ if (fZ) goto L_004b9e7d;
L_004b9e6d:; BB(0x004b9e6d);
    /* 004b9e6d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9e70: je 0x4b9e7d */ if (fZ) goto L_004b9e7d;
L_004b9e72:; BB(0x004b9e72);
    /* 004b9e72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b9e74: jne 0x4b9e7d */ if (!fZ) goto L_004b9e7d;
L_004b9e76:; BB(0x004b9e76);
    /* 004b9e76: mov ecx, esi */ r_ecx = r_esi;
    /* 004b9e78: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b9e7du); f_007aa094();
L_004b9e7d:; BB(0x004b9e7d);
    /* 004b9e7d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b9e80: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b9e81: ret 4 */ FN_RET(0x004b9e54); r_esp += 8; return;
L_004b9e84:; BB(0x004b9e84);
    /* 004b9e84: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9e86: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9e88: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004b9e8a: mov ecx, esi */ r_ecx = r_esi;
    /* 004b9e8c: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b9e92u); call_ind(t); }
    /* 004b9e92: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004b9e96: mov esi, dword ptr [esi + 0x6bc] */ r_esi = R32((u32)(r_esi+0x6bcu));
    /* 004b9e9c: mov byte ptr [esp], 0xa9 */ W8((u32)(r_esp), 0xa9u);
    /* 004b9ea0: mov edx, 1 */ r_edx = 0x1u;
    /* 004b9ea5: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 004b9eaa: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004b9eaf: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004b9eb4: mov word ptr [esp + 6], si */ W16((u32)(r_esp+0x6u), (u16)r_esi);
    /* 004b9eb9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004b9ebc: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b9ec1u); f_008003e0();
    /* 004b9ec1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b9ec4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b9ec5: ret 4 */ FN_RET(0x004b9e54); r_esp += 8; return;
L_004b9ec8:; BB(0x004b9ec8);
    /* 004b9ec8: mov eax, 1 */ r_eax = 0x1u;
    /* 004b9ecd: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004b9ed4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b9ed7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b9ed8: ret 4 */ FN_RET(0x004b9e54); r_esp += 8; return;
}

void f_004b9edc(void) /* sub_4B9EDC */
{
    FN_ENTER(0x004b9edc);
    /* 004b9edc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b9ede: mov dword ptr [ecx + 0x6b8], eax */ W32((u32)(r_ecx+0x6b8u), r_eax);
    /* 004b9ee4: mov dword ptr [ecx + 0x6bc], eax */ W32((u32)(r_ecx+0x6bcu), r_eax);
    /* 004b9eea: ret  */ FN_RET(0x004b9edc); r_esp += 4; return;
}

void f_004b9eec(void) /* sub_4B9EEC */
{
    FN_ENTER(0x004b9eec);
    /* 004b9eec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b9eed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004b9eef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b9ef1: call 0x4b9f10 */ r_esp -= 4; W32(r_esp, 0x4b9ef6u); f_004b9f10();
    /* 004b9ef6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004b9efa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b9efc: jne 0x4b9f02 */ if (!fZ) goto L_004b9f02;
L_004b9efe:; BB(0x004b9efe);
    /* 004b9efe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b9eff: ret 4 */ FN_RET(0x004b9eec); r_esp += 8; return;
L_004b9f02:; BB(0x004b9f02);
    /* 004b9f02: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b9f03: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4b9f08u); f_005c2f74();
    /* 004b9f08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b9f09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b9f0a: ret 4 */ FN_RET(0x004b9eec); r_esp += 8; return;
}

void f_004b9f10(void) /* sub_4B9F10 */
{
    FN_ENTER(0x004b9f10);
    /* 004b9f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b9f11: mov ebp, esp */ r_ebp = r_esp;
    /* 004b9f13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004b9f15: push 0x8d0e94 */ { u32 v = 0x8d0e94u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9f1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004b9f20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b9f21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004b9f28: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b9f2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004b9f2e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004b9f31: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004b9f34: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004b9f37: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004b9f3a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b9f41: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b9f44: mov dword ptr [ecx], 0xafada0 */ W32((u32)(r_ecx), 0xafada0u);
    /* 004b9f4a: call 0x7b9de0 */ r_esp -= 4; W32(r_esp, 0x4b9f4fu); f_007b9de0();
    /* 004b9f4f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004b9f56: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b9f59: call 0x51f54c */ r_esp -= 4; W32(r_esp, 0x4b9f5eu); f_0051f54c();
    /* 004b9f5e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b9f61: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b9f68: mov esp, ebp */ r_esp = r_ebp;
    /* 004b9f6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b9f6b: ret  */ FN_RET(0x004b9f10); r_esp += 4; return;
}

void f_004b9f6c(void) /* sub_4B9F6C */
{
    FN_ENTER(0x004b9f6c);
    /* 004b9f6c: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 004b9f6f: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b9f74: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 004b9f77: ret  */ FN_RET(0x004b9f6c); r_esp += 4; return;
}

void f_004b9f78(void) /* sub_4B9F78 */
{
    FN_ENTER(0x004b9f78);
    /* 004b9f78: fld dword ptr [0x906bb0] */ FPUSH(R_F32((u32)(0x906bb0u)));
    /* 004b9f7e: fsub dword ptr [0x9071b4] */ ST(0) = ST(0) - R_F32((u32)(0x9071b4u));
    /* 004b9f84: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 004b9f87: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004b9f89: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b9f8b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b9f8d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b9f8f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b9f90: jae 0x4b9fa5 */ if (!fC) goto L_004b9fa5;
L_004b9f92:; BB(0x004b9f92);
    /* 004b9f92: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b9f94: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 004b9f9a: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 004b9f9d: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b9fa0: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 004b9fa3: jmp 0x4b9fe8 */ goto L_004b9fe8;
L_004b9fa5:; BB(0x004b9fa5);
    /* 004b9fa5: fcomp dword ptr [0x9071b0] */ fx_compare(ST(0), R_F32((u32)(0x9071b0u))); FPOP();
    /* 004b9fab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b9fad: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 004b9fb3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b9fb4: jb 0x4b9fd0 */ if (fC) goto L_004b9fd0;
L_004b9fb6:; BB(0x004b9fb6);
    /* 004b9fb6: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 004b9fb9: or eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b9fbc: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 004b9fbf: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 004b9fc5: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004b9fc8: and edx, 0xfffffffd */ {  u32 a = r_edx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004b9fcb: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 004b9fce: jmp 0x4b9fe8 */ goto L_004b9fe8;
L_004b9fd0:; BB(0x004b9fd0);
    /* 004b9fd0: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 004b9fd3: or eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b9fd6: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 004b9fd9: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 004b9fdf: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004b9fe2: and edx, 0xfffffffb */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004b9fe5: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
L_004b9fe8:; BB(0x004b9fe8);
    /* 004b9fe8: call 0x51ffdc */ r_esp -= 4; W32(r_esp, 0x4b9fedu); f_0051ffdc();
    /* 004b9fed: ret  */ FN_RET(0x004b9f78); r_esp += 4; return;
}

void f_004b9ff0(void) /* sub_4B9FF0 */
{
    FN_ENTER(0x004b9ff0);
    /* 004b9ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b9ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 004b9ff3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004b9ff5: push 0x8d0eb0 */ { u32 v = 0x8d0eb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b9ffa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ba000: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba001: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ba008: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ba00b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ba00e: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 004ba011: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004ba014: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 004ba017: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 004ba01a: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 004ba01e: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 004ba022: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004ba025: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ba028: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ba029: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004ba02c: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 004ba02f: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004ba032: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004ba035: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 004ba038: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004ba03b: call 0x521738 */ r_esp -= 4; W32(r_esp, 0x4ba040u); f_00521738();
    /* 004ba040: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ba047: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004ba04a: mov edx, ebx */ r_edx = r_ebx;
    /* 004ba04c: mov dword ptr [ecx], 0xafada0 */ W32((u32)(r_ecx), 0xafada0u);
    /* 004ba052: mov eax, dword ptr [0x9abc80] */ r_eax = R32((u32)(0x9abc80u));
    /* 004ba057: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ba058: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004ba05b: call 0x51f760 */ r_esp -= 4; W32(r_esp, 0x4ba060u); f_0051f760();
    /* 004ba060: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004ba063: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ba066: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ba069: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ba06c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004ba06f: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba071: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 004ba075: mov word ptr [ecx + 0x2c], dx */ W16((u32)(r_ecx+0x2cu), (u16)r_edx);
    /* 004ba079: mov dword ptr [ecx + 0x3c8], ebx */ W32((u32)(r_ecx+0x3c8u), r_ebx);
    /* 004ba07f: mov dword ptr [ecx + 0x3c0], esi */ W32((u32)(r_ecx+0x3c0u), r_esi);
    /* 004ba085: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x4ba08au); f_00520390();
    /* 004ba08a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004ba08d: call 0x4ba2e4 */ r_esp -= 4; W32(r_esp, 0x4ba092u); f_004ba2e4();
    /* 004ba092: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004ba095: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004ba098: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004ba09b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ba09e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ba0a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004ba0a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ba0a8: ret 0x14 */ FN_RET(0x004b9ff0); r_esp += 24; return;
}

