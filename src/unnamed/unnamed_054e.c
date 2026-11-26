#include "protos.h"

void f_0054e0a8(void) /* sub_54E0A8 */
{
    FN_ENTER(0x0054e0a8);
    /* 0054e0a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e0a9: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054e0ac: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0054e0ae: mov ecx, dword ptr [ebx + 0xcc] */ r_ecx = R32((u32)(r_ebx+0xccu));
    /* 0054e0b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e0b6: je 0x54e259 */ if (fZ) goto L_0054e259;
L_0054e0bc:; BB(0x0054e0bc);
    /* 0054e0bc: fld dword ptr [0x924468] */ FPUSH(R_F32((u32)(0x924468u)));
    /* 0054e0c2: fld dword ptr [0x924470] */ FPUSH(R_F32((u32)(0x924470u)));
    /* 0054e0c8: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 0054e0cb: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0054e0ce: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 0054e0d1: fld dword ptr [ebx + 0xb0] */ FPUSH(R_F32((u32)(r_ebx+0xb0u)));
    /* 0054e0d7: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0054e0dd: fld dword ptr [ebx + 0xb0] */ FPUSH(R_F32((u32)(r_ebx+0xb0u)));
    /* 0054e0e3: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0054e0e5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054e0e7: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0054e0e9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054e0eb: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0054e0ed: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0054e0f0: fld dword ptr [ebx + 0xb8] */ FPUSH(R_F32((u32)(r_ebx+0xb8u)));
    /* 0054e0f6: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 0054e0f8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0054e0fa: fadd st(6), st(0) */ ST(6) = ST(6) + ST(0);
    /* 0054e0fc: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0054e0fe: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0054e102: fld dword ptr [ebx + 0xc4] */ FPUSH(R_F32((u32)(r_ebx+0xc4u)));
    /* 0054e108: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0054e10a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054e10c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0054e110: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054e111: jae 0x54e26b */ if (!fC) goto L_0054e26b;
L_0054e117:; BB(0x0054e117);
    /* 0054e117: fstp st(5) */ ST(5) = ST(0); FPOP();
    /* 0054e119: fst dword ptr [ebx + 0xc0] */ W_F32((u32)(r_ebx+0xc0u), ST(0));
    /* 0054e11f: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0054e121: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0054e123: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0054e125: jmp 0x54e14a */ goto L_0054e14a;
L_0054e127:; BB(0x0054e127);
    /* 0054e127: mov ecx, dword ptr [ebx + 0xcc] */ r_ecx = R32((u32)(r_ebx+0xccu));
    /* 0054e12d: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 0054e130: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0054e133: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 0054e136: fld dword ptr [ebx + 0xb0] */ FPUSH(R_F32((u32)(r_ebx+0xb0u)));
    /* 0054e13c: fld dword ptr [ebx + 0xb8] */ FPUSH(R_F32((u32)(r_ebx+0xb8u)));
    /* 0054e142: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0054e144: fst dword ptr [ebx + 0xc4] */ W_F32((u32)(r_ebx+0xc4u), ST(0));
L_0054e14a:; BB(0x0054e14a);
    /* 0054e14a: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0054e14c: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0054e14e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054e150: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0054e152: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0054e154: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0054e158: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0054e15a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054e15c: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0054e160: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e162: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0054e166: je 0x54e182 */ if (fZ) goto L_0054e182;
L_0054e168:; BB(0x0054e168);
    /* 0054e168: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054e16a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054e16c: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0054e170: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e171: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x54e176u); f_00508db8();
    /* 0054e176: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0054e17c: fld dword ptr [ebx + 0xc4] */ FPUSH(R_F32((u32)(r_ebx+0xc4u)));
L_0054e182:; BB(0x0054e182);
    /* 0054e182: fadd dword ptr [0x924464] */ ST(0) = ST(0) + R_F32((u32)(0x924464u));
    /* 0054e188: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0054e18a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054e18c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054e18d: jb 0x54e127 */ if (fC) goto L_0054e127;
L_0054e18f:; BB(0x0054e18f);
    /* 0054e18f: fld dword ptr [0x924470] */ FPUSH(R_F32((u32)(0x924470u)));
L_0054e195:; BB(0x0054e195);
    /* 0054e195: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0054e197: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054e199: fstp dword ptr [ebx + 0xc4] */ W_F32((u32)(r_ebx+0xc4u), ST(0)); FPOP();
    /* 0054e19f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0054e1a1: fstp dword ptr [ebx + 0xc0] */ W_F32((u32)(r_ebx+0xc0u), ST(0)); FPOP();
    /* 0054e1a7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0054e1aa: push 0x1eff */ { u32 v = 0x1effu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e1af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e1b0: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0054e1b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e1b4: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x54e1b9u); f_0077fffc();
    /* 0054e1b9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054e1bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e1be: je 0x54e1d2 */ if (fZ) goto L_0054e1d2;
L_0054e1c0:; BB(0x0054e1c0);
    /* 0054e1c0: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0054e1c4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054e1c9: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0054e1cd: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054e1d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054e1d1: ret  */ FN_RET(0x0054e0a8); r_esp += 4; return;
L_0054e1d2:; BB(0x0054e1d2);
    /* 0054e1d2: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0054e1d5: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0054e1d9: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0054e1dc: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054e1e0: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 0054e1e3: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 0054e1e6: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 0054e1ec: mov dword ptr [eax + 0x10], 0x40200000 */ W32((u32)(r_eax+0x10u), 0x40200000u);
    /* 0054e1f3: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 0054e1f9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054e1fb: mov dword ptr [eax + 0xc], 0x40200000 */ W32((u32)(r_eax+0xcu), 0x40200000u);
    /* 0054e202: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x54e207u); f_007b7e9c();
    /* 0054e207: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 0054e20d: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0054e210: test edx, 0x200000 */ {  u32 a = r_edx; u32 b = 0x200000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e216: je 0x54e22a */ if (fZ) goto L_0054e22a;
L_0054e218:; BB(0x0054e218);
    /* 0054e218: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0054e21c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054e221: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0054e225: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054e228: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054e229: ret  */ FN_RET(0x0054e0a8); r_esp += 4; return;
L_0054e22a:; BB(0x0054e22a);
    /* 0054e22a: mov eax, dword ptr [0x92445c] */ r_eax = R32((u32)(0x92445cu));
    /* 0054e22f: mov edx, dword ptr [ebx + 0xc8] */ r_edx = R32((u32)(r_ebx+0xc8u));
    /* 0054e235: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0054e239: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054e23b: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0054e23f: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0054e243: push dword ptr [ebx + 0xbc] */ { u32 v = R32((u32)(r_ebx+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0054e249: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0054e24b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e24c: push 0x924454 */ { u32 v = 0x924454u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e251: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x54e254u); call_ind(t); }
    /* 0054e254: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054e257: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054e258: ret  */ FN_RET(0x0054e0a8); r_esp += 4; return;
L_0054e259:; BB(0x0054e259);
    /* 0054e259: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0054e25d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054e262: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0054e266: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054e269: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054e26a: ret  */ FN_RET(0x0054e0a8); r_esp += 4; return;
L_0054e26b:; BB(0x0054e26b);
    /* 0054e26b: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0054e26d: fstp st(5) */ ST(5) = ST(0); FPOP();
    /* 0054e26f: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0054e271: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054e273: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054e275: jmp 0x54e195 */ goto L_0054e195;
}

void f_0054e27c(void) /* sub_54E27C */
{
    FN_ENTER(0x0054e27c);
    /* 0054e27c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054e27d: mov ebp, esp */ r_ebp = r_esp;
    /* 0054e27f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e281: push 0x8d5dd0 */ { u32 v = 0x8d5dd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e286: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0054e28c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e28d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0054e294: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054e297: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0054e29a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0054e29d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0054e2a0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0054e2a3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0054e2a6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0054e2a9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0054e2b0: mov eax, ecx */ r_eax = r_ecx;
    /* 0054e2b2: mov edx, dword ptr [eax + 0x3c8] */ r_edx = R32((u32)(r_eax+0x3c8u));
    /* 0054e2b8: mov dword ptr [eax], 0xb03fa0 */ W32((u32)(r_eax), 0xb03fa0u);
    /* 0054e2be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e2c0: je 0x54e2db */ if (fZ) goto L_0054e2db;
L_0054e2c2:; BB(0x0054e2c2);
    /* 0054e2c2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0054e2c6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054e2cb: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0054e2cf: mov edx, ecx */ r_edx = r_ecx;
    /* 0054e2d1: mov dword ptr [edx + 0x3c8], 0 */ W32((u32)(r_edx+0x3c8u), 0x0u);
L_0054e2db:; BB(0x0054e2db);
    /* 0054e2db: mov eax, ecx */ r_eax = r_ecx;
    /* 0054e2dd: mov edx, dword ptr [eax + 0x3cc] */ r_edx = R32((u32)(r_eax+0x3ccu));
    /* 0054e2e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e2e5: je 0x54e300 */ if (fZ) goto L_0054e300;
L_0054e2e7:; BB(0x0054e2e7);
    /* 0054e2e7: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0054e2eb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054e2f0: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0054e2f4: mov edx, ecx */ r_edx = r_ecx;
    /* 0054e2f6: mov dword ptr [edx + 0x3cc], 0 */ W32((u32)(r_edx+0x3ccu), 0x0u);
L_0054e300:; BB(0x0054e300);
    /* 0054e300: mov eax, ecx */ r_eax = r_ecx;
    /* 0054e302: mov edx, dword ptr [eax + 0x3d0] */ r_edx = R32((u32)(r_eax+0x3d0u));
    /* 0054e308: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e30a: je 0x54e325 */ if (fZ) goto L_0054e325;
L_0054e30c:; BB(0x0054e30c);
    /* 0054e30c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0054e310: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054e315: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0054e319: mov edx, ecx */ r_edx = r_ecx;
    /* 0054e31b: mov dword ptr [edx + 0x3d0], 0 */ W32((u32)(r_edx+0x3d0u), 0x0u);
L_0054e325:; BB(0x0054e325);
    /* 0054e325: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x54e32au); f_007b9c8c();
    /* 0054e32a: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0054e331: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054e334: lea ecx, [eax + 0x3ac] */ r_ecx = (u32)(r_eax+0x3acu);
    /* 0054e33a: call 0x5122a8 */ r_esp -= 4; W32(r_esp, 0x54e33fu); f_005122a8();
    /* 0054e33f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054e346: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054e349: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x54e34eu); f_0078638c();
    /* 0054e34e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054e351: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054e353: jne 0x54e365 */ if (!fZ) goto L_0054e365;
L_0054e355:; BB(0x0054e355);
    /* 0054e355: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054e358: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054e35f: mov esp, ebp */ r_esp = r_ebp;
    /* 0054e361: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054e362: ret 4 */ FN_RET(0x0054e27c); r_esp += 8; return;
L_0054e365:; BB(0x0054e365);
    /* 0054e365: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054e368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e369: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x54e36eu); f_005c2f74();
    /* 0054e36e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054e36f: jmp 0x54e355 */ goto L_0054e355;
}

void f_0054e374(void) /* sub_54E374 */
{
    FN_ENTER(0x0054e374);
    /* 0054e374: mov eax, dword ptr [0xa739a4] */ r_eax = R32((u32)(0xa739a4u));
    /* 0054e379: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e37c: je 0x54e3c5 */ if (fZ) goto L_0054e3c5;
L_0054e37e:; BB(0x0054e37e);
    /* 0054e37e: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e381: je 0x54e38c */ if (fZ) goto L_0054e38c;
L_0054e383:; BB(0x0054e383);
    /* 0054e383: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054e386: mov dword ptr [0xa739a4], eax */ W32((u32)(0xa739a4u), r_eax);
    /* 0054e38b: ret  */ FN_RET(0x0054e374); r_esp += 4; return;
L_0054e38c:; BB(0x0054e38c);
    /* 0054e38c: mov dword ptr [0xa73994], 0 */ W32((u32)(0xa73994u), 0x0u);
    /* 0054e396: mov eax, 0xa73994 */ r_eax = 0xa73994u;
    /* 0054e39b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e39c: mov dword ptr [0xa73998], 0 */ W32((u32)(0xa73998u), 0x0u);
    /* 0054e3a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e3a7: mov dword ptr [0xa7399c], 0 */ W32((u32)(0xa7399cu), 0x0u);
    /* 0054e3b1: push 0xa48780 */ { u32 v = 0xa48780u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e3b6: call 0x7829a0 */ r_esp -= 4; W32(r_esp, 0x54e3bbu); f_007829a0();
    /* 0054e3bb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054e3be: mov eax, dword ptr [0xa739a4] */ r_eax = R32((u32)(0xa739a4u));
    /* 0054e3c3: jmp 0x54e383 */ goto L_0054e383;
L_0054e3c5:; BB(0x0054e3c5);
    /* 0054e3c5: mov edx, dword ptr [0xa739a0] */ r_edx = R32((u32)(0xa739a0u));
    /* 0054e3cb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e3cd: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x54e3d2u); f_0082e9e4();
    /* 0054e3d2: mov eax, dword ptr [0xa739a4] */ r_eax = R32((u32)(0xa739a4u));
    /* 0054e3d7: jmp 0x54e37e */ goto L_0054e37e;
}

void f_0054e3dc(void) /* sub_54E3DC */
{
    FN_ENTER(0x0054e3dc);
    /* 0054e3dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054e3dd: mov esi, ecx */ r_esi = r_ecx;
    /* 0054e3df: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 0054e3e4: cmp eax, dword ptr [0xa7396c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa7396cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e3ea: je 0x54e405 */ if (fZ) goto L_0054e405;
L_0054e3ec:; BB(0x0054e3ec);
    /* 0054e3ec: mov dword ptr [0xa7396c], eax */ W32((u32)(0xa7396cu), r_eax);
    /* 0054e3f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054e3f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e3f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e3f5: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e3f7: push dword ptr [0xa73970] */ { u32 v = R32((u32)(0xa73970u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054e3fd: call 0x81a2b0 */ r_esp -= 4; W32(r_esp, 0x54e402u); f_0081a2b0();
    /* 0054e402: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054e405:; BB(0x0054e405);
    /* 0054e405: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x54e40au); f_004f7c84();
    /* 0054e40a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054e40d: je 0x54e515 */ if (fZ) goto L_0054e515;
L_0054e413:; BB(0x0054e413);
    /* 0054e413: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0054e41a: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0054e41d: ja 0x54e492 */ if ((!fC&&!fZ)) goto L_0054e492;
L_0054e41f:; BB(0x0054e41f);
    /* 0054e41f: mov eax, dword ptr [eax*4 + 0x924488] */ r_eax = R32((u32)(r_eax*4+0x924488u));
    /* 0054e426: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0054e492:; BB(0x0054e492);
    /* 0054e492: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e494: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x54e499u); f_00770738();
    /* 0054e499: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e49b: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e49d:; BB(0x0054e49d);
    /* 0054e49d: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0054e4a0: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e4a5: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e4a7:; BB(0x0054e4a7);
    /* 0054e4a7: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054e4aa: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 0054e4b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e4b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e4b3: mov word ptr [esi + 0x386], cx */ W16((u32)(r_esi+0x386u), (u16)r_ecx);
    /* 0054e4ba: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054e4bf: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0054e4c2: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4c8: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4cb: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 0054e4d1: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4d3: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54e4d8u); f_007706b0();
L_0054e4d8:; BB(0x0054e4d8);
    /* 0054e4d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4da: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x54e4dfu); f_0078730c();
    /* 0054e4df: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0054e4e5: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0054e4eb: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0054e4ee: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0054e4f4: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0054e4f7: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0054e4fa: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4fc: call 0x54fd30 */ r_esp -= 4; W32(r_esp, 0x54e501u); f_0054fd30();
    /* 0054e501: fld dword ptr [0x92467c] */ FPUSH(R_F32((u32)(0x92467cu)));
    /* 0054e507: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0054e50d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0054e513: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054e514: ret  */ FN_RET(0x0054e3dc); r_esp += 4; return;
L_0054e515:; BB(0x0054e515);
    /* 0054e515: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054e516: ret  */ FN_RET(0x0054e3dc); r_esp += 4; return;
}

void f_0054e428(void)
{
    FN_ENTER(0x0054e428);
    /* 0054e428: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e42a: call 0x54e518 */ r_esp -= 4; W32(r_esp, 0x54e42fu); f_0054e518();
    /* 0054e42f: jmp 0x54e492 */ goto L_0054e492;
L_0054e492:; BB(0x0054e492);
    /* 0054e492: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e494: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x54e499u); f_00770738();
    /* 0054e499: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e49b: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e49d:; BB(0x0054e49d);
    /* 0054e49d: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0054e4a0: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e4a5: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e4a7:; BB(0x0054e4a7);
    /* 0054e4a7: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054e4aa: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 0054e4b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e4b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e4b3: mov word ptr [esi + 0x386], cx */ W16((u32)(r_esi+0x386u), (u16)r_ecx);
    /* 0054e4ba: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054e4bf: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0054e4c2: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4c8: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4cb: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 0054e4d1: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4d3: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54e4d8u); f_007706b0();
L_0054e4d8:; BB(0x0054e4d8);
    /* 0054e4d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4da: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x54e4dfu); f_0078730c();
    /* 0054e4df: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0054e4e5: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0054e4eb: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0054e4ee: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0054e4f4: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0054e4f7: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0054e4fa: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4fc: call 0x54fd30 */ r_esp -= 4; W32(r_esp, 0x54e501u); f_0054fd30();
    /* 0054e501: fld dword ptr [0x92467c] */ FPUSH(R_F32((u32)(0x92467cu)));
    /* 0054e507: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0054e50d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0054e513: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054e514: ret  */ FN_RET(0x0054e428); r_esp += 4; return;
}

void f_0054e431(void)
{
    FN_ENTER(0x0054e431);
    /* 0054e431: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e433: call 0x54e688 */ r_esp -= 4; W32(r_esp, 0x54e438u); f_0054e688();
    /* 0054e438: jmp 0x54e492 */ goto L_0054e492;
L_0054e492:; BB(0x0054e492);
    /* 0054e492: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e494: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x54e499u); f_00770738();
    /* 0054e499: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e49b: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e49d:; BB(0x0054e49d);
    /* 0054e49d: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0054e4a0: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e4a5: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e4a7:; BB(0x0054e4a7);
    /* 0054e4a7: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054e4aa: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 0054e4b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e4b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e4b3: mov word ptr [esi + 0x386], cx */ W16((u32)(r_esi+0x386u), (u16)r_ecx);
    /* 0054e4ba: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054e4bf: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0054e4c2: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4c8: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4cb: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 0054e4d1: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4d3: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54e4d8u); f_007706b0();
L_0054e4d8:; BB(0x0054e4d8);
    /* 0054e4d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4da: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x54e4dfu); f_0078730c();
    /* 0054e4df: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0054e4e5: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0054e4eb: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0054e4ee: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0054e4f4: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0054e4f7: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0054e4fa: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4fc: call 0x54fd30 */ r_esp -= 4; W32(r_esp, 0x54e501u); f_0054fd30();
    /* 0054e501: fld dword ptr [0x92467c] */ FPUSH(R_F32((u32)(0x92467cu)));
    /* 0054e507: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0054e50d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0054e513: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054e514: ret  */ FN_RET(0x0054e431); r_esp += 4; return;
}

void f_0054e43a(void)
{
    FN_ENTER(0x0054e43a);
    /* 0054e43a: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e43c: call 0x54e774 */ r_esp -= 4; W32(r_esp, 0x54e441u); f_0054e774();
    /* 0054e441: jmp 0x54e492 */ goto L_0054e492;
L_0054e492:; BB(0x0054e492);
    /* 0054e492: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e494: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x54e499u); f_00770738();
    /* 0054e499: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e49b: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e49d:; BB(0x0054e49d);
    /* 0054e49d: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0054e4a0: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e4a5: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e4a7:; BB(0x0054e4a7);
    /* 0054e4a7: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054e4aa: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 0054e4b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e4b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e4b3: mov word ptr [esi + 0x386], cx */ W16((u32)(r_esi+0x386u), (u16)r_ecx);
    /* 0054e4ba: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054e4bf: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0054e4c2: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4c8: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4cb: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 0054e4d1: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4d3: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54e4d8u); f_007706b0();
L_0054e4d8:; BB(0x0054e4d8);
    /* 0054e4d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4da: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x54e4dfu); f_0078730c();
    /* 0054e4df: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0054e4e5: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0054e4eb: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0054e4ee: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0054e4f4: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0054e4f7: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0054e4fa: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4fc: call 0x54fd30 */ r_esp -= 4; W32(r_esp, 0x54e501u); f_0054fd30();
    /* 0054e501: fld dword ptr [0x92467c] */ FPUSH(R_F32((u32)(0x92467cu)));
    /* 0054e507: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0054e50d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0054e513: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054e514: ret  */ FN_RET(0x0054e43a); r_esp += 4; return;
}

void f_0054e443(void)
{
    FN_ENTER(0x0054e443);
    /* 0054e443: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e445: call 0x551580 */ r_esp -= 4; W32(r_esp, 0x54e44au); f_00551580();
    /* 0054e44a: jmp 0x54e492 */ goto L_0054e492;
L_0054e492:; BB(0x0054e492);
    /* 0054e492: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e494: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x54e499u); f_00770738();
    /* 0054e499: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e49b: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e49d:; BB(0x0054e49d);
    /* 0054e49d: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0054e4a0: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e4a5: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e4a7:; BB(0x0054e4a7);
    /* 0054e4a7: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054e4aa: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 0054e4b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e4b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e4b3: mov word ptr [esi + 0x386], cx */ W16((u32)(r_esi+0x386u), (u16)r_ecx);
    /* 0054e4ba: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054e4bf: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0054e4c2: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4c8: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4cb: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 0054e4d1: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4d3: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54e4d8u); f_007706b0();
L_0054e4d8:; BB(0x0054e4d8);
    /* 0054e4d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4da: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x54e4dfu); f_0078730c();
    /* 0054e4df: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0054e4e5: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0054e4eb: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0054e4ee: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0054e4f4: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0054e4f7: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0054e4fa: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4fc: call 0x54fd30 */ r_esp -= 4; W32(r_esp, 0x54e501u); f_0054fd30();
    /* 0054e501: fld dword ptr [0x92467c] */ FPUSH(R_F32((u32)(0x92467cu)));
    /* 0054e507: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0054e50d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0054e513: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054e514: ret  */ FN_RET(0x0054e443); r_esp += 4; return;
}

void f_0054e44c(void)
{
    FN_ENTER(0x0054e44c);
    /* 0054e44c: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e44e: call 0x54e878 */ r_esp -= 4; W32(r_esp, 0x54e453u); f_0054e878();
    /* 0054e453: jmp 0x54e492 */ goto L_0054e492;
L_0054e492:; BB(0x0054e492);
    /* 0054e492: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e494: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x54e499u); f_00770738();
    /* 0054e499: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e49b: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e49d:; BB(0x0054e49d);
    /* 0054e49d: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0054e4a0: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e4a5: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e4a7:; BB(0x0054e4a7);
    /* 0054e4a7: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054e4aa: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 0054e4b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e4b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e4b3: mov word ptr [esi + 0x386], cx */ W16((u32)(r_esi+0x386u), (u16)r_ecx);
    /* 0054e4ba: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054e4bf: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0054e4c2: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4c8: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4cb: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 0054e4d1: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4d3: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54e4d8u); f_007706b0();
L_0054e4d8:; BB(0x0054e4d8);
    /* 0054e4d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4da: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x54e4dfu); f_0078730c();
    /* 0054e4df: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0054e4e5: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0054e4eb: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0054e4ee: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0054e4f4: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0054e4f7: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0054e4fa: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4fc: call 0x54fd30 */ r_esp -= 4; W32(r_esp, 0x54e501u); f_0054fd30();
    /* 0054e501: fld dword ptr [0x92467c] */ FPUSH(R_F32((u32)(0x92467cu)));
    /* 0054e507: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0054e50d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0054e513: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054e514: ret  */ FN_RET(0x0054e44c); r_esp += 4; return;
}

void f_0054e455(void)
{
    FN_ENTER(0x0054e455);
    /* 0054e455: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e457: call 0x54eae4 */ r_esp -= 4; W32(r_esp, 0x54e45cu); f_0054eae4();
    /* 0054e45c: jmp 0x54e492 */ goto L_0054e492;
L_0054e492:; BB(0x0054e492);
    /* 0054e492: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e494: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x54e499u); f_00770738();
    /* 0054e499: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e49b: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e49d:; BB(0x0054e49d);
    /* 0054e49d: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0054e4a0: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e4a5: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e4a7:; BB(0x0054e4a7);
    /* 0054e4a7: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054e4aa: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 0054e4b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e4b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e4b3: mov word ptr [esi + 0x386], cx */ W16((u32)(r_esi+0x386u), (u16)r_ecx);
    /* 0054e4ba: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054e4bf: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0054e4c2: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4c8: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4cb: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 0054e4d1: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4d3: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54e4d8u); f_007706b0();
L_0054e4d8:; BB(0x0054e4d8);
    /* 0054e4d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4da: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x54e4dfu); f_0078730c();
    /* 0054e4df: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0054e4e5: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0054e4eb: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0054e4ee: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0054e4f4: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0054e4f7: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0054e4fa: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4fc: call 0x54fd30 */ r_esp -= 4; W32(r_esp, 0x54e501u); f_0054fd30();
    /* 0054e501: fld dword ptr [0x92467c] */ FPUSH(R_F32((u32)(0x92467cu)));
    /* 0054e507: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0054e50d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0054e513: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054e514: ret  */ FN_RET(0x0054e455); r_esp += 4; return;
}

void f_0054e45e(void)
{
    FN_ENTER(0x0054e45e);
    /* 0054e45e: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e460: call 0x54ef1c */ r_esp -= 4; W32(r_esp, 0x54e465u); f_0054ef1c();
    /* 0054e465: jmp 0x54e492 */ goto L_0054e492;
L_0054e492:; BB(0x0054e492);
    /* 0054e492: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e494: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x54e499u); f_00770738();
    /* 0054e499: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e49b: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e49d:; BB(0x0054e49d);
    /* 0054e49d: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0054e4a0: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e4a5: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e4a7:; BB(0x0054e4a7);
    /* 0054e4a7: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054e4aa: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 0054e4b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e4b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e4b3: mov word ptr [esi + 0x386], cx */ W16((u32)(r_esi+0x386u), (u16)r_ecx);
    /* 0054e4ba: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054e4bf: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0054e4c2: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4c8: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4cb: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 0054e4d1: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4d3: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54e4d8u); f_007706b0();
L_0054e4d8:; BB(0x0054e4d8);
    /* 0054e4d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4da: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x54e4dfu); f_0078730c();
    /* 0054e4df: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0054e4e5: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0054e4eb: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0054e4ee: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0054e4f4: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0054e4f7: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0054e4fa: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4fc: call 0x54fd30 */ r_esp -= 4; W32(r_esp, 0x54e501u); f_0054fd30();
    /* 0054e501: fld dword ptr [0x92467c] */ FPUSH(R_F32((u32)(0x92467cu)));
    /* 0054e507: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0054e50d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0054e513: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054e514: ret  */ FN_RET(0x0054e45e); r_esp += 4; return;
}

void f_0054e467(void)
{
    FN_ENTER(0x0054e467);
    /* 0054e467: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e469: call 0x54f228 */ r_esp -= 4; W32(r_esp, 0x54e46eu); f_0054f228();
    /* 0054e46e: jmp 0x54e492 */ goto L_0054e492;
L_0054e492:; BB(0x0054e492);
    /* 0054e492: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e494: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x54e499u); f_00770738();
    /* 0054e499: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e49b: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e49d:; BB(0x0054e49d);
    /* 0054e49d: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0054e4a0: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e4a5: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e4a7:; BB(0x0054e4a7);
    /* 0054e4a7: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054e4aa: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 0054e4b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e4b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e4b3: mov word ptr [esi + 0x386], cx */ W16((u32)(r_esi+0x386u), (u16)r_ecx);
    /* 0054e4ba: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054e4bf: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0054e4c2: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4c8: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4cb: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 0054e4d1: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4d3: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54e4d8u); f_007706b0();
L_0054e4d8:; BB(0x0054e4d8);
    /* 0054e4d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4da: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x54e4dfu); f_0078730c();
    /* 0054e4df: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0054e4e5: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0054e4eb: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0054e4ee: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0054e4f4: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0054e4f7: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0054e4fa: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4fc: call 0x54fd30 */ r_esp -= 4; W32(r_esp, 0x54e501u); f_0054fd30();
    /* 0054e501: fld dword ptr [0x92467c] */ FPUSH(R_F32((u32)(0x92467cu)));
    /* 0054e507: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0054e50d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0054e513: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054e514: ret  */ FN_RET(0x0054e467); r_esp += 4; return;
}

void f_0054e470(void)
{
    FN_ENTER(0x0054e470);
    /* 0054e470: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e472: call 0x54f8f8 */ r_esp -= 4; W32(r_esp, 0x54e477u); f_0054f8f8();
    /* 0054e477: jmp 0x54e492 */ goto L_0054e492;
L_0054e492:; BB(0x0054e492);
    /* 0054e492: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e494: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x54e499u); f_00770738();
    /* 0054e499: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e49b: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e49d:; BB(0x0054e49d);
    /* 0054e49d: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0054e4a0: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e4a5: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e4a7:; BB(0x0054e4a7);
    /* 0054e4a7: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054e4aa: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 0054e4b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e4b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e4b3: mov word ptr [esi + 0x386], cx */ W16((u32)(r_esi+0x386u), (u16)r_ecx);
    /* 0054e4ba: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054e4bf: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0054e4c2: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4c8: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4cb: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 0054e4d1: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4d3: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54e4d8u); f_007706b0();
L_0054e4d8:; BB(0x0054e4d8);
    /* 0054e4d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4da: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x54e4dfu); f_0078730c();
    /* 0054e4df: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0054e4e5: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0054e4eb: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0054e4ee: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0054e4f4: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0054e4f7: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0054e4fa: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4fc: call 0x54fd30 */ r_esp -= 4; W32(r_esp, 0x54e501u); f_0054fd30();
    /* 0054e501: fld dword ptr [0x92467c] */ FPUSH(R_F32((u32)(0x92467cu)));
    /* 0054e507: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0054e50d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0054e513: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054e514: ret  */ FN_RET(0x0054e470); r_esp += 4; return;
}

void f_0054e479(void)
{
    FN_ENTER(0x0054e479);
    /* 0054e479: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e47b: call 0x54fb80 */ r_esp -= 4; W32(r_esp, 0x54e480u); f_0054fb80();
    /* 0054e480: jmp 0x54e492 */ goto L_0054e492;
L_0054e492:; BB(0x0054e492);
    /* 0054e492: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e494: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x54e499u); f_00770738();
    /* 0054e499: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e49b: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e49d:; BB(0x0054e49d);
    /* 0054e49d: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0054e4a0: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e4a5: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e4a7:; BB(0x0054e4a7);
    /* 0054e4a7: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054e4aa: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 0054e4b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e4b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e4b3: mov word ptr [esi + 0x386], cx */ W16((u32)(r_esi+0x386u), (u16)r_ecx);
    /* 0054e4ba: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054e4bf: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0054e4c2: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4c8: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4cb: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 0054e4d1: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4d3: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54e4d8u); f_007706b0();
L_0054e4d8:; BB(0x0054e4d8);
    /* 0054e4d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4da: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x54e4dfu); f_0078730c();
    /* 0054e4df: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0054e4e5: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0054e4eb: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0054e4ee: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0054e4f4: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0054e4f7: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0054e4fa: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4fc: call 0x54fd30 */ r_esp -= 4; W32(r_esp, 0x54e501u); f_0054fd30();
    /* 0054e501: fld dword ptr [0x92467c] */ FPUSH(R_F32((u32)(0x92467cu)));
    /* 0054e507: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0054e50d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0054e513: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054e514: ret  */ FN_RET(0x0054e479); r_esp += 4; return;
}

void f_0054e482(void)
{
    FN_ENTER(0x0054e482);
    /* 0054e482: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e484: call 0x54fc50 */ r_esp -= 4; W32(r_esp, 0x54e489u); f_0054fc50();
    /* 0054e489: jmp 0x54e492 */ goto L_0054e492;
L_0054e492:; BB(0x0054e492);
    /* 0054e492: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e494: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x54e499u); f_00770738();
    /* 0054e499: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e49b: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e49d:; BB(0x0054e49d);
    /* 0054e49d: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0054e4a0: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e4a5: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e4a7:; BB(0x0054e4a7);
    /* 0054e4a7: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054e4aa: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 0054e4b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e4b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e4b3: mov word ptr [esi + 0x386], cx */ W16((u32)(r_esi+0x386u), (u16)r_ecx);
    /* 0054e4ba: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054e4bf: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0054e4c2: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4c8: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4cb: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 0054e4d1: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4d3: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54e4d8u); f_007706b0();
L_0054e4d8:; BB(0x0054e4d8);
    /* 0054e4d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4da: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x54e4dfu); f_0078730c();
    /* 0054e4df: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0054e4e5: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0054e4eb: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0054e4ee: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0054e4f4: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0054e4f7: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0054e4fa: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4fc: call 0x54fd30 */ r_esp -= 4; W32(r_esp, 0x54e501u); f_0054fd30();
    /* 0054e501: fld dword ptr [0x92467c] */ FPUSH(R_F32((u32)(0x92467cu)));
    /* 0054e507: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0054e50d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0054e513: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054e514: ret  */ FN_RET(0x0054e482); r_esp += 4; return;
}

void f_0054e48b(void)
{
    FN_ENTER(0x0054e48b);
    /* 0054e48b: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e48d: call 0x54fcf0 */ r_esp -= 4; W32(r_esp, 0x54e492u); f_0054fcf0();
    /* 0054e492: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e494: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x54e499u); f_00770738();
    /* 0054e499: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e49b: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e49d:; BB(0x0054e49d);
    /* 0054e49d: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0054e4a0: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e4a5: je 0x54e4d8 */ if (fZ) goto L_0054e4d8;
L_0054e4a7:; BB(0x0054e4a7);
    /* 0054e4a7: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054e4aa: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 0054e4b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e4b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e4b3: mov word ptr [esi + 0x386], cx */ W16((u32)(r_esi+0x386u), (u16)r_ecx);
    /* 0054e4ba: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054e4bf: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0054e4c2: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4c8: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0054e4cb: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 0054e4d1: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4d3: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54e4d8u); f_007706b0();
L_0054e4d8:; BB(0x0054e4d8);
    /* 0054e4d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4da: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x54e4dfu); f_0078730c();
    /* 0054e4df: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0054e4e5: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0054e4eb: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0054e4ee: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0054e4f4: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0054e4f7: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0054e4fa: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e4fc: call 0x54fd30 */ r_esp -= 4; W32(r_esp, 0x54e501u); f_0054fd30();
    /* 0054e501: fld dword ptr [0x92467c] */ FPUSH(R_F32((u32)(0x92467cu)));
    /* 0054e507: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0054e50d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0054e513: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054e514: ret  */ FN_RET(0x0054e48b); r_esp += 4; return;
}

void f_0054e518(void) /* sub_54E518 */
{
    FN_ENTER(0x0054e518);
    /* 0054e518: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e519: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0054e51b: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0054e51e: mov edx, dword ptr [ebx + 0x37c] */ r_edx = R32((u32)(r_ebx+0x37cu));
    /* 0054e524: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054e529: or eax, 0x6040000 */ {  u32 a = r_eax; u32 b = 0x6040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054e52e: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0054e531: and edx, 0xfffffff8 */ {  u32 a = r_edx; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054e534: mov dword ptr [ebx + 0x37c], edx */ W32((u32)(r_ebx+0x37cu), r_edx);
    /* 0054e53a: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 0054e540: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0054e543: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054e546: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0054e549: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054e54b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54e550u); f_007aa094();
    /* 0054e550: movsx eax, word ptr [ebx + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x330u));
    /* 0054e557: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e55a: jne 0x54e5b2 */ if (!fZ) goto L_0054e5b2;
L_0054e55c:; BB(0x0054e55c);
    /* 0054e55c: fld dword ptr [0x924670] */ FPUSH(R_F32((u32)(0x924670u)));
    /* 0054e562: fadd dword ptr [ebx + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x68u));
    /* 0054e565: fcom dword ptr [0x92466c] */ fx_compare(ST(0), R_F32((u32)(0x92466cu))); 
    /* 0054e56b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054e56d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054e56e: jae 0x54e581 */ if (!fC) goto L_0054e581;
L_0054e570:; BB(0x0054e570);
    /* 0054e570: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054e572: fld dword ptr [0x924674] */ FPUSH(R_F32((u32)(0x924674u)));
    /* 0054e578: mov dword ptr [ebx + 0x68], 0 */ W32((u32)(r_ebx+0x68u), 0x0u);
    /* 0054e57f: jmp 0x54e584 */ goto L_0054e584;
L_0054e581:; BB(0x0054e581);
    /* 0054e581: fst dword ptr [ebx + 0x68] */ W_F32((u32)(r_ebx+0x68u), ST(0));
L_0054e584:; BB(0x0054e584);
    /* 0054e584: fld dword ptr [0x924668] */ FPUSH(R_F32((u32)(0x924668u)));
    /* 0054e58a: fadd dword ptr [ebx + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x6cu));
    /* 0054e58d: mov eax, dword ptr [ebx + 0x3ac] */ r_eax = R32((u32)(r_ebx+0x3acu));
    /* 0054e593: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054e595: fstp dword ptr [ebx + 0x70] */ W_F32((u32)(r_ebx+0x70u), ST(0)); FPOP();
    /* 0054e598: fstp dword ptr [ebx + 0x6c] */ W_F32((u32)(r_ebx+0x6cu), ST(0)); FPOP();
    /* 0054e59b: lea ecx, [ebx + 0x3ac] */ r_ecx = (u32)(r_ebx+0x3acu);
    /* 0054e5a1: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x54e5a4u); call_ind(t); }
    /* 0054e5a4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e5a7: je 0x54e62b */ if (fZ) goto L_0054e62b;
L_0054e5ad:; BB(0x0054e5ad);
    /* 0054e5ad: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0054e5b0: jmp 0x54e617 */ goto L_0054e617;
L_0054e5b2:; BB(0x0054e5b2);
    /* 0054e5b2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e5b5: jne 0x54e5fe */ if (!fZ) goto L_0054e5fe;
L_0054e5b7:; BB(0x0054e5b7);
    /* 0054e5b7: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 0054e5ba: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 0054e5bd: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0054e5c0: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 0054e5c3: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 0054e5c6: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 0054e5c9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054e5cb: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x54e5d0u); f_0078730c();
    /* 0054e5d0: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0054e5d6: mov dword ptr [ebx + 0x70], 0x3f800000 */ W32((u32)(r_ebx+0x70u), 0x3f800000u);
    /* 0054e5dd: and eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054e5e2: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054e5e5: mov dword ptr [ebx + 0x6c], 0x3f800000 */ W32((u32)(r_ebx+0x6cu), 0x3f800000u);
    /* 0054e5ec: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
    /* 0054e5f2: mov dword ptr [ebx + 0x68], 0x3f800000 */ W32((u32)(r_ebx+0x68u), 0x3f800000u);
    /* 0054e5f9: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0054e5fc: jmp 0x54e617 */ goto L_0054e617;
L_0054e5fe:; BB(0x0054e5fe);
    /* 0054e5fe: movsx eax, word ptr [ebx + 0x386] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x386u));
    /* 0054e605: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0054e608: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e60b: jg 0x54e63c */ if ((!fZ&&fS==fO)) goto L_0054e63c;
L_0054e60d:; BB(0x0054e60d);
    /* 0054e60d: mov word ptr [ebx + 0x386], dx */ W16((u32)(r_ebx+0x386u), (u16)r_edx);
    /* 0054e614: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0054e617:; BB(0x0054e617);
    /* 0054e617: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e619: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e61b: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e620: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e621: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x54e626u); f_00805608();
    /* 0054e626: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054e629: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054e62a: ret  */ FN_RET(0x0054e518); r_esp += 4; return;
L_0054e62b:; BB(0x0054e62b);
    /* 0054e62b: mov eax, 2 */ r_eax = 0x2u;
    /* 0054e630: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0054e637: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0054e63a: jmp 0x54e617 */ goto L_0054e617;
L_0054e63c:; BB(0x0054e63c);
    /* 0054e63c: mov dword ptr [ebx + 0x70], 0x3f800000 */ W32((u32)(r_ebx+0x70u), 0x3f800000u);
    /* 0054e643: mov eax, 1 */ r_eax = 0x1u;
    /* 0054e648: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0054e64f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054e651: mov dword ptr [ebx + 0x6c], 0x3f800000 */ W32((u32)(r_ebx+0x6cu), 0x3f800000u);
    /* 0054e658: mov word ptr [ebx + 0x386], dx */ W16((u32)(r_ebx+0x386u), (u16)r_edx);
    /* 0054e65f: lea ecx, [ebx + 0x3ac] */ r_ecx = (u32)(r_ebx+0x3acu);
    /* 0054e665: mov dword ptr [ebx + 0x68], 0x3f800000 */ W32((u32)(r_ebx+0x68u), 0x3f800000u);
    /* 0054e66c: call 0x512458 */ r_esp -= 4; W32(r_esp, 0x54e671u); f_00512458();
    /* 0054e671: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e673: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e675: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054e677: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54e67cu); f_00772b44();
    /* 0054e67c: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0054e67f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e680: call 0x578a68 */ r_esp -= 4; W32(r_esp, 0x54e685u); f_00578a68();
    /* 0054e685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054e686: jmp 0x54e617 */ goto L_0054e617;
}

void f_0054e688(void) /* sub_54E688 */
{
    FN_ENTER(0x0054e688);
    /* 0054e688: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054e689: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054e68a: mov edi, ecx */ r_edi = r_ecx;
    /* 0054e68c: mov ecx, edi */ r_ecx = r_edi;
    /* 0054e68e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54e693u); f_007aa094();
    /* 0054e693: movsx eax, word ptr [edi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 0054e69a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e69c: je 0x54e70d */ if (fZ) goto L_0054e70d;
L_0054e69e:; BB(0x0054e69e);
    /* 0054e69e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e6a1: jne 0x54e6f8 */ if (!fZ) goto L_0054e6f8;
L_0054e6a3:; BB(0x0054e6a3);
    /* 0054e6a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e6a5: push dword ptr [edi + 0x3a4] */ { u32 v = R32((u32)(r_edi+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054e6ab: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x54e6b0u); f_007a8cb8();
    /* 0054e6b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054e6b3: mov dword ptr [edi + 0x3a4], eax */ W32((u32)(r_edi+0x3a4u), r_eax);
    /* 0054e6b9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0054e6bb: mov ecx, edi */ r_ecx = r_edi;
    /* 0054e6bd: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x54e6c0u); call_ind(t); }
    /* 0054e6c0: fld dword ptr [0x924664] */ FPUSH(R_F32((u32)(0x924664u)));
    /* 0054e6c6: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 0054e6cc: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0054e6ce: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 0054e6d4: mov eax, dword ptr [edi + 0x3ac] */ r_eax = R32((u32)(r_edi+0x3acu));
    /* 0054e6da: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0054e6dc: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 0054e6e2: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
    /* 0054e6e8: lea ecx, [edi + 0x3ac] */ r_ecx = (u32)(r_edi+0x3acu);
    /* 0054e6ee: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x54e6f1u); call_ind(t); }
    /* 0054e6f1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054e6f4: jne 0x54e753 */ if (!fZ) goto L_0054e753;
L_0054e6f6:; BB(0x0054e6f6);
    /* 0054e6f6: jmp 0x54e756 */ goto L_0054e756;
L_0054e6f8:; BB(0x0054e6f8);
    /* 0054e6f8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054e6fb: jne 0x54e753 */ if (!fZ) goto L_0054e753;
L_0054e6fd:; BB(0x0054e6fd);
    /* 0054e6fd: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0054e701: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054e706: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0054e70a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054e70b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054e70c: ret  */ FN_RET(0x0054e688); r_esp += 4; return;
L_0054e70d:; BB(0x0054e70d);
    /* 0054e70d: mov eax, 1 */ r_eax = 0x1u;
    /* 0054e712: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0054e719: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0054e71c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054e71d: call 0x5787fc */ r_esp -= 4; W32(r_esp, 0x54e722u); f_005787fc();
    /* 0054e722: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054e723: lea ecx, [edi + 0x3ac] */ r_ecx = (u32)(r_edi+0x3acu);
    /* 0054e729: call 0x512458 */ r_esp -= 4; W32(r_esp, 0x54e72eu); f_00512458();
    /* 0054e72e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e730: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e732: mov ecx, edi */ r_ecx = r_edi;
    /* 0054e734: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54e739u); f_00772b44();
    /* 0054e739: push 0x1d2 */ { u32 v = 0x1d2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e73e: mov ecx, edi */ r_ecx = r_edi;
    /* 0054e740: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54e745u); f_007879b8();
    /* 0054e745: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054e747: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e748: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e749: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054e74a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e74b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54e750u); f_00814298();
    /* 0054e750: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0054e753:; BB(0x0054e753);
    /* 0054e753: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054e754: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054e755: ret  */ FN_RET(0x0054e688); r_esp += 4; return;
L_0054e756:; BB(0x0054e756);
    /* 0054e756: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e758: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0054e75b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e75c: call 0x5786e8 */ r_esp -= 4; W32(r_esp, 0x54e761u); f_005786e8();
    /* 0054e761: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054e764: mov eax, 2 */ r_eax = 0x2u;
    /* 0054e769: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0054e770: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054e771: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054e772: ret  */ FN_RET(0x0054e688); r_esp += 4; return;
}

void f_0054e774(void) /* sub_54E774 */
{
    FN_ENTER(0x0054e774);
    /* 0054e774: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e775: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0054e777: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054e779: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54e77eu); f_007aa094();
    /* 0054e77e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e780: push dword ptr [ebx + 0x3a4] */ { u32 v = R32((u32)(r_ebx+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054e786: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x54e78bu); f_007a8cb8();
    /* 0054e78b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054e78e: mov dword ptr [ebx + 0x3a4], eax */ W32((u32)(r_ebx+0x3a4u), r_eax);
    /* 0054e794: movsx eax, word ptr [ebx + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x330u));
    /* 0054e79b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e79d: je 0x54e826 */ if (fZ) goto L_0054e826;
L_0054e7a3:; BB(0x0054e7a3);
    /* 0054e7a3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e7a6: jne 0x54e7e0 */ if (!fZ) goto L_0054e7e0;
L_0054e7a8:; BB(0x0054e7a8);
    /* 0054e7a8: mov dword ptr [ebx + 0x314], 0 */ W32((u32)(r_ebx+0x314u), 0x0u);
    /* 0054e7b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e7b4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054e7b6: mov dword ptr [ebx + 0x30c], 0 */ W32((u32)(r_ebx+0x30cu), 0x0u);
    /* 0054e7c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e7c2: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54e7c7u); f_00772b44();
    /* 0054e7c7: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
    /* 0054e7cd: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e7d0: je 0x54e83d */ if (fZ) goto L_0054e83d;
L_0054e7d2:; BB(0x0054e7d2);
    /* 0054e7d2: mov eax, 2 */ r_eax = 0x2u;
    /* 0054e7d7: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0054e7de: jmp 0x54e83d */ goto L_0054e83d;
L_0054e7e0:; BB(0x0054e7e0);
    /* 0054e7e0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e7e3: jne 0x54e83d */ if (!fZ) goto L_0054e83d;
L_0054e7e5:; BB(0x0054e7e5);
    /* 0054e7e5: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0054e7e8: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e7ed: jne 0x54e7fd */ if (!fZ) goto L_0054e7fd;
L_0054e7ef:; BB(0x0054e7ef);
    /* 0054e7ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e7f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e7f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054e7f5: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54e7fau); f_00772b44();
    /* 0054e7fa: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
L_0054e7fd:; BB(0x0054e7fd);
    /* 0054e7fd: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 0054e803: and eax, 0xfffff9ff */ {  u32 a = r_eax; u32 b = 0xfffff9ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054e808: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0054e80b: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0054e80e: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054e813: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0054e816: movzx eax, word ptr [ebx + 0x334] */ r_eax = (u32)R16((u32)(r_ebx+0x334u));
    /* 0054e81d: mov word ptr [ebx + 0x346], ax */ W16((u32)(r_ebx+0x346u), (u16)r_eax);
    /* 0054e824: jmp 0x54e83d */ goto L_0054e83d;
L_0054e826:; BB(0x0054e826);
    /* 0054e826: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e828: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e82a: mov eax, 1 */ r_eax = 0x1u;
    /* 0054e82f: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0054e836: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054e838: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54e83du); f_00772b44();
L_0054e83d:; BB(0x0054e83d);
    /* 0054e83d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054e83f: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x54e844u); f_007b6894();
    /* 0054e844: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054e846: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x54e84bu); f_007b798c();
    /* 0054e84b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e84d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e84f: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0054e852: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e857: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e858: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x54e85du); f_00805608();
    /* 0054e85d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e85f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e860: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x54e865u); f_006946a8();
    /* 0054e865: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0054e868: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054e86d: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0054e870: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054e873: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054e874: ret  */ FN_RET(0x0054e774); r_esp += 4; return;
}

void f_0054e878(void) /* sub_54E878 */
{
    FN_ENTER(0x0054e878);
    /* 0054e878: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054e879: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054e87a: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054e87d: mov esi, ecx */ r_esi = r_ecx;
    /* 0054e87f: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e881: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54e886u); f_007aa094();
    /* 0054e886: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e888: push dword ptr [esi + 0x3a4] */ { u32 v = R32((u32)(r_esi+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054e88e: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x54e893u); f_007a8cb8();
    /* 0054e893: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054e896: mov dword ptr [esi + 0x3a4], eax */ W32((u32)(r_esi+0x3a4u), r_eax);
    /* 0054e89c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054e89f: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e8a4: jne 0x54e8b1 */ if (!fZ) goto L_0054e8b1;
L_0054e8a6:; BB(0x0054e8a6);
    /* 0054e8a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e8a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e8aa: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e8ac: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54e8b1u); f_00772b44();
L_0054e8b1:; BB(0x0054e8b1);
    /* 0054e8b1: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 0054e8b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e8ba: jne 0x54e981 */ if (!fZ) goto L_0054e981;
L_0054e8c0:; BB(0x0054e8c0);
    /* 0054e8c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e8c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e8c4: mov eax, 1 */ r_eax = 0x1u;
    /* 0054e8c9: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0054e8d0: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e8d2: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54e8d7u); f_00772b44();
    /* 0054e8d7: mov ecx, dword ptr [esi + 0x394] */ r_ecx = R32((u32)(r_esi+0x394u));
    /* 0054e8dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e8df: je 0x54e954 */ if (fZ) goto L_0054e954;
L_0054e8e1:; BB(0x0054e8e1);
    /* 0054e8e1: movsx edi, word ptr [ecx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x2ccu));
    /* 0054e8e8: mov eax, dword ptr [ecx + 0x31c] */ r_eax = R32((u32)(r_ecx+0x31cu));
    /* 0054e8ee: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0054e8f1: movsx ecx, word ptr [ecx + 0x2ce] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2ceu));
    /* 0054e8f8: movsx eax, word ptr [esi + 0x390] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x390u));
    /* 0054e8ff: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0054e901: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0054e904: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0054e907: movsx eax, word ptr [esi + 0x2d2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2d2u));
    /* 0054e90e: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0054e910: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0054e912: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0054e916: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0054e91a: fmul dword ptr [0x92464c] */ ST(0) = ST(0) * R_F32((u32)(0x92464cu));
    /* 0054e920: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0054e922: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0054e926: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0054e92b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054e930: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0054e934: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0054e938: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0054e93c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0054e940: movsx eax, word ptr [esp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 0054e945: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054e947: jle 0x54ea59 */ if ((fZ||fS!=fO)) goto L_0054ea59;
L_0054e94d:; BB(0x0054e94d);
    /* 0054e94d: mov word ptr [esi + 0x390], ax */ W16((u32)(r_esi+0x390u), (u16)r_eax);
L_0054e954:; BB(0x0054e954);
    /* 0054e954: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e959: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054e95c: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054e961: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0054e964: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e966: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54e96bu); f_007879b8();
    /* 0054e96b: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 0054e96e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054e970: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e971: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e972: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054e973: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e974: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54e979u); f_00814298();
    /* 0054e979: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054e97c: jmp 0x54ea2b */ goto L_0054ea2b;
L_0054e981:; BB(0x0054e981);
    /* 0054e981: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e984: jne 0x54ea0e */ if (!fZ) goto L_0054ea0e;
L_0054e98a:; BB(0x0054e98a);
    /* 0054e98a: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e98f: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e991: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54e996u); f_007aaa30();
    /* 0054e996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e998: je 0x54e9a4 */ if (fZ) goto L_0054e9a4;
L_0054e99a:; BB(0x0054e99a);
    /* 0054e99a: mov dword ptr [esi + 0x388], 0x107 */ W32((u32)(r_esi+0x388u), 0x107u);
L_0054e9a4:; BB(0x0054e9a4);
    /* 0054e9a4: push 0x41e00000 */ { u32 v = 0x41e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e9a9: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e9ab: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54e9b0u); f_007aaa30();
    /* 0054e9b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e9b2: jne 0x54e9b9 */ if (!fZ) goto L_0054e9b9;
L_0054e9b4:; BB(0x0054e9b4);
    /* 0054e9b4: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 0054e9b7: jmp 0x54ea2b */ goto L_0054ea2b;
L_0054e9b9:; BB(0x0054e9b9);
    /* 0054e9b9: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054e9bc: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 0054e9c2: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0054e9c4: and eax, 0xfbfffeff */ {  u32 a = r_eax; u32 b = 0xfbfffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054e9c9: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0054e9cc: and edx, 0xffffffdf */ {  u32 a = r_edx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054e9cf: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 0054e9d5: mov ecx, esi */ r_ecx = r_esi;
    /* 0054e9d7: call dword ptr [edi + 0x84] */ { u32 t = R32((u32)(r_edi+0x84u)); r_esp -= 4; W32(r_esp, 0x54e9ddu); call_ind(t); }
    /* 0054e9dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e9df: je 0x54e9f6 */ if (fZ) goto L_0054e9f6;
L_0054e9e1:; BB(0x0054e9e1);
    /* 0054e9e1: mov dword ptr [esi + 0xc0], 0 */ W32((u32)(r_esi+0xc0u), 0x0u);
    /* 0054e9eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054e9ed: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0054e9f4: jmp 0x54ea02 */ goto L_0054ea02;
L_0054e9f6:; BB(0x0054e9f6);
    /* 0054e9f6: mov eax, 2 */ r_eax = 0x2u;
    /* 0054e9fb: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
L_0054ea02:; BB(0x0054ea02);
    /* 0054ea02: mov ecx, esi */ r_ecx = r_esi;
    /* 0054ea04: call 0x54ea78 */ r_esp -= 4; W32(r_esp, 0x54ea09u); f_0054ea78();
    /* 0054ea09: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 0054ea0c: jmp 0x54ea2b */ goto L_0054ea2b;
L_0054ea0e:; BB(0x0054ea0e);
    /* 0054ea0e: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054ea11: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 0054ea17: and eax, 0xfbfffeff */ {  u32 a = r_eax; u32 b = 0xfbfffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054ea1c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0054ea1f: and edx, 0xffffffdf */ {  u32 a = r_edx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054ea22: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 0054ea28: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
L_0054ea2b:; BB(0x0054ea2b);
    /* 0054ea2b: mov ecx, esi */ r_ecx = r_esi;
    /* 0054ea2d: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x54ea32u); f_007b6894();
    /* 0054ea32: mov ecx, esi */ r_ecx = r_esi;
    /* 0054ea34: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x54ea39u); f_007b798c();
    /* 0054ea39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ea3b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ea3d: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054ea42: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054ea43: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x54ea48u); f_00805608();
    /* 0054ea48: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054ea4b: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054ea50: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0054ea53: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054ea56: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054ea57: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054ea58: ret  */ FN_RET(0x0054e878); r_esp += 4; return;
L_0054ea59:; BB(0x0054ea59);
    /* 0054ea59: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 0054ea5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054ea61: mov word ptr [esi + 0x390], ax */ W16((u32)(r_esi+0x390u), (u16)r_eax);
    /* 0054ea68: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0054ea6b: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 0054ea71: jmp 0x54e954 */ goto L_0054e954;
}

void f_0054ea78(void) /* sub_54EA78 */
{
    FN_ENTER(0x0054ea78);
    /* 0054ea78: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054ea7b: movsx eax, word ptr [ecx + 0x392] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x392u));
    /* 0054ea82: movsx edx, word ptr [ecx + 0x390] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x390u));
    /* 0054ea89: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ea8b: jne 0x54ea9b */ if (!fZ) goto L_0054ea9b;
L_0054ea8d:; BB(0x0054ea8d);
    /* 0054ea8d: mov dword ptr [ecx + 0x388], 0x101 */ W32((u32)(r_ecx+0x388u), 0x101u);
    /* 0054ea97: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054ea9a: ret  */ FN_RET(0x0054ea78); r_esp += 4; return;
L_0054ea9b:; BB(0x0054ea9b);
    /* 0054ea9b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0054ea9e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0054eaa1: fmul dword ptr [0x924648] */ ST(0) = ST(0) * R_F32((u32)(0x924648u));
    /* 0054eaa7: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0054eaab: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0054eaaf: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0054eab1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054eab3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054eab4: jbe 0x54eac4 */ if ((fC||fZ)) goto L_0054eac4;
L_0054eab6:; BB(0x0054eab6);
    /* 0054eab6: mov dword ptr [ecx + 0x388], 0x102 */ W32((u32)(r_ecx+0x388u), 0x102u);
    /* 0054eac0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054eac3: ret  */ FN_RET(0x0054ea78); r_esp += 4; return;
L_0054eac4:; BB(0x0054eac4);
    /* 0054eac4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054eac6: jle 0x54ead6 */ if ((fZ||fS!=fO)) goto L_0054ead6;
L_0054eac8:; BB(0x0054eac8);
    /* 0054eac8: mov dword ptr [ecx + 0x388], 0x103 */ W32((u32)(r_ecx+0x388u), 0x103u);
    /* 0054ead2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054ead5: ret  */ FN_RET(0x0054ea78); r_esp += 4; return;
L_0054ead6:; BB(0x0054ead6);
    /* 0054ead6: mov dword ptr [ecx + 0x388], 0 */ W32((u32)(r_ecx+0x388u), 0x0u);
    /* 0054eae0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054eae3: ret  */ FN_RET(0x0054ea78); r_esp += 4; return;
}

void f_0054eae4(void) /* sub_54EAE4 */
{
    FN_ENTER(0x0054eae4);
    /* 0054eae4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054eae5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054eae6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054eae7: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054eaea: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0054eaec: movzx eax, word ptr [ebp + 0x340] */ r_eax = (u32)R16((u32)(r_ebp+0x340u));
    /* 0054eaf3: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054eaf8: jl 0x54eb29 */ if ((fS!=fO)) goto L_0054eb29;
L_0054eafa:; BB(0x0054eafa);
    /* 0054eafa: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054eaff: jge 0x54eb12 */ if ((fS==fO)) goto L_0054eb12;
L_0054eb01:; BB(0x0054eb01);
    /* 0054eb01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054eb02: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x54eb07u); f_00786b3c();
    /* 0054eb07: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054eb08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054eb09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054eb0b: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54eb10u); f_007706b0();
    /* 0054eb10: jmp 0x54eb55 */ goto L_0054eb55;
L_0054eb12:; BB(0x0054eb12);
    /* 0054eb12: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0054eb17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054eb19: mov word ptr [ebp + 0x340], ax */ W16((u32)(r_ebp+0x340u), (u16)r_eax);
    /* 0054eb20: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054eb22: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54eb27u); f_007706b0();
    /* 0054eb27: jmp 0x54eb55 */ goto L_0054eb55;
L_0054eb29:; BB(0x0054eb29);
    /* 0054eb29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054eb2a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x54eb2fu); f_0068d5a8();
    /* 0054eb2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054eb30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054eb32: je 0x54eb4c */ if (fZ) goto L_0054eb4c;
L_0054eb34:; BB(0x0054eb34);
    /* 0054eb34: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0054eb3a: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054eb40: jne 0x54eb4c */ if (!fZ) goto L_0054eb4c;
L_0054eb42:; BB(0x0054eb42);
    /* 0054eb42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054eb43: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054eb45: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54eb4au); f_007706b0();
    /* 0054eb4a: jmp 0x54eb55 */ goto L_0054eb55;
L_0054eb4c:; BB(0x0054eb4c);
    /* 0054eb4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054eb4e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054eb50: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54eb55u); f_007706b0();
L_0054eb55:; BB(0x0054eb55);
    /* 0054eb55: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0054eb58: or eax, 0x6000000 */ {  u32 a = r_eax; u32 b = 0x6000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054eb5d: mov ebx, dword ptr [ebp + 0xa4] */ r_ebx = R32((u32)(r_ebp+0xa4u));
    /* 0054eb63: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0054eb66: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 0054eb69: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054eb6c: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 0054eb6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054eb71: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54eb76u); f_007aa094();
    /* 0054eb76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054eb78: push dword ptr [ebp + 0x3a4] */ { u32 v = R32((u32)(r_ebp+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054eb7e: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x54eb83u); f_007a8cb8();
    /* 0054eb83: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054eb86: mov dword ptr [ebp + 0x3a4], eax */ W32((u32)(r_ebp+0x3a4u), r_eax);
    /* 0054eb8c: movsx eax, word ptr [ebp + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 0054eb93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054eb95: je 0x54eda9 */ if (fZ) goto L_0054eda9;
L_0054eb9b:; BB(0x0054eb9b);
    /* 0054eb9b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054eb9e: jne 0x54ed45 */ if (!fZ) goto L_0054ed45;
L_0054eba4:; BB(0x0054eba4);
    /* 0054eba4: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0054eba7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054eba9: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x54ebacu); call_ind(t); }
    /* 0054ebac: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 0054ebb2: fcom dword ptr [0xa7394c] */ fx_compare(ST(0), R_F32((u32)(0xa7394cu))); 
    /* 0054ebb8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054ebba: mov edx, dword ptr [ebp + 0xc0] */ r_edx = R32((u32)(r_ebp+0xc0u));
    /* 0054ebc0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054ebc1: jb 0x54ec38 */ if (fC) goto L_0054ec38;
L_0054ebc3:; BB(0x0054ebc3);
    /* 0054ebc3: fcomp dword ptr [0xa73950] */ fx_compare(ST(0), R_F32((u32)(0xa73950u))); FPOP();
    /* 0054ebc9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054ebcb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054ebcc: jbe 0x54ebd3 */ if ((fC||fZ)) goto L_0054ebd3;
L_0054ebce:; BB(0x0054ebce);
    /* 0054ebce: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0054ebd1: jmp 0x54ec3d */ goto L_0054ec3d;
L_0054ebd3:; BB(0x0054ebd3);
    /* 0054ebd3: mov ecx, dword ptr [0xa7398c] */ r_ecx = R32((u32)(0xa7398cu));
    /* 0054ebd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ebda: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x54ebdfu); f_00579de0();
    /* 0054ebdf: mov esi, eax */ r_esi = r_eax;
    /* 0054ebe1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ebe3: je 0x54ec33 */ if (fZ) goto L_0054ec33;
L_0054ebe5:; BB(0x0054ebe5);
    /* 0054ebe5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x54ebeau); f_0082d7b0();
    /* 0054ebea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054ebec: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x54ebf1u); f_00830cd8();
    /* 0054ebf1: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0054ebf4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054ebf6: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x54ebfbu); f_0082d838();
    /* 0054ebfb: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0054ebfe: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054ec00: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x54ec05u); f_0082d8bc();
    /* 0054ec05: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0054ec08: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ec0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ec0b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054ec0d: mov edx, esi */ r_edx = r_esi;
    /* 0054ec0f: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x54ec14u); f_0082f940();
    /* 0054ec14: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x54ec19u); f_0082da80();
    /* 0054ec19: mov ecx, dword ptr [ebp + 0x3cc] */ r_ecx = R32((u32)(r_ebp+0x3ccu));
    /* 0054ec1f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ec21: je 0x54ec3d */ if (fZ) goto L_0054ec3d;
L_0054ec23:; BB(0x0054ec23);
    /* 0054ec23: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 0054ec26: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0054ec2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ec2b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0054ec2d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054ec2e: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x54ec31u); call_ind(t); }
    /* 0054ec31: jmp 0x54ec3d */ goto L_0054ec3d;
L_0054ec33:; BB(0x0054ec33);
    /* 0054ec33: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0054ec36: jmp 0x54ec3d */ goto L_0054ec3d;
L_0054ec38:; BB(0x0054ec38);
    /* 0054ec38: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054ec3a: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
L_0054ec3d:; BB(0x0054ec3d);
    /* 0054ec3d: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ec42: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054ec44: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54ec49u); f_007aaa30();
    /* 0054ec49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ec4b: je 0x54ef04 */ if (fZ) goto L_0054ef04;
L_0054ec51:; BB(0x0054ec51);
    /* 0054ec51: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054ec53: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x54ec58u); f_007b6894();
    /* 0054ec58: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054ec5a: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x54ec5fu); f_007b798c();
    /* 0054ec5f: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0054ec62: mov eax, 2 */ r_eax = 0x2u;
    /* 0054ec67: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0054ec6e: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0054ec73: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054ec76: je 0x54ec85 */ if (fZ) goto L_0054ec85;
L_0054ec78:; BB(0x0054ec78);
    /* 0054ec78: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054ec7e: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 0054ec83: jmp 0x54ec8a */ goto L_0054ec8a;
L_0054ec85:; BB(0x0054ec85);
    /* 0054ec85: mov edx, 0x1000 */ r_edx = 0x1000u;
L_0054ec8a:; BB(0x0054ec8a);
    /* 0054ec8a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0054ec8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054ec8e: jle 0x54ed09 */ if ((fZ||fS!=fO)) goto L_0054ed09;
L_0054ec90:; BB(0x0054ec90);
    /* 0054ec90: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 0054ec94: mov ebx, eax */ r_ebx = r_eax;
    /* 0054ec96: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0054ec9a: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
L_0054ec9e:; BB(0x0054ec9e);
    /* 0054ec9e: mov edi, dword ptr [esi*4 + 0xaad720] */ r_edi = R32((u32)(r_esi*4+0xaad720u));
    /* 0054eca5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054eca6: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x54ecabu); f_006ea71c();
    /* 0054ecab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054ecac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ecae: je 0x54ecfa */ if (fZ) goto L_0054ecfa;
L_0054ecb0:; BB(0x0054ecb0);
    /* 0054ecb0: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ecb2: je 0x54ecfa */ if (fZ) goto L_0054ecfa;
L_0054ecb4:; BB(0x0054ecb4);
    /* 0054ecb4: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0054ecb8: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0054ecbc: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ecbe: jle 0x54ecfa */ if ((fZ||fS!=fO)) goto L_0054ecfa;
L_0054ecc0:; BB(0x0054ecc0);
    /* 0054ecc0: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0054ecc3: test edx, 0x2000800 */ {  u32 a = r_edx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ecc9: jne 0x54ecfa */ if (!fZ) goto L_0054ecfa;
L_0054eccb:; BB(0x0054eccb);
    /* 0054eccb: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ecd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054ecd1: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0054ecd3: mov ecx, edi */ r_ecx = r_edi;
    /* 0054ecd5: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x54ecd8u); call_ind(t); }
    /* 0054ecd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ecda: je 0x54ecfa */ if (fZ) goto L_0054ecfa;
L_0054ecdc:; BB(0x0054ecdc);
    /* 0054ecdc: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ece1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054ece2: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0054ece4: mov ecx, edi */ r_ecx = r_edi;
    /* 0054ece6: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x54ece9u); call_ind(t); }
    /* 0054ece9: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0054eceb: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ecee: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0054ecf2: mov ecx, edi */ r_ecx = r_edi;
    /* 0054ecf4: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0054ecf7: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x54ecfau); call_ind(t); }
L_0054ecfa:; BB(0x0054ecfa);
    /* 0054ecfa: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0054ecfd: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ecff: jl 0x54ec9e */ if ((fS!=fO)) goto L_0054ec9e;
L_0054ed01:; BB(0x0054ed01);
    /* 0054ed01: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0054ed05: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
L_0054ed09:; BB(0x0054ed09);
    /* 0054ed09: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed0e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed0f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x54ed14u); f_0050b510();
    /* 0054ed14: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ed17: push 0x1cf */ { u32 v = 0x1cfu; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed1c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054ed1e: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54ed23u); f_007879b8();
    /* 0054ed23: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054ed25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed27: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed29: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54ed2eu); f_00814298();
    /* 0054ed2e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ed31: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0054ed37: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054ed3a: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
    /* 0054ed40: jmp 0x54ef04 */ goto L_0054ef04;
L_0054ed45:; BB(0x0054ed45);
    /* 0054ed45: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ed48: jne 0x54eda1 */ if (!fZ) goto L_0054eda1;
L_0054ed4a:; BB(0x0054ed4a);
    /* 0054ed4a: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0054ed4d: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ed52: jne 0x54ed5f */ if (!fZ) goto L_0054ed5f;
L_0054ed54:; BB(0x0054ed54);
    /* 0054ed54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed58: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054ed5a: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54ed5fu); f_00772b44();
L_0054ed5f:; BB(0x0054ed5f);
    /* 0054ed5f: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 0054ed65: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ed68: jne 0x54ed72 */ if (!fZ) goto L_0054ed72;
L_0054ed6a:; BB(0x0054ed6a);
    /* 0054ed6a: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0054ed6d: jmp 0x54ef04 */ goto L_0054ef04;
L_0054ed72:; BB(0x0054ed72);
    /* 0054ed72: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054ed75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed77: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0054ed7a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054ed7c: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x54ed7fu); call_ind(t); }
    /* 0054ed7f: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0054ed82: mov ebx, dword ptr [ebp + 0xa4] */ r_ebx = R32((u32)(r_ebp+0xa4u));
    /* 0054ed88: and eax, 0xf9dfffff */ {  u32 a = r_eax; u32 b = 0xf9dfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054ed8d: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0054ed90: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 0054ed93: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0054ed96: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 0054ed99: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0054ed9c: jmp 0x54ef04 */ goto L_0054ef04;
L_0054eda1:; BB(0x0054eda1);
    /* 0054eda1: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0054eda4: jmp 0x54ef04 */ goto L_0054ef04;
L_0054eda9:; BB(0x0054eda9);
    /* 0054eda9: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0054edac: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054edb1: jne 0x54edbe */ if (!fZ) goto L_0054edbe;
L_0054edb3:; BB(0x0054edb3);
    /* 0054edb3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054edb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054edb7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054edb9: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54edbeu); f_00772b44();
L_0054edbe:; BB(0x0054edbe);
    /* 0054edbe: push 0x41300000 */ { u32 v = 0x41300000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054edc3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054edc5: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54edcau); f_007aaa30();
    /* 0054edca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054edcc: jne 0x54edd6 */ if (!fZ) goto L_0054edd6;
L_0054edce:; BB(0x0054edce);
    /* 0054edce: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0054edd1: jmp 0x54ef04 */ goto L_0054ef04;
L_0054edd6:; BB(0x0054edd6);
    /* 0054edd6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054edd8: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x54edddu); f_00770738();
    /* 0054eddd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054eddf: je 0x54eee7 */ if (fZ) goto L_0054eee7;
L_0054ede5:; BB(0x0054ede5);
    /* 0054ede5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ede7: push dword ptr [eax + 0x308] */ { u32 v = R32((u32)(r_eax+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054eded: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054edef: push dword ptr [eax + 0x304] */ { u32 v = R32((u32)(r_eax+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054edf5: push dword ptr [eax + 0x300] */ { u32 v = R32((u32)(r_eax+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054edfb: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x54ee00u); f_00771c8c();
    /* 0054ee00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ee02: je 0x54eee7 */ if (fZ) goto L_0054eee7;
L_0054ee08:; BB(0x0054ee08);
    /* 0054ee08: push dword ptr [ebp + 0x308] */ { u32 v = R32((u32)(r_ebp+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054ee0e: push dword ptr [ebp + 0x304] */ { u32 v = R32((u32)(r_ebp+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054ee14: mov eax, 1 */ r_eax = 0x1u;
    /* 0054ee19: push dword ptr [ebp + 0x300] */ { u32 v = R32((u32)(r_ebp+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054ee1f: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0054ee26: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054ee28: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x54ee2du); f_00771f1c();
    /* 0054ee2d: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0054ee31: mov eax, dword ptr [ebp + 0x2a4] */ r_eax = R32((u32)(r_ebp+0x2a4u));
    /* 0054ee37: mov ebx, dword ptr [ebp + 0x2a8] */ r_ebx = R32((u32)(r_ebp+0x2a8u));
    /* 0054ee3d: mov esi, dword ptr [ebp + 0x2ac] */ r_esi = R32((u32)(r_ebp+0x2acu));
    /* 0054ee43: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0054ee49: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0054ee4d: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0054ee51: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0054ee55: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x54ee5au); f_0082f9c4();
    /* 0054ee5a: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0054ee5e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0054ee60: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0054ee64: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0054ee66: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0054ee68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054ee69: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0054ee6c: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x54ee71u); f_0082dc9c();
    /* 0054ee71: fld dword ptr [0x924634] */ FPUSH(R_F32((u32)(0x924634u)));
    /* 0054ee77: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0054ee79: fmul dword ptr [0xa73954] */ ST(0) = ST(0) * R_F32((u32)(0xa73954u));
    /* 0054ee7f: mov eax, dword ptr [ebp + 0x298] */ r_eax = R32((u32)(r_ebp+0x298u));
    /* 0054ee85: mov edx, dword ptr [ebp + 0x29c] */ r_edx = R32((u32)(r_ebp+0x29cu));
    /* 0054ee8b: mov ebx, dword ptr [ebp + 0x2a0] */ r_ebx = R32((u32)(r_ebp+0x2a0u));
    /* 0054ee91: mov esi, dword ptr [ebp + 0x2a4] */ r_esi = R32((u32)(r_ebp+0x2a4u));
    /* 0054ee97: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ee9a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0054ee9d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054ee9f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0054eea3: mov eax, dword ptr [ebp + 0x2a8] */ r_eax = R32((u32)(r_ebp+0x2a8u));
    /* 0054eea9: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0054eead: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0054eeb1: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0054eeb5: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0054eeb9: mov eax, dword ptr [ebp + 0x2ac] */ r_eax = R32((u32)(r_ebp+0x2acu));
    /* 0054eebf: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0054eec3: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x54eec8u); f_00771f5c();
    /* 0054eec8: push 0x1ce */ { u32 v = 0x1ceu; r_esp -= 4; W32(r_esp, v); }
    /* 0054eecd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054eecf: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54eed4u); f_007879b8();
    /* 0054eed4: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0054eed7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054eed9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054eeda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054eedb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054eedc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054eedd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54eee2u); f_00814298();
    /* 0054eee2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054eee5: jmp 0x54eef6 */ goto L_0054eef6;
L_0054eee7:; BB(0x0054eee7);
    /* 0054eee7: mov eax, 2 */ r_eax = 0x2u;
    /* 0054eeec: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0054eef3: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
L_0054eef6:; BB(0x0054eef6);
    /* 0054eef6: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054eefb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054eefc: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x54ef01u); f_0050b510();
    /* 0054ef01: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054ef04:; BB(0x0054ef04);
    /* 0054ef04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ef06: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ef08: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054ef0d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ef0e: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x54ef13u); f_00805608();
    /* 0054ef13: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054ef16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054ef17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054ef18: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054ef19: ret  */ FN_RET(0x0054eae4); r_esp += 4; return;
}

void f_0054ef1c(void) /* sub_54EF1C */
{
    FN_ENTER(0x0054ef1c);
    /* 0054ef1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054ef1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054ef1e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ef1f: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054ef22: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0054ef24: movzx eax, word ptr [ebx + 0x340] */ r_eax = (u32)R16((u32)(r_ebx+0x340u));
    /* 0054ef2b: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ef30: jl 0x54ef61 */ if ((fS!=fO)) goto L_0054ef61;
L_0054ef32:; BB(0x0054ef32);
    /* 0054ef32: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ef37: jge 0x54ef4a */ if ((fS==fO)) goto L_0054ef4a;
L_0054ef39:; BB(0x0054ef39);
    /* 0054ef39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ef3a: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x54ef3fu); f_00786b3c();
    /* 0054ef3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054ef40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ef41: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054ef43: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54ef48u); f_007706b0();
    /* 0054ef48: jmp 0x54ef8d */ goto L_0054ef8d;
L_0054ef4a:; BB(0x0054ef4a);
    /* 0054ef4a: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0054ef4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ef51: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 0054ef58: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054ef5a: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54ef5fu); f_007706b0();
    /* 0054ef5f: jmp 0x54ef8d */ goto L_0054ef8d;
L_0054ef61:; BB(0x0054ef61);
    /* 0054ef61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ef62: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x54ef67u); f_0068d5a8();
    /* 0054ef67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054ef68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ef6a: je 0x54ef84 */ if (fZ) goto L_0054ef84;
L_0054ef6c:; BB(0x0054ef6c);
    /* 0054ef6c: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0054ef72: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ef78: jne 0x54ef84 */ if (!fZ) goto L_0054ef84;
L_0054ef7a:; BB(0x0054ef7a);
    /* 0054ef7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ef7b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054ef7d: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54ef82u); f_007706b0();
    /* 0054ef82: jmp 0x54ef8d */ goto L_0054ef8d;
L_0054ef84:; BB(0x0054ef84);
    /* 0054ef84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ef86: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054ef88: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54ef8du); f_007706b0();
L_0054ef8d:; BB(0x0054ef8d);
    /* 0054ef8d: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 0054ef93: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0054ef96: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054ef99: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0054ef9c: mov ebp, dword ptr [ebx + 0x30] */ r_ebp = R32((u32)(r_ebx+0x30u));
    /* 0054ef9f: and ebp, 0xf9fbffff */ {  u32 a = r_ebp; u32 b = 0xf9fbffffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0054efa5: mov dword ptr [ebx + 0x30], ebp */ W32((u32)(r_ebx+0x30u), r_ebp);
    /* 0054efa8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054efaa: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54efafu); f_007aa094();
    /* 0054efaf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054efb1: push dword ptr [ebx + 0x3a4] */ { u32 v = R32((u32)(r_ebx+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054efb7: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x54efbcu); f_007a8cb8();
    /* 0054efbc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054efbf: mov dword ptr [ebx + 0x3a4], eax */ W32((u32)(r_ebx+0x3a4u), r_eax);
    /* 0054efc5: movsx eax, word ptr [ebx + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x330u));
    /* 0054efcc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054efce: je 0x54f1c6 */ if (fZ) goto L_0054f1c6;
L_0054efd4:; BB(0x0054efd4);
    /* 0054efd4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054efd7: jne 0x54f181 */ if (!fZ) goto L_0054f181;
L_0054efdd:; BB(0x0054efdd);
    /* 0054efdd: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0054efe0: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054efe5: jne 0x54eff2 */ if (!fZ) goto L_0054eff2;
L_0054efe7:; BB(0x0054efe7);
    /* 0054efe7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054efe9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054efeb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054efed: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54eff2u); f_00772b44();
L_0054eff2:; BB(0x0054eff2);
    /* 0054eff2: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054eff7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054eff9: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54effeu); f_007aaa30();
    /* 0054effe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f000: je 0x54f0cb */ if (fZ) goto L_0054f0cb;
L_0054f006:; BB(0x0054f006);
    /* 0054f006: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f008: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x54f00du); f_00770738();
    /* 0054f00d: mov ebp, eax */ r_ebp = r_eax;
    /* 0054f00f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f011: je 0x54f0cb */ if (fZ) goto L_0054f0cb;
L_0054f017:; BB(0x0054f017);
    /* 0054f017: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f01c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f01d: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0054f020: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054f022: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x54f025u); call_ind(t); }
    /* 0054f025: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f027: je 0x54f0cb */ if (fZ) goto L_0054f0cb;
L_0054f02d:; BB(0x0054f02d);
    /* 0054f02d: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f032: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f033: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0054f036: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054f038: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x54f03bu); call_ind(t); }
    /* 0054f03b: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0054f03f: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0054f042: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f045: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0054f049: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0054f04d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054f04f: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0054f052: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x54f055u); call_ind(t); }
    /* 0054f055: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0054f059: movsx edx, word ptr [ebx + 0x390] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x390u));
    /* 0054f060: movsx ebp, word ptr [ebx + 0x392] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+0x392u));
    /* 0054f067: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0054f06b: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0054f06f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0054f071: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0054f075: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0054f07a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054f07f: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0054f083: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0054f087: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0054f08b: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0054f08f: movsx eax, word ptr [esp + 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x30u));
    /* 0054f094: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f096: jl 0x54f09a */ if ((fS!=fO)) goto L_0054f09a;
L_0054f098:; BB(0x0054f098);
    /* 0054f098: mov ebp, eax */ r_ebp = r_eax;
L_0054f09a:; BB(0x0054f09a);
    /* 0054f09a: mov word ptr [ebx + 0x390], bp */ W16((u32)(r_ebx+0x390u), (u16)r_ebp);
    /* 0054f0a1: mov dword ptr [ebx + 0x388], 0x10e */ W32((u32)(r_ebx+0x388u), 0x10eu);
    /* 0054f0ab: push 0x20c */ { u32 v = 0x20cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f0b0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f0b2: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54f0b7u); f_007879b8();
    /* 0054f0b7: lea ebp, [ebx + 0x300] */ r_ebp = (u32)(r_ebx+0x300u);
    /* 0054f0bd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054f0bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f0c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f0c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054f0c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f0c3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54f0c8u); f_00814298();
    /* 0054f0c8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054f0cb:; BB(0x0054f0cb);
    /* 0054f0cb: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0054f0d1: fcom dword ptr [0x924624] */ fx_compare(ST(0), R_F32((u32)(0x924624u))); 
    /* 0054f0d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054f0d9: mov edx, dword ptr [ebx + 0xc0] */ r_edx = R32((u32)(r_ebx+0xc0u));
    /* 0054f0df: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054f0e0: jb 0x54f157 */ if (fC) goto L_0054f157;
L_0054f0e2:; BB(0x0054f0e2);
    /* 0054f0e2: fcomp dword ptr [0xa73958] */ fx_compare(ST(0), R_F32((u32)(0xa73958u))); FPOP();
    /* 0054f0e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054f0ea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054f0eb: jbe 0x54f0f2 */ if ((fC||fZ)) goto L_0054f0f2;
L_0054f0ed:; BB(0x0054f0ed);
    /* 0054f0ed: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f0f0: jmp 0x54f15c */ goto L_0054f15c;
L_0054f0f2:; BB(0x0054f0f2);
    /* 0054f0f2: mov ecx, dword ptr [0xa73988] */ r_ecx = R32((u32)(0xa73988u));
    /* 0054f0f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f0f9: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x54f0feu); f_00579de0();
    /* 0054f0fe: mov edi, eax */ r_edi = r_eax;
    /* 0054f100: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f102: je 0x54f152 */ if (fZ) goto L_0054f152;
L_0054f104:; BB(0x0054f104);
    /* 0054f104: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x54f109u); f_0082d7b0();
    /* 0054f109: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054f10b: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x54f110u); f_00830cd8();
    /* 0054f110: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f113: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054f115: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x54f11au); f_0082d838();
    /* 0054f11a: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0054f11d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054f11f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x54f124u); f_0082d8bc();
    /* 0054f124: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0054f127: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f129: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f12a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054f12c: mov edx, edi */ r_edx = r_edi;
    /* 0054f12e: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x54f133u); f_0082f940();
    /* 0054f133: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x54f138u); f_0082da80();
    /* 0054f138: mov ecx, dword ptr [ebx + 0x3d0] */ r_ecx = R32((u32)(r_ebx+0x3d0u));
    /* 0054f13e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f140: je 0x54f15c */ if (fZ) goto L_0054f15c;
L_0054f142:; BB(0x0054f142);
    /* 0054f142: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 0054f145: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0054f149: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f14a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0054f14c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054f14d: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x54f150u); call_ind(t); }
    /* 0054f150: jmp 0x54f15c */ goto L_0054f15c;
L_0054f152:; BB(0x0054f152);
    /* 0054f152: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f155: jmp 0x54f15c */ goto L_0054f15c;
L_0054f157:; BB(0x0054f157);
    /* 0054f157: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054f159: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
L_0054f15c:; BB(0x0054f15c);
    /* 0054f15c: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
    /* 0054f162: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f165: je 0x54f1fa */ if (fZ) goto L_0054f1fa;
L_0054f16b:; BB(0x0054f16b);
    /* 0054f16b: add word ptr [ebx + 0x386], 1 */ { u32 ad = (u32)(r_ebx+0x386u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0054f173: mov eax, 2 */ r_eax = 0x2u;
    /* 0054f178: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0054f17f: jmp 0x54f1fa */ goto L_0054f1fa;
L_0054f181:; BB(0x0054f181);
    /* 0054f181: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f184: jne 0x54f1c1 */ if (!fZ) goto L_0054f1c1;
L_0054f186:; BB(0x0054f186);
    /* 0054f186: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f188: call 0x54ea78 */ r_esp -= 4; W32(r_esp, 0x54f18du); f_0054ea78();
    /* 0054f18d: movsx eax, word ptr [ebx + 0x386] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x386u));
    /* 0054f194: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f197: jl 0x54f1b1 */ if ((fS!=fO)) goto L_0054f1b1;
L_0054f199:; BB(0x0054f199);
    /* 0054f199: mov edx, dword ptr [ebx + 0x37c] */ r_edx = R32((u32)(r_ebx+0x37cu));
    /* 0054f19f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054f1a1: mov word ptr [ebx + 0x386], ax */ W16((u32)(r_ebx+0x386u), (u16)r_eax);
    /* 0054f1a8: and edx, 0xfffffff7 */ {  u32 a = r_edx; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054f1ab: mov dword ptr [ebx + 0x37c], edx */ W32((u32)(r_ebx+0x37cu), r_edx);
L_0054f1b1:; BB(0x0054f1b1);
    /* 0054f1b1: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0054f1b4: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054f1b9: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0054f1bc: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f1bf: jmp 0x54f1fa */ goto L_0054f1fa;
L_0054f1c1:; BB(0x0054f1c1);
    /* 0054f1c1: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f1c4: jmp 0x54f1fa */ goto L_0054f1fa;
L_0054f1c6:; BB(0x0054f1c6);
    /* 0054f1c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f1c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f1ca: mov eax, 1 */ r_eax = 0x1u;
    /* 0054f1cf: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0054f1d6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f1d8: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54f1ddu); f_00772b44();
    /* 0054f1dd: push 0x1cd */ { u32 v = 0x1cdu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f1e2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f1e4: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54f1e9u); f_007879b8();
    /* 0054f1e9: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f1ec: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054f1ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f1ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f1f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054f1f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f1f2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54f1f7u); f_00814298();
    /* 0054f1f7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054f1fa:; BB(0x0054f1fa);
    /* 0054f1fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f1fc: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x54f201u); f_007b6894();
    /* 0054f201: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f203: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x54f208u); f_007b798c();
    /* 0054f208: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f20a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f20c: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f211: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054f212: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x54f217u); f_00805608();
    /* 0054f217: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f219: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f21a: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x54f21fu); f_006946a8();
    /* 0054f21f: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054f222: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054f223: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054f224: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054f225: ret  */ FN_RET(0x0054ef1c); r_esp += 4; return;
}

