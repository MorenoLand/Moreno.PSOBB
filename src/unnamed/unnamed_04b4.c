#include "protos.h"

void f_004b4002(void)
{
    FN_ENTER(0x004b4002);
    goto L_004b4002;
L_004b3ea3:; BB(0x004b3ea3);
    /* 004b3ea3: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b3ea6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3ea7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b3ea8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b3ea9: ret 8 */ FN_RET(0x004b4002); r_esp += 12; return;
L_004b4002:; BB(0x004b4002);
    /* 004b4002: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4004: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b4009u); f_00520bf4();
    /* 004b4009: fcomp dword ptr [0x906e68] */ fx_compare(ST(0), R_F32((u32)(0x906e68u))); FPOP();
    /* 004b400f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b4011: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b4012: jbe 0x4b401b */ if ((fC||fZ)) goto L_004b401b;
L_004b4014:; BB(0x004b4014);
    /* 004b4014: mov edx, 8 */ r_edx = 0x8u;
    /* 004b4019: jmp 0x4b4020 */ goto L_004b4020;
L_004b401b:; BB(0x004b401b);
    /* 004b401b: mov edx, 6 */ r_edx = 0x6u;
L_004b4020:; BB(0x004b4020);
    /* 004b4020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4021: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4023: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4028u); f_004b5150();
    /* 004b4028: jmp 0x4b3ea3 */ goto L_004b3ea3;
}

void f_004b4020(void)
{
    FN_ENTER(0x004b4020);
    goto L_004b4020;
L_004b3ea3:; BB(0x004b3ea3);
    /* 004b3ea3: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b3ea6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b3ea7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b3ea8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b3ea9: ret 8 */ FN_RET(0x004b4020); r_esp += 12; return;
L_004b4020:; BB(0x004b4020);
    /* 004b4020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4021: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4023: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4028u); f_004b5150();
    /* 004b4028: jmp 0x4b3ea3 */ goto L_004b3ea3;
}

void f_004b416c(void) /* sub_4B416C */
{
    FN_ENTER(0x004b416c);
    /* 004b416c: mov eax, dword ptr [ecx + 0x6c8] */ r_eax = R32((u32)(r_ecx+0x6c8u));
    /* 004b4172: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b4174: jne 0x4b4186 */ if (!fZ) goto L_004b4186;
L_004b4176:; BB(0x004b4176);
    /* 004b4176: mov dword ptr [ecx + 0x38], 0xc2c80000 */ W32((u32)(r_ecx+0x38u), 0xc2c80000u);
    /* 004b417d: mov dword ptr [ecx + 0x64], 0x500 */ W32((u32)(r_ecx+0x64u), 0x500u);
    /* 004b4184: jmp 0x4b4194 */ goto L_004b4194;
L_004b4186:; BB(0x004b4186);
    /* 004b4186: mov dword ptr [ecx + 0x38], 0x42c80000 */ W32((u32)(r_ecx+0x38u), 0x42c80000u);
    /* 004b418d: mov dword ptr [ecx + 0x64], 0xfffffb00 */ W32((u32)(r_ecx+0x64u), 0xfffffb00u);
L_004b4194:; BB(0x004b4194);
    /* 004b4194: mov eax, dword ptr [0xa47a90] */ r_eax = R32((u32)(0xa47a90u));
    /* 004b4199: mov dword ptr [ecx + 0x40], 0x41200000 */ W32((u32)(r_ecx+0x40u), 0x41200000u);
    /* 004b41a0: mov dword ptr [ecx + 0x6f8], eax */ W32((u32)(r_ecx+0x6f8u), r_eax);
    /* 004b41a6: ret 4 */ FN_RET(0x004b416c); r_esp += 8; return;
}

