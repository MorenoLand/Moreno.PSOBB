#include "protos.h"

void f_006f4004(void) /* sub_6F4004 */
{
    FN_ENTER(0x006f4004);
    /* 006f4004: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f4005: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f4008: mov eax, dword ptr [ecx + 0x250] */ r_eax = R32((u32)(r_ecx+0x250u));
    /* 006f400e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f4010: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f4012: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006f4015: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f4017: mov eax, dword ptr [0xa968f8] */ r_eax = R32((u32)(0xa968f8u));
    /* 006f401c: mov eax, dword ptr [edx + eax + 8] */ r_eax = R32((u32)(r_edx+r_eax+0x8u));
    /* 006f4020: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 006f4023: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006f4025: mov dword ptr [0xa968f4], eax */ W32((u32)(0xa968f4u), r_eax);
    /* 006f402a: mov eax, dword ptr [ecx + 0x248] */ r_eax = R32((u32)(r_ecx+0x248u));
    /* 006f4030: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f4033: jg 0x6f4153 */ if ((!fZ&&fS==fO)) goto L_006f4153;
L_006f4039:; BB(0x006f4039);
    /* 006f4039: mov edi, dword ptr [ecx + 0x38] */ r_edi = R32((u32)(r_ecx+0x38u));
    /* 006f403c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006f403e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006f4040: jle 0x6f4079 */ if ((fZ||fS!=fO)) goto L_006f4079;
L_006f4042:; BB(0x006f4042);
    /* 006f4042: fld dword ptr [0x96e080] */ FPUSH(R_F32((u32)(0x96e080u)));
    /* 006f4048: fld dword ptr [0x96e088] */ FPUSH(R_F32((u32)(0x96e088u)));
L_006f404e:; BB(0x006f404e);
    /* 006f404e: fld dword ptr [ecx + edx*4 + 0x210] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0x210u)));
    /* 006f4055: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 006f4057: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006f4059: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006f405b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006f405c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f405e: ja 0x6f4062 */ if ((!fC&&!fZ)) goto L_006f4062;
L_006f4060:; BB(0x006f4060);
    /* 006f4060: fst st(1) */ ST(1) = ST(0);
L_006f4062:; BB(0x006f4062);
    /* 006f4062: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f4064: fstp dword ptr [ecx + edx*4 + 0x210] */ W_F32((u32)(r_ecx+r_edx*4+0x210u), ST(0)); FPOP();
    /* 006f406b: mov edi, dword ptr [ecx + 0x38] */ r_edi = R32((u32)(r_ecx+0x38u));
    /* 006f406e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f4071: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f4073: jl 0x6f404e */ if ((fS!=fO)) goto L_006f404e;
L_006f4075:; BB(0x006f4075);
    /* 006f4075: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f4077: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006f4079:; BB(0x006f4079);
    /* 006f4079: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f407b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006f407d: jle 0x6f40d9 */ if ((fZ||fS!=fO)) goto L_006f40d9;
L_006f407f:; BB(0x006f407f);
    /* 006f407f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006f4082: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f4084: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 006f4087: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f4089: lea edx, [ecx + edi + 0x3c] */ r_edx = (u32)(r_ecx+r_edi+0x3cu);
L_006f408d:; BB(0x006f408d);
    /* 006f408d: fld dword ptr [ecx + eax*4 + 0x210] */ FPUSH(R_F32((u32)(r_ecx+r_eax*4+0x210u)));
    /* 006f4094: fld dword ptr [edx + 0x138] */ FPUSH(R_F32((u32)(r_edx+0x138u)));
    /* 006f409a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006f409c: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 006f409e: fld dword ptr [edx + 0x13c] */ FPUSH(R_F32((u32)(r_edx+0x13cu)));
    /* 006f40a4: fld dword ptr [edx + 0x140] */ FPUSH(R_F32((u32)(r_edx+0x140u)));
    /* 006f40aa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f40ac: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 006f40ae: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 006f40b1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f40b3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006f40b5: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 006f40b8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f40ba: fstp dword ptr [edx + 0x9c] */ W_F32((u32)(r_edx+0x9cu), ST(0)); FPOP();
    /* 006f40c0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f40c2: fstp dword ptr [edx + 0xa0] */ W_F32((u32)(r_edx+0xa0u), ST(0)); FPOP();
    /* 006f40c8: fstp dword ptr [edx + 0xa4] */ W_F32((u32)(r_edx+0xa4u), ST(0)); FPOP();
    /* 006f40ce: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f40d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f40d4: cmp eax, dword ptr [ecx + 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x38u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f40d7: jl 0x6f408d */ if ((fS!=fO)) goto L_006f408d;
L_006f40d9:; BB(0x006f40d9);
    /* 006f40d9: mov edx, dword ptr [ecx + 0x248] */ r_edx = R32((u32)(r_ecx+0x248u));
    /* 006f40df: cmp edx, dword ptr [ecx + 0x258] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x258u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f40e5: mov eax, 1 */ r_eax = 0x1u;
    /* 006f40ea: mov word ptr [ecx + 0x25e], ax */ W16((u32)(r_ecx+0x25eu), (u16)r_eax);
    /* 006f40f1: jle 0x6f4145 */ if ((fZ||fS!=fO)) goto L_006f4145;
L_006f40f3:; BB(0x006f40f3);
    /* 006f40f3: mov edi, dword ptr [ecx + 0x24c] */ r_edi = R32((u32)(r_ecx+0x24cu));
    /* 006f40f9: mov eax, dword ptr [ecx + 0x254] */ r_eax = R32((u32)(r_ecx+0x254u));
    /* 006f40ff: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006f4101: jbe 0x6f4136 */ if ((fC||fZ)) goto L_006f4136;
L_006f4103:; BB(0x006f4103);
    /* 006f4103: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006f4105: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006f4108: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006f410b: mov eax, edi */ r_eax = r_edi;
    /* 006f410d: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006f4110: fadd dword ptr [eax*4 + 0x96e068] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x96e068u));
    /* 006f4117: fcomp dword ptr [0x96e084] */ fx_compare(ST(0), R_F32((u32)(0x96e084u))); FPOP();
    /* 006f411d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006f411f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006f4120: ja 0x6f412e */ if ((!fC&&!fZ)) goto L_006f412e;
L_006f4122:; BB(0x006f4122);
    /* 006f4122: mov dword ptr [ecx + 0x24c], 0 */ W32((u32)(r_ecx+0x24cu), 0x0u);
    /* 006f412c: jmp 0x6f4145 */ goto L_006f4145;
L_006f412e:; BB(0x006f412e);
    /* 006f412e: mov dword ptr [ecx + 0x24c], edi */ W32((u32)(r_ecx+0x24cu), r_edi);
    /* 006f4134: jmp 0x6f4145 */ goto L_006f4145;
L_006f4136:; BB(0x006f4136);
    /* 006f4136: mov dword ptr [ecx + 0x24c], 0 */ W32((u32)(r_ecx+0x24cu), 0x0u);
    /* 006f4140: mov edx, 0x79 */ r_edx = 0x79u;
L_006f4145:; BB(0x006f4145);
    /* 006f4145: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f4148: mov dword ptr [ecx + 0x248], edx */ W32((u32)(r_ecx+0x248u), r_edx);
    /* 006f414e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f4151: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f4152: ret  */ FN_RET(0x006f4004); r_esp += 4; return;
L_006f4153:; BB(0x006f4153);
    /* 006f4153: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 006f4157: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f415c: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 006f4160: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f4163: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f4164: ret  */ FN_RET(0x006f4004); r_esp += 4; return;
}

