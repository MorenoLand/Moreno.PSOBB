#include "protos.h"

void f_005e400c(void) /* sub_5E400C */
{
    FN_ENTER(0x005e400c);
    /* 005e400c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e400d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e400e: mov edi, ecx */ r_edi = r_ecx;
    /* 005e4010: push dword ptr [edi + 0x54] */ { u32 v = R32((u32)(r_edi+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4013: call 0x5c57ac */ r_esp -= 4; W32(r_esp, 0x5e4018u); f_005c57ac();
    /* 005e4018: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e4019: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e401b: je 0x5e4072 */ if (fZ) goto L_005e4072;
L_005e401d:; BB(0x005e401d);
    /* 005e401d: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
L_005e4021:; BB(0x005e4021);
    /* 005e4021: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e4026: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 005e402a: lea esi, [edi + 0x1c] */ r_esi = (u32)(r_edi+0x1cu);
    /* 005e402d: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005e4030: mov ecx, esi */ r_ecx = r_esi;
    /* 005e4032: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5e4037u); f_0082ebac();
    /* 005e4037: mov ecx, dword ptr [edi + 0x50] */ r_ecx = R32((u32)(r_edi+0x50u));
    /* 005e403a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e403c: je 0x5e4044 */ if (fZ) goto L_005e4044;
L_005e403e:; BB(0x005e403e);
    /* 005e403e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e403f: call 0x5073d0 */ r_esp -= 4; W32(r_esp, 0x5e4044u); f_005073d0();
L_005e4044:; BB(0x005e4044);
    /* 005e4044: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005e4046: mov ecx, edi */ r_ecx = r_edi;
    /* 005e4048: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5e404bu); call_ind(t); }
    /* 005e404b: fld dword ptr [0x92d530] */ FPUSH(R_F32((u32)(0x92d530u)));
    /* 005e4051: fadd dword ptr [edi + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x34u));
    /* 005e4054: fcom dword ptr [0x92d52c] */ fx_compare(ST(0), R_F32((u32)(0x92d52cu))); 
    /* 005e405a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e405c: fstp dword ptr [edi + 0x34] */ W_F32((u32)(r_edi+0x34u), ST(0)); FPOP();
    /* 005e405f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005e4060: ja 0x5e406f */ if ((!fC&&!fZ)) goto L_005e406f;
L_005e4062:; BB(0x005e4062);
    /* 005e4062: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 005e4066: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e406b: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_005e406f:; BB(0x005e406f);
    /* 005e406f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e4070: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e4071: ret  */ FN_RET(0x005e400c); r_esp += 4; return;
L_005e4072:; BB(0x005e4072);
    /* 005e4072: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 005e4076: or eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e4079: jmp 0x5e4021 */ goto L_005e4021;
}

void f_005e407c(void) /* sub_5E407C */
{
    FN_ENTER(0x005e407c);
    /* 005e407c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e407d: mov ebp, esp */ r_ebp = r_esp;
    /* 005e407f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4081: push 0x8db99c */ { u32 v = 0x8db99cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4086: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e408c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e408d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e4094: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e4097: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e409a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e409d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e40a0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e40a3: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 005e40a6: fcomp dword ptr [0x92d528] */ fx_compare(ST(0), R_F32((u32)(0x92d528u))); FPOP();
    /* 005e40ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e40ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005e40af: je 0x5e4147 */ if (fZ) goto L_005e4147;
L_005e40b5:; BB(0x005e40b5);
    /* 005e40b5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e40b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e40ba: je 0x5e4147 */ if (fZ) goto L_005e4147;
L_005e40c0:; BB(0x005e40c0);
    /* 005e40c0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005e40c7: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005e40c9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e40ceu); f_005caba4();
    /* 005e40ce: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e40d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e40d4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e40d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e40d9: je 0x5e4140 */ if (fZ) goto L_005e4140;
L_005e40db:; BB(0x005e40db);
    /* 005e40db: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005e40e2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e40e9: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e40ec: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e40ef: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e40f2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e40f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e40f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e40f9: call 0x5e4158 */ r_esp -= 4; W32(r_esp, 0x5e40feu); f_005e4158();
    /* 005e40fe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4101: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 005e4105: mov dword ptr [ecx], 0xb0ff6c */ W32((u32)(r_ecx), 0xb0ff6cu);
    /* 005e410b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005e410d: mov eax, dword ptr [0x9c283c] */ r_eax = R32((u32)(0x9c283cu));
    /* 005e4112: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005e4115: mov word ptr [ecx + 0x60], bx */ W16((u32)(r_ecx+0x60u), (u16)r_ebx);
    /* 005e4119: mov dword ptr [ecx + 0x58], ebx */ W32((u32)(r_ecx+0x58u), r_ebx);
    /* 005e411c: mov dword ptr [ecx + 0x5c], ebx */ W32((u32)(r_ecx+0x5cu), r_ebx);
    /* 005e411f: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4125: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 005e4128: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
L_005e412c:; BB(0x005e412c);
    /* 005e412c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e412f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e4132: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e4135: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e413c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e413e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e413f: ret  */ FN_RET(0x005e407c); r_esp += 4; return;
L_005e4140:; BB(0x005e4140);
    /* 005e4140: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4142: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e4145: jmp 0x5e412c */ goto L_005e412c;
L_005e4147:; BB(0x005e4147);
    /* 005e4147: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4149: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e414c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e4153: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4155: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4156: ret  */ FN_RET(0x005e407c); r_esp += 4; return;
}

void f_005e4158(void) /* sub_5E4158 */
{
    FN_ENTER(0x005e4158);
    /* 005e4158: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e4159: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e415a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e415b: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e415e: mov edi, ecx */ r_edi = r_ecx;
    /* 005e4160: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 005e4164: mov ecx, edi */ r_ecx = r_edi;
    /* 005e4166: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e416c: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5e4171u); f_008193cc();
    /* 005e4171: mov dword ptr [edi], 0xb0ff58 */ W32((u32)(r_edi), 0xb0ff58u);
    /* 005e4177: mov eax, dword ptr [0x9c2834] */ r_eax = R32((u32)(0x9c2834u));
    /* 005e417c: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 005e417f: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 005e4182: mov dword ptr [edi + 0x1c], ebx */ W32((u32)(r_edi+0x1cu), r_ebx);
    /* 005e4185: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 005e4188: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 005e418b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e418e: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 005e4191: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005e4195: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 005e4197: mov dword ptr [edi + 0x44], ebx */ W32((u32)(r_edi+0x44u), r_ebx);
    /* 005e419a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005e419d: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 005e41a0: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005e41a3: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 005e41a6: mov dword ptr [edi + 0x38], ebx */ W32((u32)(r_edi+0x38u), r_ebx);
    /* 005e41a9: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 005e41ac: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 005e41af: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 005e41b2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e41b4: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 005e41b8: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 005e41bb: mov edx, ebp */ r_edx = r_ebp;
    /* 005e41bd: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5e41c2u); f_0082f9c4();
    /* 005e41c2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e41c4: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x5e41c9u); f_0083173c();
    /* 005e41c9: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005e41cd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e41cf: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x5e41d4u); f_0082df08();
    /* 005e41d4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005e41d6: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005e41da: fdiv dword ptr [esp + 0x2c] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x2cu));
    /* 005e41de: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 005e41e1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005e41e3: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 005e41e6: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 005e41e9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005e41eb: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 005e41ed: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005e41ef: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005e41f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005e41f3: fst dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0));
    /* 005e41f6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005e41f8: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 005e41fb: fst dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0));
    /* 005e41fe: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005e4200: fmul qword ptr [0x92d510] */ ST(0) = ST(0) * R_F64((u32)(0x92d510u));
    /* 005e4206: fdiv qword ptr [0x92d508] */ ST(0) = ST(0) / R_F64((u32)(0x92d508u));
    /* 005e420c: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005e420f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005e4213: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e4218: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005e421c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005e4220: fistp dword ptr [edi + 0x2c] */ W32((u32)(r_edi+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005e4223: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005e4226: lea edx, [edi + 0x28] */ r_edx = (u32)(r_edi+0x28u);
    /* 005e4229: lea eax, [edi + 0x30] */ r_eax = (u32)(r_edi+0x30u);
    /* 005e422c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e422d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e422e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e422f: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x5e4234u); f_007a8d98();
    /* 005e4234: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 005e4238: movzx ebx, word ptr [edi + 8] */ r_ebx = (u32)R16((u32)(r_edi+0x8u));
    /* 005e423c: mov dword ptr [edi + 0x50], 0 */ W32((u32)(r_edi+0x50u), 0x0u);
    /* 005e4243: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 005e4249: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 005e424c: or ebx, 0xffff0010 */ {  u32 a = r_ebx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 005e4252: mov word ptr [edi + 8], bx */ W16((u32)(r_edi+0x8u), (u16)r_ebx);
    /* 005e4256: mov eax, edi */ r_eax = r_edi;
    /* 005e4258: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e425b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e425c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e425d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e425e: ret 0x10 */ FN_RET(0x005e4158); r_esp += 20; return;
}

void f_005e4264(void) /* sub_5E4264 */
{
    FN_ENTER(0x005e4264);
    /* 005e4264: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4265: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4269: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e426d: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4271: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4275: call 0x5e407c */ r_esp -= 4; W32(r_esp, 0x5e427au); f_005e407c();
    /* 005e427a: mov ebx, eax */ r_ebx = r_eax;
    /* 005e427c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e427f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4281: je 0x5e42b4 */ if (fZ) goto L_005e42b4;
L_005e4283:; BB(0x005e4283);
    /* 005e4283: push dword ptr [ebx + 0x58] */ { u32 v = R32((u32)(r_ebx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4286: mov edx, 4 */ r_edx = 0x4u;
    /* 005e428b: mov word ptr [ebx + 0x60], dx */ W16((u32)(r_ebx+0x60u), (u16)r_edx);
    /* 005e428f: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5e4294u); f_005cdcc0();
    /* 005e4294: movzx edx, word ptr [ebx + 0x60] */ r_edx = (u32)R16((u32)(r_ebx+0x60u));
    /* 005e4298: lea eax, [ebx + 0x1c] */ r_eax = (u32)(r_ebx+0x1cu);
    /* 005e429b: lea ecx, [ebx + 0x28] */ r_ecx = (u32)(r_ebx+0x28u);
    /* 005e429e: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005e42a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e42a2: push 0x9f */ { u32 v = 0x9fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e42a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e42a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e42a9: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x5e42aeu); f_00509dc4();
    /* 005e42ae: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e42b1: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
L_005e42b4:; BB(0x005e42b4);
    /* 005e42b4: mov eax, ebx */ r_eax = r_ebx;
    /* 005e42b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e42b7: ret  */ FN_RET(0x005e4264); r_esp += 4; return;
}

void f_005e42b8(void) /* sub_5E42B8 */
{
    FN_ENTER(0x005e42b8);
    /* 005e42b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e42b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e42ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e42bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e42bc: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 005e42c0: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 005e42c4: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 005e42c8: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005e42cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e42cd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e42ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e42cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e42d0: call 0x5e4350 */ r_esp -= 4; W32(r_esp, 0x5e42d5u); f_005e4350();
    /* 005e42d5: mov ebx, eax */ r_ebx = r_eax;
    /* 005e42d7: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 005e42db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e42dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e42dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e42de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e42df: call 0x5e407c */ r_esp -= 4; W32(r_esp, 0x5e42e4u); f_005e407c();
    /* 005e42e4: mov edi, eax */ r_edi = r_eax;
    /* 005e42e6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e42e9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e42eb: je 0x5e4347 */ if (fZ) goto L_005e4347;
L_005e42ed:; BB(0x005e42ed);
    /* 005e42ed: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e42ef: je 0x5e4347 */ if (fZ) goto L_005e4347;
L_005e42f1:; BB(0x005e42f1);
    /* 005e42f1: mov dword ptr [ebx + 0x60], 0x4000 */ W32((u32)(r_ebx+0x60u), 0x4000u);
    /* 005e42f8: push dword ptr [edi + 0x58] */ { u32 v = R32((u32)(r_edi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e42fb: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5e4300u); f_005cdcc0();
    /* 005e4300: movzx edx, word ptr [edi + 0x60] */ r_edx = (u32)R16((u32)(r_edi+0x60u));
    /* 005e4304: lea esi, [edi + 0x1c] */ r_esi = (u32)(r_edi+0x1cu);
    /* 005e4307: lea ebp, [edi + 0x28] */ r_ebp = (u32)(r_edi+0x28u);
    /* 005e430a: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005e430d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e430e: push 0x1bb */ { u32 v = 0x1bbu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4313: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4314: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e4315: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x5e431au); f_00509dc4();
    /* 005e431a: push dword ptr [edi + 0x5c] */ { u32 v = R32((u32)(r_edi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e431d: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 005e4320: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5e4325u); f_005cdcc0();
    /* 005e4325: movzx edx, word ptr [edi + 0x60] */ r_edx = (u32)R16((u32)(r_edi+0x60u));
    /* 005e4329: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005e432c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e432d: push 0x1bc */ { u32 v = 0x1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4332: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4333: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e4334: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x5e4339u); f_00509dc4();
    /* 005e4339: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e433c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e433d: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 005e4340: mov ecx, edi */ r_ecx = r_edi;
    /* 005e4342: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x5e4347u); f_008172d4();
L_005e4347:; BB(0x005e4347);
    /* 005e4347: mov eax, ebx */ r_eax = r_ebx;
    /* 005e4349: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e434a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e434b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e434c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e434d: ret  */ FN_RET(0x005e42b8); r_esp += 4; return;
}

void f_005e4350(void) /* sub_5E4350 */
{
    FN_ENTER(0x005e4350);
    /* 005e4350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4351: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4353: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4355: push 0x8db9c4 */ { u32 v = 0x8db9c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e435a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e4360: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4361: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e4368: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e436b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e436e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e4371: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e4374: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e4377: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fO = 0; }
    /* 005e4379: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 005e437c: fcomp dword ptr [0x92d524] */ fx_compare(ST(0), R_F32((u32)(0x92d524u))); FPOP();
    /* 005e4382: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e4384: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005e4385: je 0x5e43d1 */ if (fZ) goto L_005e43d1;
L_005e4387:; BB(0x005e4387);
    /* 005e4387: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e438a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e438c: je 0x5e43d1 */ if (fZ) goto L_005e43d1;
L_005e438e:; BB(0x005e438e);
    /* 005e438e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005e4395: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4397: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e439cu); f_005caba4();
    /* 005e439c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e439d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e43a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e43a2: je 0x5e43e1 */ if (fZ) goto L_005e43e1;
L_005e43a4:; BB(0x005e43a4);
    /* 005e43a4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005e43ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e43b2: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e43b5: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e43b8: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e43bb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e43be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e43c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e43c2: call 0x5e43e8 */ r_esp -= 4; W32(r_esp, 0x5e43c7u); f_005e43e8();
    /* 005e43c7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e43ca: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005e43d1:; BB(0x005e43d1);
    /* 005e43d1: mov eax, ecx */ r_eax = r_ecx;
    /* 005e43d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e43d6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e43dd: mov esp, ebp */ r_esp = r_ebp;
    /* 005e43df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e43e0: ret  */ FN_RET(0x005e4350); r_esp += 4; return;
L_005e43e1:; BB(0x005e43e1);
    /* 005e43e1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e43e3: jmp 0x5e43d1 */ goto L_005e43d1;
}

void f_005e43e8(void) /* sub_5E43E8 */
{
    FN_ENTER(0x005e43e8);
    /* 005e43e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e43e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e43ea: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e43ed: mov edi, ecx */ r_edi = r_ecx;
    /* 005e43ef: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 005e43f3: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e43f7: mov ecx, edi */ r_ecx = r_edi;
    /* 005e43f9: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e43fd: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4401: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e4402: call 0x5e4158 */ r_esp -= 4; W32(r_esp, 0x5e4407u); f_005e4158();
    /* 005e4407: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 005e440a: mov dword ptr [edi], 0xb0cd38 */ W32((u32)(r_edi), 0xb0cd38u);
    /* 005e4410: mov edx, dword ptr [0x9c2838] */ r_edx = R32((u32)(0x9c2838u));
    /* 005e4416: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 005e4419: mov eax, dword ptr [esi + 0x1ac] */ r_eax = R32((u32)(r_esi+0x1acu));
    /* 005e441f: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 005e4422: fcomp dword ptr [0x92d520] */ fx_compare(ST(0), R_F32((u32)(0x92d520u))); FPOP();
    /* 005e4428: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e442a: mov esi, dword ptr [esi + 0x24] */ r_esi = R32((u32)(r_esi+0x24u));
    /* 005e442d: mov dword ptr [edi + 0x5c], esi */ W32((u32)(r_edi+0x5cu), r_esi);
    /* 005e4430: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005e4431: je 0x5e4488 */ if (fZ) goto L_005e4488;
L_005e4433:; BB(0x005e4433);
    /* 005e4433: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 005e4436: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005e4438: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 005e443b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005e443d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005e443f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e4440: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005e4443: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x5e4448u); f_0082dc9c();
    /* 005e4448: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 005e444b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005e444d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005e444f: fmul qword ptr [0x92d500] */ ST(0) = ST(0) * R_F64((u32)(0x92d500u));
    /* 005e4455: fdiv qword ptr [0x92d4f8] */ ST(0) = ST(0) / R_F64((u32)(0x92d4f8u));
    /* 005e445b: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005e445e: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005e4462: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e4467: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005e446b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005e446f: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005e4473: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005e4476: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005e447a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e447c: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 005e447f: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
    /* 005e4486: jmp 0x5e4490 */ goto L_005e4490;
L_005e4488:; BB(0x005e4488);
    /* 005e4488: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e448a: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005e448d: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
L_005e4490:; BB(0x005e4490);
    /* 005e4490: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e4492: mov dword ptr [edi + 0x68], edx */ W32((u32)(r_edi+0x68u), r_edx);
    /* 005e4495: mov dword ptr [edi + 0x64], edx */ W32((u32)(r_edi+0x64u), r_edx);
    /* 005e4498: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 005e449b: mov eax, edi */ r_eax = r_edi;
    /* 005e449d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e44a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e44a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e44a2: ret 0x10 */ FN_RET(0x005e43e8); r_esp += 20; return;
}

void f_005e44a8(void) /* sub_5E44A8 */
{
    FN_ENTER(0x005e44a8);
    /* 005e44a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e44a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e44aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e44ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e44ac: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 005e44b0: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 005e44b4: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 005e44b8: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005e44bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e44bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e44be: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e44bf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e44c0: call 0x5e4350 */ r_esp -= 4; W32(r_esp, 0x5e44c5u); f_005e4350();
    /* 005e44c5: mov ebx, eax */ r_ebx = r_eax;
    /* 005e44c7: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 005e44cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e44cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e44cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e44ce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e44cf: call 0x5e407c */ r_esp -= 4; W32(r_esp, 0x5e44d4u); f_005e407c();
    /* 005e44d4: mov ebp, eax */ r_ebp = r_eax;
    /* 005e44d6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e44d9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e44db: je 0x5e4511 */ if (fZ) goto L_005e4511;
L_005e44dd:; BB(0x005e44dd);
    /* 005e44dd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e44df: je 0x5e4511 */ if (fZ) goto L_005e4511;
L_005e44e1:; BB(0x005e44e1);
    /* 005e44e1: push dword ptr [ebp + 0x58] */ { u32 v = R32((u32)(r_ebp+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e44e4: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5e44e9u); f_005cdcc0();
    /* 005e44e9: movzx edx, word ptr [ebp + 0x60] */ r_edx = (u32)R16((u32)(r_ebp+0x60u));
    /* 005e44ed: lea edi, [ebp + 0x1c] */ r_edi = (u32)(r_ebp+0x1cu);
    /* 005e44f0: lea esi, [ebp + 0x28] */ r_esi = (u32)(r_ebp+0x28u);
    /* 005e44f3: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005e44f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e44f7: push 0x1bd */ { u32 v = 0x1bdu; r_esp -= 4; W32(r_esp, v); }
    /* 005e44fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e44fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e44fe: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x5e4503u); f_00509dc4();
    /* 005e4503: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4506: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4507: mov dword ptr [ebp + 0x58], eax */ W32((u32)(r_ebp+0x58u), r_eax);
    /* 005e450a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e450c: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x5e4511u); f_008172d4();
L_005e4511:; BB(0x005e4511);
    /* 005e4511: mov eax, ebx */ r_eax = r_ebx;
    /* 005e4513: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e4514: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4515: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e4516: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e4517: ret  */ FN_RET(0x005e44a8); r_esp += 4; return;
}

void f_005e4518(void) /* sub_5E4518 */
{
    FN_ENTER(0x005e4518);
    /* 005e4518: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4519: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e451d: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4521: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4525: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4529: call 0x5e407c */ r_esp -= 4; W32(r_esp, 0x5e452eu); f_005e407c();
    /* 005e452e: mov ebp, eax */ r_ebp = r_eax;
    /* 005e4530: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4533: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4535: je 0x5e455c */ if (fZ) goto L_005e455c;
L_005e4537:; BB(0x005e4537);
    /* 005e4537: push dword ptr [ebp + 0x58] */ { u32 v = R32((u32)(r_ebp+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e453a: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5e453fu); f_005cdcc0();
    /* 005e453f: movzx edx, word ptr [ebp + 0x60] */ r_edx = (u32)R16((u32)(r_ebp+0x60u));
    /* 005e4543: lea eax, [ebp + 0x1c] */ r_eax = (u32)(r_ebp+0x1cu);
    /* 005e4546: lea ecx, [ebp + 0x28] */ r_ecx = (u32)(r_ebp+0x28u);
    /* 005e4549: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005e454c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e454d: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005e454f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4550: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4551: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x5e4556u); f_00509dc4();
    /* 005e4556: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e4559: mov dword ptr [ebp + 0x58], eax */ W32((u32)(r_ebp+0x58u), r_eax);
L_005e455c:; BB(0x005e455c);
    /* 005e455c: mov eax, ebp */ r_eax = r_ebp;
    /* 005e455e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e455f: ret  */ FN_RET(0x005e4518); r_esp += 4; return;
}

void f_005e4560(void) /* sub_5E4560 */
{
    FN_ENTER(0x005e4560);
    /* 005e4560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e4561: mov esi, ecx */ r_esi = r_ecx;
    /* 005e4563: mov ecx, esi */ r_ecx = r_esi;
    /* 005e4565: call 0x5e45c0 */ r_esp -= 4; W32(r_esp, 0x5e456au); f_005e45c0();
    /* 005e456a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e456c: je 0x5e45bc */ if (fZ) goto L_005e45bc;
L_005e456e:; BB(0x005e456e);
    /* 005e456e: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 005e4571: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4573: je 0x5e45bc */ if (fZ) goto L_005e45bc;
L_005e4575:; BB(0x005e4575);
    /* 005e4575: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4578: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5e457du); f_0081a9b8();
    /* 005e457d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e457e: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5e4583u); f_0082dbac();
    /* 005e4583: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5e4588u); f_0082d7b0();
    /* 005e4588: lea ecx, [esi + 0x1c] */ r_ecx = (u32)(r_esi+0x1cu);
    /* 005e458b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5e4590u); f_0082d838();
    /* 005e4590: lea ecx, [esi + 0x28] */ r_ecx = (u32)(r_esi+0x28u);
    /* 005e4593: mov edx, 1 */ r_edx = 0x1u;
    /* 005e4598: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x5e459du); f_00830df8();
    /* 005e459d: lea ecx, [esi + 0x60] */ r_ecx = (u32)(r_esi+0x60u);
    /* 005e45a0: mov edx, 1 */ r_edx = 0x1u;
    /* 005e45a5: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x5e45aau); f_00830df8();
    /* 005e45aa: mov ecx, dword ptr [esi + 0x58] */ r_ecx = R32((u32)(r_esi+0x58u));
    /* 005e45ad: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5e45b2u); f_00831758();
    /* 005e45b2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5e45b7u); f_0082da80();
    /* 005e45b7: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5e45bcu); f_0082dab0();
L_005e45bc:; BB(0x005e45bc);
    /* 005e45bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e45bd: ret  */ FN_RET(0x005e4560); r_esp += 4; return;
}

void f_005e45c0(void) /* sub_5E45C0 */
{
    FN_ENTER(0x005e45c0);
    /* 005e45c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e45c1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005e45c3: push dword ptr [ebp + 0x54] */ { u32 v = R32((u32)(r_ebp+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e45c6: call 0x5c57ac */ r_esp -= 4; W32(r_esp, 0x5e45cbu); f_005c57ac();
    /* 005e45cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e45cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e45ce: je 0x5e45db */ if (fZ) goto L_005e45db;
L_005e45d0:; BB(0x005e45d0);
    /* 005e45d0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e45d2: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5e45d7u); f_008173b4();
    /* 005e45d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e45d9: jne 0x5e45df */ if (!fZ) goto L_005e45df;
L_005e45db:; BB(0x005e45db);
    /* 005e45db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e45dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e45de: ret  */ FN_RET(0x005e45c0); r_esp += 4; return;
L_005e45df:; BB(0x005e45df);
    /* 005e45df: mov eax, 1 */ r_eax = 0x1u;
    /* 005e45e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e45e5: ret  */ FN_RET(0x005e45c0); r_esp += 4; return;
}

void f_005e45e8(void) /* sub_5E45E8 */
{
    FN_ENTER(0x005e45e8);
    /* 005e45e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e45e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e45ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e45eb: lea edx, [ecx + 0x58] */ r_edx = (u32)(r_ecx+0x58u);
    /* 005e45ee: lea eax, [ecx + 0x60] */ r_eax = (u32)(r_ecx+0x60u);
    /* 005e45f1: mov ebx, eax */ r_ebx = r_eax;
    /* 005e45f3: mov esi, edx */ r_esi = r_edx;
    /* 005e45f5: mov edi, ecx */ r_edi = r_ecx;
L_005e45f7:; BB(0x005e45f7);
    /* 005e45f7: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 005e45f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e45fb: je 0x5e4617 */ if (fZ) goto L_005e4617;
L_005e45fd:; BB(0x005e45fd);
    /* 005e45fd: lea eax, [edi + 0x1c] */ r_eax = (u32)(r_edi+0x1cu);
    /* 005e4600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4601: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5e4606u); f_00508db8();
    /* 005e4606: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 005e4608: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5e460du); f_008173b4();
    /* 005e460d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e460f: jne 0x5e4617 */ if (!fZ) goto L_005e4617;
L_005e4611:; BB(0x005e4611);
    /* 005e4611: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_005e4617:; BB(0x005e4617);
    /* 005e4617: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e461a: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e461c: ja 0x5e45f7 */ if ((!fC&&!fZ)) goto L_005e45f7;
L_005e461e:; BB(0x005e461e);
    /* 005e461e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e461f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e4620: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e4621: ret  */ FN_RET(0x005e45e8); r_esp += 4; return;
}

void f_005e4624(void) /* sub_5E4624 */
{
    FN_ENTER(0x005e4624);
    /* 005e4624: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e4625: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4626: mov edi, ecx */ r_edi = r_ecx;
    /* 005e4628: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 005e462c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e462e: jl 0x5e4635 */ if ((fS!=fO)) goto L_005e4635;
L_005e4630:; BB(0x005e4630);
    /* 005e4630: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e4633: jl 0x5e463c */ if ((fS!=fO)) goto L_005e463c;
L_005e4635:; BB(0x005e4635);
    /* 005e4635: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4637: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e4638: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e4639: ret 8 */ FN_RET(0x005e4624); r_esp += 12; return;
L_005e463c:; BB(0x005e463c);
    /* 005e463c: push dword ptr [edi + ebx*4 + 0x58] */ { u32 v = R32((u32)(r_edi+r_ebx*4+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4640: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5e4645u); f_005cdcc0();
    /* 005e4645: movzx eax, word ptr [edi + 0x60] */ r_eax = (u32)R16((u32)(r_edi+0x60u));
    /* 005e4649: lea ecx, [edi + 0x1c] */ r_ecx = (u32)(r_edi+0x1cu);
    /* 005e464c: lea edx, [edi + 0x28] */ r_edx = (u32)(r_edi+0x28u);
    /* 005e464f: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e4652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4653: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4657: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4658: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4659: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x5e465eu); f_00509dc4();
    /* 005e465e: mov dword ptr [edi + ebx*4 + 0x58], eax */ W32((u32)(r_edi+r_ebx*4+0x58u), r_eax);
    /* 005e4662: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e4665: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e4666: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e4667: ret 8 */ FN_RET(0x005e4624); r_esp += 12; return;
}

void f_005e466c(void) /* sub_5E466C */
{
    FN_ENTER(0x005e466c);
    /* 005e466c: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 005e466f: add eax, 0x1999 */ {  u32 a = r_eax; u32 b = 0x1999u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e4674: mov dword ptr [ecx + 0x6c], eax */ W32((u32)(r_ecx+0x6cu), r_eax);
    /* 005e4677: ret  */ FN_RET(0x005e466c); r_esp += 4; return;
}

void f_005e4678(void) /* sub_5E4678 */
{
    FN_ENTER(0x005e4678);
    /* 005e4678: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4679: mov ebp, esp */ r_ebp = r_esp;
    /* 005e467b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e467d: push 0x8db9ec */ { u32 v = 0x8db9ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4682: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e4688: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4689: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e4690: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e4693: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e4696: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e4699: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e469c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e469f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e46a2: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005e46a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e46a5: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5e46aau); f_0050b510();
    /* 005e46aa: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005e46b1: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 005e46b3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e46b8u); f_005caba4();
    /* 005e46b8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e46bb: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e46be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e46c0: je 0x5e46fd */ if (fZ) goto L_005e46fd;
L_005e46c2:; BB(0x005e46c2);
    /* 005e46c2: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005e46c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e46d0: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e46d3: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e46d6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e46d9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e46dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e46dd: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e46e0: call 0x5e4704 */ r_esp -= 4; W32(r_esp, 0x5e46e5u); f_005e4704();
    /* 005e46e5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e46e8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005e46ef:; BB(0x005e46ef);
    /* 005e46ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e46f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e46f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005e46fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e46fc: ret  */ FN_RET(0x005e4678); r_esp += 4; return;
L_005e46fd:; BB(0x005e46fd);
    /* 005e46fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e46ff: jmp 0x5e46ef */ goto L_005e46ef;
}

void f_005e4704(void) /* sub_5E4704 */
{
    FN_ENTER(0x005e4704);
    /* 005e4704: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4705: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4707: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4709: push 0x8dba08 */ { u32 v = 0x8dba08u; r_esp -= 4; W32(r_esp, v); }
    /* 005e470e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e4714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4715: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e471c: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e471f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e4722: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e4725: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e4728: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e472b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e472e: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4731: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4734: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4737: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4738: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005e473b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e473e: call 0x5e43e8 */ r_esp -= 4; W32(r_esp, 0x5e4743u); f_005e43e8();
    /* 005e4743: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e474a: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e474d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4750: mov dword ptr [edx], 0xb0ff80 */ W32((u32)(r_edx), 0xb0ff80u);
    /* 005e4756: mov eax, dword ptr [0x9c2840] */ r_eax = R32((u32)(0x9c2840u));
    /* 005e475b: lea ebx, [ebp - 0x60] */ r_ebx = (u32)(r_ebp+0xffffffa0u);
    /* 005e475e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e475f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005e4762: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005e4764: call dword ptr [esi + 0xec] */ { u32 t = R32((u32)(r_esi+0xecu)); r_esp -= 4; W32(r_esp, 0x5e476au); call_ind(t); }
    /* 005e476a: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4770: mov esi, dword ptr [0x92d4e0] */ r_esi = R32((u32)(0x92d4e0u));
    /* 005e4776: mov edi, dword ptr [0x92d4e4] */ r_edi = R32((u32)(0x92d4e4u));
    /* 005e477c: mov edx, dword ptr [0x92d4e8] */ r_edx = R32((u32)(0x92d4e8u));
    /* 005e4782: mov ecx, dword ptr [0x92d4ec] */ r_ecx = R32((u32)(0x92d4ecu));
    /* 005e4788: mov ebx, dword ptr [0x92d4f0] */ r_ebx = R32((u32)(0x92d4f0u));
    /* 005e478e: fld dword ptr [0x92d51c] */ FPUSH(R_F32((u32)(0x92d51cu)));
    /* 005e4794: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 005e4797: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005e4799: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 005e479c: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 005e47a0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e47a5: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005e47a8: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 005e47ab: fistp qword ptr [ebp - 0x28] */ W64((u32)(r_ebp+0xffffffd8u), (u64)fx_int64(ST(0))); FPOP();
    /* 005e47ae: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 005e47b1: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 005e47b4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e47b7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005e47b9: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
    /* 005e47bc: mov dword ptr [ebp - 0x4c], edi */ W32((u32)(r_ebp+0xffffffb4u), r_edi);
    /* 005e47bf: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005e47c2: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e47c5: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005e47c8: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 005e47cb: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e47ce: mov byte ptr [ebp - 0x47], al */ W8((u32)(r_ebp+0xffffffb9u), (u8)r_eax);
    /* 005e47d1: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 005e47d4: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 005e47d8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e47dd: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005e47e0: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 005e47e3: fistp qword ptr [ebp - 0x28] */ W64((u32)(r_ebp+0xffffffd8u), (u64)fx_int64(ST(0))); FPOP();
    /* 005e47e6: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 005e47e9: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 005e47ec: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005e47ee: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e47f1: mov byte ptr [ebp - 0x46], al */ W8((u32)(r_ebp+0xffffffbau), (u8)r_eax);
    /* 005e47f4: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 005e47f7: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 005e47fb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e4800: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005e4803: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 005e4806: fistp qword ptr [ebp - 0x28] */ W64((u32)(r_ebp+0xffffffd8u), (u64)fx_int64(ST(0))); FPOP();
    /* 005e4809: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 005e480c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e480f: mov byte ptr [ebp - 0x45], al */ W8((u32)(r_ebp+0xffffffbbu), (u8)r_eax);
    /* 005e4812: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 005e4815: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4816: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4817: call 0x5dd76c */ r_esp -= 4; W32(r_esp, 0x5e481cu); f_005dd76c();
    /* 005e481c: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e481f: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 005e4822: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e4825: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4826: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4828: call 0x5d7ab8 */ r_esp -= 4; W32(r_esp, 0x5e482du); f_005d7ab8();
    /* 005e482d: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e4830: add eax, 0x5c */ {  u32 a = r_eax; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e4833: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4834: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4836: call 0x5d7ad4 */ r_esp -= 4; W32(r_esp, 0x5e483bu); f_005d7ad4();
    /* 005e483b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e483e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e4841: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4844: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
    /* 005e484b: call 0x5e94c8 */ r_esp -= 4; W32(r_esp, 0x5e4850u); f_005e94c8();
    /* 005e4850: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e4853: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4855: jl 0x5e485c */ if ((fS!=fO)) goto L_005e485c;
L_005e4857:; BB(0x005e4857);
    /* 005e4857: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e485a: jle 0x5e4865 */ if ((fZ||fS!=fO)) goto L_005e4865;
L_005e485c:; BB(0x005e485c);
    /* 005e485c: mov dword ptr [edx + 0x70], 4 */ W32((u32)(r_edx+0x70u), 0x4u);
    /* 005e4863: jmp 0x5e4868 */ goto L_005e4868;
L_005e4865:; BB(0x005e4865);
    /* 005e4865: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
L_005e4868:; BB(0x005e4868);
    /* 005e4868: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e486b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e486e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e4871: mov eax, edx */ r_eax = r_edx;
    /* 005e4873: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e4876: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e487d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e487f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4880: ret 0x10 */ FN_RET(0x005e4704); r_esp += 20; return;
}

void f_005e4884(void) /* sub_5E4884 */
{
    FN_ENTER(0x005e4884);
    /* 005e4884: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4885: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4887: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4889: push 0x8dba30 */ { u32 v = 0x8dba30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e488e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e4894: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4895: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e489c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e489f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e48a2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e48a5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e48a8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e48ab: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e48ae: push 0x1bf */ { u32 v = 0x1bfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e48b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e48b4: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5e48b9u); f_0050b510();
    /* 005e48b9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005e48c0: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 005e48c2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e48c7u); f_005caba4();
    /* 005e48c7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e48ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e48cd: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e48d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e48d2: je 0x5e491a */ if (fZ) goto L_005e491a;
L_005e48d4:; BB(0x005e48d4);
    /* 005e48d4: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005e48db: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e48e2: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e48e5: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e48e8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e48eb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e48ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e48ef: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e48f2: call 0x5e4704 */ r_esp -= 4; W32(r_esp, 0x5e48f7u); f_005e4704();
    /* 005e48f7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005e48fe:; BB(0x005e48fe);
    /* 005e48fe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e4901: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4903: je 0x5e490c */ if (fZ) goto L_005e490c;
L_005e4905:; BB(0x005e4905);
    /* 005e4905: mov dword ptr [eax + 0x70], 4 */ W32((u32)(r_eax+0x70u), 0x4u);
L_005e490c:; BB(0x005e490c);
    /* 005e490c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e490f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e4916: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4918: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4919: ret  */ FN_RET(0x005e4884); r_esp += 4; return;
L_005e491a:; BB(0x005e491a);
    /* 005e491a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e491c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e491f: jmp 0x5e48fe */ goto L_005e48fe;
}

void f_005e4924(void) /* sub_5E4924 */
{
    FN_ENTER(0x005e4924);
    /* 005e4924: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e4925: mov esi, ecx */ r_esi = r_ecx;
    /* 005e4927: mov ecx, esi */ r_ecx = r_esi;
    /* 005e4929: call 0x5e45c0 */ r_esp -= 4; W32(r_esp, 0x5e492eu); f_005e45c0();
    /* 005e492e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4930: je 0x5e4982 */ if (fZ) goto L_005e4982;
L_005e4932:; BB(0x005e4932);
    /* 005e4932: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 005e4935: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4937: je 0x5e4982 */ if (fZ) goto L_005e4982;
L_005e4939:; BB(0x005e4939);
    /* 005e4939: movzx eax, word ptr [esi + 0x70] */ r_eax = (u32)R16((u32)(r_esi+0x70u));
    /* 005e493d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e493e: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4941: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x5e4946u); f_0081a588();
    /* 005e4946: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4949: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5e494eu); f_0081a9b8();
    /* 005e494e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4951: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5e4956u); f_0082dbac();
    /* 005e4956: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5e495bu); f_0082d7b0();
    /* 005e495b: lea ecx, [esi + 0x1c] */ r_ecx = (u32)(r_esi+0x1cu);
    /* 005e495e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5e4963u); f_0082d838();
    /* 005e4963: lea ecx, [esi + 0x28] */ r_ecx = (u32)(r_esi+0x28u);
    /* 005e4966: mov edx, 1 */ r_edx = 0x1u;
    /* 005e496b: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x5e4970u); f_00830df8();
    /* 005e4970: mov ecx, dword ptr [esi + 0x58] */ r_ecx = R32((u32)(r_esi+0x58u));
    /* 005e4973: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5e4978u); f_00831758();
    /* 005e4978: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5e497du); f_0082da80();
    /* 005e497d: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5e4982u); f_0082dab0();
L_005e4982:; BB(0x005e4982);
    /* 005e4982: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e4983: ret  */ FN_RET(0x005e4924); r_esp += 4; return;
}

void f_005e4984(void) /* sub_5E4984 */
{
    FN_ENTER(0x005e4984);
    /* 005e4984: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005e4987: add eax, 0xccc */ {  u32 a = r_eax; u32 b = 0xcccu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e498c: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 005e498f: ret  */ FN_RET(0x005e4984); r_esp += 4; return;
}

void f_005e4990(void) /* sub_5E4990 */
{
    FN_ENTER(0x005e4990);
    /* 005e4990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4991: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4993: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4995: push 0x8dba58 */ { u32 v = 0x8dba58u; r_esp -= 4; W32(r_esp, v); }
    /* 005e499a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e49a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e49a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e49a8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e49ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e49ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e49b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e49b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e49b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fO = 0; }
    /* 005e49b9: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 005e49bc: fcomp dword ptr [0x92d518] */ fx_compare(ST(0), R_F32((u32)(0x92d518u))); FPOP();
    /* 005e49c2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e49c4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005e49c5: je 0x5e4a11 */ if (fZ) goto L_005e4a11;
L_005e49c7:; BB(0x005e49c7);
    /* 005e49c7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e49ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e49cc: je 0x5e4a11 */ if (fZ) goto L_005e4a11;
L_005e49ce:; BB(0x005e49ce);
    /* 005e49ce: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005e49d5: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e49d7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e49dcu); f_005caba4();
    /* 005e49dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e49dd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e49e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e49e2: je 0x5e4a21 */ if (fZ) goto L_005e4a21;
L_005e49e4:; BB(0x005e49e4);
    /* 005e49e4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005e49eb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e49f2: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e49f5: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e49f8: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e49fb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e49fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4a01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4a02: call 0x5e4a28 */ r_esp -= 4; W32(r_esp, 0x5e4a07u); f_005e4a28();
    /* 005e4a07: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e4a0a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005e4a11:; BB(0x005e4a11);
    /* 005e4a11: mov eax, ecx */ r_eax = r_ecx;
    /* 005e4a13: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e4a16: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e4a1d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4a1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4a20: ret  */ FN_RET(0x005e4990); r_esp += 4; return;
L_005e4a21:; BB(0x005e4a21);
    /* 005e4a21: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4a23: jmp 0x5e4a11 */ goto L_005e4a11;
}

void f_005e4a28(void) /* sub_5E4A28 */
{
    FN_ENTER(0x005e4a28);
    /* 005e4a28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4a29: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e4a2b: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4a2f: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4a33: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4a37: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4a3b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e4a3d: call 0x5e43e8 */ r_esp -= 4; W32(r_esp, 0x5e4a42u); f_005e43e8();
    /* 005e4a42: mov dword ptr [ebx], 0xb0ff94 */ W32((u32)(r_ebx), 0xb0ff94u);
    /* 005e4a48: mov edx, dword ptr [0x9c2844] */ r_edx = R32((u32)(0x9c2844u));
    /* 005e4a4e: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 005e4a51: mov eax, ebx */ r_eax = r_ebx;
    /* 005e4a53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e4a54: ret 0x10 */ FN_RET(0x005e4a28); r_esp += 20; return;
}

void f_005e4a58(void) /* sub_5E4A58 */
{
    FN_ENTER(0x005e4a58);
    /* 005e4a58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e4a59: mov esi, ecx */ r_esi = r_ecx;
    /* 005e4a5b: mov ecx, esi */ r_ecx = r_esi;
    /* 005e4a5d: call 0x5e45c0 */ r_esp -= 4; W32(r_esp, 0x5e4a62u); f_005e45c0();
    /* 005e4a62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4a64: je 0x5e4aa7 */ if (fZ) goto L_005e4aa7;
L_005e4a66:; BB(0x005e4a66);
    /* 005e4a66: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 005e4a69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4a6b: je 0x5e4aa7 */ if (fZ) goto L_005e4aa7;
L_005e4a6d:; BB(0x005e4a6d);
    /* 005e4a6d: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e4a70: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5e4a75u); f_0081a9b8();
    /* 005e4a75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e4a76: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5e4a7bu); f_0082dbac();
    /* 005e4a7b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5e4a80u); f_0082d7b0();
    /* 005e4a80: lea ecx, [esi + 0x1c] */ r_ecx = (u32)(r_esi+0x1cu);
    /* 005e4a83: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5e4a88u); f_0082d838();
    /* 005e4a88: lea ecx, [esi + 0x28] */ r_ecx = (u32)(r_esi+0x28u);
    /* 005e4a8b: mov edx, 1 */ r_edx = 0x1u;
    /* 005e4a90: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x5e4a95u); f_00830df8();
    /* 005e4a95: mov ecx, dword ptr [esi + 0x58] */ r_ecx = R32((u32)(r_esi+0x58u));
    /* 005e4a98: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5e4a9du); f_00831758();
    /* 005e4a9d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5e4aa2u); f_0082da80();
    /* 005e4aa2: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5e4aa7u); f_0082dab0();
L_005e4aa7:; BB(0x005e4aa7);
    /* 005e4aa7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e4aa8: ret  */ FN_RET(0x005e4a58); r_esp += 4; return;
}

void f_005e4aac(void) /* sub_5E4AAC */
{
    FN_ENTER(0x005e4aac);
    /* 005e4aac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4aae: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 005e4ab0: mov byte ptr [ecx + 1], dl */ W8((u32)(r_ecx+0x1u), (u8)r_edx);
    /* 005e4ab3: mov byte ptr [ecx + 2], dl */ W8((u32)(r_ecx+0x2u), (u8)r_edx);
    /* 005e4ab6: mov byte ptr [ecx + 3], dl */ W8((u32)(r_ecx+0x3u), (u8)r_edx);
    /* 005e4ab9: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005e4abc: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005e4abf: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 005e4ac2: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 005e4ac5: mov eax, ecx */ r_eax = r_ecx;
    /* 005e4ac7: ret  */ FN_RET(0x005e4aac); r_esp += 4; return;
}

void f_005e4ac8(void) /* sub_5E4AC8 */
{
    FN_ENTER(0x005e4ac8);
    /* 005e4ac8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005e4acc: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e4acf: jge 0x5e4ae3 */ if ((fS==fO)) goto L_005e4ae3;
L_005e4ad1:; BB(0x005e4ad1);
    /* 005e4ad1: mov edx, dword ptr [0xa8dc94] */ r_edx = R32((u32)(0xa8dc94u));
    /* 005e4ad7: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005e4ada: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4adc: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 005e4adf: add eax, dword ptr [edx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e4ae2: ret  */ FN_RET(0x005e4ac8); r_esp += 4; return;
L_005e4ae3:; BB(0x005e4ae3);
    /* 005e4ae3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4ae5: ret  */ FN_RET(0x005e4ac8); r_esp += 4; return;
}

void f_005e4ae8(void) /* sub_5E4AE8 */
{
    FN_ENTER(0x005e4ae8);
    /* 005e4ae8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005e4aec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e4aee: jl 0x5e4b1a */ if ((fS!=fO)) goto L_005e4b1a;
L_005e4af0:; BB(0x005e4af0);
    /* 005e4af0: mov eax, dword ptr [0xa8dc94] */ r_eax = R32((u32)(0xa8dc94u));
    /* 005e4af5: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005e4af8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005e4afa: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e4afc: jge 0x5e4b0b */ if ((fS==fO)) goto L_005e4b0b;
L_005e4afe:; BB(0x005e4afe);
    /* 005e4afe: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 005e4b01: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e4b03: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e4b05: add edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e4b08: mov eax, edx */ r_eax = r_edx;
    /* 005e4b0a: ret  */ FN_RET(0x005e4ae8); r_esp += 4; return;
L_005e4b0b:; BB(0x005e4b0b);
    /* 005e4b0b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005e4b0e: lea ecx, [ecx + ecx*4] */ r_ecx = (u32)(r_ecx+r_ecx*4);
    /* 005e4b11: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4b13: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e4b15: lea eax, [edx + ecx - 0x14] */ r_eax = (u32)(r_edx+r_ecx+0xffffffecu);
    /* 005e4b19: ret  */ FN_RET(0x005e4ae8); r_esp += 4; return;
L_005e4b1a:; BB(0x005e4b1a);
    /* 005e4b1a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4b1c: ret  */ FN_RET(0x005e4ae8); r_esp += 4; return;
}

void f_005e4b20(void) /* sub_5E4B20 */
{
    FN_ENTER(0x005e4b20);
    /* 005e4b20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4b21: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005e4b25: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e4b27: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005e4b2b: jl 0x5e4b5d */ if ((fS!=fO)) goto L_005e4b5d;
L_005e4b2d:; BB(0x005e4b2d);
    /* 005e4b2d: mov ecx, dword ptr [0xa8dc94] */ r_ecx = R32((u32)(0xa8dc94u));
    /* 005e4b33: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 005e4b36: cmp edx, 0x1a */ {  u32 a = r_edx; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e4b39: jge 0x5e4b55 */ if ((fS==fO)) goto L_005e4b55;
L_005e4b3b:; BB(0x005e4b3b);
    /* 005e4b3b: cmp eax, dword ptr [ebx + edx*8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+r_edx*8)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e4b3e: jge 0x5e4b55 */ if ((fS==fO)) goto L_005e4b55;
L_005e4b40:; BB(0x005e4b40);
    /* 005e4b40: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005e4b43: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4b45: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4b47: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4b49: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4b4b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4b4d: add ecx, dword ptr [ebx + edx*8 + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+r_edx*8+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e4b51: mov eax, ecx */ r_eax = r_ecx;
    /* 005e4b53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e4b54: ret  */ FN_RET(0x005e4b20); r_esp += 4; return;
L_005e4b55:; BB(0x005e4b55);
    /* 005e4b55: mov eax, dword ptr [ebx + 0xd4] */ r_eax = R32((u32)(r_ebx+0xd4u));
    /* 005e4b5b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e4b5c: ret  */ FN_RET(0x005e4b20); r_esp += 4; return;
L_005e4b5d:; BB(0x005e4b5d);
    /* 005e4b5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4b5f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e4b60: ret  */ FN_RET(0x005e4b20); r_esp += 4; return;
}

void f_005e4b64(void) /* sub_5E4B64 */
{
    FN_ENTER(0x005e4b64);
    /* 005e4b64: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005e4b68: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e4b6a: jl 0x5e4ba3 */ if ((fS!=fO)) goto L_005e4ba3;
L_005e4b6c:; BB(0x005e4b6c);
    /* 005e4b6c: mov eax, dword ptr [0xa8dc94] */ r_eax = R32((u32)(0xa8dc94u));
    /* 005e4b71: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 005e4b74: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e4b76: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e4b78: jge 0x5e4b8e */ if ((fS==fO)) goto L_005e4b8e;
L_005e4b7a:; BB(0x005e4b7a);
    /* 005e4b7a: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 005e4b7d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e4b7f: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005e4b82: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4b84: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4b86: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4b88: add ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e4b8b: mov eax, ecx */ r_eax = r_ecx;
    /* 005e4b8d: ret  */ FN_RET(0x005e4b64); r_esp += 4; return;
L_005e4b8e:; BB(0x005e4b8e);
    /* 005e4b8e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e4b90: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e4b92: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005e4b95: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4b97: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4b99: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e4b9b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005e4b9e: lea eax, [edx + ecx - 0x1c] */ r_eax = (u32)(r_edx+r_ecx+0xffffffe4u);
    /* 005e4ba2: ret  */ FN_RET(0x005e4b64); r_esp += 4; return;
L_005e4ba3:; BB(0x005e4ba3);
    /* 005e4ba3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4ba5: ret  */ FN_RET(0x005e4b64); r_esp += 4; return;
}

void f_005e4ba8(void) /* sub_5E4BA8 */
{
    FN_ENTER(0x005e4ba8);
    /* 005e4ba8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e4ba9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e4baa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e4bac: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 005e4bb0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4bb2: je 0x5e4c91 */ if (fZ) goto L_005e4c91;
L_005e4bb8:; BB(0x005e4bb8);
    /* 005e4bb8: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005e4bbf: cmp eax, 0xed */ {  u32 a = r_eax; u32 b = 0xedu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e4bc4: jge 0x5e4c38 */ if ((fS==fO)) goto L_005e4c38;
L_005e4bc6:; BB(0x005e4bc6);
    /* 005e4bc6: mov edx, dword ptr [0xa8dc94] */ r_edx = R32((u32)(0xa8dc94u));
    /* 005e4bcc: movzx ebx, byte ptr [ecx + 0xf4] */ r_ebx = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005e4bd3: mov edi, dword ptr [edx + 0x58] */ r_edi = R32((u32)(r_edx+0x58u));
    /* 005e4bd6: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 005e4bd9: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
    /* 005e4bdb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4bdd: je 0x5e4c29 */ if (fZ) goto L_005e4c29;
L_005e4bdf:; BB(0x005e4bdf);
    /* 005e4bdf: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005e4be2: mov ebp, eax */ r_ebp = r_eax;
L_005e4be4:; BB(0x005e4be4);
    /* 005e4be4: movzx edx, byte ptr [esi] */ r_edx = (u32)R8((u32)(r_esi));
    /* 005e4be7: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4be9: jne 0x5e4c16 */ if (!fZ) goto L_005e4c16;
L_005e4beb:; BB(0x005e4beb);
    /* 005e4beb: movzx edx, byte ptr [esi + 1] */ r_edx = (u32)R8((u32)(r_esi+0x1u));
    /* 005e4bef: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4bf5: je 0x5e4bfb */ if (fZ) goto L_005e4bfb;
L_005e4bf7:; BB(0x005e4bf7);
    /* 005e4bf7: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4bf9: jne 0x5e4c16 */ if (!fZ) goto L_005e4c16;
L_005e4bfb:; BB(0x005e4bfb);
    /* 005e4bfb: movzx edx, byte ptr [esi + 3] */ r_edx = (u32)R8((u32)(r_esi+0x3u));
    /* 005e4bff: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4c02: je 0x5e4c8c */ if (fZ) goto L_005e4c8c;
L_005e4c08:; BB(0x005e4c08);
    /* 005e4c08: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4c0a: jne 0x5e4c16 */ if (!fZ) goto L_005e4c16;
L_005e4c0c:; BB(0x005e4c0c);
    /* 005e4c0c: movsx edx, word ptr [esp + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x18u));
    /* 005e4c11: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4c14: je 0x5e4c58 */ if (fZ) goto L_005e4c58;
L_005e4c16:; BB(0x005e4c16);
    /* 005e4c16: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e4c19: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 005e4c1c: jne 0x5e4be4 */ if (!fZ) goto L_005e4be4;
L_005e4c1e:; BB(0x005e4c1e);
    /* 005e4c1e: mov edx, dword ptr [0xa8dc94] */ r_edx = R32((u32)(0xa8dc94u));
    /* 005e4c24: mov eax, ebp */ r_eax = r_ebp;
    /* 005e4c26: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_005e4c29:; BB(0x005e4c29);
    /* 005e4c29: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 005e4c2c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e4c2e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e4c30: add eax, dword ptr [edx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e4c33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e4c34: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e4c35: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e4c36: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e4c37: ret  */ FN_RET(0x005e4ba8); r_esp += 4; return;
L_005e4c38:; BB(0x005e4c38);
    /* 005e4c38: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005e4c3a: call dword ptr [eax + 0xa4] */ { u32 t = R32((u32)(r_eax+0xa4u)); r_esp -= 4; W32(r_esp, 0x5e4c40u); call_ind(t); }
    /* 005e4c40: mov edx, dword ptr [0xa8dc94] */ r_edx = R32((u32)(0xa8dc94u));
    /* 005e4c46: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005e4c49: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 005e4c4c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e4c4e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e4c50: add eax, dword ptr [edx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e4c53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e4c54: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e4c55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e4c56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e4c57: ret  */ FN_RET(0x005e4ba8); r_esp += 4; return;
L_005e4c58:; BB(0x005e4c58);
    /* 005e4c58: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 005e4c5c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e4c5e: call dword ptr [edx + 0x84] */ { u32 t = R32((u32)(r_edx+0x84u)); r_esp -= 4; W32(r_esp, 0x5e4c64u); call_ind(t); }
    /* 005e4c64: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4c67: jne 0x5e4c16 */ if (!fZ) goto L_005e4c16;
L_005e4c69:; BB(0x005e4c69);
    /* 005e4c69: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_005e4c6c:; BB(0x005e4c6c);
    /* 005e4c6c: mov ecx, dword ptr [0xa8dc94] */ r_ecx = R32((u32)(0xa8dc94u));
    /* 005e4c72: movzx edx, byte ptr [esi + 2] */ r_edx = (u32)R8((u32)(r_esi+0x2u));
    /* 005e4c76: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 005e4c79: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 005e4c7c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e4c7e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e4c80: lea eax, [eax + ebx + 0x1284] */ r_eax = (u32)(r_eax+r_ebx+0x1284u);
    /* 005e4c87: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e4c88: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e4c89: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e4c8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e4c8b: ret  */ FN_RET(0x005e4ba8); r_esp += 4; return;
L_005e4c8c:; BB(0x005e4c8c);
    /* 005e4c8c: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005e4c8f: jmp 0x5e4c6c */ goto L_005e4c6c;
L_005e4c91:; BB(0x005e4c91);
    /* 005e4c91: mov edx, dword ptr [0xa8dc94] */ r_edx = R32((u32)(0xa8dc94u));
    /* 005e4c97: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005e4c9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e4c9b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e4c9c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e4c9d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e4c9e: ret  */ FN_RET(0x005e4ba8); r_esp += 4; return;
}

void f_005e4ca0(void) /* sub_5E4CA0 */
{
    FN_ENTER(0x005e4ca0);
    /* 005e4ca0: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 005e4ca5: test al, 0x3f */ {  u32 a = (u8)r_eax; u32 b = 0x3fu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4ca7: je 0x5e4cc7 */ if (fZ) goto L_005e4cc7;
L_005e4ca9:; BB(0x005e4ca9);
    /* 005e4ca9: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4cae: jne 0x5e4ccd */ if (!fZ) goto L_005e4ccd;
L_005e4cb0:; BB(0x005e4cb0);
    /* 005e4cb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4cb2: jle 0x5e4cc7 */ if ((fZ||fS!=fO)) goto L_005e4cc7;
L_005e4cb4:; BB(0x005e4cb4);
    /* 005e4cb4: cmp eax, 0x29 */ {  u32 a = r_eax; u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e4cb7: jge 0x5e4cc7 */ if ((fS==fO)) goto L_005e4cc7;
L_005e4cb9:; BB(0x005e4cb9);
    /* 005e4cb9: lea eax, [eax + 0x256] */ r_eax = (u32)(r_eax+0x256u);
    /* 005e4cbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4cc0: call 0x793050 */ r_esp -= 4; W32(r_esp, 0x5e4cc5u); f_00793050();
    /* 005e4cc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e4cc6: ret  */ FN_RET(0x005e4ca0); r_esp += 4; return;
L_005e4cc7:; BB(0x005e4cc7);
    /* 005e4cc7: mov eax, 0x8f8818 */ r_eax = 0x8f8818u;
    /* 005e4ccc: ret  */ FN_RET(0x005e4ca0); r_esp += 4; return;
L_005e4ccd:; BB(0x005e4ccd);
    /* 005e4ccd: push 0x27f */ { u32 v = 0x27fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4cd2: call 0x793050 */ r_esp -= 4; W32(r_esp, 0x5e4cd7u); f_00793050();
    /* 005e4cd7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e4cd8: ret  */ FN_RET(0x005e4ca0); r_esp += 4; return;
}

void f_005e4cdc(void) /* sub_5E4CDC */
{
    FN_ENTER(0x005e4cdc);
    /* 005e4cdc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e4cdd: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005e4ce1: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 005e4ce5: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 005e4cea: and edx, 0x3f */ {  u32 a = r_edx; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005e4ced: cmp edx, 0x29 */ {  u32 a = r_edx; u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e4cf0: jge 0x5e4d1c */ if ((fS==fO)) goto L_005e4d1c;
L_005e4cf2:; BB(0x005e4cf2);
    /* 005e4cf2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4cf4: je 0x5e4d1c */ if (fZ) goto L_005e4d1c;
L_005e4cf6:; BB(0x005e4cf6);
    /* 005e4cf6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4cf8: je 0x5e4d1c */ if (fZ) goto L_005e4d1c;
L_005e4cfa:; BB(0x005e4cfa);
    /* 005e4cfa: mov edi, dword ptr [0xa8dc94] */ r_edi = R32((u32)(0xa8dc94u));
    /* 005e4d00: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 005e4d03: movzx edi, word ptr [edi + edx*4] */ r_edi = (u32)R16((u32)(r_edi+r_edx*4));
    /* 005e4d07: mov word ptr [eax], di */ W16((u32)(r_eax), (u16)r_edi);
    /* 005e4d0a: mov eax, dword ptr [0xa8dc94] */ r_eax = R32((u32)(0xa8dc94u));
    /* 005e4d0f: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005e4d12: movzx edx, word ptr [eax + edx*4 + 2] */ r_edx = (u32)R16((u32)(r_eax+r_edx*4+0x2u));
    /* 005e4d17: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005e4d1a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e4d1b: ret  */ FN_RET(0x005e4cdc); r_esp += 4; return;
L_005e4d1c:; BB(0x005e4d1c);
    /* 005e4d1c: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005e4d21: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 005e4d24: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005e4d27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e4d28: ret  */ FN_RET(0x005e4cdc); r_esp += 4; return;
}

void f_005e4d2c(void) /* sub_5E4D2C */
{
    FN_ENTER(0x005e4d2c);
    /* 005e4d2c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4d2d: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005e4d31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4d33: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005e4d37: jle 0x5e4da6 */ if ((fZ||fS!=fO)) goto L_005e4da6;
L_005e4d39:; BB(0x005e4d39);
    /* 005e4d39: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e4d3c: jge 0x5e4da6 */ if ((fS==fO)) goto L_005e4da6;
L_005e4d3e:; BB(0x005e4d3e);
    /* 005e4d3e: mov ecx, dword ptr [0xa8dc94] */ r_ecx = R32((u32)(0xa8dc94u));
    /* 005e4d44: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4d46: je 0x5e4da6 */ if (fZ) goto L_005e4da6;
L_005e4d48:; BB(0x005e4d48);
    /* 005e4d48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4d4a: je 0x5e4da6 */ if (fZ) goto L_005e4da6;
L_005e4d4c:; BB(0x005e4d4c);
    /* 005e4d4c: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005e4d4f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4d51: je 0x5e4da6 */ if (fZ) goto L_005e4da6;
L_005e4d53:; BB(0x005e4d53);
    /* 005e4d53: mov ebx, dword ptr [ecx + edx*8 - 8] */ r_ebx = R32((u32)(r_ecx+r_edx*8+0xfffffff8u));
    /* 005e4d57: mov ecx, dword ptr [ecx + edx*8 - 4] */ r_ecx = R32((u32)(r_ecx+r_edx*8+0xfffffffcu));
    /* 005e4d5b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4d5d: je 0x5e4da6 */ if (fZ) goto L_005e4da6;
L_005e4d5f:; BB(0x005e4d5f);
    /* 005e4d5f: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005e4d63: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e4d65: jge 0x5e4da6 */ if ((fS==fO)) goto L_005e4da6;
L_005e4d67:; BB(0x005e4d67);
    /* 005e4d67: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005e4d6b: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 005e4d6e: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 005e4d70: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e4d72: mov dword ptr [ecx + edx*8], ebx */ W32((u32)(r_ecx+r_edx*8), r_ebx);
    /* 005e4d75: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 005e4d78: mov dword ptr [ecx + edx*8 + 4], ebx */ W32((u32)(r_ecx+r_edx*8+0x4u), r_ebx);
    /* 005e4d7c: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 005e4d7f: mov dword ptr [ecx + edx*8 + 8], ebx */ W32((u32)(r_ecx+r_edx*8+0x8u), r_ebx);
    /* 005e4d83: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 005e4d86: mov dword ptr [ecx + edx*8 + 0xc], ebx */ W32((u32)(r_ecx+r_edx*8+0xcu), r_ebx);
    /* 005e4d8a: mov ebx, dword ptr [eax + 0x10] */ r_ebx = R32((u32)(r_eax+0x10u));
    /* 005e4d8d: mov dword ptr [ecx + edx*8 + 0x10], ebx */ W32((u32)(r_ecx+r_edx*8+0x10u), r_ebx);
    /* 005e4d91: mov ebx, dword ptr [eax + 0x14] */ r_ebx = R32((u32)(r_eax+0x14u));
    /* 005e4d94: mov dword ptr [ecx + edx*8 + 0x14], ebx */ W32((u32)(r_ecx+r_edx*8+0x14u), r_ebx);
    /* 005e4d98: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 005e4d9b: mov dword ptr [ecx + edx*8 + 0x18], ebx */ W32((u32)(r_ecx+r_edx*8+0x18u), r_ebx);
    /* 005e4d9f: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 005e4da2: mov dword ptr [ecx + edx*8 + 0x1c], eax */ W32((u32)(r_ecx+r_edx*8+0x1cu), r_eax);
L_005e4da6:; BB(0x005e4da6);
    /* 005e4da6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e4da7: ret  */ FN_RET(0x005e4d2c); r_esp += 4; return;
}

void f_005e4da8(void) /* sub_5E4DA8 */
{
    FN_ENTER(0x005e4da8);
    /* 005e4da8: call 0x5e4db0 */ r_esp -= 4; W32(r_esp, 0x5e4dadu); f_005e4db0();
    /* 005e4dad: ret  */ FN_RET(0x005e4da8); r_esp += 4; return;
}

void f_005e4db0(void) /* sub_5E4DB0 */
{
    FN_ENTER(0x005e4db0);
    /* 005e4db0: mov ecx, dword ptr [0xa8dc98] */ r_ecx = R32((u32)(0xa8dc98u));
    /* 005e4db6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4db8: je 0x5e4dc0 */ if (fZ) goto L_005e4dc0;
L_005e4dba:; BB(0x005e4dba);
    /* 005e4dba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4dbc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005e4dbe: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5e4dc0u); call_ind(t); }
L_005e4dc0:; BB(0x005e4dc0);
    /* 005e4dc0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4dc2: mov dword ptr [0xa8dc98], eax */ W32((u32)(0xa8dc98u), r_eax);
    /* 005e4dc7: mov dword ptr [0xa8dc94], eax */ W32((u32)(0xa8dc94u), r_eax);
    /* 005e4dcc: ret  */ FN_RET(0x005e4db0); r_esp += 4; return;
}

void f_005e4dd0(void) /* sub_5E4DD0 */
{
    FN_ENTER(0x005e4dd0);
    /* 005e4dd0: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 005e4dd5: cmp eax, 0xed */ {  u32 a = r_eax; u32 b = 0xedu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e4dda: jge 0x5e4dea */ if ((fS==fO)) goto L_005e4dea;
L_005e4ddc:; BB(0x005e4ddc);
    /* 005e4ddc: mov edx, dword ptr [0xa8dc94] */ r_edx = R32((u32)(0xa8dc94u));
    /* 005e4de2: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e4de5: movzx eax, byte ptr [eax + ecx] */ r_eax = (u32)R8((u32)(r_eax+r_ecx));
    /* 005e4de9: ret  */ FN_RET(0x005e4dd0); r_esp += 4; return;
L_005e4dea:; BB(0x005e4dea);
    /* 005e4dea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4dec: ret  */ FN_RET(0x005e4dd0); r_esp += 4; return;
}

void f_005e4df0(void) /* sub_5E4DF0 */
{
    FN_ENTER(0x005e4df0);
    /* 005e4df0: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 005e4df5: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 005e4dfa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4dfc: je 0x5e4e2c */ if (fZ) goto L_005e4e2c;
L_005e4dfe:; BB(0x005e4dfe);
    /* 005e4dfe: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4e01: jne 0x5e4e1a */ if (!fZ) goto L_005e4e1a;
L_005e4e03:; BB(0x005e4e03);
    /* 005e4e03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4e05: jle 0x5e4e33 */ if ((fZ||fS!=fO)) goto L_005e4e33;
L_005e4e07:; BB(0x005e4e07);
    /* 005e4e07: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e4e0a: jge 0x5e4e33 */ if ((fS==fO)) goto L_005e4e33;
L_005e4e0c:; BB(0x005e4e0c);
    /* 005e4e0c: mov edx, dword ptr [0xa8dc94] */ r_edx = R32((u32)(0xa8dc94u));
    /* 005e4e12: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 005e4e15: fld dword ptr [ecx + eax*4 - 4] */ FPUSH(R_F32((u32)(r_ecx+r_eax*4+0xfffffffcu)));
    /* 005e4e19: ret  */ FN_RET(0x005e4df0); r_esp += 4; return;
L_005e4e1a:; BB(0x005e4e1a);
    /* 005e4e1a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e4e1d: jne 0x5e4e33 */ if (!fZ) goto L_005e4e33;
L_005e4e1f:; BB(0x005e4e1f);
    /* 005e4e1f: mov edx, dword ptr [0xa8dc94] */ r_edx = R32((u32)(0xa8dc94u));
    /* 005e4e25: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 005e4e28: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 005e4e2b: ret  */ FN_RET(0x005e4df0); r_esp += 4; return;
L_005e4e2c:; BB(0x005e4e2c);
    /* 005e4e2c: cmp eax, 0xed */ {  u32 a = r_eax; u32 b = 0xedu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e4e31: jl 0x5e4e3a */ if ((fS!=fO)) goto L_005e4e3a;
L_005e4e33:; BB(0x005e4e33);
    /* 005e4e33: fld dword ptr [0x92d54c] */ FPUSH(R_F32((u32)(0x92d54cu)));
    /* 005e4e39: ret  */ FN_RET(0x005e4df0); r_esp += 4; return;
L_005e4e3a:; BB(0x005e4e3a);
    /* 005e4e3a: mov edx, dword ptr [0xa8dc94] */ r_edx = R32((u32)(0xa8dc94u));
    /* 005e4e40: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 005e4e43: fld dword ptr [ecx + eax*4] */ FPUSH(R_F32((u32)(r_ecx+r_eax*4)));
    /* 005e4e46: ret  */ FN_RET(0x005e4df0); r_esp += 4; return;
}

void f_005e4e48(void) /* sub_5E4E48 */
{
    FN_ENTER(0x005e4e48);
    /* 005e4e48: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005e4e4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e4e4e: jl 0x5e4e55 */ if ((fS!=fO)) goto L_005e4e55;
L_005e4e50:; BB(0x005e4e50);
    /* 005e4e50: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e4e53: jl 0x5e4e58 */ if ((fS!=fO)) goto L_005e4e58;
L_005e4e55:; BB(0x005e4e55);
    /* 005e4e55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4e57: ret  */ FN_RET(0x005e4e48); r_esp += 4; return;
L_005e4e58:; BB(0x005e4e58);
    /* 005e4e58: mov ecx, dword ptr [0xa8dc94] */ r_ecx = R32((u32)(0xa8dc94u));
    /* 005e4e5e: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 005e4e61: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 005e4e65: lea ecx, [ecx + ecx] */ r_ecx = (u32)(r_ecx+r_ecx);
    /* 005e4e68: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4e6a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e4e6c: add ecx, dword ptr [edx + eax*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_eax*4)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e4e6f: mov eax, ecx */ r_eax = r_ecx;
    /* 005e4e71: ret  */ FN_RET(0x005e4e48); r_esp += 4; return;
}

void f_005e4e74(void) /* sub_5E4E74 */
{
    FN_ENTER(0x005e4e74);
    /* 005e4e74: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 005e4e79: test al, 0x3f */ {  u32 a = (u8)r_eax; u32 b = 0x3fu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e4e7b: je 0x5e4e84 */ if (fZ) goto L_005e4e84;
L_005e4e7d:; BB(0x005e4e7d);
    /* 005e4e7d: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4e82: je 0x5e4e87 */ if (fZ) goto L_005e4e87;
L_005e4e84:; BB(0x005e4e84);
    /* 005e4e84: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4e86: ret  */ FN_RET(0x005e4e74); r_esp += 4; return;
L_005e4e87:; BB(0x005e4e87);
    /* 005e4e87: lea eax, [eax + 0x256] */ r_eax = (u32)(r_eax+0x256u);
    /* 005e4e8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e8e: call 0x5e5450 */ r_esp -= 4; W32(r_esp, 0x5e4e93u); f_005e5450();
    /* 005e4e93: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e4e94: ret  */ FN_RET(0x005e4e74); r_esp += 4; return;
}

void f_005e4e98(void) /* sub_5E4E98 */
{
    FN_ENTER(0x005e4e98);
    /* 005e4e98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4e99: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e4e9c: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 005e4ea0: mov eax, ebp */ r_eax = r_ebp;
    /* 005e4ea2: call 0x5e4f9c */ r_esp -= 4; W32(r_esp, 0x5e4ea7u); f_005e4f9c();
    /* 005e4ea7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005e4eaa: cmp eax, 0xed */ {  u32 a = r_eax; u32 b = 0xedu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e4eaf: jge 0x5e4f36 */ if ((fS==fO)) goto L_005e4f36;
L_005e4eb5:; BB(0x005e4eb5);
    /* 005e4eb5: mov ecx, dword ptr [0xa8dc94] */ r_ecx = R32((u32)(0xa8dc94u));
    /* 005e4ebb: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005e4ebe: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e4ec0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e4ec2: mov ecx, dword ptr [edx + eax*8] */ r_ecx = R32((u32)(r_edx+r_eax*8));
    /* 005e4ec5: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 005e4ec9: mov ecx, dword ptr [edx + eax*8 + 4] */ r_ecx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 005e4ecd: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 005e4ed1: mov ecx, dword ptr [edx + eax*8 + 8] */ r_ecx = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 005e4ed5: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 005e4ed9: mov edx, dword ptr [edx + eax*8 + 0xc] */ r_edx = R32((u32)(r_edx+r_eax*8+0xcu));
    /* 005e4edd: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005e4ee1: movzx edx, byte ptr [ebp] */ r_edx = (u32)R8((u32)(r_ebp));
    /* 005e4ee5: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4ee8: je 0x5e4f3b */ if (fZ) goto L_005e4f3b;
L_005e4eea:; BB(0x005e4eea);
    /* 005e4eea: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 005e4eed: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 005e4ef1: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 005e4ef5: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e4ef8: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005e4efa: mov ebx, eax */ r_ebx = r_eax;
L_005e4efc:; BB(0x005e4efc);
    /* 005e4efc: mov ecx, dword ptr [esp + ebp*4 + 4] */ r_ecx = R32((u32)(r_esp+r_ebp*4+0x4u));
    /* 005e4f00: mov esi, dword ptr [esp + ebp*4 + 0xc] */ r_esi = R32((u32)(r_esp+r_ebp*4+0xcu));
    /* 005e4f04: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005e4f07: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4f09: je 0x5e4f29 */ if (fZ) goto L_005e4f29;
L_005e4f0b:; BB(0x005e4f0b);
    /* 005e4f0b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e4f0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f0f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f11: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5e4f16u); f_00814298();
    /* 005e4f16: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4f19: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4f1b: je 0x5e4f29 */ if (fZ) goto L_005e4f29;
L_005e4f1d:; BB(0x005e4f1d);
    /* 005e4f1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f1f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4f21: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x5e4f26u); f_00814664();
    /* 005e4f26: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e4f29:; BB(0x005e4f29);
    /* 005e4f29: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e4f2c: jl 0x5e4efc */ if ((fS!=fO)) goto L_005e4efc;
L_005e4f2e:; BB(0x005e4f2e);
    /* 005e4f2e: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 005e4f32: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_005e4f36:; BB(0x005e4f36);
    /* 005e4f36: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e4f39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4f3a: ret  */ FN_RET(0x005e4e98); r_esp += 4; return;
L_005e4f3b:; BB(0x005e4f3b);
    /* 005e4f3b: movzx edx, byte ptr [ebp + 1] */ r_edx = (u32)R8((u32)(r_ebp+0x1u));
    /* 005e4f3f: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4f42: jne 0x5e4eea */ if (!fZ) goto L_005e4eea;
L_005e4f44:; BB(0x005e4f44);
    /* 005e4f44: mov dword ptr [esp + 4], 0x83 */ W32((u32)(r_esp+0x4u), 0x83u);
    /* 005e4f4c: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 005e4f54: movzx edx, byte ptr [ebp + 2] */ r_edx = (u32)R8((u32)(r_ebp+0x2u));
    /* 005e4f58: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4f5b: jne 0x5e4f72 */ if (!fZ) goto L_005e4f72;
L_005e4f5d:; BB(0x005e4f5d);
    /* 005e4f5d: mov dword ptr [esp + 8], 0x84 */ W32((u32)(r_esp+0x8u), 0x84u);
    /* 005e4f65: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005e4f6d: jmp 0x5e4eea */ goto L_005e4eea;
L_005e4f72:; BB(0x005e4f72);
    /* 005e4f72: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4f75: jne 0x5e4f8c */ if (!fZ) goto L_005e4f8c;
L_005e4f77:; BB(0x005e4f77);
    /* 005e4f77: mov dword ptr [esp + 8], 0x86 */ W32((u32)(r_esp+0x8u), 0x86u);
    /* 005e4f7f: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005e4f87: jmp 0x5e4eea */ goto L_005e4eea;
L_005e4f8c:; BB(0x005e4f8c);
    /* 005e4f8c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e4f8e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005e4f92: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005e4f96: jmp 0x5e4eea */ goto L_005e4eea;
}

void f_005e4f9c(void) /* sub_5E4F9C */
{
    FN_ENTER(0x005e4f9c);
    /* 005e4f9c: mov edx, eax */ r_edx = r_eax;
    /* 005e4f9e: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 005e4fa1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4fa4: je 0x5e5088 */ if (fZ) goto L_005e5088;
L_005e4faa:; BB(0x005e4faa);
    /* 005e4faa: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4fad: je 0x5e5079 */ if (fZ) goto L_005e5079;
L_005e4fb3:; BB(0x005e4fb3);
    /* 005e4fb3: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4fb6: je 0x5e5060 */ if (fZ) goto L_005e5060;
L_005e4fbc:; BB(0x005e4fbc);
    /* 005e4fbc: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4fbf: je 0x5e5051 */ if (fZ) goto L_005e5051;
L_005e4fc5:; BB(0x005e4fc5);
    /* 005e4fc5: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4fc8: je 0x5e5037 */ if (fZ) goto L_005e5037;
L_005e4fca:; BB(0x005e4fca);
    /* 005e4fca: cmp eax, 0x8c */ {  u32 a = r_eax; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4fcf: je 0x5e5028 */ if (fZ) goto L_005e5028;
L_005e4fd1:; BB(0x005e4fd1);
    /* 005e4fd1: cmp eax, 0x89 */ {  u32 a = r_eax; u32 b = 0x89u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4fd6: je 0x5e5019 */ if (fZ) goto L_005e5019;
L_005e4fd8:; BB(0x005e4fd8);
    /* 005e4fd8: cmp eax, 0xde */ {  u32 a = r_eax; u32 b = 0xdeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4fdd: je 0x5e500f */ if (fZ) goto L_005e500f;
L_005e4fdf:; BB(0x005e4fdf);
    /* 005e4fdf: cmp eax, 0xdf */ {  u32 a = r_eax; u32 b = 0xdfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4fe4: jne 0x5e4ff9 */ if (!fZ) goto L_005e4ff9;
L_005e4fe6:; BB(0x005e4fe6);
    /* 005e4fe6: movzx edx, byte ptr [edx + 1] */ r_edx = (u32)R8((u32)(r_edx+0x1u));
    /* 005e4fea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e4fec: jl 0x5e5018 */ if ((fS!=fO)) goto L_005e5018;
L_005e4fee:; BB(0x005e4fee);
    /* 005e4fee: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e4ff1: jg 0x5e5018 */ if ((!fZ&&fS==fO)) goto L_005e5018;
L_005e4ff3:; BB(0x005e4ff3);
    /* 005e4ff3: mov eax, 1 */ r_eax = 0x1u;
    /* 005e4ff8: ret  */ FN_RET(0x005e4f9c); r_esp += 4; return;
L_005e4ff9:; BB(0x005e4ff9);
    /* 005e4ff9: cmp eax, 0xe0 */ {  u32 a = r_eax; u32 b = 0xe0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e4ffe: jne 0x5e5018 */ if (!fZ) goto L_005e5018;
L_005e5000:; BB(0x005e5000);
    /* 005e5000: movzx edx, byte ptr [edx + 1] */ r_edx = (u32)R8((u32)(r_edx+0x1u));
    /* 005e5004: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5007: jne 0x5e5018 */ if (!fZ) goto L_005e5018;
L_005e5009:; BB(0x005e5009);
    /* 005e5009: mov eax, 0x10 */ r_eax = 0x10u;
    /* 005e500e: ret  */ FN_RET(0x005e4f9c); r_esp += 4; return;
L_005e500f:; BB(0x005e500f);
    /* 005e500f: movzx edx, byte ptr [edx + 1] */ r_edx = (u32)R8((u32)(r_edx+0x1u));
    /* 005e5013: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5016: je 0x5e5009 */ if (fZ) goto L_005e5009;
L_005e5018:; BB(0x005e5018);
    /* 005e5018: ret  */ FN_RET(0x005e4f9c); r_esp += 4; return;
L_005e5019:; BB(0x005e5019);
    /* 005e5019: movzx edx, byte ptr [edx + 1] */ r_edx = (u32)R8((u32)(r_edx+0x1u));
    /* 005e501d: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5020: jne 0x5e5018 */ if (!fZ) goto L_005e5018;
L_005e5022:; BB(0x005e5022);
    /* 005e5022: mov eax, 0x10 */ r_eax = 0x10u;
    /* 005e5027: ret  */ FN_RET(0x005e4f9c); r_esp += 4; return;
L_005e5028:; BB(0x005e5028);
    /* 005e5028: movzx edx, byte ptr [edx + 1] */ r_edx = (u32)R8((u32)(r_edx+0x1u));
    /* 005e502c: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e502f: jne 0x5e5018 */ if (!fZ) goto L_005e5018;
L_005e5031:; BB(0x005e5031);
    /* 005e5031: mov eax, 0x96 */ r_eax = 0x96u;
    /* 005e5036: ret  */ FN_RET(0x005e4f9c); r_esp += 4; return;
L_005e5037:; BB(0x005e5037);
    /* 005e5037: movzx edx, byte ptr [edx + 1] */ r_edx = (u32)R8((u32)(r_edx+0x1u));
    /* 005e503b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e503e: jne 0x5e5046 */ if (!fZ) goto L_005e5046;
L_005e5040:; BB(0x005e5040);
    /* 005e5040: mov eax, 0x1c */ r_eax = 0x1cu;
    /* 005e5045: ret  */ FN_RET(0x005e4f9c); r_esp += 4; return;
L_005e5046:; BB(0x005e5046);
    /* 005e5046: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5049: jne 0x5e5018 */ if (!fZ) goto L_005e5018;
L_005e504b:; BB(0x005e504b);
    /* 005e504b: mov eax, 0x6c */ r_eax = 0x6cu;
    /* 005e5050: ret  */ FN_RET(0x005e4f9c); r_esp += 4; return;
L_005e5051:; BB(0x005e5051);
    /* 005e5051: movzx edx, byte ptr [edx + 1] */ r_edx = (u32)R8((u32)(r_edx+0x1u));
    /* 005e5055: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5058: jne 0x5e5018 */ if (!fZ) goto L_005e5018;
L_005e505a:; BB(0x005e505a);
    /* 005e505a: mov eax, 0x5b */ r_eax = 0x5bu;
    /* 005e505f: ret  */ FN_RET(0x005e4f9c); r_esp += 4; return;
L_005e5060:; BB(0x005e5060);
    /* 005e5060: movzx edx, byte ptr [edx + 1] */ r_edx = (u32)R8((u32)(r_edx+0x1u));
    /* 005e5064: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5067: jl 0x5e5018 */ if ((fS!=fO)) goto L_005e5018;
L_005e5069:; BB(0x005e5069);
    /* 005e5069: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e506c: jle 0x5e5073 */ if ((fZ||fS!=fO)) goto L_005e5073;
L_005e506e:; BB(0x005e506e);
    /* 005e506e: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5071: jne 0x5e5018 */ if (!fZ) goto L_005e5018;
L_005e5073:; BB(0x005e5073);
    /* 005e5073: mov eax, 0x65 */ r_eax = 0x65u;
    /* 005e5078: ret  */ FN_RET(0x005e4f9c); r_esp += 4; return;
L_005e5079:; BB(0x005e5079);
    /* 005e5079: movzx edx, byte ptr [edx + 1] */ r_edx = (u32)R8((u32)(r_edx+0x1u));
    /* 005e507d: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5080: jne 0x5e5018 */ if (!fZ) goto L_005e5018;
L_005e5082:; BB(0x005e5082);
    /* 005e5082: mov eax, 0x10 */ r_eax = 0x10u;
    /* 005e5087: ret  */ FN_RET(0x005e4f9c); r_esp += 4; return;
L_005e5088:; BB(0x005e5088);
    /* 005e5088: movzx edx, byte ptr [edx + 1] */ r_edx = (u32)R8((u32)(r_edx+0x1u));
    /* 005e508c: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e508f: jne 0x5e5018 */ if (!fZ) goto L_005e5018;
L_005e5091:; BB(0x005e5091);
    /* 005e5091: mov eax, 0x32 */ r_eax = 0x32u;
    /* 005e5096: ret  */ FN_RET(0x005e4f9c); r_esp += 4; return;
}