void f_004b41ac(void) /* sub_4B41AC */
{
    FN_ENTER(0x004b41ac);
    /* 004b41ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b41ad: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b41b0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004b41b2: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004b41b6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b41b9: je 0x4b457e */ if (fZ) goto L_004b457e;
L_004b41bf:; BB(0x004b41bf);
    /* 004b41bf: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b41c2: je 0x4b452e */ if (fZ) goto L_004b452e;
L_004b41c8:; BB(0x004b41c8);
    /* 004b41c8: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b41cb: je 0x4b43dc */ if (fZ) goto L_004b43dc;
L_004b41d1:; BB(0x004b41d1);
    /* 004b41d1: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b41d4: je 0x4b43d5 */ if (fZ) goto L_004b43d5;
L_004b41da:; BB(0x004b41da);
    /* 004b41da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b41dc: je 0x4b4204 */ if (fZ) goto L_004b4204;
L_004b41de:; BB(0x004b41de);
    /* 004b41de: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b41e1: je 0x4b43d5 */ if (fZ) goto L_004b43d5;
L_004b41e7:; BB(0x004b41e7);
    /* 004b41e7: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b41ea: jne 0x4b43d5 */ if (!fZ) goto L_004b43d5;
L_004b41f0:; BB(0x004b41f0);
    /* 004b41f0: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b41f6: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b41f9: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b41ff: jmp 0x4b43d5 */ goto L_004b43d5;
L_004b4204:; BB(0x004b4204);
    /* 004b4204: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b4206: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b420bu); f_007aa094();
    /* 004b420b: mov eax, dword ptr [ebx + 0x730] */ r_eax = R32((u32)(r_ebx+0x730u));
    /* 004b4211: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4213: jne 0x4b439d */ if (!fZ) goto L_004b439d;
L_004b4219:; BB(0x004b4219);
    /* 004b4219: fild dword ptr [ebx + 0x744] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x744u)));
    /* 004b421f: fadd dword ptr [0x906e48] */ ST(0) = ST(0) + R_F32((u32)(0x906e48u));
    /* 004b4225: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004b4228: fld dword ptr [ebx + 0x750] */ FPUSH(R_F32((u32)(r_ebx+0x750u)));
    /* 004b422e: fld dword ptr [0x906f64] */ FPUSH(R_F32((u32)(0x906f64u)));
    /* 004b4234: fadd dword ptr [ebx + 0x754] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x754u));
    /* 004b423a: fld dword ptr [0x906e4c] */ FPUSH(R_F32((u32)(0x906e4cu)));
    /* 004b4240: fadd dword ptr [ebx + 0x74c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x74cu));
    /* 004b4246: fld dword ptr [ebx + 0x6f8] */ FPUSH(R_F32((u32)(r_ebx+0x6f8u)));
    /* 004b424c: fld dword ptr [0x906e5c] */ FPUSH(R_F32((u32)(0x906e5cu)));
    /* 004b4252: fadd dword ptr [ebx + 0x758] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x758u));
    /* 004b4258: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 004b425a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004b425e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004b4263: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b4268: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004b426c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004b4270: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004b4274: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004b4278: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004b427c: fcom dword ptr [0x906e44] */ fx_compare(ST(0), R_F32((u32)(0x906e44u))); 
    /* 004b4282: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b4284: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004b4288: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004b428a: fst dword ptr [ebx + 0x754] */ W_F32((u32)(r_ebx+0x754u), ST(0));
    /* 004b4290: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004b4292: fst dword ptr [ebx + 0x74c] */ W_F32((u32)(r_ebx+0x74cu), ST(0));
    /* 004b4298: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 004b429a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004b429c: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 004b429f: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 004b42a1: fst dword ptr [ebx + 0x758] */ W_F32((u32)(r_ebx+0x758u), ST(0));
    /* 004b42a7: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 004b42a9: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 004b42ac: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 004b42ae: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004b42b0: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004b42b3: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 004b42b5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b42b7: fstp dword ptr [ebx + 0x6f8] */ W_F32((u32)(r_ebx+0x6f8u), ST(0)); FPOP();
    /* 004b42bd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b42be: jb 0x4b42d4 */ if (fC) goto L_004b42d4;
L_004b42c0:; BB(0x004b42c0);
    /* 004b42c0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b42c2: fld dword ptr [0x906e40] */ FPUSH(R_F32((u32)(0x906e40u)));
    /* 004b42c8: mov dword ptr [ebx + 0x744], 0x4000 */ W32((u32)(r_ebx+0x744u), 0x4000u);
    /* 004b42d2: jmp 0x4b42da */ goto L_004b42da;
L_004b42d4:; BB(0x004b42d4);
    /* 004b42d4: mov dword ptr [ebx + 0x744], edx */ W32((u32)(r_ebx+0x744u), r_edx);
L_004b42da:; BB(0x004b42da);
    /* 004b42da: fld dword ptr [ebx + 0x750] */ FPUSH(R_F32((u32)(r_ebx+0x750u)));
    /* 004b42e0: fchs  */ ST(0) = -ST(0);
    /* 004b42e2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004b42e4: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004b42e8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004b42ed: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b42f2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004b42f6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004b42fa: fistp dword ptr [ebx + 0x64] */ W32((u32)(r_ebx+0x64u), (u32)fx_int32(ST(0))); FPOP();
    /* 004b42fd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004b4301: mov eax, dword ptr [ebx + 0x734] */ r_eax = R32((u32)(r_ebx+0x734u));
    /* 004b4307: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4309: jne 0x4b433a */ if (!fZ) goto L_004b433a;
L_004b430b:; BB(0x004b430b);
    /* 004b430b: mov eax, dword ptr [ebx + 0x744] */ r_eax = R32((u32)(r_ebx+0x744u));
    /* 004b4311: cmp eax, 0x2200 */ {  u32 a = r_eax; u32 b = 0x2200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b4316: jl 0x4b433a */ if ((fS!=fO)) goto L_004b433a;
L_004b4318:; BB(0x004b4318);
    /* 004b4318: mov dword ptr [ebx + 0x734], 1 */ W32((u32)(r_ebx+0x734u), 0x1u);
    /* 004b4322: lea edx, [ebx + 0x514] */ r_edx = (u32)(r_ebx+0x514u);
    /* 004b4328: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b432a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b432b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b432c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b432d: push 0x3ed */ { u32 v = 0x3edu; r_esp -= 4; W32(r_esp, v); }
    /* 004b4332: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b4337u); f_00814298();
    /* 004b4337: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b433a:; BB(0x004b433a);
    /* 004b433a: fld dword ptr [ebx + 0x6f8] */ FPUSH(R_F32((u32)(r_ebx+0x6f8u)));
    /* 004b4340: fcomp dword ptr [0xa47a94] */ fx_compare(ST(0), R_F32((u32)(0xa47a94u))); FPOP();
    /* 004b4346: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b4348: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b4349: jae 0x4b43d5 */ if (!fC) goto L_004b43d5;
L_004b434f:; BB(0x004b434f);
    /* 004b434f: push dword ptr [ebx + 0x6c8] */ { u32 v = R32((u32)(r_ebx+0x6c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b4355: mov dword ptr [ebx + 0x730], 1 */ W32((u32)(r_ebx+0x730u), 0x1u);
    /* 004b435f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b4361: call 0x4b1e58 */ r_esp -= 4; W32(r_esp, 0x4b4366u); f_004b1e58();
    /* 004b4366: mov eax, dword ptr [0xa47a94] */ r_eax = R32((u32)(0xa47a94u));
    /* 004b436b: mov dword ptr [ebx + 0x758], 0 */ W32((u32)(r_ebx+0x758u), 0x0u);
    /* 004b4375: mov dword ptr [ebx + 0x6f8], eax */ W32((u32)(r_ebx+0x6f8u), r_eax);
    /* 004b437b: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b4381: mov edx, 1 */ r_edx = 0x1u;
    /* 004b4386: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 004b438d: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b4390: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b4395: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b439b: jmp 0x4b43d5 */ goto L_004b43d5;
L_004b439d:; BB(0x004b439d);
    /* 004b439d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b43a0: jne 0x4b43d5 */ if (!fZ) goto L_004b43d5;
L_004b43a2:; BB(0x004b43a2);
    /* 004b43a2: fld dword ptr [0x906e50] */ FPUSH(R_F32((u32)(0x906e50u)));
    /* 004b43a8: fadd dword ptr [ebx + 0x6f8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x6f8u));
    /* 004b43ae: fcom dword ptr [0x906e60] */ fx_compare(ST(0), R_F32((u32)(0x906e60u))); 
    /* 004b43b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b43b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b43b7: jb 0x4b43cf */ if (fC) goto L_004b43cf;
L_004b43b9:; BB(0x004b43b9);
    /* 004b43b9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b43bb: mov dword ptr [ebx + 0x730], 2 */ W32((u32)(r_ebx+0x730u), 0x2u);
    /* 004b43c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b43c7: mov dword ptr [ebx + 0x6f8], eax */ W32((u32)(r_ebx+0x6f8u), r_eax);
    /* 004b43cd: jmp 0x4b43d5 */ goto L_004b43d5;
L_004b43cf:; BB(0x004b43cf);
    /* 004b43cf: fstp dword ptr [ebx + 0x6f8] */ W_F32((u32)(r_ebx+0x6f8u), ST(0)); FPOP();
L_004b43d5:; BB(0x004b43d5);
    /* 004b43d5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b43d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b43d9: ret 8 */ FN_RET(0x004b41ac); r_esp += 12; return;
L_004b43dc:; BB(0x004b43dc);
    /* 004b43dc: mov eax, dword ptr [ebx + 0x730] */ r_eax = R32((u32)(r_ebx+0x730u));
    /* 004b43e2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b43e5: jne 0x4b43d5 */ if (!fZ) goto L_004b43d5;
L_004b43e7:; BB(0x004b43e7);
    /* 004b43e7: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b43ed: mov edx, dword ptr [edx*4 + 0x9abc68] */ r_edx = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b43f4: mov eax, dword ptr [ebx + 0x6bc] */ r_eax = R32((u32)(r_ebx+0x6bcu));
    /* 004b43fa: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b43fd: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b4403: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b4407: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b440a: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b440d: ja 0x4b4521 */ if ((!fC&&!fZ)) goto L_004b4521;
L_004b4413:; BB(0x004b4413);
    /* 004b4413: mov ecx, dword ptr [ecx*4 + 0x9052a0] */ r_ecx = R32((u32)(r_ecx*4+0x9052a0u));
    /* 004b441a: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b4521:; BB(0x004b4521);
    /* 004b4521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4522: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b4524: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4529u); f_004b5150();
    /* 004b4529: jmp 0x4b43d5 */ goto L_004b43d5;
L_004b452e:; BB(0x004b452e);
    /* 004b452e: mov eax, dword ptr [ebx + 0x730] */ r_eax = R32((u32)(r_ebx+0x730u));
    /* 004b4534: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4537: jne 0x4b43d5 */ if (!fZ) goto L_004b43d5;
L_004b453d:; BB(0x004b453d);
    /* 004b453d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b453f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4541: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b4543: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b4545: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b454bu); call_ind(t); }
    /* 004b454b: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b454f: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b4555: mov byte ptr [esp], 0xa9 */ W8((u32)(r_esp), 0xa9u);
    /* 004b4559: mov edx, 2 */ r_edx = 0x2u;
    /* 004b455e: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 004b4562: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004b4567: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004b456c: mov word ptr [esp + 6], bx */ W16((u32)(r_esp+0x6u), (u16)r_ebx);
    /* 004b4571: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004b4574: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b4579u); f_008003e0();
    /* 004b4579: jmp 0x4b43d5 */ goto L_004b43d5;
L_004b457e:; BB(0x004b457e);
    /* 004b457e: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 004b4582: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b4584: mov esi, eax */ r_esi = r_eax;
L_004b4586:; BB(0x004b4586);
    /* 004b4586: mov ecx, dword ptr [ebx + esi*4 + 0x6e4] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x6e4u));
    /* 004b458d: call 0x4bd1e8 */ r_esp -= 4; W32(r_esp, 0x4b4592u); f_004bd1e8();
    /* 004b4592: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b4595: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b4598: jl 0x4b4586 */ if ((fS!=fO)) goto L_004b4586;
L_004b459a:; BB(0x004b459a);
    /* 004b459a: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 004b459e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b45a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b45a2: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x4b45a8u); call_ind(t); }
    /* 004b45a8: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 004b45ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b45ae: mov esi, eax */ r_esi = r_eax;
L_004b45b0:; BB(0x004b45b0);
    /* 004b45b0: mov ecx, dword ptr [ebx + esi*4 + 0x600] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x600u));
    /* 004b45b7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b45b9: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4b45bfu); call_ind(t); }
    /* 004b45bf: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b45c2: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b45c5: jl 0x4b45b0 */ if ((fS!=fO)) goto L_004b45b0;
L_004b45c7:; BB(0x004b45c7);
    /* 004b45c7: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 004b45cb: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 004b45cf: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b45d5: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b45d8: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b45dd: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b45e3: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004b45e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b45e8: mov dword ptr [ebx + 0x6c8], edx */ W32((u32)(r_ebx+0x6c8u), r_edx);
    /* 004b45ee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b45f0: call 0x4b416c */ r_esp -= 4; W32(r_esp, 0x4b45f5u); f_004b416c();
    /* 004b45f5: mov eax, dword ptr [ebx + 0x6c8] */ r_eax = R32((u32)(r_ebx+0x6c8u));
    /* 004b45fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b45fd: jne 0x4b461c */ if (!fZ) goto L_004b461c;
L_004b45ff:; BB(0x004b45ff);
    /* 004b45ff: mov dword ptr [ebx + 0x750], 0xbf800000 */ W32((u32)(r_ebx+0x750u), 0xbf800000u);
    /* 004b4609: mov edx, 0xbf800000 */ r_edx = 0xbf800000u;
    /* 004b460e: mov eax, 9 */ r_eax = 0x9u;
    /* 004b4613: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004b461a: jmp 0x4b4637 */ goto L_004b4637;
L_004b461c:; BB(0x004b461c);
    /* 004b461c: mov dword ptr [ebx + 0x750], 0x3f800000 */ W32((u32)(r_ebx+0x750u), 0x3f800000u);
    /* 004b4626: mov eax, 0xa */ r_eax = 0xau;
    /* 004b462b: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004b4632: mov edx, 0xbf800000 */ r_edx = 0xbf800000u;
L_004b4637:; BB(0x004b4637);
    /* 004b4637: mov dword ptr [ebx + 0x74c], 0 */ W32((u32)(r_ebx+0x74cu), 0x0u);
    /* 004b4641: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b4643: mov dword ptr [ebx + 0x730], eax */ W32((u32)(r_ebx+0x730u), r_eax);
    /* 004b4649: mov dword ptr [ebx + 0x734], eax */ W32((u32)(r_ebx+0x734u), r_eax);
    /* 004b464f: mov dword ptr [ebx + 0x754], 0 */ W32((u32)(r_ebx+0x754u), 0x0u);
    /* 004b4659: mov dword ptr [ebx + 0x758], edx */ W32((u32)(r_ebx+0x758u), r_edx);
    /* 004b465f: mov dword ptr [ebx + 0x744], 0x500 */ W32((u32)(r_ebx+0x744u), 0x500u);
    /* 004b4669: call 0x4bff28 */ r_esp -= 4; W32(r_esp, 0x4b466eu); f_004bff28();
    /* 004b466e: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b4674: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b4679: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b467f: jmp 0x4b43d5 */ goto L_004b43d5;
}

void f_004b4341(void)
{
    FN_ENTER(0x004b4341);
    /* 004b4341: sbb eax, 0xa47a94 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xa47a94u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004b4346: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b4348: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b4349: jae 0x4b43d5 */ if (!fC) goto L_004b43d5;
L_004b434f:; BB(0x004b434f);
    /* 004b434f: push dword ptr [ebx + 0x6c8] */ { u32 v = R32((u32)(r_ebx+0x6c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b4355: mov dword ptr [ebx + 0x730], 1 */ W32((u32)(r_ebx+0x730u), 0x1u);
    /* 004b435f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b4361: call 0x4b1e58 */ r_esp -= 4; W32(r_esp, 0x4b4366u); f_004b1e58();
    /* 004b4366: mov eax, dword ptr [0xa47a94] */ r_eax = R32((u32)(0xa47a94u));
    /* 004b436b: mov dword ptr [ebx + 0x758], 0 */ W32((u32)(r_ebx+0x758u), 0x0u);
    /* 004b4375: mov dword ptr [ebx + 0x6f8], eax */ W32((u32)(r_ebx+0x6f8u), r_eax);
    /* 004b437b: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b4381: mov edx, 1 */ r_edx = 0x1u;
    /* 004b4386: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 004b438d: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b4390: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b4395: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b439b: jmp 0x4b43d5 */ goto L_004b43d5;
L_004b43d5:; BB(0x004b43d5);
    /* 004b43d5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b43d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b43d9: ret 8 */ FN_RET(0x004b4341); r_esp += 12; return;
}

void f_004b4345(void)
{
    FN_ENTER(0x004b4345);
    goto L_004b4345;
L_004b42e7:; BB(0x004b42e7);
    /* 004b42e7: or byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 004b42e9: mov bh, 0x44 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x44u) & 0xffu) << 8);
    /* 004b42eb: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004b42ed: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b42f2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004b42f6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004b42fa: fistp dword ptr [ebx + 0x64] */ W32((u32)(r_ebx+0x64u), (u32)fx_int32(ST(0))); FPOP();
    /* 004b42fd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004b4301: mov eax, dword ptr [ebx + 0x734] */ r_eax = R32((u32)(r_ebx+0x734u));
    /* 004b4307: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4309: jne 0x4b433a */ if (!fZ) goto L_004b433a;
L_004b430b:; BB(0x004b430b);
    /* 004b430b: mov eax, dword ptr [ebx + 0x744] */ r_eax = R32((u32)(r_ebx+0x744u));
    /* 004b4311: cmp eax, 0x2200 */ {  u32 a = r_eax; u32 b = 0x2200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b4316: jl 0x4b433a */ if ((fS!=fO)) goto L_004b433a;
L_004b4318:; BB(0x004b4318);
    /* 004b4318: mov dword ptr [ebx + 0x734], 1 */ W32((u32)(r_ebx+0x734u), 0x1u);
    /* 004b4322: lea edx, [ebx + 0x514] */ r_edx = (u32)(r_ebx+0x514u);
    /* 004b4328: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b432a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b432b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b432c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b432d: push 0x3ed */ { u32 v = 0x3edu; r_esp -= 4; W32(r_esp, v); }
    /* 004b4332: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b4337u); f_00814298();
    /* 004b4337: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b433a:; BB(0x004b433a);
    /* 004b433a: fld dword ptr [ebx + 0x6f8] */ FPUSH(R_F32((u32)(r_ebx+0x6f8u)));
    /* 004b4340: fcomp dword ptr [0xa47a94] */ fx_compare(ST(0), R_F32((u32)(0xa47a94u))); FPOP();
L_004b4345:; BB(0x004b4345);
    /* 004b4345: add bh, bl */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); fC = (r < a); }
    /* 004b4346: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b4347: loopne 0x4b42e7 */ r_ecx--; if (r_ecx && !fZ) goto L_004b42e7;
    /* 004b4348: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b4349: jae 0x4b43d5 */ if (!fC) goto L_004b43d5;
L_004b434f:; BB(0x004b434f);
    /* 004b434f: push dword ptr [ebx + 0x6c8] */ { u32 v = R32((u32)(r_ebx+0x6c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b4355: mov dword ptr [ebx + 0x730], 1 */ W32((u32)(r_ebx+0x730u), 0x1u);
    /* 004b435f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b4361: call 0x4b1e58 */ r_esp -= 4; W32(r_esp, 0x4b4366u); f_004b1e58();
    /* 004b4366: mov eax, dword ptr [0xa47a94] */ r_eax = R32((u32)(0xa47a94u));
    /* 004b436b: mov dword ptr [ebx + 0x758], 0 */ W32((u32)(r_ebx+0x758u), 0x0u);
    /* 004b4375: mov dword ptr [ebx + 0x6f8], eax */ W32((u32)(r_ebx+0x6f8u), r_eax);
    /* 004b437b: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b4381: mov edx, 1 */ r_edx = 0x1u;
    /* 004b4386: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 004b438d: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b4390: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b4395: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b439b: jmp 0x4b43d5 */ goto L_004b43d5;
L_004b43d5:; BB(0x004b43d5);
    /* 004b43d5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b43d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b43d9: ret 8 */ FN_RET(0x004b4345); r_esp += 12; return;
}

void f_004b441c(void)
{
    FN_ENTER(0x004b441c);
    goto L_004b441c;
L_004b43d5:; BB(0x004b43d5);
    /* 004b43d5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b43d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b43d9: ret 8 */ FN_RET(0x004b441c); r_esp += 12; return;
L_004b43fa:; BB(0x004b43fa);
    /* 004b43fa: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b43fd: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b4403: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b4407: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b440a: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b440d: ja 0x4b4521 */ if ((!fC&&!fZ)) goto L_004b4521;
L_004b4413:; BB(0x004b4413);
    /* 004b4413: mov ecx, dword ptr [ecx*4 + 0x9052a0] */ r_ecx = R32((u32)(r_ecx*4+0x9052a0u));
    /* 004b441a: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b441c:; BB(0x004b441c);
    /* 004b441c: mov eax, 1 */ r_eax = 0x1u;
    /* 004b4421: jmp 0x4b43fa */ goto L_004b43fa;
L_004b4521:; BB(0x004b4521);
    /* 004b4521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4522: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b4524: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4529u); f_004b5150();
    /* 004b4529: jmp 0x4b43d5 */ goto L_004b43d5;
}

void f_004b4423(void)
{
    FN_ENTER(0x004b4423);
    goto L_004b4423;
L_004b43d5:; BB(0x004b43d5);
    /* 004b43d5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b43d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b43d9: ret 8 */ FN_RET(0x004b4423); r_esp += 12; return;
L_004b4423:; BB(0x004b4423);
    /* 004b4423: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b4429: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b442b: jne 0x4b4437 */ if (!fZ) goto L_004b4437;
L_004b442d:; BB(0x004b442d);
    /* 004b442d: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004b4432: jmp 0x4b4521 */ goto L_004b4521;
L_004b4437:; BB(0x004b4437);
    /* 004b4437: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004b443c: jmp 0x4b4521 */ goto L_004b4521;
L_004b4521:; BB(0x004b4521);
    /* 004b4521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4522: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b4524: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4529u); f_004b5150();
    /* 004b4529: jmp 0x4b43d5 */ goto L_004b43d5;
}

void f_004b4441(void)
{
    FN_ENTER(0x004b4441);
    goto L_004b4441;
L_004b43d5:; BB(0x004b43d5);
    /* 004b43d5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b43d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b43d9: ret 8 */ FN_RET(0x004b4441); r_esp += 12; return;
L_004b4441:; BB(0x004b4441);
    /* 004b4441: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b4447: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4449: jne 0x4b4455 */ if (!fZ) goto L_004b4455;
L_004b444b:; BB(0x004b444b);
    /* 004b444b: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004b4450: jmp 0x4b4521 */ goto L_004b4521;
L_004b4455:; BB(0x004b4455);
    /* 004b4455: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004b445a: jmp 0x4b4521 */ goto L_004b4521;
L_004b4521:; BB(0x004b4521);
    /* 004b4521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4522: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b4524: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4529u); f_004b5150();
    /* 004b4529: jmp 0x4b43d5 */ goto L_004b43d5;
}

void f_004b445f(void)
{
    FN_ENTER(0x004b445f);
    goto L_004b445f;
L_004b43d5:; BB(0x004b43d5);
    /* 004b43d5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b43d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b43d9: ret 8 */ FN_RET(0x004b445f); r_esp += 12; return;
L_004b445f:; BB(0x004b445f);
    /* 004b445f: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b4465: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4467: jne 0x4b4473 */ if (!fZ) goto L_004b4473;
L_004b4469:; BB(0x004b4469);
    /* 004b4469: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004b446e: jmp 0x4b4521 */ goto L_004b4521;
L_004b4473:; BB(0x004b4473);
    /* 004b4473: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004b4478: jmp 0x4b4521 */ goto L_004b4521;
L_004b4521:; BB(0x004b4521);
    /* 004b4521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4522: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b4524: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4529u); f_004b5150();
    /* 004b4529: jmp 0x4b43d5 */ goto L_004b43d5;
}

void f_004b447d(void)
{
    FN_ENTER(0x004b447d);
    goto L_004b447d;
L_004b43d5:; BB(0x004b43d5);
    /* 004b43d5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b43d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b43d9: ret 8 */ FN_RET(0x004b447d); r_esp += 12; return;
L_004b447d:; BB(0x004b447d);
    /* 004b447d: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b4483: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4485: jne 0x4b4491 */ if (!fZ) goto L_004b4491;
L_004b4487:; BB(0x004b4487);
    /* 004b4487: mov eax, 0xf */ r_eax = 0xfu;
    /* 004b448c: jmp 0x4b4521 */ goto L_004b4521;
L_004b4491:; BB(0x004b4491);
    /* 004b4491: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004b4496: jmp 0x4b4521 */ goto L_004b4521;
L_004b4521:; BB(0x004b4521);
    /* 004b4521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4522: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b4524: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4529u); f_004b5150();
    /* 004b4529: jmp 0x4b43d5 */ goto L_004b43d5;
}

void f_004b449b(void)
{
    FN_ENTER(0x004b449b);
    goto L_004b449b;
L_004b43d5:; BB(0x004b43d5);
    /* 004b43d5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b43d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b43d9: ret 8 */ FN_RET(0x004b449b); r_esp += 12; return;
L_004b449b:; BB(0x004b449b);
    /* 004b449b: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b44a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b44a3: jne 0x4b44ac */ if (!fZ) goto L_004b44ac;
L_004b44a5:; BB(0x004b44a5);
    /* 004b44a5: mov eax, 4 */ r_eax = 0x4u;
    /* 004b44aa: jmp 0x4b4521 */ goto L_004b4521;
L_004b44ac:; BB(0x004b44ac);
    /* 004b44ac: mov eax, 0xa */ r_eax = 0xau;
    /* 004b44b1: jmp 0x4b4521 */ goto L_004b4521;
L_004b4521:; BB(0x004b4521);
    /* 004b4521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4522: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b4524: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4529u); f_004b5150();
    /* 004b4529: jmp 0x4b43d5 */ goto L_004b43d5;
}

void f_004b44b3(void)
{
    FN_ENTER(0x004b44b3);
    goto L_004b44b3;
L_004b43d5:; BB(0x004b43d5);
    /* 004b43d5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b43d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b43d9: ret 8 */ FN_RET(0x004b44b3); r_esp += 12; return;
L_004b44b3:; BB(0x004b44b3);
    /* 004b44b3: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b44b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b44bb: jne 0x4b44c4 */ if (!fZ) goto L_004b44c4;
L_004b44bd:; BB(0x004b44bd);
    /* 004b44bd: mov eax, 3 */ r_eax = 0x3u;
    /* 004b44c2: jmp 0x4b4521 */ goto L_004b4521;
L_004b44c4:; BB(0x004b44c4);
    /* 004b44c4: mov eax, 0xb */ r_eax = 0xbu;
    /* 004b44c9: jmp 0x4b4521 */ goto L_004b4521;
L_004b4521:; BB(0x004b4521);
    /* 004b4521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4522: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b4524: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4529u); f_004b5150();
    /* 004b4529: jmp 0x4b43d5 */ goto L_004b43d5;
}

void f_004b44cb(void)
{
    FN_ENTER(0x004b44cb);
    goto L_004b44cb;
L_004b43d5:; BB(0x004b43d5);
    /* 004b43d5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b43d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b43d9: ret 8 */ FN_RET(0x004b44cb); r_esp += 12; return;
L_004b44cb:; BB(0x004b44cb);
    /* 004b44cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b44cd: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b44d2u); f_00520bf4();
    /* 004b44d2: fcomp dword ptr [0x906e60] */ fx_compare(ST(0), R_F32((u32)(0x906e60u))); FPOP();
    /* 004b44d8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b44da: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b44db: jbe 0x4b44e4 */ if ((fC||fZ)) goto L_004b44e4;
L_004b44dd:; BB(0x004b44dd);
    /* 004b44dd: mov eax, 0xc */ r_eax = 0xcu;
    /* 004b44e2: jmp 0x4b4521 */ goto L_004b4521;
L_004b44e4:; BB(0x004b44e4);
    /* 004b44e4: mov eax, 0xe */ r_eax = 0xeu;
    /* 004b44e9: jmp 0x4b4521 */ goto L_004b4521;
L_004b4521:; BB(0x004b4521);
    /* 004b4521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4522: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b4524: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4529u); f_004b5150();
    /* 004b4529: jmp 0x4b43d5 */ goto L_004b43d5;
}

void f_004b44eb(void)
{
    FN_ENTER(0x004b44eb);
    goto L_004b44eb;
L_004b43d5:; BB(0x004b43d5);
    /* 004b43d5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b43d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b43d9: ret 8 */ FN_RET(0x004b44eb); r_esp += 12; return;
L_004b44eb:; BB(0x004b44eb);
    /* 004b44eb: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b44f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b44f3: jne 0x4b44fc */ if (!fZ) goto L_004b44fc;
L_004b44f5:; BB(0x004b44f5);
    /* 004b44f5: mov eax, 5 */ r_eax = 0x5u;
    /* 004b44fa: jmp 0x4b4521 */ goto L_004b4521;
L_004b44fc:; BB(0x004b44fc);
    /* 004b44fc: mov eax, 9 */ r_eax = 0x9u;
    /* 004b4501: jmp 0x4b4521 */ goto L_004b4521;
L_004b4521:; BB(0x004b4521);
    /* 004b4521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4522: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b4524: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4529u); f_004b5150();
    /* 004b4529: jmp 0x4b43d5 */ goto L_004b43d5;
}

void f_004b4503(void)
{
    FN_ENTER(0x004b4503);
    goto L_004b4503;
L_004b43d5:; BB(0x004b43d5);
    /* 004b43d5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b43d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b43d9: ret 8 */ FN_RET(0x004b4503); r_esp += 12; return;
L_004b4503:; BB(0x004b4503);
    /* 004b4503: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b4505: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b450au); f_00520bf4();
    /* 004b450a: fcomp dword ptr [0x906e60] */ fx_compare(ST(0), R_F32((u32)(0x906e60u))); FPOP();
    /* 004b4510: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b4512: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b4513: jbe 0x4b451c */ if ((fC||fZ)) goto L_004b451c;
L_004b4515:; BB(0x004b4515);
    /* 004b4515: mov eax, 8 */ r_eax = 0x8u;
    /* 004b451a: jmp 0x4b4521 */ goto L_004b4521;
L_004b451c:; BB(0x004b451c);
    /* 004b451c: mov eax, 6 */ r_eax = 0x6u;
L_004b4521:; BB(0x004b4521);
    /* 004b4521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4522: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b4524: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4529u); f_004b5150();
    /* 004b4529: jmp 0x4b43d5 */ goto L_004b43d5;
}

void f_004b4521(void)
{
    FN_ENTER(0x004b4521);
    goto L_004b4521;
L_004b43d5:; BB(0x004b43d5);
    /* 004b43d5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b43d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b43d9: ret 8 */ FN_RET(0x004b4521); r_esp += 12; return;
L_004b4521:; BB(0x004b4521);
    /* 004b4521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4522: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b4524: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4529u); f_004b5150();
    /* 004b4529: jmp 0x4b43d5 */ goto L_004b43d5;
}

void f_004b4684(void) /* sub_4B4684 */
{
    FN_ENTER(0x004b4684);
    /* 004b4684: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4685: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b4688: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004b468a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b468e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4691: je 0x4b4888 */ if (fZ) goto L_004b4888;
L_004b4697:; BB(0x004b4697);
    /* 004b4697: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b469a: je 0x4b4837 */ if (fZ) goto L_004b4837;
L_004b46a0:; BB(0x004b46a0);
    /* 004b46a0: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b46a3: je 0x4b46e4 */ if (fZ) goto L_004b46e4;
L_004b46a5:; BB(0x004b46a5);
    /* 004b46a5: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b46a8: je 0x4b46dd */ if (fZ) goto L_004b46dd;
L_004b46aa:; BB(0x004b46aa);
    /* 004b46aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b46ac: jne 0x4b46dd */ if (!fZ) goto L_004b46dd;
L_004b46ae:; BB(0x004b46ae);
    /* 004b46ae: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b46b0: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b46b5u); f_007aa094();
    /* 004b46b5: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b46ba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b46bc: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b46c1u); f_007aaa30();
    /* 004b46c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b46c3: je 0x4b46dd */ if (fZ) goto L_004b46dd;
L_004b46c5:; BB(0x004b46c5);
    /* 004b46c5: add ebx, 0x514 */ {  u32 a = r_ebx; u32 b = 0x514u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b46cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b46cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b46ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b46cf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b46d0: push 0x3ed */ { u32 v = 0x3edu; r_esp -= 4; W32(r_esp, v); }
    /* 004b46d5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b46dau); f_00814298();
    /* 004b46da: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b46dd:; BB(0x004b46dd);
    /* 004b46dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b46e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b46e1: ret 8 */ FN_RET(0x004b4684); r_esp += 12; return;
L_004b46e4:; BB(0x004b46e4);
    /* 004b46e4: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 004b46eb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b46ee: jne 0x4b46dd */ if (!fZ) goto L_004b46dd;
L_004b46f0:; BB(0x004b46f0);
    /* 004b46f0: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b46f6: mov edx, dword ptr [edx*4 + 0x9abc68] */ r_edx = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b46fd: mov eax, dword ptr [ebx + 0x6bc] */ r_eax = R32((u32)(r_ebx+0x6bcu));
    /* 004b4703: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b4706: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b470c: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b4710: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b4713: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b4716: ja 0x4b482a */ if ((!fC&&!fZ)) goto L_004b482a;
L_004b471c:; BB(0x004b471c);
    /* 004b471c: mov ecx, dword ptr [ecx*4 + 0x905340] */ r_ecx = R32((u32)(r_ecx*4+0x905340u));
    /* 004b4723: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b482a:; BB(0x004b482a);
    /* 004b482a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b482b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b482d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4832u); f_004b5150();
    /* 004b4832: jmp 0x4b46dd */ goto L_004b46dd;
L_004b4837:; BB(0x004b4837);
    /* 004b4837: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 004b483e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4841: jne 0x4b46dd */ if (!fZ) goto L_004b46dd;
L_004b4847:; BB(0x004b4847);
    /* 004b4847: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4849: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b484b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b484d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b484f: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b4855u); call_ind(t); }
    /* 004b4855: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b4859: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b485f: mov byte ptr [esp], 0xa9 */ W8((u32)(r_esp), 0xa9u);
    /* 004b4863: mov edx, 2 */ r_edx = 0x2u;
    /* 004b4868: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 004b486c: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004b4871: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004b4876: mov word ptr [esp + 6], bx */ W16((u32)(r_esp+0x6u), (u16)r_ebx);
    /* 004b487b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004b487e: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b4883u); f_008003e0();
    /* 004b4883: jmp 0x4b46dd */ goto L_004b46dd;
L_004b4888:; BB(0x004b4888);
    /* 004b4888: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b488e: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b4891: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b4896: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b489c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b489e: mov edx, 0xe */ r_edx = 0xeu;
    /* 004b48a3: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 004b48aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b48ac: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x4b48b2u); call_ind(t); }
    /* 004b48b2: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004b48b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b48b8: mov esi, eax */ r_esi = r_eax;
L_004b48ba:; BB(0x004b48ba);
    /* 004b48ba: mov ecx, dword ptr [ebx + esi*4 + 0x600] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x600u));
    /* 004b48c1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b48c3: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4b48c9u); call_ind(t); }
    /* 004b48c9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b48cc: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b48cf: jl 0x4b48ba */ if ((fS!=fO)) goto L_004b48ba;
L_004b48d1:; BB(0x004b48d1);
    /* 004b48d1: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 004b48d5: mov eax, 3 */ r_eax = 0x3u;
    /* 004b48da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b48db: mov dword ptr [ebx + 0x6c8], eax */ W32((u32)(r_ebx+0x6c8u), r_eax);
    /* 004b48e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b48e3: call 0x4b1e58 */ r_esp -= 4; W32(r_esp, 0x4b48e8u); f_004b1e58();
    /* 004b48e8: jmp 0x4b46dd */ goto L_004b46dd;
}

void f_004b4725(void)
{
    FN_ENTER(0x004b4725);
    goto L_004b4725;
L_004b46dd:; BB(0x004b46dd);
    /* 004b46dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b46e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b46e1: ret 8 */ FN_RET(0x004b4725); r_esp += 12; return;
L_004b4703:; BB(0x004b4703);
    /* 004b4703: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b4706: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b470c: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b4710: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b4713: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b4716: ja 0x4b482a */ if ((!fC&&!fZ)) goto L_004b482a;
L_004b471c:; BB(0x004b471c);
    /* 004b471c: mov ecx, dword ptr [ecx*4 + 0x905340] */ r_ecx = R32((u32)(r_ecx*4+0x905340u));
    /* 004b4723: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b4725:; BB(0x004b4725);
    /* 004b4725: mov eax, 1 */ r_eax = 0x1u;
    /* 004b472a: jmp 0x4b4703 */ goto L_004b4703;
L_004b482a:; BB(0x004b482a);
    /* 004b482a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b482b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b482d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4832u); f_004b5150();
    /* 004b4832: jmp 0x4b46dd */ goto L_004b46dd;
}

void f_004b472c(void)
{
    FN_ENTER(0x004b472c);
    goto L_004b472c;
L_004b46dd:; BB(0x004b46dd);
    /* 004b46dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b46e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b46e1: ret 8 */ FN_RET(0x004b472c); r_esp += 12; return;
L_004b472c:; BB(0x004b472c);
    /* 004b472c: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b4732: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4734: jne 0x4b4740 */ if (!fZ) goto L_004b4740;
L_004b4736:; BB(0x004b4736);
    /* 004b4736: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004b473b: jmp 0x4b482a */ goto L_004b482a;
L_004b4740:; BB(0x004b4740);
    /* 004b4740: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004b4745: jmp 0x4b482a */ goto L_004b482a;
L_004b482a:; BB(0x004b482a);
    /* 004b482a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b482b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b482d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4832u); f_004b5150();
    /* 004b4832: jmp 0x4b46dd */ goto L_004b46dd;
}

void f_004b474a(void)
{
    FN_ENTER(0x004b474a);
    goto L_004b474a;
L_004b46dd:; BB(0x004b46dd);
    /* 004b46dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b46e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b46e1: ret 8 */ FN_RET(0x004b474a); r_esp += 12; return;
L_004b474a:; BB(0x004b474a);
    /* 004b474a: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b4750: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4752: jne 0x4b475e */ if (!fZ) goto L_004b475e;
L_004b4754:; BB(0x004b4754);
    /* 004b4754: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004b4759: jmp 0x4b482a */ goto L_004b482a;
L_004b475e:; BB(0x004b475e);
    /* 004b475e: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004b4763: jmp 0x4b482a */ goto L_004b482a;
L_004b482a:; BB(0x004b482a);
    /* 004b482a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b482b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b482d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4832u); f_004b5150();
    /* 004b4832: jmp 0x4b46dd */ goto L_004b46dd;
}

void f_004b4768(void)
{
    FN_ENTER(0x004b4768);
    goto L_004b4768;
L_004b46dd:; BB(0x004b46dd);
    /* 004b46dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b46e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b46e1: ret 8 */ FN_RET(0x004b4768); r_esp += 12; return;
L_004b4768:; BB(0x004b4768);
    /* 004b4768: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b476e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4770: jne 0x4b477c */ if (!fZ) goto L_004b477c;
L_004b4772:; BB(0x004b4772);
    /* 004b4772: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004b4777: jmp 0x4b482a */ goto L_004b482a;
L_004b477c:; BB(0x004b477c);
    /* 004b477c: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004b4781: jmp 0x4b482a */ goto L_004b482a;
L_004b482a:; BB(0x004b482a);
    /* 004b482a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b482b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b482d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4832u); f_004b5150();
    /* 004b4832: jmp 0x4b46dd */ goto L_004b46dd;
}

void f_004b4786(void)
{
    FN_ENTER(0x004b4786);
    goto L_004b4786;
L_004b46dd:; BB(0x004b46dd);
    /* 004b46dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b46e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b46e1: ret 8 */ FN_RET(0x004b4786); r_esp += 12; return;
L_004b4786:; BB(0x004b4786);
    /* 004b4786: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b478c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b478e: jne 0x4b479a */ if (!fZ) goto L_004b479a;
L_004b4790:; BB(0x004b4790);
    /* 004b4790: mov eax, 0xf */ r_eax = 0xfu;
    /* 004b4795: jmp 0x4b482a */ goto L_004b482a;
L_004b479a:; BB(0x004b479a);
    /* 004b479a: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004b479f: jmp 0x4b482a */ goto L_004b482a;
L_004b482a:; BB(0x004b482a);
    /* 004b482a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b482b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b482d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4832u); f_004b5150();
    /* 004b4832: jmp 0x4b46dd */ goto L_004b46dd;
}

void f_004b47a4(void)
{
    FN_ENTER(0x004b47a4);
    goto L_004b47a4;
L_004b46dd:; BB(0x004b46dd);
    /* 004b46dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b46e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b46e1: ret 8 */ FN_RET(0x004b47a4); r_esp += 12; return;
L_004b47a4:; BB(0x004b47a4);
    /* 004b47a4: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b47aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b47ac: jne 0x4b47b5 */ if (!fZ) goto L_004b47b5;
L_004b47ae:; BB(0x004b47ae);
    /* 004b47ae: mov eax, 4 */ r_eax = 0x4u;
    /* 004b47b3: jmp 0x4b482a */ goto L_004b482a;
L_004b47b5:; BB(0x004b47b5);
    /* 004b47b5: mov eax, 0xa */ r_eax = 0xau;
    /* 004b47ba: jmp 0x4b482a */ goto L_004b482a;
L_004b482a:; BB(0x004b482a);
    /* 004b482a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b482b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b482d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4832u); f_004b5150();
    /* 004b4832: jmp 0x4b46dd */ goto L_004b46dd;
}

void f_004b47bc(void)
{
    FN_ENTER(0x004b47bc);
    goto L_004b47bc;
L_004b46dd:; BB(0x004b46dd);
    /* 004b46dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b46e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b46e1: ret 8 */ FN_RET(0x004b47bc); r_esp += 12; return;
L_004b47bc:; BB(0x004b47bc);
    /* 004b47bc: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b47c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b47c4: jne 0x4b47cd */ if (!fZ) goto L_004b47cd;
L_004b47c6:; BB(0x004b47c6);
    /* 004b47c6: mov eax, 3 */ r_eax = 0x3u;
    /* 004b47cb: jmp 0x4b482a */ goto L_004b482a;
L_004b47cd:; BB(0x004b47cd);
    /* 004b47cd: mov eax, 0xb */ r_eax = 0xbu;
    /* 004b47d2: jmp 0x4b482a */ goto L_004b482a;
L_004b482a:; BB(0x004b482a);
    /* 004b482a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b482b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b482d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4832u); f_004b5150();
    /* 004b4832: jmp 0x4b46dd */ goto L_004b46dd;
}

void f_004b47d4(void)
{
    FN_ENTER(0x004b47d4);
    goto L_004b47d4;
L_004b46dd:; BB(0x004b46dd);
    /* 004b46dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b46e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b46e1: ret 8 */ FN_RET(0x004b47d4); r_esp += 12; return;
L_004b47d4:; BB(0x004b47d4);
    /* 004b47d4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b47d6: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b47dbu); f_00520bf4();
    /* 004b47db: fcomp dword ptr [0x906e38] */ fx_compare(ST(0), R_F32((u32)(0x906e38u))); FPOP();
    /* 004b47e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b47e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b47e4: jbe 0x4b47ed */ if ((fC||fZ)) goto L_004b47ed;
L_004b47e6:; BB(0x004b47e6);
    /* 004b47e6: mov eax, 0xc */ r_eax = 0xcu;
    /* 004b47eb: jmp 0x4b482a */ goto L_004b482a;
L_004b47ed:; BB(0x004b47ed);
    /* 004b47ed: mov eax, 0xe */ r_eax = 0xeu;
    /* 004b47f2: jmp 0x4b482a */ goto L_004b482a;
L_004b482a:; BB(0x004b482a);
    /* 004b482a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b482b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b482d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4832u); f_004b5150();
    /* 004b4832: jmp 0x4b46dd */ goto L_004b46dd;
}

void f_004b47f4(void)
{
    FN_ENTER(0x004b47f4);
    goto L_004b47f4;
L_004b46dd:; BB(0x004b46dd);
    /* 004b46dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b46e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b46e1: ret 8 */ FN_RET(0x004b47f4); r_esp += 12; return;
L_004b47f4:; BB(0x004b47f4);
    /* 004b47f4: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b47fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b47fc: jne 0x4b4805 */ if (!fZ) goto L_004b4805;
L_004b47fe:; BB(0x004b47fe);
    /* 004b47fe: mov eax, 5 */ r_eax = 0x5u;
    /* 004b4803: jmp 0x4b482a */ goto L_004b482a;
L_004b4805:; BB(0x004b4805);
    /* 004b4805: mov eax, 9 */ r_eax = 0x9u;
    /* 004b480a: jmp 0x4b482a */ goto L_004b482a;
L_004b482a:; BB(0x004b482a);
    /* 004b482a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b482b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b482d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4832u); f_004b5150();
    /* 004b4832: jmp 0x4b46dd */ goto L_004b46dd;
}

void f_004b480c(void)
{
    FN_ENTER(0x004b480c);
    goto L_004b480c;
L_004b46dd:; BB(0x004b46dd);
    /* 004b46dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b46e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b46e1: ret 8 */ FN_RET(0x004b480c); r_esp += 12; return;
L_004b480c:; BB(0x004b480c);
    /* 004b480c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b480e: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b4813u); f_00520bf4();
    /* 004b4813: fcomp dword ptr [0x906e38] */ fx_compare(ST(0), R_F32((u32)(0x906e38u))); FPOP();
    /* 004b4819: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b481b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b481c: jbe 0x4b4825 */ if ((fC||fZ)) goto L_004b4825;
L_004b481e:; BB(0x004b481e);
    /* 004b481e: mov eax, 8 */ r_eax = 0x8u;
    /* 004b4823: jmp 0x4b482a */ goto L_004b482a;
L_004b4825:; BB(0x004b4825);
    /* 004b4825: mov eax, 6 */ r_eax = 0x6u;
L_004b482a:; BB(0x004b482a);
    /* 004b482a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b482b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b482d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4832u); f_004b5150();
    /* 004b4832: jmp 0x4b46dd */ goto L_004b46dd;
}

void f_004b482a(void)
{
    FN_ENTER(0x004b482a);
    goto L_004b482a;
L_004b46dd:; BB(0x004b46dd);
    /* 004b46dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b46e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b46e1: ret 8 */ FN_RET(0x004b482a); r_esp += 12; return;
L_004b482a:; BB(0x004b482a);
    /* 004b482a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b482b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b482d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4832u); f_004b5150();
    /* 004b4832: jmp 0x4b46dd */ goto L_004b46dd;
}

void f_004b48f0(void) /* sub_4B48F0 */
{
    FN_ENTER(0x004b48f0);
    /* 004b48f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b48f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b48f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b48f3: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b48f6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004b48f8: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 004b48fc: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b48ff: je 0x4b4dce */ if (fZ) goto L_004b4dce;
L_004b4905:; BB(0x004b4905);
    /* 004b4905: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4908: je 0x4b4d2b */ if (fZ) goto L_004b4d2b;
L_004b490e:; BB(0x004b490e);
    /* 004b490e: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4911: je 0x4b4bda */ if (fZ) goto L_004b4bda;
L_004b4917:; BB(0x004b4917);
    /* 004b4917: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b491a: je 0x4b4b9e */ if (fZ) goto L_004b4b9e;
L_004b4920:; BB(0x004b4920);
    /* 004b4920: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4922: je 0x4b49fe */ if (fZ) goto L_004b49fe;
L_004b4928:; BB(0x004b4928);
    /* 004b4928: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b492b: jne 0x4b49da */ if (!fZ) goto L_004b49da;
L_004b4931:; BB(0x004b4931);
    /* 004b4931: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 004b4937: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4939: je 0x4b49ce */ if (fZ) goto L_004b49ce;
L_004b493f:; BB(0x004b493f);
    /* 004b493f: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4942: je 0x4b4bcb */ if (fZ) goto L_004b4bcb;
L_004b4948:; BB(0x004b4948);
    /* 004b4948: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b494a: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x4b494fu); f_007751b0();
    /* 004b494f: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 004b4953: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 004b4957: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004b4959: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 004b495d: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 004b4962: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b4967: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b496c: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004b4970: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004b4974: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 004b4978: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 004b497c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b497e: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 004b4982: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x4b4987u); f_00520f68();
    /* 004b4987: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b4989: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b498b: jle 0x4b4b9e */ if ((fZ||fS!=fO)) goto L_004b4b9e;
L_004b4991:; BB(0x004b4991);
    /* 004b4991: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 004b4995: mov ebp, edi */ r_ebp = r_edi;
    /* 004b4997: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 004b499b: mov edi, eax */ r_edi = r_eax;
    /* 004b499d: mov ebx, esi */ r_ebx = r_esi;
L_004b499f:; BB(0x004b499f);
    /* 004b499f: mov esi, dword ptr [ebx*4 + 0xaad720] */ r_esi = R32((u32)(r_ebx*4+0xaad720u));
    /* 004b49a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b49a7: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x4b49acu); f_00520f3c();
    /* 004b49ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b49ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b49af: jne 0x4b4ba7 */ if (!fZ) goto L_004b4ba7;
L_004b49b5:; BB(0x004b49b5);
    /* 004b49b5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b49b8: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b49ba: jl 0x4b49be */ if ((fS!=fO)) goto L_004b49be;
L_004b49bc:; BB(0x004b49bc);
    /* 004b49bc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b49be:; BB(0x004b49be);
    /* 004b49be: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004b49c1: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b49c3: jl 0x4b499f */ if ((fS!=fO)) goto L_004b499f;
L_004b49c5:; BB(0x004b49c5);
    /* 004b49c5: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 004b49c9: jmp 0x4b4b9e */ goto L_004b4b9e;
L_004b49ce:; BB(0x004b49ce);
    /* 004b49ce: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b49d0: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x4b49d5u); f_00520f68();
    /* 004b49d5: jmp 0x4b4b9e */ goto L_004b4b9e;
L_004b49da:; BB(0x004b49da);
    /* 004b49da: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b49dd: jne 0x4b4b9e */ if (!fZ) goto L_004b4b9e;
L_004b49e3:; BB(0x004b49e3);
    /* 004b49e3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b49e5:; BB(0x004b49e5);
    /* 004b49e5: mov ecx, dword ptr [ebp + esi*4 + 0x6e4] */ r_ecx = R32((u32)(r_ebp+r_esi*4+0x6e4u));
    /* 004b49ec: call 0x4bd1e8 */ r_esp -= 4; W32(r_esp, 0x4b49f1u); f_004bd1e8();
    /* 004b49f1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b49f4: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b49f7: jl 0x4b49e5 */ if ((fS!=fO)) goto L_004b49e5;
L_004b49f9:; BB(0x004b49f9);
    /* 004b49f9: jmp 0x4b4b9e */ goto L_004b4b9e;
L_004b49fe:; BB(0x004b49fe);
    /* 004b49fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4a00: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b4a05u); f_007aa094();
    /* 004b4a05: mov eax, dword ptr [ebp + 0x730] */ r_eax = R32((u32)(r_ebp+0x730u));
    /* 004b4a0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4a0d: je 0x4b4b4d */ if (fZ) goto L_004b4b4d;
L_004b4a13:; BB(0x004b4a13);
    /* 004b4a13: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4a16: jne 0x4b4b13 */ if (!fZ) goto L_004b4b13;
L_004b4a1c:; BB(0x004b4a1c);
    /* 004b4a1c: mov eax, dword ptr [ebp + 0x734] */ r_eax = R32((u32)(r_ebp+0x734u));
    /* 004b4a22: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b4a25: cmp eax, dword ptr [ebp + 0x73c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x73cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b4a2b: mov dword ptr [ebp + 0x734], eax */ W32((u32)(r_ebp+0x734u), r_eax);
    /* 004b4a31: jl 0x4b4b9e */ if ((fS!=fO)) goto L_004b4b9e;
L_004b4a37:; BB(0x004b4a37);
    /* 004b4a37: mov eax, dword ptr [ebp + 0x738] */ r_eax = R32((u32)(r_ebp+0x738u));
    /* 004b4a3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4a3f: je 0x4b4a50 */ if (fZ) goto L_004b4a50;
L_004b4a41:; BB(0x004b4a41);
    /* 004b4a41: mov dword ptr [ebp + 0x730], 2 */ W32((u32)(r_ebp+0x730u), 0x2u);
    /* 004b4a4b: jmp 0x4b4b9e */ goto L_004b4b9e;
L_004b4a50:; BB(0x004b4a50);
    /* 004b4a50: mov dword ptr [ebp + 0x734], 0 */ W32((u32)(r_ebp+0x734u), 0x0u);
    /* 004b4a5a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4a5c: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x4b4a61u); f_00520f04();
    /* 004b4a61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4a63: je 0x4b4a81 */ if (fZ) goto L_004b4a81;
L_004b4a65:; BB(0x004b4a65);
    /* 004b4a65: mov esi, dword ptr [ebp + 0x398] */ r_esi = R32((u32)(r_ebp+0x398u));
    /* 004b4a6b: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 004b4a6e: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 004b4a71: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 004b4a74: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004b4a77: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004b4a7b: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 004b4a7f: jmp 0x4b4ada */ goto L_004b4ada;
L_004b4a81:; BB(0x004b4a81);
    /* 004b4a81: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4a83: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x4b4a88u); f_007751b0();
    /* 004b4a88: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 004b4a8c: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004b4a90: fmul dword ptr [0x906e34] */ ST(0) = ST(0) * R_F32((u32)(0x906e34u));
    /* 004b4a96: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 004b4a9a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4a9c: call 0x520c20 */ r_esp -= 4; W32(r_esp, 0x4b4aa1u); f_00520c20();
    /* 004b4aa1: mov esi, eax */ r_esi = r_eax;
    /* 004b4aa3: mov ecx, esi */ r_ecx = r_esi;
    /* 004b4aa5: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4b4aaau); f_0082dcbc();
    /* 004b4aaa: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 004b4aae: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b4ab1: mov ecx, esi */ r_ecx = r_esi;
    /* 004b4ab3: mov dword ptr [esp + 4], 0xbfeccccd */ W32((u32)(r_esp+0x4u), 0xbfeccccdu);
    /* 004b4abb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4b4ac0u); f_0082ddd8();
    /* 004b4ac0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004b4ac4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004b4ac6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004b4aca: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004b4acd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004b4ad0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4ad1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4ad2: call 0x782bb0 */ r_esp -= 4; W32(r_esp, 0x4b4ad7u); f_00782bb0();
    /* 004b4ad7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b4ada:; BB(0x004b4ada);
    /* 004b4ada: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b4adc:; BB(0x004b4adc);
    /* 004b4adc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004b4adf: push dword ptr [ebp + 0x740] */ { u32 v = R32((u32)(r_ebp+0x740u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b4ae5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4ae6: mov ecx, dword ptr [ebp + esi*4 + 0x6e4] */ r_ecx = R32((u32)(r_ebp+r_esi*4+0x6e4u));
    /* 004b4aed: call 0x4bd190 */ r_esp -= 4; W32(r_esp, 0x4b4af2u); f_004bd190();
    /* 004b4af2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b4af5: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b4af8: jl 0x4b4adc */ if ((fS!=fO)) goto L_004b4adc;
L_004b4afa:; BB(0x004b4afa);
    /* 004b4afa: mov dword ptr [ebp + 0x738], 1 */ W32((u32)(r_ebp+0x738u), 0x1u);
    /* 004b4b04: mov dword ptr [ebp + 0x734], 0 */ W32((u32)(r_ebp+0x734u), 0x0u);
    /* 004b4b0e: jmp 0x4b4b9e */ goto L_004b4b9e;
L_004b4b13:; BB(0x004b4b13);
    /* 004b4b13: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4b16: jne 0x4b4b9e */ if (!fZ) goto L_004b4b9e;
L_004b4b1c:; BB(0x004b4b1c);
    /* 004b4b1c: add dword ptr [ebp + 0x734], 1 */ { u32 ad = (u32)(r_ebp+0x734u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004b4b23: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b4b25:; BB(0x004b4b25);
    /* 004b4b25: mov ecx, dword ptr [ebp + esi*4 + 0x6e4] */ r_ecx = R32((u32)(r_ebp+r_esi*4+0x6e4u));
    /* 004b4b2c: call 0x4bd220 */ r_esp -= 4; W32(r_esp, 0x4b4b31u); f_004bd220();
    /* 004b4b31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4b33: je 0x4b4bb9 */ if (fZ) goto L_004b4bb9;
L_004b4b39:; BB(0x004b4b39);
    /* 004b4b39: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b4b3c: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b4b3f: jl 0x4b4b25 */ if ((fS!=fO)) goto L_004b4b25;
L_004b4b41:; BB(0x004b4b41);
    /* 004b4b41: mov dword ptr [ebp + 0x730], 3 */ W32((u32)(r_ebp+0x730u), 0x3u);
    /* 004b4b4b: jmp 0x4b4b9e */ goto L_004b4b9e;
L_004b4b4d:; BB(0x004b4b4d);
    /* 004b4b4d: mov eax, dword ptr [ebp + 0x734] */ r_eax = R32((u32)(r_ebp+0x734u));
    /* 004b4b53: mov edi, dword ptr [ebp + 0x6bc] */ r_edi = R32((u32)(r_ebp+0x6bcu));
    /* 004b4b59: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b4b5c: mov dword ptr [ebp + 0x734], eax */ W32((u32)(r_ebp+0x734u), r_eax);
    /* 004b4b62: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b4b68: mov esi, dword ptr [edx*4 + 0x9abc68] */ r_esi = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b4b6f: mov edx, dword ptr [esi + edi*8 + 4] */ r_edx = R32((u32)(r_esi+r_edi*8+0x4u));
    /* 004b4b73: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 004b4b76: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b4b78: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b4b7a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b4b7c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b4b7e: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004b4b80: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004b4b82: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b4b84: jle 0x4b4b9e */ if ((fZ||fS!=fO)) goto L_004b4b9e;
L_004b4b86:; BB(0x004b4b86);
    /* 004b4b86: mov dword ptr [ebp + 0x730], 1 */ W32((u32)(r_ebp+0x730u), 0x1u);
    /* 004b4b90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b4b92: mov dword ptr [ebp + 0x734], eax */ W32((u32)(r_ebp+0x734u), r_eax);
    /* 004b4b98: mov dword ptr [ebp + 0x738], eax */ W32((u32)(r_ebp+0x738u), r_eax);
L_004b4b9e:; BB(0x004b4b9e);
    /* 004b4b9e: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b4ba1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b4ba2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b4ba3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b4ba4: ret 8 */ FN_RET(0x004b48f0); r_esp += 12; return;
L_004b4ba7:; BB(0x004b4ba7);
    /* 004b4ba7: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 004b4bab: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 004b4baf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b4bb0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4bb2: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x4b4bb7u); f_00521388();
    /* 004b4bb7: jmp 0x4b4b9e */ goto L_004b4b9e;
L_004b4bb9:; BB(0x004b4bb9);
    /* 004b4bb9: mov eax, dword ptr [ebp + 0x734] */ r_eax = R32((u32)(r_ebp+0x734u));
    /* 004b4bbf: cmp eax, 0x258 */ {  u32 a = r_eax; u32 b = 0x258u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b4bc4: jle 0x4b4b9e */ if ((fZ||fS!=fO)) goto L_004b4b9e;
L_004b4bc6:; BB(0x004b4bc6);
    /* 004b4bc6: jmp 0x4b4b41 */ goto L_004b4b41;
L_004b4bcb:; BB(0x004b4bcb);
    /* 004b4bcb: push dword ptr [0xaad720] */ { u32 v = R32((u32)(0xaad720u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b4bd1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4bd3: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x4b4bd8u); f_00521388();
    /* 004b4bd8: jmp 0x4b4b9e */ goto L_004b4b9e;
L_004b4bda:; BB(0x004b4bda);
    /* 004b4bda: mov eax, dword ptr [ebp + 0x730] */ r_eax = R32((u32)(r_ebp+0x730u));
    /* 004b4be0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4be3: jne 0x4b4b9e */ if (!fZ) goto L_004b4b9e;
L_004b4be5:; BB(0x004b4be5);
    /* 004b4be5: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 004b4bea: mov eax, dword ptr [eax*4 + 0x9abc68] */ r_eax = R32((u32)(r_eax*4+0x9abc68u));
    /* 004b4bf1: mov edx, dword ptr [ebp + 0x6bc] */ r_edx = R32((u32)(r_ebp+0x6bcu));
    /* 004b4bf7: lea esi, [edx + 1] */ r_esi = (u32)(r_edx+0x1u);
    /* 004b4bfa: mov dword ptr [ebp + 0x6bc], esi */ W32((u32)(r_ebp+0x6bcu), r_esi);
    /* 004b4c00: mov edx, dword ptr [eax + edx*8 + 8] */ r_edx = R32((u32)(r_eax+r_edx*8+0x8u));
    /* 004b4c04: lea esi, [edx - 0x1e] */ r_esi = (u32)(r_edx+0xffffffe2u);
    /* 004b4c07: cmp esi, 0x27 */ {  u32 a = r_esi; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b4c0a: ja 0x4b4d1e */ if ((!fC&&!fZ)) goto L_004b4d1e;
L_004b4c10:; BB(0x004b4c10);
    /* 004b4c10: mov esi, dword ptr [esi*4 + 0x9053e0] */ r_esi = R32((u32)(r_esi*4+0x9053e0u));
    /* 004b4c17: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_004b4d1e:; BB(0x004b4d1e);
    /* 004b4d1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4d21: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4d26u); f_004b5150();
    /* 004b4d26: jmp 0x4b4b9e */ goto L_004b4b9e;
L_004b4d2b:; BB(0x004b4d2b);
    /* 004b4d2b: mov eax, dword ptr [ebp + 0x730] */ r_eax = R32((u32)(r_ebp+0x730u));
    /* 004b4d31: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4d34: jne 0x4b4b9e */ if (!fZ) goto L_004b4b9e;
L_004b4d3a:; BB(0x004b4d3a);
    /* 004b4d3a: mov eax, dword ptr [ebp + 0x6c8] */ r_eax = R32((u32)(r_ebp+0x6c8u));
    /* 004b4d40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4d42: jne 0x4b4d89 */ if (!fZ) goto L_004b4d89;
L_004b4d44:; BB(0x004b4d44);
    /* 004b4d44: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d46: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d48: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004b4d4b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4d4d: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b4d53u); call_ind(t); }
    /* 004b4d53: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004b4d57: mov ebp, dword ptr [ebp + 0x6bc] */ r_ebp = R32((u32)(r_ebp+0x6bcu));
    /* 004b4d5d: mov byte ptr [esp + 0x14], 0xa9 */ W8((u32)(r_esp+0x14u), 0xa9u);
    /* 004b4d62: mov edx, 0x15 */ r_edx = 0x15u;
    /* 004b4d67: mov byte ptr [esp + 0x15], 2 */ W8((u32)(r_esp+0x15u), 0x2u);
    /* 004b4d6c: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 004b4d71: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 004b4d76: mov word ptr [esp + 0x1a], bp */ W16((u32)(r_esp+0x1au), (u16)r_ebp);
    /* 004b4d7b: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 004b4d7f: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b4d84u); f_008003e0();
    /* 004b4d84: jmp 0x4b4b9e */ goto L_004b4b9e;
L_004b4d89:; BB(0x004b4d89);
    /* 004b4d89: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d8b: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d8d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004b4d90: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4d92: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b4d98u); call_ind(t); }
    /* 004b4d98: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004b4d9c: mov ebp, dword ptr [ebp + 0x6bc] */ r_ebp = R32((u32)(r_ebp+0x6bcu));
    /* 004b4da2: mov byte ptr [esp + 0xc], 0xa9 */ W8((u32)(r_esp+0xcu), 0xa9u);
    /* 004b4da7: mov edx, 0x16 */ r_edx = 0x16u;
    /* 004b4dac: mov byte ptr [esp + 0xd], 2 */ W8((u32)(r_esp+0xdu), 0x2u);
    /* 004b4db1: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 004b4db6: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 004b4dbb: mov word ptr [esp + 0x12], bp */ W16((u32)(r_esp+0x12u), (u16)r_ebp);
    /* 004b4dc0: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004b4dc4: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b4dc9u); f_008003e0();
    /* 004b4dc9: jmp 0x4b4b9e */ goto L_004b4b9e;
L_004b4dce:; BB(0x004b4dce);
    /* 004b4dce: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004b4dd1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4dd3: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x4b4dd9u); call_ind(t); }
    /* 004b4dd9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b4ddb:; BB(0x004b4ddb);
    /* 004b4ddb: mov ecx, dword ptr [ebp + esi*4 + 0x600] */ r_ecx = R32((u32)(r_ebp+r_esi*4+0x600u));
    /* 004b4de2: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b4de4: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x4b4deau); call_ind(t); }
    /* 004b4dea: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b4ded: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b4df0: jl 0x4b4ddb */ if ((fS!=fO)) goto L_004b4ddb;
L_004b4df2:; BB(0x004b4df2);
    /* 004b4df2: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 004b4df6: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
    /* 004b4dfa: mov eax, dword ptr [ebp + 0x630] */ r_eax = R32((u32)(r_ebp+0x630u));
    /* 004b4e00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b4e01: and eax, 0xfffffefb */ {  u32 a = r_eax; u32 b = 0xfffffefbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b4e06: mov dword ptr [ebp + 0x630], eax */ W32((u32)(r_ebp+0x630u), r_eax);
    /* 004b4e0c: mov dword ptr [ebp + 0x6c8], edx */ W32((u32)(r_ebp+0x6c8u), r_edx);
    /* 004b4e12: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4e14: call 0x4b416c */ r_esp -= 4; W32(r_esp, 0x4b4e19u); f_004b416c();
    /* 004b4e19: mov eax, dword ptr [ebp + 0x6c8] */ r_eax = R32((u32)(r_ebp+0x6c8u));
    /* 004b4e1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4e21: jne 0x4b4e31 */ if (!fZ) goto L_004b4e31;
L_004b4e23:; BB(0x004b4e23);
    /* 004b4e23: mov eax, 9 */ r_eax = 0x9u;
    /* 004b4e28: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004b4e2f: jmp 0x4b4e3d */ goto L_004b4e3d;
L_004b4e31:; BB(0x004b4e31);
    /* 004b4e31: mov eax, 0xa */ r_eax = 0xau;
    /* 004b4e36: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_004b4e3d:; BB(0x004b4e3d);
    /* 004b4e3d: mov dword ptr [ebp + 0x73c], 0xb4 */ W32((u32)(r_ebp+0x73cu), 0xb4u);
    /* 004b4e47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b4e49: mov dword ptr [ebp + 0x730], eax */ W32((u32)(r_ebp+0x730u), r_eax);
    /* 004b4e4f: mov dword ptr [ebp + 0x734], eax */ W32((u32)(r_ebp+0x734u), r_eax);
    /* 004b4e55: mov dword ptr [ebp + 0x740], 0x78 */ W32((u32)(r_ebp+0x740u), 0x78u);
    /* 004b4e5f: mov dword ptr [ebp + 0x738], eax */ W32((u32)(r_ebp+0x738u), r_eax);
    /* 004b4e65: jmp 0x4b4b9e */ goto L_004b4b9e;
}

void f_004b4c19(void)
{
    FN_ENTER(0x004b4c19);
    goto L_004b4c19;
L_004b4b9e:; BB(0x004b4b9e);
    /* 004b4b9e: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b4ba1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b4ba2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b4ba3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b4ba4: ret 8 */ FN_RET(0x004b4c19); r_esp += 12; return;
L_004b4bf7:; BB(0x004b4bf7);
    /* 004b4bf7: lea esi, [edx + 1] */ r_esi = (u32)(r_edx+0x1u);
    /* 004b4bfa: mov dword ptr [ebp + 0x6bc], esi */ W32((u32)(r_ebp+0x6bcu), r_esi);
    /* 004b4c00: mov edx, dword ptr [eax + edx*8 + 8] */ r_edx = R32((u32)(r_eax+r_edx*8+0x8u));
    /* 004b4c04: lea esi, [edx - 0x1e] */ r_esi = (u32)(r_edx+0xffffffe2u);
    /* 004b4c07: cmp esi, 0x27 */ {  u32 a = r_esi; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b4c0a: ja 0x4b4d1e */ if ((!fC&&!fZ)) goto L_004b4d1e;
L_004b4c10:; BB(0x004b4c10);
    /* 004b4c10: mov esi, dword ptr [esi*4 + 0x9053e0] */ r_esi = R32((u32)(r_esi*4+0x9053e0u));
    /* 004b4c17: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_004b4c19:; BB(0x004b4c19);
    /* 004b4c19: mov edx, 1 */ r_edx = 0x1u;
    /* 004b4c1e: jmp 0x4b4bf7 */ goto L_004b4bf7;
L_004b4d1e:; BB(0x004b4d1e);
    /* 004b4d1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4d21: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4d26u); f_004b5150();
    /* 004b4d26: jmp 0x4b4b9e */ goto L_004b4b9e;
}

void f_004b4c20(void)
{
    FN_ENTER(0x004b4c20);
    goto L_004b4c20;
L_004b4b9e:; BB(0x004b4b9e);
    /* 004b4b9e: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b4ba1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b4ba2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b4ba3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b4ba4: ret 8 */ FN_RET(0x004b4c20); r_esp += 12; return;
L_004b4c20:; BB(0x004b4c20);
    /* 004b4c20: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b4c26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4c28: jne 0x4b4c34 */ if (!fZ) goto L_004b4c34;
L_004b4c2a:; BB(0x004b4c2a);
    /* 004b4c2a: mov edx, 0x15 */ r_edx = 0x15u;
    /* 004b4c2f: jmp 0x4b4d1e */ goto L_004b4d1e;
L_004b4c34:; BB(0x004b4c34);
    /* 004b4c34: mov edx, 0x16 */ r_edx = 0x16u;
    /* 004b4c39: jmp 0x4b4d1e */ goto L_004b4d1e;
L_004b4d1e:; BB(0x004b4d1e);
    /* 004b4d1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4d21: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4d26u); f_004b5150();
    /* 004b4d26: jmp 0x4b4b9e */ goto L_004b4b9e;
}

void f_004b4c3e(void)
{
    FN_ENTER(0x004b4c3e);
    goto L_004b4c3e;
L_004b4b9e:; BB(0x004b4b9e);
    /* 004b4b9e: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b4ba1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b4ba2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b4ba3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b4ba4: ret 8 */ FN_RET(0x004b4c3e); r_esp += 12; return;
L_004b4c3e:; BB(0x004b4c3e);
    /* 004b4c3e: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b4c44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4c46: jne 0x4b4c52 */ if (!fZ) goto L_004b4c52;
L_004b4c48:; BB(0x004b4c48);
    /* 004b4c48: mov edx, 0x13 */ r_edx = 0x13u;
    /* 004b4c4d: jmp 0x4b4d1e */ goto L_004b4d1e;
L_004b4c52:; BB(0x004b4c52);
    /* 004b4c52: mov edx, 0x14 */ r_edx = 0x14u;
    /* 004b4c57: jmp 0x4b4d1e */ goto L_004b4d1e;
L_004b4d1e:; BB(0x004b4d1e);
    /* 004b4d1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4d21: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4d26u); f_004b5150();
    /* 004b4d26: jmp 0x4b4b9e */ goto L_004b4b9e;
}

void f_004b4c41(void)
{
    FN_ENTER(0x004b4c41);
    goto L_004b4c41;
L_004b4b9e:; BB(0x004b4b9e);
    /* 004b4b9e: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b4ba1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b4ba2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b4ba3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b4ba4: ret 8 */ FN_RET(0x004b4c41); r_esp += 12; return;
L_004b4c41:; BB(0x004b4c41);
    /* 004b4c41: push es */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 004b4c42: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004b4c44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4c46: jne 0x4b4c52 */ if (!fZ) goto L_004b4c52;
L_004b4c48:; BB(0x004b4c48);
    /* 004b4c48: mov edx, 0x13 */ r_edx = 0x13u;
    /* 004b4c4d: jmp 0x4b4d1e */ goto L_004b4d1e;
L_004b4c52:; BB(0x004b4c52);
    /* 004b4c52: mov edx, 0x14 */ r_edx = 0x14u;
    /* 004b4c57: jmp 0x4b4d1e */ goto L_004b4d1e;
L_004b4d1e:; BB(0x004b4d1e);
    /* 004b4d1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4d21: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4d26u); f_004b5150();
    /* 004b4d26: jmp 0x4b4b9e */ goto L_004b4b9e;
}

void f_004b4c5c(void)
{
    FN_ENTER(0x004b4c5c);
    goto L_004b4c5c;
L_004b4b9e:; BB(0x004b4b9e);
    /* 004b4b9e: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b4ba1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b4ba2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b4ba3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b4ba4: ret 8 */ FN_RET(0x004b4c5c); r_esp += 12; return;
L_004b4c5c:; BB(0x004b4c5c);
    /* 004b4c5c: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b4c62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4c64: jne 0x4b4c70 */ if (!fZ) goto L_004b4c70;
L_004b4c66:; BB(0x004b4c66);
    /* 004b4c66: mov edx, 0x11 */ r_edx = 0x11u;
    /* 004b4c6b: jmp 0x4b4d1e */ goto L_004b4d1e;
L_004b4c70:; BB(0x004b4c70);
    /* 004b4c70: mov edx, 0x12 */ r_edx = 0x12u;
    /* 004b4c75: jmp 0x4b4d1e */ goto L_004b4d1e;
L_004b4d1e:; BB(0x004b4d1e);
    /* 004b4d1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4d21: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4d26u); f_004b5150();
    /* 004b4d26: jmp 0x4b4b9e */ goto L_004b4b9e;
}

void f_004b4c7a(void)
{
    FN_ENTER(0x004b4c7a);
    goto L_004b4c7a;
L_004b4b9e:; BB(0x004b4b9e);
    /* 004b4b9e: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b4ba1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b4ba2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b4ba3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b4ba4: ret 8 */ FN_RET(0x004b4c7a); r_esp += 12; return;
L_004b4c7a:; BB(0x004b4c7a);
    /* 004b4c7a: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b4c80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4c82: jne 0x4b4c8e */ if (!fZ) goto L_004b4c8e;
L_004b4c84:; BB(0x004b4c84);
    /* 004b4c84: mov edx, 0xf */ r_edx = 0xfu;
    /* 004b4c89: jmp 0x4b4d1e */ goto L_004b4d1e;
L_004b4c8e:; BB(0x004b4c8e);
    /* 004b4c8e: mov edx, 0x10 */ r_edx = 0x10u;
    /* 004b4c93: jmp 0x4b4d1e */ goto L_004b4d1e;
L_004b4d1e:; BB(0x004b4d1e);
    /* 004b4d1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4d21: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4d26u); f_004b5150();
    /* 004b4d26: jmp 0x4b4b9e */ goto L_004b4b9e;
}

void f_004b4c98(void)
{
    FN_ENTER(0x004b4c98);
    goto L_004b4c98;
L_004b4b9e:; BB(0x004b4b9e);
    /* 004b4b9e: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b4ba1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b4ba2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b4ba3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b4ba4: ret 8 */ FN_RET(0x004b4c98); r_esp += 12; return;
L_004b4c98:; BB(0x004b4c98);
    /* 004b4c98: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b4c9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4ca0: jne 0x4b4ca9 */ if (!fZ) goto L_004b4ca9;
L_004b4ca2:; BB(0x004b4ca2);
    /* 004b4ca2: mov edx, 4 */ r_edx = 0x4u;
    /* 004b4ca7: jmp 0x4b4d1e */ goto L_004b4d1e;
L_004b4ca9:; BB(0x004b4ca9);
    /* 004b4ca9: mov edx, 0xa */ r_edx = 0xau;
    /* 004b4cae: jmp 0x4b4d1e */ goto L_004b4d1e;
L_004b4d1e:; BB(0x004b4d1e);
    /* 004b4d1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4d21: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4d26u); f_004b5150();
    /* 004b4d26: jmp 0x4b4b9e */ goto L_004b4b9e;
}

void f_004b4cb0(void)
{
    FN_ENTER(0x004b4cb0);
    goto L_004b4cb0;
L_004b4b9e:; BB(0x004b4b9e);
    /* 004b4b9e: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b4ba1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b4ba2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b4ba3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b4ba4: ret 8 */ FN_RET(0x004b4cb0); r_esp += 12; return;
L_004b4cb0:; BB(0x004b4cb0);
    /* 004b4cb0: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b4cb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4cb8: jne 0x4b4cc1 */ if (!fZ) goto L_004b4cc1;
L_004b4cba:; BB(0x004b4cba);
    /* 004b4cba: mov edx, 3 */ r_edx = 0x3u;
    /* 004b4cbf: jmp 0x4b4d1e */ goto L_004b4d1e;
L_004b4cc1:; BB(0x004b4cc1);
    /* 004b4cc1: mov edx, 0xb */ r_edx = 0xbu;
    /* 004b4cc6: jmp 0x4b4d1e */ goto L_004b4d1e;
L_004b4d1e:; BB(0x004b4d1e);
    /* 004b4d1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4d21: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4d26u); f_004b5150();
    /* 004b4d26: jmp 0x4b4b9e */ goto L_004b4b9e;
}

void f_004b4cc8(void)
{
    FN_ENTER(0x004b4cc8);
    goto L_004b4cc8;
L_004b4b9e:; BB(0x004b4b9e);
    /* 004b4b9e: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b4ba1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b4ba2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b4ba3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b4ba4: ret 8 */ FN_RET(0x004b4cc8); r_esp += 12; return;
L_004b4cc8:; BB(0x004b4cc8);
    /* 004b4cc8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4cca: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b4ccfu); f_00520bf4();
    /* 004b4ccf: fcomp dword ptr [0x906e2c] */ fx_compare(ST(0), R_F32((u32)(0x906e2cu))); FPOP();
    /* 004b4cd5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b4cd7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b4cd8: jbe 0x4b4ce1 */ if ((fC||fZ)) goto L_004b4ce1;
L_004b4cda:; BB(0x004b4cda);
    /* 004b4cda: mov edx, 0xc */ r_edx = 0xcu;
    /* 004b4cdf: jmp 0x4b4d1e */ goto L_004b4d1e;
L_004b4ce1:; BB(0x004b4ce1);
    /* 004b4ce1: mov edx, 0xe */ r_edx = 0xeu;
    /* 004b4ce6: jmp 0x4b4d1e */ goto L_004b4d1e;
L_004b4d1e:; BB(0x004b4d1e);
    /* 004b4d1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4d21: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4d26u); f_004b5150();
    /* 004b4d26: jmp 0x4b4b9e */ goto L_004b4b9e;
}

void f_004b4ce8(void)
{
    FN_ENTER(0x004b4ce8);
    goto L_004b4ce8;
L_004b4b9e:; BB(0x004b4b9e);
    /* 004b4b9e: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b4ba1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b4ba2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b4ba3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b4ba4: ret 8 */ FN_RET(0x004b4ce8); r_esp += 12; return;
L_004b4ce8:; BB(0x004b4ce8);
    /* 004b4ce8: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b4cee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4cf0: jne 0x4b4cf9 */ if (!fZ) goto L_004b4cf9;
L_004b4cf2:; BB(0x004b4cf2);
    /* 004b4cf2: mov edx, 5 */ r_edx = 0x5u;
    /* 004b4cf7: jmp 0x4b4d1e */ goto L_004b4d1e;
L_004b4cf9:; BB(0x004b4cf9);
    /* 004b4cf9: mov edx, 9 */ r_edx = 0x9u;
    /* 004b4cfe: jmp 0x4b4d1e */ goto L_004b4d1e;
L_004b4d1e:; BB(0x004b4d1e);
    /* 004b4d1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4d21: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4d26u); f_004b5150();
    /* 004b4d26: jmp 0x4b4b9e */ goto L_004b4b9e;
}

void f_004b4d00(void)
{
    FN_ENTER(0x004b4d00);
    goto L_004b4d00;
L_004b4b9e:; BB(0x004b4b9e);
    /* 004b4b9e: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b4ba1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b4ba2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b4ba3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b4ba4: ret 8 */ FN_RET(0x004b4d00); r_esp += 12; return;
L_004b4d00:; BB(0x004b4d00);
    /* 004b4d00: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4d02: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b4d07u); f_00520bf4();
    /* 004b4d07: fcomp dword ptr [0x906e2c] */ fx_compare(ST(0), R_F32((u32)(0x906e2cu))); FPOP();
    /* 004b4d0d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b4d0f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b4d10: jbe 0x4b4d19 */ if ((fC||fZ)) goto L_004b4d19;
L_004b4d12:; BB(0x004b4d12);
    /* 004b4d12: mov edx, 8 */ r_edx = 0x8u;
    /* 004b4d17: jmp 0x4b4d1e */ goto L_004b4d1e;
L_004b4d19:; BB(0x004b4d19);
    /* 004b4d19: mov edx, 6 */ r_edx = 0x6u;
L_004b4d1e:; BB(0x004b4d1e);
    /* 004b4d1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4d21: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4d26u); f_004b5150();
    /* 004b4d26: jmp 0x4b4b9e */ goto L_004b4b9e;
}

void f_004b4d1e(void)
{
    FN_ENTER(0x004b4d1e);
    goto L_004b4d1e;
L_004b4b9e:; BB(0x004b4b9e);
    /* 004b4b9e: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b4ba1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b4ba2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b4ba3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b4ba4: ret 8 */ FN_RET(0x004b4d1e); r_esp += 12; return;
L_004b4d1e:; BB(0x004b4d1e);
    /* 004b4d1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b4d1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b4d21: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b4d26u); f_004b5150();
    /* 004b4d26: jmp 0x4b4b9e */ goto L_004b4b9e;
}

void f_004b4e41(void)
{
    FN_ENTER(0x004b4e41);
    goto L_004b4e41;
L_004b4b9e:; BB(0x004b4b9e);
    /* 004b4b9e: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b4ba1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b4ba2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b4ba3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b4ba4: ret 8 */ FN_RET(0x004b4e41); r_esp += 12; return;
L_004b4e41:; BB(0x004b4e41);
    /* 004b4e41: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004b4e43: mov ah, 0 */ r_eax = (r_eax & 0xffff00ffu) | (((0x0u) & 0xffu) << 8);
    /* 004b4e45: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004b4e47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b4e49: mov dword ptr [ebp + 0x730], eax */ W32((u32)(r_ebp+0x730u), r_eax);
    /* 004b4e4f: mov dword ptr [ebp + 0x734], eax */ W32((u32)(r_ebp+0x734u), r_eax);
    /* 004b4e55: mov dword ptr [ebp + 0x740], 0x78 */ W32((u32)(r_ebp+0x740u), 0x78u);
    /* 004b4e5f: mov dword ptr [ebp + 0x738], eax */ W32((u32)(r_ebp+0x738u), r_eax);
    /* 004b4e65: jmp 0x4b4b9e */ goto L_004b4b9e;
}

void f_004b4e6c(void) /* sub_4B4E6C */
{
    FN_ENTER(0x004b4e6c);
    /* 004b4e6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b4e6d: mov ebp, esp */ r_ebp = r_esp;
    /* 004b4e6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004b4e71: push 0x8d0d9c */ { u32 v = 0x8d0d9cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b4e76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004b4e7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b4e7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004b4e84: sub esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b4e8a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004b4e8d: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 004b4e90: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 004b4e93: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 004b4e96: mov esi, dword ptr [ecx + 0x6bc] */ r_esi = R32((u32)(r_ecx+0x6bcu));
    /* 004b4e9c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b4e9f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004b4ea2: mov ebx, dword ptr [0xa9cd68] */ r_ebx = R32((u32)(0xa9cd68u));
    /* 004b4ea8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004b4eab: mov ecx, dword ptr [ebx*4 + 0x9abc68] */ r_ecx = R32((u32)(r_ebx*4+0x9abc68u));
    /* 004b4eb2: mov ecx, dword ptr [ecx + esi*8 + 4] */ r_ecx = R32((u32)(r_ecx+r_esi*8+0x4u));
    /* 004b4eb6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b4eb8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b4eba: lea ecx, [ecx + ecx*8] */ r_ecx = (u32)(r_ecx+r_ecx*8);
    /* 004b4ebd: mov ecx, dword ptr [ecx + eax*4 + 0x905f60] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x905f60u));
    /* 004b4ec4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b4ec6: je 0x4b4f7b */ if (fZ) goto L_004b4f7b;
L_004b4ecc:; BB(0x004b4ecc);
    /* 004b4ecc: mov eax, dword ptr [edx*4 + 0x9abbc8] */ r_eax = R32((u32)(r_edx*4+0x9abbc8u));
    /* 004b4ed3: mov edx, dword ptr [edx*4 + 0x9abbb8] */ r_edx = R32((u32)(r_edx*4+0x9abbb8u));
    /* 004b4eda: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4edd: je 0x4b5142 */ if (fZ) goto L_004b5142;
L_004b4ee3:; BB(0x004b4ee3);
    /* 004b4ee3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004b4ee5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_004b4ee8:; BB(0x004b4ee8);
    /* 004b4ee8: mov ecx, dword ptr [0x905480] */ r_ecx = R32((u32)(0x905480u));
    /* 004b4eee: mov ebx, dword ptr [0x905484] */ r_ebx = R32((u32)(0x905484u));
    /* 004b4ef4: mov esi, dword ptr [0x905488] */ r_esi = R32((u32)(0x905488u));
    /* 004b4efa: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 004b4efd: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 004b4f03: mov dword ptr [ebp - 0xa0], ebx */ W32((u32)(r_ebp+0xffffff60u), r_ebx);
    /* 004b4f09: mov dword ptr [ebp - 0x9c], esi */ W32((u32)(r_ebp+0xffffff64u), r_esi);
    /* 004b4f0f: mov edx, dword ptr [edx + edi*4] */ r_edx = R32((u32)(r_edx+r_edi*4));
    /* 004b4f12: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 004b4f18: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004b4f1a: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 004b4f20: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 004b4f26: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 004b4f2c: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 004b4f32: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 004b4f38: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 004b4f3e: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 004b4f41: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 004b4f44: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 004b4f47: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b4f4a: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b4f4e: mov esi, dword ptr [ebx + 0x7ac] */ r_esi = R32((u32)(r_ebx+0x7acu));
    /* 004b4f54: mov ebx, dword ptr [esi + 0x18] */ r_ebx = R32((u32)(r_esi+0x18u));
    /* 004b4f57: lea ecx, [edx + 0xb] */ r_ecx = (u32)(r_edx+0xbu);
    /* 004b4f5a: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 004b4f5d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004b4f60: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4f62: je 0x4b4f94 */ if (fZ) goto L_004b4f94;
L_004b4f64:; BB(0x004b4f64);
    /* 004b4f64: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b4f68: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b4f6a: mov byte ptr [ebp + edx - 0x98], 1 */ W8((u32)(r_ebp+r_edx+0xffffff68u), 0x1u);
    /* 004b4f72: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 004b4f75: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4f77: jne 0x4b4f64 */ if (!fZ) goto L_004b4f64;
L_004b4f79:; BB(0x004b4f79);
    /* 004b4f79: jmp 0x4b4f94 */ goto L_004b4f94;
L_004b4f7b:; BB(0x004b4f7b);
    /* 004b4f7b: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b4f7e: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b4f81: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b4f84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b4f87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b4f8e: mov esp, ebp */ r_esp = r_ebp;
    /* 004b4f90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b4f91: ret 8 */ FN_RET(0x004b4e6c); r_esp += 12; return;
L_004b4f94:; BB(0x004b4f94);
    /* 004b4f94: mov edx, 0x23 */ r_edx = 0x23u;
    /* 004b4f99: mov ecx, 0x23 */ r_ecx = 0x23u;
L_004b4f9e:; BB(0x004b4f9e);
    /* 004b4f9e: movzx ecx, byte ptr [ebp + ecx - 0x98] */ r_ecx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff68u));
    /* 004b4fa6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4fa8: je 0x4b5013 */ if (fZ) goto L_004b5013;
L_004b4faa:; BB(0x004b4faa);
    /* 004b4faa: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b4fad: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b4fb0: movzx ebx, byte ptr [ebp + ecx - 0x98] */ r_ebx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff68u));
    /* 004b4fb8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4fba: je 0x4b5013 */ if (fZ) goto L_004b5013;
L_004b4fbc:; BB(0x004b4fbc);
    /* 004b4fbc: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b4fbf: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b4fc2: movzx ebx, byte ptr [ebp + ecx - 0x98] */ r_ebx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff68u));
    /* 004b4fca: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4fcc: je 0x4b5013 */ if (fZ) goto L_004b5013;
L_004b4fce:; BB(0x004b4fce);
    /* 004b4fce: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b4fd1: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b4fd4: movzx ebx, byte ptr [ebp + ecx - 0x98] */ r_ebx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff68u));
    /* 004b4fdc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4fde: je 0x4b5013 */ if (fZ) goto L_004b5013;
L_004b4fe0:; BB(0x004b4fe0);
    /* 004b4fe0: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b4fe3: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b4fe6: movzx ebx, byte ptr [ebp + ecx - 0x98] */ r_ebx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff68u));
    /* 004b4fee: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4ff0: je 0x4b5013 */ if (fZ) goto L_004b5013;
L_004b4ff2:; BB(0x004b4ff2);
    /* 004b4ff2: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b4ff5: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b4ff8: movzx ebx, byte ptr [ebp + ecx - 0x98] */ r_ebx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff68u));
    /* 004b5000: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5002: je 0x4b5013 */ if (fZ) goto L_004b5013;
L_004b5004:; BB(0x004b5004);
    /* 004b5004: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b5007: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b500a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004b500c: jge 0x4b4f9e */ if ((fS==fO)) goto L_004b4f9e;
L_004b500e:; BB(0x004b500e);
    /* 004b500e: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
L_004b5013:; BB(0x004b5013);
    /* 004b5013: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 004b5016: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 004b5019: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b501b: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 004b501e: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b5020: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b5022: je 0x4b4f7b */ if (fZ) goto L_004b4f7b;
L_004b5028:; BB(0x004b5028);
    /* 004b5028: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b502b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b502d: jle 0x4b4f7b */ if ((fZ||fS!=fO)) goto L_004b4f7b;
L_004b5033:; BB(0x004b5033);
    /* 004b5033: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b5036: mov esi, dword ptr [esi + 0x18] */ r_esi = R32((u32)(r_esi+0x18u));
    /* 004b5039: add edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b503c: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b503f: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b5041: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 004b5044: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004b5047: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5049: je 0x4b505e */ if (fZ) goto L_004b505e;
L_004b504b:; BB(0x004b504b);
    /* 004b504b: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 004b504f: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b5051: je 0x4b4f7b */ if (fZ) goto L_004b4f7b;
L_004b5057:; BB(0x004b5057);
    /* 004b5057: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 004b505a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b505c: jne 0x4b504b */ if (!fZ) goto L_004b504b;
L_004b505e:; BB(0x004b505e);
    /* 004b505e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5061: movzx esi, word ptr [edx + 0x2c] */ r_esi = (u32)R16((u32)(r_edx+0x2cu));
    /* 004b5065: add esi, dword ptr [ebp - 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b5068: mov edi, 1 */ r_edi = 0x1u;
    /* 004b506d: mov word ptr [ebp - 0x74], si */ W16((u32)(r_ebp+0xffffff8cu), (u16)r_esi);
    /* 004b5071: mov word ptr [ebp - 0x72], di */ W16((u32)(r_ebp+0xffffff8eu), (u16)r_edi);
    /* 004b5075: mov word ptr [ebp - 0x6e], cx */ W16((u32)(r_ebp+0xffffff92u), (u16)r_ecx);
    /* 004b5079: movzx ecx, word ptr [edx + 0x28] */ r_ecx = (u32)R16((u32)(r_edx+0x28u));
    /* 004b507d: mov word ptr [ebp - 0x6c], cx */ W16((u32)(r_ebp+0xffffff94u), (u16)r_ecx);
    /* 004b5081: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004b5083: mov word ptr [ebp - 0x70], si */ W16((u32)(r_ebp+0xffffff90u), (u16)r_esi);
    /* 004b5087: mov word ptr [ebp - 0x6a], si */ W16((u32)(r_ebp+0xffffff96u), (u16)r_esi);
    /* 004b508b: mov word ptr [ebp - 0x68], si */ W16((u32)(r_ebp+0xffffff98u), (u16)r_esi);
    /* 004b508f: mov word ptr [ebp - 0x66], si */ W16((u32)(r_ebp+0xffffff9au), (u16)r_esi);
    /* 004b5093: mov edx, dword ptr [eax + ebx] */ r_edx = R32((u32)(r_eax+r_ebx));
    /* 004b5096: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 004b5099: mov edx, dword ptr [eax + ebx + 4] */ r_edx = R32((u32)(r_eax+r_ebx+0x4u));
    /* 004b509d: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 004b50a0: mov eax, dword ptr [eax + ebx + 8] */ r_eax = R32((u32)(r_eax+r_ebx+0x8u));
    /* 004b50a4: mov ebx, dword ptr [ebp - 0xa4] */ r_ebx = R32((u32)(r_ebp+0xffffff5cu));
    /* 004b50aa: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004b50ad: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 004b50b3: mov dword ptr [ebp - 0x58], ebx */ W32((u32)(r_ebp+0xffffffa8u), r_ebx);
    /* 004b50b6: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004b50b9: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 004b50bf: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004b50c2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b50c5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004b50c7: je 0x4b50d8 */ if (fZ) goto L_004b50d8;
L_004b50c9:; BB(0x004b50c9);
    /* 004b50c9: fld dword ptr [0x906e24] */ FPUSH(R_F32((u32)(0x906e24u)));
    /* 004b50cf: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 004b50d6: jmp 0x4b50e5 */ goto L_004b50e5;
L_004b50d8:; BB(0x004b50d8);
    /* 004b50d8: fld dword ptr [0x906e24] */ FPUSH(R_F32((u32)(0x906e24u)));
    /* 004b50de: mov dword ptr [ebp - 0x4c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffb4u), 0x3f800000u);
L_004b50e5:; BB(0x004b50e5);
    /* 004b50e5: fst dword ptr [ebp - 0x48] */ W_F32((u32)(r_ebp+0xffffffb8u), ST(0));
    /* 004b50e8: fst dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0));
    /* 004b50eb: fst dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0));
    /* 004b50ee: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 004b50f1: push 0x3d8 */ { u32 v = 0x3d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b50f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b50f8: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
    /* 004b50fc: mov word ptr [ebp - 0x36], ax */ W16((u32)(r_ebp+0xffffffcau), (u16)r_eax);
    /* 004b5100: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004b5103: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4b5108u); f_005caba4();
    /* 004b5108: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b5109: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004b510c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b510e: je 0x4b4f7b */ if (fZ) goto L_004b4f7b;
L_004b5114:; BB(0x004b5114);
    /* 004b5114: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004b511b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b5122: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5125: lea edx, [ebp - 0x74] */ r_edx = (u32)(r_ebp+0xffffff8cu);
    /* 004b5128: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5129: mov ecx, eax */ r_ecx = r_eax;
    /* 004b512b: push dword ptr [ebx + 0x7ac] */ { u32 v = R32((u32)(r_ebx+0x7acu)); r_esp -= 4; W32(r_esp, v); }
    /* 004b5131: call 0x4ad95c */ r_esp -= 4; W32(r_esp, 0x4b5136u); f_004ad95c();
    /* 004b5136: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004b513d: jmp 0x4b4f7b */ goto L_004b4f7b;
L_004b5142:; BB(0x004b5142);
    /* 004b5142: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004b5147: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004b514a: jmp 0x4b4ee8 */ goto L_004b4ee8;
}

void f_004b4f50(void)
{
    FN_ENTER(0x004b4f50);
    /* 004b4f50: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 004b4f51: pop es */ UNSUP(0x004b4f51, "pop es");
    /* 004b4f52: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004b4f54: mov ebx, dword ptr [esi + 0x18] */ r_ebx = R32((u32)(r_esi+0x18u));
    /* 004b4f57: lea ecx, [edx + 0xb] */ r_ecx = (u32)(r_edx+0xbu);
    /* 004b4f5a: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 004b4f5d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004b4f60: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4f62: je 0x4b4f94 */ if (fZ) goto L_004b4f94;
L_004b4f64:; BB(0x004b4f64);
    /* 004b4f64: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b4f68: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b4f6a: mov byte ptr [ebp + edx - 0x98], 1 */ W8((u32)(r_ebp+r_edx+0xffffff68u), 0x1u);
    /* 004b4f72: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 004b4f75: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4f77: jne 0x4b4f64 */ if (!fZ) goto L_004b4f64;
L_004b4f79:; BB(0x004b4f79);
    /* 004b4f79: jmp 0x4b4f94 */ goto L_004b4f94;
L_004b4f7b:; BB(0x004b4f7b);
    /* 004b4f7b: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b4f7e: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b4f81: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b4f84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b4f87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b4f8e: mov esp, ebp */ r_esp = r_ebp;
    /* 004b4f90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b4f91: ret 8 */ FN_RET(0x004b4f50); r_esp += 12; return;
L_004b4f94:; BB(0x004b4f94);
    /* 004b4f94: mov edx, 0x23 */ r_edx = 0x23u;
    /* 004b4f99: mov ecx, 0x23 */ r_ecx = 0x23u;
L_004b4f9e:; BB(0x004b4f9e);
    /* 004b4f9e: movzx ecx, byte ptr [ebp + ecx - 0x98] */ r_ecx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff68u));
    /* 004b4fa6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4fa8: je 0x4b5013 */ if (fZ) goto L_004b5013;
L_004b4faa:; BB(0x004b4faa);
    /* 004b4faa: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b4fad: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b4fb0: movzx ebx, byte ptr [ebp + ecx - 0x98] */ r_ebx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff68u));
    /* 004b4fb8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4fba: je 0x4b5013 */ if (fZ) goto L_004b5013;
L_004b4fbc:; BB(0x004b4fbc);
    /* 004b4fbc: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b4fbf: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b4fc2: movzx ebx, byte ptr [ebp + ecx - 0x98] */ r_ebx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff68u));
    /* 004b4fca: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4fcc: je 0x4b5013 */ if (fZ) goto L_004b5013;
L_004b4fce:; BB(0x004b4fce);
    /* 004b4fce: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b4fd1: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b4fd4: movzx ebx, byte ptr [ebp + ecx - 0x98] */ r_ebx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff68u));
    /* 004b4fdc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4fde: je 0x4b5013 */ if (fZ) goto L_004b5013;
L_004b4fe0:; BB(0x004b4fe0);
    /* 004b4fe0: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b4fe3: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b4fe6: movzx ebx, byte ptr [ebp + ecx - 0x98] */ r_ebx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff68u));
    /* 004b4fee: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4ff0: je 0x4b5013 */ if (fZ) goto L_004b5013;
L_004b4ff2:; BB(0x004b4ff2);
    /* 004b4ff2: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b4ff5: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b4ff8: movzx ebx, byte ptr [ebp + ecx - 0x98] */ r_ebx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff68u));
    /* 004b5000: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5002: je 0x4b5013 */ if (fZ) goto L_004b5013;