void f_006f4168(void) /* sub_6F4168 */
{
    FN_ENTER(0x006f4168);
    /* 006f4168: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f4169: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f416a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f416b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f416c: sub esp, 0x3a8 */ {  u32 a = r_esp; u32 b = 0x3a8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f4172: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f4174: movsx eax, word ptr [ebx + 0x25e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x25eu));
    /* 006f417b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f417d: jne 0x6f418a */ if (!fZ) goto L_006f418a;
L_006f417f:; BB(0x006f417f);
    /* 006f417f: add esp, 0x3a8 */ {  u32 a = r_esp; u32 b = 0x3a8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f4185: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f4186: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f4187: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f4188: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f4189: ret  */ FN_RET(0x006f4168); r_esp += 4; return;
L_006f418a:; BB(0x006f418a);
    /* 006f418a: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x6f418fu); f_00807d60();
    /* 006f418f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f4191: jne 0x6f419e */ if (!fZ) goto L_006f419e;
L_006f4193:; BB(0x006f4193);
    /* 006f4193: add esp, 0x3a8 */ {  u32 a = r_esp; u32 b = 0x3a8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f4199: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f419a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f419b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f419c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f419d: ret  */ FN_RET(0x006f4168); r_esp += 4; return;
L_006f419e:; BB(0x006f419e);
    /* 006f419e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f41a0: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6f41a5u); f_008173b4();
    /* 006f41a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f41a7: jne 0x6f41b4 */ if (!fZ) goto L_006f41b4;
L_006f41a9:; BB(0x006f41a9);
    /* 006f41a9: add esp, 0x3a8 */ {  u32 a = r_esp; u32 b = 0x3a8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f41af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f41b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f41b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f41b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f41b3: ret  */ FN_RET(0x006f4168); r_esp += 4; return;
L_006f41b4:; BB(0x006f41b4);
    /* 006f41b4: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 006f41b9: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 006f41be: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f41c1: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006f41c6: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6f41cbu); f_0082dbac();
    /* 006f41cb: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x6f41d0u); f_007a9380();
    /* 006f41d0: fld dword ptr [0xaf02d8] */ FPUSH(R_F32((u32)(0xaf02d8u)));
    /* 006f41d6: fld dword ptr [0x96e07c] */ FPUSH(R_F32((u32)(0x96e07cu)));
    /* 006f41dc: fld dword ptr [0xaf02dc] */ FPUSH(R_F32((u32)(0xaf02dcu)));
    /* 006f41e2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006f41e4: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006f41e6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006f41e8: fld dword ptr [0xaf02c8] */ FPUSH(R_F32((u32)(0xaf02c8u)));
    /* 006f41ee: fld dword ptr [0xaf02cc] */ FPUSH(R_F32((u32)(0xaf02ccu)));
    /* 006f41f4: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 006f41f7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006f41f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006f41fb: jle 0x6f4547 */ if ((fZ||fS!=fO)) goto L_006f4547;
L_006f4201:; BB(0x006f4201);
    /* 006f4201: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006f4205: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006f4208: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006f420c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006f4210: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 006f4213: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f4215: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 006f4218: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006f421a: lea ebp, [edi + edi] */ r_ebp = (u32)(r_edi+r_edi);
    /* 006f421d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006f421f: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 006f4223: lea ebp, [edx + ebp + 0xd8] */ r_ebp = (u32)(r_edx+r_ebp+0xd8u);
    /* 006f422a: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_006f422c:; BB(0x006f422c);
    /* 006f422c: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 006f4230: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f4231: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006f4233: mov edx, ebp */ r_edx = r_ebp;
    /* 006f4235: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x6f423au); f_00830aa0();
    /* 006f423a: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006f423e: fld dword ptr [0x96e078] */ FPUSH(R_F32((u32)(0x96e078u)));
    /* 006f4244: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006f4246: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006f4248: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006f424b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006f424c: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 006f4250: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006f4254: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006f4258: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 006f425c: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 006f425f: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 006f4261: ja 0x6f4265 */ if ((!fC&&!fZ)) goto L_006f4265;
L_006f4263:; BB(0x006f4263);
    /* 006f4263: fst st(5) */ ST(5) = ST(0);
L_006f4265:; BB(0x006f4265);
    /* 006f4265: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f4267: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 006f4269: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 006f426d: fchs  */ ST(0) = -ST(0);
    /* 006f426f: fdivr dword ptr [0x96e074] */ ST(0) = R_F32((u32)(0x96e074u)) / ST(0);
    /* 006f4275: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 006f4277: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f4279: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 006f427b: fmul dword ptr [ebx + 0x244] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x244u));
    /* 006f4281: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f4283: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 006f4286: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f4288: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 006f428a: fstp dword ptr [esp + esi + 0x3c] */ W_F32((u32)(r_esp+r_esi+0x3cu), ST(0)); FPOP();
    /* 006f428e: fstp dword ptr [esp + esi + 0x34] */ W_F32((u32)(r_esp+r_esi+0x34u), ST(0)); FPOP();
    /* 006f4292: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f4294: fstp dword ptr [esp + edi*4 + 0xd0] */ W_F32((u32)(r_esp+r_edi*4+0xd0u), ST(0)); FPOP();
    /* 006f429b: fchs  */ ST(0) = -ST(0);
    /* 006f429d: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 006f42a1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006f42a3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f42a5: fmul dword ptr [0x96e0c0] */ ST(0) = ST(0) * R_F32((u32)(0x96e0c0u));
    /* 006f42ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f42ad: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 006f42b1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f42b3: fstp dword ptr [esp + edi*4 + 0x104] */ W_F32((u32)(r_esp+r_edi*4+0x104u), ST(0)); FPOP();
    /* 006f42ba: fstp dword ptr [esp + esi + 0x38] */ W_F32((u32)(r_esp+r_esi+0x38u), ST(0)); FPOP();
    /* 006f42be: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006f42c1: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f42c4: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f42c6: jl 0x6f422c */ if ((fS!=fO)) goto L_006f422c;
L_006f42cc:; BB(0x006f42cc);
    /* 006f42cc: fldz  */ FPUSH(0.0);
    /* 006f42ce: fld dword ptr [0x96e070] */ FPUSH(R_F32((u32)(0x96e070u)));
    /* 006f42d4: fld dword ptr [0x96e070] */ FPUSH(R_F32((u32)(0x96e070u)));
    /* 006f42da: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 006f42de: mov edx, dword ptr [ebx + 0x24c] */ r_edx = R32((u32)(r_ebx+0x24cu));
    /* 006f42e4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006f42e6: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 006f42ea: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 006f42ee: or edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006f42f4: lea edi, [esp + 0x138] */ r_edi = (u32)(r_esp+0x138u);
    /* 006f42fb: lea ebp, [esp + 0x40] */ r_ebp = (u32)(r_esp+0x40u);
    /* 006f42ff: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 006f4302: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006f4304: jle 0x6f452c */ if ((fZ||fS!=fO)) goto L_006f452c;
L_006f430a:; BB(0x006f430a);
    /* 006f430a: fstp st(5) */ ST(5) = ST(0); FPOP();
    /* 006f430c: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 006f430e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006f4311: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f4313: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006f4317: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f4319: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 006f431d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f431f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006f4323: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 006f4327: mov ebx, edx */ r_ebx = r_edx;
L_006f4329:; BB(0x006f4329);
    /* 006f4329: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 006f432b: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 006f432f: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 006f4333: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 006f4336: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 006f4339: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f433b: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 006f433f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f4341: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 006f4345: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f4347: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 006f4349: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f434b: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 006f434f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f4351: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 006f4353: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 006f4357: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f4359: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006f435b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f435d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006f435f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f4361: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006f4363: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f4365: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f4367: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006f4369: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006f436a: je 0x6f4528 */ if (fZ) goto L_006f4528;
L_006f4370:; BB(0x006f4370);
    /* 006f4370: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f4371: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006f4374: call 0x82f9f8 */ r_esp -= 4; W32(r_esp, 0x6f4379u); f_0082f9f8();
    /* 006f4379: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 006f437d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006f437f: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 006f4383: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 006f4385: fld dword ptr [0x96e074] */ FPUSH(R_F32((u32)(0x96e074u)));
    /* 006f438b: fld dword ptr [esp + esi*4 + 0xd0] */ FPUSH(R_F32((u32)(r_esp+r_esi*4+0xd0u)));
    /* 006f4392: fld dword ptr [esp + esi*4 + 0x104] */ FPUSH(R_F32((u32)(r_esp+r_esi*4+0x104u)));
    /* 006f4399: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 006f439d: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 006f43a1: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 006f43a5: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006f43a9: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 006f43ab: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 006f43ad: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 006f43af: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 006f43b1: fst dword ptr [edi + 0x10] */ W_F32((u32)(r_edi+0x10u), ST(0));
    /* 006f43b4: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 006f43b6: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 006f43ba: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006f43bd: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 006f43c0: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 006f43c3: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 006f43c5: fst dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0));
    /* 006f43c8: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 006f43ca: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006f43ce: mov dword ptr [edi + 0xc], 0 */ W32((u32)(r_edi+0xcu), 0x0u);
    /* 006f43d5: mov dword ptr [edi + 0x24], 0x3f800000 */ W32((u32)(r_edi+0x24u), 0x3f800000u);
    /* 006f43dc: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 006f43de: fchs  */ ST(0) = -ST(0);
    /* 006f43e0: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 006f43e2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f43e4: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 006f43e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f43e8: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006f43ec: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 006f43f0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f43f2: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 006f43f4: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 006f43f6: fstp dword ptr [edi + 0x18] */ W_F32((u32)(r_edi+0x18u), ST(0)); FPOP();
    /* 006f43f9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f43fb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f43fd: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 006f43ff: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 006f4403: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f4405: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 006f4407: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f4409: fstp dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0)); FPOP();
    /* 006f440c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f440e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f4410: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006f4414: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f4416: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 006f4419: fld dword ptr [0x96e070] */ FPUSH(R_F32((u32)(0x96e070u)));
    /* 006f441f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f4421: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006f4425: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006f4429: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006f442d: mov dword ptr [edi + 0x14], ebx */ W32((u32)(r_edi+0x14u), r_ebx);
    /* 006f4430: mov dword ptr [edi + 0x2c], ebx */ W32((u32)(r_edi+0x2cu), r_ebx);
    /* 006f4433: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 006f4436: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 006f4439: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006f443c: add edi, 0x30 */ {  u32 a = r_edi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f443f: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006f4442: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 006f4445: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006f4448: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f444a: jl 0x6f4329 */ if ((fS!=fO)) goto L_006f4329;
L_006f4450:; BB(0x006f4450);
    /* 006f4450: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 006f4454: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006f4457: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 006f445b: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 006f445f: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 006f4461: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006f4465: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 006f4469: mov edx, ebx */ r_edx = r_ebx;
    /* 006f446b: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 006f446f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f4471: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f4473: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 006f4475: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
L_006f4477:; BB(0x006f4477);
    /* 006f4477: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 006f4479: fmul dword ptr [esp + eax*4 + 0xcc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+r_eax*4+0xccu));
    /* 006f4480: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006f4484: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 006f4486: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 006f448a: fmul dword ptr [esp + eax*4 + 0x100] */ ST(0) = ST(0) * R_F32((u32)(r_esp+r_eax*4+0x100u));
    /* 006f4491: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006f4493: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 006f4495: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 006f4498: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 006f449a: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 006f449d: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006f44a1: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 006f44a3: fst dword ptr [edi + 0x10] */ W_F32((u32)(r_edi+0x10u), ST(0));
    /* 006f44a6: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 006f44a8: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 006f44ab: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f44ad: fstp dword ptr [edi + 0x24] */ W_F32((u32)(r_edi+0x24u), ST(0)); FPOP();
    /* 006f44b0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f44b2: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 006f44b5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 006f44b7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f44b9: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 006f44bb: fstp dword ptr [edi + 0x18] */ W_F32((u32)(r_edi+0x18u), ST(0)); FPOP();
    /* 006f44be: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f44c0: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 006f44c2: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 006f44c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f44c6: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 006f44c8: fstp dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0)); FPOP();
    /* 006f44cb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f44cd: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 006f44d0: mov dword ptr [edi + 0x14], edx */ W32((u32)(r_edi+0x14u), r_edx);
    /* 006f44d3: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 006f44d6: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x6f44dbu); f_007a902c();
    /* 006f44db: lea eax, [esp + 0x138] */ r_eax = (u32)(r_esp+0x138u);
    /* 006f44e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f44e4: mov ebx, dword ptr [ebx + 0x38] */ r_ebx = R32((u32)(r_ebx+0x38u));
    /* 006f44e7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006f44e9: push dword ptr [0xa968f4] */ { u32 v = R32((u32)(0xa968f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f44ef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f44f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f44f1: call 0x82b158 */ r_esp -= 4; W32(r_esp, 0x6f44f6u); f_0082b158();
    /* 006f44f6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f44f9: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x6f44feu); f_007a9044();
L_006f44fe:; BB(0x006f44fe);
    /* 006f44fe: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x6f4503u); f_0082dab0();
    /* 006f4503: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4508: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6f450du); f_0082d710();
    /* 006f450d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f450e: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 006f4513: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006f4518: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x6f451du); f_007a9318();
    /* 006f451d: add esp, 0x3a8 */ {  u32 a = r_esp; u32 b = 0x3a8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f4523: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f4524: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f4525: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f4526: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f4527: ret  */ FN_RET(0x006f4168); r_esp += 4; return;
L_006f4528:; BB(0x006f4528);
    /* 006f4528: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f452a: jmp 0x6f44fe */ goto L_006f44fe;
L_006f452c:; BB(0x006f452c);
    /* 006f452c: fld dword ptr [0x96e074] */ FPUSH(R_F32((u32)(0x96e074u)));
    /* 006f4532: fld dword ptr [0x96e070] */ FPUSH(R_F32((u32)(0x96e070u)));
    /* 006f4538: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f453a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006f453e: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006f4542: jmp 0x6f4477 */ goto L_006f4477;
L_006f4547:; BB(0x006f4547);
    /* 006f4547: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 006f4549: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 006f454b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 006f454d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f454f: jmp 0x6f42cc */ goto L_006f42cc;
}

void f_006f4554(void) /* sub_6F4554 */
{
    FN_ENTER(0x006f4554);
    /* 006f4554: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f4555: mov ebp, esp */ r_ebp = r_esp;
    /* 006f4557: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f4559: push 0x8efe4c */ { u32 v = 0x8efe4cu; r_esp -= 4; W32(r_esp, v); }
    /* 006f455e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f4564: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f4565: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f456c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f456f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f4572: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006f4575: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006f4578: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006f457b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006f457e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f4581: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006f4584: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 006f4587: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006f458a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006f458d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006f4590: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006f4593: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6f4598u); f_008193cc();
    /* 006f4598: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f459f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f45a2: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f45a5: mov dword ptr [eax], 0xb3e978 */ W32((u32)(r_eax), 0xb3e978u);
    /* 006f45ab: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006f45ad: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006f45af: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 006f45b2: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 006f45b5: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 006f45b8: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 006f45bb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006f45be: mov dword ptr [eax + 0x24], esi */ W32((u32)(r_eax+0x24u), r_esi);
    /* 006f45c1: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 006f45c3: mov dword ptr [eax + 0x28], edi */ W32((u32)(r_eax+0x28u), r_edi);
    /* 006f45c6: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006f45c9: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 006f45cc: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006f45cf: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 006f45d6: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 006f45d9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f45dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f45dd: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 006f45e0: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f45e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f45e4: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6f45e9u); f_0050b7a4();
    /* 006f45e9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f45ec: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f45ef: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f45f2: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f45f5: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f45f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f45fb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f4602: mov esp, ebp */ r_esp = r_ebp;
    /* 006f4604: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f4605: ret 0x10 */ FN_RET(0x006f4554); r_esp += 20; return;
}

void f_006f4608(void) /* sub_6F4608 */
{
    FN_ENTER(0x006f4608);
    /* 006f4608: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 006f460b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f460e: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 006f4611: cmp eax, 0x46 */ {  u32 a = r_eax; u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006f4614: jl 0x6f4623 */ if ((fS!=fO)) goto L_006f4623;
L_006f4616:; BB(0x006f4616);
    /* 006f4616: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 006f461a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f461f: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
L_006f4623:; BB(0x006f4623);
    /* 006f4623: ret  */ FN_RET(0x006f4608); r_esp += 4; return;
}

void f_006f4624(void) /* sub_6F4624 */
{
    FN_ENTER(0x006f4624);
    /* 006f4624: mov eax, dword ptr [0x9b97a8] */ r_eax = R32((u32)(0x9b97a8u));
    /* 006f4629: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 006f462f: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 006f4632: mov dword ptr [0xa968f8], 0x9cf8c0 */ W32((u32)(0xa968f8u), 0x9cf8c0u);
    /* 006f463c: mov dword ptr [0xa968fc], 0x10 */ W32((u32)(0xa968fcu), 0x10u);
    /* 006f4646: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006f4648: mov dword ptr [0xa968f4], eax */ W32((u32)(0xa968f4u), r_eax);
    /* 006f464d: ret  */ FN_RET(0x006f4624); r_esp += 4; return;
}

void f_006f4650(void) /* sub_6F4650 */
{
    FN_ENTER(0x006f4650);
    /* 006f4650: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f4651: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f4653: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f4655: call 0x6f4674 */ r_esp -= 4; W32(r_esp, 0x6f465au); f_006f4674();
    /* 006f465a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006f465e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f4660: jne 0x6f4666 */ if (!fZ) goto L_006f4666;
L_006f4662:; BB(0x006f4662);
    /* 006f4662: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f4663: ret 4 */ FN_RET(0x006f4650); r_esp += 8; return;
L_006f4666:; BB(0x006f4666);
    /* 006f4666: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f4667: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6f466cu); f_005c2f74();
    /* 006f466c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f466d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f466e: ret 4 */ FN_RET(0x006f4650); r_esp += 8; return;
}

void f_006f4674(void) /* sub_6F4674 */
{
    FN_ENTER(0x006f4674);
    /* 006f4674: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f4675: mov ebp, esp */ r_ebp = r_esp;
    /* 006f4677: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f4679: push 0x8efe68 */ { u32 v = 0x8efe68u; r_esp -= 4; W32(r_esp, v); }
    /* 006f467e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f4684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f4685: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f468c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f468f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f4692: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006f4695: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006f4698: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006f469b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006f469e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f46a1: mov dword ptr [ecx], 0xb3e9b0 */ W32((u32)(r_ecx), 0xb3e9b0u);
    /* 006f46a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006f46ae: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6f46b3u); f_008171e8();
    /* 006f46b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f46b6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f46bd: mov esp, ebp */ r_esp = r_ebp;
    /* 006f46bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f46c0: ret  */ FN_RET(0x006f4674); r_esp += 4; return;
}

void f_006f46c4(void) /* sub_6F46C4 */
{
    FN_ENTER(0x006f46c4);
    /* 006f46c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f46c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f46c6: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 006f46ca: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006f46ce: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6f46d3u); f_0082dcbc();
    /* 006f46d3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006f46d6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006f46d9: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 006f46dd: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006f46e1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006f46e4: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6f46e9u); f_0082ddd8();
    /* 006f46e9: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 006f46ed: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006f46f0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006f46f3: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006f46f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f46f8: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 006f46fa: fmul dword ptr [0x96e164] */ ST(0) = ST(0) * R_F32((u32)(0x96e164u));
    /* 006f4700: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f4702: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 006f4704: fmul dword ptr [0x96e160] */ ST(0) = ST(0) * R_F32((u32)(0x96e160u));
    /* 006f470a: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006f470e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f4710: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 006f4712: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 006f4714: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 006f4717: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f4719: fst dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0));
    /* 006f471c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f471e: fst dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0));
    /* 006f4721: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f4723: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 006f4726: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 006f4729: fchs  */ ST(0) = -ST(0);
    /* 006f472b: fstp dword ptr [esi + 0x14] */ W_F32((u32)(r_esi+0x14u), ST(0)); FPOP();
    /* 006f472e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f472f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f4730: ret 0x10 */ FN_RET(0x006f46c4); r_esp += 20; return;
}

void f_006f4734(void) /* sub_6F4734 */
{
    FN_ENTER(0x006f4734);
    /* 006f4734: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f4735: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f4736: mov esi, ecx */ r_esi = r_ecx;
    /* 006f4738: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 006f473c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f473d: mov ecx, esi */ r_ecx = r_esi;
    /* 006f473f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6f4744u); f_008193cc();
    /* 006f4744: mov dword ptr [esi], 0xb3e9b0 */ W32((u32)(r_esi), 0xb3e9b0u);
    /* 006f474a: mov dword ptr [esi + 0x1c], ebp */ W32((u32)(r_esi+0x1cu), r_ebp);
    /* 006f474d: mov eax, esi */ r_eax = r_esi;
    /* 006f474f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f4750: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f4751: ret 4 */ FN_RET(0x006f4734); r_esp += 8; return;
}

void f_006f4754(void) /* sub_6F4754 */
{
    FN_ENTER(0x006f4754);
    /* 006f4754: add dword ptr [ecx + 0x20], 1 */ { u32 ad = (u32)(r_ecx+0x20u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f4758: ret  */ FN_RET(0x006f4754); r_esp += 4; return;
}

void f_006f475c(void) /* sub_6F475C */
{
    FN_ENTER(0x006f475c);
    /* 006f475c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f475d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f475e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f475f: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f4765: mov esi, ecx */ r_esi = r_ecx;
    /* 006f4767: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 006f476c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f476e: jne 0x6f477a */ if (!fZ) goto L_006f477a;
L_006f4770:; BB(0x006f4770);
    /* 006f4770: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f4776: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f4777: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f4778: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f4779: ret  */ FN_RET(0x006f475c); r_esp += 4; return;
L_006f477a:; BB(0x006f477a);
    /* 006f477a: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6f477fu); f_0082dbac();
    /* 006f477f: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x6f4784u); f_004d28a4();
    /* 006f4784: call 0x6fb8cc */ r_esp -= 4; W32(r_esp, 0x6f4789u); f_006fb8cc();
    /* 006f4789: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f478b: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006f478d: push 0xc3160000 */ { u32 v = 0xc3160000u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4792: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f4793: call 0x415ab0 */ r_esp -= 4; W32(r_esp, 0x6f4798u); f_00415ab0();
    /* 006f4798: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f479b: mov eax, 0x1b4e81b5 */ r_eax = 0x1b4e81b5u;
    /* 006f47a0: mov ebx, dword ptr [esi + 0x20] */ r_ebx = R32((u32)(r_esi+0x20u));
    /* 006f47a3: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006f47a5: mov edi, ebx */ r_edi = r_ebx;
    /* 006f47a7: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 006f47aa: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006f47ad: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006f47af: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 006f47b2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f47b4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f47b6: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006f47b9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f47bb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f47bd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f47bf: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006f47c1: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006f47c3: cmp ebx, 0x96 */ {  u32 a = r_ebx; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f47c9: jl 0x6f48f7 */ if ((fS!=fO)) goto L_006f48f7;
L_006f47cf:; BB(0x006f47cf);
    /* 006f47cf: cmp ebx, 0xaa */ {  u32 a = r_ebx; u32 b = 0xaau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f47d5: jg 0x6f48f7 */ if ((!fZ&&fS==fO)) goto L_006f48f7;
L_006f47db:; BB(0x006f47db);
    /* 006f47db: fld dword ptr [0x96e154] */ FPUSH(R_F32((u32)(0x96e154u)));
    /* 006f47e1: add ebx, 0xffffff6a */ {  u32 a = r_ebx; u32 b = 0xffffff6au; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006f47e7: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006f47ea: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006f47ed: fdiv dword ptr [0x96e158] */ ST(0) = ST(0) / R_F32((u32)(0x96e158u));
    /* 006f47f3: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 006f47f5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f47f7: fadd dword ptr [0x96e1d0] */ ST(0) = ST(0) + R_F32((u32)(0x96e1d0u));
    /* 006f47fd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f47ff: fmul dword ptr [0x96e150] */ ST(0) = ST(0) * R_F32((u32)(0x96e150u));
    /* 006f4805: fadd dword ptr [0x96e1cc] */ ST(0) = ST(0) + R_F32((u32)(0x96e1ccu));
    /* 006f480b: fmul dword ptr [0x96e14c] */ ST(0) = ST(0) * R_F32((u32)(0x96e14cu));
    /* 006f4811: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f4813: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 006f4817: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 006f481b: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006f4820: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f4825: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006f4829: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006f482d: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 006f4831: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006f4835: movzx edi, byte ptr [esp + 0x18] */ r_edi = (u32)R8((u32)(r_esp+0x18u));
    /* 006f483a: mov ebx, edi */ r_ebx = r_edi;
    /* 006f483c: shl ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006f483f: or ebx, 0xff000000 */ {  u32 a = r_ebx; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 006f4845: mov eax, edi */ r_eax = r_edi;
    /* 006f4847: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006f484a: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 006f484c: or ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 006f484e: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x6f4853u); f_007a902c();
    /* 006f4853: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006f4858: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x6f485du); f_0082bb30();
    /* 006f485d: call 0x6fb8c0 */ r_esp -= 4; W32(r_esp, 0x6f4862u); f_006fb8c0();
    /* 006f4862: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 006f4867: mov edx, ebx */ r_edx = r_ebx;
    /* 006f4869: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x6f486eu); f_0082bb60();
    /* 006f486e: fld dword ptr [0x96e148] */ FPUSH(R_F32((u32)(0x96e148u)));
    /* 006f4874: fld dword ptr [0x96e1c8] */ FPUSH(R_F32((u32)(0x96e1c8u)));
    /* 006f487a: fld dword ptr [0x96e1c8] */ FPUSH(R_F32((u32)(0x96e1c8u)));
    /* 006f4880: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 006f4884: fmul dword ptr [0x96e1c4] */ ST(0) = ST(0) * R_F32((u32)(0x96e1c4u));
    /* 006f488a: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 006f488c: fmul dword ptr [0x96e144] */ ST(0) = ST(0) * R_F32((u32)(0x96e144u));
    /* 006f4892: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f4894: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 006f4896: fld dword ptr [0x96e1c0] */ FPUSH(R_F32((u32)(0x96e1c0u)));
    /* 006f489c: mov eax, dword ptr [0xa96904] */ r_eax = R32((u32)(0xa96904u));
    /* 006f48a1: mov edx, dword ptr [0xa96908] */ r_edx = R32((u32)(0xa96908u));
    /* 006f48a7: mov ebx, dword ptr [0xa9690c] */ r_ebx = R32((u32)(0xa9690cu));
    /* 006f48ad: mov edi, dword ptr [0xa96910] */ r_edi = R32((u32)(0xa96910u));
    /* 006f48b3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f48b5: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 006f48b9: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 006f48bb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f48bd: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 006f48c1: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 006f48c3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f48c5: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 006f48c9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f48cb: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 006f48cf: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 006f48d3: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 006f48d7: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 006f48db: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 006f48df: push 0x3bea0ea1 */ { u32 v = 0x3bea0ea1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f48e4: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 006f48e8: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x6f48edu); f_0082b440();
    /* 006f48ed: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x6f48f2u); f_004ac444();
    /* 006f48f2: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x6f48f7u); f_007a9044();
L_006f48f7:; BB(0x006f48f7);
    /* 006f48f7: call 0x6fb8cc */ r_esp -= 4; W32(r_esp, 0x6f48fcu); f_006fb8cc();
    /* 006f48fc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f48fe: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4900: push 0xc3020000 */ { u32 v = 0xc3020000u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f4906: call 0x415bcc */ r_esp -= 4; W32(r_esp, 0x6f490bu); f_00415bcc();
    /* 006f490b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f490e: movzx eax, byte ptr [0xa96914] */ r_eax = (u32)R8((u32)(0xa96914u));
    /* 006f4915: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 006f4918: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006f491a: jne 0x6f493a */ if (!fZ) goto L_006f493a;
L_006f491c:; BB(0x006f491c);
    /* 006f491c: mov dword ptr [0xa96918], 0x43a00000 */ W32((u32)(0xa96918u), 0x43a00000u);
    /* 006f4926: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f492b: mov byte ptr [0xa96914], al */ W8((u32)(0xa96914u), (u8)r_eax);
    /* 006f4930: mov dword ptr [0xa9691c], 0x435c0000 */ W32((u32)(0xa9691cu), 0x435c0000u);
L_006f493a:; BB(0x006f493a);
    /* 006f493a: mov edi, dword ptr [0xa96920] */ r_edi = R32((u32)(0xa96920u));
    /* 006f4940: mov edx, ecx */ r_edx = r_ecx;
    /* 006f4942: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006f4945: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f494b: je 0x6f495b */ if (fZ) goto L_006f495b;
L_006f494d:; BB(0x006f494d);
    /* 006f494d: mov eax, 0x91a2b3c5 */ r_eax = 0x91a2b3c5u;
    /* 006f4952: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 006f4954: mov ebx, edx */ r_ebx = r_edx;
    /* 006f4956: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006f4959: jmp 0x6f4967 */ goto L_006f4967;
L_006f495b:; BB(0x006f495b);
    /* 006f495b: mov eax, 0x91a2b3c5 */ r_eax = 0x91a2b3c5u;
    /* 006f4960: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 006f4962: mov ebx, edx */ r_ebx = r_edx;
    /* 006f4964: shr ebx, 9 */ { u32 c = (9u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
L_006f4967:; BB(0x006f4967);
    /* 006f4967: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f496d: je 0x6f4971 */ if (fZ) goto L_006f4971;
L_006f496f:; BB(0x006f496f);
    /* 006f496f: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
L_006f4971:; BB(0x006f4971);
    /* 006f4971: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4976: push 0xa5 */ { u32 v = 0xa5u; r_esp -= 4; W32(r_esp, v); }
    /* 006f497b: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4980: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 006f4985: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006f4986: push 0x73 */ { u32 v = 0x73u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4988: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 006f498a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f498c: call 0x7a919c */ r_esp -= 4; W32(r_esp, 0x6f4991u); f_007a919c();
    /* 006f4991: mov edi, eax */ r_edi = r_eax;
    /* 006f4993: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f4996: mov dword ptr [esp + 0x78], 0 */ W32((u32)(r_esp+0x78u), 0x0u);
    /* 006f499e: mov dword ptr [esp + 0x7c], 0 */ W32((u32)(r_esp+0x7cu), 0x0u);
    /* 006f49a6: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x6f49abu); f_007a902c();
    /* 006f49ab: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006f49b0: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x6f49b5u); f_0082bb30();
    /* 006f49b5: call 0x6fb8c0 */ r_esp -= 4; W32(r_esp, 0x6f49bau); f_006fb8c0();
    /* 006f49ba: mov ecx, 0xb */ r_ecx = 0xbu;
    /* 006f49bf: mov edx, edi */ r_edx = r_edi;
    /* 006f49c1: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x6f49c6u); f_0082bb60();
    /* 006f49c6: mov dword ptr [esp + 0x6c], 0 */ W32((u32)(r_esp+0x6cu), 0x0u);
    /* 006f49ce: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 006f49d2: mov eax, ebx */ r_eax = r_ebx;
    /* 006f49d4: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006f49d6: mov dword ptr [esp + 0x70], 0 */ W32((u32)(r_esp+0x70u), 0x0u);
    /* 006f49de: mov ecx, esi */ r_ecx = r_esi;
    /* 006f49e0: mov dword ptr [esp + 0x74], 0x3f570000 */ W32((u32)(r_esp+0x74u), 0x3f570000u);
    /* 006f49e8: mov dword ptr [esp + 0x80], 0x3f570000 */ W32((u32)(r_esp+0x80u), 0x3f570000u);
    /* 006f49f3: mov dword ptr [esp + 0x54], 0x3c088889 */ W32((u32)(r_esp+0x54u), 0x3c088889u);
    /* 006f49fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f49fc: push 0x43d70000 */ { u32 v = 0x43d70000u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4a01: push 0xa96918 */ { u32 v = 0xa96918u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4a06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f4a07: call 0x6f46c4 */ r_esp -= 4; W32(r_esp, 0x6f4a0cu); f_006f46c4();
    /* 006f4a0c: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 006f4a10: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x6f4a15u); f_0082bb74();
    /* 006f4a15: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 006f4a1a: mov edx, edi */ r_edx = r_edi;
    /* 006f4a1c: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x6f4a21u); f_0082bb60();
    /* 006f4a21: mov eax, dword ptr [0xa96924] */ r_eax = R32((u32)(0xa96924u));
    /* 006f4a26: mov edi, dword ptr [0xa96928] */ r_edi = R32((u32)(0xa96928u));
    /* 006f4a2c: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 006f4a30: mov ecx, esi */ r_ecx = r_esi;
    /* 006f4a32: mov dword ptr [esp + 0x70], edi */ W32((u32)(r_esp+0x70u), r_edi);
    /* 006f4a36: mov dword ptr [esp + 0x74], 0x3eb20000 */ W32((u32)(r_esp+0x74u), 0x3eb20000u);
    /* 006f4a3e: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 006f4a42: mov dword ptr [esp + 0x80], 0x3eb20000 */ W32((u32)(r_esp+0x80u), 0x3eb20000u);
    /* 006f4a4d: mov dword ptr [esp + 0x54], 0x3c09ae41 */ W32((u32)(r_esp+0x54u), 0x3c09ae41u);
    /* 006f4a55: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f4a56: push 0x43320000 */ { u32 v = 0x43320000u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4a5b: push 0xa96918 */ { u32 v = 0xa96918u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4a60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f4a61: call 0x6f46c4 */ r_esp -= 4; W32(r_esp, 0x6f4a66u); f_006f46c4();
    /* 006f4a66: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 006f4a6a: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x6f4a6fu); f_0082bb74();
    /* 006f4a6f: mov eax, dword ptr [0xa9692c] */ r_eax = R32((u32)(0xa9692cu));
    /* 006f4a74: mov esi, dword ptr [0xa96930] */ r_esi = R32((u32)(0xa96930u));
    /* 006f4a7a: mov dword ptr [esp + 0x74], 0x3e500000 */ W32((u32)(r_esp+0x74u), 0x3e500000u);
    /* 006f4a82: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 006f4a85: mov dword ptr [esp + 0x80], 0x3e500000 */ W32((u32)(r_esp+0x80u), 0x3e500000u);
    /* 006f4a90: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 006f4a94: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006f4a96: mov dword ptr [esp + 0x70], esi */ W32((u32)(r_esp+0x70u), r_esi);
    /* 006f4a9a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006f4a9c:; BB(0x006f4a9c);
    /* 006f4a9c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f4a9e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6f4aa3u); f_0082ddd8();
    /* 006f4aa3: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 006f4aa7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f4aa9: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6f4aaeu); f_0082dcbc();
    /* 006f4aae: fld dword ptr [esi + 0x96e168] */ FPUSH(R_F32((u32)(r_esi+0x96e168u)));
    /* 006f4ab4: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 006f4ab8: fsubr dword ptr [0xa96918] */ ST(0) = R_F32((u32)(0xa96918u)) - ST(0);
    /* 006f4abe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f4ac0: fld dword ptr [esi + 0x96e16c] */ FPUSH(R_F32((u32)(r_esi+0x96e16cu)));
    /* 006f4ac6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 006f4ac8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f4aca: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006f4ace: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6f4ad3u); f_0082dcbc();
    /* 006f4ad3: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 006f4ad7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f4ad9: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6f4adeu); f_0082ddd8();
    /* 006f4ade: fld dword ptr [esi + 0x96e168] */ FPUSH(R_F32((u32)(r_esi+0x96e168u)));
    /* 006f4ae4: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 006f4ae8: fadd dword ptr [0xa9691c] */ ST(0) = ST(0) + R_F32((u32)(0xa9691cu));
    /* 006f4aee: fld dword ptr [esi + 0x96e16c] */ FPUSH(R_F32((u32)(r_esi+0x96e16cu)));
    /* 006f4af4: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 006f4af6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f4af8: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 006f4afc: mov dword ptr [esp + 0x54], 0x3c0ad8f3 */ W32((u32)(r_esp+0x54u), 0x3c0ad8f3u);
    /* 006f4b04: mov ecx, edi */ r_ecx = r_edi;
    /* 006f4b06: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6f4b0bu); f_0082dcbc();
    /* 006f4b0b: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 006f4b0f: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 006f4b13: fmul dword ptr [0x96e114] */ ST(0) = ST(0) * R_F32((u32)(0x96e114u));
    /* 006f4b19: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 006f4b1d: mov ecx, edi */ r_ecx = r_edi;
    /* 006f4b1f: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6f4b24u); f_0082ddd8();
    /* 006f4b24: fmul dword ptr [0x96e114] */ ST(0) = ST(0) * R_F32((u32)(0x96e114u));
    /* 006f4b2a: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 006f4b2e: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 006f4b32: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 006f4b36: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f4b38: fst dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0));
    /* 006f4b3c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f4b3e: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 006f4b42: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f4b44: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 006f4b48: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 006f4b4c: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 006f4b50: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f4b52: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 006f4b54: fmul dword ptr [0x96e144] */ ST(0) = ST(0) * R_F32((u32)(0x96e144u));
    /* 006f4b5a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f4b5c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f4b5e: fmul dword ptr [0x96e148] */ ST(0) = ST(0) * R_F32((u32)(0x96e148u));
    /* 006f4b64: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f4b66: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 006f4b68: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f4b6a: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 006f4b6e: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 006f4b70: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f4b72: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 006f4b76: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 006f4b7a: fchs  */ ST(0) = -ST(0);
    /* 006f4b7c: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 006f4b80: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x6f4b85u); f_0082bb74();
    /* 006f4b85: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006f4b88: cmp esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f4b8b: jl 0x6f4a9c */ if ((fS!=fO)) goto L_006f4a9c;
L_006f4b91:; BB(0x006f4b91);
    /* 006f4b91: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x6f4b96u); f_004ac444();
    /* 006f4b96: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x6f4b9bu); f_007a9044();
    /* 006f4b9b: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x6f4ba0u); f_004d2968();
    /* 006f4ba0: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x6f4ba5u); f_0082dab0();
    /* 006f4ba5: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f4bab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f4bac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f4bad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f4bae: ret  */ FN_RET(0x006f475c); r_esp += 4; return;
}

void f_006f4c04(void) /* sub_6F4C04 */
{
    FN_ENTER(0x006f4c04);
    /* 006f4c04: mov dword ptr [0xa96920], 0 */ W32((u32)(0xa96920u), 0x0u);
    /* 006f4c0e: ret  */ FN_RET(0x006f4c04); r_esp += 4; return;
}

void f_006f4c10(void) /* sub_6F4C10 */
{
    FN_ENTER(0x006f4c10);
    /* 006f4c10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f4c11: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f4c13: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f4c15: call 0x6f4c34 */ r_esp -= 4; W32(r_esp, 0x6f4c1au); f_006f4c34();
    /* 006f4c1a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006f4c1e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f4c20: jne 0x6f4c26 */ if (!fZ) goto L_006f4c26;
L_006f4c22:; BB(0x006f4c22);
    /* 006f4c22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f4c23: ret 4 */ FN_RET(0x006f4c10); r_esp += 8; return;
L_006f4c26:; BB(0x006f4c26);
    /* 006f4c26: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f4c27: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6f4c2cu); f_005c2f74();
    /* 006f4c2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f4c2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f4c2e: ret 4 */ FN_RET(0x006f4c10); r_esp += 8; return;
}

void f_006f4c34(void) /* sub_6F4C34 */
{
    FN_ENTER(0x006f4c34);
    /* 006f4c34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f4c35: mov ebp, esp */ r_ebp = r_esp;
    /* 006f4c37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f4c39: push 0x8efe84 */ { u32 v = 0x8efe84u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4c3e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f4c44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f4c45: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f4c4c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f4c4f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f4c52: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006f4c55: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006f4c58: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006f4c5b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006f4c5e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f4c61: mov dword ptr [ecx], 0xb3e9e8 */ W32((u32)(r_ecx), 0xb3e9e8u);
    /* 006f4c67: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006f4c6e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6f4c73u); f_008171e8();
    /* 006f4c73: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f4c76: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f4c7d: mov esp, ebp */ r_esp = r_ebp;
    /* 006f4c7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f4c80: ret  */ FN_RET(0x006f4c34); r_esp += 4; return;
}

void f_006f4c84(void) /* sub_6F4C84 */
{
    FN_ENTER(0x006f4c84);
    /* 006f4c84: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006f4c86: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4c88: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4c8a: push 0x96e220 */ { u32 v = 0x96e220u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4c8f: push 0xa96934 */ { u32 v = 0xa96934u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4c94: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x6f4c99u); f_00858bf5();
    /* 006f4c99: mov eax, 0xa96934 */ r_eax = 0xa96934u;
    /* 006f4c9e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f4ca1: ret  */ FN_RET(0x006f4c84); r_esp += 4; return;
}

void f_006f4ca4(void) /* sub_6F4CA4 */
{
    FN_ENTER(0x006f4ca4);
    /* 006f4ca4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f4ca5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f4ca6: mov esi, ecx */ r_esi = r_ecx;
    /* 006f4ca8: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 006f4cac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f4cad: mov ecx, esi */ r_ecx = r_esi;
    /* 006f4caf: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6f4cb4u); f_008193cc();
    /* 006f4cb4: mov dword ptr [esi], 0xb3e9e8 */ W32((u32)(r_esi), 0xb3e9e8u);
    /* 006f4cba: mov dword ptr [esi + 0x1c], ebp */ W32((u32)(r_esi+0x1cu), r_ebp);
    /* 006f4cbd: mov eax, esi */ r_eax = r_esi;
    /* 006f4cbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f4cc0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f4cc1: ret 4 */ FN_RET(0x006f4ca4); r_esp += 8; return;
}

void f_006f4cc4(void) /* sub_6F4CC4 */
{
    FN_ENTER(0x006f4cc4);
    /* 006f4cc4: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f4cc7: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6f4cccu); f_0082dbac();
    /* 006f4ccc: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x6f4cd1u); f_004d28a4();
    /* 006f4cd1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006f4cd6: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x6f4cdbu); f_0082bb30();
    /* 006f4cdb: call 0x6fb8c0 */ r_esp -= 4; W32(r_esp, 0x6f4ce0u); f_006fb8c0();
    /* 006f4ce0: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006f4ce5: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006f4cea: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x6f4cefu); f_0082bb60();
    /* 006f4cef: mov dword ptr [esp], 0x42800000 */ W32((u32)(r_esp), 0x42800000u);
    /* 006f4cf6: mov dword ptr [esp + 4], 0x42740000 */ W32((u32)(r_esp+0x4u), 0x42740000u);
    /* 006f4cfe: mov dword ptr [esp + 8], 0x43a00000 */ W32((u32)(r_esp+0x8u), 0x43a00000u);
    /* 006f4d06: mov dword ptr [esp + 0xc], 0x439e8000 */ W32((u32)(r_esp+0xcu), 0x439e8000u);
    /* 006f4d0e: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 006f4d16: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 006f4d1e: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 006f4d26: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 006f4d2e: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 006f4d33: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006f4d37: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x6f4d3cu); f_0082b440();
    /* 006f4d3c: mov ecx, 2 */ r_ecx = 0x2u;
    /* 006f4d41: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006f4d46: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x6f4d4bu); f_0082bb60();
    /* 006f4d4b: mov dword ptr [esp], 0x43a00000 */ W32((u32)(r_esp), 0x43a00000u);
    /* 006f4d52: mov dword ptr [esp + 4], 0x42740000 */ W32((u32)(r_esp+0x4u), 0x42740000u);
    /* 006f4d5a: mov dword ptr [esp + 8], 0x44100000 */ W32((u32)(r_esp+0x8u), 0x44100000u);
    /* 006f4d62: mov dword ptr [esp + 0xc], 0x439e8000 */ W32((u32)(r_esp+0xcu), 0x439e8000u);
    /* 006f4d6a: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 006f4d6f: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006f4d73: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x6f4d78u); f_0082b440();
    /* 006f4d78: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x6f4d7du); f_004ac444();
    /* 006f4d7d: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 006f4d81: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006f4d83: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4d85: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4d87: push 0x96e230 */ { u32 v = 0x96e230u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4d8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f4d8d: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x6f4d92u); f_00857e29();
    /* 006f4d92: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 006f4d96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f4d97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f4d99: push 0x3f7fff58 */ { u32 v = 0x3f7fff58u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4d9e: push 0x43e60000 */ { u32 v = 0x43e60000u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4da3: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4da8: call 0x789248 */ r_esp -= 4; W32(r_esp, 0x6f4dadu); f_00789248();
    /* 006f4dad: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f4db0: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x6f4db5u); f_004d2968();
    /* 006f4db5: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x6f4dbau); f_0082dab0();
    /* 006f4dba: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f4dbd: ret  */ FN_RET(0x006f4cc4); r_esp += 4; return;
}

void f_006f4dc0(void) /* sub_6F4DC0 */
{
    FN_ENTER(0x006f4dc0);
    /* 006f4dc0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f4dc1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f4dc3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f4dc5: call 0x6f4de4 */ r_esp -= 4; W32(r_esp, 0x6f4dcau); f_006f4de4();
    /* 006f4dca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006f4dce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f4dd0: jne 0x6f4dd6 */ if (!fZ) goto L_006f4dd6;
L_006f4dd2:; BB(0x006f4dd2);
    /* 006f4dd2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f4dd3: ret 4 */ FN_RET(0x006f4dc0); r_esp += 8; return;
L_006f4dd6:; BB(0x006f4dd6);
    /* 006f4dd6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f4dd7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6f4ddcu); f_005c2f74();
    /* 006f4ddc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f4ddd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f4dde: ret 4 */ FN_RET(0x006f4dc0); r_esp += 8; return;
}

void f_006f4de4(void) /* sub_6F4DE4 */
{
    FN_ENTER(0x006f4de4);
    /* 006f4de4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f4de5: mov ebp, esp */ r_ebp = r_esp;
    /* 006f4de7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f4de9: push 0x8efea0 */ { u32 v = 0x8efea0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4dee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f4df4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f4df5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f4dfc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f4dff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f4e02: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006f4e05: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006f4e08: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006f4e0b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006f4e0e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f4e15: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f4e18: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 006f4e1b: mov dword ptr [ecx], 0xb3ea90 */ W32((u32)(r_ecx), 0xb3ea90u);
    /* 006f4e21: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f4e23: mov dword ptr [0xa96954], 0 */ W32((u32)(0xa96954u), 0x0u);
    /* 006f4e2d: je 0x6f4e3f */ if (fZ) goto L_006f4e3f;
L_006f4e2f:; BB(0x006f4e2f);
    /* 006f4e2f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f4e32: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006f4e36: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f4e3b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006f4e3f:; BB(0x006f4e3f);
    /* 006f4e3f: call 0x6f4e6c */ r_esp -= 4; W32(r_esp, 0x6f4e44u); f_006f4e6c();
    /* 006f4e44: call 0x4d4438 */ r_esp -= 4; W32(r_esp, 0x6f4e49u); f_004d4438();
    /* 006f4e49: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x6f4e4eu); f_00815434();
    /* 006f4e4e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006f4e55: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f4e58: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6f4e5du); f_008171e8();
    /* 006f4e5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f4e60: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f4e67: mov esp, ebp */ r_esp = r_ebp;
    /* 006f4e69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f4e6a: ret  */ FN_RET(0x006f4de4); r_esp += 4; return;
}

void f_006f4e6c(void) /* sub_6F4E6C */
{
    FN_ENTER(0x006f4e6c);
    /* 006f4e6c: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 006f4e6f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f4e71: je 0x6f4e87 */ if (fZ) goto L_006f4e87;
L_006f4e73:; BB(0x006f4e73);
    /* 006f4e73: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006f4e77: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f4e7c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006f4e80: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
L_006f4e87:; BB(0x006f4e87);
    /* 006f4e87: ret  */ FN_RET(0x006f4e6c); r_esp += 4; return;
}

void f_006f4e88(void) /* sub_6F4E88 */
{
    FN_ENTER(0x006f4e88);
    /* 006f4e88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f4e89: mov ebp, esp */ r_ebp = r_esp;
    /* 006f4e8b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f4e8e: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 006f4e91: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 006f4e94: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 006f4e97: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 006f4e98: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4e9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4e9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f4e9e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f4ea0: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x6f4ea6u); call_ind(t); }
    /* 006f4ea6: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 006f4ea7: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 006f4ea8: jmp 0x6f80c9 */ goto L_006f80c9;
L_006f80c9:; BB(0x006f80c9);
    /* 006f80c9: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 006f80ca: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006f80cc: push 0x9d04d8 */ { u32 v = 0x9d04d8u; r_esp -= 4; W32(r_esp, v); }
    /* 006f80d1: call 0x78b0a0 */ r_esp -= 4; W32(r_esp, 0x6f80d6u); f_0078b0a0();
    /* 006f80d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f80d9: mov ecx, dword ptr [0xa9696c] */ r_ecx = R32((u32)(0xa9696cu));
    /* 006f80df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f80e1: je 0x6f80f2 */ if (fZ) goto L_006f80f2;
L_006f80e3:; BB(0x006f80e3);
    /* 006f80e3: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x6f80e8u); f_00829de0();
    /* 006f80e8: mov dword ptr [0xa9696c], 0 */ W32((u32)(0xa9696cu), 0x0u);
L_006f80f2:; BB(0x006f80f2);
    /* 006f80f2: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 006f80f3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006f80f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f80f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f80f9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f80fb: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x6f8101u); call_ind(t); }
    /* 006f8101: jmp 0x6f8121 */ goto L_006f8121;
L_006f8121:; BB(0x006f8121);
    /* 006f8121: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 006f8122: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f8125: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 006f8128: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 006f812b: mov esp, ebp */ r_esp = r_ebp;
    /* 006f812d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f812e: ret  */ FN_RET(0x006f4e88); r_esp += 4; return;
}