L_004b5004:; BB(0x004b5004);
    /* 004b5004: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b5007: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b500a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004b500c: jge 0x4b4f9e */ if ((fS==fO)) goto L_004b4f9e;
L_004b500e:; BB(0x004b500e);
    /* 004b500e: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
L_004b5013:; BB(0x004b5013);
    /* 004b5013: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 004b5016: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 004b5019: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b501b: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 004b501e: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b5020: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b5022: je 0x4b4f7b */ if (fZ) goto L_004b4f7b;
L_004b5028:; BB(0x004b5028);
    /* 004b5028: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b502b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b502d: jle 0x4b4f7b */ if ((fZ||fS!=fO)) goto L_004b4f7b;
L_004b5033:; BB(0x004b5033);
    /* 004b5033: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b5036: mov esi, dword ptr [esi + 0x18] */ r_esi = R32((u32)(r_esi+0x18u));
    /* 004b5039: add edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b503c: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b503f: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b5041: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 004b5044: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004b5047: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5049: je 0x4b505e */ if (fZ) goto L_004b505e;
L_004b504b:; BB(0x004b504b);
    /* 004b504b: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 004b504f: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b5051: je 0x4b4f7b */ if (fZ) goto L_004b4f7b;
L_004b5057:; BB(0x004b5057);
    /* 004b5057: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 004b505a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b505c: jne 0x4b504b */ if (!fZ) goto L_004b504b;
L_004b505e:; BB(0x004b505e);
    /* 004b505e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5061: movzx esi, word ptr [edx + 0x2c] */ r_esi = (u32)R16((u32)(r_edx+0x2cu));
    /* 004b5065: add esi, dword ptr [ebp - 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b5068: mov edi, 1 */ r_edi = 0x1u;
    /* 004b506d: mov word ptr [ebp - 0x74], si */ W16((u32)(r_ebp+0xffffff8cu), (u16)r_esi);
    /* 004b5071: mov word ptr [ebp - 0x72], di */ W16((u32)(r_ebp+0xffffff8eu), (u16)r_edi);
    /* 004b5075: mov word ptr [ebp - 0x6e], cx */ W16((u32)(r_ebp+0xffffff92u), (u16)r_ecx);
    /* 004b5079: movzx ecx, word ptr [edx + 0x28] */ r_ecx = (u32)R16((u32)(r_edx+0x28u));
    /* 004b507d: mov word ptr [ebp - 0x6c], cx */ W16((u32)(r_ebp+0xffffff94u), (u16)r_ecx);
    /* 004b5081: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004b5083: mov word ptr [ebp - 0x70], si */ W16((u32)(r_ebp+0xffffff90u), (u16)r_esi);
    /* 004b5087: mov word ptr [ebp - 0x6a], si */ W16((u32)(r_ebp+0xffffff96u), (u16)r_esi);
    /* 004b508b: mov word ptr [ebp - 0x68], si */ W16((u32)(r_ebp+0xffffff98u), (u16)r_esi);
    /* 004b508f: mov word ptr [ebp - 0x66], si */ W16((u32)(r_ebp+0xffffff9au), (u16)r_esi);
    /* 004b5093: mov edx, dword ptr [eax + ebx] */ r_edx = R32((u32)(r_eax+r_ebx));
    /* 004b5096: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 004b5099: mov edx, dword ptr [eax + ebx + 4] */ r_edx = R32((u32)(r_eax+r_ebx+0x4u));
    /* 004b509d: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 004b50a0: mov eax, dword ptr [eax + ebx + 8] */ r_eax = R32((u32)(r_eax+r_ebx+0x8u));
    /* 004b50a4: mov ebx, dword ptr [ebp - 0xa4] */ r_ebx = R32((u32)(r_ebp+0xffffff5cu));
    /* 004b50aa: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004b50ad: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 004b50b3: mov dword ptr [ebp - 0x58], ebx */ W32((u32)(r_ebp+0xffffffa8u), r_ebx);
    /* 004b50b6: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004b50b9: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 004b50bf: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004b50c2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b50c5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004b50c7: je 0x4b50d8 */ if (fZ) goto L_004b50d8;
L_004b50c9:; BB(0x004b50c9);
    /* 004b50c9: fld dword ptr [0x906e24] */ FPUSH(R_F32((u32)(0x906e24u)));
    /* 004b50cf: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 004b50d6: jmp 0x4b50e5 */ goto L_004b50e5;
L_004b50d8:; BB(0x004b50d8);
    /* 004b50d8: fld dword ptr [0x906e24] */ FPUSH(R_F32((u32)(0x906e24u)));
    /* 004b50de: mov dword ptr [ebp - 0x4c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffb4u), 0x3f800000u);
L_004b50e5:; BB(0x004b50e5);
    /* 004b50e5: fst dword ptr [ebp - 0x48] */ W_F32((u32)(r_ebp+0xffffffb8u), ST(0));
    /* 004b50e8: fst dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0));
    /* 004b50eb: fst dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0));
    /* 004b50ee: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 004b50f1: push 0x3d8 */ { u32 v = 0x3d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b50f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b50f8: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
    /* 004b50fc: mov word ptr [ebp - 0x36], ax */ W16((u32)(r_ebp+0xffffffcau), (u16)r_eax);
    /* 004b5100: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004b5103: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4b5108u); f_005caba4();
    /* 004b5108: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b5109: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004b510c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b510e: je 0x4b4f7b */ if (fZ) goto L_004b4f7b;
L_004b5114:; BB(0x004b5114);
    /* 004b5114: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004b511b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b5122: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5125: lea edx, [ebp - 0x74] */ r_edx = (u32)(r_ebp+0xffffff8cu);
    /* 004b5128: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5129: mov ecx, eax */ r_ecx = r_eax;
    /* 004b512b: push dword ptr [ebx + 0x7ac] */ { u32 v = R32((u32)(r_ebx+0x7acu)); r_esp -= 4; W32(r_esp, v); }
    /* 004b5131: call 0x4ad95c */ r_esp -= 4; W32(r_esp, 0x4b5136u); f_004ad95c();
    /* 004b5136: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004b513d: jmp 0x4b4f7b */ goto L_004b4f7b;
}

void f_004b4f5f(void)
{
    FN_ENTER(0x004b4f5f);
    /* 004b4f5f: call 0x30c02ae9 */ r_esp -= 4; W32(r_esp, 0x4b4f64u); f_30c02ae9();
L_004b4f64:; BB(0x004b4f64);
    /* 004b4f64: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b4f68: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004b4f6a: mov byte ptr [ebp + edx - 0x98], 1 */ W8((u32)(r_ebp+r_edx+0xffffff68u), 0x1u);
    /* 004b4f72: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 004b4f75: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4f77: jne 0x4b4f64 */ if (!fZ) goto L_004b4f64;
L_004b4f79:; BB(0x004b4f79);
    /* 004b4f79: jmp 0x4b4f94 */ goto L_004b4f94;
L_004b4f7b:; BB(0x004b4f7b);
    /* 004b4f7b: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b4f7e: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b4f81: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b4f84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b4f87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b4f8e: mov esp, ebp */ r_esp = r_ebp;
    /* 004b4f90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b4f91: ret 8 */ FN_RET(0x004b4f5f); r_esp += 12; return;
L_004b4f94:; BB(0x004b4f94);
    /* 004b4f94: mov edx, 0x23 */ r_edx = 0x23u;
    /* 004b4f99: mov ecx, 0x23 */ r_ecx = 0x23u;
L_004b4f9e:; BB(0x004b4f9e);
    /* 004b4f9e: movzx ecx, byte ptr [ebp + ecx - 0x98] */ r_ecx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff68u));
    /* 004b4fa6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4fa8: je 0x4b5013 */ if (fZ) goto L_004b5013;
L_004b4faa:; BB(0x004b4faa);
    /* 004b4faa: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b4fad: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b4fb0: movzx ebx, byte ptr [ebp + ecx - 0x98] */ r_ebx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff68u));
    /* 004b4fb8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4fba: je 0x4b5013 */ if (fZ) goto L_004b5013;
L_004b4fbc:; BB(0x004b4fbc);
    /* 004b4fbc: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b4fbf: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b4fc2: movzx ebx, byte ptr [ebp + ecx - 0x98] */ r_ebx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff68u));
    /* 004b4fca: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4fcc: je 0x4b5013 */ if (fZ) goto L_004b5013;
L_004b4fce:; BB(0x004b4fce);
    /* 004b4fce: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b4fd1: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b4fd4: movzx ebx, byte ptr [ebp + ecx - 0x98] */ r_ebx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff68u));
    /* 004b4fdc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4fde: je 0x4b5013 */ if (fZ) goto L_004b5013;
L_004b4fe0:; BB(0x004b4fe0);
    /* 004b4fe0: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b4fe3: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b4fe6: movzx ebx, byte ptr [ebp + ecx - 0x98] */ r_ebx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff68u));
    /* 004b4fee: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b4ff0: je 0x4b5013 */ if (fZ) goto L_004b5013;
L_004b4ff2:; BB(0x004b4ff2);
    /* 004b4ff2: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b4ff5: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b4ff8: movzx ebx, byte ptr [ebp + ecx - 0x98] */ r_ebx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff68u));
    /* 004b5000: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5002: je 0x4b5013 */ if (fZ) goto L_004b5013;
L_004b5004:; BB(0x004b5004);
    /* 004b5004: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b5007: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b500a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004b500c: jge 0x4b4f9e */ if ((fS==fO)) goto L_004b4f9e;
L_004b500e:; BB(0x004b500e);
    /* 004b500e: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
L_004b5013:; BB(0x004b5013);
    /* 004b5013: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 004b5016: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 004b5019: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b501b: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 004b501e: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b5020: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b5022: je 0x4b4f7b */ if (fZ) goto L_004b4f7b;
L_004b5028:; BB(0x004b5028);
    /* 004b5028: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b502b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b502d: jle 0x4b4f7b */ if ((fZ||fS!=fO)) goto L_004b4f7b;
L_004b5033:; BB(0x004b5033);
    /* 004b5033: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b5036: mov esi, dword ptr [esi + 0x18] */ r_esi = R32((u32)(r_esi+0x18u));
    /* 004b5039: add edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b503c: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 004b503f: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b5041: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 004b5044: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004b5047: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b5049: je 0x4b505e */ if (fZ) goto L_004b505e;
L_004b504b:; BB(0x004b504b);
    /* 004b504b: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 004b504f: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b5051: je 0x4b4f7b */ if (fZ) goto L_004b4f7b;
L_004b5057:; BB(0x004b5057);
    /* 004b5057: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 004b505a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b505c: jne 0x4b504b */ if (!fZ) goto L_004b504b;
L_004b505e:; BB(0x004b505e);
    /* 004b505e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5061: movzx esi, word ptr [edx + 0x2c] */ r_esi = (u32)R16((u32)(r_edx+0x2cu));
    /* 004b5065: add esi, dword ptr [ebp - 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b5068: mov edi, 1 */ r_edi = 0x1u;
    /* 004b506d: mov word ptr [ebp - 0x74], si */ W16((u32)(r_ebp+0xffffff8cu), (u16)r_esi);
    /* 004b5071: mov word ptr [ebp - 0x72], di */ W16((u32)(r_ebp+0xffffff8eu), (u16)r_edi);
    /* 004b5075: mov word ptr [ebp - 0x6e], cx */ W16((u32)(r_ebp+0xffffff92u), (u16)r_ecx);
    /* 004b5079: movzx ecx, word ptr [edx + 0x28] */ r_ecx = (u32)R16((u32)(r_edx+0x28u));
    /* 004b507d: mov word ptr [ebp - 0x6c], cx */ W16((u32)(r_ebp+0xffffff94u), (u16)r_ecx);
    /* 004b5081: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004b5083: mov word ptr [ebp - 0x70], si */ W16((u32)(r_ebp+0xffffff90u), (u16)r_esi);
    /* 004b5087: mov word ptr [ebp - 0x6a], si */ W16((u32)(r_ebp+0xffffff96u), (u16)r_esi);
    /* 004b508b: mov word ptr [ebp - 0x68], si */ W16((u32)(r_ebp+0xffffff98u), (u16)r_esi);
    /* 004b508f: mov word ptr [ebp - 0x66], si */ W16((u32)(r_ebp+0xffffff9au), (u16)r_esi);
    /* 004b5093: mov edx, dword ptr [eax + ebx] */ r_edx = R32((u32)(r_eax+r_ebx));
    /* 004b5096: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 004b5099: mov edx, dword ptr [eax + ebx + 4] */ r_edx = R32((u32)(r_eax+r_ebx+0x4u));
    /* 004b509d: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 004b50a0: mov eax, dword ptr [eax + ebx + 8] */ r_eax = R32((u32)(r_eax+r_ebx+0x8u));
    /* 004b50a4: mov ebx, dword ptr [ebp - 0xa4] */ r_ebx = R32((u32)(r_ebp+0xffffff5cu));
    /* 004b50aa: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004b50ad: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 004b50b3: mov dword ptr [ebp - 0x58], ebx */ W32((u32)(r_ebp+0xffffffa8u), r_ebx);
    /* 004b50b6: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004b50b9: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 004b50bf: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004b50c2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b50c5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004b50c7: je 0x4b50d8 */ if (fZ) goto L_004b50d8;
L_004b50c9:; BB(0x004b50c9);
    /* 004b50c9: fld dword ptr [0x906e24] */ FPUSH(R_F32((u32)(0x906e24u)));
    /* 004b50cf: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 004b50d6: jmp 0x4b50e5 */ goto L_004b50e5;
L_004b50d8:; BB(0x004b50d8);
    /* 004b50d8: fld dword ptr [0x906e24] */ FPUSH(R_F32((u32)(0x906e24u)));
    /* 004b50de: mov dword ptr [ebp - 0x4c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffb4u), 0x3f800000u);
L_004b50e5:; BB(0x004b50e5);
    /* 004b50e5: fst dword ptr [ebp - 0x48] */ W_F32((u32)(r_ebp+0xffffffb8u), ST(0));
    /* 004b50e8: fst dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0));
    /* 004b50eb: fst dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0));
    /* 004b50ee: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 004b50f1: push 0x3d8 */ { u32 v = 0x3d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b50f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b50f8: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
    /* 004b50fc: mov word ptr [ebp - 0x36], ax */ W16((u32)(r_ebp+0xffffffcau), (u16)r_eax);
    /* 004b5100: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004b5103: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4b5108u); f_005caba4();
    /* 004b5108: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b5109: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004b510c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b510e: je 0x4b4f7b */ if (fZ) goto L_004b4f7b;
L_004b5114:; BB(0x004b5114);
    /* 004b5114: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004b511b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b5122: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b5125: lea edx, [ebp - 0x74] */ r_edx = (u32)(r_ebp+0xffffff8cu);
    /* 004b5128: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b5129: mov ecx, eax */ r_ecx = r_eax;
    /* 004b512b: push dword ptr [ebx + 0x7ac] */ { u32 v = R32((u32)(r_ebx+0x7acu)); r_esp -= 4; W32(r_esp, v); }
    /* 004b5131: call 0x4ad95c */ r_esp -= 4; W32(r_esp, 0x4b5136u); f_004ad95c();
    /* 004b5136: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004b513d: jmp 0x4b4f7b */ goto L_004b4f7b;
}

